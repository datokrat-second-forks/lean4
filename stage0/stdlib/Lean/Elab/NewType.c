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
uint8_t l_Lean_Elab_Modifiers_isInferredPublic(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__0;
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 214, 247, 82, 130, 198, 123, 173)}};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__0___closed__2_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__0___closed__3_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__0___closed__4_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "optDeclSig"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__0___closed__5_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__0___closed__6 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__0___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__0___closed__7 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__0___closed__7_value;
static lean_once_cell_t l_Lean_Elab_Command_elabNewtype___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabNewtype___lam__0___closed__8;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__0___closed__9 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__0___closed__9_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__0___closed__10 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__0___closed__10_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__0___closed__11 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__0___closed__11_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__0___closed__12 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__0___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___lam__0___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "This linter can be disabled with `set_option "};
static const lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__0 = (const lean_object*)&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__0_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__1;
static const lean_string_object l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " false`"};
static const lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__2 = (const lean_object*)&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__2_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__3;
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30_spec__33(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30_spec__33___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__29(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__29___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception: "};
static const lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21___closed__0 = (const lean_object*)&l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21___closed__0_value;
static lean_once_cell_t l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44_spec__48___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44_spec__48___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___closed__0;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48_spec__52___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48_spec__52___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__0;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__1 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__1_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__1_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__2 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__2_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__3_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__4;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__5_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__6;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__7;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__8 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__8_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__9;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__10 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__10_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__11;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__12 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__12_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__13;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__14 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__14_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__15_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__39(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__39___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = "maximum recursion depth has been reached\nuse `set_option maxRecDepth <num>` to increase limit\nuse `set_option diagnostics true` to get diagnostic information"};
static const lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Cannot use attribute `["};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__1;
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "]`: module `"};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__3;
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "` is loaded for IR only (reached as a private `meta` dependency). Add an import of `"};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__4_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__5;
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Unknown attribute `["};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__6 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__6_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__7;
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]`"};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__8 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__8_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__9;
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__10 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__10_value;
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__11 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__11_value;
static const lean_ctor_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__12_value_aux_0),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__12_value_aux_1),((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__12_value_aux_2),((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__11_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__12 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__12_value;
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Unknown attribute"};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__13 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__13_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__14;
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "byTactic"};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(187, 150, 238, 148, 228, 221, 116, 224)}};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0___closed__2_value;
LEAN_EXPORT uint8_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___closed__0 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__23(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7___closed__0 = (const lean_object*)&l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_ctor_object l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__2_value_aux_2),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__15_value),LEAN_SCALAR_PTR_LITERAL(124, 247, 59, 43, 44, 177, 111, 66)}};
static const lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__2 = (const lean_object*)&l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44_spec__48(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44_spec__48___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48_spec__52(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48_spec__52___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
uint8_t v___x_9415__boxed_274_; lean_object* v_res_275_; 
v___x_9415__boxed_274_ = lean_unbox(v___x_265_);
v_res_275_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__0(v_params_261_, v_resultType_262_, v_name_263_, v_levelParams_264_, v___x_9415__boxed_274_, v_a_266_, v___y_267_, v___y_268_, v___y_269_, v___y_270_, v___y_271_, v___y_272_);
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
uint8_t v___x_9614__boxed_388_; lean_object* v_res_389_; 
v___x_9614__boxed_388_ = lean_unbox(v___x_376_);
v_res_389_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__1(v_params_374_, v_levelParams_375_, v___x_9614__boxed_388_, v_name_377_, v_argName_378_, v_argType_379_, v_resultType_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_);
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
v___f_771_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_771_, 0, v_toFunctor_762_);
v___f_772_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_772_, 0, v_toFunctor_762_);
v___x_773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_773_, 0, v___f_771_);
lean_ctor_set(v___x_773_, 1, v___f_772_);
v___f_774_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_774_, 0, v_toSeqRight_765_);
v___f_775_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_775_, 0, v_toSeqLeft_764_);
v___f_776_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
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
v___f_795_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_795_, 0, v_toFunctor_786_);
v___f_796_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_796_, 0, v_toFunctor_786_);
v___x_797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_797_, 0, v___f_795_);
lean_ctor_set(v___x_797_, 1, v___f_796_);
v___f_798_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_798_, 0, v_toSeqRight_789_);
v___f_799_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_799_, 0, v_toSeqLeft_788_);
v___f_800_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
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
v___f_819_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_819_, 0, v_toFunctor_810_);
v___f_820_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_820_, 0, v_toFunctor_810_);
v___x_821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_821_, 0, v___f_819_);
lean_ctor_set(v___x_821_, 1, v___f_820_);
v___f_822_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_822_, 0, v_toSeqRight_813_);
v___f_823_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_823_, 0, v_toSeqLeft_812_);
v___f_824_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
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
lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_6798__overap_831_; lean_object* v___x_832_; 
v___x_829_ = lean_box(0);
v___x_830_ = l_instInhabitedOfMonad___redArg(v___x_828_, v___x_829_);
v___x_6798__overap_831_ = lean_panic_fn_borrowed(v___x_830_, v_msg_748_);
lean_dec(v___x_830_);
lean_inc(v___y_754_);
lean_inc_ref(v___y_753_);
lean_inc(v___y_752_);
lean_inc_ref(v___y_751_);
lean_inc(v___y_750_);
lean_inc_ref(v___y_749_);
v___x_832_ = lean_apply_7(v___x_6798__overap_831_, v___y_749_, v___y_750_, v___y_751_, v___y_752_, v___y_753_, v___y_754_, lean_box(0));
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj(lean_object* v_declName_948_, lean_object* v_ctorName_949_, lean_object* v_projName_950_, lean_object* v_fieldName_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_){
_start:
{
lean_object* v___x_959_; 
lean_inc(v_declName_948_);
v___x_959_ = l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0(v_declName_948_, v___y_952_, v___y_953_, v___y_954_, v___y_955_, v___y_956_, v___y_957_);
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
v___x_969_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(v_type_964_, v___f_967_, v___x_968_, v___y_952_, v___y_953_, v___y_954_, v___y_955_, v___y_956_, v___y_957_);
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___boxed(lean_object* v_declName_978_, lean_object* v_ctorName_979_, lean_object* v_projName_980_, lean_object* v_fieldName_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_){
_start:
{
lean_object* v_res_989_; 
v_res_989_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj(v_declName_978_, v_ctorName_979_, v_projName_980_, v_fieldName_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_);
lean_dec(v___y_987_);
lean_dec_ref(v___y_986_);
lean_dec(v___y_985_);
lean_dec_ref(v___y_984_);
lean_dec(v___y_983_);
lean_dec_ref(v___y_982_);
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0(lean_object* v___y_1146_, uint8_t v_isExporting_1147_, lean_object* v_a_x3f_1148_){
_start:
{
lean_object* v___x_1150_; lean_object* v_env_1151_; lean_object* v_messages_1152_; lean_object* v_scopes_1153_; lean_object* v_usedQuotCtxts_1154_; lean_object* v_nextMacroScope_1155_; lean_object* v_maxRecDepth_1156_; lean_object* v_ngen_1157_; lean_object* v_auxDeclNGen_1158_; lean_object* v_infoState_1159_; lean_object* v_traceState_1160_; lean_object* v_snapshotTasks_1161_; lean_object* v_prevLinterStates_1162_; lean_object* v_codeQualityEntryTasks_1163_; lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1174_; 
v___x_1150_ = lean_st_ref_take(v___y_1146_);
v_env_1151_ = lean_ctor_get(v___x_1150_, 0);
v_messages_1152_ = lean_ctor_get(v___x_1150_, 1);
v_scopes_1153_ = lean_ctor_get(v___x_1150_, 2);
v_usedQuotCtxts_1154_ = lean_ctor_get(v___x_1150_, 3);
v_nextMacroScope_1155_ = lean_ctor_get(v___x_1150_, 4);
v_maxRecDepth_1156_ = lean_ctor_get(v___x_1150_, 5);
v_ngen_1157_ = lean_ctor_get(v___x_1150_, 6);
v_auxDeclNGen_1158_ = lean_ctor_get(v___x_1150_, 7);
v_infoState_1159_ = lean_ctor_get(v___x_1150_, 8);
v_traceState_1160_ = lean_ctor_get(v___x_1150_, 9);
v_snapshotTasks_1161_ = lean_ctor_get(v___x_1150_, 10);
v_prevLinterStates_1162_ = lean_ctor_get(v___x_1150_, 11);
v_codeQualityEntryTasks_1163_ = lean_ctor_get(v___x_1150_, 12);
v_isSharedCheck_1174_ = !lean_is_exclusive(v___x_1150_);
if (v_isSharedCheck_1174_ == 0)
{
v___x_1165_ = v___x_1150_;
v_isShared_1166_ = v_isSharedCheck_1174_;
goto v_resetjp_1164_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1163_);
lean_inc(v_prevLinterStates_1162_);
lean_inc(v_snapshotTasks_1161_);
lean_inc(v_traceState_1160_);
lean_inc(v_infoState_1159_);
lean_inc(v_auxDeclNGen_1158_);
lean_inc(v_ngen_1157_);
lean_inc(v_maxRecDepth_1156_);
lean_inc(v_nextMacroScope_1155_);
lean_inc(v_usedQuotCtxts_1154_);
lean_inc(v_scopes_1153_);
lean_inc(v_messages_1152_);
lean_inc(v_env_1151_);
lean_dec(v___x_1150_);
v___x_1165_ = lean_box(0);
v_isShared_1166_ = v_isSharedCheck_1174_;
goto v_resetjp_1164_;
}
v_resetjp_1164_:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1170_; 
v___x_1167_ = lean_box(0);
v___x_1168_ = l_Lean_Environment_setExporting(v_env_1151_, v_isExporting_1147_);
if (v_isShared_1166_ == 0)
{
lean_ctor_set(v___x_1165_, 0, v___x_1168_);
v___x_1170_ = v___x_1165_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1173_; 
v_reuseFailAlloc_1173_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1173_, 0, v___x_1168_);
lean_ctor_set(v_reuseFailAlloc_1173_, 1, v_messages_1152_);
lean_ctor_set(v_reuseFailAlloc_1173_, 2, v_scopes_1153_);
lean_ctor_set(v_reuseFailAlloc_1173_, 3, v_usedQuotCtxts_1154_);
lean_ctor_set(v_reuseFailAlloc_1173_, 4, v_nextMacroScope_1155_);
lean_ctor_set(v_reuseFailAlloc_1173_, 5, v_maxRecDepth_1156_);
lean_ctor_set(v_reuseFailAlloc_1173_, 6, v_ngen_1157_);
lean_ctor_set(v_reuseFailAlloc_1173_, 7, v_auxDeclNGen_1158_);
lean_ctor_set(v_reuseFailAlloc_1173_, 8, v_infoState_1159_);
lean_ctor_set(v_reuseFailAlloc_1173_, 9, v_traceState_1160_);
lean_ctor_set(v_reuseFailAlloc_1173_, 10, v_snapshotTasks_1161_);
lean_ctor_set(v_reuseFailAlloc_1173_, 11, v_prevLinterStates_1162_);
lean_ctor_set(v_reuseFailAlloc_1173_, 12, v_codeQualityEntryTasks_1163_);
v___x_1170_ = v_reuseFailAlloc_1173_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
lean_object* v___x_1171_; lean_object* v___x_1172_; 
v___x_1171_ = lean_st_ref_put(v___y_1146_, v___x_1170_);
v___x_1172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1172_, 0, v___x_1167_);
return v___x_1172_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0___boxed(lean_object* v___y_1175_, lean_object* v_isExporting_1176_, lean_object* v_a_x3f_1177_, lean_object* v___y_1178_){
_start:
{
uint8_t v_isExporting_boxed_1179_; lean_object* v_res_1180_; 
v_isExporting_boxed_1179_ = lean_unbox(v_isExporting_1176_);
v_res_1180_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0(v___y_1175_, v_isExporting_boxed_1179_, v_a_x3f_1177_);
lean_dec(v_a_x3f_1177_);
lean_dec(v___y_1175_);
return v_res_1180_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(lean_object* v_x_1181_, uint8_t v_isExporting_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_){
_start:
{
lean_object* v___x_1186_; lean_object* v_env_1187_; lean_object* v___x_1188_; uint8_t v_isModule_1189_; 
v___x_1186_ = lean_st_ref_get(v___y_1184_);
v_env_1187_ = lean_ctor_get(v___x_1186_, 0);
lean_inc_ref(v_env_1187_);
lean_dec(v___x_1186_);
v___x_1188_ = l_Lean_Environment_header(v_env_1187_);
v_isModule_1189_ = lean_ctor_get_uint8(v___x_1188_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_1188_);
if (v_isModule_1189_ == 0)
{
lean_object* v___x_1190_; 
lean_dec_ref(v_env_1187_);
lean_inc(v___y_1184_);
lean_inc_ref(v___y_1183_);
v___x_1190_ = lean_apply_3(v_x_1181_, v___y_1183_, v___y_1184_, lean_box(0));
return v___x_1190_;
}
else
{
uint8_t v_isExporting_1191_; 
v_isExporting_1191_ = lean_ctor_get_uint8(v_env_1187_, sizeof(void*)*8);
lean_dec_ref(v_env_1187_);
if (v_isExporting_1182_ == 0)
{
if (v_isExporting_1191_ == 0)
{
lean_object* v___x_1245_; 
lean_inc(v___y_1184_);
lean_inc_ref(v___y_1183_);
v___x_1245_ = lean_apply_3(v_x_1181_, v___y_1183_, v___y_1184_, lean_box(0));
return v___x_1245_;
}
else
{
goto v___jp_1192_;
}
}
else
{
if (v_isExporting_1191_ == 0)
{
goto v___jp_1192_;
}
else
{
lean_object* v___x_1246_; 
lean_inc(v___y_1184_);
lean_inc_ref(v___y_1183_);
v___x_1246_ = lean_apply_3(v_x_1181_, v___y_1183_, v___y_1184_, lean_box(0));
return v___x_1246_;
}
}
v___jp_1192_:
{
lean_object* v___x_1193_; lean_object* v_env_1194_; lean_object* v_messages_1195_; lean_object* v_scopes_1196_; lean_object* v_usedQuotCtxts_1197_; lean_object* v_nextMacroScope_1198_; lean_object* v_maxRecDepth_1199_; lean_object* v_ngen_1200_; lean_object* v_auxDeclNGen_1201_; lean_object* v_infoState_1202_; lean_object* v_traceState_1203_; lean_object* v_snapshotTasks_1204_; lean_object* v_prevLinterStates_1205_; lean_object* v_codeQualityEntryTasks_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1244_; 
v___x_1193_ = lean_st_ref_take(v___y_1184_);
v_env_1194_ = lean_ctor_get(v___x_1193_, 0);
v_messages_1195_ = lean_ctor_get(v___x_1193_, 1);
v_scopes_1196_ = lean_ctor_get(v___x_1193_, 2);
v_usedQuotCtxts_1197_ = lean_ctor_get(v___x_1193_, 3);
v_nextMacroScope_1198_ = lean_ctor_get(v___x_1193_, 4);
v_maxRecDepth_1199_ = lean_ctor_get(v___x_1193_, 5);
v_ngen_1200_ = lean_ctor_get(v___x_1193_, 6);
v_auxDeclNGen_1201_ = lean_ctor_get(v___x_1193_, 7);
v_infoState_1202_ = lean_ctor_get(v___x_1193_, 8);
v_traceState_1203_ = lean_ctor_get(v___x_1193_, 9);
v_snapshotTasks_1204_ = lean_ctor_get(v___x_1193_, 10);
v_prevLinterStates_1205_ = lean_ctor_get(v___x_1193_, 11);
v_codeQualityEntryTasks_1206_ = lean_ctor_get(v___x_1193_, 12);
v_isSharedCheck_1244_ = !lean_is_exclusive(v___x_1193_);
if (v_isSharedCheck_1244_ == 0)
{
v___x_1208_ = v___x_1193_;
v_isShared_1209_ = v_isSharedCheck_1244_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1206_);
lean_inc(v_prevLinterStates_1205_);
lean_inc(v_snapshotTasks_1204_);
lean_inc(v_traceState_1203_);
lean_inc(v_infoState_1202_);
lean_inc(v_auxDeclNGen_1201_);
lean_inc(v_ngen_1200_);
lean_inc(v_maxRecDepth_1199_);
lean_inc(v_nextMacroScope_1198_);
lean_inc(v_usedQuotCtxts_1197_);
lean_inc(v_scopes_1196_);
lean_inc(v_messages_1195_);
lean_inc(v_env_1194_);
lean_dec(v___x_1193_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1244_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
lean_object* v___x_1210_; lean_object* v___x_1212_; 
v___x_1210_ = l_Lean_Environment_setExporting(v_env_1194_, v_isExporting_1182_);
if (v_isShared_1209_ == 0)
{
lean_ctor_set(v___x_1208_, 0, v___x_1210_);
v___x_1212_ = v___x_1208_;
goto v_reusejp_1211_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v___x_1210_);
lean_ctor_set(v_reuseFailAlloc_1243_, 1, v_messages_1195_);
lean_ctor_set(v_reuseFailAlloc_1243_, 2, v_scopes_1196_);
lean_ctor_set(v_reuseFailAlloc_1243_, 3, v_usedQuotCtxts_1197_);
lean_ctor_set(v_reuseFailAlloc_1243_, 4, v_nextMacroScope_1198_);
lean_ctor_set(v_reuseFailAlloc_1243_, 5, v_maxRecDepth_1199_);
lean_ctor_set(v_reuseFailAlloc_1243_, 6, v_ngen_1200_);
lean_ctor_set(v_reuseFailAlloc_1243_, 7, v_auxDeclNGen_1201_);
lean_ctor_set(v_reuseFailAlloc_1243_, 8, v_infoState_1202_);
lean_ctor_set(v_reuseFailAlloc_1243_, 9, v_traceState_1203_);
lean_ctor_set(v_reuseFailAlloc_1243_, 10, v_snapshotTasks_1204_);
lean_ctor_set(v_reuseFailAlloc_1243_, 11, v_prevLinterStates_1205_);
lean_ctor_set(v_reuseFailAlloc_1243_, 12, v_codeQualityEntryTasks_1206_);
v___x_1212_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1211_;
}
v_reusejp_1211_:
{
lean_object* v___x_1213_; lean_object* v_r_1214_; 
v___x_1213_ = lean_st_ref_put(v___y_1184_, v___x_1212_);
lean_inc(v___y_1184_);
lean_inc_ref(v___y_1183_);
v_r_1214_ = lean_apply_3(v_x_1181_, v___y_1183_, v___y_1184_, lean_box(0));
if (lean_obj_tag(v_r_1214_) == 0)
{
lean_object* v_a_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1231_; 
v_a_1215_ = lean_ctor_get(v_r_1214_, 0);
v_isSharedCheck_1231_ = !lean_is_exclusive(v_r_1214_);
if (v_isSharedCheck_1231_ == 0)
{
v___x_1217_ = v_r_1214_;
v_isShared_1218_ = v_isSharedCheck_1231_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_a_1215_);
lean_dec(v_r_1214_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1231_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___x_1220_; 
lean_inc(v_a_1215_);
if (v_isShared_1218_ == 0)
{
lean_ctor_set_tag(v___x_1217_, 1);
v___x_1220_ = v___x_1217_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v_a_1215_);
v___x_1220_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
lean_object* v___x_1221_; lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1228_; 
v___x_1221_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0(v___y_1184_, v_isExporting_1191_, v___x_1220_);
lean_dec_ref(v___x_1220_);
v_isSharedCheck_1228_ = !lean_is_exclusive(v___x_1221_);
if (v_isSharedCheck_1228_ == 0)
{
lean_object* v_unused_1229_; 
v_unused_1229_ = lean_ctor_get(v___x_1221_, 0);
lean_dec(v_unused_1229_);
v___x_1223_ = v___x_1221_;
v_isShared_1224_ = v_isSharedCheck_1228_;
goto v_resetjp_1222_;
}
else
{
lean_dec(v___x_1221_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1228_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
lean_object* v___x_1226_; 
if (v_isShared_1224_ == 0)
{
lean_ctor_set(v___x_1223_, 0, v_a_1215_);
v___x_1226_ = v___x_1223_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v_a_1215_);
v___x_1226_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
return v___x_1226_;
}
}
}
}
}
else
{
lean_object* v_a_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1241_; 
v_a_1232_ = lean_ctor_get(v_r_1214_, 0);
lean_inc(v_a_1232_);
lean_dec_ref_known(v_r_1214_, 1);
v___x_1233_ = lean_box(0);
v___x_1234_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0(v___y_1184_, v_isExporting_1191_, v___x_1233_);
v_isSharedCheck_1241_ = !lean_is_exclusive(v___x_1234_);
if (v_isSharedCheck_1241_ == 0)
{
lean_object* v_unused_1242_; 
v_unused_1242_ = lean_ctor_get(v___x_1234_, 0);
lean_dec(v_unused_1242_);
v___x_1236_ = v___x_1234_;
v_isShared_1237_ = v_isSharedCheck_1241_;
goto v_resetjp_1235_;
}
else
{
lean_dec(v___x_1234_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1241_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
lean_object* v___x_1239_; 
if (v_isShared_1237_ == 0)
{
lean_ctor_set_tag(v___x_1236_, 1);
lean_ctor_set(v___x_1236_, 0, v_a_1232_);
v___x_1239_ = v___x_1236_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v_a_1232_);
v___x_1239_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
return v___x_1239_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___boxed(lean_object* v_x_1247_, lean_object* v_isExporting_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_){
_start:
{
uint8_t v_isExporting_boxed_1252_; lean_object* v_res_1253_; 
v_isExporting_boxed_1252_ = lean_unbox(v_isExporting_1248_);
v_res_1253_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(v_x_1247_, v_isExporting_boxed_1252_, v___y_1249_, v___y_1250_);
lean_dec(v___y_1250_);
lean_dec_ref(v___y_1249_);
return v_res_1253_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10(lean_object* v_00_u03b1_1254_, lean_object* v_x_1255_, uint8_t v_isExporting_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_){
_start:
{
lean_object* v___x_1260_; 
v___x_1260_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(v_x_1255_, v_isExporting_1256_, v___y_1257_, v___y_1258_);
return v___x_1260_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___boxed(lean_object* v_00_u03b1_1261_, lean_object* v_x_1262_, lean_object* v_isExporting_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_){
_start:
{
uint8_t v_isExporting_boxed_1267_; lean_object* v_res_1268_; 
v_isExporting_boxed_1267_ = lean_unbox(v_isExporting_1263_);
v_res_1268_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10(v_00_u03b1_1261_, v_x_1262_, v_isExporting_boxed_1267_, v___y_1264_, v___y_1265_);
lean_dec(v___y_1265_);
lean_dec_ref(v___y_1264_);
return v_res_1268_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(size_t v_sz_1269_, size_t v_i_1270_, lean_object* v_bs_1271_){
_start:
{
uint8_t v___x_1272_; 
v___x_1272_ = lean_usize_dec_lt(v_i_1270_, v_sz_1269_);
if (v___x_1272_ == 0)
{
return v_bs_1271_;
}
else
{
lean_object* v_v_1273_; lean_object* v___x_1274_; lean_object* v_bs_x27_1275_; size_t v___x_1276_; size_t v___x_1277_; lean_object* v___x_1278_; 
v_v_1273_ = lean_array_uget(v_bs_1271_, v_i_1270_);
v___x_1274_ = lean_unsigned_to_nat(0u);
v_bs_x27_1275_ = lean_array_uset(v_bs_1271_, v_i_1270_, v___x_1274_);
v___x_1276_ = ((size_t)1ULL);
v___x_1277_ = lean_usize_add(v_i_1270_, v___x_1276_);
v___x_1278_ = lean_array_uset(v_bs_x27_1275_, v_i_1270_, v_v_1273_);
v_i_1270_ = v___x_1277_;
v_bs_1271_ = v___x_1278_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2___boxed(lean_object* v_sz_1280_, lean_object* v_i_1281_, lean_object* v_bs_1282_){
_start:
{
size_t v_sz_boxed_1283_; size_t v_i_boxed_1284_; lean_object* v_res_1285_; 
v_sz_boxed_1283_ = lean_unbox_usize(v_sz_1280_);
lean_dec(v_sz_1280_);
v_i_boxed_1284_ = lean_unbox_usize(v_i_1281_);
lean_dec(v_i_1281_);
v_res_1285_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(v_sz_boxed_1283_, v_i_boxed_1284_, v_bs_1282_);
return v_res_1285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17___redArg(lean_object* v_t_1286_, lean_object* v___y_1287_){
_start:
{
lean_object* v___x_1289_; lean_object* v_infoState_1290_; uint8_t v_enabled_1291_; 
v___x_1289_ = lean_st_ref_get(v___y_1287_);
v_infoState_1290_ = lean_ctor_get(v___x_1289_, 8);
lean_inc_ref(v_infoState_1290_);
lean_dec(v___x_1289_);
v_enabled_1291_ = lean_ctor_get_uint8(v_infoState_1290_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1290_);
if (v_enabled_1291_ == 0)
{
lean_object* v___x_1292_; lean_object* v___x_1293_; 
lean_dec_ref(v_t_1286_);
v___x_1292_ = lean_box(0);
v___x_1293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1293_, 0, v___x_1292_);
return v___x_1293_;
}
else
{
lean_object* v___x_1294_; lean_object* v_infoState_1295_; lean_object* v_env_1296_; lean_object* v_messages_1297_; lean_object* v_scopes_1298_; lean_object* v_usedQuotCtxts_1299_; lean_object* v_nextMacroScope_1300_; lean_object* v_maxRecDepth_1301_; lean_object* v_ngen_1302_; lean_object* v_auxDeclNGen_1303_; lean_object* v_traceState_1304_; lean_object* v_snapshotTasks_1305_; lean_object* v_prevLinterStates_1306_; lean_object* v_codeQualityEntryTasks_1307_; lean_object* v___x_1309_; uint8_t v_isShared_1310_; uint8_t v_isSharedCheck_1329_; 
v___x_1294_ = lean_st_ref_take(v___y_1287_);
v_infoState_1295_ = lean_ctor_get(v___x_1294_, 8);
v_env_1296_ = lean_ctor_get(v___x_1294_, 0);
v_messages_1297_ = lean_ctor_get(v___x_1294_, 1);
v_scopes_1298_ = lean_ctor_get(v___x_1294_, 2);
v_usedQuotCtxts_1299_ = lean_ctor_get(v___x_1294_, 3);
v_nextMacroScope_1300_ = lean_ctor_get(v___x_1294_, 4);
v_maxRecDepth_1301_ = lean_ctor_get(v___x_1294_, 5);
v_ngen_1302_ = lean_ctor_get(v___x_1294_, 6);
v_auxDeclNGen_1303_ = lean_ctor_get(v___x_1294_, 7);
v_traceState_1304_ = lean_ctor_get(v___x_1294_, 9);
v_snapshotTasks_1305_ = lean_ctor_get(v___x_1294_, 10);
v_prevLinterStates_1306_ = lean_ctor_get(v___x_1294_, 11);
v_codeQualityEntryTasks_1307_ = lean_ctor_get(v___x_1294_, 12);
v_isSharedCheck_1329_ = !lean_is_exclusive(v___x_1294_);
if (v_isSharedCheck_1329_ == 0)
{
v___x_1309_ = v___x_1294_;
v_isShared_1310_ = v_isSharedCheck_1329_;
goto v_resetjp_1308_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1307_);
lean_inc(v_prevLinterStates_1306_);
lean_inc(v_snapshotTasks_1305_);
lean_inc(v_traceState_1304_);
lean_inc(v_infoState_1295_);
lean_inc(v_auxDeclNGen_1303_);
lean_inc(v_ngen_1302_);
lean_inc(v_maxRecDepth_1301_);
lean_inc(v_nextMacroScope_1300_);
lean_inc(v_usedQuotCtxts_1299_);
lean_inc(v_scopes_1298_);
lean_inc(v_messages_1297_);
lean_inc(v_env_1296_);
lean_dec(v___x_1294_);
v___x_1309_ = lean_box(0);
v_isShared_1310_ = v_isSharedCheck_1329_;
goto v_resetjp_1308_;
}
v_resetjp_1308_:
{
uint8_t v_enabled_1311_; lean_object* v_assignment_1312_; lean_object* v_lazyAssignment_1313_; lean_object* v_trees_1314_; lean_object* v___x_1316_; uint8_t v_isShared_1317_; uint8_t v_isSharedCheck_1328_; 
v_enabled_1311_ = lean_ctor_get_uint8(v_infoState_1295_, sizeof(void*)*3);
v_assignment_1312_ = lean_ctor_get(v_infoState_1295_, 0);
v_lazyAssignment_1313_ = lean_ctor_get(v_infoState_1295_, 1);
v_trees_1314_ = lean_ctor_get(v_infoState_1295_, 2);
v_isSharedCheck_1328_ = !lean_is_exclusive(v_infoState_1295_);
if (v_isSharedCheck_1328_ == 0)
{
v___x_1316_ = v_infoState_1295_;
v_isShared_1317_ = v_isSharedCheck_1328_;
goto v_resetjp_1315_;
}
else
{
lean_inc(v_trees_1314_);
lean_inc(v_lazyAssignment_1313_);
lean_inc(v_assignment_1312_);
lean_dec(v_infoState_1295_);
v___x_1316_ = lean_box(0);
v_isShared_1317_ = v_isSharedCheck_1328_;
goto v_resetjp_1315_;
}
v_resetjp_1315_:
{
lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1321_; 
v___x_1318_ = lean_box(0);
v___x_1319_ = l_Lean_PersistentArray_push___redArg(v_trees_1314_, v_t_1286_);
if (v_isShared_1317_ == 0)
{
lean_ctor_set(v___x_1316_, 2, v___x_1319_);
v___x_1321_ = v___x_1316_;
goto v_reusejp_1320_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v_assignment_1312_);
lean_ctor_set(v_reuseFailAlloc_1327_, 1, v_lazyAssignment_1313_);
lean_ctor_set(v_reuseFailAlloc_1327_, 2, v___x_1319_);
lean_ctor_set_uint8(v_reuseFailAlloc_1327_, sizeof(void*)*3, v_enabled_1311_);
v___x_1321_ = v_reuseFailAlloc_1327_;
goto v_reusejp_1320_;
}
v_reusejp_1320_:
{
lean_object* v___x_1323_; 
if (v_isShared_1310_ == 0)
{
lean_ctor_set(v___x_1309_, 8, v___x_1321_);
v___x_1323_ = v___x_1309_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1326_; 
v_reuseFailAlloc_1326_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1326_, 0, v_env_1296_);
lean_ctor_set(v_reuseFailAlloc_1326_, 1, v_messages_1297_);
lean_ctor_set(v_reuseFailAlloc_1326_, 2, v_scopes_1298_);
lean_ctor_set(v_reuseFailAlloc_1326_, 3, v_usedQuotCtxts_1299_);
lean_ctor_set(v_reuseFailAlloc_1326_, 4, v_nextMacroScope_1300_);
lean_ctor_set(v_reuseFailAlloc_1326_, 5, v_maxRecDepth_1301_);
lean_ctor_set(v_reuseFailAlloc_1326_, 6, v_ngen_1302_);
lean_ctor_set(v_reuseFailAlloc_1326_, 7, v_auxDeclNGen_1303_);
lean_ctor_set(v_reuseFailAlloc_1326_, 8, v___x_1321_);
lean_ctor_set(v_reuseFailAlloc_1326_, 9, v_traceState_1304_);
lean_ctor_set(v_reuseFailAlloc_1326_, 10, v_snapshotTasks_1305_);
lean_ctor_set(v_reuseFailAlloc_1326_, 11, v_prevLinterStates_1306_);
lean_ctor_set(v_reuseFailAlloc_1326_, 12, v_codeQualityEntryTasks_1307_);
v___x_1323_ = v_reuseFailAlloc_1326_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
lean_object* v___x_1324_; lean_object* v___x_1325_; 
v___x_1324_ = lean_st_ref_put(v___y_1287_, v___x_1323_);
v___x_1325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1325_, 0, v___x_1318_);
return v___x_1325_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17___redArg___boxed(lean_object* v_t_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_){
_start:
{
lean_object* v_res_1333_; 
v_res_1333_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17___redArg(v_t_1330_, v___y_1331_);
lean_dec(v___y_1331_);
return v_res_1333_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__0(void){
_start:
{
lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; 
v___x_1334_ = lean_unsigned_to_nat(32u);
v___x_1335_ = lean_mk_empty_array_with_capacity(v___x_1334_);
v___x_1336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1336_, 0, v___x_1335_);
return v___x_1336_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__1(void){
_start:
{
size_t v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; 
v___x_1337_ = ((size_t)5ULL);
v___x_1338_ = lean_unsigned_to_nat(0u);
v___x_1339_ = lean_unsigned_to_nat(32u);
v___x_1340_ = lean_mk_empty_array_with_capacity(v___x_1339_);
v___x_1341_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__0);
v___x_1342_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1342_, 0, v___x_1341_);
lean_ctor_set(v___x_1342_, 1, v___x_1340_);
lean_ctor_set(v___x_1342_, 2, v___x_1338_);
lean_ctor_set(v___x_1342_, 3, v___x_1338_);
lean_ctor_set_usize(v___x_1342_, 4, v___x_1337_);
return v___x_1342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10(lean_object* v_t_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_){
_start:
{
lean_object* v___x_1347_; lean_object* v_infoState_1348_; uint8_t v_enabled_1349_; 
v___x_1347_ = lean_st_ref_get(v___y_1345_);
v_infoState_1348_ = lean_ctor_get(v___x_1347_, 8);
lean_inc_ref(v_infoState_1348_);
lean_dec(v___x_1347_);
v_enabled_1349_ = lean_ctor_get_uint8(v_infoState_1348_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1348_);
if (v_enabled_1349_ == 0)
{
lean_object* v___x_1350_; lean_object* v___x_1351_; 
lean_dec_ref(v_t_1343_);
v___x_1350_ = lean_box(0);
v___x_1351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1351_, 0, v___x_1350_);
return v___x_1351_;
}
else
{
lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; 
v___x_1352_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__1);
v___x_1353_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1353_, 0, v_t_1343_);
lean_ctor_set(v___x_1353_, 1, v___x_1352_);
v___x_1354_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17___redArg(v___x_1353_, v___y_1345_);
return v___x_1354_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___boxed(lean_object* v_t_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_){
_start:
{
lean_object* v_res_1359_; 
v_res_1359_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10(v_t_1355_, v___y_1356_, v___y_1357_);
lean_dec(v___y_1357_);
lean_dec_ref(v___y_1356_);
return v_res_1359_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__0(void){
_start:
{
lean_object* v___x_1360_; 
v___x_1360_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1360_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__1(void){
_start:
{
lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1361_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__0);
v___x_1362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1361_);
return v___x_1362_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__2(void){
_start:
{
lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; 
v___x_1363_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__1);
v___x_1364_ = lean_unsigned_to_nat(0u);
v___x_1365_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1365_, 0, v___x_1364_);
lean_ctor_set(v___x_1365_, 1, v___x_1364_);
lean_ctor_set(v___x_1365_, 2, v___x_1364_);
lean_ctor_set(v___x_1365_, 3, v___x_1364_);
lean_ctor_set(v___x_1365_, 4, v___x_1363_);
lean_ctor_set(v___x_1365_, 5, v___x_1363_);
lean_ctor_set(v___x_1365_, 6, v___x_1363_);
lean_ctor_set(v___x_1365_, 7, v___x_1363_);
lean_ctor_set(v___x_1365_, 8, v___x_1363_);
lean_ctor_set(v___x_1365_, 9, v___x_1363_);
lean_ctor_set(v___x_1365_, 10, v___x_1363_);
return v___x_1365_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__3(void){
_start:
{
lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; 
v___x_1366_ = lean_unsigned_to_nat(32u);
v___x_1367_ = lean_mk_empty_array_with_capacity(v___x_1366_);
v___x_1368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1368_, 0, v___x_1367_);
return v___x_1368_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__4(void){
_start:
{
size_t v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; 
v___x_1369_ = ((size_t)5ULL);
v___x_1370_ = lean_unsigned_to_nat(0u);
v___x_1371_ = lean_unsigned_to_nat(32u);
v___x_1372_ = lean_mk_empty_array_with_capacity(v___x_1371_);
v___x_1373_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__3);
v___x_1374_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1374_, 0, v___x_1373_);
lean_ctor_set(v___x_1374_, 1, v___x_1372_);
lean_ctor_set(v___x_1374_, 2, v___x_1370_);
lean_ctor_set(v___x_1374_, 3, v___x_1370_);
lean_ctor_set_usize(v___x_1374_, 4, v___x_1369_);
return v___x_1374_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__5(void){
_start:
{
lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; 
v___x_1375_ = lean_box(1);
v___x_1376_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__4);
v___x_1377_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__1);
v___x_1378_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1378_, 0, v___x_1377_);
lean_ctor_set(v___x_1378_, 1, v___x_1376_);
lean_ctor_set(v___x_1378_, 2, v___x_1375_);
return v___x_1378_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg(lean_object* v_msgData_1379_, lean_object* v___y_1380_){
_start:
{
lean_object* v___x_1382_; lean_object* v_env_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v_scopes_1386_; lean_object* v___x_1387_; lean_object* v_opts_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; 
v___x_1382_ = lean_st_ref_get(v___y_1380_);
v_env_1383_ = lean_ctor_get(v___x_1382_, 0);
lean_inc_ref(v_env_1383_);
lean_dec(v___x_1382_);
v___x_1384_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1385_ = lean_st_ref_get(v___y_1380_);
v_scopes_1386_ = lean_ctor_get(v___x_1385_, 2);
lean_inc(v_scopes_1386_);
lean_dec(v___x_1385_);
v___x_1387_ = l_List_head_x21___redArg(v___x_1384_, v_scopes_1386_);
lean_dec(v_scopes_1386_);
v_opts_1388_ = lean_ctor_get(v___x_1387_, 1);
lean_inc_ref(v_opts_1388_);
lean_dec(v___x_1387_);
v___x_1389_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__2);
v___x_1390_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__5);
v___x_1391_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1391_, 0, v_env_1383_);
lean_ctor_set(v___x_1391_, 1, v___x_1389_);
lean_ctor_set(v___x_1391_, 2, v___x_1390_);
lean_ctor_set(v___x_1391_, 3, v_opts_1388_);
v___x_1392_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1392_, 0, v___x_1391_);
lean_ctor_set(v___x_1392_, 1, v_msgData_1379_);
v___x_1393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1393_, 0, v___x_1392_);
return v___x_1393_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___boxed(lean_object* v_msgData_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_){
_start:
{
lean_object* v_res_1397_; 
v_res_1397_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg(v_msgData_1394_, v___y_1395_);
lean_dec(v___y_1395_);
return v_res_1397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21___redArg(lean_object* v_msgData_1398_, lean_object* v_macroStack_1399_, lean_object* v___y_1400_){
_start:
{
lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v_scopes_1404_; lean_object* v___x_1405_; lean_object* v_opts_1406_; lean_object* v___x_1407_; uint8_t v___x_1408_; 
v___x_1402_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1403_ = lean_st_ref_get(v___y_1400_);
v_scopes_1404_ = lean_ctor_get(v___x_1403_, 2);
lean_inc(v_scopes_1404_);
lean_dec(v___x_1403_);
v___x_1405_ = l_List_head_x21___redArg(v___x_1402_, v_scopes_1404_);
lean_dec(v_scopes_1404_);
v_opts_1406_ = lean_ctor_get(v___x_1405_, 1);
lean_inc_ref(v_opts_1406_);
lean_dec(v___x_1405_);
v___x_1407_ = l_Lean_Elab_pp_macroStack;
v___x_1408_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__12(v_opts_1406_, v___x_1407_);
lean_dec_ref(v_opts_1406_);
if (v___x_1408_ == 0)
{
lean_object* v___x_1409_; 
lean_dec(v_macroStack_1399_);
v___x_1409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1409_, 0, v_msgData_1398_);
return v___x_1409_;
}
else
{
if (lean_obj_tag(v_macroStack_1399_) == 0)
{
lean_object* v___x_1410_; 
v___x_1410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1410_, 0, v_msgData_1398_);
return v___x_1410_;
}
else
{
lean_object* v_head_1411_; lean_object* v_after_1412_; lean_object* v___x_1414_; uint8_t v_isShared_1415_; uint8_t v_isSharedCheck_1427_; 
v_head_1411_ = lean_ctor_get(v_macroStack_1399_, 0);
lean_inc(v_head_1411_);
v_after_1412_ = lean_ctor_get(v_head_1411_, 1);
v_isSharedCheck_1427_ = !lean_is_exclusive(v_head_1411_);
if (v_isSharedCheck_1427_ == 0)
{
lean_object* v_unused_1428_; 
v_unused_1428_ = lean_ctor_get(v_head_1411_, 0);
lean_dec(v_unused_1428_);
v___x_1414_ = v_head_1411_;
v_isShared_1415_ = v_isSharedCheck_1427_;
goto v_resetjp_1413_;
}
else
{
lean_inc(v_after_1412_);
lean_dec(v_head_1411_);
v___x_1414_ = lean_box(0);
v_isShared_1415_ = v_isSharedCheck_1427_;
goto v_resetjp_1413_;
}
v_resetjp_1413_:
{
lean_object* v___x_1416_; lean_object* v___x_1418_; 
v___x_1416_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0);
if (v_isShared_1415_ == 0)
{
lean_ctor_set_tag(v___x_1414_, 7);
lean_ctor_set(v___x_1414_, 1, v___x_1416_);
lean_ctor_set(v___x_1414_, 0, v_msgData_1398_);
v___x_1418_ = v___x_1414_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v_msgData_1398_);
lean_ctor_set(v_reuseFailAlloc_1426_, 1, v___x_1416_);
v___x_1418_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v_msgData_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; 
v___x_1419_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__2);
v___x_1420_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1420_, 0, v___x_1418_);
lean_ctor_set(v___x_1420_, 1, v___x_1419_);
v___x_1421_ = l_Lean_MessageData_ofSyntax(v_after_1412_);
v___x_1422_ = l_Lean_indentD(v___x_1421_);
v_msgData_1423_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_1423_, 0, v___x_1420_);
lean_ctor_set(v_msgData_1423_, 1, v___x_1422_);
v___x_1424_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13(v_msgData_1423_, v_macroStack_1399_);
v___x_1425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1425_, 0, v___x_1424_);
return v___x_1425_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21___redArg___boxed(lean_object* v_msgData_1429_, lean_object* v_macroStack_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_){
_start:
{
lean_object* v_res_1433_; 
v_res_1433_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21___redArg(v_msgData_1429_, v_macroStack_1430_, v___y_1431_);
lean_dec(v___y_1431_);
return v_res_1433_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15___redArg(lean_object* v_msg_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_){
_start:
{
lean_object* v___x_1438_; 
v___x_1438_ = l_Lean_Elab_Command_getRef___redArg(v___y_1435_);
if (lean_obj_tag(v___x_1438_) == 0)
{
lean_object* v_a_1439_; lean_object* v_macroStack_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v_a_1443_; lean_object* v___x_1444_; lean_object* v_a_1445_; lean_object* v___x_1447_; uint8_t v_isShared_1448_; uint8_t v_isSharedCheck_1453_; 
v_a_1439_ = lean_ctor_get(v___x_1438_, 0);
lean_inc(v_a_1439_);
lean_dec_ref_known(v___x_1438_, 1);
v_macroStack_1440_ = lean_ctor_get(v___y_1435_, 4);
v___x_1441_ = l_Lean_Elab_getBetterRef(v_a_1439_, v_macroStack_1440_);
lean_dec(v_a_1439_);
v___x_1442_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg(v_msg_1434_, v___y_1436_);
v_a_1443_ = lean_ctor_get(v___x_1442_, 0);
lean_inc(v_a_1443_);
lean_dec_ref(v___x_1442_);
lean_inc(v_macroStack_1440_);
v___x_1444_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21___redArg(v_a_1443_, v_macroStack_1440_, v___y_1436_);
v_a_1445_ = lean_ctor_get(v___x_1444_, 0);
v_isSharedCheck_1453_ = !lean_is_exclusive(v___x_1444_);
if (v_isSharedCheck_1453_ == 0)
{
v___x_1447_ = v___x_1444_;
v_isShared_1448_ = v_isSharedCheck_1453_;
goto v_resetjp_1446_;
}
else
{
lean_inc(v_a_1445_);
lean_dec(v___x_1444_);
v___x_1447_ = lean_box(0);
v_isShared_1448_ = v_isSharedCheck_1453_;
goto v_resetjp_1446_;
}
v_resetjp_1446_:
{
lean_object* v___x_1449_; lean_object* v___x_1451_; 
v___x_1449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1449_, 0, v___x_1441_);
lean_ctor_set(v___x_1449_, 1, v_a_1445_);
if (v_isShared_1448_ == 0)
{
lean_ctor_set_tag(v___x_1447_, 1);
lean_ctor_set(v___x_1447_, 0, v___x_1449_);
v___x_1451_ = v___x_1447_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1452_; 
v_reuseFailAlloc_1452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1452_, 0, v___x_1449_);
v___x_1451_ = v_reuseFailAlloc_1452_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
return v___x_1451_;
}
}
}
else
{
lean_object* v_a_1454_; lean_object* v___x_1456_; uint8_t v_isShared_1457_; uint8_t v_isSharedCheck_1461_; 
lean_dec_ref(v_msg_1434_);
v_a_1454_ = lean_ctor_get(v___x_1438_, 0);
v_isSharedCheck_1461_ = !lean_is_exclusive(v___x_1438_);
if (v_isSharedCheck_1461_ == 0)
{
v___x_1456_ = v___x_1438_;
v_isShared_1457_ = v_isSharedCheck_1461_;
goto v_resetjp_1455_;
}
else
{
lean_inc(v_a_1454_);
lean_dec(v___x_1438_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15___redArg___boxed(lean_object* v_msg_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_){
_start:
{
lean_object* v_res_1466_; 
v_res_1466_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15___redArg(v_msg_1462_, v___y_1463_, v___y_1464_);
lean_dec(v___y_1464_);
lean_dec_ref(v___y_1463_);
return v_res_1466_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___redArg(lean_object* v_ref_1467_, lean_object* v_msg_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_){
_start:
{
lean_object* v___x_1472_; 
v___x_1472_ = l_Lean_Elab_Command_getRef___redArg(v___y_1469_);
if (lean_obj_tag(v___x_1472_) == 0)
{
lean_object* v_a_1473_; lean_object* v_fileName_1474_; lean_object* v_fileMap_1475_; lean_object* v_currRecDepth_1476_; lean_object* v_cmdPos_1477_; lean_object* v_macroStack_1478_; lean_object* v_quotContext_x3f_1479_; lean_object* v_currMacroScope_1480_; lean_object* v_snap_x3f_1481_; lean_object* v_cancelTk_x3f_1482_; uint8_t v_suppressElabErrors_1483_; lean_object* v_ref_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; 
v_a_1473_ = lean_ctor_get(v___x_1472_, 0);
lean_inc(v_a_1473_);
lean_dec_ref_known(v___x_1472_, 1);
v_fileName_1474_ = lean_ctor_get(v___y_1469_, 0);
v_fileMap_1475_ = lean_ctor_get(v___y_1469_, 1);
v_currRecDepth_1476_ = lean_ctor_get(v___y_1469_, 2);
v_cmdPos_1477_ = lean_ctor_get(v___y_1469_, 3);
v_macroStack_1478_ = lean_ctor_get(v___y_1469_, 4);
v_quotContext_x3f_1479_ = lean_ctor_get(v___y_1469_, 5);
v_currMacroScope_1480_ = lean_ctor_get(v___y_1469_, 6);
v_snap_x3f_1481_ = lean_ctor_get(v___y_1469_, 8);
v_cancelTk_x3f_1482_ = lean_ctor_get(v___y_1469_, 9);
v_suppressElabErrors_1483_ = lean_ctor_get_uint8(v___y_1469_, sizeof(void*)*10);
v_ref_1484_ = l_Lean_replaceRef(v_ref_1467_, v_a_1473_);
lean_dec(v_a_1473_);
lean_inc(v_cancelTk_x3f_1482_);
lean_inc(v_snap_x3f_1481_);
lean_inc(v_currMacroScope_1480_);
lean_inc(v_quotContext_x3f_1479_);
lean_inc(v_macroStack_1478_);
lean_inc(v_cmdPos_1477_);
lean_inc(v_currRecDepth_1476_);
lean_inc_ref(v_fileMap_1475_);
lean_inc_ref(v_fileName_1474_);
v___x_1485_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_1485_, 0, v_fileName_1474_);
lean_ctor_set(v___x_1485_, 1, v_fileMap_1475_);
lean_ctor_set(v___x_1485_, 2, v_currRecDepth_1476_);
lean_ctor_set(v___x_1485_, 3, v_cmdPos_1477_);
lean_ctor_set(v___x_1485_, 4, v_macroStack_1478_);
lean_ctor_set(v___x_1485_, 5, v_quotContext_x3f_1479_);
lean_ctor_set(v___x_1485_, 6, v_currMacroScope_1480_);
lean_ctor_set(v___x_1485_, 7, v_ref_1484_);
lean_ctor_set(v___x_1485_, 8, v_snap_x3f_1481_);
lean_ctor_set(v___x_1485_, 9, v_cancelTk_x3f_1482_);
lean_ctor_set_uint8(v___x_1485_, sizeof(void*)*10, v_suppressElabErrors_1483_);
v___x_1486_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15___redArg(v_msg_1468_, v___x_1485_, v___y_1470_);
lean_dec_ref_known(v___x_1485_, 10);
return v___x_1486_;
}
else
{
lean_object* v_a_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1494_; 
lean_dec_ref(v_msg_1468_);
v_a_1487_ = lean_ctor_get(v___x_1472_, 0);
v_isSharedCheck_1494_ = !lean_is_exclusive(v___x_1472_);
if (v_isSharedCheck_1494_ == 0)
{
v___x_1489_ = v___x_1472_;
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_a_1487_);
lean_dec(v___x_1472_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v___x_1492_; 
if (v_isShared_1490_ == 0)
{
v___x_1492_ = v___x_1489_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v_a_1487_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
return v___x_1492_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_ref_1495_, lean_object* v_msg_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_){
_start:
{
lean_object* v_res_1500_; 
v_res_1500_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___redArg(v_ref_1495_, v_msg_1496_, v___y_1497_, v___y_1498_);
lean_dec(v___y_1498_);
lean_dec_ref(v___y_1497_);
lean_dec(v_ref_1495_);
return v_res_1500_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__1(void){
_start:
{
lean_object* v___x_1502_; lean_object* v___x_1503_; 
v___x_1502_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__0));
v___x_1503_ = l_Lean_stringToMessageData(v___x_1502_);
return v___x_1503_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__3(void){
_start:
{
lean_object* v___x_1505_; lean_object* v___x_1506_; 
v___x_1505_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__2));
v___x_1506_ = l_Lean_stringToMessageData(v___x_1505_);
return v___x_1506_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__5(void){
_start:
{
lean_object* v___x_1508_; lean_object* v___x_1509_; 
v___x_1508_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__4));
v___x_1509_ = l_Lean_stringToMessageData(v___x_1508_);
return v___x_1509_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__7(void){
_start:
{
lean_object* v___x_1511_; lean_object* v___x_1512_; 
v___x_1511_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__6));
v___x_1512_ = l_Lean_stringToMessageData(v___x_1511_);
return v___x_1512_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__9(void){
_start:
{
lean_object* v___x_1514_; lean_object* v___x_1515_; 
v___x_1514_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__8));
v___x_1515_ = l_Lean_stringToMessageData(v___x_1514_);
return v___x_1515_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__11(void){
_start:
{
lean_object* v___x_1517_; lean_object* v___x_1518_; 
v___x_1517_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__10));
v___x_1518_ = l_Lean_stringToMessageData(v___x_1517_);
return v___x_1518_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__13(void){
_start:
{
lean_object* v___x_1520_; lean_object* v___x_1521_; 
v___x_1520_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__12));
v___x_1521_ = l_Lean_stringToMessageData(v___x_1520_);
return v___x_1521_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg(lean_object* v_msg_1522_, lean_object* v_declHint_1523_, lean_object* v___y_1524_){
_start:
{
lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v_env_1528_; uint8_t v___x_1529_; 
v___x_1526_ = lean_box(0);
v___x_1527_ = lean_st_ref_get(v___y_1524_);
v_env_1528_ = lean_ctor_get(v___x_1527_, 0);
lean_inc_ref(v_env_1528_);
lean_dec(v___x_1527_);
v___x_1529_ = l_Lean_Name_isAnonymous(v_declHint_1523_);
if (v___x_1529_ == 0)
{
uint8_t v_isExporting_1530_; 
v_isExporting_1530_ = lean_ctor_get_uint8(v_env_1528_, sizeof(void*)*8);
if (v_isExporting_1530_ == 0)
{
lean_object* v___x_1531_; 
lean_dec_ref(v_env_1528_);
lean_dec(v_declHint_1523_);
v___x_1531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1531_, 0, v_msg_1522_);
return v___x_1531_;
}
else
{
lean_object* v___x_1532_; uint8_t v___x_1533_; 
lean_inc_ref(v_env_1528_);
v___x_1532_ = l_Lean_Environment_setExporting(v_env_1528_, v___x_1529_);
lean_inc(v_declHint_1523_);
lean_inc_ref(v___x_1532_);
v___x_1533_ = l_Lean_Environment_contains(v___x_1532_, v_declHint_1523_, v_isExporting_1530_);
if (v___x_1533_ == 0)
{
lean_object* v___x_1534_; 
lean_dec_ref(v___x_1532_);
lean_dec_ref(v_env_1528_);
lean_dec(v_declHint_1523_);
v___x_1534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1534_, 0, v_msg_1522_);
return v___x_1534_;
}
else
{
lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v_c_1540_; lean_object* v___x_1541_; 
v___x_1535_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__2);
v___x_1536_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__5);
v___x_1537_ = l_Lean_Options_empty;
v___x_1538_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1538_, 0, v___x_1532_);
lean_ctor_set(v___x_1538_, 1, v___x_1535_);
lean_ctor_set(v___x_1538_, 2, v___x_1536_);
lean_ctor_set(v___x_1538_, 3, v___x_1537_);
lean_inc(v_declHint_1523_);
v___x_1539_ = l_Lean_MessageData_ofConstName(v_declHint_1523_, v___x_1529_);
v_c_1540_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1540_, 0, v___x_1538_);
lean_ctor_set(v_c_1540_, 1, v___x_1539_);
v___x_1541_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1528_, v_declHint_1523_);
if (lean_obj_tag(v___x_1541_) == 0)
{
lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; 
lean_dec_ref(v_env_1528_);
lean_dec(v_declHint_1523_);
v___x_1542_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__1);
v___x_1543_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1543_, 0, v___x_1542_);
lean_ctor_set(v___x_1543_, 1, v_c_1540_);
v___x_1544_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__3);
v___x_1545_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1545_, 0, v___x_1543_);
lean_ctor_set(v___x_1545_, 1, v___x_1544_);
v___x_1546_ = l_Lean_MessageData_note(v___x_1545_);
v___x_1547_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1547_, 0, v_msg_1522_);
lean_ctor_set(v___x_1547_, 1, v___x_1546_);
v___x_1548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1548_, 0, v___x_1547_);
return v___x_1548_;
}
else
{
lean_object* v_val_1549_; lean_object* v___x_1551_; uint8_t v_isShared_1552_; uint8_t v_isSharedCheck_1583_; 
v_val_1549_ = lean_ctor_get(v___x_1541_, 0);
v_isSharedCheck_1583_ = !lean_is_exclusive(v___x_1541_);
if (v_isSharedCheck_1583_ == 0)
{
v___x_1551_ = v___x_1541_;
v_isShared_1552_ = v_isSharedCheck_1583_;
goto v_resetjp_1550_;
}
else
{
lean_inc(v_val_1549_);
lean_dec(v___x_1541_);
v___x_1551_ = lean_box(0);
v_isShared_1552_ = v_isSharedCheck_1583_;
goto v_resetjp_1550_;
}
v_resetjp_1550_:
{
lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v_mod_1555_; uint8_t v___x_1556_; 
v___x_1553_ = l_Lean_Environment_header(v_env_1528_);
lean_dec_ref(v_env_1528_);
v___x_1554_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1553_);
v_mod_1555_ = lean_array_get(v___x_1526_, v___x_1554_, v_val_1549_);
lean_dec(v_val_1549_);
lean_dec_ref(v___x_1554_);
v___x_1556_ = l_Lean_isPrivateName(v_declHint_1523_);
lean_dec(v_declHint_1523_);
if (v___x_1556_ == 0)
{
lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1568_; 
v___x_1557_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__5);
v___x_1558_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1558_, 0, v___x_1557_);
lean_ctor_set(v___x_1558_, 1, v_c_1540_);
v___x_1559_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__7);
v___x_1560_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1560_, 0, v___x_1558_);
lean_ctor_set(v___x_1560_, 1, v___x_1559_);
v___x_1561_ = l_Lean_MessageData_ofName(v_mod_1555_);
v___x_1562_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1562_, 0, v___x_1560_);
lean_ctor_set(v___x_1562_, 1, v___x_1561_);
v___x_1563_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__9);
v___x_1564_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1564_, 0, v___x_1562_);
lean_ctor_set(v___x_1564_, 1, v___x_1563_);
v___x_1565_ = l_Lean_MessageData_note(v___x_1564_);
v___x_1566_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1566_, 0, v_msg_1522_);
lean_ctor_set(v___x_1566_, 1, v___x_1565_);
if (v_isShared_1552_ == 0)
{
lean_ctor_set_tag(v___x_1551_, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1566_);
v___x_1568_ = v___x_1551_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1569_; 
v_reuseFailAlloc_1569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1569_, 0, v___x_1566_);
v___x_1568_ = v_reuseFailAlloc_1569_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
return v___x_1568_;
}
}
else
{
lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1581_; 
v___x_1570_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__1);
v___x_1571_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1571_, 0, v___x_1570_);
lean_ctor_set(v___x_1571_, 1, v_c_1540_);
v___x_1572_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__11);
v___x_1573_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1573_, 0, v___x_1571_);
lean_ctor_set(v___x_1573_, 1, v___x_1572_);
v___x_1574_ = l_Lean_MessageData_ofName(v_mod_1555_);
v___x_1575_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1575_, 0, v___x_1573_);
lean_ctor_set(v___x_1575_, 1, v___x_1574_);
v___x_1576_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__13);
v___x_1577_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1577_, 0, v___x_1575_);
lean_ctor_set(v___x_1577_, 1, v___x_1576_);
v___x_1578_ = l_Lean_MessageData_note(v___x_1577_);
v___x_1579_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1579_, 0, v_msg_1522_);
lean_ctor_set(v___x_1579_, 1, v___x_1578_);
if (v_isShared_1552_ == 0)
{
lean_ctor_set_tag(v___x_1551_, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1579_);
v___x_1581_ = v___x_1551_;
goto v_reusejp_1580_;
}
else
{
lean_object* v_reuseFailAlloc_1582_; 
v_reuseFailAlloc_1582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1582_, 0, v___x_1579_);
v___x_1581_ = v_reuseFailAlloc_1582_;
goto v_reusejp_1580_;
}
v_reusejp_1580_:
{
return v___x_1581_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1584_; 
lean_dec_ref(v_env_1528_);
lean_dec(v_declHint_1523_);
v___x_1584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1584_, 0, v_msg_1522_);
return v___x_1584_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___boxed(lean_object* v_msg_1585_, lean_object* v_declHint_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_){
_start:
{
lean_object* v_res_1589_; 
v_res_1589_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg(v_msg_1585_, v_declHint_1586_, v___y_1587_);
lean_dec(v___y_1587_);
return v_res_1589_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52(lean_object* v_msg_1590_, lean_object* v_declHint_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_){
_start:
{
lean_object* v___x_1595_; lean_object* v_a_1596_; lean_object* v___x_1598_; uint8_t v_isShared_1599_; uint8_t v_isSharedCheck_1605_; 
v___x_1595_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg(v_msg_1590_, v_declHint_1591_, v___y_1593_);
v_a_1596_ = lean_ctor_get(v___x_1595_, 0);
v_isSharedCheck_1605_ = !lean_is_exclusive(v___x_1595_);
if (v_isSharedCheck_1605_ == 0)
{
v___x_1598_ = v___x_1595_;
v_isShared_1599_ = v_isSharedCheck_1605_;
goto v_resetjp_1597_;
}
else
{
lean_inc(v_a_1596_);
lean_dec(v___x_1595_);
v___x_1598_ = lean_box(0);
v_isShared_1599_ = v_isSharedCheck_1605_;
goto v_resetjp_1597_;
}
v_resetjp_1597_:
{
lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1603_; 
v___x_1600_ = l_Lean_unknownIdentifierMessageTag;
v___x_1601_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1601_, 0, v___x_1600_);
lean_ctor_set(v___x_1601_, 1, v_a_1596_);
if (v_isShared_1599_ == 0)
{
lean_ctor_set(v___x_1598_, 0, v___x_1601_);
v___x_1603_ = v___x_1598_;
goto v_reusejp_1602_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v___x_1601_);
v___x_1603_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1602_;
}
v_reusejp_1602_:
{
return v___x_1603_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52___boxed(lean_object* v_msg_1606_, lean_object* v_declHint_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_){
_start:
{
lean_object* v_res_1611_; 
v_res_1611_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52(v_msg_1606_, v_declHint_1607_, v___y_1608_, v___y_1609_);
lean_dec(v___y_1609_);
lean_dec_ref(v___y_1608_);
return v_res_1611_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49___redArg(lean_object* v_ref_1612_, lean_object* v_msg_1613_, lean_object* v_declHint_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_){
_start:
{
lean_object* v___x_1618_; lean_object* v_a_1619_; lean_object* v___x_1620_; 
v___x_1618_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52(v_msg_1613_, v_declHint_1614_, v___y_1615_, v___y_1616_);
v_a_1619_ = lean_ctor_get(v___x_1618_, 0);
lean_inc(v_a_1619_);
lean_dec_ref(v___x_1618_);
v___x_1620_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___redArg(v_ref_1612_, v_a_1619_, v___y_1615_, v___y_1616_);
return v___x_1620_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49___redArg___boxed(lean_object* v_ref_1621_, lean_object* v_msg_1622_, lean_object* v_declHint_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_){
_start:
{
lean_object* v_res_1627_; 
v_res_1627_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49___redArg(v_ref_1621_, v_msg_1622_, v_declHint_1623_, v___y_1624_, v___y_1625_);
lean_dec(v___y_1625_);
lean_dec_ref(v___y_1624_);
lean_dec(v_ref_1621_);
return v_res_1627_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg___closed__1(void){
_start:
{
lean_object* v___x_1629_; lean_object* v___x_1630_; 
v___x_1629_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg___closed__0));
v___x_1630_ = l_Lean_stringToMessageData(v___x_1629_);
return v___x_1630_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg(lean_object* v_ref_1631_, lean_object* v_constName_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_){
_start:
{
lean_object* v___x_1636_; uint8_t v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; 
v___x_1636_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg___closed__1);
v___x_1637_ = 0;
lean_inc(v_constName_1632_);
v___x_1638_ = l_Lean_MessageData_ofConstName(v_constName_1632_, v___x_1637_);
v___x_1639_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1639_, 0, v___x_1636_);
lean_ctor_set(v___x_1639_, 1, v___x_1638_);
v___x_1640_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1);
v___x_1641_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1639_);
lean_ctor_set(v___x_1641_, 1, v___x_1640_);
v___x_1642_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49___redArg(v_ref_1631_, v___x_1641_, v_constName_1632_, v___y_1633_, v___y_1634_);
return v___x_1642_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg___boxed(lean_object* v_ref_1643_, lean_object* v_constName_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_){
_start:
{
lean_object* v_res_1648_; 
v_res_1648_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg(v_ref_1643_, v_constName_1644_, v___y_1645_, v___y_1646_);
lean_dec(v___y_1646_);
lean_dec_ref(v___y_1645_);
lean_dec(v_ref_1643_);
return v_res_1648_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26___redArg(lean_object* v_constName_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_){
_start:
{
lean_object* v___x_1653_; 
v___x_1653_ = l_Lean_Elab_Command_getRef___redArg(v___y_1650_);
if (lean_obj_tag(v___x_1653_) == 0)
{
lean_object* v_a_1654_; lean_object* v___x_1655_; 
v_a_1654_ = lean_ctor_get(v___x_1653_, 0);
lean_inc(v_a_1654_);
lean_dec_ref_known(v___x_1653_, 1);
v___x_1655_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg(v_a_1654_, v_constName_1649_, v___y_1650_, v___y_1651_);
lean_dec(v_a_1654_);
return v___x_1655_;
}
else
{
lean_object* v_a_1656_; lean_object* v___x_1658_; uint8_t v_isShared_1659_; uint8_t v_isSharedCheck_1663_; 
lean_dec(v_constName_1649_);
v_a_1656_ = lean_ctor_get(v___x_1653_, 0);
v_isSharedCheck_1663_ = !lean_is_exclusive(v___x_1653_);
if (v_isSharedCheck_1663_ == 0)
{
v___x_1658_ = v___x_1653_;
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
else
{
lean_inc(v_a_1656_);
lean_dec(v___x_1653_);
v___x_1658_ = lean_box(0);
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
v_resetjp_1657_:
{
lean_object* v___x_1661_; 
if (v_isShared_1659_ == 0)
{
v___x_1661_ = v___x_1658_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v_a_1656_);
v___x_1661_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
return v___x_1661_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26___redArg___boxed(lean_object* v_constName_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_){
_start:
{
lean_object* v_res_1668_; 
v_res_1668_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26___redArg(v_constName_1664_, v___y_1665_, v___y_1666_);
lean_dec(v___y_1666_);
lean_dec_ref(v___y_1665_);
return v_res_1668_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15(lean_object* v_constName_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_){
_start:
{
lean_object* v___x_1673_; lean_object* v_env_1674_; uint8_t v___x_1675_; lean_object* v___x_1676_; 
v___x_1673_ = lean_st_ref_get(v___y_1671_);
v_env_1674_ = lean_ctor_get(v___x_1673_, 0);
lean_inc_ref(v_env_1674_);
lean_dec(v___x_1673_);
v___x_1675_ = 0;
lean_inc(v_constName_1669_);
v___x_1676_ = l_Lean_Environment_findConstVal_x3f(v_env_1674_, v_constName_1669_, v___x_1675_);
if (lean_obj_tag(v___x_1676_) == 0)
{
lean_object* v___x_1677_; 
v___x_1677_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26___redArg(v_constName_1669_, v___y_1670_, v___y_1671_);
return v___x_1677_;
}
else
{
lean_object* v_val_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1685_; 
lean_dec(v_constName_1669_);
v_val_1678_ = lean_ctor_get(v___x_1676_, 0);
v_isSharedCheck_1685_ = !lean_is_exclusive(v___x_1676_);
if (v_isSharedCheck_1685_ == 0)
{
v___x_1680_ = v___x_1676_;
v_isShared_1681_ = v_isSharedCheck_1685_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_val_1678_);
lean_dec(v___x_1676_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1685_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v___x_1683_; 
if (v_isShared_1681_ == 0)
{
lean_ctor_set_tag(v___x_1680_, 0);
v___x_1683_ = v___x_1680_;
goto v_reusejp_1682_;
}
else
{
lean_object* v_reuseFailAlloc_1684_; 
v_reuseFailAlloc_1684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1684_, 0, v_val_1678_);
v___x_1683_ = v_reuseFailAlloc_1684_;
goto v_reusejp_1682_;
}
v_reusejp_1682_:
{
return v___x_1683_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15___boxed(lean_object* v_constName_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_){
_start:
{
lean_object* v_res_1690_; 
v_res_1690_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15(v_constName_1686_, v___y_1687_, v___y_1688_);
lean_dec(v___y_1688_);
lean_dec_ref(v___y_1687_);
return v_res_1690_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9(lean_object* v_constName_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_){
_start:
{
lean_object* v___x_1695_; 
lean_inc(v_constName_1691_);
v___x_1695_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15(v_constName_1691_, v___y_1692_, v___y_1693_);
if (lean_obj_tag(v___x_1695_) == 0)
{
lean_object* v_a_1696_; lean_object* v___x_1698_; uint8_t v_isShared_1699_; uint8_t v_isSharedCheck_1707_; 
v_a_1696_ = lean_ctor_get(v___x_1695_, 0);
v_isSharedCheck_1707_ = !lean_is_exclusive(v___x_1695_);
if (v_isSharedCheck_1707_ == 0)
{
v___x_1698_ = v___x_1695_;
v_isShared_1699_ = v_isSharedCheck_1707_;
goto v_resetjp_1697_;
}
else
{
lean_inc(v_a_1696_);
lean_dec(v___x_1695_);
v___x_1698_ = lean_box(0);
v_isShared_1699_ = v_isSharedCheck_1707_;
goto v_resetjp_1697_;
}
v_resetjp_1697_:
{
lean_object* v_levelParams_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1705_; 
v_levelParams_1700_ = lean_ctor_get(v_a_1696_, 1);
lean_inc(v_levelParams_1700_);
lean_dec(v_a_1696_);
v___x_1701_ = lean_box(0);
v___x_1702_ = l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(v_levelParams_1700_, v___x_1701_);
v___x_1703_ = l_Lean_mkConst(v_constName_1691_, v___x_1702_);
if (v_isShared_1699_ == 0)
{
lean_ctor_set(v___x_1698_, 0, v___x_1703_);
v___x_1705_ = v___x_1698_;
goto v_reusejp_1704_;
}
else
{
lean_object* v_reuseFailAlloc_1706_; 
v_reuseFailAlloc_1706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1706_, 0, v___x_1703_);
v___x_1705_ = v_reuseFailAlloc_1706_;
goto v_reusejp_1704_;
}
v_reusejp_1704_:
{
return v___x_1705_;
}
}
}
else
{
lean_object* v_a_1708_; lean_object* v___x_1710_; uint8_t v_isShared_1711_; uint8_t v_isSharedCheck_1715_; 
lean_dec(v_constName_1691_);
v_a_1708_ = lean_ctor_get(v___x_1695_, 0);
v_isSharedCheck_1715_ = !lean_is_exclusive(v___x_1695_);
if (v_isSharedCheck_1715_ == 0)
{
v___x_1710_ = v___x_1695_;
v_isShared_1711_ = v_isSharedCheck_1715_;
goto v_resetjp_1709_;
}
else
{
lean_inc(v_a_1708_);
lean_dec(v___x_1695_);
v___x_1710_ = lean_box(0);
v_isShared_1711_ = v_isSharedCheck_1715_;
goto v_resetjp_1709_;
}
v_resetjp_1709_:
{
lean_object* v___x_1713_; 
if (v_isShared_1711_ == 0)
{
v___x_1713_ = v___x_1710_;
goto v_reusejp_1712_;
}
else
{
lean_object* v_reuseFailAlloc_1714_; 
v_reuseFailAlloc_1714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1714_, 0, v_a_1708_);
v___x_1713_ = v_reuseFailAlloc_1714_;
goto v_reusejp_1712_;
}
v_reusejp_1712_:
{
return v___x_1713_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9___boxed(lean_object* v_constName_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_){
_start:
{
lean_object* v_res_1720_; 
v_res_1720_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9(v_constName_1716_, v___y_1717_, v___y_1718_);
lean_dec(v___y_1718_);
lean_dec_ref(v___y_1717_);
return v_res_1720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5(lean_object* v_stx_1721_, lean_object* v_n_1722_, lean_object* v_expectedType_x3f_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_){
_start:
{
lean_object* v___x_1727_; 
v___x_1727_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9(v_n_1722_, v___y_1724_, v___y_1725_);
if (lean_obj_tag(v___x_1727_) == 0)
{
lean_object* v_a_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; uint8_t v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; 
v_a_1728_ = lean_ctor_get(v___x_1727_, 0);
lean_inc(v_a_1728_);
lean_dec_ref_known(v___x_1727_, 1);
v___x_1729_ = lean_box(0);
v___x_1730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1730_, 0, v___x_1729_);
lean_ctor_set(v___x_1730_, 1, v_stx_1721_);
v___x_1731_ = l_Lean_LocalContext_empty;
v___x_1732_ = 0;
v___x_1733_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_1733_, 0, v___x_1730_);
lean_ctor_set(v___x_1733_, 1, v___x_1731_);
lean_ctor_set(v___x_1733_, 2, v_expectedType_x3f_1723_);
lean_ctor_set(v___x_1733_, 3, v_a_1728_);
lean_ctor_set_uint8(v___x_1733_, sizeof(void*)*4, v___x_1732_);
lean_ctor_set_uint8(v___x_1733_, sizeof(void*)*4 + 1, v___x_1732_);
v___x_1734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1734_, 0, v___x_1733_);
v___x_1735_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10(v___x_1734_, v___y_1724_, v___y_1725_);
return v___x_1735_;
}
else
{
lean_object* v_a_1736_; lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1743_; 
lean_dec(v_expectedType_x3f_1723_);
lean_dec(v_stx_1721_);
v_a_1736_ = lean_ctor_get(v___x_1727_, 0);
v_isSharedCheck_1743_ = !lean_is_exclusive(v___x_1727_);
if (v_isSharedCheck_1743_ == 0)
{
v___x_1738_ = v___x_1727_;
v_isShared_1739_ = v_isSharedCheck_1743_;
goto v_resetjp_1737_;
}
else
{
lean_inc(v_a_1736_);
lean_dec(v___x_1727_);
v___x_1738_ = lean_box(0);
v_isShared_1739_ = v_isSharedCheck_1743_;
goto v_resetjp_1737_;
}
v_resetjp_1737_:
{
lean_object* v___x_1741_; 
if (v_isShared_1739_ == 0)
{
v___x_1741_ = v___x_1738_;
goto v_reusejp_1740_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v_a_1736_);
v___x_1741_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1740_;
}
v_reusejp_1740_:
{
return v___x_1741_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5___boxed(lean_object* v_stx_1744_, lean_object* v_n_1745_, lean_object* v_expectedType_x3f_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_){
_start:
{
lean_object* v_res_1750_; 
v_res_1750_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5(v_stx_1744_, v_n_1745_, v_expectedType_x3f_1746_, v___y_1747_, v___y_1748_);
lean_dec(v___y_1748_);
lean_dec_ref(v___y_1747_);
return v_res_1750_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12___redArg(lean_object* v_declName_1751_, uint8_t v_s_1752_, lean_object* v___y_1753_){
_start:
{
lean_object* v___x_1755_; lean_object* v_env_1756_; lean_object* v_messages_1757_; lean_object* v_scopes_1758_; lean_object* v_usedQuotCtxts_1759_; lean_object* v_nextMacroScope_1760_; lean_object* v_maxRecDepth_1761_; lean_object* v_ngen_1762_; lean_object* v_auxDeclNGen_1763_; lean_object* v_infoState_1764_; lean_object* v_traceState_1765_; lean_object* v_snapshotTasks_1766_; lean_object* v_prevLinterStates_1767_; lean_object* v_codeQualityEntryTasks_1768_; lean_object* v___x_1770_; uint8_t v_isShared_1771_; uint8_t v_isSharedCheck_1781_; 
v___x_1755_ = lean_st_ref_take(v___y_1753_);
v_env_1756_ = lean_ctor_get(v___x_1755_, 0);
v_messages_1757_ = lean_ctor_get(v___x_1755_, 1);
v_scopes_1758_ = lean_ctor_get(v___x_1755_, 2);
v_usedQuotCtxts_1759_ = lean_ctor_get(v___x_1755_, 3);
v_nextMacroScope_1760_ = lean_ctor_get(v___x_1755_, 4);
v_maxRecDepth_1761_ = lean_ctor_get(v___x_1755_, 5);
v_ngen_1762_ = lean_ctor_get(v___x_1755_, 6);
v_auxDeclNGen_1763_ = lean_ctor_get(v___x_1755_, 7);
v_infoState_1764_ = lean_ctor_get(v___x_1755_, 8);
v_traceState_1765_ = lean_ctor_get(v___x_1755_, 9);
v_snapshotTasks_1766_ = lean_ctor_get(v___x_1755_, 10);
v_prevLinterStates_1767_ = lean_ctor_get(v___x_1755_, 11);
v_codeQualityEntryTasks_1768_ = lean_ctor_get(v___x_1755_, 12);
v_isSharedCheck_1781_ = !lean_is_exclusive(v___x_1755_);
if (v_isSharedCheck_1781_ == 0)
{
v___x_1770_ = v___x_1755_;
v_isShared_1771_ = v_isSharedCheck_1781_;
goto v_resetjp_1769_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1768_);
lean_inc(v_prevLinterStates_1767_);
lean_inc(v_snapshotTasks_1766_);
lean_inc(v_traceState_1765_);
lean_inc(v_infoState_1764_);
lean_inc(v_auxDeclNGen_1763_);
lean_inc(v_ngen_1762_);
lean_inc(v_maxRecDepth_1761_);
lean_inc(v_nextMacroScope_1760_);
lean_inc(v_usedQuotCtxts_1759_);
lean_inc(v_scopes_1758_);
lean_inc(v_messages_1757_);
lean_inc(v_env_1756_);
lean_dec(v___x_1755_);
v___x_1770_ = lean_box(0);
v_isShared_1771_ = v_isSharedCheck_1781_;
goto v_resetjp_1769_;
}
v_resetjp_1769_:
{
lean_object* v___x_1772_; uint8_t v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1777_; 
v___x_1772_ = lean_box(0);
v___x_1773_ = 0;
v___x_1774_ = lean_box(0);
v___x_1775_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_1756_, v_declName_1751_, v_s_1752_, v___x_1773_, v___x_1774_);
if (v_isShared_1771_ == 0)
{
lean_ctor_set(v___x_1770_, 0, v___x_1775_);
v___x_1777_ = v___x_1770_;
goto v_reusejp_1776_;
}
else
{
lean_object* v_reuseFailAlloc_1780_; 
v_reuseFailAlloc_1780_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1780_, 0, v___x_1775_);
lean_ctor_set(v_reuseFailAlloc_1780_, 1, v_messages_1757_);
lean_ctor_set(v_reuseFailAlloc_1780_, 2, v_scopes_1758_);
lean_ctor_set(v_reuseFailAlloc_1780_, 3, v_usedQuotCtxts_1759_);
lean_ctor_set(v_reuseFailAlloc_1780_, 4, v_nextMacroScope_1760_);
lean_ctor_set(v_reuseFailAlloc_1780_, 5, v_maxRecDepth_1761_);
lean_ctor_set(v_reuseFailAlloc_1780_, 6, v_ngen_1762_);
lean_ctor_set(v_reuseFailAlloc_1780_, 7, v_auxDeclNGen_1763_);
lean_ctor_set(v_reuseFailAlloc_1780_, 8, v_infoState_1764_);
lean_ctor_set(v_reuseFailAlloc_1780_, 9, v_traceState_1765_);
lean_ctor_set(v_reuseFailAlloc_1780_, 10, v_snapshotTasks_1766_);
lean_ctor_set(v_reuseFailAlloc_1780_, 11, v_prevLinterStates_1767_);
lean_ctor_set(v_reuseFailAlloc_1780_, 12, v_codeQualityEntryTasks_1768_);
v___x_1777_ = v_reuseFailAlloc_1780_;
goto v_reusejp_1776_;
}
v_reusejp_1776_:
{
lean_object* v___x_1778_; lean_object* v___x_1779_; 
v___x_1778_ = lean_st_ref_put(v___y_1753_, v___x_1777_);
v___x_1779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1779_, 0, v___x_1772_);
return v___x_1779_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12___redArg___boxed(lean_object* v_declName_1782_, lean_object* v_s_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_){
_start:
{
uint8_t v_s_boxed_1786_; lean_object* v_res_1787_; 
v_s_boxed_1786_ = lean_unbox(v_s_1783_);
v_res_1787_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12___redArg(v_declName_1782_, v_s_boxed_1786_, v___y_1784_);
lean_dec(v___y_1784_);
return v_res_1787_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6(lean_object* v_declName_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_){
_start:
{
uint8_t v___x_1792_; lean_object* v___x_1793_; 
v___x_1792_ = 2;
v___x_1793_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12___redArg(v_declName_1788_, v___x_1792_, v___y_1790_);
return v___x_1793_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6___boxed(lean_object* v_declName_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_){
_start:
{
lean_object* v_res_1798_; 
v_res_1798_ = l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6(v_declName_1794_, v___y_1795_, v___y_1796_);
lean_dec(v___y_1796_);
lean_dec_ref(v___y_1795_);
return v_res_1798_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg(lean_object* v_as_x27_1799_, lean_object* v_b_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_){
_start:
{
if (lean_obj_tag(v_as_x27_1799_) == 0)
{
lean_object* v___x_1804_; 
v___x_1804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1804_, 0, v_b_1800_);
return v___x_1804_;
}
else
{
lean_object* v_head_1805_; lean_object* v_tail_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; 
v_head_1805_ = lean_ctor_get(v_as_x27_1799_, 0);
v_tail_1806_ = lean_ctor_get(v_as_x27_1799_, 1);
v___x_1807_ = lean_box(0);
lean_inc(v_head_1805_);
v___x_1808_ = l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6(v_head_1805_, v___y_1801_, v___y_1802_);
lean_dec_ref(v___x_1808_);
v_as_x27_1799_ = v_tail_1806_;
v_b_1800_ = v___x_1807_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg___boxed(lean_object* v_as_x27_1810_, lean_object* v_b_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_){
_start:
{
lean_object* v_res_1815_; 
v_res_1815_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg(v_as_x27_1810_, v_b_1811_, v___y_1812_, v___y_1813_);
lean_dec(v___y_1813_);
lean_dec_ref(v___y_1812_);
lean_dec(v_as_x27_1810_);
return v_res_1815_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__3(size_t v_sz_1816_, size_t v_i_1817_, lean_object* v_bs_1818_){
_start:
{
uint8_t v___x_1819_; 
v___x_1819_ = lean_usize_dec_lt(v_i_1817_, v_sz_1816_);
if (v___x_1819_ == 0)
{
return v_bs_1818_;
}
else
{
lean_object* v_v_1820_; lean_object* v___x_1821_; lean_object* v_bs_x27_1822_; size_t v___x_1823_; size_t v___x_1824_; lean_object* v___x_1825_; 
v_v_1820_ = lean_array_uget(v_bs_1818_, v_i_1817_);
v___x_1821_ = lean_unsigned_to_nat(0u);
v_bs_x27_1822_ = lean_array_uset(v_bs_1818_, v_i_1817_, v___x_1821_);
v___x_1823_ = ((size_t)1ULL);
v___x_1824_ = lean_usize_add(v_i_1817_, v___x_1823_);
v___x_1825_ = lean_array_uset(v_bs_x27_1822_, v_i_1817_, v_v_1820_);
v_i_1817_ = v___x_1824_;
v_bs_1818_ = v___x_1825_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__3___boxed(lean_object* v_sz_1827_, lean_object* v_i_1828_, lean_object* v_bs_1829_){
_start:
{
size_t v_sz_boxed_1830_; size_t v_i_boxed_1831_; lean_object* v_res_1832_; 
v_sz_boxed_1830_ = lean_unbox_usize(v_sz_1827_);
lean_dec(v_sz_1827_);
v_i_boxed_1831_ = lean_unbox_usize(v_i_1828_);
lean_dec(v_i_1828_);
v_res_1832_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__3(v_sz_boxed_1830_, v_i_boxed_1831_, v_bs_1829_);
return v_res_1832_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___redArg(lean_object* v_as_x27_1833_, lean_object* v_b_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_){
_start:
{
if (lean_obj_tag(v_as_x27_1833_) == 0)
{
lean_object* v___x_1838_; 
v___x_1838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1838_, 0, v_b_1834_);
return v___x_1838_;
}
else
{
lean_object* v_head_1839_; lean_object* v_tail_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; 
v_head_1839_ = lean_ctor_get(v_as_x27_1833_, 0);
v_tail_1840_ = lean_ctor_get(v_as_x27_1833_, 1);
v___x_1841_ = lean_box(0);
lean_inc(v_head_1839_);
v___x_1842_ = lean_alloc_closure((void*)(l_Lean_enableRealizationsForConst___boxed), 4, 1);
lean_closure_set(v___x_1842_, 0, v_head_1839_);
v___x_1843_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_1842_, v___y_1835_, v___y_1836_);
if (lean_obj_tag(v___x_1843_) == 0)
{
lean_dec_ref_known(v___x_1843_, 1);
v_as_x27_1833_ = v_tail_1840_;
v_b_1834_ = v___x_1841_;
goto _start;
}
else
{
return v___x_1843_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___redArg___boxed(lean_object* v_as_x27_1845_, lean_object* v_b_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_){
_start:
{
lean_object* v_res_1850_; 
v_res_1850_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___redArg(v_as_x27_1845_, v_b_1846_, v___y_1847_, v___y_1848_);
lean_dec(v___y_1848_);
lean_dec_ref(v___y_1847_);
lean_dec(v_as_x27_1845_);
return v_res_1850_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___redArg(lean_object* v_stx_1851_, lean_object* v___y_1852_){
_start:
{
uint8_t v___x_1854_; lean_object* v___x_1855_; 
v___x_1854_ = 0;
v___x_1855_ = l_Lean_Syntax_getRange_x3f(v_stx_1851_, v___x_1854_);
if (lean_obj_tag(v___x_1855_) == 1)
{
lean_object* v_val_1856_; lean_object* v___x_1858_; uint8_t v_isShared_1859_; uint8_t v_isSharedCheck_1868_; 
v_val_1856_ = lean_ctor_get(v___x_1855_, 0);
v_isSharedCheck_1868_ = !lean_is_exclusive(v___x_1855_);
if (v_isSharedCheck_1868_ == 0)
{
v___x_1858_ = v___x_1855_;
v_isShared_1859_ = v_isSharedCheck_1868_;
goto v_resetjp_1857_;
}
else
{
lean_inc(v_val_1856_);
lean_dec(v___x_1855_);
v___x_1858_ = lean_box(0);
v_isShared_1859_ = v_isSharedCheck_1868_;
goto v_resetjp_1857_;
}
v_resetjp_1857_:
{
lean_object* v_fileMap_1860_; lean_object* v_start_1861_; lean_object* v_stop_1862_; lean_object* v___x_1863_; lean_object* v___x_1865_; 
v_fileMap_1860_ = lean_ctor_get(v___y_1852_, 1);
v_start_1861_ = lean_ctor_get(v_val_1856_, 0);
lean_inc(v_start_1861_);
v_stop_1862_ = lean_ctor_get(v_val_1856_, 1);
lean_inc(v_stop_1862_);
lean_dec(v_val_1856_);
lean_inc_ref(v_fileMap_1860_);
v___x_1863_ = l_Lean_DeclarationRange_ofStringPositions(v_fileMap_1860_, v_start_1861_, v_stop_1862_);
lean_dec(v_stop_1862_);
lean_dec(v_start_1861_);
if (v_isShared_1859_ == 0)
{
lean_ctor_set(v___x_1858_, 0, v___x_1863_);
v___x_1865_ = v___x_1858_;
goto v_reusejp_1864_;
}
else
{
lean_object* v_reuseFailAlloc_1867_; 
v_reuseFailAlloc_1867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1867_, 0, v___x_1863_);
v___x_1865_ = v_reuseFailAlloc_1867_;
goto v_reusejp_1864_;
}
v_reusejp_1864_:
{
lean_object* v___x_1866_; 
v___x_1866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1866_, 0, v___x_1865_);
return v___x_1866_;
}
}
}
else
{
lean_object* v___x_1869_; lean_object* v___x_1870_; 
lean_dec(v___x_1855_);
v___x_1869_ = lean_box(0);
v___x_1870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1870_, 0, v___x_1869_);
return v___x_1870_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___redArg___boxed(lean_object* v_stx_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_){
_start:
{
lean_object* v_res_1874_; 
v_res_1874_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___redArg(v_stx_1871_, v___y_1872_);
lean_dec_ref(v___y_1872_);
lean_dec(v_stx_1871_);
return v_res_1874_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7___redArg(lean_object* v_declName_1875_, lean_object* v_declRanges_1876_, lean_object* v___y_1877_){
_start:
{
uint8_t v___x_1879_; 
v___x_1879_ = l_Lean_Name_isAnonymous(v_declName_1875_);
if (v___x_1879_ == 0)
{
lean_object* v___x_1880_; lean_object* v_env_1881_; lean_object* v_messages_1882_; lean_object* v_scopes_1883_; lean_object* v_usedQuotCtxts_1884_; lean_object* v_nextMacroScope_1885_; lean_object* v_maxRecDepth_1886_; lean_object* v_ngen_1887_; lean_object* v_auxDeclNGen_1888_; lean_object* v_infoState_1889_; lean_object* v_traceState_1890_; lean_object* v_snapshotTasks_1891_; lean_object* v_prevLinterStates_1892_; lean_object* v_codeQualityEntryTasks_1893_; lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1905_; 
v___x_1880_ = lean_st_ref_take(v___y_1877_);
v_env_1881_ = lean_ctor_get(v___x_1880_, 0);
v_messages_1882_ = lean_ctor_get(v___x_1880_, 1);
v_scopes_1883_ = lean_ctor_get(v___x_1880_, 2);
v_usedQuotCtxts_1884_ = lean_ctor_get(v___x_1880_, 3);
v_nextMacroScope_1885_ = lean_ctor_get(v___x_1880_, 4);
v_maxRecDepth_1886_ = lean_ctor_get(v___x_1880_, 5);
v_ngen_1887_ = lean_ctor_get(v___x_1880_, 6);
v_auxDeclNGen_1888_ = lean_ctor_get(v___x_1880_, 7);
v_infoState_1889_ = lean_ctor_get(v___x_1880_, 8);
v_traceState_1890_ = lean_ctor_get(v___x_1880_, 9);
v_snapshotTasks_1891_ = lean_ctor_get(v___x_1880_, 10);
v_prevLinterStates_1892_ = lean_ctor_get(v___x_1880_, 11);
v_codeQualityEntryTasks_1893_ = lean_ctor_get(v___x_1880_, 12);
v_isSharedCheck_1905_ = !lean_is_exclusive(v___x_1880_);
if (v_isSharedCheck_1905_ == 0)
{
v___x_1895_ = v___x_1880_;
v_isShared_1896_ = v_isSharedCheck_1905_;
goto v_resetjp_1894_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1893_);
lean_inc(v_prevLinterStates_1892_);
lean_inc(v_snapshotTasks_1891_);
lean_inc(v_traceState_1890_);
lean_inc(v_infoState_1889_);
lean_inc(v_auxDeclNGen_1888_);
lean_inc(v_ngen_1887_);
lean_inc(v_maxRecDepth_1886_);
lean_inc(v_nextMacroScope_1885_);
lean_inc(v_usedQuotCtxts_1884_);
lean_inc(v_scopes_1883_);
lean_inc(v_messages_1882_);
lean_inc(v_env_1881_);
lean_dec(v___x_1880_);
v___x_1895_ = lean_box(0);
v_isShared_1896_ = v_isSharedCheck_1905_;
goto v_resetjp_1894_;
}
v_resetjp_1894_:
{
lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1901_; 
v___x_1897_ = lean_box(0);
v___x_1898_ = l_Lean_declRangeExt;
v___x_1899_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_1898_, v_env_1881_, v_declName_1875_, v_declRanges_1876_);
if (v_isShared_1896_ == 0)
{
lean_ctor_set(v___x_1895_, 0, v___x_1899_);
v___x_1901_ = v___x_1895_;
goto v_reusejp_1900_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v___x_1899_);
lean_ctor_set(v_reuseFailAlloc_1904_, 1, v_messages_1882_);
lean_ctor_set(v_reuseFailAlloc_1904_, 2, v_scopes_1883_);
lean_ctor_set(v_reuseFailAlloc_1904_, 3, v_usedQuotCtxts_1884_);
lean_ctor_set(v_reuseFailAlloc_1904_, 4, v_nextMacroScope_1885_);
lean_ctor_set(v_reuseFailAlloc_1904_, 5, v_maxRecDepth_1886_);
lean_ctor_set(v_reuseFailAlloc_1904_, 6, v_ngen_1887_);
lean_ctor_set(v_reuseFailAlloc_1904_, 7, v_auxDeclNGen_1888_);
lean_ctor_set(v_reuseFailAlloc_1904_, 8, v_infoState_1889_);
lean_ctor_set(v_reuseFailAlloc_1904_, 9, v_traceState_1890_);
lean_ctor_set(v_reuseFailAlloc_1904_, 10, v_snapshotTasks_1891_);
lean_ctor_set(v_reuseFailAlloc_1904_, 11, v_prevLinterStates_1892_);
lean_ctor_set(v_reuseFailAlloc_1904_, 12, v_codeQualityEntryTasks_1893_);
v___x_1901_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1900_;
}
v_reusejp_1900_:
{
lean_object* v___x_1902_; lean_object* v___x_1903_; 
v___x_1902_ = lean_st_ref_put(v___y_1877_, v___x_1901_);
v___x_1903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1903_, 0, v___x_1897_);
return v___x_1903_;
}
}
}
else
{
lean_object* v___x_1906_; lean_object* v___x_1907_; 
lean_dec_ref(v_declRanges_1876_);
lean_dec(v_declName_1875_);
v___x_1906_ = lean_box(0);
v___x_1907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1907_, 0, v___x_1906_);
return v___x_1907_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7___redArg___boxed(lean_object* v_declName_1908_, lean_object* v_declRanges_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_){
_start:
{
lean_object* v_res_1912_; 
v_res_1912_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7___redArg(v_declName_1908_, v_declRanges_1909_, v___y_1910_);
lean_dec(v___y_1910_);
return v_res_1912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4(lean_object* v_declName_1913_, lean_object* v_rangeStx_1914_, lean_object* v_selectionRangeStx_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_){
_start:
{
lean_object* v___x_1919_; lean_object* v_a_1920_; lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1936_; 
v___x_1919_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___redArg(v_rangeStx_1914_, v___y_1916_);
v_a_1920_ = lean_ctor_get(v___x_1919_, 0);
v_isSharedCheck_1936_ = !lean_is_exclusive(v___x_1919_);
if (v_isSharedCheck_1936_ == 0)
{
v___x_1922_ = v___x_1919_;
v_isShared_1923_ = v_isSharedCheck_1936_;
goto v_resetjp_1921_;
}
else
{
lean_inc(v_a_1920_);
lean_dec(v___x_1919_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1936_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
if (lean_obj_tag(v_a_1920_) == 1)
{
lean_object* v_val_1924_; lean_object* v_a_1926_; lean_object* v___x_1929_; lean_object* v_a_1930_; 
lean_del_object(v___x_1922_);
v_val_1924_ = lean_ctor_get(v_a_1920_, 0);
lean_inc(v_val_1924_);
lean_dec_ref_known(v_a_1920_, 1);
v___x_1929_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___redArg(v_selectionRangeStx_1915_, v___y_1916_);
v_a_1930_ = lean_ctor_get(v___x_1929_, 0);
lean_inc(v_a_1930_);
lean_dec_ref(v___x_1929_);
if (lean_obj_tag(v_a_1930_) == 0)
{
lean_inc(v_val_1924_);
v_a_1926_ = v_val_1924_;
goto v___jp_1925_;
}
else
{
lean_object* v_val_1931_; 
v_val_1931_ = lean_ctor_get(v_a_1930_, 0);
lean_inc(v_val_1931_);
lean_dec_ref_known(v_a_1930_, 1);
v_a_1926_ = v_val_1931_;
goto v___jp_1925_;
}
v___jp_1925_:
{
lean_object* v___x_1927_; lean_object* v___x_1928_; 
v___x_1927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1927_, 0, v_val_1924_);
lean_ctor_set(v___x_1927_, 1, v_a_1926_);
v___x_1928_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7___redArg(v_declName_1913_, v___x_1927_, v___y_1917_);
return v___x_1928_;
}
}
else
{
lean_object* v___x_1932_; lean_object* v___x_1934_; 
lean_dec(v_a_1920_);
lean_dec(v_declName_1913_);
v___x_1932_ = lean_box(0);
if (v_isShared_1923_ == 0)
{
lean_ctor_set(v___x_1922_, 0, v___x_1932_);
v___x_1934_ = v___x_1922_;
goto v_reusejp_1933_;
}
else
{
lean_object* v_reuseFailAlloc_1935_; 
v_reuseFailAlloc_1935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1935_, 0, v___x_1932_);
v___x_1934_ = v_reuseFailAlloc_1935_;
goto v_reusejp_1933_;
}
v_reusejp_1933_:
{
return v___x_1934_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4___boxed(lean_object* v_declName_1937_, lean_object* v_rangeStx_1938_, lean_object* v_selectionRangeStx_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_){
_start:
{
lean_object* v_res_1943_; 
v_res_1943_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4(v_declName_1937_, v_rangeStx_1938_, v_selectionRangeStx_1939_, v___y_1940_, v___y_1941_);
lean_dec(v___y_1941_);
lean_dec_ref(v___y_1940_);
lean_dec(v_selectionRangeStx_1939_);
lean_dec(v_rangeStx_1938_);
return v_res_1943_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabNewtype___lam__0___closed__8(void){
_start:
{
lean_object* v___x_1954_; 
v___x_1954_ = l_Array_mkArray0___redArg();
return v___x_1954_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__0(lean_object* v___x_1959_, lean_object* v_a_1960_, lean_object* v_projId_1961_, lean_object* v___x_1962_, lean_object* v___x_1963_, lean_object* v___x_1964_, lean_object* v_params_1965_, lean_object* v___x_1966_, lean_object* v_mods_1967_, lean_object* v___x_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_){
_start:
{
lean_object* v___x_1972_; 
v___x_1972_ = l_Lean_Elab_Command_getScope___redArg(v___y_1970_);
if (lean_obj_tag(v___x_1972_) == 0)
{
lean_object* v_a_1973_; lean_object* v_currNamespace_1974_; lean_object* v___x_1975_; 
v_a_1973_ = lean_ctor_get(v___x_1972_, 0);
lean_inc(v_a_1973_);
lean_dec_ref_known(v___x_1972_, 1);
v_currNamespace_1974_ = lean_ctor_get(v_a_1973_, 2);
lean_inc(v_currNamespace_1974_);
lean_dec(v_a_1973_);
v___x_1975_ = l_Lean_Elab_Command_getLevelNames___redArg(v___y_1970_);
if (lean_obj_tag(v___x_1975_) == 0)
{
lean_object* v_a_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; 
v_a_1976_ = lean_ctor_get(v___x_1975_, 0);
lean_inc(v_a_1976_);
lean_dec_ref_known(v___x_1975_, 1);
lean_inc(v___x_1959_);
v___x_1977_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandDeclId___boxed), 11, 4);
lean_closure_set(v___x_1977_, 0, v_currNamespace_1974_);
lean_closure_set(v___x_1977_, 1, v_a_1976_);
lean_closure_set(v___x_1977_, 2, v___x_1959_);
lean_closure_set(v___x_1977_, 3, v_a_1960_);
v___x_1978_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_1977_, v___y_1969_, v___y_1970_);
if (lean_obj_tag(v___x_1978_) == 0)
{
lean_object* v_a_1979_; lean_object* v_declName_1980_; lean_object* v___x_1982_; uint8_t v_isShared_1983_; uint8_t v_isSharedCheck_2099_; 
v_a_1979_ = lean_ctor_get(v___x_1978_, 0);
lean_inc(v_a_1979_);
lean_dec_ref_known(v___x_1978_, 1);
v_declName_1980_ = lean_ctor_get(v_a_1979_, 1);
v_isSharedCheck_2099_ = !lean_is_exclusive(v_a_1979_);
if (v_isSharedCheck_2099_ == 0)
{
lean_object* v_unused_2100_; lean_object* v_unused_2101_; lean_object* v_unused_2102_; 
v_unused_2100_ = lean_ctor_get(v_a_1979_, 3);
lean_dec(v_unused_2100_);
v_unused_2101_ = lean_ctor_get(v_a_1979_, 2);
lean_dec(v_unused_2101_);
v_unused_2102_ = lean_ctor_get(v_a_1979_, 0);
lean_dec(v_unused_2102_);
v___x_1982_ = v_a_1979_;
v_isShared_1983_ = v_isSharedCheck_2099_;
goto v_resetjp_1981_;
}
else
{
lean_inc(v_declName_1980_);
lean_dec(v_a_1979_);
v___x_1982_ = lean_box(0);
v_isShared_1983_ = v_isSharedCheck_2099_;
goto v_resetjp_1981_;
}
v_resetjp_1981_:
{
lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; 
v___x_1984_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__1));
lean_inc_n(v_declName_1980_, 2);
v___x_1985_ = l_Lean_Name_append(v_declName_1980_, v___x_1984_);
v___x_1986_ = l_Lean_TSyntax_getId(v_projId_1961_);
lean_inc(v___x_1986_);
v___x_1987_ = l_Lean_Name_append(v_declName_1980_, v___x_1986_);
v___x_1988_ = l_Lean_Elab_Command_getRef___redArg(v___y_1969_);
if (lean_obj_tag(v___x_1988_) == 0)
{
lean_object* v_a_1989_; uint8_t v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_2080_; 
v_a_1989_ = lean_ctor_get(v___x_1988_, 0);
lean_inc(v_a_1989_);
lean_dec_ref_known(v___x_1988_, 1);
v___x_1990_ = 0;
v___x_1991_ = l_Lean_SourceInfo_fromRef(v_a_1989_, v___x_1990_);
lean_dec(v_a_1989_);
v___x_2080_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_1969_);
if (lean_obj_tag(v___x_2080_) == 0)
{
lean_object* v_quotContext_x3f_2081_; 
lean_dec_ref_known(v___x_2080_, 1);
v_quotContext_x3f_2081_ = lean_ctor_get(v___y_1969_, 5);
if (lean_obj_tag(v_quotContext_x3f_2081_) == 0)
{
lean_object* v___x_2082_; 
v___x_2082_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v___y_1970_);
lean_dec_ref(v___x_2082_);
goto v___jp_1992_;
}
else
{
goto v___jp_1992_;
}
}
else
{
lean_object* v_a_2083_; lean_object* v___x_2085_; uint8_t v_isShared_2086_; uint8_t v_isSharedCheck_2090_; 
lean_dec(v___x_1991_);
lean_dec(v___x_1987_);
lean_dec(v___x_1986_);
lean_dec(v___x_1985_);
lean_del_object(v___x_1982_);
lean_dec(v_declName_1980_);
lean_dec(v___x_1968_);
lean_dec(v_mods_1967_);
lean_dec(v___x_1966_);
lean_dec_ref(v_params_1965_);
lean_dec_ref(v___x_1964_);
lean_dec_ref(v___x_1963_);
lean_dec_ref(v___x_1962_);
lean_dec(v_projId_1961_);
lean_dec(v___x_1959_);
v_a_2083_ = lean_ctor_get(v___x_2080_, 0);
v_isSharedCheck_2090_ = !lean_is_exclusive(v___x_2080_);
if (v_isSharedCheck_2090_ == 0)
{
v___x_2085_ = v___x_2080_;
v_isShared_2086_ = v_isSharedCheck_2090_;
goto v_resetjp_2084_;
}
else
{
lean_inc(v_a_2083_);
lean_dec(v___x_2080_);
v___x_2085_ = lean_box(0);
v_isShared_2086_ = v_isSharedCheck_2090_;
goto v_resetjp_2084_;
}
v_resetjp_2084_:
{
lean_object* v___x_2088_; 
if (v_isShared_2086_ == 0)
{
v___x_2088_ = v___x_2085_;
goto v_reusejp_2087_;
}
else
{
lean_object* v_reuseFailAlloc_2089_; 
v_reuseFailAlloc_2089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2089_, 0, v_a_2083_);
v___x_2088_ = v_reuseFailAlloc_2089_;
goto v_reusejp_2087_;
}
v_reusejp_2087_:
{
return v___x_2088_;
}
}
}
v___jp_1992_:
{
lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; size_t v_sz_2003_; size_t v___x_2004_; lean_object* v___x_2005_; size_t v_sz_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; 
v___x_1993_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__2));
lean_inc_ref_n(v___x_1964_, 3);
lean_inc_ref_n(v___x_1963_, 4);
lean_inc_ref_n(v___x_1962_, 4);
v___x_1994_ = l_Lean_Name_mkStr4(v___x_1962_, v___x_1963_, v___x_1964_, v___x_1993_);
v___x_1995_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__3));
v___x_1996_ = l_Lean_Name_mkStr4(v___x_1962_, v___x_1963_, v___x_1964_, v___x_1995_);
v___x_1997_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__4));
lean_inc_n(v___x_1991_, 8);
v___x_1998_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1998_, 0, v___x_1991_);
lean_ctor_set(v___x_1998_, 1, v___x_1997_);
v___x_1999_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__5));
v___x_2000_ = l_Lean_Name_mkStr4(v___x_1962_, v___x_1963_, v___x_1964_, v___x_1999_);
v___x_2001_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__7));
v___x_2002_ = lean_obj_once(&l_Lean_Elab_Command_elabNewtype___lam__0___closed__8, &l_Lean_Elab_Command_elabNewtype___lam__0___closed__8_once, _init_l_Lean_Elab_Command_elabNewtype___lam__0___closed__8);
v_sz_2003_ = lean_array_size(v_params_1965_);
v___x_2004_ = ((size_t)0ULL);
v___x_2005_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(v_sz_2003_, v___x_2004_, v_params_1965_);
v_sz_2006_ = lean_array_size(v___x_2005_);
v___x_2007_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__3(v_sz_2006_, v___x_2004_, v___x_2005_);
v___x_2008_ = l_Array_append___redArg(v___x_2002_, v___x_2007_);
lean_dec_ref(v___x_2007_);
v___x_2009_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2009_, 0, v___x_1991_);
lean_ctor_set(v___x_2009_, 1, v___x_2001_);
lean_ctor_set(v___x_2009_, 2, v___x_2008_);
v___x_2010_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2010_, 0, v___x_1991_);
lean_ctor_set(v___x_2010_, 1, v___x_2001_);
lean_ctor_set(v___x_2010_, 2, v___x_2002_);
lean_inc_ref_n(v___x_2010_, 4);
v___x_2011_ = l_Lean_Syntax_node2(v___x_1991_, v___x_2000_, v___x_2009_, v___x_2010_);
v___x_2012_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__9));
v___x_2013_ = l_Lean_Name_mkStr4(v___x_1962_, v___x_1963_, v___x_1964_, v___x_2012_);
v___x_2014_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__10));
v___x_2015_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2015_, 0, v___x_1991_);
lean_ctor_set(v___x_2015_, 1, v___x_2014_);
v___x_2016_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__11));
v___x_2017_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__12));
v___x_2018_ = l_Lean_Name_mkStr4(v___x_1962_, v___x_1963_, v___x_2016_, v___x_2017_);
v___x_2019_ = l_Lean_Syntax_node2(v___x_1991_, v___x_2018_, v___x_2010_, v___x_2010_);
v___x_2020_ = l_Lean_Syntax_node4(v___x_1991_, v___x_2013_, v___x_2015_, v___x_1966_, v___x_2019_, v___x_2010_);
lean_inc(v___x_1959_);
v___x_2021_ = l_Lean_Syntax_node5(v___x_1991_, v___x_1996_, v___x_1998_, v___x_1959_, v___x_2011_, v___x_2020_, v___x_2010_);
v___x_2022_ = l_Lean_Syntax_node2(v___x_1991_, v___x_1994_, v_mods_1967_, v___x_2021_);
v___x_2023_ = l_Lean_Elab_Command_elabCommand(v___x_2022_, v___y_1969_, v___y_1970_);
if (lean_obj_tag(v___x_2023_) == 0)
{
lean_object* v___x_2024_; lean_object* v___x_2025_; 
lean_dec_ref_known(v___x_2023_, 1);
lean_inc(v___x_1987_);
lean_inc(v___x_1985_);
lean_inc(v_declName_1980_);
v___x_2024_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___boxed), 11, 4);
lean_closure_set(v___x_2024_, 0, v_declName_1980_);
lean_closure_set(v___x_2024_, 1, v___x_1985_);
lean_closure_set(v___x_2024_, 2, v___x_1987_);
lean_closure_set(v___x_2024_, 3, v___x_1986_);
v___x_2025_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_2024_, v___y_1969_, v___y_1970_);
if (lean_obj_tag(v___x_2025_) == 0)
{
lean_object* v_a_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; 
v_a_2026_ = lean_ctor_get(v___x_2025_, 0);
lean_inc(v_a_2026_);
lean_dec_ref_known(v___x_2025_, 1);
v___x_2027_ = lean_box(0);
lean_inc(v___x_1985_);
v___x_2028_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4(v___x_1985_, v___x_1959_, v___x_2027_, v___y_1969_, v___y_1970_);
lean_dec(v___x_1959_);
if (lean_obj_tag(v___x_2028_) == 0)
{
lean_object* v___x_2029_; 
lean_dec_ref_known(v___x_2028_, 1);
lean_inc(v___x_1987_);
v___x_2029_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4(v___x_1987_, v_projId_1961_, v___x_2027_, v___y_1969_, v___y_1970_);
if (lean_obj_tag(v___x_2029_) == 0)
{
lean_object* v___x_2030_; lean_object* v___x_2031_; 
lean_dec_ref_known(v___x_2029_, 1);
v___x_2030_ = lean_box(0);
lean_inc(v___x_1987_);
v___x_2031_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5(v_projId_1961_, v___x_1987_, v___x_2030_, v___y_1969_, v___y_1970_);
if (lean_obj_tag(v___x_2031_) == 0)
{
lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v_env_2038_; lean_object* v_messages_2039_; lean_object* v_scopes_2040_; lean_object* v_usedQuotCtxts_2041_; lean_object* v_nextMacroScope_2042_; lean_object* v_maxRecDepth_2043_; lean_object* v_ngen_2044_; lean_object* v_auxDeclNGen_2045_; lean_object* v_infoState_2046_; lean_object* v_traceState_2047_; lean_object* v_snapshotTasks_2048_; lean_object* v_prevLinterStates_2049_; lean_object* v_codeQualityEntryTasks_2050_; lean_object* v___x_2052_; uint8_t v_isShared_2053_; uint8_t v_isSharedCheck_2071_; 
lean_dec_ref_known(v___x_2031_, 1);
lean_inc(v___x_1987_);
v___x_2032_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2032_, 0, v___x_1987_);
lean_ctor_set(v___x_2032_, 1, v___x_1968_);
lean_inc(v___x_1985_);
v___x_2033_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2033_, 0, v___x_1985_);
lean_ctor_set(v___x_2033_, 1, v___x_2032_);
lean_inc_ref(v___x_2033_);
lean_inc(v_declName_1980_);
v___x_2034_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2034_, 0, v_declName_1980_);
lean_ctor_set(v___x_2034_, 1, v___x_2033_);
v___x_2035_ = lean_box(0);
v___x_2036_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg(v___x_2034_, v___x_2035_, v___y_1969_, v___y_1970_);
lean_dec_ref_known(v___x_2034_, 2);
lean_dec_ref(v___x_2036_);
v___x_2037_ = lean_st_ref_take(v___y_1970_);
v_env_2038_ = lean_ctor_get(v___x_2037_, 0);
v_messages_2039_ = lean_ctor_get(v___x_2037_, 1);
v_scopes_2040_ = lean_ctor_get(v___x_2037_, 2);
v_usedQuotCtxts_2041_ = lean_ctor_get(v___x_2037_, 3);
v_nextMacroScope_2042_ = lean_ctor_get(v___x_2037_, 4);
v_maxRecDepth_2043_ = lean_ctor_get(v___x_2037_, 5);
v_ngen_2044_ = lean_ctor_get(v___x_2037_, 6);
v_auxDeclNGen_2045_ = lean_ctor_get(v___x_2037_, 7);
v_infoState_2046_ = lean_ctor_get(v___x_2037_, 8);
v_traceState_2047_ = lean_ctor_get(v___x_2037_, 9);
v_snapshotTasks_2048_ = lean_ctor_get(v___x_2037_, 10);
v_prevLinterStates_2049_ = lean_ctor_get(v___x_2037_, 11);
v_codeQualityEntryTasks_2050_ = lean_ctor_get(v___x_2037_, 12);
v_isSharedCheck_2071_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2071_ == 0)
{
v___x_2052_ = v___x_2037_;
v_isShared_2053_ = v_isSharedCheck_2071_;
goto v_resetjp_2051_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2050_);
lean_inc(v_prevLinterStates_2049_);
lean_inc(v_snapshotTasks_2048_);
lean_inc(v_traceState_2047_);
lean_inc(v_infoState_2046_);
lean_inc(v_auxDeclNGen_2045_);
lean_inc(v_ngen_2044_);
lean_inc(v_maxRecDepth_2043_);
lean_inc(v_nextMacroScope_2042_);
lean_inc(v_usedQuotCtxts_2041_);
lean_inc(v_scopes_2040_);
lean_inc(v_messages_2039_);
lean_inc(v_env_2038_);
lean_dec(v___x_2037_);
v___x_2052_ = lean_box(0);
v_isShared_2053_ = v_isSharedCheck_2071_;
goto v_resetjp_2051_;
}
v_resetjp_2051_:
{
lean_object* v___x_2055_; 
if (v_isShared_1983_ == 0)
{
lean_ctor_set(v___x_1982_, 3, v_a_2026_);
lean_ctor_set(v___x_1982_, 2, v___x_1987_);
lean_ctor_set(v___x_1982_, 1, v___x_1985_);
lean_ctor_set(v___x_1982_, 0, v_declName_1980_);
v___x_2055_ = v___x_1982_;
goto v_reusejp_2054_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v_declName_1980_);
lean_ctor_set(v_reuseFailAlloc_2070_, 1, v___x_1985_);
lean_ctor_set(v_reuseFailAlloc_2070_, 2, v___x_1987_);
lean_ctor_set(v_reuseFailAlloc_2070_, 3, v_a_2026_);
v___x_2055_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2054_;
}
v_reusejp_2054_:
{
lean_object* v___x_2056_; lean_object* v___x_2058_; 
v___x_2056_ = l_Lean_registerVirtualStructure(v_env_2038_, v___x_2055_);
if (v_isShared_2053_ == 0)
{
lean_ctor_set(v___x_2052_, 0, v___x_2056_);
v___x_2058_ = v___x_2052_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v___x_2056_);
lean_ctor_set(v_reuseFailAlloc_2069_, 1, v_messages_2039_);
lean_ctor_set(v_reuseFailAlloc_2069_, 2, v_scopes_2040_);
lean_ctor_set(v_reuseFailAlloc_2069_, 3, v_usedQuotCtxts_2041_);
lean_ctor_set(v_reuseFailAlloc_2069_, 4, v_nextMacroScope_2042_);
lean_ctor_set(v_reuseFailAlloc_2069_, 5, v_maxRecDepth_2043_);
lean_ctor_set(v_reuseFailAlloc_2069_, 6, v_ngen_2044_);
lean_ctor_set(v_reuseFailAlloc_2069_, 7, v_auxDeclNGen_2045_);
lean_ctor_set(v_reuseFailAlloc_2069_, 8, v_infoState_2046_);
lean_ctor_set(v_reuseFailAlloc_2069_, 9, v_traceState_2047_);
lean_ctor_set(v_reuseFailAlloc_2069_, 10, v_snapshotTasks_2048_);
lean_ctor_set(v_reuseFailAlloc_2069_, 11, v_prevLinterStates_2049_);
lean_ctor_set(v_reuseFailAlloc_2069_, 12, v_codeQualityEntryTasks_2050_);
v___x_2058_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
lean_object* v___x_2059_; lean_object* v___x_2060_; 
v___x_2059_ = lean_st_ref_put(v___y_1970_, v___x_2058_);
v___x_2060_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___redArg(v___x_2033_, v___x_2035_, v___y_1969_, v___y_1970_);
lean_dec_ref_known(v___x_2033_, 2);
if (lean_obj_tag(v___x_2060_) == 0)
{
lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2067_; 
v_isSharedCheck_2067_ = !lean_is_exclusive(v___x_2060_);
if (v_isSharedCheck_2067_ == 0)
{
lean_object* v_unused_2068_; 
v_unused_2068_ = lean_ctor_get(v___x_2060_, 0);
lean_dec(v_unused_2068_);
v___x_2062_ = v___x_2060_;
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
else
{
lean_dec(v___x_2060_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v___x_2065_; 
if (v_isShared_2063_ == 0)
{
lean_ctor_set(v___x_2062_, 0, v___x_2035_);
v___x_2065_ = v___x_2062_;
goto v_reusejp_2064_;
}
else
{
lean_object* v_reuseFailAlloc_2066_; 
v_reuseFailAlloc_2066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2066_, 0, v___x_2035_);
v___x_2065_ = v_reuseFailAlloc_2066_;
goto v_reusejp_2064_;
}
v_reusejp_2064_:
{
return v___x_2065_;
}
}
}
else
{
return v___x_2060_;
}
}
}
}
}
else
{
lean_dec(v_a_2026_);
lean_dec(v___x_1987_);
lean_dec(v___x_1985_);
lean_del_object(v___x_1982_);
lean_dec(v_declName_1980_);
lean_dec(v___x_1968_);
return v___x_2031_;
}
}
else
{
lean_dec(v_a_2026_);
lean_dec(v___x_1987_);
lean_dec(v___x_1985_);
lean_del_object(v___x_1982_);
lean_dec(v_declName_1980_);
lean_dec(v___x_1968_);
lean_dec(v_projId_1961_);
return v___x_2029_;
}
}
else
{
lean_dec(v_a_2026_);
lean_dec(v___x_1987_);
lean_dec(v___x_1985_);
lean_del_object(v___x_1982_);
lean_dec(v_declName_1980_);
lean_dec(v___x_1968_);
lean_dec(v_projId_1961_);
return v___x_2028_;
}
}
else
{
lean_object* v_a_2072_; lean_object* v___x_2074_; uint8_t v_isShared_2075_; uint8_t v_isSharedCheck_2079_; 
lean_dec(v___x_1987_);
lean_dec(v___x_1985_);
lean_del_object(v___x_1982_);
lean_dec(v_declName_1980_);
lean_dec(v___x_1968_);
lean_dec(v_projId_1961_);
lean_dec(v___x_1959_);
v_a_2072_ = lean_ctor_get(v___x_2025_, 0);
v_isSharedCheck_2079_ = !lean_is_exclusive(v___x_2025_);
if (v_isSharedCheck_2079_ == 0)
{
v___x_2074_ = v___x_2025_;
v_isShared_2075_ = v_isSharedCheck_2079_;
goto v_resetjp_2073_;
}
else
{
lean_inc(v_a_2072_);
lean_dec(v___x_2025_);
v___x_2074_ = lean_box(0);
v_isShared_2075_ = v_isSharedCheck_2079_;
goto v_resetjp_2073_;
}
v_resetjp_2073_:
{
lean_object* v___x_2077_; 
if (v_isShared_2075_ == 0)
{
v___x_2077_ = v___x_2074_;
goto v_reusejp_2076_;
}
else
{
lean_object* v_reuseFailAlloc_2078_; 
v_reuseFailAlloc_2078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2078_, 0, v_a_2072_);
v___x_2077_ = v_reuseFailAlloc_2078_;
goto v_reusejp_2076_;
}
v_reusejp_2076_:
{
return v___x_2077_;
}
}
}
}
else
{
lean_dec(v___x_1987_);
lean_dec(v___x_1986_);
lean_dec(v___x_1985_);
lean_del_object(v___x_1982_);
lean_dec(v_declName_1980_);
lean_dec(v___x_1968_);
lean_dec(v_projId_1961_);
lean_dec(v___x_1959_);
return v___x_2023_;
}
}
}
else
{
lean_object* v_a_2091_; lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2098_; 
lean_dec(v___x_1987_);
lean_dec(v___x_1986_);
lean_dec(v___x_1985_);
lean_del_object(v___x_1982_);
lean_dec(v_declName_1980_);
lean_dec(v___x_1968_);
lean_dec(v_mods_1967_);
lean_dec(v___x_1966_);
lean_dec_ref(v_params_1965_);
lean_dec_ref(v___x_1964_);
lean_dec_ref(v___x_1963_);
lean_dec_ref(v___x_1962_);
lean_dec(v_projId_1961_);
lean_dec(v___x_1959_);
v_a_2091_ = lean_ctor_get(v___x_1988_, 0);
v_isSharedCheck_2098_ = !lean_is_exclusive(v___x_1988_);
if (v_isSharedCheck_2098_ == 0)
{
v___x_2093_ = v___x_1988_;
v_isShared_2094_ = v_isSharedCheck_2098_;
goto v_resetjp_2092_;
}
else
{
lean_inc(v_a_2091_);
lean_dec(v___x_1988_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2098_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
lean_object* v___x_2096_; 
if (v_isShared_2094_ == 0)
{
v___x_2096_ = v___x_2093_;
goto v_reusejp_2095_;
}
else
{
lean_object* v_reuseFailAlloc_2097_; 
v_reuseFailAlloc_2097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2097_, 0, v_a_2091_);
v___x_2096_ = v_reuseFailAlloc_2097_;
goto v_reusejp_2095_;
}
v_reusejp_2095_:
{
return v___x_2096_;
}
}
}
}
}
else
{
lean_object* v_a_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2110_; 
lean_dec(v___x_1968_);
lean_dec(v_mods_1967_);
lean_dec(v___x_1966_);
lean_dec_ref(v_params_1965_);
lean_dec_ref(v___x_1964_);
lean_dec_ref(v___x_1963_);
lean_dec_ref(v___x_1962_);
lean_dec(v_projId_1961_);
lean_dec(v___x_1959_);
v_a_2103_ = lean_ctor_get(v___x_1978_, 0);
v_isSharedCheck_2110_ = !lean_is_exclusive(v___x_1978_);
if (v_isSharedCheck_2110_ == 0)
{
v___x_2105_ = v___x_1978_;
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_a_2103_);
lean_dec(v___x_1978_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v___x_2108_; 
if (v_isShared_2106_ == 0)
{
v___x_2108_ = v___x_2105_;
goto v_reusejp_2107_;
}
else
{
lean_object* v_reuseFailAlloc_2109_; 
v_reuseFailAlloc_2109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2109_, 0, v_a_2103_);
v___x_2108_ = v_reuseFailAlloc_2109_;
goto v_reusejp_2107_;
}
v_reusejp_2107_:
{
return v___x_2108_;
}
}
}
}
else
{
lean_object* v_a_2111_; lean_object* v___x_2113_; uint8_t v_isShared_2114_; uint8_t v_isSharedCheck_2118_; 
lean_dec(v_currNamespace_1974_);
lean_dec(v___x_1968_);
lean_dec(v_mods_1967_);
lean_dec(v___x_1966_);
lean_dec_ref(v_params_1965_);
lean_dec_ref(v___x_1964_);
lean_dec_ref(v___x_1963_);
lean_dec_ref(v___x_1962_);
lean_dec(v_projId_1961_);
lean_dec_ref(v_a_1960_);
lean_dec(v___x_1959_);
v_a_2111_ = lean_ctor_get(v___x_1975_, 0);
v_isSharedCheck_2118_ = !lean_is_exclusive(v___x_1975_);
if (v_isSharedCheck_2118_ == 0)
{
v___x_2113_ = v___x_1975_;
v_isShared_2114_ = v_isSharedCheck_2118_;
goto v_resetjp_2112_;
}
else
{
lean_inc(v_a_2111_);
lean_dec(v___x_1975_);
v___x_2113_ = lean_box(0);
v_isShared_2114_ = v_isSharedCheck_2118_;
goto v_resetjp_2112_;
}
v_resetjp_2112_:
{
lean_object* v___x_2116_; 
if (v_isShared_2114_ == 0)
{
v___x_2116_ = v___x_2113_;
goto v_reusejp_2115_;
}
else
{
lean_object* v_reuseFailAlloc_2117_; 
v_reuseFailAlloc_2117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2117_, 0, v_a_2111_);
v___x_2116_ = v_reuseFailAlloc_2117_;
goto v_reusejp_2115_;
}
v_reusejp_2115_:
{
return v___x_2116_;
}
}
}
}
else
{
lean_object* v_a_2119_; lean_object* v___x_2121_; uint8_t v_isShared_2122_; uint8_t v_isSharedCheck_2126_; 
lean_dec(v___x_1968_);
lean_dec(v_mods_1967_);
lean_dec(v___x_1966_);
lean_dec_ref(v_params_1965_);
lean_dec_ref(v___x_1964_);
lean_dec_ref(v___x_1963_);
lean_dec_ref(v___x_1962_);
lean_dec(v_projId_1961_);
lean_dec_ref(v_a_1960_);
lean_dec(v___x_1959_);
v_a_2119_ = lean_ctor_get(v___x_1972_, 0);
v_isSharedCheck_2126_ = !lean_is_exclusive(v___x_1972_);
if (v_isSharedCheck_2126_ == 0)
{
v___x_2121_ = v___x_1972_;
v_isShared_2122_ = v_isSharedCheck_2126_;
goto v_resetjp_2120_;
}
else
{
lean_inc(v_a_2119_);
lean_dec(v___x_1972_);
v___x_2121_ = lean_box(0);
v_isShared_2122_ = v_isSharedCheck_2126_;
goto v_resetjp_2120_;
}
v_resetjp_2120_:
{
lean_object* v___x_2124_; 
if (v_isShared_2122_ == 0)
{
v___x_2124_ = v___x_2121_;
goto v_reusejp_2123_;
}
else
{
lean_object* v_reuseFailAlloc_2125_; 
v_reuseFailAlloc_2125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2125_, 0, v_a_2119_);
v___x_2124_ = v_reuseFailAlloc_2125_;
goto v_reusejp_2123_;
}
v_reusejp_2123_:
{
return v___x_2124_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__0___boxed(lean_object* v___x_2127_, lean_object* v_a_2128_, lean_object* v_projId_2129_, lean_object* v___x_2130_, lean_object* v___x_2131_, lean_object* v___x_2132_, lean_object* v_params_2133_, lean_object* v___x_2134_, lean_object* v_mods_2135_, lean_object* v___x_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_){
_start:
{
lean_object* v_res_2140_; 
v_res_2140_ = l_Lean_Elab_Command_elabNewtype___lam__0(v___x_2127_, v_a_2128_, v_projId_2129_, v___x_2130_, v___x_2131_, v___x_2132_, v_params_2133_, v___x_2134_, v_mods_2135_, v___x_2136_, v___y_2137_, v___y_2138_);
lean_dec(v___y_2138_);
lean_dec_ref(v___y_2137_);
return v_res_2140_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___lam__0(uint8_t v_suppressElabErrors_2142_, uint8_t v___y_2143_, lean_object* v_x_2144_){
_start:
{
if (lean_obj_tag(v_x_2144_) == 1)
{
lean_object* v_pre_2145_; 
v_pre_2145_ = lean_ctor_get(v_x_2144_, 0);
if (lean_obj_tag(v_pre_2145_) == 0)
{
lean_object* v_str_2146_; lean_object* v___x_2147_; uint8_t v___x_2148_; 
v_str_2146_ = lean_ctor_get(v_x_2144_, 1);
v___x_2147_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___lam__0___closed__0));
v___x_2148_ = lean_string_dec_eq(v_str_2146_, v___x_2147_);
if (v___x_2148_ == 0)
{
return v___x_2148_;
}
else
{
return v_suppressElabErrors_2142_;
}
}
else
{
return v___y_2143_;
}
}
else
{
return v___y_2143_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___lam__0___boxed(lean_object* v_suppressElabErrors_2149_, lean_object* v___y_2150_, lean_object* v_x_2151_){
_start:
{
uint8_t v_suppressElabErrors_boxed_2152_; uint8_t v___y_31199__boxed_2153_; uint8_t v_res_2154_; lean_object* v_r_2155_; 
v_suppressElabErrors_boxed_2152_ = lean_unbox(v_suppressElabErrors_2149_);
v___y_31199__boxed_2153_ = lean_unbox(v___y_2150_);
v_res_2154_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___lam__0(v_suppressElabErrors_boxed_2152_, v___y_31199__boxed_2153_, v_x_2151_);
lean_dec(v_x_2151_);
v_r_2155_ = lean_box(v_res_2154_);
return v_r_2155_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29(lean_object* v_ref_2157_, lean_object* v_msgData_2158_, uint8_t v_severity_2159_, uint8_t v_isSilent_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_){
_start:
{
lean_object* v___y_2165_; lean_object* v___y_2166_; lean_object* v___y_2167_; lean_object* v___y_2168_; lean_object* v___y_2169_; uint8_t v___y_2170_; uint8_t v___y_2171_; lean_object* v___y_2172_; uint8_t v___y_2230_; uint8_t v___y_2231_; lean_object* v___y_2232_; uint8_t v___y_2233_; lean_object* v___y_2234_; uint8_t v___y_2258_; lean_object* v___y_2259_; uint8_t v___y_2260_; uint8_t v___y_2261_; lean_object* v___y_2262_; uint8_t v___y_2266_; uint8_t v___y_2267_; uint8_t v___y_2268_; uint8_t v___x_2283_; uint8_t v___y_2285_; uint8_t v___y_2286_; uint8_t v___y_2287_; uint8_t v___y_2289_; uint8_t v___x_2301_; 
v___x_2283_ = 2;
v___x_2301_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2159_, v___x_2283_);
if (v___x_2301_ == 0)
{
v___y_2289_ = v___x_2301_;
goto v___jp_2288_;
}
else
{
uint8_t v___x_2302_; 
lean_inc_ref(v_msgData_2158_);
v___x_2302_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_2158_);
v___y_2289_ = v___x_2302_;
goto v___jp_2288_;
}
v___jp_2164_:
{
lean_object* v___x_2173_; 
v___x_2173_ = l_Lean_Elab_Command_getScope___redArg(v___y_2172_);
if (lean_obj_tag(v___x_2173_) == 0)
{
lean_object* v_a_2174_; lean_object* v_currNamespace_2175_; lean_object* v___x_2176_; 
v_a_2174_ = lean_ctor_get(v___x_2173_, 0);
lean_inc(v_a_2174_);
lean_dec_ref_known(v___x_2173_, 1);
v_currNamespace_2175_ = lean_ctor_get(v_a_2174_, 2);
lean_inc(v_currNamespace_2175_);
lean_dec(v_a_2174_);
v___x_2176_ = l_Lean_Elab_Command_getScope___redArg(v___y_2172_);
if (lean_obj_tag(v___x_2176_) == 0)
{
lean_object* v_a_2177_; lean_object* v___x_2179_; uint8_t v_isShared_2180_; uint8_t v_isSharedCheck_2212_; 
v_a_2177_ = lean_ctor_get(v___x_2176_, 0);
v_isSharedCheck_2212_ = !lean_is_exclusive(v___x_2176_);
if (v_isSharedCheck_2212_ == 0)
{
v___x_2179_ = v___x_2176_;
v_isShared_2180_ = v_isSharedCheck_2212_;
goto v_resetjp_2178_;
}
else
{
lean_inc(v_a_2177_);
lean_dec(v___x_2176_);
v___x_2179_ = lean_box(0);
v_isShared_2180_ = v_isSharedCheck_2212_;
goto v_resetjp_2178_;
}
v_resetjp_2178_:
{
lean_object* v_openDecls_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v_env_2186_; lean_object* v_messages_2187_; lean_object* v_scopes_2188_; lean_object* v_usedQuotCtxts_2189_; lean_object* v_nextMacroScope_2190_; lean_object* v_maxRecDepth_2191_; lean_object* v_ngen_2192_; lean_object* v_auxDeclNGen_2193_; lean_object* v_infoState_2194_; lean_object* v_traceState_2195_; lean_object* v_snapshotTasks_2196_; lean_object* v_prevLinterStates_2197_; lean_object* v_codeQualityEntryTasks_2198_; lean_object* v___x_2200_; uint8_t v_isShared_2201_; uint8_t v_isSharedCheck_2211_; 
v_openDecls_2181_ = lean_ctor_get(v_a_2177_, 3);
lean_inc(v_openDecls_2181_);
lean_dec(v_a_2177_);
v___x_2182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2182_, 0, v_currNamespace_2175_);
lean_ctor_set(v___x_2182_, 1, v_openDecls_2181_);
v___x_2183_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2183_, 0, v___x_2182_);
lean_ctor_set(v___x_2183_, 1, v___y_2165_);
lean_inc_ref(v___y_2166_);
lean_inc_ref(v___y_2168_);
v___x_2184_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2184_, 0, v___y_2168_);
lean_ctor_set(v___x_2184_, 1, v___y_2167_);
lean_ctor_set(v___x_2184_, 2, v___y_2169_);
lean_ctor_set(v___x_2184_, 3, v___y_2166_);
lean_ctor_set(v___x_2184_, 4, v___x_2183_);
lean_ctor_set_uint8(v___x_2184_, sizeof(void*)*5, v___y_2170_);
lean_ctor_set_uint8(v___x_2184_, sizeof(void*)*5 + 1, v___y_2171_);
lean_ctor_set_uint8(v___x_2184_, sizeof(void*)*5 + 2, v_isSilent_2160_);
v___x_2185_ = lean_st_ref_take(v___y_2172_);
v_env_2186_ = lean_ctor_get(v___x_2185_, 0);
v_messages_2187_ = lean_ctor_get(v___x_2185_, 1);
v_scopes_2188_ = lean_ctor_get(v___x_2185_, 2);
v_usedQuotCtxts_2189_ = lean_ctor_get(v___x_2185_, 3);
v_nextMacroScope_2190_ = lean_ctor_get(v___x_2185_, 4);
v_maxRecDepth_2191_ = lean_ctor_get(v___x_2185_, 5);
v_ngen_2192_ = lean_ctor_get(v___x_2185_, 6);
v_auxDeclNGen_2193_ = lean_ctor_get(v___x_2185_, 7);
v_infoState_2194_ = lean_ctor_get(v___x_2185_, 8);
v_traceState_2195_ = lean_ctor_get(v___x_2185_, 9);
v_snapshotTasks_2196_ = lean_ctor_get(v___x_2185_, 10);
v_prevLinterStates_2197_ = lean_ctor_get(v___x_2185_, 11);
v_codeQualityEntryTasks_2198_ = lean_ctor_get(v___x_2185_, 12);
v_isSharedCheck_2211_ = !lean_is_exclusive(v___x_2185_);
if (v_isSharedCheck_2211_ == 0)
{
v___x_2200_ = v___x_2185_;
v_isShared_2201_ = v_isSharedCheck_2211_;
goto v_resetjp_2199_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2198_);
lean_inc(v_prevLinterStates_2197_);
lean_inc(v_snapshotTasks_2196_);
lean_inc(v_traceState_2195_);
lean_inc(v_infoState_2194_);
lean_inc(v_auxDeclNGen_2193_);
lean_inc(v_ngen_2192_);
lean_inc(v_maxRecDepth_2191_);
lean_inc(v_nextMacroScope_2190_);
lean_inc(v_usedQuotCtxts_2189_);
lean_inc(v_scopes_2188_);
lean_inc(v_messages_2187_);
lean_inc(v_env_2186_);
lean_dec(v___x_2185_);
v___x_2200_ = lean_box(0);
v_isShared_2201_ = v_isSharedCheck_2211_;
goto v_resetjp_2199_;
}
v_resetjp_2199_:
{
lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2205_; 
v___x_2202_ = lean_box(0);
v___x_2203_ = l_Lean_MessageLog_add(v___x_2184_, v_messages_2187_);
if (v_isShared_2201_ == 0)
{
lean_ctor_set(v___x_2200_, 1, v___x_2203_);
v___x_2205_ = v___x_2200_;
goto v_reusejp_2204_;
}
else
{
lean_object* v_reuseFailAlloc_2210_; 
v_reuseFailAlloc_2210_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2210_, 0, v_env_2186_);
lean_ctor_set(v_reuseFailAlloc_2210_, 1, v___x_2203_);
lean_ctor_set(v_reuseFailAlloc_2210_, 2, v_scopes_2188_);
lean_ctor_set(v_reuseFailAlloc_2210_, 3, v_usedQuotCtxts_2189_);
lean_ctor_set(v_reuseFailAlloc_2210_, 4, v_nextMacroScope_2190_);
lean_ctor_set(v_reuseFailAlloc_2210_, 5, v_maxRecDepth_2191_);
lean_ctor_set(v_reuseFailAlloc_2210_, 6, v_ngen_2192_);
lean_ctor_set(v_reuseFailAlloc_2210_, 7, v_auxDeclNGen_2193_);
lean_ctor_set(v_reuseFailAlloc_2210_, 8, v_infoState_2194_);
lean_ctor_set(v_reuseFailAlloc_2210_, 9, v_traceState_2195_);
lean_ctor_set(v_reuseFailAlloc_2210_, 10, v_snapshotTasks_2196_);
lean_ctor_set(v_reuseFailAlloc_2210_, 11, v_prevLinterStates_2197_);
lean_ctor_set(v_reuseFailAlloc_2210_, 12, v_codeQualityEntryTasks_2198_);
v___x_2205_ = v_reuseFailAlloc_2210_;
goto v_reusejp_2204_;
}
v_reusejp_2204_:
{
lean_object* v___x_2206_; lean_object* v___x_2208_; 
v___x_2206_ = lean_st_ref_put(v___y_2172_, v___x_2205_);
if (v_isShared_2180_ == 0)
{
lean_ctor_set(v___x_2179_, 0, v___x_2202_);
v___x_2208_ = v___x_2179_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v___x_2202_);
v___x_2208_ = v_reuseFailAlloc_2209_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
return v___x_2208_;
}
}
}
}
}
else
{
lean_object* v_a_2213_; lean_object* v___x_2215_; uint8_t v_isShared_2216_; uint8_t v_isSharedCheck_2220_; 
lean_dec(v_currNamespace_2175_);
lean_dec(v___y_2169_);
lean_dec_ref(v___y_2167_);
lean_dec_ref(v___y_2165_);
v_a_2213_ = lean_ctor_get(v___x_2176_, 0);
v_isSharedCheck_2220_ = !lean_is_exclusive(v___x_2176_);
if (v_isSharedCheck_2220_ == 0)
{
v___x_2215_ = v___x_2176_;
v_isShared_2216_ = v_isSharedCheck_2220_;
goto v_resetjp_2214_;
}
else
{
lean_inc(v_a_2213_);
lean_dec(v___x_2176_);
v___x_2215_ = lean_box(0);
v_isShared_2216_ = v_isSharedCheck_2220_;
goto v_resetjp_2214_;
}
v_resetjp_2214_:
{
lean_object* v___x_2218_; 
if (v_isShared_2216_ == 0)
{
v___x_2218_ = v___x_2215_;
goto v_reusejp_2217_;
}
else
{
lean_object* v_reuseFailAlloc_2219_; 
v_reuseFailAlloc_2219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2219_, 0, v_a_2213_);
v___x_2218_ = v_reuseFailAlloc_2219_;
goto v_reusejp_2217_;
}
v_reusejp_2217_:
{
return v___x_2218_;
}
}
}
}
else
{
lean_object* v_a_2221_; lean_object* v___x_2223_; uint8_t v_isShared_2224_; uint8_t v_isSharedCheck_2228_; 
lean_dec(v___y_2169_);
lean_dec_ref(v___y_2167_);
lean_dec_ref(v___y_2165_);
v_a_2221_ = lean_ctor_get(v___x_2173_, 0);
v_isSharedCheck_2228_ = !lean_is_exclusive(v___x_2173_);
if (v_isSharedCheck_2228_ == 0)
{
v___x_2223_ = v___x_2173_;
v_isShared_2224_ = v_isSharedCheck_2228_;
goto v_resetjp_2222_;
}
else
{
lean_inc(v_a_2221_);
lean_dec(v___x_2173_);
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
v___jp_2229_:
{
lean_object* v_fileName_2235_; lean_object* v_fileMap_2236_; uint8_t v_suppressElabErrors_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___f_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v_a_2243_; lean_object* v___x_2245_; uint8_t v_isShared_2246_; uint8_t v_isSharedCheck_2256_; 
v_fileName_2235_ = lean_ctor_get(v___y_2161_, 0);
v_fileMap_2236_ = lean_ctor_get(v___y_2161_, 1);
v_suppressElabErrors_2237_ = lean_ctor_get_uint8(v___y_2161_, sizeof(void*)*10);
v___x_2238_ = lean_box(v_suppressElabErrors_2237_);
v___x_2239_ = lean_box(v___y_2230_);
v___f_2240_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2240_, 0, v___x_2238_);
lean_closure_set(v___f_2240_, 1, v___x_2239_);
v___x_2241_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_2158_);
v___x_2242_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg(v___x_2241_, v___y_2162_);
v_a_2243_ = lean_ctor_get(v___x_2242_, 0);
v_isSharedCheck_2256_ = !lean_is_exclusive(v___x_2242_);
if (v_isSharedCheck_2256_ == 0)
{
v___x_2245_ = v___x_2242_;
v_isShared_2246_ = v_isSharedCheck_2256_;
goto v_resetjp_2244_;
}
else
{
lean_inc(v_a_2243_);
lean_dec(v___x_2242_);
v___x_2245_ = lean_box(0);
v_isShared_2246_ = v_isSharedCheck_2256_;
goto v_resetjp_2244_;
}
v_resetjp_2244_:
{
lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; 
lean_inc_ref_n(v_fileMap_2236_, 2);
v___x_2247_ = l_Lean_FileMap_toPosition(v_fileMap_2236_, v___y_2232_);
lean_dec(v___y_2232_);
v___x_2248_ = l_Lean_FileMap_toPosition(v_fileMap_2236_, v___y_2234_);
lean_dec(v___y_2234_);
v___x_2249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2249_, 0, v___x_2248_);
v___x_2250_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___closed__0));
if (v_suppressElabErrors_2237_ == 0)
{
lean_del_object(v___x_2245_);
lean_dec_ref(v___f_2240_);
v___y_2165_ = v_a_2243_;
v___y_2166_ = v___x_2250_;
v___y_2167_ = v___x_2247_;
v___y_2168_ = v_fileName_2235_;
v___y_2169_ = v___x_2249_;
v___y_2170_ = v___y_2231_;
v___y_2171_ = v___y_2233_;
v___y_2172_ = v___y_2162_;
goto v___jp_2164_;
}
else
{
uint8_t v___x_2251_; 
lean_inc(v_a_2243_);
v___x_2251_ = l_Lean_MessageData_hasTag(v___f_2240_, v_a_2243_);
if (v___x_2251_ == 0)
{
lean_object* v___x_2252_; lean_object* v___x_2254_; 
lean_dec_ref_known(v___x_2249_, 1);
lean_dec_ref(v___x_2247_);
lean_dec(v_a_2243_);
v___x_2252_ = lean_box(0);
if (v_isShared_2246_ == 0)
{
lean_ctor_set(v___x_2245_, 0, v___x_2252_);
v___x_2254_ = v___x_2245_;
goto v_reusejp_2253_;
}
else
{
lean_object* v_reuseFailAlloc_2255_; 
v_reuseFailAlloc_2255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2255_, 0, v___x_2252_);
v___x_2254_ = v_reuseFailAlloc_2255_;
goto v_reusejp_2253_;
}
v_reusejp_2253_:
{
return v___x_2254_;
}
}
else
{
lean_del_object(v___x_2245_);
v___y_2165_ = v_a_2243_;
v___y_2166_ = v___x_2250_;
v___y_2167_ = v___x_2247_;
v___y_2168_ = v_fileName_2235_;
v___y_2169_ = v___x_2249_;
v___y_2170_ = v___y_2231_;
v___y_2171_ = v___y_2233_;
v___y_2172_ = v___y_2162_;
goto v___jp_2164_;
}
}
}
}
v___jp_2257_:
{
lean_object* v___x_2263_; 
v___x_2263_ = l_Lean_Syntax_getTailPos_x3f(v___y_2259_, v___y_2260_);
lean_dec(v___y_2259_);
if (lean_obj_tag(v___x_2263_) == 0)
{
lean_inc(v___y_2262_);
v___y_2230_ = v___y_2258_;
v___y_2231_ = v___y_2260_;
v___y_2232_ = v___y_2262_;
v___y_2233_ = v___y_2261_;
v___y_2234_ = v___y_2262_;
goto v___jp_2229_;
}
else
{
lean_object* v_val_2264_; 
v_val_2264_ = lean_ctor_get(v___x_2263_, 0);
lean_inc(v_val_2264_);
lean_dec_ref_known(v___x_2263_, 1);
v___y_2230_ = v___y_2258_;
v___y_2231_ = v___y_2260_;
v___y_2232_ = v___y_2262_;
v___y_2233_ = v___y_2261_;
v___y_2234_ = v_val_2264_;
goto v___jp_2229_;
}
}
v___jp_2265_:
{
lean_object* v___x_2269_; 
v___x_2269_ = l_Lean_Elab_Command_getRef___redArg(v___y_2161_);
if (lean_obj_tag(v___x_2269_) == 0)
{
lean_object* v_a_2270_; lean_object* v_ref_2271_; lean_object* v___x_2272_; 
v_a_2270_ = lean_ctor_get(v___x_2269_, 0);
lean_inc(v_a_2270_);
lean_dec_ref_known(v___x_2269_, 1);
v_ref_2271_ = l_Lean_replaceRef(v_ref_2157_, v_a_2270_);
lean_dec(v_a_2270_);
v___x_2272_ = l_Lean_Syntax_getPos_x3f(v_ref_2271_, v___y_2267_);
if (lean_obj_tag(v___x_2272_) == 0)
{
lean_object* v___x_2273_; 
v___x_2273_ = lean_unsigned_to_nat(0u);
v___y_2258_ = v___y_2266_;
v___y_2259_ = v_ref_2271_;
v___y_2260_ = v___y_2267_;
v___y_2261_ = v___y_2268_;
v___y_2262_ = v___x_2273_;
goto v___jp_2257_;
}
else
{
lean_object* v_val_2274_; 
v_val_2274_ = lean_ctor_get(v___x_2272_, 0);
lean_inc(v_val_2274_);
lean_dec_ref_known(v___x_2272_, 1);
v___y_2258_ = v___y_2266_;
v___y_2259_ = v_ref_2271_;
v___y_2260_ = v___y_2267_;
v___y_2261_ = v___y_2268_;
v___y_2262_ = v_val_2274_;
goto v___jp_2257_;
}
}
else
{
lean_object* v_a_2275_; lean_object* v___x_2277_; uint8_t v_isShared_2278_; uint8_t v_isSharedCheck_2282_; 
lean_dec_ref(v_msgData_2158_);
v_a_2275_ = lean_ctor_get(v___x_2269_, 0);
v_isSharedCheck_2282_ = !lean_is_exclusive(v___x_2269_);
if (v_isSharedCheck_2282_ == 0)
{
v___x_2277_ = v___x_2269_;
v_isShared_2278_ = v_isSharedCheck_2282_;
goto v_resetjp_2276_;
}
else
{
lean_inc(v_a_2275_);
lean_dec(v___x_2269_);
v___x_2277_ = lean_box(0);
v_isShared_2278_ = v_isSharedCheck_2282_;
goto v_resetjp_2276_;
}
v_resetjp_2276_:
{
lean_object* v___x_2280_; 
if (v_isShared_2278_ == 0)
{
v___x_2280_ = v___x_2277_;
goto v_reusejp_2279_;
}
else
{
lean_object* v_reuseFailAlloc_2281_; 
v_reuseFailAlloc_2281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2281_, 0, v_a_2275_);
v___x_2280_ = v_reuseFailAlloc_2281_;
goto v_reusejp_2279_;
}
v_reusejp_2279_:
{
return v___x_2280_;
}
}
}
}
v___jp_2284_:
{
if (v___y_2287_ == 0)
{
v___y_2266_ = v___y_2285_;
v___y_2267_ = v___y_2286_;
v___y_2268_ = v_severity_2159_;
goto v___jp_2265_;
}
else
{
v___y_2266_ = v___y_2285_;
v___y_2267_ = v___y_2286_;
v___y_2268_ = v___x_2283_;
goto v___jp_2265_;
}
}
v___jp_2288_:
{
if (v___y_2289_ == 0)
{
lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v_scopes_2292_; lean_object* v___x_2293_; lean_object* v_opts_2294_; uint8_t v___x_2295_; uint8_t v___x_2296_; 
v___x_2290_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2291_ = lean_st_ref_get(v___y_2162_);
v_scopes_2292_ = lean_ctor_get(v___x_2291_, 2);
lean_inc(v_scopes_2292_);
lean_dec(v___x_2291_);
v___x_2293_ = l_List_head_x21___redArg(v___x_2290_, v_scopes_2292_);
lean_dec(v_scopes_2292_);
v_opts_2294_ = lean_ctor_get(v___x_2293_, 1);
lean_inc_ref(v_opts_2294_);
lean_dec(v___x_2293_);
v___x_2295_ = 1;
v___x_2296_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2159_, v___x_2295_);
if (v___x_2296_ == 0)
{
lean_dec_ref(v_opts_2294_);
v___y_2285_ = v___y_2289_;
v___y_2286_ = v___y_2289_;
v___y_2287_ = v___x_2296_;
goto v___jp_2284_;
}
else
{
lean_object* v___x_2297_; uint8_t v___x_2298_; 
v___x_2297_ = l_Lean_warningAsError;
v___x_2298_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__12(v_opts_2294_, v___x_2297_);
lean_dec_ref(v_opts_2294_);
v___y_2285_ = v___y_2289_;
v___y_2286_ = v___y_2289_;
v___y_2287_ = v___x_2298_;
goto v___jp_2284_;
}
}
else
{
lean_object* v___x_2299_; lean_object* v___x_2300_; 
lean_dec_ref(v_msgData_2158_);
v___x_2299_ = lean_box(0);
v___x_2300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2300_, 0, v___x_2299_);
return v___x_2300_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___boxed(lean_object* v_ref_2303_, lean_object* v_msgData_2304_, lean_object* v_severity_2305_, lean_object* v_isSilent_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_){
_start:
{
uint8_t v_severity_boxed_2310_; uint8_t v_isSilent_boxed_2311_; lean_object* v_res_2312_; 
v_severity_boxed_2310_ = lean_unbox(v_severity_2305_);
v_isSilent_boxed_2311_ = lean_unbox(v_isSilent_2306_);
v_res_2312_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29(v_ref_2303_, v_msgData_2304_, v_severity_boxed_2310_, v_isSilent_boxed_2311_, v___y_2307_, v___y_2308_);
lean_dec(v___y_2308_);
lean_dec_ref(v___y_2307_);
lean_dec(v_ref_2303_);
return v_res_2312_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26(lean_object* v_ref_2313_, lean_object* v_msgData_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_){
_start:
{
uint8_t v___x_2318_; uint8_t v___x_2319_; lean_object* v___x_2320_; 
v___x_2318_ = 1;
v___x_2319_ = 0;
v___x_2320_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29(v_ref_2313_, v_msgData_2314_, v___x_2318_, v___x_2319_, v___y_2315_, v___y_2316_);
return v___x_2320_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26___boxed(lean_object* v_ref_2321_, lean_object* v_msgData_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_){
_start:
{
lean_object* v_res_2326_; 
v_res_2326_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26(v_ref_2321_, v_msgData_2322_, v___y_2323_, v___y_2324_);
lean_dec(v___y_2324_);
lean_dec_ref(v___y_2323_);
lean_dec(v_ref_2321_);
return v_res_2326_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__1(void){
_start:
{
lean_object* v___x_2328_; lean_object* v___x_2329_; 
v___x_2328_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__0));
v___x_2329_ = l_Lean_stringToMessageData(v___x_2328_);
return v___x_2329_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__3(void){
_start:
{
lean_object* v___x_2331_; lean_object* v___x_2332_; 
v___x_2331_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__2));
v___x_2332_ = l_Lean_stringToMessageData(v___x_2331_);
return v___x_2332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18(lean_object* v_linterOption_2333_, lean_object* v_stx_2334_, lean_object* v_msg_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_){
_start:
{
lean_object* v_name_2339_; lean_object* v___x_2341_; uint8_t v_isShared_2342_; uint8_t v_isSharedCheck_2357_; 
v_name_2339_ = lean_ctor_get(v_linterOption_2333_, 0);
v_isSharedCheck_2357_ = !lean_is_exclusive(v_linterOption_2333_);
if (v_isSharedCheck_2357_ == 0)
{
lean_object* v_unused_2358_; 
v_unused_2358_ = lean_ctor_get(v_linterOption_2333_, 1);
lean_dec(v_unused_2358_);
v___x_2341_ = v_linterOption_2333_;
v_isShared_2342_ = v_isSharedCheck_2357_;
goto v_resetjp_2340_;
}
else
{
lean_inc(v_name_2339_);
lean_dec(v_linterOption_2333_);
v___x_2341_ = lean_box(0);
v_isShared_2342_ = v_isSharedCheck_2357_;
goto v_resetjp_2340_;
}
v_resetjp_2340_:
{
lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2346_; 
v___x_2343_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__1, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__1_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__1);
lean_inc(v_name_2339_);
v___x_2344_ = l_Lean_MessageData_ofName(v_name_2339_);
if (v_isShared_2342_ == 0)
{
lean_ctor_set_tag(v___x_2341_, 7);
lean_ctor_set(v___x_2341_, 1, v___x_2344_);
lean_ctor_set(v___x_2341_, 0, v___x_2343_);
v___x_2346_ = v___x_2341_;
goto v_reusejp_2345_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v___x_2343_);
lean_ctor_set(v_reuseFailAlloc_2356_, 1, v___x_2344_);
v___x_2346_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2345_;
}
v_reusejp_2345_:
{
lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v_disable_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; 
v___x_2347_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__3, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__3_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__3);
v___x_2348_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2348_, 0, v___x_2346_);
lean_ctor_set(v___x_2348_, 1, v___x_2347_);
v_disable_2349_ = l_Lean_MessageData_note(v___x_2348_);
v___x_2350_ = l_Lean_Linter_linterMessageTag;
v___x_2351_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2351_, 0, v_msg_2335_);
lean_ctor_set(v___x_2351_, 1, v_disable_2349_);
v___x_2352_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2352_, 0, v___x_2350_);
lean_ctor_set(v___x_2352_, 1, v___x_2351_);
v___x_2353_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2353_, 0, v_name_2339_);
lean_ctor_set(v___x_2353_, 1, v___x_2352_);
lean_inc(v_stx_2334_);
v___x_2354_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_2354_, 0, v_stx_2334_);
lean_ctor_set(v___x_2354_, 1, v___x_2353_);
v___x_2355_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26(v_stx_2334_, v___x_2354_, v___y_2336_, v___y_2337_);
lean_dec(v_stx_2334_);
return v___x_2355_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___boxed(lean_object* v_linterOption_2359_, lean_object* v_stx_2360_, lean_object* v_msg_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_){
_start:
{
lean_object* v_res_2365_; 
v_res_2365_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18(v_linterOption_2359_, v_stx_2360_, v_msg_2361_, v___y_2362_, v___y_2363_);
lean_dec(v___y_2363_);
lean_dec_ref(v___y_2362_);
return v_res_2365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24___redArg(lean_object* v_o_2366_, lean_object* v___y_2367_){
_start:
{
lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v_env_2371_; lean_object* v___x_2372_; lean_object* v_toEnvExtension_2373_; lean_object* v_asyncMode_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v_merged_2377_; lean_object* v___x_2379_; uint8_t v_isShared_2380_; uint8_t v_isSharedCheck_2385_; 
v___x_2369_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_2370_ = lean_st_ref_get(v___y_2367_);
v_env_2371_ = lean_ctor_get(v___x_2370_, 0);
lean_inc_ref(v_env_2371_);
lean_dec(v___x_2370_);
v___x_2372_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_2373_ = lean_ctor_get(v___x_2372_, 0);
v_asyncMode_2374_ = lean_ctor_get(v_toEnvExtension_2373_, 2);
v___x_2375_ = lean_box(0);
v___x_2376_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2369_, v___x_2372_, v_env_2371_, v_asyncMode_2374_, v___x_2375_);
v_merged_2377_ = lean_ctor_get(v___x_2376_, 0);
v_isSharedCheck_2385_ = !lean_is_exclusive(v___x_2376_);
if (v_isSharedCheck_2385_ == 0)
{
lean_object* v_unused_2386_; 
v_unused_2386_ = lean_ctor_get(v___x_2376_, 1);
lean_dec(v_unused_2386_);
v___x_2379_ = v___x_2376_;
v_isShared_2380_ = v_isSharedCheck_2385_;
goto v_resetjp_2378_;
}
else
{
lean_inc(v_merged_2377_);
lean_dec(v___x_2376_);
v___x_2379_ = lean_box(0);
v_isShared_2380_ = v_isSharedCheck_2385_;
goto v_resetjp_2378_;
}
v_resetjp_2378_:
{
lean_object* v___x_2382_; 
if (v_isShared_2380_ == 0)
{
lean_ctor_set(v___x_2379_, 1, v_merged_2377_);
lean_ctor_set(v___x_2379_, 0, v_o_2366_);
v___x_2382_ = v___x_2379_;
goto v_reusejp_2381_;
}
else
{
lean_object* v_reuseFailAlloc_2384_; 
v_reuseFailAlloc_2384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2384_, 0, v_o_2366_);
lean_ctor_set(v_reuseFailAlloc_2384_, 1, v_merged_2377_);
v___x_2382_ = v_reuseFailAlloc_2384_;
goto v_reusejp_2381_;
}
v_reusejp_2381_:
{
lean_object* v___x_2383_; 
v___x_2383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2383_, 0, v___x_2382_);
return v___x_2383_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24___redArg___boxed(lean_object* v_o_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_){
_start:
{
lean_object* v_res_2390_; 
v_res_2390_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24___redArg(v_o_2387_, v___y_2388_);
lean_dec(v___y_2388_);
return v_res_2390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17(lean_object* v___y_2391_, lean_object* v___y_2392_){
_start:
{
lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v_scopes_2396_; lean_object* v___x_2397_; lean_object* v_opts_2398_; lean_object* v___x_2399_; 
v___x_2394_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2395_ = lean_st_ref_get(v___y_2392_);
v_scopes_2396_ = lean_ctor_get(v___x_2395_, 2);
lean_inc(v_scopes_2396_);
lean_dec(v___x_2395_);
v___x_2397_ = l_List_head_x21___redArg(v___x_2394_, v_scopes_2396_);
lean_dec(v_scopes_2396_);
v_opts_2398_ = lean_ctor_get(v___x_2397_, 1);
lean_inc_ref(v_opts_2398_);
lean_dec(v___x_2397_);
v___x_2399_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24___redArg(v_opts_2398_, v___y_2392_);
return v___x_2399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17___boxed(lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_){
_start:
{
lean_object* v_res_2403_; 
v_res_2403_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17(v___y_2400_, v___y_2401_);
lean_dec(v___y_2401_);
lean_dec_ref(v___y_2400_);
return v_res_2403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5(lean_object* v_linterOption_2404_, lean_object* v_stx_2405_, lean_object* v_msg_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_){
_start:
{
lean_object* v___x_2410_; lean_object* v_a_2411_; lean_object* v___x_2413_; uint8_t v_isShared_2414_; uint8_t v_isSharedCheck_2421_; 
v___x_2410_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17(v___y_2407_, v___y_2408_);
v_a_2411_ = lean_ctor_get(v___x_2410_, 0);
v_isSharedCheck_2421_ = !lean_is_exclusive(v___x_2410_);
if (v_isSharedCheck_2421_ == 0)
{
v___x_2413_ = v___x_2410_;
v_isShared_2414_ = v_isSharedCheck_2421_;
goto v_resetjp_2412_;
}
else
{
lean_inc(v_a_2411_);
lean_dec(v___x_2410_);
v___x_2413_ = lean_box(0);
v_isShared_2414_ = v_isSharedCheck_2421_;
goto v_resetjp_2412_;
}
v_resetjp_2412_:
{
uint8_t v___x_2415_; 
v___x_2415_ = l_Lean_Linter_getLinterValue(v_linterOption_2404_, v_a_2411_);
lean_dec(v_a_2411_);
if (v___x_2415_ == 0)
{
lean_object* v___x_2416_; lean_object* v___x_2418_; 
lean_dec_ref(v_msg_2406_);
lean_dec(v_stx_2405_);
lean_dec_ref(v_linterOption_2404_);
v___x_2416_ = lean_box(0);
if (v_isShared_2414_ == 0)
{
lean_ctor_set(v___x_2413_, 0, v___x_2416_);
v___x_2418_ = v___x_2413_;
goto v_reusejp_2417_;
}
else
{
lean_object* v_reuseFailAlloc_2419_; 
v_reuseFailAlloc_2419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2419_, 0, v___x_2416_);
v___x_2418_ = v_reuseFailAlloc_2419_;
goto v_reusejp_2417_;
}
v_reusejp_2417_:
{
return v___x_2418_;
}
}
else
{
lean_object* v___x_2420_; 
lean_del_object(v___x_2413_);
v___x_2420_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18(v_linterOption_2404_, v_stx_2405_, v_msg_2406_, v___y_2407_, v___y_2408_);
return v___x_2420_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5___boxed(lean_object* v_linterOption_2422_, lean_object* v_stx_2423_, lean_object* v_msg_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_){
_start:
{
lean_object* v_res_2428_; 
v_res_2428_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5(v_linterOption_2422_, v_stx_2423_, v_msg_2424_, v___y_2425_, v___y_2426_);
lean_dec(v___y_2426_);
lean_dec_ref(v___y_2425_);
return v_res_2428_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__1(void){
_start:
{
lean_object* v___x_2430_; lean_object* v___x_2431_; 
v___x_2430_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__0));
v___x_2431_ = l_Lean_stringToMessageData(v___x_2430_);
return v___x_2431_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__3(void){
_start:
{
lean_object* v___x_2433_; lean_object* v___x_2434_; 
v___x_2433_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__2));
v___x_2434_ = l_Lean_stringToMessageData(v___x_2433_);
return v___x_2434_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__13(void){
_start:
{
lean_object* v___x_2452_; lean_object* v___x_2453_; 
v___x_2452_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__12));
v___x_2453_ = l_Lean_stringToMessageData(v___x_2452_);
return v___x_2453_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__15(void){
_start:
{
lean_object* v___x_2455_; lean_object* v___x_2456_; 
v___x_2455_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__14));
v___x_2456_ = l_Lean_stringToMessageData(v___x_2455_);
return v___x_2456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1(lean_object* v_vis_x3f_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_){
_start:
{
lean_object* v___x_2469_; 
v___x_2469_ = lean_st_ref_get(v___y_2459_);
if (lean_obj_tag(v_vis_x3f_2457_) == 0)
{
uint8_t v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; 
lean_dec(v___x_2469_);
v___x_2470_ = 0;
v___x_2471_ = lean_box(v___x_2470_);
v___x_2472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2472_, 0, v___x_2471_);
return v___x_2472_;
}
else
{
lean_object* v_env_2473_; lean_object* v_val_2474_; lean_object* v___y_2476_; lean_object* v___y_2477_; lean_object* v___y_2478_; uint8_t v___y_2500_; lean_object* v___x_2501_; uint8_t v___x_2502_; uint8_t v___y_2504_; 
v_env_2473_ = lean_ctor_get(v___x_2469_, 0);
lean_inc_ref(v_env_2473_);
lean_dec(v___x_2469_);
v_val_2474_ = lean_ctor_get(v_vis_x3f_2457_, 0);
lean_inc_n(v_val_2474_, 2);
lean_dec_ref_known(v_vis_x3f_2457_, 1);
v___x_2501_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__9));
v___x_2502_ = l_Lean_Syntax_isOfKind(v_val_2474_, v___x_2501_);
if (v___x_2502_ == 0)
{
lean_object* v___x_2508_; uint8_t v___x_2509_; 
v___x_2508_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__11));
lean_inc(v_val_2474_);
v___x_2509_ = l_Lean_Syntax_isOfKind(v_val_2474_, v___x_2508_);
if (v___x_2509_ == 0)
{
lean_object* v___x_2510_; lean_object* v___x_2511_; 
lean_dec_ref(v_env_2473_);
v___x_2510_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__13, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__13_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__13);
v___x_2511_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___redArg(v_val_2474_, v___x_2510_, v___y_2458_, v___y_2459_);
lean_dec(v_val_2474_);
return v___x_2511_;
}
else
{
lean_object* v___x_2512_; 
v___x_2512_ = l_Lean_Syntax_getHeadInfo(v_val_2474_);
if (lean_obj_tag(v___x_2512_) == 0)
{
lean_dec_ref_known(v___x_2512_, 4);
v___y_2504_ = v___x_2509_;
goto v___jp_2503_;
}
else
{
lean_dec(v___x_2512_);
if (v___x_2502_ == 0)
{
lean_dec(v_val_2474_);
lean_dec_ref(v_env_2473_);
goto v___jp_2461_;
}
else
{
v___y_2504_ = v___x_2502_;
goto v___jp_2503_;
}
}
}
}
else
{
lean_object* v___x_2513_; 
v___x_2513_ = l_Lean_Syntax_getHeadInfo(v_val_2474_);
if (lean_obj_tag(v___x_2513_) == 0)
{
lean_object* v___x_2514_; uint8_t v_isModule_2515_; 
lean_dec_ref_known(v___x_2513_, 4);
v___x_2514_ = l_Lean_Environment_header(v_env_2473_);
v_isModule_2515_ = lean_ctor_get_uint8(v___x_2514_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_2514_);
if (v_isModule_2515_ == 0)
{
lean_dec(v_val_2474_);
lean_dec_ref(v_env_2473_);
goto v___jp_2465_;
}
else
{
uint8_t v_isExporting_2516_; 
v_isExporting_2516_ = lean_ctor_get_uint8(v_env_2473_, sizeof(void*)*8);
lean_dec_ref(v_env_2473_);
if (v_isExporting_2516_ == 0)
{
lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; 
v___x_2517_ = l_Lean_linter_redundantVisibility;
v___x_2518_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__15, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__15_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__15);
v___x_2519_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5(v___x_2517_, v_val_2474_, v___x_2518_, v___y_2458_, v___y_2459_);
if (lean_obj_tag(v___x_2519_) == 0)
{
lean_dec_ref_known(v___x_2519_, 1);
goto v___jp_2465_;
}
else
{
lean_object* v_a_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2527_; 
v_a_2520_ = lean_ctor_get(v___x_2519_, 0);
v_isSharedCheck_2527_ = !lean_is_exclusive(v___x_2519_);
if (v_isSharedCheck_2527_ == 0)
{
v___x_2522_ = v___x_2519_;
v_isShared_2523_ = v_isSharedCheck_2527_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_a_2520_);
lean_dec(v___x_2519_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2527_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
lean_object* v___x_2525_; 
if (v_isShared_2523_ == 0)
{
v___x_2525_ = v___x_2522_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v_a_2520_);
v___x_2525_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
return v___x_2525_;
}
}
}
}
else
{
lean_dec(v_val_2474_);
goto v___jp_2465_;
}
}
}
else
{
lean_dec(v___x_2513_);
lean_dec(v_val_2474_);
lean_dec_ref(v_env_2473_);
goto v___jp_2465_;
}
}
v___jp_2475_:
{
lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; 
lean_inc_ref(v___y_2478_);
v___x_2479_ = l_Lean_stringToMessageData(v___y_2478_);
lean_inc_ref(v___y_2476_);
v___x_2480_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2480_, 0, v___y_2476_);
lean_ctor_set(v___x_2480_, 1, v___x_2479_);
v___x_2481_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__1, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__1_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__1);
v___x_2482_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2482_, 0, v___x_2480_);
lean_ctor_set(v___x_2482_, 1, v___x_2481_);
lean_inc_ref(v___y_2477_);
v___x_2483_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5(v___y_2477_, v_val_2474_, v___x_2482_, v___y_2458_, v___y_2459_);
if (lean_obj_tag(v___x_2483_) == 0)
{
lean_dec_ref_known(v___x_2483_, 1);
goto v___jp_2461_;
}
else
{
lean_object* v_a_2484_; lean_object* v___x_2486_; uint8_t v_isShared_2487_; uint8_t v_isSharedCheck_2491_; 
v_a_2484_ = lean_ctor_get(v___x_2483_, 0);
v_isSharedCheck_2491_ = !lean_is_exclusive(v___x_2483_);
if (v_isSharedCheck_2491_ == 0)
{
v___x_2486_ = v___x_2483_;
v_isShared_2487_ = v_isSharedCheck_2491_;
goto v_resetjp_2485_;
}
else
{
lean_inc(v_a_2484_);
lean_dec(v___x_2483_);
v___x_2486_ = lean_box(0);
v_isShared_2487_ = v_isSharedCheck_2491_;
goto v_resetjp_2485_;
}
v_resetjp_2485_:
{
lean_object* v___x_2489_; 
if (v_isShared_2487_ == 0)
{
v___x_2489_ = v___x_2486_;
goto v_reusejp_2488_;
}
else
{
lean_object* v_reuseFailAlloc_2490_; 
v_reuseFailAlloc_2490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2490_, 0, v_a_2484_);
v___x_2489_ = v_reuseFailAlloc_2490_;
goto v_reusejp_2488_;
}
v_reusejp_2488_:
{
return v___x_2489_;
}
}
}
}
v___jp_2492_:
{
lean_object* v___x_2493_; uint8_t v_isModule_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; 
v___x_2493_ = l_Lean_Environment_header(v_env_2473_);
lean_dec_ref(v_env_2473_);
v_isModule_2494_ = lean_ctor_get_uint8(v___x_2493_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_2493_);
v___x_2495_ = l_Lean_linter_redundantVisibility;
v___x_2496_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__3, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__3_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__3);
if (v_isModule_2494_ == 0)
{
lean_object* v___x_2497_; 
v___x_2497_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___closed__0));
v___y_2476_ = v___x_2496_;
v___y_2477_ = v___x_2495_;
v___y_2478_ = v___x_2497_;
goto v___jp_2475_;
}
else
{
lean_object* v___x_2498_; 
v___x_2498_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__4));
v___y_2476_ = v___x_2496_;
v___y_2477_ = v___x_2495_;
v___y_2478_ = v___x_2498_;
goto v___jp_2475_;
}
}
v___jp_2499_:
{
if (v___y_2500_ == 0)
{
lean_dec(v_val_2474_);
lean_dec_ref(v_env_2473_);
goto v___jp_2461_;
}
else
{
goto v___jp_2492_;
}
}
v___jp_2503_:
{
uint8_t v_isExporting_2505_; 
v_isExporting_2505_ = lean_ctor_get_uint8(v_env_2473_, sizeof(void*)*8);
if (v_isExporting_2505_ == 0)
{
lean_object* v___x_2506_; uint8_t v_isModule_2507_; 
v___x_2506_ = l_Lean_Environment_header(v_env_2473_);
v_isModule_2507_ = lean_ctor_get_uint8(v___x_2506_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_2506_);
if (v_isModule_2507_ == 0)
{
v___y_2500_ = v___y_2504_;
goto v___jp_2499_;
}
else
{
v___y_2500_ = v___x_2502_;
goto v___jp_2499_;
}
}
else
{
goto v___jp_2492_;
}
}
}
v___jp_2461_:
{
uint8_t v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; 
v___x_2462_ = 2;
v___x_2463_ = lean_box(v___x_2462_);
v___x_2464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2464_, 0, v___x_2463_);
return v___x_2464_;
}
v___jp_2465_:
{
uint8_t v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; 
v___x_2466_ = 1;
v___x_2467_ = lean_box(v___x_2466_);
v___x_2468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2468_, 0, v___x_2467_);
return v___x_2468_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___boxed(lean_object* v_vis_x3f_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_){
_start:
{
lean_object* v_res_2532_; 
v_res_2532_ = l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1(v_vis_x3f_2528_, v___y_2529_, v___y_2530_);
lean_dec(v___y_2530_);
lean_dec_ref(v___y_2529_);
return v_res_2532_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30_spec__33(lean_object* v_msgData_2533_, uint8_t v_severity_2534_, uint8_t v_isSilent_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_){
_start:
{
lean_object* v___x_2539_; 
v___x_2539_ = l_Lean_Elab_Command_getRef___redArg(v___y_2536_);
if (lean_obj_tag(v___x_2539_) == 0)
{
lean_object* v_a_2540_; lean_object* v___x_2541_; 
v_a_2540_ = lean_ctor_get(v___x_2539_, 0);
lean_inc(v_a_2540_);
lean_dec_ref_known(v___x_2539_, 1);
v___x_2541_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29(v_a_2540_, v_msgData_2533_, v_severity_2534_, v_isSilent_2535_, v___y_2536_, v___y_2537_);
lean_dec(v_a_2540_);
return v___x_2541_;
}
else
{
lean_object* v_a_2542_; lean_object* v___x_2544_; uint8_t v_isShared_2545_; uint8_t v_isSharedCheck_2549_; 
lean_dec_ref(v_msgData_2533_);
v_a_2542_ = lean_ctor_get(v___x_2539_, 0);
v_isSharedCheck_2549_ = !lean_is_exclusive(v___x_2539_);
if (v_isSharedCheck_2549_ == 0)
{
v___x_2544_ = v___x_2539_;
v_isShared_2545_ = v_isSharedCheck_2549_;
goto v_resetjp_2543_;
}
else
{
lean_inc(v_a_2542_);
lean_dec(v___x_2539_);
v___x_2544_ = lean_box(0);
v_isShared_2545_ = v_isSharedCheck_2549_;
goto v_resetjp_2543_;
}
v_resetjp_2543_:
{
lean_object* v___x_2547_; 
if (v_isShared_2545_ == 0)
{
v___x_2547_ = v___x_2544_;
goto v_reusejp_2546_;
}
else
{
lean_object* v_reuseFailAlloc_2548_; 
v_reuseFailAlloc_2548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2548_, 0, v_a_2542_);
v___x_2547_ = v_reuseFailAlloc_2548_;
goto v_reusejp_2546_;
}
v_reusejp_2546_:
{
return v___x_2547_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30_spec__33___boxed(lean_object* v_msgData_2550_, lean_object* v_severity_2551_, lean_object* v_isSilent_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_){
_start:
{
uint8_t v_severity_boxed_2556_; uint8_t v_isSilent_boxed_2557_; lean_object* v_res_2558_; 
v_severity_boxed_2556_ = lean_unbox(v_severity_2551_);
v_isSilent_boxed_2557_ = lean_unbox(v_isSilent_2552_);
v_res_2558_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30_spec__33(v_msgData_2550_, v_severity_boxed_2556_, v_isSilent_boxed_2557_, v___y_2553_, v___y_2554_);
lean_dec(v___y_2554_);
lean_dec_ref(v___y_2553_);
return v_res_2558_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30(lean_object* v_msgData_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_){
_start:
{
uint8_t v___x_2563_; uint8_t v___x_2564_; lean_object* v___x_2565_; 
v___x_2563_ = 2;
v___x_2564_ = 0;
v___x_2565_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30_spec__33(v_msgData_2559_, v___x_2563_, v___x_2564_, v___y_2560_, v___y_2561_);
return v___x_2565_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30___boxed(lean_object* v_msgData_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_){
_start:
{
lean_object* v_res_2570_; 
v_res_2570_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30(v_msgData_2566_, v___y_2567_, v___y_2568_);
lean_dec(v___y_2568_);
lean_dec_ref(v___y_2567_);
return v_res_2570_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__29(lean_object* v_ref_2571_, lean_object* v_msgData_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_){
_start:
{
uint8_t v___x_2576_; uint8_t v___x_2577_; lean_object* v___x_2578_; 
v___x_2576_ = 2;
v___x_2577_ = 0;
v___x_2578_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29(v_ref_2571_, v_msgData_2572_, v___x_2576_, v___x_2577_, v___y_2573_, v___y_2574_);
return v___x_2578_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__29___boxed(lean_object* v_ref_2579_, lean_object* v_msgData_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_){
_start:
{
lean_object* v_res_2584_; 
v_res_2584_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__29(v_ref_2579_, v_msgData_2580_, v___y_2581_, v___y_2582_);
lean_dec(v___y_2582_);
lean_dec_ref(v___y_2581_);
lean_dec(v_ref_2579_);
return v_res_2584_;
}
}
static lean_object* _init_l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21___closed__1(void){
_start:
{
lean_object* v___x_2586_; lean_object* v___x_2587_; 
v___x_2586_ = ((lean_object*)(l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21___closed__0));
v___x_2587_ = l_Lean_stringToMessageData(v___x_2586_);
return v___x_2587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21(lean_object* v_ex_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_){
_start:
{
if (lean_obj_tag(v_ex_2588_) == 0)
{
lean_object* v_ref_2592_; lean_object* v_msg_2593_; lean_object* v___x_2594_; 
v_ref_2592_ = lean_ctor_get(v_ex_2588_, 0);
lean_inc(v_ref_2592_);
v_msg_2593_ = lean_ctor_get(v_ex_2588_, 1);
lean_inc_ref(v_msg_2593_);
lean_dec_ref_known(v_ex_2588_, 2);
v___x_2594_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__29(v_ref_2592_, v_msg_2593_, v___y_2589_, v___y_2590_);
lean_dec(v_ref_2592_);
return v___x_2594_;
}
else
{
lean_object* v_id_2595_; uint8_t v___y_2597_; uint8_t v___x_2619_; 
v_id_2595_ = lean_ctor_get(v_ex_2588_, 0);
lean_inc(v_id_2595_);
v___x_2619_ = l_Lean_Elab_isAbortExceptionId(v_id_2595_);
if (v___x_2619_ == 0)
{
uint8_t v___x_2620_; 
v___x_2620_ = l_Lean_Exception_isInterrupt(v_ex_2588_);
lean_dec_ref_known(v_ex_2588_, 2);
v___y_2597_ = v___x_2620_;
goto v___jp_2596_;
}
else
{
lean_dec_ref_known(v_ex_2588_, 2);
v___y_2597_ = v___x_2619_;
goto v___jp_2596_;
}
v___jp_2596_:
{
if (v___y_2597_ == 0)
{
lean_object* v___x_2598_; 
v___x_2598_ = l_Lean_InternalExceptionId_getName(v_id_2595_);
lean_dec(v_id_2595_);
if (lean_obj_tag(v___x_2598_) == 0)
{
lean_object* v_a_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; 
v_a_2599_ = lean_ctor_get(v___x_2598_, 0);
lean_inc(v_a_2599_);
lean_dec_ref_known(v___x_2598_, 1);
v___x_2600_ = lean_obj_once(&l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21___closed__1, &l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21___closed__1_once, _init_l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21___closed__1);
v___x_2601_ = l_Lean_MessageData_ofName(v_a_2599_);
v___x_2602_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2602_, 0, v___x_2600_);
lean_ctor_set(v___x_2602_, 1, v___x_2601_);
v___x_2603_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30(v___x_2602_, v___y_2589_, v___y_2590_);
return v___x_2603_;
}
else
{
lean_object* v_a_2604_; lean_object* v___x_2606_; uint8_t v_isShared_2607_; uint8_t v_isSharedCheck_2616_; 
v_a_2604_ = lean_ctor_get(v___x_2598_, 0);
v_isSharedCheck_2616_ = !lean_is_exclusive(v___x_2598_);
if (v_isSharedCheck_2616_ == 0)
{
v___x_2606_ = v___x_2598_;
v_isShared_2607_ = v_isSharedCheck_2616_;
goto v_resetjp_2605_;
}
else
{
lean_inc(v_a_2604_);
lean_dec(v___x_2598_);
v___x_2606_ = lean_box(0);
v_isShared_2607_ = v_isSharedCheck_2616_;
goto v_resetjp_2605_;
}
v_resetjp_2605_:
{
lean_object* v_ref_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2614_; 
v_ref_2608_ = lean_ctor_get(v___y_2589_, 7);
v___x_2609_ = lean_io_error_to_string(v_a_2604_);
v___x_2610_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2610_, 0, v___x_2609_);
v___x_2611_ = l_Lean_MessageData_ofFormat(v___x_2610_);
lean_inc(v_ref_2608_);
v___x_2612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2612_, 0, v_ref_2608_);
lean_ctor_set(v___x_2612_, 1, v___x_2611_);
if (v_isShared_2607_ == 0)
{
lean_ctor_set(v___x_2606_, 0, v___x_2612_);
v___x_2614_ = v___x_2606_;
goto v_reusejp_2613_;
}
else
{
lean_object* v_reuseFailAlloc_2615_; 
v_reuseFailAlloc_2615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2615_, 0, v___x_2612_);
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
lean_object* v___x_2617_; lean_object* v___x_2618_; 
lean_dec(v_id_2595_);
v___x_2617_ = lean_box(0);
v___x_2618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2618_, 0, v___x_2617_);
return v___x_2618_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21___boxed(lean_object* v_ex_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_){
_start:
{
lean_object* v_res_2625_; 
v_res_2625_ = l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21(v_ex_2621_, v___y_2622_, v___y_2623_);
lean_dec(v___y_2623_);
lean_dec_ref(v___y_2622_);
return v_res_2625_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44_spec__48___redArg(lean_object* v_a_2626_, lean_object* v_x_2627_){
_start:
{
if (lean_obj_tag(v_x_2627_) == 0)
{
lean_object* v___x_2628_; 
v___x_2628_ = lean_box(0);
return v___x_2628_;
}
else
{
lean_object* v_key_2629_; lean_object* v_value_2630_; lean_object* v_tail_2631_; uint8_t v___x_2632_; 
v_key_2629_ = lean_ctor_get(v_x_2627_, 0);
v_value_2630_ = lean_ctor_get(v_x_2627_, 1);
v_tail_2631_ = lean_ctor_get(v_x_2627_, 2);
v___x_2632_ = lean_name_eq(v_key_2629_, v_a_2626_);
if (v___x_2632_ == 0)
{
v_x_2627_ = v_tail_2631_;
goto _start;
}
else
{
lean_object* v___x_2634_; 
lean_inc(v_value_2630_);
v___x_2634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2634_, 0, v_value_2630_);
return v___x_2634_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44_spec__48___redArg___boxed(lean_object* v_a_2635_, lean_object* v_x_2636_){
_start:
{
lean_object* v_res_2637_; 
v_res_2637_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44_spec__48___redArg(v_a_2635_, v_x_2636_);
lean_dec(v_x_2636_);
lean_dec(v_a_2635_);
return v_res_2637_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44___redArg(lean_object* v_m_2638_, lean_object* v_a_2639_){
_start:
{
lean_object* v_buckets_2640_; lean_object* v___x_2641_; uint64_t v___y_2643_; 
v_buckets_2640_ = lean_ctor_get(v_m_2638_, 1);
v___x_2641_ = lean_array_get_size(v_buckets_2640_);
if (lean_obj_tag(v_a_2639_) == 0)
{
uint64_t v___x_2657_; 
v___x_2657_ = 1723ULL;
v___y_2643_ = v___x_2657_;
goto v___jp_2642_;
}
else
{
uint64_t v_hash_2658_; 
v_hash_2658_ = lean_ctor_get_uint64(v_a_2639_, sizeof(void*)*2);
v___y_2643_ = v_hash_2658_;
goto v___jp_2642_;
}
v___jp_2642_:
{
uint64_t v___x_2644_; uint64_t v___x_2645_; uint64_t v_fold_2646_; uint64_t v___x_2647_; uint64_t v___x_2648_; uint64_t v___x_2649_; size_t v___x_2650_; size_t v___x_2651_; size_t v___x_2652_; size_t v___x_2653_; size_t v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; 
v___x_2644_ = 32ULL;
v___x_2645_ = lean_uint64_shift_right(v___y_2643_, v___x_2644_);
v_fold_2646_ = lean_uint64_xor(v___y_2643_, v___x_2645_);
v___x_2647_ = 16ULL;
v___x_2648_ = lean_uint64_shift_right(v_fold_2646_, v___x_2647_);
v___x_2649_ = lean_uint64_xor(v_fold_2646_, v___x_2648_);
v___x_2650_ = lean_uint64_to_usize(v___x_2649_);
v___x_2651_ = lean_usize_of_nat(v___x_2641_);
v___x_2652_ = ((size_t)1ULL);
v___x_2653_ = lean_usize_sub(v___x_2651_, v___x_2652_);
v___x_2654_ = lean_usize_land(v___x_2650_, v___x_2653_);
v___x_2655_ = lean_array_uget_borrowed(v_buckets_2640_, v___x_2654_);
v___x_2656_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44_spec__48___redArg(v_a_2639_, v___x_2655_);
return v___x_2656_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44___redArg___boxed(lean_object* v_m_2659_, lean_object* v_a_2660_){
_start:
{
lean_object* v_res_2661_; 
v_res_2661_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44___redArg(v_m_2659_, v_a_2660_);
lean_dec(v_a_2660_);
lean_dec_ref(v_m_2659_);
return v_res_2661_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___closed__0(void){
_start:
{
lean_object* v___x_2662_; double v___x_2663_; 
v___x_2662_ = lean_unsigned_to_nat(0u);
v___x_2663_ = lean_float_of_nat(v___x_2662_);
return v___x_2663_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36(lean_object* v_cls_2666_, lean_object* v_msg_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_){
_start:
{
lean_object* v___x_2671_; 
v___x_2671_ = l_Lean_Elab_Command_getRef___redArg(v___y_2668_);
if (lean_obj_tag(v___x_2671_) == 0)
{
lean_object* v_a_2672_; lean_object* v___x_2673_; lean_object* v_a_2674_; lean_object* v___x_2676_; uint8_t v_isShared_2677_; uint8_t v_isSharedCheck_2722_; 
v_a_2672_ = lean_ctor_get(v___x_2671_, 0);
lean_inc(v_a_2672_);
lean_dec_ref_known(v___x_2671_, 1);
v___x_2673_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg(v_msg_2667_, v___y_2669_);
v_a_2674_ = lean_ctor_get(v___x_2673_, 0);
v_isSharedCheck_2722_ = !lean_is_exclusive(v___x_2673_);
if (v_isSharedCheck_2722_ == 0)
{
v___x_2676_ = v___x_2673_;
v_isShared_2677_ = v_isSharedCheck_2722_;
goto v_resetjp_2675_;
}
else
{
lean_inc(v_a_2674_);
lean_dec(v___x_2673_);
v___x_2676_ = lean_box(0);
v_isShared_2677_ = v_isSharedCheck_2722_;
goto v_resetjp_2675_;
}
v_resetjp_2675_:
{
lean_object* v___x_2678_; lean_object* v_traceState_2679_; lean_object* v_env_2680_; lean_object* v_messages_2681_; lean_object* v_scopes_2682_; lean_object* v_usedQuotCtxts_2683_; lean_object* v_nextMacroScope_2684_; lean_object* v_maxRecDepth_2685_; lean_object* v_ngen_2686_; lean_object* v_auxDeclNGen_2687_; lean_object* v_infoState_2688_; lean_object* v_snapshotTasks_2689_; lean_object* v_prevLinterStates_2690_; lean_object* v_codeQualityEntryTasks_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2721_; 
v___x_2678_ = lean_st_ref_take(v___y_2669_);
v_traceState_2679_ = lean_ctor_get(v___x_2678_, 9);
v_env_2680_ = lean_ctor_get(v___x_2678_, 0);
v_messages_2681_ = lean_ctor_get(v___x_2678_, 1);
v_scopes_2682_ = lean_ctor_get(v___x_2678_, 2);
v_usedQuotCtxts_2683_ = lean_ctor_get(v___x_2678_, 3);
v_nextMacroScope_2684_ = lean_ctor_get(v___x_2678_, 4);
v_maxRecDepth_2685_ = lean_ctor_get(v___x_2678_, 5);
v_ngen_2686_ = lean_ctor_get(v___x_2678_, 6);
v_auxDeclNGen_2687_ = lean_ctor_get(v___x_2678_, 7);
v_infoState_2688_ = lean_ctor_get(v___x_2678_, 8);
v_snapshotTasks_2689_ = lean_ctor_get(v___x_2678_, 10);
v_prevLinterStates_2690_ = lean_ctor_get(v___x_2678_, 11);
v_codeQualityEntryTasks_2691_ = lean_ctor_get(v___x_2678_, 12);
v_isSharedCheck_2721_ = !lean_is_exclusive(v___x_2678_);
if (v_isSharedCheck_2721_ == 0)
{
v___x_2693_ = v___x_2678_;
v_isShared_2694_ = v_isSharedCheck_2721_;
goto v_resetjp_2692_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2691_);
lean_inc(v_prevLinterStates_2690_);
lean_inc(v_snapshotTasks_2689_);
lean_inc(v_traceState_2679_);
lean_inc(v_infoState_2688_);
lean_inc(v_auxDeclNGen_2687_);
lean_inc(v_ngen_2686_);
lean_inc(v_maxRecDepth_2685_);
lean_inc(v_nextMacroScope_2684_);
lean_inc(v_usedQuotCtxts_2683_);
lean_inc(v_scopes_2682_);
lean_inc(v_messages_2681_);
lean_inc(v_env_2680_);
lean_dec(v___x_2678_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2721_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
uint64_t v_tid_2695_; lean_object* v_traces_2696_; lean_object* v___x_2698_; uint8_t v_isShared_2699_; uint8_t v_isSharedCheck_2720_; 
v_tid_2695_ = lean_ctor_get_uint64(v_traceState_2679_, sizeof(void*)*1);
v_traces_2696_ = lean_ctor_get(v_traceState_2679_, 0);
v_isSharedCheck_2720_ = !lean_is_exclusive(v_traceState_2679_);
if (v_isSharedCheck_2720_ == 0)
{
v___x_2698_ = v_traceState_2679_;
v_isShared_2699_ = v_isSharedCheck_2720_;
goto v_resetjp_2697_;
}
else
{
lean_inc(v_traces_2696_);
lean_dec(v_traceState_2679_);
v___x_2698_ = lean_box(0);
v_isShared_2699_ = v_isSharedCheck_2720_;
goto v_resetjp_2697_;
}
v_resetjp_2697_:
{
lean_object* v___x_2700_; lean_object* v___x_2701_; double v___x_2702_; uint8_t v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2711_; 
v___x_2700_ = lean_box(0);
v___x_2701_ = lean_box(0);
v___x_2702_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___closed__0, &l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___closed__0);
v___x_2703_ = 0;
v___x_2704_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___closed__0));
v___x_2705_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2705_, 0, v_cls_2666_);
lean_ctor_set(v___x_2705_, 1, v___x_2701_);
lean_ctor_set(v___x_2705_, 2, v___x_2704_);
lean_ctor_set_float(v___x_2705_, sizeof(void*)*3, v___x_2702_);
lean_ctor_set_float(v___x_2705_, sizeof(void*)*3 + 8, v___x_2702_);
lean_ctor_set_uint8(v___x_2705_, sizeof(void*)*3 + 16, v___x_2703_);
v___x_2706_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___closed__1));
v___x_2707_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2707_, 0, v___x_2705_);
lean_ctor_set(v___x_2707_, 1, v_a_2674_);
lean_ctor_set(v___x_2707_, 2, v___x_2706_);
v___x_2708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2708_, 0, v_a_2672_);
lean_ctor_set(v___x_2708_, 1, v___x_2707_);
v___x_2709_ = l_Lean_PersistentArray_push___redArg(v_traces_2696_, v___x_2708_);
if (v_isShared_2699_ == 0)
{
lean_ctor_set(v___x_2698_, 0, v___x_2709_);
v___x_2711_ = v___x_2698_;
goto v_reusejp_2710_;
}
else
{
lean_object* v_reuseFailAlloc_2719_; 
v_reuseFailAlloc_2719_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2719_, 0, v___x_2709_);
lean_ctor_set_uint64(v_reuseFailAlloc_2719_, sizeof(void*)*1, v_tid_2695_);
v___x_2711_ = v_reuseFailAlloc_2719_;
goto v_reusejp_2710_;
}
v_reusejp_2710_:
{
lean_object* v___x_2713_; 
if (v_isShared_2694_ == 0)
{
lean_ctor_set(v___x_2693_, 9, v___x_2711_);
v___x_2713_ = v___x_2693_;
goto v_reusejp_2712_;
}
else
{
lean_object* v_reuseFailAlloc_2718_; 
v_reuseFailAlloc_2718_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2718_, 0, v_env_2680_);
lean_ctor_set(v_reuseFailAlloc_2718_, 1, v_messages_2681_);
lean_ctor_set(v_reuseFailAlloc_2718_, 2, v_scopes_2682_);
lean_ctor_set(v_reuseFailAlloc_2718_, 3, v_usedQuotCtxts_2683_);
lean_ctor_set(v_reuseFailAlloc_2718_, 4, v_nextMacroScope_2684_);
lean_ctor_set(v_reuseFailAlloc_2718_, 5, v_maxRecDepth_2685_);
lean_ctor_set(v_reuseFailAlloc_2718_, 6, v_ngen_2686_);
lean_ctor_set(v_reuseFailAlloc_2718_, 7, v_auxDeclNGen_2687_);
lean_ctor_set(v_reuseFailAlloc_2718_, 8, v_infoState_2688_);
lean_ctor_set(v_reuseFailAlloc_2718_, 9, v___x_2711_);
lean_ctor_set(v_reuseFailAlloc_2718_, 10, v_snapshotTasks_2689_);
lean_ctor_set(v_reuseFailAlloc_2718_, 11, v_prevLinterStates_2690_);
lean_ctor_set(v_reuseFailAlloc_2718_, 12, v_codeQualityEntryTasks_2691_);
v___x_2713_ = v_reuseFailAlloc_2718_;
goto v_reusejp_2712_;
}
v_reusejp_2712_:
{
lean_object* v___x_2714_; lean_object* v___x_2716_; 
v___x_2714_ = lean_st_ref_put(v___y_2669_, v___x_2713_);
if (v_isShared_2677_ == 0)
{
lean_ctor_set(v___x_2676_, 0, v___x_2700_);
v___x_2716_ = v___x_2676_;
goto v_reusejp_2715_;
}
else
{
lean_object* v_reuseFailAlloc_2717_; 
v_reuseFailAlloc_2717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2717_, 0, v___x_2700_);
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
}
}
else
{
lean_object* v_a_2723_; lean_object* v___x_2725_; uint8_t v_isShared_2726_; uint8_t v_isSharedCheck_2730_; 
lean_dec_ref(v_msg_2667_);
lean_dec(v_cls_2666_);
v_a_2723_ = lean_ctor_get(v___x_2671_, 0);
v_isSharedCheck_2730_ = !lean_is_exclusive(v___x_2671_);
if (v_isSharedCheck_2730_ == 0)
{
v___x_2725_ = v___x_2671_;
v_isShared_2726_ = v_isSharedCheck_2730_;
goto v_resetjp_2724_;
}
else
{
lean_inc(v_a_2723_);
lean_dec(v___x_2671_);
v___x_2725_ = lean_box(0);
v_isShared_2726_ = v_isSharedCheck_2730_;
goto v_resetjp_2724_;
}
v_resetjp_2724_:
{
lean_object* v___x_2728_; 
if (v_isShared_2726_ == 0)
{
v___x_2728_ = v___x_2725_;
goto v_reusejp_2727_;
}
else
{
lean_object* v_reuseFailAlloc_2729_; 
v_reuseFailAlloc_2729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2729_, 0, v_a_2723_);
v___x_2728_ = v_reuseFailAlloc_2729_;
goto v_reusejp_2727_;
}
v_reusejp_2727_:
{
return v___x_2728_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___boxed(lean_object* v_cls_2731_, lean_object* v_msg_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_){
_start:
{
lean_object* v_res_2736_; 
v_res_2736_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36(v_cls_2731_, v_msg_2732_, v___y_2733_, v___y_2734_);
lean_dec(v___y_2734_);
lean_dec_ref(v___y_2733_);
return v_res_2736_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48_spec__52___redArg(lean_object* v_keys_2737_, lean_object* v_i_2738_, lean_object* v_k_2739_){
_start:
{
lean_object* v___x_2740_; uint8_t v___x_2741_; 
v___x_2740_ = lean_array_get_size(v_keys_2737_);
v___x_2741_ = lean_nat_dec_lt(v_i_2738_, v___x_2740_);
if (v___x_2741_ == 0)
{
lean_dec(v_i_2738_);
return v___x_2741_;
}
else
{
lean_object* v_k_x27_2742_; uint8_t v___x_2743_; 
v_k_x27_2742_ = lean_array_fget_borrowed(v_keys_2737_, v_i_2738_);
v___x_2743_ = l_Lean_instBEqExtraModUse_beq(v_k_2739_, v_k_x27_2742_);
if (v___x_2743_ == 0)
{
lean_object* v___x_2744_; lean_object* v___x_2745_; 
v___x_2744_ = lean_unsigned_to_nat(1u);
v___x_2745_ = lean_nat_add(v_i_2738_, v___x_2744_);
lean_dec(v_i_2738_);
v_i_2738_ = v___x_2745_;
goto _start;
}
else
{
lean_dec(v_i_2738_);
return v___x_2741_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48_spec__52___redArg___boxed(lean_object* v_keys_2747_, lean_object* v_i_2748_, lean_object* v_k_2749_){
_start:
{
uint8_t v_res_2750_; lean_object* v_r_2751_; 
v_res_2750_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48_spec__52___redArg(v_keys_2747_, v_i_2748_, v_k_2749_);
lean_dec_ref(v_k_2749_);
lean_dec_ref(v_keys_2747_);
v_r_2751_ = lean_box(v_res_2750_);
return v_r_2751_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48___redArg(lean_object* v_x_2752_, size_t v_x_2753_, lean_object* v_x_2754_){
_start:
{
if (lean_obj_tag(v_x_2752_) == 0)
{
lean_object* v_es_2755_; lean_object* v___x_2756_; size_t v___x_2757_; size_t v___x_2758_; lean_object* v_j_2759_; lean_object* v___x_2760_; 
v_es_2755_ = lean_ctor_get(v_x_2752_, 0);
v___x_2756_ = lean_box(2);
v___x_2757_ = ((size_t)31ULL);
v___x_2758_ = lean_usize_land(v_x_2753_, v___x_2757_);
v_j_2759_ = lean_usize_to_nat(v___x_2758_);
v___x_2760_ = lean_array_get_borrowed(v___x_2756_, v_es_2755_, v_j_2759_);
lean_dec(v_j_2759_);
switch(lean_obj_tag(v___x_2760_))
{
case 0:
{
lean_object* v_key_2761_; uint8_t v___x_2762_; 
v_key_2761_ = lean_ctor_get(v___x_2760_, 0);
v___x_2762_ = l_Lean_instBEqExtraModUse_beq(v_x_2754_, v_key_2761_);
return v___x_2762_;
}
case 1:
{
lean_object* v_node_2763_; size_t v___x_2764_; size_t v___x_2765_; 
v_node_2763_ = lean_ctor_get(v___x_2760_, 0);
v___x_2764_ = ((size_t)5ULL);
v___x_2765_ = lean_usize_shift_right(v_x_2753_, v___x_2764_);
v_x_2752_ = v_node_2763_;
v_x_2753_ = v___x_2765_;
goto _start;
}
default: 
{
uint8_t v___x_2767_; 
v___x_2767_ = 0;
return v___x_2767_;
}
}
}
else
{
lean_object* v_ks_2768_; lean_object* v___x_2769_; uint8_t v___x_2770_; 
v_ks_2768_ = lean_ctor_get(v_x_2752_, 0);
v___x_2769_ = lean_unsigned_to_nat(0u);
v___x_2770_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48_spec__52___redArg(v_ks_2768_, v___x_2769_, v_x_2754_);
return v___x_2770_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48___redArg___boxed(lean_object* v_x_2771_, lean_object* v_x_2772_, lean_object* v_x_2773_){
_start:
{
size_t v_x_32170__boxed_2774_; uint8_t v_res_2775_; lean_object* v_r_2776_; 
v_x_32170__boxed_2774_ = lean_unbox_usize(v_x_2772_);
lean_dec(v_x_2772_);
v_res_2775_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48___redArg(v_x_2771_, v_x_32170__boxed_2774_, v_x_2773_);
lean_dec_ref(v_x_2773_);
lean_dec_ref(v_x_2771_);
v_r_2776_ = lean_box(v_res_2775_);
return v_r_2776_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45___redArg(lean_object* v_x_2777_, lean_object* v_x_2778_){
_start:
{
uint64_t v___x_2779_; size_t v___x_2780_; uint8_t v___x_2781_; 
v___x_2779_ = l_Lean_instHashableExtraModUse_hash(v_x_2778_);
v___x_2780_ = lean_uint64_to_usize(v___x_2779_);
v___x_2781_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48___redArg(v_x_2777_, v___x_2780_, v_x_2778_);
return v___x_2781_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45___redArg___boxed(lean_object* v_x_2782_, lean_object* v_x_2783_){
_start:
{
uint8_t v_res_2784_; lean_object* v_r_2785_; 
v_res_2784_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45___redArg(v_x_2782_, v_x_2783_);
lean_dec_ref(v_x_2783_);
lean_dec_ref(v_x_2782_);
v_r_2785_ = lean_box(v_res_2784_);
return v_r_2785_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__0(void){
_start:
{
lean_object* v___x_2786_; 
v___x_2786_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_2786_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__4(void){
_start:
{
lean_object* v___x_2791_; lean_object* v___x_2792_; 
v___x_2791_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__3));
v___x_2792_ = l_Lean_stringToMessageData(v___x_2791_);
return v___x_2792_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__6(void){
_start:
{
lean_object* v___x_2794_; lean_object* v___x_2795_; 
v___x_2794_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__5));
v___x_2795_ = l_Lean_stringToMessageData(v___x_2794_);
return v___x_2795_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__7(void){
_start:
{
lean_object* v___x_2796_; lean_object* v___x_2797_; 
v___x_2796_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___closed__0));
v___x_2797_ = l_Lean_stringToMessageData(v___x_2796_);
return v___x_2797_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__9(void){
_start:
{
lean_object* v_cls_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; 
v_cls_2800_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__2));
v___x_2801_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__8));
v___x_2802_ = l_Lean_Name_append(v___x_2801_, v_cls_2800_);
return v___x_2802_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__11(void){
_start:
{
lean_object* v___x_2804_; lean_object* v___x_2805_; 
v___x_2804_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__10));
v___x_2805_ = l_Lean_stringToMessageData(v___x_2804_);
return v___x_2805_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__13(void){
_start:
{
lean_object* v___x_2807_; lean_object* v___x_2808_; 
v___x_2807_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__12));
v___x_2808_ = l_Lean_stringToMessageData(v___x_2807_);
return v___x_2808_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42(lean_object* v_mod_2811_, uint8_t v_isMeta_2812_, lean_object* v_hint_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_){
_start:
{
lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v_env_2819_; uint8_t v_isExporting_2820_; lean_object* v_entry_2821_; lean_object* v___x_2822_; lean_object* v_env_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___y_2828_; lean_object* v___x_2856_; uint8_t v___x_2857_; 
v___x_2817_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__0);
v___x_2818_ = lean_st_ref_get(v___y_2815_);
v_env_2819_ = lean_ctor_get(v___x_2818_, 0);
lean_inc_ref(v_env_2819_);
lean_dec(v___x_2818_);
v_isExporting_2820_ = lean_ctor_get_uint8(v_env_2819_, sizeof(void*)*8);
lean_dec_ref(v_env_2819_);
lean_inc(v_mod_2811_);
v_entry_2821_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_2821_, 0, v_mod_2811_);
lean_ctor_set_uint8(v_entry_2821_, sizeof(void*)*1, v_isExporting_2820_);
lean_ctor_set_uint8(v_entry_2821_, sizeof(void*)*1 + 1, v_isMeta_2812_);
v___x_2822_ = lean_st_ref_get(v___y_2815_);
v_env_2823_ = lean_ctor_get(v___x_2822_, 0);
lean_inc_ref(v_env_2823_);
lean_dec(v___x_2822_);
v___x_2824_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_2825_ = lean_box(1);
v___x_2826_ = lean_box(0);
v___x_2856_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2817_, v___x_2824_, v_env_2823_, v___x_2825_, v___x_2826_);
v___x_2857_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45___redArg(v___x_2856_, v_entry_2821_);
lean_dec(v___x_2856_);
if (v___x_2857_ == 0)
{
lean_object* v_cls_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___y_2864_; lean_object* v___y_2865_; lean_object* v___y_2869_; lean_object* v___y_2870_; lean_object* v_scopes_2882_; lean_object* v___x_2883_; lean_object* v_opts_2884_; uint8_t v_hasTrace_2885_; 
v_cls_2858_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__2));
v___x_2859_ = l_Lean_inheritedTraceOptions;
v___x_2860_ = lean_st_ref_get(v___x_2859_);
v___x_2861_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2862_ = lean_st_ref_get(v___y_2815_);
v_scopes_2882_ = lean_ctor_get(v___x_2862_, 2);
lean_inc(v_scopes_2882_);
lean_dec(v___x_2862_);
v___x_2883_ = l_List_head_x21___redArg(v___x_2861_, v_scopes_2882_);
lean_dec(v_scopes_2882_);
v_opts_2884_ = lean_ctor_get(v___x_2883_, 1);
lean_inc_ref(v_opts_2884_);
lean_dec(v___x_2883_);
v_hasTrace_2885_ = lean_ctor_get_uint8(v_opts_2884_, sizeof(void*)*1);
if (v_hasTrace_2885_ == 0)
{
lean_dec_ref(v_opts_2884_);
lean_dec(v___x_2860_);
lean_dec(v_hint_2813_);
lean_dec(v_mod_2811_);
v___y_2828_ = v___y_2815_;
goto v___jp_2827_;
}
else
{
lean_object* v___x_2886_; uint8_t v___x_2887_; 
v___x_2886_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__9);
v___x_2887_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_2860_, v_opts_2884_, v___x_2886_);
lean_dec_ref(v_opts_2884_);
lean_dec(v___x_2860_);
if (v___x_2887_ == 0)
{
lean_dec(v_hint_2813_);
lean_dec(v_mod_2811_);
v___y_2828_ = v___y_2815_;
goto v___jp_2827_;
}
else
{
lean_object* v___x_2888_; lean_object* v___y_2890_; 
v___x_2888_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__11);
if (v_isExporting_2820_ == 0)
{
lean_object* v___x_2897_; 
v___x_2897_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__8));
v___y_2890_ = v___x_2897_;
goto v___jp_2889_;
}
else
{
lean_object* v___x_2898_; 
v___x_2898_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__10));
v___y_2890_ = v___x_2898_;
goto v___jp_2889_;
}
v___jp_2889_:
{
lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; 
lean_inc_ref(v___y_2890_);
v___x_2891_ = l_Lean_stringToMessageData(v___y_2890_);
v___x_2892_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2892_, 0, v___x_2888_);
lean_ctor_set(v___x_2892_, 1, v___x_2891_);
v___x_2893_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__13);
v___x_2894_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2894_, 0, v___x_2892_);
lean_ctor_set(v___x_2894_, 1, v___x_2893_);
if (v_isMeta_2812_ == 0)
{
lean_object* v___x_2895_; 
v___x_2895_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__14));
v___y_2869_ = v___x_2894_;
v___y_2870_ = v___x_2895_;
goto v___jp_2868_;
}
else
{
lean_object* v___x_2896_; 
v___x_2896_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__15));
v___y_2869_ = v___x_2894_;
v___y_2870_ = v___x_2896_;
goto v___jp_2868_;
}
}
}
}
v___jp_2863_:
{
lean_object* v___x_2866_; lean_object* v___x_2867_; 
v___x_2866_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2866_, 0, v___y_2864_);
lean_ctor_set(v___x_2866_, 1, v___y_2865_);
v___x_2867_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36(v_cls_2858_, v___x_2866_, v___y_2814_, v___y_2815_);
if (lean_obj_tag(v___x_2867_) == 0)
{
lean_dec_ref_known(v___x_2867_, 1);
v___y_2828_ = v___y_2815_;
goto v___jp_2827_;
}
else
{
lean_dec_ref_known(v_entry_2821_, 1);
return v___x_2867_;
}
}
v___jp_2868_:
{
lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; uint8_t v___x_2877_; 
lean_inc_ref(v___y_2870_);
v___x_2871_ = l_Lean_stringToMessageData(v___y_2870_);
v___x_2872_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2872_, 0, v___y_2869_);
lean_ctor_set(v___x_2872_, 1, v___x_2871_);
v___x_2873_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__4);
v___x_2874_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2874_, 0, v___x_2872_);
lean_ctor_set(v___x_2874_, 1, v___x_2873_);
v___x_2875_ = l_Lean_MessageData_ofName(v_mod_2811_);
v___x_2876_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2876_, 0, v___x_2874_);
lean_ctor_set(v___x_2876_, 1, v___x_2875_);
v___x_2877_ = l_Lean_Name_isAnonymous(v_hint_2813_);
if (v___x_2877_ == 0)
{
lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; 
v___x_2878_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__6);
v___x_2879_ = l_Lean_MessageData_ofName(v_hint_2813_);
v___x_2880_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2880_, 0, v___x_2878_);
lean_ctor_set(v___x_2880_, 1, v___x_2879_);
v___y_2864_ = v___x_2876_;
v___y_2865_ = v___x_2880_;
goto v___jp_2863_;
}
else
{
lean_object* v___x_2881_; 
lean_dec(v_hint_2813_);
v___x_2881_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__7);
v___y_2864_ = v___x_2876_;
v___y_2865_ = v___x_2881_;
goto v___jp_2863_;
}
}
}
else
{
lean_object* v___x_2899_; lean_object* v___x_2900_; 
lean_dec_ref_known(v_entry_2821_, 1);
lean_dec(v_hint_2813_);
lean_dec(v_mod_2811_);
v___x_2899_ = lean_box(0);
v___x_2900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2900_, 0, v___x_2899_);
return v___x_2900_;
}
v___jp_2827_:
{
lean_object* v___x_2829_; lean_object* v_toEnvExtension_2830_; lean_object* v_env_2831_; lean_object* v_messages_2832_; lean_object* v_scopes_2833_; lean_object* v_usedQuotCtxts_2834_; lean_object* v_nextMacroScope_2835_; lean_object* v_maxRecDepth_2836_; lean_object* v_ngen_2837_; lean_object* v_auxDeclNGen_2838_; lean_object* v_infoState_2839_; lean_object* v_traceState_2840_; lean_object* v_snapshotTasks_2841_; lean_object* v_prevLinterStates_2842_; lean_object* v_codeQualityEntryTasks_2843_; lean_object* v___x_2845_; uint8_t v_isShared_2846_; uint8_t v_isSharedCheck_2855_; 
v___x_2829_ = lean_st_ref_take(v___y_2828_);
v_toEnvExtension_2830_ = lean_ctor_get(v___x_2824_, 0);
v_env_2831_ = lean_ctor_get(v___x_2829_, 0);
v_messages_2832_ = lean_ctor_get(v___x_2829_, 1);
v_scopes_2833_ = lean_ctor_get(v___x_2829_, 2);
v_usedQuotCtxts_2834_ = lean_ctor_get(v___x_2829_, 3);
v_nextMacroScope_2835_ = lean_ctor_get(v___x_2829_, 4);
v_maxRecDepth_2836_ = lean_ctor_get(v___x_2829_, 5);
v_ngen_2837_ = lean_ctor_get(v___x_2829_, 6);
v_auxDeclNGen_2838_ = lean_ctor_get(v___x_2829_, 7);
v_infoState_2839_ = lean_ctor_get(v___x_2829_, 8);
v_traceState_2840_ = lean_ctor_get(v___x_2829_, 9);
v_snapshotTasks_2841_ = lean_ctor_get(v___x_2829_, 10);
v_prevLinterStates_2842_ = lean_ctor_get(v___x_2829_, 11);
v_codeQualityEntryTasks_2843_ = lean_ctor_get(v___x_2829_, 12);
v_isSharedCheck_2855_ = !lean_is_exclusive(v___x_2829_);
if (v_isSharedCheck_2855_ == 0)
{
v___x_2845_ = v___x_2829_;
v_isShared_2846_ = v_isSharedCheck_2855_;
goto v_resetjp_2844_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2843_);
lean_inc(v_prevLinterStates_2842_);
lean_inc(v_snapshotTasks_2841_);
lean_inc(v_traceState_2840_);
lean_inc(v_infoState_2839_);
lean_inc(v_auxDeclNGen_2838_);
lean_inc(v_ngen_2837_);
lean_inc(v_maxRecDepth_2836_);
lean_inc(v_nextMacroScope_2835_);
lean_inc(v_usedQuotCtxts_2834_);
lean_inc(v_scopes_2833_);
lean_inc(v_messages_2832_);
lean_inc(v_env_2831_);
lean_dec(v___x_2829_);
v___x_2845_ = lean_box(0);
v_isShared_2846_ = v_isSharedCheck_2855_;
goto v_resetjp_2844_;
}
v_resetjp_2844_:
{
lean_object* v_asyncMode_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2851_; 
v_asyncMode_2847_ = lean_ctor_get(v_toEnvExtension_2830_, 2);
v___x_2848_ = lean_box(0);
v___x_2849_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_2824_, v_env_2831_, v_entry_2821_, v_asyncMode_2847_, v___x_2826_);
if (v_isShared_2846_ == 0)
{
lean_ctor_set(v___x_2845_, 0, v___x_2849_);
v___x_2851_ = v___x_2845_;
goto v_reusejp_2850_;
}
else
{
lean_object* v_reuseFailAlloc_2854_; 
v_reuseFailAlloc_2854_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2854_, 0, v___x_2849_);
lean_ctor_set(v_reuseFailAlloc_2854_, 1, v_messages_2832_);
lean_ctor_set(v_reuseFailAlloc_2854_, 2, v_scopes_2833_);
lean_ctor_set(v_reuseFailAlloc_2854_, 3, v_usedQuotCtxts_2834_);
lean_ctor_set(v_reuseFailAlloc_2854_, 4, v_nextMacroScope_2835_);
lean_ctor_set(v_reuseFailAlloc_2854_, 5, v_maxRecDepth_2836_);
lean_ctor_set(v_reuseFailAlloc_2854_, 6, v_ngen_2837_);
lean_ctor_set(v_reuseFailAlloc_2854_, 7, v_auxDeclNGen_2838_);
lean_ctor_set(v_reuseFailAlloc_2854_, 8, v_infoState_2839_);
lean_ctor_set(v_reuseFailAlloc_2854_, 9, v_traceState_2840_);
lean_ctor_set(v_reuseFailAlloc_2854_, 10, v_snapshotTasks_2841_);
lean_ctor_set(v_reuseFailAlloc_2854_, 11, v_prevLinterStates_2842_);
lean_ctor_set(v_reuseFailAlloc_2854_, 12, v_codeQualityEntryTasks_2843_);
v___x_2851_ = v_reuseFailAlloc_2854_;
goto v_reusejp_2850_;
}
v_reusejp_2850_:
{
lean_object* v___x_2852_; lean_object* v___x_2853_; 
v___x_2852_ = lean_st_ref_put(v___y_2828_, v___x_2851_);
v___x_2853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2853_, 0, v___x_2848_);
return v___x_2853_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___boxed(lean_object* v_mod_2901_, lean_object* v_isMeta_2902_, lean_object* v_hint_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_){
_start:
{
uint8_t v_isMeta_boxed_2907_; lean_object* v_res_2908_; 
v_isMeta_boxed_2907_ = lean_unbox(v_isMeta_2902_);
v_res_2908_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42(v_mod_2901_, v_isMeta_boxed_2907_, v_hint_2903_, v___y_2904_, v___y_2905_);
lean_dec(v___y_2905_);
lean_dec_ref(v___y_2904_);
return v_res_2908_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43(lean_object* v___x_2909_, lean_object* v_declName_2910_, lean_object* v_as_2911_, size_t v_sz_2912_, size_t v_i_2913_, lean_object* v_b_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_){
_start:
{
uint8_t v___x_2918_; 
v___x_2918_ = lean_usize_dec_lt(v_i_2913_, v_sz_2912_);
if (v___x_2918_ == 0)
{
lean_object* v___x_2919_; 
lean_dec(v_declName_2910_);
v___x_2919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2919_, 0, v_b_2914_);
return v___x_2919_;
}
else
{
lean_object* v___x_2920_; lean_object* v_modules_2921_; lean_object* v___x_2922_; lean_object* v_a_2923_; lean_object* v___x_2924_; lean_object* v_toImport_2925_; lean_object* v_module_2926_; lean_object* v___x_2927_; uint8_t v___x_2928_; lean_object* v___x_2929_; 
v___x_2920_ = l_Lean_Environment_header(v___x_2909_);
v_modules_2921_ = lean_ctor_get(v___x_2920_, 3);
lean_inc_ref(v_modules_2921_);
lean_dec_ref(v___x_2920_);
v___x_2922_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_2923_ = lean_array_uget_borrowed(v_as_2911_, v_i_2913_);
v___x_2924_ = lean_array_get(v___x_2922_, v_modules_2921_, v_a_2923_);
lean_dec_ref(v_modules_2921_);
v_toImport_2925_ = lean_ctor_get(v___x_2924_, 0);
lean_inc_ref(v_toImport_2925_);
lean_dec(v___x_2924_);
v_module_2926_ = lean_ctor_get(v_toImport_2925_, 0);
lean_inc(v_module_2926_);
lean_dec_ref(v_toImport_2925_);
v___x_2927_ = lean_box(0);
v___x_2928_ = 0;
lean_inc(v_declName_2910_);
v___x_2929_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42(v_module_2926_, v___x_2928_, v_declName_2910_, v___y_2915_, v___y_2916_);
if (lean_obj_tag(v___x_2929_) == 0)
{
size_t v___x_2930_; size_t v___x_2931_; 
lean_dec_ref_known(v___x_2929_, 1);
v___x_2930_ = ((size_t)1ULL);
v___x_2931_ = lean_usize_add(v_i_2913_, v___x_2930_);
v_i_2913_ = v___x_2931_;
v_b_2914_ = v___x_2927_;
goto _start;
}
else
{
lean_dec(v_declName_2910_);
return v___x_2929_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___boxed(lean_object* v___x_2933_, lean_object* v_declName_2934_, lean_object* v_as_2935_, lean_object* v_sz_2936_, lean_object* v_i_2937_, lean_object* v_b_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_){
_start:
{
size_t v_sz_boxed_2942_; size_t v_i_boxed_2943_; lean_object* v_res_2944_; 
v_sz_boxed_2942_ = lean_unbox_usize(v_sz_2936_);
lean_dec(v_sz_2936_);
v_i_boxed_2943_ = lean_unbox_usize(v_i_2937_);
lean_dec(v_i_2937_);
v_res_2944_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43(v___x_2933_, v_declName_2934_, v_as_2935_, v_sz_boxed_2942_, v_i_boxed_2943_, v_b_2938_, v___y_2939_, v___y_2940_);
lean_dec(v___y_2940_);
lean_dec_ref(v___y_2939_);
lean_dec_ref(v_as_2935_);
lean_dec_ref(v___x_2933_);
return v_res_2944_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33___closed__0(void){
_start:
{
lean_object* v___x_2945_; 
v___x_2945_ = l_Std_HashMap_instInhabited___redArg();
return v___x_2945_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33(lean_object* v_declName_2948_, uint8_t v_isMeta_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_){
_start:
{
lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v_env_2958_; lean_object* v___y_2960_; lean_object* v___x_2973_; 
v___x_2953_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33___closed__0);
v___x_2954_ = lean_st_ref_get(v___y_2951_);
v_env_2958_ = lean_ctor_get(v___x_2954_, 0);
lean_inc_ref(v_env_2958_);
lean_dec(v___x_2954_);
v___x_2973_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2958_, v_declName_2948_);
if (lean_obj_tag(v___x_2973_) == 0)
{
lean_dec_ref(v_env_2958_);
lean_dec(v_declName_2948_);
goto v___jp_2955_;
}
else
{
lean_object* v_val_2974_; lean_object* v___x_2975_; lean_object* v_modules_2976_; lean_object* v___x_2977_; uint8_t v___x_2978_; 
v_val_2974_ = lean_ctor_get(v___x_2973_, 0);
lean_inc(v_val_2974_);
lean_dec_ref_known(v___x_2973_, 1);
v___x_2975_ = l_Lean_Environment_header(v_env_2958_);
v_modules_2976_ = lean_ctor_get(v___x_2975_, 3);
lean_inc_ref(v_modules_2976_);
lean_dec_ref(v___x_2975_);
v___x_2977_ = lean_array_get_size(v_modules_2976_);
v___x_2978_ = lean_nat_dec_lt(v_val_2974_, v___x_2977_);
if (v___x_2978_ == 0)
{
lean_dec_ref(v_modules_2976_);
lean_dec(v_val_2974_);
lean_dec_ref(v_env_2958_);
lean_dec(v_declName_2948_);
goto v___jp_2955_;
}
else
{
lean_object* v___x_2979_; lean_object* v___x_2980_; uint8_t v___y_2982_; 
v___x_2979_ = lean_array_fget(v_modules_2976_, v_val_2974_);
lean_dec(v_val_2974_);
lean_dec_ref(v_modules_2976_);
v___x_2980_ = lean_st_ref_get(v___y_2951_);
if (v_isMeta_2949_ == 0)
{
lean_dec(v___x_2980_);
v___y_2982_ = v_isMeta_2949_;
goto v___jp_2981_;
}
else
{
lean_object* v_env_2993_; uint8_t v___x_2994_; 
v_env_2993_ = lean_ctor_get(v___x_2980_, 0);
lean_inc_ref(v_env_2993_);
lean_dec(v___x_2980_);
lean_inc(v_declName_2948_);
v___x_2994_ = l_Lean_isMarkedMeta(v_env_2993_, v_declName_2948_);
if (v___x_2994_ == 0)
{
v___y_2982_ = v_isMeta_2949_;
goto v___jp_2981_;
}
else
{
uint8_t v___x_2995_; 
v___x_2995_ = 0;
v___y_2982_ = v___x_2995_;
goto v___jp_2981_;
}
}
v___jp_2981_:
{
lean_object* v_toImport_2983_; lean_object* v_module_2984_; lean_object* v___x_2985_; 
v_toImport_2983_ = lean_ctor_get(v___x_2979_, 0);
lean_inc_ref(v_toImport_2983_);
lean_dec(v___x_2979_);
v_module_2984_ = lean_ctor_get(v_toImport_2983_, 0);
lean_inc(v_module_2984_);
lean_dec_ref(v_toImport_2983_);
lean_inc(v_declName_2948_);
v___x_2985_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42(v_module_2984_, v___y_2982_, v_declName_2948_, v___y_2950_, v___y_2951_);
if (lean_obj_tag(v___x_2985_) == 0)
{
lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; 
lean_dec_ref_known(v___x_2985_, 1);
v___x_2986_ = l_Lean_indirectModUseExt;
v___x_2987_ = lean_box(1);
v___x_2988_ = lean_box(0);
lean_inc_ref(v_env_2958_);
v___x_2989_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2953_, v___x_2986_, v_env_2958_, v___x_2987_, v___x_2988_);
v___x_2990_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44___redArg(v___x_2989_, v_declName_2948_);
lean_dec(v___x_2989_);
if (lean_obj_tag(v___x_2990_) == 0)
{
lean_object* v___x_2991_; 
v___x_2991_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33___closed__1));
v___y_2960_ = v___x_2991_;
goto v___jp_2959_;
}
else
{
lean_object* v_val_2992_; 
v_val_2992_ = lean_ctor_get(v___x_2990_, 0);
lean_inc(v_val_2992_);
lean_dec_ref_known(v___x_2990_, 1);
v___y_2960_ = v_val_2992_;
goto v___jp_2959_;
}
}
else
{
lean_dec_ref(v_env_2958_);
lean_dec(v_declName_2948_);
return v___x_2985_;
}
}
}
}
v___jp_2955_:
{
lean_object* v___x_2956_; lean_object* v___x_2957_; 
v___x_2956_ = lean_box(0);
v___x_2957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2957_, 0, v___x_2956_);
return v___x_2957_;
}
v___jp_2959_:
{
lean_object* v___x_2961_; size_t v_sz_2962_; size_t v___x_2963_; lean_object* v___x_2964_; 
v___x_2961_ = lean_box(0);
v_sz_2962_ = lean_array_size(v___y_2960_);
v___x_2963_ = ((size_t)0ULL);
v___x_2964_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43(v_env_2958_, v_declName_2948_, v___y_2960_, v_sz_2962_, v___x_2963_, v___x_2961_, v___y_2950_, v___y_2951_);
lean_dec_ref(v___y_2960_);
lean_dec_ref(v_env_2958_);
if (lean_obj_tag(v___x_2964_) == 0)
{
lean_object* v___x_2966_; uint8_t v_isShared_2967_; uint8_t v_isSharedCheck_2971_; 
v_isSharedCheck_2971_ = !lean_is_exclusive(v___x_2964_);
if (v_isSharedCheck_2971_ == 0)
{
lean_object* v_unused_2972_; 
v_unused_2972_ = lean_ctor_get(v___x_2964_, 0);
lean_dec(v_unused_2972_);
v___x_2966_ = v___x_2964_;
v_isShared_2967_ = v_isSharedCheck_2971_;
goto v_resetjp_2965_;
}
else
{
lean_dec(v___x_2964_);
v___x_2966_ = lean_box(0);
v_isShared_2967_ = v_isSharedCheck_2971_;
goto v_resetjp_2965_;
}
v_resetjp_2965_:
{
lean_object* v___x_2969_; 
if (v_isShared_2967_ == 0)
{
lean_ctor_set(v___x_2966_, 0, v___x_2961_);
v___x_2969_ = v___x_2966_;
goto v_reusejp_2968_;
}
else
{
lean_object* v_reuseFailAlloc_2970_; 
v_reuseFailAlloc_2970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2970_, 0, v___x_2961_);
v___x_2969_ = v_reuseFailAlloc_2970_;
goto v_reusejp_2968_;
}
v_reusejp_2968_:
{
return v___x_2969_;
}
}
}
else
{
return v___x_2964_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33___boxed(lean_object* v_declName_2996_, lean_object* v_isMeta_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_){
_start:
{
uint8_t v_isMeta_boxed_3001_; lean_object* v_res_3002_; 
v_isMeta_boxed_3001_ = lean_unbox(v_isMeta_2997_);
v_res_3002_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33(v_declName_2996_, v_isMeta_boxed_3001_, v___y_2998_, v___y_2999_);
lean_dec(v___y_2999_);
lean_dec_ref(v___y_2998_);
return v_res_3002_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37___redArg(lean_object* v_x_3003_, lean_object* v___y_3004_){
_start:
{
if (lean_obj_tag(v_x_3003_) == 0)
{
lean_object* v_a_3005_; lean_object* v___x_3006_; 
v_a_3005_ = lean_ctor_get(v_x_3003_, 0);
lean_inc(v_a_3005_);
v___x_3006_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3006_, 0, v_a_3005_);
lean_ctor_set(v___x_3006_, 1, v___y_3004_);
return v___x_3006_;
}
else
{
lean_object* v_a_3007_; lean_object* v___x_3008_; 
v_a_3007_ = lean_ctor_get(v_x_3003_, 0);
lean_inc(v_a_3007_);
v___x_3008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3008_, 0, v_a_3007_);
lean_ctor_set(v___x_3008_, 1, v___y_3004_);
return v___x_3008_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37___redArg___boxed(lean_object* v_x_3009_, lean_object* v___y_3010_){
_start:
{
lean_object* v_res_3011_; 
v_res_3011_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37___redArg(v_x_3009_, v___y_3010_);
lean_dec_ref(v_x_3009_);
return v_res_3011_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__1(lean_object* v_env_3012_, lean_object* v_stx_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_){
_start:
{
lean_object* v___x_3016_; 
v___x_3016_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_3012_, v_stx_3013_, v___y_3014_, v___y_3015_);
if (lean_obj_tag(v___x_3016_) == 0)
{
lean_object* v_a_3017_; 
v_a_3017_ = lean_ctor_get(v___x_3016_, 0);
lean_inc(v_a_3017_);
if (lean_obj_tag(v_a_3017_) == 0)
{
lean_object* v_a_3018_; lean_object* v___x_3020_; uint8_t v_isShared_3021_; uint8_t v_isSharedCheck_3026_; 
v_a_3018_ = lean_ctor_get(v___x_3016_, 1);
v_isSharedCheck_3026_ = !lean_is_exclusive(v___x_3016_);
if (v_isSharedCheck_3026_ == 0)
{
lean_object* v_unused_3027_; 
v_unused_3027_ = lean_ctor_get(v___x_3016_, 0);
lean_dec(v_unused_3027_);
v___x_3020_ = v___x_3016_;
v_isShared_3021_ = v_isSharedCheck_3026_;
goto v_resetjp_3019_;
}
else
{
lean_inc(v_a_3018_);
lean_dec(v___x_3016_);
v___x_3020_ = lean_box(0);
v_isShared_3021_ = v_isSharedCheck_3026_;
goto v_resetjp_3019_;
}
v_resetjp_3019_:
{
lean_object* v___x_3022_; lean_object* v___x_3024_; 
v___x_3022_ = lean_box(0);
if (v_isShared_3021_ == 0)
{
lean_ctor_set(v___x_3020_, 0, v___x_3022_);
v___x_3024_ = v___x_3020_;
goto v_reusejp_3023_;
}
else
{
lean_object* v_reuseFailAlloc_3025_; 
v_reuseFailAlloc_3025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3025_, 0, v___x_3022_);
lean_ctor_set(v_reuseFailAlloc_3025_, 1, v_a_3018_);
v___x_3024_ = v_reuseFailAlloc_3025_;
goto v_reusejp_3023_;
}
v_reusejp_3023_:
{
return v___x_3024_;
}
}
}
else
{
lean_object* v_val_3028_; lean_object* v___x_3030_; uint8_t v_isShared_3031_; uint8_t v_isSharedCheck_3056_; 
v_val_3028_ = lean_ctor_get(v_a_3017_, 0);
v_isSharedCheck_3056_ = !lean_is_exclusive(v_a_3017_);
if (v_isSharedCheck_3056_ == 0)
{
v___x_3030_ = v_a_3017_;
v_isShared_3031_ = v_isSharedCheck_3056_;
goto v_resetjp_3029_;
}
else
{
lean_inc(v_val_3028_);
lean_dec(v_a_3017_);
v___x_3030_ = lean_box(0);
v_isShared_3031_ = v_isSharedCheck_3056_;
goto v_resetjp_3029_;
}
v_resetjp_3029_:
{
lean_object* v_snd_3032_; 
v_snd_3032_ = lean_ctor_get(v_val_3028_, 1);
lean_inc(v_snd_3032_);
lean_dec(v_val_3028_);
if (lean_obj_tag(v_snd_3032_) == 0)
{
lean_object* v_a_3033_; lean_object* v_a_3034_; lean_object* v___x_3036_; uint8_t v_isShared_3037_; uint8_t v_isSharedCheck_3042_; 
lean_del_object(v___x_3030_);
v_a_3033_ = lean_ctor_get(v___x_3016_, 1);
lean_inc(v_a_3033_);
lean_dec_ref_known(v___x_3016_, 2);
v_a_3034_ = lean_ctor_get(v_snd_3032_, 0);
v_isSharedCheck_3042_ = !lean_is_exclusive(v_snd_3032_);
if (v_isSharedCheck_3042_ == 0)
{
v___x_3036_ = v_snd_3032_;
v_isShared_3037_ = v_isSharedCheck_3042_;
goto v_resetjp_3035_;
}
else
{
lean_inc(v_a_3034_);
lean_dec(v_snd_3032_);
v___x_3036_ = lean_box(0);
v_isShared_3037_ = v_isSharedCheck_3042_;
goto v_resetjp_3035_;
}
v_resetjp_3035_:
{
lean_object* v___x_3039_; 
if (v_isShared_3037_ == 0)
{
v___x_3039_ = v___x_3036_;
goto v_reusejp_3038_;
}
else
{
lean_object* v_reuseFailAlloc_3041_; 
v_reuseFailAlloc_3041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3041_, 0, v_a_3034_);
v___x_3039_ = v_reuseFailAlloc_3041_;
goto v_reusejp_3038_;
}
v_reusejp_3038_:
{
lean_object* v___x_3040_; 
v___x_3040_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37___redArg(v___x_3039_, v_a_3033_);
lean_dec_ref(v___x_3039_);
return v___x_3040_;
}
}
}
else
{
lean_object* v_a_3043_; lean_object* v_a_3044_; lean_object* v___x_3046_; uint8_t v_isShared_3047_; uint8_t v_isSharedCheck_3055_; 
v_a_3043_ = lean_ctor_get(v___x_3016_, 1);
lean_inc(v_a_3043_);
lean_dec_ref_known(v___x_3016_, 2);
v_a_3044_ = lean_ctor_get(v_snd_3032_, 0);
v_isSharedCheck_3055_ = !lean_is_exclusive(v_snd_3032_);
if (v_isSharedCheck_3055_ == 0)
{
v___x_3046_ = v_snd_3032_;
v_isShared_3047_ = v_isSharedCheck_3055_;
goto v_resetjp_3045_;
}
else
{
lean_inc(v_a_3044_);
lean_dec(v_snd_3032_);
v___x_3046_ = lean_box(0);
v_isShared_3047_ = v_isSharedCheck_3055_;
goto v_resetjp_3045_;
}
v_resetjp_3045_:
{
lean_object* v___x_3049_; 
if (v_isShared_3031_ == 0)
{
lean_ctor_set(v___x_3030_, 0, v_a_3044_);
v___x_3049_ = v___x_3030_;
goto v_reusejp_3048_;
}
else
{
lean_object* v_reuseFailAlloc_3054_; 
v_reuseFailAlloc_3054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3054_, 0, v_a_3044_);
v___x_3049_ = v_reuseFailAlloc_3054_;
goto v_reusejp_3048_;
}
v_reusejp_3048_:
{
lean_object* v___x_3051_; 
if (v_isShared_3047_ == 0)
{
lean_ctor_set(v___x_3046_, 0, v___x_3049_);
v___x_3051_ = v___x_3046_;
goto v_reusejp_3050_;
}
else
{
lean_object* v_reuseFailAlloc_3053_; 
v_reuseFailAlloc_3053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3053_, 0, v___x_3049_);
v___x_3051_ = v_reuseFailAlloc_3053_;
goto v_reusejp_3050_;
}
v_reusejp_3050_:
{
lean_object* v___x_3052_; 
v___x_3052_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37___redArg(v___x_3051_, v_a_3043_);
lean_dec_ref(v___x_3051_);
return v___x_3052_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3057_; lean_object* v_a_3058_; lean_object* v___x_3060_; uint8_t v_isShared_3061_; uint8_t v_isSharedCheck_3065_; 
v_a_3057_ = lean_ctor_get(v___x_3016_, 0);
v_a_3058_ = lean_ctor_get(v___x_3016_, 1);
v_isSharedCheck_3065_ = !lean_is_exclusive(v___x_3016_);
if (v_isSharedCheck_3065_ == 0)
{
v___x_3060_ = v___x_3016_;
v_isShared_3061_ = v_isSharedCheck_3065_;
goto v_resetjp_3059_;
}
else
{
lean_inc(v_a_3058_);
lean_inc(v_a_3057_);
lean_dec(v___x_3016_);
v___x_3060_ = lean_box(0);
v_isShared_3061_ = v_isSharedCheck_3065_;
goto v_resetjp_3059_;
}
v_resetjp_3059_:
{
lean_object* v___x_3063_; 
if (v_isShared_3061_ == 0)
{
v___x_3063_ = v___x_3060_;
goto v_reusejp_3062_;
}
else
{
lean_object* v_reuseFailAlloc_3064_; 
v_reuseFailAlloc_3064_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3064_, 0, v_a_3057_);
lean_ctor_set(v_reuseFailAlloc_3064_, 1, v_a_3058_);
v___x_3063_ = v_reuseFailAlloc_3064_;
goto v_reusejp_3062_;
}
v_reusejp_3062_:
{
return v___x_3063_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__1___boxed(lean_object* v_env_3066_, lean_object* v_stx_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_){
_start:
{
lean_object* v_res_3070_; 
v_res_3070_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__1(v_env_3066_, v_stx_3067_, v___y_3068_, v___y_3069_);
lean_dec_ref(v___y_3068_);
return v_res_3070_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__39(lean_object* v_as_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_){
_start:
{
if (lean_obj_tag(v_as_3071_) == 0)
{
lean_object* v___x_3075_; lean_object* v___x_3076_; 
v___x_3075_ = lean_box(0);
v___x_3076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3076_, 0, v___x_3075_);
return v___x_3076_;
}
else
{
lean_object* v_head_3077_; lean_object* v_tail_3078_; lean_object* v_fst_3079_; lean_object* v_snd_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v_scopes_3085_; lean_object* v___x_3086_; lean_object* v_opts_3087_; uint8_t v_hasTrace_3088_; 
v_head_3077_ = lean_ctor_get(v_as_3071_, 0);
lean_inc(v_head_3077_);
v_tail_3078_ = lean_ctor_get(v_as_3071_, 1);
lean_inc(v_tail_3078_);
lean_dec_ref_known(v_as_3071_, 2);
v_fst_3079_ = lean_ctor_get(v_head_3077_, 0);
lean_inc(v_fst_3079_);
v_snd_3080_ = lean_ctor_get(v_head_3077_, 1);
lean_inc(v_snd_3080_);
lean_dec(v_head_3077_);
v___x_3081_ = l_Lean_inheritedTraceOptions;
v___x_3082_ = lean_st_ref_get(v___x_3081_);
v___x_3083_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3084_ = lean_st_ref_get(v___y_3073_);
v_scopes_3085_ = lean_ctor_get(v___x_3084_, 2);
lean_inc(v_scopes_3085_);
lean_dec(v___x_3084_);
v___x_3086_ = l_List_head_x21___redArg(v___x_3083_, v_scopes_3085_);
lean_dec(v_scopes_3085_);
v_opts_3087_ = lean_ctor_get(v___x_3086_, 1);
lean_inc_ref(v_opts_3087_);
lean_dec(v___x_3086_);
v_hasTrace_3088_ = lean_ctor_get_uint8(v_opts_3087_, sizeof(void*)*1);
if (v_hasTrace_3088_ == 0)
{
lean_dec_ref(v_opts_3087_);
lean_dec(v___x_3082_);
lean_dec(v_snd_3080_);
lean_dec(v_fst_3079_);
v_as_3071_ = v_tail_3078_;
goto _start;
}
else
{
lean_object* v___x_3090_; lean_object* v___x_3091_; uint8_t v___x_3092_; 
v___x_3090_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__8));
lean_inc(v_fst_3079_);
v___x_3091_ = l_Lean_Name_append(v___x_3090_, v_fst_3079_);
v___x_3092_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_3082_, v_opts_3087_, v___x_3091_);
lean_dec(v___x_3091_);
lean_dec_ref(v_opts_3087_);
lean_dec(v___x_3082_);
if (v___x_3092_ == 0)
{
lean_dec(v_snd_3080_);
lean_dec(v_fst_3079_);
v_as_3071_ = v_tail_3078_;
goto _start;
}
else
{
lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; 
v___x_3094_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3094_, 0, v_snd_3080_);
v___x_3095_ = l_Lean_MessageData_ofFormat(v___x_3094_);
v___x_3096_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36(v_fst_3079_, v___x_3095_, v___y_3072_, v___y_3073_);
if (lean_obj_tag(v___x_3096_) == 0)
{
lean_dec_ref_known(v___x_3096_, 1);
v_as_3071_ = v_tail_3078_;
goto _start;
}
else
{
lean_dec(v_tail_3078_);
return v___x_3096_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__39___boxed(lean_object* v_as_3098_, lean_object* v___y_3099_, lean_object* v___y_3100_, lean_object* v___y_3101_){
_start:
{
lean_object* v_res_3102_; 
v_res_3102_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__39(v_as_3098_, v___y_3099_, v___y_3100_);
lean_dec(v___y_3100_);
lean_dec_ref(v___y_3099_);
return v_res_3102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__2(lean_object* v_currNamespace_3103_, lean_object* v___y_3104_, lean_object* v___y_3105_){
_start:
{
lean_object* v___x_3106_; 
v___x_3106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3106_, 0, v_currNamespace_3103_);
lean_ctor_set(v___x_3106_, 1, v___y_3105_);
return v___x_3106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__2___boxed(lean_object* v_currNamespace_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_){
_start:
{
lean_object* v_res_3110_; 
v_res_3110_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__2(v_currNamespace_3107_, v___y_3108_, v___y_3109_);
lean_dec_ref(v___y_3108_);
return v_res_3110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__4(lean_object* v_env_3111_, lean_object* v_opts_3112_, lean_object* v_currNamespace_3113_, lean_object* v_openDecls_3114_, lean_object* v_n_3115_, lean_object* v___y_3116_, lean_object* v___y_3117_){
_start:
{
lean_object* v___x_3118_; lean_object* v___x_3119_; 
v___x_3118_ = l_Lean_ResolveName_resolveGlobalName(v_env_3111_, v_opts_3112_, v_currNamespace_3113_, v_openDecls_3114_, v_n_3115_);
v___x_3119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3119_, 0, v___x_3118_);
lean_ctor_set(v___x_3119_, 1, v___y_3117_);
return v___x_3119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__4___boxed(lean_object* v_env_3120_, lean_object* v_opts_3121_, lean_object* v_currNamespace_3122_, lean_object* v_openDecls_3123_, lean_object* v_n_3124_, lean_object* v___y_3125_, lean_object* v___y_3126_){
_start:
{
lean_object* v_res_3127_; 
v_res_3127_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__4(v_env_3120_, v_opts_3121_, v_currNamespace_3122_, v_openDecls_3123_, v_n_3124_, v___y_3125_, v___y_3126_);
lean_dec_ref(v___y_3125_);
lean_dec_ref(v_opts_3121_);
return v_res_3127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__0(lean_object* v_env_3128_, lean_object* v_declName_3129_, lean_object* v___y_3130_, lean_object* v___y_3131_){
_start:
{
uint8_t v___x_3132_; lean_object* v_env_3133_; lean_object* v___x_3134_; uint8_t v___x_3135_; uint8_t v___x_3136_; 
v___x_3132_ = 0;
v_env_3133_ = l_Lean_Environment_setExporting(v_env_3128_, v___x_3132_);
lean_inc(v_declName_3129_);
v___x_3134_ = l_Lean_mkPrivateName(v_env_3133_, v_declName_3129_);
v___x_3135_ = 1;
lean_inc_ref(v_env_3133_);
v___x_3136_ = l_Lean_Environment_contains(v_env_3133_, v___x_3134_, v___x_3135_);
if (v___x_3136_ == 0)
{
lean_object* v___x_3137_; uint8_t v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; 
v___x_3137_ = l_Lean_privateToUserName(v_declName_3129_);
v___x_3138_ = l_Lean_Environment_contains(v_env_3133_, v___x_3137_, v___x_3135_);
v___x_3139_ = lean_box(v___x_3138_);
v___x_3140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3140_, 0, v___x_3139_);
lean_ctor_set(v___x_3140_, 1, v___y_3131_);
return v___x_3140_;
}
else
{
lean_object* v___x_3141_; lean_object* v___x_3142_; 
lean_dec_ref(v_env_3133_);
lean_dec(v_declName_3129_);
v___x_3141_ = lean_box(v___x_3136_);
v___x_3142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3142_, 0, v___x_3141_);
lean_ctor_set(v___x_3142_, 1, v___y_3131_);
return v___x_3142_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__0___boxed(lean_object* v_env_3143_, lean_object* v_declName_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_){
_start:
{
lean_object* v_res_3147_; 
v_res_3147_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__0(v_env_3143_, v_declName_3144_, v___y_3145_, v___y_3146_);
lean_dec_ref(v___y_3145_);
return v_res_3147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__3(lean_object* v_env_3148_, lean_object* v_currNamespace_3149_, lean_object* v_openDecls_3150_, lean_object* v_n_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_){
_start:
{
lean_object* v___x_3154_; lean_object* v___x_3155_; 
v___x_3154_ = l_Lean_ResolveName_resolveNamespace(v_env_3148_, v_currNamespace_3149_, v_openDecls_3150_, v_n_3151_);
v___x_3155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3155_, 0, v___x_3154_);
lean_ctor_set(v___x_3155_, 1, v___y_3153_);
return v___x_3155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__3___boxed(lean_object* v_env_3156_, lean_object* v_currNamespace_3157_, lean_object* v_openDecls_3158_, lean_object* v_n_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_){
_start:
{
lean_object* v_res_3162_; 
v_res_3162_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__3(v_env_3156_, v_currNamespace_3157_, v_openDecls_3158_, v_n_3159_, v___y_3160_, v___y_3161_);
lean_dec_ref(v___y_3160_);
return v_res_3162_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38___redArg(lean_object* v_as_x27_3163_, lean_object* v_b_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_){
_start:
{
if (lean_obj_tag(v_as_x27_3163_) == 0)
{
lean_object* v___x_3168_; 
v___x_3168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3168_, 0, v_b_3164_);
return v___x_3168_;
}
else
{
lean_object* v_head_3169_; lean_object* v_tail_3170_; lean_object* v___x_3171_; uint8_t v___x_3172_; lean_object* v___x_3173_; 
v_head_3169_ = lean_ctor_get(v_as_x27_3163_, 0);
v_tail_3170_ = lean_ctor_get(v_as_x27_3163_, 1);
v___x_3171_ = lean_box(0);
v___x_3172_ = 1;
lean_inc(v_head_3169_);
v___x_3173_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33(v_head_3169_, v___x_3172_, v___y_3165_, v___y_3166_);
if (lean_obj_tag(v___x_3173_) == 0)
{
lean_dec_ref_known(v___x_3173_, 1);
v_as_x27_3163_ = v_tail_3170_;
v_b_3164_ = v___x_3171_;
goto _start;
}
else
{
return v___x_3173_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38___redArg___boxed(lean_object* v_as_x27_3175_, lean_object* v_b_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_, lean_object* v___y_3179_){
_start:
{
lean_object* v_res_3180_; 
v_res_3180_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38___redArg(v_as_x27_3175_, v_b_3176_, v___y_3177_, v___y_3178_);
lean_dec(v___y_3178_);
lean_dec_ref(v___y_3177_);
lean_dec(v_as_x27_3175_);
return v_res_3180_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__3(void){
_start:
{
lean_object* v___x_3186_; lean_object* v___x_3187_; 
v___x_3186_ = l_Lean_maxRecDepthErrorMessage;
v___x_3187_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3187_, 0, v___x_3186_);
return v___x_3187_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__4(void){
_start:
{
lean_object* v___x_3188_; lean_object* v___x_3189_; 
v___x_3188_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__3);
v___x_3189_ = l_Lean_MessageData_ofFormat(v___x_3188_);
return v___x_3189_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__5(void){
_start:
{
lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; 
v___x_3190_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__4);
v___x_3191_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__2));
v___x_3192_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3192_, 0, v___x_3191_);
lean_ctor_set(v___x_3192_, 1, v___x_3190_);
return v___x_3192_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg(lean_object* v_ref_3193_){
_start:
{
lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; 
v___x_3195_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__5);
v___x_3196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3196_, 0, v_ref_3193_);
lean_ctor_set(v___x_3196_, 1, v___x_3195_);
v___x_3197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3197_, 0, v___x_3196_);
return v___x_3197_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___boxed(lean_object* v_ref_3198_, lean_object* v___y_3199_){
_start:
{
lean_object* v_res_3200_; 
v_res_3200_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg(v_ref_3198_);
return v_res_3200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg(lean_object* v_x_3202_, lean_object* v___y_3203_, lean_object* v___y_3204_){
_start:
{
lean_object* v___x_3206_; lean_object* v_env_3207_; lean_object* v___f_3208_; lean_object* v___f_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v_scopes_3212_; lean_object* v___x_3213_; lean_object* v_opts_3214_; lean_object* v___x_3215_; 
v___x_3206_ = lean_st_ref_get(v___y_3204_);
v_env_3207_ = lean_ctor_get(v___x_3206_, 0);
lean_inc_ref_n(v_env_3207_, 3);
lean_dec(v___x_3206_);
v___f_3208_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_3208_, 0, v_env_3207_);
v___f_3209_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_3209_, 0, v_env_3207_);
v___x_3210_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3211_ = lean_st_ref_get(v___y_3204_);
v_scopes_3212_ = lean_ctor_get(v___x_3211_, 2);
lean_inc(v_scopes_3212_);
lean_dec(v___x_3211_);
v___x_3213_ = l_List_head_x21___redArg(v___x_3210_, v_scopes_3212_);
lean_dec(v_scopes_3212_);
v_opts_3214_ = lean_ctor_get(v___x_3213_, 1);
lean_inc_ref(v_opts_3214_);
lean_dec(v___x_3213_);
v___x_3215_ = l_Lean_Elab_Command_getScope___redArg(v___y_3204_);
if (lean_obj_tag(v___x_3215_) == 0)
{
lean_object* v_a_3216_; lean_object* v_currNamespace_3217_; lean_object* v___f_3218_; lean_object* v___x_3219_; 
v_a_3216_ = lean_ctor_get(v___x_3215_, 0);
lean_inc(v_a_3216_);
lean_dec_ref_known(v___x_3215_, 1);
v_currNamespace_3217_ = lean_ctor_get(v_a_3216_, 2);
lean_inc_n(v_currNamespace_3217_, 2);
lean_dec(v_a_3216_);
v___f_3218_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3218_, 0, v_currNamespace_3217_);
v___x_3219_ = l_Lean_Elab_Command_getScope___redArg(v___y_3204_);
if (lean_obj_tag(v___x_3219_) == 0)
{
lean_object* v_a_3220_; lean_object* v_openDecls_3221_; lean_object* v___f_3222_; lean_object* v___f_3223_; lean_object* v_methods_3224_; lean_object* v___x_3225_; 
v_a_3220_ = lean_ctor_get(v___x_3219_, 0);
lean_inc(v_a_3220_);
lean_dec_ref_known(v___x_3219_, 1);
v_openDecls_3221_ = lean_ctor_get(v_a_3220_, 3);
lean_inc_n(v_openDecls_3221_, 2);
lean_dec(v_a_3220_);
lean_inc(v_currNamespace_3217_);
lean_inc_ref(v_env_3207_);
v___f_3222_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__3___boxed), 6, 3);
lean_closure_set(v___f_3222_, 0, v_env_3207_);
lean_closure_set(v___f_3222_, 1, v_currNamespace_3217_);
lean_closure_set(v___f_3222_, 2, v_openDecls_3221_);
v___f_3223_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__4___boxed), 7, 4);
lean_closure_set(v___f_3223_, 0, v_env_3207_);
lean_closure_set(v___f_3223_, 1, v_opts_3214_);
lean_closure_set(v___f_3223_, 2, v_currNamespace_3217_);
lean_closure_set(v___f_3223_, 3, v_openDecls_3221_);
v_methods_3224_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_methods_3224_, 0, v___f_3209_);
lean_ctor_set(v_methods_3224_, 1, v___f_3218_);
lean_ctor_set(v_methods_3224_, 2, v___f_3208_);
lean_ctor_set(v_methods_3224_, 3, v___f_3222_);
lean_ctor_set(v_methods_3224_, 4, v___f_3223_);
v___x_3225_ = l_Lean_Elab_Command_getRef___redArg(v___y_3203_);
if (lean_obj_tag(v___x_3225_) == 0)
{
lean_object* v_a_3226_; lean_object* v___x_3227_; 
v_a_3226_ = lean_ctor_get(v___x_3225_, 0);
lean_inc(v_a_3226_);
lean_dec_ref_known(v___x_3225_, 1);
v___x_3227_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_3203_);
if (lean_obj_tag(v___x_3227_) == 0)
{
lean_object* v_a_3228_; lean_object* v_currRecDepth_3229_; lean_object* v_quotContext_x3f_3230_; lean_object* v_a_3232_; 
v_a_3228_ = lean_ctor_get(v___x_3227_, 0);
lean_inc(v_a_3228_);
lean_dec_ref_known(v___x_3227_, 1);
v_currRecDepth_3229_ = lean_ctor_get(v___y_3203_, 2);
v_quotContext_x3f_3230_ = lean_ctor_get(v___y_3203_, 5);
if (lean_obj_tag(v_quotContext_x3f_3230_) == 0)
{
lean_object* v___x_3306_; lean_object* v_a_3307_; 
v___x_3306_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v___y_3204_);
v_a_3307_ = lean_ctor_get(v___x_3306_, 0);
lean_inc(v_a_3307_);
lean_dec_ref(v___x_3306_);
v_a_3232_ = v_a_3307_;
goto v___jp_3231_;
}
else
{
lean_object* v_val_3308_; 
v_val_3308_ = lean_ctor_get(v_quotContext_x3f_3230_, 0);
lean_inc(v_val_3308_);
v_a_3232_ = v_val_3308_;
goto v___jp_3231_;
}
v___jp_3231_:
{
lean_object* v___x_3233_; lean_object* v_maxRecDepth_3234_; lean_object* v___x_3235_; lean_object* v_nextMacroScope_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; 
v___x_3233_ = lean_st_ref_get(v___y_3204_);
v_maxRecDepth_3234_ = lean_ctor_get(v___x_3233_, 5);
lean_inc(v_maxRecDepth_3234_);
lean_dec(v___x_3233_);
v___x_3235_ = lean_st_ref_get(v___y_3204_);
v_nextMacroScope_3236_ = lean_ctor_get(v___x_3235_, 4);
lean_inc(v_nextMacroScope_3236_);
lean_dec(v___x_3235_);
lean_inc(v_currRecDepth_3229_);
v___x_3237_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3237_, 0, v_methods_3224_);
lean_ctor_set(v___x_3237_, 1, v_a_3232_);
lean_ctor_set(v___x_3237_, 2, v_a_3228_);
lean_ctor_set(v___x_3237_, 3, v_currRecDepth_3229_);
lean_ctor_set(v___x_3237_, 4, v_maxRecDepth_3234_);
lean_ctor_set(v___x_3237_, 5, v_a_3226_);
v___x_3238_ = lean_box(0);
v___x_3239_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3239_, 0, v_nextMacroScope_3236_);
lean_ctor_set(v___x_3239_, 1, v___x_3238_);
lean_ctor_set(v___x_3239_, 2, v___x_3238_);
v___x_3240_ = lean_apply_2(v_x_3202_, v___x_3237_, v___x_3239_);
if (lean_obj_tag(v___x_3240_) == 0)
{
lean_object* v_a_3241_; lean_object* v_a_3242_; lean_object* v_macroScope_3243_; lean_object* v_traceMsgs_3244_; lean_object* v_expandedMacroDecls_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; 
v_a_3241_ = lean_ctor_get(v___x_3240_, 1);
lean_inc(v_a_3241_);
v_a_3242_ = lean_ctor_get(v___x_3240_, 0);
lean_inc(v_a_3242_);
lean_dec_ref_known(v___x_3240_, 2);
v_macroScope_3243_ = lean_ctor_get(v_a_3241_, 0);
lean_inc(v_macroScope_3243_);
v_traceMsgs_3244_ = lean_ctor_get(v_a_3241_, 1);
lean_inc(v_traceMsgs_3244_);
v_expandedMacroDecls_3245_ = lean_ctor_get(v_a_3241_, 2);
lean_inc(v_expandedMacroDecls_3245_);
lean_dec(v_a_3241_);
v___x_3246_ = lean_box(0);
v___x_3247_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38___redArg(v_expandedMacroDecls_3245_, v___x_3246_, v___y_3203_, v___y_3204_);
lean_dec(v_expandedMacroDecls_3245_);
if (lean_obj_tag(v___x_3247_) == 0)
{
lean_object* v___x_3248_; lean_object* v_env_3249_; lean_object* v_messages_3250_; lean_object* v_scopes_3251_; lean_object* v_usedQuotCtxts_3252_; lean_object* v_maxRecDepth_3253_; lean_object* v_ngen_3254_; lean_object* v_auxDeclNGen_3255_; lean_object* v_infoState_3256_; lean_object* v_traceState_3257_; lean_object* v_snapshotTasks_3258_; lean_object* v_prevLinterStates_3259_; lean_object* v_codeQualityEntryTasks_3260_; lean_object* v___x_3262_; uint8_t v_isShared_3263_; uint8_t v_isSharedCheck_3286_; 
lean_dec_ref_known(v___x_3247_, 1);
v___x_3248_ = lean_st_ref_take(v___y_3204_);
v_env_3249_ = lean_ctor_get(v___x_3248_, 0);
v_messages_3250_ = lean_ctor_get(v___x_3248_, 1);
v_scopes_3251_ = lean_ctor_get(v___x_3248_, 2);
v_usedQuotCtxts_3252_ = lean_ctor_get(v___x_3248_, 3);
v_maxRecDepth_3253_ = lean_ctor_get(v___x_3248_, 5);
v_ngen_3254_ = lean_ctor_get(v___x_3248_, 6);
v_auxDeclNGen_3255_ = lean_ctor_get(v___x_3248_, 7);
v_infoState_3256_ = lean_ctor_get(v___x_3248_, 8);
v_traceState_3257_ = lean_ctor_get(v___x_3248_, 9);
v_snapshotTasks_3258_ = lean_ctor_get(v___x_3248_, 10);
v_prevLinterStates_3259_ = lean_ctor_get(v___x_3248_, 11);
v_codeQualityEntryTasks_3260_ = lean_ctor_get(v___x_3248_, 12);
v_isSharedCheck_3286_ = !lean_is_exclusive(v___x_3248_);
if (v_isSharedCheck_3286_ == 0)
{
lean_object* v_unused_3287_; 
v_unused_3287_ = lean_ctor_get(v___x_3248_, 4);
lean_dec(v_unused_3287_);
v___x_3262_ = v___x_3248_;
v_isShared_3263_ = v_isSharedCheck_3286_;
goto v_resetjp_3261_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3260_);
lean_inc(v_prevLinterStates_3259_);
lean_inc(v_snapshotTasks_3258_);
lean_inc(v_traceState_3257_);
lean_inc(v_infoState_3256_);
lean_inc(v_auxDeclNGen_3255_);
lean_inc(v_ngen_3254_);
lean_inc(v_maxRecDepth_3253_);
lean_inc(v_usedQuotCtxts_3252_);
lean_inc(v_scopes_3251_);
lean_inc(v_messages_3250_);
lean_inc(v_env_3249_);
lean_dec(v___x_3248_);
v___x_3262_ = lean_box(0);
v_isShared_3263_ = v_isSharedCheck_3286_;
goto v_resetjp_3261_;
}
v_resetjp_3261_:
{
lean_object* v___x_3265_; 
if (v_isShared_3263_ == 0)
{
lean_ctor_set(v___x_3262_, 4, v_macroScope_3243_);
v___x_3265_ = v___x_3262_;
goto v_reusejp_3264_;
}
else
{
lean_object* v_reuseFailAlloc_3285_; 
v_reuseFailAlloc_3285_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3285_, 0, v_env_3249_);
lean_ctor_set(v_reuseFailAlloc_3285_, 1, v_messages_3250_);
lean_ctor_set(v_reuseFailAlloc_3285_, 2, v_scopes_3251_);
lean_ctor_set(v_reuseFailAlloc_3285_, 3, v_usedQuotCtxts_3252_);
lean_ctor_set(v_reuseFailAlloc_3285_, 4, v_macroScope_3243_);
lean_ctor_set(v_reuseFailAlloc_3285_, 5, v_maxRecDepth_3253_);
lean_ctor_set(v_reuseFailAlloc_3285_, 6, v_ngen_3254_);
lean_ctor_set(v_reuseFailAlloc_3285_, 7, v_auxDeclNGen_3255_);
lean_ctor_set(v_reuseFailAlloc_3285_, 8, v_infoState_3256_);
lean_ctor_set(v_reuseFailAlloc_3285_, 9, v_traceState_3257_);
lean_ctor_set(v_reuseFailAlloc_3285_, 10, v_snapshotTasks_3258_);
lean_ctor_set(v_reuseFailAlloc_3285_, 11, v_prevLinterStates_3259_);
lean_ctor_set(v_reuseFailAlloc_3285_, 12, v_codeQualityEntryTasks_3260_);
v___x_3265_ = v_reuseFailAlloc_3285_;
goto v_reusejp_3264_;
}
v_reusejp_3264_:
{
lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; 
v___x_3266_ = lean_st_ref_put(v___y_3204_, v___x_3265_);
v___x_3267_ = l_List_reverse___redArg(v_traceMsgs_3244_);
v___x_3268_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__39(v___x_3267_, v___y_3203_, v___y_3204_);
if (lean_obj_tag(v___x_3268_) == 0)
{
lean_object* v___x_3270_; uint8_t v_isShared_3271_; uint8_t v_isSharedCheck_3275_; 
v_isSharedCheck_3275_ = !lean_is_exclusive(v___x_3268_);
if (v_isSharedCheck_3275_ == 0)
{
lean_object* v_unused_3276_; 
v_unused_3276_ = lean_ctor_get(v___x_3268_, 0);
lean_dec(v_unused_3276_);
v___x_3270_ = v___x_3268_;
v_isShared_3271_ = v_isSharedCheck_3275_;
goto v_resetjp_3269_;
}
else
{
lean_dec(v___x_3268_);
v___x_3270_ = lean_box(0);
v_isShared_3271_ = v_isSharedCheck_3275_;
goto v_resetjp_3269_;
}
v_resetjp_3269_:
{
lean_object* v___x_3273_; 
if (v_isShared_3271_ == 0)
{
lean_ctor_set(v___x_3270_, 0, v_a_3242_);
v___x_3273_ = v___x_3270_;
goto v_reusejp_3272_;
}
else
{
lean_object* v_reuseFailAlloc_3274_; 
v_reuseFailAlloc_3274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3274_, 0, v_a_3242_);
v___x_3273_ = v_reuseFailAlloc_3274_;
goto v_reusejp_3272_;
}
v_reusejp_3272_:
{
return v___x_3273_;
}
}
}
else
{
lean_object* v_a_3277_; lean_object* v___x_3279_; uint8_t v_isShared_3280_; uint8_t v_isSharedCheck_3284_; 
lean_dec(v_a_3242_);
v_a_3277_ = lean_ctor_get(v___x_3268_, 0);
v_isSharedCheck_3284_ = !lean_is_exclusive(v___x_3268_);
if (v_isSharedCheck_3284_ == 0)
{
v___x_3279_ = v___x_3268_;
v_isShared_3280_ = v_isSharedCheck_3284_;
goto v_resetjp_3278_;
}
else
{
lean_inc(v_a_3277_);
lean_dec(v___x_3268_);
v___x_3279_ = lean_box(0);
v_isShared_3280_ = v_isSharedCheck_3284_;
goto v_resetjp_3278_;
}
v_resetjp_3278_:
{
lean_object* v___x_3282_; 
if (v_isShared_3280_ == 0)
{
v___x_3282_ = v___x_3279_;
goto v_reusejp_3281_;
}
else
{
lean_object* v_reuseFailAlloc_3283_; 
v_reuseFailAlloc_3283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3283_, 0, v_a_3277_);
v___x_3282_ = v_reuseFailAlloc_3283_;
goto v_reusejp_3281_;
}
v_reusejp_3281_:
{
return v___x_3282_;
}
}
}
}
}
}
else
{
lean_object* v_a_3288_; lean_object* v___x_3290_; uint8_t v_isShared_3291_; uint8_t v_isSharedCheck_3295_; 
lean_dec(v_traceMsgs_3244_);
lean_dec(v_macroScope_3243_);
lean_dec(v_a_3242_);
v_a_3288_ = lean_ctor_get(v___x_3247_, 0);
v_isSharedCheck_3295_ = !lean_is_exclusive(v___x_3247_);
if (v_isSharedCheck_3295_ == 0)
{
v___x_3290_ = v___x_3247_;
v_isShared_3291_ = v_isSharedCheck_3295_;
goto v_resetjp_3289_;
}
else
{
lean_inc(v_a_3288_);
lean_dec(v___x_3247_);
v___x_3290_ = lean_box(0);
v_isShared_3291_ = v_isSharedCheck_3295_;
goto v_resetjp_3289_;
}
v_resetjp_3289_:
{
lean_object* v___x_3293_; 
if (v_isShared_3291_ == 0)
{
v___x_3293_ = v___x_3290_;
goto v_reusejp_3292_;
}
else
{
lean_object* v_reuseFailAlloc_3294_; 
v_reuseFailAlloc_3294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3294_, 0, v_a_3288_);
v___x_3293_ = v_reuseFailAlloc_3294_;
goto v_reusejp_3292_;
}
v_reusejp_3292_:
{
return v___x_3293_;
}
}
}
}
else
{
lean_object* v_a_3296_; 
v_a_3296_ = lean_ctor_get(v___x_3240_, 0);
lean_inc(v_a_3296_);
lean_dec_ref_known(v___x_3240_, 2);
if (lean_obj_tag(v_a_3296_) == 0)
{
lean_object* v_a_3297_; lean_object* v_a_3298_; lean_object* v___x_3299_; uint8_t v___x_3300_; 
v_a_3297_ = lean_ctor_get(v_a_3296_, 0);
lean_inc(v_a_3297_);
v_a_3298_ = lean_ctor_get(v_a_3296_, 1);
lean_inc_ref(v_a_3298_);
lean_dec_ref_known(v_a_3296_, 2);
v___x_3299_ = ((lean_object*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___closed__0));
v___x_3300_ = lean_string_dec_eq(v_a_3298_, v___x_3299_);
if (v___x_3300_ == 0)
{
lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; 
v___x_3301_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3301_, 0, v_a_3298_);
v___x_3302_ = l_Lean_MessageData_ofFormat(v___x_3301_);
v___x_3303_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___redArg(v_a_3297_, v___x_3302_, v___y_3203_, v___y_3204_);
lean_dec(v_a_3297_);
return v___x_3303_;
}
else
{
lean_object* v___x_3304_; 
lean_dec_ref(v_a_3298_);
v___x_3304_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg(v_a_3297_);
return v___x_3304_;
}
}
else
{
lean_object* v___x_3305_; 
v___x_3305_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg();
return v___x_3305_;
}
}
}
}
else
{
lean_object* v_a_3309_; lean_object* v___x_3311_; uint8_t v_isShared_3312_; uint8_t v_isSharedCheck_3316_; 
lean_dec(v_a_3226_);
lean_dec_ref_known(v_methods_3224_, 5);
lean_dec_ref(v_x_3202_);
v_a_3309_ = lean_ctor_get(v___x_3227_, 0);
v_isSharedCheck_3316_ = !lean_is_exclusive(v___x_3227_);
if (v_isSharedCheck_3316_ == 0)
{
v___x_3311_ = v___x_3227_;
v_isShared_3312_ = v_isSharedCheck_3316_;
goto v_resetjp_3310_;
}
else
{
lean_inc(v_a_3309_);
lean_dec(v___x_3227_);
v___x_3311_ = lean_box(0);
v_isShared_3312_ = v_isSharedCheck_3316_;
goto v_resetjp_3310_;
}
v_resetjp_3310_:
{
lean_object* v___x_3314_; 
if (v_isShared_3312_ == 0)
{
v___x_3314_ = v___x_3311_;
goto v_reusejp_3313_;
}
else
{
lean_object* v_reuseFailAlloc_3315_; 
v_reuseFailAlloc_3315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3315_, 0, v_a_3309_);
v___x_3314_ = v_reuseFailAlloc_3315_;
goto v_reusejp_3313_;
}
v_reusejp_3313_:
{
return v___x_3314_;
}
}
}
}
else
{
lean_object* v_a_3317_; lean_object* v___x_3319_; uint8_t v_isShared_3320_; uint8_t v_isSharedCheck_3324_; 
lean_dec_ref_known(v_methods_3224_, 5);
lean_dec_ref(v_x_3202_);
v_a_3317_ = lean_ctor_get(v___x_3225_, 0);
v_isSharedCheck_3324_ = !lean_is_exclusive(v___x_3225_);
if (v_isSharedCheck_3324_ == 0)
{
v___x_3319_ = v___x_3225_;
v_isShared_3320_ = v_isSharedCheck_3324_;
goto v_resetjp_3318_;
}
else
{
lean_inc(v_a_3317_);
lean_dec(v___x_3225_);
v___x_3319_ = lean_box(0);
v_isShared_3320_ = v_isSharedCheck_3324_;
goto v_resetjp_3318_;
}
v_resetjp_3318_:
{
lean_object* v___x_3322_; 
if (v_isShared_3320_ == 0)
{
v___x_3322_ = v___x_3319_;
goto v_reusejp_3321_;
}
else
{
lean_object* v_reuseFailAlloc_3323_; 
v_reuseFailAlloc_3323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3323_, 0, v_a_3317_);
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
else
{
lean_object* v_a_3325_; lean_object* v___x_3327_; uint8_t v_isShared_3328_; uint8_t v_isSharedCheck_3332_; 
lean_dec_ref(v___f_3218_);
lean_dec(v_currNamespace_3217_);
lean_dec_ref(v_opts_3214_);
lean_dec_ref(v___f_3209_);
lean_dec_ref(v___f_3208_);
lean_dec_ref(v_env_3207_);
lean_dec_ref(v_x_3202_);
v_a_3325_ = lean_ctor_get(v___x_3219_, 0);
v_isSharedCheck_3332_ = !lean_is_exclusive(v___x_3219_);
if (v_isSharedCheck_3332_ == 0)
{
v___x_3327_ = v___x_3219_;
v_isShared_3328_ = v_isSharedCheck_3332_;
goto v_resetjp_3326_;
}
else
{
lean_inc(v_a_3325_);
lean_dec(v___x_3219_);
v___x_3327_ = lean_box(0);
v_isShared_3328_ = v_isSharedCheck_3332_;
goto v_resetjp_3326_;
}
v_resetjp_3326_:
{
lean_object* v___x_3330_; 
if (v_isShared_3328_ == 0)
{
v___x_3330_ = v___x_3327_;
goto v_reusejp_3329_;
}
else
{
lean_object* v_reuseFailAlloc_3331_; 
v_reuseFailAlloc_3331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3331_, 0, v_a_3325_);
v___x_3330_ = v_reuseFailAlloc_3331_;
goto v_reusejp_3329_;
}
v_reusejp_3329_:
{
return v___x_3330_;
}
}
}
}
else
{
lean_object* v_a_3333_; lean_object* v___x_3335_; uint8_t v_isShared_3336_; uint8_t v_isSharedCheck_3340_; 
lean_dec_ref(v_opts_3214_);
lean_dec_ref(v___f_3209_);
lean_dec_ref(v___f_3208_);
lean_dec_ref(v_env_3207_);
lean_dec_ref(v_x_3202_);
v_a_3333_ = lean_ctor_get(v___x_3215_, 0);
v_isSharedCheck_3340_ = !lean_is_exclusive(v___x_3215_);
if (v_isSharedCheck_3340_ == 0)
{
v___x_3335_ = v___x_3215_;
v_isShared_3336_ = v_isSharedCheck_3340_;
goto v_resetjp_3334_;
}
else
{
lean_inc(v_a_3333_);
lean_dec(v___x_3215_);
v___x_3335_ = lean_box(0);
v_isShared_3336_ = v_isSharedCheck_3340_;
goto v_resetjp_3334_;
}
v_resetjp_3334_:
{
lean_object* v___x_3338_; 
if (v_isShared_3336_ == 0)
{
v___x_3338_ = v___x_3335_;
goto v_reusejp_3337_;
}
else
{
lean_object* v_reuseFailAlloc_3339_; 
v_reuseFailAlloc_3339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3339_, 0, v_a_3333_);
v___x_3338_ = v_reuseFailAlloc_3339_;
goto v_reusejp_3337_;
}
v_reusejp_3337_:
{
return v___x_3338_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___boxed(lean_object* v_x_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_){
_start:
{
lean_object* v_res_3345_; 
v_res_3345_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg(v_x_3341_, v___y_3342_, v___y_3343_);
lean_dec(v___y_3343_);
lean_dec_ref(v___y_3342_);
return v_res_3345_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3347_; lean_object* v___x_3348_; 
v___x_3347_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__0));
v___x_3348_ = l_Lean_stringToMessageData(v___x_3347_);
return v___x_3348_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__3(void){
_start:
{
lean_object* v___x_3350_; lean_object* v___x_3351_; 
v___x_3350_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__2));
v___x_3351_ = l_Lean_stringToMessageData(v___x_3350_);
return v___x_3351_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__5(void){
_start:
{
lean_object* v___x_3353_; lean_object* v___x_3354_; 
v___x_3353_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__4));
v___x_3354_ = l_Lean_stringToMessageData(v___x_3353_);
return v___x_3354_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__7(void){
_start:
{
lean_object* v___x_3356_; lean_object* v___x_3357_; 
v___x_3356_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__6));
v___x_3357_ = l_Lean_stringToMessageData(v___x_3356_);
return v___x_3357_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__9(void){
_start:
{
lean_object* v___x_3359_; lean_object* v___x_3360_; 
v___x_3359_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__8));
v___x_3360_ = l_Lean_stringToMessageData(v___x_3359_);
return v___x_3360_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__14(void){
_start:
{
lean_object* v___x_3369_; lean_object* v___x_3370_; 
v___x_3369_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__13));
v___x_3370_ = l_Lean_stringToMessageData(v___x_3369_);
return v___x_3370_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1(lean_object* v___x_3371_, lean_object* v_attrInstance_3372_, lean_object* v___f_3373_, lean_object* v___x_3374_, lean_object* v___x_3375_, lean_object* v___x_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_){
_start:
{
lean_object* v___x_3380_; 
v___x_3380_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg(v___x_3371_, v___y_3377_, v___y_3378_);
if (lean_obj_tag(v___x_3380_) == 0)
{
lean_object* v_a_3381_; lean_object* v___x_3382_; lean_object* v_attr_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; 
v_a_3381_ = lean_ctor_get(v___x_3380_, 0);
lean_inc(v_a_3381_);
lean_dec_ref_known(v___x_3380_, 1);
v___x_3382_ = lean_unsigned_to_nat(1u);
v_attr_3383_ = l_Lean_Syntax_getArg(v_attrInstance_3372_, v___x_3382_);
v___x_3384_ = lean_alloc_closure((void*)(l_Lean_expandMacros), 4, 2);
lean_closure_set(v___x_3384_, 0, v_attr_3383_);
lean_closure_set(v___x_3384_, 1, v___f_3373_);
v___x_3385_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg(v___x_3384_, v___y_3377_, v___y_3378_);
if (lean_obj_tag(v___x_3385_) == 0)
{
lean_object* v_a_3386_; lean_object* v___x_3388_; uint8_t v_isShared_3389_; uint8_t v_isSharedCheck_3491_; 
v_a_3386_ = lean_ctor_get(v___x_3385_, 0);
v_isSharedCheck_3491_ = !lean_is_exclusive(v___x_3385_);
if (v_isSharedCheck_3491_ == 0)
{
v___x_3388_ = v___x_3385_;
v_isShared_3389_ = v_isSharedCheck_3491_;
goto v_resetjp_3387_;
}
else
{
lean_inc(v_a_3386_);
lean_dec(v___x_3385_);
v___x_3388_ = lean_box(0);
v_isShared_3389_ = v_isSharedCheck_3491_;
goto v_resetjp_3387_;
}
v_resetjp_3387_:
{
lean_object* v___y_3391_; uint8_t v___y_3398_; lean_object* v___y_3399_; lean_object* v___y_3400_; lean_object* v___y_3401_; lean_object* v___y_3402_; lean_object* v_attrName_3413_; lean_object* v___y_3414_; lean_object* v___y_3415_; lean_object* v___x_3472_; lean_object* v___x_3473_; uint8_t v___x_3474_; 
lean_inc(v_a_3386_);
v___x_3472_ = l_Lean_Syntax_getKind(v_a_3386_);
v___x_3473_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__12));
v___x_3474_ = lean_name_eq(v___x_3472_, v___x_3473_);
if (v___x_3474_ == 0)
{
if (lean_obj_tag(v___x_3472_) == 1)
{
lean_object* v_str_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; 
v_str_3475_ = lean_ctor_get(v___x_3472_, 1);
lean_inc_ref(v_str_3475_);
lean_dec_ref_known(v___x_3472_, 2);
v___x_3476_ = lean_box(0);
v___x_3477_ = l_Lean_Name_str___override(v___x_3476_, v_str_3475_);
v_attrName_3413_ = v___x_3477_;
v___y_3414_ = v___y_3377_;
v___y_3415_ = v___y_3378_;
goto v___jp_3412_;
}
else
{
lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v_a_3480_; lean_object* v___x_3482_; uint8_t v_isShared_3483_; uint8_t v_isSharedCheck_3487_; 
lean_dec(v___x_3472_);
lean_del_object(v___x_3388_);
lean_dec(v_a_3381_);
lean_dec(v___x_3374_);
v___x_3478_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__14, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__14_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__14);
v___x_3479_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___redArg(v_a_3386_, v___x_3478_, v___y_3377_, v___y_3378_);
lean_dec(v_a_3386_);
v_a_3480_ = lean_ctor_get(v___x_3479_, 0);
v_isSharedCheck_3487_ = !lean_is_exclusive(v___x_3479_);
if (v_isSharedCheck_3487_ == 0)
{
v___x_3482_ = v___x_3479_;
v_isShared_3483_ = v_isSharedCheck_3487_;
goto v_resetjp_3481_;
}
else
{
lean_inc(v_a_3480_);
lean_dec(v___x_3479_);
v___x_3482_ = lean_box(0);
v_isShared_3483_ = v_isSharedCheck_3487_;
goto v_resetjp_3481_;
}
v_resetjp_3481_:
{
lean_object* v___x_3485_; 
if (v_isShared_3483_ == 0)
{
v___x_3485_ = v___x_3482_;
goto v_reusejp_3484_;
}
else
{
lean_object* v_reuseFailAlloc_3486_; 
v_reuseFailAlloc_3486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3486_, 0, v_a_3480_);
v___x_3485_ = v_reuseFailAlloc_3486_;
goto v_reusejp_3484_;
}
v_reusejp_3484_:
{
return v___x_3485_;
}
}
}
}
else
{
lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; 
lean_dec(v___x_3472_);
v___x_3488_ = l_Lean_Syntax_getArg(v_a_3386_, v___x_3376_);
v___x_3489_ = l_Lean_Syntax_getId(v___x_3488_);
lean_dec(v___x_3488_);
v___x_3490_ = l_Lean_Name_eraseMacroScopes(v___x_3489_);
lean_dec(v___x_3489_);
v_attrName_3413_ = v___x_3490_;
v___y_3414_ = v___y_3377_;
v___y_3415_ = v___y_3378_;
goto v___jp_3412_;
}
v___jp_3390_:
{
lean_object* v___x_3392_; uint8_t v___x_3393_; lean_object* v___x_3395_; 
v___x_3392_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3392_, 0, v___y_3391_);
lean_ctor_set(v___x_3392_, 1, v_a_3386_);
v___x_3393_ = lean_unbox(v_a_3381_);
lean_dec(v_a_3381_);
lean_ctor_set_uint8(v___x_3392_, sizeof(void*)*2, v___x_3393_);
if (v_isShared_3389_ == 0)
{
lean_ctor_set(v___x_3388_, 0, v___x_3392_);
v___x_3395_ = v___x_3388_;
goto v_reusejp_3394_;
}
else
{
lean_object* v_reuseFailAlloc_3396_; 
v_reuseFailAlloc_3396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3396_, 0, v___x_3392_);
v___x_3395_ = v_reuseFailAlloc_3396_;
goto v_reusejp_3394_;
}
v_reusejp_3394_:
{
return v___x_3395_;
}
}
v___jp_3397_:
{
lean_object* v___x_3403_; 
v___x_3403_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33(v___y_3400_, v___y_3398_, v___y_3401_, v___y_3402_);
if (lean_obj_tag(v___x_3403_) == 0)
{
lean_dec_ref_known(v___x_3403_, 1);
v___y_3391_ = v___y_3399_;
goto v___jp_3390_;
}
else
{
lean_object* v_a_3404_; lean_object* v___x_3406_; uint8_t v_isShared_3407_; uint8_t v_isSharedCheck_3411_; 
lean_dec(v___y_3399_);
lean_del_object(v___x_3388_);
lean_dec(v_a_3386_);
lean_dec(v_a_3381_);
v_a_3404_ = lean_ctor_get(v___x_3403_, 0);
v_isSharedCheck_3411_ = !lean_is_exclusive(v___x_3403_);
if (v_isSharedCheck_3411_ == 0)
{
v___x_3406_ = v___x_3403_;
v_isShared_3407_ = v_isSharedCheck_3411_;
goto v_resetjp_3405_;
}
else
{
lean_inc(v_a_3404_);
lean_dec(v___x_3403_);
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
v___jp_3412_:
{
lean_object* v___x_3416_; lean_object* v_env_3417_; lean_object* v___x_3418_; 
v___x_3416_ = lean_st_ref_get(v___y_3415_);
v_env_3417_ = lean_ctor_get(v___x_3416_, 0);
lean_inc_ref(v_env_3417_);
lean_dec(v___x_3416_);
lean_inc(v_attrName_3413_);
v___x_3418_ = l_Lean_getAttributeImpl(v_env_3417_, v_attrName_3413_);
if (lean_obj_tag(v___x_3418_) == 1)
{
lean_object* v___x_3419_; lean_object* v_env_3420_; lean_object* v___x_3421_; 
lean_dec_ref_known(v___x_3418_, 1);
v___x_3419_ = lean_st_ref_get(v___y_3415_);
v_env_3420_ = lean_ctor_get(v___x_3419_, 0);
lean_inc_ref(v_env_3420_);
lean_dec(v___x_3419_);
lean_inc(v_attrName_3413_);
v___x_3421_ = l_Lean_getAttributeImpl(v_env_3420_, v_attrName_3413_);
if (lean_obj_tag(v___x_3421_) == 1)
{
lean_object* v_a_3422_; lean_object* v___x_3423_; lean_object* v_toAttributeImplCore_3424_; lean_object* v_env_3425_; lean_object* v_ref_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; 
v_a_3422_ = lean_ctor_get(v___x_3421_, 0);
lean_inc(v_a_3422_);
lean_dec_ref_known(v___x_3421_, 1);
v___x_3423_ = lean_st_ref_get(v___y_3415_);
v_toAttributeImplCore_3424_ = lean_ctor_get(v_a_3422_, 0);
lean_inc_ref(v_toAttributeImplCore_3424_);
lean_dec(v_a_3422_);
v_env_3425_ = lean_ctor_get(v___x_3423_, 0);
lean_inc_ref(v_env_3425_);
lean_dec(v___x_3423_);
v_ref_3426_ = lean_ctor_get(v_toAttributeImplCore_3424_, 0);
lean_inc_n(v_ref_3426_, 2);
lean_dec_ref(v_toAttributeImplCore_3424_);
v___x_3427_ = l_Lean_regularInitAttr;
v___x_3428_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v___x_3374_, v___x_3427_, v_env_3425_, v_ref_3426_);
if (lean_obj_tag(v___x_3428_) == 0)
{
lean_dec(v_ref_3426_);
v___y_3391_ = v_attrName_3413_;
goto v___jp_3390_;
}
else
{
uint8_t v___x_3429_; lean_object* v___x_3430_; lean_object* v_env_3431_; lean_object* v___x_3432_; 
lean_dec_ref_known(v___x_3428_, 1);
v___x_3429_ = 1;
v___x_3430_ = lean_st_ref_get(v___y_3415_);
v_env_3431_ = lean_ctor_get(v___x_3430_, 0);
lean_inc_ref(v_env_3431_);
lean_dec(v___x_3430_);
v___x_3432_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3431_, v_ref_3426_);
lean_dec_ref(v_env_3431_);
if (lean_obj_tag(v___x_3432_) == 1)
{
lean_object* v_val_3433_; lean_object* v___x_3434_; lean_object* v_env_3435_; lean_object* v___x_3436_; lean_object* v_modules_3437_; lean_object* v___x_3438_; uint8_t v___x_3439_; 
v_val_3433_ = lean_ctor_get(v___x_3432_, 0);
lean_inc(v_val_3433_);
lean_dec_ref_known(v___x_3432_, 1);
v___x_3434_ = lean_st_ref_get(v___y_3415_);
v_env_3435_ = lean_ctor_get(v___x_3434_, 0);
lean_inc_ref(v_env_3435_);
lean_dec(v___x_3434_);
v___x_3436_ = l_Lean_Environment_header(v_env_3435_);
lean_dec_ref(v_env_3435_);
v_modules_3437_ = lean_ctor_get(v___x_3436_, 3);
lean_inc_ref(v_modules_3437_);
lean_dec_ref(v___x_3436_);
v___x_3438_ = lean_array_get_size(v_modules_3437_);
v___x_3439_ = lean_nat_dec_lt(v_val_3433_, v___x_3438_);
if (v___x_3439_ == 0)
{
lean_dec_ref(v_modules_3437_);
lean_dec(v_val_3433_);
v___y_3398_ = v___x_3429_;
v___y_3399_ = v_attrName_3413_;
v___y_3400_ = v_ref_3426_;
v___y_3401_ = v___y_3414_;
v___y_3402_ = v___y_3415_;
goto v___jp_3397_;
}
else
{
lean_object* v___x_3440_; uint8_t v_hasData_3441_; 
v___x_3440_ = lean_array_fget_borrowed(v_modules_3437_, v_val_3433_);
v_hasData_3441_ = lean_ctor_get_uint8(v___x_3440_, sizeof(void*)*1 + 1);
if (v_hasData_3441_ == 0)
{
lean_object* v___x_3442_; lean_object* v_toImport_3443_; lean_object* v_module_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v_a_3458_; lean_object* v___x_3460_; uint8_t v_isShared_3461_; uint8_t v_isSharedCheck_3465_; 
lean_dec(v_ref_3426_);
lean_del_object(v___x_3388_);
lean_dec(v_a_3386_);
lean_dec(v_a_3381_);
v___x_3442_ = lean_array_get(v___x_3375_, v_modules_3437_, v_val_3433_);
lean_dec(v_val_3433_);
lean_dec_ref(v_modules_3437_);
v_toImport_3443_ = lean_ctor_get(v___x_3442_, 0);
lean_inc_ref(v_toImport_3443_);
lean_dec(v___x_3442_);
v_module_3444_ = lean_ctor_get(v_toImport_3443_, 0);
lean_inc(v_module_3444_);
lean_dec_ref(v_toImport_3443_);
v___x_3445_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__1, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__1_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__1);
v___x_3446_ = l_Lean_MessageData_ofName(v_attrName_3413_);
v___x_3447_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3447_, 0, v___x_3445_);
lean_ctor_set(v___x_3447_, 1, v___x_3446_);
v___x_3448_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__3, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__3_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__3);
v___x_3449_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3449_, 0, v___x_3447_);
lean_ctor_set(v___x_3449_, 1, v___x_3448_);
v___x_3450_ = l_Lean_MessageData_ofName(v_module_3444_);
lean_inc_ref(v___x_3450_);
v___x_3451_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3451_, 0, v___x_3449_);
lean_ctor_set(v___x_3451_, 1, v___x_3450_);
v___x_3452_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__5, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__5_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__5);
v___x_3453_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3453_, 0, v___x_3451_);
lean_ctor_set(v___x_3453_, 1, v___x_3452_);
v___x_3454_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3454_, 0, v___x_3453_);
lean_ctor_set(v___x_3454_, 1, v___x_3450_);
v___x_3455_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__9);
v___x_3456_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3456_, 0, v___x_3454_);
lean_ctor_set(v___x_3456_, 1, v___x_3455_);
v___x_3457_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15___redArg(v___x_3456_, v___y_3414_, v___y_3415_);
v_a_3458_ = lean_ctor_get(v___x_3457_, 0);
v_isSharedCheck_3465_ = !lean_is_exclusive(v___x_3457_);
if (v_isSharedCheck_3465_ == 0)
{
v___x_3460_ = v___x_3457_;
v_isShared_3461_ = v_isSharedCheck_3465_;
goto v_resetjp_3459_;
}
else
{
lean_inc(v_a_3458_);
lean_dec(v___x_3457_);
v___x_3460_ = lean_box(0);
v_isShared_3461_ = v_isSharedCheck_3465_;
goto v_resetjp_3459_;
}
v_resetjp_3459_:
{
lean_object* v___x_3463_; 
if (v_isShared_3461_ == 0)
{
v___x_3463_ = v___x_3460_;
goto v_reusejp_3462_;
}
else
{
lean_object* v_reuseFailAlloc_3464_; 
v_reuseFailAlloc_3464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3464_, 0, v_a_3458_);
v___x_3463_ = v_reuseFailAlloc_3464_;
goto v_reusejp_3462_;
}
v_reusejp_3462_:
{
return v___x_3463_;
}
}
}
else
{
lean_dec_ref(v_modules_3437_);
lean_dec(v_val_3433_);
v___y_3398_ = v___x_3429_;
v___y_3399_ = v_attrName_3413_;
v___y_3400_ = v_ref_3426_;
v___y_3401_ = v___y_3414_;
v___y_3402_ = v___y_3415_;
goto v___jp_3397_;
}
}
}
else
{
lean_dec(v___x_3432_);
v___y_3398_ = v___x_3429_;
v___y_3399_ = v_attrName_3413_;
v___y_3400_ = v_ref_3426_;
v___y_3401_ = v___y_3414_;
v___y_3402_ = v___y_3415_;
goto v___jp_3397_;
}
}
}
else
{
lean_dec_ref(v___x_3421_);
lean_dec(v___x_3374_);
v___y_3391_ = v_attrName_3413_;
goto v___jp_3390_;
}
}
else
{
lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; 
lean_dec_ref(v___x_3418_);
lean_del_object(v___x_3388_);
lean_dec(v_a_3386_);
lean_dec(v_a_3381_);
lean_dec(v___x_3374_);
v___x_3466_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__7, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__7_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__7);
v___x_3467_ = l_Lean_MessageData_ofName(v_attrName_3413_);
v___x_3468_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3468_, 0, v___x_3466_);
lean_ctor_set(v___x_3468_, 1, v___x_3467_);
v___x_3469_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__9, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__9_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__9);
v___x_3470_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3470_, 0, v___x_3468_);
lean_ctor_set(v___x_3470_, 1, v___x_3469_);
v___x_3471_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15___redArg(v___x_3470_, v___y_3414_, v___y_3415_);
return v___x_3471_;
}
}
}
}
else
{
lean_object* v_a_3492_; lean_object* v___x_3494_; uint8_t v_isShared_3495_; uint8_t v_isSharedCheck_3499_; 
lean_dec(v_a_3381_);
lean_dec(v___x_3374_);
v_a_3492_ = lean_ctor_get(v___x_3385_, 0);
v_isSharedCheck_3499_ = !lean_is_exclusive(v___x_3385_);
if (v_isSharedCheck_3499_ == 0)
{
v___x_3494_ = v___x_3385_;
v_isShared_3495_ = v_isSharedCheck_3499_;
goto v_resetjp_3493_;
}
else
{
lean_inc(v_a_3492_);
lean_dec(v___x_3385_);
v___x_3494_ = lean_box(0);
v_isShared_3495_ = v_isSharedCheck_3499_;
goto v_resetjp_3493_;
}
v_resetjp_3493_:
{
lean_object* v___x_3497_; 
if (v_isShared_3495_ == 0)
{
v___x_3497_ = v___x_3494_;
goto v_reusejp_3496_;
}
else
{
lean_object* v_reuseFailAlloc_3498_; 
v_reuseFailAlloc_3498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3498_, 0, v_a_3492_);
v___x_3497_ = v_reuseFailAlloc_3498_;
goto v_reusejp_3496_;
}
v_reusejp_3496_:
{
return v___x_3497_;
}
}
}
}
else
{
lean_object* v_a_3500_; lean_object* v___x_3502_; uint8_t v_isShared_3503_; uint8_t v_isSharedCheck_3507_; 
lean_dec(v___x_3374_);
lean_dec_ref(v___f_3373_);
v_a_3500_ = lean_ctor_get(v___x_3380_, 0);
v_isSharedCheck_3507_ = !lean_is_exclusive(v___x_3380_);
if (v_isSharedCheck_3507_ == 0)
{
v___x_3502_ = v___x_3380_;
v_isShared_3503_ = v_isSharedCheck_3507_;
goto v_resetjp_3501_;
}
else
{
lean_inc(v_a_3500_);
lean_dec(v___x_3380_);
v___x_3502_ = lean_box(0);
v_isShared_3503_ = v_isSharedCheck_3507_;
goto v_resetjp_3501_;
}
v_resetjp_3501_:
{
lean_object* v___x_3505_; 
if (v_isShared_3503_ == 0)
{
v___x_3505_ = v___x_3502_;
goto v_reusejp_3504_;
}
else
{
lean_object* v_reuseFailAlloc_3506_; 
v_reuseFailAlloc_3506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3506_, 0, v_a_3500_);
v___x_3505_ = v_reuseFailAlloc_3506_;
goto v_reusejp_3504_;
}
v_reusejp_3504_:
{
return v___x_3505_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___boxed(lean_object* v___x_3508_, lean_object* v_attrInstance_3509_, lean_object* v___f_3510_, lean_object* v___x_3511_, lean_object* v___x_3512_, lean_object* v___x_3513_, lean_object* v___y_3514_, lean_object* v___y_3515_, lean_object* v___y_3516_){
_start:
{
lean_object* v_res_3517_; 
v_res_3517_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1(v___x_3508_, v_attrInstance_3509_, v___f_3510_, v___x_3511_, v___x_3512_, v___x_3513_, v___y_3514_, v___y_3515_);
lean_dec(v___y_3515_);
lean_dec_ref(v___y_3514_);
lean_dec(v___x_3513_);
lean_dec_ref(v___x_3512_);
lean_dec(v_attrInstance_3509_);
return v_res_3517_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0(lean_object* v_k_3525_){
_start:
{
lean_object* v___x_3526_; uint8_t v___x_3527_; 
v___x_3526_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0___closed__2));
v___x_3527_ = lean_name_eq(v_k_3525_, v___x_3526_);
if (v___x_3527_ == 0)
{
uint8_t v___x_3528_; 
v___x_3528_ = 1;
return v___x_3528_;
}
else
{
uint8_t v___x_3529_; 
v___x_3529_ = 0;
return v___x_3529_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0___boxed(lean_object* v_k_3530_){
_start:
{
uint8_t v_res_3531_; lean_object* v_r_3532_; 
v_res_3531_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0(v_k_3530_);
lean_dec(v_k_3530_);
v_r_3532_ = lean_box(v_res_3531_);
return v_r_3532_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34___redArg(lean_object* v_x_3533_, uint8_t v_when_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_){
_start:
{
if (v_when_3534_ == 0)
{
lean_object* v___x_3538_; 
lean_inc(v___y_3536_);
lean_inc_ref(v___y_3535_);
v___x_3538_ = lean_apply_3(v_x_3533_, v___y_3535_, v___y_3536_, lean_box(0));
return v___x_3538_;
}
else
{
uint8_t v___x_3539_; lean_object* v___x_3540_; 
v___x_3539_ = 0;
v___x_3540_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(v_x_3533_, v___x_3539_, v___y_3535_, v___y_3536_);
return v___x_3540_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34___redArg___boxed(lean_object* v_x_3541_, lean_object* v_when_3542_, lean_object* v___y_3543_, lean_object* v___y_3544_, lean_object* v___y_3545_){
_start:
{
uint8_t v_when_boxed_3546_; lean_object* v_res_3547_; 
v_when_boxed_3546_ = lean_unbox(v_when_3542_);
v_res_3547_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34___redArg(v_x_3541_, v_when_boxed_3546_, v___y_3543_, v___y_3544_);
lean_dec(v___y_3544_);
lean_dec_ref(v___y_3543_);
return v_res_3547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22(lean_object* v_attrInstance_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_){
_start:
{
lean_object* v___f_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___f_3559_; uint8_t v___x_3560_; lean_object* v___x_3561_; 
v___f_3553_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___closed__0));
v___x_3554_ = lean_box(0);
v___x_3555_ = l_Lean_instInhabitedEffectiveImport_default;
v___x_3556_ = lean_unsigned_to_nat(0u);
v___x_3557_ = l_Lean_Syntax_getArg(v_attrInstance_3549_, v___x_3556_);
v___x_3558_ = lean_alloc_closure((void*)(l_Lean_Elab_toAttributeKind___boxed), 3, 1);
lean_closure_set(v___x_3558_, 0, v___x_3557_);
v___f_3559_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___boxed), 9, 6);
lean_closure_set(v___f_3559_, 0, v___x_3558_);
lean_closure_set(v___f_3559_, 1, v_attrInstance_3549_);
lean_closure_set(v___f_3559_, 2, v___f_3553_);
lean_closure_set(v___f_3559_, 3, v___x_3554_);
lean_closure_set(v___f_3559_, 4, v___x_3555_);
lean_closure_set(v___f_3559_, 5, v___x_3556_);
v___x_3560_ = 1;
v___x_3561_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34___redArg(v___f_3559_, v___x_3560_, v___y_3550_, v___y_3551_);
return v___x_3561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___boxed(lean_object* v_attrInstance_3562_, lean_object* v___y_3563_, lean_object* v___y_3564_, lean_object* v___y_3565_){
_start:
{
lean_object* v_res_3566_; 
v_res_3566_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22(v_attrInstance_3562_, v___y_3563_, v___y_3564_);
lean_dec(v___y_3564_);
lean_dec_ref(v___y_3563_);
return v_res_3566_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__23(lean_object* v_as_3567_, size_t v_sz_3568_, size_t v_i_3569_, lean_object* v_b_3570_, lean_object* v___y_3571_, lean_object* v___y_3572_){
_start:
{
lean_object* v_snd_3575_; lean_object* v_a_3580_; uint8_t v___x_3592_; 
v___x_3592_ = lean_usize_dec_lt(v_i_3569_, v_sz_3568_);
if (v___x_3592_ == 0)
{
lean_object* v___x_3593_; 
v___x_3593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3593_, 0, v_b_3570_);
return v___x_3593_;
}
else
{
lean_object* v_a_3594_; lean_object* v___x_3595_; 
v_a_3594_ = lean_array_uget_borrowed(v_as_3567_, v_i_3569_);
v___x_3595_ = l_Lean_Elab_Command_getRef___redArg(v___y_3571_);
if (lean_obj_tag(v___x_3595_) == 0)
{
lean_object* v_a_3596_; lean_object* v_fileName_3597_; lean_object* v_fileMap_3598_; lean_object* v_currRecDepth_3599_; lean_object* v_cmdPos_3600_; lean_object* v_macroStack_3601_; lean_object* v_quotContext_x3f_3602_; lean_object* v_currMacroScope_3603_; lean_object* v_snap_x3f_3604_; lean_object* v_cancelTk_x3f_3605_; uint8_t v_suppressElabErrors_3606_; lean_object* v_ref_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; 
v_a_3596_ = lean_ctor_get(v___x_3595_, 0);
lean_inc(v_a_3596_);
lean_dec_ref_known(v___x_3595_, 1);
v_fileName_3597_ = lean_ctor_get(v___y_3571_, 0);
v_fileMap_3598_ = lean_ctor_get(v___y_3571_, 1);
v_currRecDepth_3599_ = lean_ctor_get(v___y_3571_, 2);
v_cmdPos_3600_ = lean_ctor_get(v___y_3571_, 3);
v_macroStack_3601_ = lean_ctor_get(v___y_3571_, 4);
v_quotContext_x3f_3602_ = lean_ctor_get(v___y_3571_, 5);
v_currMacroScope_3603_ = lean_ctor_get(v___y_3571_, 6);
v_snap_x3f_3604_ = lean_ctor_get(v___y_3571_, 8);
v_cancelTk_x3f_3605_ = lean_ctor_get(v___y_3571_, 9);
v_suppressElabErrors_3606_ = lean_ctor_get_uint8(v___y_3571_, sizeof(void*)*10);
v_ref_3607_ = l_Lean_replaceRef(v_a_3594_, v_a_3596_);
lean_dec(v_a_3596_);
lean_inc(v_cancelTk_x3f_3605_);
lean_inc(v_snap_x3f_3604_);
lean_inc(v_currMacroScope_3603_);
lean_inc(v_quotContext_x3f_3602_);
lean_inc(v_macroStack_3601_);
lean_inc(v_cmdPos_3600_);
lean_inc(v_currRecDepth_3599_);
lean_inc_ref(v_fileMap_3598_);
lean_inc_ref(v_fileName_3597_);
v___x_3608_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_3608_, 0, v_fileName_3597_);
lean_ctor_set(v___x_3608_, 1, v_fileMap_3598_);
lean_ctor_set(v___x_3608_, 2, v_currRecDepth_3599_);
lean_ctor_set(v___x_3608_, 3, v_cmdPos_3600_);
lean_ctor_set(v___x_3608_, 4, v_macroStack_3601_);
lean_ctor_set(v___x_3608_, 5, v_quotContext_x3f_3602_);
lean_ctor_set(v___x_3608_, 6, v_currMacroScope_3603_);
lean_ctor_set(v___x_3608_, 7, v_ref_3607_);
lean_ctor_set(v___x_3608_, 8, v_snap_x3f_3604_);
lean_ctor_set(v___x_3608_, 9, v_cancelTk_x3f_3605_);
lean_ctor_set_uint8(v___x_3608_, sizeof(void*)*10, v_suppressElabErrors_3606_);
lean_inc(v_a_3594_);
v___x_3609_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22(v_a_3594_, v___x_3608_, v___y_3572_);
lean_dec_ref_known(v___x_3608_, 10);
if (lean_obj_tag(v___x_3609_) == 0)
{
lean_object* v_a_3610_; lean_object* v___x_3611_; 
v_a_3610_ = lean_ctor_get(v___x_3609_, 0);
lean_inc(v_a_3610_);
lean_dec_ref_known(v___x_3609_, 1);
v___x_3611_ = lean_array_push(v_b_3570_, v_a_3610_);
v_snd_3575_ = v___x_3611_;
goto v___jp_3574_;
}
else
{
lean_object* v_a_3612_; 
v_a_3612_ = lean_ctor_get(v___x_3609_, 0);
lean_inc(v_a_3612_);
lean_dec_ref_known(v___x_3609_, 1);
v_a_3580_ = v_a_3612_;
goto v___jp_3579_;
}
}
else
{
lean_object* v_a_3613_; 
v_a_3613_ = lean_ctor_get(v___x_3595_, 0);
lean_inc(v_a_3613_);
lean_dec_ref_known(v___x_3595_, 1);
v_a_3580_ = v_a_3613_;
goto v___jp_3579_;
}
}
v___jp_3574_:
{
size_t v___x_3576_; size_t v___x_3577_; 
v___x_3576_ = ((size_t)1ULL);
v___x_3577_ = lean_usize_add(v_i_3569_, v___x_3576_);
v_i_3569_ = v___x_3577_;
v_b_3570_ = v_snd_3575_;
goto _start;
}
v___jp_3579_:
{
uint8_t v___x_3581_; 
v___x_3581_ = l_Lean_Exception_isInterrupt(v_a_3580_);
if (v___x_3581_ == 0)
{
lean_object* v___x_3582_; 
v___x_3582_ = l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21(v_a_3580_, v___y_3571_, v___y_3572_);
if (lean_obj_tag(v___x_3582_) == 0)
{
lean_dec_ref_known(v___x_3582_, 1);
v_snd_3575_ = v_b_3570_;
goto v___jp_3574_;
}
else
{
lean_object* v_a_3583_; lean_object* v___x_3585_; uint8_t v_isShared_3586_; uint8_t v_isSharedCheck_3590_; 
lean_dec_ref(v_b_3570_);
v_a_3583_ = lean_ctor_get(v___x_3582_, 0);
v_isSharedCheck_3590_ = !lean_is_exclusive(v___x_3582_);
if (v_isSharedCheck_3590_ == 0)
{
v___x_3585_ = v___x_3582_;
v_isShared_3586_ = v_isSharedCheck_3590_;
goto v_resetjp_3584_;
}
else
{
lean_inc(v_a_3583_);
lean_dec(v___x_3582_);
v___x_3585_ = lean_box(0);
v_isShared_3586_ = v_isSharedCheck_3590_;
goto v_resetjp_3584_;
}
v_resetjp_3584_:
{
lean_object* v___x_3588_; 
if (v_isShared_3586_ == 0)
{
v___x_3588_ = v___x_3585_;
goto v_reusejp_3587_;
}
else
{
lean_object* v_reuseFailAlloc_3589_; 
v_reuseFailAlloc_3589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3589_, 0, v_a_3583_);
v___x_3588_ = v_reuseFailAlloc_3589_;
goto v_reusejp_3587_;
}
v_reusejp_3587_:
{
return v___x_3588_;
}
}
}
}
else
{
lean_object* v___x_3591_; 
lean_dec_ref(v_b_3570_);
v___x_3591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3591_, 0, v_a_3580_);
return v___x_3591_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__23___boxed(lean_object* v_as_3614_, lean_object* v_sz_3615_, lean_object* v_i_3616_, lean_object* v_b_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_){
_start:
{
size_t v_sz_boxed_3621_; size_t v_i_boxed_3622_; lean_object* v_res_3623_; 
v_sz_boxed_3621_ = lean_unbox_usize(v_sz_3615_);
lean_dec(v_sz_3615_);
v_i_boxed_3622_ = lean_unbox_usize(v_i_3616_);
lean_dec(v_i_3616_);
v_res_3623_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__23(v_as_3614_, v_sz_boxed_3621_, v_i_boxed_3622_, v_b_3617_, v___y_3618_, v___y_3619_);
lean_dec(v___y_3619_);
lean_dec_ref(v___y_3618_);
lean_dec_ref(v_as_3614_);
return v_res_3623_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7(lean_object* v_attrInstances_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_){
_start:
{
lean_object* v_attrs_3630_; size_t v_sz_3631_; size_t v___x_3632_; lean_object* v___x_3633_; 
v_attrs_3630_ = ((lean_object*)(l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7___closed__0));
v_sz_3631_ = lean_array_size(v_attrInstances_3626_);
v___x_3632_ = ((size_t)0ULL);
v___x_3633_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__23(v_attrInstances_3626_, v_sz_3631_, v___x_3632_, v_attrs_3630_, v___y_3627_, v___y_3628_);
return v___x_3633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7___boxed(lean_object* v_attrInstances_3634_, lean_object* v___y_3635_, lean_object* v___y_3636_, lean_object* v___y_3637_){
_start:
{
lean_object* v_res_3638_; 
v_res_3638_ = l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7(v_attrInstances_3634_, v___y_3635_, v___y_3636_);
lean_dec(v___y_3636_);
lean_dec_ref(v___y_3635_);
lean_dec_ref(v_attrInstances_3634_);
return v_res_3638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2(lean_object* v_stx_3639_, lean_object* v___y_3640_, lean_object* v___y_3641_){
_start:
{
lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; 
v___x_3643_ = lean_unsigned_to_nat(1u);
v___x_3644_ = l_Lean_Syntax_getArg(v_stx_3639_, v___x_3643_);
v___x_3645_ = l_Lean_Syntax_getSepArgs(v___x_3644_);
lean_dec(v___x_3644_);
v___x_3646_ = l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7(v___x_3645_, v___y_3640_, v___y_3641_);
lean_dec_ref(v___x_3645_);
return v___x_3646_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2___boxed(lean_object* v_stx_3647_, lean_object* v___y_3648_, lean_object* v___y_3649_, lean_object* v___y_3650_){
_start:
{
lean_object* v_res_3651_; 
v_res_3651_ = l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2(v_stx_3647_, v___y_3648_, v___y_3649_);
lean_dec(v___y_3649_);
lean_dec_ref(v___y_3648_);
lean_dec(v_stx_3647_);
return v_res_3651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1(lean_object* v_stx_3663_, lean_object* v___y_3664_, lean_object* v___y_3665_){
_start:
{
uint8_t v___y_3668_; uint8_t v___y_3669_; uint8_t v___y_3670_; uint8_t v___y_3671_; lean_object* v___y_3672_; lean_object* v___y_3673_; uint8_t v___y_3674_; uint8_t v___y_3678_; uint8_t v___y_3679_; uint8_t v___y_3680_; lean_object* v___y_3681_; uint8_t v___y_3682_; lean_object* v___y_3683_; lean_object* v_attrs_3684_; lean_object* v___x_3688_; lean_object* v_docCommentStx_3689_; lean_object* v___x_3690_; lean_object* v_attrsStx_3691_; uint8_t v___y_3693_; uint8_t v___y_3694_; uint8_t v___y_3695_; lean_object* v___y_3696_; lean_object* v___y_3697_; uint8_t v___y_3698_; lean_object* v___x_3712_; lean_object* v_visibilityStx_3713_; lean_object* v___x_3714_; lean_object* v_protectedStx_3715_; uint8_t v___y_3717_; lean_object* v___y_3718_; uint8_t v___y_3719_; lean_object* v___y_3720_; lean_object* v___y_3721_; uint8_t v___y_3738_; uint8_t v___y_3739_; lean_object* v___y_3740_; lean_object* v___y_3741_; uint8_t v___y_3753_; lean_object* v___y_3754_; uint8_t v___y_3755_; uint8_t v___y_3767_; lean_object* v___x_3780_; lean_object* v___x_3781_; uint8_t v___x_3782_; 
v___x_3688_ = lean_unsigned_to_nat(0u);
v_docCommentStx_3689_ = l_Lean_Syntax_getArg(v_stx_3663_, v___x_3688_);
v___x_3690_ = lean_unsigned_to_nat(1u);
v_attrsStx_3691_ = l_Lean_Syntax_getArg(v_stx_3663_, v___x_3690_);
v___x_3712_ = lean_unsigned_to_nat(2u);
v_visibilityStx_3713_ = l_Lean_Syntax_getArg(v_stx_3663_, v___x_3712_);
v___x_3714_ = lean_unsigned_to_nat(3u);
v_protectedStx_3715_ = l_Lean_Syntax_getArg(v_stx_3663_, v___x_3714_);
v___x_3780_ = lean_unsigned_to_nat(4u);
v___x_3781_ = l_Lean_Syntax_getArg(v_stx_3663_, v___x_3780_);
v___x_3782_ = l_Lean_Syntax_isNone(v___x_3781_);
if (v___x_3782_ == 0)
{
lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; uint8_t v___x_3786_; 
v___x_3783_ = l_Lean_Syntax_getArg(v___x_3781_, v___x_3688_);
lean_dec(v___x_3781_);
v___x_3784_ = l_Lean_Syntax_getKind(v___x_3783_);
v___x_3785_ = ((lean_object*)(l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__2));
v___x_3786_ = lean_name_eq(v___x_3784_, v___x_3785_);
lean_dec(v___x_3784_);
if (v___x_3786_ == 0)
{
uint8_t v___x_3787_; 
v___x_3787_ = 2;
v___y_3767_ = v___x_3787_;
goto v___jp_3766_;
}
else
{
uint8_t v___x_3788_; 
v___x_3788_ = 1;
v___y_3767_ = v___x_3788_;
goto v___jp_3766_;
}
}
else
{
uint8_t v___x_3789_; 
lean_dec(v___x_3781_);
v___x_3789_ = 0;
v___y_3767_ = v___x_3789_;
goto v___jp_3766_;
}
v___jp_3667_:
{
lean_object* v___x_3675_; lean_object* v___x_3676_; 
v___x_3675_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_3675_, 0, v_stx_3663_);
lean_ctor_set(v___x_3675_, 1, v___y_3672_);
lean_ctor_set(v___x_3675_, 2, v___y_3673_);
lean_ctor_set_uint8(v___x_3675_, sizeof(void*)*3, v___y_3668_);
lean_ctor_set_uint8(v___x_3675_, sizeof(void*)*3 + 1, v___y_3670_);
lean_ctor_set_uint8(v___x_3675_, sizeof(void*)*3 + 2, v___y_3669_);
lean_ctor_set_uint8(v___x_3675_, sizeof(void*)*3 + 3, v___y_3671_);
lean_ctor_set_uint8(v___x_3675_, sizeof(void*)*3 + 4, v___y_3674_);
v___x_3676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3676_, 0, v___x_3675_);
return v___x_3676_;
}
v___jp_3677_:
{
uint8_t v___x_3685_; 
v___x_3685_ = l_Lean_Syntax_isNone(v___y_3683_);
lean_dec(v___y_3683_);
if (v___x_3685_ == 0)
{
uint8_t v___x_3686_; 
v___x_3686_ = 1;
v___y_3668_ = v___y_3678_;
v___y_3669_ = v___y_3679_;
v___y_3670_ = v___y_3680_;
v___y_3671_ = v___y_3682_;
v___y_3672_ = v___y_3681_;
v___y_3673_ = v_attrs_3684_;
v___y_3674_ = v___x_3686_;
goto v___jp_3667_;
}
else
{
uint8_t v___x_3687_; 
v___x_3687_ = 0;
v___y_3668_ = v___y_3678_;
v___y_3669_ = v___y_3679_;
v___y_3670_ = v___y_3680_;
v___y_3671_ = v___y_3682_;
v___y_3672_ = v___y_3681_;
v___y_3673_ = v_attrs_3684_;
v___y_3674_ = v___x_3687_;
goto v___jp_3667_;
}
}
v___jp_3692_:
{
lean_object* v___x_3699_; 
v___x_3699_ = l_Lean_Syntax_getOptional_x3f(v_attrsStx_3691_);
lean_dec(v_attrsStx_3691_);
if (lean_obj_tag(v___x_3699_) == 0)
{
lean_object* v___x_3700_; 
v___x_3700_ = ((lean_object*)(l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7___closed__0));
v___y_3678_ = v___y_3693_;
v___y_3679_ = v___y_3694_;
v___y_3680_ = v___y_3698_;
v___y_3681_ = v___y_3696_;
v___y_3682_ = v___y_3695_;
v___y_3683_ = v___y_3697_;
v_attrs_3684_ = v___x_3700_;
goto v___jp_3677_;
}
else
{
lean_object* v_val_3701_; lean_object* v___x_3702_; 
v_val_3701_ = lean_ctor_get(v___x_3699_, 0);
lean_inc(v_val_3701_);
lean_dec_ref_known(v___x_3699_, 1);
v___x_3702_ = l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2(v_val_3701_, v___y_3664_, v___y_3665_);
lean_dec(v_val_3701_);
if (lean_obj_tag(v___x_3702_) == 0)
{
lean_object* v_a_3703_; 
v_a_3703_ = lean_ctor_get(v___x_3702_, 0);
lean_inc(v_a_3703_);
lean_dec_ref_known(v___x_3702_, 1);
v___y_3678_ = v___y_3693_;
v___y_3679_ = v___y_3694_;
v___y_3680_ = v___y_3698_;
v___y_3681_ = v___y_3696_;
v___y_3682_ = v___y_3695_;
v___y_3683_ = v___y_3697_;
v_attrs_3684_ = v_a_3703_;
goto v___jp_3677_;
}
else
{
lean_object* v_a_3704_; lean_object* v___x_3706_; uint8_t v_isShared_3707_; uint8_t v_isSharedCheck_3711_; 
lean_dec(v___y_3697_);
lean_dec(v___y_3696_);
lean_dec(v_stx_3663_);
v_a_3704_ = lean_ctor_get(v___x_3702_, 0);
v_isSharedCheck_3711_ = !lean_is_exclusive(v___x_3702_);
if (v_isSharedCheck_3711_ == 0)
{
v___x_3706_ = v___x_3702_;
v_isShared_3707_ = v_isSharedCheck_3711_;
goto v_resetjp_3705_;
}
else
{
lean_inc(v_a_3704_);
lean_dec(v___x_3702_);
v___x_3706_ = lean_box(0);
v_isShared_3707_ = v_isSharedCheck_3711_;
goto v_resetjp_3705_;
}
v_resetjp_3705_:
{
lean_object* v___x_3709_; 
if (v_isShared_3707_ == 0)
{
v___x_3709_ = v___x_3706_;
goto v_reusejp_3708_;
}
else
{
lean_object* v_reuseFailAlloc_3710_; 
v_reuseFailAlloc_3710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3710_, 0, v_a_3704_);
v___x_3709_ = v_reuseFailAlloc_3710_;
goto v_reusejp_3708_;
}
v_reusejp_3708_:
{
return v___x_3709_;
}
}
}
}
}
v___jp_3716_:
{
lean_object* v___x_3722_; 
v___x_3722_ = l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1(v___y_3721_, v___y_3664_, v___y_3665_);
if (lean_obj_tag(v___x_3722_) == 0)
{
lean_object* v_a_3723_; uint8_t v___x_3724_; 
v_a_3723_ = lean_ctor_get(v___x_3722_, 0);
lean_inc(v_a_3723_);
lean_dec_ref_known(v___x_3722_, 1);
v___x_3724_ = l_Lean_Syntax_isNone(v_protectedStx_3715_);
lean_dec(v_protectedStx_3715_);
if (v___x_3724_ == 0)
{
uint8_t v___x_3725_; uint8_t v___x_3726_; 
v___x_3725_ = 1;
v___x_3726_ = lean_unbox(v_a_3723_);
lean_dec(v_a_3723_);
v___y_3693_ = v___x_3726_;
v___y_3694_ = v___y_3717_;
v___y_3695_ = v___y_3719_;
v___y_3696_ = v___y_3718_;
v___y_3697_ = v___y_3720_;
v___y_3698_ = v___x_3725_;
goto v___jp_3692_;
}
else
{
uint8_t v___x_3727_; uint8_t v___x_3728_; 
v___x_3727_ = 0;
v___x_3728_ = lean_unbox(v_a_3723_);
lean_dec(v_a_3723_);
v___y_3693_ = v___x_3728_;
v___y_3694_ = v___y_3717_;
v___y_3695_ = v___y_3719_;
v___y_3696_ = v___y_3718_;
v___y_3697_ = v___y_3720_;
v___y_3698_ = v___x_3727_;
goto v___jp_3692_;
}
}
else
{
lean_object* v_a_3729_; lean_object* v___x_3731_; uint8_t v_isShared_3732_; uint8_t v_isSharedCheck_3736_; 
lean_dec(v___y_3720_);
lean_dec(v___y_3718_);
lean_dec(v_protectedStx_3715_);
lean_dec(v_attrsStx_3691_);
lean_dec(v_stx_3663_);
v_a_3729_ = lean_ctor_get(v___x_3722_, 0);
v_isSharedCheck_3736_ = !lean_is_exclusive(v___x_3722_);
if (v_isSharedCheck_3736_ == 0)
{
v___x_3731_ = v___x_3722_;
v_isShared_3732_ = v_isSharedCheck_3736_;
goto v_resetjp_3730_;
}
else
{
lean_inc(v_a_3729_);
lean_dec(v___x_3722_);
v___x_3731_ = lean_box(0);
v_isShared_3732_ = v_isSharedCheck_3736_;
goto v_resetjp_3730_;
}
v_resetjp_3730_:
{
lean_object* v___x_3734_; 
if (v_isShared_3732_ == 0)
{
v___x_3734_ = v___x_3731_;
goto v_reusejp_3733_;
}
else
{
lean_object* v_reuseFailAlloc_3735_; 
v_reuseFailAlloc_3735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3735_, 0, v_a_3729_);
v___x_3734_ = v_reuseFailAlloc_3735_;
goto v_reusejp_3733_;
}
v_reusejp_3733_:
{
return v___x_3734_;
}
}
}
}
v___jp_3737_:
{
lean_object* v___x_3742_; 
v___x_3742_ = l_Lean_Syntax_getOptional_x3f(v_visibilityStx_3713_);
lean_dec(v_visibilityStx_3713_);
if (lean_obj_tag(v___x_3742_) == 0)
{
lean_object* v___x_3743_; 
v___x_3743_ = lean_box(0);
v___y_3717_ = v___y_3738_;
v___y_3718_ = v___y_3741_;
v___y_3719_ = v___y_3739_;
v___y_3720_ = v___y_3740_;
v___y_3721_ = v___x_3743_;
goto v___jp_3716_;
}
else
{
lean_object* v_val_3744_; lean_object* v___x_3746_; uint8_t v_isShared_3747_; uint8_t v_isSharedCheck_3751_; 
v_val_3744_ = lean_ctor_get(v___x_3742_, 0);
v_isSharedCheck_3751_ = !lean_is_exclusive(v___x_3742_);
if (v_isSharedCheck_3751_ == 0)
{
v___x_3746_ = v___x_3742_;
v_isShared_3747_ = v_isSharedCheck_3751_;
goto v_resetjp_3745_;
}
else
{
lean_inc(v_val_3744_);
lean_dec(v___x_3742_);
v___x_3746_ = lean_box(0);
v_isShared_3747_ = v_isSharedCheck_3751_;
goto v_resetjp_3745_;
}
v_resetjp_3745_:
{
lean_object* v___x_3749_; 
if (v_isShared_3747_ == 0)
{
v___x_3749_ = v___x_3746_;
goto v_reusejp_3748_;
}
else
{
lean_object* v_reuseFailAlloc_3750_; 
v_reuseFailAlloc_3750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3750_, 0, v_val_3744_);
v___x_3749_ = v_reuseFailAlloc_3750_;
goto v_reusejp_3748_;
}
v_reusejp_3748_:
{
v___y_3717_ = v___y_3738_;
v___y_3718_ = v___y_3741_;
v___y_3719_ = v___y_3739_;
v___y_3720_ = v___y_3740_;
v___y_3721_ = v___x_3749_;
goto v___jp_3716_;
}
}
}
}
v___jp_3752_:
{
lean_object* v___x_3756_; 
v___x_3756_ = l_Lean_Syntax_getOptional_x3f(v_docCommentStx_3689_);
lean_dec(v_docCommentStx_3689_);
if (lean_obj_tag(v___x_3756_) == 0)
{
lean_object* v___x_3757_; 
v___x_3757_ = lean_box(0);
v___y_3738_ = v___y_3753_;
v___y_3739_ = v___y_3755_;
v___y_3740_ = v___y_3754_;
v___y_3741_ = v___x_3757_;
goto v___jp_3737_;
}
else
{
lean_object* v_val_3758_; lean_object* v___x_3760_; uint8_t v_isShared_3761_; uint8_t v_isSharedCheck_3765_; 
v_val_3758_ = lean_ctor_get(v___x_3756_, 0);
v_isSharedCheck_3765_ = !lean_is_exclusive(v___x_3756_);
if (v_isSharedCheck_3765_ == 0)
{
v___x_3760_ = v___x_3756_;
v_isShared_3761_ = v_isSharedCheck_3765_;
goto v_resetjp_3759_;
}
else
{
lean_inc(v_val_3758_);
lean_dec(v___x_3756_);
v___x_3760_ = lean_box(0);
v_isShared_3761_ = v_isSharedCheck_3765_;
goto v_resetjp_3759_;
}
v_resetjp_3759_:
{
lean_object* v___x_3763_; 
if (v_isShared_3761_ == 0)
{
v___x_3763_ = v___x_3760_;
goto v_reusejp_3762_;
}
else
{
lean_object* v_reuseFailAlloc_3764_; 
v_reuseFailAlloc_3764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3764_, 0, v_val_3758_);
v___x_3763_ = v_reuseFailAlloc_3764_;
goto v_reusejp_3762_;
}
v_reusejp_3762_:
{
v___y_3738_ = v___y_3753_;
v___y_3739_ = v___y_3755_;
v___y_3740_ = v___y_3754_;
v___y_3741_ = v___x_3763_;
goto v___jp_3737_;
}
}
}
}
v___jp_3766_:
{
lean_object* v___x_3768_; lean_object* v_unsafeStx_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; uint8_t v___x_3772_; 
v___x_3768_ = lean_unsigned_to_nat(5u);
v_unsafeStx_3769_ = l_Lean_Syntax_getArg(v_stx_3663_, v___x_3768_);
v___x_3770_ = lean_unsigned_to_nat(6u);
v___x_3771_ = l_Lean_Syntax_getArg(v_stx_3663_, v___x_3770_);
v___x_3772_ = l_Lean_Syntax_isNone(v___x_3771_);
if (v___x_3772_ == 0)
{
lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; uint8_t v___x_3776_; 
v___x_3773_ = l_Lean_Syntax_getArg(v___x_3771_, v___x_3688_);
lean_dec(v___x_3771_);
v___x_3774_ = l_Lean_Syntax_getKind(v___x_3773_);
v___x_3775_ = ((lean_object*)(l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__1));
v___x_3776_ = lean_name_eq(v___x_3774_, v___x_3775_);
lean_dec(v___x_3774_);
if (v___x_3776_ == 0)
{
uint8_t v___x_3777_; 
v___x_3777_ = 1;
v___y_3753_ = v___y_3767_;
v___y_3754_ = v_unsafeStx_3769_;
v___y_3755_ = v___x_3777_;
goto v___jp_3752_;
}
else
{
uint8_t v___x_3778_; 
v___x_3778_ = 0;
v___y_3753_ = v___y_3767_;
v___y_3754_ = v_unsafeStx_3769_;
v___y_3755_ = v___x_3778_;
goto v___jp_3752_;
}
}
else
{
uint8_t v___x_3779_; 
lean_dec(v___x_3771_);
v___x_3779_ = 2;
v___y_3753_ = v___y_3767_;
v___y_3754_ = v_unsafeStx_3769_;
v___y_3755_ = v___x_3779_;
goto v___jp_3752_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___boxed(lean_object* v_stx_3790_, lean_object* v___y_3791_, lean_object* v___y_3792_, lean_object* v___y_3793_){
_start:
{
lean_object* v_res_3794_; 
v_res_3794_ = l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1(v_stx_3790_, v___y_3791_, v___y_3792_);
lean_dec(v___y_3792_);
lean_dec_ref(v___y_3791_);
return v_res_3794_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__1(lean_object* v_mods_3795_, lean_object* v___x_3796_, lean_object* v_projId_3797_, lean_object* v___x_3798_, lean_object* v___x_3799_, lean_object* v___x_3800_, lean_object* v_params_3801_, lean_object* v___x_3802_, lean_object* v___x_3803_, lean_object* v___y_3804_, lean_object* v___y_3805_){
_start:
{
lean_object* v___x_3807_; 
lean_inc(v_mods_3795_);
v___x_3807_ = l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1(v_mods_3795_, v___y_3804_, v___y_3805_);
if (lean_obj_tag(v___x_3807_) == 0)
{
lean_object* v_a_3808_; lean_object* v___f_3809_; lean_object* v___x_3810_; lean_object* v_env_3811_; uint8_t v___x_3812_; lean_object* v___x_3813_; 
v_a_3808_ = lean_ctor_get(v___x_3807_, 0);
lean_inc_n(v_a_3808_, 2);
lean_dec_ref_known(v___x_3807_, 1);
v___f_3809_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___lam__0___boxed), 13, 10);
lean_closure_set(v___f_3809_, 0, v___x_3796_);
lean_closure_set(v___f_3809_, 1, v_a_3808_);
lean_closure_set(v___f_3809_, 2, v_projId_3797_);
lean_closure_set(v___f_3809_, 3, v___x_3798_);
lean_closure_set(v___f_3809_, 4, v___x_3799_);
lean_closure_set(v___f_3809_, 5, v___x_3800_);
lean_closure_set(v___f_3809_, 6, v_params_3801_);
lean_closure_set(v___f_3809_, 7, v___x_3802_);
lean_closure_set(v___f_3809_, 8, v_mods_3795_);
lean_closure_set(v___f_3809_, 9, v___x_3803_);
v___x_3810_ = lean_st_ref_get(v___y_3805_);
v_env_3811_ = lean_ctor_get(v___x_3810_, 0);
lean_inc_ref(v_env_3811_);
lean_dec(v___x_3810_);
v___x_3812_ = l_Lean_Elab_Modifiers_isInferredPublic(v_env_3811_, v_a_3808_);
lean_dec(v_a_3808_);
lean_dec_ref(v_env_3811_);
v___x_3813_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(v___f_3809_, v___x_3812_, v___y_3804_, v___y_3805_);
return v___x_3813_;
}
else
{
lean_object* v_a_3814_; lean_object* v___x_3816_; uint8_t v_isShared_3817_; uint8_t v_isSharedCheck_3821_; 
lean_dec(v___x_3803_);
lean_dec(v___x_3802_);
lean_dec_ref(v_params_3801_);
lean_dec_ref(v___x_3800_);
lean_dec_ref(v___x_3799_);
lean_dec_ref(v___x_3798_);
lean_dec(v_projId_3797_);
lean_dec(v___x_3796_);
lean_dec(v_mods_3795_);
v_a_3814_ = lean_ctor_get(v___x_3807_, 0);
v_isSharedCheck_3821_ = !lean_is_exclusive(v___x_3807_);
if (v_isSharedCheck_3821_ == 0)
{
v___x_3816_ = v___x_3807_;
v_isShared_3817_ = v_isSharedCheck_3821_;
goto v_resetjp_3815_;
}
else
{
lean_inc(v_a_3814_);
lean_dec(v___x_3807_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__1___boxed(lean_object* v_mods_3822_, lean_object* v___x_3823_, lean_object* v_projId_3824_, lean_object* v___x_3825_, lean_object* v___x_3826_, lean_object* v___x_3827_, lean_object* v_params_3828_, lean_object* v___x_3829_, lean_object* v___x_3830_, lean_object* v___y_3831_, lean_object* v___y_3832_, lean_object* v___y_3833_){
_start:
{
lean_object* v_res_3834_; 
v_res_3834_ = l_Lean_Elab_Command_elabNewtype___lam__1(v_mods_3822_, v___x_3823_, v_projId_3824_, v___x_3825_, v___x_3826_, v___x_3827_, v_params_3828_, v___x_3829_, v___x_3830_, v___y_3831_, v___y_3832_);
lean_dec(v___y_3832_);
lean_dec_ref(v___y_3831_);
return v_res_3834_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype(lean_object* v_x_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_){
_start:
{
lean_object* v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; uint8_t v___x_3858_; 
v___x_3854_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__5));
v___x_3855_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__6));
v___x_3856_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__7));
v___x_3857_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___closed__1));
lean_inc(v_x_3850_);
v___x_3858_ = l_Lean_Syntax_isOfKind(v_x_3850_, v___x_3857_);
if (v___x_3858_ == 0)
{
lean_object* v___x_3859_; 
lean_dec(v_x_3850_);
v___x_3859_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg();
return v___x_3859_;
}
else
{
lean_object* v___x_3860_; lean_object* v_mods_3861_; lean_object* v___x_3862_; uint8_t v___x_3863_; 
v___x_3860_ = lean_unsigned_to_nat(0u);
v_mods_3861_ = l_Lean_Syntax_getArg(v_x_3850_, v___x_3860_);
v___x_3862_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___closed__3));
lean_inc(v_mods_3861_);
v___x_3863_ = l_Lean_Syntax_isOfKind(v_mods_3861_, v___x_3862_);
if (v___x_3863_ == 0)
{
lean_object* v___x_3864_; 
lean_dec(v_mods_3861_);
lean_dec(v_x_3850_);
v___x_3864_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg();
return v___x_3864_;
}
else
{
lean_object* v___x_3865_; lean_object* v_projId_3866_; lean_object* v___x_3867_; uint8_t v___x_3868_; 
v___x_3865_ = lean_unsigned_to_nat(7u);
v_projId_3866_ = l_Lean_Syntax_getArg(v_x_3850_, v___x_3865_);
v___x_3867_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___closed__5));
lean_inc(v_projId_3866_);
v___x_3868_ = l_Lean_Syntax_isOfKind(v_projId_3866_, v___x_3867_);
if (v___x_3868_ == 0)
{
lean_object* v___x_3869_; 
lean_dec(v_projId_3866_);
lean_dec(v_mods_3861_);
lean_dec(v_x_3850_);
v___x_3869_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg();
return v___x_3869_;
}
else
{
lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v_params_3877_; lean_object* v___f_3878_; lean_object* v___x_3879_; 
v___x_3870_ = lean_unsigned_to_nat(2u);
v___x_3871_ = l_Lean_Syntax_getArg(v_x_3850_, v___x_3870_);
v___x_3872_ = lean_unsigned_to_nat(3u);
v___x_3873_ = l_Lean_Syntax_getArg(v_x_3850_, v___x_3872_);
v___x_3874_ = lean_unsigned_to_nat(5u);
v___x_3875_ = l_Lean_Syntax_getArg(v_x_3850_, v___x_3874_);
lean_dec(v_x_3850_);
v___x_3876_ = lean_box(0);
v_params_3877_ = l_Lean_Syntax_getArgs(v___x_3873_);
lean_dec(v___x_3873_);
v___f_3878_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___lam__1___boxed), 12, 9);
lean_closure_set(v___f_3878_, 0, v_mods_3861_);
lean_closure_set(v___f_3878_, 1, v___x_3871_);
lean_closure_set(v___f_3878_, 2, v_projId_3866_);
lean_closure_set(v___f_3878_, 3, v___x_3854_);
lean_closure_set(v___f_3878_, 4, v___x_3855_);
lean_closure_set(v___f_3878_, 5, v___x_3856_);
lean_closure_set(v___f_3878_, 6, v_params_3877_);
lean_closure_set(v___f_3878_, 7, v___x_3875_);
lean_closure_set(v___f_3878_, 8, v___x_3876_);
v___x_3879_ = l_Lean_Elab_Command_getScope___redArg(v___y_3852_);
if (lean_obj_tag(v___x_3879_) == 0)
{
lean_object* v_a_3880_; uint8_t v_isPublic_3881_; lean_object* v___x_3882_; 
v_a_3880_ = lean_ctor_get(v___x_3879_, 0);
lean_inc(v_a_3880_);
lean_dec_ref_known(v___x_3879_, 1);
v_isPublic_3881_ = lean_ctor_get_uint8(v_a_3880_, sizeof(void*)*10 + 1);
lean_dec(v_a_3880_);
v___x_3882_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(v___f_3878_, v_isPublic_3881_, v___y_3851_, v___y_3852_);
return v___x_3882_;
}
else
{
lean_object* v_a_3883_; lean_object* v___x_3885_; uint8_t v_isShared_3886_; uint8_t v_isSharedCheck_3890_; 
lean_dec_ref(v___f_3878_);
v_a_3883_ = lean_ctor_get(v___x_3879_, 0);
v_isSharedCheck_3890_ = !lean_is_exclusive(v___x_3879_);
if (v_isSharedCheck_3890_ == 0)
{
v___x_3885_ = v___x_3879_;
v_isShared_3886_ = v_isSharedCheck_3890_;
goto v_resetjp_3884_;
}
else
{
lean_inc(v_a_3883_);
lean_dec(v___x_3879_);
v___x_3885_ = lean_box(0);
v_isShared_3886_ = v_isSharedCheck_3890_;
goto v_resetjp_3884_;
}
v_resetjp_3884_:
{
lean_object* v___x_3888_; 
if (v_isShared_3886_ == 0)
{
v___x_3888_ = v___x_3885_;
goto v_reusejp_3887_;
}
else
{
lean_object* v_reuseFailAlloc_3889_; 
v_reuseFailAlloc_3889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3889_, 0, v_a_3883_);
v___x_3888_ = v_reuseFailAlloc_3889_;
goto v_reusejp_3887_;
}
v_reusejp_3887_:
{
return v___x_3888_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___boxed(lean_object* v_x_3891_, lean_object* v___y_3892_, lean_object* v___y_3893_, lean_object* v___y_3894_){
_start:
{
lean_object* v_res_3895_; 
v_res_3895_ = l_Lean_Elab_Command_elabNewtype(v_x_3891_, v___y_3892_, v___y_3893_);
lean_dec(v___y_3893_);
lean_dec_ref(v___y_3892_);
return v_res_3895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6(lean_object* v_stx_3896_, lean_object* v___y_3897_, lean_object* v___y_3898_){
_start:
{
lean_object* v___x_3900_; 
v___x_3900_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___redArg(v_stx_3896_, v___y_3897_);
return v___x_3900_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___boxed(lean_object* v_stx_3901_, lean_object* v___y_3902_, lean_object* v___y_3903_, lean_object* v___y_3904_){
_start:
{
lean_object* v_res_3905_; 
v_res_3905_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6(v_stx_3901_, v___y_3902_, v___y_3903_);
lean_dec(v___y_3903_);
lean_dec_ref(v___y_3902_);
lean_dec(v_stx_3901_);
return v_res_3905_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7(lean_object* v_declName_3906_, lean_object* v_declRanges_3907_, lean_object* v___y_3908_, lean_object* v___y_3909_){
_start:
{
lean_object* v___x_3911_; 
v___x_3911_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7___redArg(v_declName_3906_, v_declRanges_3907_, v___y_3909_);
return v___x_3911_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7___boxed(lean_object* v_declName_3912_, lean_object* v_declRanges_3913_, lean_object* v___y_3914_, lean_object* v___y_3915_, lean_object* v___y_3916_){
_start:
{
lean_object* v_res_3917_; 
v_res_3917_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7(v_declName_3912_, v_declRanges_3913_, v___y_3914_, v___y_3915_);
lean_dec(v___y_3915_);
lean_dec_ref(v___y_3914_);
return v_res_3917_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12(lean_object* v_declName_3918_, uint8_t v_s_3919_, lean_object* v___y_3920_, lean_object* v___y_3921_){
_start:
{
lean_object* v___x_3923_; 
v___x_3923_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12___redArg(v_declName_3918_, v_s_3919_, v___y_3921_);
return v___x_3923_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12___boxed(lean_object* v_declName_3924_, lean_object* v_s_3925_, lean_object* v___y_3926_, lean_object* v___y_3927_, lean_object* v___y_3928_){
_start:
{
uint8_t v_s_boxed_3929_; lean_object* v_res_3930_; 
v_s_boxed_3929_ = lean_unbox(v_s_3925_);
v_res_3930_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12(v_declName_3924_, v_s_boxed_3929_, v___y_3926_, v___y_3927_);
lean_dec(v___y_3927_);
lean_dec_ref(v___y_3926_);
return v_res_3930_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7(lean_object* v_as_3931_, lean_object* v_as_x27_3932_, lean_object* v_b_3933_, lean_object* v_a_3934_, lean_object* v___y_3935_, lean_object* v___y_3936_){
_start:
{
lean_object* v___x_3938_; 
v___x_3938_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg(v_as_x27_3932_, v_b_3933_, v___y_3935_, v___y_3936_);
return v___x_3938_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___boxed(lean_object* v_as_3939_, lean_object* v_as_x27_3940_, lean_object* v_b_3941_, lean_object* v_a_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_, lean_object* v___y_3945_){
_start:
{
lean_object* v_res_3946_; 
v_res_3946_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7(v_as_3939_, v_as_x27_3940_, v_b_3941_, v_a_3942_, v___y_3943_, v___y_3944_);
lean_dec(v___y_3944_);
lean_dec_ref(v___y_3943_);
lean_dec(v_as_x27_3940_);
lean_dec(v_as_3939_);
return v_res_3946_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8(lean_object* v_as_3947_, lean_object* v_as_x27_3948_, lean_object* v_b_3949_, lean_object* v_a_3950_, lean_object* v___y_3951_, lean_object* v___y_3952_){
_start:
{
lean_object* v___x_3954_; 
v___x_3954_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___redArg(v_as_x27_3948_, v_b_3949_, v___y_3951_, v___y_3952_);
return v___x_3954_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___boxed(lean_object* v_as_3955_, lean_object* v_as_x27_3956_, lean_object* v_b_3957_, lean_object* v_a_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_){
_start:
{
lean_object* v_res_3962_; 
v_res_3962_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8(v_as_3955_, v_as_x27_3956_, v_b_3957_, v_a_3958_, v___y_3959_, v___y_3960_);
lean_dec(v___y_3960_);
lean_dec_ref(v___y_3959_);
lean_dec(v_as_x27_3956_);
lean_dec(v_as_3955_);
return v_res_3962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17(lean_object* v_t_3963_, lean_object* v___y_3964_, lean_object* v___y_3965_){
_start:
{
lean_object* v___x_3967_; 
v___x_3967_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17___redArg(v_t_3963_, v___y_3965_);
return v___x_3967_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17___boxed(lean_object* v_t_3968_, lean_object* v___y_3969_, lean_object* v___y_3970_, lean_object* v___y_3971_){
_start:
{
lean_object* v_res_3972_; 
v_res_3972_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17(v_t_3968_, v___y_3969_, v___y_3970_);
lean_dec(v___y_3970_);
lean_dec_ref(v___y_3969_);
return v_res_3972_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4(lean_object* v_00_u03b1_3973_, lean_object* v_ref_3974_, lean_object* v_msg_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_){
_start:
{
lean_object* v___x_3979_; 
v___x_3979_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___redArg(v_ref_3974_, v_msg_3975_, v___y_3976_, v___y_3977_);
return v___x_3979_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___boxed(lean_object* v_00_u03b1_3980_, lean_object* v_ref_3981_, lean_object* v_msg_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_, lean_object* v___y_3985_){
_start:
{
lean_object* v_res_3986_; 
v_res_3986_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4(v_00_u03b1_3980_, v_ref_3981_, v_msg_3982_, v___y_3983_, v___y_3984_);
lean_dec(v___y_3984_);
lean_dec_ref(v___y_3983_);
lean_dec(v_ref_3981_);
return v_res_3986_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20(lean_object* v_msgData_3987_, lean_object* v___y_3988_, lean_object* v___y_3989_){
_start:
{
lean_object* v___x_3991_; 
v___x_3991_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg(v_msgData_3987_, v___y_3989_);
return v___x_3991_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___boxed(lean_object* v_msgData_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_){
_start:
{
lean_object* v_res_3996_; 
v_res_3996_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20(v_msgData_3992_, v___y_3993_, v___y_3994_);
lean_dec(v___y_3994_);
lean_dec_ref(v___y_3993_);
return v_res_3996_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15(lean_object* v_00_u03b1_3997_, lean_object* v_msg_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_){
_start:
{
lean_object* v___x_4002_; 
v___x_4002_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15___redArg(v_msg_3998_, v___y_3999_, v___y_4000_);
return v___x_4002_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15___boxed(lean_object* v_00_u03b1_4003_, lean_object* v_msg_4004_, lean_object* v___y_4005_, lean_object* v___y_4006_, lean_object* v___y_4007_){
_start:
{
lean_object* v_res_4008_; 
v_res_4008_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15(v_00_u03b1_4003_, v_msg_4004_, v___y_4005_, v___y_4006_);
lean_dec(v___y_4006_);
lean_dec_ref(v___y_4005_);
return v_res_4008_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24(lean_object* v_o_4009_, lean_object* v___y_4010_, lean_object* v___y_4011_){
_start:
{
lean_object* v___x_4013_; 
v___x_4013_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24___redArg(v_o_4009_, v___y_4011_);
return v___x_4013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24___boxed(lean_object* v_o_4014_, lean_object* v___y_4015_, lean_object* v___y_4016_, lean_object* v___y_4017_){
_start:
{
lean_object* v_res_4018_; 
v_res_4018_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24(v_o_4014_, v___y_4015_, v___y_4016_);
lean_dec(v___y_4016_);
lean_dec_ref(v___y_4015_);
return v_res_4018_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26(lean_object* v_00_u03b1_4019_, lean_object* v_constName_4020_, lean_object* v___y_4021_, lean_object* v___y_4022_){
_start:
{
lean_object* v___x_4024_; 
v___x_4024_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26___redArg(v_constName_4020_, v___y_4021_, v___y_4022_);
return v___x_4024_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26___boxed(lean_object* v_00_u03b1_4025_, lean_object* v_constName_4026_, lean_object* v___y_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_){
_start:
{
lean_object* v_res_4030_; 
v_res_4030_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26(v_00_u03b1_4025_, v_constName_4026_, v___y_4027_, v___y_4028_);
lean_dec(v___y_4028_);
lean_dec_ref(v___y_4027_);
return v_res_4030_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21(lean_object* v_msgData_4031_, lean_object* v_macroStack_4032_, lean_object* v___y_4033_, lean_object* v___y_4034_){
_start:
{
lean_object* v___x_4036_; 
v___x_4036_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21___redArg(v_msgData_4031_, v_macroStack_4032_, v___y_4034_);
return v___x_4036_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21___boxed(lean_object* v_msgData_4037_, lean_object* v_macroStack_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_, lean_object* v___y_4041_){
_start:
{
lean_object* v_res_4042_; 
v_res_4042_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21(v_msgData_4037_, v_macroStack_4038_, v___y_4039_, v___y_4040_);
lean_dec(v___y_4040_);
lean_dec_ref(v___y_4039_);
return v_res_4042_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37(lean_object* v_00_u03b1_4043_, lean_object* v_x_4044_, lean_object* v___y_4045_, lean_object* v___y_4046_){
_start:
{
lean_object* v___x_4047_; 
v___x_4047_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37___redArg(v_x_4044_, v___y_4046_);
return v___x_4047_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37___boxed(lean_object* v_00_u03b1_4048_, lean_object* v_x_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_){
_start:
{
lean_object* v_res_4052_; 
v_res_4052_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37(v_00_u03b1_4048_, v_x_4049_, v___y_4050_, v___y_4051_);
lean_dec_ref(v___y_4050_);
lean_dec_ref(v_x_4049_);
return v_res_4052_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40(lean_object* v_00_u03b1_4053_, lean_object* v_ref_4054_, lean_object* v___y_4055_, lean_object* v___y_4056_){
_start:
{
lean_object* v___x_4058_; 
v___x_4058_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg(v_ref_4054_);
return v___x_4058_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___boxed(lean_object* v_00_u03b1_4059_, lean_object* v_ref_4060_, lean_object* v___y_4061_, lean_object* v___y_4062_, lean_object* v___y_4063_){
_start:
{
lean_object* v_res_4064_; 
v_res_4064_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40(v_00_u03b1_4059_, v_ref_4060_, v___y_4061_, v___y_4062_);
lean_dec(v___y_4062_);
lean_dec_ref(v___y_4061_);
return v_res_4064_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32(lean_object* v_00_u03b1_4065_, lean_object* v_x_4066_, lean_object* v___y_4067_, lean_object* v___y_4068_){
_start:
{
lean_object* v___x_4070_; 
v___x_4070_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg(v_x_4066_, v___y_4067_, v___y_4068_);
return v___x_4070_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___boxed(lean_object* v_00_u03b1_4071_, lean_object* v_x_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_){
_start:
{
lean_object* v_res_4076_; 
v_res_4076_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32(v_00_u03b1_4071_, v_x_4072_, v___y_4073_, v___y_4074_);
lean_dec(v___y_4074_);
lean_dec_ref(v___y_4073_);
return v_res_4076_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34(lean_object* v_00_u03b1_4077_, lean_object* v_x_4078_, uint8_t v_when_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_){
_start:
{
lean_object* v___x_4083_; 
v___x_4083_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34___redArg(v_x_4078_, v_when_4079_, v___y_4080_, v___y_4081_);
return v___x_4083_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34___boxed(lean_object* v_00_u03b1_4084_, lean_object* v_x_4085_, lean_object* v_when_4086_, lean_object* v___y_4087_, lean_object* v___y_4088_, lean_object* v___y_4089_){
_start:
{
uint8_t v_when_boxed_4090_; lean_object* v_res_4091_; 
v_when_boxed_4090_ = lean_unbox(v_when_4086_);
v_res_4091_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34(v_00_u03b1_4084_, v_x_4085_, v_when_boxed_4090_, v___y_4087_, v___y_4088_);
lean_dec(v___y_4088_);
lean_dec_ref(v___y_4087_);
return v_res_4091_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38(lean_object* v_00_u03b1_4092_, lean_object* v_ref_4093_, lean_object* v_constName_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_){
_start:
{
lean_object* v___x_4098_; 
v___x_4098_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg(v_ref_4093_, v_constName_4094_, v___y_4095_, v___y_4096_);
return v___x_4098_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___boxed(lean_object* v_00_u03b1_4099_, lean_object* v_ref_4100_, lean_object* v_constName_4101_, lean_object* v___y_4102_, lean_object* v___y_4103_, lean_object* v___y_4104_){
_start:
{
lean_object* v_res_4105_; 
v_res_4105_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38(v_00_u03b1_4099_, v_ref_4100_, v_constName_4101_, v___y_4102_, v___y_4103_);
lean_dec(v___y_4103_);
lean_dec_ref(v___y_4102_);
lean_dec(v_ref_4100_);
return v_res_4105_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38(lean_object* v_as_4106_, lean_object* v_as_x27_4107_, lean_object* v_b_4108_, lean_object* v_a_4109_, lean_object* v___y_4110_, lean_object* v___y_4111_){
_start:
{
lean_object* v___x_4113_; 
v___x_4113_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38___redArg(v_as_x27_4107_, v_b_4108_, v___y_4110_, v___y_4111_);
return v___x_4113_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38___boxed(lean_object* v_as_4114_, lean_object* v_as_x27_4115_, lean_object* v_b_4116_, lean_object* v_a_4117_, lean_object* v___y_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_){
_start:
{
lean_object* v_res_4121_; 
v_res_4121_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38(v_as_4114_, v_as_x27_4115_, v_b_4116_, v_a_4117_, v___y_4118_, v___y_4119_);
lean_dec(v___y_4119_);
lean_dec_ref(v___y_4118_);
lean_dec(v_as_x27_4115_);
lean_dec(v_as_4114_);
return v_res_4121_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44(lean_object* v_00_u03b2_4122_, lean_object* v_m_4123_, lean_object* v_a_4124_){
_start:
{
lean_object* v___x_4125_; 
v___x_4125_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44___redArg(v_m_4123_, v_a_4124_);
return v___x_4125_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44___boxed(lean_object* v_00_u03b2_4126_, lean_object* v_m_4127_, lean_object* v_a_4128_){
_start:
{
lean_object* v_res_4129_; 
v_res_4129_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44(v_00_u03b2_4126_, v_m_4127_, v_a_4128_);
lean_dec(v_a_4128_);
lean_dec_ref(v_m_4127_);
return v_res_4129_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49(lean_object* v_00_u03b1_4130_, lean_object* v_ref_4131_, lean_object* v_msg_4132_, lean_object* v_declHint_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_){
_start:
{
lean_object* v___x_4137_; 
v___x_4137_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49___redArg(v_ref_4131_, v_msg_4132_, v_declHint_4133_, v___y_4134_, v___y_4135_);
return v___x_4137_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49___boxed(lean_object* v_00_u03b1_4138_, lean_object* v_ref_4139_, lean_object* v_msg_4140_, lean_object* v_declHint_4141_, lean_object* v___y_4142_, lean_object* v___y_4143_, lean_object* v___y_4144_){
_start:
{
lean_object* v_res_4145_; 
v_res_4145_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49(v_00_u03b1_4138_, v_ref_4139_, v_msg_4140_, v_declHint_4141_, v___y_4142_, v___y_4143_);
lean_dec(v___y_4143_);
lean_dec_ref(v___y_4142_);
lean_dec(v_ref_4139_);
return v_res_4145_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45(lean_object* v_00_u03b2_4146_, lean_object* v_x_4147_, lean_object* v_x_4148_){
_start:
{
uint8_t v___x_4149_; 
v___x_4149_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45___redArg(v_x_4147_, v_x_4148_);
return v___x_4149_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45___boxed(lean_object* v_00_u03b2_4150_, lean_object* v_x_4151_, lean_object* v_x_4152_){
_start:
{
uint8_t v_res_4153_; lean_object* v_r_4154_; 
v_res_4153_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45(v_00_u03b2_4150_, v_x_4151_, v_x_4152_);
lean_dec_ref(v_x_4152_);
lean_dec_ref(v_x_4151_);
v_r_4154_ = lean_box(v_res_4153_);
return v_r_4154_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44_spec__48(lean_object* v_00_u03b2_4155_, lean_object* v_a_4156_, lean_object* v_x_4157_){
_start:
{
lean_object* v___x_4158_; 
v___x_4158_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44_spec__48___redArg(v_a_4156_, v_x_4157_);
return v___x_4158_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44_spec__48___boxed(lean_object* v_00_u03b2_4159_, lean_object* v_a_4160_, lean_object* v_x_4161_){
_start:
{
lean_object* v_res_4162_; 
v_res_4162_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44_spec__48(v_00_u03b2_4159_, v_a_4160_, v_x_4161_);
lean_dec(v_x_4161_);
lean_dec(v_a_4160_);
return v_res_4162_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54(lean_object* v_msg_4163_, lean_object* v_declHint_4164_, lean_object* v___y_4165_, lean_object* v___y_4166_){
_start:
{
lean_object* v___x_4168_; 
v___x_4168_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg(v_msg_4163_, v_declHint_4164_, v___y_4166_);
return v___x_4168_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___boxed(lean_object* v_msg_4169_, lean_object* v_declHint_4170_, lean_object* v___y_4171_, lean_object* v___y_4172_, lean_object* v___y_4173_){
_start:
{
lean_object* v_res_4174_; 
v_res_4174_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54(v_msg_4169_, v_declHint_4170_, v___y_4171_, v___y_4172_);
lean_dec(v___y_4172_);
lean_dec_ref(v___y_4171_);
return v_res_4174_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48(lean_object* v_00_u03b2_4175_, lean_object* v_x_4176_, size_t v_x_4177_, lean_object* v_x_4178_){
_start:
{
uint8_t v___x_4179_; 
v___x_4179_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48___redArg(v_x_4176_, v_x_4177_, v_x_4178_);
return v___x_4179_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48___boxed(lean_object* v_00_u03b2_4180_, lean_object* v_x_4181_, lean_object* v_x_4182_, lean_object* v_x_4183_){
_start:
{
size_t v_x_34326__boxed_4184_; uint8_t v_res_4185_; lean_object* v_r_4186_; 
v_x_34326__boxed_4184_ = lean_unbox_usize(v_x_4182_);
lean_dec(v_x_4182_);
v_res_4185_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48(v_00_u03b2_4180_, v_x_4181_, v_x_34326__boxed_4184_, v_x_4183_);
lean_dec_ref(v_x_4183_);
lean_dec_ref(v_x_4181_);
v_r_4186_ = lean_box(v_res_4185_);
return v_r_4186_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48_spec__52(lean_object* v_00_u03b2_4187_, lean_object* v_keys_4188_, lean_object* v_vals_4189_, lean_object* v_heq_4190_, lean_object* v_i_4191_, lean_object* v_k_4192_){
_start:
{
uint8_t v___x_4193_; 
v___x_4193_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48_spec__52___redArg(v_keys_4188_, v_i_4191_, v_k_4192_);
return v___x_4193_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48_spec__52___boxed(lean_object* v_00_u03b2_4194_, lean_object* v_keys_4195_, lean_object* v_vals_4196_, lean_object* v_heq_4197_, lean_object* v_i_4198_, lean_object* v_k_4199_){
_start:
{
uint8_t v_res_4200_; lean_object* v_r_4201_; 
v_res_4200_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48_spec__52(v_00_u03b2_4194_, v_keys_4195_, v_vals_4196_, v_heq_4197_, v_i_4198_, v_k_4199_);
lean_dec_ref(v_k_4199_);
lean_dec_ref(v_vals_4196_);
lean_dec_ref(v_keys_4195_);
v_r_4201_ = lean_box(v_res_4200_);
return v_r_4201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1(){
_start:
{
lean_object* v___x_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; lean_object* v___x_4213_; lean_object* v___x_4214_; 
v___x_4210_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_4211_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___closed__1));
v___x_4212_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__2));
v___x_4213_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___boxed), 4, 0);
v___x_4214_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4210_, v___x_4211_, v___x_4212_, v___x_4213_);
return v___x_4214_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___boxed(lean_object* v___y_4215_){
_start:
{
lean_object* v_res_4216_; 
v_res_4216_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1();
return v_res_4216_;
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
