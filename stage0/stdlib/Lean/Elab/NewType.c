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
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Syntax_getSepArgs(lean_object*);
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
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46_spec__49_spec__53___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46_spec__49_spec__53___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46_spec__49___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46_spec__49___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___closed__0;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__0;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__1 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__1_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__1_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__2 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__2_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__3_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__4;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__5_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__6;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__7;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__8 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__8_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__9;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__10 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__10_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__11;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__12 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__12_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__13;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__14 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__14_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__15_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__45_spec__49___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__45_spec__49___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__45___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__45___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__41___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__41___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__41___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__41___redArg___boxed(lean_object*);
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
static const lean_ctor_object l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__2_value_aux_2),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__15_value),LEAN_SCALAR_PTR_LITERAL(124, 247, 59, 43, 44, 177, 111, 66)}};
static const lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__2 = (const lean_object*)&l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Elab_Command_elabNewtype___boxed__const__1 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___boxed__const__1_value;
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
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__41(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__41___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__45(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__45___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__45_spec__49(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__45_spec__49___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46_spec__49(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46_spec__49___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46_spec__49_spec__53(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46_spec__49_spec__53___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "newtypeCmd"};
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(206, 214, 155, 84, 76, 243, 163, 92)}};
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__2_value;
static const lean_string_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "elabNewtype"};
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(140, 106, 150, 17, 51, 30, 9, 241)}};
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__4_value;
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
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(lean_object* v___y_1110_){
_start:
{
lean_object* v___x_1112_; lean_object* v_env_1113_; lean_object* v___x_1114_; lean_object* v_mainModule_1115_; lean_object* v___x_1116_; 
v___x_1112_ = lean_st_ref_get(v___y_1110_);
v_env_1113_ = lean_ctor_get(v___x_1112_, 0);
lean_inc_ref(v_env_1113_);
lean_dec(v___x_1112_);
v___x_1114_ = l_Lean_Environment_header(v_env_1113_);
lean_dec_ref(v_env_1113_);
v_mainModule_1115_ = lean_ctor_get(v___x_1114_, 0);
lean_inc(v_mainModule_1115_);
lean_dec_ref(v___x_1114_);
v___x_1116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1116_, 0, v_mainModule_1115_);
return v___x_1116_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg___boxed(lean_object* v___y_1117_, lean_object* v___y_1118_){
_start:
{
lean_object* v_res_1119_; 
v_res_1119_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v___y_1117_);
lean_dec(v___y_1117_);
return v_res_1119_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9(lean_object* v___y_1120_, lean_object* v___y_1121_){
_start:
{
lean_object* v___x_1123_; 
v___x_1123_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v___y_1121_);
return v___x_1123_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9___boxed(lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_){
_start:
{
lean_object* v_res_1127_; 
v_res_1127_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9(v___y_1124_, v___y_1125_);
lean_dec(v___y_1125_);
lean_dec_ref(v___y_1124_);
return v_res_1127_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0(lean_object* v___y_1128_, uint8_t v_isExporting_1129_, lean_object* v_a_x3f_1130_){
_start:
{
lean_object* v___x_1132_; lean_object* v_env_1133_; lean_object* v_messages_1134_; lean_object* v_scopes_1135_; lean_object* v_usedQuotCtxts_1136_; lean_object* v_nextMacroScope_1137_; lean_object* v_maxRecDepth_1138_; lean_object* v_ngen_1139_; lean_object* v_auxDeclNGen_1140_; lean_object* v_infoState_1141_; lean_object* v_traceState_1142_; lean_object* v_snapshotTasks_1143_; lean_object* v_prevLinterStates_1144_; lean_object* v_codeQualityEntryTasks_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1156_; 
v___x_1132_ = lean_st_ref_take(v___y_1128_);
v_env_1133_ = lean_ctor_get(v___x_1132_, 0);
v_messages_1134_ = lean_ctor_get(v___x_1132_, 1);
v_scopes_1135_ = lean_ctor_get(v___x_1132_, 2);
v_usedQuotCtxts_1136_ = lean_ctor_get(v___x_1132_, 3);
v_nextMacroScope_1137_ = lean_ctor_get(v___x_1132_, 4);
v_maxRecDepth_1138_ = lean_ctor_get(v___x_1132_, 5);
v_ngen_1139_ = lean_ctor_get(v___x_1132_, 6);
v_auxDeclNGen_1140_ = lean_ctor_get(v___x_1132_, 7);
v_infoState_1141_ = lean_ctor_get(v___x_1132_, 8);
v_traceState_1142_ = lean_ctor_get(v___x_1132_, 9);
v_snapshotTasks_1143_ = lean_ctor_get(v___x_1132_, 10);
v_prevLinterStates_1144_ = lean_ctor_get(v___x_1132_, 11);
v_codeQualityEntryTasks_1145_ = lean_ctor_get(v___x_1132_, 12);
v_isSharedCheck_1156_ = !lean_is_exclusive(v___x_1132_);
if (v_isSharedCheck_1156_ == 0)
{
v___x_1147_ = v___x_1132_;
v_isShared_1148_ = v_isSharedCheck_1156_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1145_);
lean_inc(v_prevLinterStates_1144_);
lean_inc(v_snapshotTasks_1143_);
lean_inc(v_traceState_1142_);
lean_inc(v_infoState_1141_);
lean_inc(v_auxDeclNGen_1140_);
lean_inc(v_ngen_1139_);
lean_inc(v_maxRecDepth_1138_);
lean_inc(v_nextMacroScope_1137_);
lean_inc(v_usedQuotCtxts_1136_);
lean_inc(v_scopes_1135_);
lean_inc(v_messages_1134_);
lean_inc(v_env_1133_);
lean_dec(v___x_1132_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1156_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1152_; 
v___x_1149_ = lean_box(0);
v___x_1150_ = l_Lean_Environment_setExporting(v_env_1133_, v_isExporting_1129_);
if (v_isShared_1148_ == 0)
{
lean_ctor_set(v___x_1147_, 0, v___x_1150_);
v___x_1152_ = v___x_1147_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v___x_1150_);
lean_ctor_set(v_reuseFailAlloc_1155_, 1, v_messages_1134_);
lean_ctor_set(v_reuseFailAlloc_1155_, 2, v_scopes_1135_);
lean_ctor_set(v_reuseFailAlloc_1155_, 3, v_usedQuotCtxts_1136_);
lean_ctor_set(v_reuseFailAlloc_1155_, 4, v_nextMacroScope_1137_);
lean_ctor_set(v_reuseFailAlloc_1155_, 5, v_maxRecDepth_1138_);
lean_ctor_set(v_reuseFailAlloc_1155_, 6, v_ngen_1139_);
lean_ctor_set(v_reuseFailAlloc_1155_, 7, v_auxDeclNGen_1140_);
lean_ctor_set(v_reuseFailAlloc_1155_, 8, v_infoState_1141_);
lean_ctor_set(v_reuseFailAlloc_1155_, 9, v_traceState_1142_);
lean_ctor_set(v_reuseFailAlloc_1155_, 10, v_snapshotTasks_1143_);
lean_ctor_set(v_reuseFailAlloc_1155_, 11, v_prevLinterStates_1144_);
lean_ctor_set(v_reuseFailAlloc_1155_, 12, v_codeQualityEntryTasks_1145_);
v___x_1152_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
lean_object* v___x_1153_; lean_object* v___x_1154_; 
v___x_1153_ = lean_st_ref_put(v___y_1128_, v___x_1152_);
v___x_1154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1149_);
return v___x_1154_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0___boxed(lean_object* v___y_1157_, lean_object* v_isExporting_1158_, lean_object* v_a_x3f_1159_, lean_object* v___y_1160_){
_start:
{
uint8_t v_isExporting_boxed_1161_; lean_object* v_res_1162_; 
v_isExporting_boxed_1161_ = lean_unbox(v_isExporting_1158_);
v_res_1162_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0(v___y_1157_, v_isExporting_boxed_1161_, v_a_x3f_1159_);
lean_dec(v_a_x3f_1159_);
lean_dec(v___y_1157_);
return v_res_1162_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(lean_object* v_x_1163_, uint8_t v_isExporting_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_){
_start:
{
lean_object* v___x_1168_; lean_object* v_env_1169_; lean_object* v___x_1170_; uint8_t v_isModule_1171_; 
v___x_1168_ = lean_st_ref_get(v___y_1166_);
v_env_1169_ = lean_ctor_get(v___x_1168_, 0);
lean_inc_ref(v_env_1169_);
lean_dec(v___x_1168_);
v___x_1170_ = l_Lean_Environment_header(v_env_1169_);
v_isModule_1171_ = lean_ctor_get_uint8(v___x_1170_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_1170_);
if (v_isModule_1171_ == 0)
{
lean_object* v___x_1172_; 
lean_dec_ref(v_env_1169_);
lean_inc(v___y_1166_);
lean_inc_ref(v___y_1165_);
v___x_1172_ = lean_apply_3(v_x_1163_, v___y_1165_, v___y_1166_, lean_box(0));
return v___x_1172_;
}
else
{
uint8_t v_isExporting_1173_; 
v_isExporting_1173_ = lean_ctor_get_uint8(v_env_1169_, sizeof(void*)*8);
lean_dec_ref(v_env_1169_);
if (v_isExporting_1164_ == 0)
{
if (v_isExporting_1173_ == 0)
{
lean_object* v___x_1227_; 
lean_inc(v___y_1166_);
lean_inc_ref(v___y_1165_);
v___x_1227_ = lean_apply_3(v_x_1163_, v___y_1165_, v___y_1166_, lean_box(0));
return v___x_1227_;
}
else
{
goto v___jp_1174_;
}
}
else
{
if (v_isExporting_1173_ == 0)
{
goto v___jp_1174_;
}
else
{
lean_object* v___x_1228_; 
lean_inc(v___y_1166_);
lean_inc_ref(v___y_1165_);
v___x_1228_ = lean_apply_3(v_x_1163_, v___y_1165_, v___y_1166_, lean_box(0));
return v___x_1228_;
}
}
v___jp_1174_:
{
lean_object* v___x_1175_; lean_object* v_env_1176_; lean_object* v_messages_1177_; lean_object* v_scopes_1178_; lean_object* v_usedQuotCtxts_1179_; lean_object* v_nextMacroScope_1180_; lean_object* v_maxRecDepth_1181_; lean_object* v_ngen_1182_; lean_object* v_auxDeclNGen_1183_; lean_object* v_infoState_1184_; lean_object* v_traceState_1185_; lean_object* v_snapshotTasks_1186_; lean_object* v_prevLinterStates_1187_; lean_object* v_codeQualityEntryTasks_1188_; lean_object* v___x_1190_; uint8_t v_isShared_1191_; uint8_t v_isSharedCheck_1226_; 
v___x_1175_ = lean_st_ref_take(v___y_1166_);
v_env_1176_ = lean_ctor_get(v___x_1175_, 0);
v_messages_1177_ = lean_ctor_get(v___x_1175_, 1);
v_scopes_1178_ = lean_ctor_get(v___x_1175_, 2);
v_usedQuotCtxts_1179_ = lean_ctor_get(v___x_1175_, 3);
v_nextMacroScope_1180_ = lean_ctor_get(v___x_1175_, 4);
v_maxRecDepth_1181_ = lean_ctor_get(v___x_1175_, 5);
v_ngen_1182_ = lean_ctor_get(v___x_1175_, 6);
v_auxDeclNGen_1183_ = lean_ctor_get(v___x_1175_, 7);
v_infoState_1184_ = lean_ctor_get(v___x_1175_, 8);
v_traceState_1185_ = lean_ctor_get(v___x_1175_, 9);
v_snapshotTasks_1186_ = lean_ctor_get(v___x_1175_, 10);
v_prevLinterStates_1187_ = lean_ctor_get(v___x_1175_, 11);
v_codeQualityEntryTasks_1188_ = lean_ctor_get(v___x_1175_, 12);
v_isSharedCheck_1226_ = !lean_is_exclusive(v___x_1175_);
if (v_isSharedCheck_1226_ == 0)
{
v___x_1190_ = v___x_1175_;
v_isShared_1191_ = v_isSharedCheck_1226_;
goto v_resetjp_1189_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1188_);
lean_inc(v_prevLinterStates_1187_);
lean_inc(v_snapshotTasks_1186_);
lean_inc(v_traceState_1185_);
lean_inc(v_infoState_1184_);
lean_inc(v_auxDeclNGen_1183_);
lean_inc(v_ngen_1182_);
lean_inc(v_maxRecDepth_1181_);
lean_inc(v_nextMacroScope_1180_);
lean_inc(v_usedQuotCtxts_1179_);
lean_inc(v_scopes_1178_);
lean_inc(v_messages_1177_);
lean_inc(v_env_1176_);
lean_dec(v___x_1175_);
v___x_1190_ = lean_box(0);
v_isShared_1191_ = v_isSharedCheck_1226_;
goto v_resetjp_1189_;
}
v_resetjp_1189_:
{
lean_object* v___x_1192_; lean_object* v___x_1194_; 
v___x_1192_ = l_Lean_Environment_setExporting(v_env_1176_, v_isExporting_1164_);
if (v_isShared_1191_ == 0)
{
lean_ctor_set(v___x_1190_, 0, v___x_1192_);
v___x_1194_ = v___x_1190_;
goto v_reusejp_1193_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v___x_1192_);
lean_ctor_set(v_reuseFailAlloc_1225_, 1, v_messages_1177_);
lean_ctor_set(v_reuseFailAlloc_1225_, 2, v_scopes_1178_);
lean_ctor_set(v_reuseFailAlloc_1225_, 3, v_usedQuotCtxts_1179_);
lean_ctor_set(v_reuseFailAlloc_1225_, 4, v_nextMacroScope_1180_);
lean_ctor_set(v_reuseFailAlloc_1225_, 5, v_maxRecDepth_1181_);
lean_ctor_set(v_reuseFailAlloc_1225_, 6, v_ngen_1182_);
lean_ctor_set(v_reuseFailAlloc_1225_, 7, v_auxDeclNGen_1183_);
lean_ctor_set(v_reuseFailAlloc_1225_, 8, v_infoState_1184_);
lean_ctor_set(v_reuseFailAlloc_1225_, 9, v_traceState_1185_);
lean_ctor_set(v_reuseFailAlloc_1225_, 10, v_snapshotTasks_1186_);
lean_ctor_set(v_reuseFailAlloc_1225_, 11, v_prevLinterStates_1187_);
lean_ctor_set(v_reuseFailAlloc_1225_, 12, v_codeQualityEntryTasks_1188_);
v___x_1194_ = v_reuseFailAlloc_1225_;
goto v_reusejp_1193_;
}
v_reusejp_1193_:
{
lean_object* v___x_1195_; lean_object* v_r_1196_; 
v___x_1195_ = lean_st_ref_put(v___y_1166_, v___x_1194_);
lean_inc(v___y_1166_);
lean_inc_ref(v___y_1165_);
v_r_1196_ = lean_apply_3(v_x_1163_, v___y_1165_, v___y_1166_, lean_box(0));
if (lean_obj_tag(v_r_1196_) == 0)
{
lean_object* v_a_1197_; lean_object* v___x_1199_; uint8_t v_isShared_1200_; uint8_t v_isSharedCheck_1213_; 
v_a_1197_ = lean_ctor_get(v_r_1196_, 0);
v_isSharedCheck_1213_ = !lean_is_exclusive(v_r_1196_);
if (v_isSharedCheck_1213_ == 0)
{
v___x_1199_ = v_r_1196_;
v_isShared_1200_ = v_isSharedCheck_1213_;
goto v_resetjp_1198_;
}
else
{
lean_inc(v_a_1197_);
lean_dec(v_r_1196_);
v___x_1199_ = lean_box(0);
v_isShared_1200_ = v_isSharedCheck_1213_;
goto v_resetjp_1198_;
}
v_resetjp_1198_:
{
lean_object* v___x_1202_; 
lean_inc(v_a_1197_);
if (v_isShared_1200_ == 0)
{
lean_ctor_set_tag(v___x_1199_, 1);
v___x_1202_ = v___x_1199_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v_a_1197_);
v___x_1202_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
lean_object* v___x_1203_; lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1210_; 
v___x_1203_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0(v___y_1166_, v_isExporting_1173_, v___x_1202_);
lean_dec_ref(v___x_1202_);
v_isSharedCheck_1210_ = !lean_is_exclusive(v___x_1203_);
if (v_isSharedCheck_1210_ == 0)
{
lean_object* v_unused_1211_; 
v_unused_1211_ = lean_ctor_get(v___x_1203_, 0);
lean_dec(v_unused_1211_);
v___x_1205_ = v___x_1203_;
v_isShared_1206_ = v_isSharedCheck_1210_;
goto v_resetjp_1204_;
}
else
{
lean_dec(v___x_1203_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1210_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
lean_object* v___x_1208_; 
if (v_isShared_1206_ == 0)
{
lean_ctor_set(v___x_1205_, 0, v_a_1197_);
v___x_1208_ = v___x_1205_;
goto v_reusejp_1207_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v_a_1197_);
v___x_1208_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1207_;
}
v_reusejp_1207_:
{
return v___x_1208_;
}
}
}
}
}
else
{
lean_object* v_a_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1218_; uint8_t v_isShared_1219_; uint8_t v_isSharedCheck_1223_; 
v_a_1214_ = lean_ctor_get(v_r_1196_, 0);
lean_inc(v_a_1214_);
lean_dec_ref_known(v_r_1196_, 1);
v___x_1215_ = lean_box(0);
v___x_1216_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0(v___y_1166_, v_isExporting_1173_, v___x_1215_);
v_isSharedCheck_1223_ = !lean_is_exclusive(v___x_1216_);
if (v_isSharedCheck_1223_ == 0)
{
lean_object* v_unused_1224_; 
v_unused_1224_ = lean_ctor_get(v___x_1216_, 0);
lean_dec(v_unused_1224_);
v___x_1218_ = v___x_1216_;
v_isShared_1219_ = v_isSharedCheck_1223_;
goto v_resetjp_1217_;
}
else
{
lean_dec(v___x_1216_);
v___x_1218_ = lean_box(0);
v_isShared_1219_ = v_isSharedCheck_1223_;
goto v_resetjp_1217_;
}
v_resetjp_1217_:
{
lean_object* v___x_1221_; 
if (v_isShared_1219_ == 0)
{
lean_ctor_set_tag(v___x_1218_, 1);
lean_ctor_set(v___x_1218_, 0, v_a_1214_);
v___x_1221_ = v___x_1218_;
goto v_reusejp_1220_;
}
else
{
lean_object* v_reuseFailAlloc_1222_; 
v_reuseFailAlloc_1222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1222_, 0, v_a_1214_);
v___x_1221_ = v_reuseFailAlloc_1222_;
goto v_reusejp_1220_;
}
v_reusejp_1220_:
{
return v___x_1221_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___boxed(lean_object* v_x_1229_, lean_object* v_isExporting_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_){
_start:
{
uint8_t v_isExporting_boxed_1234_; lean_object* v_res_1235_; 
v_isExporting_boxed_1234_ = lean_unbox(v_isExporting_1230_);
v_res_1235_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(v_x_1229_, v_isExporting_boxed_1234_, v___y_1231_, v___y_1232_);
lean_dec(v___y_1232_);
lean_dec_ref(v___y_1231_);
return v_res_1235_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10(lean_object* v_00_u03b1_1236_, lean_object* v_x_1237_, uint8_t v_isExporting_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_){
_start:
{
lean_object* v___x_1242_; 
v___x_1242_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(v_x_1237_, v_isExporting_1238_, v___y_1239_, v___y_1240_);
return v___x_1242_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___boxed(lean_object* v_00_u03b1_1243_, lean_object* v_x_1244_, lean_object* v_isExporting_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_){
_start:
{
uint8_t v_isExporting_boxed_1249_; lean_object* v_res_1250_; 
v_isExporting_boxed_1249_ = lean_unbox(v_isExporting_1245_);
v_res_1250_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10(v_00_u03b1_1243_, v_x_1244_, v_isExporting_boxed_1249_, v___y_1246_, v___y_1247_);
lean_dec(v___y_1247_);
lean_dec_ref(v___y_1246_);
return v_res_1250_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(size_t v_sz_1251_, size_t v_i_1252_, lean_object* v_bs_1253_){
_start:
{
uint8_t v___x_1254_; 
v___x_1254_ = lean_usize_dec_lt(v_i_1252_, v_sz_1251_);
if (v___x_1254_ == 0)
{
return v_bs_1253_;
}
else
{
lean_object* v_v_1255_; lean_object* v___x_1256_; lean_object* v_bs_x27_1257_; size_t v___x_1258_; size_t v___x_1259_; lean_object* v___x_1260_; 
v_v_1255_ = lean_array_uget(v_bs_1253_, v_i_1252_);
v___x_1256_ = lean_unsigned_to_nat(0u);
v_bs_x27_1257_ = lean_array_uset(v_bs_1253_, v_i_1252_, v___x_1256_);
v___x_1258_ = ((size_t)1ULL);
v___x_1259_ = lean_usize_add(v_i_1252_, v___x_1258_);
v___x_1260_ = lean_array_uset(v_bs_x27_1257_, v_i_1252_, v_v_1255_);
v_i_1252_ = v___x_1259_;
v_bs_1253_ = v___x_1260_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2___boxed(lean_object* v_sz_1262_, lean_object* v_i_1263_, lean_object* v_bs_1264_){
_start:
{
size_t v_sz_boxed_1265_; size_t v_i_boxed_1266_; lean_object* v_res_1267_; 
v_sz_boxed_1265_ = lean_unbox_usize(v_sz_1262_);
lean_dec(v_sz_1262_);
v_i_boxed_1266_ = lean_unbox_usize(v_i_1263_);
lean_dec(v_i_1263_);
v_res_1267_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(v_sz_boxed_1265_, v_i_boxed_1266_, v_bs_1264_);
return v_res_1267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17___redArg(lean_object* v_t_1268_, lean_object* v___y_1269_){
_start:
{
lean_object* v___x_1271_; lean_object* v_infoState_1272_; uint8_t v_enabled_1273_; 
v___x_1271_ = lean_st_ref_get(v___y_1269_);
v_infoState_1272_ = lean_ctor_get(v___x_1271_, 8);
lean_inc_ref(v_infoState_1272_);
lean_dec(v___x_1271_);
v_enabled_1273_ = lean_ctor_get_uint8(v_infoState_1272_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1272_);
if (v_enabled_1273_ == 0)
{
lean_object* v___x_1274_; lean_object* v___x_1275_; 
lean_dec_ref(v_t_1268_);
v___x_1274_ = lean_box(0);
v___x_1275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1274_);
return v___x_1275_;
}
else
{
lean_object* v___x_1276_; lean_object* v_infoState_1277_; lean_object* v_env_1278_; lean_object* v_messages_1279_; lean_object* v_scopes_1280_; lean_object* v_usedQuotCtxts_1281_; lean_object* v_nextMacroScope_1282_; lean_object* v_maxRecDepth_1283_; lean_object* v_ngen_1284_; lean_object* v_auxDeclNGen_1285_; lean_object* v_traceState_1286_; lean_object* v_snapshotTasks_1287_; lean_object* v_prevLinterStates_1288_; lean_object* v_codeQualityEntryTasks_1289_; lean_object* v___x_1291_; uint8_t v_isShared_1292_; uint8_t v_isSharedCheck_1311_; 
v___x_1276_ = lean_st_ref_take(v___y_1269_);
v_infoState_1277_ = lean_ctor_get(v___x_1276_, 8);
v_env_1278_ = lean_ctor_get(v___x_1276_, 0);
v_messages_1279_ = lean_ctor_get(v___x_1276_, 1);
v_scopes_1280_ = lean_ctor_get(v___x_1276_, 2);
v_usedQuotCtxts_1281_ = lean_ctor_get(v___x_1276_, 3);
v_nextMacroScope_1282_ = lean_ctor_get(v___x_1276_, 4);
v_maxRecDepth_1283_ = lean_ctor_get(v___x_1276_, 5);
v_ngen_1284_ = lean_ctor_get(v___x_1276_, 6);
v_auxDeclNGen_1285_ = lean_ctor_get(v___x_1276_, 7);
v_traceState_1286_ = lean_ctor_get(v___x_1276_, 9);
v_snapshotTasks_1287_ = lean_ctor_get(v___x_1276_, 10);
v_prevLinterStates_1288_ = lean_ctor_get(v___x_1276_, 11);
v_codeQualityEntryTasks_1289_ = lean_ctor_get(v___x_1276_, 12);
v_isSharedCheck_1311_ = !lean_is_exclusive(v___x_1276_);
if (v_isSharedCheck_1311_ == 0)
{
v___x_1291_ = v___x_1276_;
v_isShared_1292_ = v_isSharedCheck_1311_;
goto v_resetjp_1290_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1289_);
lean_inc(v_prevLinterStates_1288_);
lean_inc(v_snapshotTasks_1287_);
lean_inc(v_traceState_1286_);
lean_inc(v_infoState_1277_);
lean_inc(v_auxDeclNGen_1285_);
lean_inc(v_ngen_1284_);
lean_inc(v_maxRecDepth_1283_);
lean_inc(v_nextMacroScope_1282_);
lean_inc(v_usedQuotCtxts_1281_);
lean_inc(v_scopes_1280_);
lean_inc(v_messages_1279_);
lean_inc(v_env_1278_);
lean_dec(v___x_1276_);
v___x_1291_ = lean_box(0);
v_isShared_1292_ = v_isSharedCheck_1311_;
goto v_resetjp_1290_;
}
v_resetjp_1290_:
{
uint8_t v_enabled_1293_; lean_object* v_assignment_1294_; lean_object* v_lazyAssignment_1295_; lean_object* v_trees_1296_; lean_object* v___x_1298_; uint8_t v_isShared_1299_; uint8_t v_isSharedCheck_1310_; 
v_enabled_1293_ = lean_ctor_get_uint8(v_infoState_1277_, sizeof(void*)*3);
v_assignment_1294_ = lean_ctor_get(v_infoState_1277_, 0);
v_lazyAssignment_1295_ = lean_ctor_get(v_infoState_1277_, 1);
v_trees_1296_ = lean_ctor_get(v_infoState_1277_, 2);
v_isSharedCheck_1310_ = !lean_is_exclusive(v_infoState_1277_);
if (v_isSharedCheck_1310_ == 0)
{
v___x_1298_ = v_infoState_1277_;
v_isShared_1299_ = v_isSharedCheck_1310_;
goto v_resetjp_1297_;
}
else
{
lean_inc(v_trees_1296_);
lean_inc(v_lazyAssignment_1295_);
lean_inc(v_assignment_1294_);
lean_dec(v_infoState_1277_);
v___x_1298_ = lean_box(0);
v_isShared_1299_ = v_isSharedCheck_1310_;
goto v_resetjp_1297_;
}
v_resetjp_1297_:
{
lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1303_; 
v___x_1300_ = lean_box(0);
v___x_1301_ = l_Lean_PersistentArray_push___redArg(v_trees_1296_, v_t_1268_);
if (v_isShared_1299_ == 0)
{
lean_ctor_set(v___x_1298_, 2, v___x_1301_);
v___x_1303_ = v___x_1298_;
goto v_reusejp_1302_;
}
else
{
lean_object* v_reuseFailAlloc_1309_; 
v_reuseFailAlloc_1309_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1309_, 0, v_assignment_1294_);
lean_ctor_set(v_reuseFailAlloc_1309_, 1, v_lazyAssignment_1295_);
lean_ctor_set(v_reuseFailAlloc_1309_, 2, v___x_1301_);
lean_ctor_set_uint8(v_reuseFailAlloc_1309_, sizeof(void*)*3, v_enabled_1293_);
v___x_1303_ = v_reuseFailAlloc_1309_;
goto v_reusejp_1302_;
}
v_reusejp_1302_:
{
lean_object* v___x_1305_; 
if (v_isShared_1292_ == 0)
{
lean_ctor_set(v___x_1291_, 8, v___x_1303_);
v___x_1305_ = v___x_1291_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v_env_1278_);
lean_ctor_set(v_reuseFailAlloc_1308_, 1, v_messages_1279_);
lean_ctor_set(v_reuseFailAlloc_1308_, 2, v_scopes_1280_);
lean_ctor_set(v_reuseFailAlloc_1308_, 3, v_usedQuotCtxts_1281_);
lean_ctor_set(v_reuseFailAlloc_1308_, 4, v_nextMacroScope_1282_);
lean_ctor_set(v_reuseFailAlloc_1308_, 5, v_maxRecDepth_1283_);
lean_ctor_set(v_reuseFailAlloc_1308_, 6, v_ngen_1284_);
lean_ctor_set(v_reuseFailAlloc_1308_, 7, v_auxDeclNGen_1285_);
lean_ctor_set(v_reuseFailAlloc_1308_, 8, v___x_1303_);
lean_ctor_set(v_reuseFailAlloc_1308_, 9, v_traceState_1286_);
lean_ctor_set(v_reuseFailAlloc_1308_, 10, v_snapshotTasks_1287_);
lean_ctor_set(v_reuseFailAlloc_1308_, 11, v_prevLinterStates_1288_);
lean_ctor_set(v_reuseFailAlloc_1308_, 12, v_codeQualityEntryTasks_1289_);
v___x_1305_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___x_1306_ = lean_st_ref_put(v___y_1269_, v___x_1305_);
v___x_1307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1300_);
return v___x_1307_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17___redArg___boxed(lean_object* v_t_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_){
_start:
{
lean_object* v_res_1315_; 
v_res_1315_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17___redArg(v_t_1312_, v___y_1313_);
lean_dec(v___y_1313_);
return v_res_1315_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__0(void){
_start:
{
lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; 
v___x_1316_ = lean_unsigned_to_nat(32u);
v___x_1317_ = lean_mk_empty_array_with_capacity(v___x_1316_);
v___x_1318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1317_);
return v___x_1318_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__1(void){
_start:
{
size_t v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; 
v___x_1319_ = ((size_t)5ULL);
v___x_1320_ = lean_unsigned_to_nat(0u);
v___x_1321_ = lean_unsigned_to_nat(32u);
v___x_1322_ = lean_mk_empty_array_with_capacity(v___x_1321_);
v___x_1323_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__0);
v___x_1324_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1324_, 0, v___x_1323_);
lean_ctor_set(v___x_1324_, 1, v___x_1322_);
lean_ctor_set(v___x_1324_, 2, v___x_1320_);
lean_ctor_set(v___x_1324_, 3, v___x_1320_);
lean_ctor_set_usize(v___x_1324_, 4, v___x_1319_);
return v___x_1324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10(lean_object* v_t_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_){
_start:
{
lean_object* v___x_1329_; lean_object* v_infoState_1330_; uint8_t v_enabled_1331_; 
v___x_1329_ = lean_st_ref_get(v___y_1327_);
v_infoState_1330_ = lean_ctor_get(v___x_1329_, 8);
lean_inc_ref(v_infoState_1330_);
lean_dec(v___x_1329_);
v_enabled_1331_ = lean_ctor_get_uint8(v_infoState_1330_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1330_);
if (v_enabled_1331_ == 0)
{
lean_object* v___x_1332_; lean_object* v___x_1333_; 
lean_dec_ref(v_t_1325_);
v___x_1332_ = lean_box(0);
v___x_1333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1333_, 0, v___x_1332_);
return v___x_1333_;
}
else
{
lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; 
v___x_1334_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__1);
v___x_1335_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1335_, 0, v_t_1325_);
lean_ctor_set(v___x_1335_, 1, v___x_1334_);
v___x_1336_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17___redArg(v___x_1335_, v___y_1327_);
return v___x_1336_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___boxed(lean_object* v_t_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_){
_start:
{
lean_object* v_res_1341_; 
v_res_1341_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10(v_t_1337_, v___y_1338_, v___y_1339_);
lean_dec(v___y_1339_);
lean_dec_ref(v___y_1338_);
return v_res_1341_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__0(void){
_start:
{
lean_object* v___x_1342_; 
v___x_1342_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1342_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__1(void){
_start:
{
lean_object* v___x_1343_; lean_object* v___x_1344_; 
v___x_1343_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__0);
v___x_1344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1344_, 0, v___x_1343_);
return v___x_1344_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__2(void){
_start:
{
lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; 
v___x_1345_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__1);
v___x_1346_ = lean_unsigned_to_nat(0u);
v___x_1347_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1347_, 0, v___x_1346_);
lean_ctor_set(v___x_1347_, 1, v___x_1346_);
lean_ctor_set(v___x_1347_, 2, v___x_1346_);
lean_ctor_set(v___x_1347_, 3, v___x_1346_);
lean_ctor_set(v___x_1347_, 4, v___x_1345_);
lean_ctor_set(v___x_1347_, 5, v___x_1345_);
lean_ctor_set(v___x_1347_, 6, v___x_1345_);
lean_ctor_set(v___x_1347_, 7, v___x_1345_);
lean_ctor_set(v___x_1347_, 8, v___x_1345_);
lean_ctor_set(v___x_1347_, 9, v___x_1345_);
lean_ctor_set(v___x_1347_, 10, v___x_1345_);
return v___x_1347_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__3(void){
_start:
{
lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; 
v___x_1348_ = lean_unsigned_to_nat(32u);
v___x_1349_ = lean_mk_empty_array_with_capacity(v___x_1348_);
v___x_1350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1350_, 0, v___x_1349_);
return v___x_1350_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__4(void){
_start:
{
size_t v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; 
v___x_1351_ = ((size_t)5ULL);
v___x_1352_ = lean_unsigned_to_nat(0u);
v___x_1353_ = lean_unsigned_to_nat(32u);
v___x_1354_ = lean_mk_empty_array_with_capacity(v___x_1353_);
v___x_1355_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__3);
v___x_1356_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1356_, 0, v___x_1355_);
lean_ctor_set(v___x_1356_, 1, v___x_1354_);
lean_ctor_set(v___x_1356_, 2, v___x_1352_);
lean_ctor_set(v___x_1356_, 3, v___x_1352_);
lean_ctor_set_usize(v___x_1356_, 4, v___x_1351_);
return v___x_1356_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__5(void){
_start:
{
lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; 
v___x_1357_ = lean_box(1);
v___x_1358_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__4);
v___x_1359_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__1);
v___x_1360_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1360_, 0, v___x_1359_);
lean_ctor_set(v___x_1360_, 1, v___x_1358_);
lean_ctor_set(v___x_1360_, 2, v___x_1357_);
return v___x_1360_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg(lean_object* v_msgData_1361_, lean_object* v___y_1362_){
_start:
{
lean_object* v___x_1364_; lean_object* v_env_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v_scopes_1368_; lean_object* v___x_1369_; lean_object* v_opts_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; 
v___x_1364_ = lean_st_ref_get(v___y_1362_);
v_env_1365_ = lean_ctor_get(v___x_1364_, 0);
lean_inc_ref(v_env_1365_);
lean_dec(v___x_1364_);
v___x_1366_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1367_ = lean_st_ref_get(v___y_1362_);
v_scopes_1368_ = lean_ctor_get(v___x_1367_, 2);
lean_inc(v_scopes_1368_);
lean_dec(v___x_1367_);
v___x_1369_ = l_List_head_x21___redArg(v___x_1366_, v_scopes_1368_);
lean_dec(v_scopes_1368_);
v_opts_1370_ = lean_ctor_get(v___x_1369_, 1);
lean_inc_ref(v_opts_1370_);
lean_dec(v___x_1369_);
v___x_1371_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__2);
v___x_1372_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__5);
v___x_1373_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1373_, 0, v_env_1365_);
lean_ctor_set(v___x_1373_, 1, v___x_1371_);
lean_ctor_set(v___x_1373_, 2, v___x_1372_);
lean_ctor_set(v___x_1373_, 3, v_opts_1370_);
v___x_1374_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1374_, 0, v___x_1373_);
lean_ctor_set(v___x_1374_, 1, v_msgData_1361_);
v___x_1375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1375_, 0, v___x_1374_);
return v___x_1375_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___boxed(lean_object* v_msgData_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_){
_start:
{
lean_object* v_res_1379_; 
v_res_1379_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg(v_msgData_1376_, v___y_1377_);
lean_dec(v___y_1377_);
return v_res_1379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21___redArg(lean_object* v_msgData_1380_, lean_object* v_macroStack_1381_, lean_object* v___y_1382_){
_start:
{
lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v_scopes_1386_; lean_object* v___x_1387_; lean_object* v_opts_1388_; lean_object* v___x_1389_; uint8_t v___x_1390_; 
v___x_1384_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1385_ = lean_st_ref_get(v___y_1382_);
v_scopes_1386_ = lean_ctor_get(v___x_1385_, 2);
lean_inc(v_scopes_1386_);
lean_dec(v___x_1385_);
v___x_1387_ = l_List_head_x21___redArg(v___x_1384_, v_scopes_1386_);
lean_dec(v_scopes_1386_);
v_opts_1388_ = lean_ctor_get(v___x_1387_, 1);
lean_inc_ref(v_opts_1388_);
lean_dec(v___x_1387_);
v___x_1389_ = l_Lean_Elab_pp_macroStack;
v___x_1390_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__12(v_opts_1388_, v___x_1389_);
lean_dec_ref(v_opts_1388_);
if (v___x_1390_ == 0)
{
lean_object* v___x_1391_; 
lean_dec(v_macroStack_1381_);
v___x_1391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1391_, 0, v_msgData_1380_);
return v___x_1391_;
}
else
{
if (lean_obj_tag(v_macroStack_1381_) == 0)
{
lean_object* v___x_1392_; 
v___x_1392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1392_, 0, v_msgData_1380_);
return v___x_1392_;
}
else
{
lean_object* v_head_1393_; lean_object* v_after_1394_; lean_object* v___x_1396_; uint8_t v_isShared_1397_; uint8_t v_isSharedCheck_1409_; 
v_head_1393_ = lean_ctor_get(v_macroStack_1381_, 0);
lean_inc(v_head_1393_);
v_after_1394_ = lean_ctor_get(v_head_1393_, 1);
v_isSharedCheck_1409_ = !lean_is_exclusive(v_head_1393_);
if (v_isSharedCheck_1409_ == 0)
{
lean_object* v_unused_1410_; 
v_unused_1410_ = lean_ctor_get(v_head_1393_, 0);
lean_dec(v_unused_1410_);
v___x_1396_ = v_head_1393_;
v_isShared_1397_ = v_isSharedCheck_1409_;
goto v_resetjp_1395_;
}
else
{
lean_inc(v_after_1394_);
lean_dec(v_head_1393_);
v___x_1396_ = lean_box(0);
v_isShared_1397_ = v_isSharedCheck_1409_;
goto v_resetjp_1395_;
}
v_resetjp_1395_:
{
lean_object* v___x_1398_; lean_object* v___x_1400_; 
v___x_1398_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0);
if (v_isShared_1397_ == 0)
{
lean_ctor_set_tag(v___x_1396_, 7);
lean_ctor_set(v___x_1396_, 1, v___x_1398_);
lean_ctor_set(v___x_1396_, 0, v_msgData_1380_);
v___x_1400_ = v___x_1396_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1408_; 
v_reuseFailAlloc_1408_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1408_, 0, v_msgData_1380_);
lean_ctor_set(v_reuseFailAlloc_1408_, 1, v___x_1398_);
v___x_1400_ = v_reuseFailAlloc_1408_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v_msgData_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; 
v___x_1401_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__2);
v___x_1402_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1402_, 0, v___x_1400_);
lean_ctor_set(v___x_1402_, 1, v___x_1401_);
v___x_1403_ = l_Lean_MessageData_ofSyntax(v_after_1394_);
v___x_1404_ = l_Lean_indentD(v___x_1403_);
v_msgData_1405_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_1405_, 0, v___x_1402_);
lean_ctor_set(v_msgData_1405_, 1, v___x_1404_);
v___x_1406_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13(v_msgData_1405_, v_macroStack_1381_);
v___x_1407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1407_, 0, v___x_1406_);
return v___x_1407_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21___redArg___boxed(lean_object* v_msgData_1411_, lean_object* v_macroStack_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_){
_start:
{
lean_object* v_res_1415_; 
v_res_1415_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21___redArg(v_msgData_1411_, v_macroStack_1412_, v___y_1413_);
lean_dec(v___y_1413_);
return v_res_1415_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15___redArg(lean_object* v_msg_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_){
_start:
{
lean_object* v___x_1420_; 
v___x_1420_ = l_Lean_Elab_Command_getRef___redArg(v___y_1417_);
if (lean_obj_tag(v___x_1420_) == 0)
{
lean_object* v_a_1421_; lean_object* v_macroStack_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v_a_1425_; lean_object* v___x_1426_; lean_object* v_a_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1435_; 
v_a_1421_ = lean_ctor_get(v___x_1420_, 0);
lean_inc(v_a_1421_);
lean_dec_ref_known(v___x_1420_, 1);
v_macroStack_1422_ = lean_ctor_get(v___y_1417_, 4);
v___x_1423_ = l_Lean_Elab_getBetterRef(v_a_1421_, v_macroStack_1422_);
lean_dec(v_a_1421_);
v___x_1424_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg(v_msg_1416_, v___y_1418_);
v_a_1425_ = lean_ctor_get(v___x_1424_, 0);
lean_inc(v_a_1425_);
lean_dec_ref(v___x_1424_);
lean_inc(v_macroStack_1422_);
v___x_1426_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21___redArg(v_a_1425_, v_macroStack_1422_, v___y_1418_);
v_a_1427_ = lean_ctor_get(v___x_1426_, 0);
v_isSharedCheck_1435_ = !lean_is_exclusive(v___x_1426_);
if (v_isSharedCheck_1435_ == 0)
{
v___x_1429_ = v___x_1426_;
v_isShared_1430_ = v_isSharedCheck_1435_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_a_1427_);
lean_dec(v___x_1426_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1435_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1431_; lean_object* v___x_1433_; 
v___x_1431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1423_);
lean_ctor_set(v___x_1431_, 1, v_a_1427_);
if (v_isShared_1430_ == 0)
{
lean_ctor_set_tag(v___x_1429_, 1);
lean_ctor_set(v___x_1429_, 0, v___x_1431_);
v___x_1433_ = v___x_1429_;
goto v_reusejp_1432_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v___x_1431_);
v___x_1433_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1432_;
}
v_reusejp_1432_:
{
return v___x_1433_;
}
}
}
else
{
lean_object* v_a_1436_; lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1443_; 
lean_dec_ref(v_msg_1416_);
v_a_1436_ = lean_ctor_get(v___x_1420_, 0);
v_isSharedCheck_1443_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1443_ == 0)
{
v___x_1438_ = v___x_1420_;
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
else
{
lean_inc(v_a_1436_);
lean_dec(v___x_1420_);
v___x_1438_ = lean_box(0);
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
v_resetjp_1437_:
{
lean_object* v___x_1441_; 
if (v_isShared_1439_ == 0)
{
v___x_1441_ = v___x_1438_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v_a_1436_);
v___x_1441_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
return v___x_1441_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15___redArg___boxed(lean_object* v_msg_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_){
_start:
{
lean_object* v_res_1448_; 
v_res_1448_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15___redArg(v_msg_1444_, v___y_1445_, v___y_1446_);
lean_dec(v___y_1446_);
lean_dec_ref(v___y_1445_);
return v_res_1448_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___redArg(lean_object* v_ref_1449_, lean_object* v_msg_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_){
_start:
{
lean_object* v___x_1454_; 
v___x_1454_ = l_Lean_Elab_Command_getRef___redArg(v___y_1451_);
if (lean_obj_tag(v___x_1454_) == 0)
{
lean_object* v_a_1455_; lean_object* v_fileName_1456_; lean_object* v_fileMap_1457_; lean_object* v_currRecDepth_1458_; lean_object* v_cmdPos_1459_; lean_object* v_macroStack_1460_; lean_object* v_quotContext_x3f_1461_; lean_object* v_currMacroScope_1462_; lean_object* v_snap_x3f_1463_; lean_object* v_cancelTk_x3f_1464_; uint8_t v_suppressElabErrors_1465_; lean_object* v_ref_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; 
v_a_1455_ = lean_ctor_get(v___x_1454_, 0);
lean_inc(v_a_1455_);
lean_dec_ref_known(v___x_1454_, 1);
v_fileName_1456_ = lean_ctor_get(v___y_1451_, 0);
v_fileMap_1457_ = lean_ctor_get(v___y_1451_, 1);
v_currRecDepth_1458_ = lean_ctor_get(v___y_1451_, 2);
v_cmdPos_1459_ = lean_ctor_get(v___y_1451_, 3);
v_macroStack_1460_ = lean_ctor_get(v___y_1451_, 4);
v_quotContext_x3f_1461_ = lean_ctor_get(v___y_1451_, 5);
v_currMacroScope_1462_ = lean_ctor_get(v___y_1451_, 6);
v_snap_x3f_1463_ = lean_ctor_get(v___y_1451_, 8);
v_cancelTk_x3f_1464_ = lean_ctor_get(v___y_1451_, 9);
v_suppressElabErrors_1465_ = lean_ctor_get_uint8(v___y_1451_, sizeof(void*)*10);
v_ref_1466_ = l_Lean_replaceRef(v_ref_1449_, v_a_1455_);
lean_dec(v_a_1455_);
lean_inc(v_cancelTk_x3f_1464_);
lean_inc(v_snap_x3f_1463_);
lean_inc(v_currMacroScope_1462_);
lean_inc(v_quotContext_x3f_1461_);
lean_inc(v_macroStack_1460_);
lean_inc(v_cmdPos_1459_);
lean_inc(v_currRecDepth_1458_);
lean_inc_ref(v_fileMap_1457_);
lean_inc_ref(v_fileName_1456_);
v___x_1467_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_1467_, 0, v_fileName_1456_);
lean_ctor_set(v___x_1467_, 1, v_fileMap_1457_);
lean_ctor_set(v___x_1467_, 2, v_currRecDepth_1458_);
lean_ctor_set(v___x_1467_, 3, v_cmdPos_1459_);
lean_ctor_set(v___x_1467_, 4, v_macroStack_1460_);
lean_ctor_set(v___x_1467_, 5, v_quotContext_x3f_1461_);
lean_ctor_set(v___x_1467_, 6, v_currMacroScope_1462_);
lean_ctor_set(v___x_1467_, 7, v_ref_1466_);
lean_ctor_set(v___x_1467_, 8, v_snap_x3f_1463_);
lean_ctor_set(v___x_1467_, 9, v_cancelTk_x3f_1464_);
lean_ctor_set_uint8(v___x_1467_, sizeof(void*)*10, v_suppressElabErrors_1465_);
v___x_1468_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15___redArg(v_msg_1450_, v___x_1467_, v___y_1452_);
lean_dec_ref_known(v___x_1467_, 10);
return v___x_1468_;
}
else
{
lean_object* v_a_1469_; lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1476_; 
lean_dec_ref(v_msg_1450_);
v_a_1469_ = lean_ctor_get(v___x_1454_, 0);
v_isSharedCheck_1476_ = !lean_is_exclusive(v___x_1454_);
if (v_isSharedCheck_1476_ == 0)
{
v___x_1471_ = v___x_1454_;
v_isShared_1472_ = v_isSharedCheck_1476_;
goto v_resetjp_1470_;
}
else
{
lean_inc(v_a_1469_);
lean_dec(v___x_1454_);
v___x_1471_ = lean_box(0);
v_isShared_1472_ = v_isSharedCheck_1476_;
goto v_resetjp_1470_;
}
v_resetjp_1470_:
{
lean_object* v___x_1474_; 
if (v_isShared_1472_ == 0)
{
v___x_1474_ = v___x_1471_;
goto v_reusejp_1473_;
}
else
{
lean_object* v_reuseFailAlloc_1475_; 
v_reuseFailAlloc_1475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1475_, 0, v_a_1469_);
v___x_1474_ = v_reuseFailAlloc_1475_;
goto v_reusejp_1473_;
}
v_reusejp_1473_:
{
return v___x_1474_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_ref_1477_, lean_object* v_msg_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_){
_start:
{
lean_object* v_res_1482_; 
v_res_1482_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___redArg(v_ref_1477_, v_msg_1478_, v___y_1479_, v___y_1480_);
lean_dec(v___y_1480_);
lean_dec_ref(v___y_1479_);
lean_dec(v_ref_1477_);
return v_res_1482_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__1(void){
_start:
{
lean_object* v___x_1484_; lean_object* v___x_1485_; 
v___x_1484_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__0));
v___x_1485_ = l_Lean_stringToMessageData(v___x_1484_);
return v___x_1485_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__3(void){
_start:
{
lean_object* v___x_1487_; lean_object* v___x_1488_; 
v___x_1487_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__2));
v___x_1488_ = l_Lean_stringToMessageData(v___x_1487_);
return v___x_1488_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__5(void){
_start:
{
lean_object* v___x_1490_; lean_object* v___x_1491_; 
v___x_1490_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__4));
v___x_1491_ = l_Lean_stringToMessageData(v___x_1490_);
return v___x_1491_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__7(void){
_start:
{
lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1493_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__6));
v___x_1494_ = l_Lean_stringToMessageData(v___x_1493_);
return v___x_1494_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__9(void){
_start:
{
lean_object* v___x_1496_; lean_object* v___x_1497_; 
v___x_1496_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__8));
v___x_1497_ = l_Lean_stringToMessageData(v___x_1496_);
return v___x_1497_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__11(void){
_start:
{
lean_object* v___x_1499_; lean_object* v___x_1500_; 
v___x_1499_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__10));
v___x_1500_ = l_Lean_stringToMessageData(v___x_1499_);
return v___x_1500_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__13(void){
_start:
{
lean_object* v___x_1502_; lean_object* v___x_1503_; 
v___x_1502_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__12));
v___x_1503_ = l_Lean_stringToMessageData(v___x_1502_);
return v___x_1503_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg(lean_object* v_msg_1504_, lean_object* v_declHint_1505_, lean_object* v___y_1506_){
_start:
{
lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v_env_1510_; uint8_t v___x_1511_; 
v___x_1508_ = lean_box(0);
v___x_1509_ = lean_st_ref_get(v___y_1506_);
v_env_1510_ = lean_ctor_get(v___x_1509_, 0);
lean_inc_ref(v_env_1510_);
lean_dec(v___x_1509_);
v___x_1511_ = l_Lean_Name_isAnonymous(v_declHint_1505_);
if (v___x_1511_ == 0)
{
uint8_t v_isExporting_1512_; 
v_isExporting_1512_ = lean_ctor_get_uint8(v_env_1510_, sizeof(void*)*8);
if (v_isExporting_1512_ == 0)
{
lean_object* v___x_1513_; 
lean_dec_ref(v_env_1510_);
lean_dec(v_declHint_1505_);
v___x_1513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1513_, 0, v_msg_1504_);
return v___x_1513_;
}
else
{
lean_object* v___x_1514_; uint8_t v___x_1515_; 
lean_inc_ref(v_env_1510_);
v___x_1514_ = l_Lean_Environment_setExporting(v_env_1510_, v___x_1511_);
lean_inc(v_declHint_1505_);
lean_inc_ref(v___x_1514_);
v___x_1515_ = l_Lean_Environment_contains(v___x_1514_, v_declHint_1505_, v_isExporting_1512_);
if (v___x_1515_ == 0)
{
lean_object* v___x_1516_; 
lean_dec_ref(v___x_1514_);
lean_dec_ref(v_env_1510_);
lean_dec(v_declHint_1505_);
v___x_1516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1516_, 0, v_msg_1504_);
return v___x_1516_;
}
else
{
lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v_c_1522_; lean_object* v___x_1523_; 
v___x_1517_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__2);
v___x_1518_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__5);
v___x_1519_ = l_Lean_Options_empty;
v___x_1520_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1520_, 0, v___x_1514_);
lean_ctor_set(v___x_1520_, 1, v___x_1517_);
lean_ctor_set(v___x_1520_, 2, v___x_1518_);
lean_ctor_set(v___x_1520_, 3, v___x_1519_);
lean_inc(v_declHint_1505_);
v___x_1521_ = l_Lean_MessageData_ofConstName(v_declHint_1505_, v___x_1511_);
v_c_1522_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1522_, 0, v___x_1520_);
lean_ctor_set(v_c_1522_, 1, v___x_1521_);
v___x_1523_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1510_, v_declHint_1505_);
if (lean_obj_tag(v___x_1523_) == 0)
{
lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; 
lean_dec_ref(v_env_1510_);
lean_dec(v_declHint_1505_);
v___x_1524_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__1);
v___x_1525_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1525_, 0, v___x_1524_);
lean_ctor_set(v___x_1525_, 1, v_c_1522_);
v___x_1526_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__3);
v___x_1527_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1527_, 0, v___x_1525_);
lean_ctor_set(v___x_1527_, 1, v___x_1526_);
v___x_1528_ = l_Lean_MessageData_note(v___x_1527_);
v___x_1529_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1529_, 0, v_msg_1504_);
lean_ctor_set(v___x_1529_, 1, v___x_1528_);
v___x_1530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1530_, 0, v___x_1529_);
return v___x_1530_;
}
else
{
lean_object* v_val_1531_; lean_object* v___x_1533_; uint8_t v_isShared_1534_; uint8_t v_isSharedCheck_1565_; 
v_val_1531_ = lean_ctor_get(v___x_1523_, 0);
v_isSharedCheck_1565_ = !lean_is_exclusive(v___x_1523_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1533_ = v___x_1523_;
v_isShared_1534_ = v_isSharedCheck_1565_;
goto v_resetjp_1532_;
}
else
{
lean_inc(v_val_1531_);
lean_dec(v___x_1523_);
v___x_1533_ = lean_box(0);
v_isShared_1534_ = v_isSharedCheck_1565_;
goto v_resetjp_1532_;
}
v_resetjp_1532_:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v_mod_1537_; uint8_t v___x_1538_; 
v___x_1535_ = l_Lean_Environment_header(v_env_1510_);
lean_dec_ref(v_env_1510_);
v___x_1536_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1535_);
v_mod_1537_ = lean_array_get(v___x_1508_, v___x_1536_, v_val_1531_);
lean_dec(v_val_1531_);
lean_dec_ref(v___x_1536_);
v___x_1538_ = l_Lean_isPrivateName(v_declHint_1505_);
lean_dec(v_declHint_1505_);
if (v___x_1538_ == 0)
{
lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1550_; 
v___x_1539_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__5);
v___x_1540_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1540_, 0, v___x_1539_);
lean_ctor_set(v___x_1540_, 1, v_c_1522_);
v___x_1541_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__7);
v___x_1542_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1542_, 0, v___x_1540_);
lean_ctor_set(v___x_1542_, 1, v___x_1541_);
v___x_1543_ = l_Lean_MessageData_ofName(v_mod_1537_);
v___x_1544_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1544_, 0, v___x_1542_);
lean_ctor_set(v___x_1544_, 1, v___x_1543_);
v___x_1545_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__9);
v___x_1546_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1546_, 0, v___x_1544_);
lean_ctor_set(v___x_1546_, 1, v___x_1545_);
v___x_1547_ = l_Lean_MessageData_note(v___x_1546_);
v___x_1548_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1548_, 0, v_msg_1504_);
lean_ctor_set(v___x_1548_, 1, v___x_1547_);
if (v_isShared_1534_ == 0)
{
lean_ctor_set_tag(v___x_1533_, 0);
lean_ctor_set(v___x_1533_, 0, v___x_1548_);
v___x_1550_ = v___x_1533_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v___x_1548_);
v___x_1550_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
return v___x_1550_;
}
}
else
{
lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1563_; 
v___x_1552_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__1);
v___x_1553_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1553_, 0, v___x_1552_);
lean_ctor_set(v___x_1553_, 1, v_c_1522_);
v___x_1554_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__11);
v___x_1555_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1555_, 0, v___x_1553_);
lean_ctor_set(v___x_1555_, 1, v___x_1554_);
v___x_1556_ = l_Lean_MessageData_ofName(v_mod_1537_);
v___x_1557_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1557_, 0, v___x_1555_);
lean_ctor_set(v___x_1557_, 1, v___x_1556_);
v___x_1558_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__13);
v___x_1559_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1559_, 0, v___x_1557_);
lean_ctor_set(v___x_1559_, 1, v___x_1558_);
v___x_1560_ = l_Lean_MessageData_note(v___x_1559_);
v___x_1561_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1561_, 0, v_msg_1504_);
lean_ctor_set(v___x_1561_, 1, v___x_1560_);
if (v_isShared_1534_ == 0)
{
lean_ctor_set_tag(v___x_1533_, 0);
lean_ctor_set(v___x_1533_, 0, v___x_1561_);
v___x_1563_ = v___x_1533_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v___x_1561_);
v___x_1563_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
return v___x_1563_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1566_; 
lean_dec_ref(v_env_1510_);
lean_dec(v_declHint_1505_);
v___x_1566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1566_, 0, v_msg_1504_);
return v___x_1566_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___boxed(lean_object* v_msg_1567_, lean_object* v_declHint_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_){
_start:
{
lean_object* v_res_1571_; 
v_res_1571_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg(v_msg_1567_, v_declHint_1568_, v___y_1569_);
lean_dec(v___y_1569_);
return v_res_1571_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53(lean_object* v_msg_1572_, lean_object* v_declHint_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_){
_start:
{
lean_object* v___x_1577_; lean_object* v_a_1578_; lean_object* v___x_1580_; uint8_t v_isShared_1581_; uint8_t v_isSharedCheck_1587_; 
v___x_1577_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg(v_msg_1572_, v_declHint_1573_, v___y_1575_);
v_a_1578_ = lean_ctor_get(v___x_1577_, 0);
v_isSharedCheck_1587_ = !lean_is_exclusive(v___x_1577_);
if (v_isSharedCheck_1587_ == 0)
{
v___x_1580_ = v___x_1577_;
v_isShared_1581_ = v_isSharedCheck_1587_;
goto v_resetjp_1579_;
}
else
{
lean_inc(v_a_1578_);
lean_dec(v___x_1577_);
v___x_1580_ = lean_box(0);
v_isShared_1581_ = v_isSharedCheck_1587_;
goto v_resetjp_1579_;
}
v_resetjp_1579_:
{
lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1585_; 
v___x_1582_ = l_Lean_unknownIdentifierMessageTag;
v___x_1583_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1582_);
lean_ctor_set(v___x_1583_, 1, v_a_1578_);
if (v_isShared_1581_ == 0)
{
lean_ctor_set(v___x_1580_, 0, v___x_1583_);
v___x_1585_ = v___x_1580_;
goto v_reusejp_1584_;
}
else
{
lean_object* v_reuseFailAlloc_1586_; 
v_reuseFailAlloc_1586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1586_, 0, v___x_1583_);
v___x_1585_ = v_reuseFailAlloc_1586_;
goto v_reusejp_1584_;
}
v_reusejp_1584_:
{
return v___x_1585_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53___boxed(lean_object* v_msg_1588_, lean_object* v_declHint_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_){
_start:
{
lean_object* v_res_1593_; 
v_res_1593_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53(v_msg_1588_, v_declHint_1589_, v___y_1590_, v___y_1591_);
lean_dec(v___y_1591_);
lean_dec_ref(v___y_1590_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50___redArg(lean_object* v_ref_1594_, lean_object* v_msg_1595_, lean_object* v_declHint_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_){
_start:
{
lean_object* v___x_1600_; lean_object* v_a_1601_; lean_object* v___x_1602_; 
v___x_1600_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53(v_msg_1595_, v_declHint_1596_, v___y_1597_, v___y_1598_);
v_a_1601_ = lean_ctor_get(v___x_1600_, 0);
lean_inc(v_a_1601_);
lean_dec_ref(v___x_1600_);
v___x_1602_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___redArg(v_ref_1594_, v_a_1601_, v___y_1597_, v___y_1598_);
return v___x_1602_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50___redArg___boxed(lean_object* v_ref_1603_, lean_object* v_msg_1604_, lean_object* v_declHint_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_){
_start:
{
lean_object* v_res_1609_; 
v_res_1609_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50___redArg(v_ref_1603_, v_msg_1604_, v_declHint_1605_, v___y_1606_, v___y_1607_);
lean_dec(v___y_1607_);
lean_dec_ref(v___y_1606_);
lean_dec(v_ref_1603_);
return v_res_1609_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg___closed__1(void){
_start:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; 
v___x_1611_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg___closed__0));
v___x_1612_ = l_Lean_stringToMessageData(v___x_1611_);
return v___x_1612_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg(lean_object* v_ref_1613_, lean_object* v_constName_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_){
_start:
{
lean_object* v___x_1618_; uint8_t v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; 
v___x_1618_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg___closed__1);
v___x_1619_ = 0;
lean_inc(v_constName_1614_);
v___x_1620_ = l_Lean_MessageData_ofConstName(v_constName_1614_, v___x_1619_);
v___x_1621_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1621_, 0, v___x_1618_);
lean_ctor_set(v___x_1621_, 1, v___x_1620_);
v___x_1622_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1);
v___x_1623_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1621_);
lean_ctor_set(v___x_1623_, 1, v___x_1622_);
v___x_1624_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50___redArg(v_ref_1613_, v___x_1623_, v_constName_1614_, v___y_1615_, v___y_1616_);
return v___x_1624_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg___boxed(lean_object* v_ref_1625_, lean_object* v_constName_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_){
_start:
{
lean_object* v_res_1630_; 
v_res_1630_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg(v_ref_1625_, v_constName_1626_, v___y_1627_, v___y_1628_);
lean_dec(v___y_1628_);
lean_dec_ref(v___y_1627_);
lean_dec(v_ref_1625_);
return v_res_1630_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26___redArg(lean_object* v_constName_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_){
_start:
{
lean_object* v___x_1635_; 
v___x_1635_ = l_Lean_Elab_Command_getRef___redArg(v___y_1632_);
if (lean_obj_tag(v___x_1635_) == 0)
{
lean_object* v_a_1636_; lean_object* v___x_1637_; 
v_a_1636_ = lean_ctor_get(v___x_1635_, 0);
lean_inc(v_a_1636_);
lean_dec_ref_known(v___x_1635_, 1);
v___x_1637_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg(v_a_1636_, v_constName_1631_, v___y_1632_, v___y_1633_);
lean_dec(v_a_1636_);
return v___x_1637_;
}
else
{
lean_object* v_a_1638_; lean_object* v___x_1640_; uint8_t v_isShared_1641_; uint8_t v_isSharedCheck_1645_; 
lean_dec(v_constName_1631_);
v_a_1638_ = lean_ctor_get(v___x_1635_, 0);
v_isSharedCheck_1645_ = !lean_is_exclusive(v___x_1635_);
if (v_isSharedCheck_1645_ == 0)
{
v___x_1640_ = v___x_1635_;
v_isShared_1641_ = v_isSharedCheck_1645_;
goto v_resetjp_1639_;
}
else
{
lean_inc(v_a_1638_);
lean_dec(v___x_1635_);
v___x_1640_ = lean_box(0);
v_isShared_1641_ = v_isSharedCheck_1645_;
goto v_resetjp_1639_;
}
v_resetjp_1639_:
{
lean_object* v___x_1643_; 
if (v_isShared_1641_ == 0)
{
v___x_1643_ = v___x_1640_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v_a_1638_);
v___x_1643_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
return v___x_1643_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26___redArg___boxed(lean_object* v_constName_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_){
_start:
{
lean_object* v_res_1650_; 
v_res_1650_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26___redArg(v_constName_1646_, v___y_1647_, v___y_1648_);
lean_dec(v___y_1648_);
lean_dec_ref(v___y_1647_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15(lean_object* v_constName_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_){
_start:
{
lean_object* v___x_1655_; lean_object* v_env_1656_; uint8_t v___x_1657_; lean_object* v___x_1658_; 
v___x_1655_ = lean_st_ref_get(v___y_1653_);
v_env_1656_ = lean_ctor_get(v___x_1655_, 0);
lean_inc_ref(v_env_1656_);
lean_dec(v___x_1655_);
v___x_1657_ = 0;
lean_inc(v_constName_1651_);
v___x_1658_ = l_Lean_Environment_findConstVal_x3f(v_env_1656_, v_constName_1651_, v___x_1657_);
if (lean_obj_tag(v___x_1658_) == 0)
{
lean_object* v___x_1659_; 
v___x_1659_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26___redArg(v_constName_1651_, v___y_1652_, v___y_1653_);
return v___x_1659_;
}
else
{
lean_object* v_val_1660_; lean_object* v___x_1662_; uint8_t v_isShared_1663_; uint8_t v_isSharedCheck_1667_; 
lean_dec(v_constName_1651_);
v_val_1660_ = lean_ctor_get(v___x_1658_, 0);
v_isSharedCheck_1667_ = !lean_is_exclusive(v___x_1658_);
if (v_isSharedCheck_1667_ == 0)
{
v___x_1662_ = v___x_1658_;
v_isShared_1663_ = v_isSharedCheck_1667_;
goto v_resetjp_1661_;
}
else
{
lean_inc(v_val_1660_);
lean_dec(v___x_1658_);
v___x_1662_ = lean_box(0);
v_isShared_1663_ = v_isSharedCheck_1667_;
goto v_resetjp_1661_;
}
v_resetjp_1661_:
{
lean_object* v___x_1665_; 
if (v_isShared_1663_ == 0)
{
lean_ctor_set_tag(v___x_1662_, 0);
v___x_1665_ = v___x_1662_;
goto v_reusejp_1664_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v_val_1660_);
v___x_1665_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1664_;
}
v_reusejp_1664_:
{
return v___x_1665_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15___boxed(lean_object* v_constName_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_){
_start:
{
lean_object* v_res_1672_; 
v_res_1672_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15(v_constName_1668_, v___y_1669_, v___y_1670_);
lean_dec(v___y_1670_);
lean_dec_ref(v___y_1669_);
return v_res_1672_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9(lean_object* v_constName_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_){
_start:
{
lean_object* v___x_1677_; 
lean_inc(v_constName_1673_);
v___x_1677_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15(v_constName_1673_, v___y_1674_, v___y_1675_);
if (lean_obj_tag(v___x_1677_) == 0)
{
lean_object* v_a_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1689_; 
v_a_1678_ = lean_ctor_get(v___x_1677_, 0);
v_isSharedCheck_1689_ = !lean_is_exclusive(v___x_1677_);
if (v_isSharedCheck_1689_ == 0)
{
v___x_1680_ = v___x_1677_;
v_isShared_1681_ = v_isSharedCheck_1689_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_a_1678_);
lean_dec(v___x_1677_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1689_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v_levelParams_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1687_; 
v_levelParams_1682_ = lean_ctor_get(v_a_1678_, 1);
lean_inc(v_levelParams_1682_);
lean_dec(v_a_1678_);
v___x_1683_ = lean_box(0);
v___x_1684_ = l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(v_levelParams_1682_, v___x_1683_);
v___x_1685_ = l_Lean_mkConst(v_constName_1673_, v___x_1684_);
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 0, v___x_1685_);
v___x_1687_ = v___x_1680_;
goto v_reusejp_1686_;
}
else
{
lean_object* v_reuseFailAlloc_1688_; 
v_reuseFailAlloc_1688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1688_, 0, v___x_1685_);
v___x_1687_ = v_reuseFailAlloc_1688_;
goto v_reusejp_1686_;
}
v_reusejp_1686_:
{
return v___x_1687_;
}
}
}
else
{
lean_object* v_a_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1697_; 
lean_dec(v_constName_1673_);
v_a_1690_ = lean_ctor_get(v___x_1677_, 0);
v_isSharedCheck_1697_ = !lean_is_exclusive(v___x_1677_);
if (v_isSharedCheck_1697_ == 0)
{
v___x_1692_ = v___x_1677_;
v_isShared_1693_ = v_isSharedCheck_1697_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_a_1690_);
lean_dec(v___x_1677_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1697_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
lean_object* v___x_1695_; 
if (v_isShared_1693_ == 0)
{
v___x_1695_ = v___x_1692_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v_a_1690_);
v___x_1695_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
return v___x_1695_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9___boxed(lean_object* v_constName_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_){
_start:
{
lean_object* v_res_1702_; 
v_res_1702_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9(v_constName_1698_, v___y_1699_, v___y_1700_);
lean_dec(v___y_1700_);
lean_dec_ref(v___y_1699_);
return v_res_1702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5(lean_object* v_stx_1703_, lean_object* v_n_1704_, lean_object* v_expectedType_x3f_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_){
_start:
{
lean_object* v___x_1709_; 
v___x_1709_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9(v_n_1704_, v___y_1706_, v___y_1707_);
if (lean_obj_tag(v___x_1709_) == 0)
{
lean_object* v_a_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; uint8_t v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; 
v_a_1710_ = lean_ctor_get(v___x_1709_, 0);
lean_inc(v_a_1710_);
lean_dec_ref_known(v___x_1709_, 1);
v___x_1711_ = lean_box(0);
v___x_1712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1712_, 0, v___x_1711_);
lean_ctor_set(v___x_1712_, 1, v_stx_1703_);
v___x_1713_ = l_Lean_LocalContext_empty;
v___x_1714_ = 0;
v___x_1715_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_1715_, 0, v___x_1712_);
lean_ctor_set(v___x_1715_, 1, v___x_1713_);
lean_ctor_set(v___x_1715_, 2, v_expectedType_x3f_1705_);
lean_ctor_set(v___x_1715_, 3, v_a_1710_);
lean_ctor_set_uint8(v___x_1715_, sizeof(void*)*4, v___x_1714_);
lean_ctor_set_uint8(v___x_1715_, sizeof(void*)*4 + 1, v___x_1714_);
v___x_1716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1716_, 0, v___x_1715_);
v___x_1717_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10(v___x_1716_, v___y_1706_, v___y_1707_);
return v___x_1717_;
}
else
{
lean_object* v_a_1718_; lean_object* v___x_1720_; uint8_t v_isShared_1721_; uint8_t v_isSharedCheck_1725_; 
lean_dec(v_expectedType_x3f_1705_);
lean_dec(v_stx_1703_);
v_a_1718_ = lean_ctor_get(v___x_1709_, 0);
v_isSharedCheck_1725_ = !lean_is_exclusive(v___x_1709_);
if (v_isSharedCheck_1725_ == 0)
{
v___x_1720_ = v___x_1709_;
v_isShared_1721_ = v_isSharedCheck_1725_;
goto v_resetjp_1719_;
}
else
{
lean_inc(v_a_1718_);
lean_dec(v___x_1709_);
v___x_1720_ = lean_box(0);
v_isShared_1721_ = v_isSharedCheck_1725_;
goto v_resetjp_1719_;
}
v_resetjp_1719_:
{
lean_object* v___x_1723_; 
if (v_isShared_1721_ == 0)
{
v___x_1723_ = v___x_1720_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1724_; 
v_reuseFailAlloc_1724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1724_, 0, v_a_1718_);
v___x_1723_ = v_reuseFailAlloc_1724_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
return v___x_1723_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5___boxed(lean_object* v_stx_1726_, lean_object* v_n_1727_, lean_object* v_expectedType_x3f_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_){
_start:
{
lean_object* v_res_1732_; 
v_res_1732_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5(v_stx_1726_, v_n_1727_, v_expectedType_x3f_1728_, v___y_1729_, v___y_1730_);
lean_dec(v___y_1730_);
lean_dec_ref(v___y_1729_);
return v_res_1732_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12___redArg(lean_object* v_declName_1733_, uint8_t v_s_1734_, lean_object* v___y_1735_){
_start:
{
lean_object* v___x_1737_; lean_object* v_env_1738_; lean_object* v_messages_1739_; lean_object* v_scopes_1740_; lean_object* v_usedQuotCtxts_1741_; lean_object* v_nextMacroScope_1742_; lean_object* v_maxRecDepth_1743_; lean_object* v_ngen_1744_; lean_object* v_auxDeclNGen_1745_; lean_object* v_infoState_1746_; lean_object* v_traceState_1747_; lean_object* v_snapshotTasks_1748_; lean_object* v_prevLinterStates_1749_; lean_object* v_codeQualityEntryTasks_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1763_; 
v___x_1737_ = lean_st_ref_take(v___y_1735_);
v_env_1738_ = lean_ctor_get(v___x_1737_, 0);
v_messages_1739_ = lean_ctor_get(v___x_1737_, 1);
v_scopes_1740_ = lean_ctor_get(v___x_1737_, 2);
v_usedQuotCtxts_1741_ = lean_ctor_get(v___x_1737_, 3);
v_nextMacroScope_1742_ = lean_ctor_get(v___x_1737_, 4);
v_maxRecDepth_1743_ = lean_ctor_get(v___x_1737_, 5);
v_ngen_1744_ = lean_ctor_get(v___x_1737_, 6);
v_auxDeclNGen_1745_ = lean_ctor_get(v___x_1737_, 7);
v_infoState_1746_ = lean_ctor_get(v___x_1737_, 8);
v_traceState_1747_ = lean_ctor_get(v___x_1737_, 9);
v_snapshotTasks_1748_ = lean_ctor_get(v___x_1737_, 10);
v_prevLinterStates_1749_ = lean_ctor_get(v___x_1737_, 11);
v_codeQualityEntryTasks_1750_ = lean_ctor_get(v___x_1737_, 12);
v_isSharedCheck_1763_ = !lean_is_exclusive(v___x_1737_);
if (v_isSharedCheck_1763_ == 0)
{
v___x_1752_ = v___x_1737_;
v_isShared_1753_ = v_isSharedCheck_1763_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1750_);
lean_inc(v_prevLinterStates_1749_);
lean_inc(v_snapshotTasks_1748_);
lean_inc(v_traceState_1747_);
lean_inc(v_infoState_1746_);
lean_inc(v_auxDeclNGen_1745_);
lean_inc(v_ngen_1744_);
lean_inc(v_maxRecDepth_1743_);
lean_inc(v_nextMacroScope_1742_);
lean_inc(v_usedQuotCtxts_1741_);
lean_inc(v_scopes_1740_);
lean_inc(v_messages_1739_);
lean_inc(v_env_1738_);
lean_dec(v___x_1737_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1763_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v___x_1754_; uint8_t v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1759_; 
v___x_1754_ = lean_box(0);
v___x_1755_ = 0;
v___x_1756_ = lean_box(0);
v___x_1757_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_1738_, v_declName_1733_, v_s_1734_, v___x_1755_, v___x_1756_);
if (v_isShared_1753_ == 0)
{
lean_ctor_set(v___x_1752_, 0, v___x_1757_);
v___x_1759_ = v___x_1752_;
goto v_reusejp_1758_;
}
else
{
lean_object* v_reuseFailAlloc_1762_; 
v_reuseFailAlloc_1762_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1762_, 0, v___x_1757_);
lean_ctor_set(v_reuseFailAlloc_1762_, 1, v_messages_1739_);
lean_ctor_set(v_reuseFailAlloc_1762_, 2, v_scopes_1740_);
lean_ctor_set(v_reuseFailAlloc_1762_, 3, v_usedQuotCtxts_1741_);
lean_ctor_set(v_reuseFailAlloc_1762_, 4, v_nextMacroScope_1742_);
lean_ctor_set(v_reuseFailAlloc_1762_, 5, v_maxRecDepth_1743_);
lean_ctor_set(v_reuseFailAlloc_1762_, 6, v_ngen_1744_);
lean_ctor_set(v_reuseFailAlloc_1762_, 7, v_auxDeclNGen_1745_);
lean_ctor_set(v_reuseFailAlloc_1762_, 8, v_infoState_1746_);
lean_ctor_set(v_reuseFailAlloc_1762_, 9, v_traceState_1747_);
lean_ctor_set(v_reuseFailAlloc_1762_, 10, v_snapshotTasks_1748_);
lean_ctor_set(v_reuseFailAlloc_1762_, 11, v_prevLinterStates_1749_);
lean_ctor_set(v_reuseFailAlloc_1762_, 12, v_codeQualityEntryTasks_1750_);
v___x_1759_ = v_reuseFailAlloc_1762_;
goto v_reusejp_1758_;
}
v_reusejp_1758_:
{
lean_object* v___x_1760_; lean_object* v___x_1761_; 
v___x_1760_ = lean_st_ref_put(v___y_1735_, v___x_1759_);
v___x_1761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1761_, 0, v___x_1754_);
return v___x_1761_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12___redArg___boxed(lean_object* v_declName_1764_, lean_object* v_s_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_){
_start:
{
uint8_t v_s_boxed_1768_; lean_object* v_res_1769_; 
v_s_boxed_1768_ = lean_unbox(v_s_1765_);
v_res_1769_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12___redArg(v_declName_1764_, v_s_boxed_1768_, v___y_1766_);
lean_dec(v___y_1766_);
return v_res_1769_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6(lean_object* v_declName_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_){
_start:
{
uint8_t v___x_1774_; lean_object* v___x_1775_; 
v___x_1774_ = 2;
v___x_1775_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12___redArg(v_declName_1770_, v___x_1774_, v___y_1772_);
return v___x_1775_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6___boxed(lean_object* v_declName_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_){
_start:
{
lean_object* v_res_1780_; 
v_res_1780_ = l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6(v_declName_1776_, v___y_1777_, v___y_1778_);
lean_dec(v___y_1778_);
lean_dec_ref(v___y_1777_);
return v_res_1780_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg(lean_object* v_as_x27_1781_, lean_object* v_b_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_){
_start:
{
if (lean_obj_tag(v_as_x27_1781_) == 0)
{
lean_object* v___x_1786_; 
v___x_1786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1786_, 0, v_b_1782_);
return v___x_1786_;
}
else
{
lean_object* v_head_1787_; lean_object* v_tail_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; 
v_head_1787_ = lean_ctor_get(v_as_x27_1781_, 0);
v_tail_1788_ = lean_ctor_get(v_as_x27_1781_, 1);
v___x_1789_ = lean_box(0);
lean_inc(v_head_1787_);
v___x_1790_ = l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6(v_head_1787_, v___y_1783_, v___y_1784_);
lean_dec_ref(v___x_1790_);
v_as_x27_1781_ = v_tail_1788_;
v_b_1782_ = v___x_1789_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg___boxed(lean_object* v_as_x27_1792_, lean_object* v_b_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_){
_start:
{
lean_object* v_res_1797_; 
v_res_1797_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg(v_as_x27_1792_, v_b_1793_, v___y_1794_, v___y_1795_);
lean_dec(v___y_1795_);
lean_dec_ref(v___y_1794_);
lean_dec(v_as_x27_1792_);
return v_res_1797_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__3(size_t v_sz_1798_, size_t v_i_1799_, lean_object* v_bs_1800_){
_start:
{
uint8_t v___x_1801_; 
v___x_1801_ = lean_usize_dec_lt(v_i_1799_, v_sz_1798_);
if (v___x_1801_ == 0)
{
return v_bs_1800_;
}
else
{
lean_object* v_v_1802_; lean_object* v___x_1803_; lean_object* v_bs_x27_1804_; size_t v___x_1805_; size_t v___x_1806_; lean_object* v___x_1807_; 
v_v_1802_ = lean_array_uget(v_bs_1800_, v_i_1799_);
v___x_1803_ = lean_unsigned_to_nat(0u);
v_bs_x27_1804_ = lean_array_uset(v_bs_1800_, v_i_1799_, v___x_1803_);
v___x_1805_ = ((size_t)1ULL);
v___x_1806_ = lean_usize_add(v_i_1799_, v___x_1805_);
v___x_1807_ = lean_array_uset(v_bs_x27_1804_, v_i_1799_, v_v_1802_);
v_i_1799_ = v___x_1806_;
v_bs_1800_ = v___x_1807_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__3___boxed(lean_object* v_sz_1809_, lean_object* v_i_1810_, lean_object* v_bs_1811_){
_start:
{
size_t v_sz_boxed_1812_; size_t v_i_boxed_1813_; lean_object* v_res_1814_; 
v_sz_boxed_1812_ = lean_unbox_usize(v_sz_1809_);
lean_dec(v_sz_1809_);
v_i_boxed_1813_ = lean_unbox_usize(v_i_1810_);
lean_dec(v_i_1810_);
v_res_1814_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__3(v_sz_boxed_1812_, v_i_boxed_1813_, v_bs_1811_);
return v_res_1814_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___redArg(lean_object* v_as_x27_1815_, lean_object* v_b_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_){
_start:
{
if (lean_obj_tag(v_as_x27_1815_) == 0)
{
lean_object* v___x_1820_; 
v___x_1820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1820_, 0, v_b_1816_);
return v___x_1820_;
}
else
{
lean_object* v_head_1821_; lean_object* v_tail_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; 
v_head_1821_ = lean_ctor_get(v_as_x27_1815_, 0);
v_tail_1822_ = lean_ctor_get(v_as_x27_1815_, 1);
v___x_1823_ = lean_box(0);
lean_inc(v_head_1821_);
v___x_1824_ = lean_alloc_closure((void*)(l_Lean_enableRealizationsForConst___boxed), 4, 1);
lean_closure_set(v___x_1824_, 0, v_head_1821_);
v___x_1825_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_1824_, v___y_1817_, v___y_1818_);
if (lean_obj_tag(v___x_1825_) == 0)
{
lean_dec_ref_known(v___x_1825_, 1);
v_as_x27_1815_ = v_tail_1822_;
v_b_1816_ = v___x_1823_;
goto _start;
}
else
{
return v___x_1825_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___redArg___boxed(lean_object* v_as_x27_1827_, lean_object* v_b_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_){
_start:
{
lean_object* v_res_1832_; 
v_res_1832_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___redArg(v_as_x27_1827_, v_b_1828_, v___y_1829_, v___y_1830_);
lean_dec(v___y_1830_);
lean_dec_ref(v___y_1829_);
lean_dec(v_as_x27_1827_);
return v_res_1832_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___redArg(lean_object* v_stx_1833_, lean_object* v___y_1834_){
_start:
{
uint8_t v___x_1836_; lean_object* v___x_1837_; 
v___x_1836_ = 0;
v___x_1837_ = l_Lean_Syntax_getRange_x3f(v_stx_1833_, v___x_1836_);
if (lean_obj_tag(v___x_1837_) == 1)
{
lean_object* v_val_1838_; lean_object* v___x_1840_; uint8_t v_isShared_1841_; uint8_t v_isSharedCheck_1850_; 
v_val_1838_ = lean_ctor_get(v___x_1837_, 0);
v_isSharedCheck_1850_ = !lean_is_exclusive(v___x_1837_);
if (v_isSharedCheck_1850_ == 0)
{
v___x_1840_ = v___x_1837_;
v_isShared_1841_ = v_isSharedCheck_1850_;
goto v_resetjp_1839_;
}
else
{
lean_inc(v_val_1838_);
lean_dec(v___x_1837_);
v___x_1840_ = lean_box(0);
v_isShared_1841_ = v_isSharedCheck_1850_;
goto v_resetjp_1839_;
}
v_resetjp_1839_:
{
lean_object* v_fileMap_1842_; lean_object* v_start_1843_; lean_object* v_stop_1844_; lean_object* v___x_1845_; lean_object* v___x_1847_; 
v_fileMap_1842_ = lean_ctor_get(v___y_1834_, 1);
v_start_1843_ = lean_ctor_get(v_val_1838_, 0);
lean_inc(v_start_1843_);
v_stop_1844_ = lean_ctor_get(v_val_1838_, 1);
lean_inc(v_stop_1844_);
lean_dec(v_val_1838_);
lean_inc_ref(v_fileMap_1842_);
v___x_1845_ = l_Lean_DeclarationRange_ofStringPositions(v_fileMap_1842_, v_start_1843_, v_stop_1844_);
lean_dec(v_stop_1844_);
lean_dec(v_start_1843_);
if (v_isShared_1841_ == 0)
{
lean_ctor_set(v___x_1840_, 0, v___x_1845_);
v___x_1847_ = v___x_1840_;
goto v_reusejp_1846_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v___x_1845_);
v___x_1847_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1846_;
}
v_reusejp_1846_:
{
lean_object* v___x_1848_; 
v___x_1848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1848_, 0, v___x_1847_);
return v___x_1848_;
}
}
}
else
{
lean_object* v___x_1851_; lean_object* v___x_1852_; 
lean_dec(v___x_1837_);
v___x_1851_ = lean_box(0);
v___x_1852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1852_, 0, v___x_1851_);
return v___x_1852_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___redArg___boxed(lean_object* v_stx_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_){
_start:
{
lean_object* v_res_1856_; 
v_res_1856_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___redArg(v_stx_1853_, v___y_1854_);
lean_dec_ref(v___y_1854_);
lean_dec(v_stx_1853_);
return v_res_1856_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7___redArg(lean_object* v_declName_1857_, lean_object* v_declRanges_1858_, lean_object* v___y_1859_){
_start:
{
uint8_t v___x_1861_; 
v___x_1861_ = l_Lean_Name_isAnonymous(v_declName_1857_);
if (v___x_1861_ == 0)
{
lean_object* v___x_1862_; lean_object* v_env_1863_; lean_object* v_messages_1864_; lean_object* v_scopes_1865_; lean_object* v_usedQuotCtxts_1866_; lean_object* v_nextMacroScope_1867_; lean_object* v_maxRecDepth_1868_; lean_object* v_ngen_1869_; lean_object* v_auxDeclNGen_1870_; lean_object* v_infoState_1871_; lean_object* v_traceState_1872_; lean_object* v_snapshotTasks_1873_; lean_object* v_prevLinterStates_1874_; lean_object* v_codeQualityEntryTasks_1875_; lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1887_; 
v___x_1862_ = lean_st_ref_take(v___y_1859_);
v_env_1863_ = lean_ctor_get(v___x_1862_, 0);
v_messages_1864_ = lean_ctor_get(v___x_1862_, 1);
v_scopes_1865_ = lean_ctor_get(v___x_1862_, 2);
v_usedQuotCtxts_1866_ = lean_ctor_get(v___x_1862_, 3);
v_nextMacroScope_1867_ = lean_ctor_get(v___x_1862_, 4);
v_maxRecDepth_1868_ = lean_ctor_get(v___x_1862_, 5);
v_ngen_1869_ = lean_ctor_get(v___x_1862_, 6);
v_auxDeclNGen_1870_ = lean_ctor_get(v___x_1862_, 7);
v_infoState_1871_ = lean_ctor_get(v___x_1862_, 8);
v_traceState_1872_ = lean_ctor_get(v___x_1862_, 9);
v_snapshotTasks_1873_ = lean_ctor_get(v___x_1862_, 10);
v_prevLinterStates_1874_ = lean_ctor_get(v___x_1862_, 11);
v_codeQualityEntryTasks_1875_ = lean_ctor_get(v___x_1862_, 12);
v_isSharedCheck_1887_ = !lean_is_exclusive(v___x_1862_);
if (v_isSharedCheck_1887_ == 0)
{
v___x_1877_ = v___x_1862_;
v_isShared_1878_ = v_isSharedCheck_1887_;
goto v_resetjp_1876_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1875_);
lean_inc(v_prevLinterStates_1874_);
lean_inc(v_snapshotTasks_1873_);
lean_inc(v_traceState_1872_);
lean_inc(v_infoState_1871_);
lean_inc(v_auxDeclNGen_1870_);
lean_inc(v_ngen_1869_);
lean_inc(v_maxRecDepth_1868_);
lean_inc(v_nextMacroScope_1867_);
lean_inc(v_usedQuotCtxts_1866_);
lean_inc(v_scopes_1865_);
lean_inc(v_messages_1864_);
lean_inc(v_env_1863_);
lean_dec(v___x_1862_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1887_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1883_; 
v___x_1879_ = lean_box(0);
v___x_1880_ = l_Lean_declRangeExt;
v___x_1881_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_1880_, v_env_1863_, v_declName_1857_, v_declRanges_1858_);
if (v_isShared_1878_ == 0)
{
lean_ctor_set(v___x_1877_, 0, v___x_1881_);
v___x_1883_ = v___x_1877_;
goto v_reusejp_1882_;
}
else
{
lean_object* v_reuseFailAlloc_1886_; 
v_reuseFailAlloc_1886_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1886_, 0, v___x_1881_);
lean_ctor_set(v_reuseFailAlloc_1886_, 1, v_messages_1864_);
lean_ctor_set(v_reuseFailAlloc_1886_, 2, v_scopes_1865_);
lean_ctor_set(v_reuseFailAlloc_1886_, 3, v_usedQuotCtxts_1866_);
lean_ctor_set(v_reuseFailAlloc_1886_, 4, v_nextMacroScope_1867_);
lean_ctor_set(v_reuseFailAlloc_1886_, 5, v_maxRecDepth_1868_);
lean_ctor_set(v_reuseFailAlloc_1886_, 6, v_ngen_1869_);
lean_ctor_set(v_reuseFailAlloc_1886_, 7, v_auxDeclNGen_1870_);
lean_ctor_set(v_reuseFailAlloc_1886_, 8, v_infoState_1871_);
lean_ctor_set(v_reuseFailAlloc_1886_, 9, v_traceState_1872_);
lean_ctor_set(v_reuseFailAlloc_1886_, 10, v_snapshotTasks_1873_);
lean_ctor_set(v_reuseFailAlloc_1886_, 11, v_prevLinterStates_1874_);
lean_ctor_set(v_reuseFailAlloc_1886_, 12, v_codeQualityEntryTasks_1875_);
v___x_1883_ = v_reuseFailAlloc_1886_;
goto v_reusejp_1882_;
}
v_reusejp_1882_:
{
lean_object* v___x_1884_; lean_object* v___x_1885_; 
v___x_1884_ = lean_st_ref_put(v___y_1859_, v___x_1883_);
v___x_1885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1885_, 0, v___x_1879_);
return v___x_1885_;
}
}
}
else
{
lean_object* v___x_1888_; lean_object* v___x_1889_; 
lean_dec_ref(v_declRanges_1858_);
lean_dec(v_declName_1857_);
v___x_1888_ = lean_box(0);
v___x_1889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1889_, 0, v___x_1888_);
return v___x_1889_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7___redArg___boxed(lean_object* v_declName_1890_, lean_object* v_declRanges_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_){
_start:
{
lean_object* v_res_1894_; 
v_res_1894_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7___redArg(v_declName_1890_, v_declRanges_1891_, v___y_1892_);
lean_dec(v___y_1892_);
return v_res_1894_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4(lean_object* v_declName_1895_, lean_object* v_rangeStx_1896_, lean_object* v_selectionRangeStx_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_){
_start:
{
lean_object* v___x_1901_; lean_object* v_a_1902_; lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1918_; 
v___x_1901_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___redArg(v_rangeStx_1896_, v___y_1898_);
v_a_1902_ = lean_ctor_get(v___x_1901_, 0);
v_isSharedCheck_1918_ = !lean_is_exclusive(v___x_1901_);
if (v_isSharedCheck_1918_ == 0)
{
v___x_1904_ = v___x_1901_;
v_isShared_1905_ = v_isSharedCheck_1918_;
goto v_resetjp_1903_;
}
else
{
lean_inc(v_a_1902_);
lean_dec(v___x_1901_);
v___x_1904_ = lean_box(0);
v_isShared_1905_ = v_isSharedCheck_1918_;
goto v_resetjp_1903_;
}
v_resetjp_1903_:
{
if (lean_obj_tag(v_a_1902_) == 1)
{
lean_object* v_val_1906_; lean_object* v_a_1908_; lean_object* v___x_1911_; lean_object* v_a_1912_; 
lean_del_object(v___x_1904_);
v_val_1906_ = lean_ctor_get(v_a_1902_, 0);
lean_inc(v_val_1906_);
lean_dec_ref_known(v_a_1902_, 1);
v___x_1911_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___redArg(v_selectionRangeStx_1897_, v___y_1898_);
v_a_1912_ = lean_ctor_get(v___x_1911_, 0);
lean_inc(v_a_1912_);
lean_dec_ref(v___x_1911_);
if (lean_obj_tag(v_a_1912_) == 0)
{
lean_inc(v_val_1906_);
v_a_1908_ = v_val_1906_;
goto v___jp_1907_;
}
else
{
lean_object* v_val_1913_; 
v_val_1913_ = lean_ctor_get(v_a_1912_, 0);
lean_inc(v_val_1913_);
lean_dec_ref_known(v_a_1912_, 1);
v_a_1908_ = v_val_1913_;
goto v___jp_1907_;
}
v___jp_1907_:
{
lean_object* v___x_1909_; lean_object* v___x_1910_; 
v___x_1909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1909_, 0, v_val_1906_);
lean_ctor_set(v___x_1909_, 1, v_a_1908_);
v___x_1910_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7___redArg(v_declName_1895_, v___x_1909_, v___y_1899_);
return v___x_1910_;
}
}
else
{
lean_object* v___x_1914_; lean_object* v___x_1916_; 
lean_dec(v_a_1902_);
lean_dec(v_declName_1895_);
v___x_1914_ = lean_box(0);
if (v_isShared_1905_ == 0)
{
lean_ctor_set(v___x_1904_, 0, v___x_1914_);
v___x_1916_ = v___x_1904_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v___x_1914_);
v___x_1916_ = v_reuseFailAlloc_1917_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
return v___x_1916_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4___boxed(lean_object* v_declName_1919_, lean_object* v_rangeStx_1920_, lean_object* v_selectionRangeStx_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_){
_start:
{
lean_object* v_res_1925_; 
v_res_1925_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4(v_declName_1919_, v_rangeStx_1920_, v_selectionRangeStx_1921_, v___y_1922_, v___y_1923_);
lean_dec(v___y_1923_);
lean_dec_ref(v___y_1922_);
lean_dec(v_selectionRangeStx_1921_);
lean_dec(v_rangeStx_1920_);
return v_res_1925_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabNewtype___lam__0___closed__8(void){
_start:
{
lean_object* v___x_1936_; 
v___x_1936_ = l_Array_mkArray0___redArg();
return v___x_1936_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__0(lean_object* v___x_1941_, lean_object* v_a_1942_, lean_object* v_projId_1943_, lean_object* v___x_1944_, lean_object* v___x_1945_, lean_object* v___x_1946_, lean_object* v_params_1947_, size_t v___x_1948_, lean_object* v___x_1949_, lean_object* v_mods_1950_, lean_object* v___x_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_){
_start:
{
lean_object* v___x_1955_; 
v___x_1955_ = l_Lean_Elab_Command_getScope___redArg(v___y_1953_);
if (lean_obj_tag(v___x_1955_) == 0)
{
lean_object* v_a_1956_; lean_object* v_currNamespace_1957_; lean_object* v___x_1958_; 
v_a_1956_ = lean_ctor_get(v___x_1955_, 0);
lean_inc(v_a_1956_);
lean_dec_ref_known(v___x_1955_, 1);
v_currNamespace_1957_ = lean_ctor_get(v_a_1956_, 2);
lean_inc(v_currNamespace_1957_);
lean_dec(v_a_1956_);
v___x_1958_ = l_Lean_Elab_Command_getLevelNames___redArg(v___y_1953_);
if (lean_obj_tag(v___x_1958_) == 0)
{
lean_object* v_a_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; 
v_a_1959_ = lean_ctor_get(v___x_1958_, 0);
lean_inc(v_a_1959_);
lean_dec_ref_known(v___x_1958_, 1);
lean_inc(v___x_1941_);
v___x_1960_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandDeclId___boxed), 11, 4);
lean_closure_set(v___x_1960_, 0, v_currNamespace_1957_);
lean_closure_set(v___x_1960_, 1, v_a_1959_);
lean_closure_set(v___x_1960_, 2, v___x_1941_);
lean_closure_set(v___x_1960_, 3, v_a_1942_);
v___x_1961_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_1960_, v___y_1952_, v___y_1953_);
if (lean_obj_tag(v___x_1961_) == 0)
{
lean_object* v_a_1962_; lean_object* v_declName_1963_; lean_object* v___x_1965_; uint8_t v_isShared_1966_; uint8_t v_isSharedCheck_2081_; 
v_a_1962_ = lean_ctor_get(v___x_1961_, 0);
lean_inc(v_a_1962_);
lean_dec_ref_known(v___x_1961_, 1);
v_declName_1963_ = lean_ctor_get(v_a_1962_, 1);
v_isSharedCheck_2081_ = !lean_is_exclusive(v_a_1962_);
if (v_isSharedCheck_2081_ == 0)
{
lean_object* v_unused_2082_; lean_object* v_unused_2083_; lean_object* v_unused_2084_; 
v_unused_2082_ = lean_ctor_get(v_a_1962_, 3);
lean_dec(v_unused_2082_);
v_unused_2083_ = lean_ctor_get(v_a_1962_, 2);
lean_dec(v_unused_2083_);
v_unused_2084_ = lean_ctor_get(v_a_1962_, 0);
lean_dec(v_unused_2084_);
v___x_1965_ = v_a_1962_;
v_isShared_1966_ = v_isSharedCheck_2081_;
goto v_resetjp_1964_;
}
else
{
lean_inc(v_declName_1963_);
lean_dec(v_a_1962_);
v___x_1965_ = lean_box(0);
v_isShared_1966_ = v_isSharedCheck_2081_;
goto v_resetjp_1964_;
}
v_resetjp_1964_:
{
lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; 
v___x_1967_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__1));
lean_inc_n(v_declName_1963_, 2);
v___x_1968_ = l_Lean_Name_append(v_declName_1963_, v___x_1967_);
v___x_1969_ = l_Lean_TSyntax_getId(v_projId_1943_);
lean_inc(v___x_1969_);
v___x_1970_ = l_Lean_Name_append(v_declName_1963_, v___x_1969_);
v___x_1971_ = l_Lean_Elab_Command_getRef___redArg(v___y_1952_);
if (lean_obj_tag(v___x_1971_) == 0)
{
lean_object* v_a_1972_; uint8_t v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_2062_; 
v_a_1972_ = lean_ctor_get(v___x_1971_, 0);
lean_inc(v_a_1972_);
lean_dec_ref_known(v___x_1971_, 1);
v___x_1973_ = 0;
v___x_1974_ = l_Lean_SourceInfo_fromRef(v_a_1972_, v___x_1973_);
lean_dec(v_a_1972_);
v___x_2062_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_1952_);
if (lean_obj_tag(v___x_2062_) == 0)
{
lean_object* v_quotContext_x3f_2063_; 
lean_dec_ref_known(v___x_2062_, 1);
v_quotContext_x3f_2063_ = lean_ctor_get(v___y_1952_, 5);
if (lean_obj_tag(v_quotContext_x3f_2063_) == 0)
{
lean_object* v___x_2064_; 
v___x_2064_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v___y_1953_);
lean_dec_ref(v___x_2064_);
goto v___jp_1975_;
}
else
{
goto v___jp_1975_;
}
}
else
{
lean_object* v_a_2065_; lean_object* v___x_2067_; uint8_t v_isShared_2068_; uint8_t v_isSharedCheck_2072_; 
lean_dec(v___x_1974_);
lean_dec(v___x_1970_);
lean_dec(v___x_1969_);
lean_dec(v___x_1968_);
lean_del_object(v___x_1965_);
lean_dec(v_declName_1963_);
lean_dec(v___x_1951_);
lean_dec(v_mods_1950_);
lean_dec(v___x_1949_);
lean_dec_ref(v_params_1947_);
lean_dec_ref(v___x_1946_);
lean_dec_ref(v___x_1945_);
lean_dec_ref(v___x_1944_);
lean_dec(v_projId_1943_);
lean_dec(v___x_1941_);
v_a_2065_ = lean_ctor_get(v___x_2062_, 0);
v_isSharedCheck_2072_ = !lean_is_exclusive(v___x_2062_);
if (v_isSharedCheck_2072_ == 0)
{
v___x_2067_ = v___x_2062_;
v_isShared_2068_ = v_isSharedCheck_2072_;
goto v_resetjp_2066_;
}
else
{
lean_inc(v_a_2065_);
lean_dec(v___x_2062_);
v___x_2067_ = lean_box(0);
v_isShared_2068_ = v_isSharedCheck_2072_;
goto v_resetjp_2066_;
}
v_resetjp_2066_:
{
lean_object* v___x_2070_; 
if (v_isShared_2068_ == 0)
{
v___x_2070_ = v___x_2067_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v_a_2065_);
v___x_2070_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
return v___x_2070_;
}
}
}
v___jp_1975_:
{
lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; size_t v_sz_1986_; lean_object* v___x_1987_; size_t v_sz_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; 
v___x_1976_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__2));
lean_inc_ref_n(v___x_1946_, 3);
lean_inc_ref_n(v___x_1945_, 4);
lean_inc_ref_n(v___x_1944_, 4);
v___x_1977_ = l_Lean_Name_mkStr4(v___x_1944_, v___x_1945_, v___x_1946_, v___x_1976_);
v___x_1978_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__3));
v___x_1979_ = l_Lean_Name_mkStr4(v___x_1944_, v___x_1945_, v___x_1946_, v___x_1978_);
v___x_1980_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__4));
lean_inc_n(v___x_1974_, 8);
v___x_1981_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1981_, 0, v___x_1974_);
lean_ctor_set(v___x_1981_, 1, v___x_1980_);
v___x_1982_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__5));
v___x_1983_ = l_Lean_Name_mkStr4(v___x_1944_, v___x_1945_, v___x_1946_, v___x_1982_);
v___x_1984_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__7));
v___x_1985_ = lean_obj_once(&l_Lean_Elab_Command_elabNewtype___lam__0___closed__8, &l_Lean_Elab_Command_elabNewtype___lam__0___closed__8_once, _init_l_Lean_Elab_Command_elabNewtype___lam__0___closed__8);
v_sz_1986_ = lean_array_size(v_params_1947_);
v___x_1987_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(v_sz_1986_, v___x_1948_, v_params_1947_);
v_sz_1988_ = lean_array_size(v___x_1987_);
v___x_1989_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__3(v_sz_1988_, v___x_1948_, v___x_1987_);
v___x_1990_ = l_Array_append___redArg(v___x_1985_, v___x_1989_);
lean_dec_ref(v___x_1989_);
v___x_1991_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1991_, 0, v___x_1974_);
lean_ctor_set(v___x_1991_, 1, v___x_1984_);
lean_ctor_set(v___x_1991_, 2, v___x_1990_);
v___x_1992_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1992_, 0, v___x_1974_);
lean_ctor_set(v___x_1992_, 1, v___x_1984_);
lean_ctor_set(v___x_1992_, 2, v___x_1985_);
lean_inc_ref_n(v___x_1992_, 4);
v___x_1993_ = l_Lean_Syntax_node2(v___x_1974_, v___x_1983_, v___x_1991_, v___x_1992_);
v___x_1994_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__9));
v___x_1995_ = l_Lean_Name_mkStr4(v___x_1944_, v___x_1945_, v___x_1946_, v___x_1994_);
v___x_1996_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__10));
v___x_1997_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1997_, 0, v___x_1974_);
lean_ctor_set(v___x_1997_, 1, v___x_1996_);
v___x_1998_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__11));
v___x_1999_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__12));
v___x_2000_ = l_Lean_Name_mkStr4(v___x_1944_, v___x_1945_, v___x_1998_, v___x_1999_);
v___x_2001_ = l_Lean_Syntax_node2(v___x_1974_, v___x_2000_, v___x_1992_, v___x_1992_);
v___x_2002_ = l_Lean_Syntax_node4(v___x_1974_, v___x_1995_, v___x_1997_, v___x_1949_, v___x_2001_, v___x_1992_);
lean_inc(v___x_1941_);
v___x_2003_ = l_Lean_Syntax_node5(v___x_1974_, v___x_1979_, v___x_1981_, v___x_1941_, v___x_1993_, v___x_2002_, v___x_1992_);
v___x_2004_ = l_Lean_Syntax_node2(v___x_1974_, v___x_1977_, v_mods_1950_, v___x_2003_);
v___x_2005_ = l_Lean_Elab_Command_elabCommand(v___x_2004_, v___y_1952_, v___y_1953_);
if (lean_obj_tag(v___x_2005_) == 0)
{
lean_object* v___x_2006_; lean_object* v___x_2007_; 
lean_dec_ref_known(v___x_2005_, 1);
lean_inc(v___x_1970_);
lean_inc(v___x_1968_);
lean_inc(v_declName_1963_);
v___x_2006_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___boxed), 11, 4);
lean_closure_set(v___x_2006_, 0, v_declName_1963_);
lean_closure_set(v___x_2006_, 1, v___x_1968_);
lean_closure_set(v___x_2006_, 2, v___x_1970_);
lean_closure_set(v___x_2006_, 3, v___x_1969_);
v___x_2007_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_2006_, v___y_1952_, v___y_1953_);
if (lean_obj_tag(v___x_2007_) == 0)
{
lean_object* v_a_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; 
v_a_2008_ = lean_ctor_get(v___x_2007_, 0);
lean_inc(v_a_2008_);
lean_dec_ref_known(v___x_2007_, 1);
v___x_2009_ = lean_box(0);
lean_inc(v___x_1968_);
v___x_2010_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4(v___x_1968_, v___x_1941_, v___x_2009_, v___y_1952_, v___y_1953_);
lean_dec(v___x_1941_);
if (lean_obj_tag(v___x_2010_) == 0)
{
lean_object* v___x_2011_; 
lean_dec_ref_known(v___x_2010_, 1);
lean_inc(v___x_1970_);
v___x_2011_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4(v___x_1970_, v_projId_1943_, v___x_2009_, v___y_1952_, v___y_1953_);
if (lean_obj_tag(v___x_2011_) == 0)
{
lean_object* v___x_2012_; lean_object* v___x_2013_; 
lean_dec_ref_known(v___x_2011_, 1);
v___x_2012_ = lean_box(0);
lean_inc(v___x_1970_);
v___x_2013_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5(v_projId_1943_, v___x_1970_, v___x_2012_, v___y_1952_, v___y_1953_);
if (lean_obj_tag(v___x_2013_) == 0)
{
lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v_env_2020_; lean_object* v_messages_2021_; lean_object* v_scopes_2022_; lean_object* v_usedQuotCtxts_2023_; lean_object* v_nextMacroScope_2024_; lean_object* v_maxRecDepth_2025_; lean_object* v_ngen_2026_; lean_object* v_auxDeclNGen_2027_; lean_object* v_infoState_2028_; lean_object* v_traceState_2029_; lean_object* v_snapshotTasks_2030_; lean_object* v_prevLinterStates_2031_; lean_object* v_codeQualityEntryTasks_2032_; lean_object* v___x_2034_; uint8_t v_isShared_2035_; uint8_t v_isSharedCheck_2053_; 
lean_dec_ref_known(v___x_2013_, 1);
lean_inc(v___x_1970_);
v___x_2014_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2014_, 0, v___x_1970_);
lean_ctor_set(v___x_2014_, 1, v___x_1951_);
lean_inc(v___x_1968_);
v___x_2015_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2015_, 0, v___x_1968_);
lean_ctor_set(v___x_2015_, 1, v___x_2014_);
lean_inc_ref(v___x_2015_);
lean_inc(v_declName_1963_);
v___x_2016_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2016_, 0, v_declName_1963_);
lean_ctor_set(v___x_2016_, 1, v___x_2015_);
v___x_2017_ = lean_box(0);
v___x_2018_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg(v___x_2016_, v___x_2017_, v___y_1952_, v___y_1953_);
lean_dec_ref_known(v___x_2016_, 2);
lean_dec_ref(v___x_2018_);
v___x_2019_ = lean_st_ref_take(v___y_1953_);
v_env_2020_ = lean_ctor_get(v___x_2019_, 0);
v_messages_2021_ = lean_ctor_get(v___x_2019_, 1);
v_scopes_2022_ = lean_ctor_get(v___x_2019_, 2);
v_usedQuotCtxts_2023_ = lean_ctor_get(v___x_2019_, 3);
v_nextMacroScope_2024_ = lean_ctor_get(v___x_2019_, 4);
v_maxRecDepth_2025_ = lean_ctor_get(v___x_2019_, 5);
v_ngen_2026_ = lean_ctor_get(v___x_2019_, 6);
v_auxDeclNGen_2027_ = lean_ctor_get(v___x_2019_, 7);
v_infoState_2028_ = lean_ctor_get(v___x_2019_, 8);
v_traceState_2029_ = lean_ctor_get(v___x_2019_, 9);
v_snapshotTasks_2030_ = lean_ctor_get(v___x_2019_, 10);
v_prevLinterStates_2031_ = lean_ctor_get(v___x_2019_, 11);
v_codeQualityEntryTasks_2032_ = lean_ctor_get(v___x_2019_, 12);
v_isSharedCheck_2053_ = !lean_is_exclusive(v___x_2019_);
if (v_isSharedCheck_2053_ == 0)
{
v___x_2034_ = v___x_2019_;
v_isShared_2035_ = v_isSharedCheck_2053_;
goto v_resetjp_2033_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2032_);
lean_inc(v_prevLinterStates_2031_);
lean_inc(v_snapshotTasks_2030_);
lean_inc(v_traceState_2029_);
lean_inc(v_infoState_2028_);
lean_inc(v_auxDeclNGen_2027_);
lean_inc(v_ngen_2026_);
lean_inc(v_maxRecDepth_2025_);
lean_inc(v_nextMacroScope_2024_);
lean_inc(v_usedQuotCtxts_2023_);
lean_inc(v_scopes_2022_);
lean_inc(v_messages_2021_);
lean_inc(v_env_2020_);
lean_dec(v___x_2019_);
v___x_2034_ = lean_box(0);
v_isShared_2035_ = v_isSharedCheck_2053_;
goto v_resetjp_2033_;
}
v_resetjp_2033_:
{
lean_object* v___x_2037_; 
if (v_isShared_1966_ == 0)
{
lean_ctor_set(v___x_1965_, 3, v_a_2008_);
lean_ctor_set(v___x_1965_, 2, v___x_1970_);
lean_ctor_set(v___x_1965_, 1, v___x_1968_);
lean_ctor_set(v___x_1965_, 0, v_declName_1963_);
v___x_2037_ = v___x_1965_;
goto v_reusejp_2036_;
}
else
{
lean_object* v_reuseFailAlloc_2052_; 
v_reuseFailAlloc_2052_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2052_, 0, v_declName_1963_);
lean_ctor_set(v_reuseFailAlloc_2052_, 1, v___x_1968_);
lean_ctor_set(v_reuseFailAlloc_2052_, 2, v___x_1970_);
lean_ctor_set(v_reuseFailAlloc_2052_, 3, v_a_2008_);
v___x_2037_ = v_reuseFailAlloc_2052_;
goto v_reusejp_2036_;
}
v_reusejp_2036_:
{
lean_object* v___x_2038_; lean_object* v___x_2040_; 
v___x_2038_ = l_Lean_registerVirtualStructure(v_env_2020_, v___x_2037_);
if (v_isShared_2035_ == 0)
{
lean_ctor_set(v___x_2034_, 0, v___x_2038_);
v___x_2040_ = v___x_2034_;
goto v_reusejp_2039_;
}
else
{
lean_object* v_reuseFailAlloc_2051_; 
v_reuseFailAlloc_2051_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2051_, 0, v___x_2038_);
lean_ctor_set(v_reuseFailAlloc_2051_, 1, v_messages_2021_);
lean_ctor_set(v_reuseFailAlloc_2051_, 2, v_scopes_2022_);
lean_ctor_set(v_reuseFailAlloc_2051_, 3, v_usedQuotCtxts_2023_);
lean_ctor_set(v_reuseFailAlloc_2051_, 4, v_nextMacroScope_2024_);
lean_ctor_set(v_reuseFailAlloc_2051_, 5, v_maxRecDepth_2025_);
lean_ctor_set(v_reuseFailAlloc_2051_, 6, v_ngen_2026_);
lean_ctor_set(v_reuseFailAlloc_2051_, 7, v_auxDeclNGen_2027_);
lean_ctor_set(v_reuseFailAlloc_2051_, 8, v_infoState_2028_);
lean_ctor_set(v_reuseFailAlloc_2051_, 9, v_traceState_2029_);
lean_ctor_set(v_reuseFailAlloc_2051_, 10, v_snapshotTasks_2030_);
lean_ctor_set(v_reuseFailAlloc_2051_, 11, v_prevLinterStates_2031_);
lean_ctor_set(v_reuseFailAlloc_2051_, 12, v_codeQualityEntryTasks_2032_);
v___x_2040_ = v_reuseFailAlloc_2051_;
goto v_reusejp_2039_;
}
v_reusejp_2039_:
{
lean_object* v___x_2041_; lean_object* v___x_2042_; 
v___x_2041_ = lean_st_ref_put(v___y_1953_, v___x_2040_);
v___x_2042_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___redArg(v___x_2015_, v___x_2017_, v___y_1952_, v___y_1953_);
lean_dec_ref_known(v___x_2015_, 2);
if (lean_obj_tag(v___x_2042_) == 0)
{
lean_object* v___x_2044_; uint8_t v_isShared_2045_; uint8_t v_isSharedCheck_2049_; 
v_isSharedCheck_2049_ = !lean_is_exclusive(v___x_2042_);
if (v_isSharedCheck_2049_ == 0)
{
lean_object* v_unused_2050_; 
v_unused_2050_ = lean_ctor_get(v___x_2042_, 0);
lean_dec(v_unused_2050_);
v___x_2044_ = v___x_2042_;
v_isShared_2045_ = v_isSharedCheck_2049_;
goto v_resetjp_2043_;
}
else
{
lean_dec(v___x_2042_);
v___x_2044_ = lean_box(0);
v_isShared_2045_ = v_isSharedCheck_2049_;
goto v_resetjp_2043_;
}
v_resetjp_2043_:
{
lean_object* v___x_2047_; 
if (v_isShared_2045_ == 0)
{
lean_ctor_set(v___x_2044_, 0, v___x_2017_);
v___x_2047_ = v___x_2044_;
goto v_reusejp_2046_;
}
else
{
lean_object* v_reuseFailAlloc_2048_; 
v_reuseFailAlloc_2048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2048_, 0, v___x_2017_);
v___x_2047_ = v_reuseFailAlloc_2048_;
goto v_reusejp_2046_;
}
v_reusejp_2046_:
{
return v___x_2047_;
}
}
}
else
{
return v___x_2042_;
}
}
}
}
}
else
{
lean_dec(v_a_2008_);
lean_dec(v___x_1970_);
lean_dec(v___x_1968_);
lean_del_object(v___x_1965_);
lean_dec(v_declName_1963_);
lean_dec(v___x_1951_);
return v___x_2013_;
}
}
else
{
lean_dec(v_a_2008_);
lean_dec(v___x_1970_);
lean_dec(v___x_1968_);
lean_del_object(v___x_1965_);
lean_dec(v_declName_1963_);
lean_dec(v___x_1951_);
lean_dec(v_projId_1943_);
return v___x_2011_;
}
}
else
{
lean_dec(v_a_2008_);
lean_dec(v___x_1970_);
lean_dec(v___x_1968_);
lean_del_object(v___x_1965_);
lean_dec(v_declName_1963_);
lean_dec(v___x_1951_);
lean_dec(v_projId_1943_);
return v___x_2010_;
}
}
else
{
lean_object* v_a_2054_; lean_object* v___x_2056_; uint8_t v_isShared_2057_; uint8_t v_isSharedCheck_2061_; 
lean_dec(v___x_1970_);
lean_dec(v___x_1968_);
lean_del_object(v___x_1965_);
lean_dec(v_declName_1963_);
lean_dec(v___x_1951_);
lean_dec(v_projId_1943_);
lean_dec(v___x_1941_);
v_a_2054_ = lean_ctor_get(v___x_2007_, 0);
v_isSharedCheck_2061_ = !lean_is_exclusive(v___x_2007_);
if (v_isSharedCheck_2061_ == 0)
{
v___x_2056_ = v___x_2007_;
v_isShared_2057_ = v_isSharedCheck_2061_;
goto v_resetjp_2055_;
}
else
{
lean_inc(v_a_2054_);
lean_dec(v___x_2007_);
v___x_2056_ = lean_box(0);
v_isShared_2057_ = v_isSharedCheck_2061_;
goto v_resetjp_2055_;
}
v_resetjp_2055_:
{
lean_object* v___x_2059_; 
if (v_isShared_2057_ == 0)
{
v___x_2059_ = v___x_2056_;
goto v_reusejp_2058_;
}
else
{
lean_object* v_reuseFailAlloc_2060_; 
v_reuseFailAlloc_2060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2060_, 0, v_a_2054_);
v___x_2059_ = v_reuseFailAlloc_2060_;
goto v_reusejp_2058_;
}
v_reusejp_2058_:
{
return v___x_2059_;
}
}
}
}
else
{
lean_dec(v___x_1970_);
lean_dec(v___x_1969_);
lean_dec(v___x_1968_);
lean_del_object(v___x_1965_);
lean_dec(v_declName_1963_);
lean_dec(v___x_1951_);
lean_dec(v_projId_1943_);
lean_dec(v___x_1941_);
return v___x_2005_;
}
}
}
else
{
lean_object* v_a_2073_; lean_object* v___x_2075_; uint8_t v_isShared_2076_; uint8_t v_isSharedCheck_2080_; 
lean_dec(v___x_1970_);
lean_dec(v___x_1969_);
lean_dec(v___x_1968_);
lean_del_object(v___x_1965_);
lean_dec(v_declName_1963_);
lean_dec(v___x_1951_);
lean_dec(v_mods_1950_);
lean_dec(v___x_1949_);
lean_dec_ref(v_params_1947_);
lean_dec_ref(v___x_1946_);
lean_dec_ref(v___x_1945_);
lean_dec_ref(v___x_1944_);
lean_dec(v_projId_1943_);
lean_dec(v___x_1941_);
v_a_2073_ = lean_ctor_get(v___x_1971_, 0);
v_isSharedCheck_2080_ = !lean_is_exclusive(v___x_1971_);
if (v_isSharedCheck_2080_ == 0)
{
v___x_2075_ = v___x_1971_;
v_isShared_2076_ = v_isSharedCheck_2080_;
goto v_resetjp_2074_;
}
else
{
lean_inc(v_a_2073_);
lean_dec(v___x_1971_);
v___x_2075_ = lean_box(0);
v_isShared_2076_ = v_isSharedCheck_2080_;
goto v_resetjp_2074_;
}
v_resetjp_2074_:
{
lean_object* v___x_2078_; 
if (v_isShared_2076_ == 0)
{
v___x_2078_ = v___x_2075_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v_a_2073_);
v___x_2078_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
return v___x_2078_;
}
}
}
}
}
else
{
lean_object* v_a_2085_; lean_object* v___x_2087_; uint8_t v_isShared_2088_; uint8_t v_isSharedCheck_2092_; 
lean_dec(v___x_1951_);
lean_dec(v_mods_1950_);
lean_dec(v___x_1949_);
lean_dec_ref(v_params_1947_);
lean_dec_ref(v___x_1946_);
lean_dec_ref(v___x_1945_);
lean_dec_ref(v___x_1944_);
lean_dec(v_projId_1943_);
lean_dec(v___x_1941_);
v_a_2085_ = lean_ctor_get(v___x_1961_, 0);
v_isSharedCheck_2092_ = !lean_is_exclusive(v___x_1961_);
if (v_isSharedCheck_2092_ == 0)
{
v___x_2087_ = v___x_1961_;
v_isShared_2088_ = v_isSharedCheck_2092_;
goto v_resetjp_2086_;
}
else
{
lean_inc(v_a_2085_);
lean_dec(v___x_1961_);
v___x_2087_ = lean_box(0);
v_isShared_2088_ = v_isSharedCheck_2092_;
goto v_resetjp_2086_;
}
v_resetjp_2086_:
{
lean_object* v___x_2090_; 
if (v_isShared_2088_ == 0)
{
v___x_2090_ = v___x_2087_;
goto v_reusejp_2089_;
}
else
{
lean_object* v_reuseFailAlloc_2091_; 
v_reuseFailAlloc_2091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2091_, 0, v_a_2085_);
v___x_2090_ = v_reuseFailAlloc_2091_;
goto v_reusejp_2089_;
}
v_reusejp_2089_:
{
return v___x_2090_;
}
}
}
}
else
{
lean_object* v_a_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2100_; 
lean_dec(v_currNamespace_1957_);
lean_dec(v___x_1951_);
lean_dec(v_mods_1950_);
lean_dec(v___x_1949_);
lean_dec_ref(v_params_1947_);
lean_dec_ref(v___x_1946_);
lean_dec_ref(v___x_1945_);
lean_dec_ref(v___x_1944_);
lean_dec(v_projId_1943_);
lean_dec_ref(v_a_1942_);
lean_dec(v___x_1941_);
v_a_2093_ = lean_ctor_get(v___x_1958_, 0);
v_isSharedCheck_2100_ = !lean_is_exclusive(v___x_1958_);
if (v_isSharedCheck_2100_ == 0)
{
v___x_2095_ = v___x_1958_;
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_a_2093_);
lean_dec(v___x_1958_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v___x_2098_; 
if (v_isShared_2096_ == 0)
{
v___x_2098_ = v___x_2095_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v_a_2093_);
v___x_2098_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
return v___x_2098_;
}
}
}
}
else
{
lean_object* v_a_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2108_; 
lean_dec(v___x_1951_);
lean_dec(v_mods_1950_);
lean_dec(v___x_1949_);
lean_dec_ref(v_params_1947_);
lean_dec_ref(v___x_1946_);
lean_dec_ref(v___x_1945_);
lean_dec_ref(v___x_1944_);
lean_dec(v_projId_1943_);
lean_dec_ref(v_a_1942_);
lean_dec(v___x_1941_);
v_a_2101_ = lean_ctor_get(v___x_1955_, 0);
v_isSharedCheck_2108_ = !lean_is_exclusive(v___x_1955_);
if (v_isSharedCheck_2108_ == 0)
{
v___x_2103_ = v___x_1955_;
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_a_2101_);
lean_dec(v___x_1955_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v___x_2106_; 
if (v_isShared_2104_ == 0)
{
v___x_2106_ = v___x_2103_;
goto v_reusejp_2105_;
}
else
{
lean_object* v_reuseFailAlloc_2107_; 
v_reuseFailAlloc_2107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2107_, 0, v_a_2101_);
v___x_2106_ = v_reuseFailAlloc_2107_;
goto v_reusejp_2105_;
}
v_reusejp_2105_:
{
return v___x_2106_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__0___boxed(lean_object* v___x_2109_, lean_object* v_a_2110_, lean_object* v_projId_2111_, lean_object* v___x_2112_, lean_object* v___x_2113_, lean_object* v___x_2114_, lean_object* v_params_2115_, lean_object* v___x_2116_, lean_object* v___x_2117_, lean_object* v_mods_2118_, lean_object* v___x_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_){
_start:
{
size_t v___x_29998__boxed_2123_; lean_object* v_res_2124_; 
v___x_29998__boxed_2123_ = lean_unbox_usize(v___x_2116_);
lean_dec(v___x_2116_);
v_res_2124_ = l_Lean_Elab_Command_elabNewtype___lam__0(v___x_2109_, v_a_2110_, v_projId_2111_, v___x_2112_, v___x_2113_, v___x_2114_, v_params_2115_, v___x_29998__boxed_2123_, v___x_2117_, v_mods_2118_, v___x_2119_, v___y_2120_, v___y_2121_);
lean_dec(v___y_2121_);
lean_dec_ref(v___y_2120_);
return v_res_2124_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___lam__0(uint8_t v_suppressElabErrors_2126_, uint8_t v___y_2127_, lean_object* v_x_2128_){
_start:
{
if (lean_obj_tag(v_x_2128_) == 1)
{
lean_object* v_pre_2129_; 
v_pre_2129_ = lean_ctor_get(v_x_2128_, 0);
if (lean_obj_tag(v_pre_2129_) == 0)
{
lean_object* v_str_2130_; lean_object* v___x_2131_; uint8_t v___x_2132_; 
v_str_2130_ = lean_ctor_get(v_x_2128_, 1);
v___x_2131_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___lam__0___closed__0));
v___x_2132_ = lean_string_dec_eq(v_str_2130_, v___x_2131_);
if (v___x_2132_ == 0)
{
return v___x_2132_;
}
else
{
return v_suppressElabErrors_2126_;
}
}
else
{
return v___y_2127_;
}
}
else
{
return v___y_2127_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___lam__0___boxed(lean_object* v_suppressElabErrors_2133_, lean_object* v___y_2134_, lean_object* v_x_2135_){
_start:
{
uint8_t v_suppressElabErrors_boxed_2136_; uint8_t v___y_30335__boxed_2137_; uint8_t v_res_2138_; lean_object* v_r_2139_; 
v_suppressElabErrors_boxed_2136_ = lean_unbox(v_suppressElabErrors_2133_);
v___y_30335__boxed_2137_ = lean_unbox(v___y_2134_);
v_res_2138_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___lam__0(v_suppressElabErrors_boxed_2136_, v___y_30335__boxed_2137_, v_x_2135_);
lean_dec(v_x_2135_);
v_r_2139_ = lean_box(v_res_2138_);
return v_r_2139_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29(lean_object* v_ref_2141_, lean_object* v_msgData_2142_, uint8_t v_severity_2143_, uint8_t v_isSilent_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_){
_start:
{
lean_object* v___y_2149_; lean_object* v___y_2150_; uint8_t v___y_2151_; uint8_t v___y_2152_; lean_object* v___y_2153_; lean_object* v___y_2154_; lean_object* v___y_2155_; lean_object* v___y_2156_; uint8_t v___y_2214_; uint8_t v___y_2215_; uint8_t v___y_2216_; lean_object* v___y_2217_; lean_object* v___y_2218_; uint8_t v___y_2242_; uint8_t v___y_2243_; uint8_t v___y_2244_; lean_object* v___y_2245_; lean_object* v___y_2246_; uint8_t v___y_2250_; uint8_t v___y_2251_; uint8_t v___y_2252_; uint8_t v___x_2267_; uint8_t v___y_2269_; uint8_t v___y_2270_; uint8_t v___y_2271_; uint8_t v___y_2273_; uint8_t v___x_2285_; 
v___x_2267_ = 2;
v___x_2285_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2143_, v___x_2267_);
if (v___x_2285_ == 0)
{
v___y_2273_ = v___x_2285_;
goto v___jp_2272_;
}
else
{
uint8_t v___x_2286_; 
lean_inc_ref(v_msgData_2142_);
v___x_2286_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_2142_);
v___y_2273_ = v___x_2286_;
goto v___jp_2272_;
}
v___jp_2148_:
{
lean_object* v___x_2157_; 
v___x_2157_ = l_Lean_Elab_Command_getScope___redArg(v___y_2156_);
if (lean_obj_tag(v___x_2157_) == 0)
{
lean_object* v_a_2158_; lean_object* v_currNamespace_2159_; lean_object* v___x_2160_; 
v_a_2158_ = lean_ctor_get(v___x_2157_, 0);
lean_inc(v_a_2158_);
lean_dec_ref_known(v___x_2157_, 1);
v_currNamespace_2159_ = lean_ctor_get(v_a_2158_, 2);
lean_inc(v_currNamespace_2159_);
lean_dec(v_a_2158_);
v___x_2160_ = l_Lean_Elab_Command_getScope___redArg(v___y_2156_);
if (lean_obj_tag(v___x_2160_) == 0)
{
lean_object* v_a_2161_; lean_object* v___x_2163_; uint8_t v_isShared_2164_; uint8_t v_isSharedCheck_2196_; 
v_a_2161_ = lean_ctor_get(v___x_2160_, 0);
v_isSharedCheck_2196_ = !lean_is_exclusive(v___x_2160_);
if (v_isSharedCheck_2196_ == 0)
{
v___x_2163_ = v___x_2160_;
v_isShared_2164_ = v_isSharedCheck_2196_;
goto v_resetjp_2162_;
}
else
{
lean_inc(v_a_2161_);
lean_dec(v___x_2160_);
v___x_2163_ = lean_box(0);
v_isShared_2164_ = v_isSharedCheck_2196_;
goto v_resetjp_2162_;
}
v_resetjp_2162_:
{
lean_object* v_openDecls_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v_env_2170_; lean_object* v_messages_2171_; lean_object* v_scopes_2172_; lean_object* v_usedQuotCtxts_2173_; lean_object* v_nextMacroScope_2174_; lean_object* v_maxRecDepth_2175_; lean_object* v_ngen_2176_; lean_object* v_auxDeclNGen_2177_; lean_object* v_infoState_2178_; lean_object* v_traceState_2179_; lean_object* v_snapshotTasks_2180_; lean_object* v_prevLinterStates_2181_; lean_object* v_codeQualityEntryTasks_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2195_; 
v_openDecls_2165_ = lean_ctor_get(v_a_2161_, 3);
lean_inc(v_openDecls_2165_);
lean_dec(v_a_2161_);
v___x_2166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2166_, 0, v_currNamespace_2159_);
lean_ctor_set(v___x_2166_, 1, v_openDecls_2165_);
v___x_2167_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2167_, 0, v___x_2166_);
lean_ctor_set(v___x_2167_, 1, v___y_2155_);
lean_inc_ref(v___y_2150_);
lean_inc_ref(v___y_2149_);
v___x_2168_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2168_, 0, v___y_2149_);
lean_ctor_set(v___x_2168_, 1, v___y_2154_);
lean_ctor_set(v___x_2168_, 2, v___y_2153_);
lean_ctor_set(v___x_2168_, 3, v___y_2150_);
lean_ctor_set(v___x_2168_, 4, v___x_2167_);
lean_ctor_set_uint8(v___x_2168_, sizeof(void*)*5, v___y_2152_);
lean_ctor_set_uint8(v___x_2168_, sizeof(void*)*5 + 1, v___y_2151_);
lean_ctor_set_uint8(v___x_2168_, sizeof(void*)*5 + 2, v_isSilent_2144_);
v___x_2169_ = lean_st_ref_take(v___y_2156_);
v_env_2170_ = lean_ctor_get(v___x_2169_, 0);
v_messages_2171_ = lean_ctor_get(v___x_2169_, 1);
v_scopes_2172_ = lean_ctor_get(v___x_2169_, 2);
v_usedQuotCtxts_2173_ = lean_ctor_get(v___x_2169_, 3);
v_nextMacroScope_2174_ = lean_ctor_get(v___x_2169_, 4);
v_maxRecDepth_2175_ = lean_ctor_get(v___x_2169_, 5);
v_ngen_2176_ = lean_ctor_get(v___x_2169_, 6);
v_auxDeclNGen_2177_ = lean_ctor_get(v___x_2169_, 7);
v_infoState_2178_ = lean_ctor_get(v___x_2169_, 8);
v_traceState_2179_ = lean_ctor_get(v___x_2169_, 9);
v_snapshotTasks_2180_ = lean_ctor_get(v___x_2169_, 10);
v_prevLinterStates_2181_ = lean_ctor_get(v___x_2169_, 11);
v_codeQualityEntryTasks_2182_ = lean_ctor_get(v___x_2169_, 12);
v_isSharedCheck_2195_ = !lean_is_exclusive(v___x_2169_);
if (v_isSharedCheck_2195_ == 0)
{
v___x_2184_ = v___x_2169_;
v_isShared_2185_ = v_isSharedCheck_2195_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2182_);
lean_inc(v_prevLinterStates_2181_);
lean_inc(v_snapshotTasks_2180_);
lean_inc(v_traceState_2179_);
lean_inc(v_infoState_2178_);
lean_inc(v_auxDeclNGen_2177_);
lean_inc(v_ngen_2176_);
lean_inc(v_maxRecDepth_2175_);
lean_inc(v_nextMacroScope_2174_);
lean_inc(v_usedQuotCtxts_2173_);
lean_inc(v_scopes_2172_);
lean_inc(v_messages_2171_);
lean_inc(v_env_2170_);
lean_dec(v___x_2169_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2195_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2189_; 
v___x_2186_ = lean_box(0);
v___x_2187_ = l_Lean_MessageLog_add(v___x_2168_, v_messages_2171_);
if (v_isShared_2185_ == 0)
{
lean_ctor_set(v___x_2184_, 1, v___x_2187_);
v___x_2189_ = v___x_2184_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2194_; 
v_reuseFailAlloc_2194_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2194_, 0, v_env_2170_);
lean_ctor_set(v_reuseFailAlloc_2194_, 1, v___x_2187_);
lean_ctor_set(v_reuseFailAlloc_2194_, 2, v_scopes_2172_);
lean_ctor_set(v_reuseFailAlloc_2194_, 3, v_usedQuotCtxts_2173_);
lean_ctor_set(v_reuseFailAlloc_2194_, 4, v_nextMacroScope_2174_);
lean_ctor_set(v_reuseFailAlloc_2194_, 5, v_maxRecDepth_2175_);
lean_ctor_set(v_reuseFailAlloc_2194_, 6, v_ngen_2176_);
lean_ctor_set(v_reuseFailAlloc_2194_, 7, v_auxDeclNGen_2177_);
lean_ctor_set(v_reuseFailAlloc_2194_, 8, v_infoState_2178_);
lean_ctor_set(v_reuseFailAlloc_2194_, 9, v_traceState_2179_);
lean_ctor_set(v_reuseFailAlloc_2194_, 10, v_snapshotTasks_2180_);
lean_ctor_set(v_reuseFailAlloc_2194_, 11, v_prevLinterStates_2181_);
lean_ctor_set(v_reuseFailAlloc_2194_, 12, v_codeQualityEntryTasks_2182_);
v___x_2189_ = v_reuseFailAlloc_2194_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
lean_object* v___x_2190_; lean_object* v___x_2192_; 
v___x_2190_ = lean_st_ref_put(v___y_2156_, v___x_2189_);
if (v_isShared_2164_ == 0)
{
lean_ctor_set(v___x_2163_, 0, v___x_2186_);
v___x_2192_ = v___x_2163_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2193_; 
v_reuseFailAlloc_2193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2193_, 0, v___x_2186_);
v___x_2192_ = v_reuseFailAlloc_2193_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
return v___x_2192_;
}
}
}
}
}
else
{
lean_object* v_a_2197_; lean_object* v___x_2199_; uint8_t v_isShared_2200_; uint8_t v_isSharedCheck_2204_; 
lean_dec(v_currNamespace_2159_);
lean_dec_ref(v___y_2155_);
lean_dec_ref(v___y_2154_);
lean_dec(v___y_2153_);
v_a_2197_ = lean_ctor_get(v___x_2160_, 0);
v_isSharedCheck_2204_ = !lean_is_exclusive(v___x_2160_);
if (v_isSharedCheck_2204_ == 0)
{
v___x_2199_ = v___x_2160_;
v_isShared_2200_ = v_isSharedCheck_2204_;
goto v_resetjp_2198_;
}
else
{
lean_inc(v_a_2197_);
lean_dec(v___x_2160_);
v___x_2199_ = lean_box(0);
v_isShared_2200_ = v_isSharedCheck_2204_;
goto v_resetjp_2198_;
}
v_resetjp_2198_:
{
lean_object* v___x_2202_; 
if (v_isShared_2200_ == 0)
{
v___x_2202_ = v___x_2199_;
goto v_reusejp_2201_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v_a_2197_);
v___x_2202_ = v_reuseFailAlloc_2203_;
goto v_reusejp_2201_;
}
v_reusejp_2201_:
{
return v___x_2202_;
}
}
}
}
else
{
lean_object* v_a_2205_; lean_object* v___x_2207_; uint8_t v_isShared_2208_; uint8_t v_isSharedCheck_2212_; 
lean_dec_ref(v___y_2155_);
lean_dec_ref(v___y_2154_);
lean_dec(v___y_2153_);
v_a_2205_ = lean_ctor_get(v___x_2157_, 0);
v_isSharedCheck_2212_ = !lean_is_exclusive(v___x_2157_);
if (v_isSharedCheck_2212_ == 0)
{
v___x_2207_ = v___x_2157_;
v_isShared_2208_ = v_isSharedCheck_2212_;
goto v_resetjp_2206_;
}
else
{
lean_inc(v_a_2205_);
lean_dec(v___x_2157_);
v___x_2207_ = lean_box(0);
v_isShared_2208_ = v_isSharedCheck_2212_;
goto v_resetjp_2206_;
}
v_resetjp_2206_:
{
lean_object* v___x_2210_; 
if (v_isShared_2208_ == 0)
{
v___x_2210_ = v___x_2207_;
goto v_reusejp_2209_;
}
else
{
lean_object* v_reuseFailAlloc_2211_; 
v_reuseFailAlloc_2211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2211_, 0, v_a_2205_);
v___x_2210_ = v_reuseFailAlloc_2211_;
goto v_reusejp_2209_;
}
v_reusejp_2209_:
{
return v___x_2210_;
}
}
}
}
v___jp_2213_:
{
lean_object* v_fileName_2219_; lean_object* v_fileMap_2220_; uint8_t v_suppressElabErrors_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___f_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v_a_2227_; lean_object* v___x_2229_; uint8_t v_isShared_2230_; uint8_t v_isSharedCheck_2240_; 
v_fileName_2219_ = lean_ctor_get(v___y_2145_, 0);
v_fileMap_2220_ = lean_ctor_get(v___y_2145_, 1);
v_suppressElabErrors_2221_ = lean_ctor_get_uint8(v___y_2145_, sizeof(void*)*10);
v___x_2222_ = lean_box(v_suppressElabErrors_2221_);
v___x_2223_ = lean_box(v___y_2214_);
v___f_2224_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2224_, 0, v___x_2222_);
lean_closure_set(v___f_2224_, 1, v___x_2223_);
v___x_2225_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_2142_);
v___x_2226_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg(v___x_2225_, v___y_2146_);
v_a_2227_ = lean_ctor_get(v___x_2226_, 0);
v_isSharedCheck_2240_ = !lean_is_exclusive(v___x_2226_);
if (v_isSharedCheck_2240_ == 0)
{
v___x_2229_ = v___x_2226_;
v_isShared_2230_ = v_isSharedCheck_2240_;
goto v_resetjp_2228_;
}
else
{
lean_inc(v_a_2227_);
lean_dec(v___x_2226_);
v___x_2229_ = lean_box(0);
v_isShared_2230_ = v_isSharedCheck_2240_;
goto v_resetjp_2228_;
}
v_resetjp_2228_:
{
lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; 
lean_inc_ref_n(v_fileMap_2220_, 2);
v___x_2231_ = l_Lean_FileMap_toPosition(v_fileMap_2220_, v___y_2217_);
lean_dec(v___y_2217_);
v___x_2232_ = l_Lean_FileMap_toPosition(v_fileMap_2220_, v___y_2218_);
lean_dec(v___y_2218_);
v___x_2233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2233_, 0, v___x_2232_);
v___x_2234_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___closed__0));
if (v_suppressElabErrors_2221_ == 0)
{
lean_del_object(v___x_2229_);
lean_dec_ref(v___f_2224_);
v___y_2149_ = v_fileName_2219_;
v___y_2150_ = v___x_2234_;
v___y_2151_ = v___y_2215_;
v___y_2152_ = v___y_2216_;
v___y_2153_ = v___x_2233_;
v___y_2154_ = v___x_2231_;
v___y_2155_ = v_a_2227_;
v___y_2156_ = v___y_2146_;
goto v___jp_2148_;
}
else
{
uint8_t v___x_2235_; 
lean_inc(v_a_2227_);
v___x_2235_ = l_Lean_MessageData_hasTag(v___f_2224_, v_a_2227_);
if (v___x_2235_ == 0)
{
lean_object* v___x_2236_; lean_object* v___x_2238_; 
lean_dec_ref_known(v___x_2233_, 1);
lean_dec_ref(v___x_2231_);
lean_dec(v_a_2227_);
v___x_2236_ = lean_box(0);
if (v_isShared_2230_ == 0)
{
lean_ctor_set(v___x_2229_, 0, v___x_2236_);
v___x_2238_ = v___x_2229_;
goto v_reusejp_2237_;
}
else
{
lean_object* v_reuseFailAlloc_2239_; 
v_reuseFailAlloc_2239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2239_, 0, v___x_2236_);
v___x_2238_ = v_reuseFailAlloc_2239_;
goto v_reusejp_2237_;
}
v_reusejp_2237_:
{
return v___x_2238_;
}
}
else
{
lean_del_object(v___x_2229_);
v___y_2149_ = v_fileName_2219_;
v___y_2150_ = v___x_2234_;
v___y_2151_ = v___y_2215_;
v___y_2152_ = v___y_2216_;
v___y_2153_ = v___x_2233_;
v___y_2154_ = v___x_2231_;
v___y_2155_ = v_a_2227_;
v___y_2156_ = v___y_2146_;
goto v___jp_2148_;
}
}
}
}
v___jp_2241_:
{
lean_object* v___x_2247_; 
v___x_2247_ = l_Lean_Syntax_getTailPos_x3f(v___y_2245_, v___y_2244_);
lean_dec(v___y_2245_);
if (lean_obj_tag(v___x_2247_) == 0)
{
lean_inc(v___y_2246_);
v___y_2214_ = v___y_2242_;
v___y_2215_ = v___y_2243_;
v___y_2216_ = v___y_2244_;
v___y_2217_ = v___y_2246_;
v___y_2218_ = v___y_2246_;
goto v___jp_2213_;
}
else
{
lean_object* v_val_2248_; 
v_val_2248_ = lean_ctor_get(v___x_2247_, 0);
lean_inc(v_val_2248_);
lean_dec_ref_known(v___x_2247_, 1);
v___y_2214_ = v___y_2242_;
v___y_2215_ = v___y_2243_;
v___y_2216_ = v___y_2244_;
v___y_2217_ = v___y_2246_;
v___y_2218_ = v_val_2248_;
goto v___jp_2213_;
}
}
v___jp_2249_:
{
lean_object* v___x_2253_; 
v___x_2253_ = l_Lean_Elab_Command_getRef___redArg(v___y_2145_);
if (lean_obj_tag(v___x_2253_) == 0)
{
lean_object* v_a_2254_; lean_object* v_ref_2255_; lean_object* v___x_2256_; 
v_a_2254_ = lean_ctor_get(v___x_2253_, 0);
lean_inc(v_a_2254_);
lean_dec_ref_known(v___x_2253_, 1);
v_ref_2255_ = l_Lean_replaceRef(v_ref_2141_, v_a_2254_);
lean_dec(v_a_2254_);
v___x_2256_ = l_Lean_Syntax_getPos_x3f(v_ref_2255_, v___y_2251_);
if (lean_obj_tag(v___x_2256_) == 0)
{
lean_object* v___x_2257_; 
v___x_2257_ = lean_unsigned_to_nat(0u);
v___y_2242_ = v___y_2250_;
v___y_2243_ = v___y_2252_;
v___y_2244_ = v___y_2251_;
v___y_2245_ = v_ref_2255_;
v___y_2246_ = v___x_2257_;
goto v___jp_2241_;
}
else
{
lean_object* v_val_2258_; 
v_val_2258_ = lean_ctor_get(v___x_2256_, 0);
lean_inc(v_val_2258_);
lean_dec_ref_known(v___x_2256_, 1);
v___y_2242_ = v___y_2250_;
v___y_2243_ = v___y_2252_;
v___y_2244_ = v___y_2251_;
v___y_2245_ = v_ref_2255_;
v___y_2246_ = v_val_2258_;
goto v___jp_2241_;
}
}
else
{
lean_object* v_a_2259_; lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2266_; 
lean_dec_ref(v_msgData_2142_);
v_a_2259_ = lean_ctor_get(v___x_2253_, 0);
v_isSharedCheck_2266_ = !lean_is_exclusive(v___x_2253_);
if (v_isSharedCheck_2266_ == 0)
{
v___x_2261_ = v___x_2253_;
v_isShared_2262_ = v_isSharedCheck_2266_;
goto v_resetjp_2260_;
}
else
{
lean_inc(v_a_2259_);
lean_dec(v___x_2253_);
v___x_2261_ = lean_box(0);
v_isShared_2262_ = v_isSharedCheck_2266_;
goto v_resetjp_2260_;
}
v_resetjp_2260_:
{
lean_object* v___x_2264_; 
if (v_isShared_2262_ == 0)
{
v___x_2264_ = v___x_2261_;
goto v_reusejp_2263_;
}
else
{
lean_object* v_reuseFailAlloc_2265_; 
v_reuseFailAlloc_2265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2265_, 0, v_a_2259_);
v___x_2264_ = v_reuseFailAlloc_2265_;
goto v_reusejp_2263_;
}
v_reusejp_2263_:
{
return v___x_2264_;
}
}
}
}
v___jp_2268_:
{
if (v___y_2271_ == 0)
{
v___y_2250_ = v___y_2269_;
v___y_2251_ = v___y_2270_;
v___y_2252_ = v_severity_2143_;
goto v___jp_2249_;
}
else
{
v___y_2250_ = v___y_2269_;
v___y_2251_ = v___y_2270_;
v___y_2252_ = v___x_2267_;
goto v___jp_2249_;
}
}
v___jp_2272_:
{
if (v___y_2273_ == 0)
{
lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v_scopes_2276_; lean_object* v___x_2277_; lean_object* v_opts_2278_; uint8_t v___x_2279_; uint8_t v___x_2280_; 
v___x_2274_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2275_ = lean_st_ref_get(v___y_2146_);
v_scopes_2276_ = lean_ctor_get(v___x_2275_, 2);
lean_inc(v_scopes_2276_);
lean_dec(v___x_2275_);
v___x_2277_ = l_List_head_x21___redArg(v___x_2274_, v_scopes_2276_);
lean_dec(v_scopes_2276_);
v_opts_2278_ = lean_ctor_get(v___x_2277_, 1);
lean_inc_ref(v_opts_2278_);
lean_dec(v___x_2277_);
v___x_2279_ = 1;
v___x_2280_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2143_, v___x_2279_);
if (v___x_2280_ == 0)
{
lean_dec_ref(v_opts_2278_);
v___y_2269_ = v___y_2273_;
v___y_2270_ = v___y_2273_;
v___y_2271_ = v___x_2280_;
goto v___jp_2268_;
}
else
{
lean_object* v___x_2281_; uint8_t v___x_2282_; 
v___x_2281_ = l_Lean_warningAsError;
v___x_2282_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__12(v_opts_2278_, v___x_2281_);
lean_dec_ref(v_opts_2278_);
v___y_2269_ = v___y_2273_;
v___y_2270_ = v___y_2273_;
v___y_2271_ = v___x_2282_;
goto v___jp_2268_;
}
}
else
{
lean_object* v___x_2283_; lean_object* v___x_2284_; 
lean_dec_ref(v_msgData_2142_);
v___x_2283_ = lean_box(0);
v___x_2284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2284_, 0, v___x_2283_);
return v___x_2284_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___boxed(lean_object* v_ref_2287_, lean_object* v_msgData_2288_, lean_object* v_severity_2289_, lean_object* v_isSilent_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_){
_start:
{
uint8_t v_severity_boxed_2294_; uint8_t v_isSilent_boxed_2295_; lean_object* v_res_2296_; 
v_severity_boxed_2294_ = lean_unbox(v_severity_2289_);
v_isSilent_boxed_2295_ = lean_unbox(v_isSilent_2290_);
v_res_2296_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29(v_ref_2287_, v_msgData_2288_, v_severity_boxed_2294_, v_isSilent_boxed_2295_, v___y_2291_, v___y_2292_);
lean_dec(v___y_2292_);
lean_dec_ref(v___y_2291_);
lean_dec(v_ref_2287_);
return v_res_2296_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26(lean_object* v_ref_2297_, lean_object* v_msgData_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_){
_start:
{
uint8_t v___x_2302_; uint8_t v___x_2303_; lean_object* v___x_2304_; 
v___x_2302_ = 1;
v___x_2303_ = 0;
v___x_2304_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29(v_ref_2297_, v_msgData_2298_, v___x_2302_, v___x_2303_, v___y_2299_, v___y_2300_);
return v___x_2304_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26___boxed(lean_object* v_ref_2305_, lean_object* v_msgData_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_){
_start:
{
lean_object* v_res_2310_; 
v_res_2310_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26(v_ref_2305_, v_msgData_2306_, v___y_2307_, v___y_2308_);
lean_dec(v___y_2308_);
lean_dec_ref(v___y_2307_);
lean_dec(v_ref_2305_);
return v_res_2310_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__1(void){
_start:
{
lean_object* v___x_2312_; lean_object* v___x_2313_; 
v___x_2312_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__0));
v___x_2313_ = l_Lean_stringToMessageData(v___x_2312_);
return v___x_2313_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__3(void){
_start:
{
lean_object* v___x_2315_; lean_object* v___x_2316_; 
v___x_2315_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__2));
v___x_2316_ = l_Lean_stringToMessageData(v___x_2315_);
return v___x_2316_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18(lean_object* v_linterOption_2317_, lean_object* v_stx_2318_, lean_object* v_msg_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_){
_start:
{
lean_object* v_name_2323_; lean_object* v___x_2325_; uint8_t v_isShared_2326_; uint8_t v_isSharedCheck_2341_; 
v_name_2323_ = lean_ctor_get(v_linterOption_2317_, 0);
v_isSharedCheck_2341_ = !lean_is_exclusive(v_linterOption_2317_);
if (v_isSharedCheck_2341_ == 0)
{
lean_object* v_unused_2342_; 
v_unused_2342_ = lean_ctor_get(v_linterOption_2317_, 1);
lean_dec(v_unused_2342_);
v___x_2325_ = v_linterOption_2317_;
v_isShared_2326_ = v_isSharedCheck_2341_;
goto v_resetjp_2324_;
}
else
{
lean_inc(v_name_2323_);
lean_dec(v_linterOption_2317_);
v___x_2325_ = lean_box(0);
v_isShared_2326_ = v_isSharedCheck_2341_;
goto v_resetjp_2324_;
}
v_resetjp_2324_:
{
lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2330_; 
v___x_2327_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__1, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__1_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__1);
lean_inc(v_name_2323_);
v___x_2328_ = l_Lean_MessageData_ofName(v_name_2323_);
if (v_isShared_2326_ == 0)
{
lean_ctor_set_tag(v___x_2325_, 7);
lean_ctor_set(v___x_2325_, 1, v___x_2328_);
lean_ctor_set(v___x_2325_, 0, v___x_2327_);
v___x_2330_ = v___x_2325_;
goto v_reusejp_2329_;
}
else
{
lean_object* v_reuseFailAlloc_2340_; 
v_reuseFailAlloc_2340_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2340_, 0, v___x_2327_);
lean_ctor_set(v_reuseFailAlloc_2340_, 1, v___x_2328_);
v___x_2330_ = v_reuseFailAlloc_2340_;
goto v_reusejp_2329_;
}
v_reusejp_2329_:
{
lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v_disable_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; 
v___x_2331_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__3, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__3_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__3);
v___x_2332_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2332_, 0, v___x_2330_);
lean_ctor_set(v___x_2332_, 1, v___x_2331_);
v_disable_2333_ = l_Lean_MessageData_note(v___x_2332_);
v___x_2334_ = l_Lean_Linter_linterMessageTag;
v___x_2335_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2335_, 0, v_msg_2319_);
lean_ctor_set(v___x_2335_, 1, v_disable_2333_);
v___x_2336_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2336_, 0, v___x_2334_);
lean_ctor_set(v___x_2336_, 1, v___x_2335_);
v___x_2337_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2337_, 0, v_name_2323_);
lean_ctor_set(v___x_2337_, 1, v___x_2336_);
lean_inc(v_stx_2318_);
v___x_2338_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_2338_, 0, v_stx_2318_);
lean_ctor_set(v___x_2338_, 1, v___x_2337_);
v___x_2339_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26(v_stx_2318_, v___x_2338_, v___y_2320_, v___y_2321_);
lean_dec(v_stx_2318_);
return v___x_2339_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___boxed(lean_object* v_linterOption_2343_, lean_object* v_stx_2344_, lean_object* v_msg_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_){
_start:
{
lean_object* v_res_2349_; 
v_res_2349_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18(v_linterOption_2343_, v_stx_2344_, v_msg_2345_, v___y_2346_, v___y_2347_);
lean_dec(v___y_2347_);
lean_dec_ref(v___y_2346_);
return v_res_2349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24___redArg(lean_object* v_o_2350_, lean_object* v___y_2351_){
_start:
{
lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v_env_2355_; lean_object* v___x_2356_; lean_object* v_toEnvExtension_2357_; lean_object* v_asyncMode_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v_merged_2361_; lean_object* v___x_2363_; uint8_t v_isShared_2364_; uint8_t v_isSharedCheck_2369_; 
v___x_2353_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_2354_ = lean_st_ref_get(v___y_2351_);
v_env_2355_ = lean_ctor_get(v___x_2354_, 0);
lean_inc_ref(v_env_2355_);
lean_dec(v___x_2354_);
v___x_2356_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_2357_ = lean_ctor_get(v___x_2356_, 0);
v_asyncMode_2358_ = lean_ctor_get(v_toEnvExtension_2357_, 2);
v___x_2359_ = lean_box(0);
v___x_2360_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2353_, v___x_2356_, v_env_2355_, v_asyncMode_2358_, v___x_2359_);
v_merged_2361_ = lean_ctor_get(v___x_2360_, 0);
v_isSharedCheck_2369_ = !lean_is_exclusive(v___x_2360_);
if (v_isSharedCheck_2369_ == 0)
{
lean_object* v_unused_2370_; 
v_unused_2370_ = lean_ctor_get(v___x_2360_, 1);
lean_dec(v_unused_2370_);
v___x_2363_ = v___x_2360_;
v_isShared_2364_ = v_isSharedCheck_2369_;
goto v_resetjp_2362_;
}
else
{
lean_inc(v_merged_2361_);
lean_dec(v___x_2360_);
v___x_2363_ = lean_box(0);
v_isShared_2364_ = v_isSharedCheck_2369_;
goto v_resetjp_2362_;
}
v_resetjp_2362_:
{
lean_object* v___x_2366_; 
if (v_isShared_2364_ == 0)
{
lean_ctor_set(v___x_2363_, 1, v_merged_2361_);
lean_ctor_set(v___x_2363_, 0, v_o_2350_);
v___x_2366_ = v___x_2363_;
goto v_reusejp_2365_;
}
else
{
lean_object* v_reuseFailAlloc_2368_; 
v_reuseFailAlloc_2368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2368_, 0, v_o_2350_);
lean_ctor_set(v_reuseFailAlloc_2368_, 1, v_merged_2361_);
v___x_2366_ = v_reuseFailAlloc_2368_;
goto v_reusejp_2365_;
}
v_reusejp_2365_:
{
lean_object* v___x_2367_; 
v___x_2367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2367_, 0, v___x_2366_);
return v___x_2367_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24___redArg___boxed(lean_object* v_o_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_){
_start:
{
lean_object* v_res_2374_; 
v_res_2374_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24___redArg(v_o_2371_, v___y_2372_);
lean_dec(v___y_2372_);
return v_res_2374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17(lean_object* v___y_2375_, lean_object* v___y_2376_){
_start:
{
lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v_scopes_2380_; lean_object* v___x_2381_; lean_object* v_opts_2382_; lean_object* v___x_2383_; 
v___x_2378_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2379_ = lean_st_ref_get(v___y_2376_);
v_scopes_2380_ = lean_ctor_get(v___x_2379_, 2);
lean_inc(v_scopes_2380_);
lean_dec(v___x_2379_);
v___x_2381_ = l_List_head_x21___redArg(v___x_2378_, v_scopes_2380_);
lean_dec(v_scopes_2380_);
v_opts_2382_ = lean_ctor_get(v___x_2381_, 1);
lean_inc_ref(v_opts_2382_);
lean_dec(v___x_2381_);
v___x_2383_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24___redArg(v_opts_2382_, v___y_2376_);
return v___x_2383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17___boxed(lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_){
_start:
{
lean_object* v_res_2387_; 
v_res_2387_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17(v___y_2384_, v___y_2385_);
lean_dec(v___y_2385_);
lean_dec_ref(v___y_2384_);
return v_res_2387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5(lean_object* v_linterOption_2388_, lean_object* v_stx_2389_, lean_object* v_msg_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_){
_start:
{
lean_object* v___x_2394_; lean_object* v_a_2395_; lean_object* v___x_2397_; uint8_t v_isShared_2398_; uint8_t v_isSharedCheck_2405_; 
v___x_2394_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17(v___y_2391_, v___y_2392_);
v_a_2395_ = lean_ctor_get(v___x_2394_, 0);
v_isSharedCheck_2405_ = !lean_is_exclusive(v___x_2394_);
if (v_isSharedCheck_2405_ == 0)
{
v___x_2397_ = v___x_2394_;
v_isShared_2398_ = v_isSharedCheck_2405_;
goto v_resetjp_2396_;
}
else
{
lean_inc(v_a_2395_);
lean_dec(v___x_2394_);
v___x_2397_ = lean_box(0);
v_isShared_2398_ = v_isSharedCheck_2405_;
goto v_resetjp_2396_;
}
v_resetjp_2396_:
{
uint8_t v___x_2399_; 
v___x_2399_ = l_Lean_Linter_getLinterValue(v_linterOption_2388_, v_a_2395_);
lean_dec(v_a_2395_);
if (v___x_2399_ == 0)
{
lean_object* v___x_2400_; lean_object* v___x_2402_; 
lean_dec_ref(v_msg_2390_);
lean_dec(v_stx_2389_);
lean_dec_ref(v_linterOption_2388_);
v___x_2400_ = lean_box(0);
if (v_isShared_2398_ == 0)
{
lean_ctor_set(v___x_2397_, 0, v___x_2400_);
v___x_2402_ = v___x_2397_;
goto v_reusejp_2401_;
}
else
{
lean_object* v_reuseFailAlloc_2403_; 
v_reuseFailAlloc_2403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2403_, 0, v___x_2400_);
v___x_2402_ = v_reuseFailAlloc_2403_;
goto v_reusejp_2401_;
}
v_reusejp_2401_:
{
return v___x_2402_;
}
}
else
{
lean_object* v___x_2404_; 
lean_del_object(v___x_2397_);
v___x_2404_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18(v_linterOption_2388_, v_stx_2389_, v_msg_2390_, v___y_2391_, v___y_2392_);
return v___x_2404_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5___boxed(lean_object* v_linterOption_2406_, lean_object* v_stx_2407_, lean_object* v_msg_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_){
_start:
{
lean_object* v_res_2412_; 
v_res_2412_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5(v_linterOption_2406_, v_stx_2407_, v_msg_2408_, v___y_2409_, v___y_2410_);
lean_dec(v___y_2410_);
lean_dec_ref(v___y_2409_);
return v_res_2412_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__1(void){
_start:
{
lean_object* v___x_2414_; lean_object* v___x_2415_; 
v___x_2414_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__0));
v___x_2415_ = l_Lean_stringToMessageData(v___x_2414_);
return v___x_2415_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__3(void){
_start:
{
lean_object* v___x_2417_; lean_object* v___x_2418_; 
v___x_2417_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__2));
v___x_2418_ = l_Lean_stringToMessageData(v___x_2417_);
return v___x_2418_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__13(void){
_start:
{
lean_object* v___x_2436_; lean_object* v___x_2437_; 
v___x_2436_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__12));
v___x_2437_ = l_Lean_stringToMessageData(v___x_2436_);
return v___x_2437_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__15(void){
_start:
{
lean_object* v___x_2439_; lean_object* v___x_2440_; 
v___x_2439_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__14));
v___x_2440_ = l_Lean_stringToMessageData(v___x_2439_);
return v___x_2440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1(lean_object* v_vis_x3f_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_){
_start:
{
lean_object* v___x_2453_; 
v___x_2453_ = lean_st_ref_get(v___y_2443_);
if (lean_obj_tag(v_vis_x3f_2441_) == 0)
{
uint8_t v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; 
lean_dec(v___x_2453_);
v___x_2454_ = 0;
v___x_2455_ = lean_box(v___x_2454_);
v___x_2456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2456_, 0, v___x_2455_);
return v___x_2456_;
}
else
{
lean_object* v_env_2457_; lean_object* v_val_2458_; lean_object* v___y_2460_; lean_object* v___y_2461_; lean_object* v___y_2462_; uint8_t v___y_2484_; lean_object* v___x_2485_; uint8_t v___x_2486_; uint8_t v___y_2488_; 
v_env_2457_ = lean_ctor_get(v___x_2453_, 0);
lean_inc_ref(v_env_2457_);
lean_dec(v___x_2453_);
v_val_2458_ = lean_ctor_get(v_vis_x3f_2441_, 0);
lean_inc_n(v_val_2458_, 2);
lean_dec_ref_known(v_vis_x3f_2441_, 1);
v___x_2485_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__9));
v___x_2486_ = l_Lean_Syntax_isOfKind(v_val_2458_, v___x_2485_);
if (v___x_2486_ == 0)
{
lean_object* v___x_2492_; uint8_t v___x_2493_; 
v___x_2492_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__11));
lean_inc(v_val_2458_);
v___x_2493_ = l_Lean_Syntax_isOfKind(v_val_2458_, v___x_2492_);
if (v___x_2493_ == 0)
{
lean_object* v___x_2494_; lean_object* v___x_2495_; 
lean_dec_ref(v_env_2457_);
v___x_2494_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__13, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__13_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__13);
v___x_2495_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___redArg(v_val_2458_, v___x_2494_, v___y_2442_, v___y_2443_);
lean_dec(v_val_2458_);
return v___x_2495_;
}
else
{
lean_object* v___x_2496_; 
v___x_2496_ = l_Lean_Syntax_getHeadInfo(v_val_2458_);
if (lean_obj_tag(v___x_2496_) == 0)
{
lean_dec_ref_known(v___x_2496_, 4);
v___y_2488_ = v___x_2493_;
goto v___jp_2487_;
}
else
{
lean_dec(v___x_2496_);
if (v___x_2486_ == 0)
{
lean_dec(v_val_2458_);
lean_dec_ref(v_env_2457_);
goto v___jp_2445_;
}
else
{
v___y_2488_ = v___x_2486_;
goto v___jp_2487_;
}
}
}
}
else
{
lean_object* v___x_2497_; 
v___x_2497_ = l_Lean_Syntax_getHeadInfo(v_val_2458_);
if (lean_obj_tag(v___x_2497_) == 0)
{
lean_object* v___x_2498_; uint8_t v_isModule_2499_; 
lean_dec_ref_known(v___x_2497_, 4);
v___x_2498_ = l_Lean_Environment_header(v_env_2457_);
v_isModule_2499_ = lean_ctor_get_uint8(v___x_2498_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_2498_);
if (v_isModule_2499_ == 0)
{
lean_dec(v_val_2458_);
lean_dec_ref(v_env_2457_);
goto v___jp_2449_;
}
else
{
uint8_t v_isExporting_2500_; 
v_isExporting_2500_ = lean_ctor_get_uint8(v_env_2457_, sizeof(void*)*8);
lean_dec_ref(v_env_2457_);
if (v_isExporting_2500_ == 0)
{
lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; 
v___x_2501_ = l_Lean_linter_redundantVisibility;
v___x_2502_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__15, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__15_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__15);
v___x_2503_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5(v___x_2501_, v_val_2458_, v___x_2502_, v___y_2442_, v___y_2443_);
if (lean_obj_tag(v___x_2503_) == 0)
{
lean_dec_ref_known(v___x_2503_, 1);
goto v___jp_2449_;
}
else
{
lean_object* v_a_2504_; lean_object* v___x_2506_; uint8_t v_isShared_2507_; uint8_t v_isSharedCheck_2511_; 
v_a_2504_ = lean_ctor_get(v___x_2503_, 0);
v_isSharedCheck_2511_ = !lean_is_exclusive(v___x_2503_);
if (v_isSharedCheck_2511_ == 0)
{
v___x_2506_ = v___x_2503_;
v_isShared_2507_ = v_isSharedCheck_2511_;
goto v_resetjp_2505_;
}
else
{
lean_inc(v_a_2504_);
lean_dec(v___x_2503_);
v___x_2506_ = lean_box(0);
v_isShared_2507_ = v_isSharedCheck_2511_;
goto v_resetjp_2505_;
}
v_resetjp_2505_:
{
lean_object* v___x_2509_; 
if (v_isShared_2507_ == 0)
{
v___x_2509_ = v___x_2506_;
goto v_reusejp_2508_;
}
else
{
lean_object* v_reuseFailAlloc_2510_; 
v_reuseFailAlloc_2510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2510_, 0, v_a_2504_);
v___x_2509_ = v_reuseFailAlloc_2510_;
goto v_reusejp_2508_;
}
v_reusejp_2508_:
{
return v___x_2509_;
}
}
}
}
else
{
lean_dec(v_val_2458_);
goto v___jp_2449_;
}
}
}
else
{
lean_dec(v___x_2497_);
lean_dec(v_val_2458_);
lean_dec_ref(v_env_2457_);
goto v___jp_2449_;
}
}
v___jp_2459_:
{
lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; 
lean_inc_ref(v___y_2462_);
v___x_2463_ = l_Lean_stringToMessageData(v___y_2462_);
lean_inc_ref(v___y_2461_);
v___x_2464_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2464_, 0, v___y_2461_);
lean_ctor_set(v___x_2464_, 1, v___x_2463_);
v___x_2465_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__1, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__1_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__1);
v___x_2466_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2466_, 0, v___x_2464_);
lean_ctor_set(v___x_2466_, 1, v___x_2465_);
lean_inc_ref(v___y_2460_);
v___x_2467_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5(v___y_2460_, v_val_2458_, v___x_2466_, v___y_2442_, v___y_2443_);
if (lean_obj_tag(v___x_2467_) == 0)
{
lean_dec_ref_known(v___x_2467_, 1);
goto v___jp_2445_;
}
else
{
lean_object* v_a_2468_; lean_object* v___x_2470_; uint8_t v_isShared_2471_; uint8_t v_isSharedCheck_2475_; 
v_a_2468_ = lean_ctor_get(v___x_2467_, 0);
v_isSharedCheck_2475_ = !lean_is_exclusive(v___x_2467_);
if (v_isSharedCheck_2475_ == 0)
{
v___x_2470_ = v___x_2467_;
v_isShared_2471_ = v_isSharedCheck_2475_;
goto v_resetjp_2469_;
}
else
{
lean_inc(v_a_2468_);
lean_dec(v___x_2467_);
v___x_2470_ = lean_box(0);
v_isShared_2471_ = v_isSharedCheck_2475_;
goto v_resetjp_2469_;
}
v_resetjp_2469_:
{
lean_object* v___x_2473_; 
if (v_isShared_2471_ == 0)
{
v___x_2473_ = v___x_2470_;
goto v_reusejp_2472_;
}
else
{
lean_object* v_reuseFailAlloc_2474_; 
v_reuseFailAlloc_2474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2474_, 0, v_a_2468_);
v___x_2473_ = v_reuseFailAlloc_2474_;
goto v_reusejp_2472_;
}
v_reusejp_2472_:
{
return v___x_2473_;
}
}
}
}
v___jp_2476_:
{
lean_object* v___x_2477_; uint8_t v_isModule_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; 
v___x_2477_ = l_Lean_Environment_header(v_env_2457_);
lean_dec_ref(v_env_2457_);
v_isModule_2478_ = lean_ctor_get_uint8(v___x_2477_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_2477_);
v___x_2479_ = l_Lean_linter_redundantVisibility;
v___x_2480_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__3, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__3_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__3);
if (v_isModule_2478_ == 0)
{
lean_object* v___x_2481_; 
v___x_2481_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___closed__0));
v___y_2460_ = v___x_2479_;
v___y_2461_ = v___x_2480_;
v___y_2462_ = v___x_2481_;
goto v___jp_2459_;
}
else
{
lean_object* v___x_2482_; 
v___x_2482_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__4));
v___y_2460_ = v___x_2479_;
v___y_2461_ = v___x_2480_;
v___y_2462_ = v___x_2482_;
goto v___jp_2459_;
}
}
v___jp_2483_:
{
if (v___y_2484_ == 0)
{
lean_dec(v_val_2458_);
lean_dec_ref(v_env_2457_);
goto v___jp_2445_;
}
else
{
goto v___jp_2476_;
}
}
v___jp_2487_:
{
uint8_t v_isExporting_2489_; 
v_isExporting_2489_ = lean_ctor_get_uint8(v_env_2457_, sizeof(void*)*8);
if (v_isExporting_2489_ == 0)
{
lean_object* v___x_2490_; uint8_t v_isModule_2491_; 
v___x_2490_ = l_Lean_Environment_header(v_env_2457_);
v_isModule_2491_ = lean_ctor_get_uint8(v___x_2490_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_2490_);
if (v_isModule_2491_ == 0)
{
v___y_2484_ = v___y_2488_;
goto v___jp_2483_;
}
else
{
v___y_2484_ = v___x_2486_;
goto v___jp_2483_;
}
}
else
{
goto v___jp_2476_;
}
}
}
v___jp_2445_:
{
uint8_t v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; 
v___x_2446_ = 2;
v___x_2447_ = lean_box(v___x_2446_);
v___x_2448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2448_, 0, v___x_2447_);
return v___x_2448_;
}
v___jp_2449_:
{
uint8_t v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; 
v___x_2450_ = 1;
v___x_2451_ = lean_box(v___x_2450_);
v___x_2452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2452_, 0, v___x_2451_);
return v___x_2452_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___boxed(lean_object* v_vis_x3f_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_){
_start:
{
lean_object* v_res_2516_; 
v_res_2516_ = l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1(v_vis_x3f_2512_, v___y_2513_, v___y_2514_);
lean_dec(v___y_2514_);
lean_dec_ref(v___y_2513_);
return v_res_2516_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30_spec__33(lean_object* v_msgData_2517_, uint8_t v_severity_2518_, uint8_t v_isSilent_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_){
_start:
{
lean_object* v___x_2523_; 
v___x_2523_ = l_Lean_Elab_Command_getRef___redArg(v___y_2520_);
if (lean_obj_tag(v___x_2523_) == 0)
{
lean_object* v_a_2524_; lean_object* v___x_2525_; 
v_a_2524_ = lean_ctor_get(v___x_2523_, 0);
lean_inc(v_a_2524_);
lean_dec_ref_known(v___x_2523_, 1);
v___x_2525_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29(v_a_2524_, v_msgData_2517_, v_severity_2518_, v_isSilent_2519_, v___y_2520_, v___y_2521_);
lean_dec(v_a_2524_);
return v___x_2525_;
}
else
{
lean_object* v_a_2526_; lean_object* v___x_2528_; uint8_t v_isShared_2529_; uint8_t v_isSharedCheck_2533_; 
lean_dec_ref(v_msgData_2517_);
v_a_2526_ = lean_ctor_get(v___x_2523_, 0);
v_isSharedCheck_2533_ = !lean_is_exclusive(v___x_2523_);
if (v_isSharedCheck_2533_ == 0)
{
v___x_2528_ = v___x_2523_;
v_isShared_2529_ = v_isSharedCheck_2533_;
goto v_resetjp_2527_;
}
else
{
lean_inc(v_a_2526_);
lean_dec(v___x_2523_);
v___x_2528_ = lean_box(0);
v_isShared_2529_ = v_isSharedCheck_2533_;
goto v_resetjp_2527_;
}
v_resetjp_2527_:
{
lean_object* v___x_2531_; 
if (v_isShared_2529_ == 0)
{
v___x_2531_ = v___x_2528_;
goto v_reusejp_2530_;
}
else
{
lean_object* v_reuseFailAlloc_2532_; 
v_reuseFailAlloc_2532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2532_, 0, v_a_2526_);
v___x_2531_ = v_reuseFailAlloc_2532_;
goto v_reusejp_2530_;
}
v_reusejp_2530_:
{
return v___x_2531_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30_spec__33___boxed(lean_object* v_msgData_2534_, lean_object* v_severity_2535_, lean_object* v_isSilent_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_){
_start:
{
uint8_t v_severity_boxed_2540_; uint8_t v_isSilent_boxed_2541_; lean_object* v_res_2542_; 
v_severity_boxed_2540_ = lean_unbox(v_severity_2535_);
v_isSilent_boxed_2541_ = lean_unbox(v_isSilent_2536_);
v_res_2542_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30_spec__33(v_msgData_2534_, v_severity_boxed_2540_, v_isSilent_boxed_2541_, v___y_2537_, v___y_2538_);
lean_dec(v___y_2538_);
lean_dec_ref(v___y_2537_);
return v_res_2542_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30(lean_object* v_msgData_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_){
_start:
{
uint8_t v___x_2547_; uint8_t v___x_2548_; lean_object* v___x_2549_; 
v___x_2547_ = 2;
v___x_2548_ = 0;
v___x_2549_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30_spec__33(v_msgData_2543_, v___x_2547_, v___x_2548_, v___y_2544_, v___y_2545_);
return v___x_2549_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30___boxed(lean_object* v_msgData_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_){
_start:
{
lean_object* v_res_2554_; 
v_res_2554_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30(v_msgData_2550_, v___y_2551_, v___y_2552_);
lean_dec(v___y_2552_);
lean_dec_ref(v___y_2551_);
return v_res_2554_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__29(lean_object* v_ref_2555_, lean_object* v_msgData_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_){
_start:
{
uint8_t v___x_2560_; uint8_t v___x_2561_; lean_object* v___x_2562_; 
v___x_2560_ = 2;
v___x_2561_ = 0;
v___x_2562_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29(v_ref_2555_, v_msgData_2556_, v___x_2560_, v___x_2561_, v___y_2557_, v___y_2558_);
return v___x_2562_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__29___boxed(lean_object* v_ref_2563_, lean_object* v_msgData_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_){
_start:
{
lean_object* v_res_2568_; 
v_res_2568_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__29(v_ref_2563_, v_msgData_2564_, v___y_2565_, v___y_2566_);
lean_dec(v___y_2566_);
lean_dec_ref(v___y_2565_);
lean_dec(v_ref_2563_);
return v_res_2568_;
}
}
static lean_object* _init_l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21___closed__1(void){
_start:
{
lean_object* v___x_2570_; lean_object* v___x_2571_; 
v___x_2570_ = ((lean_object*)(l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21___closed__0));
v___x_2571_ = l_Lean_stringToMessageData(v___x_2570_);
return v___x_2571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21(lean_object* v_ex_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_){
_start:
{
if (lean_obj_tag(v_ex_2572_) == 0)
{
lean_object* v_ref_2576_; lean_object* v_msg_2577_; lean_object* v___x_2578_; 
v_ref_2576_ = lean_ctor_get(v_ex_2572_, 0);
lean_inc(v_ref_2576_);
v_msg_2577_ = lean_ctor_get(v_ex_2572_, 1);
lean_inc_ref(v_msg_2577_);
lean_dec_ref_known(v_ex_2572_, 2);
v___x_2578_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__29(v_ref_2576_, v_msg_2577_, v___y_2573_, v___y_2574_);
lean_dec(v_ref_2576_);
return v___x_2578_;
}
else
{
lean_object* v_id_2579_; uint8_t v___y_2581_; uint8_t v___x_2603_; 
v_id_2579_ = lean_ctor_get(v_ex_2572_, 0);
lean_inc(v_id_2579_);
v___x_2603_ = l_Lean_Elab_isAbortExceptionId(v_id_2579_);
if (v___x_2603_ == 0)
{
uint8_t v___x_2604_; 
v___x_2604_ = l_Lean_Exception_isInterrupt(v_ex_2572_);
lean_dec_ref_known(v_ex_2572_, 2);
v___y_2581_ = v___x_2604_;
goto v___jp_2580_;
}
else
{
lean_dec_ref_known(v_ex_2572_, 2);
v___y_2581_ = v___x_2603_;
goto v___jp_2580_;
}
v___jp_2580_:
{
if (v___y_2581_ == 0)
{
lean_object* v___x_2582_; 
v___x_2582_ = l_Lean_InternalExceptionId_getName(v_id_2579_);
lean_dec(v_id_2579_);
if (lean_obj_tag(v___x_2582_) == 0)
{
lean_object* v_a_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; 
v_a_2583_ = lean_ctor_get(v___x_2582_, 0);
lean_inc(v_a_2583_);
lean_dec_ref_known(v___x_2582_, 1);
v___x_2584_ = lean_obj_once(&l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21___closed__1, &l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21___closed__1_once, _init_l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21___closed__1);
v___x_2585_ = l_Lean_MessageData_ofName(v_a_2583_);
v___x_2586_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2586_, 0, v___x_2584_);
lean_ctor_set(v___x_2586_, 1, v___x_2585_);
v___x_2587_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30(v___x_2586_, v___y_2573_, v___y_2574_);
return v___x_2587_;
}
else
{
lean_object* v_a_2588_; lean_object* v___x_2590_; uint8_t v_isShared_2591_; uint8_t v_isSharedCheck_2600_; 
v_a_2588_ = lean_ctor_get(v___x_2582_, 0);
v_isSharedCheck_2600_ = !lean_is_exclusive(v___x_2582_);
if (v_isSharedCheck_2600_ == 0)
{
v___x_2590_ = v___x_2582_;
v_isShared_2591_ = v_isSharedCheck_2600_;
goto v_resetjp_2589_;
}
else
{
lean_inc(v_a_2588_);
lean_dec(v___x_2582_);
v___x_2590_ = lean_box(0);
v_isShared_2591_ = v_isSharedCheck_2600_;
goto v_resetjp_2589_;
}
v_resetjp_2589_:
{
lean_object* v_ref_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2598_; 
v_ref_2592_ = lean_ctor_get(v___y_2573_, 7);
v___x_2593_ = lean_io_error_to_string(v_a_2588_);
v___x_2594_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2594_, 0, v___x_2593_);
v___x_2595_ = l_Lean_MessageData_ofFormat(v___x_2594_);
lean_inc(v_ref_2592_);
v___x_2596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2596_, 0, v_ref_2592_);
lean_ctor_set(v___x_2596_, 1, v___x_2595_);
if (v_isShared_2591_ == 0)
{
lean_ctor_set(v___x_2590_, 0, v___x_2596_);
v___x_2598_ = v___x_2590_;
goto v_reusejp_2597_;
}
else
{
lean_object* v_reuseFailAlloc_2599_; 
v_reuseFailAlloc_2599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2599_, 0, v___x_2596_);
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
lean_object* v___x_2601_; lean_object* v___x_2602_; 
lean_dec(v_id_2579_);
v___x_2601_ = lean_box(0);
v___x_2602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2602_, 0, v___x_2601_);
return v___x_2602_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21___boxed(lean_object* v_ex_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_){
_start:
{
lean_object* v_res_2609_; 
v_res_2609_ = l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21(v_ex_2605_, v___y_2606_, v___y_2607_);
lean_dec(v___y_2607_);
lean_dec_ref(v___y_2606_);
return v_res_2609_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46_spec__49_spec__53___redArg(lean_object* v_keys_2610_, lean_object* v_i_2611_, lean_object* v_k_2612_){
_start:
{
lean_object* v___x_2613_; uint8_t v___x_2614_; 
v___x_2613_ = lean_array_get_size(v_keys_2610_);
v___x_2614_ = lean_nat_dec_lt(v_i_2611_, v___x_2613_);
if (v___x_2614_ == 0)
{
lean_dec(v_i_2611_);
return v___x_2614_;
}
else
{
lean_object* v_k_x27_2615_; uint8_t v___x_2616_; 
v_k_x27_2615_ = lean_array_fget_borrowed(v_keys_2610_, v_i_2611_);
v___x_2616_ = l_Lean_instBEqExtraModUse_beq(v_k_2612_, v_k_x27_2615_);
if (v___x_2616_ == 0)
{
lean_object* v___x_2617_; lean_object* v___x_2618_; 
v___x_2617_ = lean_unsigned_to_nat(1u);
v___x_2618_ = lean_nat_add(v_i_2611_, v___x_2617_);
lean_dec(v_i_2611_);
v_i_2611_ = v___x_2618_;
goto _start;
}
else
{
lean_dec(v_i_2611_);
return v___x_2614_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46_spec__49_spec__53___redArg___boxed(lean_object* v_keys_2620_, lean_object* v_i_2621_, lean_object* v_k_2622_){
_start:
{
uint8_t v_res_2623_; lean_object* v_r_2624_; 
v_res_2623_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46_spec__49_spec__53___redArg(v_keys_2620_, v_i_2621_, v_k_2622_);
lean_dec_ref(v_k_2622_);
lean_dec_ref(v_keys_2620_);
v_r_2624_ = lean_box(v_res_2623_);
return v_r_2624_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46_spec__49___redArg(lean_object* v_x_2625_, size_t v_x_2626_, lean_object* v_x_2627_){
_start:
{
if (lean_obj_tag(v_x_2625_) == 0)
{
lean_object* v_es_2628_; lean_object* v___x_2629_; size_t v___x_2630_; size_t v___x_2631_; lean_object* v_j_2632_; lean_object* v___x_2633_; 
v_es_2628_ = lean_ctor_get(v_x_2625_, 0);
v___x_2629_ = lean_box(2);
v___x_2630_ = ((size_t)31ULL);
v___x_2631_ = lean_usize_land(v_x_2626_, v___x_2630_);
v_j_2632_ = lean_usize_to_nat(v___x_2631_);
v___x_2633_ = lean_array_get_borrowed(v___x_2629_, v_es_2628_, v_j_2632_);
lean_dec(v_j_2632_);
switch(lean_obj_tag(v___x_2633_))
{
case 0:
{
lean_object* v_key_2634_; uint8_t v___x_2635_; 
v_key_2634_ = lean_ctor_get(v___x_2633_, 0);
v___x_2635_ = l_Lean_instBEqExtraModUse_beq(v_x_2627_, v_key_2634_);
return v___x_2635_;
}
case 1:
{
lean_object* v_node_2636_; size_t v___x_2637_; size_t v___x_2638_; 
v_node_2636_ = lean_ctor_get(v___x_2633_, 0);
v___x_2637_ = ((size_t)5ULL);
v___x_2638_ = lean_usize_shift_right(v_x_2626_, v___x_2637_);
v_x_2625_ = v_node_2636_;
v_x_2626_ = v___x_2638_;
goto _start;
}
default: 
{
uint8_t v___x_2640_; 
v___x_2640_ = 0;
return v___x_2640_;
}
}
}
else
{
lean_object* v_ks_2641_; lean_object* v___x_2642_; uint8_t v___x_2643_; 
v_ks_2641_ = lean_ctor_get(v_x_2625_, 0);
v___x_2642_ = lean_unsigned_to_nat(0u);
v___x_2643_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46_spec__49_spec__53___redArg(v_ks_2641_, v___x_2642_, v_x_2627_);
return v___x_2643_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46_spec__49___redArg___boxed(lean_object* v_x_2644_, lean_object* v_x_2645_, lean_object* v_x_2646_){
_start:
{
size_t v_x_31141__boxed_2647_; uint8_t v_res_2648_; lean_object* v_r_2649_; 
v_x_31141__boxed_2647_ = lean_unbox_usize(v_x_2645_);
lean_dec(v_x_2645_);
v_res_2648_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46_spec__49___redArg(v_x_2644_, v_x_31141__boxed_2647_, v_x_2646_);
lean_dec_ref(v_x_2646_);
lean_dec_ref(v_x_2644_);
v_r_2649_ = lean_box(v_res_2648_);
return v_r_2649_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46___redArg(lean_object* v_x_2650_, lean_object* v_x_2651_){
_start:
{
uint64_t v___x_2652_; size_t v___x_2653_; uint8_t v___x_2654_; 
v___x_2652_ = l_Lean_instHashableExtraModUse_hash(v_x_2651_);
v___x_2653_ = lean_uint64_to_usize(v___x_2652_);
v___x_2654_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46_spec__49___redArg(v_x_2650_, v___x_2653_, v_x_2651_);
return v___x_2654_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46___redArg___boxed(lean_object* v_x_2655_, lean_object* v_x_2656_){
_start:
{
uint8_t v_res_2657_; lean_object* v_r_2658_; 
v_res_2657_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46___redArg(v_x_2655_, v_x_2656_);
lean_dec_ref(v_x_2656_);
lean_dec_ref(v_x_2655_);
v_r_2658_ = lean_box(v_res_2657_);
return v_r_2658_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___closed__0(void){
_start:
{
lean_object* v___x_2659_; double v___x_2660_; 
v___x_2659_ = lean_unsigned_to_nat(0u);
v___x_2660_ = lean_float_of_nat(v___x_2659_);
return v___x_2660_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36(lean_object* v_cls_2663_, lean_object* v_msg_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_){
_start:
{
lean_object* v___x_2668_; 
v___x_2668_ = l_Lean_Elab_Command_getRef___redArg(v___y_2665_);
if (lean_obj_tag(v___x_2668_) == 0)
{
lean_object* v_a_2669_; lean_object* v___x_2670_; lean_object* v_a_2671_; lean_object* v___x_2673_; uint8_t v_isShared_2674_; uint8_t v_isSharedCheck_2719_; 
v_a_2669_ = lean_ctor_get(v___x_2668_, 0);
lean_inc(v_a_2669_);
lean_dec_ref_known(v___x_2668_, 1);
v___x_2670_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg(v_msg_2664_, v___y_2666_);
v_a_2671_ = lean_ctor_get(v___x_2670_, 0);
v_isSharedCheck_2719_ = !lean_is_exclusive(v___x_2670_);
if (v_isSharedCheck_2719_ == 0)
{
v___x_2673_ = v___x_2670_;
v_isShared_2674_ = v_isSharedCheck_2719_;
goto v_resetjp_2672_;
}
else
{
lean_inc(v_a_2671_);
lean_dec(v___x_2670_);
v___x_2673_ = lean_box(0);
v_isShared_2674_ = v_isSharedCheck_2719_;
goto v_resetjp_2672_;
}
v_resetjp_2672_:
{
lean_object* v___x_2675_; lean_object* v_traceState_2676_; lean_object* v_env_2677_; lean_object* v_messages_2678_; lean_object* v_scopes_2679_; lean_object* v_usedQuotCtxts_2680_; lean_object* v_nextMacroScope_2681_; lean_object* v_maxRecDepth_2682_; lean_object* v_ngen_2683_; lean_object* v_auxDeclNGen_2684_; lean_object* v_infoState_2685_; lean_object* v_snapshotTasks_2686_; lean_object* v_prevLinterStates_2687_; lean_object* v_codeQualityEntryTasks_2688_; lean_object* v___x_2690_; uint8_t v_isShared_2691_; uint8_t v_isSharedCheck_2718_; 
v___x_2675_ = lean_st_ref_take(v___y_2666_);
v_traceState_2676_ = lean_ctor_get(v___x_2675_, 9);
v_env_2677_ = lean_ctor_get(v___x_2675_, 0);
v_messages_2678_ = lean_ctor_get(v___x_2675_, 1);
v_scopes_2679_ = lean_ctor_get(v___x_2675_, 2);
v_usedQuotCtxts_2680_ = lean_ctor_get(v___x_2675_, 3);
v_nextMacroScope_2681_ = lean_ctor_get(v___x_2675_, 4);
v_maxRecDepth_2682_ = lean_ctor_get(v___x_2675_, 5);
v_ngen_2683_ = lean_ctor_get(v___x_2675_, 6);
v_auxDeclNGen_2684_ = lean_ctor_get(v___x_2675_, 7);
v_infoState_2685_ = lean_ctor_get(v___x_2675_, 8);
v_snapshotTasks_2686_ = lean_ctor_get(v___x_2675_, 10);
v_prevLinterStates_2687_ = lean_ctor_get(v___x_2675_, 11);
v_codeQualityEntryTasks_2688_ = lean_ctor_get(v___x_2675_, 12);
v_isSharedCheck_2718_ = !lean_is_exclusive(v___x_2675_);
if (v_isSharedCheck_2718_ == 0)
{
v___x_2690_ = v___x_2675_;
v_isShared_2691_ = v_isSharedCheck_2718_;
goto v_resetjp_2689_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2688_);
lean_inc(v_prevLinterStates_2687_);
lean_inc(v_snapshotTasks_2686_);
lean_inc(v_traceState_2676_);
lean_inc(v_infoState_2685_);
lean_inc(v_auxDeclNGen_2684_);
lean_inc(v_ngen_2683_);
lean_inc(v_maxRecDepth_2682_);
lean_inc(v_nextMacroScope_2681_);
lean_inc(v_usedQuotCtxts_2680_);
lean_inc(v_scopes_2679_);
lean_inc(v_messages_2678_);
lean_inc(v_env_2677_);
lean_dec(v___x_2675_);
v___x_2690_ = lean_box(0);
v_isShared_2691_ = v_isSharedCheck_2718_;
goto v_resetjp_2689_;
}
v_resetjp_2689_:
{
uint64_t v_tid_2692_; lean_object* v_traces_2693_; lean_object* v___x_2695_; uint8_t v_isShared_2696_; uint8_t v_isSharedCheck_2717_; 
v_tid_2692_ = lean_ctor_get_uint64(v_traceState_2676_, sizeof(void*)*1);
v_traces_2693_ = lean_ctor_get(v_traceState_2676_, 0);
v_isSharedCheck_2717_ = !lean_is_exclusive(v_traceState_2676_);
if (v_isSharedCheck_2717_ == 0)
{
v___x_2695_ = v_traceState_2676_;
v_isShared_2696_ = v_isSharedCheck_2717_;
goto v_resetjp_2694_;
}
else
{
lean_inc(v_traces_2693_);
lean_dec(v_traceState_2676_);
v___x_2695_ = lean_box(0);
v_isShared_2696_ = v_isSharedCheck_2717_;
goto v_resetjp_2694_;
}
v_resetjp_2694_:
{
lean_object* v___x_2697_; lean_object* v___x_2698_; double v___x_2699_; uint8_t v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2708_; 
v___x_2697_ = lean_box(0);
v___x_2698_ = lean_box(0);
v___x_2699_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___closed__0, &l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___closed__0);
v___x_2700_ = 0;
v___x_2701_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___closed__0));
v___x_2702_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2702_, 0, v_cls_2663_);
lean_ctor_set(v___x_2702_, 1, v___x_2698_);
lean_ctor_set(v___x_2702_, 2, v___x_2701_);
lean_ctor_set_float(v___x_2702_, sizeof(void*)*3, v___x_2699_);
lean_ctor_set_float(v___x_2702_, sizeof(void*)*3 + 8, v___x_2699_);
lean_ctor_set_uint8(v___x_2702_, sizeof(void*)*3 + 16, v___x_2700_);
v___x_2703_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___closed__1));
v___x_2704_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2704_, 0, v___x_2702_);
lean_ctor_set(v___x_2704_, 1, v_a_2671_);
lean_ctor_set(v___x_2704_, 2, v___x_2703_);
v___x_2705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2705_, 0, v_a_2669_);
lean_ctor_set(v___x_2705_, 1, v___x_2704_);
v___x_2706_ = l_Lean_PersistentArray_push___redArg(v_traces_2693_, v___x_2705_);
if (v_isShared_2696_ == 0)
{
lean_ctor_set(v___x_2695_, 0, v___x_2706_);
v___x_2708_ = v___x_2695_;
goto v_reusejp_2707_;
}
else
{
lean_object* v_reuseFailAlloc_2716_; 
v_reuseFailAlloc_2716_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2716_, 0, v___x_2706_);
lean_ctor_set_uint64(v_reuseFailAlloc_2716_, sizeof(void*)*1, v_tid_2692_);
v___x_2708_ = v_reuseFailAlloc_2716_;
goto v_reusejp_2707_;
}
v_reusejp_2707_:
{
lean_object* v___x_2710_; 
if (v_isShared_2691_ == 0)
{
lean_ctor_set(v___x_2690_, 9, v___x_2708_);
v___x_2710_ = v___x_2690_;
goto v_reusejp_2709_;
}
else
{
lean_object* v_reuseFailAlloc_2715_; 
v_reuseFailAlloc_2715_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2715_, 0, v_env_2677_);
lean_ctor_set(v_reuseFailAlloc_2715_, 1, v_messages_2678_);
lean_ctor_set(v_reuseFailAlloc_2715_, 2, v_scopes_2679_);
lean_ctor_set(v_reuseFailAlloc_2715_, 3, v_usedQuotCtxts_2680_);
lean_ctor_set(v_reuseFailAlloc_2715_, 4, v_nextMacroScope_2681_);
lean_ctor_set(v_reuseFailAlloc_2715_, 5, v_maxRecDepth_2682_);
lean_ctor_set(v_reuseFailAlloc_2715_, 6, v_ngen_2683_);
lean_ctor_set(v_reuseFailAlloc_2715_, 7, v_auxDeclNGen_2684_);
lean_ctor_set(v_reuseFailAlloc_2715_, 8, v_infoState_2685_);
lean_ctor_set(v_reuseFailAlloc_2715_, 9, v___x_2708_);
lean_ctor_set(v_reuseFailAlloc_2715_, 10, v_snapshotTasks_2686_);
lean_ctor_set(v_reuseFailAlloc_2715_, 11, v_prevLinterStates_2687_);
lean_ctor_set(v_reuseFailAlloc_2715_, 12, v_codeQualityEntryTasks_2688_);
v___x_2710_ = v_reuseFailAlloc_2715_;
goto v_reusejp_2709_;
}
v_reusejp_2709_:
{
lean_object* v___x_2711_; lean_object* v___x_2713_; 
v___x_2711_ = lean_st_ref_put(v___y_2666_, v___x_2710_);
if (v_isShared_2674_ == 0)
{
lean_ctor_set(v___x_2673_, 0, v___x_2697_);
v___x_2713_ = v___x_2673_;
goto v_reusejp_2712_;
}
else
{
lean_object* v_reuseFailAlloc_2714_; 
v_reuseFailAlloc_2714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2714_, 0, v___x_2697_);
v___x_2713_ = v_reuseFailAlloc_2714_;
goto v_reusejp_2712_;
}
v_reusejp_2712_:
{
return v___x_2713_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2720_; lean_object* v___x_2722_; uint8_t v_isShared_2723_; uint8_t v_isSharedCheck_2727_; 
lean_dec_ref(v_msg_2664_);
lean_dec(v_cls_2663_);
v_a_2720_ = lean_ctor_get(v___x_2668_, 0);
v_isSharedCheck_2727_ = !lean_is_exclusive(v___x_2668_);
if (v_isSharedCheck_2727_ == 0)
{
v___x_2722_ = v___x_2668_;
v_isShared_2723_ = v_isSharedCheck_2727_;
goto v_resetjp_2721_;
}
else
{
lean_inc(v_a_2720_);
lean_dec(v___x_2668_);
v___x_2722_ = lean_box(0);
v_isShared_2723_ = v_isSharedCheck_2727_;
goto v_resetjp_2721_;
}
v_resetjp_2721_:
{
lean_object* v___x_2725_; 
if (v_isShared_2723_ == 0)
{
v___x_2725_ = v___x_2722_;
goto v_reusejp_2724_;
}
else
{
lean_object* v_reuseFailAlloc_2726_; 
v_reuseFailAlloc_2726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2726_, 0, v_a_2720_);
v___x_2725_ = v_reuseFailAlloc_2726_;
goto v_reusejp_2724_;
}
v_reusejp_2724_:
{
return v___x_2725_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___boxed(lean_object* v_cls_2728_, lean_object* v_msg_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_){
_start:
{
lean_object* v_res_2733_; 
v_res_2733_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36(v_cls_2728_, v_msg_2729_, v___y_2730_, v___y_2731_);
lean_dec(v___y_2731_);
lean_dec_ref(v___y_2730_);
return v_res_2733_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__0(void){
_start:
{
lean_object* v___x_2734_; 
v___x_2734_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_2734_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__4(void){
_start:
{
lean_object* v___x_2739_; lean_object* v___x_2740_; 
v___x_2739_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__3));
v___x_2740_ = l_Lean_stringToMessageData(v___x_2739_);
return v___x_2740_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__6(void){
_start:
{
lean_object* v___x_2742_; lean_object* v___x_2743_; 
v___x_2742_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__5));
v___x_2743_ = l_Lean_stringToMessageData(v___x_2742_);
return v___x_2743_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__7(void){
_start:
{
lean_object* v___x_2744_; lean_object* v___x_2745_; 
v___x_2744_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___closed__0));
v___x_2745_ = l_Lean_stringToMessageData(v___x_2744_);
return v___x_2745_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__9(void){
_start:
{
lean_object* v_cls_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; 
v_cls_2748_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__2));
v___x_2749_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__8));
v___x_2750_ = l_Lean_Name_append(v___x_2749_, v_cls_2748_);
return v___x_2750_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__11(void){
_start:
{
lean_object* v___x_2752_; lean_object* v___x_2753_; 
v___x_2752_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__10));
v___x_2753_ = l_Lean_stringToMessageData(v___x_2752_);
return v___x_2753_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__13(void){
_start:
{
lean_object* v___x_2755_; lean_object* v___x_2756_; 
v___x_2755_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__12));
v___x_2756_ = l_Lean_stringToMessageData(v___x_2755_);
return v___x_2756_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43(lean_object* v_mod_2759_, uint8_t v_isMeta_2760_, lean_object* v_hint_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_){
_start:
{
lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v_env_2767_; uint8_t v_isExporting_2768_; lean_object* v_entry_2769_; lean_object* v___x_2770_; lean_object* v_env_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___y_2776_; lean_object* v___x_2804_; uint8_t v___x_2805_; 
v___x_2765_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__0);
v___x_2766_ = lean_st_ref_get(v___y_2763_);
v_env_2767_ = lean_ctor_get(v___x_2766_, 0);
lean_inc_ref(v_env_2767_);
lean_dec(v___x_2766_);
v_isExporting_2768_ = lean_ctor_get_uint8(v_env_2767_, sizeof(void*)*8);
lean_dec_ref(v_env_2767_);
lean_inc(v_mod_2759_);
v_entry_2769_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_2769_, 0, v_mod_2759_);
lean_ctor_set_uint8(v_entry_2769_, sizeof(void*)*1, v_isExporting_2768_);
lean_ctor_set_uint8(v_entry_2769_, sizeof(void*)*1 + 1, v_isMeta_2760_);
v___x_2770_ = lean_st_ref_get(v___y_2763_);
v_env_2771_ = lean_ctor_get(v___x_2770_, 0);
lean_inc_ref(v_env_2771_);
lean_dec(v___x_2770_);
v___x_2772_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_2773_ = lean_box(1);
v___x_2774_ = lean_box(0);
v___x_2804_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2765_, v___x_2772_, v_env_2771_, v___x_2773_, v___x_2774_);
v___x_2805_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46___redArg(v___x_2804_, v_entry_2769_);
lean_dec(v___x_2804_);
if (v___x_2805_ == 0)
{
lean_object* v_cls_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___y_2812_; lean_object* v___y_2813_; lean_object* v___y_2817_; lean_object* v___y_2818_; lean_object* v_scopes_2830_; lean_object* v___x_2831_; lean_object* v_opts_2832_; uint8_t v_hasTrace_2833_; 
v_cls_2806_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__2));
v___x_2807_ = l_Lean_inheritedTraceOptions;
v___x_2808_ = lean_st_ref_get(v___x_2807_);
v___x_2809_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2810_ = lean_st_ref_get(v___y_2763_);
v_scopes_2830_ = lean_ctor_get(v___x_2810_, 2);
lean_inc(v_scopes_2830_);
lean_dec(v___x_2810_);
v___x_2831_ = l_List_head_x21___redArg(v___x_2809_, v_scopes_2830_);
lean_dec(v_scopes_2830_);
v_opts_2832_ = lean_ctor_get(v___x_2831_, 1);
lean_inc_ref(v_opts_2832_);
lean_dec(v___x_2831_);
v_hasTrace_2833_ = lean_ctor_get_uint8(v_opts_2832_, sizeof(void*)*1);
if (v_hasTrace_2833_ == 0)
{
lean_dec_ref(v_opts_2832_);
lean_dec(v___x_2808_);
lean_dec(v_hint_2761_);
lean_dec(v_mod_2759_);
v___y_2776_ = v___y_2763_;
goto v___jp_2775_;
}
else
{
lean_object* v___x_2834_; uint8_t v___x_2835_; 
v___x_2834_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__9);
v___x_2835_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_2808_, v_opts_2832_, v___x_2834_);
lean_dec_ref(v_opts_2832_);
lean_dec(v___x_2808_);
if (v___x_2835_ == 0)
{
lean_dec(v_hint_2761_);
lean_dec(v_mod_2759_);
v___y_2776_ = v___y_2763_;
goto v___jp_2775_;
}
else
{
lean_object* v___x_2836_; lean_object* v___y_2838_; 
v___x_2836_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__11);
if (v_isExporting_2768_ == 0)
{
lean_object* v___x_2845_; 
v___x_2845_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__8));
v___y_2838_ = v___x_2845_;
goto v___jp_2837_;
}
else
{
lean_object* v___x_2846_; 
v___x_2846_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__10));
v___y_2838_ = v___x_2846_;
goto v___jp_2837_;
}
v___jp_2837_:
{
lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; 
lean_inc_ref(v___y_2838_);
v___x_2839_ = l_Lean_stringToMessageData(v___y_2838_);
v___x_2840_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2840_, 0, v___x_2836_);
lean_ctor_set(v___x_2840_, 1, v___x_2839_);
v___x_2841_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__13);
v___x_2842_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2842_, 0, v___x_2840_);
lean_ctor_set(v___x_2842_, 1, v___x_2841_);
if (v_isMeta_2760_ == 0)
{
lean_object* v___x_2843_; 
v___x_2843_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__14));
v___y_2817_ = v___x_2842_;
v___y_2818_ = v___x_2843_;
goto v___jp_2816_;
}
else
{
lean_object* v___x_2844_; 
v___x_2844_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__15));
v___y_2817_ = v___x_2842_;
v___y_2818_ = v___x_2844_;
goto v___jp_2816_;
}
}
}
}
v___jp_2811_:
{
lean_object* v___x_2814_; lean_object* v___x_2815_; 
v___x_2814_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2814_, 0, v___y_2812_);
lean_ctor_set(v___x_2814_, 1, v___y_2813_);
v___x_2815_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36(v_cls_2806_, v___x_2814_, v___y_2762_, v___y_2763_);
if (lean_obj_tag(v___x_2815_) == 0)
{
lean_dec_ref_known(v___x_2815_, 1);
v___y_2776_ = v___y_2763_;
goto v___jp_2775_;
}
else
{
lean_dec_ref_known(v_entry_2769_, 1);
return v___x_2815_;
}
}
v___jp_2816_:
{
lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; uint8_t v___x_2825_; 
lean_inc_ref(v___y_2818_);
v___x_2819_ = l_Lean_stringToMessageData(v___y_2818_);
v___x_2820_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2820_, 0, v___y_2817_);
lean_ctor_set(v___x_2820_, 1, v___x_2819_);
v___x_2821_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__4);
v___x_2822_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2822_, 0, v___x_2820_);
lean_ctor_set(v___x_2822_, 1, v___x_2821_);
v___x_2823_ = l_Lean_MessageData_ofName(v_mod_2759_);
v___x_2824_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2824_, 0, v___x_2822_);
lean_ctor_set(v___x_2824_, 1, v___x_2823_);
v___x_2825_ = l_Lean_Name_isAnonymous(v_hint_2761_);
if (v___x_2825_ == 0)
{
lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; 
v___x_2826_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__6);
v___x_2827_ = l_Lean_MessageData_ofName(v_hint_2761_);
v___x_2828_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2828_, 0, v___x_2826_);
lean_ctor_set(v___x_2828_, 1, v___x_2827_);
v___y_2812_ = v___x_2824_;
v___y_2813_ = v___x_2828_;
goto v___jp_2811_;
}
else
{
lean_object* v___x_2829_; 
lean_dec(v_hint_2761_);
v___x_2829_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__7);
v___y_2812_ = v___x_2824_;
v___y_2813_ = v___x_2829_;
goto v___jp_2811_;
}
}
}
else
{
lean_object* v___x_2847_; lean_object* v___x_2848_; 
lean_dec_ref_known(v_entry_2769_, 1);
lean_dec(v_hint_2761_);
lean_dec(v_mod_2759_);
v___x_2847_ = lean_box(0);
v___x_2848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2848_, 0, v___x_2847_);
return v___x_2848_;
}
v___jp_2775_:
{
lean_object* v___x_2777_; lean_object* v_toEnvExtension_2778_; lean_object* v_env_2779_; lean_object* v_messages_2780_; lean_object* v_scopes_2781_; lean_object* v_usedQuotCtxts_2782_; lean_object* v_nextMacroScope_2783_; lean_object* v_maxRecDepth_2784_; lean_object* v_ngen_2785_; lean_object* v_auxDeclNGen_2786_; lean_object* v_infoState_2787_; lean_object* v_traceState_2788_; lean_object* v_snapshotTasks_2789_; lean_object* v_prevLinterStates_2790_; lean_object* v_codeQualityEntryTasks_2791_; lean_object* v___x_2793_; uint8_t v_isShared_2794_; uint8_t v_isSharedCheck_2803_; 
v___x_2777_ = lean_st_ref_take(v___y_2776_);
v_toEnvExtension_2778_ = lean_ctor_get(v___x_2772_, 0);
v_env_2779_ = lean_ctor_get(v___x_2777_, 0);
v_messages_2780_ = lean_ctor_get(v___x_2777_, 1);
v_scopes_2781_ = lean_ctor_get(v___x_2777_, 2);
v_usedQuotCtxts_2782_ = lean_ctor_get(v___x_2777_, 3);
v_nextMacroScope_2783_ = lean_ctor_get(v___x_2777_, 4);
v_maxRecDepth_2784_ = lean_ctor_get(v___x_2777_, 5);
v_ngen_2785_ = lean_ctor_get(v___x_2777_, 6);
v_auxDeclNGen_2786_ = lean_ctor_get(v___x_2777_, 7);
v_infoState_2787_ = lean_ctor_get(v___x_2777_, 8);
v_traceState_2788_ = lean_ctor_get(v___x_2777_, 9);
v_snapshotTasks_2789_ = lean_ctor_get(v___x_2777_, 10);
v_prevLinterStates_2790_ = lean_ctor_get(v___x_2777_, 11);
v_codeQualityEntryTasks_2791_ = lean_ctor_get(v___x_2777_, 12);
v_isSharedCheck_2803_ = !lean_is_exclusive(v___x_2777_);
if (v_isSharedCheck_2803_ == 0)
{
v___x_2793_ = v___x_2777_;
v_isShared_2794_ = v_isSharedCheck_2803_;
goto v_resetjp_2792_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2791_);
lean_inc(v_prevLinterStates_2790_);
lean_inc(v_snapshotTasks_2789_);
lean_inc(v_traceState_2788_);
lean_inc(v_infoState_2787_);
lean_inc(v_auxDeclNGen_2786_);
lean_inc(v_ngen_2785_);
lean_inc(v_maxRecDepth_2784_);
lean_inc(v_nextMacroScope_2783_);
lean_inc(v_usedQuotCtxts_2782_);
lean_inc(v_scopes_2781_);
lean_inc(v_messages_2780_);
lean_inc(v_env_2779_);
lean_dec(v___x_2777_);
v___x_2793_ = lean_box(0);
v_isShared_2794_ = v_isSharedCheck_2803_;
goto v_resetjp_2792_;
}
v_resetjp_2792_:
{
lean_object* v_asyncMode_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2799_; 
v_asyncMode_2795_ = lean_ctor_get(v_toEnvExtension_2778_, 2);
v___x_2796_ = lean_box(0);
v___x_2797_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_2772_, v_env_2779_, v_entry_2769_, v_asyncMode_2795_, v___x_2774_);
if (v_isShared_2794_ == 0)
{
lean_ctor_set(v___x_2793_, 0, v___x_2797_);
v___x_2799_ = v___x_2793_;
goto v_reusejp_2798_;
}
else
{
lean_object* v_reuseFailAlloc_2802_; 
v_reuseFailAlloc_2802_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2802_, 0, v___x_2797_);
lean_ctor_set(v_reuseFailAlloc_2802_, 1, v_messages_2780_);
lean_ctor_set(v_reuseFailAlloc_2802_, 2, v_scopes_2781_);
lean_ctor_set(v_reuseFailAlloc_2802_, 3, v_usedQuotCtxts_2782_);
lean_ctor_set(v_reuseFailAlloc_2802_, 4, v_nextMacroScope_2783_);
lean_ctor_set(v_reuseFailAlloc_2802_, 5, v_maxRecDepth_2784_);
lean_ctor_set(v_reuseFailAlloc_2802_, 6, v_ngen_2785_);
lean_ctor_set(v_reuseFailAlloc_2802_, 7, v_auxDeclNGen_2786_);
lean_ctor_set(v_reuseFailAlloc_2802_, 8, v_infoState_2787_);
lean_ctor_set(v_reuseFailAlloc_2802_, 9, v_traceState_2788_);
lean_ctor_set(v_reuseFailAlloc_2802_, 10, v_snapshotTasks_2789_);
lean_ctor_set(v_reuseFailAlloc_2802_, 11, v_prevLinterStates_2790_);
lean_ctor_set(v_reuseFailAlloc_2802_, 12, v_codeQualityEntryTasks_2791_);
v___x_2799_ = v_reuseFailAlloc_2802_;
goto v_reusejp_2798_;
}
v_reusejp_2798_:
{
lean_object* v___x_2800_; lean_object* v___x_2801_; 
v___x_2800_ = lean_st_ref_put(v___y_2776_, v___x_2799_);
v___x_2801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2801_, 0, v___x_2796_);
return v___x_2801_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___boxed(lean_object* v_mod_2849_, lean_object* v_isMeta_2850_, lean_object* v_hint_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_){
_start:
{
uint8_t v_isMeta_boxed_2855_; lean_object* v_res_2856_; 
v_isMeta_boxed_2855_ = lean_unbox(v_isMeta_2850_);
v_res_2856_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43(v_mod_2849_, v_isMeta_boxed_2855_, v_hint_2851_, v___y_2852_, v___y_2853_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
return v_res_2856_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__45_spec__49___redArg(lean_object* v_a_2857_, lean_object* v_x_2858_){
_start:
{
if (lean_obj_tag(v_x_2858_) == 0)
{
lean_object* v___x_2859_; 
v___x_2859_ = lean_box(0);
return v___x_2859_;
}
else
{
lean_object* v_key_2860_; lean_object* v_value_2861_; lean_object* v_tail_2862_; uint8_t v___x_2863_; 
v_key_2860_ = lean_ctor_get(v_x_2858_, 0);
v_value_2861_ = lean_ctor_get(v_x_2858_, 1);
v_tail_2862_ = lean_ctor_get(v_x_2858_, 2);
v___x_2863_ = lean_name_eq(v_key_2860_, v_a_2857_);
if (v___x_2863_ == 0)
{
v_x_2858_ = v_tail_2862_;
goto _start;
}
else
{
lean_object* v___x_2865_; 
lean_inc(v_value_2861_);
v___x_2865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2865_, 0, v_value_2861_);
return v___x_2865_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__45_spec__49___redArg___boxed(lean_object* v_a_2866_, lean_object* v_x_2867_){
_start:
{
lean_object* v_res_2868_; 
v_res_2868_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__45_spec__49___redArg(v_a_2866_, v_x_2867_);
lean_dec(v_x_2867_);
lean_dec(v_a_2866_);
return v_res_2868_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__45___redArg(lean_object* v_m_2869_, lean_object* v_a_2870_){
_start:
{
lean_object* v_buckets_2871_; lean_object* v___x_2872_; uint64_t v___y_2874_; 
v_buckets_2871_ = lean_ctor_get(v_m_2869_, 1);
v___x_2872_ = lean_array_get_size(v_buckets_2871_);
if (lean_obj_tag(v_a_2870_) == 0)
{
uint64_t v___x_2888_; 
v___x_2888_ = 1723ULL;
v___y_2874_ = v___x_2888_;
goto v___jp_2873_;
}
else
{
uint64_t v_hash_2889_; 
v_hash_2889_ = lean_ctor_get_uint64(v_a_2870_, sizeof(void*)*2);
v___y_2874_ = v_hash_2889_;
goto v___jp_2873_;
}
v___jp_2873_:
{
uint64_t v___x_2875_; uint64_t v___x_2876_; uint64_t v_fold_2877_; uint64_t v___x_2878_; uint64_t v___x_2879_; uint64_t v___x_2880_; size_t v___x_2881_; size_t v___x_2882_; size_t v___x_2883_; size_t v___x_2884_; size_t v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; 
v___x_2875_ = 32ULL;
v___x_2876_ = lean_uint64_shift_right(v___y_2874_, v___x_2875_);
v_fold_2877_ = lean_uint64_xor(v___y_2874_, v___x_2876_);
v___x_2878_ = 16ULL;
v___x_2879_ = lean_uint64_shift_right(v_fold_2877_, v___x_2878_);
v___x_2880_ = lean_uint64_xor(v_fold_2877_, v___x_2879_);
v___x_2881_ = lean_uint64_to_usize(v___x_2880_);
v___x_2882_ = lean_usize_of_nat(v___x_2872_);
v___x_2883_ = ((size_t)1ULL);
v___x_2884_ = lean_usize_sub(v___x_2882_, v___x_2883_);
v___x_2885_ = lean_usize_land(v___x_2881_, v___x_2884_);
v___x_2886_ = lean_array_uget_borrowed(v_buckets_2871_, v___x_2885_);
v___x_2887_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__45_spec__49___redArg(v_a_2870_, v___x_2886_);
return v___x_2887_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__45___redArg___boxed(lean_object* v_m_2890_, lean_object* v_a_2891_){
_start:
{
lean_object* v_res_2892_; 
v_res_2892_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__45___redArg(v_m_2890_, v_a_2891_);
lean_dec(v_a_2891_);
lean_dec_ref(v_m_2890_);
return v_res_2892_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44(lean_object* v___x_2893_, lean_object* v_declName_2894_, lean_object* v_as_2895_, size_t v_sz_2896_, size_t v_i_2897_, lean_object* v_b_2898_, lean_object* v___y_2899_, lean_object* v___y_2900_){
_start:
{
uint8_t v___x_2902_; 
v___x_2902_ = lean_usize_dec_lt(v_i_2897_, v_sz_2896_);
if (v___x_2902_ == 0)
{
lean_object* v___x_2903_; 
lean_dec(v_declName_2894_);
v___x_2903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2903_, 0, v_b_2898_);
return v___x_2903_;
}
else
{
lean_object* v___x_2904_; lean_object* v_modules_2905_; lean_object* v___x_2906_; lean_object* v_a_2907_; lean_object* v___x_2908_; lean_object* v_toImport_2909_; lean_object* v_module_2910_; lean_object* v___x_2911_; uint8_t v___x_2912_; lean_object* v___x_2913_; 
v___x_2904_ = l_Lean_Environment_header(v___x_2893_);
v_modules_2905_ = lean_ctor_get(v___x_2904_, 3);
lean_inc_ref(v_modules_2905_);
lean_dec_ref(v___x_2904_);
v___x_2906_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_2907_ = lean_array_uget_borrowed(v_as_2895_, v_i_2897_);
v___x_2908_ = lean_array_get(v___x_2906_, v_modules_2905_, v_a_2907_);
lean_dec_ref(v_modules_2905_);
v_toImport_2909_ = lean_ctor_get(v___x_2908_, 0);
lean_inc_ref(v_toImport_2909_);
lean_dec(v___x_2908_);
v_module_2910_ = lean_ctor_get(v_toImport_2909_, 0);
lean_inc(v_module_2910_);
lean_dec_ref(v_toImport_2909_);
v___x_2911_ = lean_box(0);
v___x_2912_ = 0;
lean_inc(v_declName_2894_);
v___x_2913_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43(v_module_2910_, v___x_2912_, v_declName_2894_, v___y_2899_, v___y_2900_);
if (lean_obj_tag(v___x_2913_) == 0)
{
size_t v___x_2914_; size_t v___x_2915_; 
lean_dec_ref_known(v___x_2913_, 1);
v___x_2914_ = ((size_t)1ULL);
v___x_2915_ = lean_usize_add(v_i_2897_, v___x_2914_);
v_i_2897_ = v___x_2915_;
v_b_2898_ = v___x_2911_;
goto _start;
}
else
{
lean_dec(v_declName_2894_);
return v___x_2913_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44___boxed(lean_object* v___x_2917_, lean_object* v_declName_2918_, lean_object* v_as_2919_, lean_object* v_sz_2920_, lean_object* v_i_2921_, lean_object* v_b_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_){
_start:
{
size_t v_sz_boxed_2926_; size_t v_i_boxed_2927_; lean_object* v_res_2928_; 
v_sz_boxed_2926_ = lean_unbox_usize(v_sz_2920_);
lean_dec(v_sz_2920_);
v_i_boxed_2927_ = lean_unbox_usize(v_i_2921_);
lean_dec(v_i_2921_);
v_res_2928_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44(v___x_2917_, v_declName_2918_, v_as_2919_, v_sz_boxed_2926_, v_i_boxed_2927_, v_b_2922_, v___y_2923_, v___y_2924_);
lean_dec(v___y_2924_);
lean_dec_ref(v___y_2923_);
lean_dec_ref(v_as_2919_);
lean_dec_ref(v___x_2917_);
return v_res_2928_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33___closed__0(void){
_start:
{
lean_object* v___x_2929_; 
v___x_2929_ = l_Std_HashMap_instInhabited___redArg();
return v___x_2929_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33(lean_object* v_declName_2932_, uint8_t v_isMeta_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_){
_start:
{
lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v_env_2942_; lean_object* v___y_2944_; lean_object* v___x_2957_; 
v___x_2937_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33___closed__0);
v___x_2938_ = lean_st_ref_get(v___y_2935_);
v_env_2942_ = lean_ctor_get(v___x_2938_, 0);
lean_inc_ref(v_env_2942_);
lean_dec(v___x_2938_);
v___x_2957_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2942_, v_declName_2932_);
if (lean_obj_tag(v___x_2957_) == 0)
{
lean_dec_ref(v_env_2942_);
lean_dec(v_declName_2932_);
goto v___jp_2939_;
}
else
{
lean_object* v_val_2958_; lean_object* v___x_2959_; lean_object* v_modules_2960_; lean_object* v___x_2961_; uint8_t v___x_2962_; 
v_val_2958_ = lean_ctor_get(v___x_2957_, 0);
lean_inc(v_val_2958_);
lean_dec_ref_known(v___x_2957_, 1);
v___x_2959_ = l_Lean_Environment_header(v_env_2942_);
v_modules_2960_ = lean_ctor_get(v___x_2959_, 3);
lean_inc_ref(v_modules_2960_);
lean_dec_ref(v___x_2959_);
v___x_2961_ = lean_array_get_size(v_modules_2960_);
v___x_2962_ = lean_nat_dec_lt(v_val_2958_, v___x_2961_);
if (v___x_2962_ == 0)
{
lean_dec_ref(v_modules_2960_);
lean_dec(v_val_2958_);
lean_dec_ref(v_env_2942_);
lean_dec(v_declName_2932_);
goto v___jp_2939_;
}
else
{
lean_object* v___x_2963_; lean_object* v___x_2964_; uint8_t v___y_2966_; 
v___x_2963_ = lean_array_fget(v_modules_2960_, v_val_2958_);
lean_dec(v_val_2958_);
lean_dec_ref(v_modules_2960_);
v___x_2964_ = lean_st_ref_get(v___y_2935_);
if (v_isMeta_2933_ == 0)
{
lean_dec(v___x_2964_);
v___y_2966_ = v_isMeta_2933_;
goto v___jp_2965_;
}
else
{
lean_object* v_env_2977_; uint8_t v___x_2978_; 
v_env_2977_ = lean_ctor_get(v___x_2964_, 0);
lean_inc_ref(v_env_2977_);
lean_dec(v___x_2964_);
lean_inc(v_declName_2932_);
v___x_2978_ = l_Lean_isMarkedMeta(v_env_2977_, v_declName_2932_);
if (v___x_2978_ == 0)
{
v___y_2966_ = v_isMeta_2933_;
goto v___jp_2965_;
}
else
{
uint8_t v___x_2979_; 
v___x_2979_ = 0;
v___y_2966_ = v___x_2979_;
goto v___jp_2965_;
}
}
v___jp_2965_:
{
lean_object* v_toImport_2967_; lean_object* v_module_2968_; lean_object* v___x_2969_; 
v_toImport_2967_ = lean_ctor_get(v___x_2963_, 0);
lean_inc_ref(v_toImport_2967_);
lean_dec(v___x_2963_);
v_module_2968_ = lean_ctor_get(v_toImport_2967_, 0);
lean_inc(v_module_2968_);
lean_dec_ref(v_toImport_2967_);
lean_inc(v_declName_2932_);
v___x_2969_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43(v_module_2968_, v___y_2966_, v_declName_2932_, v___y_2934_, v___y_2935_);
if (lean_obj_tag(v___x_2969_) == 0)
{
lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; 
lean_dec_ref_known(v___x_2969_, 1);
v___x_2970_ = l_Lean_indirectModUseExt;
v___x_2971_ = lean_box(1);
v___x_2972_ = lean_box(0);
lean_inc_ref(v_env_2942_);
v___x_2973_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2937_, v___x_2970_, v_env_2942_, v___x_2971_, v___x_2972_);
v___x_2974_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__45___redArg(v___x_2973_, v_declName_2932_);
lean_dec(v___x_2973_);
if (lean_obj_tag(v___x_2974_) == 0)
{
lean_object* v___x_2975_; 
v___x_2975_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33___closed__1));
v___y_2944_ = v___x_2975_;
goto v___jp_2943_;
}
else
{
lean_object* v_val_2976_; 
v_val_2976_ = lean_ctor_get(v___x_2974_, 0);
lean_inc(v_val_2976_);
lean_dec_ref_known(v___x_2974_, 1);
v___y_2944_ = v_val_2976_;
goto v___jp_2943_;
}
}
else
{
lean_dec_ref(v_env_2942_);
lean_dec(v_declName_2932_);
return v___x_2969_;
}
}
}
}
v___jp_2939_:
{
lean_object* v___x_2940_; lean_object* v___x_2941_; 
v___x_2940_ = lean_box(0);
v___x_2941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2941_, 0, v___x_2940_);
return v___x_2941_;
}
v___jp_2943_:
{
lean_object* v___x_2945_; size_t v_sz_2946_; size_t v___x_2947_; lean_object* v___x_2948_; 
v___x_2945_ = lean_box(0);
v_sz_2946_ = lean_array_size(v___y_2944_);
v___x_2947_ = ((size_t)0ULL);
v___x_2948_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44(v_env_2942_, v_declName_2932_, v___y_2944_, v_sz_2946_, v___x_2947_, v___x_2945_, v___y_2934_, v___y_2935_);
lean_dec_ref(v___y_2944_);
lean_dec_ref(v_env_2942_);
if (lean_obj_tag(v___x_2948_) == 0)
{
lean_object* v___x_2950_; uint8_t v_isShared_2951_; uint8_t v_isSharedCheck_2955_; 
v_isSharedCheck_2955_ = !lean_is_exclusive(v___x_2948_);
if (v_isSharedCheck_2955_ == 0)
{
lean_object* v_unused_2956_; 
v_unused_2956_ = lean_ctor_get(v___x_2948_, 0);
lean_dec(v_unused_2956_);
v___x_2950_ = v___x_2948_;
v_isShared_2951_ = v_isSharedCheck_2955_;
goto v_resetjp_2949_;
}
else
{
lean_dec(v___x_2948_);
v___x_2950_ = lean_box(0);
v_isShared_2951_ = v_isSharedCheck_2955_;
goto v_resetjp_2949_;
}
v_resetjp_2949_:
{
lean_object* v___x_2953_; 
if (v_isShared_2951_ == 0)
{
lean_ctor_set(v___x_2950_, 0, v___x_2945_);
v___x_2953_ = v___x_2950_;
goto v_reusejp_2952_;
}
else
{
lean_object* v_reuseFailAlloc_2954_; 
v_reuseFailAlloc_2954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2954_, 0, v___x_2945_);
v___x_2953_ = v_reuseFailAlloc_2954_;
goto v_reusejp_2952_;
}
v_reusejp_2952_:
{
return v___x_2953_;
}
}
}
else
{
return v___x_2948_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33___boxed(lean_object* v_declName_2980_, lean_object* v_isMeta_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_){
_start:
{
uint8_t v_isMeta_boxed_2985_; lean_object* v_res_2986_; 
v_isMeta_boxed_2985_ = lean_unbox(v_isMeta_2981_);
v_res_2986_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33(v_declName_2980_, v_isMeta_boxed_2985_, v___y_2982_, v___y_2983_);
lean_dec(v___y_2983_);
lean_dec_ref(v___y_2982_);
return v_res_2986_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37___redArg(lean_object* v_x_2987_, lean_object* v___y_2988_){
_start:
{
if (lean_obj_tag(v_x_2987_) == 0)
{
lean_object* v_a_2989_; lean_object* v___x_2990_; 
v_a_2989_ = lean_ctor_get(v_x_2987_, 0);
lean_inc(v_a_2989_);
v___x_2990_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2990_, 0, v_a_2989_);
lean_ctor_set(v___x_2990_, 1, v___y_2988_);
return v___x_2990_;
}
else
{
lean_object* v_a_2991_; lean_object* v___x_2992_; 
v_a_2991_ = lean_ctor_get(v_x_2987_, 0);
lean_inc(v_a_2991_);
v___x_2992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2992_, 0, v_a_2991_);
lean_ctor_set(v___x_2992_, 1, v___y_2988_);
return v___x_2992_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37___redArg___boxed(lean_object* v_x_2993_, lean_object* v___y_2994_){
_start:
{
lean_object* v_res_2995_; 
v_res_2995_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37___redArg(v_x_2993_, v___y_2994_);
lean_dec_ref(v_x_2993_);
return v_res_2995_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__1(lean_object* v_env_2996_, lean_object* v_stx_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_){
_start:
{
lean_object* v___x_3000_; 
v___x_3000_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_2996_, v_stx_2997_, v___y_2998_, v___y_2999_);
if (lean_obj_tag(v___x_3000_) == 0)
{
lean_object* v_a_3001_; 
v_a_3001_ = lean_ctor_get(v___x_3000_, 0);
lean_inc(v_a_3001_);
if (lean_obj_tag(v_a_3001_) == 0)
{
lean_object* v_a_3002_; lean_object* v___x_3004_; uint8_t v_isShared_3005_; uint8_t v_isSharedCheck_3010_; 
v_a_3002_ = lean_ctor_get(v___x_3000_, 1);
v_isSharedCheck_3010_ = !lean_is_exclusive(v___x_3000_);
if (v_isSharedCheck_3010_ == 0)
{
lean_object* v_unused_3011_; 
v_unused_3011_ = lean_ctor_get(v___x_3000_, 0);
lean_dec(v_unused_3011_);
v___x_3004_ = v___x_3000_;
v_isShared_3005_ = v_isSharedCheck_3010_;
goto v_resetjp_3003_;
}
else
{
lean_inc(v_a_3002_);
lean_dec(v___x_3000_);
v___x_3004_ = lean_box(0);
v_isShared_3005_ = v_isSharedCheck_3010_;
goto v_resetjp_3003_;
}
v_resetjp_3003_:
{
lean_object* v___x_3006_; lean_object* v___x_3008_; 
v___x_3006_ = lean_box(0);
if (v_isShared_3005_ == 0)
{
lean_ctor_set(v___x_3004_, 0, v___x_3006_);
v___x_3008_ = v___x_3004_;
goto v_reusejp_3007_;
}
else
{
lean_object* v_reuseFailAlloc_3009_; 
v_reuseFailAlloc_3009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3009_, 0, v___x_3006_);
lean_ctor_set(v_reuseFailAlloc_3009_, 1, v_a_3002_);
v___x_3008_ = v_reuseFailAlloc_3009_;
goto v_reusejp_3007_;
}
v_reusejp_3007_:
{
return v___x_3008_;
}
}
}
else
{
lean_object* v_val_3012_; lean_object* v___x_3014_; uint8_t v_isShared_3015_; uint8_t v_isSharedCheck_3040_; 
v_val_3012_ = lean_ctor_get(v_a_3001_, 0);
v_isSharedCheck_3040_ = !lean_is_exclusive(v_a_3001_);
if (v_isSharedCheck_3040_ == 0)
{
v___x_3014_ = v_a_3001_;
v_isShared_3015_ = v_isSharedCheck_3040_;
goto v_resetjp_3013_;
}
else
{
lean_inc(v_val_3012_);
lean_dec(v_a_3001_);
v___x_3014_ = lean_box(0);
v_isShared_3015_ = v_isSharedCheck_3040_;
goto v_resetjp_3013_;
}
v_resetjp_3013_:
{
lean_object* v_snd_3016_; 
v_snd_3016_ = lean_ctor_get(v_val_3012_, 1);
lean_inc(v_snd_3016_);
lean_dec(v_val_3012_);
if (lean_obj_tag(v_snd_3016_) == 0)
{
lean_object* v_a_3017_; lean_object* v_a_3018_; lean_object* v___x_3020_; uint8_t v_isShared_3021_; uint8_t v_isSharedCheck_3026_; 
lean_del_object(v___x_3014_);
v_a_3017_ = lean_ctor_get(v___x_3000_, 1);
lean_inc(v_a_3017_);
lean_dec_ref_known(v___x_3000_, 2);
v_a_3018_ = lean_ctor_get(v_snd_3016_, 0);
v_isSharedCheck_3026_ = !lean_is_exclusive(v_snd_3016_);
if (v_isSharedCheck_3026_ == 0)
{
v___x_3020_ = v_snd_3016_;
v_isShared_3021_ = v_isSharedCheck_3026_;
goto v_resetjp_3019_;
}
else
{
lean_inc(v_a_3018_);
lean_dec(v_snd_3016_);
v___x_3020_ = lean_box(0);
v_isShared_3021_ = v_isSharedCheck_3026_;
goto v_resetjp_3019_;
}
v_resetjp_3019_:
{
lean_object* v___x_3023_; 
if (v_isShared_3021_ == 0)
{
v___x_3023_ = v___x_3020_;
goto v_reusejp_3022_;
}
else
{
lean_object* v_reuseFailAlloc_3025_; 
v_reuseFailAlloc_3025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3025_, 0, v_a_3018_);
v___x_3023_ = v_reuseFailAlloc_3025_;
goto v_reusejp_3022_;
}
v_reusejp_3022_:
{
lean_object* v___x_3024_; 
v___x_3024_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37___redArg(v___x_3023_, v_a_3017_);
lean_dec_ref(v___x_3023_);
return v___x_3024_;
}
}
}
else
{
lean_object* v_a_3027_; lean_object* v_a_3028_; lean_object* v___x_3030_; uint8_t v_isShared_3031_; uint8_t v_isSharedCheck_3039_; 
v_a_3027_ = lean_ctor_get(v___x_3000_, 1);
lean_inc(v_a_3027_);
lean_dec_ref_known(v___x_3000_, 2);
v_a_3028_ = lean_ctor_get(v_snd_3016_, 0);
v_isSharedCheck_3039_ = !lean_is_exclusive(v_snd_3016_);
if (v_isSharedCheck_3039_ == 0)
{
v___x_3030_ = v_snd_3016_;
v_isShared_3031_ = v_isSharedCheck_3039_;
goto v_resetjp_3029_;
}
else
{
lean_inc(v_a_3028_);
lean_dec(v_snd_3016_);
v___x_3030_ = lean_box(0);
v_isShared_3031_ = v_isSharedCheck_3039_;
goto v_resetjp_3029_;
}
v_resetjp_3029_:
{
lean_object* v___x_3033_; 
if (v_isShared_3015_ == 0)
{
lean_ctor_set(v___x_3014_, 0, v_a_3028_);
v___x_3033_ = v___x_3014_;
goto v_reusejp_3032_;
}
else
{
lean_object* v_reuseFailAlloc_3038_; 
v_reuseFailAlloc_3038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3038_, 0, v_a_3028_);
v___x_3033_ = v_reuseFailAlloc_3038_;
goto v_reusejp_3032_;
}
v_reusejp_3032_:
{
lean_object* v___x_3035_; 
if (v_isShared_3031_ == 0)
{
lean_ctor_set(v___x_3030_, 0, v___x_3033_);
v___x_3035_ = v___x_3030_;
goto v_reusejp_3034_;
}
else
{
lean_object* v_reuseFailAlloc_3037_; 
v_reuseFailAlloc_3037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3037_, 0, v___x_3033_);
v___x_3035_ = v_reuseFailAlloc_3037_;
goto v_reusejp_3034_;
}
v_reusejp_3034_:
{
lean_object* v___x_3036_; 
v___x_3036_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37___redArg(v___x_3035_, v_a_3027_);
lean_dec_ref(v___x_3035_);
return v___x_3036_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3041_; lean_object* v_a_3042_; lean_object* v___x_3044_; uint8_t v_isShared_3045_; uint8_t v_isSharedCheck_3049_; 
v_a_3041_ = lean_ctor_get(v___x_3000_, 0);
v_a_3042_ = lean_ctor_get(v___x_3000_, 1);
v_isSharedCheck_3049_ = !lean_is_exclusive(v___x_3000_);
if (v_isSharedCheck_3049_ == 0)
{
v___x_3044_ = v___x_3000_;
v_isShared_3045_ = v_isSharedCheck_3049_;
goto v_resetjp_3043_;
}
else
{
lean_inc(v_a_3042_);
lean_inc(v_a_3041_);
lean_dec(v___x_3000_);
v___x_3044_ = lean_box(0);
v_isShared_3045_ = v_isSharedCheck_3049_;
goto v_resetjp_3043_;
}
v_resetjp_3043_:
{
lean_object* v___x_3047_; 
if (v_isShared_3045_ == 0)
{
v___x_3047_ = v___x_3044_;
goto v_reusejp_3046_;
}
else
{
lean_object* v_reuseFailAlloc_3048_; 
v_reuseFailAlloc_3048_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3048_, 0, v_a_3041_);
lean_ctor_set(v_reuseFailAlloc_3048_, 1, v_a_3042_);
v___x_3047_ = v_reuseFailAlloc_3048_;
goto v_reusejp_3046_;
}
v_reusejp_3046_:
{
return v___x_3047_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__1___boxed(lean_object* v_env_3050_, lean_object* v_stx_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_){
_start:
{
lean_object* v_res_3054_; 
v_res_3054_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__1(v_env_3050_, v_stx_3051_, v___y_3052_, v___y_3053_);
lean_dec_ref(v___y_3052_);
return v_res_3054_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__39(lean_object* v_as_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_){
_start:
{
if (lean_obj_tag(v_as_3055_) == 0)
{
lean_object* v___x_3059_; lean_object* v___x_3060_; 
v___x_3059_ = lean_box(0);
v___x_3060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3060_, 0, v___x_3059_);
return v___x_3060_;
}
else
{
lean_object* v_head_3061_; lean_object* v_tail_3062_; lean_object* v_fst_3063_; lean_object* v_snd_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v_scopes_3069_; lean_object* v___x_3070_; lean_object* v_opts_3071_; uint8_t v_hasTrace_3072_; 
v_head_3061_ = lean_ctor_get(v_as_3055_, 0);
lean_inc(v_head_3061_);
v_tail_3062_ = lean_ctor_get(v_as_3055_, 1);
lean_inc(v_tail_3062_);
lean_dec_ref_known(v_as_3055_, 2);
v_fst_3063_ = lean_ctor_get(v_head_3061_, 0);
lean_inc(v_fst_3063_);
v_snd_3064_ = lean_ctor_get(v_head_3061_, 1);
lean_inc(v_snd_3064_);
lean_dec(v_head_3061_);
v___x_3065_ = l_Lean_inheritedTraceOptions;
v___x_3066_ = lean_st_ref_get(v___x_3065_);
v___x_3067_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3068_ = lean_st_ref_get(v___y_3057_);
v_scopes_3069_ = lean_ctor_get(v___x_3068_, 2);
lean_inc(v_scopes_3069_);
lean_dec(v___x_3068_);
v___x_3070_ = l_List_head_x21___redArg(v___x_3067_, v_scopes_3069_);
lean_dec(v_scopes_3069_);
v_opts_3071_ = lean_ctor_get(v___x_3070_, 1);
lean_inc_ref(v_opts_3071_);
lean_dec(v___x_3070_);
v_hasTrace_3072_ = lean_ctor_get_uint8(v_opts_3071_, sizeof(void*)*1);
if (v_hasTrace_3072_ == 0)
{
lean_dec_ref(v_opts_3071_);
lean_dec(v___x_3066_);
lean_dec(v_snd_3064_);
lean_dec(v_fst_3063_);
v_as_3055_ = v_tail_3062_;
goto _start;
}
else
{
lean_object* v___x_3074_; lean_object* v___x_3075_; uint8_t v___x_3076_; 
v___x_3074_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___closed__8));
lean_inc(v_fst_3063_);
v___x_3075_ = l_Lean_Name_append(v___x_3074_, v_fst_3063_);
v___x_3076_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_3066_, v_opts_3071_, v___x_3075_);
lean_dec(v___x_3075_);
lean_dec_ref(v_opts_3071_);
lean_dec(v___x_3066_);
if (v___x_3076_ == 0)
{
lean_dec(v_snd_3064_);
lean_dec(v_fst_3063_);
v_as_3055_ = v_tail_3062_;
goto _start;
}
else
{
lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; 
v___x_3078_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3078_, 0, v_snd_3064_);
v___x_3079_ = l_Lean_MessageData_ofFormat(v___x_3078_);
v___x_3080_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36(v_fst_3063_, v___x_3079_, v___y_3056_, v___y_3057_);
if (lean_obj_tag(v___x_3080_) == 0)
{
lean_dec_ref_known(v___x_3080_, 1);
v_as_3055_ = v_tail_3062_;
goto _start;
}
else
{
lean_dec(v_tail_3062_);
return v___x_3080_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__39___boxed(lean_object* v_as_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_){
_start:
{
lean_object* v_res_3086_; 
v_res_3086_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__39(v_as_3082_, v___y_3083_, v___y_3084_);
lean_dec(v___y_3084_);
lean_dec_ref(v___y_3083_);
return v_res_3086_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__41___redArg___closed__0(void){
_start:
{
lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; 
v___x_3087_ = lean_box(0);
v___x_3088_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_3089_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3089_, 0, v___x_3088_);
lean_ctor_set(v___x_3089_, 1, v___x_3087_);
return v___x_3089_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__41___redArg(){
_start:
{
lean_object* v___x_3091_; lean_object* v___x_3092_; 
v___x_3091_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__41___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__41___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__41___redArg___closed__0);
v___x_3092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3092_, 0, v___x_3091_);
return v___x_3092_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__41___redArg___boxed(lean_object* v___y_3093_){
_start:
{
lean_object* v_res_3094_; 
v_res_3094_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__41___redArg();
return v_res_3094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__2(lean_object* v_currNamespace_3095_, lean_object* v___y_3096_, lean_object* v___y_3097_){
_start:
{
lean_object* v___x_3098_; 
v___x_3098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3098_, 0, v_currNamespace_3095_);
lean_ctor_set(v___x_3098_, 1, v___y_3097_);
return v___x_3098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__2___boxed(lean_object* v_currNamespace_3099_, lean_object* v___y_3100_, lean_object* v___y_3101_){
_start:
{
lean_object* v_res_3102_; 
v_res_3102_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__2(v_currNamespace_3099_, v___y_3100_, v___y_3101_);
lean_dec_ref(v___y_3100_);
return v_res_3102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__4(lean_object* v_env_3103_, lean_object* v_opts_3104_, lean_object* v_currNamespace_3105_, lean_object* v_openDecls_3106_, lean_object* v_n_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_){
_start:
{
lean_object* v___x_3110_; lean_object* v___x_3111_; 
v___x_3110_ = l_Lean_ResolveName_resolveGlobalName(v_env_3103_, v_opts_3104_, v_currNamespace_3105_, v_openDecls_3106_, v_n_3107_);
v___x_3111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3111_, 0, v___x_3110_);
lean_ctor_set(v___x_3111_, 1, v___y_3109_);
return v___x_3111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__4___boxed(lean_object* v_env_3112_, lean_object* v_opts_3113_, lean_object* v_currNamespace_3114_, lean_object* v_openDecls_3115_, lean_object* v_n_3116_, lean_object* v___y_3117_, lean_object* v___y_3118_){
_start:
{
lean_object* v_res_3119_; 
v_res_3119_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__4(v_env_3112_, v_opts_3113_, v_currNamespace_3114_, v_openDecls_3115_, v_n_3116_, v___y_3117_, v___y_3118_);
lean_dec_ref(v___y_3117_);
lean_dec_ref(v_opts_3113_);
return v_res_3119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__0(lean_object* v_env_3120_, lean_object* v_declName_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_){
_start:
{
uint8_t v___x_3124_; lean_object* v_env_3125_; lean_object* v___x_3126_; uint8_t v___x_3127_; uint8_t v___x_3128_; 
v___x_3124_ = 0;
v_env_3125_ = l_Lean_Environment_setExporting(v_env_3120_, v___x_3124_);
lean_inc(v_declName_3121_);
v___x_3126_ = l_Lean_mkPrivateName(v_env_3125_, v_declName_3121_);
v___x_3127_ = 1;
lean_inc_ref(v_env_3125_);
v___x_3128_ = l_Lean_Environment_contains(v_env_3125_, v___x_3126_, v___x_3127_);
if (v___x_3128_ == 0)
{
lean_object* v___x_3129_; uint8_t v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; 
v___x_3129_ = l_Lean_privateToUserName(v_declName_3121_);
v___x_3130_ = l_Lean_Environment_contains(v_env_3125_, v___x_3129_, v___x_3127_);
v___x_3131_ = lean_box(v___x_3130_);
v___x_3132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3132_, 0, v___x_3131_);
lean_ctor_set(v___x_3132_, 1, v___y_3123_);
return v___x_3132_;
}
else
{
lean_object* v___x_3133_; lean_object* v___x_3134_; 
lean_dec_ref(v_env_3125_);
lean_dec(v_declName_3121_);
v___x_3133_ = lean_box(v___x_3128_);
v___x_3134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3134_, 0, v___x_3133_);
lean_ctor_set(v___x_3134_, 1, v___y_3123_);
return v___x_3134_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__0___boxed(lean_object* v_env_3135_, lean_object* v_declName_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_){
_start:
{
lean_object* v_res_3139_; 
v_res_3139_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__0(v_env_3135_, v_declName_3136_, v___y_3137_, v___y_3138_);
lean_dec_ref(v___y_3137_);
return v_res_3139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__3(lean_object* v_env_3140_, lean_object* v_currNamespace_3141_, lean_object* v_openDecls_3142_, lean_object* v_n_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_){
_start:
{
lean_object* v___x_3146_; lean_object* v___x_3147_; 
v___x_3146_ = l_Lean_ResolveName_resolveNamespace(v_env_3140_, v_currNamespace_3141_, v_openDecls_3142_, v_n_3143_);
v___x_3147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3147_, 0, v___x_3146_);
lean_ctor_set(v___x_3147_, 1, v___y_3145_);
return v___x_3147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__3___boxed(lean_object* v_env_3148_, lean_object* v_currNamespace_3149_, lean_object* v_openDecls_3150_, lean_object* v_n_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_){
_start:
{
lean_object* v_res_3154_; 
v_res_3154_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__3(v_env_3148_, v_currNamespace_3149_, v_openDecls_3150_, v_n_3151_, v___y_3152_, v___y_3153_);
lean_dec_ref(v___y_3152_);
return v_res_3154_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38___redArg(lean_object* v_as_x27_3155_, lean_object* v_b_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_){
_start:
{
if (lean_obj_tag(v_as_x27_3155_) == 0)
{
lean_object* v___x_3160_; 
v___x_3160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3160_, 0, v_b_3156_);
return v___x_3160_;
}
else
{
lean_object* v_head_3161_; lean_object* v_tail_3162_; lean_object* v___x_3163_; uint8_t v___x_3164_; lean_object* v___x_3165_; 
v_head_3161_ = lean_ctor_get(v_as_x27_3155_, 0);
v_tail_3162_ = lean_ctor_get(v_as_x27_3155_, 1);
v___x_3163_ = lean_box(0);
v___x_3164_ = 1;
lean_inc(v_head_3161_);
v___x_3165_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33(v_head_3161_, v___x_3164_, v___y_3157_, v___y_3158_);
if (lean_obj_tag(v___x_3165_) == 0)
{
lean_dec_ref_known(v___x_3165_, 1);
v_as_x27_3155_ = v_tail_3162_;
v_b_3156_ = v___x_3163_;
goto _start;
}
else
{
return v___x_3165_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38___redArg___boxed(lean_object* v_as_x27_3167_, lean_object* v_b_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_){
_start:
{
lean_object* v_res_3172_; 
v_res_3172_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38___redArg(v_as_x27_3167_, v_b_3168_, v___y_3169_, v___y_3170_);
lean_dec(v___y_3170_);
lean_dec_ref(v___y_3169_);
lean_dec(v_as_x27_3167_);
return v_res_3172_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__3(void){
_start:
{
lean_object* v___x_3178_; lean_object* v___x_3179_; 
v___x_3178_ = l_Lean_maxRecDepthErrorMessage;
v___x_3179_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3179_, 0, v___x_3178_);
return v___x_3179_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__4(void){
_start:
{
lean_object* v___x_3180_; lean_object* v___x_3181_; 
v___x_3180_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__3);
v___x_3181_ = l_Lean_MessageData_ofFormat(v___x_3180_);
return v___x_3181_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__5(void){
_start:
{
lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; 
v___x_3182_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__4);
v___x_3183_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__2));
v___x_3184_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3184_, 0, v___x_3183_);
lean_ctor_set(v___x_3184_, 1, v___x_3182_);
return v___x_3184_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg(lean_object* v_ref_3185_){
_start:
{
lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; 
v___x_3187_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__5);
v___x_3188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3188_, 0, v_ref_3185_);
lean_ctor_set(v___x_3188_, 1, v___x_3187_);
v___x_3189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3189_, 0, v___x_3188_);
return v___x_3189_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___boxed(lean_object* v_ref_3190_, lean_object* v___y_3191_){
_start:
{
lean_object* v_res_3192_; 
v_res_3192_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg(v_ref_3190_);
return v_res_3192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg(lean_object* v_x_3194_, lean_object* v___y_3195_, lean_object* v___y_3196_){
_start:
{
lean_object* v___x_3198_; lean_object* v_env_3199_; lean_object* v___f_3200_; lean_object* v___f_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v_scopes_3204_; lean_object* v___x_3205_; lean_object* v_opts_3206_; lean_object* v___x_3207_; 
v___x_3198_ = lean_st_ref_get(v___y_3196_);
v_env_3199_ = lean_ctor_get(v___x_3198_, 0);
lean_inc_ref_n(v_env_3199_, 3);
lean_dec(v___x_3198_);
v___f_3200_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_3200_, 0, v_env_3199_);
v___f_3201_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_3201_, 0, v_env_3199_);
v___x_3202_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3203_ = lean_st_ref_get(v___y_3196_);
v_scopes_3204_ = lean_ctor_get(v___x_3203_, 2);
lean_inc(v_scopes_3204_);
lean_dec(v___x_3203_);
v___x_3205_ = l_List_head_x21___redArg(v___x_3202_, v_scopes_3204_);
lean_dec(v_scopes_3204_);
v_opts_3206_ = lean_ctor_get(v___x_3205_, 1);
lean_inc_ref(v_opts_3206_);
lean_dec(v___x_3205_);
v___x_3207_ = l_Lean_Elab_Command_getScope___redArg(v___y_3196_);
if (lean_obj_tag(v___x_3207_) == 0)
{
lean_object* v_a_3208_; lean_object* v_currNamespace_3209_; lean_object* v___f_3210_; lean_object* v___x_3211_; 
v_a_3208_ = lean_ctor_get(v___x_3207_, 0);
lean_inc(v_a_3208_);
lean_dec_ref_known(v___x_3207_, 1);
v_currNamespace_3209_ = lean_ctor_get(v_a_3208_, 2);
lean_inc_n(v_currNamespace_3209_, 2);
lean_dec(v_a_3208_);
v___f_3210_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3210_, 0, v_currNamespace_3209_);
v___x_3211_ = l_Lean_Elab_Command_getScope___redArg(v___y_3196_);
if (lean_obj_tag(v___x_3211_) == 0)
{
lean_object* v_a_3212_; lean_object* v_openDecls_3213_; lean_object* v___f_3214_; lean_object* v___f_3215_; lean_object* v_methods_3216_; lean_object* v___x_3217_; 
v_a_3212_ = lean_ctor_get(v___x_3211_, 0);
lean_inc(v_a_3212_);
lean_dec_ref_known(v___x_3211_, 1);
v_openDecls_3213_ = lean_ctor_get(v_a_3212_, 3);
lean_inc_n(v_openDecls_3213_, 2);
lean_dec(v_a_3212_);
lean_inc(v_currNamespace_3209_);
lean_inc_ref(v_env_3199_);
v___f_3214_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__3___boxed), 6, 3);
lean_closure_set(v___f_3214_, 0, v_env_3199_);
lean_closure_set(v___f_3214_, 1, v_currNamespace_3209_);
lean_closure_set(v___f_3214_, 2, v_openDecls_3213_);
v___f_3215_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__4___boxed), 7, 4);
lean_closure_set(v___f_3215_, 0, v_env_3199_);
lean_closure_set(v___f_3215_, 1, v_opts_3206_);
lean_closure_set(v___f_3215_, 2, v_currNamespace_3209_);
lean_closure_set(v___f_3215_, 3, v_openDecls_3213_);
v_methods_3216_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_methods_3216_, 0, v___f_3201_);
lean_ctor_set(v_methods_3216_, 1, v___f_3210_);
lean_ctor_set(v_methods_3216_, 2, v___f_3200_);
lean_ctor_set(v_methods_3216_, 3, v___f_3214_);
lean_ctor_set(v_methods_3216_, 4, v___f_3215_);
v___x_3217_ = l_Lean_Elab_Command_getRef___redArg(v___y_3195_);
if (lean_obj_tag(v___x_3217_) == 0)
{
lean_object* v_a_3218_; lean_object* v___x_3219_; 
v_a_3218_ = lean_ctor_get(v___x_3217_, 0);
lean_inc(v_a_3218_);
lean_dec_ref_known(v___x_3217_, 1);
v___x_3219_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_3195_);
if (lean_obj_tag(v___x_3219_) == 0)
{
lean_object* v_a_3220_; lean_object* v_currRecDepth_3221_; lean_object* v_quotContext_x3f_3222_; lean_object* v_a_3224_; 
v_a_3220_ = lean_ctor_get(v___x_3219_, 0);
lean_inc(v_a_3220_);
lean_dec_ref_known(v___x_3219_, 1);
v_currRecDepth_3221_ = lean_ctor_get(v___y_3195_, 2);
v_quotContext_x3f_3222_ = lean_ctor_get(v___y_3195_, 5);
if (lean_obj_tag(v_quotContext_x3f_3222_) == 0)
{
lean_object* v___x_3298_; lean_object* v_a_3299_; 
v___x_3298_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v___y_3196_);
v_a_3299_ = lean_ctor_get(v___x_3298_, 0);
lean_inc(v_a_3299_);
lean_dec_ref(v___x_3298_);
v_a_3224_ = v_a_3299_;
goto v___jp_3223_;
}
else
{
lean_object* v_val_3300_; 
v_val_3300_ = lean_ctor_get(v_quotContext_x3f_3222_, 0);
lean_inc(v_val_3300_);
v_a_3224_ = v_val_3300_;
goto v___jp_3223_;
}
v___jp_3223_:
{
lean_object* v___x_3225_; lean_object* v_maxRecDepth_3226_; lean_object* v___x_3227_; lean_object* v_nextMacroScope_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; 
v___x_3225_ = lean_st_ref_get(v___y_3196_);
v_maxRecDepth_3226_ = lean_ctor_get(v___x_3225_, 5);
lean_inc(v_maxRecDepth_3226_);
lean_dec(v___x_3225_);
v___x_3227_ = lean_st_ref_get(v___y_3196_);
v_nextMacroScope_3228_ = lean_ctor_get(v___x_3227_, 4);
lean_inc(v_nextMacroScope_3228_);
lean_dec(v___x_3227_);
lean_inc(v_currRecDepth_3221_);
v___x_3229_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3229_, 0, v_methods_3216_);
lean_ctor_set(v___x_3229_, 1, v_a_3224_);
lean_ctor_set(v___x_3229_, 2, v_a_3220_);
lean_ctor_set(v___x_3229_, 3, v_currRecDepth_3221_);
lean_ctor_set(v___x_3229_, 4, v_maxRecDepth_3226_);
lean_ctor_set(v___x_3229_, 5, v_a_3218_);
v___x_3230_ = lean_box(0);
v___x_3231_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3231_, 0, v_nextMacroScope_3228_);
lean_ctor_set(v___x_3231_, 1, v___x_3230_);
lean_ctor_set(v___x_3231_, 2, v___x_3230_);
v___x_3232_ = lean_apply_2(v_x_3194_, v___x_3229_, v___x_3231_);
if (lean_obj_tag(v___x_3232_) == 0)
{
lean_object* v_a_3233_; lean_object* v_a_3234_; lean_object* v_macroScope_3235_; lean_object* v_traceMsgs_3236_; lean_object* v_expandedMacroDecls_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; 
v_a_3233_ = lean_ctor_get(v___x_3232_, 1);
lean_inc(v_a_3233_);
v_a_3234_ = lean_ctor_get(v___x_3232_, 0);
lean_inc(v_a_3234_);
lean_dec_ref_known(v___x_3232_, 2);
v_macroScope_3235_ = lean_ctor_get(v_a_3233_, 0);
lean_inc(v_macroScope_3235_);
v_traceMsgs_3236_ = lean_ctor_get(v_a_3233_, 1);
lean_inc(v_traceMsgs_3236_);
v_expandedMacroDecls_3237_ = lean_ctor_get(v_a_3233_, 2);
lean_inc(v_expandedMacroDecls_3237_);
lean_dec(v_a_3233_);
v___x_3238_ = lean_box(0);
v___x_3239_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38___redArg(v_expandedMacroDecls_3237_, v___x_3238_, v___y_3195_, v___y_3196_);
lean_dec(v_expandedMacroDecls_3237_);
if (lean_obj_tag(v___x_3239_) == 0)
{
lean_object* v___x_3240_; lean_object* v_env_3241_; lean_object* v_messages_3242_; lean_object* v_scopes_3243_; lean_object* v_usedQuotCtxts_3244_; lean_object* v_maxRecDepth_3245_; lean_object* v_ngen_3246_; lean_object* v_auxDeclNGen_3247_; lean_object* v_infoState_3248_; lean_object* v_traceState_3249_; lean_object* v_snapshotTasks_3250_; lean_object* v_prevLinterStates_3251_; lean_object* v_codeQualityEntryTasks_3252_; lean_object* v___x_3254_; uint8_t v_isShared_3255_; uint8_t v_isSharedCheck_3278_; 
lean_dec_ref_known(v___x_3239_, 1);
v___x_3240_ = lean_st_ref_take(v___y_3196_);
v_env_3241_ = lean_ctor_get(v___x_3240_, 0);
v_messages_3242_ = lean_ctor_get(v___x_3240_, 1);
v_scopes_3243_ = lean_ctor_get(v___x_3240_, 2);
v_usedQuotCtxts_3244_ = lean_ctor_get(v___x_3240_, 3);
v_maxRecDepth_3245_ = lean_ctor_get(v___x_3240_, 5);
v_ngen_3246_ = lean_ctor_get(v___x_3240_, 6);
v_auxDeclNGen_3247_ = lean_ctor_get(v___x_3240_, 7);
v_infoState_3248_ = lean_ctor_get(v___x_3240_, 8);
v_traceState_3249_ = lean_ctor_get(v___x_3240_, 9);
v_snapshotTasks_3250_ = lean_ctor_get(v___x_3240_, 10);
v_prevLinterStates_3251_ = lean_ctor_get(v___x_3240_, 11);
v_codeQualityEntryTasks_3252_ = lean_ctor_get(v___x_3240_, 12);
v_isSharedCheck_3278_ = !lean_is_exclusive(v___x_3240_);
if (v_isSharedCheck_3278_ == 0)
{
lean_object* v_unused_3279_; 
v_unused_3279_ = lean_ctor_get(v___x_3240_, 4);
lean_dec(v_unused_3279_);
v___x_3254_ = v___x_3240_;
v_isShared_3255_ = v_isSharedCheck_3278_;
goto v_resetjp_3253_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3252_);
lean_inc(v_prevLinterStates_3251_);
lean_inc(v_snapshotTasks_3250_);
lean_inc(v_traceState_3249_);
lean_inc(v_infoState_3248_);
lean_inc(v_auxDeclNGen_3247_);
lean_inc(v_ngen_3246_);
lean_inc(v_maxRecDepth_3245_);
lean_inc(v_usedQuotCtxts_3244_);
lean_inc(v_scopes_3243_);
lean_inc(v_messages_3242_);
lean_inc(v_env_3241_);
lean_dec(v___x_3240_);
v___x_3254_ = lean_box(0);
v_isShared_3255_ = v_isSharedCheck_3278_;
goto v_resetjp_3253_;
}
v_resetjp_3253_:
{
lean_object* v___x_3257_; 
if (v_isShared_3255_ == 0)
{
lean_ctor_set(v___x_3254_, 4, v_macroScope_3235_);
v___x_3257_ = v___x_3254_;
goto v_reusejp_3256_;
}
else
{
lean_object* v_reuseFailAlloc_3277_; 
v_reuseFailAlloc_3277_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3277_, 0, v_env_3241_);
lean_ctor_set(v_reuseFailAlloc_3277_, 1, v_messages_3242_);
lean_ctor_set(v_reuseFailAlloc_3277_, 2, v_scopes_3243_);
lean_ctor_set(v_reuseFailAlloc_3277_, 3, v_usedQuotCtxts_3244_);
lean_ctor_set(v_reuseFailAlloc_3277_, 4, v_macroScope_3235_);
lean_ctor_set(v_reuseFailAlloc_3277_, 5, v_maxRecDepth_3245_);
lean_ctor_set(v_reuseFailAlloc_3277_, 6, v_ngen_3246_);
lean_ctor_set(v_reuseFailAlloc_3277_, 7, v_auxDeclNGen_3247_);
lean_ctor_set(v_reuseFailAlloc_3277_, 8, v_infoState_3248_);
lean_ctor_set(v_reuseFailAlloc_3277_, 9, v_traceState_3249_);
lean_ctor_set(v_reuseFailAlloc_3277_, 10, v_snapshotTasks_3250_);
lean_ctor_set(v_reuseFailAlloc_3277_, 11, v_prevLinterStates_3251_);
lean_ctor_set(v_reuseFailAlloc_3277_, 12, v_codeQualityEntryTasks_3252_);
v___x_3257_ = v_reuseFailAlloc_3277_;
goto v_reusejp_3256_;
}
v_reusejp_3256_:
{
lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; 
v___x_3258_ = lean_st_ref_put(v___y_3196_, v___x_3257_);
v___x_3259_ = l_List_reverse___redArg(v_traceMsgs_3236_);
v___x_3260_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__39(v___x_3259_, v___y_3195_, v___y_3196_);
if (lean_obj_tag(v___x_3260_) == 0)
{
lean_object* v___x_3262_; uint8_t v_isShared_3263_; uint8_t v_isSharedCheck_3267_; 
v_isSharedCheck_3267_ = !lean_is_exclusive(v___x_3260_);
if (v_isSharedCheck_3267_ == 0)
{
lean_object* v_unused_3268_; 
v_unused_3268_ = lean_ctor_get(v___x_3260_, 0);
lean_dec(v_unused_3268_);
v___x_3262_ = v___x_3260_;
v_isShared_3263_ = v_isSharedCheck_3267_;
goto v_resetjp_3261_;
}
else
{
lean_dec(v___x_3260_);
v___x_3262_ = lean_box(0);
v_isShared_3263_ = v_isSharedCheck_3267_;
goto v_resetjp_3261_;
}
v_resetjp_3261_:
{
lean_object* v___x_3265_; 
if (v_isShared_3263_ == 0)
{
lean_ctor_set(v___x_3262_, 0, v_a_3234_);
v___x_3265_ = v___x_3262_;
goto v_reusejp_3264_;
}
else
{
lean_object* v_reuseFailAlloc_3266_; 
v_reuseFailAlloc_3266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3266_, 0, v_a_3234_);
v___x_3265_ = v_reuseFailAlloc_3266_;
goto v_reusejp_3264_;
}
v_reusejp_3264_:
{
return v___x_3265_;
}
}
}
else
{
lean_object* v_a_3269_; lean_object* v___x_3271_; uint8_t v_isShared_3272_; uint8_t v_isSharedCheck_3276_; 
lean_dec(v_a_3234_);
v_a_3269_ = lean_ctor_get(v___x_3260_, 0);
v_isSharedCheck_3276_ = !lean_is_exclusive(v___x_3260_);
if (v_isSharedCheck_3276_ == 0)
{
v___x_3271_ = v___x_3260_;
v_isShared_3272_ = v_isSharedCheck_3276_;
goto v_resetjp_3270_;
}
else
{
lean_inc(v_a_3269_);
lean_dec(v___x_3260_);
v___x_3271_ = lean_box(0);
v_isShared_3272_ = v_isSharedCheck_3276_;
goto v_resetjp_3270_;
}
v_resetjp_3270_:
{
lean_object* v___x_3274_; 
if (v_isShared_3272_ == 0)
{
v___x_3274_ = v___x_3271_;
goto v_reusejp_3273_;
}
else
{
lean_object* v_reuseFailAlloc_3275_; 
v_reuseFailAlloc_3275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3275_, 0, v_a_3269_);
v___x_3274_ = v_reuseFailAlloc_3275_;
goto v_reusejp_3273_;
}
v_reusejp_3273_:
{
return v___x_3274_;
}
}
}
}
}
}
else
{
lean_object* v_a_3280_; lean_object* v___x_3282_; uint8_t v_isShared_3283_; uint8_t v_isSharedCheck_3287_; 
lean_dec(v_traceMsgs_3236_);
lean_dec(v_macroScope_3235_);
lean_dec(v_a_3234_);
v_a_3280_ = lean_ctor_get(v___x_3239_, 0);
v_isSharedCheck_3287_ = !lean_is_exclusive(v___x_3239_);
if (v_isSharedCheck_3287_ == 0)
{
v___x_3282_ = v___x_3239_;
v_isShared_3283_ = v_isSharedCheck_3287_;
goto v_resetjp_3281_;
}
else
{
lean_inc(v_a_3280_);
lean_dec(v___x_3239_);
v___x_3282_ = lean_box(0);
v_isShared_3283_ = v_isSharedCheck_3287_;
goto v_resetjp_3281_;
}
v_resetjp_3281_:
{
lean_object* v___x_3285_; 
if (v_isShared_3283_ == 0)
{
v___x_3285_ = v___x_3282_;
goto v_reusejp_3284_;
}
else
{
lean_object* v_reuseFailAlloc_3286_; 
v_reuseFailAlloc_3286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3286_, 0, v_a_3280_);
v___x_3285_ = v_reuseFailAlloc_3286_;
goto v_reusejp_3284_;
}
v_reusejp_3284_:
{
return v___x_3285_;
}
}
}
}
else
{
lean_object* v_a_3288_; 
v_a_3288_ = lean_ctor_get(v___x_3232_, 0);
lean_inc(v_a_3288_);
lean_dec_ref_known(v___x_3232_, 2);
if (lean_obj_tag(v_a_3288_) == 0)
{
lean_object* v_a_3289_; lean_object* v_a_3290_; lean_object* v___x_3291_; uint8_t v___x_3292_; 
v_a_3289_ = lean_ctor_get(v_a_3288_, 0);
lean_inc(v_a_3289_);
v_a_3290_ = lean_ctor_get(v_a_3288_, 1);
lean_inc_ref(v_a_3290_);
lean_dec_ref_known(v_a_3288_, 2);
v___x_3291_ = ((lean_object*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___closed__0));
v___x_3292_ = lean_string_dec_eq(v_a_3290_, v___x_3291_);
if (v___x_3292_ == 0)
{
lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; 
v___x_3293_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3293_, 0, v_a_3290_);
v___x_3294_ = l_Lean_MessageData_ofFormat(v___x_3293_);
v___x_3295_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___redArg(v_a_3289_, v___x_3294_, v___y_3195_, v___y_3196_);
lean_dec(v_a_3289_);
return v___x_3295_;
}
else
{
lean_object* v___x_3296_; 
lean_dec_ref(v_a_3290_);
v___x_3296_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg(v_a_3289_);
return v___x_3296_;
}
}
else
{
lean_object* v___x_3297_; 
v___x_3297_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__41___redArg();
return v___x_3297_;
}
}
}
}
else
{
lean_object* v_a_3301_; lean_object* v___x_3303_; uint8_t v_isShared_3304_; uint8_t v_isSharedCheck_3308_; 
lean_dec(v_a_3218_);
lean_dec_ref_known(v_methods_3216_, 5);
lean_dec_ref(v_x_3194_);
v_a_3301_ = lean_ctor_get(v___x_3219_, 0);
v_isSharedCheck_3308_ = !lean_is_exclusive(v___x_3219_);
if (v_isSharedCheck_3308_ == 0)
{
v___x_3303_ = v___x_3219_;
v_isShared_3304_ = v_isSharedCheck_3308_;
goto v_resetjp_3302_;
}
else
{
lean_inc(v_a_3301_);
lean_dec(v___x_3219_);
v___x_3303_ = lean_box(0);
v_isShared_3304_ = v_isSharedCheck_3308_;
goto v_resetjp_3302_;
}
v_resetjp_3302_:
{
lean_object* v___x_3306_; 
if (v_isShared_3304_ == 0)
{
v___x_3306_ = v___x_3303_;
goto v_reusejp_3305_;
}
else
{
lean_object* v_reuseFailAlloc_3307_; 
v_reuseFailAlloc_3307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3307_, 0, v_a_3301_);
v___x_3306_ = v_reuseFailAlloc_3307_;
goto v_reusejp_3305_;
}
v_reusejp_3305_:
{
return v___x_3306_;
}
}
}
}
else
{
lean_object* v_a_3309_; lean_object* v___x_3311_; uint8_t v_isShared_3312_; uint8_t v_isSharedCheck_3316_; 
lean_dec_ref_known(v_methods_3216_, 5);
lean_dec_ref(v_x_3194_);
v_a_3309_ = lean_ctor_get(v___x_3217_, 0);
v_isSharedCheck_3316_ = !lean_is_exclusive(v___x_3217_);
if (v_isSharedCheck_3316_ == 0)
{
v___x_3311_ = v___x_3217_;
v_isShared_3312_ = v_isSharedCheck_3316_;
goto v_resetjp_3310_;
}
else
{
lean_inc(v_a_3309_);
lean_dec(v___x_3217_);
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
lean_dec_ref(v___f_3210_);
lean_dec(v_currNamespace_3209_);
lean_dec_ref(v_opts_3206_);
lean_dec_ref(v___f_3201_);
lean_dec_ref(v___f_3200_);
lean_dec_ref(v_env_3199_);
lean_dec_ref(v_x_3194_);
v_a_3317_ = lean_ctor_get(v___x_3211_, 0);
v_isSharedCheck_3324_ = !lean_is_exclusive(v___x_3211_);
if (v_isSharedCheck_3324_ == 0)
{
v___x_3319_ = v___x_3211_;
v_isShared_3320_ = v_isSharedCheck_3324_;
goto v_resetjp_3318_;
}
else
{
lean_inc(v_a_3317_);
lean_dec(v___x_3211_);
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
lean_dec_ref(v_opts_3206_);
lean_dec_ref(v___f_3201_);
lean_dec_ref(v___f_3200_);
lean_dec_ref(v_env_3199_);
lean_dec_ref(v_x_3194_);
v_a_3325_ = lean_ctor_get(v___x_3207_, 0);
v_isSharedCheck_3332_ = !lean_is_exclusive(v___x_3207_);
if (v_isSharedCheck_3332_ == 0)
{
v___x_3327_ = v___x_3207_;
v_isShared_3328_ = v_isSharedCheck_3332_;
goto v_resetjp_3326_;
}
else
{
lean_inc(v_a_3325_);
lean_dec(v___x_3207_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___boxed(lean_object* v_x_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_){
_start:
{
lean_object* v_res_3337_; 
v_res_3337_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg(v_x_3333_, v___y_3334_, v___y_3335_);
lean_dec(v___y_3335_);
lean_dec_ref(v___y_3334_);
return v_res_3337_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3339_; lean_object* v___x_3340_; 
v___x_3339_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__0));
v___x_3340_ = l_Lean_stringToMessageData(v___x_3339_);
return v___x_3340_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__3(void){
_start:
{
lean_object* v___x_3342_; lean_object* v___x_3343_; 
v___x_3342_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__2));
v___x_3343_ = l_Lean_stringToMessageData(v___x_3342_);
return v___x_3343_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__5(void){
_start:
{
lean_object* v___x_3345_; lean_object* v___x_3346_; 
v___x_3345_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__4));
v___x_3346_ = l_Lean_stringToMessageData(v___x_3345_);
return v___x_3346_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__7(void){
_start:
{
lean_object* v___x_3348_; lean_object* v___x_3349_; 
v___x_3348_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__6));
v___x_3349_ = l_Lean_stringToMessageData(v___x_3348_);
return v___x_3349_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__9(void){
_start:
{
lean_object* v___x_3351_; lean_object* v___x_3352_; 
v___x_3351_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__8));
v___x_3352_ = l_Lean_stringToMessageData(v___x_3351_);
return v___x_3352_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__14(void){
_start:
{
lean_object* v___x_3361_; lean_object* v___x_3362_; 
v___x_3361_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__13));
v___x_3362_ = l_Lean_stringToMessageData(v___x_3361_);
return v___x_3362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1(lean_object* v___x_3363_, lean_object* v_attrInstance_3364_, lean_object* v___f_3365_, lean_object* v___x_3366_, lean_object* v___x_3367_, lean_object* v___x_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_){
_start:
{
lean_object* v___x_3372_; 
v___x_3372_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg(v___x_3363_, v___y_3369_, v___y_3370_);
if (lean_obj_tag(v___x_3372_) == 0)
{
lean_object* v_a_3373_; lean_object* v___x_3374_; lean_object* v_attr_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; 
v_a_3373_ = lean_ctor_get(v___x_3372_, 0);
lean_inc(v_a_3373_);
lean_dec_ref_known(v___x_3372_, 1);
v___x_3374_ = lean_unsigned_to_nat(1u);
v_attr_3375_ = l_Lean_Syntax_getArg(v_attrInstance_3364_, v___x_3374_);
v___x_3376_ = lean_alloc_closure((void*)(l_Lean_expandMacros), 4, 2);
lean_closure_set(v___x_3376_, 0, v_attr_3375_);
lean_closure_set(v___x_3376_, 1, v___f_3365_);
v___x_3377_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg(v___x_3376_, v___y_3369_, v___y_3370_);
if (lean_obj_tag(v___x_3377_) == 0)
{
lean_object* v_a_3378_; lean_object* v___x_3380_; uint8_t v_isShared_3381_; uint8_t v_isSharedCheck_3483_; 
v_a_3378_ = lean_ctor_get(v___x_3377_, 0);
v_isSharedCheck_3483_ = !lean_is_exclusive(v___x_3377_);
if (v_isSharedCheck_3483_ == 0)
{
v___x_3380_ = v___x_3377_;
v_isShared_3381_ = v_isSharedCheck_3483_;
goto v_resetjp_3379_;
}
else
{
lean_inc(v_a_3378_);
lean_dec(v___x_3377_);
v___x_3380_ = lean_box(0);
v_isShared_3381_ = v_isSharedCheck_3483_;
goto v_resetjp_3379_;
}
v_resetjp_3379_:
{
lean_object* v___y_3383_; uint8_t v___y_3390_; lean_object* v___y_3391_; lean_object* v___y_3392_; lean_object* v___y_3393_; lean_object* v___y_3394_; lean_object* v_attrName_3405_; lean_object* v___y_3406_; lean_object* v___y_3407_; lean_object* v___x_3464_; lean_object* v___x_3465_; uint8_t v___x_3466_; 
lean_inc(v_a_3378_);
v___x_3464_ = l_Lean_Syntax_getKind(v_a_3378_);
v___x_3465_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__12));
v___x_3466_ = lean_name_eq(v___x_3464_, v___x_3465_);
if (v___x_3466_ == 0)
{
if (lean_obj_tag(v___x_3464_) == 1)
{
lean_object* v_str_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; 
v_str_3467_ = lean_ctor_get(v___x_3464_, 1);
lean_inc_ref(v_str_3467_);
lean_dec_ref_known(v___x_3464_, 2);
v___x_3468_ = lean_box(0);
v___x_3469_ = l_Lean_Name_str___override(v___x_3468_, v_str_3467_);
v_attrName_3405_ = v___x_3469_;
v___y_3406_ = v___y_3369_;
v___y_3407_ = v___y_3370_;
goto v___jp_3404_;
}
else
{
lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v_a_3472_; lean_object* v___x_3474_; uint8_t v_isShared_3475_; uint8_t v_isSharedCheck_3479_; 
lean_dec(v___x_3464_);
lean_del_object(v___x_3380_);
lean_dec(v_a_3373_);
lean_dec(v___x_3366_);
v___x_3470_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__14, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__14_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__14);
v___x_3471_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___redArg(v_a_3378_, v___x_3470_, v___y_3369_, v___y_3370_);
lean_dec(v_a_3378_);
v_a_3472_ = lean_ctor_get(v___x_3471_, 0);
v_isSharedCheck_3479_ = !lean_is_exclusive(v___x_3471_);
if (v_isSharedCheck_3479_ == 0)
{
v___x_3474_ = v___x_3471_;
v_isShared_3475_ = v_isSharedCheck_3479_;
goto v_resetjp_3473_;
}
else
{
lean_inc(v_a_3472_);
lean_dec(v___x_3471_);
v___x_3474_ = lean_box(0);
v_isShared_3475_ = v_isSharedCheck_3479_;
goto v_resetjp_3473_;
}
v_resetjp_3473_:
{
lean_object* v___x_3477_; 
if (v_isShared_3475_ == 0)
{
v___x_3477_ = v___x_3474_;
goto v_reusejp_3476_;
}
else
{
lean_object* v_reuseFailAlloc_3478_; 
v_reuseFailAlloc_3478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3478_, 0, v_a_3472_);
v___x_3477_ = v_reuseFailAlloc_3478_;
goto v_reusejp_3476_;
}
v_reusejp_3476_:
{
return v___x_3477_;
}
}
}
}
else
{
lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; 
lean_dec(v___x_3464_);
v___x_3480_ = l_Lean_Syntax_getArg(v_a_3378_, v___x_3368_);
v___x_3481_ = l_Lean_Syntax_getId(v___x_3480_);
lean_dec(v___x_3480_);
v___x_3482_ = l_Lean_Name_eraseMacroScopes(v___x_3481_);
lean_dec(v___x_3481_);
v_attrName_3405_ = v___x_3482_;
v___y_3406_ = v___y_3369_;
v___y_3407_ = v___y_3370_;
goto v___jp_3404_;
}
v___jp_3382_:
{
lean_object* v___x_3384_; uint8_t v___x_3385_; lean_object* v___x_3387_; 
v___x_3384_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3384_, 0, v___y_3383_);
lean_ctor_set(v___x_3384_, 1, v_a_3378_);
v___x_3385_ = lean_unbox(v_a_3373_);
lean_dec(v_a_3373_);
lean_ctor_set_uint8(v___x_3384_, sizeof(void*)*2, v___x_3385_);
if (v_isShared_3381_ == 0)
{
lean_ctor_set(v___x_3380_, 0, v___x_3384_);
v___x_3387_ = v___x_3380_;
goto v_reusejp_3386_;
}
else
{
lean_object* v_reuseFailAlloc_3388_; 
v_reuseFailAlloc_3388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3388_, 0, v___x_3384_);
v___x_3387_ = v_reuseFailAlloc_3388_;
goto v_reusejp_3386_;
}
v_reusejp_3386_:
{
return v___x_3387_;
}
}
v___jp_3389_:
{
lean_object* v___x_3395_; 
v___x_3395_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33(v___y_3391_, v___y_3390_, v___y_3393_, v___y_3394_);
if (lean_obj_tag(v___x_3395_) == 0)
{
lean_dec_ref_known(v___x_3395_, 1);
v___y_3383_ = v___y_3392_;
goto v___jp_3382_;
}
else
{
lean_object* v_a_3396_; lean_object* v___x_3398_; uint8_t v_isShared_3399_; uint8_t v_isSharedCheck_3403_; 
lean_dec(v___y_3392_);
lean_del_object(v___x_3380_);
lean_dec(v_a_3378_);
lean_dec(v_a_3373_);
v_a_3396_ = lean_ctor_get(v___x_3395_, 0);
v_isSharedCheck_3403_ = !lean_is_exclusive(v___x_3395_);
if (v_isSharedCheck_3403_ == 0)
{
v___x_3398_ = v___x_3395_;
v_isShared_3399_ = v_isSharedCheck_3403_;
goto v_resetjp_3397_;
}
else
{
lean_inc(v_a_3396_);
lean_dec(v___x_3395_);
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
v___jp_3404_:
{
lean_object* v___x_3408_; lean_object* v_env_3409_; lean_object* v___x_3410_; 
v___x_3408_ = lean_st_ref_get(v___y_3407_);
v_env_3409_ = lean_ctor_get(v___x_3408_, 0);
lean_inc_ref(v_env_3409_);
lean_dec(v___x_3408_);
lean_inc(v_attrName_3405_);
v___x_3410_ = l_Lean_getAttributeImpl(v_env_3409_, v_attrName_3405_);
if (lean_obj_tag(v___x_3410_) == 1)
{
lean_object* v___x_3411_; lean_object* v_env_3412_; lean_object* v___x_3413_; 
lean_dec_ref_known(v___x_3410_, 1);
v___x_3411_ = lean_st_ref_get(v___y_3407_);
v_env_3412_ = lean_ctor_get(v___x_3411_, 0);
lean_inc_ref(v_env_3412_);
lean_dec(v___x_3411_);
lean_inc(v_attrName_3405_);
v___x_3413_ = l_Lean_getAttributeImpl(v_env_3412_, v_attrName_3405_);
if (lean_obj_tag(v___x_3413_) == 1)
{
lean_object* v_a_3414_; lean_object* v___x_3415_; lean_object* v_toAttributeImplCore_3416_; lean_object* v_env_3417_; lean_object* v_ref_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; 
v_a_3414_ = lean_ctor_get(v___x_3413_, 0);
lean_inc(v_a_3414_);
lean_dec_ref_known(v___x_3413_, 1);
v___x_3415_ = lean_st_ref_get(v___y_3407_);
v_toAttributeImplCore_3416_ = lean_ctor_get(v_a_3414_, 0);
lean_inc_ref(v_toAttributeImplCore_3416_);
lean_dec(v_a_3414_);
v_env_3417_ = lean_ctor_get(v___x_3415_, 0);
lean_inc_ref(v_env_3417_);
lean_dec(v___x_3415_);
v_ref_3418_ = lean_ctor_get(v_toAttributeImplCore_3416_, 0);
lean_inc_n(v_ref_3418_, 2);
lean_dec_ref(v_toAttributeImplCore_3416_);
v___x_3419_ = l_Lean_regularInitAttr;
v___x_3420_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v___x_3366_, v___x_3419_, v_env_3417_, v_ref_3418_);
if (lean_obj_tag(v___x_3420_) == 0)
{
lean_dec(v_ref_3418_);
v___y_3383_ = v_attrName_3405_;
goto v___jp_3382_;
}
else
{
uint8_t v___x_3421_; lean_object* v___x_3422_; lean_object* v_env_3423_; lean_object* v___x_3424_; 
lean_dec_ref_known(v___x_3420_, 1);
v___x_3421_ = 1;
v___x_3422_ = lean_st_ref_get(v___y_3407_);
v_env_3423_ = lean_ctor_get(v___x_3422_, 0);
lean_inc_ref(v_env_3423_);
lean_dec(v___x_3422_);
v___x_3424_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3423_, v_ref_3418_);
lean_dec_ref(v_env_3423_);
if (lean_obj_tag(v___x_3424_) == 1)
{
lean_object* v_val_3425_; lean_object* v___x_3426_; lean_object* v_env_3427_; lean_object* v___x_3428_; lean_object* v_modules_3429_; lean_object* v___x_3430_; uint8_t v___x_3431_; 
v_val_3425_ = lean_ctor_get(v___x_3424_, 0);
lean_inc(v_val_3425_);
lean_dec_ref_known(v___x_3424_, 1);
v___x_3426_ = lean_st_ref_get(v___y_3407_);
v_env_3427_ = lean_ctor_get(v___x_3426_, 0);
lean_inc_ref(v_env_3427_);
lean_dec(v___x_3426_);
v___x_3428_ = l_Lean_Environment_header(v_env_3427_);
lean_dec_ref(v_env_3427_);
v_modules_3429_ = lean_ctor_get(v___x_3428_, 3);
lean_inc_ref(v_modules_3429_);
lean_dec_ref(v___x_3428_);
v___x_3430_ = lean_array_get_size(v_modules_3429_);
v___x_3431_ = lean_nat_dec_lt(v_val_3425_, v___x_3430_);
if (v___x_3431_ == 0)
{
lean_dec_ref(v_modules_3429_);
lean_dec(v_val_3425_);
v___y_3390_ = v___x_3421_;
v___y_3391_ = v_ref_3418_;
v___y_3392_ = v_attrName_3405_;
v___y_3393_ = v___y_3406_;
v___y_3394_ = v___y_3407_;
goto v___jp_3389_;
}
else
{
lean_object* v___x_3432_; uint8_t v_hasData_3433_; 
v___x_3432_ = lean_array_fget_borrowed(v_modules_3429_, v_val_3425_);
v_hasData_3433_ = lean_ctor_get_uint8(v___x_3432_, sizeof(void*)*1 + 1);
if (v_hasData_3433_ == 0)
{
lean_object* v___x_3434_; lean_object* v_toImport_3435_; lean_object* v_module_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v_a_3450_; lean_object* v___x_3452_; uint8_t v_isShared_3453_; uint8_t v_isSharedCheck_3457_; 
lean_dec(v_ref_3418_);
lean_del_object(v___x_3380_);
lean_dec(v_a_3378_);
lean_dec(v_a_3373_);
v___x_3434_ = lean_array_get(v___x_3367_, v_modules_3429_, v_val_3425_);
lean_dec(v_val_3425_);
lean_dec_ref(v_modules_3429_);
v_toImport_3435_ = lean_ctor_get(v___x_3434_, 0);
lean_inc_ref(v_toImport_3435_);
lean_dec(v___x_3434_);
v_module_3436_ = lean_ctor_get(v_toImport_3435_, 0);
lean_inc(v_module_3436_);
lean_dec_ref(v_toImport_3435_);
v___x_3437_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__1, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__1_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__1);
v___x_3438_ = l_Lean_MessageData_ofName(v_attrName_3405_);
v___x_3439_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3439_, 0, v___x_3437_);
lean_ctor_set(v___x_3439_, 1, v___x_3438_);
v___x_3440_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__3, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__3_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__3);
v___x_3441_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3441_, 0, v___x_3439_);
lean_ctor_set(v___x_3441_, 1, v___x_3440_);
v___x_3442_ = l_Lean_MessageData_ofName(v_module_3436_);
lean_inc_ref(v___x_3442_);
v___x_3443_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3443_, 0, v___x_3441_);
lean_ctor_set(v___x_3443_, 1, v___x_3442_);
v___x_3444_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__5, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__5_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__5);
v___x_3445_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3445_, 0, v___x_3443_);
lean_ctor_set(v___x_3445_, 1, v___x_3444_);
v___x_3446_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3446_, 0, v___x_3445_);
lean_ctor_set(v___x_3446_, 1, v___x_3442_);
v___x_3447_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg___closed__9);
v___x_3448_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3448_, 0, v___x_3446_);
lean_ctor_set(v___x_3448_, 1, v___x_3447_);
v___x_3449_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15___redArg(v___x_3448_, v___y_3406_, v___y_3407_);
v_a_3450_ = lean_ctor_get(v___x_3449_, 0);
v_isSharedCheck_3457_ = !lean_is_exclusive(v___x_3449_);
if (v_isSharedCheck_3457_ == 0)
{
v___x_3452_ = v___x_3449_;
v_isShared_3453_ = v_isSharedCheck_3457_;
goto v_resetjp_3451_;
}
else
{
lean_inc(v_a_3450_);
lean_dec(v___x_3449_);
v___x_3452_ = lean_box(0);
v_isShared_3453_ = v_isSharedCheck_3457_;
goto v_resetjp_3451_;
}
v_resetjp_3451_:
{
lean_object* v___x_3455_; 
if (v_isShared_3453_ == 0)
{
v___x_3455_ = v___x_3452_;
goto v_reusejp_3454_;
}
else
{
lean_object* v_reuseFailAlloc_3456_; 
v_reuseFailAlloc_3456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3456_, 0, v_a_3450_);
v___x_3455_ = v_reuseFailAlloc_3456_;
goto v_reusejp_3454_;
}
v_reusejp_3454_:
{
return v___x_3455_;
}
}
}
else
{
lean_dec_ref(v_modules_3429_);
lean_dec(v_val_3425_);
v___y_3390_ = v___x_3421_;
v___y_3391_ = v_ref_3418_;
v___y_3392_ = v_attrName_3405_;
v___y_3393_ = v___y_3406_;
v___y_3394_ = v___y_3407_;
goto v___jp_3389_;
}
}
}
else
{
lean_dec(v___x_3424_);
v___y_3390_ = v___x_3421_;
v___y_3391_ = v_ref_3418_;
v___y_3392_ = v_attrName_3405_;
v___y_3393_ = v___y_3406_;
v___y_3394_ = v___y_3407_;
goto v___jp_3389_;
}
}
}
else
{
lean_dec_ref(v___x_3413_);
lean_dec(v___x_3366_);
v___y_3383_ = v_attrName_3405_;
goto v___jp_3382_;
}
}
else
{
lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; 
lean_dec_ref(v___x_3410_);
lean_del_object(v___x_3380_);
lean_dec(v_a_3378_);
lean_dec(v_a_3373_);
lean_dec(v___x_3366_);
v___x_3458_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__7, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__7_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__7);
v___x_3459_ = l_Lean_MessageData_ofName(v_attrName_3405_);
v___x_3460_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3460_, 0, v___x_3458_);
lean_ctor_set(v___x_3460_, 1, v___x_3459_);
v___x_3461_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__9, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__9_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__9);
v___x_3462_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3462_, 0, v___x_3460_);
lean_ctor_set(v___x_3462_, 1, v___x_3461_);
v___x_3463_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15___redArg(v___x_3462_, v___y_3406_, v___y_3407_);
return v___x_3463_;
}
}
}
}
else
{
lean_object* v_a_3484_; lean_object* v___x_3486_; uint8_t v_isShared_3487_; uint8_t v_isSharedCheck_3491_; 
lean_dec(v_a_3373_);
lean_dec(v___x_3366_);
v_a_3484_ = lean_ctor_get(v___x_3377_, 0);
v_isSharedCheck_3491_ = !lean_is_exclusive(v___x_3377_);
if (v_isSharedCheck_3491_ == 0)
{
v___x_3486_ = v___x_3377_;
v_isShared_3487_ = v_isSharedCheck_3491_;
goto v_resetjp_3485_;
}
else
{
lean_inc(v_a_3484_);
lean_dec(v___x_3377_);
v___x_3486_ = lean_box(0);
v_isShared_3487_ = v_isSharedCheck_3491_;
goto v_resetjp_3485_;
}
v_resetjp_3485_:
{
lean_object* v___x_3489_; 
if (v_isShared_3487_ == 0)
{
v___x_3489_ = v___x_3486_;
goto v_reusejp_3488_;
}
else
{
lean_object* v_reuseFailAlloc_3490_; 
v_reuseFailAlloc_3490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3490_, 0, v_a_3484_);
v___x_3489_ = v_reuseFailAlloc_3490_;
goto v_reusejp_3488_;
}
v_reusejp_3488_:
{
return v___x_3489_;
}
}
}
}
else
{
lean_object* v_a_3492_; lean_object* v___x_3494_; uint8_t v_isShared_3495_; uint8_t v_isSharedCheck_3499_; 
lean_dec(v___x_3366_);
lean_dec_ref(v___f_3365_);
v_a_3492_ = lean_ctor_get(v___x_3372_, 0);
v_isSharedCheck_3499_ = !lean_is_exclusive(v___x_3372_);
if (v_isSharedCheck_3499_ == 0)
{
v___x_3494_ = v___x_3372_;
v_isShared_3495_ = v_isSharedCheck_3499_;
goto v_resetjp_3493_;
}
else
{
lean_inc(v_a_3492_);
lean_dec(v___x_3372_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___boxed(lean_object* v___x_3500_, lean_object* v_attrInstance_3501_, lean_object* v___f_3502_, lean_object* v___x_3503_, lean_object* v___x_3504_, lean_object* v___x_3505_, lean_object* v___y_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_){
_start:
{
lean_object* v_res_3509_; 
v_res_3509_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1(v___x_3500_, v_attrInstance_3501_, v___f_3502_, v___x_3503_, v___x_3504_, v___x_3505_, v___y_3506_, v___y_3507_);
lean_dec(v___y_3507_);
lean_dec_ref(v___y_3506_);
lean_dec(v___x_3505_);
lean_dec_ref(v___x_3504_);
lean_dec(v_attrInstance_3501_);
return v_res_3509_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0(lean_object* v_k_3517_){
_start:
{
lean_object* v___x_3518_; uint8_t v___x_3519_; 
v___x_3518_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0___closed__2));
v___x_3519_ = lean_name_eq(v_k_3517_, v___x_3518_);
if (v___x_3519_ == 0)
{
uint8_t v___x_3520_; 
v___x_3520_ = 1;
return v___x_3520_;
}
else
{
uint8_t v___x_3521_; 
v___x_3521_ = 0;
return v___x_3521_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0___boxed(lean_object* v_k_3522_){
_start:
{
uint8_t v_res_3523_; lean_object* v_r_3524_; 
v_res_3523_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0(v_k_3522_);
lean_dec(v_k_3522_);
v_r_3524_ = lean_box(v_res_3523_);
return v_r_3524_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34___redArg(lean_object* v_x_3525_, uint8_t v_when_3526_, lean_object* v___y_3527_, lean_object* v___y_3528_){
_start:
{
if (v_when_3526_ == 0)
{
lean_object* v___x_3530_; 
lean_inc(v___y_3528_);
lean_inc_ref(v___y_3527_);
v___x_3530_ = lean_apply_3(v_x_3525_, v___y_3527_, v___y_3528_, lean_box(0));
return v___x_3530_;
}
else
{
uint8_t v___x_3531_; lean_object* v___x_3532_; 
v___x_3531_ = 0;
v___x_3532_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(v_x_3525_, v___x_3531_, v___y_3527_, v___y_3528_);
return v___x_3532_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34___redArg___boxed(lean_object* v_x_3533_, lean_object* v_when_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_, lean_object* v___y_3537_){
_start:
{
uint8_t v_when_boxed_3538_; lean_object* v_res_3539_; 
v_when_boxed_3538_ = lean_unbox(v_when_3534_);
v_res_3539_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34___redArg(v_x_3533_, v_when_boxed_3538_, v___y_3535_, v___y_3536_);
lean_dec(v___y_3536_);
lean_dec_ref(v___y_3535_);
return v_res_3539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22(lean_object* v_attrInstance_3541_, lean_object* v___y_3542_, lean_object* v___y_3543_){
_start:
{
lean_object* v___f_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___f_3551_; uint8_t v___x_3552_; lean_object* v___x_3553_; 
v___f_3545_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___closed__0));
v___x_3546_ = lean_box(0);
v___x_3547_ = l_Lean_instInhabitedEffectiveImport_default;
v___x_3548_ = lean_unsigned_to_nat(0u);
v___x_3549_ = l_Lean_Syntax_getArg(v_attrInstance_3541_, v___x_3548_);
v___x_3550_ = lean_alloc_closure((void*)(l_Lean_Elab_toAttributeKind___boxed), 3, 1);
lean_closure_set(v___x_3550_, 0, v___x_3549_);
v___f_3551_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___boxed), 9, 6);
lean_closure_set(v___f_3551_, 0, v___x_3550_);
lean_closure_set(v___f_3551_, 1, v_attrInstance_3541_);
lean_closure_set(v___f_3551_, 2, v___f_3545_);
lean_closure_set(v___f_3551_, 3, v___x_3546_);
lean_closure_set(v___f_3551_, 4, v___x_3547_);
lean_closure_set(v___f_3551_, 5, v___x_3548_);
v___x_3552_ = 1;
v___x_3553_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34___redArg(v___f_3551_, v___x_3552_, v___y_3542_, v___y_3543_);
return v___x_3553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___boxed(lean_object* v_attrInstance_3554_, lean_object* v___y_3555_, lean_object* v___y_3556_, lean_object* v___y_3557_){
_start:
{
lean_object* v_res_3558_; 
v_res_3558_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22(v_attrInstance_3554_, v___y_3555_, v___y_3556_);
lean_dec(v___y_3556_);
lean_dec_ref(v___y_3555_);
return v_res_3558_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__23(lean_object* v_as_3559_, size_t v_sz_3560_, size_t v_i_3561_, lean_object* v_b_3562_, lean_object* v___y_3563_, lean_object* v___y_3564_){
_start:
{
lean_object* v_snd_3567_; lean_object* v_a_3572_; uint8_t v___x_3584_; 
v___x_3584_ = lean_usize_dec_lt(v_i_3561_, v_sz_3560_);
if (v___x_3584_ == 0)
{
lean_object* v___x_3585_; 
v___x_3585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3585_, 0, v_b_3562_);
return v___x_3585_;
}
else
{
lean_object* v_a_3586_; lean_object* v___x_3587_; 
v_a_3586_ = lean_array_uget_borrowed(v_as_3559_, v_i_3561_);
v___x_3587_ = l_Lean_Elab_Command_getRef___redArg(v___y_3563_);
if (lean_obj_tag(v___x_3587_) == 0)
{
lean_object* v_a_3588_; lean_object* v_fileName_3589_; lean_object* v_fileMap_3590_; lean_object* v_currRecDepth_3591_; lean_object* v_cmdPos_3592_; lean_object* v_macroStack_3593_; lean_object* v_quotContext_x3f_3594_; lean_object* v_currMacroScope_3595_; lean_object* v_snap_x3f_3596_; lean_object* v_cancelTk_x3f_3597_; uint8_t v_suppressElabErrors_3598_; lean_object* v_ref_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; 
v_a_3588_ = lean_ctor_get(v___x_3587_, 0);
lean_inc(v_a_3588_);
lean_dec_ref_known(v___x_3587_, 1);
v_fileName_3589_ = lean_ctor_get(v___y_3563_, 0);
v_fileMap_3590_ = lean_ctor_get(v___y_3563_, 1);
v_currRecDepth_3591_ = lean_ctor_get(v___y_3563_, 2);
v_cmdPos_3592_ = lean_ctor_get(v___y_3563_, 3);
v_macroStack_3593_ = lean_ctor_get(v___y_3563_, 4);
v_quotContext_x3f_3594_ = lean_ctor_get(v___y_3563_, 5);
v_currMacroScope_3595_ = lean_ctor_get(v___y_3563_, 6);
v_snap_x3f_3596_ = lean_ctor_get(v___y_3563_, 8);
v_cancelTk_x3f_3597_ = lean_ctor_get(v___y_3563_, 9);
v_suppressElabErrors_3598_ = lean_ctor_get_uint8(v___y_3563_, sizeof(void*)*10);
v_ref_3599_ = l_Lean_replaceRef(v_a_3586_, v_a_3588_);
lean_dec(v_a_3588_);
lean_inc(v_cancelTk_x3f_3597_);
lean_inc(v_snap_x3f_3596_);
lean_inc(v_currMacroScope_3595_);
lean_inc(v_quotContext_x3f_3594_);
lean_inc(v_macroStack_3593_);
lean_inc(v_cmdPos_3592_);
lean_inc(v_currRecDepth_3591_);
lean_inc_ref(v_fileMap_3590_);
lean_inc_ref(v_fileName_3589_);
v___x_3600_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_3600_, 0, v_fileName_3589_);
lean_ctor_set(v___x_3600_, 1, v_fileMap_3590_);
lean_ctor_set(v___x_3600_, 2, v_currRecDepth_3591_);
lean_ctor_set(v___x_3600_, 3, v_cmdPos_3592_);
lean_ctor_set(v___x_3600_, 4, v_macroStack_3593_);
lean_ctor_set(v___x_3600_, 5, v_quotContext_x3f_3594_);
lean_ctor_set(v___x_3600_, 6, v_currMacroScope_3595_);
lean_ctor_set(v___x_3600_, 7, v_ref_3599_);
lean_ctor_set(v___x_3600_, 8, v_snap_x3f_3596_);
lean_ctor_set(v___x_3600_, 9, v_cancelTk_x3f_3597_);
lean_ctor_set_uint8(v___x_3600_, sizeof(void*)*10, v_suppressElabErrors_3598_);
lean_inc(v_a_3586_);
v___x_3601_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22(v_a_3586_, v___x_3600_, v___y_3564_);
lean_dec_ref_known(v___x_3600_, 10);
if (lean_obj_tag(v___x_3601_) == 0)
{
lean_object* v_a_3602_; lean_object* v___x_3603_; 
v_a_3602_ = lean_ctor_get(v___x_3601_, 0);
lean_inc(v_a_3602_);
lean_dec_ref_known(v___x_3601_, 1);
v___x_3603_ = lean_array_push(v_b_3562_, v_a_3602_);
v_snd_3567_ = v___x_3603_;
goto v___jp_3566_;
}
else
{
lean_object* v_a_3604_; 
v_a_3604_ = lean_ctor_get(v___x_3601_, 0);
lean_inc(v_a_3604_);
lean_dec_ref_known(v___x_3601_, 1);
v_a_3572_ = v_a_3604_;
goto v___jp_3571_;
}
}
else
{
lean_object* v_a_3605_; 
v_a_3605_ = lean_ctor_get(v___x_3587_, 0);
lean_inc(v_a_3605_);
lean_dec_ref_known(v___x_3587_, 1);
v_a_3572_ = v_a_3605_;
goto v___jp_3571_;
}
}
v___jp_3566_:
{
size_t v___x_3568_; size_t v___x_3569_; 
v___x_3568_ = ((size_t)1ULL);
v___x_3569_ = lean_usize_add(v_i_3561_, v___x_3568_);
v_i_3561_ = v___x_3569_;
v_b_3562_ = v_snd_3567_;
goto _start;
}
v___jp_3571_:
{
uint8_t v___x_3573_; 
v___x_3573_ = l_Lean_Exception_isInterrupt(v_a_3572_);
if (v___x_3573_ == 0)
{
lean_object* v___x_3574_; 
v___x_3574_ = l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21(v_a_3572_, v___y_3563_, v___y_3564_);
if (lean_obj_tag(v___x_3574_) == 0)
{
lean_dec_ref_known(v___x_3574_, 1);
v_snd_3567_ = v_b_3562_;
goto v___jp_3566_;
}
else
{
lean_object* v_a_3575_; lean_object* v___x_3577_; uint8_t v_isShared_3578_; uint8_t v_isSharedCheck_3582_; 
lean_dec_ref(v_b_3562_);
v_a_3575_ = lean_ctor_get(v___x_3574_, 0);
v_isSharedCheck_3582_ = !lean_is_exclusive(v___x_3574_);
if (v_isSharedCheck_3582_ == 0)
{
v___x_3577_ = v___x_3574_;
v_isShared_3578_ = v_isSharedCheck_3582_;
goto v_resetjp_3576_;
}
else
{
lean_inc(v_a_3575_);
lean_dec(v___x_3574_);
v___x_3577_ = lean_box(0);
v_isShared_3578_ = v_isSharedCheck_3582_;
goto v_resetjp_3576_;
}
v_resetjp_3576_:
{
lean_object* v___x_3580_; 
if (v_isShared_3578_ == 0)
{
v___x_3580_ = v___x_3577_;
goto v_reusejp_3579_;
}
else
{
lean_object* v_reuseFailAlloc_3581_; 
v_reuseFailAlloc_3581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3581_, 0, v_a_3575_);
v___x_3580_ = v_reuseFailAlloc_3581_;
goto v_reusejp_3579_;
}
v_reusejp_3579_:
{
return v___x_3580_;
}
}
}
}
else
{
lean_object* v___x_3583_; 
lean_dec_ref(v_b_3562_);
v___x_3583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3583_, 0, v_a_3572_);
return v___x_3583_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__23___boxed(lean_object* v_as_3606_, lean_object* v_sz_3607_, lean_object* v_i_3608_, lean_object* v_b_3609_, lean_object* v___y_3610_, lean_object* v___y_3611_, lean_object* v___y_3612_){
_start:
{
size_t v_sz_boxed_3613_; size_t v_i_boxed_3614_; lean_object* v_res_3615_; 
v_sz_boxed_3613_ = lean_unbox_usize(v_sz_3607_);
lean_dec(v_sz_3607_);
v_i_boxed_3614_ = lean_unbox_usize(v_i_3608_);
lean_dec(v_i_3608_);
v_res_3615_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__23(v_as_3606_, v_sz_boxed_3613_, v_i_boxed_3614_, v_b_3609_, v___y_3610_, v___y_3611_);
lean_dec(v___y_3611_);
lean_dec_ref(v___y_3610_);
lean_dec_ref(v_as_3606_);
return v_res_3615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7(lean_object* v_attrInstances_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_){
_start:
{
lean_object* v_attrs_3622_; size_t v_sz_3623_; size_t v___x_3624_; lean_object* v___x_3625_; 
v_attrs_3622_ = ((lean_object*)(l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7___closed__0));
v_sz_3623_ = lean_array_size(v_attrInstances_3618_);
v___x_3624_ = ((size_t)0ULL);
v___x_3625_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__23(v_attrInstances_3618_, v_sz_3623_, v___x_3624_, v_attrs_3622_, v___y_3619_, v___y_3620_);
return v___x_3625_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7___boxed(lean_object* v_attrInstances_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_, lean_object* v___y_3629_){
_start:
{
lean_object* v_res_3630_; 
v_res_3630_ = l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7(v_attrInstances_3626_, v___y_3627_, v___y_3628_);
lean_dec(v___y_3628_);
lean_dec_ref(v___y_3627_);
lean_dec_ref(v_attrInstances_3626_);
return v_res_3630_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2(lean_object* v_stx_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_){
_start:
{
lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; 
v___x_3635_ = lean_unsigned_to_nat(1u);
v___x_3636_ = l_Lean_Syntax_getArg(v_stx_3631_, v___x_3635_);
v___x_3637_ = l_Lean_Syntax_getSepArgs(v___x_3636_);
lean_dec(v___x_3636_);
v___x_3638_ = l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7(v___x_3637_, v___y_3632_, v___y_3633_);
lean_dec_ref(v___x_3637_);
return v___x_3638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2___boxed(lean_object* v_stx_3639_, lean_object* v___y_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_){
_start:
{
lean_object* v_res_3643_; 
v_res_3643_ = l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2(v_stx_3639_, v___y_3640_, v___y_3641_);
lean_dec(v___y_3641_);
lean_dec_ref(v___y_3640_);
lean_dec(v_stx_3639_);
return v_res_3643_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1(lean_object* v_stx_3655_, lean_object* v___y_3656_, lean_object* v___y_3657_){
_start:
{
lean_object* v___y_3660_; uint8_t v___y_3661_; uint8_t v___y_3662_; uint8_t v___y_3663_; lean_object* v___y_3664_; uint8_t v___y_3665_; uint8_t v___y_3666_; lean_object* v___y_3670_; lean_object* v___y_3671_; uint8_t v___y_3672_; uint8_t v___y_3673_; uint8_t v___y_3674_; uint8_t v___y_3675_; lean_object* v_attrs_3676_; lean_object* v___x_3680_; lean_object* v_docCommentStx_3681_; lean_object* v___x_3682_; lean_object* v_attrsStx_3683_; lean_object* v___y_3685_; lean_object* v___y_3686_; uint8_t v___y_3687_; uint8_t v___y_3688_; uint8_t v___y_3689_; uint8_t v___y_3690_; lean_object* v___x_3704_; lean_object* v_visibilityStx_3705_; lean_object* v___x_3706_; lean_object* v_protectedStx_3707_; lean_object* v___y_3709_; lean_object* v___y_3710_; uint8_t v___y_3711_; uint8_t v___y_3712_; lean_object* v___y_3713_; lean_object* v___y_3730_; uint8_t v___y_3731_; uint8_t v___y_3732_; lean_object* v___y_3733_; lean_object* v___y_3745_; uint8_t v___y_3746_; uint8_t v___y_3747_; uint8_t v___y_3759_; lean_object* v___x_3772_; lean_object* v___x_3773_; uint8_t v___x_3774_; 
v___x_3680_ = lean_unsigned_to_nat(0u);
v_docCommentStx_3681_ = l_Lean_Syntax_getArg(v_stx_3655_, v___x_3680_);
v___x_3682_ = lean_unsigned_to_nat(1u);
v_attrsStx_3683_ = l_Lean_Syntax_getArg(v_stx_3655_, v___x_3682_);
v___x_3704_ = lean_unsigned_to_nat(2u);
v_visibilityStx_3705_ = l_Lean_Syntax_getArg(v_stx_3655_, v___x_3704_);
v___x_3706_ = lean_unsigned_to_nat(3u);
v_protectedStx_3707_ = l_Lean_Syntax_getArg(v_stx_3655_, v___x_3706_);
v___x_3772_ = lean_unsigned_to_nat(4u);
v___x_3773_ = l_Lean_Syntax_getArg(v_stx_3655_, v___x_3772_);
v___x_3774_ = l_Lean_Syntax_isNone(v___x_3773_);
if (v___x_3774_ == 0)
{
lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; uint8_t v___x_3778_; 
v___x_3775_ = l_Lean_Syntax_getArg(v___x_3773_, v___x_3680_);
lean_dec(v___x_3773_);
v___x_3776_ = l_Lean_Syntax_getKind(v___x_3775_);
v___x_3777_ = ((lean_object*)(l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__2));
v___x_3778_ = lean_name_eq(v___x_3776_, v___x_3777_);
lean_dec(v___x_3776_);
if (v___x_3778_ == 0)
{
uint8_t v___x_3779_; 
v___x_3779_ = 2;
v___y_3759_ = v___x_3779_;
goto v___jp_3758_;
}
else
{
uint8_t v___x_3780_; 
v___x_3780_ = 1;
v___y_3759_ = v___x_3780_;
goto v___jp_3758_;
}
}
else
{
uint8_t v___x_3781_; 
lean_dec(v___x_3773_);
v___x_3781_ = 0;
v___y_3759_ = v___x_3781_;
goto v___jp_3758_;
}
v___jp_3659_:
{
lean_object* v___x_3667_; lean_object* v___x_3668_; 
v___x_3667_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_3667_, 0, v_stx_3655_);
lean_ctor_set(v___x_3667_, 1, v___y_3660_);
lean_ctor_set(v___x_3667_, 2, v___y_3664_);
lean_ctor_set_uint8(v___x_3667_, sizeof(void*)*3, v___y_3663_);
lean_ctor_set_uint8(v___x_3667_, sizeof(void*)*3 + 1, v___y_3662_);
lean_ctor_set_uint8(v___x_3667_, sizeof(void*)*3 + 2, v___y_3661_);
lean_ctor_set_uint8(v___x_3667_, sizeof(void*)*3 + 3, v___y_3665_);
lean_ctor_set_uint8(v___x_3667_, sizeof(void*)*3 + 4, v___y_3666_);
v___x_3668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3668_, 0, v___x_3667_);
return v___x_3668_;
}
v___jp_3669_:
{
uint8_t v___x_3677_; 
v___x_3677_ = l_Lean_Syntax_isNone(v___y_3670_);
lean_dec(v___y_3670_);
if (v___x_3677_ == 0)
{
uint8_t v___x_3678_; 
v___x_3678_ = 1;
v___y_3660_ = v___y_3671_;
v___y_3661_ = v___y_3672_;
v___y_3662_ = v___y_3674_;
v___y_3663_ = v___y_3673_;
v___y_3664_ = v_attrs_3676_;
v___y_3665_ = v___y_3675_;
v___y_3666_ = v___x_3678_;
goto v___jp_3659_;
}
else
{
uint8_t v___x_3679_; 
v___x_3679_ = 0;
v___y_3660_ = v___y_3671_;
v___y_3661_ = v___y_3672_;
v___y_3662_ = v___y_3674_;
v___y_3663_ = v___y_3673_;
v___y_3664_ = v_attrs_3676_;
v___y_3665_ = v___y_3675_;
v___y_3666_ = v___x_3679_;
goto v___jp_3659_;
}
}
v___jp_3684_:
{
lean_object* v___x_3691_; 
v___x_3691_ = l_Lean_Syntax_getOptional_x3f(v_attrsStx_3683_);
lean_dec(v_attrsStx_3683_);
if (lean_obj_tag(v___x_3691_) == 0)
{
lean_object* v___x_3692_; 
v___x_3692_ = ((lean_object*)(l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7___closed__0));
v___y_3670_ = v___y_3685_;
v___y_3671_ = v___y_3686_;
v___y_3672_ = v___y_3687_;
v___y_3673_ = v___y_3688_;
v___y_3674_ = v___y_3690_;
v___y_3675_ = v___y_3689_;
v_attrs_3676_ = v___x_3692_;
goto v___jp_3669_;
}
else
{
lean_object* v_val_3693_; lean_object* v___x_3694_; 
v_val_3693_ = lean_ctor_get(v___x_3691_, 0);
lean_inc(v_val_3693_);
lean_dec_ref_known(v___x_3691_, 1);
v___x_3694_ = l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2(v_val_3693_, v___y_3656_, v___y_3657_);
lean_dec(v_val_3693_);
if (lean_obj_tag(v___x_3694_) == 0)
{
lean_object* v_a_3695_; 
v_a_3695_ = lean_ctor_get(v___x_3694_, 0);
lean_inc(v_a_3695_);
lean_dec_ref_known(v___x_3694_, 1);
v___y_3670_ = v___y_3685_;
v___y_3671_ = v___y_3686_;
v___y_3672_ = v___y_3687_;
v___y_3673_ = v___y_3688_;
v___y_3674_ = v___y_3690_;
v___y_3675_ = v___y_3689_;
v_attrs_3676_ = v_a_3695_;
goto v___jp_3669_;
}
else
{
lean_object* v_a_3696_; lean_object* v___x_3698_; uint8_t v_isShared_3699_; uint8_t v_isSharedCheck_3703_; 
lean_dec(v___y_3686_);
lean_dec(v___y_3685_);
lean_dec(v_stx_3655_);
v_a_3696_ = lean_ctor_get(v___x_3694_, 0);
v_isSharedCheck_3703_ = !lean_is_exclusive(v___x_3694_);
if (v_isSharedCheck_3703_ == 0)
{
v___x_3698_ = v___x_3694_;
v_isShared_3699_ = v_isSharedCheck_3703_;
goto v_resetjp_3697_;
}
else
{
lean_inc(v_a_3696_);
lean_dec(v___x_3694_);
v___x_3698_ = lean_box(0);
v_isShared_3699_ = v_isSharedCheck_3703_;
goto v_resetjp_3697_;
}
v_resetjp_3697_:
{
lean_object* v___x_3701_; 
if (v_isShared_3699_ == 0)
{
v___x_3701_ = v___x_3698_;
goto v_reusejp_3700_;
}
else
{
lean_object* v_reuseFailAlloc_3702_; 
v_reuseFailAlloc_3702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3702_, 0, v_a_3696_);
v___x_3701_ = v_reuseFailAlloc_3702_;
goto v_reusejp_3700_;
}
v_reusejp_3700_:
{
return v___x_3701_;
}
}
}
}
}
v___jp_3708_:
{
lean_object* v___x_3714_; 
v___x_3714_ = l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1(v___y_3713_, v___y_3656_, v___y_3657_);
if (lean_obj_tag(v___x_3714_) == 0)
{
lean_object* v_a_3715_; uint8_t v___x_3716_; 
v_a_3715_ = lean_ctor_get(v___x_3714_, 0);
lean_inc(v_a_3715_);
lean_dec_ref_known(v___x_3714_, 1);
v___x_3716_ = l_Lean_Syntax_isNone(v_protectedStx_3707_);
lean_dec(v_protectedStx_3707_);
if (v___x_3716_ == 0)
{
uint8_t v___x_3717_; uint8_t v___x_3718_; 
v___x_3717_ = 1;
v___x_3718_ = lean_unbox(v_a_3715_);
lean_dec(v_a_3715_);
v___y_3685_ = v___y_3709_;
v___y_3686_ = v___y_3710_;
v___y_3687_ = v___y_3711_;
v___y_3688_ = v___x_3718_;
v___y_3689_ = v___y_3712_;
v___y_3690_ = v___x_3717_;
goto v___jp_3684_;
}
else
{
uint8_t v___x_3719_; uint8_t v___x_3720_; 
v___x_3719_ = 0;
v___x_3720_ = lean_unbox(v_a_3715_);
lean_dec(v_a_3715_);
v___y_3685_ = v___y_3709_;
v___y_3686_ = v___y_3710_;
v___y_3687_ = v___y_3711_;
v___y_3688_ = v___x_3720_;
v___y_3689_ = v___y_3712_;
v___y_3690_ = v___x_3719_;
goto v___jp_3684_;
}
}
else
{
lean_object* v_a_3721_; lean_object* v___x_3723_; uint8_t v_isShared_3724_; uint8_t v_isSharedCheck_3728_; 
lean_dec(v___y_3710_);
lean_dec(v___y_3709_);
lean_dec(v_protectedStx_3707_);
lean_dec(v_attrsStx_3683_);
lean_dec(v_stx_3655_);
v_a_3721_ = lean_ctor_get(v___x_3714_, 0);
v_isSharedCheck_3728_ = !lean_is_exclusive(v___x_3714_);
if (v_isSharedCheck_3728_ == 0)
{
v___x_3723_ = v___x_3714_;
v_isShared_3724_ = v_isSharedCheck_3728_;
goto v_resetjp_3722_;
}
else
{
lean_inc(v_a_3721_);
lean_dec(v___x_3714_);
v___x_3723_ = lean_box(0);
v_isShared_3724_ = v_isSharedCheck_3728_;
goto v_resetjp_3722_;
}
v_resetjp_3722_:
{
lean_object* v___x_3726_; 
if (v_isShared_3724_ == 0)
{
v___x_3726_ = v___x_3723_;
goto v_reusejp_3725_;
}
else
{
lean_object* v_reuseFailAlloc_3727_; 
v_reuseFailAlloc_3727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3727_, 0, v_a_3721_);
v___x_3726_ = v_reuseFailAlloc_3727_;
goto v_reusejp_3725_;
}
v_reusejp_3725_:
{
return v___x_3726_;
}
}
}
}
v___jp_3729_:
{
lean_object* v___x_3734_; 
v___x_3734_ = l_Lean_Syntax_getOptional_x3f(v_visibilityStx_3705_);
lean_dec(v_visibilityStx_3705_);
if (lean_obj_tag(v___x_3734_) == 0)
{
lean_object* v___x_3735_; 
v___x_3735_ = lean_box(0);
v___y_3709_ = v___y_3730_;
v___y_3710_ = v___y_3733_;
v___y_3711_ = v___y_3731_;
v___y_3712_ = v___y_3732_;
v___y_3713_ = v___x_3735_;
goto v___jp_3708_;
}
else
{
lean_object* v_val_3736_; lean_object* v___x_3738_; uint8_t v_isShared_3739_; uint8_t v_isSharedCheck_3743_; 
v_val_3736_ = lean_ctor_get(v___x_3734_, 0);
v_isSharedCheck_3743_ = !lean_is_exclusive(v___x_3734_);
if (v_isSharedCheck_3743_ == 0)
{
v___x_3738_ = v___x_3734_;
v_isShared_3739_ = v_isSharedCheck_3743_;
goto v_resetjp_3737_;
}
else
{
lean_inc(v_val_3736_);
lean_dec(v___x_3734_);
v___x_3738_ = lean_box(0);
v_isShared_3739_ = v_isSharedCheck_3743_;
goto v_resetjp_3737_;
}
v_resetjp_3737_:
{
lean_object* v___x_3741_; 
if (v_isShared_3739_ == 0)
{
v___x_3741_ = v___x_3738_;
goto v_reusejp_3740_;
}
else
{
lean_object* v_reuseFailAlloc_3742_; 
v_reuseFailAlloc_3742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3742_, 0, v_val_3736_);
v___x_3741_ = v_reuseFailAlloc_3742_;
goto v_reusejp_3740_;
}
v_reusejp_3740_:
{
v___y_3709_ = v___y_3730_;
v___y_3710_ = v___y_3733_;
v___y_3711_ = v___y_3731_;
v___y_3712_ = v___y_3732_;
v___y_3713_ = v___x_3741_;
goto v___jp_3708_;
}
}
}
}
v___jp_3744_:
{
lean_object* v___x_3748_; 
v___x_3748_ = l_Lean_Syntax_getOptional_x3f(v_docCommentStx_3681_);
lean_dec(v_docCommentStx_3681_);
if (lean_obj_tag(v___x_3748_) == 0)
{
lean_object* v___x_3749_; 
v___x_3749_ = lean_box(0);
v___y_3730_ = v___y_3745_;
v___y_3731_ = v___y_3746_;
v___y_3732_ = v___y_3747_;
v___y_3733_ = v___x_3749_;
goto v___jp_3729_;
}
else
{
lean_object* v_val_3750_; lean_object* v___x_3752_; uint8_t v_isShared_3753_; uint8_t v_isSharedCheck_3757_; 
v_val_3750_ = lean_ctor_get(v___x_3748_, 0);
v_isSharedCheck_3757_ = !lean_is_exclusive(v___x_3748_);
if (v_isSharedCheck_3757_ == 0)
{
v___x_3752_ = v___x_3748_;
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
else
{
lean_inc(v_val_3750_);
lean_dec(v___x_3748_);
v___x_3752_ = lean_box(0);
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
v_resetjp_3751_:
{
lean_object* v___x_3755_; 
if (v_isShared_3753_ == 0)
{
v___x_3755_ = v___x_3752_;
goto v_reusejp_3754_;
}
else
{
lean_object* v_reuseFailAlloc_3756_; 
v_reuseFailAlloc_3756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3756_, 0, v_val_3750_);
v___x_3755_ = v_reuseFailAlloc_3756_;
goto v_reusejp_3754_;
}
v_reusejp_3754_:
{
v___y_3730_ = v___y_3745_;
v___y_3731_ = v___y_3746_;
v___y_3732_ = v___y_3747_;
v___y_3733_ = v___x_3755_;
goto v___jp_3729_;
}
}
}
}
v___jp_3758_:
{
lean_object* v___x_3760_; lean_object* v_unsafeStx_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; uint8_t v___x_3764_; 
v___x_3760_ = lean_unsigned_to_nat(5u);
v_unsafeStx_3761_ = l_Lean_Syntax_getArg(v_stx_3655_, v___x_3760_);
v___x_3762_ = lean_unsigned_to_nat(6u);
v___x_3763_ = l_Lean_Syntax_getArg(v_stx_3655_, v___x_3762_);
v___x_3764_ = l_Lean_Syntax_isNone(v___x_3763_);
if (v___x_3764_ == 0)
{
lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; uint8_t v___x_3768_; 
v___x_3765_ = l_Lean_Syntax_getArg(v___x_3763_, v___x_3680_);
lean_dec(v___x_3763_);
v___x_3766_ = l_Lean_Syntax_getKind(v___x_3765_);
v___x_3767_ = ((lean_object*)(l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__1));
v___x_3768_ = lean_name_eq(v___x_3766_, v___x_3767_);
lean_dec(v___x_3766_);
if (v___x_3768_ == 0)
{
uint8_t v___x_3769_; 
v___x_3769_ = 1;
v___y_3745_ = v_unsafeStx_3761_;
v___y_3746_ = v___y_3759_;
v___y_3747_ = v___x_3769_;
goto v___jp_3744_;
}
else
{
uint8_t v___x_3770_; 
v___x_3770_ = 0;
v___y_3745_ = v_unsafeStx_3761_;
v___y_3746_ = v___y_3759_;
v___y_3747_ = v___x_3770_;
goto v___jp_3744_;
}
}
else
{
uint8_t v___x_3771_; 
lean_dec(v___x_3763_);
v___x_3771_ = 2;
v___y_3745_ = v_unsafeStx_3761_;
v___y_3746_ = v___y_3759_;
v___y_3747_ = v___x_3771_;
goto v___jp_3744_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___boxed(lean_object* v_stx_3782_, lean_object* v___y_3783_, lean_object* v___y_3784_, lean_object* v___y_3785_){
_start:
{
lean_object* v_res_3786_; 
v_res_3786_ = l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1(v_stx_3782_, v___y_3783_, v___y_3784_);
lean_dec(v___y_3784_);
lean_dec_ref(v___y_3783_);
return v_res_3786_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__1(lean_object* v_mods_3787_, lean_object* v___x_3788_, lean_object* v_projId_3789_, lean_object* v___x_3790_, lean_object* v___x_3791_, lean_object* v___x_3792_, lean_object* v_params_3793_, size_t v___x_3794_, lean_object* v___x_3795_, lean_object* v___x_3796_, lean_object* v___y_3797_, lean_object* v___y_3798_){
_start:
{
lean_object* v___x_3800_; 
lean_inc(v_mods_3787_);
v___x_3800_ = l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1(v_mods_3787_, v___y_3797_, v___y_3798_);
if (lean_obj_tag(v___x_3800_) == 0)
{
lean_object* v_a_3801_; lean_object* v___x_3802_; lean_object* v___f_3803_; lean_object* v___x_3804_; lean_object* v_env_3805_; uint8_t v___x_3806_; lean_object* v___x_3807_; 
v_a_3801_ = lean_ctor_get(v___x_3800_, 0);
lean_inc_n(v_a_3801_, 2);
lean_dec_ref_known(v___x_3800_, 1);
v___x_3802_ = lean_box_usize(v___x_3794_);
v___f_3803_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___lam__0___boxed), 14, 11);
lean_closure_set(v___f_3803_, 0, v___x_3788_);
lean_closure_set(v___f_3803_, 1, v_a_3801_);
lean_closure_set(v___f_3803_, 2, v_projId_3789_);
lean_closure_set(v___f_3803_, 3, v___x_3790_);
lean_closure_set(v___f_3803_, 4, v___x_3791_);
lean_closure_set(v___f_3803_, 5, v___x_3792_);
lean_closure_set(v___f_3803_, 6, v_params_3793_);
lean_closure_set(v___f_3803_, 7, v___x_3802_);
lean_closure_set(v___f_3803_, 8, v___x_3795_);
lean_closure_set(v___f_3803_, 9, v_mods_3787_);
lean_closure_set(v___f_3803_, 10, v___x_3796_);
v___x_3804_ = lean_st_ref_get(v___y_3798_);
v_env_3805_ = lean_ctor_get(v___x_3804_, 0);
lean_inc_ref(v_env_3805_);
lean_dec(v___x_3804_);
v___x_3806_ = l_Lean_Elab_Modifiers_isInferredPublic(v_env_3805_, v_a_3801_);
lean_dec(v_a_3801_);
lean_dec_ref(v_env_3805_);
v___x_3807_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(v___f_3803_, v___x_3806_, v___y_3797_, v___y_3798_);
return v___x_3807_;
}
else
{
lean_object* v_a_3808_; lean_object* v___x_3810_; uint8_t v_isShared_3811_; uint8_t v_isSharedCheck_3815_; 
lean_dec(v___x_3796_);
lean_dec(v___x_3795_);
lean_dec_ref(v_params_3793_);
lean_dec_ref(v___x_3792_);
lean_dec_ref(v___x_3791_);
lean_dec_ref(v___x_3790_);
lean_dec(v_projId_3789_);
lean_dec(v___x_3788_);
lean_dec(v_mods_3787_);
v_a_3808_ = lean_ctor_get(v___x_3800_, 0);
v_isSharedCheck_3815_ = !lean_is_exclusive(v___x_3800_);
if (v_isSharedCheck_3815_ == 0)
{
v___x_3810_ = v___x_3800_;
v_isShared_3811_ = v_isSharedCheck_3815_;
goto v_resetjp_3809_;
}
else
{
lean_inc(v_a_3808_);
lean_dec(v___x_3800_);
v___x_3810_ = lean_box(0);
v_isShared_3811_ = v_isSharedCheck_3815_;
goto v_resetjp_3809_;
}
v_resetjp_3809_:
{
lean_object* v___x_3813_; 
if (v_isShared_3811_ == 0)
{
v___x_3813_ = v___x_3810_;
goto v_reusejp_3812_;
}
else
{
lean_object* v_reuseFailAlloc_3814_; 
v_reuseFailAlloc_3814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3814_, 0, v_a_3808_);
v___x_3813_ = v_reuseFailAlloc_3814_;
goto v_reusejp_3812_;
}
v_reusejp_3812_:
{
return v___x_3813_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__1___boxed(lean_object* v_mods_3816_, lean_object* v___x_3817_, lean_object* v_projId_3818_, lean_object* v___x_3819_, lean_object* v___x_3820_, lean_object* v___x_3821_, lean_object* v_params_3822_, lean_object* v___x_3823_, lean_object* v___x_3824_, lean_object* v___x_3825_, lean_object* v___y_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_){
_start:
{
size_t v___x_33056__boxed_3829_; lean_object* v_res_3830_; 
v___x_33056__boxed_3829_ = lean_unbox_usize(v___x_3823_);
lean_dec(v___x_3823_);
v_res_3830_ = l_Lean_Elab_Command_elabNewtype___lam__1(v_mods_3816_, v___x_3817_, v_projId_3818_, v___x_3819_, v___x_3820_, v___x_3821_, v_params_3822_, v___x_33056__boxed_3829_, v___x_3824_, v___x_3825_, v___y_3826_, v___y_3827_);
lean_dec(v___y_3827_);
lean_dec_ref(v___y_3826_);
return v_res_3830_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__0(size_t v_sz_3831_, size_t v_i_3832_, lean_object* v_bs_3833_){
_start:
{
uint8_t v___x_3834_; 
v___x_3834_ = lean_usize_dec_lt(v_i_3832_, v_sz_3831_);
if (v___x_3834_ == 0)
{
return v_bs_3833_;
}
else
{
lean_object* v_v_3835_; lean_object* v___x_3836_; lean_object* v_bs_x27_3837_; size_t v___x_3838_; size_t v___x_3839_; lean_object* v___x_3840_; 
v_v_3835_ = lean_array_uget(v_bs_3833_, v_i_3832_);
v___x_3836_ = lean_unsigned_to_nat(0u);
v_bs_x27_3837_ = lean_array_uset(v_bs_3833_, v_i_3832_, v___x_3836_);
v___x_3838_ = ((size_t)1ULL);
v___x_3839_ = lean_usize_add(v_i_3832_, v___x_3838_);
v___x_3840_ = lean_array_uset(v_bs_x27_3837_, v_i_3832_, v_v_3835_);
v_i_3832_ = v___x_3839_;
v_bs_3833_ = v___x_3840_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__0___boxed(lean_object* v_sz_3842_, lean_object* v_i_3843_, lean_object* v_bs_3844_){
_start:
{
size_t v_sz_boxed_3845_; size_t v_i_boxed_3846_; lean_object* v_res_3847_; 
v_sz_boxed_3845_ = lean_unbox_usize(v_sz_3842_);
lean_dec(v_sz_3842_);
v_i_boxed_3846_ = lean_unbox_usize(v_i_3843_);
lean_dec(v_i_3843_);
v_res_3847_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__0(v_sz_boxed_3845_, v_i_boxed_3846_, v_bs_3844_);
return v_res_3847_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype(lean_object* v_stx_3850_, lean_object* v_a_3851_, lean_object* v_a_3852_){
_start:
{
lean_object* v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v_mods_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; size_t v_sz_3865_; size_t v___x_3866_; lean_object* v_params_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v_projId_3871_; lean_object* v___x_3872_; lean_object* v___f_3873_; lean_object* v___x_3874_; 
v___x_3854_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__5));
v___x_3855_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__6));
v___x_3856_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__7));
v___x_3857_ = lean_box(0);
v___x_3858_ = lean_unsigned_to_nat(0u);
v_mods_3859_ = l_Lean_Syntax_getArg(v_stx_3850_, v___x_3858_);
v___x_3860_ = lean_unsigned_to_nat(2u);
v___x_3861_ = l_Lean_Syntax_getArg(v_stx_3850_, v___x_3860_);
v___x_3862_ = lean_unsigned_to_nat(3u);
v___x_3863_ = l_Lean_Syntax_getArg(v_stx_3850_, v___x_3862_);
v___x_3864_ = l_Lean_Syntax_getArgs(v___x_3863_);
lean_dec(v___x_3863_);
v_sz_3865_ = lean_array_size(v___x_3864_);
v___x_3866_ = ((size_t)0ULL);
v_params_3867_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__0(v_sz_3865_, v___x_3866_, v___x_3864_);
v___x_3868_ = lean_unsigned_to_nat(5u);
v___x_3869_ = l_Lean_Syntax_getArg(v_stx_3850_, v___x_3868_);
v___x_3870_ = lean_unsigned_to_nat(7u);
v_projId_3871_ = l_Lean_Syntax_getArg(v_stx_3850_, v___x_3870_);
v___x_3872_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___boxed__const__1));
v___f_3873_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___lam__1___boxed), 13, 10);
lean_closure_set(v___f_3873_, 0, v_mods_3859_);
lean_closure_set(v___f_3873_, 1, v___x_3861_);
lean_closure_set(v___f_3873_, 2, v_projId_3871_);
lean_closure_set(v___f_3873_, 3, v___x_3854_);
lean_closure_set(v___f_3873_, 4, v___x_3855_);
lean_closure_set(v___f_3873_, 5, v___x_3856_);
lean_closure_set(v___f_3873_, 6, v_params_3867_);
lean_closure_set(v___f_3873_, 7, v___x_3872_);
lean_closure_set(v___f_3873_, 8, v___x_3869_);
lean_closure_set(v___f_3873_, 9, v___x_3857_);
v___x_3874_ = l_Lean_Elab_Command_getScope___redArg(v_a_3852_);
if (lean_obj_tag(v___x_3874_) == 0)
{
lean_object* v_a_3875_; uint8_t v_isPublic_3876_; lean_object* v___x_3877_; 
v_a_3875_ = lean_ctor_get(v___x_3874_, 0);
lean_inc(v_a_3875_);
lean_dec_ref_known(v___x_3874_, 1);
v_isPublic_3876_ = lean_ctor_get_uint8(v_a_3875_, sizeof(void*)*10 + 1);
lean_dec(v_a_3875_);
v___x_3877_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(v___f_3873_, v_isPublic_3876_, v_a_3851_, v_a_3852_);
return v___x_3877_;
}
else
{
lean_object* v_a_3878_; lean_object* v___x_3880_; uint8_t v_isShared_3881_; uint8_t v_isSharedCheck_3885_; 
lean_dec_ref(v___f_3873_);
v_a_3878_ = lean_ctor_get(v___x_3874_, 0);
v_isSharedCheck_3885_ = !lean_is_exclusive(v___x_3874_);
if (v_isSharedCheck_3885_ == 0)
{
v___x_3880_ = v___x_3874_;
v_isShared_3881_ = v_isSharedCheck_3885_;
goto v_resetjp_3879_;
}
else
{
lean_inc(v_a_3878_);
lean_dec(v___x_3874_);
v___x_3880_ = lean_box(0);
v_isShared_3881_ = v_isSharedCheck_3885_;
goto v_resetjp_3879_;
}
v_resetjp_3879_:
{
lean_object* v___x_3883_; 
if (v_isShared_3881_ == 0)
{
v___x_3883_ = v___x_3880_;
goto v_reusejp_3882_;
}
else
{
lean_object* v_reuseFailAlloc_3884_; 
v_reuseFailAlloc_3884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3884_, 0, v_a_3878_);
v___x_3883_ = v_reuseFailAlloc_3884_;
goto v_reusejp_3882_;
}
v_reusejp_3882_:
{
return v___x_3883_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___boxed(lean_object* v_stx_3886_, lean_object* v_a_3887_, lean_object* v_a_3888_, lean_object* v_a_3889_){
_start:
{
lean_object* v_res_3890_; 
v_res_3890_ = l_Lean_Elab_Command_elabNewtype(v_stx_3886_, v_a_3887_, v_a_3888_);
lean_dec(v_a_3888_);
lean_dec_ref(v_a_3887_);
lean_dec(v_stx_3886_);
return v_res_3890_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6(lean_object* v_stx_3891_, lean_object* v___y_3892_, lean_object* v___y_3893_){
_start:
{
lean_object* v___x_3895_; 
v___x_3895_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___redArg(v_stx_3891_, v___y_3892_);
return v___x_3895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___boxed(lean_object* v_stx_3896_, lean_object* v___y_3897_, lean_object* v___y_3898_, lean_object* v___y_3899_){
_start:
{
lean_object* v_res_3900_; 
v_res_3900_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6(v_stx_3896_, v___y_3897_, v___y_3898_);
lean_dec(v___y_3898_);
lean_dec_ref(v___y_3897_);
lean_dec(v_stx_3896_);
return v_res_3900_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7(lean_object* v_declName_3901_, lean_object* v_declRanges_3902_, lean_object* v___y_3903_, lean_object* v___y_3904_){
_start:
{
lean_object* v___x_3906_; 
v___x_3906_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7___redArg(v_declName_3901_, v_declRanges_3902_, v___y_3904_);
return v___x_3906_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7___boxed(lean_object* v_declName_3907_, lean_object* v_declRanges_3908_, lean_object* v___y_3909_, lean_object* v___y_3910_, lean_object* v___y_3911_){
_start:
{
lean_object* v_res_3912_; 
v_res_3912_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7(v_declName_3907_, v_declRanges_3908_, v___y_3909_, v___y_3910_);
lean_dec(v___y_3910_);
lean_dec_ref(v___y_3909_);
return v_res_3912_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12(lean_object* v_declName_3913_, uint8_t v_s_3914_, lean_object* v___y_3915_, lean_object* v___y_3916_){
_start:
{
lean_object* v___x_3918_; 
v___x_3918_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12___redArg(v_declName_3913_, v_s_3914_, v___y_3916_);
return v___x_3918_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12___boxed(lean_object* v_declName_3919_, lean_object* v_s_3920_, lean_object* v___y_3921_, lean_object* v___y_3922_, lean_object* v___y_3923_){
_start:
{
uint8_t v_s_boxed_3924_; lean_object* v_res_3925_; 
v_s_boxed_3924_ = lean_unbox(v_s_3920_);
v_res_3925_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12(v_declName_3919_, v_s_boxed_3924_, v___y_3921_, v___y_3922_);
lean_dec(v___y_3922_);
lean_dec_ref(v___y_3921_);
return v_res_3925_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7(lean_object* v_as_3926_, lean_object* v_as_x27_3927_, lean_object* v_b_3928_, lean_object* v_a_3929_, lean_object* v___y_3930_, lean_object* v___y_3931_){
_start:
{
lean_object* v___x_3933_; 
v___x_3933_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg(v_as_x27_3927_, v_b_3928_, v___y_3930_, v___y_3931_);
return v___x_3933_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___boxed(lean_object* v_as_3934_, lean_object* v_as_x27_3935_, lean_object* v_b_3936_, lean_object* v_a_3937_, lean_object* v___y_3938_, lean_object* v___y_3939_, lean_object* v___y_3940_){
_start:
{
lean_object* v_res_3941_; 
v_res_3941_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7(v_as_3934_, v_as_x27_3935_, v_b_3936_, v_a_3937_, v___y_3938_, v___y_3939_);
lean_dec(v___y_3939_);
lean_dec_ref(v___y_3938_);
lean_dec(v_as_x27_3935_);
lean_dec(v_as_3934_);
return v_res_3941_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8(lean_object* v_as_3942_, lean_object* v_as_x27_3943_, lean_object* v_b_3944_, lean_object* v_a_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_){
_start:
{
lean_object* v___x_3949_; 
v___x_3949_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___redArg(v_as_x27_3943_, v_b_3944_, v___y_3946_, v___y_3947_);
return v___x_3949_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___boxed(lean_object* v_as_3950_, lean_object* v_as_x27_3951_, lean_object* v_b_3952_, lean_object* v_a_3953_, lean_object* v___y_3954_, lean_object* v___y_3955_, lean_object* v___y_3956_){
_start:
{
lean_object* v_res_3957_; 
v_res_3957_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8(v_as_3950_, v_as_x27_3951_, v_b_3952_, v_a_3953_, v___y_3954_, v___y_3955_);
lean_dec(v___y_3955_);
lean_dec_ref(v___y_3954_);
lean_dec(v_as_x27_3951_);
lean_dec(v_as_3950_);
return v_res_3957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17(lean_object* v_t_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_){
_start:
{
lean_object* v___x_3962_; 
v___x_3962_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17___redArg(v_t_3958_, v___y_3960_);
return v___x_3962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17___boxed(lean_object* v_t_3963_, lean_object* v___y_3964_, lean_object* v___y_3965_, lean_object* v___y_3966_){
_start:
{
lean_object* v_res_3967_; 
v_res_3967_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17(v_t_3963_, v___y_3964_, v___y_3965_);
lean_dec(v___y_3965_);
lean_dec_ref(v___y_3964_);
return v_res_3967_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4(lean_object* v_00_u03b1_3968_, lean_object* v_ref_3969_, lean_object* v_msg_3970_, lean_object* v___y_3971_, lean_object* v___y_3972_){
_start:
{
lean_object* v___x_3974_; 
v___x_3974_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___redArg(v_ref_3969_, v_msg_3970_, v___y_3971_, v___y_3972_);
return v___x_3974_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___boxed(lean_object* v_00_u03b1_3975_, lean_object* v_ref_3976_, lean_object* v_msg_3977_, lean_object* v___y_3978_, lean_object* v___y_3979_, lean_object* v___y_3980_){
_start:
{
lean_object* v_res_3981_; 
v_res_3981_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4(v_00_u03b1_3975_, v_ref_3976_, v_msg_3977_, v___y_3978_, v___y_3979_);
lean_dec(v___y_3979_);
lean_dec_ref(v___y_3978_);
lean_dec(v_ref_3976_);
return v_res_3981_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20(lean_object* v_msgData_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_){
_start:
{
lean_object* v___x_3986_; 
v___x_3986_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg(v_msgData_3982_, v___y_3984_);
return v___x_3986_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___boxed(lean_object* v_msgData_3987_, lean_object* v___y_3988_, lean_object* v___y_3989_, lean_object* v___y_3990_){
_start:
{
lean_object* v_res_3991_; 
v_res_3991_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20(v_msgData_3987_, v___y_3988_, v___y_3989_);
lean_dec(v___y_3989_);
lean_dec_ref(v___y_3988_);
return v_res_3991_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15(lean_object* v_00_u03b1_3992_, lean_object* v_msg_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_){
_start:
{
lean_object* v___x_3997_; 
v___x_3997_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15___redArg(v_msg_3993_, v___y_3994_, v___y_3995_);
return v___x_3997_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15___boxed(lean_object* v_00_u03b1_3998_, lean_object* v_msg_3999_, lean_object* v___y_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_){
_start:
{
lean_object* v_res_4003_; 
v_res_4003_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15(v_00_u03b1_3998_, v_msg_3999_, v___y_4000_, v___y_4001_);
lean_dec(v___y_4001_);
lean_dec_ref(v___y_4000_);
return v_res_4003_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24(lean_object* v_o_4004_, lean_object* v___y_4005_, lean_object* v___y_4006_){
_start:
{
lean_object* v___x_4008_; 
v___x_4008_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24___redArg(v_o_4004_, v___y_4006_);
return v___x_4008_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24___boxed(lean_object* v_o_4009_, lean_object* v___y_4010_, lean_object* v___y_4011_, lean_object* v___y_4012_){
_start:
{
lean_object* v_res_4013_; 
v_res_4013_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24(v_o_4009_, v___y_4010_, v___y_4011_);
lean_dec(v___y_4011_);
lean_dec_ref(v___y_4010_);
return v_res_4013_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26(lean_object* v_00_u03b1_4014_, lean_object* v_constName_4015_, lean_object* v___y_4016_, lean_object* v___y_4017_){
_start:
{
lean_object* v___x_4019_; 
v___x_4019_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26___redArg(v_constName_4015_, v___y_4016_, v___y_4017_);
return v___x_4019_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26___boxed(lean_object* v_00_u03b1_4020_, lean_object* v_constName_4021_, lean_object* v___y_4022_, lean_object* v___y_4023_, lean_object* v___y_4024_){
_start:
{
lean_object* v_res_4025_; 
v_res_4025_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26(v_00_u03b1_4020_, v_constName_4021_, v___y_4022_, v___y_4023_);
lean_dec(v___y_4023_);
lean_dec_ref(v___y_4022_);
return v_res_4025_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21(lean_object* v_msgData_4026_, lean_object* v_macroStack_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_){
_start:
{
lean_object* v___x_4031_; 
v___x_4031_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21___redArg(v_msgData_4026_, v_macroStack_4027_, v___y_4029_);
return v___x_4031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21___boxed(lean_object* v_msgData_4032_, lean_object* v_macroStack_4033_, lean_object* v___y_4034_, lean_object* v___y_4035_, lean_object* v___y_4036_){
_start:
{
lean_object* v_res_4037_; 
v_res_4037_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21(v_msgData_4032_, v_macroStack_4033_, v___y_4034_, v___y_4035_);
lean_dec(v___y_4035_);
lean_dec_ref(v___y_4034_);
return v_res_4037_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37(lean_object* v_00_u03b1_4038_, lean_object* v_x_4039_, lean_object* v___y_4040_, lean_object* v___y_4041_){
_start:
{
lean_object* v___x_4042_; 
v___x_4042_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37___redArg(v_x_4039_, v___y_4041_);
return v___x_4042_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37___boxed(lean_object* v_00_u03b1_4043_, lean_object* v_x_4044_, lean_object* v___y_4045_, lean_object* v___y_4046_){
_start:
{
lean_object* v_res_4047_; 
v_res_4047_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37(v_00_u03b1_4043_, v_x_4044_, v___y_4045_, v___y_4046_);
lean_dec_ref(v___y_4045_);
lean_dec_ref(v_x_4044_);
return v_res_4047_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40(lean_object* v_00_u03b1_4048_, lean_object* v_ref_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_){
_start:
{
lean_object* v___x_4053_; 
v___x_4053_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg(v_ref_4049_);
return v___x_4053_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___boxed(lean_object* v_00_u03b1_4054_, lean_object* v_ref_4055_, lean_object* v___y_4056_, lean_object* v___y_4057_, lean_object* v___y_4058_){
_start:
{
lean_object* v_res_4059_; 
v_res_4059_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40(v_00_u03b1_4054_, v_ref_4055_, v___y_4056_, v___y_4057_);
lean_dec(v___y_4057_);
lean_dec_ref(v___y_4056_);
return v_res_4059_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__41(lean_object* v_00_u03b1_4060_, lean_object* v___y_4061_, lean_object* v___y_4062_){
_start:
{
lean_object* v___x_4064_; 
v___x_4064_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__41___redArg();
return v___x_4064_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__41___boxed(lean_object* v_00_u03b1_4065_, lean_object* v___y_4066_, lean_object* v___y_4067_, lean_object* v___y_4068_){
_start:
{
lean_object* v_res_4069_; 
v_res_4069_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__41(v_00_u03b1_4065_, v___y_4066_, v___y_4067_);
lean_dec(v___y_4067_);
lean_dec_ref(v___y_4066_);
return v_res_4069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32(lean_object* v_00_u03b1_4070_, lean_object* v_x_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_){
_start:
{
lean_object* v___x_4075_; 
v___x_4075_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg(v_x_4071_, v___y_4072_, v___y_4073_);
return v___x_4075_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___boxed(lean_object* v_00_u03b1_4076_, lean_object* v_x_4077_, lean_object* v___y_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_){
_start:
{
lean_object* v_res_4081_; 
v_res_4081_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32(v_00_u03b1_4076_, v_x_4077_, v___y_4078_, v___y_4079_);
lean_dec(v___y_4079_);
lean_dec_ref(v___y_4078_);
return v_res_4081_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34(lean_object* v_00_u03b1_4082_, lean_object* v_x_4083_, uint8_t v_when_4084_, lean_object* v___y_4085_, lean_object* v___y_4086_){
_start:
{
lean_object* v___x_4088_; 
v___x_4088_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34___redArg(v_x_4083_, v_when_4084_, v___y_4085_, v___y_4086_);
return v___x_4088_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34___boxed(lean_object* v_00_u03b1_4089_, lean_object* v_x_4090_, lean_object* v_when_4091_, lean_object* v___y_4092_, lean_object* v___y_4093_, lean_object* v___y_4094_){
_start:
{
uint8_t v_when_boxed_4095_; lean_object* v_res_4096_; 
v_when_boxed_4095_ = lean_unbox(v_when_4091_);
v_res_4096_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34(v_00_u03b1_4089_, v_x_4090_, v_when_boxed_4095_, v___y_4092_, v___y_4093_);
lean_dec(v___y_4093_);
lean_dec_ref(v___y_4092_);
return v_res_4096_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38(lean_object* v_00_u03b1_4097_, lean_object* v_ref_4098_, lean_object* v_constName_4099_, lean_object* v___y_4100_, lean_object* v___y_4101_){
_start:
{
lean_object* v___x_4103_; 
v___x_4103_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg(v_ref_4098_, v_constName_4099_, v___y_4100_, v___y_4101_);
return v___x_4103_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___boxed(lean_object* v_00_u03b1_4104_, lean_object* v_ref_4105_, lean_object* v_constName_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_){
_start:
{
lean_object* v_res_4110_; 
v_res_4110_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38(v_00_u03b1_4104_, v_ref_4105_, v_constName_4106_, v___y_4107_, v___y_4108_);
lean_dec(v___y_4108_);
lean_dec_ref(v___y_4107_);
lean_dec(v_ref_4105_);
return v_res_4110_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38(lean_object* v_as_4111_, lean_object* v_as_x27_4112_, lean_object* v_b_4113_, lean_object* v_a_4114_, lean_object* v___y_4115_, lean_object* v___y_4116_){
_start:
{
lean_object* v___x_4118_; 
v___x_4118_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38___redArg(v_as_x27_4112_, v_b_4113_, v___y_4115_, v___y_4116_);
return v___x_4118_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38___boxed(lean_object* v_as_4119_, lean_object* v_as_x27_4120_, lean_object* v_b_4121_, lean_object* v_a_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_, lean_object* v___y_4125_){
_start:
{
lean_object* v_res_4126_; 
v_res_4126_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38(v_as_4119_, v_as_x27_4120_, v_b_4121_, v_a_4122_, v___y_4123_, v___y_4124_);
lean_dec(v___y_4124_);
lean_dec_ref(v___y_4123_);
lean_dec(v_as_x27_4120_);
lean_dec(v_as_4119_);
return v_res_4126_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__45(lean_object* v_00_u03b2_4127_, lean_object* v_m_4128_, lean_object* v_a_4129_){
_start:
{
lean_object* v___x_4130_; 
v___x_4130_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__45___redArg(v_m_4128_, v_a_4129_);
return v___x_4130_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__45___boxed(lean_object* v_00_u03b2_4131_, lean_object* v_m_4132_, lean_object* v_a_4133_){
_start:
{
lean_object* v_res_4134_; 
v_res_4134_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__45(v_00_u03b2_4131_, v_m_4132_, v_a_4133_);
lean_dec(v_a_4133_);
lean_dec_ref(v_m_4132_);
return v_res_4134_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50(lean_object* v_00_u03b1_4135_, lean_object* v_ref_4136_, lean_object* v_msg_4137_, lean_object* v_declHint_4138_, lean_object* v___y_4139_, lean_object* v___y_4140_){
_start:
{
lean_object* v___x_4142_; 
v___x_4142_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50___redArg(v_ref_4136_, v_msg_4137_, v_declHint_4138_, v___y_4139_, v___y_4140_);
return v___x_4142_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50___boxed(lean_object* v_00_u03b1_4143_, lean_object* v_ref_4144_, lean_object* v_msg_4145_, lean_object* v_declHint_4146_, lean_object* v___y_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_){
_start:
{
lean_object* v_res_4150_; 
v_res_4150_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50(v_00_u03b1_4143_, v_ref_4144_, v_msg_4145_, v_declHint_4146_, v___y_4147_, v___y_4148_);
lean_dec(v___y_4148_);
lean_dec_ref(v___y_4147_);
lean_dec(v_ref_4144_);
return v_res_4150_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46(lean_object* v_00_u03b2_4151_, lean_object* v_x_4152_, lean_object* v_x_4153_){
_start:
{
uint8_t v___x_4154_; 
v___x_4154_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46___redArg(v_x_4152_, v_x_4153_);
return v___x_4154_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46___boxed(lean_object* v_00_u03b2_4155_, lean_object* v_x_4156_, lean_object* v_x_4157_){
_start:
{
uint8_t v_res_4158_; lean_object* v_r_4159_; 
v_res_4158_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46(v_00_u03b2_4155_, v_x_4156_, v_x_4157_);
lean_dec_ref(v_x_4157_);
lean_dec_ref(v_x_4156_);
v_r_4159_ = lean_box(v_res_4158_);
return v_r_4159_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__45_spec__49(lean_object* v_00_u03b2_4160_, lean_object* v_a_4161_, lean_object* v_x_4162_){
_start:
{
lean_object* v___x_4163_; 
v___x_4163_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__45_spec__49___redArg(v_a_4161_, v_x_4162_);
return v___x_4163_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__45_spec__49___boxed(lean_object* v_00_u03b2_4164_, lean_object* v_a_4165_, lean_object* v_x_4166_){
_start:
{
lean_object* v_res_4167_; 
v_res_4167_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__45_spec__49(v_00_u03b2_4164_, v_a_4165_, v_x_4166_);
lean_dec(v_x_4166_);
lean_dec(v_a_4165_);
return v_res_4167_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55(lean_object* v_msg_4168_, lean_object* v_declHint_4169_, lean_object* v___y_4170_, lean_object* v___y_4171_){
_start:
{
lean_object* v___x_4173_; 
v___x_4173_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___redArg(v_msg_4168_, v_declHint_4169_, v___y_4171_);
return v___x_4173_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55___boxed(lean_object* v_msg_4174_, lean_object* v_declHint_4175_, lean_object* v___y_4176_, lean_object* v___y_4177_, lean_object* v___y_4178_){
_start:
{
lean_object* v_res_4179_; 
v_res_4179_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__50_spec__53_spec__55(v_msg_4174_, v_declHint_4175_, v___y_4176_, v___y_4177_);
lean_dec(v___y_4177_);
lean_dec_ref(v___y_4176_);
return v_res_4179_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46_spec__49(lean_object* v_00_u03b2_4180_, lean_object* v_x_4181_, size_t v_x_4182_, lean_object* v_x_4183_){
_start:
{
uint8_t v___x_4184_; 
v___x_4184_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46_spec__49___redArg(v_x_4181_, v_x_4182_, v_x_4183_);
return v___x_4184_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46_spec__49___boxed(lean_object* v_00_u03b2_4185_, lean_object* v_x_4186_, lean_object* v_x_4187_, lean_object* v_x_4188_){
_start:
{
size_t v_x_33444__boxed_4189_; uint8_t v_res_4190_; lean_object* v_r_4191_; 
v_x_33444__boxed_4189_ = lean_unbox_usize(v_x_4187_);
lean_dec(v_x_4187_);
v_res_4190_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46_spec__49(v_00_u03b2_4185_, v_x_4186_, v_x_33444__boxed_4189_, v_x_4188_);
lean_dec_ref(v_x_4188_);
lean_dec_ref(v_x_4186_);
v_r_4191_ = lean_box(v_res_4190_);
return v_r_4191_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46_spec__49_spec__53(lean_object* v_00_u03b2_4192_, lean_object* v_keys_4193_, lean_object* v_vals_4194_, lean_object* v_heq_4195_, lean_object* v_i_4196_, lean_object* v_k_4197_){
_start:
{
uint8_t v___x_4198_; 
v___x_4198_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46_spec__49_spec__53___redArg(v_keys_4193_, v_i_4196_, v_k_4197_);
return v___x_4198_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46_spec__49_spec__53___boxed(lean_object* v_00_u03b2_4199_, lean_object* v_keys_4200_, lean_object* v_vals_4201_, lean_object* v_heq_4202_, lean_object* v_i_4203_, lean_object* v_k_4204_){
_start:
{
uint8_t v_res_4205_; lean_object* v_r_4206_; 
v_res_4205_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43_spec__46_spec__49_spec__53(v_00_u03b2_4199_, v_keys_4200_, v_vals_4201_, v_heq_4202_, v_i_4203_, v_k_4204_);
lean_dec_ref(v_k_4204_);
lean_dec_ref(v_vals_4201_);
lean_dec_ref(v_keys_4200_);
v_r_4206_ = lean_box(v_res_4205_);
return v_r_4206_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1(){
_start:
{
lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; lean_object* v___x_4225_; 
v___x_4221_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_4222_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1));
v___x_4223_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__4));
v___x_4224_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___boxed), 4, 0);
v___x_4225_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4221_, v___x_4222_, v___x_4223_, v___x_4224_);
return v___x_4225_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___boxed(lean_object* v_a_4226_){
_start:
{
lean_object* v_res_4227_; 
v_res_4227_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1();
return v_res_4227_;
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
