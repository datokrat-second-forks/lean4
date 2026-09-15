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
uint8_t v___x_13565__boxed_355_; lean_object* v_res_356_; 
v___x_13565__boxed_355_ = lean_unbox(v___x_346_);
v_res_356_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__0(v_params_342_, v_resultType_343_, v_name_344_, v_levelParams_345_, v___x_13565__boxed_355_, v_a_347_, v___y_348_, v___y_349_, v___y_350_, v___y_351_, v___y_352_, v___y_353_);
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
uint8_t v___x_13770__boxed_469_; lean_object* v_res_470_; 
v___x_13770__boxed_469_ = lean_unbox(v___x_457_);
v_res_470_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__1(v_params_455_, v_levelParams_456_, v___x_13770__boxed_469_, v_name_458_, v_argName_459_, v_argType_460_, v_resultType_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_);
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
uint8_t v___x_13800__boxed_497_; lean_object* v_res_498_; 
v___x_13800__boxed_497_ = lean_unbox(v___x_488_);
v_res_498_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2(v___x_13800__boxed_497_, v_a_489_, v___y_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_);
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
uint8_t v___x_13869__boxed_655_; lean_object* v_res_656_; 
v___x_13869__boxed_655_ = lean_unbox(v___x_647_);
v_res_656_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3(v___f_637_, v_ctorName_638_, v_fieldName_639_, v___x_640_, v___x_641_, v_projName_642_, v___x_643_, v_params_644_, v_equivName_645_, v_levelParams_646_, v___x_13869__boxed_655_, v___y_648_, v___y_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_);
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0(lean_object* v_msg_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_){
_start:
{
lean_object* v___f_998_; lean_object* v___f_999_; lean_object* v___f_1000_; lean_object* v___f_1001_; lean_object* v___f_1002_; lean_object* v___f_1003_; lean_object* v___f_1004_; lean_object* v___f_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v_toApplicative_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1101_; 
v___f_998_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__0));
v___f_999_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__1));
v___f_1000_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__2));
v___f_1001_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__3));
v___f_1002_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__4));
v___f_1003_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_1003_, 0, v___f_1002_);
lean_closure_set(v___f_1003_, 1, v___f_1001_);
v___f_1004_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_1004_, 0, v___f_1001_);
v___f_1005_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__5));
v___x_1006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1006_, 0, v___f_998_);
lean_ctor_set(v___x_1006_, 1, v___f_999_);
v___x_1007_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1007_, 0, v___x_1006_);
lean_ctor_set(v___x_1007_, 1, v___f_1000_);
lean_ctor_set(v___x_1007_, 2, v___f_1003_);
lean_ctor_set(v___x_1007_, 3, v___f_1004_);
lean_ctor_set(v___x_1007_, 4, v___f_1005_);
v___x_1008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1008_, 0, v___x_1007_);
lean_ctor_set(v___x_1008_, 1, v___f_1001_);
v___x_1009_ = l_StateRefT_x27_instMonad___redArg(v___x_1008_);
v_toApplicative_1010_ = lean_ctor_get(v___x_1009_, 0);
v_isSharedCheck_1101_ = !lean_is_exclusive(v___x_1009_);
if (v_isSharedCheck_1101_ == 0)
{
lean_object* v_unused_1102_; 
v_unused_1102_ = lean_ctor_get(v___x_1009_, 1);
lean_dec(v_unused_1102_);
v___x_1012_ = v___x_1009_;
v_isShared_1013_ = v_isSharedCheck_1101_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_toApplicative_1010_);
lean_dec(v___x_1009_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1101_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v_toFunctor_1014_; lean_object* v_toSeq_1015_; lean_object* v_toSeqLeft_1016_; lean_object* v_toSeqRight_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1099_; 
v_toFunctor_1014_ = lean_ctor_get(v_toApplicative_1010_, 0);
v_toSeq_1015_ = lean_ctor_get(v_toApplicative_1010_, 2);
v_toSeqLeft_1016_ = lean_ctor_get(v_toApplicative_1010_, 3);
v_toSeqRight_1017_ = lean_ctor_get(v_toApplicative_1010_, 4);
v_isSharedCheck_1099_ = !lean_is_exclusive(v_toApplicative_1010_);
if (v_isSharedCheck_1099_ == 0)
{
lean_object* v_unused_1100_; 
v_unused_1100_ = lean_ctor_get(v_toApplicative_1010_, 1);
lean_dec(v_unused_1100_);
v___x_1019_ = v_toApplicative_1010_;
v_isShared_1020_ = v_isSharedCheck_1099_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_toSeqRight_1017_);
lean_inc(v_toSeqLeft_1016_);
lean_inc(v_toSeq_1015_);
lean_inc(v_toFunctor_1014_);
lean_dec(v_toApplicative_1010_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1099_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___f_1021_; lean_object* v___f_1022_; lean_object* v___f_1023_; lean_object* v___f_1024_; lean_object* v___x_1025_; lean_object* v___f_1026_; lean_object* v___f_1027_; lean_object* v___f_1028_; lean_object* v___x_1030_; 
v___f_1021_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__6));
v___f_1022_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__7));
lean_inc_ref(v_toFunctor_1014_);
v___f_1023_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1023_, 0, v_toFunctor_1014_);
v___f_1024_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1024_, 0, v_toFunctor_1014_);
v___x_1025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1025_, 0, v___f_1023_);
lean_ctor_set(v___x_1025_, 1, v___f_1024_);
v___f_1026_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1026_, 0, v_toSeqRight_1017_);
v___f_1027_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1027_, 0, v_toSeqLeft_1016_);
v___f_1028_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1028_, 0, v_toSeq_1015_);
if (v_isShared_1020_ == 0)
{
lean_ctor_set(v___x_1019_, 4, v___f_1026_);
lean_ctor_set(v___x_1019_, 3, v___f_1027_);
lean_ctor_set(v___x_1019_, 2, v___f_1028_);
lean_ctor_set(v___x_1019_, 1, v___f_1021_);
lean_ctor_set(v___x_1019_, 0, v___x_1025_);
v___x_1030_ = v___x_1019_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v___x_1025_);
lean_ctor_set(v_reuseFailAlloc_1098_, 1, v___f_1021_);
lean_ctor_set(v_reuseFailAlloc_1098_, 2, v___f_1028_);
lean_ctor_set(v_reuseFailAlloc_1098_, 3, v___f_1027_);
lean_ctor_set(v_reuseFailAlloc_1098_, 4, v___f_1026_);
v___x_1030_ = v_reuseFailAlloc_1098_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
lean_object* v___x_1032_; 
if (v_isShared_1013_ == 0)
{
lean_ctor_set(v___x_1012_, 1, v___f_1022_);
lean_ctor_set(v___x_1012_, 0, v___x_1030_);
v___x_1032_ = v___x_1012_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1097_; 
v_reuseFailAlloc_1097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1097_, 0, v___x_1030_);
lean_ctor_set(v_reuseFailAlloc_1097_, 1, v___f_1022_);
v___x_1032_ = v_reuseFailAlloc_1097_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
lean_object* v___x_1033_; lean_object* v_toApplicative_1034_; lean_object* v___x_1036_; uint8_t v_isShared_1037_; uint8_t v_isSharedCheck_1095_; 
v___x_1033_ = l_StateRefT_x27_instMonad___redArg(v___x_1032_);
v_toApplicative_1034_ = lean_ctor_get(v___x_1033_, 0);
v_isSharedCheck_1095_ = !lean_is_exclusive(v___x_1033_);
if (v_isSharedCheck_1095_ == 0)
{
lean_object* v_unused_1096_; 
v_unused_1096_ = lean_ctor_get(v___x_1033_, 1);
lean_dec(v_unused_1096_);
v___x_1036_ = v___x_1033_;
v_isShared_1037_ = v_isSharedCheck_1095_;
goto v_resetjp_1035_;
}
else
{
lean_inc(v_toApplicative_1034_);
lean_dec(v___x_1033_);
v___x_1036_ = lean_box(0);
v_isShared_1037_ = v_isSharedCheck_1095_;
goto v_resetjp_1035_;
}
v_resetjp_1035_:
{
lean_object* v_toFunctor_1038_; lean_object* v_toSeq_1039_; lean_object* v_toSeqLeft_1040_; lean_object* v_toSeqRight_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1093_; 
v_toFunctor_1038_ = lean_ctor_get(v_toApplicative_1034_, 0);
v_toSeq_1039_ = lean_ctor_get(v_toApplicative_1034_, 2);
v_toSeqLeft_1040_ = lean_ctor_get(v_toApplicative_1034_, 3);
v_toSeqRight_1041_ = lean_ctor_get(v_toApplicative_1034_, 4);
v_isSharedCheck_1093_ = !lean_is_exclusive(v_toApplicative_1034_);
if (v_isSharedCheck_1093_ == 0)
{
lean_object* v_unused_1094_; 
v_unused_1094_ = lean_ctor_get(v_toApplicative_1034_, 1);
lean_dec(v_unused_1094_);
v___x_1043_ = v_toApplicative_1034_;
v_isShared_1044_ = v_isSharedCheck_1093_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_toSeqRight_1041_);
lean_inc(v_toSeqLeft_1040_);
lean_inc(v_toSeq_1039_);
lean_inc(v_toFunctor_1038_);
lean_dec(v_toApplicative_1034_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1093_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
lean_object* v___f_1045_; lean_object* v___f_1046_; lean_object* v___f_1047_; lean_object* v___f_1048_; lean_object* v___x_1049_; lean_object* v___f_1050_; lean_object* v___f_1051_; lean_object* v___f_1052_; lean_object* v___x_1054_; 
v___f_1045_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__8));
v___f_1046_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__9));
lean_inc_ref(v_toFunctor_1038_);
v___f_1047_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1047_, 0, v_toFunctor_1038_);
v___f_1048_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1048_, 0, v_toFunctor_1038_);
v___x_1049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1049_, 0, v___f_1047_);
lean_ctor_set(v___x_1049_, 1, v___f_1048_);
v___f_1050_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1050_, 0, v_toSeqRight_1041_);
v___f_1051_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1051_, 0, v_toSeqLeft_1040_);
v___f_1052_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1052_, 0, v_toSeq_1039_);
if (v_isShared_1044_ == 0)
{
lean_ctor_set(v___x_1043_, 4, v___f_1050_);
lean_ctor_set(v___x_1043_, 3, v___f_1051_);
lean_ctor_set(v___x_1043_, 2, v___f_1052_);
lean_ctor_set(v___x_1043_, 1, v___f_1045_);
lean_ctor_set(v___x_1043_, 0, v___x_1049_);
v___x_1054_ = v___x_1043_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v___x_1049_);
lean_ctor_set(v_reuseFailAlloc_1092_, 1, v___f_1045_);
lean_ctor_set(v_reuseFailAlloc_1092_, 2, v___f_1052_);
lean_ctor_set(v_reuseFailAlloc_1092_, 3, v___f_1051_);
lean_ctor_set(v_reuseFailAlloc_1092_, 4, v___f_1050_);
v___x_1054_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
lean_object* v___x_1056_; 
if (v_isShared_1037_ == 0)
{
lean_ctor_set(v___x_1036_, 1, v___f_1046_);
lean_ctor_set(v___x_1036_, 0, v___x_1054_);
v___x_1056_ = v___x_1036_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v___x_1054_);
lean_ctor_set(v_reuseFailAlloc_1091_, 1, v___f_1046_);
v___x_1056_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
lean_object* v___x_1057_; lean_object* v_toApplicative_1058_; lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1089_; 
v___x_1057_ = l_StateRefT_x27_instMonad___redArg(v___x_1056_);
v_toApplicative_1058_ = lean_ctor_get(v___x_1057_, 0);
v_isSharedCheck_1089_ = !lean_is_exclusive(v___x_1057_);
if (v_isSharedCheck_1089_ == 0)
{
lean_object* v_unused_1090_; 
v_unused_1090_ = lean_ctor_get(v___x_1057_, 1);
lean_dec(v_unused_1090_);
v___x_1060_ = v___x_1057_;
v_isShared_1061_ = v_isSharedCheck_1089_;
goto v_resetjp_1059_;
}
else
{
lean_inc(v_toApplicative_1058_);
lean_dec(v___x_1057_);
v___x_1060_ = lean_box(0);
v_isShared_1061_ = v_isSharedCheck_1089_;
goto v_resetjp_1059_;
}
v_resetjp_1059_:
{
lean_object* v_toFunctor_1062_; lean_object* v_toSeq_1063_; lean_object* v_toSeqLeft_1064_; lean_object* v_toSeqRight_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1087_; 
v_toFunctor_1062_ = lean_ctor_get(v_toApplicative_1058_, 0);
v_toSeq_1063_ = lean_ctor_get(v_toApplicative_1058_, 2);
v_toSeqLeft_1064_ = lean_ctor_get(v_toApplicative_1058_, 3);
v_toSeqRight_1065_ = lean_ctor_get(v_toApplicative_1058_, 4);
v_isSharedCheck_1087_ = !lean_is_exclusive(v_toApplicative_1058_);
if (v_isSharedCheck_1087_ == 0)
{
lean_object* v_unused_1088_; 
v_unused_1088_ = lean_ctor_get(v_toApplicative_1058_, 1);
lean_dec(v_unused_1088_);
v___x_1067_ = v_toApplicative_1058_;
v_isShared_1068_ = v_isSharedCheck_1087_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_toSeqRight_1065_);
lean_inc(v_toSeqLeft_1064_);
lean_inc(v_toSeq_1063_);
lean_inc(v_toFunctor_1062_);
lean_dec(v_toApplicative_1058_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1087_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___f_1069_; lean_object* v___f_1070_; lean_object* v___f_1071_; lean_object* v___f_1072_; lean_object* v___x_1073_; lean_object* v___f_1074_; lean_object* v___f_1075_; lean_object* v___f_1076_; lean_object* v___x_1078_; 
v___f_1069_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__10));
v___f_1070_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__11));
lean_inc_ref(v_toFunctor_1062_);
v___f_1071_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1071_, 0, v_toFunctor_1062_);
v___f_1072_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1072_, 0, v_toFunctor_1062_);
v___x_1073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1073_, 0, v___f_1071_);
lean_ctor_set(v___x_1073_, 1, v___f_1072_);
v___f_1074_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1074_, 0, v_toSeqRight_1065_);
v___f_1075_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1075_, 0, v_toSeqLeft_1064_);
v___f_1076_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1076_, 0, v_toSeq_1063_);
if (v_isShared_1068_ == 0)
{
lean_ctor_set(v___x_1067_, 4, v___f_1074_);
lean_ctor_set(v___x_1067_, 3, v___f_1075_);
lean_ctor_set(v___x_1067_, 2, v___f_1076_);
lean_ctor_set(v___x_1067_, 1, v___f_1069_);
lean_ctor_set(v___x_1067_, 0, v___x_1073_);
v___x_1078_ = v___x_1067_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v___x_1073_);
lean_ctor_set(v_reuseFailAlloc_1086_, 1, v___f_1069_);
lean_ctor_set(v_reuseFailAlloc_1086_, 2, v___f_1076_);
lean_ctor_set(v_reuseFailAlloc_1086_, 3, v___f_1075_);
lean_ctor_set(v_reuseFailAlloc_1086_, 4, v___f_1074_);
v___x_1078_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
lean_object* v___x_1080_; 
if (v_isShared_1061_ == 0)
{
lean_ctor_set(v___x_1060_, 1, v___f_1070_);
lean_ctor_set(v___x_1060_, 0, v___x_1078_);
v___x_1080_ = v___x_1060_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v___x_1078_);
lean_ctor_set(v_reuseFailAlloc_1085_, 1, v___f_1070_);
v___x_1080_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_10674__overap_1083_; lean_object* v___x_1084_; 
v___x_1081_ = lean_box(0);
v___x_1082_ = l_instInhabitedOfMonad___redArg(v___x_1080_, v___x_1081_);
v___x_10674__overap_1083_ = lean_panic_fn_borrowed(v___x_1082_, v_msg_990_);
lean_dec(v___x_1082_);
lean_inc(v___y_996_);
lean_inc_ref(v___y_995_);
lean_inc(v___y_994_);
lean_inc_ref(v___y_993_);
lean_inc(v___y_992_);
lean_inc_ref(v___y_991_);
v___x_1084_ = lean_apply_7(v___x_10674__overap_1083_, v___y_991_, v___y_992_, v___y_993_, v___y_994_, v___y_995_, v___y_996_, lean_box(0));
return v___x_1084_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___boxed(lean_object* v_msg_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_){
_start:
{
lean_object* v_res_1111_; 
v_res_1111_ = l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0(v_msg_1103_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_);
lean_dec(v___y_1109_);
lean_dec_ref(v___y_1108_);
lean_dec(v___y_1107_);
lean_dec_ref(v___y_1106_);
lean_dec(v___y_1105_);
lean_dec_ref(v___y_1104_);
return v_res_1111_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1113_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__0));
v___x_1114_ = l_Lean_stringToMessageData(v___x_1113_);
return v___x_1114_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1116_; lean_object* v___x_1117_; 
v___x_1116_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__2));
v___x_1117_ = l_Lean_stringToMessageData(v___x_1116_);
return v___x_1117_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7(void){
_start:
{
lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; 
v___x_1121_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__6));
v___x_1122_ = lean_unsigned_to_nat(11u);
v___x_1123_ = lean_unsigned_to_nat(115u);
v___x_1124_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__5));
v___x_1125_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__4));
v___x_1126_ = l_mkPanicMessageWithDecl(v___x_1125_, v___x_1124_, v___x_1123_, v___x_1122_, v___x_1121_);
return v___x_1126_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0(lean_object* v_constName_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_){
_start:
{
lean_object* v___x_1143_; lean_object* v_env_1144_; uint8_t v___x_1145_; lean_object* v___x_1146_; 
v___x_1143_ = lean_st_ref_get(v___y_1133_);
v_env_1144_ = lean_ctor_get(v___x_1143_, 0);
lean_inc_ref(v_env_1144_);
lean_dec(v___x_1143_);
v___x_1145_ = 0;
lean_inc(v_constName_1127_);
v___x_1146_ = l_Lean_Environment_findAsync_x3f(v_env_1144_, v_constName_1127_, v___x_1145_);
if (lean_obj_tag(v___x_1146_) == 1)
{
lean_object* v_val_1147_; uint8_t v_kind_1148_; 
v_val_1147_ = lean_ctor_get(v___x_1146_, 0);
lean_inc(v_val_1147_);
lean_dec_ref_known(v___x_1146_, 1);
v_kind_1148_ = lean_ctor_get_uint8(v_val_1147_, sizeof(void*)*3);
if (v_kind_1148_ == 0)
{
lean_object* v___x_1149_; 
v___x_1149_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_1147_);
if (lean_obj_tag(v___x_1149_) == 1)
{
lean_object* v_val_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1157_; 
lean_dec(v_constName_1127_);
v_val_1150_ = lean_ctor_get(v___x_1149_, 0);
v_isSharedCheck_1157_ = !lean_is_exclusive(v___x_1149_);
if (v_isSharedCheck_1157_ == 0)
{
v___x_1152_ = v___x_1149_;
v_isShared_1153_ = v_isSharedCheck_1157_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_val_1150_);
lean_dec(v___x_1149_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1157_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
lean_object* v___x_1155_; 
if (v_isShared_1153_ == 0)
{
lean_ctor_set_tag(v___x_1152_, 0);
v___x_1155_ = v___x_1152_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v_val_1150_);
v___x_1155_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
return v___x_1155_;
}
}
}
else
{
lean_object* v___x_1158_; lean_object* v___x_1159_; 
lean_dec_ref(v___x_1149_);
v___x_1158_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7);
v___x_1159_ = l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0(v___x_1158_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_);
if (lean_obj_tag(v___x_1159_) == 0)
{
lean_object* v_a_1160_; lean_object* v___x_1162_; uint8_t v_isShared_1163_; uint8_t v_isSharedCheck_1168_; 
v_a_1160_ = lean_ctor_get(v___x_1159_, 0);
v_isSharedCheck_1168_ = !lean_is_exclusive(v___x_1159_);
if (v_isSharedCheck_1168_ == 0)
{
v___x_1162_ = v___x_1159_;
v_isShared_1163_ = v_isSharedCheck_1168_;
goto v_resetjp_1161_;
}
else
{
lean_inc(v_a_1160_);
lean_dec(v___x_1159_);
v___x_1162_ = lean_box(0);
v_isShared_1163_ = v_isSharedCheck_1168_;
goto v_resetjp_1161_;
}
v_resetjp_1161_:
{
if (lean_obj_tag(v_a_1160_) == 0)
{
lean_del_object(v___x_1162_);
goto v___jp_1135_;
}
else
{
lean_object* v_val_1164_; lean_object* v___x_1166_; 
lean_dec(v_constName_1127_);
v_val_1164_ = lean_ctor_get(v_a_1160_, 0);
lean_inc(v_val_1164_);
lean_dec_ref_known(v_a_1160_, 1);
if (v_isShared_1163_ == 0)
{
lean_ctor_set(v___x_1162_, 0, v_val_1164_);
v___x_1166_ = v___x_1162_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v_val_1164_);
v___x_1166_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
return v___x_1166_;
}
}
}
}
else
{
lean_object* v_a_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1176_; 
lean_dec(v_constName_1127_);
v_a_1169_ = lean_ctor_get(v___x_1159_, 0);
v_isSharedCheck_1176_ = !lean_is_exclusive(v___x_1159_);
if (v_isSharedCheck_1176_ == 0)
{
v___x_1171_ = v___x_1159_;
v_isShared_1172_ = v_isSharedCheck_1176_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_a_1169_);
lean_dec(v___x_1159_);
v___x_1171_ = lean_box(0);
v_isShared_1172_ = v_isSharedCheck_1176_;
goto v_resetjp_1170_;
}
v_resetjp_1170_:
{
lean_object* v___x_1174_; 
if (v_isShared_1172_ == 0)
{
v___x_1174_ = v___x_1171_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v_a_1169_);
v___x_1174_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1173_;
}
v_reusejp_1173_:
{
return v___x_1174_;
}
}
}
}
}
else
{
lean_dec(v_val_1147_);
goto v___jp_1135_;
}
}
else
{
lean_dec(v___x_1146_);
goto v___jp_1135_;
}
v___jp_1135_:
{
lean_object* v___x_1136_; uint8_t v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1136_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1);
v___x_1137_ = 0;
v___x_1138_ = l_Lean_MessageData_ofConstName(v_constName_1127_, v___x_1137_);
v___x_1139_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1139_, 0, v___x_1136_);
lean_ctor_set(v___x_1139_, 1, v___x_1138_);
v___x_1140_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3);
v___x_1141_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1139_);
lean_ctor_set(v___x_1141_, 1, v___x_1140_);
v___x_1142_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(v___x_1141_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_);
return v___x_1142_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___boxed(lean_object* v_constName_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_){
_start:
{
lean_object* v_res_1185_; 
v_res_1185_ = l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0(v_constName_1177_, v___y_1178_, v___y_1179_, v___y_1180_, v___y_1181_, v___y_1182_, v___y_1183_);
lean_dec(v___y_1183_);
lean_dec_ref(v___y_1182_);
lean_dec(v___y_1181_);
lean_dec_ref(v___y_1180_);
lean_dec(v___y_1179_);
lean_dec_ref(v___y_1178_);
return v_res_1185_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(lean_object* v_a_1186_, lean_object* v_a_1187_){
_start:
{
if (lean_obj_tag(v_a_1186_) == 0)
{
lean_object* v___x_1188_; 
v___x_1188_ = l_List_reverse___redArg(v_a_1187_);
return v___x_1188_;
}
else
{
lean_object* v_head_1189_; lean_object* v_tail_1190_; lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1199_; 
v_head_1189_ = lean_ctor_get(v_a_1186_, 0);
v_tail_1190_ = lean_ctor_get(v_a_1186_, 1);
v_isSharedCheck_1199_ = !lean_is_exclusive(v_a_1186_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1192_ = v_a_1186_;
v_isShared_1193_ = v_isSharedCheck_1199_;
goto v_resetjp_1191_;
}
else
{
lean_inc(v_tail_1190_);
lean_inc(v_head_1189_);
lean_dec(v_a_1186_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1199_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
lean_object* v___x_1194_; lean_object* v___x_1196_; 
v___x_1194_ = l_Lean_mkLevelParam(v_head_1189_);
if (v_isShared_1193_ == 0)
{
lean_ctor_set(v___x_1192_, 1, v_a_1187_);
lean_ctor_set(v___x_1192_, 0, v___x_1194_);
v___x_1196_ = v___x_1192_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v___x_1194_);
lean_ctor_set(v_reuseFailAlloc_1198_, 1, v_a_1187_);
v___x_1196_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
v_a_1186_ = v_tail_1190_;
v_a_1187_ = v___x_1196_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj(lean_object* v_declName_1200_, lean_object* v_ctorName_1201_, lean_object* v_projName_1202_, lean_object* v_equivName_1203_, lean_object* v_fieldName_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_){
_start:
{
lean_object* v___x_1212_; 
lean_inc(v_declName_1200_);
v___x_1212_ = l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0(v_declName_1200_, v___y_1205_, v___y_1206_, v___y_1207_, v___y_1208_, v___y_1209_, v___y_1210_);
if (lean_obj_tag(v___x_1212_) == 0)
{
lean_object* v_a_1213_; lean_object* v_toConstantVal_1214_; lean_object* v_value_1215_; lean_object* v_levelParams_1216_; lean_object* v_type_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___f_1220_; uint8_t v___x_1221_; lean_object* v___x_1222_; 
v_a_1213_ = lean_ctor_get(v___x_1212_, 0);
lean_inc(v_a_1213_);
lean_dec_ref_known(v___x_1212_, 1);
v_toConstantVal_1214_ = lean_ctor_get(v_a_1213_, 0);
lean_inc_ref(v_toConstantVal_1214_);
v_value_1215_ = lean_ctor_get(v_a_1213_, 1);
lean_inc_ref(v_value_1215_);
lean_dec(v_a_1213_);
v_levelParams_1216_ = lean_ctor_get(v_toConstantVal_1214_, 1);
lean_inc_n(v_levelParams_1216_, 2);
v_type_1217_ = lean_ctor_get(v_toConstantVal_1214_, 2);
lean_inc_ref(v_type_1217_);
lean_dec_ref(v_toConstantVal_1214_);
v___x_1218_ = lean_box(0);
v___x_1219_ = l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(v_levelParams_1216_, v___x_1218_);
v___f_1220_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___boxed), 17, 8);
lean_closure_set(v___f_1220_, 0, v_value_1215_);
lean_closure_set(v___f_1220_, 1, v_declName_1200_);
lean_closure_set(v___f_1220_, 2, v___x_1219_);
lean_closure_set(v___f_1220_, 3, v_levelParams_1216_);
lean_closure_set(v___f_1220_, 4, v_ctorName_1201_);
lean_closure_set(v___f_1220_, 5, v_fieldName_1204_);
lean_closure_set(v___f_1220_, 6, v_projName_1202_);
lean_closure_set(v___f_1220_, 7, v_equivName_1203_);
v___x_1221_ = 0;
v___x_1222_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__8___redArg(v_type_1217_, v___f_1220_, v___x_1221_, v___y_1205_, v___y_1206_, v___y_1207_, v___y_1208_, v___y_1209_, v___y_1210_);
return v___x_1222_;
}
else
{
lean_object* v_a_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1230_; 
lean_dec(v_fieldName_1204_);
lean_dec(v_equivName_1203_);
lean_dec(v_projName_1202_);
lean_dec(v_ctorName_1201_);
lean_dec(v_declName_1200_);
v_a_1223_ = lean_ctor_get(v___x_1212_, 0);
v_isSharedCheck_1230_ = !lean_is_exclusive(v___x_1212_);
if (v_isSharedCheck_1230_ == 0)
{
v___x_1225_ = v___x_1212_;
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
else
{
lean_inc(v_a_1223_);
lean_dec(v___x_1212_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
lean_object* v___x_1228_; 
if (v_isShared_1226_ == 0)
{
v___x_1228_ = v___x_1225_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v_a_1223_);
v___x_1228_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
return v___x_1228_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___boxed(lean_object* v_declName_1231_, lean_object* v_ctorName_1232_, lean_object* v_projName_1233_, lean_object* v_equivName_1234_, lean_object* v_fieldName_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_){
_start:
{
lean_object* v_res_1243_; 
v_res_1243_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj(v_declName_1231_, v_ctorName_1232_, v_projName_1233_, v_equivName_1234_, v_fieldName_1235_, v___y_1236_, v___y_1237_, v___y_1238_, v___y_1239_, v___y_1240_, v___y_1241_);
lean_dec(v___y_1241_);
lean_dec_ref(v___y_1240_);
lean_dec(v___y_1239_);
lean_dec_ref(v___y_1238_);
lean_dec(v___y_1237_);
lean_dec_ref(v___y_1236_);
return v_res_1243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6(lean_object* v_00_u03b1_1244_, lean_object* v_name_1245_, uint8_t v_bi_1246_, lean_object* v_type_1247_, lean_object* v_k_1248_, uint8_t v_kind_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_){
_start:
{
lean_object* v___x_1257_; 
v___x_1257_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg(v_name_1245_, v_bi_1246_, v_type_1247_, v_k_1248_, v_kind_1249_, v___y_1250_, v___y_1251_, v___y_1252_, v___y_1253_, v___y_1254_, v___y_1255_);
return v___x_1257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___boxed(lean_object* v_00_u03b1_1258_, lean_object* v_name_1259_, lean_object* v_bi_1260_, lean_object* v_type_1261_, lean_object* v_k_1262_, lean_object* v_kind_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_){
_start:
{
uint8_t v_bi_boxed_1271_; uint8_t v_kind_boxed_1272_; lean_object* v_res_1273_; 
v_bi_boxed_1271_ = lean_unbox(v_bi_1260_);
v_kind_boxed_1272_ = lean_unbox(v_kind_1263_);
v_res_1273_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6(v_00_u03b1_1258_, v_name_1259_, v_bi_boxed_1271_, v_type_1261_, v_k_1262_, v_kind_boxed_1272_, v___y_1264_, v___y_1265_, v___y_1266_, v___y_1267_, v___y_1268_, v___y_1269_);
lean_dec(v___y_1269_);
lean_dec_ref(v___y_1268_);
lean_dec(v___y_1267_);
lean_dec_ref(v___y_1266_);
lean_dec(v___y_1265_);
lean_dec_ref(v___y_1264_);
return v_res_1273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4(lean_object* v_00_u03b1_1274_, lean_object* v_name_1275_, lean_object* v_type_1276_, lean_object* v_k_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_){
_start:
{
lean_object* v___x_1285_; 
v___x_1285_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg(v_name_1275_, v_type_1276_, v_k_1277_, v___y_1278_, v___y_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_);
return v___x_1285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___boxed(lean_object* v_00_u03b1_1286_, lean_object* v_name_1287_, lean_object* v_type_1288_, lean_object* v_k_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_){
_start:
{
lean_object* v_res_1297_; 
v_res_1297_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4(v_00_u03b1_1286_, v_name_1287_, v_type_1288_, v_k_1289_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_);
lean_dec(v___y_1295_);
lean_dec_ref(v___y_1294_);
lean_dec(v___y_1293_);
lean_dec_ref(v___y_1292_);
lean_dec(v___y_1291_);
lean_dec_ref(v___y_1290_);
return v_res_1297_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7(lean_object* v_00_u03b1_1298_, lean_object* v_msg_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_){
_start:
{
lean_object* v___x_1307_; 
v___x_1307_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(v_msg_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_);
return v___x_1307_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___boxed(lean_object* v_00_u03b1_1308_, lean_object* v_msg_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_){
_start:
{
lean_object* v_res_1317_; 
v_res_1317_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7(v_00_u03b1_1308_, v_msg_1309_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_);
lean_dec(v___y_1315_);
lean_dec_ref(v___y_1314_);
lean_dec(v___y_1313_);
lean_dec_ref(v___y_1312_);
lean_dec(v___y_1311_);
lean_dec_ref(v___y_1310_);
return v_res_1317_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3(lean_object* v_as_1318_, size_t v_i_1319_, size_t v_stop_1320_, lean_object* v_b_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_){
_start:
{
lean_object* v___x_1329_; 
v___x_1329_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(v_as_1318_, v_i_1319_, v_stop_1320_, v_b_1321_, v___y_1324_, v___y_1326_, v___y_1327_);
return v___x_1329_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___boxed(lean_object* v_as_1330_, lean_object* v_i_1331_, lean_object* v_stop_1332_, lean_object* v_b_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_){
_start:
{
size_t v_i_boxed_1341_; size_t v_stop_boxed_1342_; lean_object* v_res_1343_; 
v_i_boxed_1341_ = lean_unbox_usize(v_i_1331_);
lean_dec(v_i_1331_);
v_stop_boxed_1342_ = lean_unbox_usize(v_stop_1332_);
lean_dec(v_stop_1332_);
v_res_1343_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3(v_as_1330_, v_i_boxed_1341_, v_stop_boxed_1342_, v_b_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_);
lean_dec(v___y_1339_);
lean_dec_ref(v___y_1338_);
lean_dec(v___y_1337_);
lean_dec_ref(v___y_1336_);
lean_dec(v___y_1335_);
lean_dec_ref(v___y_1334_);
lean_dec_ref(v_as_1330_);
return v_res_1343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11(lean_object* v_msgData_1344_, lean_object* v_macroStack_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_){
_start:
{
lean_object* v___x_1353_; 
v___x_1353_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg(v_msgData_1344_, v_macroStack_1345_, v___y_1350_);
return v___x_1353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___boxed(lean_object* v_msgData_1354_, lean_object* v_macroStack_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_){
_start:
{
lean_object* v_res_1363_; 
v_res_1363_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11(v_msgData_1354_, v_macroStack_1355_, v___y_1356_, v___y_1357_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_);
lean_dec(v___y_1361_);
lean_dec_ref(v___y_1360_);
lean_dec(v___y_1359_);
lean_dec_ref(v___y_1358_);
lean_dec(v___y_1357_);
lean_dec_ref(v___y_1356_);
return v_res_1363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(lean_object* v_e_1364_, lean_object* v_k_1365_, uint8_t v_cleanupAnnotations_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_){
_start:
{
lean_object* v___f_1374_; uint8_t v___x_1375_; uint8_t v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; 
lean_inc(v___y_1368_);
lean_inc_ref(v___y_1367_);
v___f_1374_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__8___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1374_, 0, v_k_1365_);
lean_closure_set(v___f_1374_, 1, v___y_1367_);
lean_closure_set(v___f_1374_, 2, v___y_1368_);
v___x_1375_ = 1;
v___x_1376_ = 0;
v___x_1377_ = lean_box(0);
v___x_1378_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_1364_, v___x_1375_, v___x_1376_, v___x_1375_, v___x_1376_, v___x_1377_, v___f_1374_, v_cleanupAnnotations_1366_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_);
if (lean_obj_tag(v___x_1378_) == 0)
{
return v___x_1378_;
}
else
{
lean_object* v_a_1379_; lean_object* v___x_1381_; uint8_t v_isShared_1382_; uint8_t v_isSharedCheck_1386_; 
v_a_1379_ = lean_ctor_get(v___x_1378_, 0);
v_isSharedCheck_1386_ = !lean_is_exclusive(v___x_1378_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1381_ = v___x_1378_;
v_isShared_1382_ = v_isSharedCheck_1386_;
goto v_resetjp_1380_;
}
else
{
lean_inc(v_a_1379_);
lean_dec(v___x_1378_);
v___x_1381_ = lean_box(0);
v_isShared_1382_ = v_isSharedCheck_1386_;
goto v_resetjp_1380_;
}
v_resetjp_1380_:
{
lean_object* v___x_1384_; 
if (v_isShared_1382_ == 0)
{
v___x_1384_ = v___x_1381_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v_a_1379_);
v___x_1384_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
return v___x_1384_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg___boxed(lean_object* v_e_1387_, lean_object* v_k_1388_, lean_object* v_cleanupAnnotations_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1397_; lean_object* v_res_1398_; 
v_cleanupAnnotations_boxed_1397_ = lean_unbox(v_cleanupAnnotations_1389_);
v_res_1398_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v_e_1387_, v_k_1388_, v_cleanupAnnotations_boxed_1397_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_);
lean_dec(v___y_1395_);
lean_dec_ref(v___y_1394_);
lean_dec(v___y_1393_);
lean_dec_ref(v___y_1392_);
lean_dec(v___y_1391_);
lean_dec_ref(v___y_1390_);
return v_res_1398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9(lean_object* v_00_u03b1_1399_, lean_object* v_e_1400_, lean_object* v_k_1401_, uint8_t v_cleanupAnnotations_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_){
_start:
{
lean_object* v___x_1410_; 
v___x_1410_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v_e_1400_, v_k_1401_, v_cleanupAnnotations_1402_, v___y_1403_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_);
return v___x_1410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9___boxed(lean_object* v_00_u03b1_1411_, lean_object* v_e_1412_, lean_object* v_k_1413_, lean_object* v_cleanupAnnotations_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1422_; lean_object* v_res_1423_; 
v_cleanupAnnotations_boxed_1422_ = lean_unbox(v_cleanupAnnotations_1414_);
v_res_1423_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9(v_00_u03b1_1411_, v_e_1412_, v_k_1413_, v_cleanupAnnotations_boxed_1422_, v___y_1415_, v___y_1416_, v___y_1417_, v___y_1418_, v___y_1419_, v___y_1420_);
lean_dec(v___y_1420_);
lean_dec_ref(v___y_1419_);
lean_dec(v___y_1418_);
lean_dec_ref(v___y_1417_);
lean_dec(v___y_1416_);
lean_dec_ref(v___y_1415_);
return v_res_1423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0(lean_object* v_x_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_){
_start:
{
lean_object* v___x_1432_; 
lean_inc(v___y_1426_);
lean_inc_ref(v___y_1425_);
v___x_1432_ = lean_apply_7(v_x_1424_, v___y_1425_, v___y_1426_, v___y_1427_, v___y_1428_, v___y_1429_, v___y_1430_, lean_box(0));
return v___x_1432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0___boxed(lean_object* v_x_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_){
_start:
{
lean_object* v_res_1441_; 
v_res_1441_ = l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0(v_x_1433_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_, v___y_1438_, v___y_1439_);
lean_dec(v___y_1435_);
lean_dec_ref(v___y_1434_);
return v_res_1441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(lean_object* v_lctx_1442_, lean_object* v_localInsts_1443_, lean_object* v_x_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_){
_start:
{
lean_object* v___f_1452_; lean_object* v___x_1453_; 
lean_inc(v___y_1446_);
lean_inc_ref(v___y_1445_);
v___f_1452_ = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1452_, 0, v_x_1444_);
lean_closure_set(v___f_1452_, 1, v___y_1445_);
lean_closure_set(v___f_1452_, 2, v___y_1446_);
v___x_1453_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_1442_, v_localInsts_1443_, v___f_1452_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___boxed(lean_object* v_lctx_1462_, lean_object* v_localInsts_1463_, lean_object* v_x_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_){
_start:
{
lean_object* v_res_1472_; 
v_res_1472_ = l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(v_lctx_1462_, v_localInsts_1463_, v_x_1464_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_);
lean_dec(v___y_1470_);
lean_dec_ref(v___y_1469_);
lean_dec(v___y_1468_);
lean_dec_ref(v___y_1467_);
lean_dec(v___y_1466_);
lean_dec_ref(v___y_1465_);
return v_res_1472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10(lean_object* v_00_u03b1_1473_, lean_object* v_lctx_1474_, lean_object* v_localInsts_1475_, lean_object* v_x_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_){
_start:
{
lean_object* v___x_1484_; 
v___x_1484_ = l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(v_lctx_1474_, v_localInsts_1475_, v_x_1476_, v___y_1477_, v___y_1478_, v___y_1479_, v___y_1480_, v___y_1481_, v___y_1482_);
return v___x_1484_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___boxed(lean_object* v_00_u03b1_1485_, lean_object* v_lctx_1486_, lean_object* v_localInsts_1487_, lean_object* v_x_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_){
_start:
{
lean_object* v_res_1496_; 
v_res_1496_ = l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10(v_00_u03b1_1485_, v_lctx_1486_, v_localInsts_1487_, v_x_1488_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_);
lean_dec(v___y_1494_);
lean_dec_ref(v___y_1493_);
lean_dec(v___y_1492_);
lean_dec_ref(v___y_1491_);
lean_dec(v___y_1490_);
lean_dec_ref(v___y_1489_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg(lean_object* v___y_1497_){
_start:
{
lean_object* v___x_1499_; lean_object* v_env_1500_; lean_object* v___x_1501_; lean_object* v_mainModule_1502_; lean_object* v___x_1503_; 
v___x_1499_ = lean_st_ref_get(v___y_1497_);
v_env_1500_ = lean_ctor_get(v___x_1499_, 0);
lean_inc_ref(v_env_1500_);
lean_dec(v___x_1499_);
v___x_1501_ = l_Lean_Environment_header(v_env_1500_);
lean_dec_ref(v_env_1500_);
v_mainModule_1502_ = lean_ctor_get(v___x_1501_, 0);
lean_inc(v_mainModule_1502_);
lean_dec_ref(v___x_1501_);
v___x_1503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1503_, 0, v_mainModule_1502_);
return v___x_1503_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg___boxed(lean_object* v___y_1504_, lean_object* v___y_1505_){
_start:
{
lean_object* v_res_1506_; 
v_res_1506_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg(v___y_1504_);
lean_dec(v___y_1504_);
return v_res_1506_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14(lean_object* v___y_1507_, lean_object* v___y_1508_){
_start:
{
lean_object* v___x_1510_; 
v___x_1510_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg(v___y_1508_);
return v___x_1510_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___boxed(lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_){
_start:
{
lean_object* v_res_1514_; 
v_res_1514_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14(v___y_1511_, v___y_1512_);
lean_dec(v___y_1512_);
lean_dec_ref(v___y_1511_);
return v_res_1514_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___lam__0(lean_object* v___y_1515_, uint8_t v_isExporting_1516_, lean_object* v_a_x3f_1517_){
_start:
{
lean_object* v___x_1519_; lean_object* v_env_1520_; lean_object* v_messages_1521_; lean_object* v_scopes_1522_; lean_object* v_usedQuotCtxts_1523_; lean_object* v_nextMacroScope_1524_; lean_object* v_maxRecDepth_1525_; lean_object* v_ngen_1526_; lean_object* v_auxDeclNGen_1527_; lean_object* v_infoState_1528_; lean_object* v_traceState_1529_; lean_object* v_snapshotTasks_1530_; lean_object* v_prevLinterStates_1531_; lean_object* v_codeQualityEntryTasks_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1543_; 
v___x_1519_ = lean_st_ref_take(v___y_1515_);
v_env_1520_ = lean_ctor_get(v___x_1519_, 0);
v_messages_1521_ = lean_ctor_get(v___x_1519_, 1);
v_scopes_1522_ = lean_ctor_get(v___x_1519_, 2);
v_usedQuotCtxts_1523_ = lean_ctor_get(v___x_1519_, 3);
v_nextMacroScope_1524_ = lean_ctor_get(v___x_1519_, 4);
v_maxRecDepth_1525_ = lean_ctor_get(v___x_1519_, 5);
v_ngen_1526_ = lean_ctor_get(v___x_1519_, 6);
v_auxDeclNGen_1527_ = lean_ctor_get(v___x_1519_, 7);
v_infoState_1528_ = lean_ctor_get(v___x_1519_, 8);
v_traceState_1529_ = lean_ctor_get(v___x_1519_, 9);
v_snapshotTasks_1530_ = lean_ctor_get(v___x_1519_, 10);
v_prevLinterStates_1531_ = lean_ctor_get(v___x_1519_, 11);
v_codeQualityEntryTasks_1532_ = lean_ctor_get(v___x_1519_, 12);
v_isSharedCheck_1543_ = !lean_is_exclusive(v___x_1519_);
if (v_isSharedCheck_1543_ == 0)
{
v___x_1534_ = v___x_1519_;
v_isShared_1535_ = v_isSharedCheck_1543_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1532_);
lean_inc(v_prevLinterStates_1531_);
lean_inc(v_snapshotTasks_1530_);
lean_inc(v_traceState_1529_);
lean_inc(v_infoState_1528_);
lean_inc(v_auxDeclNGen_1527_);
lean_inc(v_ngen_1526_);
lean_inc(v_maxRecDepth_1525_);
lean_inc(v_nextMacroScope_1524_);
lean_inc(v_usedQuotCtxts_1523_);
lean_inc(v_scopes_1522_);
lean_inc(v_messages_1521_);
lean_inc(v_env_1520_);
lean_dec(v___x_1519_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1543_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1539_; 
v___x_1536_ = lean_box(0);
v___x_1537_ = l_Lean_Environment_setExporting(v_env_1520_, v_isExporting_1516_);
if (v_isShared_1535_ == 0)
{
lean_ctor_set(v___x_1534_, 0, v___x_1537_);
v___x_1539_ = v___x_1534_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1542_; 
v_reuseFailAlloc_1542_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1542_, 0, v___x_1537_);
lean_ctor_set(v_reuseFailAlloc_1542_, 1, v_messages_1521_);
lean_ctor_set(v_reuseFailAlloc_1542_, 2, v_scopes_1522_);
lean_ctor_set(v_reuseFailAlloc_1542_, 3, v_usedQuotCtxts_1523_);
lean_ctor_set(v_reuseFailAlloc_1542_, 4, v_nextMacroScope_1524_);
lean_ctor_set(v_reuseFailAlloc_1542_, 5, v_maxRecDepth_1525_);
lean_ctor_set(v_reuseFailAlloc_1542_, 6, v_ngen_1526_);
lean_ctor_set(v_reuseFailAlloc_1542_, 7, v_auxDeclNGen_1527_);
lean_ctor_set(v_reuseFailAlloc_1542_, 8, v_infoState_1528_);
lean_ctor_set(v_reuseFailAlloc_1542_, 9, v_traceState_1529_);
lean_ctor_set(v_reuseFailAlloc_1542_, 10, v_snapshotTasks_1530_);
lean_ctor_set(v_reuseFailAlloc_1542_, 11, v_prevLinterStates_1531_);
lean_ctor_set(v_reuseFailAlloc_1542_, 12, v_codeQualityEntryTasks_1532_);
v___x_1539_ = v_reuseFailAlloc_1542_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
lean_object* v___x_1540_; lean_object* v___x_1541_; 
v___x_1540_ = lean_st_ref_put(v___y_1515_, v___x_1539_);
v___x_1541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1541_, 0, v___x_1536_);
return v___x_1541_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___lam__0___boxed(lean_object* v___y_1544_, lean_object* v_isExporting_1545_, lean_object* v_a_x3f_1546_, lean_object* v___y_1547_){
_start:
{
uint8_t v_isExporting_boxed_1548_; lean_object* v_res_1549_; 
v_isExporting_boxed_1548_ = lean_unbox(v_isExporting_1545_);
v_res_1549_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___lam__0(v___y_1544_, v_isExporting_boxed_1548_, v_a_x3f_1546_);
lean_dec(v_a_x3f_1546_);
lean_dec(v___y_1544_);
return v_res_1549_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(lean_object* v_x_1550_, uint8_t v_isExporting_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_){
_start:
{
lean_object* v___x_1555_; lean_object* v_env_1556_; lean_object* v___x_1557_; uint8_t v_isModule_1558_; 
v___x_1555_ = lean_st_ref_get(v___y_1553_);
v_env_1556_ = lean_ctor_get(v___x_1555_, 0);
lean_inc_ref(v_env_1556_);
lean_dec(v___x_1555_);
v___x_1557_ = l_Lean_Environment_header(v_env_1556_);
v_isModule_1558_ = lean_ctor_get_uint8(v___x_1557_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_1557_);
if (v_isModule_1558_ == 0)
{
lean_object* v___x_1559_; 
lean_dec_ref(v_env_1556_);
lean_inc(v___y_1553_);
lean_inc_ref(v___y_1552_);
v___x_1559_ = lean_apply_3(v_x_1550_, v___y_1552_, v___y_1553_, lean_box(0));
return v___x_1559_;
}
else
{
uint8_t v_isExporting_1560_; 
v_isExporting_1560_ = lean_ctor_get_uint8(v_env_1556_, sizeof(void*)*8);
lean_dec_ref(v_env_1556_);
if (v_isExporting_1551_ == 0)
{
if (v_isExporting_1560_ == 0)
{
lean_object* v___x_1614_; 
lean_inc(v___y_1553_);
lean_inc_ref(v___y_1552_);
v___x_1614_ = lean_apply_3(v_x_1550_, v___y_1552_, v___y_1553_, lean_box(0));
return v___x_1614_;
}
else
{
goto v___jp_1561_;
}
}
else
{
if (v_isExporting_1560_ == 0)
{
goto v___jp_1561_;
}
else
{
lean_object* v___x_1615_; 
lean_inc(v___y_1553_);
lean_inc_ref(v___y_1552_);
v___x_1615_ = lean_apply_3(v_x_1550_, v___y_1552_, v___y_1553_, lean_box(0));
return v___x_1615_;
}
}
v___jp_1561_:
{
lean_object* v___x_1562_; lean_object* v_env_1563_; lean_object* v_messages_1564_; lean_object* v_scopes_1565_; lean_object* v_usedQuotCtxts_1566_; lean_object* v_nextMacroScope_1567_; lean_object* v_maxRecDepth_1568_; lean_object* v_ngen_1569_; lean_object* v_auxDeclNGen_1570_; lean_object* v_infoState_1571_; lean_object* v_traceState_1572_; lean_object* v_snapshotTasks_1573_; lean_object* v_prevLinterStates_1574_; lean_object* v_codeQualityEntryTasks_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1613_; 
v___x_1562_ = lean_st_ref_take(v___y_1553_);
v_env_1563_ = lean_ctor_get(v___x_1562_, 0);
v_messages_1564_ = lean_ctor_get(v___x_1562_, 1);
v_scopes_1565_ = lean_ctor_get(v___x_1562_, 2);
v_usedQuotCtxts_1566_ = lean_ctor_get(v___x_1562_, 3);
v_nextMacroScope_1567_ = lean_ctor_get(v___x_1562_, 4);
v_maxRecDepth_1568_ = lean_ctor_get(v___x_1562_, 5);
v_ngen_1569_ = lean_ctor_get(v___x_1562_, 6);
v_auxDeclNGen_1570_ = lean_ctor_get(v___x_1562_, 7);
v_infoState_1571_ = lean_ctor_get(v___x_1562_, 8);
v_traceState_1572_ = lean_ctor_get(v___x_1562_, 9);
v_snapshotTasks_1573_ = lean_ctor_get(v___x_1562_, 10);
v_prevLinterStates_1574_ = lean_ctor_get(v___x_1562_, 11);
v_codeQualityEntryTasks_1575_ = lean_ctor_get(v___x_1562_, 12);
v_isSharedCheck_1613_ = !lean_is_exclusive(v___x_1562_);
if (v_isSharedCheck_1613_ == 0)
{
v___x_1577_ = v___x_1562_;
v_isShared_1578_ = v_isSharedCheck_1613_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1575_);
lean_inc(v_prevLinterStates_1574_);
lean_inc(v_snapshotTasks_1573_);
lean_inc(v_traceState_1572_);
lean_inc(v_infoState_1571_);
lean_inc(v_auxDeclNGen_1570_);
lean_inc(v_ngen_1569_);
lean_inc(v_maxRecDepth_1568_);
lean_inc(v_nextMacroScope_1567_);
lean_inc(v_usedQuotCtxts_1566_);
lean_inc(v_scopes_1565_);
lean_inc(v_messages_1564_);
lean_inc(v_env_1563_);
lean_dec(v___x_1562_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1613_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___x_1579_; lean_object* v___x_1581_; 
v___x_1579_ = l_Lean_Environment_setExporting(v_env_1563_, v_isExporting_1551_);
if (v_isShared_1578_ == 0)
{
lean_ctor_set(v___x_1577_, 0, v___x_1579_);
v___x_1581_ = v___x_1577_;
goto v_reusejp_1580_;
}
else
{
lean_object* v_reuseFailAlloc_1612_; 
v_reuseFailAlloc_1612_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1612_, 0, v___x_1579_);
lean_ctor_set(v_reuseFailAlloc_1612_, 1, v_messages_1564_);
lean_ctor_set(v_reuseFailAlloc_1612_, 2, v_scopes_1565_);
lean_ctor_set(v_reuseFailAlloc_1612_, 3, v_usedQuotCtxts_1566_);
lean_ctor_set(v_reuseFailAlloc_1612_, 4, v_nextMacroScope_1567_);
lean_ctor_set(v_reuseFailAlloc_1612_, 5, v_maxRecDepth_1568_);
lean_ctor_set(v_reuseFailAlloc_1612_, 6, v_ngen_1569_);
lean_ctor_set(v_reuseFailAlloc_1612_, 7, v_auxDeclNGen_1570_);
lean_ctor_set(v_reuseFailAlloc_1612_, 8, v_infoState_1571_);
lean_ctor_set(v_reuseFailAlloc_1612_, 9, v_traceState_1572_);
lean_ctor_set(v_reuseFailAlloc_1612_, 10, v_snapshotTasks_1573_);
lean_ctor_set(v_reuseFailAlloc_1612_, 11, v_prevLinterStates_1574_);
lean_ctor_set(v_reuseFailAlloc_1612_, 12, v_codeQualityEntryTasks_1575_);
v___x_1581_ = v_reuseFailAlloc_1612_;
goto v_reusejp_1580_;
}
v_reusejp_1580_:
{
lean_object* v___x_1582_; lean_object* v___x_1583_; 
v___x_1582_ = lean_st_ref_put(v___y_1553_, v___x_1581_);
lean_inc(v___y_1553_);
lean_inc_ref(v___y_1552_);
v___x_1583_ = lean_apply_3(v_x_1550_, v___y_1552_, v___y_1553_, lean_box(0));
if (lean_obj_tag(v___x_1583_) == 0)
{
lean_object* v_a_1584_; lean_object* v___x_1586_; uint8_t v_isShared_1587_; uint8_t v_isSharedCheck_1600_; 
v_a_1584_ = lean_ctor_get(v___x_1583_, 0);
v_isSharedCheck_1600_ = !lean_is_exclusive(v___x_1583_);
if (v_isSharedCheck_1600_ == 0)
{
v___x_1586_ = v___x_1583_;
v_isShared_1587_ = v_isSharedCheck_1600_;
goto v_resetjp_1585_;
}
else
{
lean_inc(v_a_1584_);
lean_dec(v___x_1583_);
v___x_1586_ = lean_box(0);
v_isShared_1587_ = v_isSharedCheck_1600_;
goto v_resetjp_1585_;
}
v_resetjp_1585_:
{
lean_object* v___x_1589_; 
lean_inc(v_a_1584_);
if (v_isShared_1587_ == 0)
{
lean_ctor_set_tag(v___x_1586_, 1);
v___x_1589_ = v___x_1586_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1599_; 
v_reuseFailAlloc_1599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1599_, 0, v_a_1584_);
v___x_1589_ = v_reuseFailAlloc_1599_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
lean_object* v___x_1590_; lean_object* v___x_1592_; uint8_t v_isShared_1593_; uint8_t v_isSharedCheck_1597_; 
v___x_1590_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___lam__0(v___y_1553_, v_isExporting_1560_, v___x_1589_);
lean_dec_ref(v___x_1589_);
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
lean_ctor_set(v___x_1592_, 0, v_a_1584_);
v___x_1595_ = v___x_1592_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v_a_1584_);
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
else
{
lean_object* v_a_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1605_; uint8_t v_isShared_1606_; uint8_t v_isSharedCheck_1610_; 
v_a_1601_ = lean_ctor_get(v___x_1583_, 0);
lean_inc(v_a_1601_);
lean_dec_ref_known(v___x_1583_, 1);
v___x_1602_ = lean_box(0);
v___x_1603_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___lam__0(v___y_1553_, v_isExporting_1560_, v___x_1602_);
v_isSharedCheck_1610_ = !lean_is_exclusive(v___x_1603_);
if (v_isSharedCheck_1610_ == 0)
{
lean_object* v_unused_1611_; 
v_unused_1611_ = lean_ctor_get(v___x_1603_, 0);
lean_dec(v_unused_1611_);
v___x_1605_ = v___x_1603_;
v_isShared_1606_ = v_isSharedCheck_1610_;
goto v_resetjp_1604_;
}
else
{
lean_dec(v___x_1603_);
v___x_1605_ = lean_box(0);
v_isShared_1606_ = v_isSharedCheck_1610_;
goto v_resetjp_1604_;
}
v_resetjp_1604_:
{
lean_object* v___x_1608_; 
if (v_isShared_1606_ == 0)
{
lean_ctor_set_tag(v___x_1605_, 1);
lean_ctor_set(v___x_1605_, 0, v_a_1601_);
v___x_1608_ = v___x_1605_;
goto v_reusejp_1607_;
}
else
{
lean_object* v_reuseFailAlloc_1609_; 
v_reuseFailAlloc_1609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1609_, 0, v_a_1601_);
v___x_1608_ = v_reuseFailAlloc_1609_;
goto v_reusejp_1607_;
}
v_reusejp_1607_:
{
return v___x_1608_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___boxed(lean_object* v_x_1616_, lean_object* v_isExporting_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_){
_start:
{
uint8_t v_isExporting_boxed_1621_; lean_object* v_res_1622_; 
v_isExporting_boxed_1621_ = lean_unbox(v_isExporting_1617_);
v_res_1622_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(v_x_1616_, v_isExporting_boxed_1621_, v___y_1618_, v___y_1619_);
lean_dec(v___y_1619_);
lean_dec_ref(v___y_1618_);
return v_res_1622_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15(lean_object* v_00_u03b1_1623_, lean_object* v_x_1624_, uint8_t v_isExporting_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_){
_start:
{
lean_object* v___x_1629_; 
v___x_1629_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(v_x_1624_, v_isExporting_1625_, v___y_1626_, v___y_1627_);
return v___x_1629_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___boxed(lean_object* v_00_u03b1_1630_, lean_object* v_x_1631_, lean_object* v_isExporting_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_){
_start:
{
uint8_t v_isExporting_boxed_1636_; lean_object* v_res_1637_; 
v_isExporting_boxed_1636_ = lean_unbox(v_isExporting_1632_);
v_res_1637_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15(v_00_u03b1_1630_, v_x_1631_, v_isExporting_boxed_1636_, v___y_1633_, v___y_1634_);
lean_dec(v___y_1634_);
lean_dec_ref(v___y_1633_);
return v_res_1637_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0(uint8_t v_suppressElabErrors_1646_, uint8_t v___y_1647_, lean_object* v_x_1648_){
_start:
{
if (lean_obj_tag(v_x_1648_) == 1)
{
lean_object* v_pre_1649_; 
v_pre_1649_ = lean_ctor_get(v_x_1648_, 0);
switch(lean_obj_tag(v_pre_1649_))
{
case 1:
{
lean_object* v_pre_1650_; 
v_pre_1650_ = lean_ctor_get(v_pre_1649_, 0);
switch(lean_obj_tag(v_pre_1650_))
{
case 0:
{
lean_object* v_str_1651_; lean_object* v_str_1652_; lean_object* v___x_1653_; uint8_t v___x_1654_; 
v_str_1651_ = lean_ctor_get(v_x_1648_, 1);
v_str_1652_ = lean_ctor_get(v_pre_1649_, 1);
v___x_1653_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__0));
v___x_1654_ = lean_string_dec_eq(v_str_1652_, v___x_1653_);
if (v___x_1654_ == 0)
{
lean_object* v___x_1655_; uint8_t v___x_1656_; 
v___x_1655_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__1));
v___x_1656_ = lean_string_dec_eq(v_str_1652_, v___x_1655_);
if (v___x_1656_ == 0)
{
return v___x_1656_;
}
else
{
lean_object* v___x_1657_; uint8_t v___x_1658_; 
v___x_1657_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__2));
v___x_1658_ = lean_string_dec_eq(v_str_1651_, v___x_1657_);
if (v___x_1658_ == 0)
{
return v___x_1658_;
}
else
{
return v_suppressElabErrors_1646_;
}
}
}
else
{
lean_object* v___x_1659_; uint8_t v___x_1660_; 
v___x_1659_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__3));
v___x_1660_ = lean_string_dec_eq(v_str_1651_, v___x_1659_);
if (v___x_1660_ == 0)
{
return v___x_1660_;
}
else
{
return v_suppressElabErrors_1646_;
}
}
}
case 1:
{
lean_object* v_pre_1661_; 
v_pre_1661_ = lean_ctor_get(v_pre_1650_, 0);
if (lean_obj_tag(v_pre_1661_) == 0)
{
lean_object* v_str_1662_; lean_object* v_str_1663_; lean_object* v_str_1664_; lean_object* v___x_1665_; uint8_t v___x_1666_; 
v_str_1662_ = lean_ctor_get(v_x_1648_, 1);
v_str_1663_ = lean_ctor_get(v_pre_1649_, 1);
v_str_1664_ = lean_ctor_get(v_pre_1650_, 1);
v___x_1665_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__4));
v___x_1666_ = lean_string_dec_eq(v_str_1664_, v___x_1665_);
if (v___x_1666_ == 0)
{
return v___x_1666_;
}
else
{
lean_object* v___x_1667_; uint8_t v___x_1668_; 
v___x_1667_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__5));
v___x_1668_ = lean_string_dec_eq(v_str_1663_, v___x_1667_);
if (v___x_1668_ == 0)
{
return v___x_1668_;
}
else
{
lean_object* v___x_1669_; uint8_t v___x_1670_; 
v___x_1669_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__6));
v___x_1670_ = lean_string_dec_eq(v_str_1662_, v___x_1669_);
if (v___x_1670_ == 0)
{
return v___x_1670_;
}
else
{
return v_suppressElabErrors_1646_;
}
}
}
}
else
{
return v___y_1647_;
}
}
default: 
{
return v___y_1647_;
}
}
}
case 0:
{
lean_object* v_str_1671_; lean_object* v___x_1672_; uint8_t v___x_1673_; 
v_str_1671_ = lean_ctor_get(v_x_1648_, 1);
v___x_1672_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__7));
v___x_1673_ = lean_string_dec_eq(v_str_1671_, v___x_1672_);
if (v___x_1673_ == 0)
{
return v___x_1673_;
}
else
{
return v_suppressElabErrors_1646_;
}
}
default: 
{
return v___y_1647_;
}
}
}
else
{
return v___y_1647_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___boxed(lean_object* v_suppressElabErrors_1674_, lean_object* v___y_1675_, lean_object* v_x_1676_){
_start:
{
uint8_t v_suppressElabErrors_boxed_1677_; uint8_t v___y_50338__boxed_1678_; uint8_t v_res_1679_; lean_object* v_r_1680_; 
v_suppressElabErrors_boxed_1677_ = lean_unbox(v_suppressElabErrors_1674_);
v___y_50338__boxed_1678_ = lean_unbox(v___y_1675_);
v_res_1679_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0(v_suppressElabErrors_boxed_1677_, v___y_50338__boxed_1678_, v_x_1676_);
lean_dec(v_x_1676_);
v_r_1680_ = lean_box(v_res_1679_);
return v_r_1680_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg(lean_object* v_ref_1682_, lean_object* v_msgData_1683_, uint8_t v_severity_1684_, uint8_t v_isSilent_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_){
_start:
{
lean_object* v___y_1692_; uint8_t v___y_1693_; lean_object* v___y_1694_; lean_object* v___y_1695_; lean_object* v___y_1696_; uint8_t v___y_1697_; lean_object* v___y_1698_; lean_object* v_currNamespace_1699_; lean_object* v_openDecls_1700_; lean_object* v___y_1701_; lean_object* v___y_1727_; lean_object* v___y_1728_; lean_object* v___y_1729_; lean_object* v___y_1730_; lean_object* v___y_1731_; uint8_t v___y_1732_; uint8_t v___y_1733_; lean_object* v___y_1734_; uint8_t v___y_1735_; lean_object* v___y_1736_; lean_object* v___y_1754_; lean_object* v___y_1755_; lean_object* v___y_1756_; lean_object* v___y_1757_; lean_object* v___y_1758_; uint8_t v___y_1759_; uint8_t v___y_1760_; lean_object* v___y_1761_; uint8_t v___y_1762_; lean_object* v___y_1763_; lean_object* v___y_1767_; lean_object* v___y_1768_; lean_object* v___y_1769_; lean_object* v___y_1770_; uint8_t v___y_1771_; lean_object* v___y_1772_; uint8_t v___y_1773_; lean_object* v___y_1774_; uint8_t v___y_1775_; uint8_t v___x_1780_; lean_object* v___y_1782_; lean_object* v___y_1783_; lean_object* v___y_1784_; lean_object* v___y_1785_; lean_object* v___y_1786_; uint8_t v___y_1787_; uint8_t v___y_1788_; lean_object* v___y_1789_; uint8_t v___y_1790_; uint8_t v___y_1792_; uint8_t v___x_1810_; 
v___x_1780_ = 2;
v___x_1810_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1684_, v___x_1780_);
if (v___x_1810_ == 0)
{
v___y_1792_ = v___x_1810_;
goto v___jp_1791_;
}
else
{
uint8_t v___x_1811_; 
lean_inc_ref(v_msgData_1683_);
v___x_1811_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1683_);
v___y_1792_ = v___x_1811_;
goto v___jp_1791_;
}
v___jp_1691_:
{
lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v_env_1706_; lean_object* v_nextMacroScope_1707_; lean_object* v_ngen_1708_; lean_object* v_auxDeclNGen_1709_; lean_object* v_traceState_1710_; lean_object* v_cache_1711_; lean_object* v_messages_1712_; lean_object* v_infoState_1713_; lean_object* v_snapshotTasks_1714_; lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1725_; 
lean_inc(v_openDecls_1700_);
lean_inc(v_currNamespace_1699_);
v___x_1702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1702_, 0, v_currNamespace_1699_);
lean_ctor_set(v___x_1702_, 1, v_openDecls_1700_);
v___x_1703_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1703_, 0, v___x_1702_);
lean_ctor_set(v___x_1703_, 1, v___y_1692_);
lean_inc_ref(v___y_1694_);
lean_inc_ref(v___y_1696_);
v___x_1704_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1704_, 0, v___y_1696_);
lean_ctor_set(v___x_1704_, 1, v___y_1698_);
lean_ctor_set(v___x_1704_, 2, v___y_1695_);
lean_ctor_set(v___x_1704_, 3, v___y_1694_);
lean_ctor_set(v___x_1704_, 4, v___x_1703_);
lean_ctor_set_uint8(v___x_1704_, sizeof(void*)*5, v___y_1697_);
lean_ctor_set_uint8(v___x_1704_, sizeof(void*)*5 + 1, v___y_1693_);
lean_ctor_set_uint8(v___x_1704_, sizeof(void*)*5 + 2, v_isSilent_1685_);
v___x_1705_ = lean_st_ref_take(v___y_1701_);
v_env_1706_ = lean_ctor_get(v___x_1705_, 0);
v_nextMacroScope_1707_ = lean_ctor_get(v___x_1705_, 1);
v_ngen_1708_ = lean_ctor_get(v___x_1705_, 2);
v_auxDeclNGen_1709_ = lean_ctor_get(v___x_1705_, 3);
v_traceState_1710_ = lean_ctor_get(v___x_1705_, 4);
v_cache_1711_ = lean_ctor_get(v___x_1705_, 5);
v_messages_1712_ = lean_ctor_get(v___x_1705_, 6);
v_infoState_1713_ = lean_ctor_get(v___x_1705_, 7);
v_snapshotTasks_1714_ = lean_ctor_get(v___x_1705_, 8);
v_isSharedCheck_1725_ = !lean_is_exclusive(v___x_1705_);
if (v_isSharedCheck_1725_ == 0)
{
v___x_1716_ = v___x_1705_;
v_isShared_1717_ = v_isSharedCheck_1725_;
goto v_resetjp_1715_;
}
else
{
lean_inc(v_snapshotTasks_1714_);
lean_inc(v_infoState_1713_);
lean_inc(v_messages_1712_);
lean_inc(v_cache_1711_);
lean_inc(v_traceState_1710_);
lean_inc(v_auxDeclNGen_1709_);
lean_inc(v_ngen_1708_);
lean_inc(v_nextMacroScope_1707_);
lean_inc(v_env_1706_);
lean_dec(v___x_1705_);
v___x_1716_ = lean_box(0);
v_isShared_1717_ = v_isSharedCheck_1725_;
goto v_resetjp_1715_;
}
v_resetjp_1715_:
{
lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1721_; 
v___x_1718_ = lean_box(0);
v___x_1719_ = l_Lean_MessageLog_add(v___x_1704_, v_messages_1712_);
if (v_isShared_1717_ == 0)
{
lean_ctor_set(v___x_1716_, 6, v___x_1719_);
v___x_1721_ = v___x_1716_;
goto v_reusejp_1720_;
}
else
{
lean_object* v_reuseFailAlloc_1724_; 
v_reuseFailAlloc_1724_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1724_, 0, v_env_1706_);
lean_ctor_set(v_reuseFailAlloc_1724_, 1, v_nextMacroScope_1707_);
lean_ctor_set(v_reuseFailAlloc_1724_, 2, v_ngen_1708_);
lean_ctor_set(v_reuseFailAlloc_1724_, 3, v_auxDeclNGen_1709_);
lean_ctor_set(v_reuseFailAlloc_1724_, 4, v_traceState_1710_);
lean_ctor_set(v_reuseFailAlloc_1724_, 5, v_cache_1711_);
lean_ctor_set(v_reuseFailAlloc_1724_, 6, v___x_1719_);
lean_ctor_set(v_reuseFailAlloc_1724_, 7, v_infoState_1713_);
lean_ctor_set(v_reuseFailAlloc_1724_, 8, v_snapshotTasks_1714_);
v___x_1721_ = v_reuseFailAlloc_1724_;
goto v_reusejp_1720_;
}
v_reusejp_1720_:
{
lean_object* v___x_1722_; lean_object* v___x_1723_; 
v___x_1722_ = lean_st_ref_put(v___y_1701_, v___x_1721_);
v___x_1723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1723_, 0, v___x_1718_);
return v___x_1723_;
}
}
}
v___jp_1726_:
{
lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v_a_1739_; lean_object* v___x_1741_; uint8_t v_isShared_1742_; uint8_t v_isSharedCheck_1752_; 
v___x_1737_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1683_);
v___x_1738_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__10(v___x_1737_, v___y_1686_, v___y_1687_, v___y_1688_, v___y_1689_);
v_a_1739_ = lean_ctor_get(v___x_1738_, 0);
v_isSharedCheck_1752_ = !lean_is_exclusive(v___x_1738_);
if (v_isSharedCheck_1752_ == 0)
{
v___x_1741_ = v___x_1738_;
v_isShared_1742_ = v_isSharedCheck_1752_;
goto v_resetjp_1740_;
}
else
{
lean_inc(v_a_1739_);
lean_dec(v___x_1738_);
v___x_1741_ = lean_box(0);
v_isShared_1742_ = v_isSharedCheck_1752_;
goto v_resetjp_1740_;
}
v_resetjp_1740_:
{
lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; 
lean_inc_ref_n(v___y_1731_, 2);
v___x_1743_ = l_Lean_FileMap_toPosition(v___y_1731_, v___y_1730_);
lean_dec(v___y_1730_);
v___x_1744_ = l_Lean_FileMap_toPosition(v___y_1731_, v___y_1736_);
lean_dec(v___y_1736_);
v___x_1745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1745_, 0, v___x_1744_);
v___x_1746_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___closed__0));
if (v___y_1732_ == 0)
{
lean_del_object(v___x_1741_);
lean_dec_ref(v___y_1729_);
v___y_1692_ = v_a_1739_;
v___y_1693_ = v___y_1733_;
v___y_1694_ = v___x_1746_;
v___y_1695_ = v___x_1745_;
v___y_1696_ = v___y_1734_;
v___y_1697_ = v___y_1735_;
v___y_1698_ = v___x_1743_;
v_currNamespace_1699_ = v___y_1727_;
v_openDecls_1700_ = v___y_1728_;
v___y_1701_ = v___y_1689_;
goto v___jp_1691_;
}
else
{
uint8_t v___x_1747_; 
lean_inc(v_a_1739_);
v___x_1747_ = l_Lean_MessageData_hasTag(v___y_1729_, v_a_1739_);
if (v___x_1747_ == 0)
{
lean_object* v___x_1748_; lean_object* v___x_1750_; 
lean_dec_ref_known(v___x_1745_, 1);
lean_dec_ref(v___x_1743_);
lean_dec(v_a_1739_);
v___x_1748_ = lean_box(0);
if (v_isShared_1742_ == 0)
{
lean_ctor_set(v___x_1741_, 0, v___x_1748_);
v___x_1750_ = v___x_1741_;
goto v_reusejp_1749_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v___x_1748_);
v___x_1750_ = v_reuseFailAlloc_1751_;
goto v_reusejp_1749_;
}
v_reusejp_1749_:
{
return v___x_1750_;
}
}
else
{
lean_del_object(v___x_1741_);
v___y_1692_ = v_a_1739_;
v___y_1693_ = v___y_1733_;
v___y_1694_ = v___x_1746_;
v___y_1695_ = v___x_1745_;
v___y_1696_ = v___y_1734_;
v___y_1697_ = v___y_1735_;
v___y_1698_ = v___x_1743_;
v_currNamespace_1699_ = v___y_1727_;
v_openDecls_1700_ = v___y_1728_;
v___y_1701_ = v___y_1689_;
goto v___jp_1691_;
}
}
}
}
v___jp_1753_:
{
lean_object* v___x_1764_; 
v___x_1764_ = l_Lean_Syntax_getTailPos_x3f(v___y_1757_, v___y_1762_);
lean_dec(v___y_1757_);
if (lean_obj_tag(v___x_1764_) == 0)
{
lean_inc(v___y_1763_);
v___y_1727_ = v___y_1754_;
v___y_1728_ = v___y_1755_;
v___y_1729_ = v___y_1756_;
v___y_1730_ = v___y_1763_;
v___y_1731_ = v___y_1758_;
v___y_1732_ = v___y_1759_;
v___y_1733_ = v___y_1760_;
v___y_1734_ = v___y_1761_;
v___y_1735_ = v___y_1762_;
v___y_1736_ = v___y_1763_;
goto v___jp_1726_;
}
else
{
lean_object* v_val_1765_; 
v_val_1765_ = lean_ctor_get(v___x_1764_, 0);
lean_inc(v_val_1765_);
lean_dec_ref_known(v___x_1764_, 1);
v___y_1727_ = v___y_1754_;
v___y_1728_ = v___y_1755_;
v___y_1729_ = v___y_1756_;
v___y_1730_ = v___y_1763_;
v___y_1731_ = v___y_1758_;
v___y_1732_ = v___y_1759_;
v___y_1733_ = v___y_1760_;
v___y_1734_ = v___y_1761_;
v___y_1735_ = v___y_1762_;
v___y_1736_ = v_val_1765_;
goto v___jp_1726_;
}
}
v___jp_1766_:
{
lean_object* v_ref_1776_; lean_object* v___x_1777_; 
v_ref_1776_ = l_Lean_replaceRef(v_ref_1682_, v___y_1774_);
v___x_1777_ = l_Lean_Syntax_getPos_x3f(v_ref_1776_, v___y_1773_);
if (lean_obj_tag(v___x_1777_) == 0)
{
lean_object* v___x_1778_; 
v___x_1778_ = lean_unsigned_to_nat(0u);
v___y_1754_ = v___y_1767_;
v___y_1755_ = v___y_1768_;
v___y_1756_ = v___y_1769_;
v___y_1757_ = v_ref_1776_;
v___y_1758_ = v___y_1770_;
v___y_1759_ = v___y_1771_;
v___y_1760_ = v___y_1775_;
v___y_1761_ = v___y_1772_;
v___y_1762_ = v___y_1773_;
v___y_1763_ = v___x_1778_;
goto v___jp_1753_;
}
else
{
lean_object* v_val_1779_; 
v_val_1779_ = lean_ctor_get(v___x_1777_, 0);
lean_inc(v_val_1779_);
lean_dec_ref_known(v___x_1777_, 1);
v___y_1754_ = v___y_1767_;
v___y_1755_ = v___y_1768_;
v___y_1756_ = v___y_1769_;
v___y_1757_ = v_ref_1776_;
v___y_1758_ = v___y_1770_;
v___y_1759_ = v___y_1771_;
v___y_1760_ = v___y_1775_;
v___y_1761_ = v___y_1772_;
v___y_1762_ = v___y_1773_;
v___y_1763_ = v_val_1779_;
goto v___jp_1753_;
}
}
v___jp_1781_:
{
if (v___y_1790_ == 0)
{
v___y_1767_ = v___y_1782_;
v___y_1768_ = v___y_1785_;
v___y_1769_ = v___y_1786_;
v___y_1770_ = v___y_1783_;
v___y_1771_ = v___y_1787_;
v___y_1772_ = v___y_1784_;
v___y_1773_ = v___y_1788_;
v___y_1774_ = v___y_1789_;
v___y_1775_ = v_severity_1684_;
goto v___jp_1766_;
}
else
{
v___y_1767_ = v___y_1782_;
v___y_1768_ = v___y_1785_;
v___y_1769_ = v___y_1786_;
v___y_1770_ = v___y_1783_;
v___y_1771_ = v___y_1787_;
v___y_1772_ = v___y_1784_;
v___y_1773_ = v___y_1788_;
v___y_1774_ = v___y_1789_;
v___y_1775_ = v___x_1780_;
goto v___jp_1766_;
}
}
v___jp_1791_:
{
if (v___y_1792_ == 0)
{
lean_object* v_toCold_1793_; lean_object* v_ref_1794_; uint8_t v_suppressElabErrors_1795_; lean_object* v_fileName_1796_; lean_object* v_fileMap_1797_; lean_object* v_options_1798_; lean_object* v_currNamespace_1799_; lean_object* v_openDecls_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___f_1803_; uint8_t v___x_1804_; uint8_t v___x_1805_; 
v_toCold_1793_ = lean_ctor_get(v___y_1688_, 0);
v_ref_1794_ = lean_ctor_get(v___y_1688_, 2);
v_suppressElabErrors_1795_ = lean_ctor_get_uint8(v___y_1688_, sizeof(void*)*3 + 1);
v_fileName_1796_ = lean_ctor_get(v_toCold_1793_, 0);
v_fileMap_1797_ = lean_ctor_get(v_toCold_1793_, 1);
v_options_1798_ = lean_ctor_get(v_toCold_1793_, 2);
v_currNamespace_1799_ = lean_ctor_get(v_toCold_1793_, 4);
v_openDecls_1800_ = lean_ctor_get(v_toCold_1793_, 5);
v___x_1801_ = lean_box(v_suppressElabErrors_1795_);
v___x_1802_ = lean_box(v___y_1792_);
v___f_1803_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1803_, 0, v___x_1801_);
lean_closure_set(v___f_1803_, 1, v___x_1802_);
v___x_1804_ = 1;
v___x_1805_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1684_, v___x_1804_);
if (v___x_1805_ == 0)
{
v___y_1782_ = v_currNamespace_1799_;
v___y_1783_ = v_fileMap_1797_;
v___y_1784_ = v_fileName_1796_;
v___y_1785_ = v_openDecls_1800_;
v___y_1786_ = v___f_1803_;
v___y_1787_ = v_suppressElabErrors_1795_;
v___y_1788_ = v___y_1792_;
v___y_1789_ = v_ref_1794_;
v___y_1790_ = v___x_1805_;
goto v___jp_1781_;
}
else
{
lean_object* v___x_1806_; uint8_t v___x_1807_; 
v___x_1806_ = l_Lean_warningAsError;
v___x_1807_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13(v_options_1798_, v___x_1806_);
v___y_1782_ = v_currNamespace_1799_;
v___y_1783_ = v_fileMap_1797_;
v___y_1784_ = v_fileName_1796_;
v___y_1785_ = v_openDecls_1800_;
v___y_1786_ = v___f_1803_;
v___y_1787_ = v_suppressElabErrors_1795_;
v___y_1788_ = v___y_1792_;
v___y_1789_ = v_ref_1794_;
v___y_1790_ = v___x_1807_;
goto v___jp_1781_;
}
}
else
{
lean_object* v___x_1808_; lean_object* v___x_1809_; 
lean_dec_ref(v_msgData_1683_);
v___x_1808_ = lean_box(0);
v___x_1809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1809_, 0, v___x_1808_);
return v___x_1809_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___boxed(lean_object* v_ref_1812_, lean_object* v_msgData_1813_, lean_object* v_severity_1814_, lean_object* v_isSilent_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_){
_start:
{
uint8_t v_severity_boxed_1821_; uint8_t v_isSilent_boxed_1822_; lean_object* v_res_1823_; 
v_severity_boxed_1821_ = lean_unbox(v_severity_1814_);
v_isSilent_boxed_1822_ = lean_unbox(v_isSilent_1815_);
v_res_1823_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg(v_ref_1812_, v_msgData_1813_, v_severity_boxed_1821_, v_isSilent_boxed_1822_, v___y_1816_, v___y_1817_, v___y_1818_, v___y_1819_);
lean_dec(v___y_1819_);
lean_dec_ref(v___y_1818_);
lean_dec(v___y_1817_);
lean_dec_ref(v___y_1816_);
lean_dec(v_ref_1812_);
return v_res_1823_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26(lean_object* v_ref_1824_, lean_object* v_msgData_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_){
_start:
{
uint8_t v___x_1833_; uint8_t v___x_1834_; lean_object* v___x_1835_; 
v___x_1833_ = 2;
v___x_1834_ = 0;
v___x_1835_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg(v_ref_1824_, v_msgData_1825_, v___x_1833_, v___x_1834_, v___y_1828_, v___y_1829_, v___y_1830_, v___y_1831_);
return v___x_1835_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26___boxed(lean_object* v_ref_1836_, lean_object* v_msgData_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_){
_start:
{
lean_object* v_res_1845_; 
v_res_1845_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26(v_ref_1836_, v_msgData_1837_, v___y_1838_, v___y_1839_, v___y_1840_, v___y_1841_, v___y_1842_, v___y_1843_);
lean_dec(v___y_1843_);
lean_dec_ref(v___y_1842_);
lean_dec(v___y_1841_);
lean_dec_ref(v___y_1840_);
lean_dec(v___y_1839_);
lean_dec_ref(v___y_1838_);
lean_dec(v_ref_1836_);
return v_res_1845_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27_spec__42(lean_object* v_msgData_1846_, uint8_t v_severity_1847_, uint8_t v_isSilent_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_){
_start:
{
lean_object* v_ref_1856_; lean_object* v___x_1857_; 
v_ref_1856_ = lean_ctor_get(v___y_1853_, 2);
v___x_1857_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg(v_ref_1856_, v_msgData_1846_, v_severity_1847_, v_isSilent_1848_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_);
return v___x_1857_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27_spec__42___boxed(lean_object* v_msgData_1858_, lean_object* v_severity_1859_, lean_object* v_isSilent_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_){
_start:
{
uint8_t v_severity_boxed_1868_; uint8_t v_isSilent_boxed_1869_; lean_object* v_res_1870_; 
v_severity_boxed_1868_ = lean_unbox(v_severity_1859_);
v_isSilent_boxed_1869_ = lean_unbox(v_isSilent_1860_);
v_res_1870_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27_spec__42(v_msgData_1858_, v_severity_boxed_1868_, v_isSilent_boxed_1869_, v___y_1861_, v___y_1862_, v___y_1863_, v___y_1864_, v___y_1865_, v___y_1866_);
lean_dec(v___y_1866_);
lean_dec_ref(v___y_1865_);
lean_dec(v___y_1864_);
lean_dec_ref(v___y_1863_);
lean_dec(v___y_1862_);
lean_dec_ref(v___y_1861_);
return v_res_1870_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27(lean_object* v_msgData_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_){
_start:
{
uint8_t v___x_1879_; uint8_t v___x_1880_; lean_object* v___x_1881_; 
v___x_1879_ = 2;
v___x_1880_ = 0;
v___x_1881_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27_spec__42(v_msgData_1871_, v___x_1879_, v___x_1880_, v___y_1872_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_);
return v___x_1881_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27___boxed(lean_object* v_msgData_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_){
_start:
{
lean_object* v_res_1890_; 
v_res_1890_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27(v_msgData_1882_, v___y_1883_, v___y_1884_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_);
lean_dec(v___y_1888_);
lean_dec_ref(v___y_1887_);
lean_dec(v___y_1886_);
lean_dec_ref(v___y_1885_);
lean_dec(v___y_1884_);
lean_dec_ref(v___y_1883_);
return v_res_1890_;
}
}
static lean_object* _init_l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1(void){
_start:
{
lean_object* v___x_1892_; lean_object* v___x_1893_; 
v___x_1892_ = ((lean_object*)(l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__0));
v___x_1893_ = l_Lean_stringToMessageData(v___x_1892_);
return v___x_1893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15(lean_object* v_ex_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_){
_start:
{
if (lean_obj_tag(v_ex_1894_) == 0)
{
lean_object* v_ref_1902_; lean_object* v_msg_1903_; lean_object* v___x_1904_; 
v_ref_1902_ = lean_ctor_get(v_ex_1894_, 0);
lean_inc(v_ref_1902_);
v_msg_1903_ = lean_ctor_get(v_ex_1894_, 1);
lean_inc_ref(v_msg_1903_);
lean_dec_ref_known(v_ex_1894_, 2);
v___x_1904_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26(v_ref_1902_, v_msg_1903_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_);
lean_dec(v_ref_1902_);
return v___x_1904_;
}
else
{
lean_object* v_id_1905_; uint8_t v___y_1907_; uint8_t v___x_1929_; 
v_id_1905_ = lean_ctor_get(v_ex_1894_, 0);
lean_inc(v_id_1905_);
v___x_1929_ = l_Lean_Elab_isAbortExceptionId(v_id_1905_);
if (v___x_1929_ == 0)
{
uint8_t v___x_1930_; 
v___x_1930_ = l_Lean_Exception_isInterrupt(v_ex_1894_);
lean_dec_ref_known(v_ex_1894_, 2);
v___y_1907_ = v___x_1930_;
goto v___jp_1906_;
}
else
{
lean_dec_ref_known(v_ex_1894_, 2);
v___y_1907_ = v___x_1929_;
goto v___jp_1906_;
}
v___jp_1906_:
{
if (v___y_1907_ == 0)
{
lean_object* v_ref_1908_; lean_object* v___x_1909_; 
v_ref_1908_ = lean_ctor_get(v___y_1899_, 2);
v___x_1909_ = l_Lean_InternalExceptionId_getName(v_id_1905_);
lean_dec(v_id_1905_);
if (lean_obj_tag(v___x_1909_) == 0)
{
lean_object* v_a_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; 
v_a_1910_ = lean_ctor_get(v___x_1909_, 0);
lean_inc(v_a_1910_);
lean_dec_ref_known(v___x_1909_, 1);
v___x_1911_ = lean_obj_once(&l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1, &l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1_once, _init_l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1);
v___x_1912_ = l_Lean_MessageData_ofName(v_a_1910_);
v___x_1913_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1913_, 0, v___x_1911_);
lean_ctor_set(v___x_1913_, 1, v___x_1912_);
v___x_1914_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27(v___x_1913_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_);
return v___x_1914_;
}
else
{
lean_object* v_a_1915_; lean_object* v___x_1917_; uint8_t v_isShared_1918_; uint8_t v_isSharedCheck_1926_; 
v_a_1915_ = lean_ctor_get(v___x_1909_, 0);
v_isSharedCheck_1926_ = !lean_is_exclusive(v___x_1909_);
if (v_isSharedCheck_1926_ == 0)
{
v___x_1917_ = v___x_1909_;
v_isShared_1918_ = v_isSharedCheck_1926_;
goto v_resetjp_1916_;
}
else
{
lean_inc(v_a_1915_);
lean_dec(v___x_1909_);
v___x_1917_ = lean_box(0);
v_isShared_1918_ = v_isSharedCheck_1926_;
goto v_resetjp_1916_;
}
v_resetjp_1916_:
{
lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1924_; 
v___x_1919_ = lean_io_error_to_string(v_a_1915_);
v___x_1920_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1920_, 0, v___x_1919_);
v___x_1921_ = l_Lean_MessageData_ofFormat(v___x_1920_);
lean_inc(v_ref_1908_);
v___x_1922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1922_, 0, v_ref_1908_);
lean_ctor_set(v___x_1922_, 1, v___x_1921_);
if (v_isShared_1918_ == 0)
{
lean_ctor_set(v___x_1917_, 0, v___x_1922_);
v___x_1924_ = v___x_1917_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1925_; 
v_reuseFailAlloc_1925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1925_, 0, v___x_1922_);
v___x_1924_ = v_reuseFailAlloc_1925_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
return v___x_1924_;
}
}
}
}
else
{
lean_object* v___x_1927_; lean_object* v___x_1928_; 
lean_dec(v_id_1905_);
v___x_1927_ = lean_box(0);
v___x_1928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1928_, 0, v___x_1927_);
return v___x_1928_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___boxed(lean_object* v_ex_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_){
_start:
{
lean_object* v_res_1939_; 
v_res_1939_ = l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15(v_ex_1931_, v___y_1932_, v___y_1933_, v___y_1934_, v___y_1935_, v___y_1936_, v___y_1937_);
lean_dec(v___y_1937_);
lean_dec_ref(v___y_1936_);
lean_dec(v___y_1935_);
lean_dec_ref(v___y_1934_);
lean_dec(v___y_1933_);
lean_dec_ref(v___y_1932_);
return v_res_1939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7(lean_object* v_x_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_){
_start:
{
lean_object* v___x_1948_; 
lean_inc(v___y_1946_);
lean_inc_ref(v___y_1945_);
lean_inc(v___y_1944_);
lean_inc_ref(v___y_1943_);
lean_inc(v___y_1942_);
lean_inc_ref(v___y_1941_);
v___x_1948_ = lean_apply_7(v_x_1940_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_, v___y_1945_, v___y_1946_, lean_box(0));
if (lean_obj_tag(v___x_1948_) == 0)
{
return v___x_1948_;
}
else
{
lean_object* v_a_1949_; uint8_t v___y_1951_; uint8_t v___x_1953_; 
v_a_1949_ = lean_ctor_get(v___x_1948_, 0);
lean_inc(v_a_1949_);
v___x_1953_ = l_Lean_Exception_isInterrupt(v_a_1949_);
if (v___x_1953_ == 0)
{
uint8_t v___x_1954_; 
lean_inc(v_a_1949_);
v___x_1954_ = l_Lean_Exception_isRuntime(v_a_1949_);
v___y_1951_ = v___x_1954_;
goto v___jp_1950_;
}
else
{
v___y_1951_ = v___x_1953_;
goto v___jp_1950_;
}
v___jp_1950_:
{
if (v___y_1951_ == 0)
{
lean_object* v___x_1952_; 
lean_dec_ref_known(v___x_1948_, 1);
v___x_1952_ = l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15(v_a_1949_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_, v___y_1945_, v___y_1946_);
return v___x_1952_;
}
else
{
lean_dec(v_a_1949_);
return v___x_1948_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7___boxed(lean_object* v_x_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_){
_start:
{
lean_object* v_res_1963_; 
v_res_1963_ = l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7(v_x_1955_, v___y_1956_, v___y_1957_, v___y_1958_, v___y_1959_, v___y_1960_, v___y_1961_);
lean_dec(v___y_1961_);
lean_dec_ref(v___y_1960_);
lean_dec(v___y_1959_);
lean_dec_ref(v___y_1958_);
lean_dec(v___y_1957_);
lean_dec_ref(v___y_1956_);
return v_res_1963_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabNewtype_spec__8(lean_object* v___x_1964_, lean_object* v___x_1965_, lean_object* v_as_1966_, size_t v_sz_1967_, size_t v_i_1968_, lean_object* v_b_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_){
_start:
{
uint8_t v___x_1977_; 
v___x_1977_ = lean_usize_dec_lt(v_i_1968_, v_sz_1967_);
if (v___x_1977_ == 0)
{
lean_object* v___x_1978_; 
lean_dec_ref(v___x_1964_);
v___x_1978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1978_, 0, v_b_1969_);
return v___x_1978_;
}
else
{
lean_object* v_a_1979_; lean_object* v_ref_1980_; lean_object* v_toCold_1981_; lean_object* v_currRecDepth_1982_; lean_object* v_ref_1983_; uint8_t v_diag_1984_; uint8_t v_suppressElabErrors_1985_; lean_object* v___x_1986_; uint8_t v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v_ref_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; 
v_a_1979_ = lean_array_uget_borrowed(v_as_1966_, v_i_1968_);
v_ref_1980_ = lean_ctor_get(v_a_1979_, 0);
v_toCold_1981_ = lean_ctor_get(v___y_1974_, 0);
v_currRecDepth_1982_ = lean_ctor_get(v___y_1974_, 1);
v_ref_1983_ = lean_ctor_get(v___y_1974_, 2);
v_diag_1984_ = lean_ctor_get_uint8(v___y_1974_, sizeof(void*)*3);
v_suppressElabErrors_1985_ = lean_ctor_get_uint8(v___y_1974_, sizeof(void*)*3 + 1);
v___x_1986_ = lean_unsigned_to_nat(0u);
v___x_1987_ = lean_nat_dec_eq(v___x_1965_, v___x_1986_);
v___x_1988_ = lean_box(0);
v___x_1989_ = lean_box(0);
v___x_1990_ = lean_box(v___x_1987_);
lean_inc_ref(v___x_1964_);
lean_inc(v_a_1979_);
v___x_1991_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_processDefDeriving___boxed), 11, 4);
lean_closure_set(v___x_1991_, 0, v_a_1979_);
lean_closure_set(v___x_1991_, 1, v___x_1964_);
lean_closure_set(v___x_1991_, 2, v___x_1990_);
lean_closure_set(v___x_1991_, 3, v___x_1989_);
v_ref_1992_ = l_Lean_replaceRef(v_ref_1980_, v_ref_1983_);
lean_inc(v_currRecDepth_1982_);
lean_inc_ref(v_toCold_1981_);
v___x_1993_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1993_, 0, v_toCold_1981_);
lean_ctor_set(v___x_1993_, 1, v_currRecDepth_1982_);
lean_ctor_set(v___x_1993_, 2, v_ref_1992_);
lean_ctor_set_uint8(v___x_1993_, sizeof(void*)*3, v_diag_1984_);
lean_ctor_set_uint8(v___x_1993_, sizeof(void*)*3 + 1, v_suppressElabErrors_1985_);
v___x_1994_ = l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7(v___x_1991_, v___y_1970_, v___y_1971_, v___y_1972_, v___y_1973_, v___x_1993_, v___y_1975_);
lean_dec_ref_known(v___x_1993_, 3);
if (lean_obj_tag(v___x_1994_) == 0)
{
size_t v___x_1995_; size_t v___x_1996_; 
lean_dec_ref_known(v___x_1994_, 1);
v___x_1995_ = ((size_t)1ULL);
v___x_1996_ = lean_usize_add(v_i_1968_, v___x_1995_);
v_i_1968_ = v___x_1996_;
v_b_1969_ = v___x_1988_;
goto _start;
}
else
{
lean_dec_ref(v___x_1964_);
return v___x_1994_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___boxed(lean_object* v___x_1998_, lean_object* v___x_1999_, lean_object* v_as_2000_, lean_object* v_sz_2001_, lean_object* v_i_2002_, lean_object* v_b_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_){
_start:
{
size_t v_sz_boxed_2011_; size_t v_i_boxed_2012_; lean_object* v_res_2013_; 
v_sz_boxed_2011_ = lean_unbox_usize(v_sz_2001_);
lean_dec(v_sz_2001_);
v_i_boxed_2012_ = lean_unbox_usize(v_i_2002_);
lean_dec(v_i_2002_);
v_res_2013_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabNewtype_spec__8(v___x_1998_, v___x_1999_, v_as_2000_, v_sz_boxed_2011_, v_i_boxed_2012_, v_b_2003_, v___y_2004_, v___y_2005_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_);
lean_dec(v___y_2009_);
lean_dec_ref(v___y_2008_);
lean_dec(v___y_2007_);
lean_dec_ref(v___y_2006_);
lean_dec(v___y_2005_);
lean_dec_ref(v___y_2004_);
lean_dec_ref(v_as_2000_);
lean_dec(v___x_1999_);
return v_res_2013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__0(lean_object* v_a_2014_, lean_object* v_declName_2015_, lean_object* v_a_2016_, lean_object* v___x_2017_, size_t v___x_2018_, lean_object* v___x_2019_, lean_object* v_xs_2020_, lean_object* v_x_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_){
_start:
{
lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; size_t v_sz_2034_; lean_object* v___x_2035_; 
v___x_2029_ = l_Lean_ConstantInfo_levelParams(v_a_2014_);
v___x_2030_ = lean_box(0);
v___x_2031_ = l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(v___x_2029_, v___x_2030_);
v___x_2032_ = l_Lean_Expr_const___override(v_declName_2015_, v___x_2031_);
v___x_2033_ = l_Lean_mkAppN(v___x_2032_, v_xs_2020_);
v_sz_2034_ = lean_array_size(v_a_2016_);
v___x_2035_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabNewtype_spec__8(v___x_2033_, v___x_2017_, v_a_2016_, v_sz_2034_, v___x_2018_, v___x_2019_, v___y_2022_, v___y_2023_, v___y_2024_, v___y_2025_, v___y_2026_, v___y_2027_);
if (lean_obj_tag(v___x_2035_) == 0)
{
lean_object* v___x_2037_; uint8_t v_isShared_2038_; uint8_t v_isSharedCheck_2042_; 
v_isSharedCheck_2042_ = !lean_is_exclusive(v___x_2035_);
if (v_isSharedCheck_2042_ == 0)
{
lean_object* v_unused_2043_; 
v_unused_2043_ = lean_ctor_get(v___x_2035_, 0);
lean_dec(v_unused_2043_);
v___x_2037_ = v___x_2035_;
v_isShared_2038_ = v_isSharedCheck_2042_;
goto v_resetjp_2036_;
}
else
{
lean_dec(v___x_2035_);
v___x_2037_ = lean_box(0);
v_isShared_2038_ = v_isSharedCheck_2042_;
goto v_resetjp_2036_;
}
v_resetjp_2036_:
{
lean_object* v___x_2040_; 
if (v_isShared_2038_ == 0)
{
lean_ctor_set(v___x_2037_, 0, v___x_2019_);
v___x_2040_ = v___x_2037_;
goto v_reusejp_2039_;
}
else
{
lean_object* v_reuseFailAlloc_2041_; 
v_reuseFailAlloc_2041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2041_, 0, v___x_2019_);
v___x_2040_ = v_reuseFailAlloc_2041_;
goto v_reusejp_2039_;
}
v_reusejp_2039_:
{
return v___x_2040_;
}
}
}
else
{
return v___x_2035_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__0___boxed(lean_object* v_a_2044_, lean_object* v_declName_2045_, lean_object* v_a_2046_, lean_object* v___x_2047_, lean_object* v___x_2048_, lean_object* v___x_2049_, lean_object* v_xs_2050_, lean_object* v_x_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_){
_start:
{
size_t v___x_50896__boxed_2059_; lean_object* v_res_2060_; 
v___x_50896__boxed_2059_ = lean_unbox_usize(v___x_2048_);
lean_dec(v___x_2048_);
v_res_2060_ = l_Lean_Elab_Command_elabNewtype___lam__0(v_a_2044_, v_declName_2045_, v_a_2046_, v___x_2047_, v___x_50896__boxed_2059_, v___x_2049_, v_xs_2050_, v_x_2051_, v___y_2052_, v___y_2053_, v___y_2054_, v___y_2055_, v___y_2056_, v___y_2057_);
lean_dec(v___y_2057_);
lean_dec_ref(v___y_2056_);
lean_dec(v___y_2055_);
lean_dec_ref(v___y_2054_);
lean_dec(v___y_2053_);
lean_dec_ref(v___y_2052_);
lean_dec_ref(v_x_2051_);
lean_dec_ref(v_xs_2050_);
lean_dec(v___x_2047_);
lean_dec_ref(v_a_2046_);
lean_dec_ref(v_a_2044_);
return v_res_2060_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg___lam__0(lean_object* v___y_2061_, uint8_t v_isExporting_2062_, lean_object* v___x_2063_, lean_object* v___y_2064_, lean_object* v___x_2065_, lean_object* v_a_x3f_2066_){
_start:
{
lean_object* v___x_2068_; lean_object* v_env_2069_; lean_object* v_nextMacroScope_2070_; lean_object* v_ngen_2071_; lean_object* v_auxDeclNGen_2072_; lean_object* v_traceState_2073_; lean_object* v_messages_2074_; lean_object* v_infoState_2075_; lean_object* v_snapshotTasks_2076_; lean_object* v___x_2078_; uint8_t v_isShared_2079_; uint8_t v_isSharedCheck_2101_; 
v___x_2068_ = lean_st_ref_take(v___y_2061_);
v_env_2069_ = lean_ctor_get(v___x_2068_, 0);
v_nextMacroScope_2070_ = lean_ctor_get(v___x_2068_, 1);
v_ngen_2071_ = lean_ctor_get(v___x_2068_, 2);
v_auxDeclNGen_2072_ = lean_ctor_get(v___x_2068_, 3);
v_traceState_2073_ = lean_ctor_get(v___x_2068_, 4);
v_messages_2074_ = lean_ctor_get(v___x_2068_, 6);
v_infoState_2075_ = lean_ctor_get(v___x_2068_, 7);
v_snapshotTasks_2076_ = lean_ctor_get(v___x_2068_, 8);
v_isSharedCheck_2101_ = !lean_is_exclusive(v___x_2068_);
if (v_isSharedCheck_2101_ == 0)
{
lean_object* v_unused_2102_; 
v_unused_2102_ = lean_ctor_get(v___x_2068_, 5);
lean_dec(v_unused_2102_);
v___x_2078_ = v___x_2068_;
v_isShared_2079_ = v_isSharedCheck_2101_;
goto v_resetjp_2077_;
}
else
{
lean_inc(v_snapshotTasks_2076_);
lean_inc(v_infoState_2075_);
lean_inc(v_messages_2074_);
lean_inc(v_traceState_2073_);
lean_inc(v_auxDeclNGen_2072_);
lean_inc(v_ngen_2071_);
lean_inc(v_nextMacroScope_2070_);
lean_inc(v_env_2069_);
lean_dec(v___x_2068_);
v___x_2078_ = lean_box(0);
v_isShared_2079_ = v_isSharedCheck_2101_;
goto v_resetjp_2077_;
}
v_resetjp_2077_:
{
lean_object* v___x_2080_; lean_object* v___x_2082_; 
v___x_2080_ = l_Lean_Environment_setExporting(v_env_2069_, v_isExporting_2062_);
if (v_isShared_2079_ == 0)
{
lean_ctor_set(v___x_2078_, 5, v___x_2063_);
lean_ctor_set(v___x_2078_, 0, v___x_2080_);
v___x_2082_ = v___x_2078_;
goto v_reusejp_2081_;
}
else
{
lean_object* v_reuseFailAlloc_2100_; 
v_reuseFailAlloc_2100_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2100_, 0, v___x_2080_);
lean_ctor_set(v_reuseFailAlloc_2100_, 1, v_nextMacroScope_2070_);
lean_ctor_set(v_reuseFailAlloc_2100_, 2, v_ngen_2071_);
lean_ctor_set(v_reuseFailAlloc_2100_, 3, v_auxDeclNGen_2072_);
lean_ctor_set(v_reuseFailAlloc_2100_, 4, v_traceState_2073_);
lean_ctor_set(v_reuseFailAlloc_2100_, 5, v___x_2063_);
lean_ctor_set(v_reuseFailAlloc_2100_, 6, v_messages_2074_);
lean_ctor_set(v_reuseFailAlloc_2100_, 7, v_infoState_2075_);
lean_ctor_set(v_reuseFailAlloc_2100_, 8, v_snapshotTasks_2076_);
v___x_2082_ = v_reuseFailAlloc_2100_;
goto v_reusejp_2081_;
}
v_reusejp_2081_:
{
lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v_mctx_2085_; lean_object* v_zetaDeltaFVarIds_2086_; lean_object* v_postponed_2087_; lean_object* v_diag_2088_; lean_object* v___x_2090_; uint8_t v_isShared_2091_; uint8_t v_isSharedCheck_2098_; 
v___x_2083_ = lean_st_ref_put(v___y_2061_, v___x_2082_);
v___x_2084_ = lean_st_ref_take(v___y_2064_);
v_mctx_2085_ = lean_ctor_get(v___x_2084_, 0);
v_zetaDeltaFVarIds_2086_ = lean_ctor_get(v___x_2084_, 2);
v_postponed_2087_ = lean_ctor_get(v___x_2084_, 3);
v_diag_2088_ = lean_ctor_get(v___x_2084_, 4);
v_isSharedCheck_2098_ = !lean_is_exclusive(v___x_2084_);
if (v_isSharedCheck_2098_ == 0)
{
lean_object* v_unused_2099_; 
v_unused_2099_ = lean_ctor_get(v___x_2084_, 1);
lean_dec(v_unused_2099_);
v___x_2090_ = v___x_2084_;
v_isShared_2091_ = v_isSharedCheck_2098_;
goto v_resetjp_2089_;
}
else
{
lean_inc(v_diag_2088_);
lean_inc(v_postponed_2087_);
lean_inc(v_zetaDeltaFVarIds_2086_);
lean_inc(v_mctx_2085_);
lean_dec(v___x_2084_);
v___x_2090_ = lean_box(0);
v_isShared_2091_ = v_isSharedCheck_2098_;
goto v_resetjp_2089_;
}
v_resetjp_2089_:
{
lean_object* v___x_2092_; lean_object* v___x_2094_; 
v___x_2092_ = lean_box(0);
if (v_isShared_2091_ == 0)
{
lean_ctor_set(v___x_2090_, 1, v___x_2065_);
v___x_2094_ = v___x_2090_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2097_; 
v_reuseFailAlloc_2097_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2097_, 0, v_mctx_2085_);
lean_ctor_set(v_reuseFailAlloc_2097_, 1, v___x_2065_);
lean_ctor_set(v_reuseFailAlloc_2097_, 2, v_zetaDeltaFVarIds_2086_);
lean_ctor_set(v_reuseFailAlloc_2097_, 3, v_postponed_2087_);
lean_ctor_set(v_reuseFailAlloc_2097_, 4, v_diag_2088_);
v___x_2094_ = v_reuseFailAlloc_2097_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
lean_object* v___x_2095_; lean_object* v___x_2096_; 
v___x_2095_ = lean_st_ref_put(v___y_2064_, v___x_2094_);
v___x_2096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2096_, 0, v___x_2092_);
return v___x_2096_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg___lam__0___boxed(lean_object* v___y_2103_, lean_object* v_isExporting_2104_, lean_object* v___x_2105_, lean_object* v___y_2106_, lean_object* v___x_2107_, lean_object* v_a_x3f_2108_, lean_object* v___y_2109_){
_start:
{
uint8_t v_isExporting_boxed_2110_; lean_object* v_res_2111_; 
v_isExporting_boxed_2110_ = lean_unbox(v_isExporting_2104_);
v_res_2111_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg___lam__0(v___y_2103_, v_isExporting_boxed_2110_, v___x_2105_, v___y_2106_, v___x_2107_, v_a_x3f_2108_);
lean_dec(v_a_x3f_2108_);
lean_dec(v___y_2106_);
lean_dec(v___y_2103_);
return v_res_2111_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg(lean_object* v_x_2112_, uint8_t v_isExporting_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_){
_start:
{
lean_object* v___x_2121_; lean_object* v_env_2122_; lean_object* v___x_2123_; uint8_t v_isModule_2124_; 
v___x_2121_ = lean_st_ref_get(v___y_2119_);
v_env_2122_ = lean_ctor_get(v___x_2121_, 0);
lean_inc_ref(v_env_2122_);
lean_dec(v___x_2121_);
v___x_2123_ = l_Lean_Environment_header(v_env_2122_);
v_isModule_2124_ = lean_ctor_get_uint8(v___x_2123_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_2123_);
if (v_isModule_2124_ == 0)
{
lean_object* v___x_2125_; 
lean_dec_ref(v_env_2122_);
lean_inc(v___y_2119_);
lean_inc_ref(v___y_2118_);
lean_inc(v___y_2117_);
lean_inc_ref(v___y_2116_);
lean_inc(v___y_2115_);
lean_inc_ref(v___y_2114_);
v___x_2125_ = lean_apply_7(v_x_2112_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_, lean_box(0));
return v___x_2125_;
}
else
{
uint8_t v_isExporting_2126_; 
v_isExporting_2126_ = lean_ctor_get_uint8(v_env_2122_, sizeof(void*)*8);
lean_dec_ref(v_env_2122_);
if (v_isExporting_2113_ == 0)
{
if (v_isExporting_2126_ == 0)
{
lean_object* v___x_2192_; 
lean_inc(v___y_2119_);
lean_inc_ref(v___y_2118_);
lean_inc(v___y_2117_);
lean_inc_ref(v___y_2116_);
lean_inc(v___y_2115_);
lean_inc_ref(v___y_2114_);
v___x_2192_ = lean_apply_7(v_x_2112_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_, lean_box(0));
return v___x_2192_;
}
else
{
goto v___jp_2127_;
}
}
else
{
if (v_isExporting_2126_ == 0)
{
goto v___jp_2127_;
}
else
{
lean_object* v___x_2193_; 
lean_inc(v___y_2119_);
lean_inc_ref(v___y_2118_);
lean_inc(v___y_2117_);
lean_inc_ref(v___y_2116_);
lean_inc(v___y_2115_);
lean_inc_ref(v___y_2114_);
v___x_2193_ = lean_apply_7(v_x_2112_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_, lean_box(0));
return v___x_2193_;
}
}
v___jp_2127_:
{
lean_object* v___x_2128_; lean_object* v_env_2129_; lean_object* v_nextMacroScope_2130_; lean_object* v_ngen_2131_; lean_object* v_auxDeclNGen_2132_; lean_object* v_traceState_2133_; lean_object* v_messages_2134_; lean_object* v_infoState_2135_; lean_object* v_snapshotTasks_2136_; lean_object* v___x_2138_; uint8_t v_isShared_2139_; uint8_t v_isSharedCheck_2190_; 
v___x_2128_ = lean_st_ref_take(v___y_2119_);
v_env_2129_ = lean_ctor_get(v___x_2128_, 0);
v_nextMacroScope_2130_ = lean_ctor_get(v___x_2128_, 1);
v_ngen_2131_ = lean_ctor_get(v___x_2128_, 2);
v_auxDeclNGen_2132_ = lean_ctor_get(v___x_2128_, 3);
v_traceState_2133_ = lean_ctor_get(v___x_2128_, 4);
v_messages_2134_ = lean_ctor_get(v___x_2128_, 6);
v_infoState_2135_ = lean_ctor_get(v___x_2128_, 7);
v_snapshotTasks_2136_ = lean_ctor_get(v___x_2128_, 8);
v_isSharedCheck_2190_ = !lean_is_exclusive(v___x_2128_);
if (v_isSharedCheck_2190_ == 0)
{
lean_object* v_unused_2191_; 
v_unused_2191_ = lean_ctor_get(v___x_2128_, 5);
lean_dec(v_unused_2191_);
v___x_2138_ = v___x_2128_;
v_isShared_2139_ = v_isSharedCheck_2190_;
goto v_resetjp_2137_;
}
else
{
lean_inc(v_snapshotTasks_2136_);
lean_inc(v_infoState_2135_);
lean_inc(v_messages_2134_);
lean_inc(v_traceState_2133_);
lean_inc(v_auxDeclNGen_2132_);
lean_inc(v_ngen_2131_);
lean_inc(v_nextMacroScope_2130_);
lean_inc(v_env_2129_);
lean_dec(v___x_2128_);
v___x_2138_ = lean_box(0);
v_isShared_2139_ = v_isSharedCheck_2190_;
goto v_resetjp_2137_;
}
v_resetjp_2137_:
{
lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2143_; 
v___x_2140_ = l_Lean_Environment_setExporting(v_env_2129_, v_isExporting_2113_);
v___x_2141_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__2);
if (v_isShared_2139_ == 0)
{
lean_ctor_set(v___x_2138_, 5, v___x_2141_);
lean_ctor_set(v___x_2138_, 0, v___x_2140_);
v___x_2143_ = v___x_2138_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2189_; 
v_reuseFailAlloc_2189_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2189_, 0, v___x_2140_);
lean_ctor_set(v_reuseFailAlloc_2189_, 1, v_nextMacroScope_2130_);
lean_ctor_set(v_reuseFailAlloc_2189_, 2, v_ngen_2131_);
lean_ctor_set(v_reuseFailAlloc_2189_, 3, v_auxDeclNGen_2132_);
lean_ctor_set(v_reuseFailAlloc_2189_, 4, v_traceState_2133_);
lean_ctor_set(v_reuseFailAlloc_2189_, 5, v___x_2141_);
lean_ctor_set(v_reuseFailAlloc_2189_, 6, v_messages_2134_);
lean_ctor_set(v_reuseFailAlloc_2189_, 7, v_infoState_2135_);
lean_ctor_set(v_reuseFailAlloc_2189_, 8, v_snapshotTasks_2136_);
v___x_2143_ = v_reuseFailAlloc_2189_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v_mctx_2146_; lean_object* v_zetaDeltaFVarIds_2147_; lean_object* v_postponed_2148_; lean_object* v_diag_2149_; lean_object* v___x_2151_; uint8_t v_isShared_2152_; uint8_t v_isSharedCheck_2187_; 
v___x_2144_ = lean_st_ref_put(v___y_2119_, v___x_2143_);
v___x_2145_ = lean_st_ref_take(v___y_2117_);
v_mctx_2146_ = lean_ctor_get(v___x_2145_, 0);
v_zetaDeltaFVarIds_2147_ = lean_ctor_get(v___x_2145_, 2);
v_postponed_2148_ = lean_ctor_get(v___x_2145_, 3);
v_diag_2149_ = lean_ctor_get(v___x_2145_, 4);
v_isSharedCheck_2187_ = !lean_is_exclusive(v___x_2145_);
if (v_isSharedCheck_2187_ == 0)
{
lean_object* v_unused_2188_; 
v_unused_2188_ = lean_ctor_get(v___x_2145_, 1);
lean_dec(v_unused_2188_);
v___x_2151_ = v___x_2145_;
v_isShared_2152_ = v_isSharedCheck_2187_;
goto v_resetjp_2150_;
}
else
{
lean_inc(v_diag_2149_);
lean_inc(v_postponed_2148_);
lean_inc(v_zetaDeltaFVarIds_2147_);
lean_inc(v_mctx_2146_);
lean_dec(v___x_2145_);
v___x_2151_ = lean_box(0);
v_isShared_2152_ = v_isSharedCheck_2187_;
goto v_resetjp_2150_;
}
v_resetjp_2150_:
{
lean_object* v___x_2153_; lean_object* v___x_2155_; 
v___x_2153_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__3);
if (v_isShared_2152_ == 0)
{
lean_ctor_set(v___x_2151_, 1, v___x_2153_);
v___x_2155_ = v___x_2151_;
goto v_reusejp_2154_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v_mctx_2146_);
lean_ctor_set(v_reuseFailAlloc_2186_, 1, v___x_2153_);
lean_ctor_set(v_reuseFailAlloc_2186_, 2, v_zetaDeltaFVarIds_2147_);
lean_ctor_set(v_reuseFailAlloc_2186_, 3, v_postponed_2148_);
lean_ctor_set(v_reuseFailAlloc_2186_, 4, v_diag_2149_);
v___x_2155_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2154_;
}
v_reusejp_2154_:
{
lean_object* v___x_2156_; lean_object* v___x_2157_; 
v___x_2156_ = lean_st_ref_put(v___y_2117_, v___x_2155_);
lean_inc(v___y_2119_);
lean_inc_ref(v___y_2118_);
lean_inc(v___y_2117_);
lean_inc_ref(v___y_2116_);
lean_inc(v___y_2115_);
lean_inc_ref(v___y_2114_);
v___x_2157_ = lean_apply_7(v_x_2112_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_, lean_box(0));
if (lean_obj_tag(v___x_2157_) == 0)
{
lean_object* v_a_2158_; lean_object* v___x_2160_; uint8_t v_isShared_2161_; uint8_t v_isSharedCheck_2174_; 
v_a_2158_ = lean_ctor_get(v___x_2157_, 0);
v_isSharedCheck_2174_ = !lean_is_exclusive(v___x_2157_);
if (v_isSharedCheck_2174_ == 0)
{
v___x_2160_ = v___x_2157_;
v_isShared_2161_ = v_isSharedCheck_2174_;
goto v_resetjp_2159_;
}
else
{
lean_inc(v_a_2158_);
lean_dec(v___x_2157_);
v___x_2160_ = lean_box(0);
v_isShared_2161_ = v_isSharedCheck_2174_;
goto v_resetjp_2159_;
}
v_resetjp_2159_:
{
lean_object* v___x_2163_; 
lean_inc(v_a_2158_);
if (v_isShared_2161_ == 0)
{
lean_ctor_set_tag(v___x_2160_, 1);
v___x_2163_ = v___x_2160_;
goto v_reusejp_2162_;
}
else
{
lean_object* v_reuseFailAlloc_2173_; 
v_reuseFailAlloc_2173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2173_, 0, v_a_2158_);
v___x_2163_ = v_reuseFailAlloc_2173_;
goto v_reusejp_2162_;
}
v_reusejp_2162_:
{
lean_object* v___x_2164_; lean_object* v___x_2166_; uint8_t v_isShared_2167_; uint8_t v_isSharedCheck_2171_; 
v___x_2164_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg___lam__0(v___y_2119_, v_isExporting_2126_, v___x_2141_, v___y_2117_, v___x_2153_, v___x_2163_);
lean_dec_ref(v___x_2163_);
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
lean_ctor_set(v___x_2166_, 0, v_a_2158_);
v___x_2169_ = v___x_2166_;
goto v_reusejp_2168_;
}
else
{
lean_object* v_reuseFailAlloc_2170_; 
v_reuseFailAlloc_2170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2170_, 0, v_a_2158_);
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
else
{
lean_object* v_a_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2179_; uint8_t v_isShared_2180_; uint8_t v_isSharedCheck_2184_; 
v_a_2175_ = lean_ctor_get(v___x_2157_, 0);
lean_inc(v_a_2175_);
lean_dec_ref_known(v___x_2157_, 1);
v___x_2176_ = lean_box(0);
v___x_2177_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg___lam__0(v___y_2119_, v_isExporting_2126_, v___x_2141_, v___y_2117_, v___x_2153_, v___x_2176_);
v_isSharedCheck_2184_ = !lean_is_exclusive(v___x_2177_);
if (v_isSharedCheck_2184_ == 0)
{
lean_object* v_unused_2185_; 
v_unused_2185_ = lean_ctor_get(v___x_2177_, 0);
lean_dec(v_unused_2185_);
v___x_2179_ = v___x_2177_;
v_isShared_2180_ = v_isSharedCheck_2184_;
goto v_resetjp_2178_;
}
else
{
lean_dec(v___x_2177_);
v___x_2179_ = lean_box(0);
v_isShared_2180_ = v_isSharedCheck_2184_;
goto v_resetjp_2178_;
}
v_resetjp_2178_:
{
lean_object* v___x_2182_; 
if (v_isShared_2180_ == 0)
{
lean_ctor_set_tag(v___x_2179_, 1);
lean_ctor_set(v___x_2179_, 0, v_a_2175_);
v___x_2182_ = v___x_2179_;
goto v_reusejp_2181_;
}
else
{
lean_object* v_reuseFailAlloc_2183_; 
v_reuseFailAlloc_2183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2183_, 0, v_a_2175_);
v___x_2182_ = v_reuseFailAlloc_2183_;
goto v_reusejp_2181_;
}
v_reusejp_2181_:
{
return v___x_2182_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg___boxed(lean_object* v_x_2194_, lean_object* v_isExporting_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_){
_start:
{
uint8_t v_isExporting_boxed_2203_; lean_object* v_res_2204_; 
v_isExporting_boxed_2203_ = lean_unbox(v_isExporting_2195_);
v_res_2204_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg(v_x_2194_, v_isExporting_boxed_2203_, v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_, v___y_2200_, v___y_2201_);
lean_dec(v___y_2201_);
lean_dec_ref(v___y_2200_);
lean_dec(v___y_2199_);
lean_dec_ref(v___y_2198_);
lean_dec(v___y_2197_);
lean_dec_ref(v___y_2196_);
return v_res_2204_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg(lean_object* v_x_2205_, uint8_t v_when_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_){
_start:
{
if (v_when_2206_ == 0)
{
lean_object* v___x_2214_; 
lean_inc(v___y_2212_);
lean_inc_ref(v___y_2211_);
lean_inc(v___y_2210_);
lean_inc_ref(v___y_2209_);
lean_inc(v___y_2208_);
lean_inc_ref(v___y_2207_);
v___x_2214_ = lean_apply_7(v_x_2205_, v___y_2207_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_, v___y_2212_, lean_box(0));
return v___x_2214_;
}
else
{
uint8_t v___x_2215_; lean_object* v___x_2216_; 
v___x_2215_ = 0;
v___x_2216_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg(v_x_2205_, v___x_2215_, v___y_2207_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_, v___y_2212_);
return v___x_2216_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg___boxed(lean_object* v_x_2217_, lean_object* v_when_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_){
_start:
{
uint8_t v_when_boxed_2226_; lean_object* v_res_2227_; 
v_when_boxed_2226_ = lean_unbox(v_when_2218_);
v_res_2227_ = l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg(v_x_2217_, v_when_boxed_2226_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_);
lean_dec(v___y_2224_);
lean_dec_ref(v___y_2223_);
lean_dec(v___y_2222_);
lean_dec_ref(v___y_2221_);
lean_dec(v___y_2220_);
lean_dec_ref(v___y_2219_);
return v_res_2227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__1(lean_object* v___x_2228_, uint8_t v___x_2229_, lean_object* v_declName_2230_, lean_object* v_a_2231_, lean_object* v___x_2232_, size_t v___x_2233_, lean_object* v___x_2234_, uint8_t v___x_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_){
_start:
{
lean_object* v___x_2243_; 
v___x_2243_ = l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg(v___x_2228_, v___x_2229_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_);
if (lean_obj_tag(v___x_2243_) == 0)
{
lean_object* v_a_2244_; lean_object* v___x_2245_; lean_object* v___f_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; 
v_a_2244_ = lean_ctor_get(v___x_2243_, 0);
lean_inc_n(v_a_2244_, 2);
lean_dec_ref_known(v___x_2243_, 1);
v___x_2245_ = lean_box_usize(v___x_2233_);
v___f_2246_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___lam__0___boxed), 15, 6);
lean_closure_set(v___f_2246_, 0, v_a_2244_);
lean_closure_set(v___f_2246_, 1, v_declName_2230_);
lean_closure_set(v___f_2246_, 2, v_a_2231_);
lean_closure_set(v___f_2246_, 3, v___x_2232_);
lean_closure_set(v___f_2246_, 4, v___x_2245_);
lean_closure_set(v___f_2246_, 5, v___x_2234_);
v___x_2247_ = l_Lean_ConstantInfo_value_x21(v_a_2244_, v___x_2235_);
lean_dec(v_a_2244_);
v___x_2248_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v___x_2247_, v___f_2246_, v___x_2235_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_);
return v___x_2248_;
}
else
{
lean_object* v_a_2249_; lean_object* v___x_2251_; uint8_t v_isShared_2252_; uint8_t v_isSharedCheck_2256_; 
lean_dec(v___x_2232_);
lean_dec_ref(v_a_2231_);
lean_dec(v_declName_2230_);
v_a_2249_ = lean_ctor_get(v___x_2243_, 0);
v_isSharedCheck_2256_ = !lean_is_exclusive(v___x_2243_);
if (v_isSharedCheck_2256_ == 0)
{
v___x_2251_ = v___x_2243_;
v_isShared_2252_ = v_isSharedCheck_2256_;
goto v_resetjp_2250_;
}
else
{
lean_inc(v_a_2249_);
lean_dec(v___x_2243_);
v___x_2251_ = lean_box(0);
v_isShared_2252_ = v_isSharedCheck_2256_;
goto v_resetjp_2250_;
}
v_resetjp_2250_:
{
lean_object* v___x_2254_; 
if (v_isShared_2252_ == 0)
{
v___x_2254_ = v___x_2251_;
goto v_reusejp_2253_;
}
else
{
lean_object* v_reuseFailAlloc_2255_; 
v_reuseFailAlloc_2255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2255_, 0, v_a_2249_);
v___x_2254_ = v_reuseFailAlloc_2255_;
goto v_reusejp_2253_;
}
v_reusejp_2253_:
{
return v___x_2254_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__1___boxed(lean_object* v___x_2257_, lean_object* v___x_2258_, lean_object* v_declName_2259_, lean_object* v_a_2260_, lean_object* v___x_2261_, lean_object* v___x_2262_, lean_object* v___x_2263_, lean_object* v___x_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_){
_start:
{
uint8_t v___x_51209__boxed_2272_; size_t v___x_51213__boxed_2273_; uint8_t v___x_51215__boxed_2274_; lean_object* v_res_2275_; 
v___x_51209__boxed_2272_ = lean_unbox(v___x_2258_);
v___x_51213__boxed_2273_ = lean_unbox_usize(v___x_2262_);
lean_dec(v___x_2262_);
v___x_51215__boxed_2274_ = lean_unbox(v___x_2264_);
v_res_2275_ = l_Lean_Elab_Command_elabNewtype___lam__1(v___x_2257_, v___x_51209__boxed_2272_, v_declName_2259_, v_a_2260_, v___x_2261_, v___x_51213__boxed_2273_, v___x_2263_, v___x_51215__boxed_2274_, v___y_2265_, v___y_2266_, v___y_2267_, v___y_2268_, v___y_2269_, v___y_2270_);
lean_dec(v___y_2270_);
lean_dec_ref(v___y_2269_);
lean_dec(v___y_2268_);
lean_dec_ref(v___y_2267_);
lean_dec(v___y_2266_);
lean_dec_ref(v___y_2265_);
return v_res_2275_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50___redArg(lean_object* v_ref_2276_, lean_object* v_msg_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_){
_start:
{
lean_object* v_toCold_2285_; lean_object* v_currRecDepth_2286_; lean_object* v_ref_2287_; uint8_t v_diag_2288_; uint8_t v_suppressElabErrors_2289_; lean_object* v_ref_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; 
v_toCold_2285_ = lean_ctor_get(v___y_2282_, 0);
v_currRecDepth_2286_ = lean_ctor_get(v___y_2282_, 1);
v_ref_2287_ = lean_ctor_get(v___y_2282_, 2);
v_diag_2288_ = lean_ctor_get_uint8(v___y_2282_, sizeof(void*)*3);
v_suppressElabErrors_2289_ = lean_ctor_get_uint8(v___y_2282_, sizeof(void*)*3 + 1);
v_ref_2290_ = l_Lean_replaceRef(v_ref_2276_, v_ref_2287_);
lean_inc(v_currRecDepth_2286_);
lean_inc_ref(v_toCold_2285_);
v___x_2291_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2291_, 0, v_toCold_2285_);
lean_ctor_set(v___x_2291_, 1, v_currRecDepth_2286_);
lean_ctor_set(v___x_2291_, 2, v_ref_2290_);
lean_ctor_set_uint8(v___x_2291_, sizeof(void*)*3, v_diag_2288_);
lean_ctor_set_uint8(v___x_2291_, sizeof(void*)*3 + 1, v_suppressElabErrors_2289_);
v___x_2292_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(v_msg_2277_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_, v___x_2291_, v___y_2283_);
lean_dec_ref_known(v___x_2291_, 3);
return v___x_2292_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50___redArg___boxed(lean_object* v_ref_2293_, lean_object* v_msg_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_){
_start:
{
lean_object* v_res_2302_; 
v_res_2302_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50___redArg(v_ref_2293_, v_msg_2294_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_);
lean_dec(v___y_2300_);
lean_dec_ref(v___y_2299_);
lean_dec(v___y_2298_);
lean_dec_ref(v___y_2297_);
lean_dec(v___y_2296_);
lean_dec_ref(v___y_2295_);
lean_dec(v_ref_2293_);
return v_res_2302_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0(void){
_start:
{
lean_object* v___x_2303_; lean_object* v___x_2304_; 
v___x_2303_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0);
v___x_2304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2304_, 0, v___x_2303_);
return v___x_2304_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1(void){
_start:
{
lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; 
v___x_2305_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0);
v___x_2306_ = lean_unsigned_to_nat(0u);
v___x_2307_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2307_, 0, v___x_2306_);
lean_ctor_set(v___x_2307_, 1, v___x_2306_);
lean_ctor_set(v___x_2307_, 2, v___x_2306_);
lean_ctor_set(v___x_2307_, 3, v___x_2306_);
lean_ctor_set(v___x_2307_, 4, v___x_2305_);
lean_ctor_set(v___x_2307_, 5, v___x_2305_);
lean_ctor_set(v___x_2307_, 6, v___x_2305_);
lean_ctor_set(v___x_2307_, 7, v___x_2305_);
lean_ctor_set(v___x_2307_, 8, v___x_2305_);
lean_ctor_set(v___x_2307_, 9, v___x_2305_);
lean_ctor_set(v___x_2307_, 10, v___x_2305_);
return v___x_2307_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2(void){
_start:
{
lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; 
v___x_2308_ = lean_unsigned_to_nat(32u);
v___x_2309_ = lean_mk_empty_array_with_capacity(v___x_2308_);
v___x_2310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2310_, 0, v___x_2309_);
return v___x_2310_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__3(void){
_start:
{
size_t v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; 
v___x_2311_ = ((size_t)5ULL);
v___x_2312_ = lean_unsigned_to_nat(0u);
v___x_2313_ = lean_unsigned_to_nat(32u);
v___x_2314_ = lean_mk_empty_array_with_capacity(v___x_2313_);
v___x_2315_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2);
v___x_2316_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2316_, 0, v___x_2315_);
lean_ctor_set(v___x_2316_, 1, v___x_2314_);
lean_ctor_set(v___x_2316_, 2, v___x_2312_);
lean_ctor_set(v___x_2316_, 3, v___x_2312_);
lean_ctor_set_usize(v___x_2316_, 4, v___x_2311_);
return v___x_2316_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4(void){
_start:
{
lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2317_ = lean_box(1);
v___x_2318_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__3);
v___x_2319_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0);
v___x_2320_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2320_, 0, v___x_2319_);
lean_ctor_set(v___x_2320_, 1, v___x_2318_);
lean_ctor_set(v___x_2320_, 2, v___x_2317_);
return v___x_2320_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6(void){
_start:
{
lean_object* v___x_2322_; lean_object* v___x_2323_; 
v___x_2322_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__5));
v___x_2323_ = l_Lean_stringToMessageData(v___x_2322_);
return v___x_2323_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8(void){
_start:
{
lean_object* v___x_2325_; lean_object* v___x_2326_; 
v___x_2325_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__7));
v___x_2326_ = l_Lean_stringToMessageData(v___x_2325_);
return v___x_2326_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10(void){
_start:
{
lean_object* v___x_2328_; lean_object* v___x_2329_; 
v___x_2328_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__9));
v___x_2329_ = l_Lean_stringToMessageData(v___x_2328_);
return v___x_2329_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12(void){
_start:
{
lean_object* v___x_2331_; lean_object* v___x_2332_; 
v___x_2331_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__11));
v___x_2332_ = l_Lean_stringToMessageData(v___x_2331_);
return v___x_2332_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14(void){
_start:
{
lean_object* v___x_2334_; lean_object* v___x_2335_; 
v___x_2334_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__13));
v___x_2335_ = l_Lean_stringToMessageData(v___x_2334_);
return v___x_2335_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16(void){
_start:
{
lean_object* v___x_2337_; lean_object* v___x_2338_; 
v___x_2337_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__15));
v___x_2338_ = l_Lean_stringToMessageData(v___x_2337_);
return v___x_2338_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18(void){
_start:
{
lean_object* v___x_2340_; lean_object* v___x_2341_; 
v___x_2340_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__17));
v___x_2341_ = l_Lean_stringToMessageData(v___x_2340_);
return v___x_2341_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg(lean_object* v_msg_2342_, lean_object* v_declHint_2343_, lean_object* v___y_2344_){
_start:
{
lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v_env_2348_; uint8_t v___x_2349_; 
v___x_2346_ = lean_box(0);
v___x_2347_ = lean_st_ref_get(v___y_2344_);
v_env_2348_ = lean_ctor_get(v___x_2347_, 0);
lean_inc_ref(v_env_2348_);
lean_dec(v___x_2347_);
v___x_2349_ = l_Lean_Name_isAnonymous(v_declHint_2343_);
if (v___x_2349_ == 0)
{
uint8_t v_isExporting_2350_; 
v_isExporting_2350_ = lean_ctor_get_uint8(v_env_2348_, sizeof(void*)*8);
if (v_isExporting_2350_ == 0)
{
lean_object* v___x_2351_; 
lean_dec_ref(v_env_2348_);
lean_dec(v_declHint_2343_);
v___x_2351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2351_, 0, v_msg_2342_);
return v___x_2351_;
}
else
{
lean_object* v___x_2352_; uint8_t v___x_2353_; 
lean_inc_ref(v_env_2348_);
v___x_2352_ = l_Lean_Environment_setExporting(v_env_2348_, v___x_2349_);
lean_inc(v_declHint_2343_);
lean_inc_ref(v___x_2352_);
v___x_2353_ = l_Lean_Environment_contains(v___x_2352_, v_declHint_2343_, v_isExporting_2350_);
if (v___x_2353_ == 0)
{
lean_object* v___x_2354_; 
lean_dec_ref(v___x_2352_);
lean_dec_ref(v_env_2348_);
lean_dec(v_declHint_2343_);
v___x_2354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2354_, 0, v_msg_2342_);
return v___x_2354_;
}
else
{
lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v_c_2360_; lean_object* v___x_2361_; 
v___x_2355_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1);
v___x_2356_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4);
v___x_2357_ = l_Lean_Options_empty;
v___x_2358_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2358_, 0, v___x_2352_);
lean_ctor_set(v___x_2358_, 1, v___x_2355_);
lean_ctor_set(v___x_2358_, 2, v___x_2356_);
lean_ctor_set(v___x_2358_, 3, v___x_2357_);
lean_inc(v_declHint_2343_);
v___x_2359_ = l_Lean_MessageData_ofConstName(v_declHint_2343_, v___x_2349_);
v_c_2360_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2360_, 0, v___x_2358_);
lean_ctor_set(v_c_2360_, 1, v___x_2359_);
v___x_2361_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2348_, v_declHint_2343_);
if (lean_obj_tag(v___x_2361_) == 0)
{
lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; 
lean_dec_ref(v_env_2348_);
lean_dec(v_declHint_2343_);
v___x_2362_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6);
v___x_2363_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2363_, 0, v___x_2362_);
lean_ctor_set(v___x_2363_, 1, v_c_2360_);
v___x_2364_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8);
v___x_2365_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2365_, 0, v___x_2363_);
lean_ctor_set(v___x_2365_, 1, v___x_2364_);
v___x_2366_ = l_Lean_MessageData_note(v___x_2365_);
v___x_2367_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2367_, 0, v_msg_2342_);
lean_ctor_set(v___x_2367_, 1, v___x_2366_);
v___x_2368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2368_, 0, v___x_2367_);
return v___x_2368_;
}
else
{
lean_object* v_val_2369_; lean_object* v___x_2371_; uint8_t v_isShared_2372_; uint8_t v_isSharedCheck_2403_; 
v_val_2369_ = lean_ctor_get(v___x_2361_, 0);
v_isSharedCheck_2403_ = !lean_is_exclusive(v___x_2361_);
if (v_isSharedCheck_2403_ == 0)
{
v___x_2371_ = v___x_2361_;
v_isShared_2372_ = v_isSharedCheck_2403_;
goto v_resetjp_2370_;
}
else
{
lean_inc(v_val_2369_);
lean_dec(v___x_2361_);
v___x_2371_ = lean_box(0);
v_isShared_2372_ = v_isSharedCheck_2403_;
goto v_resetjp_2370_;
}
v_resetjp_2370_:
{
lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v_mod_2375_; uint8_t v___x_2376_; 
v___x_2373_ = l_Lean_Environment_header(v_env_2348_);
lean_dec_ref(v_env_2348_);
v___x_2374_ = l_Lean_EnvironmentHeader_moduleNames(v___x_2373_);
v_mod_2375_ = lean_array_get(v___x_2346_, v___x_2374_, v_val_2369_);
lean_dec(v_val_2369_);
lean_dec_ref(v___x_2374_);
v___x_2376_ = l_Lean_isPrivateName(v_declHint_2343_);
lean_dec(v_declHint_2343_);
if (v___x_2376_ == 0)
{
lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2388_; 
v___x_2377_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10);
v___x_2378_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2378_, 0, v___x_2377_);
lean_ctor_set(v___x_2378_, 1, v_c_2360_);
v___x_2379_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12);
v___x_2380_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2380_, 0, v___x_2378_);
lean_ctor_set(v___x_2380_, 1, v___x_2379_);
v___x_2381_ = l_Lean_MessageData_ofName(v_mod_2375_);
v___x_2382_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2382_, 0, v___x_2380_);
lean_ctor_set(v___x_2382_, 1, v___x_2381_);
v___x_2383_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14);
v___x_2384_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2384_, 0, v___x_2382_);
lean_ctor_set(v___x_2384_, 1, v___x_2383_);
v___x_2385_ = l_Lean_MessageData_note(v___x_2384_);
v___x_2386_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2386_, 0, v_msg_2342_);
lean_ctor_set(v___x_2386_, 1, v___x_2385_);
if (v_isShared_2372_ == 0)
{
lean_ctor_set_tag(v___x_2371_, 0);
lean_ctor_set(v___x_2371_, 0, v___x_2386_);
v___x_2388_ = v___x_2371_;
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
else
{
lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2401_; 
v___x_2390_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6);
v___x_2391_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2391_, 0, v___x_2390_);
lean_ctor_set(v___x_2391_, 1, v_c_2360_);
v___x_2392_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16);
v___x_2393_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2393_, 0, v___x_2391_);
lean_ctor_set(v___x_2393_, 1, v___x_2392_);
v___x_2394_ = l_Lean_MessageData_ofName(v_mod_2375_);
v___x_2395_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2395_, 0, v___x_2393_);
lean_ctor_set(v___x_2395_, 1, v___x_2394_);
v___x_2396_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18);
v___x_2397_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2397_, 0, v___x_2395_);
lean_ctor_set(v___x_2397_, 1, v___x_2396_);
v___x_2398_ = l_Lean_MessageData_note(v___x_2397_);
v___x_2399_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2399_, 0, v_msg_2342_);
lean_ctor_set(v___x_2399_, 1, v___x_2398_);
if (v_isShared_2372_ == 0)
{
lean_ctor_set_tag(v___x_2371_, 0);
lean_ctor_set(v___x_2371_, 0, v___x_2399_);
v___x_2401_ = v___x_2371_;
goto v_reusejp_2400_;
}
else
{
lean_object* v_reuseFailAlloc_2402_; 
v_reuseFailAlloc_2402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2402_, 0, v___x_2399_);
v___x_2401_ = v_reuseFailAlloc_2402_;
goto v_reusejp_2400_;
}
v_reusejp_2400_:
{
return v___x_2401_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2404_; 
lean_dec_ref(v_env_2348_);
lean_dec(v_declHint_2343_);
v___x_2404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2404_, 0, v_msg_2342_);
return v___x_2404_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___boxed(lean_object* v_msg_2405_, lean_object* v_declHint_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_){
_start:
{
lean_object* v_res_2409_; 
v_res_2409_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg(v_msg_2405_, v_declHint_2406_, v___y_2407_);
lean_dec(v___y_2407_);
return v_res_2409_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49(lean_object* v_msg_2410_, lean_object* v_declHint_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_){
_start:
{
lean_object* v___x_2419_; lean_object* v_a_2420_; lean_object* v___x_2422_; uint8_t v_isShared_2423_; uint8_t v_isSharedCheck_2429_; 
v___x_2419_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg(v_msg_2410_, v_declHint_2411_, v___y_2417_);
v_a_2420_ = lean_ctor_get(v___x_2419_, 0);
v_isSharedCheck_2429_ = !lean_is_exclusive(v___x_2419_);
if (v_isSharedCheck_2429_ == 0)
{
v___x_2422_ = v___x_2419_;
v_isShared_2423_ = v_isSharedCheck_2429_;
goto v_resetjp_2421_;
}
else
{
lean_inc(v_a_2420_);
lean_dec(v___x_2419_);
v___x_2422_ = lean_box(0);
v_isShared_2423_ = v_isSharedCheck_2429_;
goto v_resetjp_2421_;
}
v_resetjp_2421_:
{
lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2427_; 
v___x_2424_ = l_Lean_unknownIdentifierMessageTag;
v___x_2425_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2425_, 0, v___x_2424_);
lean_ctor_set(v___x_2425_, 1, v_a_2420_);
if (v_isShared_2423_ == 0)
{
lean_ctor_set(v___x_2422_, 0, v___x_2425_);
v___x_2427_ = v___x_2422_;
goto v_reusejp_2426_;
}
else
{
lean_object* v_reuseFailAlloc_2428_; 
v_reuseFailAlloc_2428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2428_, 0, v___x_2425_);
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
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49___boxed(lean_object* v_msg_2430_, lean_object* v_declHint_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_){
_start:
{
lean_object* v_res_2439_; 
v_res_2439_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49(v_msg_2430_, v_declHint_2431_, v___y_2432_, v___y_2433_, v___y_2434_, v___y_2435_, v___y_2436_, v___y_2437_);
lean_dec(v___y_2437_);
lean_dec_ref(v___y_2436_);
lean_dec(v___y_2435_);
lean_dec_ref(v___y_2434_);
lean_dec(v___y_2433_);
lean_dec_ref(v___y_2432_);
return v_res_2439_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37___redArg(lean_object* v_ref_2440_, lean_object* v_msg_2441_, lean_object* v_declHint_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_){
_start:
{
lean_object* v___x_2450_; lean_object* v_a_2451_; lean_object* v___x_2452_; 
v___x_2450_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49(v_msg_2441_, v_declHint_2442_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_);
v_a_2451_ = lean_ctor_get(v___x_2450_, 0);
lean_inc(v_a_2451_);
lean_dec_ref(v___x_2450_);
v___x_2452_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50___redArg(v_ref_2440_, v_a_2451_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_);
return v___x_2452_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37___redArg___boxed(lean_object* v_ref_2453_, lean_object* v_msg_2454_, lean_object* v_declHint_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_){
_start:
{
lean_object* v_res_2463_; 
v_res_2463_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37___redArg(v_ref_2453_, v_msg_2454_, v_declHint_2455_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_, v___y_2460_, v___y_2461_);
lean_dec(v___y_2461_);
lean_dec_ref(v___y_2460_);
lean_dec(v___y_2459_);
lean_dec_ref(v___y_2458_);
lean_dec(v___y_2457_);
lean_dec_ref(v___y_2456_);
lean_dec(v_ref_2453_);
return v_res_2463_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1(void){
_start:
{
lean_object* v___x_2465_; lean_object* v___x_2466_; 
v___x_2465_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__0));
v___x_2466_ = l_Lean_stringToMessageData(v___x_2465_);
return v___x_2466_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg(lean_object* v_ref_2467_, lean_object* v_constName_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_){
_start:
{
lean_object* v___x_2476_; uint8_t v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; 
v___x_2476_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1);
v___x_2477_ = 0;
lean_inc(v_constName_2468_);
v___x_2478_ = l_Lean_MessageData_ofConstName(v_constName_2468_, v___x_2477_);
v___x_2479_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2479_, 0, v___x_2476_);
lean_ctor_set(v___x_2479_, 1, v___x_2478_);
v___x_2480_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1);
v___x_2481_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2481_, 0, v___x_2479_);
lean_ctor_set(v___x_2481_, 1, v___x_2480_);
v___x_2482_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37___redArg(v_ref_2467_, v___x_2481_, v_constName_2468_, v___y_2469_, v___y_2470_, v___y_2471_, v___y_2472_, v___y_2473_, v___y_2474_);
return v___x_2482_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___boxed(lean_object* v_ref_2483_, lean_object* v_constName_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_){
_start:
{
lean_object* v_res_2492_; 
v_res_2492_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg(v_ref_2483_, v_constName_2484_, v___y_2485_, v___y_2486_, v___y_2487_, v___y_2488_, v___y_2489_, v___y_2490_);
lean_dec(v___y_2490_);
lean_dec_ref(v___y_2489_);
lean_dec(v___y_2488_);
lean_dec_ref(v___y_2487_);
lean_dec(v___y_2486_);
lean_dec_ref(v___y_2485_);
lean_dec(v_ref_2483_);
return v_res_2492_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg(lean_object* v_constName_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_){
_start:
{
lean_object* v_ref_2501_; lean_object* v___x_2502_; 
v_ref_2501_ = lean_ctor_get(v___y_2498_, 2);
v___x_2502_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg(v_ref_2501_, v_constName_2493_, v___y_2494_, v___y_2495_, v___y_2496_, v___y_2497_, v___y_2498_, v___y_2499_);
return v___x_2502_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg___boxed(lean_object* v_constName_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_){
_start:
{
lean_object* v_res_2511_; 
v_res_2511_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg(v_constName_2503_, v___y_2504_, v___y_2505_, v___y_2506_, v___y_2507_, v___y_2508_, v___y_2509_);
lean_dec(v___y_2509_);
lean_dec_ref(v___y_2508_);
lean_dec(v___y_2507_);
lean_dec_ref(v___y_2506_);
lean_dec(v___y_2505_);
lean_dec_ref(v___y_2504_);
return v_res_2511_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5(lean_object* v_constName_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_){
_start:
{
lean_object* v___x_2520_; lean_object* v_env_2521_; uint8_t v___x_2522_; lean_object* v___x_2523_; 
v___x_2520_ = lean_st_ref_get(v___y_2518_);
v_env_2521_ = lean_ctor_get(v___x_2520_, 0);
lean_inc_ref(v_env_2521_);
lean_dec(v___x_2520_);
v___x_2522_ = 0;
lean_inc(v_constName_2512_);
v___x_2523_ = l_Lean_Environment_find_x3f(v_env_2521_, v_constName_2512_, v___x_2522_);
if (lean_obj_tag(v___x_2523_) == 0)
{
lean_object* v___x_2524_; 
v___x_2524_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg(v_constName_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_, v___y_2518_);
return v___x_2524_;
}
else
{
lean_object* v_val_2525_; lean_object* v___x_2527_; uint8_t v_isShared_2528_; uint8_t v_isSharedCheck_2532_; 
lean_dec(v_constName_2512_);
v_val_2525_ = lean_ctor_get(v___x_2523_, 0);
v_isSharedCheck_2532_ = !lean_is_exclusive(v___x_2523_);
if (v_isSharedCheck_2532_ == 0)
{
v___x_2527_ = v___x_2523_;
v_isShared_2528_ = v_isSharedCheck_2532_;
goto v_resetjp_2526_;
}
else
{
lean_inc(v_val_2525_);
lean_dec(v___x_2523_);
v___x_2527_ = lean_box(0);
v_isShared_2528_ = v_isSharedCheck_2532_;
goto v_resetjp_2526_;
}
v_resetjp_2526_:
{
lean_object* v___x_2530_; 
if (v_isShared_2528_ == 0)
{
lean_ctor_set_tag(v___x_2527_, 0);
v___x_2530_ = v___x_2527_;
goto v_reusejp_2529_;
}
else
{
lean_object* v_reuseFailAlloc_2531_; 
v_reuseFailAlloc_2531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2531_, 0, v_val_2525_);
v___x_2530_ = v_reuseFailAlloc_2531_;
goto v_reusejp_2529_;
}
v_reusejp_2529_:
{
return v___x_2530_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5___boxed(lean_object* v_constName_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_){
_start:
{
lean_object* v_res_2541_; 
v_res_2541_ = l_Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5(v_constName_2533_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_);
lean_dec(v___y_2539_);
lean_dec_ref(v___y_2538_);
lean_dec(v___y_2537_);
lean_dec_ref(v___y_2536_);
lean_dec(v___y_2535_);
lean_dec_ref(v___y_2534_);
return v_res_2541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___redArg(lean_object* v_t_2542_, lean_object* v___y_2543_){
_start:
{
lean_object* v___x_2545_; lean_object* v_infoState_2546_; uint8_t v_enabled_2547_; 
v___x_2545_ = lean_st_ref_get(v___y_2543_);
v_infoState_2546_ = lean_ctor_get(v___x_2545_, 8);
lean_inc_ref(v_infoState_2546_);
lean_dec(v___x_2545_);
v_enabled_2547_ = lean_ctor_get_uint8(v_infoState_2546_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2546_);
if (v_enabled_2547_ == 0)
{
lean_object* v___x_2548_; lean_object* v___x_2549_; 
lean_dec_ref(v_t_2542_);
v___x_2548_ = lean_box(0);
v___x_2549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2549_, 0, v___x_2548_);
return v___x_2549_;
}
else
{
lean_object* v___x_2550_; lean_object* v_infoState_2551_; lean_object* v_env_2552_; lean_object* v_messages_2553_; lean_object* v_scopes_2554_; lean_object* v_usedQuotCtxts_2555_; lean_object* v_nextMacroScope_2556_; lean_object* v_maxRecDepth_2557_; lean_object* v_ngen_2558_; lean_object* v_auxDeclNGen_2559_; lean_object* v_traceState_2560_; lean_object* v_snapshotTasks_2561_; lean_object* v_prevLinterStates_2562_; lean_object* v_codeQualityEntryTasks_2563_; lean_object* v___x_2565_; uint8_t v_isShared_2566_; uint8_t v_isSharedCheck_2585_; 
v___x_2550_ = lean_st_ref_take(v___y_2543_);
v_infoState_2551_ = lean_ctor_get(v___x_2550_, 8);
v_env_2552_ = lean_ctor_get(v___x_2550_, 0);
v_messages_2553_ = lean_ctor_get(v___x_2550_, 1);
v_scopes_2554_ = lean_ctor_get(v___x_2550_, 2);
v_usedQuotCtxts_2555_ = lean_ctor_get(v___x_2550_, 3);
v_nextMacroScope_2556_ = lean_ctor_get(v___x_2550_, 4);
v_maxRecDepth_2557_ = lean_ctor_get(v___x_2550_, 5);
v_ngen_2558_ = lean_ctor_get(v___x_2550_, 6);
v_auxDeclNGen_2559_ = lean_ctor_get(v___x_2550_, 7);
v_traceState_2560_ = lean_ctor_get(v___x_2550_, 9);
v_snapshotTasks_2561_ = lean_ctor_get(v___x_2550_, 10);
v_prevLinterStates_2562_ = lean_ctor_get(v___x_2550_, 11);
v_codeQualityEntryTasks_2563_ = lean_ctor_get(v___x_2550_, 12);
v_isSharedCheck_2585_ = !lean_is_exclusive(v___x_2550_);
if (v_isSharedCheck_2585_ == 0)
{
v___x_2565_ = v___x_2550_;
v_isShared_2566_ = v_isSharedCheck_2585_;
goto v_resetjp_2564_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2563_);
lean_inc(v_prevLinterStates_2562_);
lean_inc(v_snapshotTasks_2561_);
lean_inc(v_traceState_2560_);
lean_inc(v_infoState_2551_);
lean_inc(v_auxDeclNGen_2559_);
lean_inc(v_ngen_2558_);
lean_inc(v_maxRecDepth_2557_);
lean_inc(v_nextMacroScope_2556_);
lean_inc(v_usedQuotCtxts_2555_);
lean_inc(v_scopes_2554_);
lean_inc(v_messages_2553_);
lean_inc(v_env_2552_);
lean_dec(v___x_2550_);
v___x_2565_ = lean_box(0);
v_isShared_2566_ = v_isSharedCheck_2585_;
goto v_resetjp_2564_;
}
v_resetjp_2564_:
{
uint8_t v_enabled_2567_; lean_object* v_assignment_2568_; lean_object* v_lazyAssignment_2569_; lean_object* v_trees_2570_; lean_object* v___x_2572_; uint8_t v_isShared_2573_; uint8_t v_isSharedCheck_2584_; 
v_enabled_2567_ = lean_ctor_get_uint8(v_infoState_2551_, sizeof(void*)*3);
v_assignment_2568_ = lean_ctor_get(v_infoState_2551_, 0);
v_lazyAssignment_2569_ = lean_ctor_get(v_infoState_2551_, 1);
v_trees_2570_ = lean_ctor_get(v_infoState_2551_, 2);
v_isSharedCheck_2584_ = !lean_is_exclusive(v_infoState_2551_);
if (v_isSharedCheck_2584_ == 0)
{
v___x_2572_ = v_infoState_2551_;
v_isShared_2573_ = v_isSharedCheck_2584_;
goto v_resetjp_2571_;
}
else
{
lean_inc(v_trees_2570_);
lean_inc(v_lazyAssignment_2569_);
lean_inc(v_assignment_2568_);
lean_dec(v_infoState_2551_);
v___x_2572_ = lean_box(0);
v_isShared_2573_ = v_isSharedCheck_2584_;
goto v_resetjp_2571_;
}
v_resetjp_2571_:
{
lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2577_; 
v___x_2574_ = lean_box(0);
v___x_2575_ = l_Lean_PersistentArray_push___redArg(v_trees_2570_, v_t_2542_);
if (v_isShared_2573_ == 0)
{
lean_ctor_set(v___x_2572_, 2, v___x_2575_);
v___x_2577_ = v___x_2572_;
goto v_reusejp_2576_;
}
else
{
lean_object* v_reuseFailAlloc_2583_; 
v_reuseFailAlloc_2583_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2583_, 0, v_assignment_2568_);
lean_ctor_set(v_reuseFailAlloc_2583_, 1, v_lazyAssignment_2569_);
lean_ctor_set(v_reuseFailAlloc_2583_, 2, v___x_2575_);
lean_ctor_set_uint8(v_reuseFailAlloc_2583_, sizeof(void*)*3, v_enabled_2567_);
v___x_2577_ = v_reuseFailAlloc_2583_;
goto v_reusejp_2576_;
}
v_reusejp_2576_:
{
lean_object* v___x_2579_; 
if (v_isShared_2566_ == 0)
{
lean_ctor_set(v___x_2565_, 8, v___x_2577_);
v___x_2579_ = v___x_2565_;
goto v_reusejp_2578_;
}
else
{
lean_object* v_reuseFailAlloc_2582_; 
v_reuseFailAlloc_2582_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2582_, 0, v_env_2552_);
lean_ctor_set(v_reuseFailAlloc_2582_, 1, v_messages_2553_);
lean_ctor_set(v_reuseFailAlloc_2582_, 2, v_scopes_2554_);
lean_ctor_set(v_reuseFailAlloc_2582_, 3, v_usedQuotCtxts_2555_);
lean_ctor_set(v_reuseFailAlloc_2582_, 4, v_nextMacroScope_2556_);
lean_ctor_set(v_reuseFailAlloc_2582_, 5, v_maxRecDepth_2557_);
lean_ctor_set(v_reuseFailAlloc_2582_, 6, v_ngen_2558_);
lean_ctor_set(v_reuseFailAlloc_2582_, 7, v_auxDeclNGen_2559_);
lean_ctor_set(v_reuseFailAlloc_2582_, 8, v___x_2577_);
lean_ctor_set(v_reuseFailAlloc_2582_, 9, v_traceState_2560_);
lean_ctor_set(v_reuseFailAlloc_2582_, 10, v_snapshotTasks_2561_);
lean_ctor_set(v_reuseFailAlloc_2582_, 11, v_prevLinterStates_2562_);
lean_ctor_set(v_reuseFailAlloc_2582_, 12, v_codeQualityEntryTasks_2563_);
v___x_2579_ = v_reuseFailAlloc_2582_;
goto v_reusejp_2578_;
}
v_reusejp_2578_:
{
lean_object* v___x_2580_; lean_object* v___x_2581_; 
v___x_2580_ = lean_st_ref_put(v___y_2543_, v___x_2579_);
v___x_2581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2581_, 0, v___x_2574_);
return v___x_2581_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___redArg___boxed(lean_object* v_t_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_){
_start:
{
lean_object* v_res_2589_; 
v_res_2589_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___redArg(v_t_2586_, v___y_2587_);
lean_dec(v___y_2587_);
return v_res_2589_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__0(void){
_start:
{
lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; 
v___x_2590_ = lean_unsigned_to_nat(32u);
v___x_2591_ = lean_mk_empty_array_with_capacity(v___x_2590_);
v___x_2592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2592_, 0, v___x_2591_);
return v___x_2592_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__1(void){
_start:
{
size_t v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; 
v___x_2593_ = ((size_t)5ULL);
v___x_2594_ = lean_unsigned_to_nat(0u);
v___x_2595_ = lean_unsigned_to_nat(32u);
v___x_2596_ = lean_mk_empty_array_with_capacity(v___x_2595_);
v___x_2597_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__0);
v___x_2598_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2598_, 0, v___x_2597_);
lean_ctor_set(v___x_2598_, 1, v___x_2596_);
lean_ctor_set(v___x_2598_, 2, v___x_2594_);
lean_ctor_set(v___x_2598_, 3, v___x_2594_);
lean_ctor_set_usize(v___x_2598_, 4, v___x_2593_);
return v___x_2598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9(lean_object* v_t_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_){
_start:
{
lean_object* v___x_2603_; lean_object* v_infoState_2604_; uint8_t v_enabled_2605_; 
v___x_2603_ = lean_st_ref_get(v___y_2601_);
v_infoState_2604_ = lean_ctor_get(v___x_2603_, 8);
lean_inc_ref(v_infoState_2604_);
lean_dec(v___x_2603_);
v_enabled_2605_ = lean_ctor_get_uint8(v_infoState_2604_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2604_);
if (v_enabled_2605_ == 0)
{
lean_object* v___x_2606_; lean_object* v___x_2607_; 
lean_dec_ref(v_t_2599_);
v___x_2606_ = lean_box(0);
v___x_2607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2607_, 0, v___x_2606_);
return v___x_2607_;
}
else
{
lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; 
v___x_2608_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__1);
v___x_2609_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2609_, 0, v_t_2599_);
lean_ctor_set(v___x_2609_, 1, v___x_2608_);
v___x_2610_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___redArg(v___x_2609_, v___y_2601_);
return v___x_2610_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___boxed(lean_object* v_t_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_){
_start:
{
lean_object* v_res_2615_; 
v_res_2615_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9(v_t_2611_, v___y_2612_, v___y_2613_);
lean_dec(v___y_2613_);
lean_dec_ref(v___y_2612_);
return v_res_2615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___redArg(lean_object* v_msgData_2616_, lean_object* v_macroStack_2617_, lean_object* v___y_2618_){
_start:
{
lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v_scopes_2622_; lean_object* v___x_2623_; lean_object* v_opts_2624_; lean_object* v___x_2625_; uint8_t v___x_2626_; 
v___x_2620_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2621_ = lean_st_ref_get(v___y_2618_);
v_scopes_2622_ = lean_ctor_get(v___x_2621_, 2);
lean_inc(v_scopes_2622_);
lean_dec(v___x_2621_);
v___x_2623_ = l_List_head_x21___redArg(v___x_2620_, v_scopes_2622_);
lean_dec(v_scopes_2622_);
v_opts_2624_ = lean_ctor_get(v___x_2623_, 1);
lean_inc_ref(v_opts_2624_);
lean_dec(v___x_2623_);
v___x_2625_ = l_Lean_Elab_pp_macroStack;
v___x_2626_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13(v_opts_2624_, v___x_2625_);
lean_dec_ref(v_opts_2624_);
if (v___x_2626_ == 0)
{
lean_object* v___x_2627_; 
lean_dec(v_macroStack_2617_);
v___x_2627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2627_, 0, v_msgData_2616_);
return v___x_2627_;
}
else
{
if (lean_obj_tag(v_macroStack_2617_) == 0)
{
lean_object* v___x_2628_; 
v___x_2628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2628_, 0, v_msgData_2616_);
return v___x_2628_;
}
else
{
lean_object* v_head_2629_; lean_object* v_after_2630_; lean_object* v___x_2632_; uint8_t v_isShared_2633_; uint8_t v_isSharedCheck_2645_; 
v_head_2629_ = lean_ctor_get(v_macroStack_2617_, 0);
lean_inc(v_head_2629_);
v_after_2630_ = lean_ctor_get(v_head_2629_, 1);
v_isSharedCheck_2645_ = !lean_is_exclusive(v_head_2629_);
if (v_isSharedCheck_2645_ == 0)
{
lean_object* v_unused_2646_; 
v_unused_2646_ = lean_ctor_get(v_head_2629_, 0);
lean_dec(v_unused_2646_);
v___x_2632_ = v_head_2629_;
v_isShared_2633_ = v_isSharedCheck_2645_;
goto v_resetjp_2631_;
}
else
{
lean_inc(v_after_2630_);
lean_dec(v_head_2629_);
v___x_2632_ = lean_box(0);
v_isShared_2633_ = v_isSharedCheck_2645_;
goto v_resetjp_2631_;
}
v_resetjp_2631_:
{
lean_object* v___x_2634_; lean_object* v___x_2636_; 
v___x_2634_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0);
if (v_isShared_2633_ == 0)
{
lean_ctor_set_tag(v___x_2632_, 7);
lean_ctor_set(v___x_2632_, 1, v___x_2634_);
lean_ctor_set(v___x_2632_, 0, v_msgData_2616_);
v___x_2636_ = v___x_2632_;
goto v_reusejp_2635_;
}
else
{
lean_object* v_reuseFailAlloc_2644_; 
v_reuseFailAlloc_2644_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2644_, 0, v_msgData_2616_);
lean_ctor_set(v_reuseFailAlloc_2644_, 1, v___x_2634_);
v___x_2636_ = v_reuseFailAlloc_2644_;
goto v_reusejp_2635_;
}
v_reusejp_2635_:
{
lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v_msgData_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; 
v___x_2637_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__2);
v___x_2638_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2638_, 0, v___x_2636_);
lean_ctor_set(v___x_2638_, 1, v___x_2637_);
v___x_2639_ = l_Lean_MessageData_ofSyntax(v_after_2630_);
v___x_2640_ = l_Lean_indentD(v___x_2639_);
v_msgData_2641_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_2641_, 0, v___x_2638_);
lean_ctor_set(v_msgData_2641_, 1, v___x_2640_);
v___x_2642_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14(v_msgData_2641_, v_macroStack_2617_);
v___x_2643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2643_, 0, v___x_2642_);
return v___x_2643_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___redArg___boxed(lean_object* v_msgData_2647_, lean_object* v_macroStack_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_){
_start:
{
lean_object* v_res_2651_; 
v_res_2651_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___redArg(v_msgData_2647_, v_macroStack_2648_, v___y_2649_);
lean_dec(v___y_2649_);
return v_res_2651_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(lean_object* v_msgData_2652_, lean_object* v___y_2653_){
_start:
{
lean_object* v___x_2655_; lean_object* v_env_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v_scopes_2659_; lean_object* v___x_2660_; lean_object* v_opts_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; 
v___x_2655_ = lean_st_ref_get(v___y_2653_);
v_env_2656_ = lean_ctor_get(v___x_2655_, 0);
lean_inc_ref(v_env_2656_);
lean_dec(v___x_2655_);
v___x_2657_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2658_ = lean_st_ref_get(v___y_2653_);
v_scopes_2659_ = lean_ctor_get(v___x_2658_, 2);
lean_inc(v_scopes_2659_);
lean_dec(v___x_2658_);
v___x_2660_ = l_List_head_x21___redArg(v___x_2657_, v_scopes_2659_);
lean_dec(v_scopes_2659_);
v_opts_2661_ = lean_ctor_get(v___x_2660_, 1);
lean_inc_ref(v_opts_2661_);
lean_dec(v___x_2660_);
v___x_2662_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1);
v___x_2663_ = lean_unsigned_to_nat(32u);
v___x_2664_ = lean_mk_empty_array_with_capacity(v___x_2663_);
lean_dec_ref(v___x_2664_);
v___x_2665_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4);
v___x_2666_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2666_, 0, v_env_2656_);
lean_ctor_set(v___x_2666_, 1, v___x_2662_);
lean_ctor_set(v___x_2666_, 2, v___x_2665_);
lean_ctor_set(v___x_2666_, 3, v_opts_2661_);
v___x_2667_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2667_, 0, v___x_2666_);
lean_ctor_set(v___x_2667_, 1, v_msgData_2652_);
v___x_2668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2668_, 0, v___x_2667_);
return v___x_2668_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___boxed(lean_object* v_msgData_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_){
_start:
{
lean_object* v_res_2672_; 
v_res_2672_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(v_msgData_2669_, v___y_2670_);
lean_dec(v___y_2670_);
return v_res_2672_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(lean_object* v_msg_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_){
_start:
{
lean_object* v___x_2677_; 
v___x_2677_ = l_Lean_Elab_Command_getRef___redArg(v___y_2674_);
if (lean_obj_tag(v___x_2677_) == 0)
{
lean_object* v_a_2678_; lean_object* v_macroStack_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v_a_2682_; lean_object* v___x_2683_; lean_object* v_a_2684_; lean_object* v___x_2686_; uint8_t v_isShared_2687_; uint8_t v_isSharedCheck_2692_; 
v_a_2678_ = lean_ctor_get(v___x_2677_, 0);
lean_inc(v_a_2678_);
lean_dec_ref_known(v___x_2677_, 1);
v_macroStack_2679_ = lean_ctor_get(v___y_2674_, 4);
v___x_2680_ = l_Lean_Elab_getBetterRef(v_a_2678_, v_macroStack_2679_);
lean_dec(v_a_2678_);
v___x_2681_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(v_msg_2673_, v___y_2675_);
v_a_2682_ = lean_ctor_get(v___x_2681_, 0);
lean_inc(v_a_2682_);
lean_dec_ref(v___x_2681_);
lean_inc(v_macroStack_2679_);
v___x_2683_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___redArg(v_a_2682_, v_macroStack_2679_, v___y_2675_);
v_a_2684_ = lean_ctor_get(v___x_2683_, 0);
v_isSharedCheck_2692_ = !lean_is_exclusive(v___x_2683_);
if (v_isSharedCheck_2692_ == 0)
{
v___x_2686_ = v___x_2683_;
v_isShared_2687_ = v_isSharedCheck_2692_;
goto v_resetjp_2685_;
}
else
{
lean_inc(v_a_2684_);
lean_dec(v___x_2683_);
v___x_2686_ = lean_box(0);
v_isShared_2687_ = v_isSharedCheck_2692_;
goto v_resetjp_2685_;
}
v_resetjp_2685_:
{
lean_object* v___x_2688_; lean_object* v___x_2690_; 
v___x_2688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2688_, 0, v___x_2680_);
lean_ctor_set(v___x_2688_, 1, v_a_2684_);
if (v_isShared_2687_ == 0)
{
lean_ctor_set_tag(v___x_2686_, 1);
lean_ctor_set(v___x_2686_, 0, v___x_2688_);
v___x_2690_ = v___x_2686_;
goto v_reusejp_2689_;
}
else
{
lean_object* v_reuseFailAlloc_2691_; 
v_reuseFailAlloc_2691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2691_, 0, v___x_2688_);
v___x_2690_ = v_reuseFailAlloc_2691_;
goto v_reusejp_2689_;
}
v_reusejp_2689_:
{
return v___x_2690_;
}
}
}
else
{
lean_object* v_a_2693_; lean_object* v___x_2695_; uint8_t v_isShared_2696_; uint8_t v_isSharedCheck_2700_; 
lean_dec_ref(v_msg_2673_);
v_a_2693_ = lean_ctor_get(v___x_2677_, 0);
v_isSharedCheck_2700_ = !lean_is_exclusive(v___x_2677_);
if (v_isSharedCheck_2700_ == 0)
{
v___x_2695_ = v___x_2677_;
v_isShared_2696_ = v_isSharedCheck_2700_;
goto v_resetjp_2694_;
}
else
{
lean_inc(v_a_2693_);
lean_dec(v___x_2677_);
v___x_2695_ = lean_box(0);
v_isShared_2696_ = v_isSharedCheck_2700_;
goto v_resetjp_2694_;
}
v_resetjp_2694_:
{
lean_object* v___x_2698_; 
if (v_isShared_2696_ == 0)
{
v___x_2698_ = v___x_2695_;
goto v_reusejp_2697_;
}
else
{
lean_object* v_reuseFailAlloc_2699_; 
v_reuseFailAlloc_2699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2699_, 0, v_a_2693_);
v___x_2698_ = v_reuseFailAlloc_2699_;
goto v_reusejp_2697_;
}
v_reusejp_2697_:
{
return v___x_2698_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg___boxed(lean_object* v_msg_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_){
_start:
{
lean_object* v_res_2705_; 
v_res_2705_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(v_msg_2701_, v___y_2702_, v___y_2703_);
lean_dec(v___y_2703_);
lean_dec_ref(v___y_2702_);
return v_res_2705_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(lean_object* v_ref_2706_, lean_object* v_msg_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_){
_start:
{
lean_object* v___x_2711_; 
v___x_2711_ = l_Lean_Elab_Command_getRef___redArg(v___y_2708_);
if (lean_obj_tag(v___x_2711_) == 0)
{
lean_object* v_a_2712_; lean_object* v_fileName_2713_; lean_object* v_fileMap_2714_; lean_object* v_currRecDepth_2715_; lean_object* v_cmdPos_2716_; lean_object* v_macroStack_2717_; lean_object* v_quotContext_x3f_2718_; lean_object* v_currMacroScope_2719_; lean_object* v_snap_x3f_2720_; lean_object* v_cancelTk_x3f_2721_; uint8_t v_suppressElabErrors_2722_; lean_object* v_ref_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; 
v_a_2712_ = lean_ctor_get(v___x_2711_, 0);
lean_inc(v_a_2712_);
lean_dec_ref_known(v___x_2711_, 1);
v_fileName_2713_ = lean_ctor_get(v___y_2708_, 0);
v_fileMap_2714_ = lean_ctor_get(v___y_2708_, 1);
v_currRecDepth_2715_ = lean_ctor_get(v___y_2708_, 2);
v_cmdPos_2716_ = lean_ctor_get(v___y_2708_, 3);
v_macroStack_2717_ = lean_ctor_get(v___y_2708_, 4);
v_quotContext_x3f_2718_ = lean_ctor_get(v___y_2708_, 5);
v_currMacroScope_2719_ = lean_ctor_get(v___y_2708_, 6);
v_snap_x3f_2720_ = lean_ctor_get(v___y_2708_, 8);
v_cancelTk_x3f_2721_ = lean_ctor_get(v___y_2708_, 9);
v_suppressElabErrors_2722_ = lean_ctor_get_uint8(v___y_2708_, sizeof(void*)*10);
v_ref_2723_ = l_Lean_replaceRef(v_ref_2706_, v_a_2712_);
lean_dec(v_a_2712_);
lean_inc(v_cancelTk_x3f_2721_);
lean_inc(v_snap_x3f_2720_);
lean_inc(v_currMacroScope_2719_);
lean_inc(v_quotContext_x3f_2718_);
lean_inc(v_macroStack_2717_);
lean_inc(v_cmdPos_2716_);
lean_inc(v_currRecDepth_2715_);
lean_inc_ref(v_fileMap_2714_);
lean_inc_ref(v_fileName_2713_);
v___x_2724_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_2724_, 0, v_fileName_2713_);
lean_ctor_set(v___x_2724_, 1, v_fileMap_2714_);
lean_ctor_set(v___x_2724_, 2, v_currRecDepth_2715_);
lean_ctor_set(v___x_2724_, 3, v_cmdPos_2716_);
lean_ctor_set(v___x_2724_, 4, v_macroStack_2717_);
lean_ctor_set(v___x_2724_, 5, v_quotContext_x3f_2718_);
lean_ctor_set(v___x_2724_, 6, v_currMacroScope_2719_);
lean_ctor_set(v___x_2724_, 7, v_ref_2723_);
lean_ctor_set(v___x_2724_, 8, v_snap_x3f_2720_);
lean_ctor_set(v___x_2724_, 9, v_cancelTk_x3f_2721_);
lean_ctor_set_uint8(v___x_2724_, sizeof(void*)*10, v_suppressElabErrors_2722_);
v___x_2725_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(v_msg_2707_, v___x_2724_, v___y_2709_);
lean_dec_ref_known(v___x_2724_, 10);
return v___x_2725_;
}
else
{
lean_object* v_a_2726_; lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2733_; 
lean_dec_ref(v_msg_2707_);
v_a_2726_ = lean_ctor_get(v___x_2711_, 0);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2711_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2728_ = v___x_2711_;
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
else
{
lean_inc(v_a_2726_);
lean_dec(v___x_2711_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v___x_2731_; 
if (v_isShared_2729_ == 0)
{
v___x_2731_ = v___x_2728_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v_a_2726_);
v___x_2731_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
return v___x_2731_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg___boxed(lean_object* v_ref_2734_, lean_object* v_msg_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_){
_start:
{
lean_object* v_res_2739_; 
v_res_2739_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_ref_2734_, v_msg_2735_, v___y_2736_, v___y_2737_);
lean_dec(v___y_2737_);
lean_dec_ref(v___y_2736_);
lean_dec(v_ref_2734_);
return v_res_2739_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg(lean_object* v_msg_2740_, lean_object* v_declHint_2741_, lean_object* v___y_2742_){
_start:
{
lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v_env_2746_; uint8_t v___x_2747_; 
v___x_2744_ = lean_box(0);
v___x_2745_ = lean_st_ref_get(v___y_2742_);
v_env_2746_ = lean_ctor_get(v___x_2745_, 0);
lean_inc_ref(v_env_2746_);
lean_dec(v___x_2745_);
v___x_2747_ = l_Lean_Name_isAnonymous(v_declHint_2741_);
if (v___x_2747_ == 0)
{
uint8_t v_isExporting_2748_; 
v_isExporting_2748_ = lean_ctor_get_uint8(v_env_2746_, sizeof(void*)*8);
if (v_isExporting_2748_ == 0)
{
lean_object* v___x_2749_; 
lean_dec_ref(v_env_2746_);
lean_dec(v_declHint_2741_);
v___x_2749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2749_, 0, v_msg_2740_);
return v___x_2749_;
}
else
{
lean_object* v___x_2750_; uint8_t v___x_2751_; 
lean_inc_ref(v_env_2746_);
v___x_2750_ = l_Lean_Environment_setExporting(v_env_2746_, v___x_2747_);
lean_inc(v_declHint_2741_);
lean_inc_ref(v___x_2750_);
v___x_2751_ = l_Lean_Environment_contains(v___x_2750_, v_declHint_2741_, v_isExporting_2748_);
if (v___x_2751_ == 0)
{
lean_object* v___x_2752_; 
lean_dec_ref(v___x_2750_);
lean_dec_ref(v_env_2746_);
lean_dec(v_declHint_2741_);
v___x_2752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2752_, 0, v_msg_2740_);
return v___x_2752_;
}
else
{
lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v_c_2760_; lean_object* v___x_2761_; 
v___x_2753_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1);
v___x_2754_ = lean_unsigned_to_nat(32u);
v___x_2755_ = lean_mk_empty_array_with_capacity(v___x_2754_);
lean_dec_ref(v___x_2755_);
v___x_2756_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4);
v___x_2757_ = l_Lean_Options_empty;
v___x_2758_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2758_, 0, v___x_2750_);
lean_ctor_set(v___x_2758_, 1, v___x_2753_);
lean_ctor_set(v___x_2758_, 2, v___x_2756_);
lean_ctor_set(v___x_2758_, 3, v___x_2757_);
lean_inc(v_declHint_2741_);
v___x_2759_ = l_Lean_MessageData_ofConstName(v_declHint_2741_, v___x_2747_);
v_c_2760_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2760_, 0, v___x_2758_);
lean_ctor_set(v_c_2760_, 1, v___x_2759_);
v___x_2761_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2746_, v_declHint_2741_);
if (lean_obj_tag(v___x_2761_) == 0)
{
lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; 
lean_dec_ref(v_env_2746_);
lean_dec(v_declHint_2741_);
v___x_2762_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6);
v___x_2763_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2763_, 0, v___x_2762_);
lean_ctor_set(v___x_2763_, 1, v_c_2760_);
v___x_2764_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8);
v___x_2765_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2765_, 0, v___x_2763_);
lean_ctor_set(v___x_2765_, 1, v___x_2764_);
v___x_2766_ = l_Lean_MessageData_note(v___x_2765_);
v___x_2767_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2767_, 0, v_msg_2740_);
lean_ctor_set(v___x_2767_, 1, v___x_2766_);
v___x_2768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2768_, 0, v___x_2767_);
return v___x_2768_;
}
else
{
lean_object* v_val_2769_; lean_object* v___x_2771_; uint8_t v_isShared_2772_; uint8_t v_isSharedCheck_2803_; 
v_val_2769_ = lean_ctor_get(v___x_2761_, 0);
v_isSharedCheck_2803_ = !lean_is_exclusive(v___x_2761_);
if (v_isSharedCheck_2803_ == 0)
{
v___x_2771_ = v___x_2761_;
v_isShared_2772_ = v_isSharedCheck_2803_;
goto v_resetjp_2770_;
}
else
{
lean_inc(v_val_2769_);
lean_dec(v___x_2761_);
v___x_2771_ = lean_box(0);
v_isShared_2772_ = v_isSharedCheck_2803_;
goto v_resetjp_2770_;
}
v_resetjp_2770_:
{
lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v_mod_2775_; uint8_t v___x_2776_; 
v___x_2773_ = l_Lean_Environment_header(v_env_2746_);
lean_dec_ref(v_env_2746_);
v___x_2774_ = l_Lean_EnvironmentHeader_moduleNames(v___x_2773_);
v_mod_2775_ = lean_array_get(v___x_2744_, v___x_2774_, v_val_2769_);
lean_dec(v_val_2769_);
lean_dec_ref(v___x_2774_);
v___x_2776_ = l_Lean_isPrivateName(v_declHint_2741_);
lean_dec(v_declHint_2741_);
if (v___x_2776_ == 0)
{
lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2788_; 
v___x_2777_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10);
v___x_2778_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2778_, 0, v___x_2777_);
lean_ctor_set(v___x_2778_, 1, v_c_2760_);
v___x_2779_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12);
v___x_2780_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2780_, 0, v___x_2778_);
lean_ctor_set(v___x_2780_, 1, v___x_2779_);
v___x_2781_ = l_Lean_MessageData_ofName(v_mod_2775_);
v___x_2782_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2782_, 0, v___x_2780_);
lean_ctor_set(v___x_2782_, 1, v___x_2781_);
v___x_2783_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14);
v___x_2784_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2784_, 0, v___x_2782_);
lean_ctor_set(v___x_2784_, 1, v___x_2783_);
v___x_2785_ = l_Lean_MessageData_note(v___x_2784_);
v___x_2786_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2786_, 0, v_msg_2740_);
lean_ctor_set(v___x_2786_, 1, v___x_2785_);
if (v_isShared_2772_ == 0)
{
lean_ctor_set_tag(v___x_2771_, 0);
lean_ctor_set(v___x_2771_, 0, v___x_2786_);
v___x_2788_ = v___x_2771_;
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
else
{
lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2801_; 
v___x_2790_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6);
v___x_2791_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2791_, 0, v___x_2790_);
lean_ctor_set(v___x_2791_, 1, v_c_2760_);
v___x_2792_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16);
v___x_2793_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2793_, 0, v___x_2791_);
lean_ctor_set(v___x_2793_, 1, v___x_2792_);
v___x_2794_ = l_Lean_MessageData_ofName(v_mod_2775_);
v___x_2795_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2795_, 0, v___x_2793_);
lean_ctor_set(v___x_2795_, 1, v___x_2794_);
v___x_2796_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18);
v___x_2797_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2797_, 0, v___x_2795_);
lean_ctor_set(v___x_2797_, 1, v___x_2796_);
v___x_2798_ = l_Lean_MessageData_note(v___x_2797_);
v___x_2799_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2799_, 0, v_msg_2740_);
lean_ctor_set(v___x_2799_, 1, v___x_2798_);
if (v_isShared_2772_ == 0)
{
lean_ctor_set_tag(v___x_2771_, 0);
lean_ctor_set(v___x_2771_, 0, v___x_2799_);
v___x_2801_ = v___x_2771_;
goto v_reusejp_2800_;
}
else
{
lean_object* v_reuseFailAlloc_2802_; 
v_reuseFailAlloc_2802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2802_, 0, v___x_2799_);
v___x_2801_ = v_reuseFailAlloc_2802_;
goto v_reusejp_2800_;
}
v_reusejp_2800_:
{
return v___x_2801_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2804_; 
lean_dec_ref(v_env_2746_);
lean_dec(v_declHint_2741_);
v___x_2804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2804_, 0, v_msg_2740_);
return v___x_2804_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___boxed(lean_object* v_msg_2805_, lean_object* v_declHint_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_){
_start:
{
lean_object* v_res_2809_; 
v_res_2809_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg(v_msg_2805_, v_declHint_2806_, v___y_2807_);
lean_dec(v___y_2807_);
return v_res_2809_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67(lean_object* v_msg_2810_, lean_object* v_declHint_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_){
_start:
{
lean_object* v___x_2815_; lean_object* v_a_2816_; lean_object* v___x_2818_; uint8_t v_isShared_2819_; uint8_t v_isSharedCheck_2825_; 
v___x_2815_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg(v_msg_2810_, v_declHint_2811_, v___y_2813_);
v_a_2816_ = lean_ctor_get(v___x_2815_, 0);
v_isSharedCheck_2825_ = !lean_is_exclusive(v___x_2815_);
if (v_isSharedCheck_2825_ == 0)
{
v___x_2818_ = v___x_2815_;
v_isShared_2819_ = v_isSharedCheck_2825_;
goto v_resetjp_2817_;
}
else
{
lean_inc(v_a_2816_);
lean_dec(v___x_2815_);
v___x_2818_ = lean_box(0);
v_isShared_2819_ = v_isSharedCheck_2825_;
goto v_resetjp_2817_;
}
v_resetjp_2817_:
{
lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2823_; 
v___x_2820_ = l_Lean_unknownIdentifierMessageTag;
v___x_2821_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2821_, 0, v___x_2820_);
lean_ctor_set(v___x_2821_, 1, v_a_2816_);
if (v_isShared_2819_ == 0)
{
lean_ctor_set(v___x_2818_, 0, v___x_2821_);
v___x_2823_ = v___x_2818_;
goto v_reusejp_2822_;
}
else
{
lean_object* v_reuseFailAlloc_2824_; 
v_reuseFailAlloc_2824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2824_, 0, v___x_2821_);
v___x_2823_ = v_reuseFailAlloc_2824_;
goto v_reusejp_2822_;
}
v_reusejp_2822_:
{
return v___x_2823_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67___boxed(lean_object* v_msg_2826_, lean_object* v_declHint_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_){
_start:
{
lean_object* v_res_2831_; 
v_res_2831_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67(v_msg_2826_, v_declHint_2827_, v___y_2828_, v___y_2829_);
lean_dec(v___y_2829_);
lean_dec_ref(v___y_2828_);
return v_res_2831_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg(lean_object* v_ref_2832_, lean_object* v_msg_2833_, lean_object* v_declHint_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_){
_start:
{
lean_object* v___x_2838_; lean_object* v_a_2839_; lean_object* v___x_2840_; 
v___x_2838_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67(v_msg_2833_, v_declHint_2834_, v___y_2835_, v___y_2836_);
v_a_2839_ = lean_ctor_get(v___x_2838_, 0);
lean_inc(v_a_2839_);
lean_dec_ref(v___x_2838_);
v___x_2840_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_ref_2832_, v_a_2839_, v___y_2835_, v___y_2836_);
return v___x_2840_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg___boxed(lean_object* v_ref_2841_, lean_object* v_msg_2842_, lean_object* v_declHint_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_){
_start:
{
lean_object* v_res_2847_; 
v_res_2847_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg(v_ref_2841_, v_msg_2842_, v_declHint_2843_, v___y_2844_, v___y_2845_);
lean_dec(v___y_2845_);
lean_dec_ref(v___y_2844_);
lean_dec(v_ref_2841_);
return v_res_2847_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg(lean_object* v_ref_2848_, lean_object* v_constName_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_){
_start:
{
lean_object* v___x_2853_; uint8_t v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; 
v___x_2853_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1);
v___x_2854_ = 0;
lean_inc(v_constName_2849_);
v___x_2855_ = l_Lean_MessageData_ofConstName(v_constName_2849_, v___x_2854_);
v___x_2856_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2856_, 0, v___x_2853_);
lean_ctor_set(v___x_2856_, 1, v___x_2855_);
v___x_2857_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1);
v___x_2858_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2858_, 0, v___x_2856_);
lean_ctor_set(v___x_2858_, 1, v___x_2857_);
v___x_2859_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg(v_ref_2848_, v___x_2858_, v_constName_2849_, v___y_2850_, v___y_2851_);
return v___x_2859_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg___boxed(lean_object* v_ref_2860_, lean_object* v_constName_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_){
_start:
{
lean_object* v_res_2865_; 
v_res_2865_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg(v_ref_2860_, v_constName_2861_, v___y_2862_, v___y_2863_);
lean_dec(v___y_2863_);
lean_dec_ref(v___y_2862_);
lean_dec(v_ref_2860_);
return v_res_2865_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___redArg(lean_object* v_constName_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_){
_start:
{
lean_object* v___x_2870_; 
v___x_2870_ = l_Lean_Elab_Command_getRef___redArg(v___y_2867_);
if (lean_obj_tag(v___x_2870_) == 0)
{
lean_object* v_a_2871_; lean_object* v___x_2872_; 
v_a_2871_ = lean_ctor_get(v___x_2870_, 0);
lean_inc(v_a_2871_);
lean_dec_ref_known(v___x_2870_, 1);
v___x_2872_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg(v_a_2871_, v_constName_2866_, v___y_2867_, v___y_2868_);
lean_dec(v_a_2871_);
return v___x_2872_;
}
else
{
lean_object* v_a_2873_; lean_object* v___x_2875_; uint8_t v_isShared_2876_; uint8_t v_isSharedCheck_2880_; 
lean_dec(v_constName_2866_);
v_a_2873_ = lean_ctor_get(v___x_2870_, 0);
v_isSharedCheck_2880_ = !lean_is_exclusive(v___x_2870_);
if (v_isSharedCheck_2880_ == 0)
{
v___x_2875_ = v___x_2870_;
v_isShared_2876_ = v_isSharedCheck_2880_;
goto v_resetjp_2874_;
}
else
{
lean_inc(v_a_2873_);
lean_dec(v___x_2870_);
v___x_2875_ = lean_box(0);
v_isShared_2876_ = v_isSharedCheck_2880_;
goto v_resetjp_2874_;
}
v_resetjp_2874_:
{
lean_object* v___x_2878_; 
if (v_isShared_2876_ == 0)
{
v___x_2878_ = v___x_2875_;
goto v_reusejp_2877_;
}
else
{
lean_object* v_reuseFailAlloc_2879_; 
v_reuseFailAlloc_2879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2879_, 0, v_a_2873_);
v___x_2878_ = v_reuseFailAlloc_2879_;
goto v_reusejp_2877_;
}
v_reusejp_2877_:
{
return v___x_2878_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___redArg___boxed(lean_object* v_constName_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_){
_start:
{
lean_object* v_res_2885_; 
v_res_2885_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___redArg(v_constName_2881_, v___y_2882_, v___y_2883_);
lean_dec(v___y_2883_);
lean_dec_ref(v___y_2882_);
return v_res_2885_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16(lean_object* v_constName_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_){
_start:
{
lean_object* v___x_2890_; lean_object* v_env_2891_; uint8_t v___x_2892_; lean_object* v___x_2893_; 
v___x_2890_ = lean_st_ref_get(v___y_2888_);
v_env_2891_ = lean_ctor_get(v___x_2890_, 0);
lean_inc_ref(v_env_2891_);
lean_dec(v___x_2890_);
v___x_2892_ = 0;
lean_inc(v_constName_2886_);
v___x_2893_ = l_Lean_Environment_findConstVal_x3f(v_env_2891_, v_constName_2886_, v___x_2892_);
if (lean_obj_tag(v___x_2893_) == 0)
{
lean_object* v___x_2894_; 
v___x_2894_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___redArg(v_constName_2886_, v___y_2887_, v___y_2888_);
return v___x_2894_;
}
else
{
lean_object* v_val_2895_; lean_object* v___x_2897_; uint8_t v_isShared_2898_; uint8_t v_isSharedCheck_2902_; 
lean_dec(v_constName_2886_);
v_val_2895_ = lean_ctor_get(v___x_2893_, 0);
v_isSharedCheck_2902_ = !lean_is_exclusive(v___x_2893_);
if (v_isSharedCheck_2902_ == 0)
{
v___x_2897_ = v___x_2893_;
v_isShared_2898_ = v_isSharedCheck_2902_;
goto v_resetjp_2896_;
}
else
{
lean_inc(v_val_2895_);
lean_dec(v___x_2893_);
v___x_2897_ = lean_box(0);
v_isShared_2898_ = v_isSharedCheck_2902_;
goto v_resetjp_2896_;
}
v_resetjp_2896_:
{
lean_object* v___x_2900_; 
if (v_isShared_2898_ == 0)
{
lean_ctor_set_tag(v___x_2897_, 0);
v___x_2900_ = v___x_2897_;
goto v_reusejp_2899_;
}
else
{
lean_object* v_reuseFailAlloc_2901_; 
v_reuseFailAlloc_2901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2901_, 0, v_val_2895_);
v___x_2900_ = v_reuseFailAlloc_2901_;
goto v_reusejp_2899_;
}
v_reusejp_2899_:
{
return v___x_2900_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16___boxed(lean_object* v_constName_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_){
_start:
{
lean_object* v_res_2907_; 
v_res_2907_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16(v_constName_2903_, v___y_2904_, v___y_2905_);
lean_dec(v___y_2905_);
lean_dec_ref(v___y_2904_);
return v_res_2907_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8(lean_object* v_constName_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_){
_start:
{
lean_object* v___x_2912_; 
lean_inc(v_constName_2908_);
v___x_2912_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16(v_constName_2908_, v___y_2909_, v___y_2910_);
if (lean_obj_tag(v___x_2912_) == 0)
{
lean_object* v_a_2913_; lean_object* v___x_2915_; uint8_t v_isShared_2916_; uint8_t v_isSharedCheck_2924_; 
v_a_2913_ = lean_ctor_get(v___x_2912_, 0);
v_isSharedCheck_2924_ = !lean_is_exclusive(v___x_2912_);
if (v_isSharedCheck_2924_ == 0)
{
v___x_2915_ = v___x_2912_;
v_isShared_2916_ = v_isSharedCheck_2924_;
goto v_resetjp_2914_;
}
else
{
lean_inc(v_a_2913_);
lean_dec(v___x_2912_);
v___x_2915_ = lean_box(0);
v_isShared_2916_ = v_isSharedCheck_2924_;
goto v_resetjp_2914_;
}
v_resetjp_2914_:
{
lean_object* v_levelParams_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2922_; 
v_levelParams_2917_ = lean_ctor_get(v_a_2913_, 1);
lean_inc(v_levelParams_2917_);
lean_dec(v_a_2913_);
v___x_2918_ = lean_box(0);
v___x_2919_ = l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(v_levelParams_2917_, v___x_2918_);
v___x_2920_ = l_Lean_mkConst(v_constName_2908_, v___x_2919_);
if (v_isShared_2916_ == 0)
{
lean_ctor_set(v___x_2915_, 0, v___x_2920_);
v___x_2922_ = v___x_2915_;
goto v_reusejp_2921_;
}
else
{
lean_object* v_reuseFailAlloc_2923_; 
v_reuseFailAlloc_2923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2923_, 0, v___x_2920_);
v___x_2922_ = v_reuseFailAlloc_2923_;
goto v_reusejp_2921_;
}
v_reusejp_2921_:
{
return v___x_2922_;
}
}
}
else
{
lean_object* v_a_2925_; lean_object* v___x_2927_; uint8_t v_isShared_2928_; uint8_t v_isSharedCheck_2932_; 
lean_dec(v_constName_2908_);
v_a_2925_ = lean_ctor_get(v___x_2912_, 0);
v_isSharedCheck_2932_ = !lean_is_exclusive(v___x_2912_);
if (v_isSharedCheck_2932_ == 0)
{
v___x_2927_ = v___x_2912_;
v_isShared_2928_ = v_isSharedCheck_2932_;
goto v_resetjp_2926_;
}
else
{
lean_inc(v_a_2925_);
lean_dec(v___x_2912_);
v___x_2927_ = lean_box(0);
v_isShared_2928_ = v_isSharedCheck_2932_;
goto v_resetjp_2926_;
}
v_resetjp_2926_:
{
lean_object* v___x_2930_; 
if (v_isShared_2928_ == 0)
{
v___x_2930_ = v___x_2927_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_2931_; 
v_reuseFailAlloc_2931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2931_, 0, v_a_2925_);
v___x_2930_ = v_reuseFailAlloc_2931_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
return v___x_2930_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8___boxed(lean_object* v_constName_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_){
_start:
{
lean_object* v_res_2937_; 
v_res_2937_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8(v_constName_2933_, v___y_2934_, v___y_2935_);
lean_dec(v___y_2935_);
lean_dec_ref(v___y_2934_);
return v_res_2937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4(lean_object* v_stx_2938_, lean_object* v_n_2939_, lean_object* v_expectedType_x3f_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_){
_start:
{
lean_object* v___x_2944_; 
v___x_2944_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8(v_n_2939_, v___y_2941_, v___y_2942_);
if (lean_obj_tag(v___x_2944_) == 0)
{
lean_object* v_a_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; uint8_t v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; 
v_a_2945_ = lean_ctor_get(v___x_2944_, 0);
lean_inc(v_a_2945_);
lean_dec_ref_known(v___x_2944_, 1);
v___x_2946_ = lean_box(0);
v___x_2947_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2947_, 0, v___x_2946_);
lean_ctor_set(v___x_2947_, 1, v_stx_2938_);
v___x_2948_ = l_Lean_LocalContext_empty;
v___x_2949_ = 0;
v___x_2950_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2950_, 0, v___x_2947_);
lean_ctor_set(v___x_2950_, 1, v___x_2948_);
lean_ctor_set(v___x_2950_, 2, v_expectedType_x3f_2940_);
lean_ctor_set(v___x_2950_, 3, v_a_2945_);
lean_ctor_set_uint8(v___x_2950_, sizeof(void*)*4, v___x_2949_);
lean_ctor_set_uint8(v___x_2950_, sizeof(void*)*4 + 1, v___x_2949_);
v___x_2951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2951_, 0, v___x_2950_);
v___x_2952_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9(v___x_2951_, v___y_2941_, v___y_2942_);
return v___x_2952_;
}
else
{
lean_object* v_a_2953_; lean_object* v___x_2955_; uint8_t v_isShared_2956_; uint8_t v_isSharedCheck_2960_; 
lean_dec(v_expectedType_x3f_2940_);
lean_dec(v_stx_2938_);
v_a_2953_ = lean_ctor_get(v___x_2944_, 0);
v_isSharedCheck_2960_ = !lean_is_exclusive(v___x_2944_);
if (v_isSharedCheck_2960_ == 0)
{
v___x_2955_ = v___x_2944_;
v_isShared_2956_ = v_isSharedCheck_2960_;
goto v_resetjp_2954_;
}
else
{
lean_inc(v_a_2953_);
lean_dec(v___x_2944_);
v___x_2955_ = lean_box(0);
v_isShared_2956_ = v_isSharedCheck_2960_;
goto v_resetjp_2954_;
}
v_resetjp_2954_:
{
lean_object* v___x_2958_; 
if (v_isShared_2956_ == 0)
{
v___x_2958_ = v___x_2955_;
goto v_reusejp_2957_;
}
else
{
lean_object* v_reuseFailAlloc_2959_; 
v_reuseFailAlloc_2959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2959_, 0, v_a_2953_);
v___x_2958_ = v_reuseFailAlloc_2959_;
goto v_reusejp_2957_;
}
v_reusejp_2957_:
{
return v___x_2958_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4___boxed(lean_object* v_stx_2961_, lean_object* v_n_2962_, lean_object* v_expectedType_x3f_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_){
_start:
{
lean_object* v_res_2967_; 
v_res_2967_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4(v_stx_2961_, v_n_2962_, v_expectedType_x3f_2963_, v___y_2964_, v___y_2965_);
lean_dec(v___y_2965_);
lean_dec_ref(v___y_2964_);
return v_res_2967_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg(lean_object* v_as_x27_2968_, lean_object* v_b_2969_, lean_object* v___y_2970_, lean_object* v___y_2971_){
_start:
{
if (lean_obj_tag(v_as_x27_2968_) == 0)
{
lean_object* v___x_2973_; 
v___x_2973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2973_, 0, v_b_2969_);
return v___x_2973_;
}
else
{
lean_object* v_head_2974_; lean_object* v_tail_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; 
v_head_2974_ = lean_ctor_get(v_as_x27_2968_, 0);
v_tail_2975_ = lean_ctor_get(v_as_x27_2968_, 1);
v___x_2976_ = lean_box(0);
lean_inc(v_head_2974_);
v___x_2977_ = lean_alloc_closure((void*)(l_Lean_enableRealizationsForConst___boxed), 4, 1);
lean_closure_set(v___x_2977_, 0, v_head_2974_);
v___x_2978_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_2977_, v___y_2970_, v___y_2971_);
if (lean_obj_tag(v___x_2978_) == 0)
{
lean_dec_ref_known(v___x_2978_, 1);
v_as_x27_2968_ = v_tail_2975_;
v_b_2969_ = v___x_2976_;
goto _start;
}
else
{
return v___x_2978_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg___boxed(lean_object* v_as_x27_2980_, lean_object* v_b_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_){
_start:
{
lean_object* v_res_2985_; 
v_res_2985_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg(v_as_x27_2980_, v_b_2981_, v___y_2982_, v___y_2983_);
lean_dec(v___y_2983_);
lean_dec_ref(v___y_2982_);
lean_dec(v_as_x27_2980_);
return v_res_2985_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20___redArg(lean_object* v_declName_2986_, uint8_t v_s_2987_, lean_object* v___y_2988_){
_start:
{
lean_object* v___x_2990_; lean_object* v_env_2991_; lean_object* v_messages_2992_; lean_object* v_scopes_2993_; lean_object* v_usedQuotCtxts_2994_; lean_object* v_nextMacroScope_2995_; lean_object* v_maxRecDepth_2996_; lean_object* v_ngen_2997_; lean_object* v_auxDeclNGen_2998_; lean_object* v_infoState_2999_; lean_object* v_traceState_3000_; lean_object* v_snapshotTasks_3001_; lean_object* v_prevLinterStates_3002_; lean_object* v_codeQualityEntryTasks_3003_; lean_object* v___x_3005_; uint8_t v_isShared_3006_; uint8_t v_isSharedCheck_3016_; 
v___x_2990_ = lean_st_ref_take(v___y_2988_);
v_env_2991_ = lean_ctor_get(v___x_2990_, 0);
v_messages_2992_ = lean_ctor_get(v___x_2990_, 1);
v_scopes_2993_ = lean_ctor_get(v___x_2990_, 2);
v_usedQuotCtxts_2994_ = lean_ctor_get(v___x_2990_, 3);
v_nextMacroScope_2995_ = lean_ctor_get(v___x_2990_, 4);
v_maxRecDepth_2996_ = lean_ctor_get(v___x_2990_, 5);
v_ngen_2997_ = lean_ctor_get(v___x_2990_, 6);
v_auxDeclNGen_2998_ = lean_ctor_get(v___x_2990_, 7);
v_infoState_2999_ = lean_ctor_get(v___x_2990_, 8);
v_traceState_3000_ = lean_ctor_get(v___x_2990_, 9);
v_snapshotTasks_3001_ = lean_ctor_get(v___x_2990_, 10);
v_prevLinterStates_3002_ = lean_ctor_get(v___x_2990_, 11);
v_codeQualityEntryTasks_3003_ = lean_ctor_get(v___x_2990_, 12);
v_isSharedCheck_3016_ = !lean_is_exclusive(v___x_2990_);
if (v_isSharedCheck_3016_ == 0)
{
v___x_3005_ = v___x_2990_;
v_isShared_3006_ = v_isSharedCheck_3016_;
goto v_resetjp_3004_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3003_);
lean_inc(v_prevLinterStates_3002_);
lean_inc(v_snapshotTasks_3001_);
lean_inc(v_traceState_3000_);
lean_inc(v_infoState_2999_);
lean_inc(v_auxDeclNGen_2998_);
lean_inc(v_ngen_2997_);
lean_inc(v_maxRecDepth_2996_);
lean_inc(v_nextMacroScope_2995_);
lean_inc(v_usedQuotCtxts_2994_);
lean_inc(v_scopes_2993_);
lean_inc(v_messages_2992_);
lean_inc(v_env_2991_);
lean_dec(v___x_2990_);
v___x_3005_ = lean_box(0);
v_isShared_3006_ = v_isSharedCheck_3016_;
goto v_resetjp_3004_;
}
v_resetjp_3004_:
{
lean_object* v___x_3007_; uint8_t v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3012_; 
v___x_3007_ = lean_box(0);
v___x_3008_ = 0;
v___x_3009_ = lean_box(0);
v___x_3010_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_2991_, v_declName_2986_, v_s_2987_, v___x_3008_, v___x_3009_);
if (v_isShared_3006_ == 0)
{
lean_ctor_set(v___x_3005_, 0, v___x_3010_);
v___x_3012_ = v___x_3005_;
goto v_reusejp_3011_;
}
else
{
lean_object* v_reuseFailAlloc_3015_; 
v_reuseFailAlloc_3015_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3015_, 0, v___x_3010_);
lean_ctor_set(v_reuseFailAlloc_3015_, 1, v_messages_2992_);
lean_ctor_set(v_reuseFailAlloc_3015_, 2, v_scopes_2993_);
lean_ctor_set(v_reuseFailAlloc_3015_, 3, v_usedQuotCtxts_2994_);
lean_ctor_set(v_reuseFailAlloc_3015_, 4, v_nextMacroScope_2995_);
lean_ctor_set(v_reuseFailAlloc_3015_, 5, v_maxRecDepth_2996_);
lean_ctor_set(v_reuseFailAlloc_3015_, 6, v_ngen_2997_);
lean_ctor_set(v_reuseFailAlloc_3015_, 7, v_auxDeclNGen_2998_);
lean_ctor_set(v_reuseFailAlloc_3015_, 8, v_infoState_2999_);
lean_ctor_set(v_reuseFailAlloc_3015_, 9, v_traceState_3000_);
lean_ctor_set(v_reuseFailAlloc_3015_, 10, v_snapshotTasks_3001_);
lean_ctor_set(v_reuseFailAlloc_3015_, 11, v_prevLinterStates_3002_);
lean_ctor_set(v_reuseFailAlloc_3015_, 12, v_codeQualityEntryTasks_3003_);
v___x_3012_ = v_reuseFailAlloc_3015_;
goto v_reusejp_3011_;
}
v_reusejp_3011_:
{
lean_object* v___x_3013_; lean_object* v___x_3014_; 
v___x_3013_ = lean_st_ref_put(v___y_2988_, v___x_3012_);
v___x_3014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3014_, 0, v___x_3007_);
return v___x_3014_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20___redArg___boxed(lean_object* v_declName_3017_, lean_object* v_s_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_){
_start:
{
uint8_t v_s_boxed_3021_; lean_object* v_res_3022_; 
v_s_boxed_3021_ = lean_unbox(v_s_3018_);
v_res_3022_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20___redArg(v_declName_3017_, v_s_boxed_3021_, v___y_3019_);
lean_dec(v___y_3019_);
return v_res_3022_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11(lean_object* v_declName_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_){
_start:
{
uint8_t v___x_3027_; lean_object* v___x_3028_; 
v___x_3027_ = 2;
v___x_3028_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20___redArg(v_declName_3023_, v___x_3027_, v___y_3025_);
return v___x_3028_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11___boxed(lean_object* v_declName_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_){
_start:
{
lean_object* v_res_3033_; 
v_res_3033_ = l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11(v_declName_3029_, v___y_3030_, v___y_3031_);
lean_dec(v___y_3031_);
lean_dec_ref(v___y_3030_);
return v_res_3033_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg(lean_object* v_as_x27_3034_, lean_object* v_b_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_){
_start:
{
if (lean_obj_tag(v_as_x27_3034_) == 0)
{
lean_object* v___x_3039_; 
v___x_3039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3039_, 0, v_b_3035_);
return v___x_3039_;
}
else
{
lean_object* v_head_3040_; lean_object* v_tail_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; 
v_head_3040_ = lean_ctor_get(v_as_x27_3034_, 0);
v_tail_3041_ = lean_ctor_get(v_as_x27_3034_, 1);
v___x_3042_ = lean_box(0);
lean_inc(v_head_3040_);
v___x_3043_ = l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11(v_head_3040_, v___y_3036_, v___y_3037_);
lean_dec_ref(v___x_3043_);
v_as_x27_3034_ = v_tail_3041_;
v_b_3035_ = v___x_3042_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg___boxed(lean_object* v_as_x27_3045_, lean_object* v_b_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_){
_start:
{
lean_object* v_res_3050_; 
v_res_3050_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg(v_as_x27_3045_, v_b_3046_, v___y_3047_, v___y_3048_);
lean_dec(v___y_3048_);
lean_dec_ref(v___y_3047_);
lean_dec(v_as_x27_3045_);
return v_res_3050_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(size_t v_sz_3051_, size_t v_i_3052_, lean_object* v_bs_3053_){
_start:
{
uint8_t v___x_3054_; 
v___x_3054_ = lean_usize_dec_lt(v_i_3052_, v_sz_3051_);
if (v___x_3054_ == 0)
{
return v_bs_3053_;
}
else
{
lean_object* v_v_3055_; lean_object* v___x_3056_; lean_object* v_bs_x27_3057_; size_t v___x_3058_; size_t v___x_3059_; lean_object* v___x_3060_; 
v_v_3055_ = lean_array_uget(v_bs_3053_, v_i_3052_);
v___x_3056_ = lean_unsigned_to_nat(0u);
v_bs_x27_3057_ = lean_array_uset(v_bs_3053_, v_i_3052_, v___x_3056_);
v___x_3058_ = ((size_t)1ULL);
v___x_3059_ = lean_usize_add(v_i_3052_, v___x_3058_);
v___x_3060_ = lean_array_uset(v_bs_x27_3057_, v_i_3052_, v_v_3055_);
v_i_3052_ = v___x_3059_;
v_bs_3053_ = v___x_3060_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2___boxed(lean_object* v_sz_3062_, lean_object* v_i_3063_, lean_object* v_bs_3064_){
_start:
{
size_t v_sz_boxed_3065_; size_t v_i_boxed_3066_; lean_object* v_res_3067_; 
v_sz_boxed_3065_ = lean_unbox_usize(v_sz_3062_);
lean_dec(v_sz_3062_);
v_i_boxed_3066_ = lean_unbox_usize(v_i_3063_);
lean_dec(v_i_3063_);
v_res_3067_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(v_sz_boxed_3065_, v_i_boxed_3066_, v_bs_3064_);
return v_res_3067_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__1(size_t v_sz_3068_, size_t v_i_3069_, lean_object* v_bs_3070_){
_start:
{
uint8_t v___x_3071_; 
v___x_3071_ = lean_usize_dec_lt(v_i_3069_, v_sz_3068_);
if (v___x_3071_ == 0)
{
return v_bs_3070_;
}
else
{
lean_object* v_v_3072_; lean_object* v___x_3073_; lean_object* v_bs_x27_3074_; size_t v___x_3075_; size_t v___x_3076_; lean_object* v___x_3077_; 
v_v_3072_ = lean_array_uget(v_bs_3070_, v_i_3069_);
v___x_3073_ = lean_unsigned_to_nat(0u);
v_bs_x27_3074_ = lean_array_uset(v_bs_3070_, v_i_3069_, v___x_3073_);
v___x_3075_ = ((size_t)1ULL);
v___x_3076_ = lean_usize_add(v_i_3069_, v___x_3075_);
v___x_3077_ = lean_array_uset(v_bs_x27_3074_, v_i_3069_, v_v_3072_);
v_i_3069_ = v___x_3076_;
v_bs_3070_ = v___x_3077_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__1___boxed(lean_object* v_sz_3079_, lean_object* v_i_3080_, lean_object* v_bs_3081_){
_start:
{
size_t v_sz_boxed_3082_; size_t v_i_boxed_3083_; lean_object* v_res_3084_; 
v_sz_boxed_3082_ = lean_unbox_usize(v_sz_3079_);
lean_dec(v_sz_3079_);
v_i_boxed_3083_ = lean_unbox_usize(v_i_3080_);
lean_dec(v_i_3080_);
v_res_3084_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__1(v_sz_boxed_3082_, v_i_boxed_3083_, v_bs_3081_);
return v_res_3084_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___redArg(lean_object* v_declName_3085_, lean_object* v_declRanges_3086_, lean_object* v___y_3087_){
_start:
{
uint8_t v___x_3089_; 
v___x_3089_ = l_Lean_Name_isAnonymous(v_declName_3085_);
if (v___x_3089_ == 0)
{
lean_object* v___x_3090_; lean_object* v_env_3091_; lean_object* v_messages_3092_; lean_object* v_scopes_3093_; lean_object* v_usedQuotCtxts_3094_; lean_object* v_nextMacroScope_3095_; lean_object* v_maxRecDepth_3096_; lean_object* v_ngen_3097_; lean_object* v_auxDeclNGen_3098_; lean_object* v_infoState_3099_; lean_object* v_traceState_3100_; lean_object* v_snapshotTasks_3101_; lean_object* v_prevLinterStates_3102_; lean_object* v_codeQualityEntryTasks_3103_; lean_object* v___x_3105_; uint8_t v_isShared_3106_; uint8_t v_isSharedCheck_3115_; 
v___x_3090_ = lean_st_ref_take(v___y_3087_);
v_env_3091_ = lean_ctor_get(v___x_3090_, 0);
v_messages_3092_ = lean_ctor_get(v___x_3090_, 1);
v_scopes_3093_ = lean_ctor_get(v___x_3090_, 2);
v_usedQuotCtxts_3094_ = lean_ctor_get(v___x_3090_, 3);
v_nextMacroScope_3095_ = lean_ctor_get(v___x_3090_, 4);
v_maxRecDepth_3096_ = lean_ctor_get(v___x_3090_, 5);
v_ngen_3097_ = lean_ctor_get(v___x_3090_, 6);
v_auxDeclNGen_3098_ = lean_ctor_get(v___x_3090_, 7);
v_infoState_3099_ = lean_ctor_get(v___x_3090_, 8);
v_traceState_3100_ = lean_ctor_get(v___x_3090_, 9);
v_snapshotTasks_3101_ = lean_ctor_get(v___x_3090_, 10);
v_prevLinterStates_3102_ = lean_ctor_get(v___x_3090_, 11);
v_codeQualityEntryTasks_3103_ = lean_ctor_get(v___x_3090_, 12);
v_isSharedCheck_3115_ = !lean_is_exclusive(v___x_3090_);
if (v_isSharedCheck_3115_ == 0)
{
v___x_3105_ = v___x_3090_;
v_isShared_3106_ = v_isSharedCheck_3115_;
goto v_resetjp_3104_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3103_);
lean_inc(v_prevLinterStates_3102_);
lean_inc(v_snapshotTasks_3101_);
lean_inc(v_traceState_3100_);
lean_inc(v_infoState_3099_);
lean_inc(v_auxDeclNGen_3098_);
lean_inc(v_ngen_3097_);
lean_inc(v_maxRecDepth_3096_);
lean_inc(v_nextMacroScope_3095_);
lean_inc(v_usedQuotCtxts_3094_);
lean_inc(v_scopes_3093_);
lean_inc(v_messages_3092_);
lean_inc(v_env_3091_);
lean_dec(v___x_3090_);
v___x_3105_ = lean_box(0);
v_isShared_3106_ = v_isSharedCheck_3115_;
goto v_resetjp_3104_;
}
v_resetjp_3104_:
{
lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3111_; 
v___x_3107_ = lean_box(0);
v___x_3108_ = l_Lean_declRangeExt;
v___x_3109_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_3108_, v_env_3091_, v_declName_3085_, v_declRanges_3086_);
if (v_isShared_3106_ == 0)
{
lean_ctor_set(v___x_3105_, 0, v___x_3109_);
v___x_3111_ = v___x_3105_;
goto v_reusejp_3110_;
}
else
{
lean_object* v_reuseFailAlloc_3114_; 
v_reuseFailAlloc_3114_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3114_, 0, v___x_3109_);
lean_ctor_set(v_reuseFailAlloc_3114_, 1, v_messages_3092_);
lean_ctor_set(v_reuseFailAlloc_3114_, 2, v_scopes_3093_);
lean_ctor_set(v_reuseFailAlloc_3114_, 3, v_usedQuotCtxts_3094_);
lean_ctor_set(v_reuseFailAlloc_3114_, 4, v_nextMacroScope_3095_);
lean_ctor_set(v_reuseFailAlloc_3114_, 5, v_maxRecDepth_3096_);
lean_ctor_set(v_reuseFailAlloc_3114_, 6, v_ngen_3097_);
lean_ctor_set(v_reuseFailAlloc_3114_, 7, v_auxDeclNGen_3098_);
lean_ctor_set(v_reuseFailAlloc_3114_, 8, v_infoState_3099_);
lean_ctor_set(v_reuseFailAlloc_3114_, 9, v_traceState_3100_);
lean_ctor_set(v_reuseFailAlloc_3114_, 10, v_snapshotTasks_3101_);
lean_ctor_set(v_reuseFailAlloc_3114_, 11, v_prevLinterStates_3102_);
lean_ctor_set(v_reuseFailAlloc_3114_, 12, v_codeQualityEntryTasks_3103_);
v___x_3111_ = v_reuseFailAlloc_3114_;
goto v_reusejp_3110_;
}
v_reusejp_3110_:
{
lean_object* v___x_3112_; lean_object* v___x_3113_; 
v___x_3112_ = lean_st_ref_put(v___y_3087_, v___x_3111_);
v___x_3113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3113_, 0, v___x_3107_);
return v___x_3113_;
}
}
}
else
{
lean_object* v___x_3116_; lean_object* v___x_3117_; 
lean_dec_ref(v_declRanges_3086_);
lean_dec(v_declName_3085_);
v___x_3116_ = lean_box(0);
v___x_3117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3117_, 0, v___x_3116_);
return v___x_3117_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___redArg___boxed(lean_object* v_declName_3118_, lean_object* v_declRanges_3119_, lean_object* v___y_3120_, lean_object* v___y_3121_){
_start:
{
lean_object* v_res_3122_; 
v_res_3122_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___redArg(v_declName_3118_, v_declRanges_3119_, v___y_3120_);
lean_dec(v___y_3120_);
return v_res_3122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg(lean_object* v_stx_3123_, lean_object* v___y_3124_){
_start:
{
uint8_t v___x_3126_; lean_object* v___x_3127_; 
v___x_3126_ = 0;
v___x_3127_ = l_Lean_Syntax_getRange_x3f(v_stx_3123_, v___x_3126_);
if (lean_obj_tag(v___x_3127_) == 1)
{
lean_object* v_val_3128_; lean_object* v___x_3130_; uint8_t v_isShared_3131_; uint8_t v_isSharedCheck_3140_; 
v_val_3128_ = lean_ctor_get(v___x_3127_, 0);
v_isSharedCheck_3140_ = !lean_is_exclusive(v___x_3127_);
if (v_isSharedCheck_3140_ == 0)
{
v___x_3130_ = v___x_3127_;
v_isShared_3131_ = v_isSharedCheck_3140_;
goto v_resetjp_3129_;
}
else
{
lean_inc(v_val_3128_);
lean_dec(v___x_3127_);
v___x_3130_ = lean_box(0);
v_isShared_3131_ = v_isSharedCheck_3140_;
goto v_resetjp_3129_;
}
v_resetjp_3129_:
{
lean_object* v_fileMap_3132_; lean_object* v_start_3133_; lean_object* v_stop_3134_; lean_object* v___x_3135_; lean_object* v___x_3137_; 
v_fileMap_3132_ = lean_ctor_get(v___y_3124_, 1);
v_start_3133_ = lean_ctor_get(v_val_3128_, 0);
lean_inc(v_start_3133_);
v_stop_3134_ = lean_ctor_get(v_val_3128_, 1);
lean_inc(v_stop_3134_);
lean_dec(v_val_3128_);
lean_inc_ref(v_fileMap_3132_);
v___x_3135_ = l_Lean_DeclarationRange_ofStringPositions(v_fileMap_3132_, v_start_3133_, v_stop_3134_);
lean_dec(v_stop_3134_);
lean_dec(v_start_3133_);
if (v_isShared_3131_ == 0)
{
lean_ctor_set(v___x_3130_, 0, v___x_3135_);
v___x_3137_ = v___x_3130_;
goto v_reusejp_3136_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v___x_3135_);
v___x_3137_ = v_reuseFailAlloc_3139_;
goto v_reusejp_3136_;
}
v_reusejp_3136_:
{
lean_object* v___x_3138_; 
v___x_3138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3138_, 0, v___x_3137_);
return v___x_3138_;
}
}
}
else
{
lean_object* v___x_3141_; lean_object* v___x_3142_; 
lean_dec(v___x_3127_);
v___x_3141_ = lean_box(0);
v___x_3142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3142_, 0, v___x_3141_);
return v___x_3142_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg___boxed(lean_object* v_stx_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_){
_start:
{
lean_object* v_res_3146_; 
v_res_3146_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg(v_stx_3143_, v___y_3144_);
lean_dec_ref(v___y_3144_);
lean_dec(v_stx_3143_);
return v_res_3146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3(lean_object* v_declName_3147_, lean_object* v_rangeStx_3148_, lean_object* v_selectionRangeStx_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_){
_start:
{
lean_object* v___x_3153_; lean_object* v_a_3154_; lean_object* v___x_3156_; uint8_t v_isShared_3157_; uint8_t v_isSharedCheck_3170_; 
v___x_3153_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg(v_rangeStx_3148_, v___y_3150_);
v_a_3154_ = lean_ctor_get(v___x_3153_, 0);
v_isSharedCheck_3170_ = !lean_is_exclusive(v___x_3153_);
if (v_isSharedCheck_3170_ == 0)
{
v___x_3156_ = v___x_3153_;
v_isShared_3157_ = v_isSharedCheck_3170_;
goto v_resetjp_3155_;
}
else
{
lean_inc(v_a_3154_);
lean_dec(v___x_3153_);
v___x_3156_ = lean_box(0);
v_isShared_3157_ = v_isSharedCheck_3170_;
goto v_resetjp_3155_;
}
v_resetjp_3155_:
{
if (lean_obj_tag(v_a_3154_) == 1)
{
lean_object* v_val_3158_; lean_object* v_a_3160_; lean_object* v___x_3163_; lean_object* v_a_3164_; 
lean_del_object(v___x_3156_);
v_val_3158_ = lean_ctor_get(v_a_3154_, 0);
lean_inc(v_val_3158_);
lean_dec_ref_known(v_a_3154_, 1);
v___x_3163_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg(v_selectionRangeStx_3149_, v___y_3150_);
v_a_3164_ = lean_ctor_get(v___x_3163_, 0);
lean_inc(v_a_3164_);
lean_dec_ref(v___x_3163_);
if (lean_obj_tag(v_a_3164_) == 0)
{
lean_inc(v_val_3158_);
v_a_3160_ = v_val_3158_;
goto v___jp_3159_;
}
else
{
lean_object* v_val_3165_; 
v_val_3165_ = lean_ctor_get(v_a_3164_, 0);
lean_inc(v_val_3165_);
lean_dec_ref_known(v_a_3164_, 1);
v_a_3160_ = v_val_3165_;
goto v___jp_3159_;
}
v___jp_3159_:
{
lean_object* v___x_3161_; lean_object* v___x_3162_; 
v___x_3161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3161_, 0, v_val_3158_);
lean_ctor_set(v___x_3161_, 1, v_a_3160_);
v___x_3162_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___redArg(v_declName_3147_, v___x_3161_, v___y_3151_);
return v___x_3162_;
}
}
else
{
lean_object* v___x_3166_; lean_object* v___x_3168_; 
lean_dec(v_a_3154_);
lean_dec(v_declName_3147_);
v___x_3166_ = lean_box(0);
if (v_isShared_3157_ == 0)
{
lean_ctor_set(v___x_3156_, 0, v___x_3166_);
v___x_3168_ = v___x_3156_;
goto v_reusejp_3167_;
}
else
{
lean_object* v_reuseFailAlloc_3169_; 
v_reuseFailAlloc_3169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3169_, 0, v___x_3166_);
v___x_3168_ = v_reuseFailAlloc_3169_;
goto v_reusejp_3167_;
}
v_reusejp_3167_:
{
return v___x_3168_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3___boxed(lean_object* v_declName_3171_, lean_object* v_rangeStx_3172_, lean_object* v_selectionRangeStx_3173_, lean_object* v___y_3174_, lean_object* v___y_3175_, lean_object* v___y_3176_){
_start:
{
lean_object* v_res_3177_; 
v_res_3177_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3(v_declName_3171_, v_rangeStx_3172_, v_selectionRangeStx_3173_, v___y_3174_, v___y_3175_);
lean_dec(v___y_3175_);
lean_dec_ref(v___y_3174_);
lean_dec(v_selectionRangeStx_3173_);
lean_dec(v_rangeStx_3172_);
return v_res_3177_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabNewtype___lam__2___closed__0(void){
_start:
{
lean_object* v___x_3178_; lean_object* v___x_3179_; 
v___x_3178_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0);
v___x_3179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3179_, 0, v___x_3178_);
return v___x_3179_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabNewtype___lam__2___closed__10(void){
_start:
{
lean_object* v___x_3192_; 
v___x_3192_ = l_Array_mkArray0___redArg();
return v___x_3192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__2(lean_object* v___x_3197_, lean_object* v_a_3198_, lean_object* v_projId_3199_, lean_object* v___x_3200_, lean_object* v___x_3201_, lean_object* v___x_3202_, lean_object* v_params_3203_, lean_object* v___x_3204_, lean_object* v_mods_3205_, lean_object* v___x_3206_, lean_object* v_optDeriving_3207_, lean_object* v___x_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_){
_start:
{
lean_object* v___x_3212_; 
v___x_3212_ = l_Lean_Elab_Command_getScope___redArg(v___y_3210_);
if (lean_obj_tag(v___x_3212_) == 0)
{
lean_object* v_a_3213_; lean_object* v_currNamespace_3214_; lean_object* v___x_3215_; 
v_a_3213_ = lean_ctor_get(v___x_3212_, 0);
lean_inc(v_a_3213_);
lean_dec_ref_known(v___x_3212_, 1);
v_currNamespace_3214_ = lean_ctor_get(v_a_3213_, 2);
lean_inc(v_currNamespace_3214_);
lean_dec(v_a_3213_);
v___x_3215_ = l_Lean_Elab_Command_getLevelNames___redArg(v___y_3210_);
if (lean_obj_tag(v___x_3215_) == 0)
{
lean_object* v_a_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; 
v_a_3216_ = lean_ctor_get(v___x_3215_, 0);
lean_inc(v_a_3216_);
lean_dec_ref_known(v___x_3215_, 1);
lean_inc(v___x_3197_);
v___x_3217_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandDeclId___boxed), 11, 4);
lean_closure_set(v___x_3217_, 0, v_currNamespace_3214_);
lean_closure_set(v___x_3217_, 1, v_a_3216_);
lean_closure_set(v___x_3217_, 2, v___x_3197_);
lean_closure_set(v___x_3217_, 3, v_a_3198_);
v___x_3218_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_3217_, v___y_3209_, v___y_3210_);
if (lean_obj_tag(v___x_3218_) == 0)
{
lean_object* v_a_3219_; lean_object* v_declName_3220_; lean_object* v___x_3222_; uint8_t v_isShared_3223_; uint8_t v_isSharedCheck_3382_; 
v_a_3219_ = lean_ctor_get(v___x_3218_, 0);
lean_inc(v_a_3219_);
lean_dec_ref_known(v___x_3218_, 1);
v_declName_3220_ = lean_ctor_get(v_a_3219_, 1);
v_isSharedCheck_3382_ = !lean_is_exclusive(v_a_3219_);
if (v_isSharedCheck_3382_ == 0)
{
lean_object* v_unused_3383_; lean_object* v_unused_3384_; lean_object* v_unused_3385_; 
v_unused_3383_ = lean_ctor_get(v_a_3219_, 3);
lean_dec(v_unused_3383_);
v_unused_3384_ = lean_ctor_get(v_a_3219_, 2);
lean_dec(v_unused_3384_);
v_unused_3385_ = lean_ctor_get(v_a_3219_, 0);
lean_dec(v_unused_3385_);
v___x_3222_ = v_a_3219_;
v_isShared_3223_ = v_isSharedCheck_3382_;
goto v_resetjp_3221_;
}
else
{
lean_inc(v_declName_3220_);
lean_dec(v_a_3219_);
v___x_3222_ = lean_box(0);
v_isShared_3223_ = v_isSharedCheck_3382_;
goto v_resetjp_3221_;
}
v_resetjp_3221_:
{
lean_object* v___y_3225_; size_t v___y_3226_; lean_object* v___y_3227_; lean_object* v___y_3228_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; 
v___x_3266_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__1));
lean_inc_n(v_declName_3220_, 3);
v___x_3267_ = l_Lean_Name_append(v_declName_3220_, v___x_3266_);
v___x_3268_ = l_Lean_TSyntax_getId(v_projId_3199_);
lean_inc(v___x_3268_);
v___x_3269_ = l_Lean_Name_append(v_declName_3220_, v___x_3268_);
v___x_3270_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__3));
v___x_3271_ = l_Lean_Name_append(v_declName_3220_, v___x_3270_);
v___x_3272_ = l_Lean_Elab_Command_getRef___redArg(v___y_3209_);
if (lean_obj_tag(v___x_3272_) == 0)
{
lean_object* v_a_3273_; uint8_t v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3363_; 
v_a_3273_ = lean_ctor_get(v___x_3272_, 0);
lean_inc(v_a_3273_);
lean_dec_ref_known(v___x_3272_, 1);
v___x_3274_ = 0;
v___x_3275_ = l_Lean_SourceInfo_fromRef(v_a_3273_, v___x_3274_);
lean_dec(v_a_3273_);
v___x_3363_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_3209_);
if (lean_obj_tag(v___x_3363_) == 0)
{
lean_object* v_quotContext_x3f_3364_; 
lean_dec_ref_known(v___x_3363_, 1);
v_quotContext_x3f_3364_ = lean_ctor_get(v___y_3209_, 5);
if (lean_obj_tag(v_quotContext_x3f_3364_) == 0)
{
lean_object* v___x_3365_; 
v___x_3365_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg(v___y_3210_);
lean_dec_ref(v___x_3365_);
goto v___jp_3276_;
}
else
{
goto v___jp_3276_;
}
}
else
{
lean_object* v_a_3366_; lean_object* v___x_3368_; uint8_t v_isShared_3369_; uint8_t v_isSharedCheck_3373_; 
lean_dec(v___x_3275_);
lean_dec(v___x_3271_);
lean_dec(v___x_3269_);
lean_dec(v___x_3268_);
lean_dec(v___x_3267_);
lean_del_object(v___x_3222_);
lean_dec(v_declName_3220_);
lean_dec(v___x_3208_);
lean_dec(v_optDeriving_3207_);
lean_dec(v___x_3206_);
lean_dec(v_mods_3205_);
lean_dec(v___x_3204_);
lean_dec_ref(v_params_3203_);
lean_dec_ref(v___x_3202_);
lean_dec_ref(v___x_3201_);
lean_dec_ref(v___x_3200_);
lean_dec(v_projId_3199_);
lean_dec(v___x_3197_);
v_a_3366_ = lean_ctor_get(v___x_3363_, 0);
v_isSharedCheck_3373_ = !lean_is_exclusive(v___x_3363_);
if (v_isSharedCheck_3373_ == 0)
{
v___x_3368_ = v___x_3363_;
v_isShared_3369_ = v_isSharedCheck_3373_;
goto v_resetjp_3367_;
}
else
{
lean_inc(v_a_3366_);
lean_dec(v___x_3363_);
v___x_3368_ = lean_box(0);
v_isShared_3369_ = v_isSharedCheck_3373_;
goto v_resetjp_3367_;
}
v_resetjp_3367_:
{
lean_object* v___x_3371_; 
if (v_isShared_3369_ == 0)
{
v___x_3371_ = v___x_3368_;
goto v_reusejp_3370_;
}
else
{
lean_object* v_reuseFailAlloc_3372_; 
v_reuseFailAlloc_3372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3372_, 0, v_a_3366_);
v___x_3371_ = v_reuseFailAlloc_3372_;
goto v_reusejp_3370_;
}
v_reusejp_3370_:
{
return v___x_3371_;
}
}
}
v___jp_3276_:
{
lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; size_t v_sz_3287_; size_t v___x_3288_; lean_object* v___x_3289_; size_t v_sz_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; 
v___x_3277_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__4));
lean_inc_ref_n(v___x_3202_, 3);
lean_inc_ref_n(v___x_3201_, 4);
lean_inc_ref_n(v___x_3200_, 4);
v___x_3278_ = l_Lean_Name_mkStr4(v___x_3200_, v___x_3201_, v___x_3202_, v___x_3277_);
v___x_3279_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__5));
v___x_3280_ = l_Lean_Name_mkStr4(v___x_3200_, v___x_3201_, v___x_3202_, v___x_3279_);
v___x_3281_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__6));
lean_inc_n(v___x_3275_, 8);
v___x_3282_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3282_, 0, v___x_3275_);
lean_ctor_set(v___x_3282_, 1, v___x_3281_);
v___x_3283_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__7));
v___x_3284_ = l_Lean_Name_mkStr4(v___x_3200_, v___x_3201_, v___x_3202_, v___x_3283_);
v___x_3285_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__9));
v___x_3286_ = lean_obj_once(&l_Lean_Elab_Command_elabNewtype___lam__2___closed__10, &l_Lean_Elab_Command_elabNewtype___lam__2___closed__10_once, _init_l_Lean_Elab_Command_elabNewtype___lam__2___closed__10);
v_sz_3287_ = lean_array_size(v_params_3203_);
v___x_3288_ = ((size_t)0ULL);
v___x_3289_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__1(v_sz_3287_, v___x_3288_, v_params_3203_);
v_sz_3290_ = lean_array_size(v___x_3289_);
v___x_3291_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(v_sz_3290_, v___x_3288_, v___x_3289_);
v___x_3292_ = l_Array_append___redArg(v___x_3286_, v___x_3291_);
lean_dec_ref(v___x_3291_);
v___x_3293_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3293_, 0, v___x_3275_);
lean_ctor_set(v___x_3293_, 1, v___x_3285_);
lean_ctor_set(v___x_3293_, 2, v___x_3292_);
v___x_3294_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3294_, 0, v___x_3275_);
lean_ctor_set(v___x_3294_, 1, v___x_3285_);
lean_ctor_set(v___x_3294_, 2, v___x_3286_);
lean_inc_ref_n(v___x_3294_, 4);
v___x_3295_ = l_Lean_Syntax_node2(v___x_3275_, v___x_3284_, v___x_3293_, v___x_3294_);
v___x_3296_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__11));
v___x_3297_ = l_Lean_Name_mkStr4(v___x_3200_, v___x_3201_, v___x_3202_, v___x_3296_);
v___x_3298_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__12));
v___x_3299_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3299_, 0, v___x_3275_);
lean_ctor_set(v___x_3299_, 1, v___x_3298_);
v___x_3300_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__13));
v___x_3301_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__14));
v___x_3302_ = l_Lean_Name_mkStr4(v___x_3200_, v___x_3201_, v___x_3300_, v___x_3301_);
v___x_3303_ = l_Lean_Syntax_node2(v___x_3275_, v___x_3302_, v___x_3294_, v___x_3294_);
v___x_3304_ = l_Lean_Syntax_node4(v___x_3275_, v___x_3297_, v___x_3299_, v___x_3204_, v___x_3303_, v___x_3294_);
lean_inc(v___x_3197_);
v___x_3305_ = l_Lean_Syntax_node5(v___x_3275_, v___x_3280_, v___x_3282_, v___x_3197_, v___x_3295_, v___x_3304_, v___x_3294_);
v___x_3306_ = l_Lean_Syntax_node2(v___x_3275_, v___x_3278_, v_mods_3205_, v___x_3305_);
v___x_3307_ = l_Lean_Elab_Command_elabCommand(v___x_3306_, v___y_3209_, v___y_3210_);
if (lean_obj_tag(v___x_3307_) == 0)
{
lean_object* v___x_3308_; lean_object* v___x_3309_; 
lean_dec_ref_known(v___x_3307_, 1);
lean_inc(v___x_3271_);
lean_inc(v___x_3269_);
lean_inc(v___x_3267_);
lean_inc(v_declName_3220_);
v___x_3308_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___boxed), 12, 5);
lean_closure_set(v___x_3308_, 0, v_declName_3220_);
lean_closure_set(v___x_3308_, 1, v___x_3267_);
lean_closure_set(v___x_3308_, 2, v___x_3269_);
lean_closure_set(v___x_3308_, 3, v___x_3271_);
lean_closure_set(v___x_3308_, 4, v___x_3268_);
v___x_3309_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_3308_, v___y_3209_, v___y_3210_);
if (lean_obj_tag(v___x_3309_) == 0)
{
lean_object* v_a_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; 
v_a_3310_ = lean_ctor_get(v___x_3309_, 0);
lean_inc(v_a_3310_);
lean_dec_ref_known(v___x_3309_, 1);
v___x_3311_ = lean_box(0);
lean_inc(v___x_3267_);
v___x_3312_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3(v___x_3267_, v___x_3197_, v___x_3311_, v___y_3209_, v___y_3210_);
if (lean_obj_tag(v___x_3312_) == 0)
{
lean_object* v___x_3313_; 
lean_dec_ref_known(v___x_3312_, 1);
lean_inc(v___x_3269_);
v___x_3313_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3(v___x_3269_, v_projId_3199_, v___x_3311_, v___y_3209_, v___y_3210_);
if (lean_obj_tag(v___x_3313_) == 0)
{
lean_object* v___x_3314_; lean_object* v___x_3315_; 
lean_dec_ref_known(v___x_3313_, 1);
v___x_3314_ = lean_box(0);
lean_inc(v___x_3269_);
v___x_3315_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4(v_projId_3199_, v___x_3269_, v___x_3314_, v___y_3209_, v___y_3210_);
if (lean_obj_tag(v___x_3315_) == 0)
{
lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v_env_3322_; lean_object* v_messages_3323_; lean_object* v_scopes_3324_; lean_object* v_usedQuotCtxts_3325_; lean_object* v_nextMacroScope_3326_; lean_object* v_maxRecDepth_3327_; lean_object* v_ngen_3328_; lean_object* v_auxDeclNGen_3329_; lean_object* v_infoState_3330_; lean_object* v_traceState_3331_; lean_object* v_snapshotTasks_3332_; lean_object* v_prevLinterStates_3333_; lean_object* v_codeQualityEntryTasks_3334_; lean_object* v___x_3336_; uint8_t v_isShared_3337_; uint8_t v_isSharedCheck_3354_; 
lean_dec_ref_known(v___x_3315_, 1);
lean_inc(v___x_3269_);
v___x_3316_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3316_, 0, v___x_3269_);
lean_ctor_set(v___x_3316_, 1, v___x_3206_);
lean_inc(v___x_3267_);
v___x_3317_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3317_, 0, v___x_3267_);
lean_ctor_set(v___x_3317_, 1, v___x_3316_);
lean_inc_ref(v___x_3317_);
lean_inc(v_declName_3220_);
v___x_3318_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3318_, 0, v_declName_3220_);
lean_ctor_set(v___x_3318_, 1, v___x_3317_);
v___x_3319_ = lean_box(0);
v___x_3320_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg(v___x_3318_, v___x_3319_, v___y_3209_, v___y_3210_);
lean_dec_ref_known(v___x_3318_, 2);
lean_dec_ref(v___x_3320_);
v___x_3321_ = lean_st_ref_take(v___y_3210_);
v_env_3322_ = lean_ctor_get(v___x_3321_, 0);
v_messages_3323_ = lean_ctor_get(v___x_3321_, 1);
v_scopes_3324_ = lean_ctor_get(v___x_3321_, 2);
v_usedQuotCtxts_3325_ = lean_ctor_get(v___x_3321_, 3);
v_nextMacroScope_3326_ = lean_ctor_get(v___x_3321_, 4);
v_maxRecDepth_3327_ = lean_ctor_get(v___x_3321_, 5);
v_ngen_3328_ = lean_ctor_get(v___x_3321_, 6);
v_auxDeclNGen_3329_ = lean_ctor_get(v___x_3321_, 7);
v_infoState_3330_ = lean_ctor_get(v___x_3321_, 8);
v_traceState_3331_ = lean_ctor_get(v___x_3321_, 9);
v_snapshotTasks_3332_ = lean_ctor_get(v___x_3321_, 10);
v_prevLinterStates_3333_ = lean_ctor_get(v___x_3321_, 11);
v_codeQualityEntryTasks_3334_ = lean_ctor_get(v___x_3321_, 12);
v_isSharedCheck_3354_ = !lean_is_exclusive(v___x_3321_);
if (v_isSharedCheck_3354_ == 0)
{
v___x_3336_ = v___x_3321_;
v_isShared_3337_ = v_isSharedCheck_3354_;
goto v_resetjp_3335_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3334_);
lean_inc(v_prevLinterStates_3333_);
lean_inc(v_snapshotTasks_3332_);
lean_inc(v_traceState_3331_);
lean_inc(v_infoState_3330_);
lean_inc(v_auxDeclNGen_3329_);
lean_inc(v_ngen_3328_);
lean_inc(v_maxRecDepth_3327_);
lean_inc(v_nextMacroScope_3326_);
lean_inc(v_usedQuotCtxts_3325_);
lean_inc(v_scopes_3324_);
lean_inc(v_messages_3323_);
lean_inc(v_env_3322_);
lean_dec(v___x_3321_);
v___x_3336_ = lean_box(0);
v_isShared_3337_ = v_isSharedCheck_3354_;
goto v_resetjp_3335_;
}
v_resetjp_3335_:
{
lean_object* v___x_3339_; 
lean_inc(v_declName_3220_);
if (v_isShared_3223_ == 0)
{
lean_ctor_set(v___x_3222_, 3, v_a_3310_);
lean_ctor_set(v___x_3222_, 2, v___x_3269_);
lean_ctor_set(v___x_3222_, 1, v___x_3267_);
lean_ctor_set(v___x_3222_, 0, v_declName_3220_);
v___x_3339_ = v___x_3222_;
goto v_reusejp_3338_;
}
else
{
lean_object* v_reuseFailAlloc_3353_; 
v_reuseFailAlloc_3353_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3353_, 0, v_declName_3220_);
lean_ctor_set(v_reuseFailAlloc_3353_, 1, v___x_3267_);
lean_ctor_set(v_reuseFailAlloc_3353_, 2, v___x_3269_);
lean_ctor_set(v_reuseFailAlloc_3353_, 3, v_a_3310_);
v___x_3339_ = v_reuseFailAlloc_3353_;
goto v_reusejp_3338_;
}
v_reusejp_3338_:
{
lean_object* v___x_3340_; lean_object* v___x_3342_; 
v___x_3340_ = l_Lean_registerVirtualStructure(v_env_3322_, v___x_3339_);
if (v_isShared_3337_ == 0)
{
lean_ctor_set(v___x_3336_, 0, v___x_3340_);
v___x_3342_ = v___x_3336_;
goto v_reusejp_3341_;
}
else
{
lean_object* v_reuseFailAlloc_3352_; 
v_reuseFailAlloc_3352_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3352_, 0, v___x_3340_);
lean_ctor_set(v_reuseFailAlloc_3352_, 1, v_messages_3323_);
lean_ctor_set(v_reuseFailAlloc_3352_, 2, v_scopes_3324_);
lean_ctor_set(v_reuseFailAlloc_3352_, 3, v_usedQuotCtxts_3325_);
lean_ctor_set(v_reuseFailAlloc_3352_, 4, v_nextMacroScope_3326_);
lean_ctor_set(v_reuseFailAlloc_3352_, 5, v_maxRecDepth_3327_);
lean_ctor_set(v_reuseFailAlloc_3352_, 6, v_ngen_3328_);
lean_ctor_set(v_reuseFailAlloc_3352_, 7, v_auxDeclNGen_3329_);
lean_ctor_set(v_reuseFailAlloc_3352_, 8, v_infoState_3330_);
lean_ctor_set(v_reuseFailAlloc_3352_, 9, v_traceState_3331_);
lean_ctor_set(v_reuseFailAlloc_3352_, 10, v_snapshotTasks_3332_);
lean_ctor_set(v_reuseFailAlloc_3352_, 11, v_prevLinterStates_3333_);
lean_ctor_set(v_reuseFailAlloc_3352_, 12, v_codeQualityEntryTasks_3334_);
v___x_3342_ = v_reuseFailAlloc_3352_;
goto v_reusejp_3341_;
}
v_reusejp_3341_:
{
lean_object* v___x_3343_; lean_object* v___x_3344_; 
v___x_3343_ = lean_st_ref_put(v___y_3210_, v___x_3342_);
v___x_3344_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg(v___x_3317_, v___x_3319_, v___y_3209_, v___y_3210_);
lean_dec_ref_known(v___x_3317_, 2);
if (lean_obj_tag(v___x_3344_) == 0)
{
lean_object* v___x_3345_; lean_object* v_env_3346_; uint8_t v___x_3347_; uint8_t v___x_3348_; 
lean_dec_ref_known(v___x_3344_, 1);
v___x_3345_ = lean_st_ref_get(v___y_3210_);
v_env_3346_ = lean_ctor_get(v___x_3345_, 0);
lean_inc_ref(v_env_3346_);
lean_dec(v___x_3345_);
v___x_3347_ = 1;
lean_inc(v___x_3271_);
v___x_3348_ = l_Lean_Environment_contains(v_env_3346_, v___x_3271_, v___x_3347_);
if (v___x_3348_ == 0)
{
lean_dec(v___x_3271_);
lean_dec(v___x_3197_);
v___y_3225_ = v___x_3319_;
v___y_3226_ = v___x_3288_;
v___y_3227_ = v___y_3209_;
v___y_3228_ = v___y_3210_;
goto v___jp_3224_;
}
else
{
lean_object* v___x_3349_; 
lean_inc(v___x_3271_);
v___x_3349_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3(v___x_3271_, v___x_3197_, v___x_3311_, v___y_3209_, v___y_3210_);
lean_dec(v___x_3197_);
if (lean_obj_tag(v___x_3349_) == 0)
{
lean_object* v___x_3350_; lean_object* v___x_3351_; 
lean_dec_ref_known(v___x_3349_, 1);
v___x_3350_ = lean_alloc_closure((void*)(l_Lean_enableRealizationsForConst___boxed), 4, 1);
lean_closure_set(v___x_3350_, 0, v___x_3271_);
v___x_3351_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_3350_, v___y_3209_, v___y_3210_);
if (lean_obj_tag(v___x_3351_) == 0)
{
lean_dec_ref_known(v___x_3351_, 1);
v___y_3225_ = v___x_3319_;
v___y_3226_ = v___x_3288_;
v___y_3227_ = v___y_3209_;
v___y_3228_ = v___y_3210_;
goto v___jp_3224_;
}
else
{
lean_dec(v_declName_3220_);
lean_dec(v___x_3208_);
lean_dec(v_optDeriving_3207_);
return v___x_3351_;
}
}
else
{
lean_dec(v___x_3271_);
lean_dec(v_declName_3220_);
lean_dec(v___x_3208_);
lean_dec(v_optDeriving_3207_);
return v___x_3349_;
}
}
}
else
{
lean_dec(v___x_3271_);
lean_dec(v_declName_3220_);
lean_dec(v___x_3208_);
lean_dec(v_optDeriving_3207_);
lean_dec(v___x_3197_);
return v___x_3344_;
}
}
}
}
}
else
{
lean_dec(v_a_3310_);
lean_dec(v___x_3271_);
lean_dec(v___x_3269_);
lean_dec(v___x_3267_);
lean_del_object(v___x_3222_);
lean_dec(v_declName_3220_);
lean_dec(v___x_3208_);
lean_dec(v_optDeriving_3207_);
lean_dec(v___x_3206_);
lean_dec(v___x_3197_);
return v___x_3315_;
}
}
else
{
lean_dec(v_a_3310_);
lean_dec(v___x_3271_);
lean_dec(v___x_3269_);
lean_dec(v___x_3267_);
lean_del_object(v___x_3222_);
lean_dec(v_declName_3220_);
lean_dec(v___x_3208_);
lean_dec(v_optDeriving_3207_);
lean_dec(v___x_3206_);
lean_dec(v_projId_3199_);
lean_dec(v___x_3197_);
return v___x_3313_;
}
}
else
{
lean_dec(v_a_3310_);
lean_dec(v___x_3271_);
lean_dec(v___x_3269_);
lean_dec(v___x_3267_);
lean_del_object(v___x_3222_);
lean_dec(v_declName_3220_);
lean_dec(v___x_3208_);
lean_dec(v_optDeriving_3207_);
lean_dec(v___x_3206_);
lean_dec(v_projId_3199_);
lean_dec(v___x_3197_);
return v___x_3312_;
}
}
else
{
lean_object* v_a_3355_; lean_object* v___x_3357_; uint8_t v_isShared_3358_; uint8_t v_isSharedCheck_3362_; 
lean_dec(v___x_3271_);
lean_dec(v___x_3269_);
lean_dec(v___x_3267_);
lean_del_object(v___x_3222_);
lean_dec(v_declName_3220_);
lean_dec(v___x_3208_);
lean_dec(v_optDeriving_3207_);
lean_dec(v___x_3206_);
lean_dec(v_projId_3199_);
lean_dec(v___x_3197_);
v_a_3355_ = lean_ctor_get(v___x_3309_, 0);
v_isSharedCheck_3362_ = !lean_is_exclusive(v___x_3309_);
if (v_isSharedCheck_3362_ == 0)
{
v___x_3357_ = v___x_3309_;
v_isShared_3358_ = v_isSharedCheck_3362_;
goto v_resetjp_3356_;
}
else
{
lean_inc(v_a_3355_);
lean_dec(v___x_3309_);
v___x_3357_ = lean_box(0);
v_isShared_3358_ = v_isSharedCheck_3362_;
goto v_resetjp_3356_;
}
v_resetjp_3356_:
{
lean_object* v___x_3360_; 
if (v_isShared_3358_ == 0)
{
v___x_3360_ = v___x_3357_;
goto v_reusejp_3359_;
}
else
{
lean_object* v_reuseFailAlloc_3361_; 
v_reuseFailAlloc_3361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3361_, 0, v_a_3355_);
v___x_3360_ = v_reuseFailAlloc_3361_;
goto v_reusejp_3359_;
}
v_reusejp_3359_:
{
return v___x_3360_;
}
}
}
}
else
{
lean_dec(v___x_3271_);
lean_dec(v___x_3269_);
lean_dec(v___x_3268_);
lean_dec(v___x_3267_);
lean_del_object(v___x_3222_);
lean_dec(v_declName_3220_);
lean_dec(v___x_3208_);
lean_dec(v_optDeriving_3207_);
lean_dec(v___x_3206_);
lean_dec(v_projId_3199_);
lean_dec(v___x_3197_);
return v___x_3307_;
}
}
}
else
{
lean_object* v_a_3374_; lean_object* v___x_3376_; uint8_t v_isShared_3377_; uint8_t v_isSharedCheck_3381_; 
lean_dec(v___x_3271_);
lean_dec(v___x_3269_);
lean_dec(v___x_3268_);
lean_dec(v___x_3267_);
lean_del_object(v___x_3222_);
lean_dec(v_declName_3220_);
lean_dec(v___x_3208_);
lean_dec(v_optDeriving_3207_);
lean_dec(v___x_3206_);
lean_dec(v_mods_3205_);
lean_dec(v___x_3204_);
lean_dec_ref(v_params_3203_);
lean_dec_ref(v___x_3202_);
lean_dec_ref(v___x_3201_);
lean_dec_ref(v___x_3200_);
lean_dec(v_projId_3199_);
lean_dec(v___x_3197_);
v_a_3374_ = lean_ctor_get(v___x_3272_, 0);
v_isSharedCheck_3381_ = !lean_is_exclusive(v___x_3272_);
if (v_isSharedCheck_3381_ == 0)
{
v___x_3376_ = v___x_3272_;
v_isShared_3377_ = v_isSharedCheck_3381_;
goto v_resetjp_3375_;
}
else
{
lean_inc(v_a_3374_);
lean_dec(v___x_3272_);
v___x_3376_ = lean_box(0);
v_isShared_3377_ = v_isSharedCheck_3381_;
goto v_resetjp_3375_;
}
v_resetjp_3375_:
{
lean_object* v___x_3379_; 
if (v_isShared_3377_ == 0)
{
v___x_3379_ = v___x_3376_;
goto v_reusejp_3378_;
}
else
{
lean_object* v_reuseFailAlloc_3380_; 
v_reuseFailAlloc_3380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3380_, 0, v_a_3374_);
v___x_3379_ = v_reuseFailAlloc_3380_;
goto v_reusejp_3378_;
}
v_reusejp_3378_:
{
return v___x_3379_;
}
}
}
v___jp_3224_:
{
lean_object* v___x_3229_; lean_object* v___x_3230_; 
v___x_3229_ = lean_alloc_closure((void*)(l_Lean_Elab_getOptDerivingClasses___boxed), 4, 1);
lean_closure_set(v___x_3229_, 0, v_optDeriving_3207_);
v___x_3230_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_3229_, v___y_3227_, v___y_3228_);
if (lean_obj_tag(v___x_3230_) == 0)
{
lean_object* v_a_3231_; lean_object* v___x_3233_; uint8_t v_isShared_3234_; uint8_t v_isSharedCheck_3257_; 
v_a_3231_ = lean_ctor_get(v___x_3230_, 0);
v_isSharedCheck_3257_ = !lean_is_exclusive(v___x_3230_);
if (v_isSharedCheck_3257_ == 0)
{
v___x_3233_ = v___x_3230_;
v_isShared_3234_ = v_isSharedCheck_3257_;
goto v_resetjp_3232_;
}
else
{
lean_inc(v_a_3231_);
lean_dec(v___x_3230_);
v___x_3233_ = lean_box(0);
v_isShared_3234_ = v_isSharedCheck_3257_;
goto v_resetjp_3232_;
}
v_resetjp_3232_:
{
lean_object* v___x_3235_; uint8_t v___x_3236_; 
v___x_3235_ = lean_array_get_size(v_a_3231_);
v___x_3236_ = lean_nat_dec_eq(v___x_3235_, v___x_3208_);
if (v___x_3236_ == 0)
{
uint8_t v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; size_t v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___f_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; 
lean_del_object(v___x_3233_);
v___x_3237_ = 1;
v___x_3238_ = lean_obj_once(&l_Lean_Elab_Command_elabNewtype___lam__2___closed__0, &l_Lean_Elab_Command_elabNewtype___lam__2___closed__0_once, _init_l_Lean_Elab_Command_elabNewtype___lam__2___closed__0);
v___x_3239_ = lean_unsigned_to_nat(32u);
v___x_3240_ = lean_mk_empty_array_with_capacity(v___x_3239_);
v___x_3241_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2);
v___x_3242_ = ((size_t)5ULL);
lean_inc_n(v___x_3208_, 2);
v___x_3243_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3243_, 0, v___x_3241_);
lean_ctor_set(v___x_3243_, 1, v___x_3240_);
lean_ctor_set(v___x_3243_, 2, v___x_3208_);
lean_ctor_set(v___x_3243_, 3, v___x_3208_);
lean_ctor_set_usize(v___x_3243_, 4, v___x_3242_);
v___x_3244_ = lean_box(1);
v___x_3245_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3245_, 0, v___x_3238_);
lean_ctor_set(v___x_3245_, 1, v___x_3243_);
lean_ctor_set(v___x_3245_, 2, v___x_3244_);
v___x_3246_ = lean_mk_empty_array_with_capacity(v___x_3208_);
lean_dec(v___x_3208_);
lean_inc(v_declName_3220_);
v___x_3247_ = lean_alloc_closure((void*)(l_Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5___boxed), 8, 1);
lean_closure_set(v___x_3247_, 0, v_declName_3220_);
v___x_3248_ = lean_box(v___x_3237_);
v___x_3249_ = lean_box_usize(v___y_3226_);
v___x_3250_ = lean_box(v___x_3236_);
v___f_3251_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___lam__1___boxed), 15, 8);
lean_closure_set(v___f_3251_, 0, v___x_3247_);
lean_closure_set(v___f_3251_, 1, v___x_3248_);
lean_closure_set(v___f_3251_, 2, v_declName_3220_);
lean_closure_set(v___f_3251_, 3, v_a_3231_);
lean_closure_set(v___f_3251_, 4, v___x_3235_);
lean_closure_set(v___f_3251_, 5, v___x_3249_);
lean_closure_set(v___f_3251_, 6, v___y_3225_);
lean_closure_set(v___f_3251_, 7, v___x_3250_);
v___x_3252_ = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___boxed), 11, 4);
lean_closure_set(v___x_3252_, 0, lean_box(0));
lean_closure_set(v___x_3252_, 1, v___x_3245_);
lean_closure_set(v___x_3252_, 2, v___x_3246_);
lean_closure_set(v___x_3252_, 3, v___f_3251_);
v___x_3253_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_3252_, v___y_3227_, v___y_3228_);
return v___x_3253_;
}
else
{
lean_object* v___x_3255_; 
lean_dec(v_a_3231_);
lean_dec(v_declName_3220_);
lean_dec(v___x_3208_);
if (v_isShared_3234_ == 0)
{
lean_ctor_set(v___x_3233_, 0, v___y_3225_);
v___x_3255_ = v___x_3233_;
goto v_reusejp_3254_;
}
else
{
lean_object* v_reuseFailAlloc_3256_; 
v_reuseFailAlloc_3256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3256_, 0, v___y_3225_);
v___x_3255_ = v_reuseFailAlloc_3256_;
goto v_reusejp_3254_;
}
v_reusejp_3254_:
{
return v___x_3255_;
}
}
}
}
else
{
lean_object* v_a_3258_; lean_object* v___x_3260_; uint8_t v_isShared_3261_; uint8_t v_isSharedCheck_3265_; 
lean_dec(v_declName_3220_);
lean_dec(v___x_3208_);
v_a_3258_ = lean_ctor_get(v___x_3230_, 0);
v_isSharedCheck_3265_ = !lean_is_exclusive(v___x_3230_);
if (v_isSharedCheck_3265_ == 0)
{
v___x_3260_ = v___x_3230_;
v_isShared_3261_ = v_isSharedCheck_3265_;
goto v_resetjp_3259_;
}
else
{
lean_inc(v_a_3258_);
lean_dec(v___x_3230_);
v___x_3260_ = lean_box(0);
v_isShared_3261_ = v_isSharedCheck_3265_;
goto v_resetjp_3259_;
}
v_resetjp_3259_:
{
lean_object* v___x_3263_; 
if (v_isShared_3261_ == 0)
{
v___x_3263_ = v___x_3260_;
goto v_reusejp_3262_;
}
else
{
lean_object* v_reuseFailAlloc_3264_; 
v_reuseFailAlloc_3264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3264_, 0, v_a_3258_);
v___x_3263_ = v_reuseFailAlloc_3264_;
goto v_reusejp_3262_;
}
v_reusejp_3262_:
{
return v___x_3263_;
}
}
}
}
}
}
else
{
lean_object* v_a_3386_; lean_object* v___x_3388_; uint8_t v_isShared_3389_; uint8_t v_isSharedCheck_3393_; 
lean_dec(v___x_3208_);
lean_dec(v_optDeriving_3207_);
lean_dec(v___x_3206_);
lean_dec(v_mods_3205_);
lean_dec(v___x_3204_);
lean_dec_ref(v_params_3203_);
lean_dec_ref(v___x_3202_);
lean_dec_ref(v___x_3201_);
lean_dec_ref(v___x_3200_);
lean_dec(v_projId_3199_);
lean_dec(v___x_3197_);
v_a_3386_ = lean_ctor_get(v___x_3218_, 0);
v_isSharedCheck_3393_ = !lean_is_exclusive(v___x_3218_);
if (v_isSharedCheck_3393_ == 0)
{
v___x_3388_ = v___x_3218_;
v_isShared_3389_ = v_isSharedCheck_3393_;
goto v_resetjp_3387_;
}
else
{
lean_inc(v_a_3386_);
lean_dec(v___x_3218_);
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
}
else
{
lean_object* v_a_3394_; lean_object* v___x_3396_; uint8_t v_isShared_3397_; uint8_t v_isSharedCheck_3401_; 
lean_dec(v_currNamespace_3214_);
lean_dec(v___x_3208_);
lean_dec(v_optDeriving_3207_);
lean_dec(v___x_3206_);
lean_dec(v_mods_3205_);
lean_dec(v___x_3204_);
lean_dec_ref(v_params_3203_);
lean_dec_ref(v___x_3202_);
lean_dec_ref(v___x_3201_);
lean_dec_ref(v___x_3200_);
lean_dec(v_projId_3199_);
lean_dec_ref(v_a_3198_);
lean_dec(v___x_3197_);
v_a_3394_ = lean_ctor_get(v___x_3215_, 0);
v_isSharedCheck_3401_ = !lean_is_exclusive(v___x_3215_);
if (v_isSharedCheck_3401_ == 0)
{
v___x_3396_ = v___x_3215_;
v_isShared_3397_ = v_isSharedCheck_3401_;
goto v_resetjp_3395_;
}
else
{
lean_inc(v_a_3394_);
lean_dec(v___x_3215_);
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
lean_object* v_a_3402_; lean_object* v___x_3404_; uint8_t v_isShared_3405_; uint8_t v_isSharedCheck_3409_; 
lean_dec(v___x_3208_);
lean_dec(v_optDeriving_3207_);
lean_dec(v___x_3206_);
lean_dec(v_mods_3205_);
lean_dec(v___x_3204_);
lean_dec_ref(v_params_3203_);
lean_dec_ref(v___x_3202_);
lean_dec_ref(v___x_3201_);
lean_dec_ref(v___x_3200_);
lean_dec(v_projId_3199_);
lean_dec_ref(v_a_3198_);
lean_dec(v___x_3197_);
v_a_3402_ = lean_ctor_get(v___x_3212_, 0);
v_isSharedCheck_3409_ = !lean_is_exclusive(v___x_3212_);
if (v_isSharedCheck_3409_ == 0)
{
v___x_3404_ = v___x_3212_;
v_isShared_3405_ = v_isSharedCheck_3409_;
goto v_resetjp_3403_;
}
else
{
lean_inc(v_a_3402_);
lean_dec(v___x_3212_);
v___x_3404_ = lean_box(0);
v_isShared_3405_ = v_isSharedCheck_3409_;
goto v_resetjp_3403_;
}
v_resetjp_3403_:
{
lean_object* v___x_3407_; 
if (v_isShared_3405_ == 0)
{
v___x_3407_ = v___x_3404_;
goto v_reusejp_3406_;
}
else
{
lean_object* v_reuseFailAlloc_3408_; 
v_reuseFailAlloc_3408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3408_, 0, v_a_3402_);
v___x_3407_ = v_reuseFailAlloc_3408_;
goto v_reusejp_3406_;
}
v_reusejp_3406_:
{
return v___x_3407_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___boxed(lean_object* v___x_3410_, lean_object* v_a_3411_, lean_object* v_projId_3412_, lean_object* v___x_3413_, lean_object* v___x_3414_, lean_object* v___x_3415_, lean_object* v_params_3416_, lean_object* v___x_3417_, lean_object* v_mods_3418_, lean_object* v___x_3419_, lean_object* v_optDeriving_3420_, lean_object* v___x_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_){
_start:
{
lean_object* v_res_3425_; 
v_res_3425_ = l_Lean_Elab_Command_elabNewtype___lam__2(v___x_3410_, v_a_3411_, v_projId_3412_, v___x_3413_, v___x_3414_, v___x_3415_, v_params_3416_, v___x_3417_, v_mods_3418_, v___x_3419_, v_optDeriving_3420_, v___x_3421_, v___y_3422_, v___y_3423_);
lean_dec(v___y_3423_);
lean_dec_ref(v___y_3422_);
return v_res_3425_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___lam__0(uint8_t v_suppressElabErrors_3426_, uint8_t v___y_3427_, lean_object* v_x_3428_){
_start:
{
if (lean_obj_tag(v_x_3428_) == 1)
{
lean_object* v_pre_3429_; 
v_pre_3429_ = lean_ctor_get(v_x_3428_, 0);
if (lean_obj_tag(v_pre_3429_) == 0)
{
lean_object* v_str_3430_; lean_object* v___x_3431_; uint8_t v___x_3432_; 
v_str_3430_ = lean_ctor_get(v_x_3428_, 1);
v___x_3431_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__7));
v___x_3432_ = lean_string_dec_eq(v_str_3430_, v___x_3431_);
if (v___x_3432_ == 0)
{
return v___x_3432_;
}
else
{
return v_suppressElabErrors_3426_;
}
}
else
{
return v___y_3427_;
}
}
else
{
return v___y_3427_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___lam__0___boxed(lean_object* v_suppressElabErrors_3433_, lean_object* v___y_3434_, lean_object* v_x_3435_){
_start:
{
uint8_t v_suppressElabErrors_boxed_3436_; uint8_t v___y_53207__boxed_3437_; uint8_t v_res_3438_; lean_object* v_r_3439_; 
v_suppressElabErrors_boxed_3436_ = lean_unbox(v_suppressElabErrors_3433_);
v___y_53207__boxed_3437_ = lean_unbox(v___y_3434_);
v_res_3438_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___lam__0(v_suppressElabErrors_boxed_3436_, v___y_53207__boxed_3437_, v_x_3435_);
lean_dec(v_x_3435_);
v_r_3439_ = lean_box(v_res_3438_);
return v_r_3439_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40(lean_object* v_ref_3440_, lean_object* v_msgData_3441_, uint8_t v_severity_3442_, uint8_t v_isSilent_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_){
_start:
{
lean_object* v___y_3448_; lean_object* v___y_3449_; lean_object* v___y_3450_; uint8_t v___y_3451_; lean_object* v___y_3452_; lean_object* v___y_3453_; uint8_t v___y_3454_; lean_object* v___y_3455_; uint8_t v___y_3513_; uint8_t v___y_3514_; uint8_t v___y_3515_; lean_object* v___y_3516_; lean_object* v___y_3517_; uint8_t v___y_3541_; uint8_t v___y_3542_; lean_object* v___y_3543_; uint8_t v___y_3544_; lean_object* v___y_3545_; uint8_t v___y_3549_; uint8_t v___y_3550_; uint8_t v___y_3551_; uint8_t v___x_3566_; uint8_t v___y_3568_; uint8_t v___y_3569_; uint8_t v___y_3570_; uint8_t v___y_3572_; uint8_t v___x_3584_; 
v___x_3566_ = 2;
v___x_3584_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3442_, v___x_3566_);
if (v___x_3584_ == 0)
{
v___y_3572_ = v___x_3584_;
goto v___jp_3571_;
}
else
{
uint8_t v___x_3585_; 
lean_inc_ref(v_msgData_3441_);
v___x_3585_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_3441_);
v___y_3572_ = v___x_3585_;
goto v___jp_3571_;
}
v___jp_3447_:
{
lean_object* v___x_3456_; 
v___x_3456_ = l_Lean_Elab_Command_getScope___redArg(v___y_3455_);
if (lean_obj_tag(v___x_3456_) == 0)
{
lean_object* v_a_3457_; lean_object* v_currNamespace_3458_; lean_object* v___x_3459_; 
v_a_3457_ = lean_ctor_get(v___x_3456_, 0);
lean_inc(v_a_3457_);
lean_dec_ref_known(v___x_3456_, 1);
v_currNamespace_3458_ = lean_ctor_get(v_a_3457_, 2);
lean_inc(v_currNamespace_3458_);
lean_dec(v_a_3457_);
v___x_3459_ = l_Lean_Elab_Command_getScope___redArg(v___y_3455_);
if (lean_obj_tag(v___x_3459_) == 0)
{
lean_object* v_a_3460_; lean_object* v___x_3462_; uint8_t v_isShared_3463_; uint8_t v_isSharedCheck_3495_; 
v_a_3460_ = lean_ctor_get(v___x_3459_, 0);
v_isSharedCheck_3495_ = !lean_is_exclusive(v___x_3459_);
if (v_isSharedCheck_3495_ == 0)
{
v___x_3462_ = v___x_3459_;
v_isShared_3463_ = v_isSharedCheck_3495_;
goto v_resetjp_3461_;
}
else
{
lean_inc(v_a_3460_);
lean_dec(v___x_3459_);
v___x_3462_ = lean_box(0);
v_isShared_3463_ = v_isSharedCheck_3495_;
goto v_resetjp_3461_;
}
v_resetjp_3461_:
{
lean_object* v_openDecls_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v_env_3469_; lean_object* v_messages_3470_; lean_object* v_scopes_3471_; lean_object* v_usedQuotCtxts_3472_; lean_object* v_nextMacroScope_3473_; lean_object* v_maxRecDepth_3474_; lean_object* v_ngen_3475_; lean_object* v_auxDeclNGen_3476_; lean_object* v_infoState_3477_; lean_object* v_traceState_3478_; lean_object* v_snapshotTasks_3479_; lean_object* v_prevLinterStates_3480_; lean_object* v_codeQualityEntryTasks_3481_; lean_object* v___x_3483_; uint8_t v_isShared_3484_; uint8_t v_isSharedCheck_3494_; 
v_openDecls_3464_ = lean_ctor_get(v_a_3460_, 3);
lean_inc(v_openDecls_3464_);
lean_dec(v_a_3460_);
v___x_3465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3465_, 0, v_currNamespace_3458_);
lean_ctor_set(v___x_3465_, 1, v_openDecls_3464_);
v___x_3466_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3466_, 0, v___x_3465_);
lean_ctor_set(v___x_3466_, 1, v___y_3452_);
lean_inc_ref(v___y_3450_);
lean_inc_ref(v___y_3448_);
v___x_3467_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_3467_, 0, v___y_3448_);
lean_ctor_set(v___x_3467_, 1, v___y_3449_);
lean_ctor_set(v___x_3467_, 2, v___y_3453_);
lean_ctor_set(v___x_3467_, 3, v___y_3450_);
lean_ctor_set(v___x_3467_, 4, v___x_3466_);
lean_ctor_set_uint8(v___x_3467_, sizeof(void*)*5, v___y_3451_);
lean_ctor_set_uint8(v___x_3467_, sizeof(void*)*5 + 1, v___y_3454_);
lean_ctor_set_uint8(v___x_3467_, sizeof(void*)*5 + 2, v_isSilent_3443_);
v___x_3468_ = lean_st_ref_take(v___y_3455_);
v_env_3469_ = lean_ctor_get(v___x_3468_, 0);
v_messages_3470_ = lean_ctor_get(v___x_3468_, 1);
v_scopes_3471_ = lean_ctor_get(v___x_3468_, 2);
v_usedQuotCtxts_3472_ = lean_ctor_get(v___x_3468_, 3);
v_nextMacroScope_3473_ = lean_ctor_get(v___x_3468_, 4);
v_maxRecDepth_3474_ = lean_ctor_get(v___x_3468_, 5);
v_ngen_3475_ = lean_ctor_get(v___x_3468_, 6);
v_auxDeclNGen_3476_ = lean_ctor_get(v___x_3468_, 7);
v_infoState_3477_ = lean_ctor_get(v___x_3468_, 8);
v_traceState_3478_ = lean_ctor_get(v___x_3468_, 9);
v_snapshotTasks_3479_ = lean_ctor_get(v___x_3468_, 10);
v_prevLinterStates_3480_ = lean_ctor_get(v___x_3468_, 11);
v_codeQualityEntryTasks_3481_ = lean_ctor_get(v___x_3468_, 12);
v_isSharedCheck_3494_ = !lean_is_exclusive(v___x_3468_);
if (v_isSharedCheck_3494_ == 0)
{
v___x_3483_ = v___x_3468_;
v_isShared_3484_ = v_isSharedCheck_3494_;
goto v_resetjp_3482_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3481_);
lean_inc(v_prevLinterStates_3480_);
lean_inc(v_snapshotTasks_3479_);
lean_inc(v_traceState_3478_);
lean_inc(v_infoState_3477_);
lean_inc(v_auxDeclNGen_3476_);
lean_inc(v_ngen_3475_);
lean_inc(v_maxRecDepth_3474_);
lean_inc(v_nextMacroScope_3473_);
lean_inc(v_usedQuotCtxts_3472_);
lean_inc(v_scopes_3471_);
lean_inc(v_messages_3470_);
lean_inc(v_env_3469_);
lean_dec(v___x_3468_);
v___x_3483_ = lean_box(0);
v_isShared_3484_ = v_isSharedCheck_3494_;
goto v_resetjp_3482_;
}
v_resetjp_3482_:
{
lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3488_; 
v___x_3485_ = lean_box(0);
v___x_3486_ = l_Lean_MessageLog_add(v___x_3467_, v_messages_3470_);
if (v_isShared_3484_ == 0)
{
lean_ctor_set(v___x_3483_, 1, v___x_3486_);
v___x_3488_ = v___x_3483_;
goto v_reusejp_3487_;
}
else
{
lean_object* v_reuseFailAlloc_3493_; 
v_reuseFailAlloc_3493_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3493_, 0, v_env_3469_);
lean_ctor_set(v_reuseFailAlloc_3493_, 1, v___x_3486_);
lean_ctor_set(v_reuseFailAlloc_3493_, 2, v_scopes_3471_);
lean_ctor_set(v_reuseFailAlloc_3493_, 3, v_usedQuotCtxts_3472_);
lean_ctor_set(v_reuseFailAlloc_3493_, 4, v_nextMacroScope_3473_);
lean_ctor_set(v_reuseFailAlloc_3493_, 5, v_maxRecDepth_3474_);
lean_ctor_set(v_reuseFailAlloc_3493_, 6, v_ngen_3475_);
lean_ctor_set(v_reuseFailAlloc_3493_, 7, v_auxDeclNGen_3476_);
lean_ctor_set(v_reuseFailAlloc_3493_, 8, v_infoState_3477_);
lean_ctor_set(v_reuseFailAlloc_3493_, 9, v_traceState_3478_);
lean_ctor_set(v_reuseFailAlloc_3493_, 10, v_snapshotTasks_3479_);
lean_ctor_set(v_reuseFailAlloc_3493_, 11, v_prevLinterStates_3480_);
lean_ctor_set(v_reuseFailAlloc_3493_, 12, v_codeQualityEntryTasks_3481_);
v___x_3488_ = v_reuseFailAlloc_3493_;
goto v_reusejp_3487_;
}
v_reusejp_3487_:
{
lean_object* v___x_3489_; lean_object* v___x_3491_; 
v___x_3489_ = lean_st_ref_put(v___y_3455_, v___x_3488_);
if (v_isShared_3463_ == 0)
{
lean_ctor_set(v___x_3462_, 0, v___x_3485_);
v___x_3491_ = v___x_3462_;
goto v_reusejp_3490_;
}
else
{
lean_object* v_reuseFailAlloc_3492_; 
v_reuseFailAlloc_3492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3492_, 0, v___x_3485_);
v___x_3491_ = v_reuseFailAlloc_3492_;
goto v_reusejp_3490_;
}
v_reusejp_3490_:
{
return v___x_3491_;
}
}
}
}
}
else
{
lean_object* v_a_3496_; lean_object* v___x_3498_; uint8_t v_isShared_3499_; uint8_t v_isSharedCheck_3503_; 
lean_dec(v_currNamespace_3458_);
lean_dec(v___y_3453_);
lean_dec_ref(v___y_3452_);
lean_dec_ref(v___y_3449_);
v_a_3496_ = lean_ctor_get(v___x_3459_, 0);
v_isSharedCheck_3503_ = !lean_is_exclusive(v___x_3459_);
if (v_isSharedCheck_3503_ == 0)
{
v___x_3498_ = v___x_3459_;
v_isShared_3499_ = v_isSharedCheck_3503_;
goto v_resetjp_3497_;
}
else
{
lean_inc(v_a_3496_);
lean_dec(v___x_3459_);
v___x_3498_ = lean_box(0);
v_isShared_3499_ = v_isSharedCheck_3503_;
goto v_resetjp_3497_;
}
v_resetjp_3497_:
{
lean_object* v___x_3501_; 
if (v_isShared_3499_ == 0)
{
v___x_3501_ = v___x_3498_;
goto v_reusejp_3500_;
}
else
{
lean_object* v_reuseFailAlloc_3502_; 
v_reuseFailAlloc_3502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3502_, 0, v_a_3496_);
v___x_3501_ = v_reuseFailAlloc_3502_;
goto v_reusejp_3500_;
}
v_reusejp_3500_:
{
return v___x_3501_;
}
}
}
}
else
{
lean_object* v_a_3504_; lean_object* v___x_3506_; uint8_t v_isShared_3507_; uint8_t v_isSharedCheck_3511_; 
lean_dec(v___y_3453_);
lean_dec_ref(v___y_3452_);
lean_dec_ref(v___y_3449_);
v_a_3504_ = lean_ctor_get(v___x_3456_, 0);
v_isSharedCheck_3511_ = !lean_is_exclusive(v___x_3456_);
if (v_isSharedCheck_3511_ == 0)
{
v___x_3506_ = v___x_3456_;
v_isShared_3507_ = v_isSharedCheck_3511_;
goto v_resetjp_3505_;
}
else
{
lean_inc(v_a_3504_);
lean_dec(v___x_3456_);
v___x_3506_ = lean_box(0);
v_isShared_3507_ = v_isSharedCheck_3511_;
goto v_resetjp_3505_;
}
v_resetjp_3505_:
{
lean_object* v___x_3509_; 
if (v_isShared_3507_ == 0)
{
v___x_3509_ = v___x_3506_;
goto v_reusejp_3508_;
}
else
{
lean_object* v_reuseFailAlloc_3510_; 
v_reuseFailAlloc_3510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3510_, 0, v_a_3504_);
v___x_3509_ = v_reuseFailAlloc_3510_;
goto v_reusejp_3508_;
}
v_reusejp_3508_:
{
return v___x_3509_;
}
}
}
}
v___jp_3512_:
{
lean_object* v_fileName_3518_; lean_object* v_fileMap_3519_; uint8_t v_suppressElabErrors_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___f_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v_a_3526_; lean_object* v___x_3528_; uint8_t v_isShared_3529_; uint8_t v_isSharedCheck_3539_; 
v_fileName_3518_ = lean_ctor_get(v___y_3444_, 0);
v_fileMap_3519_ = lean_ctor_get(v___y_3444_, 1);
v_suppressElabErrors_3520_ = lean_ctor_get_uint8(v___y_3444_, sizeof(void*)*10);
v___x_3521_ = lean_box(v_suppressElabErrors_3520_);
v___x_3522_ = lean_box(v___y_3513_);
v___f_3523_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3523_, 0, v___x_3521_);
lean_closure_set(v___f_3523_, 1, v___x_3522_);
v___x_3524_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_3441_);
v___x_3525_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(v___x_3524_, v___y_3445_);
v_a_3526_ = lean_ctor_get(v___x_3525_, 0);
v_isSharedCheck_3539_ = !lean_is_exclusive(v___x_3525_);
if (v_isSharedCheck_3539_ == 0)
{
v___x_3528_ = v___x_3525_;
v_isShared_3529_ = v_isSharedCheck_3539_;
goto v_resetjp_3527_;
}
else
{
lean_inc(v_a_3526_);
lean_dec(v___x_3525_);
v___x_3528_ = lean_box(0);
v_isShared_3529_ = v_isSharedCheck_3539_;
goto v_resetjp_3527_;
}
v_resetjp_3527_:
{
lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; 
lean_inc_ref_n(v_fileMap_3519_, 2);
v___x_3530_ = l_Lean_FileMap_toPosition(v_fileMap_3519_, v___y_3516_);
lean_dec(v___y_3516_);
v___x_3531_ = l_Lean_FileMap_toPosition(v_fileMap_3519_, v___y_3517_);
lean_dec(v___y_3517_);
v___x_3532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3532_, 0, v___x_3531_);
v___x_3533_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___closed__0));
if (v_suppressElabErrors_3520_ == 0)
{
lean_del_object(v___x_3528_);
lean_dec_ref(v___f_3523_);
v___y_3448_ = v_fileName_3518_;
v___y_3449_ = v___x_3530_;
v___y_3450_ = v___x_3533_;
v___y_3451_ = v___y_3514_;
v___y_3452_ = v_a_3526_;
v___y_3453_ = v___x_3532_;
v___y_3454_ = v___y_3515_;
v___y_3455_ = v___y_3445_;
goto v___jp_3447_;
}
else
{
uint8_t v___x_3534_; 
lean_inc(v_a_3526_);
v___x_3534_ = l_Lean_MessageData_hasTag(v___f_3523_, v_a_3526_);
if (v___x_3534_ == 0)
{
lean_object* v___x_3535_; lean_object* v___x_3537_; 
lean_dec_ref_known(v___x_3532_, 1);
lean_dec_ref(v___x_3530_);
lean_dec(v_a_3526_);
v___x_3535_ = lean_box(0);
if (v_isShared_3529_ == 0)
{
lean_ctor_set(v___x_3528_, 0, v___x_3535_);
v___x_3537_ = v___x_3528_;
goto v_reusejp_3536_;
}
else
{
lean_object* v_reuseFailAlloc_3538_; 
v_reuseFailAlloc_3538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3538_, 0, v___x_3535_);
v___x_3537_ = v_reuseFailAlloc_3538_;
goto v_reusejp_3536_;
}
v_reusejp_3536_:
{
return v___x_3537_;
}
}
else
{
lean_del_object(v___x_3528_);
v___y_3448_ = v_fileName_3518_;
v___y_3449_ = v___x_3530_;
v___y_3450_ = v___x_3533_;
v___y_3451_ = v___y_3514_;
v___y_3452_ = v_a_3526_;
v___y_3453_ = v___x_3532_;
v___y_3454_ = v___y_3515_;
v___y_3455_ = v___y_3445_;
goto v___jp_3447_;
}
}
}
}
v___jp_3540_:
{
lean_object* v___x_3546_; 
v___x_3546_ = l_Lean_Syntax_getTailPos_x3f(v___y_3543_, v___y_3542_);
lean_dec(v___y_3543_);
if (lean_obj_tag(v___x_3546_) == 0)
{
lean_inc(v___y_3545_);
v___y_3513_ = v___y_3541_;
v___y_3514_ = v___y_3542_;
v___y_3515_ = v___y_3544_;
v___y_3516_ = v___y_3545_;
v___y_3517_ = v___y_3545_;
goto v___jp_3512_;
}
else
{
lean_object* v_val_3547_; 
v_val_3547_ = lean_ctor_get(v___x_3546_, 0);
lean_inc(v_val_3547_);
lean_dec_ref_known(v___x_3546_, 1);
v___y_3513_ = v___y_3541_;
v___y_3514_ = v___y_3542_;
v___y_3515_ = v___y_3544_;
v___y_3516_ = v___y_3545_;
v___y_3517_ = v_val_3547_;
goto v___jp_3512_;
}
}
v___jp_3548_:
{
lean_object* v___x_3552_; 
v___x_3552_ = l_Lean_Elab_Command_getRef___redArg(v___y_3444_);
if (lean_obj_tag(v___x_3552_) == 0)
{
lean_object* v_a_3553_; lean_object* v_ref_3554_; lean_object* v___x_3555_; 
v_a_3553_ = lean_ctor_get(v___x_3552_, 0);
lean_inc(v_a_3553_);
lean_dec_ref_known(v___x_3552_, 1);
v_ref_3554_ = l_Lean_replaceRef(v_ref_3440_, v_a_3553_);
lean_dec(v_a_3553_);
v___x_3555_ = l_Lean_Syntax_getPos_x3f(v_ref_3554_, v___y_3550_);
if (lean_obj_tag(v___x_3555_) == 0)
{
lean_object* v___x_3556_; 
v___x_3556_ = lean_unsigned_to_nat(0u);
v___y_3541_ = v___y_3549_;
v___y_3542_ = v___y_3550_;
v___y_3543_ = v_ref_3554_;
v___y_3544_ = v___y_3551_;
v___y_3545_ = v___x_3556_;
goto v___jp_3540_;
}
else
{
lean_object* v_val_3557_; 
v_val_3557_ = lean_ctor_get(v___x_3555_, 0);
lean_inc(v_val_3557_);
lean_dec_ref_known(v___x_3555_, 1);
v___y_3541_ = v___y_3549_;
v___y_3542_ = v___y_3550_;
v___y_3543_ = v_ref_3554_;
v___y_3544_ = v___y_3551_;
v___y_3545_ = v_val_3557_;
goto v___jp_3540_;
}
}
else
{
lean_object* v_a_3558_; lean_object* v___x_3560_; uint8_t v_isShared_3561_; uint8_t v_isSharedCheck_3565_; 
lean_dec_ref(v_msgData_3441_);
v_a_3558_ = lean_ctor_get(v___x_3552_, 0);
v_isSharedCheck_3565_ = !lean_is_exclusive(v___x_3552_);
if (v_isSharedCheck_3565_ == 0)
{
v___x_3560_ = v___x_3552_;
v_isShared_3561_ = v_isSharedCheck_3565_;
goto v_resetjp_3559_;
}
else
{
lean_inc(v_a_3558_);
lean_dec(v___x_3552_);
v___x_3560_ = lean_box(0);
v_isShared_3561_ = v_isSharedCheck_3565_;
goto v_resetjp_3559_;
}
v_resetjp_3559_:
{
lean_object* v___x_3563_; 
if (v_isShared_3561_ == 0)
{
v___x_3563_ = v___x_3560_;
goto v_reusejp_3562_;
}
else
{
lean_object* v_reuseFailAlloc_3564_; 
v_reuseFailAlloc_3564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3564_, 0, v_a_3558_);
v___x_3563_ = v_reuseFailAlloc_3564_;
goto v_reusejp_3562_;
}
v_reusejp_3562_:
{
return v___x_3563_;
}
}
}
}
v___jp_3567_:
{
if (v___y_3570_ == 0)
{
v___y_3549_ = v___y_3568_;
v___y_3550_ = v___y_3569_;
v___y_3551_ = v_severity_3442_;
goto v___jp_3548_;
}
else
{
v___y_3549_ = v___y_3568_;
v___y_3550_ = v___y_3569_;
v___y_3551_ = v___x_3566_;
goto v___jp_3548_;
}
}
v___jp_3571_:
{
if (v___y_3572_ == 0)
{
lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v_scopes_3575_; lean_object* v___x_3576_; lean_object* v_opts_3577_; uint8_t v___x_3578_; uint8_t v___x_3579_; 
v___x_3573_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3574_ = lean_st_ref_get(v___y_3445_);
v_scopes_3575_ = lean_ctor_get(v___x_3574_, 2);
lean_inc(v_scopes_3575_);
lean_dec(v___x_3574_);
v___x_3576_ = l_List_head_x21___redArg(v___x_3573_, v_scopes_3575_);
lean_dec(v_scopes_3575_);
v_opts_3577_ = lean_ctor_get(v___x_3576_, 1);
lean_inc_ref(v_opts_3577_);
lean_dec(v___x_3576_);
v___x_3578_ = 1;
v___x_3579_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3442_, v___x_3578_);
if (v___x_3579_ == 0)
{
lean_dec_ref(v_opts_3577_);
v___y_3568_ = v___y_3572_;
v___y_3569_ = v___y_3572_;
v___y_3570_ = v___x_3579_;
goto v___jp_3567_;
}
else
{
lean_object* v___x_3580_; uint8_t v___x_3581_; 
v___x_3580_ = l_Lean_warningAsError;
v___x_3581_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13(v_opts_3577_, v___x_3580_);
lean_dec_ref(v_opts_3577_);
v___y_3568_ = v___y_3572_;
v___y_3569_ = v___y_3572_;
v___y_3570_ = v___x_3581_;
goto v___jp_3567_;
}
}
else
{
lean_object* v___x_3582_; lean_object* v___x_3583_; 
lean_dec_ref(v_msgData_3441_);
v___x_3582_ = lean_box(0);
v___x_3583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3583_, 0, v___x_3582_);
return v___x_3583_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___boxed(lean_object* v_ref_3586_, lean_object* v_msgData_3587_, lean_object* v_severity_3588_, lean_object* v_isSilent_3589_, lean_object* v___y_3590_, lean_object* v___y_3591_, lean_object* v___y_3592_){
_start:
{
uint8_t v_severity_boxed_3593_; uint8_t v_isSilent_boxed_3594_; lean_object* v_res_3595_; 
v_severity_boxed_3593_ = lean_unbox(v_severity_3588_);
v_isSilent_boxed_3594_ = lean_unbox(v_isSilent_3589_);
v_res_3595_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40(v_ref_3586_, v_msgData_3587_, v_severity_boxed_3593_, v_isSilent_boxed_3594_, v___y_3590_, v___y_3591_);
lean_dec(v___y_3591_);
lean_dec_ref(v___y_3590_);
lean_dec(v_ref_3586_);
return v_res_3595_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38_spec__44(lean_object* v_msgData_3596_, uint8_t v_severity_3597_, uint8_t v_isSilent_3598_, lean_object* v___y_3599_, lean_object* v___y_3600_){
_start:
{
lean_object* v___x_3602_; 
v___x_3602_ = l_Lean_Elab_Command_getRef___redArg(v___y_3599_);
if (lean_obj_tag(v___x_3602_) == 0)
{
lean_object* v_a_3603_; lean_object* v___x_3604_; 
v_a_3603_ = lean_ctor_get(v___x_3602_, 0);
lean_inc(v_a_3603_);
lean_dec_ref_known(v___x_3602_, 1);
v___x_3604_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40(v_a_3603_, v_msgData_3596_, v_severity_3597_, v_isSilent_3598_, v___y_3599_, v___y_3600_);
lean_dec(v_a_3603_);
return v___x_3604_;
}
else
{
lean_object* v_a_3605_; lean_object* v___x_3607_; uint8_t v_isShared_3608_; uint8_t v_isSharedCheck_3612_; 
lean_dec_ref(v_msgData_3596_);
v_a_3605_ = lean_ctor_get(v___x_3602_, 0);
v_isSharedCheck_3612_ = !lean_is_exclusive(v___x_3602_);
if (v_isSharedCheck_3612_ == 0)
{
v___x_3607_ = v___x_3602_;
v_isShared_3608_ = v_isSharedCheck_3612_;
goto v_resetjp_3606_;
}
else
{
lean_inc(v_a_3605_);
lean_dec(v___x_3602_);
v___x_3607_ = lean_box(0);
v_isShared_3608_ = v_isSharedCheck_3612_;
goto v_resetjp_3606_;
}
v_resetjp_3606_:
{
lean_object* v___x_3610_; 
if (v_isShared_3608_ == 0)
{
v___x_3610_ = v___x_3607_;
goto v_reusejp_3609_;
}
else
{
lean_object* v_reuseFailAlloc_3611_; 
v_reuseFailAlloc_3611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3611_, 0, v_a_3605_);
v___x_3610_ = v_reuseFailAlloc_3611_;
goto v_reusejp_3609_;
}
v_reusejp_3609_:
{
return v___x_3610_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38_spec__44___boxed(lean_object* v_msgData_3613_, lean_object* v_severity_3614_, lean_object* v_isSilent_3615_, lean_object* v___y_3616_, lean_object* v___y_3617_, lean_object* v___y_3618_){
_start:
{
uint8_t v_severity_boxed_3619_; uint8_t v_isSilent_boxed_3620_; lean_object* v_res_3621_; 
v_severity_boxed_3619_ = lean_unbox(v_severity_3614_);
v_isSilent_boxed_3620_ = lean_unbox(v_isSilent_3615_);
v_res_3621_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38_spec__44(v_msgData_3613_, v_severity_boxed_3619_, v_isSilent_boxed_3620_, v___y_3616_, v___y_3617_);
lean_dec(v___y_3617_);
lean_dec_ref(v___y_3616_);
return v_res_3621_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38(lean_object* v_msgData_3622_, lean_object* v___y_3623_, lean_object* v___y_3624_){
_start:
{
uint8_t v___x_3626_; uint8_t v___x_3627_; lean_object* v___x_3628_; 
v___x_3626_ = 2;
v___x_3627_ = 0;
v___x_3628_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38_spec__44(v_msgData_3622_, v___x_3626_, v___x_3627_, v___y_3623_, v___y_3624_);
return v___x_3628_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38___boxed(lean_object* v_msgData_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_){
_start:
{
lean_object* v_res_3633_; 
v_res_3633_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38(v_msgData_3629_, v___y_3630_, v___y_3631_);
lean_dec(v___y_3631_);
lean_dec_ref(v___y_3630_);
return v_res_3633_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__37(lean_object* v_ref_3634_, lean_object* v_msgData_3635_, lean_object* v___y_3636_, lean_object* v___y_3637_){
_start:
{
uint8_t v___x_3639_; uint8_t v___x_3640_; lean_object* v___x_3641_; 
v___x_3639_ = 2;
v___x_3640_ = 0;
v___x_3641_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40(v_ref_3634_, v_msgData_3635_, v___x_3639_, v___x_3640_, v___y_3636_, v___y_3637_);
return v___x_3641_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__37___boxed(lean_object* v_ref_3642_, lean_object* v_msgData_3643_, lean_object* v___y_3644_, lean_object* v___y_3645_, lean_object* v___y_3646_){
_start:
{
lean_object* v_res_3647_; 
v_res_3647_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__37(v_ref_3642_, v_msgData_3643_, v___y_3644_, v___y_3645_);
lean_dec(v___y_3645_);
lean_dec_ref(v___y_3644_);
lean_dec(v_ref_3642_);
return v_res_3647_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27(lean_object* v_ex_3648_, lean_object* v___y_3649_, lean_object* v___y_3650_){
_start:
{
if (lean_obj_tag(v_ex_3648_) == 0)
{
lean_object* v_ref_3652_; lean_object* v_msg_3653_; lean_object* v___x_3654_; 
v_ref_3652_ = lean_ctor_get(v_ex_3648_, 0);
lean_inc(v_ref_3652_);
v_msg_3653_ = lean_ctor_get(v_ex_3648_, 1);
lean_inc_ref(v_msg_3653_);
lean_dec_ref_known(v_ex_3648_, 2);
v___x_3654_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__37(v_ref_3652_, v_msg_3653_, v___y_3649_, v___y_3650_);
lean_dec(v_ref_3652_);
return v___x_3654_;
}
else
{
lean_object* v_id_3655_; uint8_t v___y_3657_; uint8_t v___x_3679_; 
v_id_3655_ = lean_ctor_get(v_ex_3648_, 0);
lean_inc(v_id_3655_);
v___x_3679_ = l_Lean_Elab_isAbortExceptionId(v_id_3655_);
if (v___x_3679_ == 0)
{
uint8_t v___x_3680_; 
v___x_3680_ = l_Lean_Exception_isInterrupt(v_ex_3648_);
lean_dec_ref_known(v_ex_3648_, 2);
v___y_3657_ = v___x_3680_;
goto v___jp_3656_;
}
else
{
lean_dec_ref_known(v_ex_3648_, 2);
v___y_3657_ = v___x_3679_;
goto v___jp_3656_;
}
v___jp_3656_:
{
if (v___y_3657_ == 0)
{
lean_object* v___x_3658_; 
v___x_3658_ = l_Lean_InternalExceptionId_getName(v_id_3655_);
lean_dec(v_id_3655_);
if (lean_obj_tag(v___x_3658_) == 0)
{
lean_object* v_a_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; 
v_a_3659_ = lean_ctor_get(v___x_3658_, 0);
lean_inc(v_a_3659_);
lean_dec_ref_known(v___x_3658_, 1);
v___x_3660_ = lean_obj_once(&l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1, &l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1_once, _init_l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1);
v___x_3661_ = l_Lean_MessageData_ofName(v_a_3659_);
v___x_3662_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3662_, 0, v___x_3660_);
lean_ctor_set(v___x_3662_, 1, v___x_3661_);
v___x_3663_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38(v___x_3662_, v___y_3649_, v___y_3650_);
return v___x_3663_;
}
else
{
lean_object* v_a_3664_; lean_object* v___x_3666_; uint8_t v_isShared_3667_; uint8_t v_isSharedCheck_3676_; 
v_a_3664_ = lean_ctor_get(v___x_3658_, 0);
v_isSharedCheck_3676_ = !lean_is_exclusive(v___x_3658_);
if (v_isSharedCheck_3676_ == 0)
{
v___x_3666_ = v___x_3658_;
v_isShared_3667_ = v_isSharedCheck_3676_;
goto v_resetjp_3665_;
}
else
{
lean_inc(v_a_3664_);
lean_dec(v___x_3658_);
v___x_3666_ = lean_box(0);
v_isShared_3667_ = v_isSharedCheck_3676_;
goto v_resetjp_3665_;
}
v_resetjp_3665_:
{
lean_object* v_ref_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; lean_object* v___x_3674_; 
v_ref_3668_ = lean_ctor_get(v___y_3649_, 7);
v___x_3669_ = lean_io_error_to_string(v_a_3664_);
v___x_3670_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3670_, 0, v___x_3669_);
v___x_3671_ = l_Lean_MessageData_ofFormat(v___x_3670_);
lean_inc(v_ref_3668_);
v___x_3672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3672_, 0, v_ref_3668_);
lean_ctor_set(v___x_3672_, 1, v___x_3671_);
if (v_isShared_3667_ == 0)
{
lean_ctor_set(v___x_3666_, 0, v___x_3672_);
v___x_3674_ = v___x_3666_;
goto v_reusejp_3673_;
}
else
{
lean_object* v_reuseFailAlloc_3675_; 
v_reuseFailAlloc_3675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3675_, 0, v___x_3672_);
v___x_3674_ = v_reuseFailAlloc_3675_;
goto v_reusejp_3673_;
}
v_reusejp_3673_:
{
return v___x_3674_;
}
}
}
}
else
{
lean_object* v___x_3677_; lean_object* v___x_3678_; 
lean_dec(v_id_3655_);
v___x_3677_ = lean_box(0);
v___x_3678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3678_, 0, v___x_3677_);
return v___x_3678_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27___boxed(lean_object* v_ex_3681_, lean_object* v___y_3682_, lean_object* v___y_3683_, lean_object* v___y_3684_){
_start:
{
lean_object* v_res_3685_; 
v_res_3685_ = l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27(v_ex_3681_, v___y_3682_, v___y_3683_);
lean_dec(v___y_3683_);
lean_dec_ref(v___y_3682_);
return v_res_3685_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0(lean_object* v_k_3695_){
_start:
{
lean_object* v___x_3696_; uint8_t v___x_3697_; 
v___x_3696_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__4));
v___x_3697_ = lean_name_eq(v_k_3695_, v___x_3696_);
if (v___x_3697_ == 0)
{
uint8_t v___x_3698_; 
v___x_3698_ = 1;
return v___x_3698_;
}
else
{
uint8_t v___x_3699_; 
v___x_3699_ = 0;
return v___x_3699_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___boxed(lean_object* v_k_3700_){
_start:
{
uint8_t v_res_3701_; lean_object* v_r_3702_; 
v_res_3701_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0(v_k_3700_);
lean_dec(v_k_3700_);
v_r_3702_ = lean_box(v_res_3701_);
return v_r_3702_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___redArg(lean_object* v_keys_3703_, lean_object* v_i_3704_, lean_object* v_k_3705_){
_start:
{
lean_object* v___x_3706_; uint8_t v___x_3707_; 
v___x_3706_ = lean_array_get_size(v_keys_3703_);
v___x_3707_ = lean_nat_dec_lt(v_i_3704_, v___x_3706_);
if (v___x_3707_ == 0)
{
lean_dec(v_i_3704_);
return v___x_3707_;
}
else
{
lean_object* v_k_x27_3708_; uint8_t v___x_3709_; 
v_k_x27_3708_ = lean_array_fget_borrowed(v_keys_3703_, v_i_3704_);
v___x_3709_ = l_Lean_instBEqExtraModUse_beq(v_k_3705_, v_k_x27_3708_);
if (v___x_3709_ == 0)
{
lean_object* v___x_3710_; lean_object* v___x_3711_; 
v___x_3710_ = lean_unsigned_to_nat(1u);
v___x_3711_ = lean_nat_add(v_i_3704_, v___x_3710_);
lean_dec(v_i_3704_);
v_i_3704_ = v___x_3711_;
goto _start;
}
else
{
lean_dec(v_i_3704_);
return v___x_3707_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___redArg___boxed(lean_object* v_keys_3713_, lean_object* v_i_3714_, lean_object* v_k_3715_){
_start:
{
uint8_t v_res_3716_; lean_object* v_r_3717_; 
v_res_3716_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___redArg(v_keys_3713_, v_i_3714_, v_k_3715_);
lean_dec_ref(v_k_3715_);
lean_dec_ref(v_keys_3713_);
v_r_3717_ = lean_box(v_res_3716_);
return v_r_3717_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___redArg(lean_object* v_x_3718_, size_t v_x_3719_, lean_object* v_x_3720_){
_start:
{
if (lean_obj_tag(v_x_3718_) == 0)
{
lean_object* v_es_3721_; lean_object* v___x_3722_; size_t v___x_3723_; size_t v___x_3724_; lean_object* v_j_3725_; lean_object* v___x_3726_; 
v_es_3721_ = lean_ctor_get(v_x_3718_, 0);
v___x_3722_ = lean_box(2);
v___x_3723_ = ((size_t)31ULL);
v___x_3724_ = lean_usize_land(v_x_3719_, v___x_3723_);
v_j_3725_ = lean_usize_to_nat(v___x_3724_);
v___x_3726_ = lean_array_get_borrowed(v___x_3722_, v_es_3721_, v_j_3725_);
lean_dec(v_j_3725_);
switch(lean_obj_tag(v___x_3726_))
{
case 0:
{
lean_object* v_key_3727_; uint8_t v___x_3728_; 
v_key_3727_ = lean_ctor_get(v___x_3726_, 0);
v___x_3728_ = l_Lean_instBEqExtraModUse_beq(v_x_3720_, v_key_3727_);
return v___x_3728_;
}
case 1:
{
lean_object* v_node_3729_; size_t v___x_3730_; size_t v___x_3731_; 
v_node_3729_ = lean_ctor_get(v___x_3726_, 0);
v___x_3730_ = ((size_t)5ULL);
v___x_3731_ = lean_usize_shift_right(v_x_3719_, v___x_3730_);
v_x_3718_ = v_node_3729_;
v_x_3719_ = v___x_3731_;
goto _start;
}
default: 
{
uint8_t v___x_3733_; 
v___x_3733_ = 0;
return v___x_3733_;
}
}
}
else
{
lean_object* v_ks_3734_; lean_object* v___x_3735_; uint8_t v___x_3736_; 
v_ks_3734_ = lean_ctor_get(v_x_3718_, 0);
v___x_3735_ = lean_unsigned_to_nat(0u);
v___x_3736_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___redArg(v_ks_3734_, v___x_3735_, v_x_3720_);
return v___x_3736_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___redArg___boxed(lean_object* v_x_3737_, lean_object* v_x_3738_, lean_object* v_x_3739_){
_start:
{
size_t v_x_53651__boxed_3740_; uint8_t v_res_3741_; lean_object* v_r_3742_; 
v_x_53651__boxed_3740_ = lean_unbox_usize(v_x_3738_);
lean_dec(v_x_3738_);
v_res_3741_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___redArg(v_x_3737_, v_x_53651__boxed_3740_, v_x_3739_);
lean_dec_ref(v_x_3739_);
lean_dec_ref(v_x_3737_);
v_r_3742_ = lean_box(v_res_3741_);
return v_r_3742_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___redArg(lean_object* v_x_3743_, lean_object* v_x_3744_){
_start:
{
uint64_t v___x_3745_; size_t v___x_3746_; uint8_t v___x_3747_; 
v___x_3745_ = l_Lean_instHashableExtraModUse_hash(v_x_3744_);
v___x_3746_ = lean_uint64_to_usize(v___x_3745_);
v___x_3747_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___redArg(v_x_3743_, v___x_3746_, v_x_3744_);
return v___x_3747_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___redArg___boxed(lean_object* v_x_3748_, lean_object* v_x_3749_){
_start:
{
uint8_t v_res_3750_; lean_object* v_r_3751_; 
v_res_3750_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___redArg(v_x_3748_, v_x_3749_);
lean_dec_ref(v_x_3749_);
lean_dec_ref(v_x_3748_);
v_r_3751_ = lean_box(v_res_3750_);
return v_r_3751_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__0(void){
_start:
{
lean_object* v___x_3752_; double v___x_3753_; 
v___x_3752_ = lean_unsigned_to_nat(0u);
v___x_3753_ = lean_float_of_nat(v___x_3752_);
return v___x_3753_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47(lean_object* v_cls_3756_, lean_object* v_msg_3757_, lean_object* v___y_3758_, lean_object* v___y_3759_){
_start:
{
lean_object* v___x_3761_; 
v___x_3761_ = l_Lean_Elab_Command_getRef___redArg(v___y_3758_);
if (lean_obj_tag(v___x_3761_) == 0)
{
lean_object* v_a_3762_; lean_object* v___x_3763_; lean_object* v_a_3764_; lean_object* v___x_3766_; uint8_t v_isShared_3767_; uint8_t v_isSharedCheck_3812_; 
v_a_3762_ = lean_ctor_get(v___x_3761_, 0);
lean_inc(v_a_3762_);
lean_dec_ref_known(v___x_3761_, 1);
v___x_3763_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(v_msg_3757_, v___y_3759_);
v_a_3764_ = lean_ctor_get(v___x_3763_, 0);
v_isSharedCheck_3812_ = !lean_is_exclusive(v___x_3763_);
if (v_isSharedCheck_3812_ == 0)
{
v___x_3766_ = v___x_3763_;
v_isShared_3767_ = v_isSharedCheck_3812_;
goto v_resetjp_3765_;
}
else
{
lean_inc(v_a_3764_);
lean_dec(v___x_3763_);
v___x_3766_ = lean_box(0);
v_isShared_3767_ = v_isSharedCheck_3812_;
goto v_resetjp_3765_;
}
v_resetjp_3765_:
{
lean_object* v___x_3768_; lean_object* v_traceState_3769_; lean_object* v_env_3770_; lean_object* v_messages_3771_; lean_object* v_scopes_3772_; lean_object* v_usedQuotCtxts_3773_; lean_object* v_nextMacroScope_3774_; lean_object* v_maxRecDepth_3775_; lean_object* v_ngen_3776_; lean_object* v_auxDeclNGen_3777_; lean_object* v_infoState_3778_; lean_object* v_snapshotTasks_3779_; lean_object* v_prevLinterStates_3780_; lean_object* v_codeQualityEntryTasks_3781_; lean_object* v___x_3783_; uint8_t v_isShared_3784_; uint8_t v_isSharedCheck_3811_; 
v___x_3768_ = lean_st_ref_take(v___y_3759_);
v_traceState_3769_ = lean_ctor_get(v___x_3768_, 9);
v_env_3770_ = lean_ctor_get(v___x_3768_, 0);
v_messages_3771_ = lean_ctor_get(v___x_3768_, 1);
v_scopes_3772_ = lean_ctor_get(v___x_3768_, 2);
v_usedQuotCtxts_3773_ = lean_ctor_get(v___x_3768_, 3);
v_nextMacroScope_3774_ = lean_ctor_get(v___x_3768_, 4);
v_maxRecDepth_3775_ = lean_ctor_get(v___x_3768_, 5);
v_ngen_3776_ = lean_ctor_get(v___x_3768_, 6);
v_auxDeclNGen_3777_ = lean_ctor_get(v___x_3768_, 7);
v_infoState_3778_ = lean_ctor_get(v___x_3768_, 8);
v_snapshotTasks_3779_ = lean_ctor_get(v___x_3768_, 10);
v_prevLinterStates_3780_ = lean_ctor_get(v___x_3768_, 11);
v_codeQualityEntryTasks_3781_ = lean_ctor_get(v___x_3768_, 12);
v_isSharedCheck_3811_ = !lean_is_exclusive(v___x_3768_);
if (v_isSharedCheck_3811_ == 0)
{
v___x_3783_ = v___x_3768_;
v_isShared_3784_ = v_isSharedCheck_3811_;
goto v_resetjp_3782_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3781_);
lean_inc(v_prevLinterStates_3780_);
lean_inc(v_snapshotTasks_3779_);
lean_inc(v_traceState_3769_);
lean_inc(v_infoState_3778_);
lean_inc(v_auxDeclNGen_3777_);
lean_inc(v_ngen_3776_);
lean_inc(v_maxRecDepth_3775_);
lean_inc(v_nextMacroScope_3774_);
lean_inc(v_usedQuotCtxts_3773_);
lean_inc(v_scopes_3772_);
lean_inc(v_messages_3771_);
lean_inc(v_env_3770_);
lean_dec(v___x_3768_);
v___x_3783_ = lean_box(0);
v_isShared_3784_ = v_isSharedCheck_3811_;
goto v_resetjp_3782_;
}
v_resetjp_3782_:
{
uint64_t v_tid_3785_; lean_object* v_traces_3786_; lean_object* v___x_3788_; uint8_t v_isShared_3789_; uint8_t v_isSharedCheck_3810_; 
v_tid_3785_ = lean_ctor_get_uint64(v_traceState_3769_, sizeof(void*)*1);
v_traces_3786_ = lean_ctor_get(v_traceState_3769_, 0);
v_isSharedCheck_3810_ = !lean_is_exclusive(v_traceState_3769_);
if (v_isSharedCheck_3810_ == 0)
{
v___x_3788_ = v_traceState_3769_;
v_isShared_3789_ = v_isSharedCheck_3810_;
goto v_resetjp_3787_;
}
else
{
lean_inc(v_traces_3786_);
lean_dec(v_traceState_3769_);
v___x_3788_ = lean_box(0);
v_isShared_3789_ = v_isSharedCheck_3810_;
goto v_resetjp_3787_;
}
v_resetjp_3787_:
{
lean_object* v___x_3790_; lean_object* v___x_3791_; double v___x_3792_; uint8_t v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3801_; 
v___x_3790_ = lean_box(0);
v___x_3791_ = lean_box(0);
v___x_3792_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__0, &l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__0);
v___x_3793_ = 0;
v___x_3794_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___closed__0));
v___x_3795_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3795_, 0, v_cls_3756_);
lean_ctor_set(v___x_3795_, 1, v___x_3791_);
lean_ctor_set(v___x_3795_, 2, v___x_3794_);
lean_ctor_set_float(v___x_3795_, sizeof(void*)*3, v___x_3792_);
lean_ctor_set_float(v___x_3795_, sizeof(void*)*3 + 8, v___x_3792_);
lean_ctor_set_uint8(v___x_3795_, sizeof(void*)*3 + 16, v___x_3793_);
v___x_3796_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__1));
v___x_3797_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3797_, 0, v___x_3795_);
lean_ctor_set(v___x_3797_, 1, v_a_3764_);
lean_ctor_set(v___x_3797_, 2, v___x_3796_);
v___x_3798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3798_, 0, v_a_3762_);
lean_ctor_set(v___x_3798_, 1, v___x_3797_);
v___x_3799_ = l_Lean_PersistentArray_push___redArg(v_traces_3786_, v___x_3798_);
if (v_isShared_3789_ == 0)
{
lean_ctor_set(v___x_3788_, 0, v___x_3799_);
v___x_3801_ = v___x_3788_;
goto v_reusejp_3800_;
}
else
{
lean_object* v_reuseFailAlloc_3809_; 
v_reuseFailAlloc_3809_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3809_, 0, v___x_3799_);
lean_ctor_set_uint64(v_reuseFailAlloc_3809_, sizeof(void*)*1, v_tid_3785_);
v___x_3801_ = v_reuseFailAlloc_3809_;
goto v_reusejp_3800_;
}
v_reusejp_3800_:
{
lean_object* v___x_3803_; 
if (v_isShared_3784_ == 0)
{
lean_ctor_set(v___x_3783_, 9, v___x_3801_);
v___x_3803_ = v___x_3783_;
goto v_reusejp_3802_;
}
else
{
lean_object* v_reuseFailAlloc_3808_; 
v_reuseFailAlloc_3808_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3808_, 0, v_env_3770_);
lean_ctor_set(v_reuseFailAlloc_3808_, 1, v_messages_3771_);
lean_ctor_set(v_reuseFailAlloc_3808_, 2, v_scopes_3772_);
lean_ctor_set(v_reuseFailAlloc_3808_, 3, v_usedQuotCtxts_3773_);
lean_ctor_set(v_reuseFailAlloc_3808_, 4, v_nextMacroScope_3774_);
lean_ctor_set(v_reuseFailAlloc_3808_, 5, v_maxRecDepth_3775_);
lean_ctor_set(v_reuseFailAlloc_3808_, 6, v_ngen_3776_);
lean_ctor_set(v_reuseFailAlloc_3808_, 7, v_auxDeclNGen_3777_);
lean_ctor_set(v_reuseFailAlloc_3808_, 8, v_infoState_3778_);
lean_ctor_set(v_reuseFailAlloc_3808_, 9, v___x_3801_);
lean_ctor_set(v_reuseFailAlloc_3808_, 10, v_snapshotTasks_3779_);
lean_ctor_set(v_reuseFailAlloc_3808_, 11, v_prevLinterStates_3780_);
lean_ctor_set(v_reuseFailAlloc_3808_, 12, v_codeQualityEntryTasks_3781_);
v___x_3803_ = v_reuseFailAlloc_3808_;
goto v_reusejp_3802_;
}
v_reusejp_3802_:
{
lean_object* v___x_3804_; lean_object* v___x_3806_; 
v___x_3804_ = lean_st_ref_put(v___y_3759_, v___x_3803_);
if (v_isShared_3767_ == 0)
{
lean_ctor_set(v___x_3766_, 0, v___x_3790_);
v___x_3806_ = v___x_3766_;
goto v_reusejp_3805_;
}
else
{
lean_object* v_reuseFailAlloc_3807_; 
v_reuseFailAlloc_3807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3807_, 0, v___x_3790_);
v___x_3806_ = v_reuseFailAlloc_3807_;
goto v_reusejp_3805_;
}
v_reusejp_3805_:
{
return v___x_3806_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3813_; lean_object* v___x_3815_; uint8_t v_isShared_3816_; uint8_t v_isSharedCheck_3820_; 
lean_dec_ref(v_msg_3757_);
lean_dec(v_cls_3756_);
v_a_3813_ = lean_ctor_get(v___x_3761_, 0);
v_isSharedCheck_3820_ = !lean_is_exclusive(v___x_3761_);
if (v_isSharedCheck_3820_ == 0)
{
v___x_3815_ = v___x_3761_;
v_isShared_3816_ = v_isSharedCheck_3820_;
goto v_resetjp_3814_;
}
else
{
lean_inc(v_a_3813_);
lean_dec(v___x_3761_);
v___x_3815_ = lean_box(0);
v_isShared_3816_ = v_isSharedCheck_3820_;
goto v_resetjp_3814_;
}
v_resetjp_3814_:
{
lean_object* v___x_3818_; 
if (v_isShared_3816_ == 0)
{
v___x_3818_ = v___x_3815_;
goto v_reusejp_3817_;
}
else
{
lean_object* v_reuseFailAlloc_3819_; 
v_reuseFailAlloc_3819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3819_, 0, v_a_3813_);
v___x_3818_ = v_reuseFailAlloc_3819_;
goto v_reusejp_3817_;
}
v_reusejp_3817_:
{
return v___x_3818_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___boxed(lean_object* v_cls_3821_, lean_object* v_msg_3822_, lean_object* v___y_3823_, lean_object* v___y_3824_, lean_object* v___y_3825_){
_start:
{
lean_object* v_res_3826_; 
v_res_3826_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47(v_cls_3821_, v_msg_3822_, v___y_3823_, v___y_3824_);
lean_dec(v___y_3824_);
lean_dec_ref(v___y_3823_);
return v_res_3826_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__0(void){
_start:
{
lean_object* v___x_3827_; 
v___x_3827_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_3827_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__4(void){
_start:
{
lean_object* v___x_3832_; lean_object* v___x_3833_; 
v___x_3832_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__3));
v___x_3833_ = l_Lean_stringToMessageData(v___x_3832_);
return v___x_3833_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__6(void){
_start:
{
lean_object* v___x_3835_; lean_object* v___x_3836_; 
v___x_3835_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__5));
v___x_3836_ = l_Lean_stringToMessageData(v___x_3835_);
return v___x_3836_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__7(void){
_start:
{
lean_object* v___x_3837_; lean_object* v___x_3838_; 
v___x_3837_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___closed__0));
v___x_3838_ = l_Lean_stringToMessageData(v___x_3837_);
return v___x_3838_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__9(void){
_start:
{
lean_object* v_cls_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; 
v_cls_3841_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__2));
v___x_3842_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__8));
v___x_3843_ = l_Lean_Name_append(v___x_3842_, v_cls_3841_);
return v___x_3843_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__11(void){
_start:
{
lean_object* v___x_3845_; lean_object* v___x_3846_; 
v___x_3845_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__10));
v___x_3846_ = l_Lean_stringToMessageData(v___x_3845_);
return v___x_3846_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__13(void){
_start:
{
lean_object* v___x_3848_; lean_object* v___x_3849_; 
v___x_3848_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__12));
v___x_3849_ = l_Lean_stringToMessageData(v___x_3848_);
return v___x_3849_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54(lean_object* v_mod_3854_, uint8_t v_isMeta_3855_, lean_object* v_hint_3856_, lean_object* v___y_3857_, lean_object* v___y_3858_){
_start:
{
lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v_env_3862_; uint8_t v_isExporting_3863_; lean_object* v_entry_3864_; lean_object* v___x_3865_; lean_object* v_env_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___y_3871_; lean_object* v___x_3899_; uint8_t v___x_3900_; 
v___x_3860_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__0);
v___x_3861_ = lean_st_ref_get(v___y_3858_);
v_env_3862_ = lean_ctor_get(v___x_3861_, 0);
lean_inc_ref(v_env_3862_);
lean_dec(v___x_3861_);
v_isExporting_3863_ = lean_ctor_get_uint8(v_env_3862_, sizeof(void*)*8);
lean_dec_ref(v_env_3862_);
lean_inc(v_mod_3854_);
v_entry_3864_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_3864_, 0, v_mod_3854_);
lean_ctor_set_uint8(v_entry_3864_, sizeof(void*)*1, v_isExporting_3863_);
lean_ctor_set_uint8(v_entry_3864_, sizeof(void*)*1 + 1, v_isMeta_3855_);
v___x_3865_ = lean_st_ref_get(v___y_3858_);
v_env_3866_ = lean_ctor_get(v___x_3865_, 0);
lean_inc_ref(v_env_3866_);
lean_dec(v___x_3865_);
v___x_3867_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_3868_ = lean_box(1);
v___x_3869_ = lean_box(0);
v___x_3899_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3860_, v___x_3867_, v_env_3866_, v___x_3868_, v___x_3869_);
v___x_3900_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___redArg(v___x_3899_, v_entry_3864_);
lean_dec(v___x_3899_);
if (v___x_3900_ == 0)
{
lean_object* v_cls_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___y_3907_; lean_object* v___y_3908_; lean_object* v___y_3912_; lean_object* v___y_3913_; lean_object* v_scopes_3925_; lean_object* v___x_3926_; lean_object* v_opts_3927_; uint8_t v_hasTrace_3928_; 
v_cls_3901_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__2));
v___x_3902_ = l_Lean_inheritedTraceOptions;
v___x_3903_ = lean_st_ref_get(v___x_3902_);
v___x_3904_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3905_ = lean_st_ref_get(v___y_3858_);
v_scopes_3925_ = lean_ctor_get(v___x_3905_, 2);
lean_inc(v_scopes_3925_);
lean_dec(v___x_3905_);
v___x_3926_ = l_List_head_x21___redArg(v___x_3904_, v_scopes_3925_);
lean_dec(v_scopes_3925_);
v_opts_3927_ = lean_ctor_get(v___x_3926_, 1);
lean_inc_ref(v_opts_3927_);
lean_dec(v___x_3926_);
v_hasTrace_3928_ = lean_ctor_get_uint8(v_opts_3927_, sizeof(void*)*1);
if (v_hasTrace_3928_ == 0)
{
lean_dec_ref(v_opts_3927_);
lean_dec(v___x_3903_);
lean_dec(v_hint_3856_);
lean_dec(v_mod_3854_);
v___y_3871_ = v___y_3858_;
goto v___jp_3870_;
}
else
{
lean_object* v___x_3929_; uint8_t v___x_3930_; 
v___x_3929_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__9);
v___x_3930_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_3903_, v_opts_3927_, v___x_3929_);
lean_dec_ref(v_opts_3927_);
lean_dec(v___x_3903_);
if (v___x_3930_ == 0)
{
lean_dec(v_hint_3856_);
lean_dec(v_mod_3854_);
v___y_3871_ = v___y_3858_;
goto v___jp_3870_;
}
else
{
lean_object* v___x_3931_; lean_object* v___y_3933_; 
v___x_3931_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__11);
if (v_isExporting_3863_ == 0)
{
lean_object* v___x_3940_; 
v___x_3940_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__16));
v___y_3933_ = v___x_3940_;
goto v___jp_3932_;
}
else
{
lean_object* v___x_3941_; 
v___x_3941_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__17));
v___y_3933_ = v___x_3941_;
goto v___jp_3932_;
}
v___jp_3932_:
{
lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; 
lean_inc_ref(v___y_3933_);
v___x_3934_ = l_Lean_stringToMessageData(v___y_3933_);
v___x_3935_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3935_, 0, v___x_3931_);
lean_ctor_set(v___x_3935_, 1, v___x_3934_);
v___x_3936_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__13);
v___x_3937_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3937_, 0, v___x_3935_);
lean_ctor_set(v___x_3937_, 1, v___x_3936_);
if (v_isMeta_3855_ == 0)
{
lean_object* v___x_3938_; 
v___x_3938_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__14));
v___y_3912_ = v___x_3937_;
v___y_3913_ = v___x_3938_;
goto v___jp_3911_;
}
else
{
lean_object* v___x_3939_; 
v___x_3939_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__15));
v___y_3912_ = v___x_3937_;
v___y_3913_ = v___x_3939_;
goto v___jp_3911_;
}
}
}
}
v___jp_3906_:
{
lean_object* v___x_3909_; lean_object* v___x_3910_; 
v___x_3909_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3909_, 0, v___y_3907_);
lean_ctor_set(v___x_3909_, 1, v___y_3908_);
v___x_3910_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47(v_cls_3901_, v___x_3909_, v___y_3857_, v___y_3858_);
if (lean_obj_tag(v___x_3910_) == 0)
{
lean_dec_ref_known(v___x_3910_, 1);
v___y_3871_ = v___y_3858_;
goto v___jp_3870_;
}
else
{
lean_dec_ref_known(v_entry_3864_, 1);
return v___x_3910_;
}
}
v___jp_3911_:
{
lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; lean_object* v___x_3919_; uint8_t v___x_3920_; 
lean_inc_ref(v___y_3913_);
v___x_3914_ = l_Lean_stringToMessageData(v___y_3913_);
v___x_3915_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3915_, 0, v___y_3912_);
lean_ctor_set(v___x_3915_, 1, v___x_3914_);
v___x_3916_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__4);
v___x_3917_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3917_, 0, v___x_3915_);
lean_ctor_set(v___x_3917_, 1, v___x_3916_);
v___x_3918_ = l_Lean_MessageData_ofName(v_mod_3854_);
v___x_3919_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3919_, 0, v___x_3917_);
lean_ctor_set(v___x_3919_, 1, v___x_3918_);
v___x_3920_ = l_Lean_Name_isAnonymous(v_hint_3856_);
if (v___x_3920_ == 0)
{
lean_object* v___x_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; 
v___x_3921_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__6);
v___x_3922_ = l_Lean_MessageData_ofName(v_hint_3856_);
v___x_3923_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3923_, 0, v___x_3921_);
lean_ctor_set(v___x_3923_, 1, v___x_3922_);
v___y_3907_ = v___x_3919_;
v___y_3908_ = v___x_3923_;
goto v___jp_3906_;
}
else
{
lean_object* v___x_3924_; 
lean_dec(v_hint_3856_);
v___x_3924_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__7);
v___y_3907_ = v___x_3919_;
v___y_3908_ = v___x_3924_;
goto v___jp_3906_;
}
}
}
else
{
lean_object* v___x_3942_; lean_object* v___x_3943_; 
lean_dec_ref_known(v_entry_3864_, 1);
lean_dec(v_hint_3856_);
lean_dec(v_mod_3854_);
v___x_3942_ = lean_box(0);
v___x_3943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3943_, 0, v___x_3942_);
return v___x_3943_;
}
v___jp_3870_:
{
lean_object* v___x_3872_; lean_object* v_toEnvExtension_3873_; lean_object* v_env_3874_; lean_object* v_messages_3875_; lean_object* v_scopes_3876_; lean_object* v_usedQuotCtxts_3877_; lean_object* v_nextMacroScope_3878_; lean_object* v_maxRecDepth_3879_; lean_object* v_ngen_3880_; lean_object* v_auxDeclNGen_3881_; lean_object* v_infoState_3882_; lean_object* v_traceState_3883_; lean_object* v_snapshotTasks_3884_; lean_object* v_prevLinterStates_3885_; lean_object* v_codeQualityEntryTasks_3886_; lean_object* v___x_3888_; uint8_t v_isShared_3889_; uint8_t v_isSharedCheck_3898_; 
v___x_3872_ = lean_st_ref_take(v___y_3871_);
v_toEnvExtension_3873_ = lean_ctor_get(v___x_3867_, 0);
v_env_3874_ = lean_ctor_get(v___x_3872_, 0);
v_messages_3875_ = lean_ctor_get(v___x_3872_, 1);
v_scopes_3876_ = lean_ctor_get(v___x_3872_, 2);
v_usedQuotCtxts_3877_ = lean_ctor_get(v___x_3872_, 3);
v_nextMacroScope_3878_ = lean_ctor_get(v___x_3872_, 4);
v_maxRecDepth_3879_ = lean_ctor_get(v___x_3872_, 5);
v_ngen_3880_ = lean_ctor_get(v___x_3872_, 6);
v_auxDeclNGen_3881_ = lean_ctor_get(v___x_3872_, 7);
v_infoState_3882_ = lean_ctor_get(v___x_3872_, 8);
v_traceState_3883_ = lean_ctor_get(v___x_3872_, 9);
v_snapshotTasks_3884_ = lean_ctor_get(v___x_3872_, 10);
v_prevLinterStates_3885_ = lean_ctor_get(v___x_3872_, 11);
v_codeQualityEntryTasks_3886_ = lean_ctor_get(v___x_3872_, 12);
v_isSharedCheck_3898_ = !lean_is_exclusive(v___x_3872_);
if (v_isSharedCheck_3898_ == 0)
{
v___x_3888_ = v___x_3872_;
v_isShared_3889_ = v_isSharedCheck_3898_;
goto v_resetjp_3887_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3886_);
lean_inc(v_prevLinterStates_3885_);
lean_inc(v_snapshotTasks_3884_);
lean_inc(v_traceState_3883_);
lean_inc(v_infoState_3882_);
lean_inc(v_auxDeclNGen_3881_);
lean_inc(v_ngen_3880_);
lean_inc(v_maxRecDepth_3879_);
lean_inc(v_nextMacroScope_3878_);
lean_inc(v_usedQuotCtxts_3877_);
lean_inc(v_scopes_3876_);
lean_inc(v_messages_3875_);
lean_inc(v_env_3874_);
lean_dec(v___x_3872_);
v___x_3888_ = lean_box(0);
v_isShared_3889_ = v_isSharedCheck_3898_;
goto v_resetjp_3887_;
}
v_resetjp_3887_:
{
lean_object* v_asyncMode_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3894_; 
v_asyncMode_3890_ = lean_ctor_get(v_toEnvExtension_3873_, 2);
v___x_3891_ = lean_box(0);
v___x_3892_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_3867_, v_env_3874_, v_entry_3864_, v_asyncMode_3890_, v___x_3869_);
if (v_isShared_3889_ == 0)
{
lean_ctor_set(v___x_3888_, 0, v___x_3892_);
v___x_3894_ = v___x_3888_;
goto v_reusejp_3893_;
}
else
{
lean_object* v_reuseFailAlloc_3897_; 
v_reuseFailAlloc_3897_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3897_, 0, v___x_3892_);
lean_ctor_set(v_reuseFailAlloc_3897_, 1, v_messages_3875_);
lean_ctor_set(v_reuseFailAlloc_3897_, 2, v_scopes_3876_);
lean_ctor_set(v_reuseFailAlloc_3897_, 3, v_usedQuotCtxts_3877_);
lean_ctor_set(v_reuseFailAlloc_3897_, 4, v_nextMacroScope_3878_);
lean_ctor_set(v_reuseFailAlloc_3897_, 5, v_maxRecDepth_3879_);
lean_ctor_set(v_reuseFailAlloc_3897_, 6, v_ngen_3880_);
lean_ctor_set(v_reuseFailAlloc_3897_, 7, v_auxDeclNGen_3881_);
lean_ctor_set(v_reuseFailAlloc_3897_, 8, v_infoState_3882_);
lean_ctor_set(v_reuseFailAlloc_3897_, 9, v_traceState_3883_);
lean_ctor_set(v_reuseFailAlloc_3897_, 10, v_snapshotTasks_3884_);
lean_ctor_set(v_reuseFailAlloc_3897_, 11, v_prevLinterStates_3885_);
lean_ctor_set(v_reuseFailAlloc_3897_, 12, v_codeQualityEntryTasks_3886_);
v___x_3894_ = v_reuseFailAlloc_3897_;
goto v_reusejp_3893_;
}
v_reusejp_3893_:
{
lean_object* v___x_3895_; lean_object* v___x_3896_; 
v___x_3895_ = lean_st_ref_put(v___y_3871_, v___x_3894_);
v___x_3896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3896_, 0, v___x_3891_);
return v___x_3896_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___boxed(lean_object* v_mod_3944_, lean_object* v_isMeta_3945_, lean_object* v_hint_3946_, lean_object* v___y_3947_, lean_object* v___y_3948_, lean_object* v___y_3949_){
_start:
{
uint8_t v_isMeta_boxed_3950_; lean_object* v_res_3951_; 
v_isMeta_boxed_3950_ = lean_unbox(v_isMeta_3945_);
v_res_3951_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54(v_mod_3944_, v_isMeta_boxed_3950_, v_hint_3946_, v___y_3947_, v___y_3948_);
lean_dec(v___y_3948_);
lean_dec_ref(v___y_3947_);
return v_res_3951_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__55(lean_object* v___x_3952_, lean_object* v_declName_3953_, lean_object* v_as_3954_, size_t v_sz_3955_, size_t v_i_3956_, lean_object* v_b_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_){
_start:
{
uint8_t v___x_3961_; 
v___x_3961_ = lean_usize_dec_lt(v_i_3956_, v_sz_3955_);
if (v___x_3961_ == 0)
{
lean_object* v___x_3962_; 
lean_dec(v_declName_3953_);
v___x_3962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3962_, 0, v_b_3957_);
return v___x_3962_;
}
else
{
lean_object* v___x_3963_; lean_object* v_modules_3964_; lean_object* v___x_3965_; lean_object* v_a_3966_; lean_object* v___x_3967_; lean_object* v_toImport_3968_; lean_object* v_module_3969_; lean_object* v___x_3970_; uint8_t v___x_3971_; lean_object* v___x_3972_; 
v___x_3963_ = l_Lean_Environment_header(v___x_3952_);
v_modules_3964_ = lean_ctor_get(v___x_3963_, 3);
lean_inc_ref(v_modules_3964_);
lean_dec_ref(v___x_3963_);
v___x_3965_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_3966_ = lean_array_uget_borrowed(v_as_3954_, v_i_3956_);
v___x_3967_ = lean_array_get(v___x_3965_, v_modules_3964_, v_a_3966_);
lean_dec_ref(v_modules_3964_);
v_toImport_3968_ = lean_ctor_get(v___x_3967_, 0);
lean_inc_ref(v_toImport_3968_);
lean_dec(v___x_3967_);
v_module_3969_ = lean_ctor_get(v_toImport_3968_, 0);
lean_inc(v_module_3969_);
lean_dec_ref(v_toImport_3968_);
v___x_3970_ = lean_box(0);
v___x_3971_ = 0;
lean_inc(v_declName_3953_);
v___x_3972_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54(v_module_3969_, v___x_3971_, v_declName_3953_, v___y_3958_, v___y_3959_);
if (lean_obj_tag(v___x_3972_) == 0)
{
size_t v___x_3973_; size_t v___x_3974_; 
lean_dec_ref_known(v___x_3972_, 1);
v___x_3973_ = ((size_t)1ULL);
v___x_3974_ = lean_usize_add(v_i_3956_, v___x_3973_);
v_i_3956_ = v___x_3974_;
v_b_3957_ = v___x_3970_;
goto _start;
}
else
{
lean_dec(v_declName_3953_);
return v___x_3972_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__55___boxed(lean_object* v___x_3976_, lean_object* v_declName_3977_, lean_object* v_as_3978_, lean_object* v_sz_3979_, lean_object* v_i_3980_, lean_object* v_b_3981_, lean_object* v___y_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_){
_start:
{
size_t v_sz_boxed_3985_; size_t v_i_boxed_3986_; lean_object* v_res_3987_; 
v_sz_boxed_3985_ = lean_unbox_usize(v_sz_3979_);
lean_dec(v_sz_3979_);
v_i_boxed_3986_ = lean_unbox_usize(v_i_3980_);
lean_dec(v_i_3980_);
v_res_3987_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__55(v___x_3976_, v_declName_3977_, v_as_3978_, v_sz_boxed_3985_, v_i_boxed_3986_, v_b_3981_, v___y_3982_, v___y_3983_);
lean_dec(v___y_3983_);
lean_dec_ref(v___y_3982_);
lean_dec_ref(v_as_3978_);
lean_dec_ref(v___x_3976_);
return v_res_3987_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___redArg(lean_object* v_a_3988_, lean_object* v_x_3989_){
_start:
{
if (lean_obj_tag(v_x_3989_) == 0)
{
lean_object* v___x_3990_; 
v___x_3990_ = lean_box(0);
return v___x_3990_;
}
else
{
lean_object* v_key_3991_; lean_object* v_value_3992_; lean_object* v_tail_3993_; uint8_t v___x_3994_; 
v_key_3991_ = lean_ctor_get(v_x_3989_, 0);
v_value_3992_ = lean_ctor_get(v_x_3989_, 1);
v_tail_3993_ = lean_ctor_get(v_x_3989_, 2);
v___x_3994_ = lean_name_eq(v_key_3991_, v_a_3988_);
if (v___x_3994_ == 0)
{
v_x_3989_ = v_tail_3993_;
goto _start;
}
else
{
lean_object* v___x_3996_; 
lean_inc(v_value_3992_);
v___x_3996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3996_, 0, v_value_3992_);
return v___x_3996_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___redArg___boxed(lean_object* v_a_3997_, lean_object* v_x_3998_){
_start:
{
lean_object* v_res_3999_; 
v_res_3999_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___redArg(v_a_3997_, v_x_3998_);
lean_dec(v_x_3998_);
lean_dec(v_a_3997_);
return v_res_3999_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___redArg(lean_object* v_m_4000_, lean_object* v_a_4001_){
_start:
{
lean_object* v_buckets_4002_; lean_object* v___x_4003_; uint64_t v___y_4005_; 
v_buckets_4002_ = lean_ctor_get(v_m_4000_, 1);
v___x_4003_ = lean_array_get_size(v_buckets_4002_);
if (lean_obj_tag(v_a_4001_) == 0)
{
uint64_t v___x_4019_; 
v___x_4019_ = 1723ULL;
v___y_4005_ = v___x_4019_;
goto v___jp_4004_;
}
else
{
uint64_t v_hash_4020_; 
v_hash_4020_ = lean_ctor_get_uint64(v_a_4001_, sizeof(void*)*2);
v___y_4005_ = v_hash_4020_;
goto v___jp_4004_;
}
v___jp_4004_:
{
uint64_t v___x_4006_; uint64_t v___x_4007_; uint64_t v_fold_4008_; uint64_t v___x_4009_; uint64_t v___x_4010_; uint64_t v___x_4011_; size_t v___x_4012_; size_t v___x_4013_; size_t v___x_4014_; size_t v___x_4015_; size_t v___x_4016_; lean_object* v___x_4017_; lean_object* v___x_4018_; 
v___x_4006_ = 32ULL;
v___x_4007_ = lean_uint64_shift_right(v___y_4005_, v___x_4006_);
v_fold_4008_ = lean_uint64_xor(v___y_4005_, v___x_4007_);
v___x_4009_ = 16ULL;
v___x_4010_ = lean_uint64_shift_right(v_fold_4008_, v___x_4009_);
v___x_4011_ = lean_uint64_xor(v_fold_4008_, v___x_4010_);
v___x_4012_ = lean_uint64_to_usize(v___x_4011_);
v___x_4013_ = lean_usize_of_nat(v___x_4003_);
v___x_4014_ = ((size_t)1ULL);
v___x_4015_ = lean_usize_sub(v___x_4013_, v___x_4014_);
v___x_4016_ = lean_usize_land(v___x_4012_, v___x_4015_);
v___x_4017_ = lean_array_uget_borrowed(v_buckets_4002_, v___x_4016_);
v___x_4018_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___redArg(v_a_4001_, v___x_4017_);
return v___x_4018_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___redArg___boxed(lean_object* v_m_4021_, lean_object* v_a_4022_){
_start:
{
lean_object* v_res_4023_; 
v_res_4023_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___redArg(v_m_4021_, v_a_4022_);
lean_dec(v_a_4022_);
lean_dec_ref(v_m_4021_);
return v_res_4023_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__0(void){
_start:
{
lean_object* v___x_4024_; 
v___x_4024_ = l_Std_HashMap_instInhabited___redArg();
return v___x_4024_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41(lean_object* v_declName_4027_, uint8_t v_isMeta_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_){
_start:
{
lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v_env_4037_; lean_object* v___y_4039_; lean_object* v___x_4052_; 
v___x_4032_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__0);
v___x_4033_ = lean_st_ref_get(v___y_4030_);
v_env_4037_ = lean_ctor_get(v___x_4033_, 0);
lean_inc_ref(v_env_4037_);
lean_dec(v___x_4033_);
v___x_4052_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_4037_, v_declName_4027_);
if (lean_obj_tag(v___x_4052_) == 0)
{
lean_dec_ref(v_env_4037_);
lean_dec(v_declName_4027_);
goto v___jp_4034_;
}
else
{
lean_object* v_val_4053_; lean_object* v___x_4054_; lean_object* v_modules_4055_; lean_object* v___x_4056_; uint8_t v___x_4057_; 
v_val_4053_ = lean_ctor_get(v___x_4052_, 0);
lean_inc(v_val_4053_);
lean_dec_ref_known(v___x_4052_, 1);
v___x_4054_ = l_Lean_Environment_header(v_env_4037_);
v_modules_4055_ = lean_ctor_get(v___x_4054_, 3);
lean_inc_ref(v_modules_4055_);
lean_dec_ref(v___x_4054_);
v___x_4056_ = lean_array_get_size(v_modules_4055_);
v___x_4057_ = lean_nat_dec_lt(v_val_4053_, v___x_4056_);
if (v___x_4057_ == 0)
{
lean_dec_ref(v_modules_4055_);
lean_dec(v_val_4053_);
lean_dec_ref(v_env_4037_);
lean_dec(v_declName_4027_);
goto v___jp_4034_;
}
else
{
lean_object* v___x_4058_; lean_object* v___x_4059_; uint8_t v___y_4061_; 
v___x_4058_ = lean_array_fget(v_modules_4055_, v_val_4053_);
lean_dec(v_val_4053_);
lean_dec_ref(v_modules_4055_);
v___x_4059_ = lean_st_ref_get(v___y_4030_);
if (v_isMeta_4028_ == 0)
{
lean_dec(v___x_4059_);
v___y_4061_ = v_isMeta_4028_;
goto v___jp_4060_;
}
else
{
lean_object* v_env_4072_; uint8_t v___x_4073_; 
v_env_4072_ = lean_ctor_get(v___x_4059_, 0);
lean_inc_ref(v_env_4072_);
lean_dec(v___x_4059_);
lean_inc(v_declName_4027_);
v___x_4073_ = l_Lean_isMarkedMeta(v_env_4072_, v_declName_4027_);
if (v___x_4073_ == 0)
{
v___y_4061_ = v_isMeta_4028_;
goto v___jp_4060_;
}
else
{
uint8_t v___x_4074_; 
v___x_4074_ = 0;
v___y_4061_ = v___x_4074_;
goto v___jp_4060_;
}
}
v___jp_4060_:
{
lean_object* v_toImport_4062_; lean_object* v_module_4063_; lean_object* v___x_4064_; 
v_toImport_4062_ = lean_ctor_get(v___x_4058_, 0);
lean_inc_ref(v_toImport_4062_);
lean_dec(v___x_4058_);
v_module_4063_ = lean_ctor_get(v_toImport_4062_, 0);
lean_inc(v_module_4063_);
lean_dec_ref(v_toImport_4062_);
lean_inc(v_declName_4027_);
v___x_4064_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54(v_module_4063_, v___y_4061_, v_declName_4027_, v___y_4029_, v___y_4030_);
if (lean_obj_tag(v___x_4064_) == 0)
{
lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; 
lean_dec_ref_known(v___x_4064_, 1);
v___x_4065_ = l_Lean_indirectModUseExt;
v___x_4066_ = lean_box(1);
v___x_4067_ = lean_box(0);
lean_inc_ref(v_env_4037_);
v___x_4068_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_4032_, v___x_4065_, v_env_4037_, v___x_4066_, v___x_4067_);
v___x_4069_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___redArg(v___x_4068_, v_declName_4027_);
lean_dec(v___x_4068_);
if (lean_obj_tag(v___x_4069_) == 0)
{
lean_object* v___x_4070_; 
v___x_4070_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__1));
v___y_4039_ = v___x_4070_;
goto v___jp_4038_;
}
else
{
lean_object* v_val_4071_; 
v_val_4071_ = lean_ctor_get(v___x_4069_, 0);
lean_inc(v_val_4071_);
lean_dec_ref_known(v___x_4069_, 1);
v___y_4039_ = v_val_4071_;
goto v___jp_4038_;
}
}
else
{
lean_dec_ref(v_env_4037_);
lean_dec(v_declName_4027_);
return v___x_4064_;
}
}
}
}
v___jp_4034_:
{
lean_object* v___x_4035_; lean_object* v___x_4036_; 
v___x_4035_ = lean_box(0);
v___x_4036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4036_, 0, v___x_4035_);
return v___x_4036_;
}
v___jp_4038_:
{
lean_object* v___x_4040_; size_t v_sz_4041_; size_t v___x_4042_; lean_object* v___x_4043_; 
v___x_4040_ = lean_box(0);
v_sz_4041_ = lean_array_size(v___y_4039_);
v___x_4042_ = ((size_t)0ULL);
v___x_4043_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__55(v_env_4037_, v_declName_4027_, v___y_4039_, v_sz_4041_, v___x_4042_, v___x_4040_, v___y_4029_, v___y_4030_);
lean_dec_ref(v___y_4039_);
lean_dec_ref(v_env_4037_);
if (lean_obj_tag(v___x_4043_) == 0)
{
lean_object* v___x_4045_; uint8_t v_isShared_4046_; uint8_t v_isSharedCheck_4050_; 
v_isSharedCheck_4050_ = !lean_is_exclusive(v___x_4043_);
if (v_isSharedCheck_4050_ == 0)
{
lean_object* v_unused_4051_; 
v_unused_4051_ = lean_ctor_get(v___x_4043_, 0);
lean_dec(v_unused_4051_);
v___x_4045_ = v___x_4043_;
v_isShared_4046_ = v_isSharedCheck_4050_;
goto v_resetjp_4044_;
}
else
{
lean_dec(v___x_4043_);
v___x_4045_ = lean_box(0);
v_isShared_4046_ = v_isSharedCheck_4050_;
goto v_resetjp_4044_;
}
v_resetjp_4044_:
{
lean_object* v___x_4048_; 
if (v_isShared_4046_ == 0)
{
lean_ctor_set(v___x_4045_, 0, v___x_4040_);
v___x_4048_ = v___x_4045_;
goto v_reusejp_4047_;
}
else
{
lean_object* v_reuseFailAlloc_4049_; 
v_reuseFailAlloc_4049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4049_, 0, v___x_4040_);
v___x_4048_ = v_reuseFailAlloc_4049_;
goto v_reusejp_4047_;
}
v_reusejp_4047_:
{
return v___x_4048_;
}
}
}
else
{
return v___x_4043_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___boxed(lean_object* v_declName_4075_, lean_object* v_isMeta_4076_, lean_object* v___y_4077_, lean_object* v___y_4078_, lean_object* v___y_4079_){
_start:
{
uint8_t v_isMeta_boxed_4080_; lean_object* v_res_4081_; 
v_isMeta_boxed_4080_ = lean_unbox(v_isMeta_4076_);
v_res_4081_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41(v_declName_4075_, v_isMeta_boxed_4080_, v___y_4077_, v___y_4078_);
lean_dec(v___y_4078_);
lean_dec_ref(v___y_4077_);
return v_res_4081_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__2(lean_object* v_currNamespace_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_){
_start:
{
lean_object* v___x_4085_; 
v___x_4085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4085_, 0, v_currNamespace_4082_);
lean_ctor_set(v___x_4085_, 1, v___y_4084_);
return v___x_4085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__2___boxed(lean_object* v_currNamespace_4086_, lean_object* v___y_4087_, lean_object* v___y_4088_){
_start:
{
lean_object* v_res_4089_; 
v_res_4089_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__2(v_currNamespace_4086_, v___y_4087_, v___y_4088_);
lean_dec_ref(v___y_4087_);
return v_res_4089_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__0(lean_object* v_env_4090_, lean_object* v_declName_4091_, lean_object* v___y_4092_, lean_object* v___y_4093_){
_start:
{
uint8_t v___x_4094_; lean_object* v_env_4095_; lean_object* v___x_4096_; uint8_t v___x_4097_; uint8_t v___x_4098_; 
v___x_4094_ = 0;
v_env_4095_ = l_Lean_Environment_setExporting(v_env_4090_, v___x_4094_);
lean_inc(v_declName_4091_);
v___x_4096_ = l_Lean_mkPrivateName(v_env_4095_, v_declName_4091_);
v___x_4097_ = 1;
lean_inc_ref(v_env_4095_);
v___x_4098_ = l_Lean_Environment_contains(v_env_4095_, v___x_4096_, v___x_4097_);
if (v___x_4098_ == 0)
{
lean_object* v___x_4099_; uint8_t v___x_4100_; lean_object* v___x_4101_; lean_object* v___x_4102_; 
v___x_4099_ = l_Lean_privateToUserName(v_declName_4091_);
v___x_4100_ = l_Lean_Environment_contains(v_env_4095_, v___x_4099_, v___x_4097_);
v___x_4101_ = lean_box(v___x_4100_);
v___x_4102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4102_, 0, v___x_4101_);
lean_ctor_set(v___x_4102_, 1, v___y_4093_);
return v___x_4102_;
}
else
{
lean_object* v___x_4103_; lean_object* v___x_4104_; 
lean_dec_ref(v_env_4095_);
lean_dec(v_declName_4091_);
v___x_4103_ = lean_box(v___x_4098_);
v___x_4104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4104_, 0, v___x_4103_);
lean_ctor_set(v___x_4104_, 1, v___y_4093_);
return v___x_4104_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__0___boxed(lean_object* v_env_4105_, lean_object* v_declName_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_){
_start:
{
lean_object* v_res_4109_; 
v_res_4109_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__0(v_env_4105_, v_declName_4106_, v___y_4107_, v___y_4108_);
lean_dec_ref(v___y_4107_);
return v_res_4109_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___closed__0(void){
_start:
{
lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; 
v___x_4110_ = lean_box(0);
v___x_4111_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_4112_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4112_, 0, v___x_4111_);
lean_ctor_set(v___x_4112_, 1, v___x_4110_);
return v___x_4112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg(){
_start:
{
lean_object* v___x_4114_; lean_object* v___x_4115_; 
v___x_4114_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___closed__0);
v___x_4115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4115_, 0, v___x_4114_);
return v___x_4115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___boxed(lean_object* v___y_4116_){
_start:
{
lean_object* v_res_4117_; 
v_res_4117_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg();
return v_res_4117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__4(lean_object* v_env_4118_, lean_object* v_opts_4119_, lean_object* v_currNamespace_4120_, lean_object* v_openDecls_4121_, lean_object* v_n_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_){
_start:
{
lean_object* v___x_4125_; lean_object* v___x_4126_; 
v___x_4125_ = l_Lean_ResolveName_resolveGlobalName(v_env_4118_, v_opts_4119_, v_currNamespace_4120_, v_openDecls_4121_, v_n_4122_);
v___x_4126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4126_, 0, v___x_4125_);
lean_ctor_set(v___x_4126_, 1, v___y_4124_);
return v___x_4126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__4___boxed(lean_object* v_env_4127_, lean_object* v_opts_4128_, lean_object* v_currNamespace_4129_, lean_object* v_openDecls_4130_, lean_object* v_n_4131_, lean_object* v___y_4132_, lean_object* v___y_4133_){
_start:
{
lean_object* v_res_4134_; 
v_res_4134_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__4(v_env_4127_, v_opts_4128_, v_currNamespace_4129_, v_openDecls_4130_, v_n_4131_, v___y_4132_, v___y_4133_);
lean_dec_ref(v___y_4132_);
lean_dec_ref(v_opts_4128_);
return v_res_4134_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__50(lean_object* v_as_4135_, lean_object* v___y_4136_, lean_object* v___y_4137_){
_start:
{
if (lean_obj_tag(v_as_4135_) == 0)
{
lean_object* v___x_4139_; lean_object* v___x_4140_; 
v___x_4139_ = lean_box(0);
v___x_4140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4140_, 0, v___x_4139_);
return v___x_4140_;
}
else
{
lean_object* v_head_4141_; lean_object* v_tail_4142_; lean_object* v_fst_4143_; lean_object* v_snd_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v_scopes_4149_; lean_object* v___x_4150_; lean_object* v_opts_4151_; uint8_t v_hasTrace_4152_; 
v_head_4141_ = lean_ctor_get(v_as_4135_, 0);
lean_inc(v_head_4141_);
v_tail_4142_ = lean_ctor_get(v_as_4135_, 1);
lean_inc(v_tail_4142_);
lean_dec_ref_known(v_as_4135_, 2);
v_fst_4143_ = lean_ctor_get(v_head_4141_, 0);
lean_inc(v_fst_4143_);
v_snd_4144_ = lean_ctor_get(v_head_4141_, 1);
lean_inc(v_snd_4144_);
lean_dec(v_head_4141_);
v___x_4145_ = l_Lean_inheritedTraceOptions;
v___x_4146_ = lean_st_ref_get(v___x_4145_);
v___x_4147_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_4148_ = lean_st_ref_get(v___y_4137_);
v_scopes_4149_ = lean_ctor_get(v___x_4148_, 2);
lean_inc(v_scopes_4149_);
lean_dec(v___x_4148_);
v___x_4150_ = l_List_head_x21___redArg(v___x_4147_, v_scopes_4149_);
lean_dec(v_scopes_4149_);
v_opts_4151_ = lean_ctor_get(v___x_4150_, 1);
lean_inc_ref(v_opts_4151_);
lean_dec(v___x_4150_);
v_hasTrace_4152_ = lean_ctor_get_uint8(v_opts_4151_, sizeof(void*)*1);
if (v_hasTrace_4152_ == 0)
{
lean_dec_ref(v_opts_4151_);
lean_dec(v___x_4146_);
lean_dec(v_snd_4144_);
lean_dec(v_fst_4143_);
v_as_4135_ = v_tail_4142_;
goto _start;
}
else
{
lean_object* v___x_4154_; lean_object* v___x_4155_; uint8_t v___x_4156_; 
v___x_4154_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__8));
lean_inc(v_fst_4143_);
v___x_4155_ = l_Lean_Name_append(v___x_4154_, v_fst_4143_);
v___x_4156_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_4146_, v_opts_4151_, v___x_4155_);
lean_dec(v___x_4155_);
lean_dec_ref(v_opts_4151_);
lean_dec(v___x_4146_);
if (v___x_4156_ == 0)
{
lean_dec(v_snd_4144_);
lean_dec(v_fst_4143_);
v_as_4135_ = v_tail_4142_;
goto _start;
}
else
{
lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; 
v___x_4158_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4158_, 0, v_snd_4144_);
v___x_4159_ = l_Lean_MessageData_ofFormat(v___x_4158_);
v___x_4160_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47(v_fst_4143_, v___x_4159_, v___y_4136_, v___y_4137_);
if (lean_obj_tag(v___x_4160_) == 0)
{
lean_dec_ref_known(v___x_4160_, 1);
v_as_4135_ = v_tail_4142_;
goto _start;
}
else
{
lean_dec(v_tail_4142_);
return v___x_4160_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__50___boxed(lean_object* v_as_4162_, lean_object* v___y_4163_, lean_object* v___y_4164_, lean_object* v___y_4165_){
_start:
{
lean_object* v_res_4166_; 
v_res_4166_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__50(v_as_4162_, v___y_4163_, v___y_4164_);
lean_dec(v___y_4164_);
lean_dec_ref(v___y_4163_);
return v_res_4166_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg(lean_object* v_x_4167_, lean_object* v___y_4168_){
_start:
{
if (lean_obj_tag(v_x_4167_) == 0)
{
lean_object* v_a_4169_; lean_object* v___x_4170_; 
v_a_4169_ = lean_ctor_get(v_x_4167_, 0);
lean_inc(v_a_4169_);
v___x_4170_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4170_, 0, v_a_4169_);
lean_ctor_set(v___x_4170_, 1, v___y_4168_);
return v___x_4170_;
}
else
{
lean_object* v_a_4171_; lean_object* v___x_4172_; 
v_a_4171_ = lean_ctor_get(v_x_4167_, 0);
lean_inc(v_a_4171_);
v___x_4172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4172_, 0, v_a_4171_);
lean_ctor_set(v___x_4172_, 1, v___y_4168_);
return v___x_4172_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg___boxed(lean_object* v_x_4173_, lean_object* v___y_4174_){
_start:
{
lean_object* v_res_4175_; 
v_res_4175_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg(v_x_4173_, v___y_4174_);
lean_dec_ref(v_x_4173_);
return v_res_4175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__1(lean_object* v_env_4176_, lean_object* v_stx_4177_, lean_object* v___y_4178_, lean_object* v___y_4179_){
_start:
{
lean_object* v___x_4180_; 
v___x_4180_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_4176_, v_stx_4177_, v___y_4178_, v___y_4179_);
if (lean_obj_tag(v___x_4180_) == 0)
{
lean_object* v_a_4181_; 
v_a_4181_ = lean_ctor_get(v___x_4180_, 0);
lean_inc(v_a_4181_);
if (lean_obj_tag(v_a_4181_) == 0)
{
lean_object* v_a_4182_; lean_object* v___x_4184_; uint8_t v_isShared_4185_; uint8_t v_isSharedCheck_4190_; 
v_a_4182_ = lean_ctor_get(v___x_4180_, 1);
v_isSharedCheck_4190_ = !lean_is_exclusive(v___x_4180_);
if (v_isSharedCheck_4190_ == 0)
{
lean_object* v_unused_4191_; 
v_unused_4191_ = lean_ctor_get(v___x_4180_, 0);
lean_dec(v_unused_4191_);
v___x_4184_ = v___x_4180_;
v_isShared_4185_ = v_isSharedCheck_4190_;
goto v_resetjp_4183_;
}
else
{
lean_inc(v_a_4182_);
lean_dec(v___x_4180_);
v___x_4184_ = lean_box(0);
v_isShared_4185_ = v_isSharedCheck_4190_;
goto v_resetjp_4183_;
}
v_resetjp_4183_:
{
lean_object* v___x_4186_; lean_object* v___x_4188_; 
v___x_4186_ = lean_box(0);
if (v_isShared_4185_ == 0)
{
lean_ctor_set(v___x_4184_, 0, v___x_4186_);
v___x_4188_ = v___x_4184_;
goto v_reusejp_4187_;
}
else
{
lean_object* v_reuseFailAlloc_4189_; 
v_reuseFailAlloc_4189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4189_, 0, v___x_4186_);
lean_ctor_set(v_reuseFailAlloc_4189_, 1, v_a_4182_);
v___x_4188_ = v_reuseFailAlloc_4189_;
goto v_reusejp_4187_;
}
v_reusejp_4187_:
{
return v___x_4188_;
}
}
}
else
{
lean_object* v_val_4192_; lean_object* v___x_4194_; uint8_t v_isShared_4195_; uint8_t v_isSharedCheck_4220_; 
v_val_4192_ = lean_ctor_get(v_a_4181_, 0);
v_isSharedCheck_4220_ = !lean_is_exclusive(v_a_4181_);
if (v_isSharedCheck_4220_ == 0)
{
v___x_4194_ = v_a_4181_;
v_isShared_4195_ = v_isSharedCheck_4220_;
goto v_resetjp_4193_;
}
else
{
lean_inc(v_val_4192_);
lean_dec(v_a_4181_);
v___x_4194_ = lean_box(0);
v_isShared_4195_ = v_isSharedCheck_4220_;
goto v_resetjp_4193_;
}
v_resetjp_4193_:
{
lean_object* v_snd_4196_; 
v_snd_4196_ = lean_ctor_get(v_val_4192_, 1);
lean_inc(v_snd_4196_);
lean_dec(v_val_4192_);
if (lean_obj_tag(v_snd_4196_) == 0)
{
lean_object* v_a_4197_; lean_object* v_a_4198_; lean_object* v___x_4200_; uint8_t v_isShared_4201_; uint8_t v_isSharedCheck_4206_; 
lean_del_object(v___x_4194_);
v_a_4197_ = lean_ctor_get(v___x_4180_, 1);
lean_inc(v_a_4197_);
lean_dec_ref_known(v___x_4180_, 2);
v_a_4198_ = lean_ctor_get(v_snd_4196_, 0);
v_isSharedCheck_4206_ = !lean_is_exclusive(v_snd_4196_);
if (v_isSharedCheck_4206_ == 0)
{
v___x_4200_ = v_snd_4196_;
v_isShared_4201_ = v_isSharedCheck_4206_;
goto v_resetjp_4199_;
}
else
{
lean_inc(v_a_4198_);
lean_dec(v_snd_4196_);
v___x_4200_ = lean_box(0);
v_isShared_4201_ = v_isSharedCheck_4206_;
goto v_resetjp_4199_;
}
v_resetjp_4199_:
{
lean_object* v___x_4203_; 
if (v_isShared_4201_ == 0)
{
v___x_4203_ = v___x_4200_;
goto v_reusejp_4202_;
}
else
{
lean_object* v_reuseFailAlloc_4205_; 
v_reuseFailAlloc_4205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4205_, 0, v_a_4198_);
v___x_4203_ = v_reuseFailAlloc_4205_;
goto v_reusejp_4202_;
}
v_reusejp_4202_:
{
lean_object* v___x_4204_; 
v___x_4204_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg(v___x_4203_, v_a_4197_);
lean_dec_ref(v___x_4203_);
return v___x_4204_;
}
}
}
else
{
lean_object* v_a_4207_; lean_object* v_a_4208_; lean_object* v___x_4210_; uint8_t v_isShared_4211_; uint8_t v_isSharedCheck_4219_; 
v_a_4207_ = lean_ctor_get(v___x_4180_, 1);
lean_inc(v_a_4207_);
lean_dec_ref_known(v___x_4180_, 2);
v_a_4208_ = lean_ctor_get(v_snd_4196_, 0);
v_isSharedCheck_4219_ = !lean_is_exclusive(v_snd_4196_);
if (v_isSharedCheck_4219_ == 0)
{
v___x_4210_ = v_snd_4196_;
v_isShared_4211_ = v_isSharedCheck_4219_;
goto v_resetjp_4209_;
}
else
{
lean_inc(v_a_4208_);
lean_dec(v_snd_4196_);
v___x_4210_ = lean_box(0);
v_isShared_4211_ = v_isSharedCheck_4219_;
goto v_resetjp_4209_;
}
v_resetjp_4209_:
{
lean_object* v___x_4213_; 
if (v_isShared_4195_ == 0)
{
lean_ctor_set(v___x_4194_, 0, v_a_4208_);
v___x_4213_ = v___x_4194_;
goto v_reusejp_4212_;
}
else
{
lean_object* v_reuseFailAlloc_4218_; 
v_reuseFailAlloc_4218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4218_, 0, v_a_4208_);
v___x_4213_ = v_reuseFailAlloc_4218_;
goto v_reusejp_4212_;
}
v_reusejp_4212_:
{
lean_object* v___x_4215_; 
if (v_isShared_4211_ == 0)
{
lean_ctor_set(v___x_4210_, 0, v___x_4213_);
v___x_4215_ = v___x_4210_;
goto v_reusejp_4214_;
}
else
{
lean_object* v_reuseFailAlloc_4217_; 
v_reuseFailAlloc_4217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4217_, 0, v___x_4213_);
v___x_4215_ = v_reuseFailAlloc_4217_;
goto v_reusejp_4214_;
}
v_reusejp_4214_:
{
lean_object* v___x_4216_; 
v___x_4216_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg(v___x_4215_, v_a_4207_);
lean_dec_ref(v___x_4215_);
return v___x_4216_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4221_; lean_object* v_a_4222_; lean_object* v___x_4224_; uint8_t v_isShared_4225_; uint8_t v_isSharedCheck_4229_; 
v_a_4221_ = lean_ctor_get(v___x_4180_, 0);
v_a_4222_ = lean_ctor_get(v___x_4180_, 1);
v_isSharedCheck_4229_ = !lean_is_exclusive(v___x_4180_);
if (v_isSharedCheck_4229_ == 0)
{
v___x_4224_ = v___x_4180_;
v_isShared_4225_ = v_isSharedCheck_4229_;
goto v_resetjp_4223_;
}
else
{
lean_inc(v_a_4222_);
lean_inc(v_a_4221_);
lean_dec(v___x_4180_);
v___x_4224_ = lean_box(0);
v_isShared_4225_ = v_isSharedCheck_4229_;
goto v_resetjp_4223_;
}
v_resetjp_4223_:
{
lean_object* v___x_4227_; 
if (v_isShared_4225_ == 0)
{
v___x_4227_ = v___x_4224_;
goto v_reusejp_4226_;
}
else
{
lean_object* v_reuseFailAlloc_4228_; 
v_reuseFailAlloc_4228_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4228_, 0, v_a_4221_);
lean_ctor_set(v_reuseFailAlloc_4228_, 1, v_a_4222_);
v___x_4227_ = v_reuseFailAlloc_4228_;
goto v_reusejp_4226_;
}
v_reusejp_4226_:
{
return v___x_4227_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__1___boxed(lean_object* v_env_4230_, lean_object* v_stx_4231_, lean_object* v___y_4232_, lean_object* v___y_4233_){
_start:
{
lean_object* v_res_4234_; 
v_res_4234_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__1(v_env_4230_, v_stx_4231_, v___y_4232_, v___y_4233_);
lean_dec_ref(v___y_4232_);
return v_res_4234_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__3(void){
_start:
{
lean_object* v___x_4240_; lean_object* v___x_4241_; 
v___x_4240_ = l_Lean_maxRecDepthErrorMessage;
v___x_4241_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4241_, 0, v___x_4240_);
return v___x_4241_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__4(void){
_start:
{
lean_object* v___x_4242_; lean_object* v___x_4243_; 
v___x_4242_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__3);
v___x_4243_ = l_Lean_MessageData_ofFormat(v___x_4242_);
return v___x_4243_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__5(void){
_start:
{
lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; 
v___x_4244_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__4);
v___x_4245_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__2));
v___x_4246_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_4246_, 0, v___x_4245_);
lean_ctor_set(v___x_4246_, 1, v___x_4244_);
return v___x_4246_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg(lean_object* v_ref_4247_){
_start:
{
lean_object* v___x_4249_; lean_object* v___x_4250_; lean_object* v___x_4251_; 
v___x_4249_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__5);
v___x_4250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4250_, 0, v_ref_4247_);
lean_ctor_set(v___x_4250_, 1, v___x_4249_);
v___x_4251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4251_, 0, v___x_4250_);
return v___x_4251_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___boxed(lean_object* v_ref_4252_, lean_object* v___y_4253_){
_start:
{
lean_object* v_res_4254_; 
v_res_4254_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg(v_ref_4252_);
return v_res_4254_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___redArg(lean_object* v_as_x27_4255_, lean_object* v_b_4256_, lean_object* v___y_4257_, lean_object* v___y_4258_){
_start:
{
if (lean_obj_tag(v_as_x27_4255_) == 0)
{
lean_object* v___x_4260_; 
v___x_4260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4260_, 0, v_b_4256_);
return v___x_4260_;
}
else
{
lean_object* v_head_4261_; lean_object* v_tail_4262_; lean_object* v___x_4263_; uint8_t v___x_4264_; lean_object* v___x_4265_; 
v_head_4261_ = lean_ctor_get(v_as_x27_4255_, 0);
v_tail_4262_ = lean_ctor_get(v_as_x27_4255_, 1);
v___x_4263_ = lean_box(0);
v___x_4264_ = 1;
lean_inc(v_head_4261_);
v___x_4265_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41(v_head_4261_, v___x_4264_, v___y_4257_, v___y_4258_);
if (lean_obj_tag(v___x_4265_) == 0)
{
lean_dec_ref_known(v___x_4265_, 1);
v_as_x27_4255_ = v_tail_4262_;
v_b_4256_ = v___x_4263_;
goto _start;
}
else
{
return v___x_4265_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___redArg___boxed(lean_object* v_as_x27_4267_, lean_object* v_b_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_){
_start:
{
lean_object* v_res_4272_; 
v_res_4272_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___redArg(v_as_x27_4267_, v_b_4268_, v___y_4269_, v___y_4270_);
lean_dec(v___y_4270_);
lean_dec_ref(v___y_4269_);
lean_dec(v_as_x27_4267_);
return v_res_4272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__3(lean_object* v_env_4273_, lean_object* v_currNamespace_4274_, lean_object* v_openDecls_4275_, lean_object* v_n_4276_, lean_object* v___y_4277_, lean_object* v___y_4278_){
_start:
{
lean_object* v___x_4279_; lean_object* v___x_4280_; 
v___x_4279_ = l_Lean_ResolveName_resolveNamespace(v_env_4273_, v_currNamespace_4274_, v_openDecls_4275_, v_n_4276_);
v___x_4280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4280_, 0, v___x_4279_);
lean_ctor_set(v___x_4280_, 1, v___y_4278_);
return v___x_4280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__3___boxed(lean_object* v_env_4281_, lean_object* v_currNamespace_4282_, lean_object* v_openDecls_4283_, lean_object* v_n_4284_, lean_object* v___y_4285_, lean_object* v___y_4286_){
_start:
{
lean_object* v_res_4287_; 
v_res_4287_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__3(v_env_4281_, v_currNamespace_4282_, v_openDecls_4283_, v_n_4284_, v___y_4285_, v___y_4286_);
lean_dec_ref(v___y_4285_);
return v_res_4287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg(lean_object* v_x_4289_, lean_object* v___y_4290_, lean_object* v___y_4291_){
_start:
{
lean_object* v___x_4293_; lean_object* v_env_4294_; lean_object* v___f_4295_; lean_object* v___f_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v_scopes_4299_; lean_object* v___x_4300_; lean_object* v_opts_4301_; lean_object* v___x_4302_; 
v___x_4293_ = lean_st_ref_get(v___y_4291_);
v_env_4294_ = lean_ctor_get(v___x_4293_, 0);
lean_inc_ref_n(v_env_4294_, 3);
lean_dec(v___x_4293_);
v___f_4295_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_4295_, 0, v_env_4294_);
v___f_4296_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_4296_, 0, v_env_4294_);
v___x_4297_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_4298_ = lean_st_ref_get(v___y_4291_);
v_scopes_4299_ = lean_ctor_get(v___x_4298_, 2);
lean_inc(v_scopes_4299_);
lean_dec(v___x_4298_);
v___x_4300_ = l_List_head_x21___redArg(v___x_4297_, v_scopes_4299_);
lean_dec(v_scopes_4299_);
v_opts_4301_ = lean_ctor_get(v___x_4300_, 1);
lean_inc_ref(v_opts_4301_);
lean_dec(v___x_4300_);
v___x_4302_ = l_Lean_Elab_Command_getScope___redArg(v___y_4291_);
if (lean_obj_tag(v___x_4302_) == 0)
{
lean_object* v_a_4303_; lean_object* v_currNamespace_4304_; lean_object* v___f_4305_; lean_object* v___x_4306_; 
v_a_4303_ = lean_ctor_get(v___x_4302_, 0);
lean_inc(v_a_4303_);
lean_dec_ref_known(v___x_4302_, 1);
v_currNamespace_4304_ = lean_ctor_get(v_a_4303_, 2);
lean_inc_n(v_currNamespace_4304_, 2);
lean_dec(v_a_4303_);
v___f_4305_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4305_, 0, v_currNamespace_4304_);
v___x_4306_ = l_Lean_Elab_Command_getScope___redArg(v___y_4291_);
if (lean_obj_tag(v___x_4306_) == 0)
{
lean_object* v_a_4307_; lean_object* v_openDecls_4308_; lean_object* v___f_4309_; lean_object* v___f_4310_; lean_object* v_methods_4311_; lean_object* v___x_4312_; 
v_a_4307_ = lean_ctor_get(v___x_4306_, 0);
lean_inc(v_a_4307_);
lean_dec_ref_known(v___x_4306_, 1);
v_openDecls_4308_ = lean_ctor_get(v_a_4307_, 3);
lean_inc_n(v_openDecls_4308_, 2);
lean_dec(v_a_4307_);
lean_inc(v_currNamespace_4304_);
lean_inc_ref(v_env_4294_);
v___f_4309_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__3___boxed), 6, 3);
lean_closure_set(v___f_4309_, 0, v_env_4294_);
lean_closure_set(v___f_4309_, 1, v_currNamespace_4304_);
lean_closure_set(v___f_4309_, 2, v_openDecls_4308_);
v___f_4310_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__4___boxed), 7, 4);
lean_closure_set(v___f_4310_, 0, v_env_4294_);
lean_closure_set(v___f_4310_, 1, v_opts_4301_);
lean_closure_set(v___f_4310_, 2, v_currNamespace_4304_);
lean_closure_set(v___f_4310_, 3, v_openDecls_4308_);
v_methods_4311_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_methods_4311_, 0, v___f_4296_);
lean_ctor_set(v_methods_4311_, 1, v___f_4305_);
lean_ctor_set(v_methods_4311_, 2, v___f_4295_);
lean_ctor_set(v_methods_4311_, 3, v___f_4309_);
lean_ctor_set(v_methods_4311_, 4, v___f_4310_);
v___x_4312_ = l_Lean_Elab_Command_getRef___redArg(v___y_4290_);
if (lean_obj_tag(v___x_4312_) == 0)
{
lean_object* v_a_4313_; lean_object* v___x_4314_; 
v_a_4313_ = lean_ctor_get(v___x_4312_, 0);
lean_inc(v_a_4313_);
lean_dec_ref_known(v___x_4312_, 1);
v___x_4314_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_4290_);
if (lean_obj_tag(v___x_4314_) == 0)
{
lean_object* v_a_4315_; lean_object* v_currRecDepth_4316_; lean_object* v_quotContext_x3f_4317_; lean_object* v_a_4319_; 
v_a_4315_ = lean_ctor_get(v___x_4314_, 0);
lean_inc(v_a_4315_);
lean_dec_ref_known(v___x_4314_, 1);
v_currRecDepth_4316_ = lean_ctor_get(v___y_4290_, 2);
v_quotContext_x3f_4317_ = lean_ctor_get(v___y_4290_, 5);
if (lean_obj_tag(v_quotContext_x3f_4317_) == 0)
{
lean_object* v___x_4393_; lean_object* v_a_4394_; 
v___x_4393_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg(v___y_4291_);
v_a_4394_ = lean_ctor_get(v___x_4393_, 0);
lean_inc(v_a_4394_);
lean_dec_ref(v___x_4393_);
v_a_4319_ = v_a_4394_;
goto v___jp_4318_;
}
else
{
lean_object* v_val_4395_; 
v_val_4395_ = lean_ctor_get(v_quotContext_x3f_4317_, 0);
lean_inc(v_val_4395_);
v_a_4319_ = v_val_4395_;
goto v___jp_4318_;
}
v___jp_4318_:
{
lean_object* v___x_4320_; lean_object* v_maxRecDepth_4321_; lean_object* v___x_4322_; lean_object* v_nextMacroScope_4323_; lean_object* v___x_4324_; lean_object* v___x_4325_; lean_object* v___x_4326_; lean_object* v___x_4327_; 
v___x_4320_ = lean_st_ref_get(v___y_4291_);
v_maxRecDepth_4321_ = lean_ctor_get(v___x_4320_, 5);
lean_inc(v_maxRecDepth_4321_);
lean_dec(v___x_4320_);
v___x_4322_ = lean_st_ref_get(v___y_4291_);
v_nextMacroScope_4323_ = lean_ctor_get(v___x_4322_, 4);
lean_inc(v_nextMacroScope_4323_);
lean_dec(v___x_4322_);
lean_inc(v_currRecDepth_4316_);
v___x_4324_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4324_, 0, v_methods_4311_);
lean_ctor_set(v___x_4324_, 1, v_a_4319_);
lean_ctor_set(v___x_4324_, 2, v_a_4315_);
lean_ctor_set(v___x_4324_, 3, v_currRecDepth_4316_);
lean_ctor_set(v___x_4324_, 4, v_maxRecDepth_4321_);
lean_ctor_set(v___x_4324_, 5, v_a_4313_);
v___x_4325_ = lean_box(0);
v___x_4326_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4326_, 0, v_nextMacroScope_4323_);
lean_ctor_set(v___x_4326_, 1, v___x_4325_);
lean_ctor_set(v___x_4326_, 2, v___x_4325_);
v___x_4327_ = lean_apply_2(v_x_4289_, v___x_4324_, v___x_4326_);
if (lean_obj_tag(v___x_4327_) == 0)
{
lean_object* v_a_4328_; lean_object* v_a_4329_; lean_object* v_macroScope_4330_; lean_object* v_traceMsgs_4331_; lean_object* v_expandedMacroDecls_4332_; lean_object* v___x_4333_; lean_object* v___x_4334_; 
v_a_4328_ = lean_ctor_get(v___x_4327_, 1);
lean_inc(v_a_4328_);
v_a_4329_ = lean_ctor_get(v___x_4327_, 0);
lean_inc(v_a_4329_);
lean_dec_ref_known(v___x_4327_, 2);
v_macroScope_4330_ = lean_ctor_get(v_a_4328_, 0);
lean_inc(v_macroScope_4330_);
v_traceMsgs_4331_ = lean_ctor_get(v_a_4328_, 1);
lean_inc(v_traceMsgs_4331_);
v_expandedMacroDecls_4332_ = lean_ctor_get(v_a_4328_, 2);
lean_inc(v_expandedMacroDecls_4332_);
lean_dec(v_a_4328_);
v___x_4333_ = lean_box(0);
v___x_4334_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___redArg(v_expandedMacroDecls_4332_, v___x_4333_, v___y_4290_, v___y_4291_);
lean_dec(v_expandedMacroDecls_4332_);
if (lean_obj_tag(v___x_4334_) == 0)
{
lean_object* v___x_4335_; lean_object* v_env_4336_; lean_object* v_messages_4337_; lean_object* v_scopes_4338_; lean_object* v_usedQuotCtxts_4339_; lean_object* v_maxRecDepth_4340_; lean_object* v_ngen_4341_; lean_object* v_auxDeclNGen_4342_; lean_object* v_infoState_4343_; lean_object* v_traceState_4344_; lean_object* v_snapshotTasks_4345_; lean_object* v_prevLinterStates_4346_; lean_object* v_codeQualityEntryTasks_4347_; lean_object* v___x_4349_; uint8_t v_isShared_4350_; uint8_t v_isSharedCheck_4373_; 
lean_dec_ref_known(v___x_4334_, 1);
v___x_4335_ = lean_st_ref_take(v___y_4291_);
v_env_4336_ = lean_ctor_get(v___x_4335_, 0);
v_messages_4337_ = lean_ctor_get(v___x_4335_, 1);
v_scopes_4338_ = lean_ctor_get(v___x_4335_, 2);
v_usedQuotCtxts_4339_ = lean_ctor_get(v___x_4335_, 3);
v_maxRecDepth_4340_ = lean_ctor_get(v___x_4335_, 5);
v_ngen_4341_ = lean_ctor_get(v___x_4335_, 6);
v_auxDeclNGen_4342_ = lean_ctor_get(v___x_4335_, 7);
v_infoState_4343_ = lean_ctor_get(v___x_4335_, 8);
v_traceState_4344_ = lean_ctor_get(v___x_4335_, 9);
v_snapshotTasks_4345_ = lean_ctor_get(v___x_4335_, 10);
v_prevLinterStates_4346_ = lean_ctor_get(v___x_4335_, 11);
v_codeQualityEntryTasks_4347_ = lean_ctor_get(v___x_4335_, 12);
v_isSharedCheck_4373_ = !lean_is_exclusive(v___x_4335_);
if (v_isSharedCheck_4373_ == 0)
{
lean_object* v_unused_4374_; 
v_unused_4374_ = lean_ctor_get(v___x_4335_, 4);
lean_dec(v_unused_4374_);
v___x_4349_ = v___x_4335_;
v_isShared_4350_ = v_isSharedCheck_4373_;
goto v_resetjp_4348_;
}
else
{
lean_inc(v_codeQualityEntryTasks_4347_);
lean_inc(v_prevLinterStates_4346_);
lean_inc(v_snapshotTasks_4345_);
lean_inc(v_traceState_4344_);
lean_inc(v_infoState_4343_);
lean_inc(v_auxDeclNGen_4342_);
lean_inc(v_ngen_4341_);
lean_inc(v_maxRecDepth_4340_);
lean_inc(v_usedQuotCtxts_4339_);
lean_inc(v_scopes_4338_);
lean_inc(v_messages_4337_);
lean_inc(v_env_4336_);
lean_dec(v___x_4335_);
v___x_4349_ = lean_box(0);
v_isShared_4350_ = v_isSharedCheck_4373_;
goto v_resetjp_4348_;
}
v_resetjp_4348_:
{
lean_object* v___x_4352_; 
if (v_isShared_4350_ == 0)
{
lean_ctor_set(v___x_4349_, 4, v_macroScope_4330_);
v___x_4352_ = v___x_4349_;
goto v_reusejp_4351_;
}
else
{
lean_object* v_reuseFailAlloc_4372_; 
v_reuseFailAlloc_4372_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_4372_, 0, v_env_4336_);
lean_ctor_set(v_reuseFailAlloc_4372_, 1, v_messages_4337_);
lean_ctor_set(v_reuseFailAlloc_4372_, 2, v_scopes_4338_);
lean_ctor_set(v_reuseFailAlloc_4372_, 3, v_usedQuotCtxts_4339_);
lean_ctor_set(v_reuseFailAlloc_4372_, 4, v_macroScope_4330_);
lean_ctor_set(v_reuseFailAlloc_4372_, 5, v_maxRecDepth_4340_);
lean_ctor_set(v_reuseFailAlloc_4372_, 6, v_ngen_4341_);
lean_ctor_set(v_reuseFailAlloc_4372_, 7, v_auxDeclNGen_4342_);
lean_ctor_set(v_reuseFailAlloc_4372_, 8, v_infoState_4343_);
lean_ctor_set(v_reuseFailAlloc_4372_, 9, v_traceState_4344_);
lean_ctor_set(v_reuseFailAlloc_4372_, 10, v_snapshotTasks_4345_);
lean_ctor_set(v_reuseFailAlloc_4372_, 11, v_prevLinterStates_4346_);
lean_ctor_set(v_reuseFailAlloc_4372_, 12, v_codeQualityEntryTasks_4347_);
v___x_4352_ = v_reuseFailAlloc_4372_;
goto v_reusejp_4351_;
}
v_reusejp_4351_:
{
lean_object* v___x_4353_; lean_object* v___x_4354_; lean_object* v___x_4355_; 
v___x_4353_ = lean_st_ref_put(v___y_4291_, v___x_4352_);
v___x_4354_ = l_List_reverse___redArg(v_traceMsgs_4331_);
v___x_4355_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__50(v___x_4354_, v___y_4290_, v___y_4291_);
if (lean_obj_tag(v___x_4355_) == 0)
{
lean_object* v___x_4357_; uint8_t v_isShared_4358_; uint8_t v_isSharedCheck_4362_; 
v_isSharedCheck_4362_ = !lean_is_exclusive(v___x_4355_);
if (v_isSharedCheck_4362_ == 0)
{
lean_object* v_unused_4363_; 
v_unused_4363_ = lean_ctor_get(v___x_4355_, 0);
lean_dec(v_unused_4363_);
v___x_4357_ = v___x_4355_;
v_isShared_4358_ = v_isSharedCheck_4362_;
goto v_resetjp_4356_;
}
else
{
lean_dec(v___x_4355_);
v___x_4357_ = lean_box(0);
v_isShared_4358_ = v_isSharedCheck_4362_;
goto v_resetjp_4356_;
}
v_resetjp_4356_:
{
lean_object* v___x_4360_; 
if (v_isShared_4358_ == 0)
{
lean_ctor_set(v___x_4357_, 0, v_a_4329_);
v___x_4360_ = v___x_4357_;
goto v_reusejp_4359_;
}
else
{
lean_object* v_reuseFailAlloc_4361_; 
v_reuseFailAlloc_4361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4361_, 0, v_a_4329_);
v___x_4360_ = v_reuseFailAlloc_4361_;
goto v_reusejp_4359_;
}
v_reusejp_4359_:
{
return v___x_4360_;
}
}
}
else
{
lean_object* v_a_4364_; lean_object* v___x_4366_; uint8_t v_isShared_4367_; uint8_t v_isSharedCheck_4371_; 
lean_dec(v_a_4329_);
v_a_4364_ = lean_ctor_get(v___x_4355_, 0);
v_isSharedCheck_4371_ = !lean_is_exclusive(v___x_4355_);
if (v_isSharedCheck_4371_ == 0)
{
v___x_4366_ = v___x_4355_;
v_isShared_4367_ = v_isSharedCheck_4371_;
goto v_resetjp_4365_;
}
else
{
lean_inc(v_a_4364_);
lean_dec(v___x_4355_);
v___x_4366_ = lean_box(0);
v_isShared_4367_ = v_isSharedCheck_4371_;
goto v_resetjp_4365_;
}
v_resetjp_4365_:
{
lean_object* v___x_4369_; 
if (v_isShared_4367_ == 0)
{
v___x_4369_ = v___x_4366_;
goto v_reusejp_4368_;
}
else
{
lean_object* v_reuseFailAlloc_4370_; 
v_reuseFailAlloc_4370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4370_, 0, v_a_4364_);
v___x_4369_ = v_reuseFailAlloc_4370_;
goto v_reusejp_4368_;
}
v_reusejp_4368_:
{
return v___x_4369_;
}
}
}
}
}
}
else
{
lean_object* v_a_4375_; lean_object* v___x_4377_; uint8_t v_isShared_4378_; uint8_t v_isSharedCheck_4382_; 
lean_dec(v_traceMsgs_4331_);
lean_dec(v_macroScope_4330_);
lean_dec(v_a_4329_);
v_a_4375_ = lean_ctor_get(v___x_4334_, 0);
v_isSharedCheck_4382_ = !lean_is_exclusive(v___x_4334_);
if (v_isSharedCheck_4382_ == 0)
{
v___x_4377_ = v___x_4334_;
v_isShared_4378_ = v_isSharedCheck_4382_;
goto v_resetjp_4376_;
}
else
{
lean_inc(v_a_4375_);
lean_dec(v___x_4334_);
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
lean_object* v_a_4383_; 
v_a_4383_ = lean_ctor_get(v___x_4327_, 0);
lean_inc(v_a_4383_);
lean_dec_ref_known(v___x_4327_, 2);
if (lean_obj_tag(v_a_4383_) == 0)
{
lean_object* v_a_4384_; lean_object* v_a_4385_; lean_object* v___x_4386_; uint8_t v___x_4387_; 
v_a_4384_ = lean_ctor_get(v_a_4383_, 0);
lean_inc(v_a_4384_);
v_a_4385_ = lean_ctor_get(v_a_4383_, 1);
lean_inc_ref(v_a_4385_);
lean_dec_ref_known(v_a_4383_, 2);
v___x_4386_ = ((lean_object*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___closed__0));
v___x_4387_ = lean_string_dec_eq(v_a_4385_, v___x_4386_);
if (v___x_4387_ == 0)
{
lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_4390_; 
v___x_4388_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4388_, 0, v_a_4385_);
v___x_4389_ = l_Lean_MessageData_ofFormat(v___x_4388_);
v___x_4390_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_a_4384_, v___x_4389_, v___y_4290_, v___y_4291_);
lean_dec(v_a_4384_);
return v___x_4390_;
}
else
{
lean_object* v___x_4391_; 
lean_dec_ref(v_a_4385_);
v___x_4391_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg(v_a_4384_);
return v___x_4391_;
}
}
else
{
lean_object* v___x_4392_; 
v___x_4392_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg();
return v___x_4392_;
}
}
}
}
else
{
lean_object* v_a_4396_; lean_object* v___x_4398_; uint8_t v_isShared_4399_; uint8_t v_isSharedCheck_4403_; 
lean_dec(v_a_4313_);
lean_dec_ref_known(v_methods_4311_, 5);
lean_dec_ref(v_x_4289_);
v_a_4396_ = lean_ctor_get(v___x_4314_, 0);
v_isSharedCheck_4403_ = !lean_is_exclusive(v___x_4314_);
if (v_isSharedCheck_4403_ == 0)
{
v___x_4398_ = v___x_4314_;
v_isShared_4399_ = v_isSharedCheck_4403_;
goto v_resetjp_4397_;
}
else
{
lean_inc(v_a_4396_);
lean_dec(v___x_4314_);
v___x_4398_ = lean_box(0);
v_isShared_4399_ = v_isSharedCheck_4403_;
goto v_resetjp_4397_;
}
v_resetjp_4397_:
{
lean_object* v___x_4401_; 
if (v_isShared_4399_ == 0)
{
v___x_4401_ = v___x_4398_;
goto v_reusejp_4400_;
}
else
{
lean_object* v_reuseFailAlloc_4402_; 
v_reuseFailAlloc_4402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4402_, 0, v_a_4396_);
v___x_4401_ = v_reuseFailAlloc_4402_;
goto v_reusejp_4400_;
}
v_reusejp_4400_:
{
return v___x_4401_;
}
}
}
}
else
{
lean_object* v_a_4404_; lean_object* v___x_4406_; uint8_t v_isShared_4407_; uint8_t v_isSharedCheck_4411_; 
lean_dec_ref_known(v_methods_4311_, 5);
lean_dec_ref(v_x_4289_);
v_a_4404_ = lean_ctor_get(v___x_4312_, 0);
v_isSharedCheck_4411_ = !lean_is_exclusive(v___x_4312_);
if (v_isSharedCheck_4411_ == 0)
{
v___x_4406_ = v___x_4312_;
v_isShared_4407_ = v_isSharedCheck_4411_;
goto v_resetjp_4405_;
}
else
{
lean_inc(v_a_4404_);
lean_dec(v___x_4312_);
v___x_4406_ = lean_box(0);
v_isShared_4407_ = v_isSharedCheck_4411_;
goto v_resetjp_4405_;
}
v_resetjp_4405_:
{
lean_object* v___x_4409_; 
if (v_isShared_4407_ == 0)
{
v___x_4409_ = v___x_4406_;
goto v_reusejp_4408_;
}
else
{
lean_object* v_reuseFailAlloc_4410_; 
v_reuseFailAlloc_4410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4410_, 0, v_a_4404_);
v___x_4409_ = v_reuseFailAlloc_4410_;
goto v_reusejp_4408_;
}
v_reusejp_4408_:
{
return v___x_4409_;
}
}
}
}
else
{
lean_object* v_a_4412_; lean_object* v___x_4414_; uint8_t v_isShared_4415_; uint8_t v_isSharedCheck_4419_; 
lean_dec_ref(v___f_4305_);
lean_dec(v_currNamespace_4304_);
lean_dec_ref(v_opts_4301_);
lean_dec_ref(v___f_4296_);
lean_dec_ref(v___f_4295_);
lean_dec_ref(v_env_4294_);
lean_dec_ref(v_x_4289_);
v_a_4412_ = lean_ctor_get(v___x_4306_, 0);
v_isSharedCheck_4419_ = !lean_is_exclusive(v___x_4306_);
if (v_isSharedCheck_4419_ == 0)
{
v___x_4414_ = v___x_4306_;
v_isShared_4415_ = v_isSharedCheck_4419_;
goto v_resetjp_4413_;
}
else
{
lean_inc(v_a_4412_);
lean_dec(v___x_4306_);
v___x_4414_ = lean_box(0);
v_isShared_4415_ = v_isSharedCheck_4419_;
goto v_resetjp_4413_;
}
v_resetjp_4413_:
{
lean_object* v___x_4417_; 
if (v_isShared_4415_ == 0)
{
v___x_4417_ = v___x_4414_;
goto v_reusejp_4416_;
}
else
{
lean_object* v_reuseFailAlloc_4418_; 
v_reuseFailAlloc_4418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4418_, 0, v_a_4412_);
v___x_4417_ = v_reuseFailAlloc_4418_;
goto v_reusejp_4416_;
}
v_reusejp_4416_:
{
return v___x_4417_;
}
}
}
}
else
{
lean_object* v_a_4420_; lean_object* v___x_4422_; uint8_t v_isShared_4423_; uint8_t v_isSharedCheck_4427_; 
lean_dec_ref(v_opts_4301_);
lean_dec_ref(v___f_4296_);
lean_dec_ref(v___f_4295_);
lean_dec_ref(v_env_4294_);
lean_dec_ref(v_x_4289_);
v_a_4420_ = lean_ctor_get(v___x_4302_, 0);
v_isSharedCheck_4427_ = !lean_is_exclusive(v___x_4302_);
if (v_isSharedCheck_4427_ == 0)
{
v___x_4422_ = v___x_4302_;
v_isShared_4423_ = v_isSharedCheck_4427_;
goto v_resetjp_4421_;
}
else
{
lean_inc(v_a_4420_);
lean_dec(v___x_4302_);
v___x_4422_ = lean_box(0);
v_isShared_4423_ = v_isSharedCheck_4427_;
goto v_resetjp_4421_;
}
v_resetjp_4421_:
{
lean_object* v___x_4425_; 
if (v_isShared_4423_ == 0)
{
v___x_4425_ = v___x_4422_;
goto v_reusejp_4424_;
}
else
{
lean_object* v_reuseFailAlloc_4426_; 
v_reuseFailAlloc_4426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4426_, 0, v_a_4420_);
v___x_4425_ = v_reuseFailAlloc_4426_;
goto v_reusejp_4424_;
}
v_reusejp_4424_:
{
return v___x_4425_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___boxed(lean_object* v_x_4428_, lean_object* v___y_4429_, lean_object* v___y_4430_, lean_object* v___y_4431_){
_start:
{
lean_object* v_res_4432_; 
v_res_4432_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg(v_x_4428_, v___y_4429_, v___y_4430_);
lean_dec(v___y_4430_);
lean_dec_ref(v___y_4429_);
return v_res_4432_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__1(void){
_start:
{
lean_object* v___x_4434_; lean_object* v___x_4435_; 
v___x_4434_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__0));
v___x_4435_ = l_Lean_stringToMessageData(v___x_4434_);
return v___x_4435_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__3(void){
_start:
{
lean_object* v___x_4437_; lean_object* v___x_4438_; 
v___x_4437_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__2));
v___x_4438_ = l_Lean_stringToMessageData(v___x_4437_);
return v___x_4438_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__5(void){
_start:
{
lean_object* v___x_4440_; lean_object* v___x_4441_; 
v___x_4440_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__4));
v___x_4441_ = l_Lean_stringToMessageData(v___x_4440_);
return v___x_4441_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__7(void){
_start:
{
lean_object* v___x_4443_; lean_object* v___x_4444_; 
v___x_4443_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__6));
v___x_4444_ = l_Lean_stringToMessageData(v___x_4443_);
return v___x_4444_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__9(void){
_start:
{
lean_object* v___x_4446_; lean_object* v___x_4447_; 
v___x_4446_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__8));
v___x_4447_ = l_Lean_stringToMessageData(v___x_4446_);
return v___x_4447_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__14(void){
_start:
{
lean_object* v___x_4456_; lean_object* v___x_4457_; 
v___x_4456_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__13));
v___x_4457_ = l_Lean_stringToMessageData(v___x_4456_);
return v___x_4457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1(lean_object* v___x_4458_, lean_object* v_attrInstance_4459_, lean_object* v___f_4460_, lean_object* v___x_4461_, lean_object* v___x_4462_, lean_object* v___x_4463_, lean_object* v___y_4464_, lean_object* v___y_4465_){
_start:
{
lean_object* v___x_4467_; 
v___x_4467_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg(v___x_4458_, v___y_4464_, v___y_4465_);
if (lean_obj_tag(v___x_4467_) == 0)
{
lean_object* v_a_4468_; lean_object* v___x_4469_; lean_object* v_attr_4470_; lean_object* v___x_4471_; lean_object* v___x_4472_; 
v_a_4468_ = lean_ctor_get(v___x_4467_, 0);
lean_inc(v_a_4468_);
lean_dec_ref_known(v___x_4467_, 1);
v___x_4469_ = lean_unsigned_to_nat(1u);
v_attr_4470_ = l_Lean_Syntax_getArg(v_attrInstance_4459_, v___x_4469_);
v___x_4471_ = lean_alloc_closure((void*)(l_Lean_expandMacros), 4, 2);
lean_closure_set(v___x_4471_, 0, v_attr_4470_);
lean_closure_set(v___x_4471_, 1, v___f_4460_);
v___x_4472_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg(v___x_4471_, v___y_4464_, v___y_4465_);
if (lean_obj_tag(v___x_4472_) == 0)
{
lean_object* v_a_4473_; lean_object* v___x_4475_; uint8_t v_isShared_4476_; uint8_t v_isSharedCheck_4578_; 
v_a_4473_ = lean_ctor_get(v___x_4472_, 0);
v_isSharedCheck_4578_ = !lean_is_exclusive(v___x_4472_);
if (v_isSharedCheck_4578_ == 0)
{
v___x_4475_ = v___x_4472_;
v_isShared_4476_ = v_isSharedCheck_4578_;
goto v_resetjp_4474_;
}
else
{
lean_inc(v_a_4473_);
lean_dec(v___x_4472_);
v___x_4475_ = lean_box(0);
v_isShared_4476_ = v_isSharedCheck_4578_;
goto v_resetjp_4474_;
}
v_resetjp_4474_:
{
lean_object* v___y_4478_; uint8_t v___y_4485_; lean_object* v___y_4486_; lean_object* v___y_4487_; lean_object* v___y_4488_; lean_object* v___y_4489_; lean_object* v_attrName_4500_; lean_object* v___y_4501_; lean_object* v___y_4502_; lean_object* v___x_4559_; lean_object* v___x_4560_; uint8_t v___x_4561_; 
lean_inc(v_a_4473_);
v___x_4559_ = l_Lean_Syntax_getKind(v_a_4473_);
v___x_4560_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__12));
v___x_4561_ = lean_name_eq(v___x_4559_, v___x_4560_);
if (v___x_4561_ == 0)
{
if (lean_obj_tag(v___x_4559_) == 1)
{
lean_object* v_str_4562_; lean_object* v___x_4563_; lean_object* v___x_4564_; 
v_str_4562_ = lean_ctor_get(v___x_4559_, 1);
lean_inc_ref(v_str_4562_);
lean_dec_ref_known(v___x_4559_, 2);
v___x_4563_ = lean_box(0);
v___x_4564_ = l_Lean_Name_str___override(v___x_4563_, v_str_4562_);
v_attrName_4500_ = v___x_4564_;
v___y_4501_ = v___y_4464_;
v___y_4502_ = v___y_4465_;
goto v___jp_4499_;
}
else
{
lean_object* v___x_4565_; lean_object* v___x_4566_; lean_object* v_a_4567_; lean_object* v___x_4569_; uint8_t v_isShared_4570_; uint8_t v_isSharedCheck_4574_; 
lean_dec(v___x_4559_);
lean_del_object(v___x_4475_);
lean_dec(v_a_4468_);
lean_dec(v___x_4461_);
v___x_4565_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__14, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__14_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__14);
v___x_4566_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_a_4473_, v___x_4565_, v___y_4464_, v___y_4465_);
lean_dec(v_a_4473_);
v_a_4567_ = lean_ctor_get(v___x_4566_, 0);
v_isSharedCheck_4574_ = !lean_is_exclusive(v___x_4566_);
if (v_isSharedCheck_4574_ == 0)
{
v___x_4569_ = v___x_4566_;
v_isShared_4570_ = v_isSharedCheck_4574_;
goto v_resetjp_4568_;
}
else
{
lean_inc(v_a_4567_);
lean_dec(v___x_4566_);
v___x_4569_ = lean_box(0);
v_isShared_4570_ = v_isSharedCheck_4574_;
goto v_resetjp_4568_;
}
v_resetjp_4568_:
{
lean_object* v___x_4572_; 
if (v_isShared_4570_ == 0)
{
v___x_4572_ = v___x_4569_;
goto v_reusejp_4571_;
}
else
{
lean_object* v_reuseFailAlloc_4573_; 
v_reuseFailAlloc_4573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4573_, 0, v_a_4567_);
v___x_4572_ = v_reuseFailAlloc_4573_;
goto v_reusejp_4571_;
}
v_reusejp_4571_:
{
return v___x_4572_;
}
}
}
}
else
{
lean_object* v___x_4575_; lean_object* v___x_4576_; lean_object* v___x_4577_; 
lean_dec(v___x_4559_);
v___x_4575_ = l_Lean_Syntax_getArg(v_a_4473_, v___x_4463_);
v___x_4576_ = l_Lean_Syntax_getId(v___x_4575_);
lean_dec(v___x_4575_);
v___x_4577_ = l_Lean_Name_eraseMacroScopes(v___x_4576_);
lean_dec(v___x_4576_);
v_attrName_4500_ = v___x_4577_;
v___y_4501_ = v___y_4464_;
v___y_4502_ = v___y_4465_;
goto v___jp_4499_;
}
v___jp_4477_:
{
lean_object* v___x_4479_; uint8_t v___x_4480_; lean_object* v___x_4482_; 
v___x_4479_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4479_, 0, v___y_4478_);
lean_ctor_set(v___x_4479_, 1, v_a_4473_);
v___x_4480_ = lean_unbox(v_a_4468_);
lean_dec(v_a_4468_);
lean_ctor_set_uint8(v___x_4479_, sizeof(void*)*2, v___x_4480_);
if (v_isShared_4476_ == 0)
{
lean_ctor_set(v___x_4475_, 0, v___x_4479_);
v___x_4482_ = v___x_4475_;
goto v_reusejp_4481_;
}
else
{
lean_object* v_reuseFailAlloc_4483_; 
v_reuseFailAlloc_4483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4483_, 0, v___x_4479_);
v___x_4482_ = v_reuseFailAlloc_4483_;
goto v_reusejp_4481_;
}
v_reusejp_4481_:
{
return v___x_4482_;
}
}
v___jp_4484_:
{
lean_object* v___x_4490_; 
v___x_4490_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41(v___y_4486_, v___y_4485_, v___y_4488_, v___y_4489_);
if (lean_obj_tag(v___x_4490_) == 0)
{
lean_dec_ref_known(v___x_4490_, 1);
v___y_4478_ = v___y_4487_;
goto v___jp_4477_;
}
else
{
lean_object* v_a_4491_; lean_object* v___x_4493_; uint8_t v_isShared_4494_; uint8_t v_isSharedCheck_4498_; 
lean_dec(v___y_4487_);
lean_del_object(v___x_4475_);
lean_dec(v_a_4473_);
lean_dec(v_a_4468_);
v_a_4491_ = lean_ctor_get(v___x_4490_, 0);
v_isSharedCheck_4498_ = !lean_is_exclusive(v___x_4490_);
if (v_isSharedCheck_4498_ == 0)
{
v___x_4493_ = v___x_4490_;
v_isShared_4494_ = v_isSharedCheck_4498_;
goto v_resetjp_4492_;
}
else
{
lean_inc(v_a_4491_);
lean_dec(v___x_4490_);
v___x_4493_ = lean_box(0);
v_isShared_4494_ = v_isSharedCheck_4498_;
goto v_resetjp_4492_;
}
v_resetjp_4492_:
{
lean_object* v___x_4496_; 
if (v_isShared_4494_ == 0)
{
v___x_4496_ = v___x_4493_;
goto v_reusejp_4495_;
}
else
{
lean_object* v_reuseFailAlloc_4497_; 
v_reuseFailAlloc_4497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4497_, 0, v_a_4491_);
v___x_4496_ = v_reuseFailAlloc_4497_;
goto v_reusejp_4495_;
}
v_reusejp_4495_:
{
return v___x_4496_;
}
}
}
}
v___jp_4499_:
{
lean_object* v___x_4503_; lean_object* v_env_4504_; lean_object* v___x_4505_; 
v___x_4503_ = lean_st_ref_get(v___y_4502_);
v_env_4504_ = lean_ctor_get(v___x_4503_, 0);
lean_inc_ref(v_env_4504_);
lean_dec(v___x_4503_);
lean_inc(v_attrName_4500_);
v___x_4505_ = l_Lean_getAttributeImpl(v_env_4504_, v_attrName_4500_);
if (lean_obj_tag(v___x_4505_) == 1)
{
lean_object* v___x_4506_; lean_object* v_env_4507_; lean_object* v___x_4508_; 
lean_dec_ref_known(v___x_4505_, 1);
v___x_4506_ = lean_st_ref_get(v___y_4502_);
v_env_4507_ = lean_ctor_get(v___x_4506_, 0);
lean_inc_ref(v_env_4507_);
lean_dec(v___x_4506_);
lean_inc(v_attrName_4500_);
v___x_4508_ = l_Lean_getAttributeImpl(v_env_4507_, v_attrName_4500_);
if (lean_obj_tag(v___x_4508_) == 1)
{
lean_object* v_a_4509_; lean_object* v___x_4510_; lean_object* v_toAttributeImplCore_4511_; lean_object* v_env_4512_; lean_object* v_ref_4513_; lean_object* v___x_4514_; lean_object* v___x_4515_; 
v_a_4509_ = lean_ctor_get(v___x_4508_, 0);
lean_inc(v_a_4509_);
lean_dec_ref_known(v___x_4508_, 1);
v___x_4510_ = lean_st_ref_get(v___y_4502_);
v_toAttributeImplCore_4511_ = lean_ctor_get(v_a_4509_, 0);
lean_inc_ref(v_toAttributeImplCore_4511_);
lean_dec(v_a_4509_);
v_env_4512_ = lean_ctor_get(v___x_4510_, 0);
lean_inc_ref(v_env_4512_);
lean_dec(v___x_4510_);
v_ref_4513_ = lean_ctor_get(v_toAttributeImplCore_4511_, 0);
lean_inc_n(v_ref_4513_, 2);
lean_dec_ref(v_toAttributeImplCore_4511_);
v___x_4514_ = l_Lean_regularInitAttr;
v___x_4515_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v___x_4461_, v___x_4514_, v_env_4512_, v_ref_4513_);
if (lean_obj_tag(v___x_4515_) == 0)
{
lean_dec(v_ref_4513_);
v___y_4478_ = v_attrName_4500_;
goto v___jp_4477_;
}
else
{
uint8_t v___x_4516_; lean_object* v___x_4517_; lean_object* v_env_4518_; lean_object* v___x_4519_; 
lean_dec_ref_known(v___x_4515_, 1);
v___x_4516_ = 1;
v___x_4517_ = lean_st_ref_get(v___y_4502_);
v_env_4518_ = lean_ctor_get(v___x_4517_, 0);
lean_inc_ref(v_env_4518_);
lean_dec(v___x_4517_);
v___x_4519_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_4518_, v_ref_4513_);
lean_dec_ref(v_env_4518_);
if (lean_obj_tag(v___x_4519_) == 1)
{
lean_object* v_val_4520_; lean_object* v___x_4521_; lean_object* v_env_4522_; lean_object* v___x_4523_; lean_object* v_modules_4524_; lean_object* v___x_4525_; uint8_t v___x_4526_; 
v_val_4520_ = lean_ctor_get(v___x_4519_, 0);
lean_inc(v_val_4520_);
lean_dec_ref_known(v___x_4519_, 1);
v___x_4521_ = lean_st_ref_get(v___y_4502_);
v_env_4522_ = lean_ctor_get(v___x_4521_, 0);
lean_inc_ref(v_env_4522_);
lean_dec(v___x_4521_);
v___x_4523_ = l_Lean_Environment_header(v_env_4522_);
lean_dec_ref(v_env_4522_);
v_modules_4524_ = lean_ctor_get(v___x_4523_, 3);
lean_inc_ref(v_modules_4524_);
lean_dec_ref(v___x_4523_);
v___x_4525_ = lean_array_get_size(v_modules_4524_);
v___x_4526_ = lean_nat_dec_lt(v_val_4520_, v___x_4525_);
if (v___x_4526_ == 0)
{
lean_dec_ref(v_modules_4524_);
lean_dec(v_val_4520_);
v___y_4485_ = v___x_4516_;
v___y_4486_ = v_ref_4513_;
v___y_4487_ = v_attrName_4500_;
v___y_4488_ = v___y_4501_;
v___y_4489_ = v___y_4502_;
goto v___jp_4484_;
}
else
{
lean_object* v___x_4527_; uint8_t v_hasData_4528_; 
v___x_4527_ = lean_array_fget_borrowed(v_modules_4524_, v_val_4520_);
v_hasData_4528_ = lean_ctor_get_uint8(v___x_4527_, sizeof(void*)*1 + 1);
if (v_hasData_4528_ == 0)
{
lean_object* v___x_4529_; lean_object* v_toImport_4530_; lean_object* v_module_4531_; lean_object* v___x_4532_; lean_object* v___x_4533_; lean_object* v___x_4534_; lean_object* v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; lean_object* v___x_4538_; lean_object* v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; lean_object* v___x_4542_; lean_object* v___x_4543_; lean_object* v___x_4544_; lean_object* v_a_4545_; lean_object* v___x_4547_; uint8_t v_isShared_4548_; uint8_t v_isSharedCheck_4552_; 
lean_dec(v_ref_4513_);
lean_del_object(v___x_4475_);
lean_dec(v_a_4473_);
lean_dec(v_a_4468_);
v___x_4529_ = lean_array_get(v___x_4462_, v_modules_4524_, v_val_4520_);
lean_dec(v_val_4520_);
lean_dec_ref(v_modules_4524_);
v_toImport_4530_ = lean_ctor_get(v___x_4529_, 0);
lean_inc_ref(v_toImport_4530_);
lean_dec(v___x_4529_);
v_module_4531_ = lean_ctor_get(v_toImport_4530_, 0);
lean_inc(v_module_4531_);
lean_dec_ref(v_toImport_4530_);
v___x_4532_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__1, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__1_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__1);
v___x_4533_ = l_Lean_MessageData_ofName(v_attrName_4500_);
v___x_4534_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4534_, 0, v___x_4532_);
lean_ctor_set(v___x_4534_, 1, v___x_4533_);
v___x_4535_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__3, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__3_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__3);
v___x_4536_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4536_, 0, v___x_4534_);
lean_ctor_set(v___x_4536_, 1, v___x_4535_);
v___x_4537_ = l_Lean_MessageData_ofName(v_module_4531_);
lean_inc_ref(v___x_4537_);
v___x_4538_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4538_, 0, v___x_4536_);
lean_ctor_set(v___x_4538_, 1, v___x_4537_);
v___x_4539_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__5, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__5_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__5);
v___x_4540_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4540_, 0, v___x_4538_);
lean_ctor_set(v___x_4540_, 1, v___x_4539_);
v___x_4541_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4541_, 0, v___x_4540_);
lean_ctor_set(v___x_4541_, 1, v___x_4537_);
v___x_4542_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14);
v___x_4543_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4543_, 0, v___x_4541_);
lean_ctor_set(v___x_4543_, 1, v___x_4542_);
v___x_4544_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(v___x_4543_, v___y_4501_, v___y_4502_);
v_a_4545_ = lean_ctor_get(v___x_4544_, 0);
v_isSharedCheck_4552_ = !lean_is_exclusive(v___x_4544_);
if (v_isSharedCheck_4552_ == 0)
{
v___x_4547_ = v___x_4544_;
v_isShared_4548_ = v_isSharedCheck_4552_;
goto v_resetjp_4546_;
}
else
{
lean_inc(v_a_4545_);
lean_dec(v___x_4544_);
v___x_4547_ = lean_box(0);
v_isShared_4548_ = v_isSharedCheck_4552_;
goto v_resetjp_4546_;
}
v_resetjp_4546_:
{
lean_object* v___x_4550_; 
if (v_isShared_4548_ == 0)
{
v___x_4550_ = v___x_4547_;
goto v_reusejp_4549_;
}
else
{
lean_object* v_reuseFailAlloc_4551_; 
v_reuseFailAlloc_4551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4551_, 0, v_a_4545_);
v___x_4550_ = v_reuseFailAlloc_4551_;
goto v_reusejp_4549_;
}
v_reusejp_4549_:
{
return v___x_4550_;
}
}
}
else
{
lean_dec_ref(v_modules_4524_);
lean_dec(v_val_4520_);
v___y_4485_ = v___x_4516_;
v___y_4486_ = v_ref_4513_;
v___y_4487_ = v_attrName_4500_;
v___y_4488_ = v___y_4501_;
v___y_4489_ = v___y_4502_;
goto v___jp_4484_;
}
}
}
else
{
lean_dec(v___x_4519_);
v___y_4485_ = v___x_4516_;
v___y_4486_ = v_ref_4513_;
v___y_4487_ = v_attrName_4500_;
v___y_4488_ = v___y_4501_;
v___y_4489_ = v___y_4502_;
goto v___jp_4484_;
}
}
}
else
{
lean_dec_ref(v___x_4508_);
lean_dec(v___x_4461_);
v___y_4478_ = v_attrName_4500_;
goto v___jp_4477_;
}
}
else
{
lean_object* v___x_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; lean_object* v___x_4557_; lean_object* v___x_4558_; 
lean_dec_ref(v___x_4505_);
lean_del_object(v___x_4475_);
lean_dec(v_a_4473_);
lean_dec(v_a_4468_);
lean_dec(v___x_4461_);
v___x_4553_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__7, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__7_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__7);
v___x_4554_ = l_Lean_MessageData_ofName(v_attrName_4500_);
v___x_4555_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4555_, 0, v___x_4553_);
lean_ctor_set(v___x_4555_, 1, v___x_4554_);
v___x_4556_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__9, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__9_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__9);
v___x_4557_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4557_, 0, v___x_4555_);
lean_ctor_set(v___x_4557_, 1, v___x_4556_);
v___x_4558_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(v___x_4557_, v___y_4501_, v___y_4502_);
return v___x_4558_;
}
}
}
}
else
{
lean_object* v_a_4579_; lean_object* v___x_4581_; uint8_t v_isShared_4582_; uint8_t v_isSharedCheck_4586_; 
lean_dec(v_a_4468_);
lean_dec(v___x_4461_);
v_a_4579_ = lean_ctor_get(v___x_4472_, 0);
v_isSharedCheck_4586_ = !lean_is_exclusive(v___x_4472_);
if (v_isSharedCheck_4586_ == 0)
{
v___x_4581_ = v___x_4472_;
v_isShared_4582_ = v_isSharedCheck_4586_;
goto v_resetjp_4580_;
}
else
{
lean_inc(v_a_4579_);
lean_dec(v___x_4472_);
v___x_4581_ = lean_box(0);
v_isShared_4582_ = v_isSharedCheck_4586_;
goto v_resetjp_4580_;
}
v_resetjp_4580_:
{
lean_object* v___x_4584_; 
if (v_isShared_4582_ == 0)
{
v___x_4584_ = v___x_4581_;
goto v_reusejp_4583_;
}
else
{
lean_object* v_reuseFailAlloc_4585_; 
v_reuseFailAlloc_4585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4585_, 0, v_a_4579_);
v___x_4584_ = v_reuseFailAlloc_4585_;
goto v_reusejp_4583_;
}
v_reusejp_4583_:
{
return v___x_4584_;
}
}
}
}
else
{
lean_object* v_a_4587_; lean_object* v___x_4589_; uint8_t v_isShared_4590_; uint8_t v_isSharedCheck_4594_; 
lean_dec(v___x_4461_);
lean_dec_ref(v___f_4460_);
v_a_4587_ = lean_ctor_get(v___x_4467_, 0);
v_isSharedCheck_4594_ = !lean_is_exclusive(v___x_4467_);
if (v_isSharedCheck_4594_ == 0)
{
v___x_4589_ = v___x_4467_;
v_isShared_4590_ = v_isSharedCheck_4594_;
goto v_resetjp_4588_;
}
else
{
lean_inc(v_a_4587_);
lean_dec(v___x_4467_);
v___x_4589_ = lean_box(0);
v_isShared_4590_ = v_isSharedCheck_4594_;
goto v_resetjp_4588_;
}
v_resetjp_4588_:
{
lean_object* v___x_4592_; 
if (v_isShared_4590_ == 0)
{
v___x_4592_ = v___x_4589_;
goto v_reusejp_4591_;
}
else
{
lean_object* v_reuseFailAlloc_4593_; 
v_reuseFailAlloc_4593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4593_, 0, v_a_4587_);
v___x_4592_ = v_reuseFailAlloc_4593_;
goto v_reusejp_4591_;
}
v_reusejp_4591_:
{
return v___x_4592_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___boxed(lean_object* v___x_4595_, lean_object* v_attrInstance_4596_, lean_object* v___f_4597_, lean_object* v___x_4598_, lean_object* v___x_4599_, lean_object* v___x_4600_, lean_object* v___y_4601_, lean_object* v___y_4602_, lean_object* v___y_4603_){
_start:
{
lean_object* v_res_4604_; 
v_res_4604_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1(v___x_4595_, v_attrInstance_4596_, v___f_4597_, v___x_4598_, v___x_4599_, v___x_4600_, v___y_4601_, v___y_4602_);
lean_dec(v___y_4602_);
lean_dec_ref(v___y_4601_);
lean_dec(v___x_4600_);
lean_dec_ref(v___x_4599_);
lean_dec(v_attrInstance_4596_);
return v_res_4604_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___redArg(lean_object* v_x_4605_, uint8_t v_when_4606_, lean_object* v___y_4607_, lean_object* v___y_4608_){
_start:
{
if (v_when_4606_ == 0)
{
lean_object* v___x_4610_; 
lean_inc(v___y_4608_);
lean_inc_ref(v___y_4607_);
v___x_4610_ = lean_apply_3(v_x_4605_, v___y_4607_, v___y_4608_, lean_box(0));
return v___x_4610_;
}
else
{
uint8_t v___x_4611_; lean_object* v___x_4612_; 
v___x_4611_ = 0;
v___x_4612_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(v_x_4605_, v___x_4611_, v___y_4607_, v___y_4608_);
return v___x_4612_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___redArg___boxed(lean_object* v_x_4613_, lean_object* v_when_4614_, lean_object* v___y_4615_, lean_object* v___y_4616_, lean_object* v___y_4617_){
_start:
{
uint8_t v_when_boxed_4618_; lean_object* v_res_4619_; 
v_when_boxed_4618_ = lean_unbox(v_when_4614_);
v_res_4619_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___redArg(v_x_4613_, v_when_boxed_4618_, v___y_4615_, v___y_4616_);
lean_dec(v___y_4616_);
lean_dec_ref(v___y_4615_);
return v_res_4619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28(lean_object* v_attrInstance_4621_, lean_object* v___y_4622_, lean_object* v___y_4623_){
_start:
{
lean_object* v___f_4625_; lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___f_4631_; uint8_t v___x_4632_; lean_object* v___x_4633_; 
v___f_4625_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___closed__0));
v___x_4626_ = lean_box(0);
v___x_4627_ = l_Lean_instInhabitedEffectiveImport_default;
v___x_4628_ = lean_unsigned_to_nat(0u);
v___x_4629_ = l_Lean_Syntax_getArg(v_attrInstance_4621_, v___x_4628_);
v___x_4630_ = lean_alloc_closure((void*)(l_Lean_Elab_toAttributeKind___boxed), 3, 1);
lean_closure_set(v___x_4630_, 0, v___x_4629_);
v___f_4631_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___boxed), 9, 6);
lean_closure_set(v___f_4631_, 0, v___x_4630_);
lean_closure_set(v___f_4631_, 1, v_attrInstance_4621_);
lean_closure_set(v___f_4631_, 2, v___f_4625_);
lean_closure_set(v___f_4631_, 3, v___x_4626_);
lean_closure_set(v___f_4631_, 4, v___x_4627_);
lean_closure_set(v___f_4631_, 5, v___x_4628_);
v___x_4632_ = 1;
v___x_4633_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___redArg(v___f_4631_, v___x_4632_, v___y_4622_, v___y_4623_);
return v___x_4633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___boxed(lean_object* v_attrInstance_4634_, lean_object* v___y_4635_, lean_object* v___y_4636_, lean_object* v___y_4637_){
_start:
{
lean_object* v_res_4638_; 
v_res_4638_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28(v_attrInstance_4634_, v___y_4635_, v___y_4636_);
lean_dec(v___y_4636_);
lean_dec_ref(v___y_4635_);
return v_res_4638_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__29(lean_object* v_as_4639_, size_t v_sz_4640_, size_t v_i_4641_, lean_object* v_b_4642_, lean_object* v___y_4643_, lean_object* v___y_4644_){
_start:
{
lean_object* v_snd_4647_; lean_object* v_a_4652_; uint8_t v___x_4664_; 
v___x_4664_ = lean_usize_dec_lt(v_i_4641_, v_sz_4640_);
if (v___x_4664_ == 0)
{
lean_object* v___x_4665_; 
v___x_4665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4665_, 0, v_b_4642_);
return v___x_4665_;
}
else
{
lean_object* v_a_4666_; lean_object* v___x_4667_; 
v_a_4666_ = lean_array_uget_borrowed(v_as_4639_, v_i_4641_);
v___x_4667_ = l_Lean_Elab_Command_getRef___redArg(v___y_4643_);
if (lean_obj_tag(v___x_4667_) == 0)
{
lean_object* v_a_4668_; lean_object* v_fileName_4669_; lean_object* v_fileMap_4670_; lean_object* v_currRecDepth_4671_; lean_object* v_cmdPos_4672_; lean_object* v_macroStack_4673_; lean_object* v_quotContext_x3f_4674_; lean_object* v_currMacroScope_4675_; lean_object* v_snap_x3f_4676_; lean_object* v_cancelTk_x3f_4677_; uint8_t v_suppressElabErrors_4678_; lean_object* v_ref_4679_; lean_object* v___x_4680_; lean_object* v___x_4681_; 
v_a_4668_ = lean_ctor_get(v___x_4667_, 0);
lean_inc(v_a_4668_);
lean_dec_ref_known(v___x_4667_, 1);
v_fileName_4669_ = lean_ctor_get(v___y_4643_, 0);
v_fileMap_4670_ = lean_ctor_get(v___y_4643_, 1);
v_currRecDepth_4671_ = lean_ctor_get(v___y_4643_, 2);
v_cmdPos_4672_ = lean_ctor_get(v___y_4643_, 3);
v_macroStack_4673_ = lean_ctor_get(v___y_4643_, 4);
v_quotContext_x3f_4674_ = lean_ctor_get(v___y_4643_, 5);
v_currMacroScope_4675_ = lean_ctor_get(v___y_4643_, 6);
v_snap_x3f_4676_ = lean_ctor_get(v___y_4643_, 8);
v_cancelTk_x3f_4677_ = lean_ctor_get(v___y_4643_, 9);
v_suppressElabErrors_4678_ = lean_ctor_get_uint8(v___y_4643_, sizeof(void*)*10);
v_ref_4679_ = l_Lean_replaceRef(v_a_4666_, v_a_4668_);
lean_dec(v_a_4668_);
lean_inc(v_cancelTk_x3f_4677_);
lean_inc(v_snap_x3f_4676_);
lean_inc(v_currMacroScope_4675_);
lean_inc(v_quotContext_x3f_4674_);
lean_inc(v_macroStack_4673_);
lean_inc(v_cmdPos_4672_);
lean_inc(v_currRecDepth_4671_);
lean_inc_ref(v_fileMap_4670_);
lean_inc_ref(v_fileName_4669_);
v___x_4680_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_4680_, 0, v_fileName_4669_);
lean_ctor_set(v___x_4680_, 1, v_fileMap_4670_);
lean_ctor_set(v___x_4680_, 2, v_currRecDepth_4671_);
lean_ctor_set(v___x_4680_, 3, v_cmdPos_4672_);
lean_ctor_set(v___x_4680_, 4, v_macroStack_4673_);
lean_ctor_set(v___x_4680_, 5, v_quotContext_x3f_4674_);
lean_ctor_set(v___x_4680_, 6, v_currMacroScope_4675_);
lean_ctor_set(v___x_4680_, 7, v_ref_4679_);
lean_ctor_set(v___x_4680_, 8, v_snap_x3f_4676_);
lean_ctor_set(v___x_4680_, 9, v_cancelTk_x3f_4677_);
lean_ctor_set_uint8(v___x_4680_, sizeof(void*)*10, v_suppressElabErrors_4678_);
lean_inc(v_a_4666_);
v___x_4681_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28(v_a_4666_, v___x_4680_, v___y_4644_);
lean_dec_ref_known(v___x_4680_, 10);
if (lean_obj_tag(v___x_4681_) == 0)
{
lean_object* v_a_4682_; lean_object* v___x_4683_; 
v_a_4682_ = lean_ctor_get(v___x_4681_, 0);
lean_inc(v_a_4682_);
lean_dec_ref_known(v___x_4681_, 1);
v___x_4683_ = lean_array_push(v_b_4642_, v_a_4682_);
v_snd_4647_ = v___x_4683_;
goto v___jp_4646_;
}
else
{
lean_object* v_a_4684_; 
v_a_4684_ = lean_ctor_get(v___x_4681_, 0);
lean_inc(v_a_4684_);
lean_dec_ref_known(v___x_4681_, 1);
v_a_4652_ = v_a_4684_;
goto v___jp_4651_;
}
}
else
{
lean_object* v_a_4685_; 
v_a_4685_ = lean_ctor_get(v___x_4667_, 0);
lean_inc(v_a_4685_);
lean_dec_ref_known(v___x_4667_, 1);
v_a_4652_ = v_a_4685_;
goto v___jp_4651_;
}
}
v___jp_4646_:
{
size_t v___x_4648_; size_t v___x_4649_; 
v___x_4648_ = ((size_t)1ULL);
v___x_4649_ = lean_usize_add(v_i_4641_, v___x_4648_);
v_i_4641_ = v___x_4649_;
v_b_4642_ = v_snd_4647_;
goto _start;
}
v___jp_4651_:
{
uint8_t v___x_4653_; 
v___x_4653_ = l_Lean_Exception_isInterrupt(v_a_4652_);
if (v___x_4653_ == 0)
{
lean_object* v___x_4654_; 
v___x_4654_ = l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27(v_a_4652_, v___y_4643_, v___y_4644_);
if (lean_obj_tag(v___x_4654_) == 0)
{
lean_dec_ref_known(v___x_4654_, 1);
v_snd_4647_ = v_b_4642_;
goto v___jp_4646_;
}
else
{
lean_object* v_a_4655_; lean_object* v___x_4657_; uint8_t v_isShared_4658_; uint8_t v_isSharedCheck_4662_; 
lean_dec_ref(v_b_4642_);
v_a_4655_ = lean_ctor_get(v___x_4654_, 0);
v_isSharedCheck_4662_ = !lean_is_exclusive(v___x_4654_);
if (v_isSharedCheck_4662_ == 0)
{
v___x_4657_ = v___x_4654_;
v_isShared_4658_ = v_isSharedCheck_4662_;
goto v_resetjp_4656_;
}
else
{
lean_inc(v_a_4655_);
lean_dec(v___x_4654_);
v___x_4657_ = lean_box(0);
v_isShared_4658_ = v_isSharedCheck_4662_;
goto v_resetjp_4656_;
}
v_resetjp_4656_:
{
lean_object* v___x_4660_; 
if (v_isShared_4658_ == 0)
{
v___x_4660_ = v___x_4657_;
goto v_reusejp_4659_;
}
else
{
lean_object* v_reuseFailAlloc_4661_; 
v_reuseFailAlloc_4661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4661_, 0, v_a_4655_);
v___x_4660_ = v_reuseFailAlloc_4661_;
goto v_reusejp_4659_;
}
v_reusejp_4659_:
{
return v___x_4660_;
}
}
}
}
else
{
lean_object* v___x_4663_; 
lean_dec_ref(v_b_4642_);
v___x_4663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4663_, 0, v_a_4652_);
return v___x_4663_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__29___boxed(lean_object* v_as_4686_, lean_object* v_sz_4687_, lean_object* v_i_4688_, lean_object* v_b_4689_, lean_object* v___y_4690_, lean_object* v___y_4691_, lean_object* v___y_4692_){
_start:
{
size_t v_sz_boxed_4693_; size_t v_i_boxed_4694_; lean_object* v_res_4695_; 
v_sz_boxed_4693_ = lean_unbox_usize(v_sz_4687_);
lean_dec(v_sz_4687_);
v_i_boxed_4694_ = lean_unbox_usize(v_i_4688_);
lean_dec(v_i_4688_);
v_res_4695_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__29(v_as_4686_, v_sz_boxed_4693_, v_i_boxed_4694_, v_b_4689_, v___y_4690_, v___y_4691_);
lean_dec(v___y_4691_);
lean_dec_ref(v___y_4690_);
lean_dec_ref(v_as_4686_);
return v_res_4695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8(lean_object* v_attrInstances_4698_, lean_object* v___y_4699_, lean_object* v___y_4700_){
_start:
{
lean_object* v_attrs_4702_; size_t v_sz_4703_; size_t v___x_4704_; lean_object* v___x_4705_; 
v_attrs_4702_ = ((lean_object*)(l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8___closed__0));
v_sz_4703_ = lean_array_size(v_attrInstances_4698_);
v___x_4704_ = ((size_t)0ULL);
v___x_4705_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__29(v_attrInstances_4698_, v_sz_4703_, v___x_4704_, v_attrs_4702_, v___y_4699_, v___y_4700_);
return v___x_4705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8___boxed(lean_object* v_attrInstances_4706_, lean_object* v___y_4707_, lean_object* v___y_4708_, lean_object* v___y_4709_){
_start:
{
lean_object* v_res_4710_; 
v_res_4710_ = l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8(v_attrInstances_4706_, v___y_4707_, v___y_4708_);
lean_dec(v___y_4708_);
lean_dec_ref(v___y_4707_);
lean_dec_ref(v_attrInstances_4706_);
return v_res_4710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1(lean_object* v_stx_4711_, lean_object* v___y_4712_, lean_object* v___y_4713_){
_start:
{
lean_object* v___x_4715_; lean_object* v___x_4716_; lean_object* v___x_4717_; lean_object* v___x_4718_; 
v___x_4715_ = lean_unsigned_to_nat(1u);
v___x_4716_ = l_Lean_Syntax_getArg(v_stx_4711_, v___x_4715_);
v___x_4717_ = l_Lean_Syntax_getSepArgs(v___x_4716_);
lean_dec(v___x_4716_);
v___x_4718_ = l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8(v___x_4717_, v___y_4712_, v___y_4713_);
lean_dec_ref(v___x_4717_);
return v___x_4718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1___boxed(lean_object* v_stx_4719_, lean_object* v___y_4720_, lean_object* v___y_4721_, lean_object* v___y_4722_){
_start:
{
lean_object* v_res_4723_; 
v_res_4723_ = l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1(v_stx_4719_, v___y_4720_, v___y_4721_);
lean_dec(v___y_4721_);
lean_dec_ref(v___y_4720_);
lean_dec(v_stx_4719_);
return v_res_4723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___redArg(lean_object* v_o_4724_, lean_object* v___y_4725_){
_start:
{
lean_object* v___x_4727_; lean_object* v___x_4728_; lean_object* v_env_4729_; lean_object* v___x_4730_; lean_object* v_toEnvExtension_4731_; lean_object* v_asyncMode_4732_; lean_object* v___x_4733_; lean_object* v___x_4734_; lean_object* v_merged_4735_; lean_object* v___x_4737_; uint8_t v_isShared_4738_; uint8_t v_isSharedCheck_4743_; 
v___x_4727_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_4728_ = lean_st_ref_get(v___y_4725_);
v_env_4729_ = lean_ctor_get(v___x_4728_, 0);
lean_inc_ref(v_env_4729_);
lean_dec(v___x_4728_);
v___x_4730_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_4731_ = lean_ctor_get(v___x_4730_, 0);
v_asyncMode_4732_ = lean_ctor_get(v_toEnvExtension_4731_, 2);
v___x_4733_ = lean_box(0);
v___x_4734_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4727_, v___x_4730_, v_env_4729_, v_asyncMode_4732_, v___x_4733_);
v_merged_4735_ = lean_ctor_get(v___x_4734_, 0);
v_isSharedCheck_4743_ = !lean_is_exclusive(v___x_4734_);
if (v_isSharedCheck_4743_ == 0)
{
lean_object* v_unused_4744_; 
v_unused_4744_ = lean_ctor_get(v___x_4734_, 1);
lean_dec(v_unused_4744_);
v___x_4737_ = v___x_4734_;
v_isShared_4738_ = v_isSharedCheck_4743_;
goto v_resetjp_4736_;
}
else
{
lean_inc(v_merged_4735_);
lean_dec(v___x_4734_);
v___x_4737_ = lean_box(0);
v_isShared_4738_ = v_isSharedCheck_4743_;
goto v_resetjp_4736_;
}
v_resetjp_4736_:
{
lean_object* v___x_4740_; 
if (v_isShared_4738_ == 0)
{
lean_ctor_set(v___x_4737_, 1, v_merged_4735_);
lean_ctor_set(v___x_4737_, 0, v_o_4724_);
v___x_4740_ = v___x_4737_;
goto v_reusejp_4739_;
}
else
{
lean_object* v_reuseFailAlloc_4742_; 
v_reuseFailAlloc_4742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4742_, 0, v_o_4724_);
lean_ctor_set(v_reuseFailAlloc_4742_, 1, v_merged_4735_);
v___x_4740_ = v_reuseFailAlloc_4742_;
goto v_reusejp_4739_;
}
v_reusejp_4739_:
{
lean_object* v___x_4741_; 
v___x_4741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4741_, 0, v___x_4740_);
return v___x_4741_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___redArg___boxed(lean_object* v_o_4745_, lean_object* v___y_4746_, lean_object* v___y_4747_){
_start:
{
lean_object* v_res_4748_; 
v_res_4748_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___redArg(v_o_4745_, v___y_4746_);
lean_dec(v___y_4746_);
return v_res_4748_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23(lean_object* v___y_4749_, lean_object* v___y_4750_){
_start:
{
lean_object* v___x_4752_; lean_object* v___x_4753_; lean_object* v_scopes_4754_; lean_object* v___x_4755_; lean_object* v_opts_4756_; lean_object* v___x_4757_; 
v___x_4752_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_4753_ = lean_st_ref_get(v___y_4750_);
v_scopes_4754_ = lean_ctor_get(v___x_4753_, 2);
lean_inc(v_scopes_4754_);
lean_dec(v___x_4753_);
v___x_4755_ = l_List_head_x21___redArg(v___x_4752_, v_scopes_4754_);
lean_dec(v_scopes_4754_);
v_opts_4756_ = lean_ctor_get(v___x_4755_, 1);
lean_inc_ref(v_opts_4756_);
lean_dec(v___x_4755_);
v___x_4757_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___redArg(v_opts_4756_, v___y_4750_);
return v___x_4757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23___boxed(lean_object* v___y_4758_, lean_object* v___y_4759_, lean_object* v___y_4760_){
_start:
{
lean_object* v_res_4761_; 
v_res_4761_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23(v___y_4758_, v___y_4759_);
lean_dec(v___y_4759_);
lean_dec_ref(v___y_4758_);
return v_res_4761_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34(lean_object* v_ref_4762_, lean_object* v_msgData_4763_, lean_object* v___y_4764_, lean_object* v___y_4765_){
_start:
{
uint8_t v___x_4767_; uint8_t v___x_4768_; lean_object* v___x_4769_; 
v___x_4767_ = 1;
v___x_4768_ = 0;
v___x_4769_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40(v_ref_4762_, v_msgData_4763_, v___x_4767_, v___x_4768_, v___y_4764_, v___y_4765_);
return v___x_4769_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34___boxed(lean_object* v_ref_4770_, lean_object* v_msgData_4771_, lean_object* v___y_4772_, lean_object* v___y_4773_, lean_object* v___y_4774_){
_start:
{
lean_object* v_res_4775_; 
v_res_4775_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34(v_ref_4770_, v_msgData_4771_, v___y_4772_, v___y_4773_);
lean_dec(v___y_4773_);
lean_dec_ref(v___y_4772_);
lean_dec(v_ref_4770_);
return v_res_4775_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__1(void){
_start:
{
lean_object* v___x_4777_; lean_object* v___x_4778_; 
v___x_4777_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__0));
v___x_4778_ = l_Lean_stringToMessageData(v___x_4777_);
return v___x_4778_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__3(void){
_start:
{
lean_object* v___x_4780_; lean_object* v___x_4781_; 
v___x_4780_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__2));
v___x_4781_ = l_Lean_stringToMessageData(v___x_4780_);
return v___x_4781_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24(lean_object* v_linterOption_4782_, lean_object* v_stx_4783_, lean_object* v_msg_4784_, lean_object* v___y_4785_, lean_object* v___y_4786_){
_start:
{
lean_object* v_name_4788_; lean_object* v___x_4790_; uint8_t v_isShared_4791_; uint8_t v_isSharedCheck_4806_; 
v_name_4788_ = lean_ctor_get(v_linterOption_4782_, 0);
v_isSharedCheck_4806_ = !lean_is_exclusive(v_linterOption_4782_);
if (v_isSharedCheck_4806_ == 0)
{
lean_object* v_unused_4807_; 
v_unused_4807_ = lean_ctor_get(v_linterOption_4782_, 1);
lean_dec(v_unused_4807_);
v___x_4790_ = v_linterOption_4782_;
v_isShared_4791_ = v_isSharedCheck_4806_;
goto v_resetjp_4789_;
}
else
{
lean_inc(v_name_4788_);
lean_dec(v_linterOption_4782_);
v___x_4790_ = lean_box(0);
v_isShared_4791_ = v_isSharedCheck_4806_;
goto v_resetjp_4789_;
}
v_resetjp_4789_:
{
lean_object* v___x_4792_; lean_object* v___x_4793_; lean_object* v___x_4795_; 
v___x_4792_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__1, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__1_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__1);
lean_inc(v_name_4788_);
v___x_4793_ = l_Lean_MessageData_ofName(v_name_4788_);
if (v_isShared_4791_ == 0)
{
lean_ctor_set_tag(v___x_4790_, 7);
lean_ctor_set(v___x_4790_, 1, v___x_4793_);
lean_ctor_set(v___x_4790_, 0, v___x_4792_);
v___x_4795_ = v___x_4790_;
goto v_reusejp_4794_;
}
else
{
lean_object* v_reuseFailAlloc_4805_; 
v_reuseFailAlloc_4805_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4805_, 0, v___x_4792_);
lean_ctor_set(v_reuseFailAlloc_4805_, 1, v___x_4793_);
v___x_4795_ = v_reuseFailAlloc_4805_;
goto v_reusejp_4794_;
}
v_reusejp_4794_:
{
lean_object* v___x_4796_; lean_object* v___x_4797_; lean_object* v_disable_4798_; lean_object* v___x_4799_; lean_object* v___x_4800_; lean_object* v___x_4801_; lean_object* v___x_4802_; lean_object* v___x_4803_; lean_object* v___x_4804_; 
v___x_4796_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__3, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__3_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__3);
v___x_4797_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4797_, 0, v___x_4795_);
lean_ctor_set(v___x_4797_, 1, v___x_4796_);
v_disable_4798_ = l_Lean_MessageData_note(v___x_4797_);
v___x_4799_ = l_Lean_Linter_linterMessageTag;
v___x_4800_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4800_, 0, v_msg_4784_);
lean_ctor_set(v___x_4800_, 1, v_disable_4798_);
v___x_4801_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_4801_, 0, v___x_4799_);
lean_ctor_set(v___x_4801_, 1, v___x_4800_);
v___x_4802_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_4802_, 0, v_name_4788_);
lean_ctor_set(v___x_4802_, 1, v___x_4801_);
lean_inc(v_stx_4783_);
v___x_4803_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_4803_, 0, v_stx_4783_);
lean_ctor_set(v___x_4803_, 1, v___x_4802_);
v___x_4804_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34(v_stx_4783_, v___x_4803_, v___y_4785_, v___y_4786_);
lean_dec(v_stx_4783_);
return v___x_4804_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___boxed(lean_object* v_linterOption_4808_, lean_object* v_stx_4809_, lean_object* v_msg_4810_, lean_object* v___y_4811_, lean_object* v___y_4812_, lean_object* v___y_4813_){
_start:
{
lean_object* v_res_4814_; 
v_res_4814_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24(v_linterOption_4808_, v_stx_4809_, v_msg_4810_, v___y_4811_, v___y_4812_);
lean_dec(v___y_4812_);
lean_dec_ref(v___y_4811_);
return v_res_4814_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6(lean_object* v_linterOption_4815_, lean_object* v_stx_4816_, lean_object* v_msg_4817_, lean_object* v___y_4818_, lean_object* v___y_4819_){
_start:
{
lean_object* v___x_4821_; lean_object* v_a_4822_; lean_object* v___x_4824_; uint8_t v_isShared_4825_; uint8_t v_isSharedCheck_4832_; 
v___x_4821_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23(v___y_4818_, v___y_4819_);
v_a_4822_ = lean_ctor_get(v___x_4821_, 0);
v_isSharedCheck_4832_ = !lean_is_exclusive(v___x_4821_);
if (v_isSharedCheck_4832_ == 0)
{
v___x_4824_ = v___x_4821_;
v_isShared_4825_ = v_isSharedCheck_4832_;
goto v_resetjp_4823_;
}
else
{
lean_inc(v_a_4822_);
lean_dec(v___x_4821_);
v___x_4824_ = lean_box(0);
v_isShared_4825_ = v_isSharedCheck_4832_;
goto v_resetjp_4823_;
}
v_resetjp_4823_:
{
uint8_t v___x_4826_; 
v___x_4826_ = l_Lean_Linter_getLinterValue(v_linterOption_4815_, v_a_4822_);
lean_dec(v_a_4822_);
if (v___x_4826_ == 0)
{
lean_object* v___x_4827_; lean_object* v___x_4829_; 
lean_dec_ref(v_msg_4817_);
lean_dec(v_stx_4816_);
lean_dec_ref(v_linterOption_4815_);
v___x_4827_ = lean_box(0);
if (v_isShared_4825_ == 0)
{
lean_ctor_set(v___x_4824_, 0, v___x_4827_);
v___x_4829_ = v___x_4824_;
goto v_reusejp_4828_;
}
else
{
lean_object* v_reuseFailAlloc_4830_; 
v_reuseFailAlloc_4830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4830_, 0, v___x_4827_);
v___x_4829_ = v_reuseFailAlloc_4830_;
goto v_reusejp_4828_;
}
v_reusejp_4828_:
{
return v___x_4829_;
}
}
else
{
lean_object* v___x_4831_; 
lean_del_object(v___x_4824_);
v___x_4831_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24(v_linterOption_4815_, v_stx_4816_, v_msg_4817_, v___y_4818_, v___y_4819_);
return v___x_4831_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6___boxed(lean_object* v_linterOption_4833_, lean_object* v_stx_4834_, lean_object* v_msg_4835_, lean_object* v___y_4836_, lean_object* v___y_4837_, lean_object* v___y_4838_){
_start:
{
lean_object* v_res_4839_; 
v_res_4839_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6(v_linterOption_4833_, v_stx_4834_, v_msg_4835_, v___y_4836_, v___y_4837_);
lean_dec(v___y_4837_);
lean_dec_ref(v___y_4836_);
return v_res_4839_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_4841_; lean_object* v___x_4842_; 
v___x_4841_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__0));
v___x_4842_ = l_Lean_stringToMessageData(v___x_4841_);
return v___x_4842_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_4844_; lean_object* v___x_4845_; 
v___x_4844_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__2));
v___x_4845_ = l_Lean_stringToMessageData(v___x_4844_);
return v___x_4845_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_4859_; lean_object* v___x_4860_; 
v___x_4859_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__8));
v___x_4860_ = l_Lean_stringToMessageData(v___x_4859_);
return v___x_4860_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__11(void){
_start:
{
lean_object* v___x_4862_; lean_object* v___x_4863_; 
v___x_4862_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__10));
v___x_4863_ = l_Lean_stringToMessageData(v___x_4862_);
return v___x_4863_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0(lean_object* v_vis_x3f_4864_, lean_object* v___y_4865_, lean_object* v___y_4866_){
_start:
{
lean_object* v___x_4876_; 
v___x_4876_ = lean_st_ref_get(v___y_4866_);
if (lean_obj_tag(v_vis_x3f_4864_) == 0)
{
uint8_t v___x_4877_; lean_object* v___x_4878_; lean_object* v___x_4879_; 
lean_dec(v___x_4876_);
v___x_4877_ = 0;
v___x_4878_ = lean_box(v___x_4877_);
v___x_4879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4879_, 0, v___x_4878_);
return v___x_4879_;
}
else
{
lean_object* v_env_4880_; lean_object* v_val_4881_; lean_object* v___y_4883_; lean_object* v___y_4884_; lean_object* v___y_4885_; uint8_t v___y_4907_; lean_object* v___x_4908_; uint8_t v___x_4909_; uint8_t v___y_4911_; 
v_env_4880_ = lean_ctor_get(v___x_4876_, 0);
lean_inc_ref(v_env_4880_);
lean_dec(v___x_4876_);
v_val_4881_ = lean_ctor_get(v_vis_x3f_4864_, 0);
lean_inc_n(v_val_4881_, 2);
lean_dec_ref_known(v_vis_x3f_4864_, 1);
v___x_4908_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__6));
v___x_4909_ = l_Lean_Syntax_isOfKind(v_val_4881_, v___x_4908_);
if (v___x_4909_ == 0)
{
lean_object* v___x_4915_; uint8_t v___x_4916_; 
v___x_4915_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__7));
lean_inc(v_val_4881_);
v___x_4916_ = l_Lean_Syntax_isOfKind(v_val_4881_, v___x_4915_);
if (v___x_4916_ == 0)
{
lean_object* v___x_4917_; lean_object* v___x_4918_; 
lean_dec_ref(v_env_4880_);
v___x_4917_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__9, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__9_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__9);
v___x_4918_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_val_4881_, v___x_4917_, v___y_4865_, v___y_4866_);
lean_dec(v_val_4881_);
return v___x_4918_;
}
else
{
lean_object* v___x_4919_; 
v___x_4919_ = l_Lean_Syntax_getHeadInfo(v_val_4881_);
if (lean_obj_tag(v___x_4919_) == 0)
{
lean_dec_ref_known(v___x_4919_, 4);
v___y_4911_ = v___x_4916_;
goto v___jp_4910_;
}
else
{
lean_dec(v___x_4919_);
if (v___x_4909_ == 0)
{
lean_dec(v_val_4881_);
lean_dec_ref(v_env_4880_);
goto v___jp_4868_;
}
else
{
v___y_4911_ = v___x_4909_;
goto v___jp_4910_;
}
}
}
}
else
{
lean_object* v___x_4920_; 
v___x_4920_ = l_Lean_Syntax_getHeadInfo(v_val_4881_);
if (lean_obj_tag(v___x_4920_) == 0)
{
lean_object* v___x_4921_; uint8_t v_isModule_4922_; 
lean_dec_ref_known(v___x_4920_, 4);
v___x_4921_ = l_Lean_Environment_header(v_env_4880_);
v_isModule_4922_ = lean_ctor_get_uint8(v___x_4921_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4921_);
if (v_isModule_4922_ == 0)
{
lean_dec(v_val_4881_);
lean_dec_ref(v_env_4880_);
goto v___jp_4872_;
}
else
{
uint8_t v_isExporting_4923_; 
v_isExporting_4923_ = lean_ctor_get_uint8(v_env_4880_, sizeof(void*)*8);
lean_dec_ref(v_env_4880_);
if (v_isExporting_4923_ == 0)
{
lean_object* v___x_4924_; lean_object* v___x_4925_; lean_object* v___x_4926_; 
v___x_4924_ = l_Lean_linter_redundantVisibility;
v___x_4925_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__11, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__11_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__11);
v___x_4926_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6(v___x_4924_, v_val_4881_, v___x_4925_, v___y_4865_, v___y_4866_);
if (lean_obj_tag(v___x_4926_) == 0)
{
lean_dec_ref_known(v___x_4926_, 1);
goto v___jp_4872_;
}
else
{
lean_object* v_a_4927_; lean_object* v___x_4929_; uint8_t v_isShared_4930_; uint8_t v_isSharedCheck_4934_; 
v_a_4927_ = lean_ctor_get(v___x_4926_, 0);
v_isSharedCheck_4934_ = !lean_is_exclusive(v___x_4926_);
if (v_isSharedCheck_4934_ == 0)
{
v___x_4929_ = v___x_4926_;
v_isShared_4930_ = v_isSharedCheck_4934_;
goto v_resetjp_4928_;
}
else
{
lean_inc(v_a_4927_);
lean_dec(v___x_4926_);
v___x_4929_ = lean_box(0);
v_isShared_4930_ = v_isSharedCheck_4934_;
goto v_resetjp_4928_;
}
v_resetjp_4928_:
{
lean_object* v___x_4932_; 
if (v_isShared_4930_ == 0)
{
v___x_4932_ = v___x_4929_;
goto v_reusejp_4931_;
}
else
{
lean_object* v_reuseFailAlloc_4933_; 
v_reuseFailAlloc_4933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4933_, 0, v_a_4927_);
v___x_4932_ = v_reuseFailAlloc_4933_;
goto v_reusejp_4931_;
}
v_reusejp_4931_:
{
return v___x_4932_;
}
}
}
}
else
{
lean_dec(v_val_4881_);
goto v___jp_4872_;
}
}
}
else
{
lean_dec(v___x_4920_);
lean_dec(v_val_4881_);
lean_dec_ref(v_env_4880_);
goto v___jp_4872_;
}
}
v___jp_4882_:
{
lean_object* v___x_4886_; lean_object* v___x_4887_; lean_object* v___x_4888_; lean_object* v___x_4889_; lean_object* v___x_4890_; 
lean_inc_ref(v___y_4885_);
v___x_4886_ = l_Lean_stringToMessageData(v___y_4885_);
lean_inc_ref(v___y_4883_);
v___x_4887_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4887_, 0, v___y_4883_);
lean_ctor_set(v___x_4887_, 1, v___x_4886_);
v___x_4888_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__1, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__1_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__1);
v___x_4889_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4889_, 0, v___x_4887_);
lean_ctor_set(v___x_4889_, 1, v___x_4888_);
lean_inc_ref(v___y_4884_);
v___x_4890_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6(v___y_4884_, v_val_4881_, v___x_4889_, v___y_4865_, v___y_4866_);
if (lean_obj_tag(v___x_4890_) == 0)
{
lean_dec_ref_known(v___x_4890_, 1);
goto v___jp_4868_;
}
else
{
lean_object* v_a_4891_; lean_object* v___x_4893_; uint8_t v_isShared_4894_; uint8_t v_isSharedCheck_4898_; 
v_a_4891_ = lean_ctor_get(v___x_4890_, 0);
v_isSharedCheck_4898_ = !lean_is_exclusive(v___x_4890_);
if (v_isSharedCheck_4898_ == 0)
{
v___x_4893_ = v___x_4890_;
v_isShared_4894_ = v_isSharedCheck_4898_;
goto v_resetjp_4892_;
}
else
{
lean_inc(v_a_4891_);
lean_dec(v___x_4890_);
v___x_4893_ = lean_box(0);
v_isShared_4894_ = v_isSharedCheck_4898_;
goto v_resetjp_4892_;
}
v_resetjp_4892_:
{
lean_object* v___x_4896_; 
if (v_isShared_4894_ == 0)
{
v___x_4896_ = v___x_4893_;
goto v_reusejp_4895_;
}
else
{
lean_object* v_reuseFailAlloc_4897_; 
v_reuseFailAlloc_4897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4897_, 0, v_a_4891_);
v___x_4896_ = v_reuseFailAlloc_4897_;
goto v_reusejp_4895_;
}
v_reusejp_4895_:
{
return v___x_4896_;
}
}
}
}
v___jp_4899_:
{
lean_object* v___x_4900_; uint8_t v_isModule_4901_; lean_object* v___x_4902_; lean_object* v___x_4903_; 
v___x_4900_ = l_Lean_Environment_header(v_env_4880_);
lean_dec_ref(v_env_4880_);
v_isModule_4901_ = lean_ctor_get_uint8(v___x_4900_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4900_);
v___x_4902_ = l_Lean_linter_redundantVisibility;
v___x_4903_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__3, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__3_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__3);
if (v_isModule_4901_ == 0)
{
lean_object* v___x_4904_; 
v___x_4904_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___closed__0));
v___y_4883_ = v___x_4903_;
v___y_4884_ = v___x_4902_;
v___y_4885_ = v___x_4904_;
goto v___jp_4882_;
}
else
{
lean_object* v___x_4905_; 
v___x_4905_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__4));
v___y_4883_ = v___x_4903_;
v___y_4884_ = v___x_4902_;
v___y_4885_ = v___x_4905_;
goto v___jp_4882_;
}
}
v___jp_4906_:
{
if (v___y_4907_ == 0)
{
lean_dec(v_val_4881_);
lean_dec_ref(v_env_4880_);
goto v___jp_4868_;
}
else
{
goto v___jp_4899_;
}
}
v___jp_4910_:
{
uint8_t v_isExporting_4912_; 
v_isExporting_4912_ = lean_ctor_get_uint8(v_env_4880_, sizeof(void*)*8);
if (v_isExporting_4912_ == 0)
{
lean_object* v___x_4913_; uint8_t v_isModule_4914_; 
v___x_4913_ = l_Lean_Environment_header(v_env_4880_);
v_isModule_4914_ = lean_ctor_get_uint8(v___x_4913_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4913_);
if (v_isModule_4914_ == 0)
{
v___y_4907_ = v___y_4911_;
goto v___jp_4906_;
}
else
{
v___y_4907_ = v___x_4909_;
goto v___jp_4906_;
}
}
else
{
goto v___jp_4899_;
}
}
}
v___jp_4868_:
{
uint8_t v___x_4869_; lean_object* v___x_4870_; lean_object* v___x_4871_; 
v___x_4869_ = 2;
v___x_4870_ = lean_box(v___x_4869_);
v___x_4871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4871_, 0, v___x_4870_);
return v___x_4871_;
}
v___jp_4872_:
{
uint8_t v___x_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; 
v___x_4873_ = 1;
v___x_4874_ = lean_box(v___x_4873_);
v___x_4875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4875_, 0, v___x_4874_);
return v___x_4875_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___boxed(lean_object* v_vis_x3f_4935_, lean_object* v___y_4936_, lean_object* v___y_4937_, lean_object* v___y_4938_){
_start:
{
lean_object* v_res_4939_; 
v_res_4939_ = l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0(v_vis_x3f_4935_, v___y_4936_, v___y_4937_);
lean_dec(v___y_4937_);
lean_dec_ref(v___y_4936_);
return v_res_4939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0(lean_object* v_stx_4951_, lean_object* v___y_4952_, lean_object* v___y_4953_){
_start:
{
uint8_t v___y_4956_; uint8_t v___y_4957_; uint8_t v___y_4958_; lean_object* v___y_4959_; lean_object* v___y_4960_; uint8_t v___y_4961_; uint8_t v___y_4962_; uint8_t v___y_4966_; uint8_t v___y_4967_; lean_object* v___y_4968_; uint8_t v___y_4969_; lean_object* v___y_4970_; uint8_t v___y_4971_; lean_object* v_attrs_4972_; lean_object* v___x_4976_; lean_object* v_docCommentStx_4977_; lean_object* v___x_4978_; lean_object* v_attrsStx_4979_; uint8_t v___y_4981_; uint8_t v___y_4982_; lean_object* v___y_4983_; lean_object* v___y_4984_; uint8_t v___y_4985_; uint8_t v___y_4986_; lean_object* v___x_5000_; lean_object* v_visibilityStx_5001_; lean_object* v___x_5002_; lean_object* v_protectedStx_5003_; uint8_t v___y_5005_; lean_object* v___y_5006_; lean_object* v___y_5007_; uint8_t v___y_5008_; lean_object* v___y_5009_; uint8_t v___y_5026_; lean_object* v___y_5027_; uint8_t v___y_5028_; lean_object* v___y_5029_; lean_object* v___y_5041_; uint8_t v___y_5042_; uint8_t v___y_5043_; uint8_t v___y_5055_; lean_object* v___x_5068_; lean_object* v___x_5069_; uint8_t v___x_5070_; 
v___x_4976_ = lean_unsigned_to_nat(0u);
v_docCommentStx_4977_ = l_Lean_Syntax_getArg(v_stx_4951_, v___x_4976_);
v___x_4978_ = lean_unsigned_to_nat(1u);
v_attrsStx_4979_ = l_Lean_Syntax_getArg(v_stx_4951_, v___x_4978_);
v___x_5000_ = lean_unsigned_to_nat(2u);
v_visibilityStx_5001_ = l_Lean_Syntax_getArg(v_stx_4951_, v___x_5000_);
v___x_5002_ = lean_unsigned_to_nat(3u);
v_protectedStx_5003_ = l_Lean_Syntax_getArg(v_stx_4951_, v___x_5002_);
v___x_5068_ = lean_unsigned_to_nat(4u);
v___x_5069_ = l_Lean_Syntax_getArg(v_stx_4951_, v___x_5068_);
v___x_5070_ = l_Lean_Syntax_isNone(v___x_5069_);
if (v___x_5070_ == 0)
{
lean_object* v___x_5071_; lean_object* v___x_5072_; lean_object* v___x_5073_; uint8_t v___x_5074_; 
v___x_5071_ = l_Lean_Syntax_getArg(v___x_5069_, v___x_4976_);
lean_dec(v___x_5069_);
v___x_5072_ = l_Lean_Syntax_getKind(v___x_5071_);
v___x_5073_ = ((lean_object*)(l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__2));
v___x_5074_ = lean_name_eq(v___x_5072_, v___x_5073_);
lean_dec(v___x_5072_);
if (v___x_5074_ == 0)
{
uint8_t v___x_5075_; 
v___x_5075_ = 2;
v___y_5055_ = v___x_5075_;
goto v___jp_5054_;
}
else
{
uint8_t v___x_5076_; 
v___x_5076_ = 1;
v___y_5055_ = v___x_5076_;
goto v___jp_5054_;
}
}
else
{
uint8_t v___x_5077_; 
lean_dec(v___x_5069_);
v___x_5077_ = 0;
v___y_5055_ = v___x_5077_;
goto v___jp_5054_;
}
v___jp_4955_:
{
lean_object* v___x_4963_; lean_object* v___x_4964_; 
v___x_4963_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_4963_, 0, v_stx_4951_);
lean_ctor_set(v___x_4963_, 1, v___y_4959_);
lean_ctor_set(v___x_4963_, 2, v___y_4960_);
lean_ctor_set_uint8(v___x_4963_, sizeof(void*)*3, v___y_4956_);
lean_ctor_set_uint8(v___x_4963_, sizeof(void*)*3 + 1, v___y_4958_);
lean_ctor_set_uint8(v___x_4963_, sizeof(void*)*3 + 2, v___y_4961_);
lean_ctor_set_uint8(v___x_4963_, sizeof(void*)*3 + 3, v___y_4957_);
lean_ctor_set_uint8(v___x_4963_, sizeof(void*)*3 + 4, v___y_4962_);
v___x_4964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4964_, 0, v___x_4963_);
return v___x_4964_;
}
v___jp_4965_:
{
uint8_t v___x_4973_; 
v___x_4973_ = l_Lean_Syntax_isNone(v___y_4968_);
lean_dec(v___y_4968_);
if (v___x_4973_ == 0)
{
uint8_t v___x_4974_; 
v___x_4974_ = 1;
v___y_4956_ = v___y_4966_;
v___y_4957_ = v___y_4967_;
v___y_4958_ = v___y_4969_;
v___y_4959_ = v___y_4970_;
v___y_4960_ = v_attrs_4972_;
v___y_4961_ = v___y_4971_;
v___y_4962_ = v___x_4974_;
goto v___jp_4955_;
}
else
{
uint8_t v___x_4975_; 
v___x_4975_ = 0;
v___y_4956_ = v___y_4966_;
v___y_4957_ = v___y_4967_;
v___y_4958_ = v___y_4969_;
v___y_4959_ = v___y_4970_;
v___y_4960_ = v_attrs_4972_;
v___y_4961_ = v___y_4971_;
v___y_4962_ = v___x_4975_;
goto v___jp_4955_;
}
}
v___jp_4980_:
{
lean_object* v___x_4987_; 
v___x_4987_ = l_Lean_Syntax_getOptional_x3f(v_attrsStx_4979_);
lean_dec(v_attrsStx_4979_);
if (lean_obj_tag(v___x_4987_) == 0)
{
lean_object* v___x_4988_; 
v___x_4988_ = ((lean_object*)(l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8___closed__0));
v___y_4966_ = v___y_4981_;
v___y_4967_ = v___y_4982_;
v___y_4968_ = v___y_4983_;
v___y_4969_ = v___y_4986_;
v___y_4970_ = v___y_4984_;
v___y_4971_ = v___y_4985_;
v_attrs_4972_ = v___x_4988_;
goto v___jp_4965_;
}
else
{
lean_object* v_val_4989_; lean_object* v___x_4990_; 
v_val_4989_ = lean_ctor_get(v___x_4987_, 0);
lean_inc(v_val_4989_);
lean_dec_ref_known(v___x_4987_, 1);
v___x_4990_ = l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1(v_val_4989_, v___y_4952_, v___y_4953_);
lean_dec(v_val_4989_);
if (lean_obj_tag(v___x_4990_) == 0)
{
lean_object* v_a_4991_; 
v_a_4991_ = lean_ctor_get(v___x_4990_, 0);
lean_inc(v_a_4991_);
lean_dec_ref_known(v___x_4990_, 1);
v___y_4966_ = v___y_4981_;
v___y_4967_ = v___y_4982_;
v___y_4968_ = v___y_4983_;
v___y_4969_ = v___y_4986_;
v___y_4970_ = v___y_4984_;
v___y_4971_ = v___y_4985_;
v_attrs_4972_ = v_a_4991_;
goto v___jp_4965_;
}
else
{
lean_object* v_a_4992_; lean_object* v___x_4994_; uint8_t v_isShared_4995_; uint8_t v_isSharedCheck_4999_; 
lean_dec(v___y_4984_);
lean_dec(v___y_4983_);
lean_dec(v_stx_4951_);
v_a_4992_ = lean_ctor_get(v___x_4990_, 0);
v_isSharedCheck_4999_ = !lean_is_exclusive(v___x_4990_);
if (v_isSharedCheck_4999_ == 0)
{
v___x_4994_ = v___x_4990_;
v_isShared_4995_ = v_isSharedCheck_4999_;
goto v_resetjp_4993_;
}
else
{
lean_inc(v_a_4992_);
lean_dec(v___x_4990_);
v___x_4994_ = lean_box(0);
v_isShared_4995_ = v_isSharedCheck_4999_;
goto v_resetjp_4993_;
}
v_resetjp_4993_:
{
lean_object* v___x_4997_; 
if (v_isShared_4995_ == 0)
{
v___x_4997_ = v___x_4994_;
goto v_reusejp_4996_;
}
else
{
lean_object* v_reuseFailAlloc_4998_; 
v_reuseFailAlloc_4998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4998_, 0, v_a_4992_);
v___x_4997_ = v_reuseFailAlloc_4998_;
goto v_reusejp_4996_;
}
v_reusejp_4996_:
{
return v___x_4997_;
}
}
}
}
}
v___jp_5004_:
{
lean_object* v___x_5010_; 
v___x_5010_ = l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0(v___y_5009_, v___y_4952_, v___y_4953_);
if (lean_obj_tag(v___x_5010_) == 0)
{
lean_object* v_a_5011_; uint8_t v___x_5012_; 
v_a_5011_ = lean_ctor_get(v___x_5010_, 0);
lean_inc(v_a_5011_);
lean_dec_ref_known(v___x_5010_, 1);
v___x_5012_ = l_Lean_Syntax_isNone(v_protectedStx_5003_);
lean_dec(v_protectedStx_5003_);
if (v___x_5012_ == 0)
{
uint8_t v___x_5013_; uint8_t v___x_5014_; 
v___x_5013_ = 1;
v___x_5014_ = lean_unbox(v_a_5011_);
lean_dec(v_a_5011_);
v___y_4981_ = v___x_5014_;
v___y_4982_ = v___y_5005_;
v___y_4983_ = v___y_5006_;
v___y_4984_ = v___y_5007_;
v___y_4985_ = v___y_5008_;
v___y_4986_ = v___x_5013_;
goto v___jp_4980_;
}
else
{
uint8_t v___x_5015_; uint8_t v___x_5016_; 
v___x_5015_ = 0;
v___x_5016_ = lean_unbox(v_a_5011_);
lean_dec(v_a_5011_);
v___y_4981_ = v___x_5016_;
v___y_4982_ = v___y_5005_;
v___y_4983_ = v___y_5006_;
v___y_4984_ = v___y_5007_;
v___y_4985_ = v___y_5008_;
v___y_4986_ = v___x_5015_;
goto v___jp_4980_;
}
}
else
{
lean_object* v_a_5017_; lean_object* v___x_5019_; uint8_t v_isShared_5020_; uint8_t v_isSharedCheck_5024_; 
lean_dec(v___y_5007_);
lean_dec(v___y_5006_);
lean_dec(v_protectedStx_5003_);
lean_dec(v_attrsStx_4979_);
lean_dec(v_stx_4951_);
v_a_5017_ = lean_ctor_get(v___x_5010_, 0);
v_isSharedCheck_5024_ = !lean_is_exclusive(v___x_5010_);
if (v_isSharedCheck_5024_ == 0)
{
v___x_5019_ = v___x_5010_;
v_isShared_5020_ = v_isSharedCheck_5024_;
goto v_resetjp_5018_;
}
else
{
lean_inc(v_a_5017_);
lean_dec(v___x_5010_);
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
lean_ctor_set(v_reuseFailAlloc_5023_, 0, v_a_5017_);
v___x_5022_ = v_reuseFailAlloc_5023_;
goto v_reusejp_5021_;
}
v_reusejp_5021_:
{
return v___x_5022_;
}
}
}
}
v___jp_5025_:
{
lean_object* v___x_5030_; 
v___x_5030_ = l_Lean_Syntax_getOptional_x3f(v_visibilityStx_5001_);
lean_dec(v_visibilityStx_5001_);
if (lean_obj_tag(v___x_5030_) == 0)
{
lean_object* v___x_5031_; 
v___x_5031_ = lean_box(0);
v___y_5005_ = v___y_5026_;
v___y_5006_ = v___y_5027_;
v___y_5007_ = v___y_5029_;
v___y_5008_ = v___y_5028_;
v___y_5009_ = v___x_5031_;
goto v___jp_5004_;
}
else
{
lean_object* v_val_5032_; lean_object* v___x_5034_; uint8_t v_isShared_5035_; uint8_t v_isSharedCheck_5039_; 
v_val_5032_ = lean_ctor_get(v___x_5030_, 0);
v_isSharedCheck_5039_ = !lean_is_exclusive(v___x_5030_);
if (v_isSharedCheck_5039_ == 0)
{
v___x_5034_ = v___x_5030_;
v_isShared_5035_ = v_isSharedCheck_5039_;
goto v_resetjp_5033_;
}
else
{
lean_inc(v_val_5032_);
lean_dec(v___x_5030_);
v___x_5034_ = lean_box(0);
v_isShared_5035_ = v_isSharedCheck_5039_;
goto v_resetjp_5033_;
}
v_resetjp_5033_:
{
lean_object* v___x_5037_; 
if (v_isShared_5035_ == 0)
{
v___x_5037_ = v___x_5034_;
goto v_reusejp_5036_;
}
else
{
lean_object* v_reuseFailAlloc_5038_; 
v_reuseFailAlloc_5038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5038_, 0, v_val_5032_);
v___x_5037_ = v_reuseFailAlloc_5038_;
goto v_reusejp_5036_;
}
v_reusejp_5036_:
{
v___y_5005_ = v___y_5026_;
v___y_5006_ = v___y_5027_;
v___y_5007_ = v___y_5029_;
v___y_5008_ = v___y_5028_;
v___y_5009_ = v___x_5037_;
goto v___jp_5004_;
}
}
}
}
v___jp_5040_:
{
lean_object* v___x_5044_; 
v___x_5044_ = l_Lean_Syntax_getOptional_x3f(v_docCommentStx_4977_);
lean_dec(v_docCommentStx_4977_);
if (lean_obj_tag(v___x_5044_) == 0)
{
lean_object* v___x_5045_; 
v___x_5045_ = lean_box(0);
v___y_5026_ = v___y_5043_;
v___y_5027_ = v___y_5041_;
v___y_5028_ = v___y_5042_;
v___y_5029_ = v___x_5045_;
goto v___jp_5025_;
}
else
{
lean_object* v_val_5046_; lean_object* v___x_5048_; uint8_t v_isShared_5049_; uint8_t v_isSharedCheck_5053_; 
v_val_5046_ = lean_ctor_get(v___x_5044_, 0);
v_isSharedCheck_5053_ = !lean_is_exclusive(v___x_5044_);
if (v_isSharedCheck_5053_ == 0)
{
v___x_5048_ = v___x_5044_;
v_isShared_5049_ = v_isSharedCheck_5053_;
goto v_resetjp_5047_;
}
else
{
lean_inc(v_val_5046_);
lean_dec(v___x_5044_);
v___x_5048_ = lean_box(0);
v_isShared_5049_ = v_isSharedCheck_5053_;
goto v_resetjp_5047_;
}
v_resetjp_5047_:
{
lean_object* v___x_5051_; 
if (v_isShared_5049_ == 0)
{
v___x_5051_ = v___x_5048_;
goto v_reusejp_5050_;
}
else
{
lean_object* v_reuseFailAlloc_5052_; 
v_reuseFailAlloc_5052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5052_, 0, v_val_5046_);
v___x_5051_ = v_reuseFailAlloc_5052_;
goto v_reusejp_5050_;
}
v_reusejp_5050_:
{
v___y_5026_ = v___y_5043_;
v___y_5027_ = v___y_5041_;
v___y_5028_ = v___y_5042_;
v___y_5029_ = v___x_5051_;
goto v___jp_5025_;
}
}
}
}
v___jp_5054_:
{
lean_object* v___x_5056_; lean_object* v_unsafeStx_5057_; lean_object* v___x_5058_; lean_object* v___x_5059_; uint8_t v___x_5060_; 
v___x_5056_ = lean_unsigned_to_nat(5u);
v_unsafeStx_5057_ = l_Lean_Syntax_getArg(v_stx_4951_, v___x_5056_);
v___x_5058_ = lean_unsigned_to_nat(6u);
v___x_5059_ = l_Lean_Syntax_getArg(v_stx_4951_, v___x_5058_);
v___x_5060_ = l_Lean_Syntax_isNone(v___x_5059_);
if (v___x_5060_ == 0)
{
lean_object* v___x_5061_; lean_object* v___x_5062_; lean_object* v___x_5063_; uint8_t v___x_5064_; 
v___x_5061_ = l_Lean_Syntax_getArg(v___x_5059_, v___x_4976_);
lean_dec(v___x_5059_);
v___x_5062_ = l_Lean_Syntax_getKind(v___x_5061_);
v___x_5063_ = ((lean_object*)(l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__1));
v___x_5064_ = lean_name_eq(v___x_5062_, v___x_5063_);
lean_dec(v___x_5062_);
if (v___x_5064_ == 0)
{
uint8_t v___x_5065_; 
v___x_5065_ = 1;
v___y_5041_ = v_unsafeStx_5057_;
v___y_5042_ = v___y_5055_;
v___y_5043_ = v___x_5065_;
goto v___jp_5040_;
}
else
{
uint8_t v___x_5066_; 
v___x_5066_ = 0;
v___y_5041_ = v_unsafeStx_5057_;
v___y_5042_ = v___y_5055_;
v___y_5043_ = v___x_5066_;
goto v___jp_5040_;
}
}
else
{
uint8_t v___x_5067_; 
lean_dec(v___x_5059_);
v___x_5067_ = 2;
v___y_5041_ = v_unsafeStx_5057_;
v___y_5042_ = v___y_5055_;
v___y_5043_ = v___x_5067_;
goto v___jp_5040_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___boxed(lean_object* v_stx_5078_, lean_object* v___y_5079_, lean_object* v___y_5080_, lean_object* v___y_5081_){
_start:
{
lean_object* v_res_5082_; 
v_res_5082_ = l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0(v_stx_5078_, v___y_5079_, v___y_5080_);
lean_dec(v___y_5080_);
lean_dec_ref(v___y_5079_);
return v_res_5082_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__3(lean_object* v_mods_5083_, lean_object* v___x_5084_, lean_object* v_projId_5085_, lean_object* v___x_5086_, lean_object* v___x_5087_, lean_object* v___x_5088_, lean_object* v_params_5089_, lean_object* v___x_5090_, lean_object* v___x_5091_, lean_object* v_optDeriving_5092_, lean_object* v___x_5093_, lean_object* v___y_5094_, lean_object* v___y_5095_){
_start:
{
lean_object* v___x_5097_; 
lean_inc(v_mods_5083_);
v___x_5097_ = l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0(v_mods_5083_, v___y_5094_, v___y_5095_);
if (lean_obj_tag(v___x_5097_) == 0)
{
lean_object* v_a_5098_; lean_object* v___f_5099_; lean_object* v___x_5100_; lean_object* v_env_5101_; uint8_t v___x_5102_; lean_object* v___x_5103_; 
v_a_5098_ = lean_ctor_get(v___x_5097_, 0);
lean_inc_n(v_a_5098_, 2);
lean_dec_ref_known(v___x_5097_, 1);
v___f_5099_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___lam__2___boxed), 15, 12);
lean_closure_set(v___f_5099_, 0, v___x_5084_);
lean_closure_set(v___f_5099_, 1, v_a_5098_);
lean_closure_set(v___f_5099_, 2, v_projId_5085_);
lean_closure_set(v___f_5099_, 3, v___x_5086_);
lean_closure_set(v___f_5099_, 4, v___x_5087_);
lean_closure_set(v___f_5099_, 5, v___x_5088_);
lean_closure_set(v___f_5099_, 6, v_params_5089_);
lean_closure_set(v___f_5099_, 7, v___x_5090_);
lean_closure_set(v___f_5099_, 8, v_mods_5083_);
lean_closure_set(v___f_5099_, 9, v___x_5091_);
lean_closure_set(v___f_5099_, 10, v_optDeriving_5092_);
lean_closure_set(v___f_5099_, 11, v___x_5093_);
v___x_5100_ = lean_st_ref_get(v___y_5095_);
v_env_5101_ = lean_ctor_get(v___x_5100_, 0);
lean_inc_ref(v_env_5101_);
lean_dec(v___x_5100_);
v___x_5102_ = l_Lean_Elab_Modifiers_isInferredPublic(v_env_5101_, v_a_5098_);
lean_dec(v_a_5098_);
lean_dec_ref(v_env_5101_);
v___x_5103_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(v___f_5099_, v___x_5102_, v___y_5094_, v___y_5095_);
return v___x_5103_;
}
else
{
lean_object* v_a_5104_; lean_object* v___x_5106_; uint8_t v_isShared_5107_; uint8_t v_isSharedCheck_5111_; 
lean_dec(v___x_5093_);
lean_dec(v_optDeriving_5092_);
lean_dec(v___x_5091_);
lean_dec(v___x_5090_);
lean_dec_ref(v_params_5089_);
lean_dec_ref(v___x_5088_);
lean_dec_ref(v___x_5087_);
lean_dec_ref(v___x_5086_);
lean_dec(v_projId_5085_);
lean_dec(v___x_5084_);
lean_dec(v_mods_5083_);
v_a_5104_ = lean_ctor_get(v___x_5097_, 0);
v_isSharedCheck_5111_ = !lean_is_exclusive(v___x_5097_);
if (v_isSharedCheck_5111_ == 0)
{
v___x_5106_ = v___x_5097_;
v_isShared_5107_ = v_isSharedCheck_5111_;
goto v_resetjp_5105_;
}
else
{
lean_inc(v_a_5104_);
lean_dec(v___x_5097_);
v___x_5106_ = lean_box(0);
v_isShared_5107_ = v_isSharedCheck_5111_;
goto v_resetjp_5105_;
}
v_resetjp_5105_:
{
lean_object* v___x_5109_; 
if (v_isShared_5107_ == 0)
{
v___x_5109_ = v___x_5106_;
goto v_reusejp_5108_;
}
else
{
lean_object* v_reuseFailAlloc_5110_; 
v_reuseFailAlloc_5110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5110_, 0, v_a_5104_);
v___x_5109_ = v_reuseFailAlloc_5110_;
goto v_reusejp_5108_;
}
v_reusejp_5108_:
{
return v___x_5109_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__3___boxed(lean_object* v_mods_5112_, lean_object* v___x_5113_, lean_object* v_projId_5114_, lean_object* v___x_5115_, lean_object* v___x_5116_, lean_object* v___x_5117_, lean_object* v_params_5118_, lean_object* v___x_5119_, lean_object* v___x_5120_, lean_object* v_optDeriving_5121_, lean_object* v___x_5122_, lean_object* v___y_5123_, lean_object* v___y_5124_, lean_object* v___y_5125_){
_start:
{
lean_object* v_res_5126_; 
v_res_5126_ = l_Lean_Elab_Command_elabNewtype___lam__3(v_mods_5112_, v___x_5113_, v_projId_5114_, v___x_5115_, v___x_5116_, v___x_5117_, v_params_5118_, v___x_5119_, v___x_5120_, v_optDeriving_5121_, v___x_5122_, v___y_5123_, v___y_5124_);
lean_dec(v___y_5124_);
lean_dec_ref(v___y_5123_);
return v_res_5126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype(lean_object* v_stx_5127_, lean_object* v___y_5128_, lean_object* v___y_5129_){
_start:
{
lean_object* v___x_5131_; lean_object* v___x_5132_; lean_object* v___x_5133_; lean_object* v___x_5134_; lean_object* v___x_5135_; lean_object* v_mods_5136_; lean_object* v___x_5137_; lean_object* v___x_5138_; lean_object* v___x_5139_; lean_object* v___x_5140_; lean_object* v_params_5141_; lean_object* v___x_5142_; lean_object* v___x_5143_; lean_object* v___x_5144_; lean_object* v_projId_5145_; lean_object* v___x_5146_; lean_object* v_optDeriving_5147_; lean_object* v___f_5148_; lean_object* v___x_5149_; 
v___x_5131_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__0));
v___x_5132_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__1));
v___x_5133_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__5));
v___x_5134_ = lean_box(0);
v___x_5135_ = lean_unsigned_to_nat(0u);
v_mods_5136_ = l_Lean_Syntax_getArg(v_stx_5127_, v___x_5135_);
v___x_5137_ = lean_unsigned_to_nat(2u);
v___x_5138_ = l_Lean_Syntax_getArg(v_stx_5127_, v___x_5137_);
v___x_5139_ = lean_unsigned_to_nat(3u);
v___x_5140_ = l_Lean_Syntax_getArg(v_stx_5127_, v___x_5139_);
v_params_5141_ = l_Lean_Syntax_getArgs(v___x_5140_);
lean_dec(v___x_5140_);
v___x_5142_ = lean_unsigned_to_nat(5u);
v___x_5143_ = l_Lean_Syntax_getArg(v_stx_5127_, v___x_5142_);
v___x_5144_ = lean_unsigned_to_nat(7u);
v_projId_5145_ = l_Lean_Syntax_getArg(v_stx_5127_, v___x_5144_);
v___x_5146_ = lean_unsigned_to_nat(8u);
v_optDeriving_5147_ = l_Lean_Syntax_getArg(v_stx_5127_, v___x_5146_);
v___f_5148_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___lam__3___boxed), 14, 11);
lean_closure_set(v___f_5148_, 0, v_mods_5136_);
lean_closure_set(v___f_5148_, 1, v___x_5138_);
lean_closure_set(v___f_5148_, 2, v_projId_5145_);
lean_closure_set(v___f_5148_, 3, v___x_5131_);
lean_closure_set(v___f_5148_, 4, v___x_5132_);
lean_closure_set(v___f_5148_, 5, v___x_5133_);
lean_closure_set(v___f_5148_, 6, v_params_5141_);
lean_closure_set(v___f_5148_, 7, v___x_5143_);
lean_closure_set(v___f_5148_, 8, v___x_5134_);
lean_closure_set(v___f_5148_, 9, v_optDeriving_5147_);
lean_closure_set(v___f_5148_, 10, v___x_5135_);
v___x_5149_ = l_Lean_Elab_Command_getScope___redArg(v___y_5129_);
if (lean_obj_tag(v___x_5149_) == 0)
{
lean_object* v_a_5150_; uint8_t v_isPublic_5151_; lean_object* v___x_5152_; 
v_a_5150_ = lean_ctor_get(v___x_5149_, 0);
lean_inc(v_a_5150_);
lean_dec_ref_known(v___x_5149_, 1);
v_isPublic_5151_ = lean_ctor_get_uint8(v_a_5150_, sizeof(void*)*10 + 1);
lean_dec(v_a_5150_);
v___x_5152_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(v___f_5148_, v_isPublic_5151_, v___y_5128_, v___y_5129_);
return v___x_5152_;
}
else
{
lean_object* v_a_5153_; lean_object* v___x_5155_; uint8_t v_isShared_5156_; uint8_t v_isSharedCheck_5160_; 
lean_dec_ref(v___f_5148_);
v_a_5153_ = lean_ctor_get(v___x_5149_, 0);
v_isSharedCheck_5160_ = !lean_is_exclusive(v___x_5149_);
if (v_isSharedCheck_5160_ == 0)
{
v___x_5155_ = v___x_5149_;
v_isShared_5156_ = v_isSharedCheck_5160_;
goto v_resetjp_5154_;
}
else
{
lean_inc(v_a_5153_);
lean_dec(v___x_5149_);
v___x_5155_ = lean_box(0);
v_isShared_5156_ = v_isSharedCheck_5160_;
goto v_resetjp_5154_;
}
v_resetjp_5154_:
{
lean_object* v___x_5158_; 
if (v_isShared_5156_ == 0)
{
v___x_5158_ = v___x_5155_;
goto v_reusejp_5157_;
}
else
{
lean_object* v_reuseFailAlloc_5159_; 
v_reuseFailAlloc_5159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5159_, 0, v_a_5153_);
v___x_5158_ = v_reuseFailAlloc_5159_;
goto v_reusejp_5157_;
}
v_reusejp_5157_:
{
return v___x_5158_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___boxed(lean_object* v_stx_5161_, lean_object* v___y_5162_, lean_object* v___y_5163_, lean_object* v___y_5164_){
_start:
{
lean_object* v_res_5165_; 
v_res_5165_ = l_Lean_Elab_Command_elabNewtype(v_stx_5161_, v___y_5162_, v___y_5163_);
lean_dec(v___y_5163_);
lean_dec_ref(v___y_5162_);
lean_dec(v_stx_5161_);
return v_res_5165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5(lean_object* v_stx_5166_, lean_object* v___y_5167_, lean_object* v___y_5168_){
_start:
{
lean_object* v___x_5170_; 
v___x_5170_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg(v_stx_5166_, v___y_5167_);
return v___x_5170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___boxed(lean_object* v_stx_5171_, lean_object* v___y_5172_, lean_object* v___y_5173_, lean_object* v___y_5174_){
_start:
{
lean_object* v_res_5175_; 
v_res_5175_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5(v_stx_5171_, v___y_5172_, v___y_5173_);
lean_dec(v___y_5173_);
lean_dec_ref(v___y_5172_);
lean_dec(v_stx_5171_);
return v_res_5175_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6(lean_object* v_declName_5176_, lean_object* v_declRanges_5177_, lean_object* v___y_5178_, lean_object* v___y_5179_){
_start:
{
lean_object* v___x_5181_; 
v___x_5181_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___redArg(v_declName_5176_, v_declRanges_5177_, v___y_5179_);
return v___x_5181_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___boxed(lean_object* v_declName_5182_, lean_object* v_declRanges_5183_, lean_object* v___y_5184_, lean_object* v___y_5185_, lean_object* v___y_5186_){
_start:
{
lean_object* v_res_5187_; 
v_res_5187_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6(v_declName_5182_, v_declRanges_5183_, v___y_5184_, v___y_5185_);
lean_dec(v___y_5185_);
lean_dec_ref(v___y_5184_);
return v_res_5187_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13(lean_object* v_00_u03b1_5188_, lean_object* v_x_5189_, uint8_t v_isExporting_5190_, lean_object* v___y_5191_, lean_object* v___y_5192_, lean_object* v___y_5193_, lean_object* v___y_5194_, lean_object* v___y_5195_, lean_object* v___y_5196_){
_start:
{
lean_object* v___x_5198_; 
v___x_5198_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg(v_x_5189_, v_isExporting_5190_, v___y_5191_, v___y_5192_, v___y_5193_, v___y_5194_, v___y_5195_, v___y_5196_);
return v___x_5198_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___boxed(lean_object* v_00_u03b1_5199_, lean_object* v_x_5200_, lean_object* v_isExporting_5201_, lean_object* v___y_5202_, lean_object* v___y_5203_, lean_object* v___y_5204_, lean_object* v___y_5205_, lean_object* v___y_5206_, lean_object* v___y_5207_, lean_object* v___y_5208_){
_start:
{
uint8_t v_isExporting_boxed_5209_; lean_object* v_res_5210_; 
v_isExporting_boxed_5209_ = lean_unbox(v_isExporting_5201_);
v_res_5210_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13(v_00_u03b1_5199_, v_x_5200_, v_isExporting_boxed_5209_, v___y_5202_, v___y_5203_, v___y_5204_, v___y_5205_, v___y_5206_, v___y_5207_);
lean_dec(v___y_5207_);
lean_dec_ref(v___y_5206_);
lean_dec(v___y_5205_);
lean_dec_ref(v___y_5204_);
lean_dec(v___y_5203_);
lean_dec_ref(v___y_5202_);
return v_res_5210_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6(lean_object* v_00_u03b1_5211_, lean_object* v_x_5212_, uint8_t v_when_5213_, lean_object* v___y_5214_, lean_object* v___y_5215_, lean_object* v___y_5216_, lean_object* v___y_5217_, lean_object* v___y_5218_, lean_object* v___y_5219_){
_start:
{
lean_object* v___x_5221_; 
v___x_5221_ = l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg(v_x_5212_, v_when_5213_, v___y_5214_, v___y_5215_, v___y_5216_, v___y_5217_, v___y_5218_, v___y_5219_);
return v___x_5221_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6___boxed(lean_object* v_00_u03b1_5222_, lean_object* v_x_5223_, lean_object* v_when_5224_, lean_object* v___y_5225_, lean_object* v___y_5226_, lean_object* v___y_5227_, lean_object* v___y_5228_, lean_object* v___y_5229_, lean_object* v___y_5230_, lean_object* v___y_5231_){
_start:
{
uint8_t v_when_boxed_5232_; lean_object* v_res_5233_; 
v_when_boxed_5232_ = lean_unbox(v_when_5224_);
v_res_5233_ = l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6(v_00_u03b1_5222_, v_x_5223_, v_when_boxed_5232_, v___y_5225_, v___y_5226_, v___y_5227_, v___y_5228_, v___y_5229_, v___y_5230_);
lean_dec(v___y_5230_);
lean_dec_ref(v___y_5229_);
lean_dec(v___y_5228_);
lean_dec_ref(v___y_5227_);
lean_dec(v___y_5226_);
lean_dec_ref(v___y_5225_);
return v_res_5233_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20(lean_object* v_declName_5234_, uint8_t v_s_5235_, lean_object* v___y_5236_, lean_object* v___y_5237_){
_start:
{
lean_object* v___x_5239_; 
v___x_5239_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20___redArg(v_declName_5234_, v_s_5235_, v___y_5237_);
return v___x_5239_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20___boxed(lean_object* v_declName_5240_, lean_object* v_s_5241_, lean_object* v___y_5242_, lean_object* v___y_5243_, lean_object* v___y_5244_){
_start:
{
uint8_t v_s_boxed_5245_; lean_object* v_res_5246_; 
v_s_boxed_5245_ = lean_unbox(v_s_5241_);
v_res_5246_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20(v_declName_5240_, v_s_boxed_5245_, v___y_5242_, v___y_5243_);
lean_dec(v___y_5243_);
lean_dec_ref(v___y_5242_);
return v_res_5246_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12(lean_object* v_as_5247_, lean_object* v_as_x27_5248_, lean_object* v_b_5249_, lean_object* v_a_5250_, lean_object* v___y_5251_, lean_object* v___y_5252_){
_start:
{
lean_object* v___x_5254_; 
v___x_5254_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg(v_as_x27_5248_, v_b_5249_, v___y_5251_, v___y_5252_);
return v___x_5254_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12___boxed(lean_object* v_as_5255_, lean_object* v_as_x27_5256_, lean_object* v_b_5257_, lean_object* v_a_5258_, lean_object* v___y_5259_, lean_object* v___y_5260_, lean_object* v___y_5261_){
_start:
{
lean_object* v_res_5262_; 
v_res_5262_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12(v_as_5255_, v_as_x27_5256_, v_b_5257_, v_a_5258_, v___y_5259_, v___y_5260_);
lean_dec(v___y_5260_);
lean_dec_ref(v___y_5259_);
lean_dec(v_as_x27_5256_);
lean_dec(v_as_5255_);
return v_res_5262_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13(lean_object* v_as_5263_, lean_object* v_as_x27_5264_, lean_object* v_b_5265_, lean_object* v_a_5266_, lean_object* v___y_5267_, lean_object* v___y_5268_){
_start:
{
lean_object* v___x_5270_; 
v___x_5270_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg(v_as_x27_5264_, v_b_5265_, v___y_5267_, v___y_5268_);
return v___x_5270_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13___boxed(lean_object* v_as_5271_, lean_object* v_as_x27_5272_, lean_object* v_b_5273_, lean_object* v_a_5274_, lean_object* v___y_5275_, lean_object* v___y_5276_, lean_object* v___y_5277_){
_start:
{
lean_object* v_res_5278_; 
v_res_5278_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13(v_as_5271_, v_as_x27_5272_, v_b_5273_, v_a_5274_, v___y_5275_, v___y_5276_);
lean_dec(v___y_5276_);
lean_dec_ref(v___y_5275_);
lean_dec(v_as_x27_5272_);
lean_dec(v_as_5271_);
return v_res_5278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18(lean_object* v_t_5279_, lean_object* v___y_5280_, lean_object* v___y_5281_){
_start:
{
lean_object* v___x_5283_; 
v___x_5283_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___redArg(v_t_5279_, v___y_5281_);
return v___x_5283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___boxed(lean_object* v_t_5284_, lean_object* v___y_5285_, lean_object* v___y_5286_, lean_object* v___y_5287_){
_start:
{
lean_object* v_res_5288_; 
v_res_5288_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18(v_t_5284_, v___y_5285_, v___y_5286_);
lean_dec(v___y_5286_);
lean_dec_ref(v___y_5285_);
return v_res_5288_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11(lean_object* v_00_u03b1_5289_, lean_object* v_constName_5290_, lean_object* v___y_5291_, lean_object* v___y_5292_, lean_object* v___y_5293_, lean_object* v___y_5294_, lean_object* v___y_5295_, lean_object* v___y_5296_){
_start:
{
lean_object* v___x_5298_; 
v___x_5298_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg(v_constName_5290_, v___y_5291_, v___y_5292_, v___y_5293_, v___y_5294_, v___y_5295_, v___y_5296_);
return v___x_5298_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___boxed(lean_object* v_00_u03b1_5299_, lean_object* v_constName_5300_, lean_object* v___y_5301_, lean_object* v___y_5302_, lean_object* v___y_5303_, lean_object* v___y_5304_, lean_object* v___y_5305_, lean_object* v___y_5306_, lean_object* v___y_5307_){
_start:
{
lean_object* v_res_5308_; 
v_res_5308_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11(v_00_u03b1_5299_, v_constName_5300_, v___y_5301_, v___y_5302_, v___y_5303_, v___y_5304_, v___y_5305_, v___y_5306_);
lean_dec(v___y_5306_);
lean_dec_ref(v___y_5305_);
lean_dec(v___y_5304_);
lean_dec_ref(v___y_5303_);
lean_dec(v___y_5302_);
lean_dec_ref(v___y_5301_);
return v_res_5308_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5(lean_object* v_00_u03b1_5309_, lean_object* v_ref_5310_, lean_object* v_msg_5311_, lean_object* v___y_5312_, lean_object* v___y_5313_){
_start:
{
lean_object* v___x_5315_; 
v___x_5315_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_ref_5310_, v_msg_5311_, v___y_5312_, v___y_5313_);
return v___x_5315_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___boxed(lean_object* v_00_u03b1_5316_, lean_object* v_ref_5317_, lean_object* v_msg_5318_, lean_object* v___y_5319_, lean_object* v___y_5320_, lean_object* v___y_5321_){
_start:
{
lean_object* v_res_5322_; 
v_res_5322_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5(v_00_u03b1_5316_, v_ref_5317_, v_msg_5318_, v___y_5319_, v___y_5320_);
lean_dec(v___y_5320_);
lean_dec_ref(v___y_5319_);
lean_dec(v_ref_5317_);
return v_res_5322_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21(lean_object* v_00_u03b1_5323_, lean_object* v_ref_5324_, lean_object* v_constName_5325_, lean_object* v___y_5326_, lean_object* v___y_5327_, lean_object* v___y_5328_, lean_object* v___y_5329_, lean_object* v___y_5330_, lean_object* v___y_5331_){
_start:
{
lean_object* v___x_5333_; 
v___x_5333_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg(v_ref_5324_, v_constName_5325_, v___y_5326_, v___y_5327_, v___y_5328_, v___y_5329_, v___y_5330_, v___y_5331_);
return v___x_5333_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___boxed(lean_object* v_00_u03b1_5334_, lean_object* v_ref_5335_, lean_object* v_constName_5336_, lean_object* v___y_5337_, lean_object* v___y_5338_, lean_object* v___y_5339_, lean_object* v___y_5340_, lean_object* v___y_5341_, lean_object* v___y_5342_, lean_object* v___y_5343_){
_start:
{
lean_object* v_res_5344_; 
v_res_5344_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21(v_00_u03b1_5334_, v_ref_5335_, v_constName_5336_, v___y_5337_, v___y_5338_, v___y_5339_, v___y_5340_, v___y_5341_, v___y_5342_);
lean_dec(v___y_5342_);
lean_dec_ref(v___y_5341_);
lean_dec(v___y_5340_);
lean_dec_ref(v___y_5339_);
lean_dec(v___y_5338_);
lean_dec_ref(v___y_5337_);
lean_dec(v_ref_5335_);
return v_res_5344_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28(lean_object* v_msgData_5345_, lean_object* v___y_5346_, lean_object* v___y_5347_){
_start:
{
lean_object* v___x_5349_; 
v___x_5349_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(v_msgData_5345_, v___y_5347_);
return v___x_5349_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___boxed(lean_object* v_msgData_5350_, lean_object* v___y_5351_, lean_object* v___y_5352_, lean_object* v___y_5353_){
_start:
{
lean_object* v_res_5354_; 
v_res_5354_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28(v_msgData_5350_, v___y_5351_, v___y_5352_);
lean_dec(v___y_5352_);
lean_dec_ref(v___y_5351_);
return v_res_5354_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21(lean_object* v_00_u03b1_5355_, lean_object* v_msg_5356_, lean_object* v___y_5357_, lean_object* v___y_5358_){
_start:
{
lean_object* v___x_5360_; 
v___x_5360_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(v_msg_5356_, v___y_5357_, v___y_5358_);
return v___x_5360_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___boxed(lean_object* v_00_u03b1_5361_, lean_object* v_msg_5362_, lean_object* v___y_5363_, lean_object* v___y_5364_, lean_object* v___y_5365_){
_start:
{
lean_object* v_res_5366_; 
v_res_5366_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21(v_00_u03b1_5361_, v_msg_5362_, v___y_5363_, v___y_5364_);
lean_dec(v___y_5364_);
lean_dec_ref(v___y_5363_);
return v_res_5366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32(lean_object* v_o_5367_, lean_object* v___y_5368_, lean_object* v___y_5369_){
_start:
{
lean_object* v___x_5371_; 
v___x_5371_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___redArg(v_o_5367_, v___y_5369_);
return v___x_5371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___boxed(lean_object* v_o_5372_, lean_object* v___y_5373_, lean_object* v___y_5374_, lean_object* v___y_5375_){
_start:
{
lean_object* v_res_5376_; 
v_res_5376_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32(v_o_5372_, v___y_5373_, v___y_5374_);
lean_dec(v___y_5374_);
lean_dec_ref(v___y_5373_);
return v_res_5376_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32(lean_object* v_00_u03b1_5377_, lean_object* v_constName_5378_, lean_object* v___y_5379_, lean_object* v___y_5380_){
_start:
{
lean_object* v___x_5382_; 
v___x_5382_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___redArg(v_constName_5378_, v___y_5379_, v___y_5380_);
return v___x_5382_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___boxed(lean_object* v_00_u03b1_5383_, lean_object* v_constName_5384_, lean_object* v___y_5385_, lean_object* v___y_5386_, lean_object* v___y_5387_){
_start:
{
lean_object* v_res_5388_; 
v_res_5388_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32(v_00_u03b1_5383_, v_constName_5384_, v___y_5385_, v___y_5386_);
lean_dec(v___y_5386_);
lean_dec_ref(v___y_5385_);
return v_res_5388_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37(lean_object* v_00_u03b1_5389_, lean_object* v_ref_5390_, lean_object* v_msg_5391_, lean_object* v_declHint_5392_, lean_object* v___y_5393_, lean_object* v___y_5394_, lean_object* v___y_5395_, lean_object* v___y_5396_, lean_object* v___y_5397_, lean_object* v___y_5398_){
_start:
{
lean_object* v___x_5400_; 
v___x_5400_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37___redArg(v_ref_5390_, v_msg_5391_, v_declHint_5392_, v___y_5393_, v___y_5394_, v___y_5395_, v___y_5396_, v___y_5397_, v___y_5398_);
return v___x_5400_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37___boxed(lean_object* v_00_u03b1_5401_, lean_object* v_ref_5402_, lean_object* v_msg_5403_, lean_object* v_declHint_5404_, lean_object* v___y_5405_, lean_object* v___y_5406_, lean_object* v___y_5407_, lean_object* v___y_5408_, lean_object* v___y_5409_, lean_object* v___y_5410_, lean_object* v___y_5411_){
_start:
{
lean_object* v_res_5412_; 
v_res_5412_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37(v_00_u03b1_5401_, v_ref_5402_, v_msg_5403_, v_declHint_5404_, v___y_5405_, v___y_5406_, v___y_5407_, v___y_5408_, v___y_5409_, v___y_5410_);
lean_dec(v___y_5410_);
lean_dec_ref(v___y_5409_);
lean_dec(v___y_5408_);
lean_dec_ref(v___y_5407_);
lean_dec(v___y_5406_);
lean_dec_ref(v___y_5405_);
lean_dec(v_ref_5402_);
return v_res_5412_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40(lean_object* v_ref_5413_, lean_object* v_msgData_5414_, uint8_t v_severity_5415_, uint8_t v_isSilent_5416_, lean_object* v___y_5417_, lean_object* v___y_5418_, lean_object* v___y_5419_, lean_object* v___y_5420_, lean_object* v___y_5421_, lean_object* v___y_5422_){
_start:
{
lean_object* v___x_5424_; 
v___x_5424_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg(v_ref_5413_, v_msgData_5414_, v_severity_5415_, v_isSilent_5416_, v___y_5419_, v___y_5420_, v___y_5421_, v___y_5422_);
return v___x_5424_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___boxed(lean_object* v_ref_5425_, lean_object* v_msgData_5426_, lean_object* v_severity_5427_, lean_object* v_isSilent_5428_, lean_object* v___y_5429_, lean_object* v___y_5430_, lean_object* v___y_5431_, lean_object* v___y_5432_, lean_object* v___y_5433_, lean_object* v___y_5434_, lean_object* v___y_5435_){
_start:
{
uint8_t v_severity_boxed_5436_; uint8_t v_isSilent_boxed_5437_; lean_object* v_res_5438_; 
v_severity_boxed_5436_ = lean_unbox(v_severity_5427_);
v_isSilent_boxed_5437_ = lean_unbox(v_isSilent_5428_);
v_res_5438_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40(v_ref_5425_, v_msgData_5426_, v_severity_boxed_5436_, v_isSilent_boxed_5437_, v___y_5429_, v___y_5430_, v___y_5431_, v___y_5432_, v___y_5433_, v___y_5434_);
lean_dec(v___y_5434_);
lean_dec_ref(v___y_5433_);
lean_dec(v___y_5432_);
lean_dec_ref(v___y_5431_);
lean_dec(v___y_5430_);
lean_dec_ref(v___y_5429_);
lean_dec(v_ref_5425_);
return v_res_5438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29(lean_object* v_msgData_5439_, lean_object* v_macroStack_5440_, lean_object* v___y_5441_, lean_object* v___y_5442_){
_start:
{
lean_object* v___x_5444_; 
v___x_5444_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___redArg(v_msgData_5439_, v_macroStack_5440_, v___y_5442_);
return v___x_5444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___boxed(lean_object* v_msgData_5445_, lean_object* v_macroStack_5446_, lean_object* v___y_5447_, lean_object* v___y_5448_, lean_object* v___y_5449_){
_start:
{
lean_object* v_res_5450_; 
v_res_5450_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29(v_msgData_5445_, v_macroStack_5446_, v___y_5447_, v___y_5448_);
lean_dec(v___y_5448_);
lean_dec_ref(v___y_5447_);
return v_res_5450_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48(lean_object* v_00_u03b1_5451_, lean_object* v_x_5452_, lean_object* v___y_5453_, lean_object* v___y_5454_){
_start:
{
lean_object* v___x_5455_; 
v___x_5455_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg(v_x_5452_, v___y_5454_);
return v___x_5455_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___boxed(lean_object* v_00_u03b1_5456_, lean_object* v_x_5457_, lean_object* v___y_5458_, lean_object* v___y_5459_){
_start:
{
lean_object* v_res_5460_; 
v_res_5460_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48(v_00_u03b1_5456_, v_x_5457_, v___y_5458_, v___y_5459_);
lean_dec_ref(v___y_5458_);
lean_dec_ref(v_x_5457_);
return v_res_5460_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51(lean_object* v_00_u03b1_5461_, lean_object* v_ref_5462_, lean_object* v___y_5463_, lean_object* v___y_5464_){
_start:
{
lean_object* v___x_5466_; 
v___x_5466_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg(v_ref_5462_);
return v___x_5466_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___boxed(lean_object* v_00_u03b1_5467_, lean_object* v_ref_5468_, lean_object* v___y_5469_, lean_object* v___y_5470_, lean_object* v___y_5471_){
_start:
{
lean_object* v_res_5472_; 
v_res_5472_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51(v_00_u03b1_5467_, v_ref_5468_, v___y_5469_, v___y_5470_);
lean_dec(v___y_5470_);
lean_dec_ref(v___y_5469_);
return v_res_5472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52(lean_object* v_00_u03b1_5473_, lean_object* v___y_5474_, lean_object* v___y_5475_){
_start:
{
lean_object* v___x_5477_; 
v___x_5477_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg();
return v___x_5477_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___boxed(lean_object* v_00_u03b1_5478_, lean_object* v___y_5479_, lean_object* v___y_5480_, lean_object* v___y_5481_){
_start:
{
lean_object* v_res_5482_; 
v_res_5482_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52(v_00_u03b1_5478_, v___y_5479_, v___y_5480_);
lean_dec(v___y_5480_);
lean_dec_ref(v___y_5479_);
return v_res_5482_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40(lean_object* v_00_u03b1_5483_, lean_object* v_x_5484_, lean_object* v___y_5485_, lean_object* v___y_5486_){
_start:
{
lean_object* v___x_5488_; 
v___x_5488_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg(v_x_5484_, v___y_5485_, v___y_5486_);
return v___x_5488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___boxed(lean_object* v_00_u03b1_5489_, lean_object* v_x_5490_, lean_object* v___y_5491_, lean_object* v___y_5492_, lean_object* v___y_5493_){
_start:
{
lean_object* v_res_5494_; 
v_res_5494_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40(v_00_u03b1_5489_, v_x_5490_, v___y_5491_, v___y_5492_);
lean_dec(v___y_5492_);
lean_dec_ref(v___y_5491_);
return v_res_5494_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42(lean_object* v_00_u03b1_5495_, lean_object* v_x_5496_, uint8_t v_when_5497_, lean_object* v___y_5498_, lean_object* v___y_5499_){
_start:
{
lean_object* v___x_5501_; 
v___x_5501_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___redArg(v_x_5496_, v_when_5497_, v___y_5498_, v___y_5499_);
return v___x_5501_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___boxed(lean_object* v_00_u03b1_5502_, lean_object* v_x_5503_, lean_object* v_when_5504_, lean_object* v___y_5505_, lean_object* v___y_5506_, lean_object* v___y_5507_){
_start:
{
uint8_t v_when_boxed_5508_; lean_object* v_res_5509_; 
v_when_boxed_5508_ = lean_unbox(v_when_5504_);
v_res_5509_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42(v_00_u03b1_5502_, v_x_5503_, v_when_boxed_5508_, v___y_5505_, v___y_5506_);
lean_dec(v___y_5506_);
lean_dec_ref(v___y_5505_);
return v_res_5509_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46(lean_object* v_00_u03b1_5510_, lean_object* v_ref_5511_, lean_object* v_constName_5512_, lean_object* v___y_5513_, lean_object* v___y_5514_){
_start:
{
lean_object* v___x_5516_; 
v___x_5516_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg(v_ref_5511_, v_constName_5512_, v___y_5513_, v___y_5514_);
return v___x_5516_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___boxed(lean_object* v_00_u03b1_5517_, lean_object* v_ref_5518_, lean_object* v_constName_5519_, lean_object* v___y_5520_, lean_object* v___y_5521_, lean_object* v___y_5522_){
_start:
{
lean_object* v_res_5523_; 
v_res_5523_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46(v_00_u03b1_5517_, v_ref_5518_, v_constName_5519_, v___y_5520_, v___y_5521_);
lean_dec(v___y_5521_);
lean_dec_ref(v___y_5520_);
lean_dec(v_ref_5518_);
return v_res_5523_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64(lean_object* v_msg_5524_, lean_object* v_declHint_5525_, lean_object* v___y_5526_, lean_object* v___y_5527_, lean_object* v___y_5528_, lean_object* v___y_5529_, lean_object* v___y_5530_, lean_object* v___y_5531_){
_start:
{
lean_object* v___x_5533_; 
v___x_5533_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg(v_msg_5524_, v_declHint_5525_, v___y_5531_);
return v___x_5533_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___boxed(lean_object* v_msg_5534_, lean_object* v_declHint_5535_, lean_object* v___y_5536_, lean_object* v___y_5537_, lean_object* v___y_5538_, lean_object* v___y_5539_, lean_object* v___y_5540_, lean_object* v___y_5541_, lean_object* v___y_5542_){
_start:
{
lean_object* v_res_5543_; 
v_res_5543_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64(v_msg_5534_, v_declHint_5535_, v___y_5536_, v___y_5537_, v___y_5538_, v___y_5539_, v___y_5540_, v___y_5541_);
lean_dec(v___y_5541_);
lean_dec_ref(v___y_5540_);
lean_dec(v___y_5539_);
lean_dec_ref(v___y_5538_);
lean_dec(v___y_5537_);
lean_dec_ref(v___y_5536_);
return v_res_5543_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50(lean_object* v_00_u03b1_5544_, lean_object* v_ref_5545_, lean_object* v_msg_5546_, lean_object* v___y_5547_, lean_object* v___y_5548_, lean_object* v___y_5549_, lean_object* v___y_5550_, lean_object* v___y_5551_, lean_object* v___y_5552_){
_start:
{
lean_object* v___x_5554_; 
v___x_5554_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50___redArg(v_ref_5545_, v_msg_5546_, v___y_5547_, v___y_5548_, v___y_5549_, v___y_5550_, v___y_5551_, v___y_5552_);
return v___x_5554_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50___boxed(lean_object* v_00_u03b1_5555_, lean_object* v_ref_5556_, lean_object* v_msg_5557_, lean_object* v___y_5558_, lean_object* v___y_5559_, lean_object* v___y_5560_, lean_object* v___y_5561_, lean_object* v___y_5562_, lean_object* v___y_5563_, lean_object* v___y_5564_){
_start:
{
lean_object* v_res_5565_; 
v_res_5565_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50(v_00_u03b1_5555_, v_ref_5556_, v_msg_5557_, v___y_5558_, v___y_5559_, v___y_5560_, v___y_5561_, v___y_5562_, v___y_5563_);
lean_dec(v___y_5563_);
lean_dec_ref(v___y_5562_);
lean_dec(v___y_5561_);
lean_dec_ref(v___y_5560_);
lean_dec(v___y_5559_);
lean_dec_ref(v___y_5558_);
lean_dec(v_ref_5556_);
return v_res_5565_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49(lean_object* v_as_5566_, lean_object* v_as_x27_5567_, lean_object* v_b_5568_, lean_object* v_a_5569_, lean_object* v___y_5570_, lean_object* v___y_5571_){
_start:
{
lean_object* v___x_5573_; 
v___x_5573_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___redArg(v_as_x27_5567_, v_b_5568_, v___y_5570_, v___y_5571_);
return v___x_5573_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___boxed(lean_object* v_as_5574_, lean_object* v_as_x27_5575_, lean_object* v_b_5576_, lean_object* v_a_5577_, lean_object* v___y_5578_, lean_object* v___y_5579_, lean_object* v___y_5580_){
_start:
{
lean_object* v_res_5581_; 
v_res_5581_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49(v_as_5574_, v_as_x27_5575_, v_b_5576_, v_a_5577_, v___y_5578_, v___y_5579_);
lean_dec(v___y_5579_);
lean_dec_ref(v___y_5578_);
lean_dec(v_as_x27_5575_);
lean_dec(v_as_5574_);
return v_res_5581_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56(lean_object* v_00_u03b2_5582_, lean_object* v_m_5583_, lean_object* v_a_5584_){
_start:
{
lean_object* v___x_5585_; 
v___x_5585_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___redArg(v_m_5583_, v_a_5584_);
return v___x_5585_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___boxed(lean_object* v_00_u03b2_5586_, lean_object* v_m_5587_, lean_object* v_a_5588_){
_start:
{
lean_object* v_res_5589_; 
v_res_5589_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56(v_00_u03b2_5586_, v_m_5587_, v_a_5588_);
lean_dec(v_a_5588_);
lean_dec_ref(v_m_5587_);
return v_res_5589_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61(lean_object* v_00_u03b1_5590_, lean_object* v_ref_5591_, lean_object* v_msg_5592_, lean_object* v_declHint_5593_, lean_object* v___y_5594_, lean_object* v___y_5595_){
_start:
{
lean_object* v___x_5597_; 
v___x_5597_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg(v_ref_5591_, v_msg_5592_, v_declHint_5593_, v___y_5594_, v___y_5595_);
return v___x_5597_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___boxed(lean_object* v_00_u03b1_5598_, lean_object* v_ref_5599_, lean_object* v_msg_5600_, lean_object* v_declHint_5601_, lean_object* v___y_5602_, lean_object* v___y_5603_, lean_object* v___y_5604_){
_start:
{
lean_object* v_res_5605_; 
v_res_5605_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61(v_00_u03b1_5598_, v_ref_5599_, v_msg_5600_, v_declHint_5601_, v___y_5602_, v___y_5603_);
lean_dec(v___y_5603_);
lean_dec_ref(v___y_5602_);
lean_dec(v_ref_5599_);
return v_res_5605_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60(lean_object* v_00_u03b2_5606_, lean_object* v_x_5607_, lean_object* v_x_5608_){
_start:
{
uint8_t v___x_5609_; 
v___x_5609_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___redArg(v_x_5607_, v_x_5608_);
return v___x_5609_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___boxed(lean_object* v_00_u03b2_5610_, lean_object* v_x_5611_, lean_object* v_x_5612_){
_start:
{
uint8_t v_res_5613_; lean_object* v_r_5614_; 
v_res_5613_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60(v_00_u03b2_5610_, v_x_5611_, v_x_5612_);
lean_dec_ref(v_x_5612_);
lean_dec_ref(v_x_5611_);
v_r_5614_ = lean_box(v_res_5613_);
return v_r_5614_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63(lean_object* v_00_u03b2_5615_, lean_object* v_a_5616_, lean_object* v_x_5617_){
_start:
{
lean_object* v___x_5618_; 
v___x_5618_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___redArg(v_a_5616_, v_x_5617_);
return v___x_5618_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___boxed(lean_object* v_00_u03b2_5619_, lean_object* v_a_5620_, lean_object* v_x_5621_){
_start:
{
lean_object* v_res_5622_; 
v_res_5622_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63(v_00_u03b2_5619_, v_a_5620_, v_x_5621_);
lean_dec(v_x_5621_);
lean_dec(v_a_5620_);
return v_res_5622_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72(lean_object* v_msg_5623_, lean_object* v_declHint_5624_, lean_object* v___y_5625_, lean_object* v___y_5626_){
_start:
{
lean_object* v___x_5628_; 
v___x_5628_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg(v_msg_5623_, v_declHint_5624_, v___y_5626_);
return v___x_5628_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___boxed(lean_object* v_msg_5629_, lean_object* v_declHint_5630_, lean_object* v___y_5631_, lean_object* v___y_5632_, lean_object* v___y_5633_){
_start:
{
lean_object* v_res_5634_; 
v_res_5634_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72(v_msg_5629_, v_declHint_5630_, v___y_5631_, v___y_5632_);
lean_dec(v___y_5632_);
lean_dec_ref(v___y_5631_);
return v_res_5634_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66(lean_object* v_00_u03b2_5635_, lean_object* v_x_5636_, size_t v_x_5637_, lean_object* v_x_5638_){
_start:
{
uint8_t v___x_5639_; 
v___x_5639_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___redArg(v_x_5636_, v_x_5637_, v_x_5638_);
return v___x_5639_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___boxed(lean_object* v_00_u03b2_5640_, lean_object* v_x_5641_, lean_object* v_x_5642_, lean_object* v_x_5643_){
_start:
{
size_t v_x_56476__boxed_5644_; uint8_t v_res_5645_; lean_object* v_r_5646_; 
v_x_56476__boxed_5644_ = lean_unbox_usize(v_x_5642_);
lean_dec(v_x_5642_);
v_res_5645_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66(v_00_u03b2_5640_, v_x_5641_, v_x_56476__boxed_5644_, v_x_5643_);
lean_dec_ref(v_x_5643_);
lean_dec_ref(v_x_5641_);
v_r_5646_ = lean_box(v_res_5645_);
return v_r_5646_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70(lean_object* v_00_u03b2_5647_, lean_object* v_keys_5648_, lean_object* v_vals_5649_, lean_object* v_heq_5650_, lean_object* v_i_5651_, lean_object* v_k_5652_){
_start:
{
uint8_t v___x_5653_; 
v___x_5653_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___redArg(v_keys_5648_, v_i_5651_, v_k_5652_);
return v___x_5653_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___boxed(lean_object* v_00_u03b2_5654_, lean_object* v_keys_5655_, lean_object* v_vals_5656_, lean_object* v_heq_5657_, lean_object* v_i_5658_, lean_object* v_k_5659_){
_start:
{
uint8_t v_res_5660_; lean_object* v_r_5661_; 
v_res_5660_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70(v_00_u03b2_5654_, v_keys_5655_, v_vals_5656_, v_heq_5657_, v_i_5658_, v_k_5659_);
lean_dec_ref(v_k_5659_);
lean_dec_ref(v_vals_5656_);
lean_dec_ref(v_keys_5655_);
v_r_5661_ = lean_box(v_res_5660_);
return v_r_5661_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1(){
_start:
{
lean_object* v___x_5675_; lean_object* v___x_5676_; lean_object* v___x_5677_; lean_object* v___x_5678_; lean_object* v___x_5679_; 
v___x_5675_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_5676_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1));
v___x_5677_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__3));
v___x_5678_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___boxed), 4, 0);
v___x_5679_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5675_, v___x_5676_, v___x_5677_, v___x_5678_);
return v___x_5679_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___boxed(lean_object* v___y_5680_){
_start:
{
lean_object* v_res_5681_; 
v_res_5681_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1();
return v_res_5681_;
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
