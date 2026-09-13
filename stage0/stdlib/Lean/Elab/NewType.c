// Lean compiler output
// Module: Lean.Elab.NewType
// Imports: public import Lean.Elab.Command public import Lean.Elab.DeclModifiers public import Lean.Elab.DeclarationRange public import Lean.Meta.VirtualStructure
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
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
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
lean_object* l_Lean_stringToMessageData(lean_object*);
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
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint32_t l_Lean_getMaxHeight(lean_object*, lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_compileDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_registerVirtualStructure(lean_object*, lean_object*);
lean_object* l_Lean_enableRealizationsForConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftCoreM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_string_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "self"};
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(120, 226, 111, 209, 39, 160, 197, 219)}};
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2___closed__1 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__12___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "invalid `newtype`, the right-hand side must be a type, but has type"};
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__16_spec__23___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__16_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__16___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25_spec__28___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25_spec__28___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25_spec__28___lam__0___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25_spec__28___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25_spec__28___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25_spec__28___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25_spec__28___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25_spec__28___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25_spec__28(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25_spec__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "This linter can be disabled with `set_option "};
static const lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17___closed__0 = (const lean_object*)&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17___closed__0_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17___closed__1;
static const lean_string_object l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " false`"};
static const lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17___closed__2 = (const lean_object*)&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17___closed__2_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17___closed__3;
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__20___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "; the modifier has no effect"};
static const lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__0 = (const lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__1;
static const lean_string_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "`public` is the default visibility"};
static const lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__2 = (const lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__2_value;
static lean_once_cell_t l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__3;
static const lean_string_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = " inside a `public section`"};
static const lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__4 = (const lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__4_value;
static const lean_string_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__5 = (const lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__5_value;
static const lean_string_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__6 = (const lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__6_value;
static const lean_string_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__7 = (const lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__7_value;
static const lean_string_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__8 = (const lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__8_value;
static const lean_ctor_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(213, 248, 16, 228, 25, 227, 72, 143)}};
static const lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__9 = (const lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__9_value;
static const lean_string_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__10 = (const lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__10_value;
static const lean_ctor_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__11_value_aux_1),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__11_value_aux_2),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(99, 134, 241, 204, 211, 206, 124, 144)}};
static const lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__11 = (const lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__11_value;
static const lean_string_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "unexpected visibility modifier"};
static const lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__12 = (const lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__12_value;
static lean_once_cell_t l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__13;
static const lean_string_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 115, .m_capacity = 115, .m_length = 114, .m_data = "`private` has no effect in a `module` file outside `public section`; declarations are already `private` by default"};
static const lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__14 = (const lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__14_value;
static lean_once_cell_t l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__15;
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20_spec__28(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20_spec__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20_spec__29_spec__32(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20_spec__29_spec__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20_spec__29(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20_spec__29___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception: "};
static const lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20___closed__0 = (const lean_object*)&l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20___closed__0_value;
static lean_once_cell_t l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "byTactic"};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__0___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__0___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__0___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__0___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(187, 150, 238, 148, 228, 221, 116, 224)}};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__0___closed__2_value;
LEAN_EXPORT uint8_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33_spec__45___redArg___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33_spec__45___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33_spec__45___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33_spec__45___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44_spec__48_spec__52___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44_spec__48_spec__52___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44_spec__48___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44_spec__48___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__35___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__35___closed__0;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__35___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__35___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__35___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__35(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__35___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__0;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__1 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__1_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__1_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__2 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__2_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__3_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__4;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__5_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__6;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__7;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25_spec__28___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__8 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__8_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__9;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__10 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__10_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__11;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__12 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__12_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__13;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__14 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__14_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__15_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__42(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__42___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__43_spec__47___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__43_spec__47___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__43___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__43___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__36___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__36___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__38(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__38___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__37___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__37___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = "maximum recursion depth has been reached\nuse `set_option maxRecDepth <num>` to increase limit\nuse `set_option diagnostics true` to get diagnostic information"};
static const lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Cannot use attribute `["};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__1;
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "]`: module `"};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__3;
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "` is loaded for IR only (reached as a private `meta` dependency). Add an import of `"};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__4_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__5;
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__6 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__6_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__7;
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Unknown attribute `["};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__8 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__8_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__9;
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]`"};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__10 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__10_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__11;
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__12 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__12_value;
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__13 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__13_value;
static const lean_ctor_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__14_value_aux_0),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__14_value_aux_1),((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__14_value_aux_2),((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__14 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__14_value;
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Unknown attribute"};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__15 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__15_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__16;
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___closed__0 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__22(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6___closed__0 = (const lean_object*)&l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "partial"};
static const lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__0 = (const lean_object*)&l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 175, 198, 167, 172, 79, 14, 207)}};
static const lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__1 = (const lean_object*)&l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__1_value;
static const lean_ctor_object l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__2_value_aux_2),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__15_value),LEAN_SCALAR_PTR_LITERAL(124, 247, 59, 43, 44, 177, 111, 66)}};
static const lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__2 = (const lean_object*)&l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__0;
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__11;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_elabNewtype___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "newtypeCmd"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__0_value),LEAN_SCALAR_PTR_LITERAL(206, 214, 155, 84, 76, 243, 163, 92)}};
static const lean_object* l_Lean_Elab_Command_elabNewtype___closed__1 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___closed__2 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* l_Lean_Elab_Command_elabNewtype___closed__3 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__3_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___closed__4 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__4_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Elab_Command_elabNewtype___closed__5 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__5_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___closed__6 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 214, 247, 82, 130, 198, 123, 173)}};
static const lean_object* l_Lean_Elab_Command_elabNewtype___closed__7 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__7_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___closed__8 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__8_value),LEAN_SCALAR_PTR_LITERAL(157, 246, 223, 221, 242, 35, 238, 117)}};
static const lean_object* l_Lean_Elab_Command_elabNewtype___closed__9 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__9_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___closed__10 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__11_value_aux_1),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__11_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__10_value),LEAN_SCALAR_PTR_LITERAL(248, 187, 217, 228, 39, 184, 218, 135)}};
static const lean_object* l_Lean_Elab_Command_elabNewtype___closed__11 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__11_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___closed__12 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__12_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "optDeclSig"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___closed__13 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__14_value_aux_0),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__14_value_aux_1),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__14_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__13_value),LEAN_SCALAR_PTR_LITERAL(26, 9, 103, 232, 183, 57, 246, 75)}};
static const lean_object* l_Lean_Elab_Command_elabNewtype___closed__14 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__14_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___closed__15 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__15_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__15_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_Command_elabNewtype___closed__16 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__16_value;
static lean_once_cell_t l_Lean_Elab_Command_elabNewtype___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabNewtype___closed__17;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___closed__18 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__18_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__19_value_aux_0),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__19_value_aux_1),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__19_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__18_value),LEAN_SCALAR_PTR_LITERAL(228, 117, 47, 248, 145, 185, 135, 188)}};
static const lean_object* l_Lean_Elab_Command_elabNewtype___closed__19 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__19_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lean_Elab_Command_elabNewtype___closed__20 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__20_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___closed__21 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__21_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___closed__22 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__22_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__23_value_aux_0),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__23_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__21_value),LEAN_SCALAR_PTR_LITERAL(128, 225, 226, 49, 186, 161, 212, 105)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__23_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__22_value),LEAN_SCALAR_PTR_LITERAL(245, 187, 99, 45, 217, 244, 244, 120)}};
static const lean_object* l_Lean_Elab_Command_elabNewtype___closed__23 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___closed__23_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__16_spec__23(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__16_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__20(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__36(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__36___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33_spec__45(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33_spec__45___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__37(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__37___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__43(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__43___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__43_spec__47(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__43_spec__47___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44_spec__48(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44_spec__48___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44_spec__48_spec__52(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44_spec__48_spec__52___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "elabNewtype"};
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(140, 106, 150, 17, 51, 30, 9, 241)}};
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__2_value;
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
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___lam__0(lean_object* v_k_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_){
_start:
{
lean_object* v___x_65_; 
lean_inc(v___y_59_);
lean_inc_ref(v___y_58_);
v___x_65_ = lean_apply_7(v_k_57_, v___y_58_, v___y_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_, lean_box(0));
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___lam__0___boxed(lean_object* v_k_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___lam__0(v_k_66_, v___y_67_, v___y_68_, v___y_69_, v___y_70_, v___y_71_, v___y_72_);
lean_dec(v___y_68_);
lean_dec_ref(v___y_67_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg(lean_object* v_bs_75_, lean_object* v_k_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_){
_start:
{
lean_object* v___f_84_; lean_object* v___x_85_; 
lean_inc(v___y_78_);
lean_inc_ref(v___y_77_);
v___f_84_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_84_, 0, v_k_76_);
lean_closure_set(v___f_84_, 1, v___y_77_);
lean_closure_set(v___f_84_, 2, v___y_78_);
v___x_85_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewBinderInfosImp(lean_box(0), v_bs_75_, v___f_84_, v___y_79_, v___y_80_, v___y_81_, v___y_82_);
if (lean_obj_tag(v___x_85_) == 0)
{
return v___x_85_;
}
else
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
v_reuseFailAlloc_92_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___boxed(lean_object* v_bs_94_, lean_object* v_k_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg(v_bs_94_, v_k_95_, v___y_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_, v___y_101_);
lean_dec(v___y_101_);
lean_dec_ref(v___y_100_);
lean_dec(v___y_99_);
lean_dec_ref(v___y_98_);
lean_dec(v___y_97_);
lean_dec_ref(v___y_96_);
lean_dec_ref(v_bs_94_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5(lean_object* v_00_u03b1_104_, lean_object* v_bs_105_, lean_object* v_k_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg(v_bs_105_, v_k_106_, v___y_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_, v___y_112_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___boxed(lean_object* v_00_u03b1_115_, lean_object* v_bs_116_, lean_object* v_k_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5(v_00_u03b1_115_, v_bs_116_, v_k_117_, v___y_118_, v___y_119_, v___y_120_, v___y_121_, v___y_122_, v___y_123_);
lean_dec(v___y_123_);
lean_dec_ref(v___y_122_);
lean_dec(v___y_121_);
lean_dec_ref(v___y_120_);
lean_dec(v___y_119_);
lean_dec_ref(v___y_118_);
lean_dec_ref(v_bs_116_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg___lam__0(lean_object* v_k_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v_b_129_, lean_object* v_c_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_){
_start:
{
lean_object* v___x_136_; 
lean_inc(v___y_134_);
lean_inc_ref(v___y_133_);
lean_inc(v___y_132_);
lean_inc_ref(v___y_131_);
lean_inc(v___y_128_);
lean_inc_ref(v___y_127_);
v___x_136_ = lean_apply_9(v_k_126_, v_b_129_, v_c_130_, v___y_127_, v___y_128_, v___y_131_, v___y_132_, v___y_133_, v___y_134_, lean_box(0));
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg___lam__0___boxed(lean_object* v_k_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v_b_140_, lean_object* v_c_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_){
_start:
{
lean_object* v_res_147_; 
v_res_147_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg___lam__0(v_k_137_, v___y_138_, v___y_139_, v_b_140_, v_c_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_);
lean_dec(v___y_145_);
lean_dec_ref(v___y_144_);
lean_dec(v___y_143_);
lean_dec_ref(v___y_142_);
lean_dec(v___y_139_);
lean_dec_ref(v___y_138_);
return v_res_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(lean_object* v_type_148_, lean_object* v_k_149_, uint8_t v_cleanupAnnotations_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_){
_start:
{
lean_object* v___f_158_; uint8_t v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
lean_inc(v___y_152_);
lean_inc_ref(v___y_151_);
v___f_158_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_158_, 0, v_k_149_);
lean_closure_set(v___f_158_, 1, v___y_151_);
lean_closure_set(v___f_158_, 2, v___y_152_);
v___x_159_ = 0;
v___x_160_ = lean_box(0);
v___x_161_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_159_, v___x_160_, v_type_148_, v___f_158_, v_cleanupAnnotations_150_, v___x_159_, v___y_153_, v___y_154_, v___y_155_, v___y_156_);
if (lean_obj_tag(v___x_161_) == 0)
{
return v___x_161_;
}
else
{
lean_object* v_a_162_; lean_object* v___x_164_; uint8_t v_isShared_165_; uint8_t v_isSharedCheck_169_; 
v_a_162_ = lean_ctor_get(v___x_161_, 0);
v_isSharedCheck_169_ = !lean_is_exclusive(v___x_161_);
if (v_isSharedCheck_169_ == 0)
{
v___x_164_ = v___x_161_;
v_isShared_165_ = v_isSharedCheck_169_;
goto v_resetjp_163_;
}
else
{
lean_inc(v_a_162_);
lean_dec(v___x_161_);
v___x_164_ = lean_box(0);
v_isShared_165_ = v_isSharedCheck_169_;
goto v_resetjp_163_;
}
v_resetjp_163_:
{
lean_object* v___x_167_; 
if (v_isShared_165_ == 0)
{
v___x_167_ = v___x_164_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v_a_162_);
v___x_167_ = v_reuseFailAlloc_168_;
goto v_reusejp_166_;
}
v_reusejp_166_:
{
return v___x_167_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg___boxed(lean_object* v_type_170_, lean_object* v_k_171_, lean_object* v_cleanupAnnotations_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_180_; lean_object* v_res_181_; 
v_cleanupAnnotations_boxed_180_ = lean_unbox(v_cleanupAnnotations_172_);
v_res_181_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(v_type_170_, v_k_171_, v_cleanupAnnotations_boxed_180_, v___y_173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_);
lean_dec(v___y_178_);
lean_dec_ref(v___y_177_);
lean_dec(v___y_176_);
lean_dec_ref(v___y_175_);
lean_dec(v___y_174_);
lean_dec_ref(v___y_173_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7(lean_object* v_00_u03b1_182_, lean_object* v_type_183_, lean_object* v_k_184_, uint8_t v_cleanupAnnotations_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_){
_start:
{
lean_object* v___x_193_; 
v___x_193_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(v_type_183_, v_k_184_, v_cleanupAnnotations_185_, v___y_186_, v___y_187_, v___y_188_, v___y_189_, v___y_190_, v___y_191_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___boxed(lean_object* v_00_u03b1_194_, lean_object* v_type_195_, lean_object* v_k_196_, lean_object* v_cleanupAnnotations_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_205_; lean_object* v_res_206_; 
v_cleanupAnnotations_boxed_205_ = lean_unbox(v_cleanupAnnotations_197_);
v_res_206_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7(v_00_u03b1_194_, v_type_195_, v_k_196_, v_cleanupAnnotations_boxed_205_, v___y_198_, v___y_199_, v___y_200_, v___y_201_, v___y_202_, v___y_203_);
lean_dec(v___y_203_);
lean_dec_ref(v___y_202_);
lean_dec(v___y_201_);
lean_dec_ref(v___y_200_);
lean_dec(v___y_199_);
lean_dec_ref(v___y_198_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__0(lean_object* v_params_207_, lean_object* v_resultType_208_, lean_object* v_name_209_, lean_object* v_levelParams_210_, uint8_t v___x_211_, lean_object* v_a_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_){
_start:
{
lean_object* v___x_220_; uint8_t v___x_221_; uint8_t v___x_222_; uint8_t v___x_223_; lean_object* v___x_224_; 
lean_inc_ref(v_a_212_);
v___x_220_ = lean_array_push(v_params_207_, v_a_212_);
v___x_221_ = 0;
v___x_222_ = 1;
v___x_223_ = 1;
v___x_224_ = l_Lean_Meta_mkForallFVars(v___x_220_, v_resultType_208_, v___x_221_, v___x_222_, v___x_222_, v___x_223_, v___y_215_, v___y_216_, v___y_217_, v___y_218_);
if (lean_obj_tag(v___x_224_) == 0)
{
lean_object* v_a_225_; lean_object* v___x_226_; 
v_a_225_ = lean_ctor_get(v___x_224_, 0);
lean_inc(v_a_225_);
lean_dec_ref_known(v___x_224_, 1);
v___x_226_ = l_Lean_Meta_mkLambdaFVars(v___x_220_, v_a_212_, v___x_221_, v___x_222_, v___x_221_, v___x_222_, v___x_223_, v___y_215_, v___y_216_, v___y_217_, v___y_218_);
lean_dec_ref(v___x_220_);
if (lean_obj_tag(v___x_226_) == 0)
{
lean_object* v_a_227_; lean_object* v___x_228_; lean_object* v_env_229_; uint32_t v___x_230_; uint32_t v___x_231_; uint32_t v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v_a_235_; lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_244_; 
v_a_227_ = lean_ctor_get(v___x_226_, 0);
lean_inc_n(v_a_227_, 2);
lean_dec_ref_known(v___x_226_, 1);
v___x_228_ = lean_st_ref_get(v___y_218_);
v_env_229_ = lean_ctor_get(v___x_228_, 0);
lean_inc_ref(v_env_229_);
lean_dec(v___x_228_);
v___x_230_ = l_Lean_getMaxHeight(v_env_229_, v_a_227_);
v___x_231_ = 1;
v___x_232_ = lean_uint32_add(v___x_230_, v___x_231_);
v___x_233_ = lean_alloc_ctor(2, 0, 4);
lean_ctor_set_uint32(v___x_233_, 0, v___x_232_);
v___x_234_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__3___redArg(v_name_209_, v_levelParams_210_, v_a_225_, v_a_227_, v___x_233_, v___y_218_);
v_a_235_ = lean_ctor_get(v___x_234_, 0);
v_isSharedCheck_244_ = !lean_is_exclusive(v___x_234_);
if (v_isSharedCheck_244_ == 0)
{
v___x_237_ = v___x_234_;
v_isShared_238_ = v_isSharedCheck_244_;
goto v_resetjp_236_;
}
else
{
lean_inc(v_a_235_);
lean_dec(v___x_234_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_244_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
lean_object* v___x_240_; 
if (v_isShared_238_ == 0)
{
lean_ctor_set_tag(v___x_237_, 1);
v___x_240_ = v___x_237_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v_a_235_);
v___x_240_ = v_reuseFailAlloc_243_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
lean_object* v___x_241_; 
lean_inc_ref(v___x_240_);
v___x_241_ = l_Lean_addDecl(v___x_240_, v___x_211_, v___y_217_, v___y_218_);
if (lean_obj_tag(v___x_241_) == 0)
{
lean_object* v___x_242_; 
lean_dec_ref_known(v___x_241_, 1);
v___x_242_ = l_Lean_compileDecl(v___x_240_, v___x_222_, v___y_217_, v___y_218_);
return v___x_242_;
}
else
{
lean_dec_ref(v___x_240_);
return v___x_241_;
}
}
}
}
else
{
lean_object* v_a_245_; lean_object* v___x_247_; uint8_t v_isShared_248_; uint8_t v_isSharedCheck_252_; 
lean_dec(v_a_225_);
lean_dec(v_levelParams_210_);
lean_dec(v_name_209_);
v_a_245_ = lean_ctor_get(v___x_226_, 0);
v_isSharedCheck_252_ = !lean_is_exclusive(v___x_226_);
if (v_isSharedCheck_252_ == 0)
{
v___x_247_ = v___x_226_;
v_isShared_248_ = v_isSharedCheck_252_;
goto v_resetjp_246_;
}
else
{
lean_inc(v_a_245_);
lean_dec(v___x_226_);
v___x_247_ = lean_box(0);
v_isShared_248_ = v_isSharedCheck_252_;
goto v_resetjp_246_;
}
v_resetjp_246_:
{
lean_object* v___x_250_; 
if (v_isShared_248_ == 0)
{
v___x_250_ = v___x_247_;
goto v_reusejp_249_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v_a_245_);
v___x_250_ = v_reuseFailAlloc_251_;
goto v_reusejp_249_;
}
v_reusejp_249_:
{
return v___x_250_;
}
}
}
}
else
{
lean_object* v_a_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_260_; 
lean_dec_ref(v___x_220_);
lean_dec_ref(v_a_212_);
lean_dec(v_levelParams_210_);
lean_dec(v_name_209_);
v_a_253_ = lean_ctor_get(v___x_224_, 0);
v_isSharedCheck_260_ = !lean_is_exclusive(v___x_224_);
if (v_isSharedCheck_260_ == 0)
{
v___x_255_ = v___x_224_;
v_isShared_256_ = v_isSharedCheck_260_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_a_253_);
lean_dec(v___x_224_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_260_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
lean_object* v___x_258_; 
if (v_isShared_256_ == 0)
{
v___x_258_ = v___x_255_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v_a_253_);
v___x_258_ = v_reuseFailAlloc_259_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
return v___x_258_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__0___boxed(lean_object* v_params_261_, lean_object* v_resultType_262_, lean_object* v_name_263_, lean_object* v_levelParams_264_, lean_object* v___x_265_, lean_object* v_a_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_){
_start:
{
uint8_t v___x_8994__boxed_274_; lean_object* v_res_275_; 
v___x_8994__boxed_274_ = lean_unbox(v___x_265_);
v_res_275_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__0(v_params_261_, v_resultType_262_, v_name_263_, v_levelParams_264_, v___x_8994__boxed_274_, v_a_266_, v___y_267_, v___y_268_, v___y_269_, v___y_270_, v___y_271_, v___y_272_);
lean_dec(v___y_272_);
lean_dec_ref(v___y_271_);
lean_dec(v___y_270_);
lean_dec_ref(v___y_269_);
lean_dec(v___y_268_);
lean_dec_ref(v___y_267_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg___lam__0(lean_object* v_k_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v_b_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_){
_start:
{
lean_object* v___x_285_; 
lean_inc(v___y_283_);
lean_inc_ref(v___y_282_);
lean_inc(v___y_281_);
lean_inc_ref(v___y_280_);
lean_inc(v___y_278_);
lean_inc_ref(v___y_277_);
v___x_285_ = lean_apply_8(v_k_276_, v_b_279_, v___y_277_, v___y_278_, v___y_280_, v___y_281_, v___y_282_, v___y_283_, lean_box(0));
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg___lam__0___boxed(lean_object* v_k_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v_b_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_){
_start:
{
lean_object* v_res_295_; 
v_res_295_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg___lam__0(v_k_286_, v___y_287_, v___y_288_, v_b_289_, v___y_290_, v___y_291_, v___y_292_, v___y_293_);
lean_dec(v___y_293_);
lean_dec_ref(v___y_292_);
lean_dec(v___y_291_);
lean_dec_ref(v___y_290_);
lean_dec(v___y_288_);
lean_dec_ref(v___y_287_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg(lean_object* v_name_296_, uint8_t v_bi_297_, lean_object* v_type_298_, lean_object* v_k_299_, uint8_t v_kind_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_){
_start:
{
lean_object* v___f_308_; lean_object* v___x_309_; 
lean_inc(v___y_302_);
lean_inc_ref(v___y_301_);
v___f_308_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_308_, 0, v_k_299_);
lean_closure_set(v___f_308_, 1, v___y_301_);
lean_closure_set(v___f_308_, 2, v___y_302_);
v___x_309_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_296_, v_bi_297_, v_type_298_, v___f_308_, v_kind_300_, v___y_303_, v___y_304_, v___y_305_, v___y_306_);
if (lean_obj_tag(v___x_309_) == 0)
{
return v___x_309_;
}
else
{
lean_object* v_a_310_; lean_object* v___x_312_; uint8_t v_isShared_313_; uint8_t v_isSharedCheck_317_; 
v_a_310_ = lean_ctor_get(v___x_309_, 0);
v_isSharedCheck_317_ = !lean_is_exclusive(v___x_309_);
if (v_isSharedCheck_317_ == 0)
{
v___x_312_ = v___x_309_;
v_isShared_313_ = v_isSharedCheck_317_;
goto v_resetjp_311_;
}
else
{
lean_inc(v_a_310_);
lean_dec(v___x_309_);
v___x_312_ = lean_box(0);
v_isShared_313_ = v_isSharedCheck_317_;
goto v_resetjp_311_;
}
v_resetjp_311_:
{
lean_object* v___x_315_; 
if (v_isShared_313_ == 0)
{
v___x_315_ = v___x_312_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_a_310_);
v___x_315_ = v_reuseFailAlloc_316_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
return v___x_315_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg___boxed(lean_object* v_name_318_, lean_object* v_bi_319_, lean_object* v_type_320_, lean_object* v_k_321_, lean_object* v_kind_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_){
_start:
{
uint8_t v_bi_boxed_330_; uint8_t v_kind_boxed_331_; lean_object* v_res_332_; 
v_bi_boxed_330_ = lean_unbox(v_bi_319_);
v_kind_boxed_331_ = lean_unbox(v_kind_322_);
v_res_332_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg(v_name_318_, v_bi_boxed_330_, v_type_320_, v_k_321_, v_kind_boxed_331_, v___y_323_, v___y_324_, v___y_325_, v___y_326_, v___y_327_, v___y_328_);
lean_dec(v___y_328_);
lean_dec_ref(v___y_327_);
lean_dec(v___y_326_);
lean_dec_ref(v___y_325_);
lean_dec(v___y_324_);
lean_dec_ref(v___y_323_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg(lean_object* v_name_333_, lean_object* v_type_334_, lean_object* v_k_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_){
_start:
{
uint8_t v___x_343_; uint8_t v___x_344_; lean_object* v___x_345_; 
v___x_343_ = 0;
v___x_344_ = 0;
v___x_345_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg(v_name_333_, v___x_343_, v_type_334_, v_k_335_, v___x_344_, v___y_336_, v___y_337_, v___y_338_, v___y_339_, v___y_340_, v___y_341_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg___boxed(lean_object* v_name_346_, lean_object* v_type_347_, lean_object* v_k_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_){
_start:
{
lean_object* v_res_356_; 
v_res_356_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg(v_name_346_, v_type_347_, v_k_348_, v___y_349_, v___y_350_, v___y_351_, v___y_352_, v___y_353_, v___y_354_);
lean_dec(v___y_354_);
lean_dec_ref(v___y_353_);
lean_dec(v___y_352_);
lean_dec_ref(v___y_351_);
lean_dec(v___y_350_);
lean_dec_ref(v___y_349_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__1(lean_object* v_params_357_, lean_object* v_levelParams_358_, uint8_t v___x_359_, lean_object* v_name_360_, lean_object* v_argName_361_, lean_object* v_argType_362_, lean_object* v_resultType_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_){
_start:
{
lean_object* v___x_371_; lean_object* v___f_372_; lean_object* v___x_373_; 
v___x_371_ = lean_box(v___x_359_);
v___f_372_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__0___boxed), 13, 5);
lean_closure_set(v___f_372_, 0, v_params_357_);
lean_closure_set(v___f_372_, 1, v_resultType_363_);
lean_closure_set(v___f_372_, 2, v_name_360_);
lean_closure_set(v___f_372_, 3, v_levelParams_358_);
lean_closure_set(v___f_372_, 4, v___x_371_);
v___x_373_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg(v_argName_361_, v_argType_362_, v___f_372_, v___y_364_, v___y_365_, v___y_366_, v___y_367_, v___y_368_, v___y_369_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__1___boxed(lean_object* v_params_374_, lean_object* v_levelParams_375_, lean_object* v___x_376_, lean_object* v_name_377_, lean_object* v_argName_378_, lean_object* v_argType_379_, lean_object* v_resultType_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_){
_start:
{
uint8_t v___x_9193__boxed_388_; lean_object* v_res_389_; 
v___x_9193__boxed_388_ = lean_unbox(v___x_376_);
v_res_389_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__1(v_params_374_, v_levelParams_375_, v___x_9193__boxed_388_, v_name_377_, v_argName_378_, v_argType_379_, v_resultType_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
lean_dec(v___y_384_);
lean_dec_ref(v___y_383_);
lean_dec(v___y_382_);
lean_dec_ref(v___y_381_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2(lean_object* v___f_393_, lean_object* v_ctorName_394_, lean_object* v_fieldName_395_, lean_object* v___x_396_, lean_object* v___x_397_, lean_object* v_projName_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_){
_start:
{
lean_object* v___x_406_; 
lean_inc_ref(v___f_393_);
lean_inc(v___y_404_);
lean_inc_ref(v___y_403_);
lean_inc(v___y_402_);
lean_inc_ref(v___y_401_);
lean_inc(v___y_400_);
lean_inc_ref(v___y_399_);
lean_inc_ref(v___x_397_);
lean_inc_ref(v___x_396_);
v___x_406_ = lean_apply_11(v___f_393_, v_ctorName_394_, v_fieldName_395_, v___x_396_, v___x_397_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_, lean_box(0));
if (lean_obj_tag(v___x_406_) == 0)
{
lean_object* v___x_407_; lean_object* v___x_408_; 
lean_dec_ref_known(v___x_406_, 1);
v___x_407_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2___closed__1));
v___x_408_ = lean_apply_11(v___f_393_, v_projName_398_, v___x_407_, v___x_397_, v___x_396_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_, lean_box(0));
return v___x_408_;
}
else
{
lean_dec(v___y_404_);
lean_dec_ref(v___y_403_);
lean_dec(v___y_402_);
lean_dec_ref(v___y_401_);
lean_dec(v___y_400_);
lean_dec_ref(v___y_399_);
lean_dec(v_projName_398_);
lean_dec_ref(v___x_397_);
lean_dec_ref(v___x_396_);
lean_dec_ref(v___f_393_);
return v___x_406_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2___boxed(lean_object* v___f_409_, lean_object* v_ctorName_410_, lean_object* v_fieldName_411_, lean_object* v___x_412_, lean_object* v___x_413_, lean_object* v_projName_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
lean_object* v_res_422_; 
v_res_422_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2(v___f_409_, v_ctorName_410_, v_fieldName_411_, v___x_412_, v___x_413_, v_projName_414_, v___y_415_, v___y_416_, v___y_417_, v___y_418_, v___y_419_, v___y_420_);
return v_res_422_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__12(lean_object* v_opts_423_, lean_object* v_opt_424_){
_start:
{
lean_object* v_name_425_; lean_object* v_defValue_426_; lean_object* v_map_427_; lean_object* v___x_428_; 
v_name_425_ = lean_ctor_get(v_opt_424_, 0);
v_defValue_426_ = lean_ctor_get(v_opt_424_, 1);
v_map_427_ = lean_ctor_get(v_opts_423_, 0);
v___x_428_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_427_, v_name_425_);
if (lean_obj_tag(v___x_428_) == 0)
{
uint8_t v___x_429_; 
v___x_429_ = lean_unbox(v_defValue_426_);
return v___x_429_;
}
else
{
lean_object* v_val_430_; 
v_val_430_ = lean_ctor_get(v___x_428_, 0);
lean_inc(v_val_430_);
lean_dec_ref_known(v___x_428_, 1);
if (lean_obj_tag(v_val_430_) == 1)
{
uint8_t v_v_431_; 
v_v_431_ = lean_ctor_get_uint8(v_val_430_, 0);
lean_dec_ref_known(v_val_430_, 0);
return v_v_431_;
}
else
{
uint8_t v___x_432_; 
lean_dec(v_val_430_);
v___x_432_ = lean_unbox(v_defValue_426_);
return v___x_432_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__12___boxed(lean_object* v_opts_433_, lean_object* v_opt_434_){
_start:
{
uint8_t v_res_435_; lean_object* v_r_436_; 
v_res_435_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__12(v_opts_433_, v_opt_434_);
lean_dec_ref(v_opt_434_);
lean_dec_ref(v_opts_433_);
v_r_436_ = lean_box(v_res_435_);
return v_r_436_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0(void){
_start:
{
lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_437_ = lean_box(1);
v___x_438_ = l_Lean_MessageData_ofFormat(v___x_437_);
return v___x_438_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__3(void){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_442_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__2));
v___x_443_ = l_Lean_MessageData_ofFormat(v___x_442_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13(lean_object* v_x_444_, lean_object* v_x_445_){
_start:
{
if (lean_obj_tag(v_x_445_) == 0)
{
return v_x_444_;
}
else
{
lean_object* v_head_446_; lean_object* v_tail_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_469_; 
v_head_446_ = lean_ctor_get(v_x_445_, 0);
v_tail_447_ = lean_ctor_get(v_x_445_, 1);
v_isSharedCheck_469_ = !lean_is_exclusive(v_x_445_);
if (v_isSharedCheck_469_ == 0)
{
v___x_449_ = v_x_445_;
v_isShared_450_ = v_isSharedCheck_469_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_tail_447_);
lean_inc(v_head_446_);
lean_dec(v_x_445_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_469_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v_before_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_467_; 
v_before_451_ = lean_ctor_get(v_head_446_, 0);
v_isSharedCheck_467_ = !lean_is_exclusive(v_head_446_);
if (v_isSharedCheck_467_ == 0)
{
lean_object* v_unused_468_; 
v_unused_468_ = lean_ctor_get(v_head_446_, 1);
lean_dec(v_unused_468_);
v___x_453_ = v_head_446_;
v_isShared_454_ = v_isSharedCheck_467_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_before_451_);
lean_dec(v_head_446_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_467_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
lean_object* v___x_455_; lean_object* v___x_457_; 
v___x_455_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0);
if (v_isShared_454_ == 0)
{
lean_ctor_set_tag(v___x_453_, 7);
lean_ctor_set(v___x_453_, 1, v___x_455_);
lean_ctor_set(v___x_453_, 0, v_x_444_);
v___x_457_ = v___x_453_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v_x_444_);
lean_ctor_set(v_reuseFailAlloc_466_, 1, v___x_455_);
v___x_457_ = v_reuseFailAlloc_466_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
lean_object* v___x_458_; lean_object* v___x_460_; 
v___x_458_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__3);
if (v_isShared_450_ == 0)
{
lean_ctor_set_tag(v___x_449_, 7);
lean_ctor_set(v___x_449_, 1, v___x_458_);
lean_ctor_set(v___x_449_, 0, v___x_457_);
v___x_460_ = v___x_449_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v___x_457_);
lean_ctor_set(v_reuseFailAlloc_465_, 1, v___x_458_);
v___x_460_ = v_reuseFailAlloc_465_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_461_ = l_Lean_MessageData_ofSyntax(v_before_451_);
v___x_462_ = l_Lean_indentD(v___x_461_);
v___x_463_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_463_, 0, v___x_460_);
lean_ctor_set(v___x_463_, 1, v___x_462_);
v_x_444_ = v___x_463_;
v_x_445_ = v_tail_447_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__2(void){
_start:
{
lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_473_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__1));
v___x_474_ = l_Lean_MessageData_ofFormat(v___x_473_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg(lean_object* v_msgData_475_, lean_object* v_macroStack_476_, lean_object* v___y_477_){
_start:
{
lean_object* v_toCold_479_; lean_object* v_options_480_; lean_object* v___x_481_; uint8_t v___x_482_; 
v_toCold_479_ = lean_ctor_get(v___y_477_, 0);
v_options_480_ = lean_ctor_get(v_toCold_479_, 2);
v___x_481_ = l_Lean_Elab_pp_macroStack;
v___x_482_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__12(v_options_480_, v___x_481_);
if (v___x_482_ == 0)
{
lean_object* v___x_483_; 
lean_dec(v_macroStack_476_);
v___x_483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_483_, 0, v_msgData_475_);
return v___x_483_;
}
else
{
if (lean_obj_tag(v_macroStack_476_) == 0)
{
lean_object* v___x_484_; 
v___x_484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_484_, 0, v_msgData_475_);
return v___x_484_;
}
else
{
lean_object* v_head_485_; lean_object* v_after_486_; lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_501_; 
v_head_485_ = lean_ctor_get(v_macroStack_476_, 0);
lean_inc(v_head_485_);
v_after_486_ = lean_ctor_get(v_head_485_, 1);
v_isSharedCheck_501_ = !lean_is_exclusive(v_head_485_);
if (v_isSharedCheck_501_ == 0)
{
lean_object* v_unused_502_; 
v_unused_502_ = lean_ctor_get(v_head_485_, 0);
lean_dec(v_unused_502_);
v___x_488_ = v_head_485_;
v_isShared_489_ = v_isSharedCheck_501_;
goto v_resetjp_487_;
}
else
{
lean_inc(v_after_486_);
lean_dec(v_head_485_);
v___x_488_ = lean_box(0);
v_isShared_489_ = v_isSharedCheck_501_;
goto v_resetjp_487_;
}
v_resetjp_487_:
{
lean_object* v___x_490_; lean_object* v___x_492_; 
v___x_490_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0);
if (v_isShared_489_ == 0)
{
lean_ctor_set_tag(v___x_488_, 7);
lean_ctor_set(v___x_488_, 1, v___x_490_);
lean_ctor_set(v___x_488_, 0, v_msgData_475_);
v___x_492_ = v___x_488_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v_msgData_475_);
lean_ctor_set(v_reuseFailAlloc_500_, 1, v___x_490_);
v___x_492_ = v_reuseFailAlloc_500_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v_msgData_497_; lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_493_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__2);
v___x_494_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_494_, 0, v___x_492_);
lean_ctor_set(v___x_494_, 1, v___x_493_);
v___x_495_ = l_Lean_MessageData_ofSyntax(v_after_486_);
v___x_496_ = l_Lean_indentD(v___x_495_);
v_msgData_497_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_497_, 0, v___x_494_);
lean_ctor_set(v_msgData_497_, 1, v___x_496_);
v___x_498_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13(v_msgData_497_, v_macroStack_476_);
v___x_499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_499_, 0, v___x_498_);
return v___x_499_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___boxed(lean_object* v_msgData_503_, lean_object* v_macroStack_504_, lean_object* v___y_505_, lean_object* v___y_506_){
_start:
{
lean_object* v_res_507_; 
v_res_507_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg(v_msgData_503_, v_macroStack_504_, v___y_505_);
lean_dec_ref(v___y_505_);
return v_res_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__9(lean_object* v_msgData_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_){
_start:
{
lean_object* v___x_514_; lean_object* v_env_515_; lean_object* v___x_516_; lean_object* v_toCold_517_; lean_object* v_mctx_518_; lean_object* v_lctx_519_; lean_object* v_options_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; 
v___x_514_ = lean_st_ref_get(v___y_512_);
v_env_515_ = lean_ctor_get(v___x_514_, 0);
lean_inc_ref(v_env_515_);
lean_dec(v___x_514_);
v___x_516_ = lean_st_ref_get(v___y_510_);
v_toCold_517_ = lean_ctor_get(v___y_511_, 0);
v_mctx_518_ = lean_ctor_get(v___x_516_, 0);
lean_inc_ref(v_mctx_518_);
lean_dec(v___x_516_);
v_lctx_519_ = lean_ctor_get(v___y_509_, 2);
v_options_520_ = lean_ctor_get(v_toCold_517_, 2);
lean_inc_ref(v_options_520_);
lean_inc_ref(v_lctx_519_);
v___x_521_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_521_, 0, v_env_515_);
lean_ctor_set(v___x_521_, 1, v_mctx_518_);
lean_ctor_set(v___x_521_, 2, v_lctx_519_);
lean_ctor_set(v___x_521_, 3, v_options_520_);
v___x_522_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_522_, 0, v___x_521_);
lean_ctor_set(v___x_522_, 1, v_msgData_508_);
v___x_523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_523_, 0, v___x_522_);
return v___x_523_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__9___boxed(lean_object* v_msgData_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_){
_start:
{
lean_object* v_res_530_; 
v_res_530_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__9(v_msgData_524_, v___y_525_, v___y_526_, v___y_527_, v___y_528_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
return v_res_530_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg(lean_object* v_msg_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_){
_start:
{
lean_object* v_ref_539_; lean_object* v_macroStack_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v_a_543_; lean_object* v___x_544_; lean_object* v_a_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_553_; 
v_ref_539_ = lean_ctor_get(v___y_536_, 2);
v_macroStack_540_ = lean_ctor_get(v___y_532_, 1);
v___x_541_ = l_Lean_Elab_getBetterRef(v_ref_539_, v_macroStack_540_);
v___x_542_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__9(v_msg_531_, v___y_534_, v___y_535_, v___y_536_, v___y_537_);
v_a_543_ = lean_ctor_get(v___x_542_, 0);
lean_inc(v_a_543_);
lean_dec_ref(v___x_542_);
lean_inc(v_macroStack_540_);
v___x_544_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg(v_a_543_, v_macroStack_540_, v___y_536_);
v_a_545_ = lean_ctor_get(v___x_544_, 0);
v_isSharedCheck_553_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_553_ == 0)
{
v___x_547_ = v___x_544_;
v_isShared_548_ = v_isSharedCheck_553_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_a_545_);
lean_dec(v___x_544_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_553_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
lean_object* v___x_549_; lean_object* v___x_551_; 
v___x_549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_549_, 0, v___x_541_);
lean_ctor_set(v___x_549_, 1, v_a_545_);
if (v_isShared_548_ == 0)
{
lean_ctor_set_tag(v___x_547_, 1);
lean_ctor_set(v___x_547_, 0, v___x_549_);
v___x_551_ = v___x_547_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v___x_549_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg___boxed(lean_object* v_msg_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_){
_start:
{
lean_object* v_res_562_; 
v_res_562_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg(v_msg_554_, v___y_555_, v___y_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_);
lean_dec(v___y_560_);
lean_dec_ref(v___y_559_);
lean_dec(v___y_558_);
lean_dec_ref(v___y_557_);
lean_dec(v___y_556_);
lean_dec_ref(v___y_555_);
return v_res_562_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(lean_object* v_as_563_, size_t v_i_564_, size_t v_stop_565_, lean_object* v_b_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_){
_start:
{
lean_object* v_a_572_; uint8_t v___x_576_; 
v___x_576_ = lean_usize_dec_eq(v_i_564_, v_stop_565_);
if (v___x_576_ == 0)
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; 
v___x_577_ = lean_array_uget_borrowed(v_as_563_, v_i_564_);
v___x_578_ = l_Lean_Expr_fvarId_x21(v___x_577_);
lean_inc(v___x_578_);
v___x_579_ = l_Lean_FVarId_getDecl___redArg(v___x_578_, v___y_567_, v___y_568_, v___y_569_);
if (lean_obj_tag(v___x_579_) == 0)
{
lean_object* v_a_580_; uint8_t v___x_581_; uint8_t v___x_582_; 
v_a_580_ = lean_ctor_get(v___x_579_, 0);
lean_inc(v_a_580_);
lean_dec_ref_known(v___x_579_, 1);
v___x_581_ = l_Lean_LocalDecl_binderInfo(v_a_580_);
lean_dec(v_a_580_);
v___x_582_ = l_Lean_BinderInfo_isExplicit(v___x_581_);
if (v___x_582_ == 0)
{
lean_dec(v___x_578_);
v_a_572_ = v_b_566_;
goto v___jp_571_;
}
else
{
uint8_t v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; 
v___x_583_ = 1;
v___x_584_ = lean_box(v___x_583_);
v___x_585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_585_, 0, v___x_578_);
lean_ctor_set(v___x_585_, 1, v___x_584_);
v___x_586_ = lean_array_push(v_b_566_, v___x_585_);
v_a_572_ = v___x_586_;
goto v___jp_571_;
}
}
else
{
lean_object* v_a_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_594_; 
lean_dec(v___x_578_);
lean_dec_ref(v_b_566_);
v_a_587_ = lean_ctor_get(v___x_579_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v___x_579_);
if (v_isSharedCheck_594_ == 0)
{
v___x_589_ = v___x_579_;
v_isShared_590_ = v_isSharedCheck_594_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_a_587_);
lean_dec(v___x_579_);
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
lean_object* v___x_595_; 
v___x_595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_595_, 0, v_b_566_);
return v___x_595_;
}
v___jp_571_:
{
size_t v___x_573_; size_t v___x_574_; 
v___x_573_ = ((size_t)1ULL);
v___x_574_ = lean_usize_add(v_i_564_, v___x_573_);
v_i_564_ = v___x_574_;
v_b_566_ = v_a_572_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg___boxed(lean_object* v_as_596_, lean_object* v_i_597_, lean_object* v_stop_598_, lean_object* v_b_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_){
_start:
{
size_t v_i_boxed_604_; size_t v_stop_boxed_605_; lean_object* v_res_606_; 
v_i_boxed_604_ = lean_unbox_usize(v_i_597_);
lean_dec(v_i_597_);
v_stop_boxed_605_ = lean_unbox_usize(v_stop_598_);
lean_dec(v_stop_598_);
v_res_606_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(v_as_596_, v_i_boxed_604_, v_stop_boxed_605_, v_b_599_, v___y_600_, v___y_601_, v___y_602_);
lean_dec(v___y_602_);
lean_dec_ref(v___y_601_);
lean_dec_ref(v___y_600_);
lean_dec_ref(v_as_596_);
return v_res_606_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2(lean_object* v_as_609_, lean_object* v_start_610_, lean_object* v_stop_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_){
_start:
{
lean_object* v___x_619_; uint8_t v___x_620_; 
v___x_619_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2___closed__0));
v___x_620_ = lean_nat_dec_lt(v_start_610_, v_stop_611_);
if (v___x_620_ == 0)
{
lean_object* v___x_621_; 
v___x_621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_621_, 0, v___x_619_);
return v___x_621_;
}
else
{
lean_object* v___x_622_; uint8_t v___x_623_; 
v___x_622_ = lean_array_get_size(v_as_609_);
v___x_623_ = lean_nat_dec_le(v_stop_611_, v___x_622_);
if (v___x_623_ == 0)
{
uint8_t v___x_624_; 
v___x_624_ = lean_nat_dec_lt(v_start_610_, v___x_622_);
if (v___x_624_ == 0)
{
lean_object* v___x_625_; 
v___x_625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_625_, 0, v___x_619_);
return v___x_625_;
}
else
{
size_t v___x_626_; size_t v___x_627_; lean_object* v___x_628_; 
v___x_626_ = lean_usize_of_nat(v_start_610_);
v___x_627_ = lean_usize_of_nat(v___x_622_);
v___x_628_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(v_as_609_, v___x_626_, v___x_627_, v___x_619_, v___y_614_, v___y_616_, v___y_617_);
return v___x_628_;
}
}
else
{
size_t v___x_629_; size_t v___x_630_; lean_object* v___x_631_; 
v___x_629_ = lean_usize_of_nat(v_start_610_);
v___x_630_ = lean_usize_of_nat(v_stop_611_);
v___x_631_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(v_as_609_, v___x_629_, v___x_630_, v___x_619_, v___y_614_, v___y_616_, v___y_617_);
return v___x_631_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2___boxed(lean_object* v_as_632_, lean_object* v_start_633_, lean_object* v_stop_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_){
_start:
{
lean_object* v_res_642_; 
v_res_642_ = l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2(v_as_632_, v_start_633_, v_stop_634_, v___y_635_, v___y_636_, v___y_637_, v___y_638_, v___y_639_, v___y_640_);
lean_dec(v___y_640_);
lean_dec_ref(v___y_639_);
lean_dec(v___y_638_);
lean_dec_ref(v___y_637_);
lean_dec(v___y_636_);
lean_dec_ref(v___y_635_);
lean_dec(v_stop_634_);
lean_dec(v_start_633_);
lean_dec_ref(v_as_632_);
return v_res_642_;
}
}
static lean_object* _init_l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__1(void){
_start:
{
lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_644_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__0));
v___x_645_ = l_Lean_stringToMessageData(v___x_644_);
return v___x_645_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3(lean_object* v_value_646_, lean_object* v_declName_647_, lean_object* v___x_648_, lean_object* v_levelParams_649_, lean_object* v_ctorName_650_, lean_object* v_fieldName_651_, lean_object* v_projName_652_, lean_object* v_params_653_, lean_object* v_resultType_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_){
_start:
{
lean_object* v___x_701_; 
lean_inc(v___y_660_);
lean_inc_ref(v___y_659_);
lean_inc(v___y_658_);
lean_inc_ref(v___y_657_);
lean_inc_ref(v_resultType_654_);
v___x_701_ = lean_whnf(v_resultType_654_, v___y_657_, v___y_658_, v___y_659_, v___y_660_);
if (lean_obj_tag(v___x_701_) == 0)
{
lean_object* v_a_702_; uint8_t v___x_703_; 
v_a_702_ = lean_ctor_get(v___x_701_, 0);
lean_inc(v_a_702_);
lean_dec_ref_known(v___x_701_, 1);
v___x_703_ = l_Lean_Expr_isSort(v_a_702_);
lean_dec(v_a_702_);
if (v___x_703_ == 0)
{
lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v_a_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_715_; 
lean_dec_ref(v_params_653_);
lean_dec(v_projName_652_);
lean_dec(v_fieldName_651_);
lean_dec(v_ctorName_650_);
lean_dec(v_levelParams_649_);
lean_dec(v___x_648_);
lean_dec(v_declName_647_);
lean_dec_ref(v_value_646_);
v___x_704_ = lean_obj_once(&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__1, &l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__1_once, _init_l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__1);
v___x_705_ = l_Lean_indentExpr(v_resultType_654_);
v___x_706_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_706_, 0, v___x_704_);
lean_ctor_set(v___x_706_, 1, v___x_705_);
v___x_707_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg(v___x_706_, v___y_655_, v___y_656_, v___y_657_, v___y_658_, v___y_659_, v___y_660_);
v_a_708_ = lean_ctor_get(v___x_707_, 0);
v_isSharedCheck_715_ = !lean_is_exclusive(v___x_707_);
if (v_isSharedCheck_715_ == 0)
{
v___x_710_ = v___x_707_;
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_a_708_);
lean_dec(v___x_707_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v___x_713_; 
if (v_isShared_711_ == 0)
{
v___x_713_ = v___x_710_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_a_708_);
v___x_713_ = v_reuseFailAlloc_714_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
return v___x_713_;
}
}
}
else
{
lean_dec_ref(v_resultType_654_);
goto v___jp_662_;
}
}
else
{
lean_object* v_a_716_; lean_object* v___x_718_; uint8_t v_isShared_719_; uint8_t v_isSharedCheck_723_; 
lean_dec_ref(v_resultType_654_);
lean_dec_ref(v_params_653_);
lean_dec(v_projName_652_);
lean_dec(v_fieldName_651_);
lean_dec(v_ctorName_650_);
lean_dec(v_levelParams_649_);
lean_dec(v___x_648_);
lean_dec(v_declName_647_);
lean_dec_ref(v_value_646_);
v_a_716_ = lean_ctor_get(v___x_701_, 0);
v_isSharedCheck_723_ = !lean_is_exclusive(v___x_701_);
if (v_isSharedCheck_723_ == 0)
{
v___x_718_ = v___x_701_;
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
else
{
lean_inc(v_a_716_);
lean_dec(v___x_701_);
v___x_718_ = lean_box(0);
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
v_resetjp_717_:
{
lean_object* v___x_721_; 
if (v_isShared_719_ == 0)
{
v___x_721_ = v___x_718_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v_a_716_);
v___x_721_ = v_reuseFailAlloc_722_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
return v___x_721_;
}
}
}
v___jp_662_:
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
lean_inc_ref(v_params_653_);
v___x_663_ = l_Lean_Expr_beta(v_value_646_, v_params_653_);
lean_inc(v_declName_647_);
v___x_664_ = l_Lean_mkConst(v_declName_647_, v___x_648_);
v___x_665_ = l_Lean_mkAppN(v___x_664_, v_params_653_);
v___x_666_ = lean_unsigned_to_nat(0u);
v___x_667_ = lean_array_get_size(v_params_653_);
v___x_668_ = l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2(v_params_653_, v___x_666_, v___x_667_, v___y_655_, v___y_656_, v___y_657_, v___y_658_, v___y_659_, v___y_660_);
if (lean_obj_tag(v___x_668_) == 0)
{
lean_object* v_a_669_; lean_object* v___x_670_; lean_object* v_env_671_; uint8_t v___x_672_; lean_object* v___x_673_; lean_object* v___f_674_; lean_object* v___f_675_; lean_object* v___x_676_; 
v_a_669_ = lean_ctor_get(v___x_668_, 0);
lean_inc(v_a_669_);
lean_dec_ref_known(v___x_668_, 1);
v___x_670_ = lean_st_ref_get(v___y_660_);
v_env_671_ = lean_ctor_get(v___x_670_, 0);
lean_inc_ref(v_env_671_);
lean_dec(v___x_670_);
v___x_672_ = l_Lean_Environment_hasExposedBody(v_env_671_, v_declName_647_);
v___x_673_ = lean_box(v___x_672_);
v___f_674_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__1___boxed), 14, 3);
lean_closure_set(v___f_674_, 0, v_params_653_);
lean_closure_set(v___f_674_, 1, v_levelParams_649_);
lean_closure_set(v___f_674_, 2, v___x_673_);
v___f_675_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2___boxed), 13, 6);
lean_closure_set(v___f_675_, 0, v___f_674_);
lean_closure_set(v___f_675_, 1, v_ctorName_650_);
lean_closure_set(v___f_675_, 2, v_fieldName_651_);
lean_closure_set(v___f_675_, 3, v___x_663_);
lean_closure_set(v___f_675_, 4, v___x_665_);
lean_closure_set(v___f_675_, 5, v_projName_652_);
v___x_676_ = l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg(v_a_669_, v___f_675_, v___y_655_, v___y_656_, v___y_657_, v___y_658_, v___y_659_, v___y_660_);
lean_dec(v_a_669_);
if (lean_obj_tag(v___x_676_) == 0)
{
lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_683_; 
v_isSharedCheck_683_ = !lean_is_exclusive(v___x_676_);
if (v_isSharedCheck_683_ == 0)
{
lean_object* v_unused_684_; 
v_unused_684_ = lean_ctor_get(v___x_676_, 0);
lean_dec(v_unused_684_);
v___x_678_ = v___x_676_;
v_isShared_679_ = v_isSharedCheck_683_;
goto v_resetjp_677_;
}
else
{
lean_dec(v___x_676_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_683_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___x_681_; 
if (v_isShared_679_ == 0)
{
lean_ctor_set(v___x_678_, 0, v___x_667_);
v___x_681_ = v___x_678_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v___x_667_);
v___x_681_ = v_reuseFailAlloc_682_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
return v___x_681_;
}
}
}
else
{
lean_object* v_a_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_692_; 
v_a_685_ = lean_ctor_get(v___x_676_, 0);
v_isSharedCheck_692_ = !lean_is_exclusive(v___x_676_);
if (v_isSharedCheck_692_ == 0)
{
v___x_687_ = v___x_676_;
v_isShared_688_ = v_isSharedCheck_692_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_a_685_);
lean_dec(v___x_676_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_692_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_690_; 
if (v_isShared_688_ == 0)
{
v___x_690_ = v___x_687_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v_a_685_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
}
}
}
}
else
{
lean_object* v_a_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_700_; 
lean_dec_ref(v___x_665_);
lean_dec_ref(v___x_663_);
lean_dec_ref(v_params_653_);
lean_dec(v_projName_652_);
lean_dec(v_fieldName_651_);
lean_dec(v_ctorName_650_);
lean_dec(v_levelParams_649_);
lean_dec(v_declName_647_);
v_a_693_ = lean_ctor_get(v___x_668_, 0);
v_isSharedCheck_700_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_700_ == 0)
{
v___x_695_ = v___x_668_;
v_isShared_696_ = v_isSharedCheck_700_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_a_693_);
lean_dec(v___x_668_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_700_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
lean_object* v___x_698_; 
if (v_isShared_696_ == 0)
{
v___x_698_ = v___x_695_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_a_693_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
return v___x_698_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___boxed(lean_object* v_value_724_, lean_object* v_declName_725_, lean_object* v___x_726_, lean_object* v_levelParams_727_, lean_object* v_ctorName_728_, lean_object* v_fieldName_729_, lean_object* v_projName_730_, lean_object* v_params_731_, lean_object* v_resultType_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_){
_start:
{
lean_object* v_res_740_; 
v_res_740_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3(v_value_724_, v_declName_725_, v___x_726_, v_levelParams_727_, v_ctorName_728_, v_fieldName_729_, v_projName_730_, v_params_731_, v_resultType_732_, v___y_733_, v___y_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_);
lean_dec(v___y_738_);
lean_dec_ref(v___y_737_);
lean_dec(v___y_736_);
lean_dec_ref(v___y_735_);
lean_dec(v___y_734_);
lean_dec_ref(v___y_733_);
return v_res_740_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_741_; 
v___x_741_ = l_instMonadEIO___redArg();
return v___x_741_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0(lean_object* v_msg_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_){
_start:
{
lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v_toApplicative_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_849_; 
v___x_756_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__0, &l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__0_once, _init_l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__0);
v___x_757_ = l_StateRefT_x27_instMonad___redArg(v___x_756_);
v_toApplicative_758_ = lean_ctor_get(v___x_757_, 0);
v_isSharedCheck_849_ = !lean_is_exclusive(v___x_757_);
if (v_isSharedCheck_849_ == 0)
{
lean_object* v_unused_850_; 
v_unused_850_ = lean_ctor_get(v___x_757_, 1);
lean_dec(v_unused_850_);
v___x_760_ = v___x_757_;
v_isShared_761_ = v_isSharedCheck_849_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_toApplicative_758_);
lean_dec(v___x_757_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_849_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v_toFunctor_762_; lean_object* v_toSeq_763_; lean_object* v_toSeqLeft_764_; lean_object* v_toSeqRight_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_847_; 
v_toFunctor_762_ = lean_ctor_get(v_toApplicative_758_, 0);
v_toSeq_763_ = lean_ctor_get(v_toApplicative_758_, 2);
v_toSeqLeft_764_ = lean_ctor_get(v_toApplicative_758_, 3);
v_toSeqRight_765_ = lean_ctor_get(v_toApplicative_758_, 4);
v_isSharedCheck_847_ = !lean_is_exclusive(v_toApplicative_758_);
if (v_isSharedCheck_847_ == 0)
{
lean_object* v_unused_848_; 
v_unused_848_ = lean_ctor_get(v_toApplicative_758_, 1);
lean_dec(v_unused_848_);
v___x_767_ = v_toApplicative_758_;
v_isShared_768_ = v_isSharedCheck_847_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_toSeqRight_765_);
lean_inc(v_toSeqLeft_764_);
lean_inc(v_toSeq_763_);
lean_inc(v_toFunctor_762_);
lean_dec(v_toApplicative_758_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_847_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v___f_769_; lean_object* v___f_770_; lean_object* v___f_771_; lean_object* v___f_772_; lean_object* v___x_773_; lean_object* v___f_774_; lean_object* v___f_775_; lean_object* v___f_776_; lean_object* v___x_778_; 
v___f_769_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__1));
v___f_770_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__2));
lean_inc_ref(v_toFunctor_762_);
v___f_771_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_771_, 0, v_toFunctor_762_);
v___f_772_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_772_, 0, v_toFunctor_762_);
v___x_773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_773_, 0, v___f_771_);
lean_ctor_set(v___x_773_, 1, v___f_772_);
v___f_774_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_774_, 0, v_toSeqRight_765_);
v___f_775_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_775_, 0, v_toSeqLeft_764_);
v___f_776_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_776_, 0, v_toSeq_763_);
if (v_isShared_768_ == 0)
{
lean_ctor_set(v___x_767_, 4, v___f_774_);
lean_ctor_set(v___x_767_, 3, v___f_775_);
lean_ctor_set(v___x_767_, 2, v___f_776_);
lean_ctor_set(v___x_767_, 1, v___f_769_);
lean_ctor_set(v___x_767_, 0, v___x_773_);
v___x_778_ = v___x_767_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v___x_773_);
lean_ctor_set(v_reuseFailAlloc_846_, 1, v___f_769_);
lean_ctor_set(v_reuseFailAlloc_846_, 2, v___f_776_);
lean_ctor_set(v_reuseFailAlloc_846_, 3, v___f_775_);
lean_ctor_set(v_reuseFailAlloc_846_, 4, v___f_774_);
v___x_778_ = v_reuseFailAlloc_846_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
lean_object* v___x_780_; 
if (v_isShared_761_ == 0)
{
lean_ctor_set(v___x_760_, 1, v___f_770_);
lean_ctor_set(v___x_760_, 0, v___x_778_);
v___x_780_ = v___x_760_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v___x_778_);
lean_ctor_set(v_reuseFailAlloc_845_, 1, v___f_770_);
v___x_780_ = v_reuseFailAlloc_845_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
lean_object* v___x_781_; lean_object* v_toApplicative_782_; lean_object* v___x_784_; uint8_t v_isShared_785_; uint8_t v_isSharedCheck_843_; 
v___x_781_ = l_StateRefT_x27_instMonad___redArg(v___x_780_);
v_toApplicative_782_ = lean_ctor_get(v___x_781_, 0);
v_isSharedCheck_843_ = !lean_is_exclusive(v___x_781_);
if (v_isSharedCheck_843_ == 0)
{
lean_object* v_unused_844_; 
v_unused_844_ = lean_ctor_get(v___x_781_, 1);
lean_dec(v_unused_844_);
v___x_784_ = v___x_781_;
v_isShared_785_ = v_isSharedCheck_843_;
goto v_resetjp_783_;
}
else
{
lean_inc(v_toApplicative_782_);
lean_dec(v___x_781_);
v___x_784_ = lean_box(0);
v_isShared_785_ = v_isSharedCheck_843_;
goto v_resetjp_783_;
}
v_resetjp_783_:
{
lean_object* v_toFunctor_786_; lean_object* v_toSeq_787_; lean_object* v_toSeqLeft_788_; lean_object* v_toSeqRight_789_; lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_841_; 
v_toFunctor_786_ = lean_ctor_get(v_toApplicative_782_, 0);
v_toSeq_787_ = lean_ctor_get(v_toApplicative_782_, 2);
v_toSeqLeft_788_ = lean_ctor_get(v_toApplicative_782_, 3);
v_toSeqRight_789_ = lean_ctor_get(v_toApplicative_782_, 4);
v_isSharedCheck_841_ = !lean_is_exclusive(v_toApplicative_782_);
if (v_isSharedCheck_841_ == 0)
{
lean_object* v_unused_842_; 
v_unused_842_ = lean_ctor_get(v_toApplicative_782_, 1);
lean_dec(v_unused_842_);
v___x_791_ = v_toApplicative_782_;
v_isShared_792_ = v_isSharedCheck_841_;
goto v_resetjp_790_;
}
else
{
lean_inc(v_toSeqRight_789_);
lean_inc(v_toSeqLeft_788_);
lean_inc(v_toSeq_787_);
lean_inc(v_toFunctor_786_);
lean_dec(v_toApplicative_782_);
v___x_791_ = lean_box(0);
v_isShared_792_ = v_isSharedCheck_841_;
goto v_resetjp_790_;
}
v_resetjp_790_:
{
lean_object* v___f_793_; lean_object* v___f_794_; lean_object* v___f_795_; lean_object* v___f_796_; lean_object* v___x_797_; lean_object* v___f_798_; lean_object* v___f_799_; lean_object* v___f_800_; lean_object* v___x_802_; 
v___f_793_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__3));
v___f_794_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__4));
lean_inc_ref(v_toFunctor_786_);
v___f_795_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_795_, 0, v_toFunctor_786_);
v___f_796_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_796_, 0, v_toFunctor_786_);
v___x_797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_797_, 0, v___f_795_);
lean_ctor_set(v___x_797_, 1, v___f_796_);
v___f_798_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_798_, 0, v_toSeqRight_789_);
v___f_799_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_799_, 0, v_toSeqLeft_788_);
v___f_800_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_800_, 0, v_toSeq_787_);
if (v_isShared_792_ == 0)
{
lean_ctor_set(v___x_791_, 4, v___f_798_);
lean_ctor_set(v___x_791_, 3, v___f_799_);
lean_ctor_set(v___x_791_, 2, v___f_800_);
lean_ctor_set(v___x_791_, 1, v___f_793_);
lean_ctor_set(v___x_791_, 0, v___x_797_);
v___x_802_ = v___x_791_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v___x_797_);
lean_ctor_set(v_reuseFailAlloc_840_, 1, v___f_793_);
lean_ctor_set(v_reuseFailAlloc_840_, 2, v___f_800_);
lean_ctor_set(v_reuseFailAlloc_840_, 3, v___f_799_);
lean_ctor_set(v_reuseFailAlloc_840_, 4, v___f_798_);
v___x_802_ = v_reuseFailAlloc_840_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
lean_object* v___x_804_; 
if (v_isShared_785_ == 0)
{
lean_ctor_set(v___x_784_, 1, v___f_794_);
lean_ctor_set(v___x_784_, 0, v___x_802_);
v___x_804_ = v___x_784_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v___x_802_);
lean_ctor_set(v_reuseFailAlloc_839_, 1, v___f_794_);
v___x_804_ = v_reuseFailAlloc_839_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
lean_object* v___x_805_; lean_object* v_toApplicative_806_; lean_object* v___x_808_; uint8_t v_isShared_809_; uint8_t v_isSharedCheck_837_; 
v___x_805_ = l_StateRefT_x27_instMonad___redArg(v___x_804_);
v_toApplicative_806_ = lean_ctor_get(v___x_805_, 0);
v_isSharedCheck_837_ = !lean_is_exclusive(v___x_805_);
if (v_isSharedCheck_837_ == 0)
{
lean_object* v_unused_838_; 
v_unused_838_ = lean_ctor_get(v___x_805_, 1);
lean_dec(v_unused_838_);
v___x_808_ = v___x_805_;
v_isShared_809_ = v_isSharedCheck_837_;
goto v_resetjp_807_;
}
else
{
lean_inc(v_toApplicative_806_);
lean_dec(v___x_805_);
v___x_808_ = lean_box(0);
v_isShared_809_ = v_isSharedCheck_837_;
goto v_resetjp_807_;
}
v_resetjp_807_:
{
lean_object* v_toFunctor_810_; lean_object* v_toSeq_811_; lean_object* v_toSeqLeft_812_; lean_object* v_toSeqRight_813_; lean_object* v___x_815_; uint8_t v_isShared_816_; uint8_t v_isSharedCheck_835_; 
v_toFunctor_810_ = lean_ctor_get(v_toApplicative_806_, 0);
v_toSeq_811_ = lean_ctor_get(v_toApplicative_806_, 2);
v_toSeqLeft_812_ = lean_ctor_get(v_toApplicative_806_, 3);
v_toSeqRight_813_ = lean_ctor_get(v_toApplicative_806_, 4);
v_isSharedCheck_835_ = !lean_is_exclusive(v_toApplicative_806_);
if (v_isSharedCheck_835_ == 0)
{
lean_object* v_unused_836_; 
v_unused_836_ = lean_ctor_get(v_toApplicative_806_, 1);
lean_dec(v_unused_836_);
v___x_815_ = v_toApplicative_806_;
v_isShared_816_ = v_isSharedCheck_835_;
goto v_resetjp_814_;
}
else
{
lean_inc(v_toSeqRight_813_);
lean_inc(v_toSeqLeft_812_);
lean_inc(v_toSeq_811_);
lean_inc(v_toFunctor_810_);
lean_dec(v_toApplicative_806_);
v___x_815_ = lean_box(0);
v_isShared_816_ = v_isSharedCheck_835_;
goto v_resetjp_814_;
}
v_resetjp_814_:
{
lean_object* v___f_817_; lean_object* v___f_818_; lean_object* v___f_819_; lean_object* v___f_820_; lean_object* v___x_821_; lean_object* v___f_822_; lean_object* v___f_823_; lean_object* v___f_824_; lean_object* v___x_826_; 
v___f_817_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__5));
v___f_818_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__6));
lean_inc_ref(v_toFunctor_810_);
v___f_819_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_819_, 0, v_toFunctor_810_);
v___f_820_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_820_, 0, v_toFunctor_810_);
v___x_821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_821_, 0, v___f_819_);
lean_ctor_set(v___x_821_, 1, v___f_820_);
v___f_822_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_822_, 0, v_toSeqRight_813_);
v___f_823_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_823_, 0, v_toSeqLeft_812_);
v___f_824_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_824_, 0, v_toSeq_811_);
if (v_isShared_816_ == 0)
{
lean_ctor_set(v___x_815_, 4, v___f_822_);
lean_ctor_set(v___x_815_, 3, v___f_823_);
lean_ctor_set(v___x_815_, 2, v___f_824_);
lean_ctor_set(v___x_815_, 1, v___f_817_);
lean_ctor_set(v___x_815_, 0, v___x_821_);
v___x_826_ = v___x_815_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v___x_821_);
lean_ctor_set(v_reuseFailAlloc_834_, 1, v___f_817_);
lean_ctor_set(v_reuseFailAlloc_834_, 2, v___f_824_);
lean_ctor_set(v_reuseFailAlloc_834_, 3, v___f_823_);
lean_ctor_set(v_reuseFailAlloc_834_, 4, v___f_822_);
v___x_826_ = v_reuseFailAlloc_834_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
lean_object* v___x_828_; 
if (v_isShared_809_ == 0)
{
lean_ctor_set(v___x_808_, 1, v___f_818_);
lean_ctor_set(v___x_808_, 0, v___x_826_);
v___x_828_ = v___x_808_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v___x_826_);
lean_ctor_set(v_reuseFailAlloc_833_, 1, v___f_818_);
v___x_828_ = v_reuseFailAlloc_833_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_6422__overap_831_; lean_object* v___x_832_; 
v___x_829_ = lean_box(0);
v___x_830_ = l_instInhabitedOfMonad___redArg(v___x_828_, v___x_829_);
v___x_6422__overap_831_ = lean_panic_fn_borrowed(v___x_830_, v_msg_748_);
lean_dec(v___x_830_);
lean_inc(v___y_754_);
lean_inc_ref(v___y_753_);
lean_inc(v___y_752_);
lean_inc_ref(v___y_751_);
lean_inc(v___y_750_);
lean_inc_ref(v___y_749_);
v___x_832_ = lean_apply_7(v___x_6422__overap_831_, v___y_749_, v___y_750_, v___y_751_, v___y_752_, v___y_753_, v___y_754_, lean_box(0));
return v___x_832_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___boxed(lean_object* v_msg_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_){
_start:
{
lean_object* v_res_859_; 
v_res_859_ = l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0(v_msg_851_, v___y_852_, v___y_853_, v___y_854_, v___y_855_, v___y_856_, v___y_857_);
lean_dec(v___y_857_);
lean_dec_ref(v___y_856_);
lean_dec(v___y_855_);
lean_dec_ref(v___y_854_);
lean_dec(v___y_853_);
lean_dec_ref(v___y_852_);
return v_res_859_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1(void){
_start:
{
lean_object* v___x_861_; lean_object* v___x_862_; 
v___x_861_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__0));
v___x_862_ = l_Lean_stringToMessageData(v___x_861_);
return v___x_862_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3(void){
_start:
{
lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_864_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__2));
v___x_865_ = l_Lean_stringToMessageData(v___x_864_);
return v___x_865_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7(void){
_start:
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; 
v___x_869_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__6));
v___x_870_ = lean_unsigned_to_nat(11u);
v___x_871_ = lean_unsigned_to_nat(115u);
v___x_872_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__5));
v___x_873_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__4));
v___x_874_ = l_mkPanicMessageWithDecl(v___x_873_, v___x_872_, v___x_871_, v___x_870_, v___x_869_);
return v___x_874_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0(lean_object* v_constName_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_){
_start:
{
lean_object* v___x_891_; lean_object* v_env_892_; uint8_t v___x_893_; lean_object* v___x_894_; 
v___x_891_ = lean_st_ref_get(v___y_881_);
v_env_892_ = lean_ctor_get(v___x_891_, 0);
lean_inc_ref(v_env_892_);
lean_dec(v___x_891_);
v___x_893_ = 0;
lean_inc(v_constName_875_);
v___x_894_ = l_Lean_Environment_findAsync_x3f(v_env_892_, v_constName_875_, v___x_893_);
if (lean_obj_tag(v___x_894_) == 1)
{
lean_object* v_val_895_; uint8_t v_kind_896_; 
v_val_895_ = lean_ctor_get(v___x_894_, 0);
lean_inc(v_val_895_);
lean_dec_ref_known(v___x_894_, 1);
v_kind_896_ = lean_ctor_get_uint8(v_val_895_, sizeof(void*)*3);
if (v_kind_896_ == 0)
{
lean_object* v___x_897_; 
v___x_897_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_895_);
if (lean_obj_tag(v___x_897_) == 1)
{
lean_object* v_val_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_905_; 
lean_dec(v_constName_875_);
v_val_898_ = lean_ctor_get(v___x_897_, 0);
v_isSharedCheck_905_ = !lean_is_exclusive(v___x_897_);
if (v_isSharedCheck_905_ == 0)
{
v___x_900_ = v___x_897_;
v_isShared_901_ = v_isSharedCheck_905_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_val_898_);
lean_dec(v___x_897_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_905_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_903_; 
if (v_isShared_901_ == 0)
{
lean_ctor_set_tag(v___x_900_, 0);
v___x_903_ = v___x_900_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v_val_898_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
return v___x_903_;
}
}
}
else
{
lean_object* v___x_906_; lean_object* v___x_907_; 
lean_dec_ref(v___x_897_);
v___x_906_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7);
v___x_907_ = l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0(v___x_906_, v___y_876_, v___y_877_, v___y_878_, v___y_879_, v___y_880_, v___y_881_);
if (lean_obj_tag(v___x_907_) == 0)
{
lean_object* v_a_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_916_; 
v_a_908_ = lean_ctor_get(v___x_907_, 0);
v_isSharedCheck_916_ = !lean_is_exclusive(v___x_907_);
if (v_isSharedCheck_916_ == 0)
{
v___x_910_ = v___x_907_;
v_isShared_911_ = v_isSharedCheck_916_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_a_908_);
lean_dec(v___x_907_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_916_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
if (lean_obj_tag(v_a_908_) == 0)
{
lean_del_object(v___x_910_);
goto v___jp_883_;
}
else
{
lean_object* v_val_912_; lean_object* v___x_914_; 
lean_dec(v_constName_875_);
v_val_912_ = lean_ctor_get(v_a_908_, 0);
lean_inc(v_val_912_);
lean_dec_ref_known(v_a_908_, 1);
if (v_isShared_911_ == 0)
{
lean_ctor_set(v___x_910_, 0, v_val_912_);
v___x_914_ = v___x_910_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_val_912_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
return v___x_914_;
}
}
}
}
else
{
lean_object* v_a_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_924_; 
lean_dec(v_constName_875_);
v_a_917_ = lean_ctor_get(v___x_907_, 0);
v_isSharedCheck_924_ = !lean_is_exclusive(v___x_907_);
if (v_isSharedCheck_924_ == 0)
{
v___x_919_ = v___x_907_;
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_a_917_);
lean_dec(v___x_907_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_922_; 
if (v_isShared_920_ == 0)
{
v___x_922_ = v___x_919_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_923_; 
v_reuseFailAlloc_923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_923_, 0, v_a_917_);
v___x_922_ = v_reuseFailAlloc_923_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
return v___x_922_;
}
}
}
}
}
else
{
lean_dec(v_val_895_);
goto v___jp_883_;
}
}
else
{
lean_dec(v___x_894_);
goto v___jp_883_;
}
v___jp_883_:
{
lean_object* v___x_884_; uint8_t v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; 
v___x_884_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1);
v___x_885_ = 0;
v___x_886_ = l_Lean_MessageData_ofConstName(v_constName_875_, v___x_885_);
v___x_887_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_887_, 0, v___x_884_);
lean_ctor_set(v___x_887_, 1, v___x_886_);
v___x_888_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3);
v___x_889_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_889_, 0, v___x_887_);
lean_ctor_set(v___x_889_, 1, v___x_888_);
v___x_890_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg(v___x_889_, v___y_876_, v___y_877_, v___y_878_, v___y_879_, v___y_880_, v___y_881_);
return v___x_890_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___boxed(lean_object* v_constName_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_){
_start:
{
lean_object* v_res_933_; 
v_res_933_ = l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0(v_constName_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_, v___y_931_);
lean_dec(v___y_931_);
lean_dec_ref(v___y_930_);
lean_dec(v___y_929_);
lean_dec_ref(v___y_928_);
lean_dec(v___y_927_);
lean_dec_ref(v___y_926_);
return v_res_933_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(lean_object* v_a_934_, lean_object* v_a_935_){
_start:
{
if (lean_obj_tag(v_a_934_) == 0)
{
lean_object* v___x_936_; 
v___x_936_ = l_List_reverse___redArg(v_a_935_);
return v___x_936_;
}
else
{
lean_object* v_head_937_; lean_object* v_tail_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_947_; 
v_head_937_ = lean_ctor_get(v_a_934_, 0);
v_tail_938_ = lean_ctor_get(v_a_934_, 1);
v_isSharedCheck_947_ = !lean_is_exclusive(v_a_934_);
if (v_isSharedCheck_947_ == 0)
{
v___x_940_ = v_a_934_;
v_isShared_941_ = v_isSharedCheck_947_;
goto v_resetjp_939_;
}
else
{
lean_inc(v_tail_938_);
lean_inc(v_head_937_);
lean_dec(v_a_934_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_947_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
lean_object* v___x_942_; lean_object* v___x_944_; 
v___x_942_ = l_Lean_mkLevelParam(v_head_937_);
if (v_isShared_941_ == 0)
{
lean_ctor_set(v___x_940_, 1, v_a_935_);
lean_ctor_set(v___x_940_, 0, v___x_942_);
v___x_944_ = v___x_940_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v___x_942_);
lean_ctor_set(v_reuseFailAlloc_946_, 1, v_a_935_);
v___x_944_ = v_reuseFailAlloc_946_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
v_a_934_ = v_tail_938_;
v_a_935_ = v___x_944_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj(lean_object* v_declName_948_, lean_object* v_ctorName_949_, lean_object* v_projName_950_, lean_object* v_fieldName_951_, lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_){
_start:
{
lean_object* v___x_959_; 
lean_inc(v_declName_948_);
v___x_959_ = l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0(v_declName_948_, v_a_952_, v_a_953_, v_a_954_, v_a_955_, v_a_956_, v_a_957_);
if (lean_obj_tag(v___x_959_) == 0)
{
lean_object* v_a_960_; lean_object* v_toConstantVal_961_; lean_object* v_value_962_; lean_object* v_levelParams_963_; lean_object* v_type_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___f_967_; uint8_t v___x_968_; lean_object* v___x_969_; 
v_a_960_ = lean_ctor_get(v___x_959_, 0);
lean_inc(v_a_960_);
lean_dec_ref_known(v___x_959_, 1);
v_toConstantVal_961_ = lean_ctor_get(v_a_960_, 0);
lean_inc_ref(v_toConstantVal_961_);
v_value_962_ = lean_ctor_get(v_a_960_, 1);
lean_inc_ref(v_value_962_);
lean_dec(v_a_960_);
v_levelParams_963_ = lean_ctor_get(v_toConstantVal_961_, 1);
lean_inc_n(v_levelParams_963_, 2);
v_type_964_ = lean_ctor_get(v_toConstantVal_961_, 2);
lean_inc_ref(v_type_964_);
lean_dec_ref(v_toConstantVal_961_);
v___x_965_ = lean_box(0);
v___x_966_ = l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(v_levelParams_963_, v___x_965_);
v___f_967_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___boxed), 16, 7);
lean_closure_set(v___f_967_, 0, v_value_962_);
lean_closure_set(v___f_967_, 1, v_declName_948_);
lean_closure_set(v___f_967_, 2, v___x_966_);
lean_closure_set(v___f_967_, 3, v_levelParams_963_);
lean_closure_set(v___f_967_, 4, v_ctorName_949_);
lean_closure_set(v___f_967_, 5, v_fieldName_951_);
lean_closure_set(v___f_967_, 6, v_projName_950_);
v___x_968_ = 0;
v___x_969_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(v_type_964_, v___f_967_, v___x_968_, v_a_952_, v_a_953_, v_a_954_, v_a_955_, v_a_956_, v_a_957_);
return v___x_969_;
}
else
{
lean_object* v_a_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_977_; 
lean_dec(v_fieldName_951_);
lean_dec(v_projName_950_);
lean_dec(v_ctorName_949_);
lean_dec(v_declName_948_);
v_a_970_ = lean_ctor_get(v___x_959_, 0);
v_isSharedCheck_977_ = !lean_is_exclusive(v___x_959_);
if (v_isSharedCheck_977_ == 0)
{
v___x_972_ = v___x_959_;
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_a_970_);
lean_dec(v___x_959_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
lean_object* v___x_975_; 
if (v_isShared_973_ == 0)
{
v___x_975_ = v___x_972_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v_a_970_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
return v___x_975_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___boxed(lean_object* v_declName_978_, lean_object* v_ctorName_979_, lean_object* v_projName_980_, lean_object* v_fieldName_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_, lean_object* v_a_985_, lean_object* v_a_986_, lean_object* v_a_987_, lean_object* v_a_988_){
_start:
{
lean_object* v_res_989_; 
v_res_989_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj(v_declName_978_, v_ctorName_979_, v_projName_980_, v_fieldName_981_, v_a_982_, v_a_983_, v_a_984_, v_a_985_, v_a_986_, v_a_987_);
lean_dec(v_a_987_);
lean_dec_ref(v_a_986_);
lean_dec(v_a_985_);
lean_dec_ref(v_a_984_);
lean_dec(v_a_983_);
lean_dec_ref(v_a_982_);
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6(lean_object* v_00_u03b1_990_, lean_object* v_name_991_, uint8_t v_bi_992_, lean_object* v_type_993_, lean_object* v_k_994_, uint8_t v_kind_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_){
_start:
{
lean_object* v___x_1003_; 
v___x_1003_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg(v_name_991_, v_bi_992_, v_type_993_, v_k_994_, v_kind_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___boxed(lean_object* v_00_u03b1_1004_, lean_object* v_name_1005_, lean_object* v_bi_1006_, lean_object* v_type_1007_, lean_object* v_k_1008_, lean_object* v_kind_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_){
_start:
{
uint8_t v_bi_boxed_1017_; uint8_t v_kind_boxed_1018_; lean_object* v_res_1019_; 
v_bi_boxed_1017_ = lean_unbox(v_bi_1006_);
v_kind_boxed_1018_ = lean_unbox(v_kind_1009_);
v_res_1019_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6(v_00_u03b1_1004_, v_name_1005_, v_bi_boxed_1017_, v_type_1007_, v_k_1008_, v_kind_boxed_1018_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_);
lean_dec(v___y_1015_);
lean_dec_ref(v___y_1014_);
lean_dec(v___y_1013_);
lean_dec_ref(v___y_1012_);
lean_dec(v___y_1011_);
lean_dec_ref(v___y_1010_);
return v_res_1019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4(lean_object* v_00_u03b1_1020_, lean_object* v_name_1021_, lean_object* v_type_1022_, lean_object* v_k_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_){
_start:
{
lean_object* v___x_1031_; 
v___x_1031_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg(v_name_1021_, v_type_1022_, v_k_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_);
return v___x_1031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___boxed(lean_object* v_00_u03b1_1032_, lean_object* v_name_1033_, lean_object* v_type_1034_, lean_object* v_k_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_){
_start:
{
lean_object* v_res_1043_; 
v_res_1043_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4(v_00_u03b1_1032_, v_name_1033_, v_type_1034_, v_k_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
lean_dec(v___y_1037_);
lean_dec_ref(v___y_1036_);
return v_res_1043_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6(lean_object* v_00_u03b1_1044_, lean_object* v_msg_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_){
_start:
{
lean_object* v___x_1053_; 
v___x_1053_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg(v_msg_1045_, v___y_1046_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_, v___y_1051_);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___boxed(lean_object* v_00_u03b1_1054_, lean_object* v_msg_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_){
_start:
{
lean_object* v_res_1063_; 
v_res_1063_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6(v_00_u03b1_1054_, v_msg_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_);
lean_dec(v___y_1061_);
lean_dec_ref(v___y_1060_);
lean_dec(v___y_1059_);
lean_dec_ref(v___y_1058_);
lean_dec(v___y_1057_);
lean_dec_ref(v___y_1056_);
return v_res_1063_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3(lean_object* v_as_1064_, size_t v_i_1065_, size_t v_stop_1066_, lean_object* v_b_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_){
_start:
{
lean_object* v___x_1075_; 
v___x_1075_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(v_as_1064_, v_i_1065_, v_stop_1066_, v_b_1067_, v___y_1070_, v___y_1072_, v___y_1073_);
return v___x_1075_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___boxed(lean_object* v_as_1076_, lean_object* v_i_1077_, lean_object* v_stop_1078_, lean_object* v_b_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_){
_start:
{
size_t v_i_boxed_1087_; size_t v_stop_boxed_1088_; lean_object* v_res_1089_; 
v_i_boxed_1087_ = lean_unbox_usize(v_i_1077_);
lean_dec(v_i_1077_);
v_stop_boxed_1088_ = lean_unbox_usize(v_stop_1078_);
lean_dec(v_stop_1078_);
v_res_1089_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3(v_as_1076_, v_i_boxed_1087_, v_stop_boxed_1088_, v_b_1079_, v___y_1080_, v___y_1081_, v___y_1082_, v___y_1083_, v___y_1084_, v___y_1085_);
lean_dec(v___y_1085_);
lean_dec_ref(v___y_1084_);
lean_dec(v___y_1083_);
lean_dec_ref(v___y_1082_);
lean_dec(v___y_1081_);
lean_dec_ref(v___y_1080_);
lean_dec_ref(v_as_1076_);
return v_res_1089_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10(lean_object* v_msgData_1090_, lean_object* v_macroStack_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_){
_start:
{
lean_object* v___x_1099_; 
v___x_1099_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg(v_msgData_1090_, v_macroStack_1091_, v___y_1096_);
return v___x_1099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___boxed(lean_object* v_msgData_1100_, lean_object* v_macroStack_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_){
_start:
{
lean_object* v_res_1109_; 
v_res_1109_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10(v_msgData_1100_, v_macroStack_1101_, v___y_1102_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_);
lean_dec(v___y_1107_);
lean_dec_ref(v___y_1106_);
lean_dec(v___y_1105_);
lean_dec_ref(v___y_1104_);
lean_dec(v___y_1103_);
lean_dec_ref(v___y_1102_);
return v_res_1109_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1110_ = lean_box(0);
v___x_1111_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_1112_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1111_);
lean_ctor_set(v___x_1112_, 1, v___x_1110_);
return v___x_1112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg(){
_start:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; 
v___x_1114_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg___closed__0);
v___x_1115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1115_, 0, v___x_1114_);
return v___x_1115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg___boxed(lean_object* v___y_1116_){
_start:
{
lean_object* v_res_1117_; 
v_res_1117_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg();
return v_res_1117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0(lean_object* v_00_u03b1_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_){
_start:
{
lean_object* v___x_1122_; 
v___x_1122_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg();
return v___x_1122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___boxed(lean_object* v_00_u03b1_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_){
_start:
{
lean_object* v_res_1127_; 
v_res_1127_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0(v_00_u03b1_1123_, v___y_1124_, v___y_1125_);
lean_dec(v___y_1125_);
lean_dec_ref(v___y_1124_);
return v_res_1127_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(lean_object* v___y_1128_){
_start:
{
lean_object* v___x_1130_; lean_object* v_env_1131_; lean_object* v___x_1132_; lean_object* v_mainModule_1133_; lean_object* v___x_1134_; 
v___x_1130_ = lean_st_ref_get(v___y_1128_);
v_env_1131_ = lean_ctor_get(v___x_1130_, 0);
lean_inc_ref(v_env_1131_);
lean_dec(v___x_1130_);
v___x_1132_ = l_Lean_Environment_header(v_env_1131_);
lean_dec_ref(v_env_1131_);
v_mainModule_1133_ = lean_ctor_get(v___x_1132_, 0);
lean_inc(v_mainModule_1133_);
lean_dec_ref(v___x_1132_);
v___x_1134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1134_, 0, v_mainModule_1133_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg___boxed(lean_object* v___y_1135_, lean_object* v___y_1136_){
_start:
{
lean_object* v_res_1137_; 
v_res_1137_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v___y_1135_);
lean_dec(v___y_1135_);
return v_res_1137_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9(lean_object* v___y_1138_, lean_object* v___y_1139_){
_start:
{
lean_object* v___x_1141_; 
v___x_1141_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v___y_1139_);
return v___x_1141_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9___boxed(lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_){
_start:
{
lean_object* v_res_1145_; 
v_res_1145_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9(v___y_1142_, v___y_1143_);
lean_dec(v___y_1143_);
lean_dec_ref(v___y_1142_);
return v_res_1145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__16_spec__23___redArg(lean_object* v_o_1146_, lean_object* v___y_1147_){
_start:
{
lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v_env_1151_; lean_object* v___x_1152_; lean_object* v_toEnvExtension_1153_; lean_object* v_asyncMode_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v_merged_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1165_; 
v___x_1149_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_1150_ = lean_st_ref_get(v___y_1147_);
v_env_1151_ = lean_ctor_get(v___x_1150_, 0);
lean_inc_ref(v_env_1151_);
lean_dec(v___x_1150_);
v___x_1152_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_1153_ = lean_ctor_get(v___x_1152_, 0);
v_asyncMode_1154_ = lean_ctor_get(v_toEnvExtension_1153_, 2);
v___x_1155_ = lean_box(0);
v___x_1156_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1149_, v___x_1152_, v_env_1151_, v_asyncMode_1154_, v___x_1155_);
v_merged_1157_ = lean_ctor_get(v___x_1156_, 0);
v_isSharedCheck_1165_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1165_ == 0)
{
lean_object* v_unused_1166_; 
v_unused_1166_ = lean_ctor_get(v___x_1156_, 1);
lean_dec(v_unused_1166_);
v___x_1159_ = v___x_1156_;
v_isShared_1160_ = v_isSharedCheck_1165_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_merged_1157_);
lean_dec(v___x_1156_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1165_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1162_; 
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 1, v_merged_1157_);
lean_ctor_set(v___x_1159_, 0, v_o_1146_);
v___x_1162_ = v___x_1159_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v_o_1146_);
lean_ctor_set(v_reuseFailAlloc_1164_, 1, v_merged_1157_);
v___x_1162_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
lean_object* v___x_1163_; 
v___x_1163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1163_, 0, v___x_1162_);
return v___x_1163_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__16_spec__23___redArg___boxed(lean_object* v_o_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_){
_start:
{
lean_object* v_res_1170_; 
v_res_1170_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__16_spec__23___redArg(v_o_1167_, v___y_1168_);
lean_dec(v___y_1168_);
return v_res_1170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__16(lean_object* v___y_1171_, lean_object* v___y_1172_){
_start:
{
lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v_scopes_1176_; lean_object* v___x_1177_; lean_object* v_opts_1178_; lean_object* v___x_1179_; 
v___x_1174_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1175_ = lean_st_ref_get(v___y_1172_);
v_scopes_1176_ = lean_ctor_get(v___x_1175_, 2);
lean_inc(v_scopes_1176_);
lean_dec(v___x_1175_);
v___x_1177_ = l_List_head_x21___redArg(v___x_1174_, v_scopes_1176_);
lean_dec(v_scopes_1176_);
v_opts_1178_ = lean_ctor_get(v___x_1177_, 1);
lean_inc_ref(v_opts_1178_);
lean_dec(v___x_1177_);
v___x_1179_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__16_spec__23___redArg(v_opts_1178_, v___y_1172_);
return v___x_1179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__16___boxed(lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_){
_start:
{
lean_object* v_res_1183_; 
v_res_1183_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__16(v___y_1180_, v___y_1181_);
lean_dec(v___y_1181_);
lean_dec_ref(v___y_1180_);
return v_res_1183_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25_spec__28___lam__0(uint8_t v_suppressElabErrors_1185_, uint8_t v___y_1186_, lean_object* v_x_1187_){
_start:
{
if (lean_obj_tag(v_x_1187_) == 1)
{
lean_object* v_pre_1188_; 
v_pre_1188_ = lean_ctor_get(v_x_1187_, 0);
if (lean_obj_tag(v_pre_1188_) == 0)
{
lean_object* v_str_1189_; lean_object* v___x_1190_; uint8_t v___x_1191_; 
v_str_1189_ = lean_ctor_get(v_x_1187_, 1);
v___x_1190_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25_spec__28___lam__0___closed__0));
v___x_1191_ = lean_string_dec_eq(v_str_1189_, v___x_1190_);
if (v___x_1191_ == 0)
{
return v___x_1191_;
}
else
{
return v_suppressElabErrors_1185_;
}
}
else
{
return v___y_1186_;
}
}
else
{
return v___y_1186_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25_spec__28___lam__0___boxed(lean_object* v_suppressElabErrors_1192_, lean_object* v___y_1193_, lean_object* v_x_1194_){
_start:
{
uint8_t v_suppressElabErrors_boxed_1195_; uint8_t v___y_28874__boxed_1196_; uint8_t v_res_1197_; lean_object* v_r_1198_; 
v_suppressElabErrors_boxed_1195_ = lean_unbox(v_suppressElabErrors_1192_);
v___y_28874__boxed_1196_ = lean_unbox(v___y_1193_);
v_res_1197_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25_spec__28___lam__0(v_suppressElabErrors_boxed_1195_, v___y_28874__boxed_1196_, v_x_1194_);
lean_dec(v_x_1194_);
v_r_1198_ = lean_box(v_res_1197_);
return v_r_1198_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__0(void){
_start:
{
lean_object* v___x_1199_; 
v___x_1199_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1199_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__1(void){
_start:
{
lean_object* v___x_1200_; lean_object* v___x_1201_; 
v___x_1200_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__0);
v___x_1201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1201_, 0, v___x_1200_);
return v___x_1201_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__2(void){
_start:
{
lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; 
v___x_1202_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__1);
v___x_1203_ = lean_unsigned_to_nat(0u);
v___x_1204_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1204_, 0, v___x_1203_);
lean_ctor_set(v___x_1204_, 1, v___x_1203_);
lean_ctor_set(v___x_1204_, 2, v___x_1203_);
lean_ctor_set(v___x_1204_, 3, v___x_1203_);
lean_ctor_set(v___x_1204_, 4, v___x_1202_);
lean_ctor_set(v___x_1204_, 5, v___x_1202_);
lean_ctor_set(v___x_1204_, 6, v___x_1202_);
lean_ctor_set(v___x_1204_, 7, v___x_1202_);
lean_ctor_set(v___x_1204_, 8, v___x_1202_);
lean_ctor_set(v___x_1204_, 9, v___x_1202_);
lean_ctor_set(v___x_1204_, 10, v___x_1202_);
return v___x_1204_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__3(void){
_start:
{
lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; 
v___x_1205_ = lean_unsigned_to_nat(32u);
v___x_1206_ = lean_mk_empty_array_with_capacity(v___x_1205_);
v___x_1207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1207_, 0, v___x_1206_);
return v___x_1207_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__4(void){
_start:
{
size_t v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; 
v___x_1208_ = ((size_t)5ULL);
v___x_1209_ = lean_unsigned_to_nat(0u);
v___x_1210_ = lean_unsigned_to_nat(32u);
v___x_1211_ = lean_mk_empty_array_with_capacity(v___x_1210_);
v___x_1212_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__3);
v___x_1213_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1213_, 0, v___x_1212_);
lean_ctor_set(v___x_1213_, 1, v___x_1211_);
lean_ctor_set(v___x_1213_, 2, v___x_1209_);
lean_ctor_set(v___x_1213_, 3, v___x_1209_);
lean_ctor_set_usize(v___x_1213_, 4, v___x_1208_);
return v___x_1213_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__5(void){
_start:
{
lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; 
v___x_1214_ = lean_box(1);
v___x_1215_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__4);
v___x_1216_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__1);
v___x_1217_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1217_, 0, v___x_1216_);
lean_ctor_set(v___x_1217_, 1, v___x_1215_);
lean_ctor_set(v___x_1217_, 2, v___x_1214_);
return v___x_1217_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg(lean_object* v_msgData_1218_, lean_object* v___y_1219_){
_start:
{
lean_object* v___x_1221_; lean_object* v_env_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v_scopes_1225_; lean_object* v___x_1226_; lean_object* v_opts_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; 
v___x_1221_ = lean_st_ref_get(v___y_1219_);
v_env_1222_ = lean_ctor_get(v___x_1221_, 0);
lean_inc_ref(v_env_1222_);
lean_dec(v___x_1221_);
v___x_1223_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1224_ = lean_st_ref_get(v___y_1219_);
v_scopes_1225_ = lean_ctor_get(v___x_1224_, 2);
lean_inc(v_scopes_1225_);
lean_dec(v___x_1224_);
v___x_1226_ = l_List_head_x21___redArg(v___x_1223_, v_scopes_1225_);
lean_dec(v_scopes_1225_);
v_opts_1227_ = lean_ctor_get(v___x_1226_, 1);
lean_inc_ref(v_opts_1227_);
lean_dec(v___x_1226_);
v___x_1228_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__2);
v___x_1229_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__5);
v___x_1230_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1230_, 0, v_env_1222_);
lean_ctor_set(v___x_1230_, 1, v___x_1228_);
lean_ctor_set(v___x_1230_, 2, v___x_1229_);
lean_ctor_set(v___x_1230_, 3, v_opts_1227_);
v___x_1231_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1231_, 0, v___x_1230_);
lean_ctor_set(v___x_1231_, 1, v_msgData_1218_);
v___x_1232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1231_);
return v___x_1232_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___boxed(lean_object* v_msgData_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_){
_start:
{
lean_object* v_res_1236_; 
v_res_1236_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg(v_msgData_1233_, v___y_1234_);
lean_dec(v___y_1234_);
return v_res_1236_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25_spec__28(lean_object* v_ref_1238_, lean_object* v_msgData_1239_, uint8_t v_severity_1240_, uint8_t v_isSilent_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_){
_start:
{
uint8_t v___y_1246_; lean_object* v___y_1247_; uint8_t v___y_1248_; lean_object* v___y_1249_; lean_object* v___y_1250_; lean_object* v___y_1251_; lean_object* v___y_1252_; lean_object* v___y_1253_; uint8_t v___y_1311_; uint8_t v___y_1312_; uint8_t v___y_1313_; lean_object* v___y_1314_; lean_object* v___y_1315_; uint8_t v___y_1339_; uint8_t v___y_1340_; uint8_t v___y_1341_; lean_object* v___y_1342_; lean_object* v___y_1343_; uint8_t v___y_1347_; uint8_t v___y_1348_; uint8_t v___y_1349_; uint8_t v___x_1364_; uint8_t v___y_1366_; uint8_t v___y_1367_; uint8_t v___y_1368_; uint8_t v___y_1370_; uint8_t v___x_1382_; 
v___x_1364_ = 2;
v___x_1382_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1240_, v___x_1364_);
if (v___x_1382_ == 0)
{
v___y_1370_ = v___x_1382_;
goto v___jp_1369_;
}
else
{
uint8_t v___x_1383_; 
lean_inc_ref(v_msgData_1239_);
v___x_1383_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1239_);
v___y_1370_ = v___x_1383_;
goto v___jp_1369_;
}
v___jp_1245_:
{
lean_object* v___x_1254_; 
v___x_1254_ = l_Lean_Elab_Command_getScope___redArg(v___y_1253_);
if (lean_obj_tag(v___x_1254_) == 0)
{
lean_object* v_a_1255_; lean_object* v_currNamespace_1256_; lean_object* v___x_1257_; 
v_a_1255_ = lean_ctor_get(v___x_1254_, 0);
lean_inc(v_a_1255_);
lean_dec_ref_known(v___x_1254_, 1);
v_currNamespace_1256_ = lean_ctor_get(v_a_1255_, 2);
lean_inc(v_currNamespace_1256_);
lean_dec(v_a_1255_);
v___x_1257_ = l_Lean_Elab_Command_getScope___redArg(v___y_1253_);
if (lean_obj_tag(v___x_1257_) == 0)
{
lean_object* v_a_1258_; lean_object* v___x_1260_; uint8_t v_isShared_1261_; uint8_t v_isSharedCheck_1293_; 
v_a_1258_ = lean_ctor_get(v___x_1257_, 0);
v_isSharedCheck_1293_ = !lean_is_exclusive(v___x_1257_);
if (v_isSharedCheck_1293_ == 0)
{
v___x_1260_ = v___x_1257_;
v_isShared_1261_ = v_isSharedCheck_1293_;
goto v_resetjp_1259_;
}
else
{
lean_inc(v_a_1258_);
lean_dec(v___x_1257_);
v___x_1260_ = lean_box(0);
v_isShared_1261_ = v_isSharedCheck_1293_;
goto v_resetjp_1259_;
}
v_resetjp_1259_:
{
lean_object* v_openDecls_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v_env_1267_; lean_object* v_messages_1268_; lean_object* v_scopes_1269_; lean_object* v_usedQuotCtxts_1270_; lean_object* v_nextMacroScope_1271_; lean_object* v_maxRecDepth_1272_; lean_object* v_ngen_1273_; lean_object* v_auxDeclNGen_1274_; lean_object* v_infoState_1275_; lean_object* v_traceState_1276_; lean_object* v_snapshotTasks_1277_; lean_object* v_prevLinterStates_1278_; lean_object* v_codeQualityEntryTasks_1279_; lean_object* v___x_1281_; uint8_t v_isShared_1282_; uint8_t v_isSharedCheck_1292_; 
v_openDecls_1262_ = lean_ctor_get(v_a_1258_, 3);
lean_inc(v_openDecls_1262_);
lean_dec(v_a_1258_);
v___x_1263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1263_, 0, v_currNamespace_1256_);
lean_ctor_set(v___x_1263_, 1, v_openDecls_1262_);
v___x_1264_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1264_, 0, v___x_1263_);
lean_ctor_set(v___x_1264_, 1, v___y_1252_);
lean_inc_ref(v___y_1251_);
lean_inc_ref(v___y_1249_);
v___x_1265_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1265_, 0, v___y_1249_);
lean_ctor_set(v___x_1265_, 1, v___y_1250_);
lean_ctor_set(v___x_1265_, 2, v___y_1247_);
lean_ctor_set(v___x_1265_, 3, v___y_1251_);
lean_ctor_set(v___x_1265_, 4, v___x_1264_);
lean_ctor_set_uint8(v___x_1265_, sizeof(void*)*5, v___y_1248_);
lean_ctor_set_uint8(v___x_1265_, sizeof(void*)*5 + 1, v___y_1246_);
lean_ctor_set_uint8(v___x_1265_, sizeof(void*)*5 + 2, v_isSilent_1241_);
v___x_1266_ = lean_st_ref_take(v___y_1253_);
v_env_1267_ = lean_ctor_get(v___x_1266_, 0);
v_messages_1268_ = lean_ctor_get(v___x_1266_, 1);
v_scopes_1269_ = lean_ctor_get(v___x_1266_, 2);
v_usedQuotCtxts_1270_ = lean_ctor_get(v___x_1266_, 3);
v_nextMacroScope_1271_ = lean_ctor_get(v___x_1266_, 4);
v_maxRecDepth_1272_ = lean_ctor_get(v___x_1266_, 5);
v_ngen_1273_ = lean_ctor_get(v___x_1266_, 6);
v_auxDeclNGen_1274_ = lean_ctor_get(v___x_1266_, 7);
v_infoState_1275_ = lean_ctor_get(v___x_1266_, 8);
v_traceState_1276_ = lean_ctor_get(v___x_1266_, 9);
v_snapshotTasks_1277_ = lean_ctor_get(v___x_1266_, 10);
v_prevLinterStates_1278_ = lean_ctor_get(v___x_1266_, 11);
v_codeQualityEntryTasks_1279_ = lean_ctor_get(v___x_1266_, 12);
v_isSharedCheck_1292_ = !lean_is_exclusive(v___x_1266_);
if (v_isSharedCheck_1292_ == 0)
{
v___x_1281_ = v___x_1266_;
v_isShared_1282_ = v_isSharedCheck_1292_;
goto v_resetjp_1280_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1279_);
lean_inc(v_prevLinterStates_1278_);
lean_inc(v_snapshotTasks_1277_);
lean_inc(v_traceState_1276_);
lean_inc(v_infoState_1275_);
lean_inc(v_auxDeclNGen_1274_);
lean_inc(v_ngen_1273_);
lean_inc(v_maxRecDepth_1272_);
lean_inc(v_nextMacroScope_1271_);
lean_inc(v_usedQuotCtxts_1270_);
lean_inc(v_scopes_1269_);
lean_inc(v_messages_1268_);
lean_inc(v_env_1267_);
lean_dec(v___x_1266_);
v___x_1281_ = lean_box(0);
v_isShared_1282_ = v_isSharedCheck_1292_;
goto v_resetjp_1280_;
}
v_resetjp_1280_:
{
lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1286_; 
v___x_1283_ = lean_box(0);
v___x_1284_ = l_Lean_MessageLog_add(v___x_1265_, v_messages_1268_);
if (v_isShared_1282_ == 0)
{
lean_ctor_set(v___x_1281_, 1, v___x_1284_);
v___x_1286_ = v___x_1281_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1291_; 
v_reuseFailAlloc_1291_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1291_, 0, v_env_1267_);
lean_ctor_set(v_reuseFailAlloc_1291_, 1, v___x_1284_);
lean_ctor_set(v_reuseFailAlloc_1291_, 2, v_scopes_1269_);
lean_ctor_set(v_reuseFailAlloc_1291_, 3, v_usedQuotCtxts_1270_);
lean_ctor_set(v_reuseFailAlloc_1291_, 4, v_nextMacroScope_1271_);
lean_ctor_set(v_reuseFailAlloc_1291_, 5, v_maxRecDepth_1272_);
lean_ctor_set(v_reuseFailAlloc_1291_, 6, v_ngen_1273_);
lean_ctor_set(v_reuseFailAlloc_1291_, 7, v_auxDeclNGen_1274_);
lean_ctor_set(v_reuseFailAlloc_1291_, 8, v_infoState_1275_);
lean_ctor_set(v_reuseFailAlloc_1291_, 9, v_traceState_1276_);
lean_ctor_set(v_reuseFailAlloc_1291_, 10, v_snapshotTasks_1277_);
lean_ctor_set(v_reuseFailAlloc_1291_, 11, v_prevLinterStates_1278_);
lean_ctor_set(v_reuseFailAlloc_1291_, 12, v_codeQualityEntryTasks_1279_);
v___x_1286_ = v_reuseFailAlloc_1291_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
lean_object* v___x_1287_; lean_object* v___x_1289_; 
v___x_1287_ = lean_st_ref_put(v___y_1253_, v___x_1286_);
if (v_isShared_1261_ == 0)
{
lean_ctor_set(v___x_1260_, 0, v___x_1283_);
v___x_1289_ = v___x_1260_;
goto v_reusejp_1288_;
}
else
{
lean_object* v_reuseFailAlloc_1290_; 
v_reuseFailAlloc_1290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1290_, 0, v___x_1283_);
v___x_1289_ = v_reuseFailAlloc_1290_;
goto v_reusejp_1288_;
}
v_reusejp_1288_:
{
return v___x_1289_;
}
}
}
}
}
else
{
lean_object* v_a_1294_; lean_object* v___x_1296_; uint8_t v_isShared_1297_; uint8_t v_isSharedCheck_1301_; 
lean_dec(v_currNamespace_1256_);
lean_dec_ref(v___y_1252_);
lean_dec_ref(v___y_1250_);
lean_dec(v___y_1247_);
v_a_1294_ = lean_ctor_get(v___x_1257_, 0);
v_isSharedCheck_1301_ = !lean_is_exclusive(v___x_1257_);
if (v_isSharedCheck_1301_ == 0)
{
v___x_1296_ = v___x_1257_;
v_isShared_1297_ = v_isSharedCheck_1301_;
goto v_resetjp_1295_;
}
else
{
lean_inc(v_a_1294_);
lean_dec(v___x_1257_);
v___x_1296_ = lean_box(0);
v_isShared_1297_ = v_isSharedCheck_1301_;
goto v_resetjp_1295_;
}
v_resetjp_1295_:
{
lean_object* v___x_1299_; 
if (v_isShared_1297_ == 0)
{
v___x_1299_ = v___x_1296_;
goto v_reusejp_1298_;
}
else
{
lean_object* v_reuseFailAlloc_1300_; 
v_reuseFailAlloc_1300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1300_, 0, v_a_1294_);
v___x_1299_ = v_reuseFailAlloc_1300_;
goto v_reusejp_1298_;
}
v_reusejp_1298_:
{
return v___x_1299_;
}
}
}
}
else
{
lean_object* v_a_1302_; lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1309_; 
lean_dec_ref(v___y_1252_);
lean_dec_ref(v___y_1250_);
lean_dec(v___y_1247_);
v_a_1302_ = lean_ctor_get(v___x_1254_, 0);
v_isSharedCheck_1309_ = !lean_is_exclusive(v___x_1254_);
if (v_isSharedCheck_1309_ == 0)
{
v___x_1304_ = v___x_1254_;
v_isShared_1305_ = v_isSharedCheck_1309_;
goto v_resetjp_1303_;
}
else
{
lean_inc(v_a_1302_);
lean_dec(v___x_1254_);
v___x_1304_ = lean_box(0);
v_isShared_1305_ = v_isSharedCheck_1309_;
goto v_resetjp_1303_;
}
v_resetjp_1303_:
{
lean_object* v___x_1307_; 
if (v_isShared_1305_ == 0)
{
v___x_1307_ = v___x_1304_;
goto v_reusejp_1306_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v_a_1302_);
v___x_1307_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1306_;
}
v_reusejp_1306_:
{
return v___x_1307_;
}
}
}
}
v___jp_1310_:
{
lean_object* v_fileName_1316_; lean_object* v_fileMap_1317_; uint8_t v_suppressElabErrors_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___f_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v_a_1324_; lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1337_; 
v_fileName_1316_ = lean_ctor_get(v___y_1242_, 0);
v_fileMap_1317_ = lean_ctor_get(v___y_1242_, 1);
v_suppressElabErrors_1318_ = lean_ctor_get_uint8(v___y_1242_, sizeof(void*)*10);
v___x_1319_ = lean_box(v_suppressElabErrors_1318_);
v___x_1320_ = lean_box(v___y_1311_);
v___f_1321_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25_spec__28___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1321_, 0, v___x_1319_);
lean_closure_set(v___f_1321_, 1, v___x_1320_);
v___x_1322_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1239_);
v___x_1323_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg(v___x_1322_, v___y_1243_);
v_a_1324_ = lean_ctor_get(v___x_1323_, 0);
v_isSharedCheck_1337_ = !lean_is_exclusive(v___x_1323_);
if (v_isSharedCheck_1337_ == 0)
{
v___x_1326_ = v___x_1323_;
v_isShared_1327_ = v_isSharedCheck_1337_;
goto v_resetjp_1325_;
}
else
{
lean_inc(v_a_1324_);
lean_dec(v___x_1323_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1337_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; 
lean_inc_ref_n(v_fileMap_1317_, 2);
v___x_1328_ = l_Lean_FileMap_toPosition(v_fileMap_1317_, v___y_1314_);
lean_dec(v___y_1314_);
v___x_1329_ = l_Lean_FileMap_toPosition(v_fileMap_1317_, v___y_1315_);
lean_dec(v___y_1315_);
v___x_1330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1330_, 0, v___x_1329_);
v___x_1331_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25_spec__28___closed__0));
if (v_suppressElabErrors_1318_ == 0)
{
lean_del_object(v___x_1326_);
lean_dec_ref(v___f_1321_);
v___y_1246_ = v___y_1312_;
v___y_1247_ = v___x_1330_;
v___y_1248_ = v___y_1313_;
v___y_1249_ = v_fileName_1316_;
v___y_1250_ = v___x_1328_;
v___y_1251_ = v___x_1331_;
v___y_1252_ = v_a_1324_;
v___y_1253_ = v___y_1243_;
goto v___jp_1245_;
}
else
{
uint8_t v___x_1332_; 
lean_inc(v_a_1324_);
v___x_1332_ = l_Lean_MessageData_hasTag(v___f_1321_, v_a_1324_);
if (v___x_1332_ == 0)
{
lean_object* v___x_1333_; lean_object* v___x_1335_; 
lean_dec_ref_known(v___x_1330_, 1);
lean_dec_ref(v___x_1328_);
lean_dec(v_a_1324_);
v___x_1333_ = lean_box(0);
if (v_isShared_1327_ == 0)
{
lean_ctor_set(v___x_1326_, 0, v___x_1333_);
v___x_1335_ = v___x_1326_;
goto v_reusejp_1334_;
}
else
{
lean_object* v_reuseFailAlloc_1336_; 
v_reuseFailAlloc_1336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1336_, 0, v___x_1333_);
v___x_1335_ = v_reuseFailAlloc_1336_;
goto v_reusejp_1334_;
}
v_reusejp_1334_:
{
return v___x_1335_;
}
}
else
{
lean_del_object(v___x_1326_);
v___y_1246_ = v___y_1312_;
v___y_1247_ = v___x_1330_;
v___y_1248_ = v___y_1313_;
v___y_1249_ = v_fileName_1316_;
v___y_1250_ = v___x_1328_;
v___y_1251_ = v___x_1331_;
v___y_1252_ = v_a_1324_;
v___y_1253_ = v___y_1243_;
goto v___jp_1245_;
}
}
}
}
v___jp_1338_:
{
lean_object* v___x_1344_; 
v___x_1344_ = l_Lean_Syntax_getTailPos_x3f(v___y_1342_, v___y_1341_);
lean_dec(v___y_1342_);
if (lean_obj_tag(v___x_1344_) == 0)
{
lean_inc(v___y_1343_);
v___y_1311_ = v___y_1339_;
v___y_1312_ = v___y_1340_;
v___y_1313_ = v___y_1341_;
v___y_1314_ = v___y_1343_;
v___y_1315_ = v___y_1343_;
goto v___jp_1310_;
}
else
{
lean_object* v_val_1345_; 
v_val_1345_ = lean_ctor_get(v___x_1344_, 0);
lean_inc(v_val_1345_);
lean_dec_ref_known(v___x_1344_, 1);
v___y_1311_ = v___y_1339_;
v___y_1312_ = v___y_1340_;
v___y_1313_ = v___y_1341_;
v___y_1314_ = v___y_1343_;
v___y_1315_ = v_val_1345_;
goto v___jp_1310_;
}
}
v___jp_1346_:
{
lean_object* v___x_1350_; 
v___x_1350_ = l_Lean_Elab_Command_getRef___redArg(v___y_1242_);
if (lean_obj_tag(v___x_1350_) == 0)
{
lean_object* v_a_1351_; lean_object* v_ref_1352_; lean_object* v___x_1353_; 
v_a_1351_ = lean_ctor_get(v___x_1350_, 0);
lean_inc(v_a_1351_);
lean_dec_ref_known(v___x_1350_, 1);
v_ref_1352_ = l_Lean_replaceRef(v_ref_1238_, v_a_1351_);
lean_dec(v_a_1351_);
v___x_1353_ = l_Lean_Syntax_getPos_x3f(v_ref_1352_, v___y_1348_);
if (lean_obj_tag(v___x_1353_) == 0)
{
lean_object* v___x_1354_; 
v___x_1354_ = lean_unsigned_to_nat(0u);
v___y_1339_ = v___y_1347_;
v___y_1340_ = v___y_1349_;
v___y_1341_ = v___y_1348_;
v___y_1342_ = v_ref_1352_;
v___y_1343_ = v___x_1354_;
goto v___jp_1338_;
}
else
{
lean_object* v_val_1355_; 
v_val_1355_ = lean_ctor_get(v___x_1353_, 0);
lean_inc(v_val_1355_);
lean_dec_ref_known(v___x_1353_, 1);
v___y_1339_ = v___y_1347_;
v___y_1340_ = v___y_1349_;
v___y_1341_ = v___y_1348_;
v___y_1342_ = v_ref_1352_;
v___y_1343_ = v_val_1355_;
goto v___jp_1338_;
}
}
else
{
lean_object* v_a_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1363_; 
lean_dec_ref(v_msgData_1239_);
v_a_1356_ = lean_ctor_get(v___x_1350_, 0);
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1350_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1358_ = v___x_1350_;
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_a_1356_);
lean_dec(v___x_1350_);
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
v___jp_1365_:
{
if (v___y_1368_ == 0)
{
v___y_1347_ = v___y_1366_;
v___y_1348_ = v___y_1367_;
v___y_1349_ = v_severity_1240_;
goto v___jp_1346_;
}
else
{
v___y_1347_ = v___y_1366_;
v___y_1348_ = v___y_1367_;
v___y_1349_ = v___x_1364_;
goto v___jp_1346_;
}
}
v___jp_1369_:
{
if (v___y_1370_ == 0)
{
lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v_scopes_1373_; lean_object* v___x_1374_; lean_object* v_opts_1375_; uint8_t v___x_1376_; uint8_t v___x_1377_; 
v___x_1371_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1372_ = lean_st_ref_get(v___y_1243_);
v_scopes_1373_ = lean_ctor_get(v___x_1372_, 2);
lean_inc(v_scopes_1373_);
lean_dec(v___x_1372_);
v___x_1374_ = l_List_head_x21___redArg(v___x_1371_, v_scopes_1373_);
lean_dec(v_scopes_1373_);
v_opts_1375_ = lean_ctor_get(v___x_1374_, 1);
lean_inc_ref(v_opts_1375_);
lean_dec(v___x_1374_);
v___x_1376_ = 1;
v___x_1377_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1240_, v___x_1376_);
if (v___x_1377_ == 0)
{
lean_dec_ref(v_opts_1375_);
v___y_1366_ = v___y_1370_;
v___y_1367_ = v___y_1370_;
v___y_1368_ = v___x_1377_;
goto v___jp_1365_;
}
else
{
lean_object* v___x_1378_; uint8_t v___x_1379_; 
v___x_1378_ = l_Lean_warningAsError;
v___x_1379_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__12(v_opts_1375_, v___x_1378_);
lean_dec_ref(v_opts_1375_);
v___y_1366_ = v___y_1370_;
v___y_1367_ = v___y_1370_;
v___y_1368_ = v___x_1379_;
goto v___jp_1365_;
}
}
else
{
lean_object* v___x_1380_; lean_object* v___x_1381_; 
lean_dec_ref(v_msgData_1239_);
v___x_1380_ = lean_box(0);
v___x_1381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1381_, 0, v___x_1380_);
return v___x_1381_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25_spec__28___boxed(lean_object* v_ref_1384_, lean_object* v_msgData_1385_, lean_object* v_severity_1386_, lean_object* v_isSilent_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_){
_start:
{
uint8_t v_severity_boxed_1391_; uint8_t v_isSilent_boxed_1392_; lean_object* v_res_1393_; 
v_severity_boxed_1391_ = lean_unbox(v_severity_1386_);
v_isSilent_boxed_1392_ = lean_unbox(v_isSilent_1387_);
v_res_1393_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25_spec__28(v_ref_1384_, v_msgData_1385_, v_severity_boxed_1391_, v_isSilent_boxed_1392_, v___y_1388_, v___y_1389_);
lean_dec(v___y_1389_);
lean_dec_ref(v___y_1388_);
lean_dec(v_ref_1384_);
return v_res_1393_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25(lean_object* v_ref_1394_, lean_object* v_msgData_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_){
_start:
{
uint8_t v___x_1399_; uint8_t v___x_1400_; lean_object* v___x_1401_; 
v___x_1399_ = 1;
v___x_1400_ = 0;
v___x_1401_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25_spec__28(v_ref_1394_, v_msgData_1395_, v___x_1399_, v___x_1400_, v___y_1396_, v___y_1397_);
return v___x_1401_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25___boxed(lean_object* v_ref_1402_, lean_object* v_msgData_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_){
_start:
{
lean_object* v_res_1407_; 
v_res_1407_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25(v_ref_1402_, v_msgData_1403_, v___y_1404_, v___y_1405_);
lean_dec(v___y_1405_);
lean_dec_ref(v___y_1404_);
lean_dec(v_ref_1402_);
return v_res_1407_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17___closed__1(void){
_start:
{
lean_object* v___x_1409_; lean_object* v___x_1410_; 
v___x_1409_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17___closed__0));
v___x_1410_ = l_Lean_stringToMessageData(v___x_1409_);
return v___x_1410_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17___closed__3(void){
_start:
{
lean_object* v___x_1412_; lean_object* v___x_1413_; 
v___x_1412_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17___closed__2));
v___x_1413_ = l_Lean_stringToMessageData(v___x_1412_);
return v___x_1413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17(lean_object* v_linterOption_1414_, lean_object* v_stx_1415_, lean_object* v_msg_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_){
_start:
{
lean_object* v_name_1420_; lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1438_; 
v_name_1420_ = lean_ctor_get(v_linterOption_1414_, 0);
v_isSharedCheck_1438_ = !lean_is_exclusive(v_linterOption_1414_);
if (v_isSharedCheck_1438_ == 0)
{
lean_object* v_unused_1439_; 
v_unused_1439_ = lean_ctor_get(v_linterOption_1414_, 1);
lean_dec(v_unused_1439_);
v___x_1422_ = v_linterOption_1414_;
v_isShared_1423_ = v_isSharedCheck_1438_;
goto v_resetjp_1421_;
}
else
{
lean_inc(v_name_1420_);
lean_dec(v_linterOption_1414_);
v___x_1422_ = lean_box(0);
v_isShared_1423_ = v_isSharedCheck_1438_;
goto v_resetjp_1421_;
}
v_resetjp_1421_:
{
lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1427_; 
v___x_1424_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17___closed__1, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17___closed__1_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17___closed__1);
lean_inc(v_name_1420_);
v___x_1425_ = l_Lean_MessageData_ofName(v_name_1420_);
if (v_isShared_1423_ == 0)
{
lean_ctor_set_tag(v___x_1422_, 7);
lean_ctor_set(v___x_1422_, 1, v___x_1425_);
lean_ctor_set(v___x_1422_, 0, v___x_1424_);
v___x_1427_ = v___x_1422_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1437_; 
v_reuseFailAlloc_1437_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1437_, 0, v___x_1424_);
lean_ctor_set(v_reuseFailAlloc_1437_, 1, v___x_1425_);
v___x_1427_ = v_reuseFailAlloc_1437_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v_disable_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; 
v___x_1428_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17___closed__3, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17___closed__3_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17___closed__3);
v___x_1429_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1429_, 0, v___x_1427_);
lean_ctor_set(v___x_1429_, 1, v___x_1428_);
v_disable_1430_ = l_Lean_MessageData_note(v___x_1429_);
v___x_1431_ = l_Lean_Linter_linterMessageTag;
v___x_1432_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1432_, 0, v_msg_1416_);
lean_ctor_set(v___x_1432_, 1, v_disable_1430_);
v___x_1433_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1433_, 0, v___x_1431_);
lean_ctor_set(v___x_1433_, 1, v___x_1432_);
v___x_1434_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1434_, 0, v_name_1420_);
lean_ctor_set(v___x_1434_, 1, v___x_1433_);
lean_inc(v_stx_1415_);
v___x_1435_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_1435_, 0, v_stx_1415_);
lean_ctor_set(v___x_1435_, 1, v___x_1434_);
v___x_1436_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25(v_stx_1415_, v___x_1435_, v___y_1417_, v___y_1418_);
lean_dec(v_stx_1415_);
return v___x_1436_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17___boxed(lean_object* v_linterOption_1440_, lean_object* v_stx_1441_, lean_object* v_msg_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_){
_start:
{
lean_object* v_res_1446_; 
v_res_1446_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17(v_linterOption_1440_, v_stx_1441_, v_msg_1442_, v___y_1443_, v___y_1444_);
lean_dec(v___y_1444_);
lean_dec_ref(v___y_1443_);
return v_res_1446_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4(lean_object* v_linterOption_1447_, lean_object* v_stx_1448_, lean_object* v_msg_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_){
_start:
{
lean_object* v___x_1453_; lean_object* v_a_1454_; lean_object* v___x_1456_; uint8_t v_isShared_1457_; uint8_t v_isSharedCheck_1464_; 
v___x_1453_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__16(v___y_1450_, v___y_1451_);
v_a_1454_ = lean_ctor_get(v___x_1453_, 0);
v_isSharedCheck_1464_ = !lean_is_exclusive(v___x_1453_);
if (v_isSharedCheck_1464_ == 0)
{
v___x_1456_ = v___x_1453_;
v_isShared_1457_ = v_isSharedCheck_1464_;
goto v_resetjp_1455_;
}
else
{
lean_inc(v_a_1454_);
lean_dec(v___x_1453_);
v___x_1456_ = lean_box(0);
v_isShared_1457_ = v_isSharedCheck_1464_;
goto v_resetjp_1455_;
}
v_resetjp_1455_:
{
uint8_t v___x_1458_; 
v___x_1458_ = l_Lean_Linter_getLinterValue(v_linterOption_1447_, v_a_1454_);
lean_dec(v_a_1454_);
if (v___x_1458_ == 0)
{
lean_object* v___x_1459_; lean_object* v___x_1461_; 
lean_dec_ref(v_msg_1449_);
lean_dec(v_stx_1448_);
lean_dec_ref(v_linterOption_1447_);
v___x_1459_ = lean_box(0);
if (v_isShared_1457_ == 0)
{
lean_ctor_set(v___x_1456_, 0, v___x_1459_);
v___x_1461_ = v___x_1456_;
goto v_reusejp_1460_;
}
else
{
lean_object* v_reuseFailAlloc_1462_; 
v_reuseFailAlloc_1462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1462_, 0, v___x_1459_);
v___x_1461_ = v_reuseFailAlloc_1462_;
goto v_reusejp_1460_;
}
v_reusejp_1460_:
{
return v___x_1461_;
}
}
else
{
lean_object* v___x_1463_; 
lean_del_object(v___x_1456_);
v___x_1463_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17(v_linterOption_1447_, v_stx_1448_, v_msg_1449_, v___y_1450_, v___y_1451_);
return v___x_1463_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___boxed(lean_object* v_linterOption_1465_, lean_object* v_stx_1466_, lean_object* v_msg_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_){
_start:
{
lean_object* v_res_1471_; 
v_res_1471_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4(v_linterOption_1465_, v_stx_1466_, v_msg_1467_, v___y_1468_, v___y_1469_);
lean_dec(v___y_1469_);
lean_dec_ref(v___y_1468_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__20___redArg(lean_object* v_msgData_1472_, lean_object* v_macroStack_1473_, lean_object* v___y_1474_){
_start:
{
lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v_scopes_1478_; lean_object* v___x_1479_; lean_object* v_opts_1480_; lean_object* v___x_1481_; uint8_t v___x_1482_; 
v___x_1476_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1477_ = lean_st_ref_get(v___y_1474_);
v_scopes_1478_ = lean_ctor_get(v___x_1477_, 2);
lean_inc(v_scopes_1478_);
lean_dec(v___x_1477_);
v___x_1479_ = l_List_head_x21___redArg(v___x_1476_, v_scopes_1478_);
lean_dec(v_scopes_1478_);
v_opts_1480_ = lean_ctor_get(v___x_1479_, 1);
lean_inc_ref(v_opts_1480_);
lean_dec(v___x_1479_);
v___x_1481_ = l_Lean_Elab_pp_macroStack;
v___x_1482_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__12(v_opts_1480_, v___x_1481_);
lean_dec_ref(v_opts_1480_);
if (v___x_1482_ == 0)
{
lean_object* v___x_1483_; 
lean_dec(v_macroStack_1473_);
v___x_1483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1483_, 0, v_msgData_1472_);
return v___x_1483_;
}
else
{
if (lean_obj_tag(v_macroStack_1473_) == 0)
{
lean_object* v___x_1484_; 
v___x_1484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1484_, 0, v_msgData_1472_);
return v___x_1484_;
}
else
{
lean_object* v_head_1485_; lean_object* v_after_1486_; lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1501_; 
v_head_1485_ = lean_ctor_get(v_macroStack_1473_, 0);
lean_inc(v_head_1485_);
v_after_1486_ = lean_ctor_get(v_head_1485_, 1);
v_isSharedCheck_1501_ = !lean_is_exclusive(v_head_1485_);
if (v_isSharedCheck_1501_ == 0)
{
lean_object* v_unused_1502_; 
v_unused_1502_ = lean_ctor_get(v_head_1485_, 0);
lean_dec(v_unused_1502_);
v___x_1488_ = v_head_1485_;
v_isShared_1489_ = v_isSharedCheck_1501_;
goto v_resetjp_1487_;
}
else
{
lean_inc(v_after_1486_);
lean_dec(v_head_1485_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1501_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v___x_1490_; lean_object* v___x_1492_; 
v___x_1490_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0);
if (v_isShared_1489_ == 0)
{
lean_ctor_set_tag(v___x_1488_, 7);
lean_ctor_set(v___x_1488_, 1, v___x_1490_);
lean_ctor_set(v___x_1488_, 0, v_msgData_1472_);
v___x_1492_ = v___x_1488_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1500_; 
v_reuseFailAlloc_1500_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1500_, 0, v_msgData_1472_);
lean_ctor_set(v_reuseFailAlloc_1500_, 1, v___x_1490_);
v___x_1492_ = v_reuseFailAlloc_1500_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v_msgData_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; 
v___x_1493_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__2);
v___x_1494_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1494_, 0, v___x_1492_);
lean_ctor_set(v___x_1494_, 1, v___x_1493_);
v___x_1495_ = l_Lean_MessageData_ofSyntax(v_after_1486_);
v___x_1496_ = l_Lean_indentD(v___x_1495_);
v_msgData_1497_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_1497_, 0, v___x_1494_);
lean_ctor_set(v_msgData_1497_, 1, v___x_1496_);
v___x_1498_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13(v_msgData_1497_, v_macroStack_1473_);
v___x_1499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1499_, 0, v___x_1498_);
return v___x_1499_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__20___redArg___boxed(lean_object* v_msgData_1503_, lean_object* v_macroStack_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_){
_start:
{
lean_object* v_res_1507_; 
v_res_1507_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__20___redArg(v_msgData_1503_, v_macroStack_1504_, v___y_1505_);
lean_dec(v___y_1505_);
return v_res_1507_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14___redArg(lean_object* v_msg_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_){
_start:
{
lean_object* v___x_1512_; 
v___x_1512_ = l_Lean_Elab_Command_getRef___redArg(v___y_1509_);
if (lean_obj_tag(v___x_1512_) == 0)
{
lean_object* v_a_1513_; lean_object* v_macroStack_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v_a_1517_; lean_object* v___x_1518_; lean_object* v_a_1519_; lean_object* v___x_1521_; uint8_t v_isShared_1522_; uint8_t v_isSharedCheck_1527_; 
v_a_1513_ = lean_ctor_get(v___x_1512_, 0);
lean_inc(v_a_1513_);
lean_dec_ref_known(v___x_1512_, 1);
v_macroStack_1514_ = lean_ctor_get(v___y_1509_, 4);
v___x_1515_ = l_Lean_Elab_getBetterRef(v_a_1513_, v_macroStack_1514_);
lean_dec(v_a_1513_);
v___x_1516_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg(v_msg_1508_, v___y_1510_);
v_a_1517_ = lean_ctor_get(v___x_1516_, 0);
lean_inc(v_a_1517_);
lean_dec_ref(v___x_1516_);
lean_inc(v_macroStack_1514_);
v___x_1518_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__20___redArg(v_a_1517_, v_macroStack_1514_, v___y_1510_);
v_a_1519_ = lean_ctor_get(v___x_1518_, 0);
v_isSharedCheck_1527_ = !lean_is_exclusive(v___x_1518_);
if (v_isSharedCheck_1527_ == 0)
{
v___x_1521_ = v___x_1518_;
v_isShared_1522_ = v_isSharedCheck_1527_;
goto v_resetjp_1520_;
}
else
{
lean_inc(v_a_1519_);
lean_dec(v___x_1518_);
v___x_1521_ = lean_box(0);
v_isShared_1522_ = v_isSharedCheck_1527_;
goto v_resetjp_1520_;
}
v_resetjp_1520_:
{
lean_object* v___x_1523_; lean_object* v___x_1525_; 
v___x_1523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1523_, 0, v___x_1515_);
lean_ctor_set(v___x_1523_, 1, v_a_1519_);
if (v_isShared_1522_ == 0)
{
lean_ctor_set_tag(v___x_1521_, 1);
lean_ctor_set(v___x_1521_, 0, v___x_1523_);
v___x_1525_ = v___x_1521_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v___x_1523_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
return v___x_1525_;
}
}
}
else
{
lean_object* v_a_1528_; lean_object* v___x_1530_; uint8_t v_isShared_1531_; uint8_t v_isSharedCheck_1535_; 
lean_dec_ref(v_msg_1508_);
v_a_1528_ = lean_ctor_get(v___x_1512_, 0);
v_isSharedCheck_1535_ = !lean_is_exclusive(v___x_1512_);
if (v_isSharedCheck_1535_ == 0)
{
v___x_1530_ = v___x_1512_;
v_isShared_1531_ = v_isSharedCheck_1535_;
goto v_resetjp_1529_;
}
else
{
lean_inc(v_a_1528_);
lean_dec(v___x_1512_);
v___x_1530_ = lean_box(0);
v_isShared_1531_ = v_isSharedCheck_1535_;
goto v_resetjp_1529_;
}
v_resetjp_1529_:
{
lean_object* v___x_1533_; 
if (v_isShared_1531_ == 0)
{
v___x_1533_ = v___x_1530_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1534_; 
v_reuseFailAlloc_1534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1534_, 0, v_a_1528_);
v___x_1533_ = v_reuseFailAlloc_1534_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
return v___x_1533_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14___redArg___boxed(lean_object* v_msg_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_){
_start:
{
lean_object* v_res_1540_; 
v_res_1540_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14___redArg(v_msg_1536_, v___y_1537_, v___y_1538_);
lean_dec(v___y_1538_);
lean_dec_ref(v___y_1537_);
return v_res_1540_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3___redArg(lean_object* v_ref_1541_, lean_object* v_msg_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_){
_start:
{
lean_object* v___x_1546_; 
v___x_1546_ = l_Lean_Elab_Command_getRef___redArg(v___y_1543_);
if (lean_obj_tag(v___x_1546_) == 0)
{
lean_object* v_a_1547_; lean_object* v_fileName_1548_; lean_object* v_fileMap_1549_; lean_object* v_currRecDepth_1550_; lean_object* v_cmdPos_1551_; lean_object* v_macroStack_1552_; lean_object* v_quotContext_x3f_1553_; lean_object* v_currMacroScope_1554_; lean_object* v_snap_x3f_1555_; lean_object* v_cancelTk_x3f_1556_; uint8_t v_suppressElabErrors_1557_; lean_object* v_ref_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; 
v_a_1547_ = lean_ctor_get(v___x_1546_, 0);
lean_inc(v_a_1547_);
lean_dec_ref_known(v___x_1546_, 1);
v_fileName_1548_ = lean_ctor_get(v___y_1543_, 0);
v_fileMap_1549_ = lean_ctor_get(v___y_1543_, 1);
v_currRecDepth_1550_ = lean_ctor_get(v___y_1543_, 2);
v_cmdPos_1551_ = lean_ctor_get(v___y_1543_, 3);
v_macroStack_1552_ = lean_ctor_get(v___y_1543_, 4);
v_quotContext_x3f_1553_ = lean_ctor_get(v___y_1543_, 5);
v_currMacroScope_1554_ = lean_ctor_get(v___y_1543_, 6);
v_snap_x3f_1555_ = lean_ctor_get(v___y_1543_, 8);
v_cancelTk_x3f_1556_ = lean_ctor_get(v___y_1543_, 9);
v_suppressElabErrors_1557_ = lean_ctor_get_uint8(v___y_1543_, sizeof(void*)*10);
v_ref_1558_ = l_Lean_replaceRef(v_ref_1541_, v_a_1547_);
lean_dec(v_a_1547_);
lean_inc(v_cancelTk_x3f_1556_);
lean_inc(v_snap_x3f_1555_);
lean_inc(v_currMacroScope_1554_);
lean_inc(v_quotContext_x3f_1553_);
lean_inc(v_macroStack_1552_);
lean_inc(v_cmdPos_1551_);
lean_inc(v_currRecDepth_1550_);
lean_inc_ref(v_fileMap_1549_);
lean_inc_ref(v_fileName_1548_);
v___x_1559_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_1559_, 0, v_fileName_1548_);
lean_ctor_set(v___x_1559_, 1, v_fileMap_1549_);
lean_ctor_set(v___x_1559_, 2, v_currRecDepth_1550_);
lean_ctor_set(v___x_1559_, 3, v_cmdPos_1551_);
lean_ctor_set(v___x_1559_, 4, v_macroStack_1552_);
lean_ctor_set(v___x_1559_, 5, v_quotContext_x3f_1553_);
lean_ctor_set(v___x_1559_, 6, v_currMacroScope_1554_);
lean_ctor_set(v___x_1559_, 7, v_ref_1558_);
lean_ctor_set(v___x_1559_, 8, v_snap_x3f_1555_);
lean_ctor_set(v___x_1559_, 9, v_cancelTk_x3f_1556_);
lean_ctor_set_uint8(v___x_1559_, sizeof(void*)*10, v_suppressElabErrors_1557_);
v___x_1560_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14___redArg(v_msg_1542_, v___x_1559_, v___y_1544_);
lean_dec_ref_known(v___x_1559_, 10);
return v___x_1560_;
}
else
{
lean_object* v_a_1561_; lean_object* v___x_1563_; uint8_t v_isShared_1564_; uint8_t v_isSharedCheck_1568_; 
lean_dec_ref(v_msg_1542_);
v_a_1561_ = lean_ctor_get(v___x_1546_, 0);
v_isSharedCheck_1568_ = !lean_is_exclusive(v___x_1546_);
if (v_isSharedCheck_1568_ == 0)
{
v___x_1563_ = v___x_1546_;
v_isShared_1564_ = v_isSharedCheck_1568_;
goto v_resetjp_1562_;
}
else
{
lean_inc(v_a_1561_);
lean_dec(v___x_1546_);
v___x_1563_ = lean_box(0);
v_isShared_1564_ = v_isSharedCheck_1568_;
goto v_resetjp_1562_;
}
v_resetjp_1562_:
{
lean_object* v___x_1566_; 
if (v_isShared_1564_ == 0)
{
v___x_1566_ = v___x_1563_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1567_; 
v_reuseFailAlloc_1567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1567_, 0, v_a_1561_);
v___x_1566_ = v_reuseFailAlloc_1567_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
return v___x_1566_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_ref_1569_, lean_object* v_msg_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_){
_start:
{
lean_object* v_res_1574_; 
v_res_1574_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3___redArg(v_ref_1569_, v_msg_1570_, v___y_1571_, v___y_1572_);
lean_dec(v___y_1572_);
lean_dec_ref(v___y_1571_);
lean_dec(v_ref_1569_);
return v_res_1574_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1576_; lean_object* v___x_1577_; 
v___x_1576_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__0));
v___x_1577_ = l_Lean_stringToMessageData(v___x_1576_);
return v___x_1577_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__3(void){
_start:
{
lean_object* v___x_1579_; lean_object* v___x_1580_; 
v___x_1579_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__2));
v___x_1580_ = l_Lean_stringToMessageData(v___x_1579_);
return v___x_1580_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__13(void){
_start:
{
lean_object* v___x_1598_; lean_object* v___x_1599_; 
v___x_1598_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__12));
v___x_1599_ = l_Lean_stringToMessageData(v___x_1598_);
return v___x_1599_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__15(void){
_start:
{
lean_object* v___x_1601_; lean_object* v___x_1602_; 
v___x_1601_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__14));
v___x_1602_ = l_Lean_stringToMessageData(v___x_1601_);
return v___x_1602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1(lean_object* v_vis_x3f_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_){
_start:
{
lean_object* v___x_1615_; 
v___x_1615_ = lean_st_ref_get(v___y_1605_);
if (lean_obj_tag(v_vis_x3f_1603_) == 0)
{
uint8_t v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; 
lean_dec(v___x_1615_);
v___x_1616_ = 0;
v___x_1617_ = lean_box(v___x_1616_);
v___x_1618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1618_, 0, v___x_1617_);
return v___x_1618_;
}
else
{
lean_object* v_env_1619_; lean_object* v_val_1620_; lean_object* v___y_1622_; lean_object* v___y_1623_; lean_object* v___y_1624_; uint8_t v___y_1646_; lean_object* v___x_1647_; uint8_t v___x_1648_; uint8_t v___y_1650_; 
v_env_1619_ = lean_ctor_get(v___x_1615_, 0);
lean_inc_ref(v_env_1619_);
lean_dec(v___x_1615_);
v_val_1620_ = lean_ctor_get(v_vis_x3f_1603_, 0);
lean_inc_n(v_val_1620_, 2);
lean_dec_ref_known(v_vis_x3f_1603_, 1);
v___x_1647_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__9));
v___x_1648_ = l_Lean_Syntax_isOfKind(v_val_1620_, v___x_1647_);
if (v___x_1648_ == 0)
{
lean_object* v___x_1654_; uint8_t v___x_1655_; 
v___x_1654_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__11));
lean_inc(v_val_1620_);
v___x_1655_ = l_Lean_Syntax_isOfKind(v_val_1620_, v___x_1654_);
if (v___x_1655_ == 0)
{
lean_object* v___x_1656_; lean_object* v___x_1657_; 
lean_dec_ref(v_env_1619_);
v___x_1656_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__13, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__13_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__13);
v___x_1657_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3___redArg(v_val_1620_, v___x_1656_, v___y_1604_, v___y_1605_);
lean_dec(v_val_1620_);
return v___x_1657_;
}
else
{
lean_object* v___x_1658_; 
v___x_1658_ = l_Lean_Syntax_getHeadInfo(v_val_1620_);
if (lean_obj_tag(v___x_1658_) == 0)
{
lean_dec_ref_known(v___x_1658_, 4);
v___y_1650_ = v___x_1655_;
goto v___jp_1649_;
}
else
{
lean_dec(v___x_1658_);
if (v___x_1648_ == 0)
{
lean_dec(v_val_1620_);
lean_dec_ref(v_env_1619_);
goto v___jp_1607_;
}
else
{
v___y_1650_ = v___x_1648_;
goto v___jp_1649_;
}
}
}
}
else
{
lean_object* v___x_1659_; 
v___x_1659_ = l_Lean_Syntax_getHeadInfo(v_val_1620_);
if (lean_obj_tag(v___x_1659_) == 0)
{
lean_object* v___x_1660_; uint8_t v_isModule_1661_; 
lean_dec_ref_known(v___x_1659_, 4);
v___x_1660_ = l_Lean_Environment_header(v_env_1619_);
v_isModule_1661_ = lean_ctor_get_uint8(v___x_1660_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_1660_);
if (v_isModule_1661_ == 0)
{
lean_dec(v_val_1620_);
lean_dec_ref(v_env_1619_);
goto v___jp_1611_;
}
else
{
uint8_t v_isExporting_1662_; 
v_isExporting_1662_ = lean_ctor_get_uint8(v_env_1619_, sizeof(void*)*8);
lean_dec_ref(v_env_1619_);
if (v_isExporting_1662_ == 0)
{
lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; 
v___x_1663_ = l_Lean_linter_redundantVisibility;
v___x_1664_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__15, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__15_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__15);
v___x_1665_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4(v___x_1663_, v_val_1620_, v___x_1664_, v___y_1604_, v___y_1605_);
if (lean_obj_tag(v___x_1665_) == 0)
{
lean_dec_ref_known(v___x_1665_, 1);
goto v___jp_1611_;
}
else
{
lean_object* v_a_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1673_; 
v_a_1666_ = lean_ctor_get(v___x_1665_, 0);
v_isSharedCheck_1673_ = !lean_is_exclusive(v___x_1665_);
if (v_isSharedCheck_1673_ == 0)
{
v___x_1668_ = v___x_1665_;
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_a_1666_);
lean_dec(v___x_1665_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v___x_1671_; 
if (v_isShared_1669_ == 0)
{
v___x_1671_ = v___x_1668_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v_a_1666_);
v___x_1671_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1670_;
}
v_reusejp_1670_:
{
return v___x_1671_;
}
}
}
}
else
{
lean_dec(v_val_1620_);
goto v___jp_1611_;
}
}
}
else
{
lean_dec(v___x_1659_);
lean_dec(v_val_1620_);
lean_dec_ref(v_env_1619_);
goto v___jp_1611_;
}
}
v___jp_1621_:
{
lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; 
lean_inc_ref(v___y_1624_);
v___x_1625_ = l_Lean_stringToMessageData(v___y_1624_);
lean_inc_ref(v___y_1623_);
v___x_1626_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1626_, 0, v___y_1623_);
lean_ctor_set(v___x_1626_, 1, v___x_1625_);
v___x_1627_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__1, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__1_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__1);
v___x_1628_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1628_, 0, v___x_1626_);
lean_ctor_set(v___x_1628_, 1, v___x_1627_);
lean_inc_ref(v___y_1622_);
v___x_1629_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4(v___y_1622_, v_val_1620_, v___x_1628_, v___y_1604_, v___y_1605_);
if (lean_obj_tag(v___x_1629_) == 0)
{
lean_dec_ref_known(v___x_1629_, 1);
goto v___jp_1607_;
}
else
{
lean_object* v_a_1630_; lean_object* v___x_1632_; uint8_t v_isShared_1633_; uint8_t v_isSharedCheck_1637_; 
v_a_1630_ = lean_ctor_get(v___x_1629_, 0);
v_isSharedCheck_1637_ = !lean_is_exclusive(v___x_1629_);
if (v_isSharedCheck_1637_ == 0)
{
v___x_1632_ = v___x_1629_;
v_isShared_1633_ = v_isSharedCheck_1637_;
goto v_resetjp_1631_;
}
else
{
lean_inc(v_a_1630_);
lean_dec(v___x_1629_);
v___x_1632_ = lean_box(0);
v_isShared_1633_ = v_isSharedCheck_1637_;
goto v_resetjp_1631_;
}
v_resetjp_1631_:
{
lean_object* v___x_1635_; 
if (v_isShared_1633_ == 0)
{
v___x_1635_ = v___x_1632_;
goto v_reusejp_1634_;
}
else
{
lean_object* v_reuseFailAlloc_1636_; 
v_reuseFailAlloc_1636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1636_, 0, v_a_1630_);
v___x_1635_ = v_reuseFailAlloc_1636_;
goto v_reusejp_1634_;
}
v_reusejp_1634_:
{
return v___x_1635_;
}
}
}
}
v___jp_1638_:
{
lean_object* v___x_1639_; uint8_t v_isModule_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; 
v___x_1639_ = l_Lean_Environment_header(v_env_1619_);
lean_dec_ref(v_env_1619_);
v_isModule_1640_ = lean_ctor_get_uint8(v___x_1639_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_1639_);
v___x_1641_ = l_Lean_linter_redundantVisibility;
v___x_1642_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__3, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__3_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__3);
if (v_isModule_1640_ == 0)
{
lean_object* v___x_1643_; 
v___x_1643_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25_spec__28___closed__0));
v___y_1622_ = v___x_1641_;
v___y_1623_ = v___x_1642_;
v___y_1624_ = v___x_1643_;
goto v___jp_1621_;
}
else
{
lean_object* v___x_1644_; 
v___x_1644_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__4));
v___y_1622_ = v___x_1641_;
v___y_1623_ = v___x_1642_;
v___y_1624_ = v___x_1644_;
goto v___jp_1621_;
}
}
v___jp_1645_:
{
if (v___y_1646_ == 0)
{
lean_dec(v_val_1620_);
lean_dec_ref(v_env_1619_);
goto v___jp_1607_;
}
else
{
goto v___jp_1638_;
}
}
v___jp_1649_:
{
uint8_t v_isExporting_1651_; 
v_isExporting_1651_ = lean_ctor_get_uint8(v_env_1619_, sizeof(void*)*8);
if (v_isExporting_1651_ == 0)
{
lean_object* v___x_1652_; uint8_t v_isModule_1653_; 
v___x_1652_ = l_Lean_Environment_header(v_env_1619_);
v_isModule_1653_ = lean_ctor_get_uint8(v___x_1652_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_1652_);
if (v_isModule_1653_ == 0)
{
v___y_1646_ = v___y_1650_;
goto v___jp_1645_;
}
else
{
v___y_1646_ = v___x_1648_;
goto v___jp_1645_;
}
}
else
{
goto v___jp_1638_;
}
}
}
v___jp_1607_:
{
uint8_t v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; 
v___x_1608_ = 2;
v___x_1609_ = lean_box(v___x_1608_);
v___x_1610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1610_, 0, v___x_1609_);
return v___x_1610_;
}
v___jp_1611_:
{
uint8_t v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; 
v___x_1612_ = 1;
v___x_1613_ = lean_box(v___x_1612_);
v___x_1614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1614_, 0, v___x_1613_);
return v___x_1614_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___boxed(lean_object* v_vis_x3f_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_){
_start:
{
lean_object* v_res_1678_; 
v_res_1678_ = l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1(v_vis_x3f_1674_, v___y_1675_, v___y_1676_);
lean_dec(v___y_1676_);
lean_dec_ref(v___y_1675_);
return v_res_1678_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20_spec__28(lean_object* v_ref_1679_, lean_object* v_msgData_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_){
_start:
{
uint8_t v___x_1684_; uint8_t v___x_1685_; lean_object* v___x_1686_; 
v___x_1684_ = 2;
v___x_1685_ = 0;
v___x_1686_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25_spec__28(v_ref_1679_, v_msgData_1680_, v___x_1684_, v___x_1685_, v___y_1681_, v___y_1682_);
return v___x_1686_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20_spec__28___boxed(lean_object* v_ref_1687_, lean_object* v_msgData_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_){
_start:
{
lean_object* v_res_1692_; 
v_res_1692_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20_spec__28(v_ref_1687_, v_msgData_1688_, v___y_1689_, v___y_1690_);
lean_dec(v___y_1690_);
lean_dec_ref(v___y_1689_);
lean_dec(v_ref_1687_);
return v_res_1692_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20_spec__29_spec__32(lean_object* v_msgData_1693_, uint8_t v_severity_1694_, uint8_t v_isSilent_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_){
_start:
{
lean_object* v___x_1699_; 
v___x_1699_ = l_Lean_Elab_Command_getRef___redArg(v___y_1696_);
if (lean_obj_tag(v___x_1699_) == 0)
{
lean_object* v_a_1700_; lean_object* v___x_1701_; 
v_a_1700_ = lean_ctor_get(v___x_1699_, 0);
lean_inc(v_a_1700_);
lean_dec_ref_known(v___x_1699_, 1);
v___x_1701_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25_spec__28(v_a_1700_, v_msgData_1693_, v_severity_1694_, v_isSilent_1695_, v___y_1696_, v___y_1697_);
lean_dec(v_a_1700_);
return v___x_1701_;
}
else
{
lean_object* v_a_1702_; lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1709_; 
lean_dec_ref(v_msgData_1693_);
v_a_1702_ = lean_ctor_get(v___x_1699_, 0);
v_isSharedCheck_1709_ = !lean_is_exclusive(v___x_1699_);
if (v_isSharedCheck_1709_ == 0)
{
v___x_1704_ = v___x_1699_;
v_isShared_1705_ = v_isSharedCheck_1709_;
goto v_resetjp_1703_;
}
else
{
lean_inc(v_a_1702_);
lean_dec(v___x_1699_);
v___x_1704_ = lean_box(0);
v_isShared_1705_ = v_isSharedCheck_1709_;
goto v_resetjp_1703_;
}
v_resetjp_1703_:
{
lean_object* v___x_1707_; 
if (v_isShared_1705_ == 0)
{
v___x_1707_ = v___x_1704_;
goto v_reusejp_1706_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v_a_1702_);
v___x_1707_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1706_;
}
v_reusejp_1706_:
{
return v___x_1707_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20_spec__29_spec__32___boxed(lean_object* v_msgData_1710_, lean_object* v_severity_1711_, lean_object* v_isSilent_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_){
_start:
{
uint8_t v_severity_boxed_1716_; uint8_t v_isSilent_boxed_1717_; lean_object* v_res_1718_; 
v_severity_boxed_1716_ = lean_unbox(v_severity_1711_);
v_isSilent_boxed_1717_ = lean_unbox(v_isSilent_1712_);
v_res_1718_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20_spec__29_spec__32(v_msgData_1710_, v_severity_boxed_1716_, v_isSilent_boxed_1717_, v___y_1713_, v___y_1714_);
lean_dec(v___y_1714_);
lean_dec_ref(v___y_1713_);
return v_res_1718_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20_spec__29(lean_object* v_msgData_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_){
_start:
{
uint8_t v___x_1723_; uint8_t v___x_1724_; lean_object* v___x_1725_; 
v___x_1723_ = 2;
v___x_1724_ = 0;
v___x_1725_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20_spec__29_spec__32(v_msgData_1719_, v___x_1723_, v___x_1724_, v___y_1720_, v___y_1721_);
return v___x_1725_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20_spec__29___boxed(lean_object* v_msgData_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_){
_start:
{
lean_object* v_res_1730_; 
v_res_1730_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20_spec__29(v_msgData_1726_, v___y_1727_, v___y_1728_);
lean_dec(v___y_1728_);
lean_dec_ref(v___y_1727_);
return v_res_1730_;
}
}
static lean_object* _init_l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20___closed__1(void){
_start:
{
lean_object* v___x_1732_; lean_object* v___x_1733_; 
v___x_1732_ = ((lean_object*)(l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20___closed__0));
v___x_1733_ = l_Lean_stringToMessageData(v___x_1732_);
return v___x_1733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20(lean_object* v_ex_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_){
_start:
{
if (lean_obj_tag(v_ex_1734_) == 0)
{
lean_object* v_ref_1738_; lean_object* v_msg_1739_; lean_object* v___x_1740_; 
v_ref_1738_ = lean_ctor_get(v_ex_1734_, 0);
lean_inc(v_ref_1738_);
v_msg_1739_ = lean_ctor_get(v_ex_1734_, 1);
lean_inc_ref(v_msg_1739_);
lean_dec_ref_known(v_ex_1734_, 2);
v___x_1740_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20_spec__28(v_ref_1738_, v_msg_1739_, v___y_1735_, v___y_1736_);
lean_dec(v_ref_1738_);
return v___x_1740_;
}
else
{
lean_object* v_id_1741_; uint8_t v___y_1743_; uint8_t v___x_1765_; 
v_id_1741_ = lean_ctor_get(v_ex_1734_, 0);
lean_inc(v_id_1741_);
v___x_1765_ = l_Lean_Elab_isAbortExceptionId(v_id_1741_);
if (v___x_1765_ == 0)
{
uint8_t v___x_1766_; 
v___x_1766_ = l_Lean_Exception_isInterrupt(v_ex_1734_);
lean_dec_ref_known(v_ex_1734_, 2);
v___y_1743_ = v___x_1766_;
goto v___jp_1742_;
}
else
{
lean_dec_ref_known(v_ex_1734_, 2);
v___y_1743_ = v___x_1765_;
goto v___jp_1742_;
}
v___jp_1742_:
{
if (v___y_1743_ == 0)
{
lean_object* v___x_1744_; 
v___x_1744_ = l_Lean_InternalExceptionId_getName(v_id_1741_);
lean_dec(v_id_1741_);
if (lean_obj_tag(v___x_1744_) == 0)
{
lean_object* v_a_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; 
v_a_1745_ = lean_ctor_get(v___x_1744_, 0);
lean_inc(v_a_1745_);
lean_dec_ref_known(v___x_1744_, 1);
v___x_1746_ = lean_obj_once(&l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20___closed__1, &l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20___closed__1_once, _init_l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20___closed__1);
v___x_1747_ = l_Lean_MessageData_ofName(v_a_1745_);
v___x_1748_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1748_, 0, v___x_1746_);
lean_ctor_set(v___x_1748_, 1, v___x_1747_);
v___x_1749_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20_spec__29(v___x_1748_, v___y_1735_, v___y_1736_);
return v___x_1749_;
}
else
{
lean_object* v_a_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1762_; 
v_a_1750_ = lean_ctor_get(v___x_1744_, 0);
v_isSharedCheck_1762_ = !lean_is_exclusive(v___x_1744_);
if (v_isSharedCheck_1762_ == 0)
{
v___x_1752_ = v___x_1744_;
v_isShared_1753_ = v_isSharedCheck_1762_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_a_1750_);
lean_dec(v___x_1744_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1762_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v_ref_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1760_; 
v_ref_1754_ = lean_ctor_get(v___y_1735_, 7);
v___x_1755_ = lean_io_error_to_string(v_a_1750_);
v___x_1756_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1756_, 0, v___x_1755_);
v___x_1757_ = l_Lean_MessageData_ofFormat(v___x_1756_);
lean_inc(v_ref_1754_);
v___x_1758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1758_, 0, v_ref_1754_);
lean_ctor_set(v___x_1758_, 1, v___x_1757_);
if (v_isShared_1753_ == 0)
{
lean_ctor_set(v___x_1752_, 0, v___x_1758_);
v___x_1760_ = v___x_1752_;
goto v_reusejp_1759_;
}
else
{
lean_object* v_reuseFailAlloc_1761_; 
v_reuseFailAlloc_1761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1761_, 0, v___x_1758_);
v___x_1760_ = v_reuseFailAlloc_1761_;
goto v_reusejp_1759_;
}
v_reusejp_1759_:
{
return v___x_1760_;
}
}
}
}
else
{
lean_object* v___x_1763_; lean_object* v___x_1764_; 
lean_dec(v_id_1741_);
v___x_1763_ = lean_box(0);
v___x_1764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1764_, 0, v___x_1763_);
return v___x_1764_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20___boxed(lean_object* v_ex_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_){
_start:
{
lean_object* v_res_1771_; 
v_res_1771_ = l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20(v_ex_1767_, v___y_1768_, v___y_1769_);
lean_dec(v___y_1769_);
lean_dec_ref(v___y_1768_);
return v_res_1771_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__0(lean_object* v_k_1779_){
_start:
{
lean_object* v___x_1780_; uint8_t v___x_1781_; 
v___x_1780_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__0___closed__2));
v___x_1781_ = lean_name_eq(v_k_1779_, v___x_1780_);
if (v___x_1781_ == 0)
{
uint8_t v___x_1782_; 
v___x_1782_ = 1;
return v___x_1782_;
}
else
{
uint8_t v___x_1783_; 
v___x_1783_ = 0;
return v___x_1783_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__0___boxed(lean_object* v_k_1784_){
_start:
{
uint8_t v_res_1785_; lean_object* v_r_1786_; 
v_res_1785_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__0(v_k_1784_);
lean_dec(v_k_1784_);
v_r_1786_ = lean_box(v_res_1785_);
return v_r_1786_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33_spec__45___redArg___lam__0(lean_object* v___y_1787_, uint8_t v_isExporting_1788_, lean_object* v_a_x3f_1789_){
_start:
{
lean_object* v___x_1791_; lean_object* v_env_1792_; lean_object* v_messages_1793_; lean_object* v_scopes_1794_; lean_object* v_usedQuotCtxts_1795_; lean_object* v_nextMacroScope_1796_; lean_object* v_maxRecDepth_1797_; lean_object* v_ngen_1798_; lean_object* v_auxDeclNGen_1799_; lean_object* v_infoState_1800_; lean_object* v_traceState_1801_; lean_object* v_snapshotTasks_1802_; lean_object* v_prevLinterStates_1803_; lean_object* v_codeQualityEntryTasks_1804_; lean_object* v___x_1806_; uint8_t v_isShared_1807_; uint8_t v_isSharedCheck_1815_; 
v___x_1791_ = lean_st_ref_take(v___y_1787_);
v_env_1792_ = lean_ctor_get(v___x_1791_, 0);
v_messages_1793_ = lean_ctor_get(v___x_1791_, 1);
v_scopes_1794_ = lean_ctor_get(v___x_1791_, 2);
v_usedQuotCtxts_1795_ = lean_ctor_get(v___x_1791_, 3);
v_nextMacroScope_1796_ = lean_ctor_get(v___x_1791_, 4);
v_maxRecDepth_1797_ = lean_ctor_get(v___x_1791_, 5);
v_ngen_1798_ = lean_ctor_get(v___x_1791_, 6);
v_auxDeclNGen_1799_ = lean_ctor_get(v___x_1791_, 7);
v_infoState_1800_ = lean_ctor_get(v___x_1791_, 8);
v_traceState_1801_ = lean_ctor_get(v___x_1791_, 9);
v_snapshotTasks_1802_ = lean_ctor_get(v___x_1791_, 10);
v_prevLinterStates_1803_ = lean_ctor_get(v___x_1791_, 11);
v_codeQualityEntryTasks_1804_ = lean_ctor_get(v___x_1791_, 12);
v_isSharedCheck_1815_ = !lean_is_exclusive(v___x_1791_);
if (v_isSharedCheck_1815_ == 0)
{
v___x_1806_ = v___x_1791_;
v_isShared_1807_ = v_isSharedCheck_1815_;
goto v_resetjp_1805_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1804_);
lean_inc(v_prevLinterStates_1803_);
lean_inc(v_snapshotTasks_1802_);
lean_inc(v_traceState_1801_);
lean_inc(v_infoState_1800_);
lean_inc(v_auxDeclNGen_1799_);
lean_inc(v_ngen_1798_);
lean_inc(v_maxRecDepth_1797_);
lean_inc(v_nextMacroScope_1796_);
lean_inc(v_usedQuotCtxts_1795_);
lean_inc(v_scopes_1794_);
lean_inc(v_messages_1793_);
lean_inc(v_env_1792_);
lean_dec(v___x_1791_);
v___x_1806_ = lean_box(0);
v_isShared_1807_ = v_isSharedCheck_1815_;
goto v_resetjp_1805_;
}
v_resetjp_1805_:
{
lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1811_; 
v___x_1808_ = lean_box(0);
v___x_1809_ = l_Lean_Environment_setExporting(v_env_1792_, v_isExporting_1788_);
if (v_isShared_1807_ == 0)
{
lean_ctor_set(v___x_1806_, 0, v___x_1809_);
v___x_1811_ = v___x_1806_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1814_; 
v_reuseFailAlloc_1814_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1814_, 0, v___x_1809_);
lean_ctor_set(v_reuseFailAlloc_1814_, 1, v_messages_1793_);
lean_ctor_set(v_reuseFailAlloc_1814_, 2, v_scopes_1794_);
lean_ctor_set(v_reuseFailAlloc_1814_, 3, v_usedQuotCtxts_1795_);
lean_ctor_set(v_reuseFailAlloc_1814_, 4, v_nextMacroScope_1796_);
lean_ctor_set(v_reuseFailAlloc_1814_, 5, v_maxRecDepth_1797_);
lean_ctor_set(v_reuseFailAlloc_1814_, 6, v_ngen_1798_);
lean_ctor_set(v_reuseFailAlloc_1814_, 7, v_auxDeclNGen_1799_);
lean_ctor_set(v_reuseFailAlloc_1814_, 8, v_infoState_1800_);
lean_ctor_set(v_reuseFailAlloc_1814_, 9, v_traceState_1801_);
lean_ctor_set(v_reuseFailAlloc_1814_, 10, v_snapshotTasks_1802_);
lean_ctor_set(v_reuseFailAlloc_1814_, 11, v_prevLinterStates_1803_);
lean_ctor_set(v_reuseFailAlloc_1814_, 12, v_codeQualityEntryTasks_1804_);
v___x_1811_ = v_reuseFailAlloc_1814_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
lean_object* v___x_1812_; lean_object* v___x_1813_; 
v___x_1812_ = lean_st_ref_put(v___y_1787_, v___x_1811_);
v___x_1813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1813_, 0, v___x_1808_);
return v___x_1813_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33_spec__45___redArg___lam__0___boxed(lean_object* v___y_1816_, lean_object* v_isExporting_1817_, lean_object* v_a_x3f_1818_, lean_object* v___y_1819_){
_start:
{
uint8_t v_isExporting_boxed_1820_; lean_object* v_res_1821_; 
v_isExporting_boxed_1820_ = lean_unbox(v_isExporting_1817_);
v_res_1821_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33_spec__45___redArg___lam__0(v___y_1816_, v_isExporting_boxed_1820_, v_a_x3f_1818_);
lean_dec(v_a_x3f_1818_);
lean_dec(v___y_1816_);
return v_res_1821_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33_spec__45___redArg(lean_object* v_x_1822_, uint8_t v_isExporting_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_){
_start:
{
lean_object* v___x_1827_; lean_object* v_env_1828_; lean_object* v___x_1829_; uint8_t v_isModule_1830_; 
v___x_1827_ = lean_st_ref_get(v___y_1825_);
v_env_1828_ = lean_ctor_get(v___x_1827_, 0);
lean_inc_ref(v_env_1828_);
lean_dec(v___x_1827_);
v___x_1829_ = l_Lean_Environment_header(v_env_1828_);
v_isModule_1830_ = lean_ctor_get_uint8(v___x_1829_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_1829_);
if (v_isModule_1830_ == 0)
{
lean_object* v___x_1831_; 
lean_dec_ref(v_env_1828_);
lean_inc(v___y_1825_);
lean_inc_ref(v___y_1824_);
v___x_1831_ = lean_apply_3(v_x_1822_, v___y_1824_, v___y_1825_, lean_box(0));
return v___x_1831_;
}
else
{
uint8_t v_isExporting_1832_; 
v_isExporting_1832_ = lean_ctor_get_uint8(v_env_1828_, sizeof(void*)*8);
lean_dec_ref(v_env_1828_);
if (v_isExporting_1823_ == 0)
{
if (v_isExporting_1832_ == 0)
{
lean_object* v___x_1886_; 
lean_inc(v___y_1825_);
lean_inc_ref(v___y_1824_);
v___x_1886_ = lean_apply_3(v_x_1822_, v___y_1824_, v___y_1825_, lean_box(0));
return v___x_1886_;
}
else
{
goto v___jp_1833_;
}
}
else
{
if (v_isExporting_1832_ == 0)
{
goto v___jp_1833_;
}
else
{
lean_object* v___x_1887_; 
lean_inc(v___y_1825_);
lean_inc_ref(v___y_1824_);
v___x_1887_ = lean_apply_3(v_x_1822_, v___y_1824_, v___y_1825_, lean_box(0));
return v___x_1887_;
}
}
v___jp_1833_:
{
lean_object* v___x_1834_; lean_object* v_env_1835_; lean_object* v_messages_1836_; lean_object* v_scopes_1837_; lean_object* v_usedQuotCtxts_1838_; lean_object* v_nextMacroScope_1839_; lean_object* v_maxRecDepth_1840_; lean_object* v_ngen_1841_; lean_object* v_auxDeclNGen_1842_; lean_object* v_infoState_1843_; lean_object* v_traceState_1844_; lean_object* v_snapshotTasks_1845_; lean_object* v_prevLinterStates_1846_; lean_object* v_codeQualityEntryTasks_1847_; lean_object* v___x_1849_; uint8_t v_isShared_1850_; uint8_t v_isSharedCheck_1885_; 
v___x_1834_ = lean_st_ref_take(v___y_1825_);
v_env_1835_ = lean_ctor_get(v___x_1834_, 0);
v_messages_1836_ = lean_ctor_get(v___x_1834_, 1);
v_scopes_1837_ = lean_ctor_get(v___x_1834_, 2);
v_usedQuotCtxts_1838_ = lean_ctor_get(v___x_1834_, 3);
v_nextMacroScope_1839_ = lean_ctor_get(v___x_1834_, 4);
v_maxRecDepth_1840_ = lean_ctor_get(v___x_1834_, 5);
v_ngen_1841_ = lean_ctor_get(v___x_1834_, 6);
v_auxDeclNGen_1842_ = lean_ctor_get(v___x_1834_, 7);
v_infoState_1843_ = lean_ctor_get(v___x_1834_, 8);
v_traceState_1844_ = lean_ctor_get(v___x_1834_, 9);
v_snapshotTasks_1845_ = lean_ctor_get(v___x_1834_, 10);
v_prevLinterStates_1846_ = lean_ctor_get(v___x_1834_, 11);
v_codeQualityEntryTasks_1847_ = lean_ctor_get(v___x_1834_, 12);
v_isSharedCheck_1885_ = !lean_is_exclusive(v___x_1834_);
if (v_isSharedCheck_1885_ == 0)
{
v___x_1849_ = v___x_1834_;
v_isShared_1850_ = v_isSharedCheck_1885_;
goto v_resetjp_1848_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1847_);
lean_inc(v_prevLinterStates_1846_);
lean_inc(v_snapshotTasks_1845_);
lean_inc(v_traceState_1844_);
lean_inc(v_infoState_1843_);
lean_inc(v_auxDeclNGen_1842_);
lean_inc(v_ngen_1841_);
lean_inc(v_maxRecDepth_1840_);
lean_inc(v_nextMacroScope_1839_);
lean_inc(v_usedQuotCtxts_1838_);
lean_inc(v_scopes_1837_);
lean_inc(v_messages_1836_);
lean_inc(v_env_1835_);
lean_dec(v___x_1834_);
v___x_1849_ = lean_box(0);
v_isShared_1850_ = v_isSharedCheck_1885_;
goto v_resetjp_1848_;
}
v_resetjp_1848_:
{
lean_object* v___x_1851_; lean_object* v___x_1853_; 
v___x_1851_ = l_Lean_Environment_setExporting(v_env_1835_, v_isExporting_1823_);
if (v_isShared_1850_ == 0)
{
lean_ctor_set(v___x_1849_, 0, v___x_1851_);
v___x_1853_ = v___x_1849_;
goto v_reusejp_1852_;
}
else
{
lean_object* v_reuseFailAlloc_1884_; 
v_reuseFailAlloc_1884_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1884_, 0, v___x_1851_);
lean_ctor_set(v_reuseFailAlloc_1884_, 1, v_messages_1836_);
lean_ctor_set(v_reuseFailAlloc_1884_, 2, v_scopes_1837_);
lean_ctor_set(v_reuseFailAlloc_1884_, 3, v_usedQuotCtxts_1838_);
lean_ctor_set(v_reuseFailAlloc_1884_, 4, v_nextMacroScope_1839_);
lean_ctor_set(v_reuseFailAlloc_1884_, 5, v_maxRecDepth_1840_);
lean_ctor_set(v_reuseFailAlloc_1884_, 6, v_ngen_1841_);
lean_ctor_set(v_reuseFailAlloc_1884_, 7, v_auxDeclNGen_1842_);
lean_ctor_set(v_reuseFailAlloc_1884_, 8, v_infoState_1843_);
lean_ctor_set(v_reuseFailAlloc_1884_, 9, v_traceState_1844_);
lean_ctor_set(v_reuseFailAlloc_1884_, 10, v_snapshotTasks_1845_);
lean_ctor_set(v_reuseFailAlloc_1884_, 11, v_prevLinterStates_1846_);
lean_ctor_set(v_reuseFailAlloc_1884_, 12, v_codeQualityEntryTasks_1847_);
v___x_1853_ = v_reuseFailAlloc_1884_;
goto v_reusejp_1852_;
}
v_reusejp_1852_:
{
lean_object* v___x_1854_; lean_object* v_r_1855_; 
v___x_1854_ = lean_st_ref_put(v___y_1825_, v___x_1853_);
lean_inc(v___y_1825_);
lean_inc_ref(v___y_1824_);
v_r_1855_ = lean_apply_3(v_x_1822_, v___y_1824_, v___y_1825_, lean_box(0));
if (lean_obj_tag(v_r_1855_) == 0)
{
lean_object* v_a_1856_; lean_object* v___x_1858_; uint8_t v_isShared_1859_; uint8_t v_isSharedCheck_1872_; 
v_a_1856_ = lean_ctor_get(v_r_1855_, 0);
v_isSharedCheck_1872_ = !lean_is_exclusive(v_r_1855_);
if (v_isSharedCheck_1872_ == 0)
{
v___x_1858_ = v_r_1855_;
v_isShared_1859_ = v_isSharedCheck_1872_;
goto v_resetjp_1857_;
}
else
{
lean_inc(v_a_1856_);
lean_dec(v_r_1855_);
v___x_1858_ = lean_box(0);
v_isShared_1859_ = v_isSharedCheck_1872_;
goto v_resetjp_1857_;
}
v_resetjp_1857_:
{
lean_object* v___x_1861_; 
lean_inc(v_a_1856_);
if (v_isShared_1859_ == 0)
{
lean_ctor_set_tag(v___x_1858_, 1);
v___x_1861_ = v___x_1858_;
goto v_reusejp_1860_;
}
else
{
lean_object* v_reuseFailAlloc_1871_; 
v_reuseFailAlloc_1871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1871_, 0, v_a_1856_);
v___x_1861_ = v_reuseFailAlloc_1871_;
goto v_reusejp_1860_;
}
v_reusejp_1860_:
{
lean_object* v___x_1862_; lean_object* v___x_1864_; uint8_t v_isShared_1865_; uint8_t v_isSharedCheck_1869_; 
v___x_1862_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33_spec__45___redArg___lam__0(v___y_1825_, v_isExporting_1832_, v___x_1861_);
lean_dec_ref(v___x_1861_);
v_isSharedCheck_1869_ = !lean_is_exclusive(v___x_1862_);
if (v_isSharedCheck_1869_ == 0)
{
lean_object* v_unused_1870_; 
v_unused_1870_ = lean_ctor_get(v___x_1862_, 0);
lean_dec(v_unused_1870_);
v___x_1864_ = v___x_1862_;
v_isShared_1865_ = v_isSharedCheck_1869_;
goto v_resetjp_1863_;
}
else
{
lean_dec(v___x_1862_);
v___x_1864_ = lean_box(0);
v_isShared_1865_ = v_isSharedCheck_1869_;
goto v_resetjp_1863_;
}
v_resetjp_1863_:
{
lean_object* v___x_1867_; 
if (v_isShared_1865_ == 0)
{
lean_ctor_set(v___x_1864_, 0, v_a_1856_);
v___x_1867_ = v___x_1864_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1868_; 
v_reuseFailAlloc_1868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1868_, 0, v_a_1856_);
v___x_1867_ = v_reuseFailAlloc_1868_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
return v___x_1867_;
}
}
}
}
}
else
{
lean_object* v_a_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1882_; 
v_a_1873_ = lean_ctor_get(v_r_1855_, 0);
lean_inc(v_a_1873_);
lean_dec_ref_known(v_r_1855_, 1);
v___x_1874_ = lean_box(0);
v___x_1875_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33_spec__45___redArg___lam__0(v___y_1825_, v_isExporting_1832_, v___x_1874_);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___x_1875_);
if (v_isSharedCheck_1882_ == 0)
{
lean_object* v_unused_1883_; 
v_unused_1883_ = lean_ctor_get(v___x_1875_, 0);
lean_dec(v_unused_1883_);
v___x_1877_ = v___x_1875_;
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
else
{
lean_dec(v___x_1875_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v___x_1880_; 
if (v_isShared_1878_ == 0)
{
lean_ctor_set_tag(v___x_1877_, 1);
lean_ctor_set(v___x_1877_, 0, v_a_1873_);
v___x_1880_ = v___x_1877_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v_a_1873_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
return v___x_1880_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33_spec__45___redArg___boxed(lean_object* v_x_1888_, lean_object* v_isExporting_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_){
_start:
{
uint8_t v_isExporting_boxed_1893_; lean_object* v_res_1894_; 
v_isExporting_boxed_1893_ = lean_unbox(v_isExporting_1889_);
v_res_1894_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33_spec__45___redArg(v_x_1888_, v_isExporting_boxed_1893_, v___y_1890_, v___y_1891_);
lean_dec(v___y_1891_);
lean_dec_ref(v___y_1890_);
return v_res_1894_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33___redArg(lean_object* v_x_1895_, uint8_t v_when_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_){
_start:
{
if (v_when_1896_ == 0)
{
lean_object* v___x_1900_; 
lean_inc(v___y_1898_);
lean_inc_ref(v___y_1897_);
v___x_1900_ = lean_apply_3(v_x_1895_, v___y_1897_, v___y_1898_, lean_box(0));
return v___x_1900_;
}
else
{
uint8_t v___x_1901_; lean_object* v___x_1902_; 
v___x_1901_ = 0;
v___x_1902_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33_spec__45___redArg(v_x_1895_, v___x_1901_, v___y_1897_, v___y_1898_);
return v___x_1902_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33___redArg___boxed(lean_object* v_x_1903_, lean_object* v_when_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_){
_start:
{
uint8_t v_when_boxed_1908_; lean_object* v_res_1909_; 
v_when_boxed_1908_ = lean_unbox(v_when_1904_);
v_res_1909_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33___redArg(v_x_1903_, v_when_boxed_1908_, v___y_1905_, v___y_1906_);
lean_dec(v___y_1906_);
lean_dec_ref(v___y_1905_);
return v_res_1909_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44_spec__48_spec__52___redArg(lean_object* v_keys_1910_, lean_object* v_i_1911_, lean_object* v_k_1912_){
_start:
{
lean_object* v___x_1913_; uint8_t v___x_1914_; 
v___x_1913_ = lean_array_get_size(v_keys_1910_);
v___x_1914_ = lean_nat_dec_lt(v_i_1911_, v___x_1913_);
if (v___x_1914_ == 0)
{
lean_dec(v_i_1911_);
return v___x_1914_;
}
else
{
lean_object* v_k_x27_1915_; uint8_t v___x_1916_; 
v_k_x27_1915_ = lean_array_fget_borrowed(v_keys_1910_, v_i_1911_);
v___x_1916_ = l_Lean_instBEqExtraModUse_beq(v_k_1912_, v_k_x27_1915_);
if (v___x_1916_ == 0)
{
lean_object* v___x_1917_; lean_object* v___x_1918_; 
v___x_1917_ = lean_unsigned_to_nat(1u);
v___x_1918_ = lean_nat_add(v_i_1911_, v___x_1917_);
lean_dec(v_i_1911_);
v_i_1911_ = v___x_1918_;
goto _start;
}
else
{
lean_dec(v_i_1911_);
return v___x_1914_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44_spec__48_spec__52___redArg___boxed(lean_object* v_keys_1920_, lean_object* v_i_1921_, lean_object* v_k_1922_){
_start:
{
uint8_t v_res_1923_; lean_object* v_r_1924_; 
v_res_1923_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44_spec__48_spec__52___redArg(v_keys_1920_, v_i_1921_, v_k_1922_);
lean_dec_ref(v_k_1922_);
lean_dec_ref(v_keys_1920_);
v_r_1924_ = lean_box(v_res_1923_);
return v_r_1924_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44_spec__48___redArg(lean_object* v_x_1925_, size_t v_x_1926_, lean_object* v_x_1927_){
_start:
{
if (lean_obj_tag(v_x_1925_) == 0)
{
lean_object* v_es_1928_; lean_object* v___x_1929_; size_t v___x_1930_; size_t v___x_1931_; lean_object* v_j_1932_; lean_object* v___x_1933_; 
v_es_1928_ = lean_ctor_get(v_x_1925_, 0);
v___x_1929_ = lean_box(2);
v___x_1930_ = ((size_t)31ULL);
v___x_1931_ = lean_usize_land(v_x_1926_, v___x_1930_);
v_j_1932_ = lean_usize_to_nat(v___x_1931_);
v___x_1933_ = lean_array_get_borrowed(v___x_1929_, v_es_1928_, v_j_1932_);
lean_dec(v_j_1932_);
switch(lean_obj_tag(v___x_1933_))
{
case 0:
{
lean_object* v_key_1934_; uint8_t v___x_1935_; 
v_key_1934_ = lean_ctor_get(v___x_1933_, 0);
v___x_1935_ = l_Lean_instBEqExtraModUse_beq(v_x_1927_, v_key_1934_);
return v___x_1935_;
}
case 1:
{
lean_object* v_node_1936_; size_t v___x_1937_; size_t v___x_1938_; 
v_node_1936_ = lean_ctor_get(v___x_1933_, 0);
v___x_1937_ = ((size_t)5ULL);
v___x_1938_ = lean_usize_shift_right(v_x_1926_, v___x_1937_);
v_x_1925_ = v_node_1936_;
v_x_1926_ = v___x_1938_;
goto _start;
}
default: 
{
uint8_t v___x_1940_; 
v___x_1940_ = 0;
return v___x_1940_;
}
}
}
else
{
lean_object* v_ks_1941_; lean_object* v___x_1942_; uint8_t v___x_1943_; 
v_ks_1941_ = lean_ctor_get(v_x_1925_, 0);
v___x_1942_ = lean_unsigned_to_nat(0u);
v___x_1943_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44_spec__48_spec__52___redArg(v_ks_1941_, v___x_1942_, v_x_1927_);
return v___x_1943_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44_spec__48___redArg___boxed(lean_object* v_x_1944_, lean_object* v_x_1945_, lean_object* v_x_1946_){
_start:
{
size_t v_x_30059__boxed_1947_; uint8_t v_res_1948_; lean_object* v_r_1949_; 
v_x_30059__boxed_1947_ = lean_unbox_usize(v_x_1945_);
lean_dec(v_x_1945_);
v_res_1948_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44_spec__48___redArg(v_x_1944_, v_x_30059__boxed_1947_, v_x_1946_);
lean_dec_ref(v_x_1946_);
lean_dec_ref(v_x_1944_);
v_r_1949_ = lean_box(v_res_1948_);
return v_r_1949_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44___redArg(lean_object* v_x_1950_, lean_object* v_x_1951_){
_start:
{
uint64_t v___x_1952_; size_t v___x_1953_; uint8_t v___x_1954_; 
v___x_1952_ = l_Lean_instHashableExtraModUse_hash(v_x_1951_);
v___x_1953_ = lean_uint64_to_usize(v___x_1952_);
v___x_1954_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44_spec__48___redArg(v_x_1950_, v___x_1953_, v_x_1951_);
return v___x_1954_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44___redArg___boxed(lean_object* v_x_1955_, lean_object* v_x_1956_){
_start:
{
uint8_t v_res_1957_; lean_object* v_r_1958_; 
v_res_1957_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44___redArg(v_x_1955_, v_x_1956_);
lean_dec_ref(v_x_1956_);
lean_dec_ref(v_x_1955_);
v_r_1958_ = lean_box(v_res_1957_);
return v_r_1958_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__35___closed__0(void){
_start:
{
lean_object* v___x_1959_; double v___x_1960_; 
v___x_1959_ = lean_unsigned_to_nat(0u);
v___x_1960_ = lean_float_of_nat(v___x_1959_);
return v___x_1960_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__35(lean_object* v_cls_1963_, lean_object* v_msg_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_){
_start:
{
lean_object* v___x_1968_; 
v___x_1968_ = l_Lean_Elab_Command_getRef___redArg(v___y_1965_);
if (lean_obj_tag(v___x_1968_) == 0)
{
lean_object* v_a_1969_; lean_object* v___x_1970_; lean_object* v_a_1971_; lean_object* v___x_1973_; uint8_t v_isShared_1974_; uint8_t v_isSharedCheck_2019_; 
v_a_1969_ = lean_ctor_get(v___x_1968_, 0);
lean_inc(v_a_1969_);
lean_dec_ref_known(v___x_1968_, 1);
v___x_1970_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg(v_msg_1964_, v___y_1966_);
v_a_1971_ = lean_ctor_get(v___x_1970_, 0);
v_isSharedCheck_2019_ = !lean_is_exclusive(v___x_1970_);
if (v_isSharedCheck_2019_ == 0)
{
v___x_1973_ = v___x_1970_;
v_isShared_1974_ = v_isSharedCheck_2019_;
goto v_resetjp_1972_;
}
else
{
lean_inc(v_a_1971_);
lean_dec(v___x_1970_);
v___x_1973_ = lean_box(0);
v_isShared_1974_ = v_isSharedCheck_2019_;
goto v_resetjp_1972_;
}
v_resetjp_1972_:
{
lean_object* v___x_1975_; lean_object* v_traceState_1976_; lean_object* v_env_1977_; lean_object* v_messages_1978_; lean_object* v_scopes_1979_; lean_object* v_usedQuotCtxts_1980_; lean_object* v_nextMacroScope_1981_; lean_object* v_maxRecDepth_1982_; lean_object* v_ngen_1983_; lean_object* v_auxDeclNGen_1984_; lean_object* v_infoState_1985_; lean_object* v_snapshotTasks_1986_; lean_object* v_prevLinterStates_1987_; lean_object* v_codeQualityEntryTasks_1988_; lean_object* v___x_1990_; uint8_t v_isShared_1991_; uint8_t v_isSharedCheck_2018_; 
v___x_1975_ = lean_st_ref_take(v___y_1966_);
v_traceState_1976_ = lean_ctor_get(v___x_1975_, 9);
v_env_1977_ = lean_ctor_get(v___x_1975_, 0);
v_messages_1978_ = lean_ctor_get(v___x_1975_, 1);
v_scopes_1979_ = lean_ctor_get(v___x_1975_, 2);
v_usedQuotCtxts_1980_ = lean_ctor_get(v___x_1975_, 3);
v_nextMacroScope_1981_ = lean_ctor_get(v___x_1975_, 4);
v_maxRecDepth_1982_ = lean_ctor_get(v___x_1975_, 5);
v_ngen_1983_ = lean_ctor_get(v___x_1975_, 6);
v_auxDeclNGen_1984_ = lean_ctor_get(v___x_1975_, 7);
v_infoState_1985_ = lean_ctor_get(v___x_1975_, 8);
v_snapshotTasks_1986_ = lean_ctor_get(v___x_1975_, 10);
v_prevLinterStates_1987_ = lean_ctor_get(v___x_1975_, 11);
v_codeQualityEntryTasks_1988_ = lean_ctor_get(v___x_1975_, 12);
v_isSharedCheck_2018_ = !lean_is_exclusive(v___x_1975_);
if (v_isSharedCheck_2018_ == 0)
{
v___x_1990_ = v___x_1975_;
v_isShared_1991_ = v_isSharedCheck_2018_;
goto v_resetjp_1989_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1988_);
lean_inc(v_prevLinterStates_1987_);
lean_inc(v_snapshotTasks_1986_);
lean_inc(v_traceState_1976_);
lean_inc(v_infoState_1985_);
lean_inc(v_auxDeclNGen_1984_);
lean_inc(v_ngen_1983_);
lean_inc(v_maxRecDepth_1982_);
lean_inc(v_nextMacroScope_1981_);
lean_inc(v_usedQuotCtxts_1980_);
lean_inc(v_scopes_1979_);
lean_inc(v_messages_1978_);
lean_inc(v_env_1977_);
lean_dec(v___x_1975_);
v___x_1990_ = lean_box(0);
v_isShared_1991_ = v_isSharedCheck_2018_;
goto v_resetjp_1989_;
}
v_resetjp_1989_:
{
uint64_t v_tid_1992_; lean_object* v_traces_1993_; lean_object* v___x_1995_; uint8_t v_isShared_1996_; uint8_t v_isSharedCheck_2017_; 
v_tid_1992_ = lean_ctor_get_uint64(v_traceState_1976_, sizeof(void*)*1);
v_traces_1993_ = lean_ctor_get(v_traceState_1976_, 0);
v_isSharedCheck_2017_ = !lean_is_exclusive(v_traceState_1976_);
if (v_isSharedCheck_2017_ == 0)
{
v___x_1995_ = v_traceState_1976_;
v_isShared_1996_ = v_isSharedCheck_2017_;
goto v_resetjp_1994_;
}
else
{
lean_inc(v_traces_1993_);
lean_dec(v_traceState_1976_);
v___x_1995_ = lean_box(0);
v_isShared_1996_ = v_isSharedCheck_2017_;
goto v_resetjp_1994_;
}
v_resetjp_1994_:
{
lean_object* v___x_1997_; lean_object* v___x_1998_; double v___x_1999_; uint8_t v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2008_; 
v___x_1997_ = lean_box(0);
v___x_1998_ = lean_box(0);
v___x_1999_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__35___closed__0, &l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__35___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__35___closed__0);
v___x_2000_ = 0;
v___x_2001_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25_spec__28___closed__0));
v___x_2002_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2002_, 0, v_cls_1963_);
lean_ctor_set(v___x_2002_, 1, v___x_1998_);
lean_ctor_set(v___x_2002_, 2, v___x_2001_);
lean_ctor_set_float(v___x_2002_, sizeof(void*)*3, v___x_1999_);
lean_ctor_set_float(v___x_2002_, sizeof(void*)*3 + 8, v___x_1999_);
lean_ctor_set_uint8(v___x_2002_, sizeof(void*)*3 + 16, v___x_2000_);
v___x_2003_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__35___closed__1));
v___x_2004_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2004_, 0, v___x_2002_);
lean_ctor_set(v___x_2004_, 1, v_a_1971_);
lean_ctor_set(v___x_2004_, 2, v___x_2003_);
v___x_2005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2005_, 0, v_a_1969_);
lean_ctor_set(v___x_2005_, 1, v___x_2004_);
v___x_2006_ = l_Lean_PersistentArray_push___redArg(v_traces_1993_, v___x_2005_);
if (v_isShared_1996_ == 0)
{
lean_ctor_set(v___x_1995_, 0, v___x_2006_);
v___x_2008_ = v___x_1995_;
goto v_reusejp_2007_;
}
else
{
lean_object* v_reuseFailAlloc_2016_; 
v_reuseFailAlloc_2016_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2016_, 0, v___x_2006_);
lean_ctor_set_uint64(v_reuseFailAlloc_2016_, sizeof(void*)*1, v_tid_1992_);
v___x_2008_ = v_reuseFailAlloc_2016_;
goto v_reusejp_2007_;
}
v_reusejp_2007_:
{
lean_object* v___x_2010_; 
if (v_isShared_1991_ == 0)
{
lean_ctor_set(v___x_1990_, 9, v___x_2008_);
v___x_2010_ = v___x_1990_;
goto v_reusejp_2009_;
}
else
{
lean_object* v_reuseFailAlloc_2015_; 
v_reuseFailAlloc_2015_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2015_, 0, v_env_1977_);
lean_ctor_set(v_reuseFailAlloc_2015_, 1, v_messages_1978_);
lean_ctor_set(v_reuseFailAlloc_2015_, 2, v_scopes_1979_);
lean_ctor_set(v_reuseFailAlloc_2015_, 3, v_usedQuotCtxts_1980_);
lean_ctor_set(v_reuseFailAlloc_2015_, 4, v_nextMacroScope_1981_);
lean_ctor_set(v_reuseFailAlloc_2015_, 5, v_maxRecDepth_1982_);
lean_ctor_set(v_reuseFailAlloc_2015_, 6, v_ngen_1983_);
lean_ctor_set(v_reuseFailAlloc_2015_, 7, v_auxDeclNGen_1984_);
lean_ctor_set(v_reuseFailAlloc_2015_, 8, v_infoState_1985_);
lean_ctor_set(v_reuseFailAlloc_2015_, 9, v___x_2008_);
lean_ctor_set(v_reuseFailAlloc_2015_, 10, v_snapshotTasks_1986_);
lean_ctor_set(v_reuseFailAlloc_2015_, 11, v_prevLinterStates_1987_);
lean_ctor_set(v_reuseFailAlloc_2015_, 12, v_codeQualityEntryTasks_1988_);
v___x_2010_ = v_reuseFailAlloc_2015_;
goto v_reusejp_2009_;
}
v_reusejp_2009_:
{
lean_object* v___x_2011_; lean_object* v___x_2013_; 
v___x_2011_ = lean_st_ref_put(v___y_1966_, v___x_2010_);
if (v_isShared_1974_ == 0)
{
lean_ctor_set(v___x_1973_, 0, v___x_1997_);
v___x_2013_ = v___x_1973_;
goto v_reusejp_2012_;
}
else
{
lean_object* v_reuseFailAlloc_2014_; 
v_reuseFailAlloc_2014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2014_, 0, v___x_1997_);
v___x_2013_ = v_reuseFailAlloc_2014_;
goto v_reusejp_2012_;
}
v_reusejp_2012_:
{
return v___x_2013_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2020_; lean_object* v___x_2022_; uint8_t v_isShared_2023_; uint8_t v_isSharedCheck_2027_; 
lean_dec_ref(v_msg_1964_);
lean_dec(v_cls_1963_);
v_a_2020_ = lean_ctor_get(v___x_1968_, 0);
v_isSharedCheck_2027_ = !lean_is_exclusive(v___x_1968_);
if (v_isSharedCheck_2027_ == 0)
{
v___x_2022_ = v___x_1968_;
v_isShared_2023_ = v_isSharedCheck_2027_;
goto v_resetjp_2021_;
}
else
{
lean_inc(v_a_2020_);
lean_dec(v___x_1968_);
v___x_2022_ = lean_box(0);
v_isShared_2023_ = v_isSharedCheck_2027_;
goto v_resetjp_2021_;
}
v_resetjp_2021_:
{
lean_object* v___x_2025_; 
if (v_isShared_2023_ == 0)
{
v___x_2025_ = v___x_2022_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v_a_2020_);
v___x_2025_ = v_reuseFailAlloc_2026_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
return v___x_2025_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__35___boxed(lean_object* v_cls_2028_, lean_object* v_msg_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_){
_start:
{
lean_object* v_res_2033_; 
v_res_2033_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__35(v_cls_2028_, v_msg_2029_, v___y_2030_, v___y_2031_);
lean_dec(v___y_2031_);
lean_dec_ref(v___y_2030_);
return v_res_2033_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__0(void){
_start:
{
lean_object* v___x_2034_; 
v___x_2034_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_2034_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__4(void){
_start:
{
lean_object* v___x_2039_; lean_object* v___x_2040_; 
v___x_2039_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__3));
v___x_2040_ = l_Lean_stringToMessageData(v___x_2039_);
return v___x_2040_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__6(void){
_start:
{
lean_object* v___x_2042_; lean_object* v___x_2043_; 
v___x_2042_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__5));
v___x_2043_ = l_Lean_stringToMessageData(v___x_2042_);
return v___x_2043_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__7(void){
_start:
{
lean_object* v___x_2044_; lean_object* v___x_2045_; 
v___x_2044_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__17_spec__25_spec__28___closed__0));
v___x_2045_ = l_Lean_stringToMessageData(v___x_2044_);
return v___x_2045_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__9(void){
_start:
{
lean_object* v_cls_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; 
v_cls_2048_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__2));
v___x_2049_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__8));
v___x_2050_ = l_Lean_Name_append(v___x_2049_, v_cls_2048_);
return v___x_2050_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__11(void){
_start:
{
lean_object* v___x_2052_; lean_object* v___x_2053_; 
v___x_2052_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__10));
v___x_2053_ = l_Lean_stringToMessageData(v___x_2052_);
return v___x_2053_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__13(void){
_start:
{
lean_object* v___x_2055_; lean_object* v___x_2056_; 
v___x_2055_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__12));
v___x_2056_ = l_Lean_stringToMessageData(v___x_2055_);
return v___x_2056_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41(lean_object* v_mod_2059_, uint8_t v_isMeta_2060_, lean_object* v_hint_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_){
_start:
{
lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v_env_2067_; uint8_t v_isExporting_2068_; lean_object* v_entry_2069_; lean_object* v___x_2070_; lean_object* v_env_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___y_2076_; lean_object* v___x_2104_; uint8_t v___x_2105_; 
v___x_2065_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__0);
v___x_2066_ = lean_st_ref_get(v___y_2063_);
v_env_2067_ = lean_ctor_get(v___x_2066_, 0);
lean_inc_ref(v_env_2067_);
lean_dec(v___x_2066_);
v_isExporting_2068_ = lean_ctor_get_uint8(v_env_2067_, sizeof(void*)*8);
lean_dec_ref(v_env_2067_);
lean_inc(v_mod_2059_);
v_entry_2069_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_2069_, 0, v_mod_2059_);
lean_ctor_set_uint8(v_entry_2069_, sizeof(void*)*1, v_isExporting_2068_);
lean_ctor_set_uint8(v_entry_2069_, sizeof(void*)*1 + 1, v_isMeta_2060_);
v___x_2070_ = lean_st_ref_get(v___y_2063_);
v_env_2071_ = lean_ctor_get(v___x_2070_, 0);
lean_inc_ref(v_env_2071_);
lean_dec(v___x_2070_);
v___x_2072_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_2073_ = lean_box(1);
v___x_2074_ = lean_box(0);
v___x_2104_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2065_, v___x_2072_, v_env_2071_, v___x_2073_, v___x_2074_);
v___x_2105_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44___redArg(v___x_2104_, v_entry_2069_);
lean_dec(v___x_2104_);
if (v___x_2105_ == 0)
{
lean_object* v_cls_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___y_2112_; lean_object* v___y_2113_; lean_object* v___y_2117_; lean_object* v___y_2118_; lean_object* v_scopes_2130_; lean_object* v___x_2131_; lean_object* v_opts_2132_; uint8_t v_hasTrace_2133_; 
v_cls_2106_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__2));
v___x_2107_ = l_Lean_inheritedTraceOptions;
v___x_2108_ = lean_st_ref_get(v___x_2107_);
v___x_2109_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2110_ = lean_st_ref_get(v___y_2063_);
v_scopes_2130_ = lean_ctor_get(v___x_2110_, 2);
lean_inc(v_scopes_2130_);
lean_dec(v___x_2110_);
v___x_2131_ = l_List_head_x21___redArg(v___x_2109_, v_scopes_2130_);
lean_dec(v_scopes_2130_);
v_opts_2132_ = lean_ctor_get(v___x_2131_, 1);
lean_inc_ref(v_opts_2132_);
lean_dec(v___x_2131_);
v_hasTrace_2133_ = lean_ctor_get_uint8(v_opts_2132_, sizeof(void*)*1);
if (v_hasTrace_2133_ == 0)
{
lean_dec_ref(v_opts_2132_);
lean_dec(v___x_2108_);
lean_dec(v_hint_2061_);
lean_dec(v_mod_2059_);
v___y_2076_ = v___y_2063_;
goto v___jp_2075_;
}
else
{
lean_object* v___x_2134_; uint8_t v___x_2135_; 
v___x_2134_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__9);
v___x_2135_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_2108_, v_opts_2132_, v___x_2134_);
lean_dec_ref(v_opts_2132_);
lean_dec(v___x_2108_);
if (v___x_2135_ == 0)
{
lean_dec(v_hint_2061_);
lean_dec(v_mod_2059_);
v___y_2076_ = v___y_2063_;
goto v___jp_2075_;
}
else
{
lean_object* v___x_2136_; lean_object* v___y_2138_; 
v___x_2136_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__11);
if (v_isExporting_2068_ == 0)
{
lean_object* v___x_2145_; 
v___x_2145_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__8));
v___y_2138_ = v___x_2145_;
goto v___jp_2137_;
}
else
{
lean_object* v___x_2146_; 
v___x_2146_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__10));
v___y_2138_ = v___x_2146_;
goto v___jp_2137_;
}
v___jp_2137_:
{
lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; 
lean_inc_ref(v___y_2138_);
v___x_2139_ = l_Lean_stringToMessageData(v___y_2138_);
v___x_2140_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2140_, 0, v___x_2136_);
lean_ctor_set(v___x_2140_, 1, v___x_2139_);
v___x_2141_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__13);
v___x_2142_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2142_, 0, v___x_2140_);
lean_ctor_set(v___x_2142_, 1, v___x_2141_);
if (v_isMeta_2060_ == 0)
{
lean_object* v___x_2143_; 
v___x_2143_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__14));
v___y_2117_ = v___x_2142_;
v___y_2118_ = v___x_2143_;
goto v___jp_2116_;
}
else
{
lean_object* v___x_2144_; 
v___x_2144_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__15));
v___y_2117_ = v___x_2142_;
v___y_2118_ = v___x_2144_;
goto v___jp_2116_;
}
}
}
}
v___jp_2111_:
{
lean_object* v___x_2114_; lean_object* v___x_2115_; 
v___x_2114_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2114_, 0, v___y_2112_);
lean_ctor_set(v___x_2114_, 1, v___y_2113_);
v___x_2115_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__35(v_cls_2106_, v___x_2114_, v___y_2062_, v___y_2063_);
if (lean_obj_tag(v___x_2115_) == 0)
{
lean_dec_ref_known(v___x_2115_, 1);
v___y_2076_ = v___y_2063_;
goto v___jp_2075_;
}
else
{
lean_dec_ref_known(v_entry_2069_, 1);
return v___x_2115_;
}
}
v___jp_2116_:
{
lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; uint8_t v___x_2125_; 
lean_inc_ref(v___y_2118_);
v___x_2119_ = l_Lean_stringToMessageData(v___y_2118_);
v___x_2120_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2120_, 0, v___y_2117_);
lean_ctor_set(v___x_2120_, 1, v___x_2119_);
v___x_2121_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__4);
v___x_2122_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2122_, 0, v___x_2120_);
lean_ctor_set(v___x_2122_, 1, v___x_2121_);
v___x_2123_ = l_Lean_MessageData_ofName(v_mod_2059_);
v___x_2124_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2124_, 0, v___x_2122_);
lean_ctor_set(v___x_2124_, 1, v___x_2123_);
v___x_2125_ = l_Lean_Name_isAnonymous(v_hint_2061_);
if (v___x_2125_ == 0)
{
lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; 
v___x_2126_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__6);
v___x_2127_ = l_Lean_MessageData_ofName(v_hint_2061_);
v___x_2128_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2128_, 0, v___x_2126_);
lean_ctor_set(v___x_2128_, 1, v___x_2127_);
v___y_2112_ = v___x_2124_;
v___y_2113_ = v___x_2128_;
goto v___jp_2111_;
}
else
{
lean_object* v___x_2129_; 
lean_dec(v_hint_2061_);
v___x_2129_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__7);
v___y_2112_ = v___x_2124_;
v___y_2113_ = v___x_2129_;
goto v___jp_2111_;
}
}
}
else
{
lean_object* v___x_2147_; lean_object* v___x_2148_; 
lean_dec_ref_known(v_entry_2069_, 1);
lean_dec(v_hint_2061_);
lean_dec(v_mod_2059_);
v___x_2147_ = lean_box(0);
v___x_2148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2148_, 0, v___x_2147_);
return v___x_2148_;
}
v___jp_2075_:
{
lean_object* v___x_2077_; lean_object* v_toEnvExtension_2078_; lean_object* v_env_2079_; lean_object* v_messages_2080_; lean_object* v_scopes_2081_; lean_object* v_usedQuotCtxts_2082_; lean_object* v_nextMacroScope_2083_; lean_object* v_maxRecDepth_2084_; lean_object* v_ngen_2085_; lean_object* v_auxDeclNGen_2086_; lean_object* v_infoState_2087_; lean_object* v_traceState_2088_; lean_object* v_snapshotTasks_2089_; lean_object* v_prevLinterStates_2090_; lean_object* v_codeQualityEntryTasks_2091_; lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2103_; 
v___x_2077_ = lean_st_ref_take(v___y_2076_);
v_toEnvExtension_2078_ = lean_ctor_get(v___x_2072_, 0);
v_env_2079_ = lean_ctor_get(v___x_2077_, 0);
v_messages_2080_ = lean_ctor_get(v___x_2077_, 1);
v_scopes_2081_ = lean_ctor_get(v___x_2077_, 2);
v_usedQuotCtxts_2082_ = lean_ctor_get(v___x_2077_, 3);
v_nextMacroScope_2083_ = lean_ctor_get(v___x_2077_, 4);
v_maxRecDepth_2084_ = lean_ctor_get(v___x_2077_, 5);
v_ngen_2085_ = lean_ctor_get(v___x_2077_, 6);
v_auxDeclNGen_2086_ = lean_ctor_get(v___x_2077_, 7);
v_infoState_2087_ = lean_ctor_get(v___x_2077_, 8);
v_traceState_2088_ = lean_ctor_get(v___x_2077_, 9);
v_snapshotTasks_2089_ = lean_ctor_get(v___x_2077_, 10);
v_prevLinterStates_2090_ = lean_ctor_get(v___x_2077_, 11);
v_codeQualityEntryTasks_2091_ = lean_ctor_get(v___x_2077_, 12);
v_isSharedCheck_2103_ = !lean_is_exclusive(v___x_2077_);
if (v_isSharedCheck_2103_ == 0)
{
v___x_2093_ = v___x_2077_;
v_isShared_2094_ = v_isSharedCheck_2103_;
goto v_resetjp_2092_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2091_);
lean_inc(v_prevLinterStates_2090_);
lean_inc(v_snapshotTasks_2089_);
lean_inc(v_traceState_2088_);
lean_inc(v_infoState_2087_);
lean_inc(v_auxDeclNGen_2086_);
lean_inc(v_ngen_2085_);
lean_inc(v_maxRecDepth_2084_);
lean_inc(v_nextMacroScope_2083_);
lean_inc(v_usedQuotCtxts_2082_);
lean_inc(v_scopes_2081_);
lean_inc(v_messages_2080_);
lean_inc(v_env_2079_);
lean_dec(v___x_2077_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2103_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
lean_object* v_asyncMode_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2099_; 
v_asyncMode_2095_ = lean_ctor_get(v_toEnvExtension_2078_, 2);
v___x_2096_ = lean_box(0);
v___x_2097_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_2072_, v_env_2079_, v_entry_2069_, v_asyncMode_2095_, v___x_2074_);
if (v_isShared_2094_ == 0)
{
lean_ctor_set(v___x_2093_, 0, v___x_2097_);
v___x_2099_ = v___x_2093_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2102_; 
v_reuseFailAlloc_2102_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2102_, 0, v___x_2097_);
lean_ctor_set(v_reuseFailAlloc_2102_, 1, v_messages_2080_);
lean_ctor_set(v_reuseFailAlloc_2102_, 2, v_scopes_2081_);
lean_ctor_set(v_reuseFailAlloc_2102_, 3, v_usedQuotCtxts_2082_);
lean_ctor_set(v_reuseFailAlloc_2102_, 4, v_nextMacroScope_2083_);
lean_ctor_set(v_reuseFailAlloc_2102_, 5, v_maxRecDepth_2084_);
lean_ctor_set(v_reuseFailAlloc_2102_, 6, v_ngen_2085_);
lean_ctor_set(v_reuseFailAlloc_2102_, 7, v_auxDeclNGen_2086_);
lean_ctor_set(v_reuseFailAlloc_2102_, 8, v_infoState_2087_);
lean_ctor_set(v_reuseFailAlloc_2102_, 9, v_traceState_2088_);
lean_ctor_set(v_reuseFailAlloc_2102_, 10, v_snapshotTasks_2089_);
lean_ctor_set(v_reuseFailAlloc_2102_, 11, v_prevLinterStates_2090_);
lean_ctor_set(v_reuseFailAlloc_2102_, 12, v_codeQualityEntryTasks_2091_);
v___x_2099_ = v_reuseFailAlloc_2102_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
lean_object* v___x_2100_; lean_object* v___x_2101_; 
v___x_2100_ = lean_st_ref_put(v___y_2076_, v___x_2099_);
v___x_2101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2101_, 0, v___x_2096_);
return v___x_2101_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___boxed(lean_object* v_mod_2149_, lean_object* v_isMeta_2150_, lean_object* v_hint_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_){
_start:
{
uint8_t v_isMeta_boxed_2155_; lean_object* v_res_2156_; 
v_isMeta_boxed_2155_ = lean_unbox(v_isMeta_2150_);
v_res_2156_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41(v_mod_2149_, v_isMeta_boxed_2155_, v_hint_2151_, v___y_2152_, v___y_2153_);
lean_dec(v___y_2153_);
lean_dec_ref(v___y_2152_);
return v_res_2156_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__42(lean_object* v___x_2157_, lean_object* v_declName_2158_, lean_object* v_as_2159_, size_t v_sz_2160_, size_t v_i_2161_, lean_object* v_b_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_){
_start:
{
uint8_t v___x_2166_; 
v___x_2166_ = lean_usize_dec_lt(v_i_2161_, v_sz_2160_);
if (v___x_2166_ == 0)
{
lean_object* v___x_2167_; 
lean_dec(v_declName_2158_);
v___x_2167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2167_, 0, v_b_2162_);
return v___x_2167_;
}
else
{
lean_object* v___x_2168_; lean_object* v_modules_2169_; lean_object* v___x_2170_; lean_object* v_a_2171_; lean_object* v___x_2172_; lean_object* v_toImport_2173_; lean_object* v_module_2174_; lean_object* v___x_2175_; uint8_t v___x_2176_; lean_object* v___x_2177_; 
v___x_2168_ = l_Lean_Environment_header(v___x_2157_);
v_modules_2169_ = lean_ctor_get(v___x_2168_, 3);
lean_inc_ref(v_modules_2169_);
lean_dec_ref(v___x_2168_);
v___x_2170_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_2171_ = lean_array_uget_borrowed(v_as_2159_, v_i_2161_);
v___x_2172_ = lean_array_get(v___x_2170_, v_modules_2169_, v_a_2171_);
lean_dec_ref(v_modules_2169_);
v_toImport_2173_ = lean_ctor_get(v___x_2172_, 0);
lean_inc_ref(v_toImport_2173_);
lean_dec(v___x_2172_);
v_module_2174_ = lean_ctor_get(v_toImport_2173_, 0);
lean_inc(v_module_2174_);
lean_dec_ref(v_toImport_2173_);
v___x_2175_ = lean_box(0);
v___x_2176_ = 0;
lean_inc(v_declName_2158_);
v___x_2177_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41(v_module_2174_, v___x_2176_, v_declName_2158_, v___y_2163_, v___y_2164_);
if (lean_obj_tag(v___x_2177_) == 0)
{
size_t v___x_2178_; size_t v___x_2179_; 
lean_dec_ref_known(v___x_2177_, 1);
v___x_2178_ = ((size_t)1ULL);
v___x_2179_ = lean_usize_add(v_i_2161_, v___x_2178_);
v_i_2161_ = v___x_2179_;
v_b_2162_ = v___x_2175_;
goto _start;
}
else
{
lean_dec(v_declName_2158_);
return v___x_2177_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__42___boxed(lean_object* v___x_2181_, lean_object* v_declName_2182_, lean_object* v_as_2183_, lean_object* v_sz_2184_, lean_object* v_i_2185_, lean_object* v_b_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_){
_start:
{
size_t v_sz_boxed_2190_; size_t v_i_boxed_2191_; lean_object* v_res_2192_; 
v_sz_boxed_2190_ = lean_unbox_usize(v_sz_2184_);
lean_dec(v_sz_2184_);
v_i_boxed_2191_ = lean_unbox_usize(v_i_2185_);
lean_dec(v_i_2185_);
v_res_2192_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__42(v___x_2181_, v_declName_2182_, v_as_2183_, v_sz_boxed_2190_, v_i_boxed_2191_, v_b_2186_, v___y_2187_, v___y_2188_);
lean_dec(v___y_2188_);
lean_dec_ref(v___y_2187_);
lean_dec_ref(v_as_2183_);
lean_dec_ref(v___x_2181_);
return v_res_2192_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__43_spec__47___redArg(lean_object* v_a_2193_, lean_object* v_x_2194_){
_start:
{
if (lean_obj_tag(v_x_2194_) == 0)
{
lean_object* v___x_2195_; 
v___x_2195_ = lean_box(0);
return v___x_2195_;
}
else
{
lean_object* v_key_2196_; lean_object* v_value_2197_; lean_object* v_tail_2198_; uint8_t v___x_2199_; 
v_key_2196_ = lean_ctor_get(v_x_2194_, 0);
v_value_2197_ = lean_ctor_get(v_x_2194_, 1);
v_tail_2198_ = lean_ctor_get(v_x_2194_, 2);
v___x_2199_ = lean_name_eq(v_key_2196_, v_a_2193_);
if (v___x_2199_ == 0)
{
v_x_2194_ = v_tail_2198_;
goto _start;
}
else
{
lean_object* v___x_2201_; 
lean_inc(v_value_2197_);
v___x_2201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2201_, 0, v_value_2197_);
return v___x_2201_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__43_spec__47___redArg___boxed(lean_object* v_a_2202_, lean_object* v_x_2203_){
_start:
{
lean_object* v_res_2204_; 
v_res_2204_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__43_spec__47___redArg(v_a_2202_, v_x_2203_);
lean_dec(v_x_2203_);
lean_dec(v_a_2202_);
return v_res_2204_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__43___redArg(lean_object* v_m_2205_, lean_object* v_a_2206_){
_start:
{
lean_object* v_buckets_2207_; lean_object* v___x_2208_; uint64_t v___y_2210_; 
v_buckets_2207_ = lean_ctor_get(v_m_2205_, 1);
v___x_2208_ = lean_array_get_size(v_buckets_2207_);
if (lean_obj_tag(v_a_2206_) == 0)
{
uint64_t v___x_2224_; 
v___x_2224_ = 1723ULL;
v___y_2210_ = v___x_2224_;
goto v___jp_2209_;
}
else
{
uint64_t v_hash_2225_; 
v_hash_2225_ = lean_ctor_get_uint64(v_a_2206_, sizeof(void*)*2);
v___y_2210_ = v_hash_2225_;
goto v___jp_2209_;
}
v___jp_2209_:
{
uint64_t v___x_2211_; uint64_t v___x_2212_; uint64_t v_fold_2213_; uint64_t v___x_2214_; uint64_t v___x_2215_; uint64_t v___x_2216_; size_t v___x_2217_; size_t v___x_2218_; size_t v___x_2219_; size_t v___x_2220_; size_t v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; 
v___x_2211_ = 32ULL;
v___x_2212_ = lean_uint64_shift_right(v___y_2210_, v___x_2211_);
v_fold_2213_ = lean_uint64_xor(v___y_2210_, v___x_2212_);
v___x_2214_ = 16ULL;
v___x_2215_ = lean_uint64_shift_right(v_fold_2213_, v___x_2214_);
v___x_2216_ = lean_uint64_xor(v_fold_2213_, v___x_2215_);
v___x_2217_ = lean_uint64_to_usize(v___x_2216_);
v___x_2218_ = lean_usize_of_nat(v___x_2208_);
v___x_2219_ = ((size_t)1ULL);
v___x_2220_ = lean_usize_sub(v___x_2218_, v___x_2219_);
v___x_2221_ = lean_usize_land(v___x_2217_, v___x_2220_);
v___x_2222_ = lean_array_uget_borrowed(v_buckets_2207_, v___x_2221_);
v___x_2223_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__43_spec__47___redArg(v_a_2206_, v___x_2222_);
return v___x_2223_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__43___redArg___boxed(lean_object* v_m_2226_, lean_object* v_a_2227_){
_start:
{
lean_object* v_res_2228_; 
v_res_2228_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__43___redArg(v_m_2226_, v_a_2227_);
lean_dec(v_a_2227_);
lean_dec_ref(v_m_2226_);
return v_res_2228_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32___closed__0(void){
_start:
{
lean_object* v___x_2229_; 
v___x_2229_ = l_Std_HashMap_instInhabited___redArg();
return v___x_2229_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32(lean_object* v_declName_2232_, uint8_t v_isMeta_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_){
_start:
{
lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v_env_2242_; lean_object* v___y_2244_; lean_object* v___x_2257_; 
v___x_2237_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32___closed__0);
v___x_2238_ = lean_st_ref_get(v___y_2235_);
v_env_2242_ = lean_ctor_get(v___x_2238_, 0);
lean_inc_ref(v_env_2242_);
lean_dec(v___x_2238_);
v___x_2257_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2242_, v_declName_2232_);
if (lean_obj_tag(v___x_2257_) == 0)
{
lean_dec_ref(v_env_2242_);
lean_dec(v_declName_2232_);
goto v___jp_2239_;
}
else
{
lean_object* v_val_2258_; lean_object* v___x_2259_; lean_object* v_modules_2260_; lean_object* v___x_2261_; uint8_t v___x_2262_; 
v_val_2258_ = lean_ctor_get(v___x_2257_, 0);
lean_inc(v_val_2258_);
lean_dec_ref_known(v___x_2257_, 1);
v___x_2259_ = l_Lean_Environment_header(v_env_2242_);
v_modules_2260_ = lean_ctor_get(v___x_2259_, 3);
lean_inc_ref(v_modules_2260_);
lean_dec_ref(v___x_2259_);
v___x_2261_ = lean_array_get_size(v_modules_2260_);
v___x_2262_ = lean_nat_dec_lt(v_val_2258_, v___x_2261_);
if (v___x_2262_ == 0)
{
lean_dec_ref(v_modules_2260_);
lean_dec(v_val_2258_);
lean_dec_ref(v_env_2242_);
lean_dec(v_declName_2232_);
goto v___jp_2239_;
}
else
{
lean_object* v___x_2263_; lean_object* v___x_2264_; uint8_t v___y_2266_; 
v___x_2263_ = lean_array_fget(v_modules_2260_, v_val_2258_);
lean_dec(v_val_2258_);
lean_dec_ref(v_modules_2260_);
v___x_2264_ = lean_st_ref_get(v___y_2235_);
if (v_isMeta_2233_ == 0)
{
lean_dec(v___x_2264_);
v___y_2266_ = v_isMeta_2233_;
goto v___jp_2265_;
}
else
{
lean_object* v_env_2277_; uint8_t v___x_2278_; 
v_env_2277_ = lean_ctor_get(v___x_2264_, 0);
lean_inc_ref(v_env_2277_);
lean_dec(v___x_2264_);
lean_inc(v_declName_2232_);
v___x_2278_ = l_Lean_isMarkedMeta(v_env_2277_, v_declName_2232_);
if (v___x_2278_ == 0)
{
v___y_2266_ = v_isMeta_2233_;
goto v___jp_2265_;
}
else
{
uint8_t v___x_2279_; 
v___x_2279_ = 0;
v___y_2266_ = v___x_2279_;
goto v___jp_2265_;
}
}
v___jp_2265_:
{
lean_object* v_toImport_2267_; lean_object* v_module_2268_; lean_object* v___x_2269_; 
v_toImport_2267_ = lean_ctor_get(v___x_2263_, 0);
lean_inc_ref(v_toImport_2267_);
lean_dec(v___x_2263_);
v_module_2268_ = lean_ctor_get(v_toImport_2267_, 0);
lean_inc(v_module_2268_);
lean_dec_ref(v_toImport_2267_);
lean_inc(v_declName_2232_);
v___x_2269_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41(v_module_2268_, v___y_2266_, v_declName_2232_, v___y_2234_, v___y_2235_);
if (lean_obj_tag(v___x_2269_) == 0)
{
lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; 
lean_dec_ref_known(v___x_2269_, 1);
v___x_2270_ = l_Lean_indirectModUseExt;
v___x_2271_ = lean_box(1);
v___x_2272_ = lean_box(0);
lean_inc_ref(v_env_2242_);
v___x_2273_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2237_, v___x_2270_, v_env_2242_, v___x_2271_, v___x_2272_);
v___x_2274_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__43___redArg(v___x_2273_, v_declName_2232_);
lean_dec(v___x_2273_);
if (lean_obj_tag(v___x_2274_) == 0)
{
lean_object* v___x_2275_; 
v___x_2275_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32___closed__1));
v___y_2244_ = v___x_2275_;
goto v___jp_2243_;
}
else
{
lean_object* v_val_2276_; 
v_val_2276_ = lean_ctor_get(v___x_2274_, 0);
lean_inc(v_val_2276_);
lean_dec_ref_known(v___x_2274_, 1);
v___y_2244_ = v_val_2276_;
goto v___jp_2243_;
}
}
else
{
lean_dec_ref(v_env_2242_);
lean_dec(v_declName_2232_);
return v___x_2269_;
}
}
}
}
v___jp_2239_:
{
lean_object* v___x_2240_; lean_object* v___x_2241_; 
v___x_2240_ = lean_box(0);
v___x_2241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2241_, 0, v___x_2240_);
return v___x_2241_;
}
v___jp_2243_:
{
lean_object* v___x_2245_; size_t v_sz_2246_; size_t v___x_2247_; lean_object* v___x_2248_; 
v___x_2245_ = lean_box(0);
v_sz_2246_ = lean_array_size(v___y_2244_);
v___x_2247_ = ((size_t)0ULL);
v___x_2248_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__42(v_env_2242_, v_declName_2232_, v___y_2244_, v_sz_2246_, v___x_2247_, v___x_2245_, v___y_2234_, v___y_2235_);
lean_dec_ref(v___y_2244_);
lean_dec_ref(v_env_2242_);
if (lean_obj_tag(v___x_2248_) == 0)
{
lean_object* v___x_2250_; uint8_t v_isShared_2251_; uint8_t v_isSharedCheck_2255_; 
v_isSharedCheck_2255_ = !lean_is_exclusive(v___x_2248_);
if (v_isSharedCheck_2255_ == 0)
{
lean_object* v_unused_2256_; 
v_unused_2256_ = lean_ctor_get(v___x_2248_, 0);
lean_dec(v_unused_2256_);
v___x_2250_ = v___x_2248_;
v_isShared_2251_ = v_isSharedCheck_2255_;
goto v_resetjp_2249_;
}
else
{
lean_dec(v___x_2248_);
v___x_2250_ = lean_box(0);
v_isShared_2251_ = v_isSharedCheck_2255_;
goto v_resetjp_2249_;
}
v_resetjp_2249_:
{
lean_object* v___x_2253_; 
if (v_isShared_2251_ == 0)
{
lean_ctor_set(v___x_2250_, 0, v___x_2245_);
v___x_2253_ = v___x_2250_;
goto v_reusejp_2252_;
}
else
{
lean_object* v_reuseFailAlloc_2254_; 
v_reuseFailAlloc_2254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2254_, 0, v___x_2245_);
v___x_2253_ = v_reuseFailAlloc_2254_;
goto v_reusejp_2252_;
}
v_reusejp_2252_:
{
return v___x_2253_;
}
}
}
else
{
return v___x_2248_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32___boxed(lean_object* v_declName_2280_, lean_object* v_isMeta_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_){
_start:
{
uint8_t v_isMeta_boxed_2285_; lean_object* v_res_2286_; 
v_isMeta_boxed_2285_ = lean_unbox(v_isMeta_2281_);
v_res_2286_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32(v_declName_2280_, v_isMeta_boxed_2285_, v___y_2282_, v___y_2283_);
lean_dec(v___y_2283_);
lean_dec_ref(v___y_2282_);
return v_res_2286_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__36___redArg(lean_object* v_x_2287_, lean_object* v___y_2288_){
_start:
{
if (lean_obj_tag(v_x_2287_) == 0)
{
lean_object* v_a_2289_; lean_object* v___x_2290_; 
v_a_2289_ = lean_ctor_get(v_x_2287_, 0);
lean_inc(v_a_2289_);
v___x_2290_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2290_, 0, v_a_2289_);
lean_ctor_set(v___x_2290_, 1, v___y_2288_);
return v___x_2290_;
}
else
{
lean_object* v_a_2291_; lean_object* v___x_2292_; 
v_a_2291_ = lean_ctor_get(v_x_2287_, 0);
lean_inc(v_a_2291_);
v___x_2292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2292_, 0, v_a_2291_);
lean_ctor_set(v___x_2292_, 1, v___y_2288_);
return v___x_2292_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__36___redArg___boxed(lean_object* v_x_2293_, lean_object* v___y_2294_){
_start:
{
lean_object* v_res_2295_; 
v_res_2295_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__36___redArg(v_x_2293_, v___y_2294_);
lean_dec_ref(v_x_2293_);
return v_res_2295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__1(lean_object* v_env_2296_, lean_object* v_stx_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_){
_start:
{
lean_object* v___x_2300_; 
v___x_2300_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_2296_, v_stx_2297_, v___y_2298_, v___y_2299_);
if (lean_obj_tag(v___x_2300_) == 0)
{
lean_object* v_a_2301_; 
v_a_2301_ = lean_ctor_get(v___x_2300_, 0);
lean_inc(v_a_2301_);
if (lean_obj_tag(v_a_2301_) == 0)
{
lean_object* v_a_2302_; lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2310_; 
v_a_2302_ = lean_ctor_get(v___x_2300_, 1);
v_isSharedCheck_2310_ = !lean_is_exclusive(v___x_2300_);
if (v_isSharedCheck_2310_ == 0)
{
lean_object* v_unused_2311_; 
v_unused_2311_ = lean_ctor_get(v___x_2300_, 0);
lean_dec(v_unused_2311_);
v___x_2304_ = v___x_2300_;
v_isShared_2305_ = v_isSharedCheck_2310_;
goto v_resetjp_2303_;
}
else
{
lean_inc(v_a_2302_);
lean_dec(v___x_2300_);
v___x_2304_ = lean_box(0);
v_isShared_2305_ = v_isSharedCheck_2310_;
goto v_resetjp_2303_;
}
v_resetjp_2303_:
{
lean_object* v___x_2306_; lean_object* v___x_2308_; 
v___x_2306_ = lean_box(0);
if (v_isShared_2305_ == 0)
{
lean_ctor_set(v___x_2304_, 0, v___x_2306_);
v___x_2308_ = v___x_2304_;
goto v_reusejp_2307_;
}
else
{
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v___x_2306_);
lean_ctor_set(v_reuseFailAlloc_2309_, 1, v_a_2302_);
v___x_2308_ = v_reuseFailAlloc_2309_;
goto v_reusejp_2307_;
}
v_reusejp_2307_:
{
return v___x_2308_;
}
}
}
else
{
lean_object* v_val_2312_; lean_object* v___x_2314_; uint8_t v_isShared_2315_; uint8_t v_isSharedCheck_2340_; 
v_val_2312_ = lean_ctor_get(v_a_2301_, 0);
v_isSharedCheck_2340_ = !lean_is_exclusive(v_a_2301_);
if (v_isSharedCheck_2340_ == 0)
{
v___x_2314_ = v_a_2301_;
v_isShared_2315_ = v_isSharedCheck_2340_;
goto v_resetjp_2313_;
}
else
{
lean_inc(v_val_2312_);
lean_dec(v_a_2301_);
v___x_2314_ = lean_box(0);
v_isShared_2315_ = v_isSharedCheck_2340_;
goto v_resetjp_2313_;
}
v_resetjp_2313_:
{
lean_object* v_snd_2316_; 
v_snd_2316_ = lean_ctor_get(v_val_2312_, 1);
lean_inc(v_snd_2316_);
lean_dec(v_val_2312_);
if (lean_obj_tag(v_snd_2316_) == 0)
{
lean_object* v_a_2317_; lean_object* v_a_2318_; lean_object* v___x_2320_; uint8_t v_isShared_2321_; uint8_t v_isSharedCheck_2326_; 
lean_del_object(v___x_2314_);
v_a_2317_ = lean_ctor_get(v___x_2300_, 1);
lean_inc(v_a_2317_);
lean_dec_ref_known(v___x_2300_, 2);
v_a_2318_ = lean_ctor_get(v_snd_2316_, 0);
v_isSharedCheck_2326_ = !lean_is_exclusive(v_snd_2316_);
if (v_isSharedCheck_2326_ == 0)
{
v___x_2320_ = v_snd_2316_;
v_isShared_2321_ = v_isSharedCheck_2326_;
goto v_resetjp_2319_;
}
else
{
lean_inc(v_a_2318_);
lean_dec(v_snd_2316_);
v___x_2320_ = lean_box(0);
v_isShared_2321_ = v_isSharedCheck_2326_;
goto v_resetjp_2319_;
}
v_resetjp_2319_:
{
lean_object* v___x_2323_; 
if (v_isShared_2321_ == 0)
{
v___x_2323_ = v___x_2320_;
goto v_reusejp_2322_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v_a_2318_);
v___x_2323_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2322_;
}
v_reusejp_2322_:
{
lean_object* v___x_2324_; 
v___x_2324_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__36___redArg(v___x_2323_, v_a_2317_);
lean_dec_ref(v___x_2323_);
return v___x_2324_;
}
}
}
else
{
lean_object* v_a_2327_; lean_object* v_a_2328_; lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2339_; 
v_a_2327_ = lean_ctor_get(v___x_2300_, 1);
lean_inc(v_a_2327_);
lean_dec_ref_known(v___x_2300_, 2);
v_a_2328_ = lean_ctor_get(v_snd_2316_, 0);
v_isSharedCheck_2339_ = !lean_is_exclusive(v_snd_2316_);
if (v_isSharedCheck_2339_ == 0)
{
v___x_2330_ = v_snd_2316_;
v_isShared_2331_ = v_isSharedCheck_2339_;
goto v_resetjp_2329_;
}
else
{
lean_inc(v_a_2328_);
lean_dec(v_snd_2316_);
v___x_2330_ = lean_box(0);
v_isShared_2331_ = v_isSharedCheck_2339_;
goto v_resetjp_2329_;
}
v_resetjp_2329_:
{
lean_object* v___x_2333_; 
if (v_isShared_2315_ == 0)
{
lean_ctor_set(v___x_2314_, 0, v_a_2328_);
v___x_2333_ = v___x_2314_;
goto v_reusejp_2332_;
}
else
{
lean_object* v_reuseFailAlloc_2338_; 
v_reuseFailAlloc_2338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2338_, 0, v_a_2328_);
v___x_2333_ = v_reuseFailAlloc_2338_;
goto v_reusejp_2332_;
}
v_reusejp_2332_:
{
lean_object* v___x_2335_; 
if (v_isShared_2331_ == 0)
{
lean_ctor_set(v___x_2330_, 0, v___x_2333_);
v___x_2335_ = v___x_2330_;
goto v_reusejp_2334_;
}
else
{
lean_object* v_reuseFailAlloc_2337_; 
v_reuseFailAlloc_2337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2337_, 0, v___x_2333_);
v___x_2335_ = v_reuseFailAlloc_2337_;
goto v_reusejp_2334_;
}
v_reusejp_2334_:
{
lean_object* v___x_2336_; 
v___x_2336_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__36___redArg(v___x_2335_, v_a_2327_);
lean_dec_ref(v___x_2335_);
return v___x_2336_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2341_; lean_object* v_a_2342_; lean_object* v___x_2344_; uint8_t v_isShared_2345_; uint8_t v_isSharedCheck_2349_; 
v_a_2341_ = lean_ctor_get(v___x_2300_, 0);
v_a_2342_ = lean_ctor_get(v___x_2300_, 1);
v_isSharedCheck_2349_ = !lean_is_exclusive(v___x_2300_);
if (v_isSharedCheck_2349_ == 0)
{
v___x_2344_ = v___x_2300_;
v_isShared_2345_ = v_isSharedCheck_2349_;
goto v_resetjp_2343_;
}
else
{
lean_inc(v_a_2342_);
lean_inc(v_a_2341_);
lean_dec(v___x_2300_);
v___x_2344_ = lean_box(0);
v_isShared_2345_ = v_isSharedCheck_2349_;
goto v_resetjp_2343_;
}
v_resetjp_2343_:
{
lean_object* v___x_2347_; 
if (v_isShared_2345_ == 0)
{
v___x_2347_ = v___x_2344_;
goto v_reusejp_2346_;
}
else
{
lean_object* v_reuseFailAlloc_2348_; 
v_reuseFailAlloc_2348_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2348_, 0, v_a_2341_);
lean_ctor_set(v_reuseFailAlloc_2348_, 1, v_a_2342_);
v___x_2347_ = v_reuseFailAlloc_2348_;
goto v_reusejp_2346_;
}
v_reusejp_2346_:
{
return v___x_2347_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__1___boxed(lean_object* v_env_2350_, lean_object* v_stx_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_){
_start:
{
lean_object* v_res_2354_; 
v_res_2354_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__1(v_env_2350_, v_stx_2351_, v___y_2352_, v___y_2353_);
lean_dec_ref(v___y_2352_);
return v_res_2354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__4(lean_object* v_env_2355_, lean_object* v_opts_2356_, lean_object* v_currNamespace_2357_, lean_object* v_openDecls_2358_, lean_object* v_n_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_){
_start:
{
lean_object* v___x_2362_; lean_object* v___x_2363_; 
v___x_2362_ = l_Lean_ResolveName_resolveGlobalName(v_env_2355_, v_opts_2356_, v_currNamespace_2357_, v_openDecls_2358_, v_n_2359_);
v___x_2363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2363_, 0, v___x_2362_);
lean_ctor_set(v___x_2363_, 1, v___y_2361_);
return v___x_2363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__4___boxed(lean_object* v_env_2364_, lean_object* v_opts_2365_, lean_object* v_currNamespace_2366_, lean_object* v_openDecls_2367_, lean_object* v_n_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_){
_start:
{
lean_object* v_res_2371_; 
v_res_2371_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__4(v_env_2364_, v_opts_2365_, v_currNamespace_2366_, v_openDecls_2367_, v_n_2368_, v___y_2369_, v___y_2370_);
lean_dec_ref(v___y_2369_);
lean_dec_ref(v_opts_2365_);
return v_res_2371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__2(lean_object* v_currNamespace_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_){
_start:
{
lean_object* v___x_2375_; 
v___x_2375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2375_, 0, v_currNamespace_2372_);
lean_ctor_set(v___x_2375_, 1, v___y_2374_);
return v___x_2375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__2___boxed(lean_object* v_currNamespace_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_){
_start:
{
lean_object* v_res_2379_; 
v_res_2379_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__2(v_currNamespace_2376_, v___y_2377_, v___y_2378_);
lean_dec_ref(v___y_2377_);
return v_res_2379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__3(lean_object* v_env_2380_, lean_object* v_currNamespace_2381_, lean_object* v_openDecls_2382_, lean_object* v_n_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_){
_start:
{
lean_object* v___x_2386_; lean_object* v___x_2387_; 
v___x_2386_ = l_Lean_ResolveName_resolveNamespace(v_env_2380_, v_currNamespace_2381_, v_openDecls_2382_, v_n_2383_);
v___x_2387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2387_, 0, v___x_2386_);
lean_ctor_set(v___x_2387_, 1, v___y_2385_);
return v___x_2387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__3___boxed(lean_object* v_env_2388_, lean_object* v_currNamespace_2389_, lean_object* v_openDecls_2390_, lean_object* v_n_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_){
_start:
{
lean_object* v_res_2394_; 
v_res_2394_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__3(v_env_2388_, v_currNamespace_2389_, v_openDecls_2390_, v_n_2391_, v___y_2392_, v___y_2393_);
lean_dec_ref(v___y_2392_);
return v_res_2394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__0(lean_object* v_env_2395_, lean_object* v_declName_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_){
_start:
{
uint8_t v___x_2399_; lean_object* v_env_2400_; lean_object* v___x_2401_; uint8_t v___x_2402_; uint8_t v___x_2403_; 
v___x_2399_ = 0;
v_env_2400_ = l_Lean_Environment_setExporting(v_env_2395_, v___x_2399_);
lean_inc(v_declName_2396_);
v___x_2401_ = l_Lean_mkPrivateName(v_env_2400_, v_declName_2396_);
v___x_2402_ = 1;
lean_inc_ref(v_env_2400_);
v___x_2403_ = l_Lean_Environment_contains(v_env_2400_, v___x_2401_, v___x_2402_);
if (v___x_2403_ == 0)
{
lean_object* v___x_2404_; uint8_t v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; 
v___x_2404_ = l_Lean_privateToUserName(v_declName_2396_);
v___x_2405_ = l_Lean_Environment_contains(v_env_2400_, v___x_2404_, v___x_2402_);
v___x_2406_ = lean_box(v___x_2405_);
v___x_2407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2407_, 0, v___x_2406_);
lean_ctor_set(v___x_2407_, 1, v___y_2398_);
return v___x_2407_;
}
else
{
lean_object* v___x_2408_; lean_object* v___x_2409_; 
lean_dec_ref(v_env_2400_);
lean_dec(v_declName_2396_);
v___x_2408_ = lean_box(v___x_2403_);
v___x_2409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2409_, 0, v___x_2408_);
lean_ctor_set(v___x_2409_, 1, v___y_2398_);
return v___x_2409_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__0___boxed(lean_object* v_env_2410_, lean_object* v_declName_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_){
_start:
{
lean_object* v_res_2414_; 
v_res_2414_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__0(v_env_2410_, v_declName_2411_, v___y_2412_, v___y_2413_);
lean_dec_ref(v___y_2412_);
return v_res_2414_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__38(lean_object* v_as_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_){
_start:
{
if (lean_obj_tag(v_as_2415_) == 0)
{
lean_object* v___x_2419_; lean_object* v___x_2420_; 
v___x_2419_ = lean_box(0);
v___x_2420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2420_, 0, v___x_2419_);
return v___x_2420_;
}
else
{
lean_object* v_head_2421_; lean_object* v_tail_2422_; lean_object* v_fst_2423_; lean_object* v_snd_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v_scopes_2429_; lean_object* v___x_2430_; lean_object* v_opts_2431_; uint8_t v_hasTrace_2432_; 
v_head_2421_ = lean_ctor_get(v_as_2415_, 0);
lean_inc(v_head_2421_);
v_tail_2422_ = lean_ctor_get(v_as_2415_, 1);
lean_inc(v_tail_2422_);
lean_dec_ref_known(v_as_2415_, 2);
v_fst_2423_ = lean_ctor_get(v_head_2421_, 0);
lean_inc(v_fst_2423_);
v_snd_2424_ = lean_ctor_get(v_head_2421_, 1);
lean_inc(v_snd_2424_);
lean_dec(v_head_2421_);
v___x_2425_ = l_Lean_inheritedTraceOptions;
v___x_2426_ = lean_st_ref_get(v___x_2425_);
v___x_2427_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2428_ = lean_st_ref_get(v___y_2417_);
v_scopes_2429_ = lean_ctor_get(v___x_2428_, 2);
lean_inc(v_scopes_2429_);
lean_dec(v___x_2428_);
v___x_2430_ = l_List_head_x21___redArg(v___x_2427_, v_scopes_2429_);
lean_dec(v_scopes_2429_);
v_opts_2431_ = lean_ctor_get(v___x_2430_, 1);
lean_inc_ref(v_opts_2431_);
lean_dec(v___x_2430_);
v_hasTrace_2432_ = lean_ctor_get_uint8(v_opts_2431_, sizeof(void*)*1);
if (v_hasTrace_2432_ == 0)
{
lean_dec_ref(v_opts_2431_);
lean_dec(v___x_2426_);
lean_dec(v_snd_2424_);
lean_dec(v_fst_2423_);
v_as_2415_ = v_tail_2422_;
goto _start;
}
else
{
lean_object* v___x_2434_; lean_object* v___x_2435_; uint8_t v___x_2436_; 
v___x_2434_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41___closed__8));
lean_inc(v_fst_2423_);
v___x_2435_ = l_Lean_Name_append(v___x_2434_, v_fst_2423_);
v___x_2436_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_2426_, v_opts_2431_, v___x_2435_);
lean_dec(v___x_2435_);
lean_dec_ref(v_opts_2431_);
lean_dec(v___x_2426_);
if (v___x_2436_ == 0)
{
lean_dec(v_snd_2424_);
lean_dec(v_fst_2423_);
v_as_2415_ = v_tail_2422_;
goto _start;
}
else
{
lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; 
v___x_2438_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2438_, 0, v_snd_2424_);
v___x_2439_ = l_Lean_MessageData_ofFormat(v___x_2438_);
v___x_2440_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__35(v_fst_2423_, v___x_2439_, v___y_2416_, v___y_2417_);
if (lean_obj_tag(v___x_2440_) == 0)
{
lean_dec_ref_known(v___x_2440_, 1);
v_as_2415_ = v_tail_2422_;
goto _start;
}
else
{
lean_dec(v_tail_2422_);
return v___x_2440_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__38___boxed(lean_object* v_as_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_){
_start:
{
lean_object* v_res_2446_; 
v_res_2446_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__38(v_as_2442_, v___y_2443_, v___y_2444_);
lean_dec(v___y_2444_);
lean_dec_ref(v___y_2443_);
return v_res_2446_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__3(void){
_start:
{
lean_object* v___x_2452_; lean_object* v___x_2453_; 
v___x_2452_ = l_Lean_maxRecDepthErrorMessage;
v___x_2453_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2453_, 0, v___x_2452_);
return v___x_2453_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__4(void){
_start:
{
lean_object* v___x_2454_; lean_object* v___x_2455_; 
v___x_2454_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__3);
v___x_2455_ = l_Lean_MessageData_ofFormat(v___x_2454_);
return v___x_2455_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__5(void){
_start:
{
lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; 
v___x_2456_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__4);
v___x_2457_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__2));
v___x_2458_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2458_, 0, v___x_2457_);
lean_ctor_set(v___x_2458_, 1, v___x_2456_);
return v___x_2458_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg(lean_object* v_ref_2459_){
_start:
{
lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; 
v___x_2461_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___closed__5);
v___x_2462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2462_, 0, v_ref_2459_);
lean_ctor_set(v___x_2462_, 1, v___x_2461_);
v___x_2463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2463_, 0, v___x_2462_);
return v___x_2463_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg___boxed(lean_object* v_ref_2464_, lean_object* v___y_2465_){
_start:
{
lean_object* v_res_2466_; 
v_res_2466_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg(v_ref_2464_);
return v_res_2466_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__37___redArg(lean_object* v_as_x27_2467_, lean_object* v_b_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_){
_start:
{
if (lean_obj_tag(v_as_x27_2467_) == 0)
{
lean_object* v___x_2472_; 
v___x_2472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2472_, 0, v_b_2468_);
return v___x_2472_;
}
else
{
lean_object* v_head_2473_; lean_object* v_tail_2474_; lean_object* v___x_2475_; uint8_t v___x_2476_; lean_object* v___x_2477_; 
v_head_2473_ = lean_ctor_get(v_as_x27_2467_, 0);
v_tail_2474_ = lean_ctor_get(v_as_x27_2467_, 1);
v___x_2475_ = lean_box(0);
v___x_2476_ = 1;
lean_inc(v_head_2473_);
v___x_2477_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32(v_head_2473_, v___x_2476_, v___y_2469_, v___y_2470_);
if (lean_obj_tag(v___x_2477_) == 0)
{
lean_dec_ref_known(v___x_2477_, 1);
v_as_x27_2467_ = v_tail_2474_;
v_b_2468_ = v___x_2475_;
goto _start;
}
else
{
return v___x_2477_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__37___redArg___boxed(lean_object* v_as_x27_2479_, lean_object* v_b_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_){
_start:
{
lean_object* v_res_2484_; 
v_res_2484_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__37___redArg(v_as_x27_2479_, v_b_2480_, v___y_2481_, v___y_2482_);
lean_dec(v___y_2482_);
lean_dec_ref(v___y_2481_);
lean_dec(v_as_x27_2479_);
return v_res_2484_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg(lean_object* v_x_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_){
_start:
{
lean_object* v___x_2490_; lean_object* v_env_2491_; lean_object* v___f_2492_; lean_object* v___f_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v_scopes_2496_; lean_object* v___x_2497_; lean_object* v_opts_2498_; lean_object* v___x_2499_; 
v___x_2490_ = lean_st_ref_get(v___y_2488_);
v_env_2491_ = lean_ctor_get(v___x_2490_, 0);
lean_inc_ref_n(v_env_2491_, 3);
lean_dec(v___x_2490_);
v___f_2492_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2492_, 0, v_env_2491_);
v___f_2493_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_2493_, 0, v_env_2491_);
v___x_2494_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2495_ = lean_st_ref_get(v___y_2488_);
v_scopes_2496_ = lean_ctor_get(v___x_2495_, 2);
lean_inc(v_scopes_2496_);
lean_dec(v___x_2495_);
v___x_2497_ = l_List_head_x21___redArg(v___x_2494_, v_scopes_2496_);
lean_dec(v_scopes_2496_);
v_opts_2498_ = lean_ctor_get(v___x_2497_, 1);
lean_inc_ref(v_opts_2498_);
lean_dec(v___x_2497_);
v___x_2499_ = l_Lean_Elab_Command_getScope___redArg(v___y_2488_);
if (lean_obj_tag(v___x_2499_) == 0)
{
lean_object* v_a_2500_; lean_object* v_currNamespace_2501_; lean_object* v___f_2502_; lean_object* v___x_2503_; 
v_a_2500_ = lean_ctor_get(v___x_2499_, 0);
lean_inc(v_a_2500_);
lean_dec_ref_known(v___x_2499_, 1);
v_currNamespace_2501_ = lean_ctor_get(v_a_2500_, 2);
lean_inc_n(v_currNamespace_2501_, 2);
lean_dec(v_a_2500_);
v___f_2502_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2502_, 0, v_currNamespace_2501_);
v___x_2503_ = l_Lean_Elab_Command_getScope___redArg(v___y_2488_);
if (lean_obj_tag(v___x_2503_) == 0)
{
lean_object* v_a_2504_; lean_object* v_openDecls_2505_; lean_object* v___f_2506_; lean_object* v___f_2507_; lean_object* v_methods_2508_; lean_object* v___x_2509_; 
v_a_2504_ = lean_ctor_get(v___x_2503_, 0);
lean_inc(v_a_2504_);
lean_dec_ref_known(v___x_2503_, 1);
v_openDecls_2505_ = lean_ctor_get(v_a_2504_, 3);
lean_inc_n(v_openDecls_2505_, 2);
lean_dec(v_a_2504_);
lean_inc(v_currNamespace_2501_);
lean_inc_ref(v_env_2491_);
v___f_2506_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__3___boxed), 6, 3);
lean_closure_set(v___f_2506_, 0, v_env_2491_);
lean_closure_set(v___f_2506_, 1, v_currNamespace_2501_);
lean_closure_set(v___f_2506_, 2, v_openDecls_2505_);
v___f_2507_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___lam__4___boxed), 7, 4);
lean_closure_set(v___f_2507_, 0, v_env_2491_);
lean_closure_set(v___f_2507_, 1, v_opts_2498_);
lean_closure_set(v___f_2507_, 2, v_currNamespace_2501_);
lean_closure_set(v___f_2507_, 3, v_openDecls_2505_);
v_methods_2508_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_methods_2508_, 0, v___f_2493_);
lean_ctor_set(v_methods_2508_, 1, v___f_2502_);
lean_ctor_set(v_methods_2508_, 2, v___f_2492_);
lean_ctor_set(v_methods_2508_, 3, v___f_2506_);
lean_ctor_set(v_methods_2508_, 4, v___f_2507_);
v___x_2509_ = l_Lean_Elab_Command_getRef___redArg(v___y_2487_);
if (lean_obj_tag(v___x_2509_) == 0)
{
lean_object* v_a_2510_; lean_object* v___x_2511_; 
v_a_2510_ = lean_ctor_get(v___x_2509_, 0);
lean_inc(v_a_2510_);
lean_dec_ref_known(v___x_2509_, 1);
v___x_2511_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_2487_);
if (lean_obj_tag(v___x_2511_) == 0)
{
lean_object* v_a_2512_; lean_object* v_currRecDepth_2513_; lean_object* v_quotContext_x3f_2514_; lean_object* v_a_2516_; 
v_a_2512_ = lean_ctor_get(v___x_2511_, 0);
lean_inc(v_a_2512_);
lean_dec_ref_known(v___x_2511_, 1);
v_currRecDepth_2513_ = lean_ctor_get(v___y_2487_, 2);
v_quotContext_x3f_2514_ = lean_ctor_get(v___y_2487_, 5);
if (lean_obj_tag(v_quotContext_x3f_2514_) == 0)
{
lean_object* v___x_2590_; lean_object* v_a_2591_; 
v___x_2590_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v___y_2488_);
v_a_2591_ = lean_ctor_get(v___x_2590_, 0);
lean_inc(v_a_2591_);
lean_dec_ref(v___x_2590_);
v_a_2516_ = v_a_2591_;
goto v___jp_2515_;
}
else
{
lean_object* v_val_2592_; 
v_val_2592_ = lean_ctor_get(v_quotContext_x3f_2514_, 0);
lean_inc(v_val_2592_);
v_a_2516_ = v_val_2592_;
goto v___jp_2515_;
}
v___jp_2515_:
{
lean_object* v___x_2517_; lean_object* v_maxRecDepth_2518_; lean_object* v___x_2519_; lean_object* v_nextMacroScope_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; 
v___x_2517_ = lean_st_ref_get(v___y_2488_);
v_maxRecDepth_2518_ = lean_ctor_get(v___x_2517_, 5);
lean_inc(v_maxRecDepth_2518_);
lean_dec(v___x_2517_);
v___x_2519_ = lean_st_ref_get(v___y_2488_);
v_nextMacroScope_2520_ = lean_ctor_get(v___x_2519_, 4);
lean_inc(v_nextMacroScope_2520_);
lean_dec(v___x_2519_);
lean_inc(v_currRecDepth_2513_);
v___x_2521_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2521_, 0, v_methods_2508_);
lean_ctor_set(v___x_2521_, 1, v_a_2516_);
lean_ctor_set(v___x_2521_, 2, v_a_2512_);
lean_ctor_set(v___x_2521_, 3, v_currRecDepth_2513_);
lean_ctor_set(v___x_2521_, 4, v_maxRecDepth_2518_);
lean_ctor_set(v___x_2521_, 5, v_a_2510_);
v___x_2522_ = lean_box(0);
v___x_2523_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2523_, 0, v_nextMacroScope_2520_);
lean_ctor_set(v___x_2523_, 1, v___x_2522_);
lean_ctor_set(v___x_2523_, 2, v___x_2522_);
v___x_2524_ = lean_apply_2(v_x_2486_, v___x_2521_, v___x_2523_);
if (lean_obj_tag(v___x_2524_) == 0)
{
lean_object* v_a_2525_; lean_object* v_a_2526_; lean_object* v_macroScope_2527_; lean_object* v_traceMsgs_2528_; lean_object* v_expandedMacroDecls_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; 
v_a_2525_ = lean_ctor_get(v___x_2524_, 1);
lean_inc(v_a_2525_);
v_a_2526_ = lean_ctor_get(v___x_2524_, 0);
lean_inc(v_a_2526_);
lean_dec_ref_known(v___x_2524_, 2);
v_macroScope_2527_ = lean_ctor_get(v_a_2525_, 0);
lean_inc(v_macroScope_2527_);
v_traceMsgs_2528_ = lean_ctor_get(v_a_2525_, 1);
lean_inc(v_traceMsgs_2528_);
v_expandedMacroDecls_2529_ = lean_ctor_get(v_a_2525_, 2);
lean_inc(v_expandedMacroDecls_2529_);
lean_dec(v_a_2525_);
v___x_2530_ = lean_box(0);
v___x_2531_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__37___redArg(v_expandedMacroDecls_2529_, v___x_2530_, v___y_2487_, v___y_2488_);
lean_dec(v_expandedMacroDecls_2529_);
if (lean_obj_tag(v___x_2531_) == 0)
{
lean_object* v___x_2532_; lean_object* v_env_2533_; lean_object* v_messages_2534_; lean_object* v_scopes_2535_; lean_object* v_usedQuotCtxts_2536_; lean_object* v_maxRecDepth_2537_; lean_object* v_ngen_2538_; lean_object* v_auxDeclNGen_2539_; lean_object* v_infoState_2540_; lean_object* v_traceState_2541_; lean_object* v_snapshotTasks_2542_; lean_object* v_prevLinterStates_2543_; lean_object* v_codeQualityEntryTasks_2544_; lean_object* v___x_2546_; uint8_t v_isShared_2547_; uint8_t v_isSharedCheck_2570_; 
lean_dec_ref_known(v___x_2531_, 1);
v___x_2532_ = lean_st_ref_take(v___y_2488_);
v_env_2533_ = lean_ctor_get(v___x_2532_, 0);
v_messages_2534_ = lean_ctor_get(v___x_2532_, 1);
v_scopes_2535_ = lean_ctor_get(v___x_2532_, 2);
v_usedQuotCtxts_2536_ = lean_ctor_get(v___x_2532_, 3);
v_maxRecDepth_2537_ = lean_ctor_get(v___x_2532_, 5);
v_ngen_2538_ = lean_ctor_get(v___x_2532_, 6);
v_auxDeclNGen_2539_ = lean_ctor_get(v___x_2532_, 7);
v_infoState_2540_ = lean_ctor_get(v___x_2532_, 8);
v_traceState_2541_ = lean_ctor_get(v___x_2532_, 9);
v_snapshotTasks_2542_ = lean_ctor_get(v___x_2532_, 10);
v_prevLinterStates_2543_ = lean_ctor_get(v___x_2532_, 11);
v_codeQualityEntryTasks_2544_ = lean_ctor_get(v___x_2532_, 12);
v_isSharedCheck_2570_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2570_ == 0)
{
lean_object* v_unused_2571_; 
v_unused_2571_ = lean_ctor_get(v___x_2532_, 4);
lean_dec(v_unused_2571_);
v___x_2546_ = v___x_2532_;
v_isShared_2547_ = v_isSharedCheck_2570_;
goto v_resetjp_2545_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2544_);
lean_inc(v_prevLinterStates_2543_);
lean_inc(v_snapshotTasks_2542_);
lean_inc(v_traceState_2541_);
lean_inc(v_infoState_2540_);
lean_inc(v_auxDeclNGen_2539_);
lean_inc(v_ngen_2538_);
lean_inc(v_maxRecDepth_2537_);
lean_inc(v_usedQuotCtxts_2536_);
lean_inc(v_scopes_2535_);
lean_inc(v_messages_2534_);
lean_inc(v_env_2533_);
lean_dec(v___x_2532_);
v___x_2546_ = lean_box(0);
v_isShared_2547_ = v_isSharedCheck_2570_;
goto v_resetjp_2545_;
}
v_resetjp_2545_:
{
lean_object* v___x_2549_; 
if (v_isShared_2547_ == 0)
{
lean_ctor_set(v___x_2546_, 4, v_macroScope_2527_);
v___x_2549_ = v___x_2546_;
goto v_reusejp_2548_;
}
else
{
lean_object* v_reuseFailAlloc_2569_; 
v_reuseFailAlloc_2569_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2569_, 0, v_env_2533_);
lean_ctor_set(v_reuseFailAlloc_2569_, 1, v_messages_2534_);
lean_ctor_set(v_reuseFailAlloc_2569_, 2, v_scopes_2535_);
lean_ctor_set(v_reuseFailAlloc_2569_, 3, v_usedQuotCtxts_2536_);
lean_ctor_set(v_reuseFailAlloc_2569_, 4, v_macroScope_2527_);
lean_ctor_set(v_reuseFailAlloc_2569_, 5, v_maxRecDepth_2537_);
lean_ctor_set(v_reuseFailAlloc_2569_, 6, v_ngen_2538_);
lean_ctor_set(v_reuseFailAlloc_2569_, 7, v_auxDeclNGen_2539_);
lean_ctor_set(v_reuseFailAlloc_2569_, 8, v_infoState_2540_);
lean_ctor_set(v_reuseFailAlloc_2569_, 9, v_traceState_2541_);
lean_ctor_set(v_reuseFailAlloc_2569_, 10, v_snapshotTasks_2542_);
lean_ctor_set(v_reuseFailAlloc_2569_, 11, v_prevLinterStates_2543_);
lean_ctor_set(v_reuseFailAlloc_2569_, 12, v_codeQualityEntryTasks_2544_);
v___x_2549_ = v_reuseFailAlloc_2569_;
goto v_reusejp_2548_;
}
v_reusejp_2548_:
{
lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; 
v___x_2550_ = lean_st_ref_put(v___y_2488_, v___x_2549_);
v___x_2551_ = l_List_reverse___redArg(v_traceMsgs_2528_);
v___x_2552_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__38(v___x_2551_, v___y_2487_, v___y_2488_);
if (lean_obj_tag(v___x_2552_) == 0)
{
lean_object* v___x_2554_; uint8_t v_isShared_2555_; uint8_t v_isSharedCheck_2559_; 
v_isSharedCheck_2559_ = !lean_is_exclusive(v___x_2552_);
if (v_isSharedCheck_2559_ == 0)
{
lean_object* v_unused_2560_; 
v_unused_2560_ = lean_ctor_get(v___x_2552_, 0);
lean_dec(v_unused_2560_);
v___x_2554_ = v___x_2552_;
v_isShared_2555_ = v_isSharedCheck_2559_;
goto v_resetjp_2553_;
}
else
{
lean_dec(v___x_2552_);
v___x_2554_ = lean_box(0);
v_isShared_2555_ = v_isSharedCheck_2559_;
goto v_resetjp_2553_;
}
v_resetjp_2553_:
{
lean_object* v___x_2557_; 
if (v_isShared_2555_ == 0)
{
lean_ctor_set(v___x_2554_, 0, v_a_2526_);
v___x_2557_ = v___x_2554_;
goto v_reusejp_2556_;
}
else
{
lean_object* v_reuseFailAlloc_2558_; 
v_reuseFailAlloc_2558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2558_, 0, v_a_2526_);
v___x_2557_ = v_reuseFailAlloc_2558_;
goto v_reusejp_2556_;
}
v_reusejp_2556_:
{
return v___x_2557_;
}
}
}
else
{
lean_object* v_a_2561_; lean_object* v___x_2563_; uint8_t v_isShared_2564_; uint8_t v_isSharedCheck_2568_; 
lean_dec(v_a_2526_);
v_a_2561_ = lean_ctor_get(v___x_2552_, 0);
v_isSharedCheck_2568_ = !lean_is_exclusive(v___x_2552_);
if (v_isSharedCheck_2568_ == 0)
{
v___x_2563_ = v___x_2552_;
v_isShared_2564_ = v_isSharedCheck_2568_;
goto v_resetjp_2562_;
}
else
{
lean_inc(v_a_2561_);
lean_dec(v___x_2552_);
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
}
}
else
{
lean_object* v_a_2572_; lean_object* v___x_2574_; uint8_t v_isShared_2575_; uint8_t v_isSharedCheck_2579_; 
lean_dec(v_traceMsgs_2528_);
lean_dec(v_macroScope_2527_);
lean_dec(v_a_2526_);
v_a_2572_ = lean_ctor_get(v___x_2531_, 0);
v_isSharedCheck_2579_ = !lean_is_exclusive(v___x_2531_);
if (v_isSharedCheck_2579_ == 0)
{
v___x_2574_ = v___x_2531_;
v_isShared_2575_ = v_isSharedCheck_2579_;
goto v_resetjp_2573_;
}
else
{
lean_inc(v_a_2572_);
lean_dec(v___x_2531_);
v___x_2574_ = lean_box(0);
v_isShared_2575_ = v_isSharedCheck_2579_;
goto v_resetjp_2573_;
}
v_resetjp_2573_:
{
lean_object* v___x_2577_; 
if (v_isShared_2575_ == 0)
{
v___x_2577_ = v___x_2574_;
goto v_reusejp_2576_;
}
else
{
lean_object* v_reuseFailAlloc_2578_; 
v_reuseFailAlloc_2578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2578_, 0, v_a_2572_);
v___x_2577_ = v_reuseFailAlloc_2578_;
goto v_reusejp_2576_;
}
v_reusejp_2576_:
{
return v___x_2577_;
}
}
}
}
else
{
lean_object* v_a_2580_; 
v_a_2580_ = lean_ctor_get(v___x_2524_, 0);
lean_inc(v_a_2580_);
lean_dec_ref_known(v___x_2524_, 2);
if (lean_obj_tag(v_a_2580_) == 0)
{
lean_object* v_a_2581_; lean_object* v_a_2582_; lean_object* v___x_2583_; uint8_t v___x_2584_; 
v_a_2581_ = lean_ctor_get(v_a_2580_, 0);
lean_inc(v_a_2581_);
v_a_2582_ = lean_ctor_get(v_a_2580_, 1);
lean_inc_ref(v_a_2582_);
lean_dec_ref_known(v_a_2580_, 2);
v___x_2583_ = ((lean_object*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___closed__0));
v___x_2584_ = lean_string_dec_eq(v_a_2582_, v___x_2583_);
if (v___x_2584_ == 0)
{
lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; 
v___x_2585_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2585_, 0, v_a_2582_);
v___x_2586_ = l_Lean_MessageData_ofFormat(v___x_2585_);
v___x_2587_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3___redArg(v_a_2581_, v___x_2586_, v___y_2487_, v___y_2488_);
lean_dec(v_a_2581_);
return v___x_2587_;
}
else
{
lean_object* v___x_2588_; 
lean_dec_ref(v_a_2582_);
v___x_2588_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg(v_a_2581_);
return v___x_2588_;
}
}
else
{
lean_object* v___x_2589_; 
v___x_2589_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg();
return v___x_2589_;
}
}
}
}
else
{
lean_object* v_a_2593_; lean_object* v___x_2595_; uint8_t v_isShared_2596_; uint8_t v_isSharedCheck_2600_; 
lean_dec(v_a_2510_);
lean_dec_ref_known(v_methods_2508_, 5);
lean_dec_ref(v_x_2486_);
v_a_2593_ = lean_ctor_get(v___x_2511_, 0);
v_isSharedCheck_2600_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2600_ == 0)
{
v___x_2595_ = v___x_2511_;
v_isShared_2596_ = v_isSharedCheck_2600_;
goto v_resetjp_2594_;
}
else
{
lean_inc(v_a_2593_);
lean_dec(v___x_2511_);
v___x_2595_ = lean_box(0);
v_isShared_2596_ = v_isSharedCheck_2600_;
goto v_resetjp_2594_;
}
v_resetjp_2594_:
{
lean_object* v___x_2598_; 
if (v_isShared_2596_ == 0)
{
v___x_2598_ = v___x_2595_;
goto v_reusejp_2597_;
}
else
{
lean_object* v_reuseFailAlloc_2599_; 
v_reuseFailAlloc_2599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2599_, 0, v_a_2593_);
v___x_2598_ = v_reuseFailAlloc_2599_;
goto v_reusejp_2597_;
}
v_reusejp_2597_:
{
return v___x_2598_;
}
}
}
}
else
{
lean_object* v_a_2601_; lean_object* v___x_2603_; uint8_t v_isShared_2604_; uint8_t v_isSharedCheck_2608_; 
lean_dec_ref_known(v_methods_2508_, 5);
lean_dec_ref(v_x_2486_);
v_a_2601_ = lean_ctor_get(v___x_2509_, 0);
v_isSharedCheck_2608_ = !lean_is_exclusive(v___x_2509_);
if (v_isSharedCheck_2608_ == 0)
{
v___x_2603_ = v___x_2509_;
v_isShared_2604_ = v_isSharedCheck_2608_;
goto v_resetjp_2602_;
}
else
{
lean_inc(v_a_2601_);
lean_dec(v___x_2509_);
v___x_2603_ = lean_box(0);
v_isShared_2604_ = v_isSharedCheck_2608_;
goto v_resetjp_2602_;
}
v_resetjp_2602_:
{
lean_object* v___x_2606_; 
if (v_isShared_2604_ == 0)
{
v___x_2606_ = v___x_2603_;
goto v_reusejp_2605_;
}
else
{
lean_object* v_reuseFailAlloc_2607_; 
v_reuseFailAlloc_2607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2607_, 0, v_a_2601_);
v___x_2606_ = v_reuseFailAlloc_2607_;
goto v_reusejp_2605_;
}
v_reusejp_2605_:
{
return v___x_2606_;
}
}
}
}
else
{
lean_object* v_a_2609_; lean_object* v___x_2611_; uint8_t v_isShared_2612_; uint8_t v_isSharedCheck_2616_; 
lean_dec_ref(v___f_2502_);
lean_dec(v_currNamespace_2501_);
lean_dec_ref(v_opts_2498_);
lean_dec_ref(v___f_2493_);
lean_dec_ref(v___f_2492_);
lean_dec_ref(v_env_2491_);
lean_dec_ref(v_x_2486_);
v_a_2609_ = lean_ctor_get(v___x_2503_, 0);
v_isSharedCheck_2616_ = !lean_is_exclusive(v___x_2503_);
if (v_isSharedCheck_2616_ == 0)
{
v___x_2611_ = v___x_2503_;
v_isShared_2612_ = v_isSharedCheck_2616_;
goto v_resetjp_2610_;
}
else
{
lean_inc(v_a_2609_);
lean_dec(v___x_2503_);
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
}
else
{
lean_object* v_a_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_2624_; 
lean_dec_ref(v_opts_2498_);
lean_dec_ref(v___f_2493_);
lean_dec_ref(v___f_2492_);
lean_dec_ref(v_env_2491_);
lean_dec_ref(v_x_2486_);
v_a_2617_ = lean_ctor_get(v___x_2499_, 0);
v_isSharedCheck_2624_ = !lean_is_exclusive(v___x_2499_);
if (v_isSharedCheck_2624_ == 0)
{
v___x_2619_ = v___x_2499_;
v_isShared_2620_ = v_isSharedCheck_2624_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_a_2617_);
lean_dec(v___x_2499_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg___boxed(lean_object* v_x_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_){
_start:
{
lean_object* v_res_2629_; 
v_res_2629_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg(v_x_2625_, v___y_2626_, v___y_2627_);
lean_dec(v___y_2627_);
lean_dec_ref(v___y_2626_);
return v_res_2629_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2631_; lean_object* v___x_2632_; 
v___x_2631_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__0));
v___x_2632_ = l_Lean_stringToMessageData(v___x_2631_);
return v___x_2632_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__3(void){
_start:
{
lean_object* v___x_2634_; lean_object* v___x_2635_; 
v___x_2634_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__2));
v___x_2635_ = l_Lean_stringToMessageData(v___x_2634_);
return v___x_2635_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__5(void){
_start:
{
lean_object* v___x_2637_; lean_object* v___x_2638_; 
v___x_2637_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__4));
v___x_2638_ = l_Lean_stringToMessageData(v___x_2637_);
return v___x_2638_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__7(void){
_start:
{
lean_object* v___x_2640_; lean_object* v___x_2641_; 
v___x_2640_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__6));
v___x_2641_ = l_Lean_stringToMessageData(v___x_2640_);
return v___x_2641_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__9(void){
_start:
{
lean_object* v___x_2643_; lean_object* v___x_2644_; 
v___x_2643_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__8));
v___x_2644_ = l_Lean_stringToMessageData(v___x_2643_);
return v___x_2644_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__11(void){
_start:
{
lean_object* v___x_2646_; lean_object* v___x_2647_; 
v___x_2646_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__10));
v___x_2647_ = l_Lean_stringToMessageData(v___x_2646_);
return v___x_2647_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__16(void){
_start:
{
lean_object* v___x_2656_; lean_object* v___x_2657_; 
v___x_2656_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__15));
v___x_2657_ = l_Lean_stringToMessageData(v___x_2656_);
return v___x_2657_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1(lean_object* v___x_2658_, lean_object* v_attrInstance_2659_, lean_object* v___f_2660_, lean_object* v___x_2661_, lean_object* v___x_2662_, lean_object* v___x_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_){
_start:
{
lean_object* v___x_2667_; 
v___x_2667_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg(v___x_2658_, v___y_2664_, v___y_2665_);
if (lean_obj_tag(v___x_2667_) == 0)
{
lean_object* v_a_2668_; lean_object* v___x_2669_; lean_object* v_attr_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; 
v_a_2668_ = lean_ctor_get(v___x_2667_, 0);
lean_inc(v_a_2668_);
lean_dec_ref_known(v___x_2667_, 1);
v___x_2669_ = lean_unsigned_to_nat(1u);
v_attr_2670_ = l_Lean_Syntax_getArg(v_attrInstance_2659_, v___x_2669_);
v___x_2671_ = lean_alloc_closure((void*)(l_Lean_expandMacros), 4, 2);
lean_closure_set(v___x_2671_, 0, v_attr_2670_);
lean_closure_set(v___x_2671_, 1, v___f_2660_);
v___x_2672_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg(v___x_2671_, v___y_2664_, v___y_2665_);
if (lean_obj_tag(v___x_2672_) == 0)
{
lean_object* v_a_2673_; lean_object* v___x_2675_; uint8_t v_isShared_2676_; uint8_t v_isSharedCheck_2778_; 
v_a_2673_ = lean_ctor_get(v___x_2672_, 0);
v_isSharedCheck_2778_ = !lean_is_exclusive(v___x_2672_);
if (v_isSharedCheck_2778_ == 0)
{
v___x_2675_ = v___x_2672_;
v_isShared_2676_ = v_isSharedCheck_2778_;
goto v_resetjp_2674_;
}
else
{
lean_inc(v_a_2673_);
lean_dec(v___x_2672_);
v___x_2675_ = lean_box(0);
v_isShared_2676_ = v_isSharedCheck_2778_;
goto v_resetjp_2674_;
}
v_resetjp_2674_:
{
lean_object* v___y_2678_; lean_object* v___y_2685_; lean_object* v___y_2686_; uint8_t v___y_2687_; lean_object* v___y_2688_; lean_object* v___y_2689_; lean_object* v_attrName_2700_; lean_object* v___y_2701_; lean_object* v___y_2702_; lean_object* v___x_2759_; lean_object* v___x_2760_; uint8_t v___x_2761_; 
lean_inc(v_a_2673_);
v___x_2759_ = l_Lean_Syntax_getKind(v_a_2673_);
v___x_2760_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__14));
v___x_2761_ = lean_name_eq(v___x_2759_, v___x_2760_);
if (v___x_2761_ == 0)
{
if (lean_obj_tag(v___x_2759_) == 1)
{
lean_object* v_str_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; 
v_str_2762_ = lean_ctor_get(v___x_2759_, 1);
lean_inc_ref(v_str_2762_);
lean_dec_ref_known(v___x_2759_, 2);
v___x_2763_ = lean_box(0);
v___x_2764_ = l_Lean_Name_str___override(v___x_2763_, v_str_2762_);
v_attrName_2700_ = v___x_2764_;
v___y_2701_ = v___y_2664_;
v___y_2702_ = v___y_2665_;
goto v___jp_2699_;
}
else
{
lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v_a_2767_; lean_object* v___x_2769_; uint8_t v_isShared_2770_; uint8_t v_isSharedCheck_2774_; 
lean_dec(v___x_2759_);
lean_del_object(v___x_2675_);
lean_dec(v_a_2668_);
lean_dec(v___x_2661_);
v___x_2765_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__16, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__16_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__16);
v___x_2766_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3___redArg(v_a_2673_, v___x_2765_, v___y_2664_, v___y_2665_);
lean_dec(v_a_2673_);
v_a_2767_ = lean_ctor_get(v___x_2766_, 0);
v_isSharedCheck_2774_ = !lean_is_exclusive(v___x_2766_);
if (v_isSharedCheck_2774_ == 0)
{
v___x_2769_ = v___x_2766_;
v_isShared_2770_ = v_isSharedCheck_2774_;
goto v_resetjp_2768_;
}
else
{
lean_inc(v_a_2767_);
lean_dec(v___x_2766_);
v___x_2769_ = lean_box(0);
v_isShared_2770_ = v_isSharedCheck_2774_;
goto v_resetjp_2768_;
}
v_resetjp_2768_:
{
lean_object* v___x_2772_; 
if (v_isShared_2770_ == 0)
{
v___x_2772_ = v___x_2769_;
goto v_reusejp_2771_;
}
else
{
lean_object* v_reuseFailAlloc_2773_; 
v_reuseFailAlloc_2773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2773_, 0, v_a_2767_);
v___x_2772_ = v_reuseFailAlloc_2773_;
goto v_reusejp_2771_;
}
v_reusejp_2771_:
{
return v___x_2772_;
}
}
}
}
else
{
lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; 
lean_dec(v___x_2759_);
v___x_2775_ = l_Lean_Syntax_getArg(v_a_2673_, v___x_2663_);
v___x_2776_ = l_Lean_Syntax_getId(v___x_2775_);
lean_dec(v___x_2775_);
v___x_2777_ = l_Lean_Name_eraseMacroScopes(v___x_2776_);
lean_dec(v___x_2776_);
v_attrName_2700_ = v___x_2777_;
v___y_2701_ = v___y_2664_;
v___y_2702_ = v___y_2665_;
goto v___jp_2699_;
}
v___jp_2677_:
{
lean_object* v___x_2679_; uint8_t v___x_2680_; lean_object* v___x_2682_; 
v___x_2679_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2679_, 0, v___y_2678_);
lean_ctor_set(v___x_2679_, 1, v_a_2673_);
v___x_2680_ = lean_unbox(v_a_2668_);
lean_dec(v_a_2668_);
lean_ctor_set_uint8(v___x_2679_, sizeof(void*)*2, v___x_2680_);
if (v_isShared_2676_ == 0)
{
lean_ctor_set(v___x_2675_, 0, v___x_2679_);
v___x_2682_ = v___x_2675_;
goto v_reusejp_2681_;
}
else
{
lean_object* v_reuseFailAlloc_2683_; 
v_reuseFailAlloc_2683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2683_, 0, v___x_2679_);
v___x_2682_ = v_reuseFailAlloc_2683_;
goto v_reusejp_2681_;
}
v_reusejp_2681_:
{
return v___x_2682_;
}
}
v___jp_2684_:
{
lean_object* v___x_2690_; 
v___x_2690_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32(v___y_2686_, v___y_2687_, v___y_2688_, v___y_2689_);
if (lean_obj_tag(v___x_2690_) == 0)
{
lean_dec_ref_known(v___x_2690_, 1);
v___y_2678_ = v___y_2685_;
goto v___jp_2677_;
}
else
{
lean_object* v_a_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2698_; 
lean_dec(v___y_2685_);
lean_del_object(v___x_2675_);
lean_dec(v_a_2673_);
lean_dec(v_a_2668_);
v_a_2691_ = lean_ctor_get(v___x_2690_, 0);
v_isSharedCheck_2698_ = !lean_is_exclusive(v___x_2690_);
if (v_isSharedCheck_2698_ == 0)
{
v___x_2693_ = v___x_2690_;
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
else
{
lean_inc(v_a_2691_);
lean_dec(v___x_2690_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
lean_object* v___x_2696_; 
if (v_isShared_2694_ == 0)
{
v___x_2696_ = v___x_2693_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2697_; 
v_reuseFailAlloc_2697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2697_, 0, v_a_2691_);
v___x_2696_ = v_reuseFailAlloc_2697_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
return v___x_2696_;
}
}
}
}
v___jp_2699_:
{
lean_object* v___x_2703_; lean_object* v_env_2704_; lean_object* v___x_2705_; 
v___x_2703_ = lean_st_ref_get(v___y_2702_);
v_env_2704_ = lean_ctor_get(v___x_2703_, 0);
lean_inc_ref(v_env_2704_);
lean_dec(v___x_2703_);
lean_inc(v_attrName_2700_);
v___x_2705_ = l_Lean_getAttributeImpl(v_env_2704_, v_attrName_2700_);
if (lean_obj_tag(v___x_2705_) == 1)
{
lean_object* v___x_2706_; lean_object* v_env_2707_; lean_object* v___x_2708_; 
lean_dec_ref_known(v___x_2705_, 1);
v___x_2706_ = lean_st_ref_get(v___y_2702_);
v_env_2707_ = lean_ctor_get(v___x_2706_, 0);
lean_inc_ref(v_env_2707_);
lean_dec(v___x_2706_);
lean_inc(v_attrName_2700_);
v___x_2708_ = l_Lean_getAttributeImpl(v_env_2707_, v_attrName_2700_);
if (lean_obj_tag(v___x_2708_) == 1)
{
lean_object* v_a_2709_; lean_object* v___x_2710_; lean_object* v_toAttributeImplCore_2711_; lean_object* v_env_2712_; lean_object* v_ref_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; 
v_a_2709_ = lean_ctor_get(v___x_2708_, 0);
lean_inc(v_a_2709_);
lean_dec_ref_known(v___x_2708_, 1);
v___x_2710_ = lean_st_ref_get(v___y_2702_);
v_toAttributeImplCore_2711_ = lean_ctor_get(v_a_2709_, 0);
lean_inc_ref(v_toAttributeImplCore_2711_);
lean_dec(v_a_2709_);
v_env_2712_ = lean_ctor_get(v___x_2710_, 0);
lean_inc_ref(v_env_2712_);
lean_dec(v___x_2710_);
v_ref_2713_ = lean_ctor_get(v_toAttributeImplCore_2711_, 0);
lean_inc_n(v_ref_2713_, 2);
lean_dec_ref(v_toAttributeImplCore_2711_);
v___x_2714_ = l_Lean_regularInitAttr;
v___x_2715_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v___x_2661_, v___x_2714_, v_env_2712_, v_ref_2713_);
if (lean_obj_tag(v___x_2715_) == 0)
{
lean_dec(v_ref_2713_);
v___y_2678_ = v_attrName_2700_;
goto v___jp_2677_;
}
else
{
uint8_t v___x_2716_; lean_object* v___x_2717_; lean_object* v_env_2718_; lean_object* v___x_2719_; 
lean_dec_ref_known(v___x_2715_, 1);
v___x_2716_ = 1;
v___x_2717_ = lean_st_ref_get(v___y_2702_);
v_env_2718_ = lean_ctor_get(v___x_2717_, 0);
lean_inc_ref(v_env_2718_);
lean_dec(v___x_2717_);
v___x_2719_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2718_, v_ref_2713_);
lean_dec_ref(v_env_2718_);
if (lean_obj_tag(v___x_2719_) == 1)
{
lean_object* v_val_2720_; lean_object* v___x_2721_; lean_object* v_env_2722_; lean_object* v___x_2723_; lean_object* v_modules_2724_; lean_object* v___x_2725_; uint8_t v___x_2726_; 
v_val_2720_ = lean_ctor_get(v___x_2719_, 0);
lean_inc(v_val_2720_);
lean_dec_ref_known(v___x_2719_, 1);
v___x_2721_ = lean_st_ref_get(v___y_2702_);
v_env_2722_ = lean_ctor_get(v___x_2721_, 0);
lean_inc_ref(v_env_2722_);
lean_dec(v___x_2721_);
v___x_2723_ = l_Lean_Environment_header(v_env_2722_);
lean_dec_ref(v_env_2722_);
v_modules_2724_ = lean_ctor_get(v___x_2723_, 3);
lean_inc_ref(v_modules_2724_);
lean_dec_ref(v___x_2723_);
v___x_2725_ = lean_array_get_size(v_modules_2724_);
v___x_2726_ = lean_nat_dec_lt(v_val_2720_, v___x_2725_);
if (v___x_2726_ == 0)
{
lean_dec_ref(v_modules_2724_);
lean_dec(v_val_2720_);
v___y_2685_ = v_attrName_2700_;
v___y_2686_ = v_ref_2713_;
v___y_2687_ = v___x_2716_;
v___y_2688_ = v___y_2701_;
v___y_2689_ = v___y_2702_;
goto v___jp_2684_;
}
else
{
lean_object* v___x_2727_; uint8_t v_hasData_2728_; 
v___x_2727_ = lean_array_fget_borrowed(v_modules_2724_, v_val_2720_);
v_hasData_2728_ = lean_ctor_get_uint8(v___x_2727_, sizeof(void*)*1 + 1);
if (v_hasData_2728_ == 0)
{
lean_object* v___x_2729_; lean_object* v_toImport_2730_; lean_object* v_module_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v_a_2745_; lean_object* v___x_2747_; uint8_t v_isShared_2748_; uint8_t v_isSharedCheck_2752_; 
lean_dec(v_ref_2713_);
lean_del_object(v___x_2675_);
lean_dec(v_a_2673_);
lean_dec(v_a_2668_);
v___x_2729_ = lean_array_get(v___x_2662_, v_modules_2724_, v_val_2720_);
lean_dec(v_val_2720_);
lean_dec_ref(v_modules_2724_);
v_toImport_2730_ = lean_ctor_get(v___x_2729_, 0);
lean_inc_ref(v_toImport_2730_);
lean_dec(v___x_2729_);
v_module_2731_ = lean_ctor_get(v_toImport_2730_, 0);
lean_inc(v_module_2731_);
lean_dec_ref(v_toImport_2730_);
v___x_2732_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__1, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__1_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__1);
v___x_2733_ = l_Lean_MessageData_ofName(v_attrName_2700_);
v___x_2734_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2734_, 0, v___x_2732_);
lean_ctor_set(v___x_2734_, 1, v___x_2733_);
v___x_2735_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__3, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__3_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__3);
v___x_2736_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2736_, 0, v___x_2734_);
lean_ctor_set(v___x_2736_, 1, v___x_2735_);
v___x_2737_ = l_Lean_MessageData_ofName(v_module_2731_);
lean_inc_ref(v___x_2737_);
v___x_2738_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2738_, 0, v___x_2736_);
lean_ctor_set(v___x_2738_, 1, v___x_2737_);
v___x_2739_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__5, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__5_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__5);
v___x_2740_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2740_, 0, v___x_2738_);
lean_ctor_set(v___x_2740_, 1, v___x_2739_);
v___x_2741_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2741_, 0, v___x_2740_);
lean_ctor_set(v___x_2741_, 1, v___x_2737_);
v___x_2742_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__7, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__7_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__7);
v___x_2743_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2743_, 0, v___x_2741_);
lean_ctor_set(v___x_2743_, 1, v___x_2742_);
v___x_2744_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14___redArg(v___x_2743_, v___y_2701_, v___y_2702_);
v_a_2745_ = lean_ctor_get(v___x_2744_, 0);
v_isSharedCheck_2752_ = !lean_is_exclusive(v___x_2744_);
if (v_isSharedCheck_2752_ == 0)
{
v___x_2747_ = v___x_2744_;
v_isShared_2748_ = v_isSharedCheck_2752_;
goto v_resetjp_2746_;
}
else
{
lean_inc(v_a_2745_);
lean_dec(v___x_2744_);
v___x_2747_ = lean_box(0);
v_isShared_2748_ = v_isSharedCheck_2752_;
goto v_resetjp_2746_;
}
v_resetjp_2746_:
{
lean_object* v___x_2750_; 
if (v_isShared_2748_ == 0)
{
v___x_2750_ = v___x_2747_;
goto v_reusejp_2749_;
}
else
{
lean_object* v_reuseFailAlloc_2751_; 
v_reuseFailAlloc_2751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2751_, 0, v_a_2745_);
v___x_2750_ = v_reuseFailAlloc_2751_;
goto v_reusejp_2749_;
}
v_reusejp_2749_:
{
return v___x_2750_;
}
}
}
else
{
lean_dec_ref(v_modules_2724_);
lean_dec(v_val_2720_);
v___y_2685_ = v_attrName_2700_;
v___y_2686_ = v_ref_2713_;
v___y_2687_ = v___x_2716_;
v___y_2688_ = v___y_2701_;
v___y_2689_ = v___y_2702_;
goto v___jp_2684_;
}
}
}
else
{
lean_dec(v___x_2719_);
v___y_2685_ = v_attrName_2700_;
v___y_2686_ = v_ref_2713_;
v___y_2687_ = v___x_2716_;
v___y_2688_ = v___y_2701_;
v___y_2689_ = v___y_2702_;
goto v___jp_2684_;
}
}
}
else
{
lean_dec_ref(v___x_2708_);
lean_dec(v___x_2661_);
v___y_2678_ = v_attrName_2700_;
goto v___jp_2677_;
}
}
else
{
lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; 
lean_dec_ref(v___x_2705_);
lean_del_object(v___x_2675_);
lean_dec(v_a_2673_);
lean_dec(v_a_2668_);
lean_dec(v___x_2661_);
v___x_2753_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__9, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__9_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__9);
v___x_2754_ = l_Lean_MessageData_ofName(v_attrName_2700_);
v___x_2755_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2755_, 0, v___x_2753_);
lean_ctor_set(v___x_2755_, 1, v___x_2754_);
v___x_2756_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__11, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__11_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__11);
v___x_2757_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2757_, 0, v___x_2755_);
lean_ctor_set(v___x_2757_, 1, v___x_2756_);
v___x_2758_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14___redArg(v___x_2757_, v___y_2701_, v___y_2702_);
return v___x_2758_;
}
}
}
}
else
{
lean_object* v_a_2779_; lean_object* v___x_2781_; uint8_t v_isShared_2782_; uint8_t v_isSharedCheck_2786_; 
lean_dec(v_a_2668_);
lean_dec(v___x_2661_);
v_a_2779_ = lean_ctor_get(v___x_2672_, 0);
v_isSharedCheck_2786_ = !lean_is_exclusive(v___x_2672_);
if (v_isSharedCheck_2786_ == 0)
{
v___x_2781_ = v___x_2672_;
v_isShared_2782_ = v_isSharedCheck_2786_;
goto v_resetjp_2780_;
}
else
{
lean_inc(v_a_2779_);
lean_dec(v___x_2672_);
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
else
{
lean_object* v_a_2787_; lean_object* v___x_2789_; uint8_t v_isShared_2790_; uint8_t v_isSharedCheck_2794_; 
lean_dec(v___x_2661_);
lean_dec_ref(v___f_2660_);
v_a_2787_ = lean_ctor_get(v___x_2667_, 0);
v_isSharedCheck_2794_ = !lean_is_exclusive(v___x_2667_);
if (v_isSharedCheck_2794_ == 0)
{
v___x_2789_ = v___x_2667_;
v_isShared_2790_ = v_isSharedCheck_2794_;
goto v_resetjp_2788_;
}
else
{
lean_inc(v_a_2787_);
lean_dec(v___x_2667_);
v___x_2789_ = lean_box(0);
v_isShared_2790_ = v_isSharedCheck_2794_;
goto v_resetjp_2788_;
}
v_resetjp_2788_:
{
lean_object* v___x_2792_; 
if (v_isShared_2790_ == 0)
{
v___x_2792_ = v___x_2789_;
goto v_reusejp_2791_;
}
else
{
lean_object* v_reuseFailAlloc_2793_; 
v_reuseFailAlloc_2793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2793_, 0, v_a_2787_);
v___x_2792_ = v_reuseFailAlloc_2793_;
goto v_reusejp_2791_;
}
v_reusejp_2791_:
{
return v___x_2792_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___boxed(lean_object* v___x_2795_, lean_object* v_attrInstance_2796_, lean_object* v___f_2797_, lean_object* v___x_2798_, lean_object* v___x_2799_, lean_object* v___x_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_){
_start:
{
lean_object* v_res_2804_; 
v_res_2804_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1(v___x_2795_, v_attrInstance_2796_, v___f_2797_, v___x_2798_, v___x_2799_, v___x_2800_, v___y_2801_, v___y_2802_);
lean_dec(v___y_2802_);
lean_dec_ref(v___y_2801_);
lean_dec(v___x_2800_);
lean_dec_ref(v___x_2799_);
lean_dec(v_attrInstance_2796_);
return v_res_2804_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21(lean_object* v_attrInstance_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_){
_start:
{
lean_object* v___f_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___f_2816_; uint8_t v___x_2817_; lean_object* v___x_2818_; 
v___f_2810_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___closed__0));
v___x_2811_ = lean_box(0);
v___x_2812_ = l_Lean_instInhabitedEffectiveImport_default;
v___x_2813_ = lean_unsigned_to_nat(0u);
v___x_2814_ = l_Lean_Syntax_getArg(v_attrInstance_2806_, v___x_2813_);
v___x_2815_ = lean_alloc_closure((void*)(l_Lean_Elab_toAttributeKind___boxed), 3, 1);
lean_closure_set(v___x_2815_, 0, v___x_2814_);
v___f_2816_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___boxed), 9, 6);
lean_closure_set(v___f_2816_, 0, v___x_2815_);
lean_closure_set(v___f_2816_, 1, v_attrInstance_2806_);
lean_closure_set(v___f_2816_, 2, v___f_2810_);
lean_closure_set(v___f_2816_, 3, v___x_2811_);
lean_closure_set(v___f_2816_, 4, v___x_2812_);
lean_closure_set(v___f_2816_, 5, v___x_2813_);
v___x_2817_ = 1;
v___x_2818_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33___redArg(v___f_2816_, v___x_2817_, v___y_2807_, v___y_2808_);
return v___x_2818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___boxed(lean_object* v_attrInstance_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_){
_start:
{
lean_object* v_res_2823_; 
v_res_2823_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21(v_attrInstance_2819_, v___y_2820_, v___y_2821_);
lean_dec(v___y_2821_);
lean_dec_ref(v___y_2820_);
return v_res_2823_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__22(lean_object* v_as_2824_, size_t v_sz_2825_, size_t v_i_2826_, lean_object* v_b_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_){
_start:
{
lean_object* v_snd_2832_; lean_object* v_a_2837_; uint8_t v___x_2849_; 
v___x_2849_ = lean_usize_dec_lt(v_i_2826_, v_sz_2825_);
if (v___x_2849_ == 0)
{
lean_object* v___x_2850_; 
v___x_2850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2850_, 0, v_b_2827_);
return v___x_2850_;
}
else
{
lean_object* v_a_2851_; lean_object* v___x_2852_; 
v_a_2851_ = lean_array_uget_borrowed(v_as_2824_, v_i_2826_);
v___x_2852_ = l_Lean_Elab_Command_getRef___redArg(v___y_2828_);
if (lean_obj_tag(v___x_2852_) == 0)
{
lean_object* v_a_2853_; lean_object* v_fileName_2854_; lean_object* v_fileMap_2855_; lean_object* v_currRecDepth_2856_; lean_object* v_cmdPos_2857_; lean_object* v_macroStack_2858_; lean_object* v_quotContext_x3f_2859_; lean_object* v_currMacroScope_2860_; lean_object* v_snap_x3f_2861_; lean_object* v_cancelTk_x3f_2862_; uint8_t v_suppressElabErrors_2863_; lean_object* v_ref_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; 
v_a_2853_ = lean_ctor_get(v___x_2852_, 0);
lean_inc(v_a_2853_);
lean_dec_ref_known(v___x_2852_, 1);
v_fileName_2854_ = lean_ctor_get(v___y_2828_, 0);
v_fileMap_2855_ = lean_ctor_get(v___y_2828_, 1);
v_currRecDepth_2856_ = lean_ctor_get(v___y_2828_, 2);
v_cmdPos_2857_ = lean_ctor_get(v___y_2828_, 3);
v_macroStack_2858_ = lean_ctor_get(v___y_2828_, 4);
v_quotContext_x3f_2859_ = lean_ctor_get(v___y_2828_, 5);
v_currMacroScope_2860_ = lean_ctor_get(v___y_2828_, 6);
v_snap_x3f_2861_ = lean_ctor_get(v___y_2828_, 8);
v_cancelTk_x3f_2862_ = lean_ctor_get(v___y_2828_, 9);
v_suppressElabErrors_2863_ = lean_ctor_get_uint8(v___y_2828_, sizeof(void*)*10);
v_ref_2864_ = l_Lean_replaceRef(v_a_2851_, v_a_2853_);
lean_dec(v_a_2853_);
lean_inc(v_cancelTk_x3f_2862_);
lean_inc(v_snap_x3f_2861_);
lean_inc(v_currMacroScope_2860_);
lean_inc(v_quotContext_x3f_2859_);
lean_inc(v_macroStack_2858_);
lean_inc(v_cmdPos_2857_);
lean_inc(v_currRecDepth_2856_);
lean_inc_ref(v_fileMap_2855_);
lean_inc_ref(v_fileName_2854_);
v___x_2865_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_2865_, 0, v_fileName_2854_);
lean_ctor_set(v___x_2865_, 1, v_fileMap_2855_);
lean_ctor_set(v___x_2865_, 2, v_currRecDepth_2856_);
lean_ctor_set(v___x_2865_, 3, v_cmdPos_2857_);
lean_ctor_set(v___x_2865_, 4, v_macroStack_2858_);
lean_ctor_set(v___x_2865_, 5, v_quotContext_x3f_2859_);
lean_ctor_set(v___x_2865_, 6, v_currMacroScope_2860_);
lean_ctor_set(v___x_2865_, 7, v_ref_2864_);
lean_ctor_set(v___x_2865_, 8, v_snap_x3f_2861_);
lean_ctor_set(v___x_2865_, 9, v_cancelTk_x3f_2862_);
lean_ctor_set_uint8(v___x_2865_, sizeof(void*)*10, v_suppressElabErrors_2863_);
lean_inc(v_a_2851_);
v___x_2866_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21(v_a_2851_, v___x_2865_, v___y_2829_);
lean_dec_ref_known(v___x_2865_, 10);
if (lean_obj_tag(v___x_2866_) == 0)
{
lean_object* v_a_2867_; lean_object* v___x_2868_; 
v_a_2867_ = lean_ctor_get(v___x_2866_, 0);
lean_inc(v_a_2867_);
lean_dec_ref_known(v___x_2866_, 1);
v___x_2868_ = lean_array_push(v_b_2827_, v_a_2867_);
v_snd_2832_ = v___x_2868_;
goto v___jp_2831_;
}
else
{
lean_object* v_a_2869_; 
v_a_2869_ = lean_ctor_get(v___x_2866_, 0);
lean_inc(v_a_2869_);
lean_dec_ref_known(v___x_2866_, 1);
v_a_2837_ = v_a_2869_;
goto v___jp_2836_;
}
}
else
{
lean_object* v_a_2870_; 
v_a_2870_ = lean_ctor_get(v___x_2852_, 0);
lean_inc(v_a_2870_);
lean_dec_ref_known(v___x_2852_, 1);
v_a_2837_ = v_a_2870_;
goto v___jp_2836_;
}
}
v___jp_2831_:
{
size_t v___x_2833_; size_t v___x_2834_; 
v___x_2833_ = ((size_t)1ULL);
v___x_2834_ = lean_usize_add(v_i_2826_, v___x_2833_);
v_i_2826_ = v___x_2834_;
v_b_2827_ = v_snd_2832_;
goto _start;
}
v___jp_2836_:
{
uint8_t v___x_2838_; 
v___x_2838_ = l_Lean_Exception_isInterrupt(v_a_2837_);
if (v___x_2838_ == 0)
{
lean_object* v___x_2839_; 
v___x_2839_ = l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__20(v_a_2837_, v___y_2828_, v___y_2829_);
if (lean_obj_tag(v___x_2839_) == 0)
{
lean_dec_ref_known(v___x_2839_, 1);
v_snd_2832_ = v_b_2827_;
goto v___jp_2831_;
}
else
{
lean_object* v_a_2840_; lean_object* v___x_2842_; uint8_t v_isShared_2843_; uint8_t v_isSharedCheck_2847_; 
lean_dec_ref(v_b_2827_);
v_a_2840_ = lean_ctor_get(v___x_2839_, 0);
v_isSharedCheck_2847_ = !lean_is_exclusive(v___x_2839_);
if (v_isSharedCheck_2847_ == 0)
{
v___x_2842_ = v___x_2839_;
v_isShared_2843_ = v_isSharedCheck_2847_;
goto v_resetjp_2841_;
}
else
{
lean_inc(v_a_2840_);
lean_dec(v___x_2839_);
v___x_2842_ = lean_box(0);
v_isShared_2843_ = v_isSharedCheck_2847_;
goto v_resetjp_2841_;
}
v_resetjp_2841_:
{
lean_object* v___x_2845_; 
if (v_isShared_2843_ == 0)
{
v___x_2845_ = v___x_2842_;
goto v_reusejp_2844_;
}
else
{
lean_object* v_reuseFailAlloc_2846_; 
v_reuseFailAlloc_2846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2846_, 0, v_a_2840_);
v___x_2845_ = v_reuseFailAlloc_2846_;
goto v_reusejp_2844_;
}
v_reusejp_2844_:
{
return v___x_2845_;
}
}
}
}
else
{
lean_object* v___x_2848_; 
lean_dec_ref(v_b_2827_);
v___x_2848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2848_, 0, v_a_2837_);
return v___x_2848_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__22___boxed(lean_object* v_as_2871_, lean_object* v_sz_2872_, lean_object* v_i_2873_, lean_object* v_b_2874_, lean_object* v___y_2875_, lean_object* v___y_2876_, lean_object* v___y_2877_){
_start:
{
size_t v_sz_boxed_2878_; size_t v_i_boxed_2879_; lean_object* v_res_2880_; 
v_sz_boxed_2878_ = lean_unbox_usize(v_sz_2872_);
lean_dec(v_sz_2872_);
v_i_boxed_2879_ = lean_unbox_usize(v_i_2873_);
lean_dec(v_i_2873_);
v_res_2880_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__22(v_as_2871_, v_sz_boxed_2878_, v_i_boxed_2879_, v_b_2874_, v___y_2875_, v___y_2876_);
lean_dec(v___y_2876_);
lean_dec_ref(v___y_2875_);
lean_dec_ref(v_as_2871_);
return v_res_2880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6(lean_object* v_attrInstances_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_){
_start:
{
lean_object* v_attrs_2887_; size_t v_sz_2888_; size_t v___x_2889_; lean_object* v___x_2890_; 
v_attrs_2887_ = ((lean_object*)(l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6___closed__0));
v_sz_2888_ = lean_array_size(v_attrInstances_2883_);
v___x_2889_ = ((size_t)0ULL);
v___x_2890_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__22(v_attrInstances_2883_, v_sz_2888_, v___x_2889_, v_attrs_2887_, v___y_2884_, v___y_2885_);
return v___x_2890_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6___boxed(lean_object* v_attrInstances_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_, lean_object* v___y_2894_){
_start:
{
lean_object* v_res_2895_; 
v_res_2895_ = l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6(v_attrInstances_2891_, v___y_2892_, v___y_2893_);
lean_dec(v___y_2893_);
lean_dec_ref(v___y_2892_);
lean_dec_ref(v_attrInstances_2891_);
return v_res_2895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2(lean_object* v_stx_2896_, lean_object* v___y_2897_, lean_object* v___y_2898_){
_start:
{
lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; 
v___x_2900_ = lean_unsigned_to_nat(1u);
v___x_2901_ = l_Lean_Syntax_getArg(v_stx_2896_, v___x_2900_);
v___x_2902_ = l_Lean_Syntax_getSepArgs(v___x_2901_);
lean_dec(v___x_2901_);
v___x_2903_ = l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6(v___x_2902_, v___y_2897_, v___y_2898_);
lean_dec_ref(v___x_2902_);
return v___x_2903_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2___boxed(lean_object* v_stx_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_){
_start:
{
lean_object* v_res_2908_; 
v_res_2908_ = l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2(v_stx_2904_, v___y_2905_, v___y_2906_);
lean_dec(v___y_2906_);
lean_dec_ref(v___y_2905_);
lean_dec(v_stx_2904_);
return v_res_2908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1(lean_object* v_stx_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_){
_start:
{
uint8_t v___y_2925_; uint8_t v___y_2926_; uint8_t v___y_2927_; uint8_t v___y_2928_; lean_object* v___y_2929_; lean_object* v___y_2930_; uint8_t v___y_2931_; lean_object* v___y_2935_; uint8_t v___y_2936_; uint8_t v___y_2937_; uint8_t v___y_2938_; uint8_t v___y_2939_; lean_object* v___y_2940_; lean_object* v_attrs_2941_; lean_object* v___x_2945_; lean_object* v_docCommentStx_2946_; lean_object* v___x_2947_; lean_object* v_attrsStx_2948_; uint8_t v___y_2950_; lean_object* v___y_2951_; uint8_t v___y_2952_; uint8_t v___y_2953_; lean_object* v___y_2954_; uint8_t v___y_2955_; lean_object* v___x_2969_; lean_object* v_visibilityStx_2970_; lean_object* v___x_2971_; lean_object* v_protectedStx_2972_; lean_object* v___y_2974_; uint8_t v___y_2975_; uint8_t v___y_2976_; lean_object* v___y_2977_; lean_object* v___y_2978_; uint8_t v___y_2995_; lean_object* v___y_2996_; uint8_t v___y_2997_; lean_object* v___y_2998_; lean_object* v___y_3010_; uint8_t v___y_3011_; uint8_t v___y_3012_; uint8_t v___y_3024_; lean_object* v___x_3037_; lean_object* v___x_3038_; uint8_t v___x_3039_; 
v___x_2945_ = lean_unsigned_to_nat(0u);
v_docCommentStx_2946_ = l_Lean_Syntax_getArg(v_stx_2920_, v___x_2945_);
v___x_2947_ = lean_unsigned_to_nat(1u);
v_attrsStx_2948_ = l_Lean_Syntax_getArg(v_stx_2920_, v___x_2947_);
v___x_2969_ = lean_unsigned_to_nat(2u);
v_visibilityStx_2970_ = l_Lean_Syntax_getArg(v_stx_2920_, v___x_2969_);
v___x_2971_ = lean_unsigned_to_nat(3u);
v_protectedStx_2972_ = l_Lean_Syntax_getArg(v_stx_2920_, v___x_2971_);
v___x_3037_ = lean_unsigned_to_nat(4u);
v___x_3038_ = l_Lean_Syntax_getArg(v_stx_2920_, v___x_3037_);
v___x_3039_ = l_Lean_Syntax_isNone(v___x_3038_);
if (v___x_3039_ == 0)
{
lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; uint8_t v___x_3043_; 
v___x_3040_ = l_Lean_Syntax_getArg(v___x_3038_, v___x_2945_);
lean_dec(v___x_3038_);
v___x_3041_ = l_Lean_Syntax_getKind(v___x_3040_);
v___x_3042_ = ((lean_object*)(l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__2));
v___x_3043_ = lean_name_eq(v___x_3041_, v___x_3042_);
lean_dec(v___x_3041_);
if (v___x_3043_ == 0)
{
uint8_t v___x_3044_; 
v___x_3044_ = 2;
v___y_3024_ = v___x_3044_;
goto v___jp_3023_;
}
else
{
uint8_t v___x_3045_; 
v___x_3045_ = 1;
v___y_3024_ = v___x_3045_;
goto v___jp_3023_;
}
}
else
{
uint8_t v___x_3046_; 
lean_dec(v___x_3038_);
v___x_3046_ = 0;
v___y_3024_ = v___x_3046_;
goto v___jp_3023_;
}
v___jp_2924_:
{
lean_object* v___x_2932_; lean_object* v___x_2933_; 
v___x_2932_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2932_, 0, v_stx_2920_);
lean_ctor_set(v___x_2932_, 1, v___y_2929_);
lean_ctor_set(v___x_2932_, 2, v___y_2930_);
lean_ctor_set_uint8(v___x_2932_, sizeof(void*)*3, v___y_2927_);
lean_ctor_set_uint8(v___x_2932_, sizeof(void*)*3 + 1, v___y_2926_);
lean_ctor_set_uint8(v___x_2932_, sizeof(void*)*3 + 2, v___y_2925_);
lean_ctor_set_uint8(v___x_2932_, sizeof(void*)*3 + 3, v___y_2928_);
lean_ctor_set_uint8(v___x_2932_, sizeof(void*)*3 + 4, v___y_2931_);
v___x_2933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2933_, 0, v___x_2932_);
return v___x_2933_;
}
v___jp_2934_:
{
uint8_t v___x_2942_; 
v___x_2942_ = l_Lean_Syntax_isNone(v___y_2935_);
lean_dec(v___y_2935_);
if (v___x_2942_ == 0)
{
uint8_t v___x_2943_; 
v___x_2943_ = 1;
v___y_2925_ = v___y_2936_;
v___y_2926_ = v___y_2937_;
v___y_2927_ = v___y_2938_;
v___y_2928_ = v___y_2939_;
v___y_2929_ = v___y_2940_;
v___y_2930_ = v_attrs_2941_;
v___y_2931_ = v___x_2943_;
goto v___jp_2924_;
}
else
{
uint8_t v___x_2944_; 
v___x_2944_ = 0;
v___y_2925_ = v___y_2936_;
v___y_2926_ = v___y_2937_;
v___y_2927_ = v___y_2938_;
v___y_2928_ = v___y_2939_;
v___y_2929_ = v___y_2940_;
v___y_2930_ = v_attrs_2941_;
v___y_2931_ = v___x_2944_;
goto v___jp_2924_;
}
}
v___jp_2949_:
{
lean_object* v___x_2956_; 
v___x_2956_ = l_Lean_Syntax_getOptional_x3f(v_attrsStx_2948_);
lean_dec(v_attrsStx_2948_);
if (lean_obj_tag(v___x_2956_) == 0)
{
lean_object* v___x_2957_; 
v___x_2957_ = ((lean_object*)(l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6___closed__0));
v___y_2935_ = v___y_2951_;
v___y_2936_ = v___y_2950_;
v___y_2937_ = v___y_2955_;
v___y_2938_ = v___y_2952_;
v___y_2939_ = v___y_2953_;
v___y_2940_ = v___y_2954_;
v_attrs_2941_ = v___x_2957_;
goto v___jp_2934_;
}
else
{
lean_object* v_val_2958_; lean_object* v___x_2959_; 
v_val_2958_ = lean_ctor_get(v___x_2956_, 0);
lean_inc(v_val_2958_);
lean_dec_ref_known(v___x_2956_, 1);
v___x_2959_ = l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2(v_val_2958_, v___y_2921_, v___y_2922_);
lean_dec(v_val_2958_);
if (lean_obj_tag(v___x_2959_) == 0)
{
lean_object* v_a_2960_; 
v_a_2960_ = lean_ctor_get(v___x_2959_, 0);
lean_inc(v_a_2960_);
lean_dec_ref_known(v___x_2959_, 1);
v___y_2935_ = v___y_2951_;
v___y_2936_ = v___y_2950_;
v___y_2937_ = v___y_2955_;
v___y_2938_ = v___y_2952_;
v___y_2939_ = v___y_2953_;
v___y_2940_ = v___y_2954_;
v_attrs_2941_ = v_a_2960_;
goto v___jp_2934_;
}
else
{
lean_object* v_a_2961_; lean_object* v___x_2963_; uint8_t v_isShared_2964_; uint8_t v_isSharedCheck_2968_; 
lean_dec(v___y_2954_);
lean_dec(v___y_2951_);
lean_dec(v_stx_2920_);
v_a_2961_ = lean_ctor_get(v___x_2959_, 0);
v_isSharedCheck_2968_ = !lean_is_exclusive(v___x_2959_);
if (v_isSharedCheck_2968_ == 0)
{
v___x_2963_ = v___x_2959_;
v_isShared_2964_ = v_isSharedCheck_2968_;
goto v_resetjp_2962_;
}
else
{
lean_inc(v_a_2961_);
lean_dec(v___x_2959_);
v___x_2963_ = lean_box(0);
v_isShared_2964_ = v_isSharedCheck_2968_;
goto v_resetjp_2962_;
}
v_resetjp_2962_:
{
lean_object* v___x_2966_; 
if (v_isShared_2964_ == 0)
{
v___x_2966_ = v___x_2963_;
goto v_reusejp_2965_;
}
else
{
lean_object* v_reuseFailAlloc_2967_; 
v_reuseFailAlloc_2967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2967_, 0, v_a_2961_);
v___x_2966_ = v_reuseFailAlloc_2967_;
goto v_reusejp_2965_;
}
v_reusejp_2965_:
{
return v___x_2966_;
}
}
}
}
}
v___jp_2973_:
{
lean_object* v___x_2979_; 
v___x_2979_ = l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1(v___y_2978_, v___y_2921_, v___y_2922_);
if (lean_obj_tag(v___x_2979_) == 0)
{
lean_object* v_a_2980_; uint8_t v___x_2981_; 
v_a_2980_ = lean_ctor_get(v___x_2979_, 0);
lean_inc(v_a_2980_);
lean_dec_ref_known(v___x_2979_, 1);
v___x_2981_ = l_Lean_Syntax_isNone(v_protectedStx_2972_);
lean_dec(v_protectedStx_2972_);
if (v___x_2981_ == 0)
{
uint8_t v___x_2982_; uint8_t v___x_2983_; 
v___x_2982_ = 1;
v___x_2983_ = lean_unbox(v_a_2980_);
lean_dec(v_a_2980_);
v___y_2950_ = v___y_2975_;
v___y_2951_ = v___y_2974_;
v___y_2952_ = v___x_2983_;
v___y_2953_ = v___y_2976_;
v___y_2954_ = v___y_2977_;
v___y_2955_ = v___x_2982_;
goto v___jp_2949_;
}
else
{
uint8_t v___x_2984_; uint8_t v___x_2985_; 
v___x_2984_ = 0;
v___x_2985_ = lean_unbox(v_a_2980_);
lean_dec(v_a_2980_);
v___y_2950_ = v___y_2975_;
v___y_2951_ = v___y_2974_;
v___y_2952_ = v___x_2985_;
v___y_2953_ = v___y_2976_;
v___y_2954_ = v___y_2977_;
v___y_2955_ = v___x_2984_;
goto v___jp_2949_;
}
}
else
{
lean_object* v_a_2986_; lean_object* v___x_2988_; uint8_t v_isShared_2989_; uint8_t v_isSharedCheck_2993_; 
lean_dec(v___y_2977_);
lean_dec(v___y_2974_);
lean_dec(v_protectedStx_2972_);
lean_dec(v_attrsStx_2948_);
lean_dec(v_stx_2920_);
v_a_2986_ = lean_ctor_get(v___x_2979_, 0);
v_isSharedCheck_2993_ = !lean_is_exclusive(v___x_2979_);
if (v_isSharedCheck_2993_ == 0)
{
v___x_2988_ = v___x_2979_;
v_isShared_2989_ = v_isSharedCheck_2993_;
goto v_resetjp_2987_;
}
else
{
lean_inc(v_a_2986_);
lean_dec(v___x_2979_);
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
v___jp_2994_:
{
lean_object* v___x_2999_; 
v___x_2999_ = l_Lean_Syntax_getOptional_x3f(v_visibilityStx_2970_);
lean_dec(v_visibilityStx_2970_);
if (lean_obj_tag(v___x_2999_) == 0)
{
lean_object* v___x_3000_; 
v___x_3000_ = lean_box(0);
v___y_2974_ = v___y_2996_;
v___y_2975_ = v___y_2995_;
v___y_2976_ = v___y_2997_;
v___y_2977_ = v___y_2998_;
v___y_2978_ = v___x_3000_;
goto v___jp_2973_;
}
else
{
lean_object* v_val_3001_; lean_object* v___x_3003_; uint8_t v_isShared_3004_; uint8_t v_isSharedCheck_3008_; 
v_val_3001_ = lean_ctor_get(v___x_2999_, 0);
v_isSharedCheck_3008_ = !lean_is_exclusive(v___x_2999_);
if (v_isSharedCheck_3008_ == 0)
{
v___x_3003_ = v___x_2999_;
v_isShared_3004_ = v_isSharedCheck_3008_;
goto v_resetjp_3002_;
}
else
{
lean_inc(v_val_3001_);
lean_dec(v___x_2999_);
v___x_3003_ = lean_box(0);
v_isShared_3004_ = v_isSharedCheck_3008_;
goto v_resetjp_3002_;
}
v_resetjp_3002_:
{
lean_object* v___x_3006_; 
if (v_isShared_3004_ == 0)
{
v___x_3006_ = v___x_3003_;
goto v_reusejp_3005_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v_val_3001_);
v___x_3006_ = v_reuseFailAlloc_3007_;
goto v_reusejp_3005_;
}
v_reusejp_3005_:
{
v___y_2974_ = v___y_2996_;
v___y_2975_ = v___y_2995_;
v___y_2976_ = v___y_2997_;
v___y_2977_ = v___y_2998_;
v___y_2978_ = v___x_3006_;
goto v___jp_2973_;
}
}
}
}
v___jp_3009_:
{
lean_object* v___x_3013_; 
v___x_3013_ = l_Lean_Syntax_getOptional_x3f(v_docCommentStx_2946_);
lean_dec(v_docCommentStx_2946_);
if (lean_obj_tag(v___x_3013_) == 0)
{
lean_object* v___x_3014_; 
v___x_3014_ = lean_box(0);
v___y_2995_ = v___y_3011_;
v___y_2996_ = v___y_3010_;
v___y_2997_ = v___y_3012_;
v___y_2998_ = v___x_3014_;
goto v___jp_2994_;
}
else
{
lean_object* v_val_3015_; lean_object* v___x_3017_; uint8_t v_isShared_3018_; uint8_t v_isSharedCheck_3022_; 
v_val_3015_ = lean_ctor_get(v___x_3013_, 0);
v_isSharedCheck_3022_ = !lean_is_exclusive(v___x_3013_);
if (v_isSharedCheck_3022_ == 0)
{
v___x_3017_ = v___x_3013_;
v_isShared_3018_ = v_isSharedCheck_3022_;
goto v_resetjp_3016_;
}
else
{
lean_inc(v_val_3015_);
lean_dec(v___x_3013_);
v___x_3017_ = lean_box(0);
v_isShared_3018_ = v_isSharedCheck_3022_;
goto v_resetjp_3016_;
}
v_resetjp_3016_:
{
lean_object* v___x_3020_; 
if (v_isShared_3018_ == 0)
{
v___x_3020_ = v___x_3017_;
goto v_reusejp_3019_;
}
else
{
lean_object* v_reuseFailAlloc_3021_; 
v_reuseFailAlloc_3021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3021_, 0, v_val_3015_);
v___x_3020_ = v_reuseFailAlloc_3021_;
goto v_reusejp_3019_;
}
v_reusejp_3019_:
{
v___y_2995_ = v___y_3011_;
v___y_2996_ = v___y_3010_;
v___y_2997_ = v___y_3012_;
v___y_2998_ = v___x_3020_;
goto v___jp_2994_;
}
}
}
}
v___jp_3023_:
{
lean_object* v___x_3025_; lean_object* v_unsafeStx_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; uint8_t v___x_3029_; 
v___x_3025_ = lean_unsigned_to_nat(5u);
v_unsafeStx_3026_ = l_Lean_Syntax_getArg(v_stx_2920_, v___x_3025_);
v___x_3027_ = lean_unsigned_to_nat(6u);
v___x_3028_ = l_Lean_Syntax_getArg(v_stx_2920_, v___x_3027_);
v___x_3029_ = l_Lean_Syntax_isNone(v___x_3028_);
if (v___x_3029_ == 0)
{
lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; uint8_t v___x_3033_; 
v___x_3030_ = l_Lean_Syntax_getArg(v___x_3028_, v___x_2945_);
lean_dec(v___x_3028_);
v___x_3031_ = l_Lean_Syntax_getKind(v___x_3030_);
v___x_3032_ = ((lean_object*)(l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__1));
v___x_3033_ = lean_name_eq(v___x_3031_, v___x_3032_);
lean_dec(v___x_3031_);
if (v___x_3033_ == 0)
{
uint8_t v___x_3034_; 
v___x_3034_ = 1;
v___y_3010_ = v_unsafeStx_3026_;
v___y_3011_ = v___y_3024_;
v___y_3012_ = v___x_3034_;
goto v___jp_3009_;
}
else
{
uint8_t v___x_3035_; 
v___x_3035_ = 0;
v___y_3010_ = v_unsafeStx_3026_;
v___y_3011_ = v___y_3024_;
v___y_3012_ = v___x_3035_;
goto v___jp_3009_;
}
}
else
{
uint8_t v___x_3036_; 
lean_dec(v___x_3028_);
v___x_3036_ = 2;
v___y_3010_ = v_unsafeStx_3026_;
v___y_3011_ = v___y_3024_;
v___y_3012_ = v___x_3036_;
goto v___jp_3009_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___boxed(lean_object* v_stx_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_){
_start:
{
lean_object* v_res_3051_; 
v_res_3051_ = l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1(v_stx_3047_, v___y_3048_, v___y_3049_);
lean_dec(v___y_3049_);
lean_dec_ref(v___y_3048_);
return v_res_3051_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(size_t v_sz_3052_, size_t v_i_3053_, lean_object* v_bs_3054_){
_start:
{
uint8_t v___x_3055_; 
v___x_3055_ = lean_usize_dec_lt(v_i_3053_, v_sz_3052_);
if (v___x_3055_ == 0)
{
return v_bs_3054_;
}
else
{
lean_object* v_v_3056_; lean_object* v___x_3057_; lean_object* v_bs_x27_3058_; size_t v___x_3059_; size_t v___x_3060_; lean_object* v___x_3061_; 
v_v_3056_ = lean_array_uget(v_bs_3054_, v_i_3053_);
v___x_3057_ = lean_unsigned_to_nat(0u);
v_bs_x27_3058_ = lean_array_uset(v_bs_3054_, v_i_3053_, v___x_3057_);
v___x_3059_ = ((size_t)1ULL);
v___x_3060_ = lean_usize_add(v_i_3053_, v___x_3059_);
v___x_3061_ = lean_array_uset(v_bs_x27_3058_, v_i_3053_, v_v_3056_);
v_i_3053_ = v___x_3060_;
v_bs_3054_ = v___x_3061_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2___boxed(lean_object* v_sz_3063_, lean_object* v_i_3064_, lean_object* v_bs_3065_){
_start:
{
size_t v_sz_boxed_3066_; size_t v_i_boxed_3067_; lean_object* v_res_3068_; 
v_sz_boxed_3066_ = lean_unbox_usize(v_sz_3063_);
lean_dec(v_sz_3063_);
v_i_boxed_3067_ = lean_unbox_usize(v_i_3064_);
lean_dec(v_i_3064_);
v_res_3068_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(v_sz_boxed_3066_, v_i_boxed_3067_, v_bs_3065_);
return v_res_3068_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__16___redArg(lean_object* v_t_3069_, lean_object* v___y_3070_){
_start:
{
lean_object* v___x_3072_; lean_object* v_infoState_3073_; uint8_t v_enabled_3074_; 
v___x_3072_ = lean_st_ref_get(v___y_3070_);
v_infoState_3073_ = lean_ctor_get(v___x_3072_, 8);
lean_inc_ref(v_infoState_3073_);
lean_dec(v___x_3072_);
v_enabled_3074_ = lean_ctor_get_uint8(v_infoState_3073_, sizeof(void*)*3);
lean_dec_ref(v_infoState_3073_);
if (v_enabled_3074_ == 0)
{
lean_object* v___x_3075_; lean_object* v___x_3076_; 
lean_dec_ref(v_t_3069_);
v___x_3075_ = lean_box(0);
v___x_3076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3076_, 0, v___x_3075_);
return v___x_3076_;
}
else
{
lean_object* v___x_3077_; lean_object* v_infoState_3078_; lean_object* v_env_3079_; lean_object* v_messages_3080_; lean_object* v_scopes_3081_; lean_object* v_usedQuotCtxts_3082_; lean_object* v_nextMacroScope_3083_; lean_object* v_maxRecDepth_3084_; lean_object* v_ngen_3085_; lean_object* v_auxDeclNGen_3086_; lean_object* v_traceState_3087_; lean_object* v_snapshotTasks_3088_; lean_object* v_prevLinterStates_3089_; lean_object* v_codeQualityEntryTasks_3090_; lean_object* v___x_3092_; uint8_t v_isShared_3093_; uint8_t v_isSharedCheck_3112_; 
v___x_3077_ = lean_st_ref_take(v___y_3070_);
v_infoState_3078_ = lean_ctor_get(v___x_3077_, 8);
v_env_3079_ = lean_ctor_get(v___x_3077_, 0);
v_messages_3080_ = lean_ctor_get(v___x_3077_, 1);
v_scopes_3081_ = lean_ctor_get(v___x_3077_, 2);
v_usedQuotCtxts_3082_ = lean_ctor_get(v___x_3077_, 3);
v_nextMacroScope_3083_ = lean_ctor_get(v___x_3077_, 4);
v_maxRecDepth_3084_ = lean_ctor_get(v___x_3077_, 5);
v_ngen_3085_ = lean_ctor_get(v___x_3077_, 6);
v_auxDeclNGen_3086_ = lean_ctor_get(v___x_3077_, 7);
v_traceState_3087_ = lean_ctor_get(v___x_3077_, 9);
v_snapshotTasks_3088_ = lean_ctor_get(v___x_3077_, 10);
v_prevLinterStates_3089_ = lean_ctor_get(v___x_3077_, 11);
v_codeQualityEntryTasks_3090_ = lean_ctor_get(v___x_3077_, 12);
v_isSharedCheck_3112_ = !lean_is_exclusive(v___x_3077_);
if (v_isSharedCheck_3112_ == 0)
{
v___x_3092_ = v___x_3077_;
v_isShared_3093_ = v_isSharedCheck_3112_;
goto v_resetjp_3091_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3090_);
lean_inc(v_prevLinterStates_3089_);
lean_inc(v_snapshotTasks_3088_);
lean_inc(v_traceState_3087_);
lean_inc(v_infoState_3078_);
lean_inc(v_auxDeclNGen_3086_);
lean_inc(v_ngen_3085_);
lean_inc(v_maxRecDepth_3084_);
lean_inc(v_nextMacroScope_3083_);
lean_inc(v_usedQuotCtxts_3082_);
lean_inc(v_scopes_3081_);
lean_inc(v_messages_3080_);
lean_inc(v_env_3079_);
lean_dec(v___x_3077_);
v___x_3092_ = lean_box(0);
v_isShared_3093_ = v_isSharedCheck_3112_;
goto v_resetjp_3091_;
}
v_resetjp_3091_:
{
uint8_t v_enabled_3094_; lean_object* v_assignment_3095_; lean_object* v_lazyAssignment_3096_; lean_object* v_trees_3097_; lean_object* v___x_3099_; uint8_t v_isShared_3100_; uint8_t v_isSharedCheck_3111_; 
v_enabled_3094_ = lean_ctor_get_uint8(v_infoState_3078_, sizeof(void*)*3);
v_assignment_3095_ = lean_ctor_get(v_infoState_3078_, 0);
v_lazyAssignment_3096_ = lean_ctor_get(v_infoState_3078_, 1);
v_trees_3097_ = lean_ctor_get(v_infoState_3078_, 2);
v_isSharedCheck_3111_ = !lean_is_exclusive(v_infoState_3078_);
if (v_isSharedCheck_3111_ == 0)
{
v___x_3099_ = v_infoState_3078_;
v_isShared_3100_ = v_isSharedCheck_3111_;
goto v_resetjp_3098_;
}
else
{
lean_inc(v_trees_3097_);
lean_inc(v_lazyAssignment_3096_);
lean_inc(v_assignment_3095_);
lean_dec(v_infoState_3078_);
v___x_3099_ = lean_box(0);
v_isShared_3100_ = v_isSharedCheck_3111_;
goto v_resetjp_3098_;
}
v_resetjp_3098_:
{
lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3104_; 
v___x_3101_ = lean_box(0);
v___x_3102_ = l_Lean_PersistentArray_push___redArg(v_trees_3097_, v_t_3069_);
if (v_isShared_3100_ == 0)
{
lean_ctor_set(v___x_3099_, 2, v___x_3102_);
v___x_3104_ = v___x_3099_;
goto v_reusejp_3103_;
}
else
{
lean_object* v_reuseFailAlloc_3110_; 
v_reuseFailAlloc_3110_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3110_, 0, v_assignment_3095_);
lean_ctor_set(v_reuseFailAlloc_3110_, 1, v_lazyAssignment_3096_);
lean_ctor_set(v_reuseFailAlloc_3110_, 2, v___x_3102_);
lean_ctor_set_uint8(v_reuseFailAlloc_3110_, sizeof(void*)*3, v_enabled_3094_);
v___x_3104_ = v_reuseFailAlloc_3110_;
goto v_reusejp_3103_;
}
v_reusejp_3103_:
{
lean_object* v___x_3106_; 
if (v_isShared_3093_ == 0)
{
lean_ctor_set(v___x_3092_, 8, v___x_3104_);
v___x_3106_ = v___x_3092_;
goto v_reusejp_3105_;
}
else
{
lean_object* v_reuseFailAlloc_3109_; 
v_reuseFailAlloc_3109_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3109_, 0, v_env_3079_);
lean_ctor_set(v_reuseFailAlloc_3109_, 1, v_messages_3080_);
lean_ctor_set(v_reuseFailAlloc_3109_, 2, v_scopes_3081_);
lean_ctor_set(v_reuseFailAlloc_3109_, 3, v_usedQuotCtxts_3082_);
lean_ctor_set(v_reuseFailAlloc_3109_, 4, v_nextMacroScope_3083_);
lean_ctor_set(v_reuseFailAlloc_3109_, 5, v_maxRecDepth_3084_);
lean_ctor_set(v_reuseFailAlloc_3109_, 6, v_ngen_3085_);
lean_ctor_set(v_reuseFailAlloc_3109_, 7, v_auxDeclNGen_3086_);
lean_ctor_set(v_reuseFailAlloc_3109_, 8, v___x_3104_);
lean_ctor_set(v_reuseFailAlloc_3109_, 9, v_traceState_3087_);
lean_ctor_set(v_reuseFailAlloc_3109_, 10, v_snapshotTasks_3088_);
lean_ctor_set(v_reuseFailAlloc_3109_, 11, v_prevLinterStates_3089_);
lean_ctor_set(v_reuseFailAlloc_3109_, 12, v_codeQualityEntryTasks_3090_);
v___x_3106_ = v_reuseFailAlloc_3109_;
goto v_reusejp_3105_;
}
v_reusejp_3105_:
{
lean_object* v___x_3107_; lean_object* v___x_3108_; 
v___x_3107_ = lean_st_ref_put(v___y_3070_, v___x_3106_);
v___x_3108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3108_, 0, v___x_3101_);
return v___x_3108_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__16___redArg___boxed(lean_object* v_t_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_){
_start:
{
lean_object* v_res_3116_; 
v_res_3116_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__16___redArg(v_t_3113_, v___y_3114_);
lean_dec(v___y_3114_);
return v_res_3116_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__0(void){
_start:
{
lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; 
v___x_3117_ = lean_unsigned_to_nat(32u);
v___x_3118_ = lean_mk_empty_array_with_capacity(v___x_3117_);
v___x_3119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3119_, 0, v___x_3118_);
return v___x_3119_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__1(void){
_start:
{
size_t v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; 
v___x_3120_ = ((size_t)5ULL);
v___x_3121_ = lean_unsigned_to_nat(0u);
v___x_3122_ = lean_unsigned_to_nat(32u);
v___x_3123_ = lean_mk_empty_array_with_capacity(v___x_3122_);
v___x_3124_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__0);
v___x_3125_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3125_, 0, v___x_3124_);
lean_ctor_set(v___x_3125_, 1, v___x_3123_);
lean_ctor_set(v___x_3125_, 2, v___x_3121_);
lean_ctor_set(v___x_3125_, 3, v___x_3121_);
lean_ctor_set_usize(v___x_3125_, 4, v___x_3120_);
return v___x_3125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10(lean_object* v_t_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_){
_start:
{
lean_object* v___x_3130_; lean_object* v_infoState_3131_; uint8_t v_enabled_3132_; 
v___x_3130_ = lean_st_ref_get(v___y_3128_);
v_infoState_3131_ = lean_ctor_get(v___x_3130_, 8);
lean_inc_ref(v_infoState_3131_);
lean_dec(v___x_3130_);
v_enabled_3132_ = lean_ctor_get_uint8(v_infoState_3131_, sizeof(void*)*3);
lean_dec_ref(v_infoState_3131_);
if (v_enabled_3132_ == 0)
{
lean_object* v___x_3133_; lean_object* v___x_3134_; 
lean_dec_ref(v_t_3126_);
v___x_3133_ = lean_box(0);
v___x_3134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3134_, 0, v___x_3133_);
return v___x_3134_;
}
else
{
lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; 
v___x_3135_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__1);
v___x_3136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3136_, 0, v_t_3126_);
lean_ctor_set(v___x_3136_, 1, v___x_3135_);
v___x_3137_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__16___redArg(v___x_3136_, v___y_3128_);
return v___x_3137_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___boxed(lean_object* v_t_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_){
_start:
{
lean_object* v_res_3142_; 
v_res_3142_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10(v_t_3138_, v___y_3139_, v___y_3140_);
lean_dec(v___y_3140_);
lean_dec_ref(v___y_3139_);
return v_res_3142_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__1(void){
_start:
{
lean_object* v___x_3144_; lean_object* v___x_3145_; 
v___x_3144_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__0));
v___x_3145_ = l_Lean_stringToMessageData(v___x_3144_);
return v___x_3145_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__3(void){
_start:
{
lean_object* v___x_3147_; lean_object* v___x_3148_; 
v___x_3147_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__2));
v___x_3148_ = l_Lean_stringToMessageData(v___x_3147_);
return v___x_3148_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__5(void){
_start:
{
lean_object* v___x_3150_; lean_object* v___x_3151_; 
v___x_3150_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__4));
v___x_3151_ = l_Lean_stringToMessageData(v___x_3150_);
return v___x_3151_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__7(void){
_start:
{
lean_object* v___x_3153_; lean_object* v___x_3154_; 
v___x_3153_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__6));
v___x_3154_ = l_Lean_stringToMessageData(v___x_3153_);
return v___x_3154_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__9(void){
_start:
{
lean_object* v___x_3156_; lean_object* v___x_3157_; 
v___x_3156_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__8));
v___x_3157_ = l_Lean_stringToMessageData(v___x_3156_);
return v___x_3157_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__11(void){
_start:
{
lean_object* v___x_3159_; lean_object* v___x_3160_; 
v___x_3159_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__10));
v___x_3160_ = l_Lean_stringToMessageData(v___x_3159_);
return v___x_3160_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg(lean_object* v_msg_3161_, lean_object* v_declHint_3162_, lean_object* v___y_3163_){
_start:
{
lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v_env_3167_; uint8_t v___x_3168_; 
v___x_3165_ = lean_box(0);
v___x_3166_ = lean_st_ref_get(v___y_3163_);
v_env_3167_ = lean_ctor_get(v___x_3166_, 0);
lean_inc_ref(v_env_3167_);
lean_dec(v___x_3166_);
v___x_3168_ = l_Lean_Name_isAnonymous(v_declHint_3162_);
if (v___x_3168_ == 0)
{
uint8_t v_isExporting_3169_; 
v_isExporting_3169_ = lean_ctor_get_uint8(v_env_3167_, sizeof(void*)*8);
if (v_isExporting_3169_ == 0)
{
lean_object* v___x_3170_; 
lean_dec_ref(v_env_3167_);
lean_dec(v_declHint_3162_);
v___x_3170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3170_, 0, v_msg_3161_);
return v___x_3170_;
}
else
{
lean_object* v___x_3171_; uint8_t v___x_3172_; 
lean_inc_ref(v_env_3167_);
v___x_3171_ = l_Lean_Environment_setExporting(v_env_3167_, v___x_3168_);
lean_inc(v_declHint_3162_);
lean_inc_ref(v___x_3171_);
v___x_3172_ = l_Lean_Environment_contains(v___x_3171_, v_declHint_3162_, v_isExporting_3169_);
if (v___x_3172_ == 0)
{
lean_object* v___x_3173_; 
lean_dec_ref(v___x_3171_);
lean_dec_ref(v_env_3167_);
lean_dec(v_declHint_3162_);
v___x_3173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3173_, 0, v_msg_3161_);
return v___x_3173_;
}
else
{
lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v_c_3179_; lean_object* v___x_3180_; 
v___x_3174_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__2);
v___x_3175_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg___closed__5);
v___x_3176_ = l_Lean_Options_empty;
v___x_3177_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3177_, 0, v___x_3171_);
lean_ctor_set(v___x_3177_, 1, v___x_3174_);
lean_ctor_set(v___x_3177_, 2, v___x_3175_);
lean_ctor_set(v___x_3177_, 3, v___x_3176_);
lean_inc(v_declHint_3162_);
v___x_3178_ = l_Lean_MessageData_ofConstName(v_declHint_3162_, v___x_3168_);
v_c_3179_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_3179_, 0, v___x_3177_);
lean_ctor_set(v_c_3179_, 1, v___x_3178_);
v___x_3180_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3167_, v_declHint_3162_);
if (lean_obj_tag(v___x_3180_) == 0)
{
lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; 
lean_dec_ref(v_env_3167_);
lean_dec(v_declHint_3162_);
v___x_3181_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__1);
v___x_3182_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3182_, 0, v___x_3181_);
lean_ctor_set(v___x_3182_, 1, v_c_3179_);
v___x_3183_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__3);
v___x_3184_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3184_, 0, v___x_3182_);
lean_ctor_set(v___x_3184_, 1, v___x_3183_);
v___x_3185_ = l_Lean_MessageData_note(v___x_3184_);
v___x_3186_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3186_, 0, v_msg_3161_);
lean_ctor_set(v___x_3186_, 1, v___x_3185_);
v___x_3187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3187_, 0, v___x_3186_);
return v___x_3187_;
}
else
{
lean_object* v_val_3188_; lean_object* v___x_3190_; uint8_t v_isShared_3191_; uint8_t v_isSharedCheck_3222_; 
v_val_3188_ = lean_ctor_get(v___x_3180_, 0);
v_isSharedCheck_3222_ = !lean_is_exclusive(v___x_3180_);
if (v_isSharedCheck_3222_ == 0)
{
v___x_3190_ = v___x_3180_;
v_isShared_3191_ = v_isSharedCheck_3222_;
goto v_resetjp_3189_;
}
else
{
lean_inc(v_val_3188_);
lean_dec(v___x_3180_);
v___x_3190_ = lean_box(0);
v_isShared_3191_ = v_isSharedCheck_3222_;
goto v_resetjp_3189_;
}
v_resetjp_3189_:
{
lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v_mod_3194_; uint8_t v___x_3195_; 
v___x_3192_ = l_Lean_Environment_header(v_env_3167_);
lean_dec_ref(v_env_3167_);
v___x_3193_ = l_Lean_EnvironmentHeader_moduleNames(v___x_3192_);
v_mod_3194_ = lean_array_get(v___x_3165_, v___x_3193_, v_val_3188_);
lean_dec(v_val_3188_);
lean_dec_ref(v___x_3193_);
v___x_3195_ = l_Lean_isPrivateName(v_declHint_3162_);
lean_dec(v_declHint_3162_);
if (v___x_3195_ == 0)
{
lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3207_; 
v___x_3196_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__5);
v___x_3197_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3197_, 0, v___x_3196_);
lean_ctor_set(v___x_3197_, 1, v_c_3179_);
v___x_3198_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__7);
v___x_3199_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3199_, 0, v___x_3197_);
lean_ctor_set(v___x_3199_, 1, v___x_3198_);
v___x_3200_ = l_Lean_MessageData_ofName(v_mod_3194_);
v___x_3201_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3201_, 0, v___x_3199_);
lean_ctor_set(v___x_3201_, 1, v___x_3200_);
v___x_3202_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__7, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__7_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21___lam__1___closed__7);
v___x_3203_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3203_, 0, v___x_3201_);
lean_ctor_set(v___x_3203_, 1, v___x_3202_);
v___x_3204_ = l_Lean_MessageData_note(v___x_3203_);
v___x_3205_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3205_, 0, v_msg_3161_);
lean_ctor_set(v___x_3205_, 1, v___x_3204_);
if (v_isShared_3191_ == 0)
{
lean_ctor_set_tag(v___x_3190_, 0);
lean_ctor_set(v___x_3190_, 0, v___x_3205_);
v___x_3207_ = v___x_3190_;
goto v_reusejp_3206_;
}
else
{
lean_object* v_reuseFailAlloc_3208_; 
v_reuseFailAlloc_3208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3208_, 0, v___x_3205_);
v___x_3207_ = v_reuseFailAlloc_3208_;
goto v_reusejp_3206_;
}
v_reusejp_3206_:
{
return v___x_3207_;
}
}
else
{
lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3220_; 
v___x_3209_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__1);
v___x_3210_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3210_, 0, v___x_3209_);
lean_ctor_set(v___x_3210_, 1, v_c_3179_);
v___x_3211_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__9);
v___x_3212_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3212_, 0, v___x_3210_);
lean_ctor_set(v___x_3212_, 1, v___x_3211_);
v___x_3213_ = l_Lean_MessageData_ofName(v_mod_3194_);
v___x_3214_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3214_, 0, v___x_3212_);
lean_ctor_set(v___x_3214_, 1, v___x_3213_);
v___x_3215_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___closed__11);
v___x_3216_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3216_, 0, v___x_3214_);
lean_ctor_set(v___x_3216_, 1, v___x_3215_);
v___x_3217_ = l_Lean_MessageData_note(v___x_3216_);
v___x_3218_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3218_, 0, v_msg_3161_);
lean_ctor_set(v___x_3218_, 1, v___x_3217_);
if (v_isShared_3191_ == 0)
{
lean_ctor_set_tag(v___x_3190_, 0);
lean_ctor_set(v___x_3190_, 0, v___x_3218_);
v___x_3220_ = v___x_3190_;
goto v_reusejp_3219_;
}
else
{
lean_object* v_reuseFailAlloc_3221_; 
v_reuseFailAlloc_3221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3221_, 0, v___x_3218_);
v___x_3220_ = v_reuseFailAlloc_3221_;
goto v_reusejp_3219_;
}
v_reusejp_3219_:
{
return v___x_3220_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3223_; 
lean_dec_ref(v_env_3167_);
lean_dec(v_declHint_3162_);
v___x_3223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3223_, 0, v_msg_3161_);
return v___x_3223_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg___boxed(lean_object* v_msg_3224_, lean_object* v_declHint_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_){
_start:
{
lean_object* v_res_3228_; 
v_res_3228_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg(v_msg_3224_, v_declHint_3225_, v___y_3226_);
lean_dec(v___y_3226_);
return v_res_3228_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52(lean_object* v_msg_3229_, lean_object* v_declHint_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_){
_start:
{
lean_object* v___x_3234_; lean_object* v_a_3235_; lean_object* v___x_3237_; uint8_t v_isShared_3238_; uint8_t v_isSharedCheck_3244_; 
v___x_3234_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg(v_msg_3229_, v_declHint_3230_, v___y_3232_);
v_a_3235_ = lean_ctor_get(v___x_3234_, 0);
v_isSharedCheck_3244_ = !lean_is_exclusive(v___x_3234_);
if (v_isSharedCheck_3244_ == 0)
{
v___x_3237_ = v___x_3234_;
v_isShared_3238_ = v_isSharedCheck_3244_;
goto v_resetjp_3236_;
}
else
{
lean_inc(v_a_3235_);
lean_dec(v___x_3234_);
v___x_3237_ = lean_box(0);
v_isShared_3238_ = v_isSharedCheck_3244_;
goto v_resetjp_3236_;
}
v_resetjp_3236_:
{
lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3242_; 
v___x_3239_ = l_Lean_unknownIdentifierMessageTag;
v___x_3240_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3240_, 0, v___x_3239_);
lean_ctor_set(v___x_3240_, 1, v_a_3235_);
if (v_isShared_3238_ == 0)
{
lean_ctor_set(v___x_3237_, 0, v___x_3240_);
v___x_3242_ = v___x_3237_;
goto v_reusejp_3241_;
}
else
{
lean_object* v_reuseFailAlloc_3243_; 
v_reuseFailAlloc_3243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3243_, 0, v___x_3240_);
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
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52___boxed(lean_object* v_msg_3245_, lean_object* v_declHint_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_){
_start:
{
lean_object* v_res_3250_; 
v_res_3250_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52(v_msg_3245_, v_declHint_3246_, v___y_3247_, v___y_3248_);
lean_dec(v___y_3248_);
lean_dec_ref(v___y_3247_);
return v_res_3250_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49___redArg(lean_object* v_ref_3251_, lean_object* v_msg_3252_, lean_object* v_declHint_3253_, lean_object* v___y_3254_, lean_object* v___y_3255_){
_start:
{
lean_object* v___x_3257_; lean_object* v_a_3258_; lean_object* v___x_3259_; 
v___x_3257_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52(v_msg_3252_, v_declHint_3253_, v___y_3254_, v___y_3255_);
v_a_3258_ = lean_ctor_get(v___x_3257_, 0);
lean_inc(v_a_3258_);
lean_dec_ref(v___x_3257_);
v___x_3259_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3___redArg(v_ref_3251_, v_a_3258_, v___y_3254_, v___y_3255_);
return v___x_3259_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49___redArg___boxed(lean_object* v_ref_3260_, lean_object* v_msg_3261_, lean_object* v_declHint_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_){
_start:
{
lean_object* v_res_3266_; 
v_res_3266_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49___redArg(v_ref_3260_, v_msg_3261_, v_declHint_3262_, v___y_3263_, v___y_3264_);
lean_dec(v___y_3264_);
lean_dec_ref(v___y_3263_);
lean_dec(v_ref_3260_);
return v_res_3266_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37___redArg___closed__1(void){
_start:
{
lean_object* v___x_3268_; lean_object* v___x_3269_; 
v___x_3268_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37___redArg___closed__0));
v___x_3269_ = l_Lean_stringToMessageData(v___x_3268_);
return v___x_3269_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37___redArg(lean_object* v_ref_3270_, lean_object* v_constName_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_){
_start:
{
lean_object* v___x_3275_; uint8_t v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; 
v___x_3275_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37___redArg___closed__1);
v___x_3276_ = 0;
lean_inc(v_constName_3271_);
v___x_3277_ = l_Lean_MessageData_ofConstName(v_constName_3271_, v___x_3276_);
v___x_3278_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3278_, 0, v___x_3275_);
lean_ctor_set(v___x_3278_, 1, v___x_3277_);
v___x_3279_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1);
v___x_3280_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3280_, 0, v___x_3278_);
lean_ctor_set(v___x_3280_, 1, v___x_3279_);
v___x_3281_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49___redArg(v_ref_3270_, v___x_3280_, v_constName_3271_, v___y_3272_, v___y_3273_);
return v___x_3281_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37___redArg___boxed(lean_object* v_ref_3282_, lean_object* v_constName_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_){
_start:
{
lean_object* v_res_3287_; 
v_res_3287_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37___redArg(v_ref_3282_, v_constName_3283_, v___y_3284_, v___y_3285_);
lean_dec(v___y_3285_);
lean_dec_ref(v___y_3284_);
lean_dec(v_ref_3282_);
return v_res_3287_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25___redArg(lean_object* v_constName_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_){
_start:
{
lean_object* v___x_3292_; 
v___x_3292_ = l_Lean_Elab_Command_getRef___redArg(v___y_3289_);
if (lean_obj_tag(v___x_3292_) == 0)
{
lean_object* v_a_3293_; lean_object* v___x_3294_; 
v_a_3293_ = lean_ctor_get(v___x_3292_, 0);
lean_inc(v_a_3293_);
lean_dec_ref_known(v___x_3292_, 1);
v___x_3294_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37___redArg(v_a_3293_, v_constName_3288_, v___y_3289_, v___y_3290_);
lean_dec(v_a_3293_);
return v___x_3294_;
}
else
{
lean_object* v_a_3295_; lean_object* v___x_3297_; uint8_t v_isShared_3298_; uint8_t v_isSharedCheck_3302_; 
lean_dec(v_constName_3288_);
v_a_3295_ = lean_ctor_get(v___x_3292_, 0);
v_isSharedCheck_3302_ = !lean_is_exclusive(v___x_3292_);
if (v_isSharedCheck_3302_ == 0)
{
v___x_3297_ = v___x_3292_;
v_isShared_3298_ = v_isSharedCheck_3302_;
goto v_resetjp_3296_;
}
else
{
lean_inc(v_a_3295_);
lean_dec(v___x_3292_);
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
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25___redArg___boxed(lean_object* v_constName_3303_, lean_object* v___y_3304_, lean_object* v___y_3305_, lean_object* v___y_3306_){
_start:
{
lean_object* v_res_3307_; 
v_res_3307_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25___redArg(v_constName_3303_, v___y_3304_, v___y_3305_);
lean_dec(v___y_3305_);
lean_dec_ref(v___y_3304_);
return v_res_3307_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14(lean_object* v_constName_3308_, lean_object* v___y_3309_, lean_object* v___y_3310_){
_start:
{
lean_object* v___x_3312_; lean_object* v_env_3313_; uint8_t v___x_3314_; lean_object* v___x_3315_; 
v___x_3312_ = lean_st_ref_get(v___y_3310_);
v_env_3313_ = lean_ctor_get(v___x_3312_, 0);
lean_inc_ref(v_env_3313_);
lean_dec(v___x_3312_);
v___x_3314_ = 0;
lean_inc(v_constName_3308_);
v___x_3315_ = l_Lean_Environment_findConstVal_x3f(v_env_3313_, v_constName_3308_, v___x_3314_);
if (lean_obj_tag(v___x_3315_) == 0)
{
lean_object* v___x_3316_; 
v___x_3316_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25___redArg(v_constName_3308_, v___y_3309_, v___y_3310_);
return v___x_3316_;
}
else
{
lean_object* v_val_3317_; lean_object* v___x_3319_; uint8_t v_isShared_3320_; uint8_t v_isSharedCheck_3324_; 
lean_dec(v_constName_3308_);
v_val_3317_ = lean_ctor_get(v___x_3315_, 0);
v_isSharedCheck_3324_ = !lean_is_exclusive(v___x_3315_);
if (v_isSharedCheck_3324_ == 0)
{
v___x_3319_ = v___x_3315_;
v_isShared_3320_ = v_isSharedCheck_3324_;
goto v_resetjp_3318_;
}
else
{
lean_inc(v_val_3317_);
lean_dec(v___x_3315_);
v___x_3319_ = lean_box(0);
v_isShared_3320_ = v_isSharedCheck_3324_;
goto v_resetjp_3318_;
}
v_resetjp_3318_:
{
lean_object* v___x_3322_; 
if (v_isShared_3320_ == 0)
{
lean_ctor_set_tag(v___x_3319_, 0);
v___x_3322_ = v___x_3319_;
goto v_reusejp_3321_;
}
else
{
lean_object* v_reuseFailAlloc_3323_; 
v_reuseFailAlloc_3323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3323_, 0, v_val_3317_);
v___x_3322_ = v_reuseFailAlloc_3323_;
goto v_reusejp_3321_;
}
v_reusejp_3321_:
{
return v___x_3322_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14___boxed(lean_object* v_constName_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_){
_start:
{
lean_object* v_res_3329_; 
v_res_3329_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14(v_constName_3325_, v___y_3326_, v___y_3327_);
lean_dec(v___y_3327_);
lean_dec_ref(v___y_3326_);
return v_res_3329_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9(lean_object* v_constName_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_){
_start:
{
lean_object* v___x_3334_; 
lean_inc(v_constName_3330_);
v___x_3334_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14(v_constName_3330_, v___y_3331_, v___y_3332_);
if (lean_obj_tag(v___x_3334_) == 0)
{
lean_object* v_a_3335_; lean_object* v___x_3337_; uint8_t v_isShared_3338_; uint8_t v_isSharedCheck_3346_; 
v_a_3335_ = lean_ctor_get(v___x_3334_, 0);
v_isSharedCheck_3346_ = !lean_is_exclusive(v___x_3334_);
if (v_isSharedCheck_3346_ == 0)
{
v___x_3337_ = v___x_3334_;
v_isShared_3338_ = v_isSharedCheck_3346_;
goto v_resetjp_3336_;
}
else
{
lean_inc(v_a_3335_);
lean_dec(v___x_3334_);
v___x_3337_ = lean_box(0);
v_isShared_3338_ = v_isSharedCheck_3346_;
goto v_resetjp_3336_;
}
v_resetjp_3336_:
{
lean_object* v_levelParams_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3344_; 
v_levelParams_3339_ = lean_ctor_get(v_a_3335_, 1);
lean_inc(v_levelParams_3339_);
lean_dec(v_a_3335_);
v___x_3340_ = lean_box(0);
v___x_3341_ = l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(v_levelParams_3339_, v___x_3340_);
v___x_3342_ = l_Lean_mkConst(v_constName_3330_, v___x_3341_);
if (v_isShared_3338_ == 0)
{
lean_ctor_set(v___x_3337_, 0, v___x_3342_);
v___x_3344_ = v___x_3337_;
goto v_reusejp_3343_;
}
else
{
lean_object* v_reuseFailAlloc_3345_; 
v_reuseFailAlloc_3345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3345_, 0, v___x_3342_);
v___x_3344_ = v_reuseFailAlloc_3345_;
goto v_reusejp_3343_;
}
v_reusejp_3343_:
{
return v___x_3344_;
}
}
}
else
{
lean_object* v_a_3347_; lean_object* v___x_3349_; uint8_t v_isShared_3350_; uint8_t v_isSharedCheck_3354_; 
lean_dec(v_constName_3330_);
v_a_3347_ = lean_ctor_get(v___x_3334_, 0);
v_isSharedCheck_3354_ = !lean_is_exclusive(v___x_3334_);
if (v_isSharedCheck_3354_ == 0)
{
v___x_3349_ = v___x_3334_;
v_isShared_3350_ = v_isSharedCheck_3354_;
goto v_resetjp_3348_;
}
else
{
lean_inc(v_a_3347_);
lean_dec(v___x_3334_);
v___x_3349_ = lean_box(0);
v_isShared_3350_ = v_isSharedCheck_3354_;
goto v_resetjp_3348_;
}
v_resetjp_3348_:
{
lean_object* v___x_3352_; 
if (v_isShared_3350_ == 0)
{
v___x_3352_ = v___x_3349_;
goto v_reusejp_3351_;
}
else
{
lean_object* v_reuseFailAlloc_3353_; 
v_reuseFailAlloc_3353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3353_, 0, v_a_3347_);
v___x_3352_ = v_reuseFailAlloc_3353_;
goto v_reusejp_3351_;
}
v_reusejp_3351_:
{
return v___x_3352_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9___boxed(lean_object* v_constName_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_, lean_object* v___y_3358_){
_start:
{
lean_object* v_res_3359_; 
v_res_3359_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9(v_constName_3355_, v___y_3356_, v___y_3357_);
lean_dec(v___y_3357_);
lean_dec_ref(v___y_3356_);
return v_res_3359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5(lean_object* v_stx_3360_, lean_object* v_n_3361_, lean_object* v_expectedType_x3f_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_){
_start:
{
lean_object* v___x_3366_; 
v___x_3366_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9(v_n_3361_, v___y_3363_, v___y_3364_);
if (lean_obj_tag(v___x_3366_) == 0)
{
lean_object* v_a_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; uint8_t v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; 
v_a_3367_ = lean_ctor_get(v___x_3366_, 0);
lean_inc(v_a_3367_);
lean_dec_ref_known(v___x_3366_, 1);
v___x_3368_ = lean_box(0);
v___x_3369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3369_, 0, v___x_3368_);
lean_ctor_set(v___x_3369_, 1, v_stx_3360_);
v___x_3370_ = l_Lean_LocalContext_empty;
v___x_3371_ = 0;
v___x_3372_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_3372_, 0, v___x_3369_);
lean_ctor_set(v___x_3372_, 1, v___x_3370_);
lean_ctor_set(v___x_3372_, 2, v_expectedType_x3f_3362_);
lean_ctor_set(v___x_3372_, 3, v_a_3367_);
lean_ctor_set_uint8(v___x_3372_, sizeof(void*)*4, v___x_3371_);
lean_ctor_set_uint8(v___x_3372_, sizeof(void*)*4 + 1, v___x_3371_);
v___x_3373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3373_, 0, v___x_3372_);
v___x_3374_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10(v___x_3373_, v___y_3363_, v___y_3364_);
return v___x_3374_;
}
else
{
lean_object* v_a_3375_; lean_object* v___x_3377_; uint8_t v_isShared_3378_; uint8_t v_isSharedCheck_3382_; 
lean_dec(v_expectedType_x3f_3362_);
lean_dec(v_stx_3360_);
v_a_3375_ = lean_ctor_get(v___x_3366_, 0);
v_isSharedCheck_3382_ = !lean_is_exclusive(v___x_3366_);
if (v_isSharedCheck_3382_ == 0)
{
v___x_3377_ = v___x_3366_;
v_isShared_3378_ = v_isSharedCheck_3382_;
goto v_resetjp_3376_;
}
else
{
lean_inc(v_a_3375_);
lean_dec(v___x_3366_);
v___x_3377_ = lean_box(0);
v_isShared_3378_ = v_isSharedCheck_3382_;
goto v_resetjp_3376_;
}
v_resetjp_3376_:
{
lean_object* v___x_3380_; 
if (v_isShared_3378_ == 0)
{
v___x_3380_ = v___x_3377_;
goto v_reusejp_3379_;
}
else
{
lean_object* v_reuseFailAlloc_3381_; 
v_reuseFailAlloc_3381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3381_, 0, v_a_3375_);
v___x_3380_ = v_reuseFailAlloc_3381_;
goto v_reusejp_3379_;
}
v_reusejp_3379_:
{
return v___x_3380_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5___boxed(lean_object* v_stx_3383_, lean_object* v_n_3384_, lean_object* v_expectedType_x3f_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_){
_start:
{
lean_object* v_res_3389_; 
v_res_3389_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5(v_stx_3383_, v_n_3384_, v_expectedType_x3f_3385_, v___y_3386_, v___y_3387_);
lean_dec(v___y_3387_);
lean_dec_ref(v___y_3386_);
return v_res_3389_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12___redArg(lean_object* v_declName_3390_, uint8_t v_s_3391_, lean_object* v___y_3392_){
_start:
{
lean_object* v___x_3394_; lean_object* v_env_3395_; lean_object* v_messages_3396_; lean_object* v_scopes_3397_; lean_object* v_usedQuotCtxts_3398_; lean_object* v_nextMacroScope_3399_; lean_object* v_maxRecDepth_3400_; lean_object* v_ngen_3401_; lean_object* v_auxDeclNGen_3402_; lean_object* v_infoState_3403_; lean_object* v_traceState_3404_; lean_object* v_snapshotTasks_3405_; lean_object* v_prevLinterStates_3406_; lean_object* v_codeQualityEntryTasks_3407_; lean_object* v___x_3409_; uint8_t v_isShared_3410_; uint8_t v_isSharedCheck_3420_; 
v___x_3394_ = lean_st_ref_take(v___y_3392_);
v_env_3395_ = lean_ctor_get(v___x_3394_, 0);
v_messages_3396_ = lean_ctor_get(v___x_3394_, 1);
v_scopes_3397_ = lean_ctor_get(v___x_3394_, 2);
v_usedQuotCtxts_3398_ = lean_ctor_get(v___x_3394_, 3);
v_nextMacroScope_3399_ = lean_ctor_get(v___x_3394_, 4);
v_maxRecDepth_3400_ = lean_ctor_get(v___x_3394_, 5);
v_ngen_3401_ = lean_ctor_get(v___x_3394_, 6);
v_auxDeclNGen_3402_ = lean_ctor_get(v___x_3394_, 7);
v_infoState_3403_ = lean_ctor_get(v___x_3394_, 8);
v_traceState_3404_ = lean_ctor_get(v___x_3394_, 9);
v_snapshotTasks_3405_ = lean_ctor_get(v___x_3394_, 10);
v_prevLinterStates_3406_ = lean_ctor_get(v___x_3394_, 11);
v_codeQualityEntryTasks_3407_ = lean_ctor_get(v___x_3394_, 12);
v_isSharedCheck_3420_ = !lean_is_exclusive(v___x_3394_);
if (v_isSharedCheck_3420_ == 0)
{
v___x_3409_ = v___x_3394_;
v_isShared_3410_ = v_isSharedCheck_3420_;
goto v_resetjp_3408_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3407_);
lean_inc(v_prevLinterStates_3406_);
lean_inc(v_snapshotTasks_3405_);
lean_inc(v_traceState_3404_);
lean_inc(v_infoState_3403_);
lean_inc(v_auxDeclNGen_3402_);
lean_inc(v_ngen_3401_);
lean_inc(v_maxRecDepth_3400_);
lean_inc(v_nextMacroScope_3399_);
lean_inc(v_usedQuotCtxts_3398_);
lean_inc(v_scopes_3397_);
lean_inc(v_messages_3396_);
lean_inc(v_env_3395_);
lean_dec(v___x_3394_);
v___x_3409_ = lean_box(0);
v_isShared_3410_ = v_isSharedCheck_3420_;
goto v_resetjp_3408_;
}
v_resetjp_3408_:
{
lean_object* v___x_3411_; uint8_t v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3416_; 
v___x_3411_ = lean_box(0);
v___x_3412_ = 0;
v___x_3413_ = lean_box(0);
v___x_3414_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_3395_, v_declName_3390_, v_s_3391_, v___x_3412_, v___x_3413_);
if (v_isShared_3410_ == 0)
{
lean_ctor_set(v___x_3409_, 0, v___x_3414_);
v___x_3416_ = v___x_3409_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3419_; 
v_reuseFailAlloc_3419_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3419_, 0, v___x_3414_);
lean_ctor_set(v_reuseFailAlloc_3419_, 1, v_messages_3396_);
lean_ctor_set(v_reuseFailAlloc_3419_, 2, v_scopes_3397_);
lean_ctor_set(v_reuseFailAlloc_3419_, 3, v_usedQuotCtxts_3398_);
lean_ctor_set(v_reuseFailAlloc_3419_, 4, v_nextMacroScope_3399_);
lean_ctor_set(v_reuseFailAlloc_3419_, 5, v_maxRecDepth_3400_);
lean_ctor_set(v_reuseFailAlloc_3419_, 6, v_ngen_3401_);
lean_ctor_set(v_reuseFailAlloc_3419_, 7, v_auxDeclNGen_3402_);
lean_ctor_set(v_reuseFailAlloc_3419_, 8, v_infoState_3403_);
lean_ctor_set(v_reuseFailAlloc_3419_, 9, v_traceState_3404_);
lean_ctor_set(v_reuseFailAlloc_3419_, 10, v_snapshotTasks_3405_);
lean_ctor_set(v_reuseFailAlloc_3419_, 11, v_prevLinterStates_3406_);
lean_ctor_set(v_reuseFailAlloc_3419_, 12, v_codeQualityEntryTasks_3407_);
v___x_3416_ = v_reuseFailAlloc_3419_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
lean_object* v___x_3417_; lean_object* v___x_3418_; 
v___x_3417_ = lean_st_ref_put(v___y_3392_, v___x_3416_);
v___x_3418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3418_, 0, v___x_3411_);
return v___x_3418_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12___redArg___boxed(lean_object* v_declName_3421_, lean_object* v_s_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_){
_start:
{
uint8_t v_s_boxed_3425_; lean_object* v_res_3426_; 
v_s_boxed_3425_ = lean_unbox(v_s_3422_);
v_res_3426_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12___redArg(v_declName_3421_, v_s_boxed_3425_, v___y_3423_);
lean_dec(v___y_3423_);
return v_res_3426_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6(lean_object* v_declName_3427_, lean_object* v___y_3428_, lean_object* v___y_3429_){
_start:
{
uint8_t v___x_3431_; lean_object* v___x_3432_; 
v___x_3431_ = 2;
v___x_3432_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12___redArg(v_declName_3427_, v___x_3431_, v___y_3429_);
return v___x_3432_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6___boxed(lean_object* v_declName_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_){
_start:
{
lean_object* v_res_3437_; 
v_res_3437_ = l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6(v_declName_3433_, v___y_3434_, v___y_3435_);
lean_dec(v___y_3435_);
lean_dec_ref(v___y_3434_);
return v_res_3437_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg(lean_object* v_as_x27_3438_, lean_object* v_b_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_){
_start:
{
if (lean_obj_tag(v_as_x27_3438_) == 0)
{
lean_object* v___x_3443_; 
v___x_3443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3443_, 0, v_b_3439_);
return v___x_3443_;
}
else
{
lean_object* v_head_3444_; lean_object* v_tail_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; 
v_head_3444_ = lean_ctor_get(v_as_x27_3438_, 0);
v_tail_3445_ = lean_ctor_get(v_as_x27_3438_, 1);
v___x_3446_ = lean_box(0);
lean_inc(v_head_3444_);
v___x_3447_ = l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6(v_head_3444_, v___y_3440_, v___y_3441_);
lean_dec_ref(v___x_3447_);
v_as_x27_3438_ = v_tail_3445_;
v_b_3439_ = v___x_3446_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg___boxed(lean_object* v_as_x27_3449_, lean_object* v_b_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_){
_start:
{
lean_object* v_res_3454_; 
v_res_3454_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg(v_as_x27_3449_, v_b_3450_, v___y_3451_, v___y_3452_);
lean_dec(v___y_3452_);
lean_dec_ref(v___y_3451_);
lean_dec(v_as_x27_3449_);
return v_res_3454_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__3(size_t v_sz_3455_, size_t v_i_3456_, lean_object* v_bs_3457_){
_start:
{
uint8_t v___x_3458_; 
v___x_3458_ = lean_usize_dec_lt(v_i_3456_, v_sz_3455_);
if (v___x_3458_ == 0)
{
return v_bs_3457_;
}
else
{
lean_object* v_v_3459_; lean_object* v___x_3460_; lean_object* v_bs_x27_3461_; size_t v___x_3462_; size_t v___x_3463_; lean_object* v___x_3464_; 
v_v_3459_ = lean_array_uget(v_bs_3457_, v_i_3456_);
v___x_3460_ = lean_unsigned_to_nat(0u);
v_bs_x27_3461_ = lean_array_uset(v_bs_3457_, v_i_3456_, v___x_3460_);
v___x_3462_ = ((size_t)1ULL);
v___x_3463_ = lean_usize_add(v_i_3456_, v___x_3462_);
v___x_3464_ = lean_array_uset(v_bs_x27_3461_, v_i_3456_, v_v_3459_);
v_i_3456_ = v___x_3463_;
v_bs_3457_ = v___x_3464_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__3___boxed(lean_object* v_sz_3466_, lean_object* v_i_3467_, lean_object* v_bs_3468_){
_start:
{
size_t v_sz_boxed_3469_; size_t v_i_boxed_3470_; lean_object* v_res_3471_; 
v_sz_boxed_3469_ = lean_unbox_usize(v_sz_3466_);
lean_dec(v_sz_3466_);
v_i_boxed_3470_ = lean_unbox_usize(v_i_3467_);
lean_dec(v_i_3467_);
v_res_3471_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__3(v_sz_boxed_3469_, v_i_boxed_3470_, v_bs_3468_);
return v_res_3471_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___redArg(lean_object* v_as_x27_3472_, lean_object* v_b_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_){
_start:
{
if (lean_obj_tag(v_as_x27_3472_) == 0)
{
lean_object* v___x_3477_; 
v___x_3477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3477_, 0, v_b_3473_);
return v___x_3477_;
}
else
{
lean_object* v_head_3478_; lean_object* v_tail_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; 
v_head_3478_ = lean_ctor_get(v_as_x27_3472_, 0);
v_tail_3479_ = lean_ctor_get(v_as_x27_3472_, 1);
v___x_3480_ = lean_box(0);
lean_inc(v_head_3478_);
v___x_3481_ = lean_alloc_closure((void*)(l_Lean_enableRealizationsForConst___boxed), 4, 1);
lean_closure_set(v___x_3481_, 0, v_head_3478_);
v___x_3482_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_3481_, v___y_3474_, v___y_3475_);
if (lean_obj_tag(v___x_3482_) == 0)
{
lean_dec_ref_known(v___x_3482_, 1);
v_as_x27_3472_ = v_tail_3479_;
v_b_3473_ = v___x_3480_;
goto _start;
}
else
{
return v___x_3482_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___redArg___boxed(lean_object* v_as_x27_3484_, lean_object* v_b_3485_, lean_object* v___y_3486_, lean_object* v___y_3487_, lean_object* v___y_3488_){
_start:
{
lean_object* v_res_3489_; 
v_res_3489_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___redArg(v_as_x27_3484_, v_b_3485_, v___y_3486_, v___y_3487_);
lean_dec(v___y_3487_);
lean_dec_ref(v___y_3486_);
lean_dec(v_as_x27_3484_);
return v_res_3489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___redArg(lean_object* v_stx_3490_, lean_object* v___y_3491_){
_start:
{
uint8_t v___x_3493_; lean_object* v___x_3494_; 
v___x_3493_ = 0;
v___x_3494_ = l_Lean_Syntax_getRange_x3f(v_stx_3490_, v___x_3493_);
if (lean_obj_tag(v___x_3494_) == 1)
{
lean_object* v_val_3495_; lean_object* v___x_3497_; uint8_t v_isShared_3498_; uint8_t v_isSharedCheck_3507_; 
v_val_3495_ = lean_ctor_get(v___x_3494_, 0);
v_isSharedCheck_3507_ = !lean_is_exclusive(v___x_3494_);
if (v_isSharedCheck_3507_ == 0)
{
v___x_3497_ = v___x_3494_;
v_isShared_3498_ = v_isSharedCheck_3507_;
goto v_resetjp_3496_;
}
else
{
lean_inc(v_val_3495_);
lean_dec(v___x_3494_);
v___x_3497_ = lean_box(0);
v_isShared_3498_ = v_isSharedCheck_3507_;
goto v_resetjp_3496_;
}
v_resetjp_3496_:
{
lean_object* v_fileMap_3499_; lean_object* v_start_3500_; lean_object* v_stop_3501_; lean_object* v___x_3502_; lean_object* v___x_3504_; 
v_fileMap_3499_ = lean_ctor_get(v___y_3491_, 1);
v_start_3500_ = lean_ctor_get(v_val_3495_, 0);
lean_inc(v_start_3500_);
v_stop_3501_ = lean_ctor_get(v_val_3495_, 1);
lean_inc(v_stop_3501_);
lean_dec(v_val_3495_);
lean_inc_ref(v_fileMap_3499_);
v___x_3502_ = l_Lean_DeclarationRange_ofStringPositions(v_fileMap_3499_, v_start_3500_, v_stop_3501_);
lean_dec(v_stop_3501_);
lean_dec(v_start_3500_);
if (v_isShared_3498_ == 0)
{
lean_ctor_set(v___x_3497_, 0, v___x_3502_);
v___x_3504_ = v___x_3497_;
goto v_reusejp_3503_;
}
else
{
lean_object* v_reuseFailAlloc_3506_; 
v_reuseFailAlloc_3506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3506_, 0, v___x_3502_);
v___x_3504_ = v_reuseFailAlloc_3506_;
goto v_reusejp_3503_;
}
v_reusejp_3503_:
{
lean_object* v___x_3505_; 
v___x_3505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3505_, 0, v___x_3504_);
return v___x_3505_;
}
}
}
else
{
lean_object* v___x_3508_; lean_object* v___x_3509_; 
lean_dec(v___x_3494_);
v___x_3508_ = lean_box(0);
v___x_3509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3509_, 0, v___x_3508_);
return v___x_3509_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___redArg___boxed(lean_object* v_stx_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_){
_start:
{
lean_object* v_res_3513_; 
v_res_3513_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___redArg(v_stx_3510_, v___y_3511_);
lean_dec_ref(v___y_3511_);
lean_dec(v_stx_3510_);
return v_res_3513_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7___redArg(lean_object* v_declName_3514_, lean_object* v_declRanges_3515_, lean_object* v___y_3516_){
_start:
{
uint8_t v___x_3518_; 
v___x_3518_ = l_Lean_Name_isAnonymous(v_declName_3514_);
if (v___x_3518_ == 0)
{
lean_object* v___x_3519_; lean_object* v_env_3520_; lean_object* v_messages_3521_; lean_object* v_scopes_3522_; lean_object* v_usedQuotCtxts_3523_; lean_object* v_nextMacroScope_3524_; lean_object* v_maxRecDepth_3525_; lean_object* v_ngen_3526_; lean_object* v_auxDeclNGen_3527_; lean_object* v_infoState_3528_; lean_object* v_traceState_3529_; lean_object* v_snapshotTasks_3530_; lean_object* v_prevLinterStates_3531_; lean_object* v_codeQualityEntryTasks_3532_; lean_object* v___x_3534_; uint8_t v_isShared_3535_; uint8_t v_isSharedCheck_3544_; 
v___x_3519_ = lean_st_ref_take(v___y_3516_);
v_env_3520_ = lean_ctor_get(v___x_3519_, 0);
v_messages_3521_ = lean_ctor_get(v___x_3519_, 1);
v_scopes_3522_ = lean_ctor_get(v___x_3519_, 2);
v_usedQuotCtxts_3523_ = lean_ctor_get(v___x_3519_, 3);
v_nextMacroScope_3524_ = lean_ctor_get(v___x_3519_, 4);
v_maxRecDepth_3525_ = lean_ctor_get(v___x_3519_, 5);
v_ngen_3526_ = lean_ctor_get(v___x_3519_, 6);
v_auxDeclNGen_3527_ = lean_ctor_get(v___x_3519_, 7);
v_infoState_3528_ = lean_ctor_get(v___x_3519_, 8);
v_traceState_3529_ = lean_ctor_get(v___x_3519_, 9);
v_snapshotTasks_3530_ = lean_ctor_get(v___x_3519_, 10);
v_prevLinterStates_3531_ = lean_ctor_get(v___x_3519_, 11);
v_codeQualityEntryTasks_3532_ = lean_ctor_get(v___x_3519_, 12);
v_isSharedCheck_3544_ = !lean_is_exclusive(v___x_3519_);
if (v_isSharedCheck_3544_ == 0)
{
v___x_3534_ = v___x_3519_;
v_isShared_3535_ = v_isSharedCheck_3544_;
goto v_resetjp_3533_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3532_);
lean_inc(v_prevLinterStates_3531_);
lean_inc(v_snapshotTasks_3530_);
lean_inc(v_traceState_3529_);
lean_inc(v_infoState_3528_);
lean_inc(v_auxDeclNGen_3527_);
lean_inc(v_ngen_3526_);
lean_inc(v_maxRecDepth_3525_);
lean_inc(v_nextMacroScope_3524_);
lean_inc(v_usedQuotCtxts_3523_);
lean_inc(v_scopes_3522_);
lean_inc(v_messages_3521_);
lean_inc(v_env_3520_);
lean_dec(v___x_3519_);
v___x_3534_ = lean_box(0);
v_isShared_3535_ = v_isSharedCheck_3544_;
goto v_resetjp_3533_;
}
v_resetjp_3533_:
{
lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3540_; 
v___x_3536_ = lean_box(0);
v___x_3537_ = l_Lean_declRangeExt;
v___x_3538_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_3537_, v_env_3520_, v_declName_3514_, v_declRanges_3515_);
if (v_isShared_3535_ == 0)
{
lean_ctor_set(v___x_3534_, 0, v___x_3538_);
v___x_3540_ = v___x_3534_;
goto v_reusejp_3539_;
}
else
{
lean_object* v_reuseFailAlloc_3543_; 
v_reuseFailAlloc_3543_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3543_, 0, v___x_3538_);
lean_ctor_set(v_reuseFailAlloc_3543_, 1, v_messages_3521_);
lean_ctor_set(v_reuseFailAlloc_3543_, 2, v_scopes_3522_);
lean_ctor_set(v_reuseFailAlloc_3543_, 3, v_usedQuotCtxts_3523_);
lean_ctor_set(v_reuseFailAlloc_3543_, 4, v_nextMacroScope_3524_);
lean_ctor_set(v_reuseFailAlloc_3543_, 5, v_maxRecDepth_3525_);
lean_ctor_set(v_reuseFailAlloc_3543_, 6, v_ngen_3526_);
lean_ctor_set(v_reuseFailAlloc_3543_, 7, v_auxDeclNGen_3527_);
lean_ctor_set(v_reuseFailAlloc_3543_, 8, v_infoState_3528_);
lean_ctor_set(v_reuseFailAlloc_3543_, 9, v_traceState_3529_);
lean_ctor_set(v_reuseFailAlloc_3543_, 10, v_snapshotTasks_3530_);
lean_ctor_set(v_reuseFailAlloc_3543_, 11, v_prevLinterStates_3531_);
lean_ctor_set(v_reuseFailAlloc_3543_, 12, v_codeQualityEntryTasks_3532_);
v___x_3540_ = v_reuseFailAlloc_3543_;
goto v_reusejp_3539_;
}
v_reusejp_3539_:
{
lean_object* v___x_3541_; lean_object* v___x_3542_; 
v___x_3541_ = lean_st_ref_put(v___y_3516_, v___x_3540_);
v___x_3542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3542_, 0, v___x_3536_);
return v___x_3542_;
}
}
}
else
{
lean_object* v___x_3545_; lean_object* v___x_3546_; 
lean_dec_ref(v_declRanges_3515_);
lean_dec(v_declName_3514_);
v___x_3545_ = lean_box(0);
v___x_3546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3546_, 0, v___x_3545_);
return v___x_3546_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7___redArg___boxed(lean_object* v_declName_3547_, lean_object* v_declRanges_3548_, lean_object* v___y_3549_, lean_object* v___y_3550_){
_start:
{
lean_object* v_res_3551_; 
v_res_3551_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7___redArg(v_declName_3547_, v_declRanges_3548_, v___y_3549_);
lean_dec(v___y_3549_);
return v_res_3551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4(lean_object* v_declName_3552_, lean_object* v_rangeStx_3553_, lean_object* v_selectionRangeStx_3554_, lean_object* v___y_3555_, lean_object* v___y_3556_){
_start:
{
lean_object* v___x_3558_; lean_object* v_a_3559_; lean_object* v___x_3561_; uint8_t v_isShared_3562_; uint8_t v_isSharedCheck_3575_; 
v___x_3558_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___redArg(v_rangeStx_3553_, v___y_3555_);
v_a_3559_ = lean_ctor_get(v___x_3558_, 0);
v_isSharedCheck_3575_ = !lean_is_exclusive(v___x_3558_);
if (v_isSharedCheck_3575_ == 0)
{
v___x_3561_ = v___x_3558_;
v_isShared_3562_ = v_isSharedCheck_3575_;
goto v_resetjp_3560_;
}
else
{
lean_inc(v_a_3559_);
lean_dec(v___x_3558_);
v___x_3561_ = lean_box(0);
v_isShared_3562_ = v_isSharedCheck_3575_;
goto v_resetjp_3560_;
}
v_resetjp_3560_:
{
if (lean_obj_tag(v_a_3559_) == 1)
{
lean_object* v_val_3563_; lean_object* v_a_3565_; lean_object* v___x_3568_; lean_object* v_a_3569_; 
lean_del_object(v___x_3561_);
v_val_3563_ = lean_ctor_get(v_a_3559_, 0);
lean_inc(v_val_3563_);
lean_dec_ref_known(v_a_3559_, 1);
v___x_3568_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___redArg(v_selectionRangeStx_3554_, v___y_3555_);
v_a_3569_ = lean_ctor_get(v___x_3568_, 0);
lean_inc(v_a_3569_);
lean_dec_ref(v___x_3568_);
if (lean_obj_tag(v_a_3569_) == 0)
{
lean_inc(v_val_3563_);
v_a_3565_ = v_val_3563_;
goto v___jp_3564_;
}
else
{
lean_object* v_val_3570_; 
v_val_3570_ = lean_ctor_get(v_a_3569_, 0);
lean_inc(v_val_3570_);
lean_dec_ref_known(v_a_3569_, 1);
v_a_3565_ = v_val_3570_;
goto v___jp_3564_;
}
v___jp_3564_:
{
lean_object* v___x_3566_; lean_object* v___x_3567_; 
v___x_3566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3566_, 0, v_val_3563_);
lean_ctor_set(v___x_3566_, 1, v_a_3565_);
v___x_3567_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7___redArg(v_declName_3552_, v___x_3566_, v___y_3556_);
return v___x_3567_;
}
}
else
{
lean_object* v___x_3571_; lean_object* v___x_3573_; 
lean_dec(v_a_3559_);
lean_dec(v_declName_3552_);
v___x_3571_ = lean_box(0);
if (v_isShared_3562_ == 0)
{
lean_ctor_set(v___x_3561_, 0, v___x_3571_);
v___x_3573_ = v___x_3561_;
goto v_reusejp_3572_;
}
else
{
lean_object* v_reuseFailAlloc_3574_; 
v_reuseFailAlloc_3574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3574_, 0, v___x_3571_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4___boxed(lean_object* v_declName_3576_, lean_object* v_rangeStx_3577_, lean_object* v_selectionRangeStx_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_, lean_object* v___y_3581_){
_start:
{
lean_object* v_res_3582_; 
v_res_3582_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4(v_declName_3576_, v_rangeStx_3577_, v_selectionRangeStx_3578_, v___y_3579_, v___y_3580_);
lean_dec(v___y_3580_);
lean_dec_ref(v___y_3579_);
lean_dec(v_selectionRangeStx_3578_);
lean_dec(v_rangeStx_3577_);
return v_res_3582_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabNewtype___closed__17(void){
_start:
{
lean_object* v___x_3623_; 
v___x_3623_ = l_Array_mkArray0___redArg();
return v___x_3623_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype(lean_object* v_x_3638_, lean_object* v_a_3639_, lean_object* v_a_3640_){
_start:
{
lean_object* v___x_3642_; uint8_t v___x_3643_; 
v___x_3642_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___closed__1));
lean_inc(v_x_3638_);
v___x_3643_ = l_Lean_Syntax_isOfKind(v_x_3638_, v___x_3642_);
if (v___x_3643_ == 0)
{
lean_object* v___x_3644_; 
lean_dec(v_x_3638_);
v___x_3644_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg();
return v___x_3644_;
}
else
{
lean_object* v___x_3645_; lean_object* v_mods_3646_; lean_object* v___x_3647_; uint8_t v___x_3648_; 
v___x_3645_ = lean_unsigned_to_nat(0u);
v_mods_3646_ = l_Lean_Syntax_getArg(v_x_3638_, v___x_3645_);
v___x_3647_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___closed__3));
lean_inc(v_mods_3646_);
v___x_3648_ = l_Lean_Syntax_isOfKind(v_mods_3646_, v___x_3647_);
if (v___x_3648_ == 0)
{
lean_object* v___x_3649_; 
lean_dec(v_mods_3646_);
lean_dec(v_x_3638_);
v___x_3649_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg();
return v___x_3649_;
}
else
{
lean_object* v___x_3650_; lean_object* v_projId_3651_; lean_object* v___x_3652_; uint8_t v___x_3653_; 
v___x_3650_ = lean_unsigned_to_nat(7u);
v_projId_3651_ = l_Lean_Syntax_getArg(v_x_3638_, v___x_3650_);
v___x_3652_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___closed__5));
lean_inc(v_projId_3651_);
v___x_3653_ = l_Lean_Syntax_isOfKind(v_projId_3651_, v___x_3652_);
if (v___x_3653_ == 0)
{
lean_object* v___x_3654_; 
lean_dec(v_projId_3651_);
lean_dec(v_mods_3646_);
lean_dec(v_x_3638_);
v___x_3654_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg();
return v___x_3654_;
}
else
{
lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v_params_3662_; lean_object* v___x_3663_; 
v___x_3655_ = lean_unsigned_to_nat(2u);
v___x_3656_ = l_Lean_Syntax_getArg(v_x_3638_, v___x_3655_);
v___x_3657_ = lean_unsigned_to_nat(3u);
v___x_3658_ = l_Lean_Syntax_getArg(v_x_3638_, v___x_3657_);
v___x_3659_ = lean_unsigned_to_nat(5u);
v___x_3660_ = l_Lean_Syntax_getArg(v_x_3638_, v___x_3659_);
lean_dec(v_x_3638_);
v___x_3661_ = lean_box(0);
v_params_3662_ = l_Lean_Syntax_getArgs(v___x_3658_);
lean_dec(v___x_3658_);
lean_inc(v_mods_3646_);
v___x_3663_ = l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1(v_mods_3646_, v_a_3639_, v_a_3640_);
if (lean_obj_tag(v___x_3663_) == 0)
{
lean_object* v_a_3664_; lean_object* v___x_3665_; 
v_a_3664_ = lean_ctor_get(v___x_3663_, 0);
lean_inc(v_a_3664_);
lean_dec_ref_known(v___x_3663_, 1);
v___x_3665_ = l_Lean_Elab_Command_getScope___redArg(v_a_3640_);
if (lean_obj_tag(v___x_3665_) == 0)
{
lean_object* v_a_3666_; lean_object* v_currNamespace_3667_; lean_object* v___x_3668_; 
v_a_3666_ = lean_ctor_get(v___x_3665_, 0);
lean_inc(v_a_3666_);
lean_dec_ref_known(v___x_3665_, 1);
v_currNamespace_3667_ = lean_ctor_get(v_a_3666_, 2);
lean_inc(v_currNamespace_3667_);
lean_dec(v_a_3666_);
v___x_3668_ = l_Lean_Elab_Command_getLevelNames___redArg(v_a_3640_);
if (lean_obj_tag(v___x_3668_) == 0)
{
lean_object* v_a_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; 
v_a_3669_ = lean_ctor_get(v___x_3668_, 0);
lean_inc(v_a_3669_);
lean_dec_ref_known(v___x_3668_, 1);
lean_inc(v___x_3656_);
v___x_3670_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandDeclId___boxed), 11, 4);
lean_closure_set(v___x_3670_, 0, v_currNamespace_3667_);
lean_closure_set(v___x_3670_, 1, v_a_3669_);
lean_closure_set(v___x_3670_, 2, v___x_3656_);
lean_closure_set(v___x_3670_, 3, v_a_3664_);
v___x_3671_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_3670_, v_a_3639_, v_a_3640_);
if (lean_obj_tag(v___x_3671_) == 0)
{
lean_object* v_a_3672_; lean_object* v_declName_3673_; lean_object* v___x_3675_; uint8_t v_isShared_3676_; uint8_t v_isSharedCheck_3786_; 
v_a_3672_ = lean_ctor_get(v___x_3671_, 0);
lean_inc(v_a_3672_);
lean_dec_ref_known(v___x_3671_, 1);
v_declName_3673_ = lean_ctor_get(v_a_3672_, 1);
v_isSharedCheck_3786_ = !lean_is_exclusive(v_a_3672_);
if (v_isSharedCheck_3786_ == 0)
{
lean_object* v_unused_3787_; lean_object* v_unused_3788_; lean_object* v_unused_3789_; 
v_unused_3787_ = lean_ctor_get(v_a_3672_, 3);
lean_dec(v_unused_3787_);
v_unused_3788_ = lean_ctor_get(v_a_3672_, 2);
lean_dec(v_unused_3788_);
v_unused_3789_ = lean_ctor_get(v_a_3672_, 0);
lean_dec(v_unused_3789_);
v___x_3675_ = v_a_3672_;
v_isShared_3676_ = v_isSharedCheck_3786_;
goto v_resetjp_3674_;
}
else
{
lean_inc(v_declName_3673_);
lean_dec(v_a_3672_);
v___x_3675_ = lean_box(0);
v_isShared_3676_ = v_isSharedCheck_3786_;
goto v_resetjp_3674_;
}
v_resetjp_3674_:
{
lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; 
v___x_3677_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___closed__7));
lean_inc_n(v_declName_3673_, 2);
v___x_3678_ = l_Lean_Name_append(v_declName_3673_, v___x_3677_);
v___x_3679_ = l_Lean_TSyntax_getId(v_projId_3651_);
lean_inc(v___x_3679_);
v___x_3680_ = l_Lean_Name_append(v_declName_3673_, v___x_3679_);
v___x_3681_ = l_Lean_Elab_Command_getRef___redArg(v_a_3639_);
if (lean_obj_tag(v___x_3681_) == 0)
{
lean_object* v_a_3682_; uint8_t v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3767_; 
v_a_3682_ = lean_ctor_get(v___x_3681_, 0);
lean_inc(v_a_3682_);
lean_dec_ref_known(v___x_3681_, 1);
v___x_3683_ = 0;
v___x_3684_ = l_Lean_SourceInfo_fromRef(v_a_3682_, v___x_3683_);
lean_dec(v_a_3682_);
v___x_3767_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_3639_);
if (lean_obj_tag(v___x_3767_) == 0)
{
lean_object* v_quotContext_x3f_3768_; 
lean_dec_ref_known(v___x_3767_, 1);
v_quotContext_x3f_3768_ = lean_ctor_get(v_a_3639_, 5);
if (lean_obj_tag(v_quotContext_x3f_3768_) == 0)
{
lean_object* v___x_3769_; 
v___x_3769_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v_a_3640_);
lean_dec_ref(v___x_3769_);
goto v___jp_3685_;
}
else
{
goto v___jp_3685_;
}
}
else
{
lean_object* v_a_3770_; lean_object* v___x_3772_; uint8_t v_isShared_3773_; uint8_t v_isSharedCheck_3777_; 
lean_dec(v___x_3684_);
lean_dec(v___x_3680_);
lean_dec(v___x_3679_);
lean_dec(v___x_3678_);
lean_del_object(v___x_3675_);
lean_dec(v_declName_3673_);
lean_dec_ref(v_params_3662_);
lean_dec(v___x_3660_);
lean_dec(v___x_3656_);
lean_dec(v_projId_3651_);
lean_dec(v_mods_3646_);
v_a_3770_ = lean_ctor_get(v___x_3767_, 0);
v_isSharedCheck_3777_ = !lean_is_exclusive(v___x_3767_);
if (v_isSharedCheck_3777_ == 0)
{
v___x_3772_ = v___x_3767_;
v_isShared_3773_ = v_isSharedCheck_3777_;
goto v_resetjp_3771_;
}
else
{
lean_inc(v_a_3770_);
lean_dec(v___x_3767_);
v___x_3772_ = lean_box(0);
v_isShared_3773_ = v_isSharedCheck_3777_;
goto v_resetjp_3771_;
}
v_resetjp_3771_:
{
lean_object* v___x_3775_; 
if (v_isShared_3773_ == 0)
{
v___x_3775_ = v___x_3772_;
goto v_reusejp_3774_;
}
else
{
lean_object* v_reuseFailAlloc_3776_; 
v_reuseFailAlloc_3776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3776_, 0, v_a_3770_);
v___x_3775_ = v_reuseFailAlloc_3776_;
goto v_reusejp_3774_;
}
v_reusejp_3774_:
{
return v___x_3775_;
}
}
}
v___jp_3685_:
{
lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; size_t v_sz_3693_; size_t v___x_3694_; lean_object* v___x_3695_; size_t v_sz_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; 
v___x_3686_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___closed__9));
v___x_3687_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___closed__11));
v___x_3688_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___closed__12));
lean_inc_n(v___x_3684_, 8);
v___x_3689_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3689_, 0, v___x_3684_);
lean_ctor_set(v___x_3689_, 1, v___x_3688_);
v___x_3690_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___closed__14));
v___x_3691_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___closed__16));
v___x_3692_ = lean_obj_once(&l_Lean_Elab_Command_elabNewtype___closed__17, &l_Lean_Elab_Command_elabNewtype___closed__17_once, _init_l_Lean_Elab_Command_elabNewtype___closed__17);
v_sz_3693_ = lean_array_size(v_params_3662_);
v___x_3694_ = ((size_t)0ULL);
v___x_3695_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(v_sz_3693_, v___x_3694_, v_params_3662_);
v_sz_3696_ = lean_array_size(v___x_3695_);
v___x_3697_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__3(v_sz_3696_, v___x_3694_, v___x_3695_);
v___x_3698_ = l_Array_append___redArg(v___x_3692_, v___x_3697_);
lean_dec_ref(v___x_3697_);
v___x_3699_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3699_, 0, v___x_3684_);
lean_ctor_set(v___x_3699_, 1, v___x_3691_);
lean_ctor_set(v___x_3699_, 2, v___x_3698_);
v___x_3700_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3700_, 0, v___x_3684_);
lean_ctor_set(v___x_3700_, 1, v___x_3691_);
lean_ctor_set(v___x_3700_, 2, v___x_3692_);
lean_inc_ref_n(v___x_3700_, 4);
v___x_3701_ = l_Lean_Syntax_node2(v___x_3684_, v___x_3690_, v___x_3699_, v___x_3700_);
v___x_3702_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___closed__19));
v___x_3703_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___closed__20));
v___x_3704_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3704_, 0, v___x_3684_);
lean_ctor_set(v___x_3704_, 1, v___x_3703_);
v___x_3705_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___closed__23));
v___x_3706_ = l_Lean_Syntax_node2(v___x_3684_, v___x_3705_, v___x_3700_, v___x_3700_);
v___x_3707_ = l_Lean_Syntax_node4(v___x_3684_, v___x_3702_, v___x_3704_, v___x_3660_, v___x_3706_, v___x_3700_);
lean_inc(v___x_3656_);
v___x_3708_ = l_Lean_Syntax_node5(v___x_3684_, v___x_3687_, v___x_3689_, v___x_3656_, v___x_3701_, v___x_3707_, v___x_3700_);
v___x_3709_ = l_Lean_Syntax_node2(v___x_3684_, v___x_3686_, v_mods_3646_, v___x_3708_);
v___x_3710_ = l_Lean_Elab_Command_elabCommand(v___x_3709_, v_a_3639_, v_a_3640_);
if (lean_obj_tag(v___x_3710_) == 0)
{
lean_object* v___x_3711_; lean_object* v___x_3712_; 
lean_dec_ref_known(v___x_3710_, 1);
lean_inc(v___x_3680_);
lean_inc(v___x_3678_);
lean_inc(v_declName_3673_);
v___x_3711_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___boxed), 11, 4);
lean_closure_set(v___x_3711_, 0, v_declName_3673_);
lean_closure_set(v___x_3711_, 1, v___x_3678_);
lean_closure_set(v___x_3711_, 2, v___x_3680_);
lean_closure_set(v___x_3711_, 3, v___x_3679_);
v___x_3712_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_3711_, v_a_3639_, v_a_3640_);
if (lean_obj_tag(v___x_3712_) == 0)
{
lean_object* v_a_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; 
v_a_3713_ = lean_ctor_get(v___x_3712_, 0);
lean_inc(v_a_3713_);
lean_dec_ref_known(v___x_3712_, 1);
v___x_3714_ = lean_box(0);
lean_inc(v___x_3678_);
v___x_3715_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4(v___x_3678_, v___x_3656_, v___x_3714_, v_a_3639_, v_a_3640_);
lean_dec(v___x_3656_);
if (lean_obj_tag(v___x_3715_) == 0)
{
lean_object* v___x_3716_; 
lean_dec_ref_known(v___x_3715_, 1);
lean_inc(v___x_3680_);
v___x_3716_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4(v___x_3680_, v_projId_3651_, v___x_3714_, v_a_3639_, v_a_3640_);
if (lean_obj_tag(v___x_3716_) == 0)
{
lean_object* v___x_3717_; lean_object* v___x_3718_; 
lean_dec_ref_known(v___x_3716_, 1);
v___x_3717_ = lean_box(0);
lean_inc(v___x_3680_);
v___x_3718_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5(v_projId_3651_, v___x_3680_, v___x_3717_, v_a_3639_, v_a_3640_);
if (lean_obj_tag(v___x_3718_) == 0)
{
lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v_env_3725_; lean_object* v_messages_3726_; lean_object* v_scopes_3727_; lean_object* v_usedQuotCtxts_3728_; lean_object* v_nextMacroScope_3729_; lean_object* v_maxRecDepth_3730_; lean_object* v_ngen_3731_; lean_object* v_auxDeclNGen_3732_; lean_object* v_infoState_3733_; lean_object* v_traceState_3734_; lean_object* v_snapshotTasks_3735_; lean_object* v_prevLinterStates_3736_; lean_object* v_codeQualityEntryTasks_3737_; lean_object* v___x_3739_; uint8_t v_isShared_3740_; uint8_t v_isSharedCheck_3758_; 
lean_dec_ref_known(v___x_3718_, 1);
lean_inc(v___x_3680_);
v___x_3719_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3719_, 0, v___x_3680_);
lean_ctor_set(v___x_3719_, 1, v___x_3661_);
lean_inc(v___x_3678_);
v___x_3720_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3720_, 0, v___x_3678_);
lean_ctor_set(v___x_3720_, 1, v___x_3719_);
lean_inc_ref(v___x_3720_);
lean_inc(v_declName_3673_);
v___x_3721_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3721_, 0, v_declName_3673_);
lean_ctor_set(v___x_3721_, 1, v___x_3720_);
v___x_3722_ = lean_box(0);
v___x_3723_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg(v___x_3721_, v___x_3722_, v_a_3639_, v_a_3640_);
lean_dec_ref_known(v___x_3721_, 2);
lean_dec_ref(v___x_3723_);
v___x_3724_ = lean_st_ref_take(v_a_3640_);
v_env_3725_ = lean_ctor_get(v___x_3724_, 0);
v_messages_3726_ = lean_ctor_get(v___x_3724_, 1);
v_scopes_3727_ = lean_ctor_get(v___x_3724_, 2);
v_usedQuotCtxts_3728_ = lean_ctor_get(v___x_3724_, 3);
v_nextMacroScope_3729_ = lean_ctor_get(v___x_3724_, 4);
v_maxRecDepth_3730_ = lean_ctor_get(v___x_3724_, 5);
v_ngen_3731_ = lean_ctor_get(v___x_3724_, 6);
v_auxDeclNGen_3732_ = lean_ctor_get(v___x_3724_, 7);
v_infoState_3733_ = lean_ctor_get(v___x_3724_, 8);
v_traceState_3734_ = lean_ctor_get(v___x_3724_, 9);
v_snapshotTasks_3735_ = lean_ctor_get(v___x_3724_, 10);
v_prevLinterStates_3736_ = lean_ctor_get(v___x_3724_, 11);
v_codeQualityEntryTasks_3737_ = lean_ctor_get(v___x_3724_, 12);
v_isSharedCheck_3758_ = !lean_is_exclusive(v___x_3724_);
if (v_isSharedCheck_3758_ == 0)
{
v___x_3739_ = v___x_3724_;
v_isShared_3740_ = v_isSharedCheck_3758_;
goto v_resetjp_3738_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3737_);
lean_inc(v_prevLinterStates_3736_);
lean_inc(v_snapshotTasks_3735_);
lean_inc(v_traceState_3734_);
lean_inc(v_infoState_3733_);
lean_inc(v_auxDeclNGen_3732_);
lean_inc(v_ngen_3731_);
lean_inc(v_maxRecDepth_3730_);
lean_inc(v_nextMacroScope_3729_);
lean_inc(v_usedQuotCtxts_3728_);
lean_inc(v_scopes_3727_);
lean_inc(v_messages_3726_);
lean_inc(v_env_3725_);
lean_dec(v___x_3724_);
v___x_3739_ = lean_box(0);
v_isShared_3740_ = v_isSharedCheck_3758_;
goto v_resetjp_3738_;
}
v_resetjp_3738_:
{
lean_object* v___x_3742_; 
if (v_isShared_3676_ == 0)
{
lean_ctor_set(v___x_3675_, 3, v_a_3713_);
lean_ctor_set(v___x_3675_, 2, v___x_3680_);
lean_ctor_set(v___x_3675_, 1, v___x_3678_);
lean_ctor_set(v___x_3675_, 0, v_declName_3673_);
v___x_3742_ = v___x_3675_;
goto v_reusejp_3741_;
}
else
{
lean_object* v_reuseFailAlloc_3757_; 
v_reuseFailAlloc_3757_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3757_, 0, v_declName_3673_);
lean_ctor_set(v_reuseFailAlloc_3757_, 1, v___x_3678_);
lean_ctor_set(v_reuseFailAlloc_3757_, 2, v___x_3680_);
lean_ctor_set(v_reuseFailAlloc_3757_, 3, v_a_3713_);
v___x_3742_ = v_reuseFailAlloc_3757_;
goto v_reusejp_3741_;
}
v_reusejp_3741_:
{
lean_object* v___x_3743_; lean_object* v___x_3745_; 
v___x_3743_ = l_Lean_registerVirtualStructure(v_env_3725_, v___x_3742_);
if (v_isShared_3740_ == 0)
{
lean_ctor_set(v___x_3739_, 0, v___x_3743_);
v___x_3745_ = v___x_3739_;
goto v_reusejp_3744_;
}
else
{
lean_object* v_reuseFailAlloc_3756_; 
v_reuseFailAlloc_3756_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3756_, 0, v___x_3743_);
lean_ctor_set(v_reuseFailAlloc_3756_, 1, v_messages_3726_);
lean_ctor_set(v_reuseFailAlloc_3756_, 2, v_scopes_3727_);
lean_ctor_set(v_reuseFailAlloc_3756_, 3, v_usedQuotCtxts_3728_);
lean_ctor_set(v_reuseFailAlloc_3756_, 4, v_nextMacroScope_3729_);
lean_ctor_set(v_reuseFailAlloc_3756_, 5, v_maxRecDepth_3730_);
lean_ctor_set(v_reuseFailAlloc_3756_, 6, v_ngen_3731_);
lean_ctor_set(v_reuseFailAlloc_3756_, 7, v_auxDeclNGen_3732_);
lean_ctor_set(v_reuseFailAlloc_3756_, 8, v_infoState_3733_);
lean_ctor_set(v_reuseFailAlloc_3756_, 9, v_traceState_3734_);
lean_ctor_set(v_reuseFailAlloc_3756_, 10, v_snapshotTasks_3735_);
lean_ctor_set(v_reuseFailAlloc_3756_, 11, v_prevLinterStates_3736_);
lean_ctor_set(v_reuseFailAlloc_3756_, 12, v_codeQualityEntryTasks_3737_);
v___x_3745_ = v_reuseFailAlloc_3756_;
goto v_reusejp_3744_;
}
v_reusejp_3744_:
{
lean_object* v___x_3746_; lean_object* v___x_3747_; 
v___x_3746_ = lean_st_ref_put(v_a_3640_, v___x_3745_);
v___x_3747_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___redArg(v___x_3720_, v___x_3722_, v_a_3639_, v_a_3640_);
lean_dec_ref_known(v___x_3720_, 2);
if (lean_obj_tag(v___x_3747_) == 0)
{
lean_object* v___x_3749_; uint8_t v_isShared_3750_; uint8_t v_isSharedCheck_3754_; 
v_isSharedCheck_3754_ = !lean_is_exclusive(v___x_3747_);
if (v_isSharedCheck_3754_ == 0)
{
lean_object* v_unused_3755_; 
v_unused_3755_ = lean_ctor_get(v___x_3747_, 0);
lean_dec(v_unused_3755_);
v___x_3749_ = v___x_3747_;
v_isShared_3750_ = v_isSharedCheck_3754_;
goto v_resetjp_3748_;
}
else
{
lean_dec(v___x_3747_);
v___x_3749_ = lean_box(0);
v_isShared_3750_ = v_isSharedCheck_3754_;
goto v_resetjp_3748_;
}
v_resetjp_3748_:
{
lean_object* v___x_3752_; 
if (v_isShared_3750_ == 0)
{
lean_ctor_set(v___x_3749_, 0, v___x_3722_);
v___x_3752_ = v___x_3749_;
goto v_reusejp_3751_;
}
else
{
lean_object* v_reuseFailAlloc_3753_; 
v_reuseFailAlloc_3753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3753_, 0, v___x_3722_);
v___x_3752_ = v_reuseFailAlloc_3753_;
goto v_reusejp_3751_;
}
v_reusejp_3751_:
{
return v___x_3752_;
}
}
}
else
{
return v___x_3747_;
}
}
}
}
}
else
{
lean_dec(v_a_3713_);
lean_dec(v___x_3680_);
lean_dec(v___x_3678_);
lean_del_object(v___x_3675_);
lean_dec(v_declName_3673_);
return v___x_3718_;
}
}
else
{
lean_dec(v_a_3713_);
lean_dec(v___x_3680_);
lean_dec(v___x_3678_);
lean_del_object(v___x_3675_);
lean_dec(v_declName_3673_);
lean_dec(v_projId_3651_);
return v___x_3716_;
}
}
else
{
lean_dec(v_a_3713_);
lean_dec(v___x_3680_);
lean_dec(v___x_3678_);
lean_del_object(v___x_3675_);
lean_dec(v_declName_3673_);
lean_dec(v_projId_3651_);
return v___x_3715_;
}
}
else
{
lean_object* v_a_3759_; lean_object* v___x_3761_; uint8_t v_isShared_3762_; uint8_t v_isSharedCheck_3766_; 
lean_dec(v___x_3680_);
lean_dec(v___x_3678_);
lean_del_object(v___x_3675_);
lean_dec(v_declName_3673_);
lean_dec(v___x_3656_);
lean_dec(v_projId_3651_);
v_a_3759_ = lean_ctor_get(v___x_3712_, 0);
v_isSharedCheck_3766_ = !lean_is_exclusive(v___x_3712_);
if (v_isSharedCheck_3766_ == 0)
{
v___x_3761_ = v___x_3712_;
v_isShared_3762_ = v_isSharedCheck_3766_;
goto v_resetjp_3760_;
}
else
{
lean_inc(v_a_3759_);
lean_dec(v___x_3712_);
v___x_3761_ = lean_box(0);
v_isShared_3762_ = v_isSharedCheck_3766_;
goto v_resetjp_3760_;
}
v_resetjp_3760_:
{
lean_object* v___x_3764_; 
if (v_isShared_3762_ == 0)
{
v___x_3764_ = v___x_3761_;
goto v_reusejp_3763_;
}
else
{
lean_object* v_reuseFailAlloc_3765_; 
v_reuseFailAlloc_3765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3765_, 0, v_a_3759_);
v___x_3764_ = v_reuseFailAlloc_3765_;
goto v_reusejp_3763_;
}
v_reusejp_3763_:
{
return v___x_3764_;
}
}
}
}
else
{
lean_dec(v___x_3680_);
lean_dec(v___x_3679_);
lean_dec(v___x_3678_);
lean_del_object(v___x_3675_);
lean_dec(v_declName_3673_);
lean_dec(v___x_3656_);
lean_dec(v_projId_3651_);
return v___x_3710_;
}
}
}
else
{
lean_object* v_a_3778_; lean_object* v___x_3780_; uint8_t v_isShared_3781_; uint8_t v_isSharedCheck_3785_; 
lean_dec(v___x_3680_);
lean_dec(v___x_3679_);
lean_dec(v___x_3678_);
lean_del_object(v___x_3675_);
lean_dec(v_declName_3673_);
lean_dec_ref(v_params_3662_);
lean_dec(v___x_3660_);
lean_dec(v___x_3656_);
lean_dec(v_projId_3651_);
lean_dec(v_mods_3646_);
v_a_3778_ = lean_ctor_get(v___x_3681_, 0);
v_isSharedCheck_3785_ = !lean_is_exclusive(v___x_3681_);
if (v_isSharedCheck_3785_ == 0)
{
v___x_3780_ = v___x_3681_;
v_isShared_3781_ = v_isSharedCheck_3785_;
goto v_resetjp_3779_;
}
else
{
lean_inc(v_a_3778_);
lean_dec(v___x_3681_);
v___x_3780_ = lean_box(0);
v_isShared_3781_ = v_isSharedCheck_3785_;
goto v_resetjp_3779_;
}
v_resetjp_3779_:
{
lean_object* v___x_3783_; 
if (v_isShared_3781_ == 0)
{
v___x_3783_ = v___x_3780_;
goto v_reusejp_3782_;
}
else
{
lean_object* v_reuseFailAlloc_3784_; 
v_reuseFailAlloc_3784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3784_, 0, v_a_3778_);
v___x_3783_ = v_reuseFailAlloc_3784_;
goto v_reusejp_3782_;
}
v_reusejp_3782_:
{
return v___x_3783_;
}
}
}
}
}
else
{
lean_object* v_a_3790_; lean_object* v___x_3792_; uint8_t v_isShared_3793_; uint8_t v_isSharedCheck_3797_; 
lean_dec_ref(v_params_3662_);
lean_dec(v___x_3660_);
lean_dec(v___x_3656_);
lean_dec(v_projId_3651_);
lean_dec(v_mods_3646_);
v_a_3790_ = lean_ctor_get(v___x_3671_, 0);
v_isSharedCheck_3797_ = !lean_is_exclusive(v___x_3671_);
if (v_isSharedCheck_3797_ == 0)
{
v___x_3792_ = v___x_3671_;
v_isShared_3793_ = v_isSharedCheck_3797_;
goto v_resetjp_3791_;
}
else
{
lean_inc(v_a_3790_);
lean_dec(v___x_3671_);
v___x_3792_ = lean_box(0);
v_isShared_3793_ = v_isSharedCheck_3797_;
goto v_resetjp_3791_;
}
v_resetjp_3791_:
{
lean_object* v___x_3795_; 
if (v_isShared_3793_ == 0)
{
v___x_3795_ = v___x_3792_;
goto v_reusejp_3794_;
}
else
{
lean_object* v_reuseFailAlloc_3796_; 
v_reuseFailAlloc_3796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3796_, 0, v_a_3790_);
v___x_3795_ = v_reuseFailAlloc_3796_;
goto v_reusejp_3794_;
}
v_reusejp_3794_:
{
return v___x_3795_;
}
}
}
}
else
{
lean_object* v_a_3798_; lean_object* v___x_3800_; uint8_t v_isShared_3801_; uint8_t v_isSharedCheck_3805_; 
lean_dec(v_currNamespace_3667_);
lean_dec(v_a_3664_);
lean_dec_ref(v_params_3662_);
lean_dec(v___x_3660_);
lean_dec(v___x_3656_);
lean_dec(v_projId_3651_);
lean_dec(v_mods_3646_);
v_a_3798_ = lean_ctor_get(v___x_3668_, 0);
v_isSharedCheck_3805_ = !lean_is_exclusive(v___x_3668_);
if (v_isSharedCheck_3805_ == 0)
{
v___x_3800_ = v___x_3668_;
v_isShared_3801_ = v_isSharedCheck_3805_;
goto v_resetjp_3799_;
}
else
{
lean_inc(v_a_3798_);
lean_dec(v___x_3668_);
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
else
{
lean_object* v_a_3806_; lean_object* v___x_3808_; uint8_t v_isShared_3809_; uint8_t v_isSharedCheck_3813_; 
lean_dec(v_a_3664_);
lean_dec_ref(v_params_3662_);
lean_dec(v___x_3660_);
lean_dec(v___x_3656_);
lean_dec(v_projId_3651_);
lean_dec(v_mods_3646_);
v_a_3806_ = lean_ctor_get(v___x_3665_, 0);
v_isSharedCheck_3813_ = !lean_is_exclusive(v___x_3665_);
if (v_isSharedCheck_3813_ == 0)
{
v___x_3808_ = v___x_3665_;
v_isShared_3809_ = v_isSharedCheck_3813_;
goto v_resetjp_3807_;
}
else
{
lean_inc(v_a_3806_);
lean_dec(v___x_3665_);
v___x_3808_ = lean_box(0);
v_isShared_3809_ = v_isSharedCheck_3813_;
goto v_resetjp_3807_;
}
v_resetjp_3807_:
{
lean_object* v___x_3811_; 
if (v_isShared_3809_ == 0)
{
v___x_3811_ = v___x_3808_;
goto v_reusejp_3810_;
}
else
{
lean_object* v_reuseFailAlloc_3812_; 
v_reuseFailAlloc_3812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3812_, 0, v_a_3806_);
v___x_3811_ = v_reuseFailAlloc_3812_;
goto v_reusejp_3810_;
}
v_reusejp_3810_:
{
return v___x_3811_;
}
}
}
}
else
{
lean_object* v_a_3814_; lean_object* v___x_3816_; uint8_t v_isShared_3817_; uint8_t v_isSharedCheck_3821_; 
lean_dec_ref(v_params_3662_);
lean_dec(v___x_3660_);
lean_dec(v___x_3656_);
lean_dec(v_projId_3651_);
lean_dec(v_mods_3646_);
v_a_3814_ = lean_ctor_get(v___x_3663_, 0);
v_isSharedCheck_3821_ = !lean_is_exclusive(v___x_3663_);
if (v_isSharedCheck_3821_ == 0)
{
v___x_3816_ = v___x_3663_;
v_isShared_3817_ = v_isSharedCheck_3821_;
goto v_resetjp_3815_;
}
else
{
lean_inc(v_a_3814_);
lean_dec(v___x_3663_);
v___x_3816_ = lean_box(0);
v_isShared_3817_ = v_isSharedCheck_3821_;
goto v_resetjp_3815_;
}
v_resetjp_3815_:
{
lean_object* v___x_3819_; 
if (v_isShared_3817_ == 0)
{
v___x_3819_ = v___x_3816_;
goto v_reusejp_3818_;
}
else
{
lean_object* v_reuseFailAlloc_3820_; 
v_reuseFailAlloc_3820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3820_, 0, v_a_3814_);
v___x_3819_ = v_reuseFailAlloc_3820_;
goto v_reusejp_3818_;
}
v_reusejp_3818_:
{
return v___x_3819_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___boxed(lean_object* v_x_3822_, lean_object* v_a_3823_, lean_object* v_a_3824_, lean_object* v_a_3825_){
_start:
{
lean_object* v_res_3826_; 
v_res_3826_ = l_Lean_Elab_Command_elabNewtype(v_x_3822_, v_a_3823_, v_a_3824_);
lean_dec(v_a_3824_);
lean_dec_ref(v_a_3823_);
return v_res_3826_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6(lean_object* v_stx_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_){
_start:
{
lean_object* v___x_3831_; 
v___x_3831_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___redArg(v_stx_3827_, v___y_3828_);
return v___x_3831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___boxed(lean_object* v_stx_3832_, lean_object* v___y_3833_, lean_object* v___y_3834_, lean_object* v___y_3835_){
_start:
{
lean_object* v_res_3836_; 
v_res_3836_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6(v_stx_3832_, v___y_3833_, v___y_3834_);
lean_dec(v___y_3834_);
lean_dec_ref(v___y_3833_);
lean_dec(v_stx_3832_);
return v_res_3836_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7(lean_object* v_declName_3837_, lean_object* v_declRanges_3838_, lean_object* v___y_3839_, lean_object* v___y_3840_){
_start:
{
lean_object* v___x_3842_; 
v___x_3842_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7___redArg(v_declName_3837_, v_declRanges_3838_, v___y_3840_);
return v___x_3842_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7___boxed(lean_object* v_declName_3843_, lean_object* v_declRanges_3844_, lean_object* v___y_3845_, lean_object* v___y_3846_, lean_object* v___y_3847_){
_start:
{
lean_object* v_res_3848_; 
v_res_3848_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7(v_declName_3843_, v_declRanges_3844_, v___y_3845_, v___y_3846_);
lean_dec(v___y_3846_);
lean_dec_ref(v___y_3845_);
return v_res_3848_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12(lean_object* v_declName_3849_, uint8_t v_s_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_){
_start:
{
lean_object* v___x_3854_; 
v___x_3854_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12___redArg(v_declName_3849_, v_s_3850_, v___y_3852_);
return v___x_3854_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12___boxed(lean_object* v_declName_3855_, lean_object* v_s_3856_, lean_object* v___y_3857_, lean_object* v___y_3858_, lean_object* v___y_3859_){
_start:
{
uint8_t v_s_boxed_3860_; lean_object* v_res_3861_; 
v_s_boxed_3860_ = lean_unbox(v_s_3856_);
v_res_3861_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12(v_declName_3855_, v_s_boxed_3860_, v___y_3857_, v___y_3858_);
lean_dec(v___y_3858_);
lean_dec_ref(v___y_3857_);
return v_res_3861_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7(lean_object* v_as_3862_, lean_object* v_as_x27_3863_, lean_object* v_b_3864_, lean_object* v_a_3865_, lean_object* v___y_3866_, lean_object* v___y_3867_){
_start:
{
lean_object* v___x_3869_; 
v___x_3869_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg(v_as_x27_3863_, v_b_3864_, v___y_3866_, v___y_3867_);
return v___x_3869_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___boxed(lean_object* v_as_3870_, lean_object* v_as_x27_3871_, lean_object* v_b_3872_, lean_object* v_a_3873_, lean_object* v___y_3874_, lean_object* v___y_3875_, lean_object* v___y_3876_){
_start:
{
lean_object* v_res_3877_; 
v_res_3877_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7(v_as_3870_, v_as_x27_3871_, v_b_3872_, v_a_3873_, v___y_3874_, v___y_3875_);
lean_dec(v___y_3875_);
lean_dec_ref(v___y_3874_);
lean_dec(v_as_x27_3871_);
lean_dec(v_as_3870_);
return v_res_3877_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8(lean_object* v_as_3878_, lean_object* v_as_x27_3879_, lean_object* v_b_3880_, lean_object* v_a_3881_, lean_object* v___y_3882_, lean_object* v___y_3883_){
_start:
{
lean_object* v___x_3885_; 
v___x_3885_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___redArg(v_as_x27_3879_, v_b_3880_, v___y_3882_, v___y_3883_);
return v___x_3885_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___boxed(lean_object* v_as_3886_, lean_object* v_as_x27_3887_, lean_object* v_b_3888_, lean_object* v_a_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_, lean_object* v___y_3892_){
_start:
{
lean_object* v_res_3893_; 
v_res_3893_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8(v_as_3886_, v_as_x27_3887_, v_b_3888_, v_a_3889_, v___y_3890_, v___y_3891_);
lean_dec(v___y_3891_);
lean_dec_ref(v___y_3890_);
lean_dec(v_as_x27_3887_);
lean_dec(v_as_3886_);
return v_res_3893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__16(lean_object* v_t_3894_, lean_object* v___y_3895_, lean_object* v___y_3896_){
_start:
{
lean_object* v___x_3898_; 
v___x_3898_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__16___redArg(v_t_3894_, v___y_3896_);
return v___x_3898_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__16___boxed(lean_object* v_t_3899_, lean_object* v___y_3900_, lean_object* v___y_3901_, lean_object* v___y_3902_){
_start:
{
lean_object* v_res_3903_; 
v_res_3903_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__16(v_t_3899_, v___y_3900_, v___y_3901_);
lean_dec(v___y_3901_);
lean_dec_ref(v___y_3900_);
return v_res_3903_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3(lean_object* v_00_u03b1_3904_, lean_object* v_ref_3905_, lean_object* v_msg_3906_, lean_object* v___y_3907_, lean_object* v___y_3908_){
_start:
{
lean_object* v___x_3910_; 
v___x_3910_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3___redArg(v_ref_3905_, v_msg_3906_, v___y_3907_, v___y_3908_);
return v___x_3910_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b1_3911_, lean_object* v_ref_3912_, lean_object* v_msg_3913_, lean_object* v___y_3914_, lean_object* v___y_3915_, lean_object* v___y_3916_){
_start:
{
lean_object* v_res_3917_; 
v_res_3917_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3(v_00_u03b1_3911_, v_ref_3912_, v_msg_3913_, v___y_3914_, v___y_3915_);
lean_dec(v___y_3915_);
lean_dec_ref(v___y_3914_);
lean_dec(v_ref_3912_);
return v_res_3917_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19(lean_object* v_msgData_3918_, lean_object* v___y_3919_, lean_object* v___y_3920_){
_start:
{
lean_object* v___x_3922_; 
v___x_3922_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___redArg(v_msgData_3918_, v___y_3920_);
return v___x_3922_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19___boxed(lean_object* v_msgData_3923_, lean_object* v___y_3924_, lean_object* v___y_3925_, lean_object* v___y_3926_){
_start:
{
lean_object* v_res_3927_; 
v_res_3927_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__19(v_msgData_3923_, v___y_3924_, v___y_3925_);
lean_dec(v___y_3925_);
lean_dec_ref(v___y_3924_);
return v_res_3927_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14(lean_object* v_00_u03b1_3928_, lean_object* v_msg_3929_, lean_object* v___y_3930_, lean_object* v___y_3931_){
_start:
{
lean_object* v___x_3933_; 
v___x_3933_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14___redArg(v_msg_3929_, v___y_3930_, v___y_3931_);
return v___x_3933_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14___boxed(lean_object* v_00_u03b1_3934_, lean_object* v_msg_3935_, lean_object* v___y_3936_, lean_object* v___y_3937_, lean_object* v___y_3938_){
_start:
{
lean_object* v_res_3939_; 
v_res_3939_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14(v_00_u03b1_3934_, v_msg_3935_, v___y_3936_, v___y_3937_);
lean_dec(v___y_3937_);
lean_dec_ref(v___y_3936_);
return v_res_3939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__16_spec__23(lean_object* v_o_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_){
_start:
{
lean_object* v___x_3944_; 
v___x_3944_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__16_spec__23___redArg(v_o_3940_, v___y_3942_);
return v___x_3944_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__16_spec__23___boxed(lean_object* v_o_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_, lean_object* v___y_3948_){
_start:
{
lean_object* v_res_3949_; 
v_res_3949_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__16_spec__23(v_o_3945_, v___y_3946_, v___y_3947_);
lean_dec(v___y_3947_);
lean_dec_ref(v___y_3946_);
return v_res_3949_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25(lean_object* v_00_u03b1_3950_, lean_object* v_constName_3951_, lean_object* v___y_3952_, lean_object* v___y_3953_){
_start:
{
lean_object* v___x_3955_; 
v___x_3955_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25___redArg(v_constName_3951_, v___y_3952_, v___y_3953_);
return v___x_3955_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25___boxed(lean_object* v_00_u03b1_3956_, lean_object* v_constName_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_){
_start:
{
lean_object* v_res_3961_; 
v_res_3961_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25(v_00_u03b1_3956_, v_constName_3957_, v___y_3958_, v___y_3959_);
lean_dec(v___y_3959_);
lean_dec_ref(v___y_3958_);
return v_res_3961_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__20(lean_object* v_msgData_3962_, lean_object* v_macroStack_3963_, lean_object* v___y_3964_, lean_object* v___y_3965_){
_start:
{
lean_object* v___x_3967_; 
v___x_3967_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__20___redArg(v_msgData_3962_, v_macroStack_3963_, v___y_3965_);
return v___x_3967_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__20___boxed(lean_object* v_msgData_3968_, lean_object* v_macroStack_3969_, lean_object* v___y_3970_, lean_object* v___y_3971_, lean_object* v___y_3972_){
_start:
{
lean_object* v_res_3973_; 
v_res_3973_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__3_spec__14_spec__20(v_msgData_3968_, v_macroStack_3969_, v___y_3970_, v___y_3971_);
lean_dec(v___y_3971_);
lean_dec_ref(v___y_3970_);
return v_res_3973_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__36(lean_object* v_00_u03b1_3974_, lean_object* v_x_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_){
_start:
{
lean_object* v___x_3978_; 
v___x_3978_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__36___redArg(v_x_3975_, v___y_3977_);
return v___x_3978_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__36___boxed(lean_object* v_00_u03b1_3979_, lean_object* v_x_3980_, lean_object* v___y_3981_, lean_object* v___y_3982_){
_start:
{
lean_object* v_res_3983_; 
v_res_3983_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__36(v_00_u03b1_3979_, v_x_3980_, v___y_3981_, v___y_3982_);
lean_dec_ref(v___y_3981_);
lean_dec_ref(v_x_3980_);
return v_res_3983_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39(lean_object* v_00_u03b1_3984_, lean_object* v_ref_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_){
_start:
{
lean_object* v___x_3989_; 
v___x_3989_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___redArg(v_ref_3985_);
return v___x_3989_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39___boxed(lean_object* v_00_u03b1_3990_, lean_object* v_ref_3991_, lean_object* v___y_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_){
_start:
{
lean_object* v_res_3995_; 
v_res_3995_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__39(v_00_u03b1_3990_, v_ref_3991_, v___y_3992_, v___y_3993_);
lean_dec(v___y_3993_);
lean_dec_ref(v___y_3992_);
return v_res_3995_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31(lean_object* v_00_u03b1_3996_, lean_object* v_x_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_){
_start:
{
lean_object* v___x_4001_; 
v___x_4001_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___redArg(v_x_3997_, v___y_3998_, v___y_3999_);
return v___x_4001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31___boxed(lean_object* v_00_u03b1_4002_, lean_object* v_x_4003_, lean_object* v___y_4004_, lean_object* v___y_4005_, lean_object* v___y_4006_){
_start:
{
lean_object* v_res_4007_; 
v_res_4007_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31(v_00_u03b1_4002_, v_x_4003_, v___y_4004_, v___y_4005_);
lean_dec(v___y_4005_);
lean_dec_ref(v___y_4004_);
return v_res_4007_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33_spec__45(lean_object* v_00_u03b1_4008_, lean_object* v_x_4009_, uint8_t v_isExporting_4010_, lean_object* v___y_4011_, lean_object* v___y_4012_){
_start:
{
lean_object* v___x_4014_; 
v___x_4014_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33_spec__45___redArg(v_x_4009_, v_isExporting_4010_, v___y_4011_, v___y_4012_);
return v___x_4014_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33_spec__45___boxed(lean_object* v_00_u03b1_4015_, lean_object* v_x_4016_, lean_object* v_isExporting_4017_, lean_object* v___y_4018_, lean_object* v___y_4019_, lean_object* v___y_4020_){
_start:
{
uint8_t v_isExporting_boxed_4021_; lean_object* v_res_4022_; 
v_isExporting_boxed_4021_ = lean_unbox(v_isExporting_4017_);
v_res_4022_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33_spec__45(v_00_u03b1_4015_, v_x_4016_, v_isExporting_boxed_4021_, v___y_4018_, v___y_4019_);
lean_dec(v___y_4019_);
lean_dec_ref(v___y_4018_);
return v_res_4022_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33(lean_object* v_00_u03b1_4023_, lean_object* v_x_4024_, uint8_t v_when_4025_, lean_object* v___y_4026_, lean_object* v___y_4027_){
_start:
{
lean_object* v___x_4029_; 
v___x_4029_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33___redArg(v_x_4024_, v_when_4025_, v___y_4026_, v___y_4027_);
return v___x_4029_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33___boxed(lean_object* v_00_u03b1_4030_, lean_object* v_x_4031_, lean_object* v_when_4032_, lean_object* v___y_4033_, lean_object* v___y_4034_, lean_object* v___y_4035_){
_start:
{
uint8_t v_when_boxed_4036_; lean_object* v_res_4037_; 
v_when_boxed_4036_ = lean_unbox(v_when_4032_);
v_res_4037_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__33(v_00_u03b1_4030_, v_x_4031_, v_when_boxed_4036_, v___y_4033_, v___y_4034_);
lean_dec(v___y_4034_);
lean_dec_ref(v___y_4033_);
return v_res_4037_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37(lean_object* v_00_u03b1_4038_, lean_object* v_ref_4039_, lean_object* v_constName_4040_, lean_object* v___y_4041_, lean_object* v___y_4042_){
_start:
{
lean_object* v___x_4044_; 
v___x_4044_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37___redArg(v_ref_4039_, v_constName_4040_, v___y_4041_, v___y_4042_);
return v___x_4044_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37___boxed(lean_object* v_00_u03b1_4045_, lean_object* v_ref_4046_, lean_object* v_constName_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_){
_start:
{
lean_object* v_res_4051_; 
v_res_4051_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37(v_00_u03b1_4045_, v_ref_4046_, v_constName_4047_, v___y_4048_, v___y_4049_);
lean_dec(v___y_4049_);
lean_dec_ref(v___y_4048_);
lean_dec(v_ref_4046_);
return v_res_4051_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__37(lean_object* v_as_4052_, lean_object* v_as_x27_4053_, lean_object* v_b_4054_, lean_object* v_a_4055_, lean_object* v___y_4056_, lean_object* v___y_4057_){
_start:
{
lean_object* v___x_4059_; 
v___x_4059_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__37___redArg(v_as_x27_4053_, v_b_4054_, v___y_4056_, v___y_4057_);
return v___x_4059_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__37___boxed(lean_object* v_as_4060_, lean_object* v_as_x27_4061_, lean_object* v_b_4062_, lean_object* v_a_4063_, lean_object* v___y_4064_, lean_object* v___y_4065_, lean_object* v___y_4066_){
_start:
{
lean_object* v_res_4067_; 
v_res_4067_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__31_spec__37(v_as_4060_, v_as_x27_4061_, v_b_4062_, v_a_4063_, v___y_4064_, v___y_4065_);
lean_dec(v___y_4065_);
lean_dec_ref(v___y_4064_);
lean_dec(v_as_x27_4061_);
lean_dec(v_as_4060_);
return v_res_4067_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__43(lean_object* v_00_u03b2_4068_, lean_object* v_m_4069_, lean_object* v_a_4070_){
_start:
{
lean_object* v___x_4071_; 
v___x_4071_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__43___redArg(v_m_4069_, v_a_4070_);
return v___x_4071_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__43___boxed(lean_object* v_00_u03b2_4072_, lean_object* v_m_4073_, lean_object* v_a_4074_){
_start:
{
lean_object* v_res_4075_; 
v_res_4075_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__43(v_00_u03b2_4072_, v_m_4073_, v_a_4074_);
lean_dec(v_a_4074_);
lean_dec_ref(v_m_4073_);
return v_res_4075_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49(lean_object* v_00_u03b1_4076_, lean_object* v_ref_4077_, lean_object* v_msg_4078_, lean_object* v_declHint_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_){
_start:
{
lean_object* v___x_4083_; 
v___x_4083_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49___redArg(v_ref_4077_, v_msg_4078_, v_declHint_4079_, v___y_4080_, v___y_4081_);
return v___x_4083_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49___boxed(lean_object* v_00_u03b1_4084_, lean_object* v_ref_4085_, lean_object* v_msg_4086_, lean_object* v_declHint_4087_, lean_object* v___y_4088_, lean_object* v___y_4089_, lean_object* v___y_4090_){
_start:
{
lean_object* v_res_4091_; 
v_res_4091_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49(v_00_u03b1_4084_, v_ref_4085_, v_msg_4086_, v_declHint_4087_, v___y_4088_, v___y_4089_);
lean_dec(v___y_4089_);
lean_dec_ref(v___y_4088_);
lean_dec(v_ref_4085_);
return v_res_4091_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44(lean_object* v_00_u03b2_4092_, lean_object* v_x_4093_, lean_object* v_x_4094_){
_start:
{
uint8_t v___x_4095_; 
v___x_4095_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44___redArg(v_x_4093_, v_x_4094_);
return v___x_4095_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44___boxed(lean_object* v_00_u03b2_4096_, lean_object* v_x_4097_, lean_object* v_x_4098_){
_start:
{
uint8_t v_res_4099_; lean_object* v_r_4100_; 
v_res_4099_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44(v_00_u03b2_4096_, v_x_4097_, v_x_4098_);
lean_dec_ref(v_x_4098_);
lean_dec_ref(v_x_4097_);
v_r_4100_ = lean_box(v_res_4099_);
return v_r_4100_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__43_spec__47(lean_object* v_00_u03b2_4101_, lean_object* v_a_4102_, lean_object* v_x_4103_){
_start:
{
lean_object* v___x_4104_; 
v___x_4104_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__43_spec__47___redArg(v_a_4102_, v_x_4103_);
return v___x_4104_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__43_spec__47___boxed(lean_object* v_00_u03b2_4105_, lean_object* v_a_4106_, lean_object* v_x_4107_){
_start:
{
lean_object* v_res_4108_; 
v_res_4108_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__43_spec__47(v_00_u03b2_4105_, v_a_4106_, v_x_4107_);
lean_dec(v_x_4107_);
lean_dec(v_a_4106_);
return v_res_4108_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54(lean_object* v_msg_4109_, lean_object* v_declHint_4110_, lean_object* v___y_4111_, lean_object* v___y_4112_){
_start:
{
lean_object* v___x_4114_; 
v___x_4114_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___redArg(v_msg_4109_, v_declHint_4110_, v___y_4112_);
return v___x_4114_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54___boxed(lean_object* v_msg_4115_, lean_object* v_declHint_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_, lean_object* v___y_4119_){
_start:
{
lean_object* v_res_4120_; 
v_res_4120_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__14_spec__25_spec__37_spec__49_spec__52_spec__54(v_msg_4115_, v_declHint_4116_, v___y_4117_, v___y_4118_);
lean_dec(v___y_4118_);
lean_dec_ref(v___y_4117_);
return v_res_4120_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44_spec__48(lean_object* v_00_u03b2_4121_, lean_object* v_x_4122_, size_t v_x_4123_, lean_object* v_x_4124_){
_start:
{
uint8_t v___x_4125_; 
v___x_4125_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44_spec__48___redArg(v_x_4122_, v_x_4123_, v_x_4124_);
return v___x_4125_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44_spec__48___boxed(lean_object* v_00_u03b2_4126_, lean_object* v_x_4127_, lean_object* v_x_4128_, lean_object* v_x_4129_){
_start:
{
size_t v_x_33464__boxed_4130_; uint8_t v_res_4131_; lean_object* v_r_4132_; 
v_x_33464__boxed_4130_ = lean_unbox_usize(v_x_4128_);
lean_dec(v_x_4128_);
v_res_4131_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44_spec__48(v_00_u03b2_4126_, v_x_4127_, v_x_33464__boxed_4130_, v_x_4129_);
lean_dec_ref(v_x_4129_);
lean_dec_ref(v_x_4127_);
v_r_4132_ = lean_box(v_res_4131_);
return v_r_4132_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44_spec__48_spec__52(lean_object* v_00_u03b2_4133_, lean_object* v_keys_4134_, lean_object* v_vals_4135_, lean_object* v_heq_4136_, lean_object* v_i_4137_, lean_object* v_k_4138_){
_start:
{
uint8_t v___x_4139_; 
v___x_4139_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44_spec__48_spec__52___redArg(v_keys_4134_, v_i_4137_, v_k_4138_);
return v___x_4139_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44_spec__48_spec__52___boxed(lean_object* v_00_u03b2_4140_, lean_object* v_keys_4141_, lean_object* v_vals_4142_, lean_object* v_heq_4143_, lean_object* v_i_4144_, lean_object* v_k_4145_){
_start:
{
uint8_t v_res_4146_; lean_object* v_r_4147_; 
v_res_4146_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__6_spec__21_spec__32_spec__41_spec__44_spec__48_spec__52(v_00_u03b2_4140_, v_keys_4141_, v_vals_4142_, v_heq_4143_, v_i_4144_, v_k_4145_);
lean_dec_ref(v_k_4145_);
lean_dec_ref(v_vals_4142_);
lean_dec_ref(v_keys_4141_);
v_r_4147_ = lean_box(v_res_4146_);
return v_r_4147_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1(){
_start:
{
lean_object* v___x_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; 
v___x_4156_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_4157_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___closed__1));
v___x_4158_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__2));
v___x_4159_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___boxed), 4, 0);
v___x_4160_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4156_, v___x_4157_, v___x_4158_, v___x_4159_);
return v___x_4160_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___boxed(lean_object* v_a_4161_){
_start:
{
lean_object* v_res_4162_; 
v_res_4162_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1();
return v_res_4162_;
}
}
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_DeclModifiers(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_DeclarationRange(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_VirtualStructure(uint8_t builtin);
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
