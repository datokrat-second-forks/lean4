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
lean_object* l_Lean_Meta_setInlineAttribute(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* v_a_227_; lean_object* v___x_228_; lean_object* v_env_229_; uint32_t v___x_230_; uint32_t v___x_231_; uint32_t v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v_a_235_; lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_246_; 
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
lean_inc(v_name_209_);
v___x_234_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__3___redArg(v_name_209_, v_levelParams_210_, v_a_225_, v_a_227_, v___x_233_, v___y_218_);
v_a_235_ = lean_ctor_get(v___x_234_, 0);
v_isSharedCheck_246_ = !lean_is_exclusive(v___x_234_);
if (v_isSharedCheck_246_ == 0)
{
v___x_237_ = v___x_234_;
v_isShared_238_ = v_isSharedCheck_246_;
goto v_resetjp_236_;
}
else
{
lean_inc(v_a_235_);
lean_dec(v___x_234_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_246_;
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
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v_a_235_);
v___x_240_ = v_reuseFailAlloc_245_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
lean_object* v___x_241_; 
lean_inc_ref(v___x_240_);
v___x_241_ = l_Lean_addDecl(v___x_240_, v___x_211_, v___y_217_, v___y_218_);
if (lean_obj_tag(v___x_241_) == 0)
{
uint8_t v___x_242_; lean_object* v___x_243_; 
lean_dec_ref_known(v___x_241_, 1);
v___x_242_ = 4;
v___x_243_ = l_Lean_Meta_setInlineAttribute(v_name_209_, v___x_242_, v___y_215_, v___y_216_, v___y_217_, v___y_218_);
if (lean_obj_tag(v___x_243_) == 0)
{
lean_object* v___x_244_; 
lean_dec_ref_known(v___x_243_, 1);
v___x_244_ = l_Lean_compileDecl(v___x_240_, v___x_222_, v___y_217_, v___y_218_);
return v___x_244_;
}
else
{
lean_dec_ref(v___x_240_);
return v___x_243_;
}
}
else
{
lean_dec_ref(v___x_240_);
lean_dec(v_name_209_);
return v___x_241_;
}
}
}
}
else
{
lean_object* v_a_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_254_; 
lean_dec(v_a_225_);
lean_dec(v_levelParams_210_);
lean_dec(v_name_209_);
v_a_247_ = lean_ctor_get(v___x_226_, 0);
v_isSharedCheck_254_ = !lean_is_exclusive(v___x_226_);
if (v_isSharedCheck_254_ == 0)
{
v___x_249_ = v___x_226_;
v_isShared_250_ = v_isSharedCheck_254_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_a_247_);
lean_dec(v___x_226_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_254_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
lean_object* v___x_252_; 
if (v_isShared_250_ == 0)
{
v___x_252_ = v___x_249_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v_a_247_);
v___x_252_ = v_reuseFailAlloc_253_;
goto v_reusejp_251_;
}
v_reusejp_251_:
{
return v___x_252_;
}
}
}
}
else
{
lean_object* v_a_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_262_; 
lean_dec_ref(v___x_220_);
lean_dec_ref(v_a_212_);
lean_dec(v_levelParams_210_);
lean_dec(v_name_209_);
v_a_255_ = lean_ctor_get(v___x_224_, 0);
v_isSharedCheck_262_ = !lean_is_exclusive(v___x_224_);
if (v_isSharedCheck_262_ == 0)
{
v___x_257_ = v___x_224_;
v_isShared_258_ = v_isSharedCheck_262_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_a_255_);
lean_dec(v___x_224_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_262_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v___x_260_; 
if (v_isShared_258_ == 0)
{
v___x_260_ = v___x_257_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v_a_255_);
v___x_260_ = v_reuseFailAlloc_261_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
return v___x_260_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__0___boxed(lean_object* v_params_263_, lean_object* v_resultType_264_, lean_object* v_name_265_, lean_object* v_levelParams_266_, lean_object* v___x_267_, lean_object* v_a_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_){
_start:
{
uint8_t v___x_9629__boxed_276_; lean_object* v_res_277_; 
v___x_9629__boxed_276_ = lean_unbox(v___x_267_);
v_res_277_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__0(v_params_263_, v_resultType_264_, v_name_265_, v_levelParams_266_, v___x_9629__boxed_276_, v_a_268_, v___y_269_, v___y_270_, v___y_271_, v___y_272_, v___y_273_, v___y_274_);
lean_dec(v___y_274_);
lean_dec_ref(v___y_273_);
lean_dec(v___y_272_);
lean_dec_ref(v___y_271_);
lean_dec(v___y_270_);
lean_dec_ref(v___y_269_);
return v_res_277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg___lam__0(lean_object* v_k_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v_b_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_){
_start:
{
lean_object* v___x_287_; 
lean_inc(v___y_285_);
lean_inc_ref(v___y_284_);
lean_inc(v___y_283_);
lean_inc_ref(v___y_282_);
lean_inc(v___y_280_);
lean_inc_ref(v___y_279_);
v___x_287_ = lean_apply_8(v_k_278_, v_b_281_, v___y_279_, v___y_280_, v___y_282_, v___y_283_, v___y_284_, v___y_285_, lean_box(0));
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg___lam__0___boxed(lean_object* v_k_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v_b_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg___lam__0(v_k_288_, v___y_289_, v___y_290_, v_b_291_, v___y_292_, v___y_293_, v___y_294_, v___y_295_);
lean_dec(v___y_295_);
lean_dec_ref(v___y_294_);
lean_dec(v___y_293_);
lean_dec_ref(v___y_292_);
lean_dec(v___y_290_);
lean_dec_ref(v___y_289_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg(lean_object* v_name_298_, uint8_t v_bi_299_, lean_object* v_type_300_, lean_object* v_k_301_, uint8_t v_kind_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_){
_start:
{
lean_object* v___f_310_; lean_object* v___x_311_; 
lean_inc(v___y_304_);
lean_inc_ref(v___y_303_);
v___f_310_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_310_, 0, v_k_301_);
lean_closure_set(v___f_310_, 1, v___y_303_);
lean_closure_set(v___f_310_, 2, v___y_304_);
v___x_311_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_298_, v_bi_299_, v_type_300_, v___f_310_, v_kind_302_, v___y_305_, v___y_306_, v___y_307_, v___y_308_);
if (lean_obj_tag(v___x_311_) == 0)
{
return v___x_311_;
}
else
{
lean_object* v_a_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_319_; 
v_a_312_ = lean_ctor_get(v___x_311_, 0);
v_isSharedCheck_319_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_319_ == 0)
{
v___x_314_ = v___x_311_;
v_isShared_315_ = v_isSharedCheck_319_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_a_312_);
lean_dec(v___x_311_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_319_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_317_; 
if (v_isShared_315_ == 0)
{
v___x_317_ = v___x_314_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_318_; 
v_reuseFailAlloc_318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_318_, 0, v_a_312_);
v___x_317_ = v_reuseFailAlloc_318_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
return v___x_317_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg___boxed(lean_object* v_name_320_, lean_object* v_bi_321_, lean_object* v_type_322_, lean_object* v_k_323_, lean_object* v_kind_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_){
_start:
{
uint8_t v_bi_boxed_332_; uint8_t v_kind_boxed_333_; lean_object* v_res_334_; 
v_bi_boxed_332_ = lean_unbox(v_bi_321_);
v_kind_boxed_333_ = lean_unbox(v_kind_324_);
v_res_334_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg(v_name_320_, v_bi_boxed_332_, v_type_322_, v_k_323_, v_kind_boxed_333_, v___y_325_, v___y_326_, v___y_327_, v___y_328_, v___y_329_, v___y_330_);
lean_dec(v___y_330_);
lean_dec_ref(v___y_329_);
lean_dec(v___y_328_);
lean_dec_ref(v___y_327_);
lean_dec(v___y_326_);
lean_dec_ref(v___y_325_);
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg(lean_object* v_name_335_, lean_object* v_type_336_, lean_object* v_k_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_){
_start:
{
uint8_t v___x_345_; uint8_t v___x_346_; lean_object* v___x_347_; 
v___x_345_ = 0;
v___x_346_ = 0;
v___x_347_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg(v_name_335_, v___x_345_, v_type_336_, v_k_337_, v___x_346_, v___y_338_, v___y_339_, v___y_340_, v___y_341_, v___y_342_, v___y_343_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg___boxed(lean_object* v_name_348_, lean_object* v_type_349_, lean_object* v_k_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg(v_name_348_, v_type_349_, v_k_350_, v___y_351_, v___y_352_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
lean_dec(v___y_356_);
lean_dec_ref(v___y_355_);
lean_dec(v___y_354_);
lean_dec_ref(v___y_353_);
lean_dec(v___y_352_);
lean_dec_ref(v___y_351_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__1(lean_object* v_params_359_, lean_object* v_levelParams_360_, uint8_t v___x_361_, lean_object* v_name_362_, lean_object* v_argName_363_, lean_object* v_argType_364_, lean_object* v_resultType_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_){
_start:
{
lean_object* v___x_373_; lean_object* v___f_374_; lean_object* v___x_375_; 
v___x_373_ = lean_box(v___x_361_);
v___f_374_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__0___boxed), 13, 5);
lean_closure_set(v___f_374_, 0, v_params_359_);
lean_closure_set(v___f_374_, 1, v_resultType_365_);
lean_closure_set(v___f_374_, 2, v_name_362_);
lean_closure_set(v___f_374_, 3, v_levelParams_360_);
lean_closure_set(v___f_374_, 4, v___x_373_);
v___x_375_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg(v_argName_363_, v_argType_364_, v___f_374_, v___y_366_, v___y_367_, v___y_368_, v___y_369_, v___y_370_, v___y_371_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__1___boxed(lean_object* v_params_376_, lean_object* v_levelParams_377_, lean_object* v___x_378_, lean_object* v_name_379_, lean_object* v_argName_380_, lean_object* v_argType_381_, lean_object* v_resultType_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_){
_start:
{
uint8_t v___x_9834__boxed_390_; lean_object* v_res_391_; 
v___x_9834__boxed_390_ = lean_unbox(v___x_378_);
v_res_391_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__1(v_params_376_, v_levelParams_377_, v___x_9834__boxed_390_, v_name_379_, v_argName_380_, v_argType_381_, v_resultType_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
lean_dec(v___y_384_);
lean_dec_ref(v___y_383_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2(lean_object* v___f_395_, lean_object* v_ctorName_396_, lean_object* v_fieldName_397_, lean_object* v___x_398_, lean_object* v___x_399_, lean_object* v_projName_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_){
_start:
{
lean_object* v___x_408_; 
lean_inc_ref(v___f_395_);
lean_inc(v___y_406_);
lean_inc_ref(v___y_405_);
lean_inc(v___y_404_);
lean_inc_ref(v___y_403_);
lean_inc(v___y_402_);
lean_inc_ref(v___y_401_);
lean_inc_ref(v___x_399_);
lean_inc_ref(v___x_398_);
v___x_408_ = lean_apply_11(v___f_395_, v_ctorName_396_, v_fieldName_397_, v___x_398_, v___x_399_, v___y_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_, v___y_406_, lean_box(0));
if (lean_obj_tag(v___x_408_) == 0)
{
lean_object* v___x_409_; lean_object* v___x_410_; 
lean_dec_ref_known(v___x_408_, 1);
v___x_409_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2___closed__1));
v___x_410_ = lean_apply_11(v___f_395_, v_projName_400_, v___x_409_, v___x_399_, v___x_398_, v___y_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_, v___y_406_, lean_box(0));
return v___x_410_;
}
else
{
lean_dec(v___y_406_);
lean_dec_ref(v___y_405_);
lean_dec(v___y_404_);
lean_dec_ref(v___y_403_);
lean_dec(v___y_402_);
lean_dec_ref(v___y_401_);
lean_dec(v_projName_400_);
lean_dec_ref(v___x_399_);
lean_dec_ref(v___x_398_);
lean_dec_ref(v___f_395_);
return v___x_408_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2___boxed(lean_object* v___f_411_, lean_object* v_ctorName_412_, lean_object* v_fieldName_413_, lean_object* v___x_414_, lean_object* v___x_415_, lean_object* v_projName_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_){
_start:
{
lean_object* v_res_424_; 
v_res_424_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2(v___f_411_, v_ctorName_412_, v_fieldName_413_, v___x_414_, v___x_415_, v_projName_416_, v___y_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_, v___y_422_);
return v_res_424_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__12(lean_object* v_opts_425_, lean_object* v_opt_426_){
_start:
{
lean_object* v_name_427_; lean_object* v_defValue_428_; lean_object* v_map_429_; lean_object* v___x_430_; 
v_name_427_ = lean_ctor_get(v_opt_426_, 0);
v_defValue_428_ = lean_ctor_get(v_opt_426_, 1);
v_map_429_ = lean_ctor_get(v_opts_425_, 0);
v___x_430_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_429_, v_name_427_);
if (lean_obj_tag(v___x_430_) == 0)
{
uint8_t v___x_431_; 
v___x_431_ = lean_unbox(v_defValue_428_);
return v___x_431_;
}
else
{
lean_object* v_val_432_; 
v_val_432_ = lean_ctor_get(v___x_430_, 0);
lean_inc(v_val_432_);
lean_dec_ref_known(v___x_430_, 1);
if (lean_obj_tag(v_val_432_) == 1)
{
uint8_t v_v_433_; 
v_v_433_ = lean_ctor_get_uint8(v_val_432_, 0);
lean_dec_ref_known(v_val_432_, 0);
return v_v_433_;
}
else
{
uint8_t v___x_434_; 
lean_dec(v_val_432_);
v___x_434_ = lean_unbox(v_defValue_428_);
return v___x_434_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__12___boxed(lean_object* v_opts_435_, lean_object* v_opt_436_){
_start:
{
uint8_t v_res_437_; lean_object* v_r_438_; 
v_res_437_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__12(v_opts_435_, v_opt_436_);
lean_dec_ref(v_opt_436_);
lean_dec_ref(v_opts_435_);
v_r_438_ = lean_box(v_res_437_);
return v_r_438_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0(void){
_start:
{
lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_439_ = lean_box(1);
v___x_440_ = l_Lean_MessageData_ofFormat(v___x_439_);
return v___x_440_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__3(void){
_start:
{
lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_444_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__2));
v___x_445_ = l_Lean_MessageData_ofFormat(v___x_444_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13(lean_object* v_x_446_, lean_object* v_x_447_){
_start:
{
if (lean_obj_tag(v_x_447_) == 0)
{
return v_x_446_;
}
else
{
lean_object* v_head_448_; lean_object* v_tail_449_; lean_object* v___x_451_; uint8_t v_isShared_452_; uint8_t v_isSharedCheck_471_; 
v_head_448_ = lean_ctor_get(v_x_447_, 0);
v_tail_449_ = lean_ctor_get(v_x_447_, 1);
v_isSharedCheck_471_ = !lean_is_exclusive(v_x_447_);
if (v_isSharedCheck_471_ == 0)
{
v___x_451_ = v_x_447_;
v_isShared_452_ = v_isSharedCheck_471_;
goto v_resetjp_450_;
}
else
{
lean_inc(v_tail_449_);
lean_inc(v_head_448_);
lean_dec(v_x_447_);
v___x_451_ = lean_box(0);
v_isShared_452_ = v_isSharedCheck_471_;
goto v_resetjp_450_;
}
v_resetjp_450_:
{
lean_object* v_before_453_; lean_object* v___x_455_; uint8_t v_isShared_456_; uint8_t v_isSharedCheck_469_; 
v_before_453_ = lean_ctor_get(v_head_448_, 0);
v_isSharedCheck_469_ = !lean_is_exclusive(v_head_448_);
if (v_isSharedCheck_469_ == 0)
{
lean_object* v_unused_470_; 
v_unused_470_ = lean_ctor_get(v_head_448_, 1);
lean_dec(v_unused_470_);
v___x_455_ = v_head_448_;
v_isShared_456_ = v_isSharedCheck_469_;
goto v_resetjp_454_;
}
else
{
lean_inc(v_before_453_);
lean_dec(v_head_448_);
v___x_455_ = lean_box(0);
v_isShared_456_ = v_isSharedCheck_469_;
goto v_resetjp_454_;
}
v_resetjp_454_:
{
lean_object* v___x_457_; lean_object* v___x_459_; 
v___x_457_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0);
if (v_isShared_456_ == 0)
{
lean_ctor_set_tag(v___x_455_, 7);
lean_ctor_set(v___x_455_, 1, v___x_457_);
lean_ctor_set(v___x_455_, 0, v_x_446_);
v___x_459_ = v___x_455_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v_x_446_);
lean_ctor_set(v_reuseFailAlloc_468_, 1, v___x_457_);
v___x_459_ = v_reuseFailAlloc_468_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
lean_object* v___x_460_; lean_object* v___x_462_; 
v___x_460_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__3);
if (v_isShared_452_ == 0)
{
lean_ctor_set_tag(v___x_451_, 7);
lean_ctor_set(v___x_451_, 1, v___x_460_);
lean_ctor_set(v___x_451_, 0, v___x_459_);
v___x_462_ = v___x_451_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v___x_459_);
lean_ctor_set(v_reuseFailAlloc_467_, 1, v___x_460_);
v___x_462_ = v_reuseFailAlloc_467_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_463_ = l_Lean_MessageData_ofSyntax(v_before_453_);
v___x_464_ = l_Lean_indentD(v___x_463_);
v___x_465_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_465_, 0, v___x_462_);
lean_ctor_set(v___x_465_, 1, v___x_464_);
v_x_446_ = v___x_465_;
v_x_447_ = v_tail_449_;
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
lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_475_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__1));
v___x_476_ = l_Lean_MessageData_ofFormat(v___x_475_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg(lean_object* v_msgData_477_, lean_object* v_macroStack_478_, lean_object* v___y_479_){
_start:
{
lean_object* v_toCold_481_; lean_object* v_options_482_; lean_object* v___x_483_; uint8_t v___x_484_; 
v_toCold_481_ = lean_ctor_get(v___y_479_, 0);
v_options_482_ = lean_ctor_get(v_toCold_481_, 2);
v___x_483_ = l_Lean_Elab_pp_macroStack;
v___x_484_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__12(v_options_482_, v___x_483_);
if (v___x_484_ == 0)
{
lean_object* v___x_485_; 
lean_dec(v_macroStack_478_);
v___x_485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_485_, 0, v_msgData_477_);
return v___x_485_;
}
else
{
if (lean_obj_tag(v_macroStack_478_) == 0)
{
lean_object* v___x_486_; 
v___x_486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_486_, 0, v_msgData_477_);
return v___x_486_;
}
else
{
lean_object* v_head_487_; lean_object* v_after_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_503_; 
v_head_487_ = lean_ctor_get(v_macroStack_478_, 0);
lean_inc(v_head_487_);
v_after_488_ = lean_ctor_get(v_head_487_, 1);
v_isSharedCheck_503_ = !lean_is_exclusive(v_head_487_);
if (v_isSharedCheck_503_ == 0)
{
lean_object* v_unused_504_; 
v_unused_504_ = lean_ctor_get(v_head_487_, 0);
lean_dec(v_unused_504_);
v___x_490_ = v_head_487_;
v_isShared_491_ = v_isSharedCheck_503_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_after_488_);
lean_dec(v_head_487_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_503_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v___x_492_; lean_object* v___x_494_; 
v___x_492_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0);
if (v_isShared_491_ == 0)
{
lean_ctor_set_tag(v___x_490_, 7);
lean_ctor_set(v___x_490_, 1, v___x_492_);
lean_ctor_set(v___x_490_, 0, v_msgData_477_);
v___x_494_ = v___x_490_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v_msgData_477_);
lean_ctor_set(v_reuseFailAlloc_502_, 1, v___x_492_);
v___x_494_ = v_reuseFailAlloc_502_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v_msgData_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_495_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__2);
v___x_496_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_496_, 0, v___x_494_);
lean_ctor_set(v___x_496_, 1, v___x_495_);
v___x_497_ = l_Lean_MessageData_ofSyntax(v_after_488_);
v___x_498_ = l_Lean_indentD(v___x_497_);
v_msgData_499_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_499_, 0, v___x_496_);
lean_ctor_set(v_msgData_499_, 1, v___x_498_);
v___x_500_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13(v_msgData_499_, v_macroStack_478_);
v___x_501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_501_, 0, v___x_500_);
return v___x_501_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___boxed(lean_object* v_msgData_505_, lean_object* v_macroStack_506_, lean_object* v___y_507_, lean_object* v___y_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg(v_msgData_505_, v_macroStack_506_, v___y_507_);
lean_dec_ref(v___y_507_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__9(lean_object* v_msgData_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_){
_start:
{
lean_object* v___x_516_; lean_object* v_env_517_; lean_object* v___x_518_; lean_object* v_toCold_519_; lean_object* v_mctx_520_; lean_object* v_lctx_521_; lean_object* v_options_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_516_ = lean_st_ref_get(v___y_514_);
v_env_517_ = lean_ctor_get(v___x_516_, 0);
lean_inc_ref(v_env_517_);
lean_dec(v___x_516_);
v___x_518_ = lean_st_ref_get(v___y_512_);
v_toCold_519_ = lean_ctor_get(v___y_513_, 0);
v_mctx_520_ = lean_ctor_get(v___x_518_, 0);
lean_inc_ref(v_mctx_520_);
lean_dec(v___x_518_);
v_lctx_521_ = lean_ctor_get(v___y_511_, 2);
v_options_522_ = lean_ctor_get(v_toCold_519_, 2);
lean_inc_ref(v_options_522_);
lean_inc_ref(v_lctx_521_);
v___x_523_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_523_, 0, v_env_517_);
lean_ctor_set(v___x_523_, 1, v_mctx_520_);
lean_ctor_set(v___x_523_, 2, v_lctx_521_);
lean_ctor_set(v___x_523_, 3, v_options_522_);
v___x_524_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_524_, 0, v___x_523_);
lean_ctor_set(v___x_524_, 1, v_msgData_510_);
v___x_525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_525_, 0, v___x_524_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__9___boxed(lean_object* v_msgData_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__9(v_msgData_526_, v___y_527_, v___y_528_, v___y_529_, v___y_530_);
lean_dec(v___y_530_);
lean_dec_ref(v___y_529_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg(lean_object* v_msg_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_){
_start:
{
lean_object* v_ref_541_; lean_object* v_macroStack_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v_a_545_; lean_object* v___x_546_; lean_object* v_a_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_555_; 
v_ref_541_ = lean_ctor_get(v___y_538_, 2);
v_macroStack_542_ = lean_ctor_get(v___y_534_, 1);
v___x_543_ = l_Lean_Elab_getBetterRef(v_ref_541_, v_macroStack_542_);
v___x_544_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__9(v_msg_533_, v___y_536_, v___y_537_, v___y_538_, v___y_539_);
v_a_545_ = lean_ctor_get(v___x_544_, 0);
lean_inc(v_a_545_);
lean_dec_ref(v___x_544_);
lean_inc(v_macroStack_542_);
v___x_546_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg(v_a_545_, v_macroStack_542_, v___y_538_);
v_a_547_ = lean_ctor_get(v___x_546_, 0);
v_isSharedCheck_555_ = !lean_is_exclusive(v___x_546_);
if (v_isSharedCheck_555_ == 0)
{
v___x_549_ = v___x_546_;
v_isShared_550_ = v_isSharedCheck_555_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_a_547_);
lean_dec(v___x_546_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_555_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v___x_551_; lean_object* v___x_553_; 
v___x_551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_551_, 0, v___x_543_);
lean_ctor_set(v___x_551_, 1, v_a_547_);
if (v_isShared_550_ == 0)
{
lean_ctor_set_tag(v___x_549_, 1);
lean_ctor_set(v___x_549_, 0, v___x_551_);
v___x_553_ = v___x_549_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v___x_551_);
v___x_553_ = v_reuseFailAlloc_554_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
return v___x_553_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg___boxed(lean_object* v_msg_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg(v_msg_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_, v___y_561_, v___y_562_);
lean_dec(v___y_562_);
lean_dec_ref(v___y_561_);
lean_dec(v___y_560_);
lean_dec_ref(v___y_559_);
lean_dec(v___y_558_);
lean_dec_ref(v___y_557_);
return v_res_564_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(lean_object* v_as_565_, size_t v_i_566_, size_t v_stop_567_, lean_object* v_b_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_){
_start:
{
lean_object* v_a_574_; uint8_t v___x_578_; 
v___x_578_ = lean_usize_dec_eq(v_i_566_, v_stop_567_);
if (v___x_578_ == 0)
{
lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; 
v___x_579_ = lean_array_uget_borrowed(v_as_565_, v_i_566_);
v___x_580_ = l_Lean_Expr_fvarId_x21(v___x_579_);
lean_inc(v___x_580_);
v___x_581_ = l_Lean_FVarId_getDecl___redArg(v___x_580_, v___y_569_, v___y_570_, v___y_571_);
if (lean_obj_tag(v___x_581_) == 0)
{
lean_object* v_a_582_; uint8_t v___x_583_; uint8_t v___x_584_; 
v_a_582_ = lean_ctor_get(v___x_581_, 0);
lean_inc(v_a_582_);
lean_dec_ref_known(v___x_581_, 1);
v___x_583_ = l_Lean_LocalDecl_binderInfo(v_a_582_);
lean_dec(v_a_582_);
v___x_584_ = l_Lean_BinderInfo_isExplicit(v___x_583_);
if (v___x_584_ == 0)
{
lean_dec(v___x_580_);
v_a_574_ = v_b_568_;
goto v___jp_573_;
}
else
{
uint8_t v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_585_ = 1;
v___x_586_ = lean_box(v___x_585_);
v___x_587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_587_, 0, v___x_580_);
lean_ctor_set(v___x_587_, 1, v___x_586_);
v___x_588_ = lean_array_push(v_b_568_, v___x_587_);
v_a_574_ = v___x_588_;
goto v___jp_573_;
}
}
else
{
lean_object* v_a_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_596_; 
lean_dec(v___x_580_);
lean_dec_ref(v_b_568_);
v_a_589_ = lean_ctor_get(v___x_581_, 0);
v_isSharedCheck_596_ = !lean_is_exclusive(v___x_581_);
if (v_isSharedCheck_596_ == 0)
{
v___x_591_ = v___x_581_;
v_isShared_592_ = v_isSharedCheck_596_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_a_589_);
lean_dec(v___x_581_);
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
lean_object* v___x_597_; 
v___x_597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_597_, 0, v_b_568_);
return v___x_597_;
}
v___jp_573_:
{
size_t v___x_575_; size_t v___x_576_; 
v___x_575_ = ((size_t)1ULL);
v___x_576_ = lean_usize_add(v_i_566_, v___x_575_);
v_i_566_ = v___x_576_;
v_b_568_ = v_a_574_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg___boxed(lean_object* v_as_598_, lean_object* v_i_599_, lean_object* v_stop_600_, lean_object* v_b_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_){
_start:
{
size_t v_i_boxed_606_; size_t v_stop_boxed_607_; lean_object* v_res_608_; 
v_i_boxed_606_ = lean_unbox_usize(v_i_599_);
lean_dec(v_i_599_);
v_stop_boxed_607_ = lean_unbox_usize(v_stop_600_);
lean_dec(v_stop_600_);
v_res_608_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(v_as_598_, v_i_boxed_606_, v_stop_boxed_607_, v_b_601_, v___y_602_, v___y_603_, v___y_604_);
lean_dec(v___y_604_);
lean_dec_ref(v___y_603_);
lean_dec_ref(v___y_602_);
lean_dec_ref(v_as_598_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2(lean_object* v_as_611_, lean_object* v_start_612_, lean_object* v_stop_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_){
_start:
{
lean_object* v___x_621_; uint8_t v___x_622_; 
v___x_621_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2___closed__0));
v___x_622_ = lean_nat_dec_lt(v_start_612_, v_stop_613_);
if (v___x_622_ == 0)
{
lean_object* v___x_623_; 
v___x_623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_623_, 0, v___x_621_);
return v___x_623_;
}
else
{
lean_object* v___x_624_; uint8_t v___x_625_; 
v___x_624_ = lean_array_get_size(v_as_611_);
v___x_625_ = lean_nat_dec_le(v_stop_613_, v___x_624_);
if (v___x_625_ == 0)
{
uint8_t v___x_626_; 
v___x_626_ = lean_nat_dec_lt(v_start_612_, v___x_624_);
if (v___x_626_ == 0)
{
lean_object* v___x_627_; 
v___x_627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_627_, 0, v___x_621_);
return v___x_627_;
}
else
{
size_t v___x_628_; size_t v___x_629_; lean_object* v___x_630_; 
v___x_628_ = lean_usize_of_nat(v_start_612_);
v___x_629_ = lean_usize_of_nat(v___x_624_);
v___x_630_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(v_as_611_, v___x_628_, v___x_629_, v___x_621_, v___y_616_, v___y_618_, v___y_619_);
return v___x_630_;
}
}
else
{
size_t v___x_631_; size_t v___x_632_; lean_object* v___x_633_; 
v___x_631_ = lean_usize_of_nat(v_start_612_);
v___x_632_ = lean_usize_of_nat(v_stop_613_);
v___x_633_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(v_as_611_, v___x_631_, v___x_632_, v___x_621_, v___y_616_, v___y_618_, v___y_619_);
return v___x_633_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2___boxed(lean_object* v_as_634_, lean_object* v_start_635_, lean_object* v_stop_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_){
_start:
{
lean_object* v_res_644_; 
v_res_644_ = l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2(v_as_634_, v_start_635_, v_stop_636_, v___y_637_, v___y_638_, v___y_639_, v___y_640_, v___y_641_, v___y_642_);
lean_dec(v___y_642_);
lean_dec_ref(v___y_641_);
lean_dec(v___y_640_);
lean_dec_ref(v___y_639_);
lean_dec(v___y_638_);
lean_dec_ref(v___y_637_);
lean_dec(v_stop_636_);
lean_dec(v_start_635_);
lean_dec_ref(v_as_634_);
return v_res_644_;
}
}
static lean_object* _init_l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__1(void){
_start:
{
lean_object* v___x_646_; lean_object* v___x_647_; 
v___x_646_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__0));
v___x_647_ = l_Lean_stringToMessageData(v___x_646_);
return v___x_647_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3(lean_object* v_value_648_, lean_object* v_declName_649_, lean_object* v___x_650_, lean_object* v_levelParams_651_, lean_object* v_ctorName_652_, lean_object* v_fieldName_653_, lean_object* v_projName_654_, lean_object* v_params_655_, lean_object* v_resultType_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_){
_start:
{
lean_object* v___x_703_; 
lean_inc(v___y_662_);
lean_inc_ref(v___y_661_);
lean_inc(v___y_660_);
lean_inc_ref(v___y_659_);
lean_inc_ref(v_resultType_656_);
v___x_703_ = lean_whnf(v_resultType_656_, v___y_659_, v___y_660_, v___y_661_, v___y_662_);
if (lean_obj_tag(v___x_703_) == 0)
{
lean_object* v_a_704_; uint8_t v___x_705_; 
v_a_704_ = lean_ctor_get(v___x_703_, 0);
lean_inc(v_a_704_);
lean_dec_ref_known(v___x_703_, 1);
v___x_705_ = l_Lean_Expr_isSort(v_a_704_);
lean_dec(v_a_704_);
if (v___x_705_ == 0)
{
lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v_a_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_717_; 
lean_dec_ref(v_params_655_);
lean_dec(v_projName_654_);
lean_dec(v_fieldName_653_);
lean_dec(v_ctorName_652_);
lean_dec(v_levelParams_651_);
lean_dec(v___x_650_);
lean_dec(v_declName_649_);
lean_dec_ref(v_value_648_);
v___x_706_ = lean_obj_once(&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__1, &l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__1_once, _init_l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__1);
v___x_707_ = l_Lean_indentExpr(v_resultType_656_);
v___x_708_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_708_, 0, v___x_706_);
lean_ctor_set(v___x_708_, 1, v___x_707_);
v___x_709_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg(v___x_708_, v___y_657_, v___y_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_);
v_a_710_ = lean_ctor_get(v___x_709_, 0);
v_isSharedCheck_717_ = !lean_is_exclusive(v___x_709_);
if (v_isSharedCheck_717_ == 0)
{
v___x_712_ = v___x_709_;
v_isShared_713_ = v_isSharedCheck_717_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_a_710_);
lean_dec(v___x_709_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_717_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v___x_715_; 
if (v_isShared_713_ == 0)
{
v___x_715_ = v___x_712_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v_a_710_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
return v___x_715_;
}
}
}
else
{
lean_dec_ref(v_resultType_656_);
goto v___jp_664_;
}
}
else
{
lean_object* v_a_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_725_; 
lean_dec_ref(v_resultType_656_);
lean_dec_ref(v_params_655_);
lean_dec(v_projName_654_);
lean_dec(v_fieldName_653_);
lean_dec(v_ctorName_652_);
lean_dec(v_levelParams_651_);
lean_dec(v___x_650_);
lean_dec(v_declName_649_);
lean_dec_ref(v_value_648_);
v_a_718_ = lean_ctor_get(v___x_703_, 0);
v_isSharedCheck_725_ = !lean_is_exclusive(v___x_703_);
if (v_isSharedCheck_725_ == 0)
{
v___x_720_ = v___x_703_;
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_a_718_);
lean_dec(v___x_703_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
lean_object* v___x_723_; 
if (v_isShared_721_ == 0)
{
v___x_723_ = v___x_720_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v_a_718_);
v___x_723_ = v_reuseFailAlloc_724_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
return v___x_723_;
}
}
}
v___jp_664_:
{
lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
lean_inc_ref(v_params_655_);
v___x_665_ = l_Lean_Expr_beta(v_value_648_, v_params_655_);
lean_inc(v_declName_649_);
v___x_666_ = l_Lean_mkConst(v_declName_649_, v___x_650_);
v___x_667_ = l_Lean_mkAppN(v___x_666_, v_params_655_);
v___x_668_ = lean_unsigned_to_nat(0u);
v___x_669_ = lean_array_get_size(v_params_655_);
v___x_670_ = l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2(v_params_655_, v___x_668_, v___x_669_, v___y_657_, v___y_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_);
if (lean_obj_tag(v___x_670_) == 0)
{
lean_object* v_a_671_; lean_object* v___x_672_; lean_object* v_env_673_; uint8_t v___x_674_; lean_object* v___x_675_; lean_object* v___f_676_; lean_object* v___f_677_; lean_object* v___x_678_; 
v_a_671_ = lean_ctor_get(v___x_670_, 0);
lean_inc(v_a_671_);
lean_dec_ref_known(v___x_670_, 1);
v___x_672_ = lean_st_ref_get(v___y_662_);
v_env_673_ = lean_ctor_get(v___x_672_, 0);
lean_inc_ref(v_env_673_);
lean_dec(v___x_672_);
v___x_674_ = l_Lean_Environment_hasExposedBody(v_env_673_, v_declName_649_);
v___x_675_ = lean_box(v___x_674_);
v___f_676_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__1___boxed), 14, 3);
lean_closure_set(v___f_676_, 0, v_params_655_);
lean_closure_set(v___f_676_, 1, v_levelParams_651_);
lean_closure_set(v___f_676_, 2, v___x_675_);
v___f_677_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2___boxed), 13, 6);
lean_closure_set(v___f_677_, 0, v___f_676_);
lean_closure_set(v___f_677_, 1, v_ctorName_652_);
lean_closure_set(v___f_677_, 2, v_fieldName_653_);
lean_closure_set(v___f_677_, 3, v___x_665_);
lean_closure_set(v___f_677_, 4, v___x_667_);
lean_closure_set(v___f_677_, 5, v_projName_654_);
v___x_678_ = l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg(v_a_671_, v___f_677_, v___y_657_, v___y_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_);
lean_dec(v_a_671_);
if (lean_obj_tag(v___x_678_) == 0)
{
lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_685_; 
v_isSharedCheck_685_ = !lean_is_exclusive(v___x_678_);
if (v_isSharedCheck_685_ == 0)
{
lean_object* v_unused_686_; 
v_unused_686_ = lean_ctor_get(v___x_678_, 0);
lean_dec(v_unused_686_);
v___x_680_ = v___x_678_;
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
else
{
lean_dec(v___x_678_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_683_; 
if (v_isShared_681_ == 0)
{
lean_ctor_set(v___x_680_, 0, v___x_669_);
v___x_683_ = v___x_680_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v___x_669_);
v___x_683_ = v_reuseFailAlloc_684_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
return v___x_683_;
}
}
}
else
{
lean_object* v_a_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_694_; 
v_a_687_ = lean_ctor_get(v___x_678_, 0);
v_isSharedCheck_694_ = !lean_is_exclusive(v___x_678_);
if (v_isSharedCheck_694_ == 0)
{
v___x_689_ = v___x_678_;
v_isShared_690_ = v_isSharedCheck_694_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_a_687_);
lean_dec(v___x_678_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_694_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
lean_object* v___x_692_; 
if (v_isShared_690_ == 0)
{
v___x_692_ = v___x_689_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v_a_687_);
v___x_692_ = v_reuseFailAlloc_693_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
return v___x_692_;
}
}
}
}
else
{
lean_object* v_a_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_702_; 
lean_dec_ref(v___x_667_);
lean_dec_ref(v___x_665_);
lean_dec_ref(v_params_655_);
lean_dec(v_projName_654_);
lean_dec(v_fieldName_653_);
lean_dec(v_ctorName_652_);
lean_dec(v_levelParams_651_);
lean_dec(v_declName_649_);
v_a_695_ = lean_ctor_get(v___x_670_, 0);
v_isSharedCheck_702_ = !lean_is_exclusive(v___x_670_);
if (v_isSharedCheck_702_ == 0)
{
v___x_697_ = v___x_670_;
v_isShared_698_ = v_isSharedCheck_702_;
goto v_resetjp_696_;
}
else
{
lean_inc(v_a_695_);
lean_dec(v___x_670_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_702_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
lean_object* v___x_700_; 
if (v_isShared_698_ == 0)
{
v___x_700_ = v___x_697_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v_a_695_);
v___x_700_ = v_reuseFailAlloc_701_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
return v___x_700_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___boxed(lean_object* v_value_726_, lean_object* v_declName_727_, lean_object* v___x_728_, lean_object* v_levelParams_729_, lean_object* v_ctorName_730_, lean_object* v_fieldName_731_, lean_object* v_projName_732_, lean_object* v_params_733_, lean_object* v_resultType_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_){
_start:
{
lean_object* v_res_742_; 
v_res_742_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3(v_value_726_, v_declName_727_, v___x_728_, v_levelParams_729_, v_ctorName_730_, v_fieldName_731_, v_projName_732_, v_params_733_, v_resultType_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_);
lean_dec(v___y_740_);
lean_dec_ref(v___y_739_);
lean_dec(v___y_738_);
lean_dec_ref(v___y_737_);
lean_dec(v___y_736_);
lean_dec_ref(v___y_735_);
return v_res_742_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_743_; 
v___x_743_ = l_instMonadEIO___redArg();
return v___x_743_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0(lean_object* v_msg_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_){
_start:
{
lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v_toApplicative_760_; lean_object* v___x_762_; uint8_t v_isShared_763_; uint8_t v_isSharedCheck_851_; 
v___x_758_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__0, &l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__0_once, _init_l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__0);
v___x_759_ = l_StateRefT_x27_instMonad___redArg(v___x_758_);
v_toApplicative_760_ = lean_ctor_get(v___x_759_, 0);
v_isSharedCheck_851_ = !lean_is_exclusive(v___x_759_);
if (v_isSharedCheck_851_ == 0)
{
lean_object* v_unused_852_; 
v_unused_852_ = lean_ctor_get(v___x_759_, 1);
lean_dec(v_unused_852_);
v___x_762_ = v___x_759_;
v_isShared_763_ = v_isSharedCheck_851_;
goto v_resetjp_761_;
}
else
{
lean_inc(v_toApplicative_760_);
lean_dec(v___x_759_);
v___x_762_ = lean_box(0);
v_isShared_763_ = v_isSharedCheck_851_;
goto v_resetjp_761_;
}
v_resetjp_761_:
{
lean_object* v_toFunctor_764_; lean_object* v_toSeq_765_; lean_object* v_toSeqLeft_766_; lean_object* v_toSeqRight_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_849_; 
v_toFunctor_764_ = lean_ctor_get(v_toApplicative_760_, 0);
v_toSeq_765_ = lean_ctor_get(v_toApplicative_760_, 2);
v_toSeqLeft_766_ = lean_ctor_get(v_toApplicative_760_, 3);
v_toSeqRight_767_ = lean_ctor_get(v_toApplicative_760_, 4);
v_isSharedCheck_849_ = !lean_is_exclusive(v_toApplicative_760_);
if (v_isSharedCheck_849_ == 0)
{
lean_object* v_unused_850_; 
v_unused_850_ = lean_ctor_get(v_toApplicative_760_, 1);
lean_dec(v_unused_850_);
v___x_769_ = v_toApplicative_760_;
v_isShared_770_ = v_isSharedCheck_849_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_toSeqRight_767_);
lean_inc(v_toSeqLeft_766_);
lean_inc(v_toSeq_765_);
lean_inc(v_toFunctor_764_);
lean_dec(v_toApplicative_760_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_849_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___f_771_; lean_object* v___f_772_; lean_object* v___f_773_; lean_object* v___f_774_; lean_object* v___x_775_; lean_object* v___f_776_; lean_object* v___f_777_; lean_object* v___f_778_; lean_object* v___x_780_; 
v___f_771_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__1));
v___f_772_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__2));
lean_inc_ref(v_toFunctor_764_);
v___f_773_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_773_, 0, v_toFunctor_764_);
v___f_774_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_774_, 0, v_toFunctor_764_);
v___x_775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_775_, 0, v___f_773_);
lean_ctor_set(v___x_775_, 1, v___f_774_);
v___f_776_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_776_, 0, v_toSeqRight_767_);
v___f_777_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_777_, 0, v_toSeqLeft_766_);
v___f_778_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_778_, 0, v_toSeq_765_);
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 4, v___f_776_);
lean_ctor_set(v___x_769_, 3, v___f_777_);
lean_ctor_set(v___x_769_, 2, v___f_778_);
lean_ctor_set(v___x_769_, 1, v___f_771_);
lean_ctor_set(v___x_769_, 0, v___x_775_);
v___x_780_ = v___x_769_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v___x_775_);
lean_ctor_set(v_reuseFailAlloc_848_, 1, v___f_771_);
lean_ctor_set(v_reuseFailAlloc_848_, 2, v___f_778_);
lean_ctor_set(v_reuseFailAlloc_848_, 3, v___f_777_);
lean_ctor_set(v_reuseFailAlloc_848_, 4, v___f_776_);
v___x_780_ = v_reuseFailAlloc_848_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
lean_object* v___x_782_; 
if (v_isShared_763_ == 0)
{
lean_ctor_set(v___x_762_, 1, v___f_772_);
lean_ctor_set(v___x_762_, 0, v___x_780_);
v___x_782_ = v___x_762_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v___x_780_);
lean_ctor_set(v_reuseFailAlloc_847_, 1, v___f_772_);
v___x_782_ = v_reuseFailAlloc_847_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
lean_object* v___x_783_; lean_object* v_toApplicative_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_845_; 
v___x_783_ = l_StateRefT_x27_instMonad___redArg(v___x_782_);
v_toApplicative_784_ = lean_ctor_get(v___x_783_, 0);
v_isSharedCheck_845_ = !lean_is_exclusive(v___x_783_);
if (v_isSharedCheck_845_ == 0)
{
lean_object* v_unused_846_; 
v_unused_846_ = lean_ctor_get(v___x_783_, 1);
lean_dec(v_unused_846_);
v___x_786_ = v___x_783_;
v_isShared_787_ = v_isSharedCheck_845_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_toApplicative_784_);
lean_dec(v___x_783_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_845_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v_toFunctor_788_; lean_object* v_toSeq_789_; lean_object* v_toSeqLeft_790_; lean_object* v_toSeqRight_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_843_; 
v_toFunctor_788_ = lean_ctor_get(v_toApplicative_784_, 0);
v_toSeq_789_ = lean_ctor_get(v_toApplicative_784_, 2);
v_toSeqLeft_790_ = lean_ctor_get(v_toApplicative_784_, 3);
v_toSeqRight_791_ = lean_ctor_get(v_toApplicative_784_, 4);
v_isSharedCheck_843_ = !lean_is_exclusive(v_toApplicative_784_);
if (v_isSharedCheck_843_ == 0)
{
lean_object* v_unused_844_; 
v_unused_844_ = lean_ctor_get(v_toApplicative_784_, 1);
lean_dec(v_unused_844_);
v___x_793_ = v_toApplicative_784_;
v_isShared_794_ = v_isSharedCheck_843_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_toSeqRight_791_);
lean_inc(v_toSeqLeft_790_);
lean_inc(v_toSeq_789_);
lean_inc(v_toFunctor_788_);
lean_dec(v_toApplicative_784_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_843_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
lean_object* v___f_795_; lean_object* v___f_796_; lean_object* v___f_797_; lean_object* v___f_798_; lean_object* v___x_799_; lean_object* v___f_800_; lean_object* v___f_801_; lean_object* v___f_802_; lean_object* v___x_804_; 
v___f_795_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__3));
v___f_796_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__4));
lean_inc_ref(v_toFunctor_788_);
v___f_797_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_797_, 0, v_toFunctor_788_);
v___f_798_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_798_, 0, v_toFunctor_788_);
v___x_799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_799_, 0, v___f_797_);
lean_ctor_set(v___x_799_, 1, v___f_798_);
v___f_800_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_800_, 0, v_toSeqRight_791_);
v___f_801_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_801_, 0, v_toSeqLeft_790_);
v___f_802_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_802_, 0, v_toSeq_789_);
if (v_isShared_794_ == 0)
{
lean_ctor_set(v___x_793_, 4, v___f_800_);
lean_ctor_set(v___x_793_, 3, v___f_801_);
lean_ctor_set(v___x_793_, 2, v___f_802_);
lean_ctor_set(v___x_793_, 1, v___f_795_);
lean_ctor_set(v___x_793_, 0, v___x_799_);
v___x_804_ = v___x_793_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v___x_799_);
lean_ctor_set(v_reuseFailAlloc_842_, 1, v___f_795_);
lean_ctor_set(v_reuseFailAlloc_842_, 2, v___f_802_);
lean_ctor_set(v_reuseFailAlloc_842_, 3, v___f_801_);
lean_ctor_set(v_reuseFailAlloc_842_, 4, v___f_800_);
v___x_804_ = v_reuseFailAlloc_842_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
lean_object* v___x_806_; 
if (v_isShared_787_ == 0)
{
lean_ctor_set(v___x_786_, 1, v___f_796_);
lean_ctor_set(v___x_786_, 0, v___x_804_);
v___x_806_ = v___x_786_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v___x_804_);
lean_ctor_set(v_reuseFailAlloc_841_, 1, v___f_796_);
v___x_806_ = v_reuseFailAlloc_841_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
lean_object* v___x_807_; lean_object* v_toApplicative_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_839_; 
v___x_807_ = l_StateRefT_x27_instMonad___redArg(v___x_806_);
v_toApplicative_808_ = lean_ctor_get(v___x_807_, 0);
v_isSharedCheck_839_ = !lean_is_exclusive(v___x_807_);
if (v_isSharedCheck_839_ == 0)
{
lean_object* v_unused_840_; 
v_unused_840_ = lean_ctor_get(v___x_807_, 1);
lean_dec(v_unused_840_);
v___x_810_ = v___x_807_;
v_isShared_811_ = v_isSharedCheck_839_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_toApplicative_808_);
lean_dec(v___x_807_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_839_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v_toFunctor_812_; lean_object* v_toSeq_813_; lean_object* v_toSeqLeft_814_; lean_object* v_toSeqRight_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_837_; 
v_toFunctor_812_ = lean_ctor_get(v_toApplicative_808_, 0);
v_toSeq_813_ = lean_ctor_get(v_toApplicative_808_, 2);
v_toSeqLeft_814_ = lean_ctor_get(v_toApplicative_808_, 3);
v_toSeqRight_815_ = lean_ctor_get(v_toApplicative_808_, 4);
v_isSharedCheck_837_ = !lean_is_exclusive(v_toApplicative_808_);
if (v_isSharedCheck_837_ == 0)
{
lean_object* v_unused_838_; 
v_unused_838_ = lean_ctor_get(v_toApplicative_808_, 1);
lean_dec(v_unused_838_);
v___x_817_ = v_toApplicative_808_;
v_isShared_818_ = v_isSharedCheck_837_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_toSeqRight_815_);
lean_inc(v_toSeqLeft_814_);
lean_inc(v_toSeq_813_);
lean_inc(v_toFunctor_812_);
lean_dec(v_toApplicative_808_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_837_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v___f_819_; lean_object* v___f_820_; lean_object* v___f_821_; lean_object* v___f_822_; lean_object* v___x_823_; lean_object* v___f_824_; lean_object* v___f_825_; lean_object* v___f_826_; lean_object* v___x_828_; 
v___f_819_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__5));
v___f_820_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__6));
lean_inc_ref(v_toFunctor_812_);
v___f_821_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_821_, 0, v_toFunctor_812_);
v___f_822_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_822_, 0, v_toFunctor_812_);
v___x_823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_823_, 0, v___f_821_);
lean_ctor_set(v___x_823_, 1, v___f_822_);
v___f_824_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_824_, 0, v_toSeqRight_815_);
v___f_825_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_825_, 0, v_toSeqLeft_814_);
v___f_826_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_826_, 0, v_toSeq_813_);
if (v_isShared_818_ == 0)
{
lean_ctor_set(v___x_817_, 4, v___f_824_);
lean_ctor_set(v___x_817_, 3, v___f_825_);
lean_ctor_set(v___x_817_, 2, v___f_826_);
lean_ctor_set(v___x_817_, 1, v___f_819_);
lean_ctor_set(v___x_817_, 0, v___x_823_);
v___x_828_ = v___x_817_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v___x_823_);
lean_ctor_set(v_reuseFailAlloc_836_, 1, v___f_819_);
lean_ctor_set(v_reuseFailAlloc_836_, 2, v___f_826_);
lean_ctor_set(v_reuseFailAlloc_836_, 3, v___f_825_);
lean_ctor_set(v_reuseFailAlloc_836_, 4, v___f_824_);
v___x_828_ = v_reuseFailAlloc_836_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
lean_object* v___x_830_; 
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 1, v___f_820_);
lean_ctor_set(v___x_810_, 0, v___x_828_);
v___x_830_ = v___x_810_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v___x_828_);
lean_ctor_set(v_reuseFailAlloc_835_, 1, v___f_820_);
v___x_830_ = v_reuseFailAlloc_835_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_7006__overap_833_; lean_object* v___x_834_; 
v___x_831_ = lean_box(0);
v___x_832_ = l_instInhabitedOfMonad___redArg(v___x_830_, v___x_831_);
v___x_7006__overap_833_ = lean_panic_fn_borrowed(v___x_832_, v_msg_750_);
lean_dec(v___x_832_);
lean_inc(v___y_756_);
lean_inc_ref(v___y_755_);
lean_inc(v___y_754_);
lean_inc_ref(v___y_753_);
lean_inc(v___y_752_);
lean_inc_ref(v___y_751_);
v___x_834_ = lean_apply_7(v___x_7006__overap_833_, v___y_751_, v___y_752_, v___y_753_, v___y_754_, v___y_755_, v___y_756_, lean_box(0));
return v___x_834_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___boxed(lean_object* v_msg_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_){
_start:
{
lean_object* v_res_861_; 
v_res_861_ = l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0(v_msg_853_, v___y_854_, v___y_855_, v___y_856_, v___y_857_, v___y_858_, v___y_859_);
lean_dec(v___y_859_);
lean_dec_ref(v___y_858_);
lean_dec(v___y_857_);
lean_dec_ref(v___y_856_);
lean_dec(v___y_855_);
lean_dec_ref(v___y_854_);
return v_res_861_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1(void){
_start:
{
lean_object* v___x_863_; lean_object* v___x_864_; 
v___x_863_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__0));
v___x_864_ = l_Lean_stringToMessageData(v___x_863_);
return v___x_864_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3(void){
_start:
{
lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_866_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__2));
v___x_867_ = l_Lean_stringToMessageData(v___x_866_);
return v___x_867_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7(void){
_start:
{
lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_871_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__6));
v___x_872_ = lean_unsigned_to_nat(11u);
v___x_873_ = lean_unsigned_to_nat(115u);
v___x_874_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__5));
v___x_875_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__4));
v___x_876_ = l_mkPanicMessageWithDecl(v___x_875_, v___x_874_, v___x_873_, v___x_872_, v___x_871_);
return v___x_876_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0(lean_object* v_constName_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_){
_start:
{
lean_object* v___x_893_; lean_object* v_env_894_; uint8_t v___x_895_; lean_object* v___x_896_; 
v___x_893_ = lean_st_ref_get(v___y_883_);
v_env_894_ = lean_ctor_get(v___x_893_, 0);
lean_inc_ref(v_env_894_);
lean_dec(v___x_893_);
v___x_895_ = 0;
lean_inc(v_constName_877_);
v___x_896_ = l_Lean_Environment_findAsync_x3f(v_env_894_, v_constName_877_, v___x_895_);
if (lean_obj_tag(v___x_896_) == 1)
{
lean_object* v_val_897_; uint8_t v_kind_898_; 
v_val_897_ = lean_ctor_get(v___x_896_, 0);
lean_inc(v_val_897_);
lean_dec_ref_known(v___x_896_, 1);
v_kind_898_ = lean_ctor_get_uint8(v_val_897_, sizeof(void*)*3);
if (v_kind_898_ == 0)
{
lean_object* v___x_899_; 
v___x_899_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_897_);
if (lean_obj_tag(v___x_899_) == 1)
{
lean_object* v_val_900_; lean_object* v___x_902_; uint8_t v_isShared_903_; uint8_t v_isSharedCheck_907_; 
lean_dec(v_constName_877_);
v_val_900_ = lean_ctor_get(v___x_899_, 0);
v_isSharedCheck_907_ = !lean_is_exclusive(v___x_899_);
if (v_isSharedCheck_907_ == 0)
{
v___x_902_ = v___x_899_;
v_isShared_903_ = v_isSharedCheck_907_;
goto v_resetjp_901_;
}
else
{
lean_inc(v_val_900_);
lean_dec(v___x_899_);
v___x_902_ = lean_box(0);
v_isShared_903_ = v_isSharedCheck_907_;
goto v_resetjp_901_;
}
v_resetjp_901_:
{
lean_object* v___x_905_; 
if (v_isShared_903_ == 0)
{
lean_ctor_set_tag(v___x_902_, 0);
v___x_905_ = v___x_902_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_val_900_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
return v___x_905_;
}
}
}
else
{
lean_object* v___x_908_; lean_object* v___x_909_; 
lean_dec_ref(v___x_899_);
v___x_908_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7);
v___x_909_ = l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0(v___x_908_, v___y_878_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_);
if (lean_obj_tag(v___x_909_) == 0)
{
lean_object* v_a_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_918_; 
v_a_910_ = lean_ctor_get(v___x_909_, 0);
v_isSharedCheck_918_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_918_ == 0)
{
v___x_912_ = v___x_909_;
v_isShared_913_ = v_isSharedCheck_918_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_a_910_);
lean_dec(v___x_909_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_918_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
if (lean_obj_tag(v_a_910_) == 0)
{
lean_del_object(v___x_912_);
goto v___jp_885_;
}
else
{
lean_object* v_val_914_; lean_object* v___x_916_; 
lean_dec(v_constName_877_);
v_val_914_ = lean_ctor_get(v_a_910_, 0);
lean_inc(v_val_914_);
lean_dec_ref_known(v_a_910_, 1);
if (v_isShared_913_ == 0)
{
lean_ctor_set(v___x_912_, 0, v_val_914_);
v___x_916_ = v___x_912_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v_val_914_);
v___x_916_ = v_reuseFailAlloc_917_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
return v___x_916_;
}
}
}
}
else
{
lean_object* v_a_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_926_; 
lean_dec(v_constName_877_);
v_a_919_ = lean_ctor_get(v___x_909_, 0);
v_isSharedCheck_926_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_926_ == 0)
{
v___x_921_ = v___x_909_;
v_isShared_922_ = v_isSharedCheck_926_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_a_919_);
lean_dec(v___x_909_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_926_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
lean_object* v___x_924_; 
if (v_isShared_922_ == 0)
{
v___x_924_ = v___x_921_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v_a_919_);
v___x_924_ = v_reuseFailAlloc_925_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
return v___x_924_;
}
}
}
}
}
else
{
lean_dec(v_val_897_);
goto v___jp_885_;
}
}
else
{
lean_dec(v___x_896_);
goto v___jp_885_;
}
v___jp_885_:
{
lean_object* v___x_886_; uint8_t v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; 
v___x_886_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1);
v___x_887_ = 0;
v___x_888_ = l_Lean_MessageData_ofConstName(v_constName_877_, v___x_887_);
v___x_889_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_889_, 0, v___x_886_);
lean_ctor_set(v___x_889_, 1, v___x_888_);
v___x_890_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3);
v___x_891_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_891_, 0, v___x_889_);
lean_ctor_set(v___x_891_, 1, v___x_890_);
v___x_892_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg(v___x_891_, v___y_878_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_);
return v___x_892_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___boxed(lean_object* v_constName_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_){
_start:
{
lean_object* v_res_935_; 
v_res_935_ = l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0(v_constName_927_, v___y_928_, v___y_929_, v___y_930_, v___y_931_, v___y_932_, v___y_933_);
lean_dec(v___y_933_);
lean_dec_ref(v___y_932_);
lean_dec(v___y_931_);
lean_dec_ref(v___y_930_);
lean_dec(v___y_929_);
lean_dec_ref(v___y_928_);
return v_res_935_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(lean_object* v_a_936_, lean_object* v_a_937_){
_start:
{
if (lean_obj_tag(v_a_936_) == 0)
{
lean_object* v___x_938_; 
v___x_938_ = l_List_reverse___redArg(v_a_937_);
return v___x_938_;
}
else
{
lean_object* v_head_939_; lean_object* v_tail_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_949_; 
v_head_939_ = lean_ctor_get(v_a_936_, 0);
v_tail_940_ = lean_ctor_get(v_a_936_, 1);
v_isSharedCheck_949_ = !lean_is_exclusive(v_a_936_);
if (v_isSharedCheck_949_ == 0)
{
v___x_942_ = v_a_936_;
v_isShared_943_ = v_isSharedCheck_949_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_tail_940_);
lean_inc(v_head_939_);
lean_dec(v_a_936_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_949_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_944_; lean_object* v___x_946_; 
v___x_944_ = l_Lean_mkLevelParam(v_head_939_);
if (v_isShared_943_ == 0)
{
lean_ctor_set(v___x_942_, 1, v_a_937_);
lean_ctor_set(v___x_942_, 0, v___x_944_);
v___x_946_ = v___x_942_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v___x_944_);
lean_ctor_set(v_reuseFailAlloc_948_, 1, v_a_937_);
v___x_946_ = v_reuseFailAlloc_948_;
goto v_reusejp_945_;
}
v_reusejp_945_:
{
v_a_936_ = v_tail_940_;
v_a_937_ = v___x_946_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj(lean_object* v_declName_950_, lean_object* v_ctorName_951_, lean_object* v_projName_952_, lean_object* v_fieldName_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_){
_start:
{
lean_object* v___x_961_; 
lean_inc(v_declName_950_);
v___x_961_ = l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0(v_declName_950_, v___y_954_, v___y_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_);
if (lean_obj_tag(v___x_961_) == 0)
{
lean_object* v_a_962_; lean_object* v_toConstantVal_963_; lean_object* v_value_964_; lean_object* v_levelParams_965_; lean_object* v_type_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___f_969_; uint8_t v___x_970_; lean_object* v___x_971_; 
v_a_962_ = lean_ctor_get(v___x_961_, 0);
lean_inc(v_a_962_);
lean_dec_ref_known(v___x_961_, 1);
v_toConstantVal_963_ = lean_ctor_get(v_a_962_, 0);
lean_inc_ref(v_toConstantVal_963_);
v_value_964_ = lean_ctor_get(v_a_962_, 1);
lean_inc_ref(v_value_964_);
lean_dec(v_a_962_);
v_levelParams_965_ = lean_ctor_get(v_toConstantVal_963_, 1);
lean_inc_n(v_levelParams_965_, 2);
v_type_966_ = lean_ctor_get(v_toConstantVal_963_, 2);
lean_inc_ref(v_type_966_);
lean_dec_ref(v_toConstantVal_963_);
v___x_967_ = lean_box(0);
v___x_968_ = l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(v_levelParams_965_, v___x_967_);
v___f_969_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___boxed), 16, 7);
lean_closure_set(v___f_969_, 0, v_value_964_);
lean_closure_set(v___f_969_, 1, v_declName_950_);
lean_closure_set(v___f_969_, 2, v___x_968_);
lean_closure_set(v___f_969_, 3, v_levelParams_965_);
lean_closure_set(v___f_969_, 4, v_ctorName_951_);
lean_closure_set(v___f_969_, 5, v_fieldName_953_);
lean_closure_set(v___f_969_, 6, v_projName_952_);
v___x_970_ = 0;
v___x_971_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(v_type_966_, v___f_969_, v___x_970_, v___y_954_, v___y_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_);
return v___x_971_;
}
else
{
lean_object* v_a_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_979_; 
lean_dec(v_fieldName_953_);
lean_dec(v_projName_952_);
lean_dec(v_ctorName_951_);
lean_dec(v_declName_950_);
v_a_972_ = lean_ctor_get(v___x_961_, 0);
v_isSharedCheck_979_ = !lean_is_exclusive(v___x_961_);
if (v_isSharedCheck_979_ == 0)
{
v___x_974_ = v___x_961_;
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_a_972_);
lean_dec(v___x_961_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v___x_977_; 
if (v_isShared_975_ == 0)
{
v___x_977_ = v___x_974_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v_a_972_);
v___x_977_ = v_reuseFailAlloc_978_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
return v___x_977_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___boxed(lean_object* v_declName_980_, lean_object* v_ctorName_981_, lean_object* v_projName_982_, lean_object* v_fieldName_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_){
_start:
{
lean_object* v_res_991_; 
v_res_991_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj(v_declName_980_, v_ctorName_981_, v_projName_982_, v_fieldName_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_);
lean_dec(v___y_989_);
lean_dec_ref(v___y_988_);
lean_dec(v___y_987_);
lean_dec_ref(v___y_986_);
lean_dec(v___y_985_);
lean_dec_ref(v___y_984_);
return v_res_991_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6(lean_object* v_00_u03b1_992_, lean_object* v_name_993_, uint8_t v_bi_994_, lean_object* v_type_995_, lean_object* v_k_996_, uint8_t v_kind_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_){
_start:
{
lean_object* v___x_1005_; 
v___x_1005_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg(v_name_993_, v_bi_994_, v_type_995_, v_k_996_, v_kind_997_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_);
return v___x_1005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___boxed(lean_object* v_00_u03b1_1006_, lean_object* v_name_1007_, lean_object* v_bi_1008_, lean_object* v_type_1009_, lean_object* v_k_1010_, lean_object* v_kind_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_){
_start:
{
uint8_t v_bi_boxed_1019_; uint8_t v_kind_boxed_1020_; lean_object* v_res_1021_; 
v_bi_boxed_1019_ = lean_unbox(v_bi_1008_);
v_kind_boxed_1020_ = lean_unbox(v_kind_1011_);
v_res_1021_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6(v_00_u03b1_1006_, v_name_1007_, v_bi_boxed_1019_, v_type_1009_, v_k_1010_, v_kind_boxed_1020_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_);
lean_dec(v___y_1017_);
lean_dec_ref(v___y_1016_);
lean_dec(v___y_1015_);
lean_dec_ref(v___y_1014_);
lean_dec(v___y_1013_);
lean_dec_ref(v___y_1012_);
return v_res_1021_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4(lean_object* v_00_u03b1_1022_, lean_object* v_name_1023_, lean_object* v_type_1024_, lean_object* v_k_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_){
_start:
{
lean_object* v___x_1033_; 
v___x_1033_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg(v_name_1023_, v_type_1024_, v_k_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_, v___y_1031_);
return v___x_1033_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___boxed(lean_object* v_00_u03b1_1034_, lean_object* v_name_1035_, lean_object* v_type_1036_, lean_object* v_k_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_){
_start:
{
lean_object* v_res_1045_; 
v_res_1045_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4(v_00_u03b1_1034_, v_name_1035_, v_type_1036_, v_k_1037_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_);
lean_dec(v___y_1043_);
lean_dec_ref(v___y_1042_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
return v_res_1045_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6(lean_object* v_00_u03b1_1046_, lean_object* v_msg_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_){
_start:
{
lean_object* v___x_1055_; 
v___x_1055_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg(v_msg_1047_, v___y_1048_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1053_);
return v___x_1055_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___boxed(lean_object* v_00_u03b1_1056_, lean_object* v_msg_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_){
_start:
{
lean_object* v_res_1065_; 
v_res_1065_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6(v_00_u03b1_1056_, v_msg_1057_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_);
lean_dec(v___y_1063_);
lean_dec_ref(v___y_1062_);
lean_dec(v___y_1061_);
lean_dec_ref(v___y_1060_);
lean_dec(v___y_1059_);
lean_dec_ref(v___y_1058_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3(lean_object* v_as_1066_, size_t v_i_1067_, size_t v_stop_1068_, lean_object* v_b_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_){
_start:
{
lean_object* v___x_1077_; 
v___x_1077_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(v_as_1066_, v_i_1067_, v_stop_1068_, v_b_1069_, v___y_1072_, v___y_1074_, v___y_1075_);
return v___x_1077_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___boxed(lean_object* v_as_1078_, lean_object* v_i_1079_, lean_object* v_stop_1080_, lean_object* v_b_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_){
_start:
{
size_t v_i_boxed_1089_; size_t v_stop_boxed_1090_; lean_object* v_res_1091_; 
v_i_boxed_1089_ = lean_unbox_usize(v_i_1079_);
lean_dec(v_i_1079_);
v_stop_boxed_1090_ = lean_unbox_usize(v_stop_1080_);
lean_dec(v_stop_1080_);
v_res_1091_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3(v_as_1078_, v_i_boxed_1089_, v_stop_boxed_1090_, v_b_1081_, v___y_1082_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_);
lean_dec(v___y_1087_);
lean_dec_ref(v___y_1086_);
lean_dec(v___y_1085_);
lean_dec_ref(v___y_1084_);
lean_dec(v___y_1083_);
lean_dec_ref(v___y_1082_);
lean_dec_ref(v_as_1078_);
return v_res_1091_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10(lean_object* v_msgData_1092_, lean_object* v_macroStack_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_){
_start:
{
lean_object* v___x_1101_; 
v___x_1101_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg(v_msgData_1092_, v_macroStack_1093_, v___y_1098_);
return v___x_1101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___boxed(lean_object* v_msgData_1102_, lean_object* v_macroStack_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_){
_start:
{
lean_object* v_res_1111_; 
v_res_1111_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10(v_msgData_1102_, v_macroStack_1103_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_);
lean_dec(v___y_1109_);
lean_dec_ref(v___y_1108_);
lean_dec(v___y_1107_);
lean_dec_ref(v___y_1106_);
lean_dec(v___y_1105_);
lean_dec_ref(v___y_1104_);
return v_res_1111_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1112_ = lean_box(0);
v___x_1113_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_1114_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1114_, 0, v___x_1113_);
lean_ctor_set(v___x_1114_, 1, v___x_1112_);
return v___x_1114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg(){
_start:
{
lean_object* v___x_1116_; lean_object* v___x_1117_; 
v___x_1116_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg___closed__0);
v___x_1117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1117_, 0, v___x_1116_);
return v___x_1117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg___boxed(lean_object* v___y_1118_){
_start:
{
lean_object* v_res_1119_; 
v_res_1119_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg();
return v_res_1119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0(lean_object* v_00_u03b1_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_){
_start:
{
lean_object* v___x_1124_; 
v___x_1124_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg();
return v___x_1124_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___boxed(lean_object* v_00_u03b1_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_){
_start:
{
lean_object* v_res_1129_; 
v_res_1129_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0(v_00_u03b1_1125_, v___y_1126_, v___y_1127_);
lean_dec(v___y_1127_);
lean_dec_ref(v___y_1126_);
return v_res_1129_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(lean_object* v___y_1130_){
_start:
{
lean_object* v___x_1132_; lean_object* v_env_1133_; lean_object* v___x_1134_; lean_object* v_mainModule_1135_; lean_object* v___x_1136_; 
v___x_1132_ = lean_st_ref_get(v___y_1130_);
v_env_1133_ = lean_ctor_get(v___x_1132_, 0);
lean_inc_ref(v_env_1133_);
lean_dec(v___x_1132_);
v___x_1134_ = l_Lean_Environment_header(v_env_1133_);
lean_dec_ref(v_env_1133_);
v_mainModule_1135_ = lean_ctor_get(v___x_1134_, 0);
lean_inc(v_mainModule_1135_);
lean_dec_ref(v___x_1134_);
v___x_1136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1136_, 0, v_mainModule_1135_);
return v___x_1136_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg___boxed(lean_object* v___y_1137_, lean_object* v___y_1138_){
_start:
{
lean_object* v_res_1139_; 
v_res_1139_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v___y_1137_);
lean_dec(v___y_1137_);
return v_res_1139_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9(lean_object* v___y_1140_, lean_object* v___y_1141_){
_start:
{
lean_object* v___x_1143_; 
v___x_1143_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v___y_1141_);
return v___x_1143_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9___boxed(lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_){
_start:
{
lean_object* v_res_1147_; 
v_res_1147_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9(v___y_1144_, v___y_1145_);
lean_dec(v___y_1145_);
lean_dec_ref(v___y_1144_);
return v_res_1147_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0(lean_object* v___y_1148_, uint8_t v_isExporting_1149_, lean_object* v_a_x3f_1150_){
_start:
{
lean_object* v___x_1152_; lean_object* v_env_1153_; lean_object* v_messages_1154_; lean_object* v_scopes_1155_; lean_object* v_usedQuotCtxts_1156_; lean_object* v_nextMacroScope_1157_; lean_object* v_maxRecDepth_1158_; lean_object* v_ngen_1159_; lean_object* v_auxDeclNGen_1160_; lean_object* v_infoState_1161_; lean_object* v_traceState_1162_; lean_object* v_snapshotTasks_1163_; lean_object* v_prevLinterStates_1164_; lean_object* v_codeQualityEntryTasks_1165_; lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1176_; 
v___x_1152_ = lean_st_ref_take(v___y_1148_);
v_env_1153_ = lean_ctor_get(v___x_1152_, 0);
v_messages_1154_ = lean_ctor_get(v___x_1152_, 1);
v_scopes_1155_ = lean_ctor_get(v___x_1152_, 2);
v_usedQuotCtxts_1156_ = lean_ctor_get(v___x_1152_, 3);
v_nextMacroScope_1157_ = lean_ctor_get(v___x_1152_, 4);
v_maxRecDepth_1158_ = lean_ctor_get(v___x_1152_, 5);
v_ngen_1159_ = lean_ctor_get(v___x_1152_, 6);
v_auxDeclNGen_1160_ = lean_ctor_get(v___x_1152_, 7);
v_infoState_1161_ = lean_ctor_get(v___x_1152_, 8);
v_traceState_1162_ = lean_ctor_get(v___x_1152_, 9);
v_snapshotTasks_1163_ = lean_ctor_get(v___x_1152_, 10);
v_prevLinterStates_1164_ = lean_ctor_get(v___x_1152_, 11);
v_codeQualityEntryTasks_1165_ = lean_ctor_get(v___x_1152_, 12);
v_isSharedCheck_1176_ = !lean_is_exclusive(v___x_1152_);
if (v_isSharedCheck_1176_ == 0)
{
v___x_1167_ = v___x_1152_;
v_isShared_1168_ = v_isSharedCheck_1176_;
goto v_resetjp_1166_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1165_);
lean_inc(v_prevLinterStates_1164_);
lean_inc(v_snapshotTasks_1163_);
lean_inc(v_traceState_1162_);
lean_inc(v_infoState_1161_);
lean_inc(v_auxDeclNGen_1160_);
lean_inc(v_ngen_1159_);
lean_inc(v_maxRecDepth_1158_);
lean_inc(v_nextMacroScope_1157_);
lean_inc(v_usedQuotCtxts_1156_);
lean_inc(v_scopes_1155_);
lean_inc(v_messages_1154_);
lean_inc(v_env_1153_);
lean_dec(v___x_1152_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1176_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1172_; 
v___x_1169_ = lean_box(0);
v___x_1170_ = l_Lean_Environment_setExporting(v_env_1153_, v_isExporting_1149_);
if (v_isShared_1168_ == 0)
{
lean_ctor_set(v___x_1167_, 0, v___x_1170_);
v___x_1172_ = v___x_1167_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v___x_1170_);
lean_ctor_set(v_reuseFailAlloc_1175_, 1, v_messages_1154_);
lean_ctor_set(v_reuseFailAlloc_1175_, 2, v_scopes_1155_);
lean_ctor_set(v_reuseFailAlloc_1175_, 3, v_usedQuotCtxts_1156_);
lean_ctor_set(v_reuseFailAlloc_1175_, 4, v_nextMacroScope_1157_);
lean_ctor_set(v_reuseFailAlloc_1175_, 5, v_maxRecDepth_1158_);
lean_ctor_set(v_reuseFailAlloc_1175_, 6, v_ngen_1159_);
lean_ctor_set(v_reuseFailAlloc_1175_, 7, v_auxDeclNGen_1160_);
lean_ctor_set(v_reuseFailAlloc_1175_, 8, v_infoState_1161_);
lean_ctor_set(v_reuseFailAlloc_1175_, 9, v_traceState_1162_);
lean_ctor_set(v_reuseFailAlloc_1175_, 10, v_snapshotTasks_1163_);
lean_ctor_set(v_reuseFailAlloc_1175_, 11, v_prevLinterStates_1164_);
lean_ctor_set(v_reuseFailAlloc_1175_, 12, v_codeQualityEntryTasks_1165_);
v___x_1172_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; 
v___x_1173_ = lean_st_ref_put(v___y_1148_, v___x_1172_);
v___x_1174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1174_, 0, v___x_1169_);
return v___x_1174_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0___boxed(lean_object* v___y_1177_, lean_object* v_isExporting_1178_, lean_object* v_a_x3f_1179_, lean_object* v___y_1180_){
_start:
{
uint8_t v_isExporting_boxed_1181_; lean_object* v_res_1182_; 
v_isExporting_boxed_1181_ = lean_unbox(v_isExporting_1178_);
v_res_1182_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0(v___y_1177_, v_isExporting_boxed_1181_, v_a_x3f_1179_);
lean_dec(v_a_x3f_1179_);
lean_dec(v___y_1177_);
return v_res_1182_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(lean_object* v_x_1183_, uint8_t v_isExporting_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_){
_start:
{
lean_object* v___x_1188_; lean_object* v_env_1189_; lean_object* v___x_1190_; uint8_t v_isModule_1191_; 
v___x_1188_ = lean_st_ref_get(v___y_1186_);
v_env_1189_ = lean_ctor_get(v___x_1188_, 0);
lean_inc_ref(v_env_1189_);
lean_dec(v___x_1188_);
v___x_1190_ = l_Lean_Environment_header(v_env_1189_);
v_isModule_1191_ = lean_ctor_get_uint8(v___x_1190_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_1190_);
if (v_isModule_1191_ == 0)
{
lean_object* v___x_1192_; 
lean_dec_ref(v_env_1189_);
lean_inc(v___y_1186_);
lean_inc_ref(v___y_1185_);
v___x_1192_ = lean_apply_3(v_x_1183_, v___y_1185_, v___y_1186_, lean_box(0));
return v___x_1192_;
}
else
{
uint8_t v_isExporting_1193_; 
v_isExporting_1193_ = lean_ctor_get_uint8(v_env_1189_, sizeof(void*)*8);
lean_dec_ref(v_env_1189_);
if (v_isExporting_1184_ == 0)
{
if (v_isExporting_1193_ == 0)
{
lean_object* v___x_1247_; 
lean_inc(v___y_1186_);
lean_inc_ref(v___y_1185_);
v___x_1247_ = lean_apply_3(v_x_1183_, v___y_1185_, v___y_1186_, lean_box(0));
return v___x_1247_;
}
else
{
goto v___jp_1194_;
}
}
else
{
if (v_isExporting_1193_ == 0)
{
goto v___jp_1194_;
}
else
{
lean_object* v___x_1248_; 
lean_inc(v___y_1186_);
lean_inc_ref(v___y_1185_);
v___x_1248_ = lean_apply_3(v_x_1183_, v___y_1185_, v___y_1186_, lean_box(0));
return v___x_1248_;
}
}
v___jp_1194_:
{
lean_object* v___x_1195_; lean_object* v_env_1196_; lean_object* v_messages_1197_; lean_object* v_scopes_1198_; lean_object* v_usedQuotCtxts_1199_; lean_object* v_nextMacroScope_1200_; lean_object* v_maxRecDepth_1201_; lean_object* v_ngen_1202_; lean_object* v_auxDeclNGen_1203_; lean_object* v_infoState_1204_; lean_object* v_traceState_1205_; lean_object* v_snapshotTasks_1206_; lean_object* v_prevLinterStates_1207_; lean_object* v_codeQualityEntryTasks_1208_; lean_object* v___x_1210_; uint8_t v_isShared_1211_; uint8_t v_isSharedCheck_1246_; 
v___x_1195_ = lean_st_ref_take(v___y_1186_);
v_env_1196_ = lean_ctor_get(v___x_1195_, 0);
v_messages_1197_ = lean_ctor_get(v___x_1195_, 1);
v_scopes_1198_ = lean_ctor_get(v___x_1195_, 2);
v_usedQuotCtxts_1199_ = lean_ctor_get(v___x_1195_, 3);
v_nextMacroScope_1200_ = lean_ctor_get(v___x_1195_, 4);
v_maxRecDepth_1201_ = lean_ctor_get(v___x_1195_, 5);
v_ngen_1202_ = lean_ctor_get(v___x_1195_, 6);
v_auxDeclNGen_1203_ = lean_ctor_get(v___x_1195_, 7);
v_infoState_1204_ = lean_ctor_get(v___x_1195_, 8);
v_traceState_1205_ = lean_ctor_get(v___x_1195_, 9);
v_snapshotTasks_1206_ = lean_ctor_get(v___x_1195_, 10);
v_prevLinterStates_1207_ = lean_ctor_get(v___x_1195_, 11);
v_codeQualityEntryTasks_1208_ = lean_ctor_get(v___x_1195_, 12);
v_isSharedCheck_1246_ = !lean_is_exclusive(v___x_1195_);
if (v_isSharedCheck_1246_ == 0)
{
v___x_1210_ = v___x_1195_;
v_isShared_1211_ = v_isSharedCheck_1246_;
goto v_resetjp_1209_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1208_);
lean_inc(v_prevLinterStates_1207_);
lean_inc(v_snapshotTasks_1206_);
lean_inc(v_traceState_1205_);
lean_inc(v_infoState_1204_);
lean_inc(v_auxDeclNGen_1203_);
lean_inc(v_ngen_1202_);
lean_inc(v_maxRecDepth_1201_);
lean_inc(v_nextMacroScope_1200_);
lean_inc(v_usedQuotCtxts_1199_);
lean_inc(v_scopes_1198_);
lean_inc(v_messages_1197_);
lean_inc(v_env_1196_);
lean_dec(v___x_1195_);
v___x_1210_ = lean_box(0);
v_isShared_1211_ = v_isSharedCheck_1246_;
goto v_resetjp_1209_;
}
v_resetjp_1209_:
{
lean_object* v___x_1212_; lean_object* v___x_1214_; 
v___x_1212_ = l_Lean_Environment_setExporting(v_env_1196_, v_isExporting_1184_);
if (v_isShared_1211_ == 0)
{
lean_ctor_set(v___x_1210_, 0, v___x_1212_);
v___x_1214_ = v___x_1210_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1245_; 
v_reuseFailAlloc_1245_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1245_, 0, v___x_1212_);
lean_ctor_set(v_reuseFailAlloc_1245_, 1, v_messages_1197_);
lean_ctor_set(v_reuseFailAlloc_1245_, 2, v_scopes_1198_);
lean_ctor_set(v_reuseFailAlloc_1245_, 3, v_usedQuotCtxts_1199_);
lean_ctor_set(v_reuseFailAlloc_1245_, 4, v_nextMacroScope_1200_);
lean_ctor_set(v_reuseFailAlloc_1245_, 5, v_maxRecDepth_1201_);
lean_ctor_set(v_reuseFailAlloc_1245_, 6, v_ngen_1202_);
lean_ctor_set(v_reuseFailAlloc_1245_, 7, v_auxDeclNGen_1203_);
lean_ctor_set(v_reuseFailAlloc_1245_, 8, v_infoState_1204_);
lean_ctor_set(v_reuseFailAlloc_1245_, 9, v_traceState_1205_);
lean_ctor_set(v_reuseFailAlloc_1245_, 10, v_snapshotTasks_1206_);
lean_ctor_set(v_reuseFailAlloc_1245_, 11, v_prevLinterStates_1207_);
lean_ctor_set(v_reuseFailAlloc_1245_, 12, v_codeQualityEntryTasks_1208_);
v___x_1214_ = v_reuseFailAlloc_1245_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
lean_object* v___x_1215_; lean_object* v_r_1216_; 
v___x_1215_ = lean_st_ref_put(v___y_1186_, v___x_1214_);
lean_inc(v___y_1186_);
lean_inc_ref(v___y_1185_);
v_r_1216_ = lean_apply_3(v_x_1183_, v___y_1185_, v___y_1186_, lean_box(0));
if (lean_obj_tag(v_r_1216_) == 0)
{
lean_object* v_a_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1233_; 
v_a_1217_ = lean_ctor_get(v_r_1216_, 0);
v_isSharedCheck_1233_ = !lean_is_exclusive(v_r_1216_);
if (v_isSharedCheck_1233_ == 0)
{
v___x_1219_ = v_r_1216_;
v_isShared_1220_ = v_isSharedCheck_1233_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_a_1217_);
lean_dec(v_r_1216_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1233_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1222_; 
lean_inc(v_a_1217_);
if (v_isShared_1220_ == 0)
{
lean_ctor_set_tag(v___x_1219_, 1);
v___x_1222_ = v___x_1219_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v_a_1217_);
v___x_1222_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
lean_object* v___x_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1230_; 
v___x_1223_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0(v___y_1186_, v_isExporting_1193_, v___x_1222_);
lean_dec_ref(v___x_1222_);
v_isSharedCheck_1230_ = !lean_is_exclusive(v___x_1223_);
if (v_isSharedCheck_1230_ == 0)
{
lean_object* v_unused_1231_; 
v_unused_1231_ = lean_ctor_get(v___x_1223_, 0);
lean_dec(v_unused_1231_);
v___x_1225_ = v___x_1223_;
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
else
{
lean_dec(v___x_1223_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
lean_object* v___x_1228_; 
if (v_isShared_1226_ == 0)
{
lean_ctor_set(v___x_1225_, 0, v_a_1217_);
v___x_1228_ = v___x_1225_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v_a_1217_);
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
else
{
lean_object* v_a_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1238_; uint8_t v_isShared_1239_; uint8_t v_isSharedCheck_1243_; 
v_a_1234_ = lean_ctor_get(v_r_1216_, 0);
lean_inc(v_a_1234_);
lean_dec_ref_known(v_r_1216_, 1);
v___x_1235_ = lean_box(0);
v___x_1236_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0(v___y_1186_, v_isExporting_1193_, v___x_1235_);
v_isSharedCheck_1243_ = !lean_is_exclusive(v___x_1236_);
if (v_isSharedCheck_1243_ == 0)
{
lean_object* v_unused_1244_; 
v_unused_1244_ = lean_ctor_get(v___x_1236_, 0);
lean_dec(v_unused_1244_);
v___x_1238_ = v___x_1236_;
v_isShared_1239_ = v_isSharedCheck_1243_;
goto v_resetjp_1237_;
}
else
{
lean_dec(v___x_1236_);
v___x_1238_ = lean_box(0);
v_isShared_1239_ = v_isSharedCheck_1243_;
goto v_resetjp_1237_;
}
v_resetjp_1237_:
{
lean_object* v___x_1241_; 
if (v_isShared_1239_ == 0)
{
lean_ctor_set_tag(v___x_1238_, 1);
lean_ctor_set(v___x_1238_, 0, v_a_1234_);
v___x_1241_ = v___x_1238_;
goto v_reusejp_1240_;
}
else
{
lean_object* v_reuseFailAlloc_1242_; 
v_reuseFailAlloc_1242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1242_, 0, v_a_1234_);
v___x_1241_ = v_reuseFailAlloc_1242_;
goto v_reusejp_1240_;
}
v_reusejp_1240_:
{
return v___x_1241_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___boxed(lean_object* v_x_1249_, lean_object* v_isExporting_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_){
_start:
{
uint8_t v_isExporting_boxed_1254_; lean_object* v_res_1255_; 
v_isExporting_boxed_1254_ = lean_unbox(v_isExporting_1250_);
v_res_1255_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(v_x_1249_, v_isExporting_boxed_1254_, v___y_1251_, v___y_1252_);
lean_dec(v___y_1252_);
lean_dec_ref(v___y_1251_);
return v_res_1255_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10(lean_object* v_00_u03b1_1256_, lean_object* v_x_1257_, uint8_t v_isExporting_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_){
_start:
{
lean_object* v___x_1262_; 
v___x_1262_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(v_x_1257_, v_isExporting_1258_, v___y_1259_, v___y_1260_);
return v___x_1262_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___boxed(lean_object* v_00_u03b1_1263_, lean_object* v_x_1264_, lean_object* v_isExporting_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_){
_start:
{
uint8_t v_isExporting_boxed_1269_; lean_object* v_res_1270_; 
v_isExporting_boxed_1269_ = lean_unbox(v_isExporting_1265_);
v_res_1270_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10(v_00_u03b1_1263_, v_x_1264_, v_isExporting_boxed_1269_, v___y_1266_, v___y_1267_);
lean_dec(v___y_1267_);
lean_dec_ref(v___y_1266_);
return v_res_1270_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(size_t v_sz_1271_, size_t v_i_1272_, lean_object* v_bs_1273_){
_start:
{
uint8_t v___x_1274_; 
v___x_1274_ = lean_usize_dec_lt(v_i_1272_, v_sz_1271_);
if (v___x_1274_ == 0)
{
return v_bs_1273_;
}
else
{
lean_object* v_v_1275_; lean_object* v___x_1276_; lean_object* v_bs_x27_1277_; size_t v___x_1278_; size_t v___x_1279_; lean_object* v___x_1280_; 
v_v_1275_ = lean_array_uget(v_bs_1273_, v_i_1272_);
v___x_1276_ = lean_unsigned_to_nat(0u);
v_bs_x27_1277_ = lean_array_uset(v_bs_1273_, v_i_1272_, v___x_1276_);
v___x_1278_ = ((size_t)1ULL);
v___x_1279_ = lean_usize_add(v_i_1272_, v___x_1278_);
v___x_1280_ = lean_array_uset(v_bs_x27_1277_, v_i_1272_, v_v_1275_);
v_i_1272_ = v___x_1279_;
v_bs_1273_ = v___x_1280_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2___boxed(lean_object* v_sz_1282_, lean_object* v_i_1283_, lean_object* v_bs_1284_){
_start:
{
size_t v_sz_boxed_1285_; size_t v_i_boxed_1286_; lean_object* v_res_1287_; 
v_sz_boxed_1285_ = lean_unbox_usize(v_sz_1282_);
lean_dec(v_sz_1282_);
v_i_boxed_1286_ = lean_unbox_usize(v_i_1283_);
lean_dec(v_i_1283_);
v_res_1287_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(v_sz_boxed_1285_, v_i_boxed_1286_, v_bs_1284_);
return v_res_1287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17___redArg(lean_object* v_t_1288_, lean_object* v___y_1289_){
_start:
{
lean_object* v___x_1291_; lean_object* v_infoState_1292_; uint8_t v_enabled_1293_; 
v___x_1291_ = lean_st_ref_get(v___y_1289_);
v_infoState_1292_ = lean_ctor_get(v___x_1291_, 8);
lean_inc_ref(v_infoState_1292_);
lean_dec(v___x_1291_);
v_enabled_1293_ = lean_ctor_get_uint8(v_infoState_1292_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1292_);
if (v_enabled_1293_ == 0)
{
lean_object* v___x_1294_; lean_object* v___x_1295_; 
lean_dec_ref(v_t_1288_);
v___x_1294_ = lean_box(0);
v___x_1295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1294_);
return v___x_1295_;
}
else
{
lean_object* v___x_1296_; lean_object* v_infoState_1297_; lean_object* v_env_1298_; lean_object* v_messages_1299_; lean_object* v_scopes_1300_; lean_object* v_usedQuotCtxts_1301_; lean_object* v_nextMacroScope_1302_; lean_object* v_maxRecDepth_1303_; lean_object* v_ngen_1304_; lean_object* v_auxDeclNGen_1305_; lean_object* v_traceState_1306_; lean_object* v_snapshotTasks_1307_; lean_object* v_prevLinterStates_1308_; lean_object* v_codeQualityEntryTasks_1309_; lean_object* v___x_1311_; uint8_t v_isShared_1312_; uint8_t v_isSharedCheck_1331_; 
v___x_1296_ = lean_st_ref_take(v___y_1289_);
v_infoState_1297_ = lean_ctor_get(v___x_1296_, 8);
v_env_1298_ = lean_ctor_get(v___x_1296_, 0);
v_messages_1299_ = lean_ctor_get(v___x_1296_, 1);
v_scopes_1300_ = lean_ctor_get(v___x_1296_, 2);
v_usedQuotCtxts_1301_ = lean_ctor_get(v___x_1296_, 3);
v_nextMacroScope_1302_ = lean_ctor_get(v___x_1296_, 4);
v_maxRecDepth_1303_ = lean_ctor_get(v___x_1296_, 5);
v_ngen_1304_ = lean_ctor_get(v___x_1296_, 6);
v_auxDeclNGen_1305_ = lean_ctor_get(v___x_1296_, 7);
v_traceState_1306_ = lean_ctor_get(v___x_1296_, 9);
v_snapshotTasks_1307_ = lean_ctor_get(v___x_1296_, 10);
v_prevLinterStates_1308_ = lean_ctor_get(v___x_1296_, 11);
v_codeQualityEntryTasks_1309_ = lean_ctor_get(v___x_1296_, 12);
v_isSharedCheck_1331_ = !lean_is_exclusive(v___x_1296_);
if (v_isSharedCheck_1331_ == 0)
{
v___x_1311_ = v___x_1296_;
v_isShared_1312_ = v_isSharedCheck_1331_;
goto v_resetjp_1310_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1309_);
lean_inc(v_prevLinterStates_1308_);
lean_inc(v_snapshotTasks_1307_);
lean_inc(v_traceState_1306_);
lean_inc(v_infoState_1297_);
lean_inc(v_auxDeclNGen_1305_);
lean_inc(v_ngen_1304_);
lean_inc(v_maxRecDepth_1303_);
lean_inc(v_nextMacroScope_1302_);
lean_inc(v_usedQuotCtxts_1301_);
lean_inc(v_scopes_1300_);
lean_inc(v_messages_1299_);
lean_inc(v_env_1298_);
lean_dec(v___x_1296_);
v___x_1311_ = lean_box(0);
v_isShared_1312_ = v_isSharedCheck_1331_;
goto v_resetjp_1310_;
}
v_resetjp_1310_:
{
uint8_t v_enabled_1313_; lean_object* v_assignment_1314_; lean_object* v_lazyAssignment_1315_; lean_object* v_trees_1316_; lean_object* v___x_1318_; uint8_t v_isShared_1319_; uint8_t v_isSharedCheck_1330_; 
v_enabled_1313_ = lean_ctor_get_uint8(v_infoState_1297_, sizeof(void*)*3);
v_assignment_1314_ = lean_ctor_get(v_infoState_1297_, 0);
v_lazyAssignment_1315_ = lean_ctor_get(v_infoState_1297_, 1);
v_trees_1316_ = lean_ctor_get(v_infoState_1297_, 2);
v_isSharedCheck_1330_ = !lean_is_exclusive(v_infoState_1297_);
if (v_isSharedCheck_1330_ == 0)
{
v___x_1318_ = v_infoState_1297_;
v_isShared_1319_ = v_isSharedCheck_1330_;
goto v_resetjp_1317_;
}
else
{
lean_inc(v_trees_1316_);
lean_inc(v_lazyAssignment_1315_);
lean_inc(v_assignment_1314_);
lean_dec(v_infoState_1297_);
v___x_1318_ = lean_box(0);
v_isShared_1319_ = v_isSharedCheck_1330_;
goto v_resetjp_1317_;
}
v_resetjp_1317_:
{
lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1323_; 
v___x_1320_ = lean_box(0);
v___x_1321_ = l_Lean_PersistentArray_push___redArg(v_trees_1316_, v_t_1288_);
if (v_isShared_1319_ == 0)
{
lean_ctor_set(v___x_1318_, 2, v___x_1321_);
v___x_1323_ = v___x_1318_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v_assignment_1314_);
lean_ctor_set(v_reuseFailAlloc_1329_, 1, v_lazyAssignment_1315_);
lean_ctor_set(v_reuseFailAlloc_1329_, 2, v___x_1321_);
lean_ctor_set_uint8(v_reuseFailAlloc_1329_, sizeof(void*)*3, v_enabled_1313_);
v___x_1323_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
lean_object* v___x_1325_; 
if (v_isShared_1312_ == 0)
{
lean_ctor_set(v___x_1311_, 8, v___x_1323_);
v___x_1325_ = v___x_1311_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v_env_1298_);
lean_ctor_set(v_reuseFailAlloc_1328_, 1, v_messages_1299_);
lean_ctor_set(v_reuseFailAlloc_1328_, 2, v_scopes_1300_);
lean_ctor_set(v_reuseFailAlloc_1328_, 3, v_usedQuotCtxts_1301_);
lean_ctor_set(v_reuseFailAlloc_1328_, 4, v_nextMacroScope_1302_);
lean_ctor_set(v_reuseFailAlloc_1328_, 5, v_maxRecDepth_1303_);
lean_ctor_set(v_reuseFailAlloc_1328_, 6, v_ngen_1304_);
lean_ctor_set(v_reuseFailAlloc_1328_, 7, v_auxDeclNGen_1305_);
lean_ctor_set(v_reuseFailAlloc_1328_, 8, v___x_1323_);
lean_ctor_set(v_reuseFailAlloc_1328_, 9, v_traceState_1306_);
lean_ctor_set(v_reuseFailAlloc_1328_, 10, v_snapshotTasks_1307_);
lean_ctor_set(v_reuseFailAlloc_1328_, 11, v_prevLinterStates_1308_);
lean_ctor_set(v_reuseFailAlloc_1328_, 12, v_codeQualityEntryTasks_1309_);
v___x_1325_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1324_;
}
v_reusejp_1324_:
{
lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1326_ = lean_st_ref_put(v___y_1289_, v___x_1325_);
v___x_1327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1327_, 0, v___x_1320_);
return v___x_1327_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17___redArg___boxed(lean_object* v_t_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_){
_start:
{
lean_object* v_res_1335_; 
v_res_1335_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17___redArg(v_t_1332_, v___y_1333_);
lean_dec(v___y_1333_);
return v_res_1335_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__0(void){
_start:
{
lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; 
v___x_1336_ = lean_unsigned_to_nat(32u);
v___x_1337_ = lean_mk_empty_array_with_capacity(v___x_1336_);
v___x_1338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1338_, 0, v___x_1337_);
return v___x_1338_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__1(void){
_start:
{
size_t v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; 
v___x_1339_ = ((size_t)5ULL);
v___x_1340_ = lean_unsigned_to_nat(0u);
v___x_1341_ = lean_unsigned_to_nat(32u);
v___x_1342_ = lean_mk_empty_array_with_capacity(v___x_1341_);
v___x_1343_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__0);
v___x_1344_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1344_, 0, v___x_1343_);
lean_ctor_set(v___x_1344_, 1, v___x_1342_);
lean_ctor_set(v___x_1344_, 2, v___x_1340_);
lean_ctor_set(v___x_1344_, 3, v___x_1340_);
lean_ctor_set_usize(v___x_1344_, 4, v___x_1339_);
return v___x_1344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10(lean_object* v_t_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_){
_start:
{
lean_object* v___x_1349_; lean_object* v_infoState_1350_; uint8_t v_enabled_1351_; 
v___x_1349_ = lean_st_ref_get(v___y_1347_);
v_infoState_1350_ = lean_ctor_get(v___x_1349_, 8);
lean_inc_ref(v_infoState_1350_);
lean_dec(v___x_1349_);
v_enabled_1351_ = lean_ctor_get_uint8(v_infoState_1350_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1350_);
if (v_enabled_1351_ == 0)
{
lean_object* v___x_1352_; lean_object* v___x_1353_; 
lean_dec_ref(v_t_1345_);
v___x_1352_ = lean_box(0);
v___x_1353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1353_, 0, v___x_1352_);
return v___x_1353_;
}
else
{
lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; 
v___x_1354_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___closed__1);
v___x_1355_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1355_, 0, v_t_1345_);
lean_ctor_set(v___x_1355_, 1, v___x_1354_);
v___x_1356_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17___redArg(v___x_1355_, v___y_1347_);
return v___x_1356_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10___boxed(lean_object* v_t_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_){
_start:
{
lean_object* v_res_1361_; 
v_res_1361_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10(v_t_1357_, v___y_1358_, v___y_1359_);
lean_dec(v___y_1359_);
lean_dec_ref(v___y_1358_);
return v_res_1361_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__0(void){
_start:
{
lean_object* v___x_1362_; 
v___x_1362_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1362_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__1(void){
_start:
{
lean_object* v___x_1363_; lean_object* v___x_1364_; 
v___x_1363_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__0);
v___x_1364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1364_, 0, v___x_1363_);
return v___x_1364_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__2(void){
_start:
{
lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; 
v___x_1365_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__1);
v___x_1366_ = lean_unsigned_to_nat(0u);
v___x_1367_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1367_, 0, v___x_1366_);
lean_ctor_set(v___x_1367_, 1, v___x_1366_);
lean_ctor_set(v___x_1367_, 2, v___x_1366_);
lean_ctor_set(v___x_1367_, 3, v___x_1366_);
lean_ctor_set(v___x_1367_, 4, v___x_1365_);
lean_ctor_set(v___x_1367_, 5, v___x_1365_);
lean_ctor_set(v___x_1367_, 6, v___x_1365_);
lean_ctor_set(v___x_1367_, 7, v___x_1365_);
lean_ctor_set(v___x_1367_, 8, v___x_1365_);
lean_ctor_set(v___x_1367_, 9, v___x_1365_);
lean_ctor_set(v___x_1367_, 10, v___x_1365_);
return v___x_1367_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__3(void){
_start:
{
lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; 
v___x_1368_ = lean_unsigned_to_nat(32u);
v___x_1369_ = lean_mk_empty_array_with_capacity(v___x_1368_);
v___x_1370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1370_, 0, v___x_1369_);
return v___x_1370_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__4(void){
_start:
{
size_t v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; 
v___x_1371_ = ((size_t)5ULL);
v___x_1372_ = lean_unsigned_to_nat(0u);
v___x_1373_ = lean_unsigned_to_nat(32u);
v___x_1374_ = lean_mk_empty_array_with_capacity(v___x_1373_);
v___x_1375_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__3);
v___x_1376_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1376_, 0, v___x_1375_);
lean_ctor_set(v___x_1376_, 1, v___x_1374_);
lean_ctor_set(v___x_1376_, 2, v___x_1372_);
lean_ctor_set(v___x_1376_, 3, v___x_1372_);
lean_ctor_set_usize(v___x_1376_, 4, v___x_1371_);
return v___x_1376_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__5(void){
_start:
{
lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; 
v___x_1377_ = lean_box(1);
v___x_1378_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__4);
v___x_1379_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__1);
v___x_1380_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1380_, 0, v___x_1379_);
lean_ctor_set(v___x_1380_, 1, v___x_1378_);
lean_ctor_set(v___x_1380_, 2, v___x_1377_);
return v___x_1380_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg(lean_object* v_msgData_1381_, lean_object* v___y_1382_){
_start:
{
lean_object* v___x_1384_; lean_object* v_env_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v_scopes_1388_; lean_object* v___x_1389_; lean_object* v_opts_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; 
v___x_1384_ = lean_st_ref_get(v___y_1382_);
v_env_1385_ = lean_ctor_get(v___x_1384_, 0);
lean_inc_ref(v_env_1385_);
lean_dec(v___x_1384_);
v___x_1386_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1387_ = lean_st_ref_get(v___y_1382_);
v_scopes_1388_ = lean_ctor_get(v___x_1387_, 2);
lean_inc(v_scopes_1388_);
lean_dec(v___x_1387_);
v___x_1389_ = l_List_head_x21___redArg(v___x_1386_, v_scopes_1388_);
lean_dec(v_scopes_1388_);
v_opts_1390_ = lean_ctor_get(v___x_1389_, 1);
lean_inc_ref(v_opts_1390_);
lean_dec(v___x_1389_);
v___x_1391_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__2);
v___x_1392_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__5);
v___x_1393_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1393_, 0, v_env_1385_);
lean_ctor_set(v___x_1393_, 1, v___x_1391_);
lean_ctor_set(v___x_1393_, 2, v___x_1392_);
lean_ctor_set(v___x_1393_, 3, v_opts_1390_);
v___x_1394_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1394_, 0, v___x_1393_);
lean_ctor_set(v___x_1394_, 1, v_msgData_1381_);
v___x_1395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1395_, 0, v___x_1394_);
return v___x_1395_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___boxed(lean_object* v_msgData_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_){
_start:
{
lean_object* v_res_1399_; 
v_res_1399_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg(v_msgData_1396_, v___y_1397_);
lean_dec(v___y_1397_);
return v_res_1399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21___redArg(lean_object* v_msgData_1400_, lean_object* v_macroStack_1401_, lean_object* v___y_1402_){
_start:
{
lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v_scopes_1406_; lean_object* v___x_1407_; lean_object* v_opts_1408_; lean_object* v___x_1409_; uint8_t v___x_1410_; 
v___x_1404_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1405_ = lean_st_ref_get(v___y_1402_);
v_scopes_1406_ = lean_ctor_get(v___x_1405_, 2);
lean_inc(v_scopes_1406_);
lean_dec(v___x_1405_);
v___x_1407_ = l_List_head_x21___redArg(v___x_1404_, v_scopes_1406_);
lean_dec(v_scopes_1406_);
v_opts_1408_ = lean_ctor_get(v___x_1407_, 1);
lean_inc_ref(v_opts_1408_);
lean_dec(v___x_1407_);
v___x_1409_ = l_Lean_Elab_pp_macroStack;
v___x_1410_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__12(v_opts_1408_, v___x_1409_);
lean_dec_ref(v_opts_1408_);
if (v___x_1410_ == 0)
{
lean_object* v___x_1411_; 
lean_dec(v_macroStack_1401_);
v___x_1411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1411_, 0, v_msgData_1400_);
return v___x_1411_;
}
else
{
if (lean_obj_tag(v_macroStack_1401_) == 0)
{
lean_object* v___x_1412_; 
v___x_1412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1412_, 0, v_msgData_1400_);
return v___x_1412_;
}
else
{
lean_object* v_head_1413_; lean_object* v_after_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1429_; 
v_head_1413_ = lean_ctor_get(v_macroStack_1401_, 0);
lean_inc(v_head_1413_);
v_after_1414_ = lean_ctor_get(v_head_1413_, 1);
v_isSharedCheck_1429_ = !lean_is_exclusive(v_head_1413_);
if (v_isSharedCheck_1429_ == 0)
{
lean_object* v_unused_1430_; 
v_unused_1430_ = lean_ctor_get(v_head_1413_, 0);
lean_dec(v_unused_1430_);
v___x_1416_ = v_head_1413_;
v_isShared_1417_ = v_isSharedCheck_1429_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_after_1414_);
lean_dec(v_head_1413_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1429_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___x_1418_; lean_object* v___x_1420_; 
v___x_1418_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13___closed__0);
if (v_isShared_1417_ == 0)
{
lean_ctor_set_tag(v___x_1416_, 7);
lean_ctor_set(v___x_1416_, 1, v___x_1418_);
lean_ctor_set(v___x_1416_, 0, v_msgData_1400_);
v___x_1420_ = v___x_1416_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v_msgData_1400_);
lean_ctor_set(v_reuseFailAlloc_1428_, 1, v___x_1418_);
v___x_1420_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v_msgData_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; 
v___x_1421_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10___redArg___closed__2);
v___x_1422_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1420_);
lean_ctor_set(v___x_1422_, 1, v___x_1421_);
v___x_1423_ = l_Lean_MessageData_ofSyntax(v_after_1414_);
v___x_1424_ = l_Lean_indentD(v___x_1423_);
v_msgData_1425_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_1425_, 0, v___x_1422_);
lean_ctor_set(v_msgData_1425_, 1, v___x_1424_);
v___x_1426_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__13(v_msgData_1425_, v_macroStack_1401_);
v___x_1427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1427_, 0, v___x_1426_);
return v___x_1427_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21___redArg___boxed(lean_object* v_msgData_1431_, lean_object* v_macroStack_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_){
_start:
{
lean_object* v_res_1435_; 
v_res_1435_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21___redArg(v_msgData_1431_, v_macroStack_1432_, v___y_1433_);
lean_dec(v___y_1433_);
return v_res_1435_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15___redArg(lean_object* v_msg_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_){
_start:
{
lean_object* v___x_1440_; 
v___x_1440_ = l_Lean_Elab_Command_getRef___redArg(v___y_1437_);
if (lean_obj_tag(v___x_1440_) == 0)
{
lean_object* v_a_1441_; lean_object* v_macroStack_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v_a_1445_; lean_object* v___x_1446_; lean_object* v_a_1447_; lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1455_; 
v_a_1441_ = lean_ctor_get(v___x_1440_, 0);
lean_inc(v_a_1441_);
lean_dec_ref_known(v___x_1440_, 1);
v_macroStack_1442_ = lean_ctor_get(v___y_1437_, 4);
v___x_1443_ = l_Lean_Elab_getBetterRef(v_a_1441_, v_macroStack_1442_);
lean_dec(v_a_1441_);
v___x_1444_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg(v_msg_1436_, v___y_1438_);
v_a_1445_ = lean_ctor_get(v___x_1444_, 0);
lean_inc(v_a_1445_);
lean_dec_ref(v___x_1444_);
lean_inc(v_macroStack_1442_);
v___x_1446_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21___redArg(v_a_1445_, v_macroStack_1442_, v___y_1438_);
v_a_1447_ = lean_ctor_get(v___x_1446_, 0);
v_isSharedCheck_1455_ = !lean_is_exclusive(v___x_1446_);
if (v_isSharedCheck_1455_ == 0)
{
v___x_1449_ = v___x_1446_;
v_isShared_1450_ = v_isSharedCheck_1455_;
goto v_resetjp_1448_;
}
else
{
lean_inc(v_a_1447_);
lean_dec(v___x_1446_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1455_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
lean_object* v___x_1451_; lean_object* v___x_1453_; 
v___x_1451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1451_, 0, v___x_1443_);
lean_ctor_set(v___x_1451_, 1, v_a_1447_);
if (v_isShared_1450_ == 0)
{
lean_ctor_set_tag(v___x_1449_, 1);
lean_ctor_set(v___x_1449_, 0, v___x_1451_);
v___x_1453_ = v___x_1449_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v___x_1451_);
v___x_1453_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
return v___x_1453_;
}
}
}
else
{
lean_object* v_a_1456_; lean_object* v___x_1458_; uint8_t v_isShared_1459_; uint8_t v_isSharedCheck_1463_; 
lean_dec_ref(v_msg_1436_);
v_a_1456_ = lean_ctor_get(v___x_1440_, 0);
v_isSharedCheck_1463_ = !lean_is_exclusive(v___x_1440_);
if (v_isSharedCheck_1463_ == 0)
{
v___x_1458_ = v___x_1440_;
v_isShared_1459_ = v_isSharedCheck_1463_;
goto v_resetjp_1457_;
}
else
{
lean_inc(v_a_1456_);
lean_dec(v___x_1440_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15___redArg___boxed(lean_object* v_msg_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_){
_start:
{
lean_object* v_res_1468_; 
v_res_1468_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15___redArg(v_msg_1464_, v___y_1465_, v___y_1466_);
lean_dec(v___y_1466_);
lean_dec_ref(v___y_1465_);
return v_res_1468_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___redArg(lean_object* v_ref_1469_, lean_object* v_msg_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_){
_start:
{
lean_object* v___x_1474_; 
v___x_1474_ = l_Lean_Elab_Command_getRef___redArg(v___y_1471_);
if (lean_obj_tag(v___x_1474_) == 0)
{
lean_object* v_a_1475_; lean_object* v_fileName_1476_; lean_object* v_fileMap_1477_; lean_object* v_currRecDepth_1478_; lean_object* v_cmdPos_1479_; lean_object* v_macroStack_1480_; lean_object* v_quotContext_x3f_1481_; lean_object* v_currMacroScope_1482_; lean_object* v_snap_x3f_1483_; lean_object* v_cancelTk_x3f_1484_; uint8_t v_suppressElabErrors_1485_; lean_object* v_ref_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; 
v_a_1475_ = lean_ctor_get(v___x_1474_, 0);
lean_inc(v_a_1475_);
lean_dec_ref_known(v___x_1474_, 1);
v_fileName_1476_ = lean_ctor_get(v___y_1471_, 0);
v_fileMap_1477_ = lean_ctor_get(v___y_1471_, 1);
v_currRecDepth_1478_ = lean_ctor_get(v___y_1471_, 2);
v_cmdPos_1479_ = lean_ctor_get(v___y_1471_, 3);
v_macroStack_1480_ = lean_ctor_get(v___y_1471_, 4);
v_quotContext_x3f_1481_ = lean_ctor_get(v___y_1471_, 5);
v_currMacroScope_1482_ = lean_ctor_get(v___y_1471_, 6);
v_snap_x3f_1483_ = lean_ctor_get(v___y_1471_, 8);
v_cancelTk_x3f_1484_ = lean_ctor_get(v___y_1471_, 9);
v_suppressElabErrors_1485_ = lean_ctor_get_uint8(v___y_1471_, sizeof(void*)*10);
v_ref_1486_ = l_Lean_replaceRef(v_ref_1469_, v_a_1475_);
lean_dec(v_a_1475_);
lean_inc(v_cancelTk_x3f_1484_);
lean_inc(v_snap_x3f_1483_);
lean_inc(v_currMacroScope_1482_);
lean_inc(v_quotContext_x3f_1481_);
lean_inc(v_macroStack_1480_);
lean_inc(v_cmdPos_1479_);
lean_inc(v_currRecDepth_1478_);
lean_inc_ref(v_fileMap_1477_);
lean_inc_ref(v_fileName_1476_);
v___x_1487_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_1487_, 0, v_fileName_1476_);
lean_ctor_set(v___x_1487_, 1, v_fileMap_1477_);
lean_ctor_set(v___x_1487_, 2, v_currRecDepth_1478_);
lean_ctor_set(v___x_1487_, 3, v_cmdPos_1479_);
lean_ctor_set(v___x_1487_, 4, v_macroStack_1480_);
lean_ctor_set(v___x_1487_, 5, v_quotContext_x3f_1481_);
lean_ctor_set(v___x_1487_, 6, v_currMacroScope_1482_);
lean_ctor_set(v___x_1487_, 7, v_ref_1486_);
lean_ctor_set(v___x_1487_, 8, v_snap_x3f_1483_);
lean_ctor_set(v___x_1487_, 9, v_cancelTk_x3f_1484_);
lean_ctor_set_uint8(v___x_1487_, sizeof(void*)*10, v_suppressElabErrors_1485_);
v___x_1488_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15___redArg(v_msg_1470_, v___x_1487_, v___y_1472_);
lean_dec_ref_known(v___x_1487_, 10);
return v___x_1488_;
}
else
{
lean_object* v_a_1489_; lean_object* v___x_1491_; uint8_t v_isShared_1492_; uint8_t v_isSharedCheck_1496_; 
lean_dec_ref(v_msg_1470_);
v_a_1489_ = lean_ctor_get(v___x_1474_, 0);
v_isSharedCheck_1496_ = !lean_is_exclusive(v___x_1474_);
if (v_isSharedCheck_1496_ == 0)
{
v___x_1491_ = v___x_1474_;
v_isShared_1492_ = v_isSharedCheck_1496_;
goto v_resetjp_1490_;
}
else
{
lean_inc(v_a_1489_);
lean_dec(v___x_1474_);
v___x_1491_ = lean_box(0);
v_isShared_1492_ = v_isSharedCheck_1496_;
goto v_resetjp_1490_;
}
v_resetjp_1490_:
{
lean_object* v___x_1494_; 
if (v_isShared_1492_ == 0)
{
v___x_1494_ = v___x_1491_;
goto v_reusejp_1493_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v_a_1489_);
v___x_1494_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1493_;
}
v_reusejp_1493_:
{
return v___x_1494_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_ref_1497_, lean_object* v_msg_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_){
_start:
{
lean_object* v_res_1502_; 
v_res_1502_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___redArg(v_ref_1497_, v_msg_1498_, v___y_1499_, v___y_1500_);
lean_dec(v___y_1500_);
lean_dec_ref(v___y_1499_);
lean_dec(v_ref_1497_);
return v_res_1502_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__1(void){
_start:
{
lean_object* v___x_1504_; lean_object* v___x_1505_; 
v___x_1504_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__0));
v___x_1505_ = l_Lean_stringToMessageData(v___x_1504_);
return v___x_1505_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__3(void){
_start:
{
lean_object* v___x_1507_; lean_object* v___x_1508_; 
v___x_1507_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__2));
v___x_1508_ = l_Lean_stringToMessageData(v___x_1507_);
return v___x_1508_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__5(void){
_start:
{
lean_object* v___x_1510_; lean_object* v___x_1511_; 
v___x_1510_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__4));
v___x_1511_ = l_Lean_stringToMessageData(v___x_1510_);
return v___x_1511_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__7(void){
_start:
{
lean_object* v___x_1513_; lean_object* v___x_1514_; 
v___x_1513_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__6));
v___x_1514_ = l_Lean_stringToMessageData(v___x_1513_);
return v___x_1514_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__9(void){
_start:
{
lean_object* v___x_1516_; lean_object* v___x_1517_; 
v___x_1516_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__8));
v___x_1517_ = l_Lean_stringToMessageData(v___x_1516_);
return v___x_1517_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__11(void){
_start:
{
lean_object* v___x_1519_; lean_object* v___x_1520_; 
v___x_1519_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__10));
v___x_1520_ = l_Lean_stringToMessageData(v___x_1519_);
return v___x_1520_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__13(void){
_start:
{
lean_object* v___x_1522_; lean_object* v___x_1523_; 
v___x_1522_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__12));
v___x_1523_ = l_Lean_stringToMessageData(v___x_1522_);
return v___x_1523_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg(lean_object* v_msg_1524_, lean_object* v_declHint_1525_, lean_object* v___y_1526_){
_start:
{
lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v_env_1530_; uint8_t v___x_1531_; 
v___x_1528_ = lean_box(0);
v___x_1529_ = lean_st_ref_get(v___y_1526_);
v_env_1530_ = lean_ctor_get(v___x_1529_, 0);
lean_inc_ref(v_env_1530_);
lean_dec(v___x_1529_);
v___x_1531_ = l_Lean_Name_isAnonymous(v_declHint_1525_);
if (v___x_1531_ == 0)
{
uint8_t v_isExporting_1532_; 
v_isExporting_1532_ = lean_ctor_get_uint8(v_env_1530_, sizeof(void*)*8);
if (v_isExporting_1532_ == 0)
{
lean_object* v___x_1533_; 
lean_dec_ref(v_env_1530_);
lean_dec(v_declHint_1525_);
v___x_1533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1533_, 0, v_msg_1524_);
return v___x_1533_;
}
else
{
lean_object* v___x_1534_; uint8_t v___x_1535_; 
lean_inc_ref(v_env_1530_);
v___x_1534_ = l_Lean_Environment_setExporting(v_env_1530_, v___x_1531_);
lean_inc(v_declHint_1525_);
lean_inc_ref(v___x_1534_);
v___x_1535_ = l_Lean_Environment_contains(v___x_1534_, v_declHint_1525_, v_isExporting_1532_);
if (v___x_1535_ == 0)
{
lean_object* v___x_1536_; 
lean_dec_ref(v___x_1534_);
lean_dec_ref(v_env_1530_);
lean_dec(v_declHint_1525_);
v___x_1536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1536_, 0, v_msg_1524_);
return v___x_1536_;
}
else
{
lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v_c_1542_; lean_object* v___x_1543_; 
v___x_1537_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__2);
v___x_1538_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg___closed__5);
v___x_1539_ = l_Lean_Options_empty;
v___x_1540_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1540_, 0, v___x_1534_);
lean_ctor_set(v___x_1540_, 1, v___x_1537_);
lean_ctor_set(v___x_1540_, 2, v___x_1538_);
lean_ctor_set(v___x_1540_, 3, v___x_1539_);
lean_inc(v_declHint_1525_);
v___x_1541_ = l_Lean_MessageData_ofConstName(v_declHint_1525_, v___x_1531_);
v_c_1542_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1542_, 0, v___x_1540_);
lean_ctor_set(v_c_1542_, 1, v___x_1541_);
v___x_1543_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1530_, v_declHint_1525_);
if (lean_obj_tag(v___x_1543_) == 0)
{
lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; 
lean_dec_ref(v_env_1530_);
lean_dec(v_declHint_1525_);
v___x_1544_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__1);
v___x_1545_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1545_, 0, v___x_1544_);
lean_ctor_set(v___x_1545_, 1, v_c_1542_);
v___x_1546_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__3);
v___x_1547_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1547_, 0, v___x_1545_);
lean_ctor_set(v___x_1547_, 1, v___x_1546_);
v___x_1548_ = l_Lean_MessageData_note(v___x_1547_);
v___x_1549_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1549_, 0, v_msg_1524_);
lean_ctor_set(v___x_1549_, 1, v___x_1548_);
v___x_1550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1550_, 0, v___x_1549_);
return v___x_1550_;
}
else
{
lean_object* v_val_1551_; lean_object* v___x_1553_; uint8_t v_isShared_1554_; uint8_t v_isSharedCheck_1585_; 
v_val_1551_ = lean_ctor_get(v___x_1543_, 0);
v_isSharedCheck_1585_ = !lean_is_exclusive(v___x_1543_);
if (v_isSharedCheck_1585_ == 0)
{
v___x_1553_ = v___x_1543_;
v_isShared_1554_ = v_isSharedCheck_1585_;
goto v_resetjp_1552_;
}
else
{
lean_inc(v_val_1551_);
lean_dec(v___x_1543_);
v___x_1553_ = lean_box(0);
v_isShared_1554_ = v_isSharedCheck_1585_;
goto v_resetjp_1552_;
}
v_resetjp_1552_:
{
lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v_mod_1557_; uint8_t v___x_1558_; 
v___x_1555_ = l_Lean_Environment_header(v_env_1530_);
lean_dec_ref(v_env_1530_);
v___x_1556_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1555_);
v_mod_1557_ = lean_array_get(v___x_1528_, v___x_1556_, v_val_1551_);
lean_dec(v_val_1551_);
lean_dec_ref(v___x_1556_);
v___x_1558_ = l_Lean_isPrivateName(v_declHint_1525_);
lean_dec(v_declHint_1525_);
if (v___x_1558_ == 0)
{
lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1570_; 
v___x_1559_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__5);
v___x_1560_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1560_, 0, v___x_1559_);
lean_ctor_set(v___x_1560_, 1, v_c_1542_);
v___x_1561_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__7);
v___x_1562_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1562_, 0, v___x_1560_);
lean_ctor_set(v___x_1562_, 1, v___x_1561_);
v___x_1563_ = l_Lean_MessageData_ofName(v_mod_1557_);
v___x_1564_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1564_, 0, v___x_1562_);
lean_ctor_set(v___x_1564_, 1, v___x_1563_);
v___x_1565_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__9);
v___x_1566_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1566_, 0, v___x_1564_);
lean_ctor_set(v___x_1566_, 1, v___x_1565_);
v___x_1567_ = l_Lean_MessageData_note(v___x_1566_);
v___x_1568_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1568_, 0, v_msg_1524_);
lean_ctor_set(v___x_1568_, 1, v___x_1567_);
if (v_isShared_1554_ == 0)
{
lean_ctor_set_tag(v___x_1553_, 0);
lean_ctor_set(v___x_1553_, 0, v___x_1568_);
v___x_1570_ = v___x_1553_;
goto v_reusejp_1569_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v___x_1568_);
v___x_1570_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1569_;
}
v_reusejp_1569_:
{
return v___x_1570_;
}
}
else
{
lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1583_; 
v___x_1572_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__1);
v___x_1573_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1573_, 0, v___x_1572_);
lean_ctor_set(v___x_1573_, 1, v_c_1542_);
v___x_1574_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__11);
v___x_1575_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1575_, 0, v___x_1573_);
lean_ctor_set(v___x_1575_, 1, v___x_1574_);
v___x_1576_ = l_Lean_MessageData_ofName(v_mod_1557_);
v___x_1577_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1577_, 0, v___x_1575_);
lean_ctor_set(v___x_1577_, 1, v___x_1576_);
v___x_1578_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__13);
v___x_1579_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1579_, 0, v___x_1577_);
lean_ctor_set(v___x_1579_, 1, v___x_1578_);
v___x_1580_ = l_Lean_MessageData_note(v___x_1579_);
v___x_1581_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1581_, 0, v_msg_1524_);
lean_ctor_set(v___x_1581_, 1, v___x_1580_);
if (v_isShared_1554_ == 0)
{
lean_ctor_set_tag(v___x_1553_, 0);
lean_ctor_set(v___x_1553_, 0, v___x_1581_);
v___x_1583_ = v___x_1553_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v___x_1581_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
return v___x_1583_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1586_; 
lean_dec_ref(v_env_1530_);
lean_dec(v_declHint_1525_);
v___x_1586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1586_, 0, v_msg_1524_);
return v___x_1586_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___boxed(lean_object* v_msg_1587_, lean_object* v_declHint_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_){
_start:
{
lean_object* v_res_1591_; 
v_res_1591_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg(v_msg_1587_, v_declHint_1588_, v___y_1589_);
lean_dec(v___y_1589_);
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52(lean_object* v_msg_1592_, lean_object* v_declHint_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_){
_start:
{
lean_object* v___x_1597_; lean_object* v_a_1598_; lean_object* v___x_1600_; uint8_t v_isShared_1601_; uint8_t v_isSharedCheck_1607_; 
v___x_1597_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg(v_msg_1592_, v_declHint_1593_, v___y_1595_);
v_a_1598_ = lean_ctor_get(v___x_1597_, 0);
v_isSharedCheck_1607_ = !lean_is_exclusive(v___x_1597_);
if (v_isSharedCheck_1607_ == 0)
{
v___x_1600_ = v___x_1597_;
v_isShared_1601_ = v_isSharedCheck_1607_;
goto v_resetjp_1599_;
}
else
{
lean_inc(v_a_1598_);
lean_dec(v___x_1597_);
v___x_1600_ = lean_box(0);
v_isShared_1601_ = v_isSharedCheck_1607_;
goto v_resetjp_1599_;
}
v_resetjp_1599_:
{
lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1605_; 
v___x_1602_ = l_Lean_unknownIdentifierMessageTag;
v___x_1603_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1603_, 0, v___x_1602_);
lean_ctor_set(v___x_1603_, 1, v_a_1598_);
if (v_isShared_1601_ == 0)
{
lean_ctor_set(v___x_1600_, 0, v___x_1603_);
v___x_1605_ = v___x_1600_;
goto v_reusejp_1604_;
}
else
{
lean_object* v_reuseFailAlloc_1606_; 
v_reuseFailAlloc_1606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1606_, 0, v___x_1603_);
v___x_1605_ = v_reuseFailAlloc_1606_;
goto v_reusejp_1604_;
}
v_reusejp_1604_:
{
return v___x_1605_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52___boxed(lean_object* v_msg_1608_, lean_object* v_declHint_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_){
_start:
{
lean_object* v_res_1613_; 
v_res_1613_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52(v_msg_1608_, v_declHint_1609_, v___y_1610_, v___y_1611_);
lean_dec(v___y_1611_);
lean_dec_ref(v___y_1610_);
return v_res_1613_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49___redArg(lean_object* v_ref_1614_, lean_object* v_msg_1615_, lean_object* v_declHint_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_){
_start:
{
lean_object* v___x_1620_; lean_object* v_a_1621_; lean_object* v___x_1622_; 
v___x_1620_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52(v_msg_1615_, v_declHint_1616_, v___y_1617_, v___y_1618_);
v_a_1621_ = lean_ctor_get(v___x_1620_, 0);
lean_inc(v_a_1621_);
lean_dec_ref(v___x_1620_);
v___x_1622_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___redArg(v_ref_1614_, v_a_1621_, v___y_1617_, v___y_1618_);
return v___x_1622_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49___redArg___boxed(lean_object* v_ref_1623_, lean_object* v_msg_1624_, lean_object* v_declHint_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_){
_start:
{
lean_object* v_res_1629_; 
v_res_1629_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49___redArg(v_ref_1623_, v_msg_1624_, v_declHint_1625_, v___y_1626_, v___y_1627_);
lean_dec(v___y_1627_);
lean_dec_ref(v___y_1626_);
lean_dec(v_ref_1623_);
return v_res_1629_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg___closed__1(void){
_start:
{
lean_object* v___x_1631_; lean_object* v___x_1632_; 
v___x_1631_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg___closed__0));
v___x_1632_ = l_Lean_stringToMessageData(v___x_1631_);
return v___x_1632_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg(lean_object* v_ref_1633_, lean_object* v_constName_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_){
_start:
{
lean_object* v___x_1638_; uint8_t v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; 
v___x_1638_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg___closed__1);
v___x_1639_ = 0;
lean_inc(v_constName_1634_);
v___x_1640_ = l_Lean_MessageData_ofConstName(v_constName_1634_, v___x_1639_);
v___x_1641_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1638_);
lean_ctor_set(v___x_1641_, 1, v___x_1640_);
v___x_1642_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1);
v___x_1643_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1643_, 0, v___x_1641_);
lean_ctor_set(v___x_1643_, 1, v___x_1642_);
v___x_1644_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49___redArg(v_ref_1633_, v___x_1643_, v_constName_1634_, v___y_1635_, v___y_1636_);
return v___x_1644_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg___boxed(lean_object* v_ref_1645_, lean_object* v_constName_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_){
_start:
{
lean_object* v_res_1650_; 
v_res_1650_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg(v_ref_1645_, v_constName_1646_, v___y_1647_, v___y_1648_);
lean_dec(v___y_1648_);
lean_dec_ref(v___y_1647_);
lean_dec(v_ref_1645_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26___redArg(lean_object* v_constName_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_){
_start:
{
lean_object* v___x_1655_; 
v___x_1655_ = l_Lean_Elab_Command_getRef___redArg(v___y_1652_);
if (lean_obj_tag(v___x_1655_) == 0)
{
lean_object* v_a_1656_; lean_object* v___x_1657_; 
v_a_1656_ = lean_ctor_get(v___x_1655_, 0);
lean_inc(v_a_1656_);
lean_dec_ref_known(v___x_1655_, 1);
v___x_1657_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg(v_a_1656_, v_constName_1651_, v___y_1652_, v___y_1653_);
lean_dec(v_a_1656_);
return v___x_1657_;
}
else
{
lean_object* v_a_1658_; lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1665_; 
lean_dec(v_constName_1651_);
v_a_1658_ = lean_ctor_get(v___x_1655_, 0);
v_isSharedCheck_1665_ = !lean_is_exclusive(v___x_1655_);
if (v_isSharedCheck_1665_ == 0)
{
v___x_1660_ = v___x_1655_;
v_isShared_1661_ = v_isSharedCheck_1665_;
goto v_resetjp_1659_;
}
else
{
lean_inc(v_a_1658_);
lean_dec(v___x_1655_);
v___x_1660_ = lean_box(0);
v_isShared_1661_ = v_isSharedCheck_1665_;
goto v_resetjp_1659_;
}
v_resetjp_1659_:
{
lean_object* v___x_1663_; 
if (v_isShared_1661_ == 0)
{
v___x_1663_ = v___x_1660_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v_a_1658_);
v___x_1663_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
return v___x_1663_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26___redArg___boxed(lean_object* v_constName_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_){
_start:
{
lean_object* v_res_1670_; 
v_res_1670_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26___redArg(v_constName_1666_, v___y_1667_, v___y_1668_);
lean_dec(v___y_1668_);
lean_dec_ref(v___y_1667_);
return v_res_1670_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15(lean_object* v_constName_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_){
_start:
{
lean_object* v___x_1675_; lean_object* v_env_1676_; uint8_t v___x_1677_; lean_object* v___x_1678_; 
v___x_1675_ = lean_st_ref_get(v___y_1673_);
v_env_1676_ = lean_ctor_get(v___x_1675_, 0);
lean_inc_ref(v_env_1676_);
lean_dec(v___x_1675_);
v___x_1677_ = 0;
lean_inc(v_constName_1671_);
v___x_1678_ = l_Lean_Environment_findConstVal_x3f(v_env_1676_, v_constName_1671_, v___x_1677_);
if (lean_obj_tag(v___x_1678_) == 0)
{
lean_object* v___x_1679_; 
v___x_1679_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26___redArg(v_constName_1671_, v___y_1672_, v___y_1673_);
return v___x_1679_;
}
else
{
lean_object* v_val_1680_; lean_object* v___x_1682_; uint8_t v_isShared_1683_; uint8_t v_isSharedCheck_1687_; 
lean_dec(v_constName_1671_);
v_val_1680_ = lean_ctor_get(v___x_1678_, 0);
v_isSharedCheck_1687_ = !lean_is_exclusive(v___x_1678_);
if (v_isSharedCheck_1687_ == 0)
{
v___x_1682_ = v___x_1678_;
v_isShared_1683_ = v_isSharedCheck_1687_;
goto v_resetjp_1681_;
}
else
{
lean_inc(v_val_1680_);
lean_dec(v___x_1678_);
v___x_1682_ = lean_box(0);
v_isShared_1683_ = v_isSharedCheck_1687_;
goto v_resetjp_1681_;
}
v_resetjp_1681_:
{
lean_object* v___x_1685_; 
if (v_isShared_1683_ == 0)
{
lean_ctor_set_tag(v___x_1682_, 0);
v___x_1685_ = v___x_1682_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1686_; 
v_reuseFailAlloc_1686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1686_, 0, v_val_1680_);
v___x_1685_ = v_reuseFailAlloc_1686_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
return v___x_1685_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15___boxed(lean_object* v_constName_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_){
_start:
{
lean_object* v_res_1692_; 
v_res_1692_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15(v_constName_1688_, v___y_1689_, v___y_1690_);
lean_dec(v___y_1690_);
lean_dec_ref(v___y_1689_);
return v_res_1692_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9(lean_object* v_constName_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_){
_start:
{
lean_object* v___x_1697_; 
lean_inc(v_constName_1693_);
v___x_1697_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15(v_constName_1693_, v___y_1694_, v___y_1695_);
if (lean_obj_tag(v___x_1697_) == 0)
{
lean_object* v_a_1698_; lean_object* v___x_1700_; uint8_t v_isShared_1701_; uint8_t v_isSharedCheck_1709_; 
v_a_1698_ = lean_ctor_get(v___x_1697_, 0);
v_isSharedCheck_1709_ = !lean_is_exclusive(v___x_1697_);
if (v_isSharedCheck_1709_ == 0)
{
v___x_1700_ = v___x_1697_;
v_isShared_1701_ = v_isSharedCheck_1709_;
goto v_resetjp_1699_;
}
else
{
lean_inc(v_a_1698_);
lean_dec(v___x_1697_);
v___x_1700_ = lean_box(0);
v_isShared_1701_ = v_isSharedCheck_1709_;
goto v_resetjp_1699_;
}
v_resetjp_1699_:
{
lean_object* v_levelParams_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1707_; 
v_levelParams_1702_ = lean_ctor_get(v_a_1698_, 1);
lean_inc(v_levelParams_1702_);
lean_dec(v_a_1698_);
v___x_1703_ = lean_box(0);
v___x_1704_ = l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(v_levelParams_1702_, v___x_1703_);
v___x_1705_ = l_Lean_mkConst(v_constName_1693_, v___x_1704_);
if (v_isShared_1701_ == 0)
{
lean_ctor_set(v___x_1700_, 0, v___x_1705_);
v___x_1707_ = v___x_1700_;
goto v_reusejp_1706_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v___x_1705_);
v___x_1707_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1706_;
}
v_reusejp_1706_:
{
return v___x_1707_;
}
}
}
else
{
lean_object* v_a_1710_; lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1717_; 
lean_dec(v_constName_1693_);
v_a_1710_ = lean_ctor_get(v___x_1697_, 0);
v_isSharedCheck_1717_ = !lean_is_exclusive(v___x_1697_);
if (v_isSharedCheck_1717_ == 0)
{
v___x_1712_ = v___x_1697_;
v_isShared_1713_ = v_isSharedCheck_1717_;
goto v_resetjp_1711_;
}
else
{
lean_inc(v_a_1710_);
lean_dec(v___x_1697_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1717_;
goto v_resetjp_1711_;
}
v_resetjp_1711_:
{
lean_object* v___x_1715_; 
if (v_isShared_1713_ == 0)
{
v___x_1715_ = v___x_1712_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v_a_1710_);
v___x_1715_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
return v___x_1715_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9___boxed(lean_object* v_constName_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_){
_start:
{
lean_object* v_res_1722_; 
v_res_1722_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9(v_constName_1718_, v___y_1719_, v___y_1720_);
lean_dec(v___y_1720_);
lean_dec_ref(v___y_1719_);
return v_res_1722_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5(lean_object* v_stx_1723_, lean_object* v_n_1724_, lean_object* v_expectedType_x3f_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_){
_start:
{
lean_object* v___x_1729_; 
v___x_1729_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9(v_n_1724_, v___y_1726_, v___y_1727_);
if (lean_obj_tag(v___x_1729_) == 0)
{
lean_object* v_a_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; uint8_t v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; 
v_a_1730_ = lean_ctor_get(v___x_1729_, 0);
lean_inc(v_a_1730_);
lean_dec_ref_known(v___x_1729_, 1);
v___x_1731_ = lean_box(0);
v___x_1732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1732_, 0, v___x_1731_);
lean_ctor_set(v___x_1732_, 1, v_stx_1723_);
v___x_1733_ = l_Lean_LocalContext_empty;
v___x_1734_ = 0;
v___x_1735_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_1735_, 0, v___x_1732_);
lean_ctor_set(v___x_1735_, 1, v___x_1733_);
lean_ctor_set(v___x_1735_, 2, v_expectedType_x3f_1725_);
lean_ctor_set(v___x_1735_, 3, v_a_1730_);
lean_ctor_set_uint8(v___x_1735_, sizeof(void*)*4, v___x_1734_);
lean_ctor_set_uint8(v___x_1735_, sizeof(void*)*4 + 1, v___x_1734_);
v___x_1736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1736_, 0, v___x_1735_);
v___x_1737_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10(v___x_1736_, v___y_1726_, v___y_1727_);
return v___x_1737_;
}
else
{
lean_object* v_a_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1745_; 
lean_dec(v_expectedType_x3f_1725_);
lean_dec(v_stx_1723_);
v_a_1738_ = lean_ctor_get(v___x_1729_, 0);
v_isSharedCheck_1745_ = !lean_is_exclusive(v___x_1729_);
if (v_isSharedCheck_1745_ == 0)
{
v___x_1740_ = v___x_1729_;
v_isShared_1741_ = v_isSharedCheck_1745_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_a_1738_);
lean_dec(v___x_1729_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1745_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v___x_1743_; 
if (v_isShared_1741_ == 0)
{
v___x_1743_ = v___x_1740_;
goto v_reusejp_1742_;
}
else
{
lean_object* v_reuseFailAlloc_1744_; 
v_reuseFailAlloc_1744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1744_, 0, v_a_1738_);
v___x_1743_ = v_reuseFailAlloc_1744_;
goto v_reusejp_1742_;
}
v_reusejp_1742_:
{
return v___x_1743_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5___boxed(lean_object* v_stx_1746_, lean_object* v_n_1747_, lean_object* v_expectedType_x3f_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_){
_start:
{
lean_object* v_res_1752_; 
v_res_1752_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5(v_stx_1746_, v_n_1747_, v_expectedType_x3f_1748_, v___y_1749_, v___y_1750_);
lean_dec(v___y_1750_);
lean_dec_ref(v___y_1749_);
return v_res_1752_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12___redArg(lean_object* v_declName_1753_, uint8_t v_s_1754_, lean_object* v___y_1755_){
_start:
{
lean_object* v___x_1757_; lean_object* v_env_1758_; lean_object* v_messages_1759_; lean_object* v_scopes_1760_; lean_object* v_usedQuotCtxts_1761_; lean_object* v_nextMacroScope_1762_; lean_object* v_maxRecDepth_1763_; lean_object* v_ngen_1764_; lean_object* v_auxDeclNGen_1765_; lean_object* v_infoState_1766_; lean_object* v_traceState_1767_; lean_object* v_snapshotTasks_1768_; lean_object* v_prevLinterStates_1769_; lean_object* v_codeQualityEntryTasks_1770_; lean_object* v___x_1772_; uint8_t v_isShared_1773_; uint8_t v_isSharedCheck_1783_; 
v___x_1757_ = lean_st_ref_take(v___y_1755_);
v_env_1758_ = lean_ctor_get(v___x_1757_, 0);
v_messages_1759_ = lean_ctor_get(v___x_1757_, 1);
v_scopes_1760_ = lean_ctor_get(v___x_1757_, 2);
v_usedQuotCtxts_1761_ = lean_ctor_get(v___x_1757_, 3);
v_nextMacroScope_1762_ = lean_ctor_get(v___x_1757_, 4);
v_maxRecDepth_1763_ = lean_ctor_get(v___x_1757_, 5);
v_ngen_1764_ = lean_ctor_get(v___x_1757_, 6);
v_auxDeclNGen_1765_ = lean_ctor_get(v___x_1757_, 7);
v_infoState_1766_ = lean_ctor_get(v___x_1757_, 8);
v_traceState_1767_ = lean_ctor_get(v___x_1757_, 9);
v_snapshotTasks_1768_ = lean_ctor_get(v___x_1757_, 10);
v_prevLinterStates_1769_ = lean_ctor_get(v___x_1757_, 11);
v_codeQualityEntryTasks_1770_ = lean_ctor_get(v___x_1757_, 12);
v_isSharedCheck_1783_ = !lean_is_exclusive(v___x_1757_);
if (v_isSharedCheck_1783_ == 0)
{
v___x_1772_ = v___x_1757_;
v_isShared_1773_ = v_isSharedCheck_1783_;
goto v_resetjp_1771_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1770_);
lean_inc(v_prevLinterStates_1769_);
lean_inc(v_snapshotTasks_1768_);
lean_inc(v_traceState_1767_);
lean_inc(v_infoState_1766_);
lean_inc(v_auxDeclNGen_1765_);
lean_inc(v_ngen_1764_);
lean_inc(v_maxRecDepth_1763_);
lean_inc(v_nextMacroScope_1762_);
lean_inc(v_usedQuotCtxts_1761_);
lean_inc(v_scopes_1760_);
lean_inc(v_messages_1759_);
lean_inc(v_env_1758_);
lean_dec(v___x_1757_);
v___x_1772_ = lean_box(0);
v_isShared_1773_ = v_isSharedCheck_1783_;
goto v_resetjp_1771_;
}
v_resetjp_1771_:
{
lean_object* v___x_1774_; uint8_t v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1779_; 
v___x_1774_ = lean_box(0);
v___x_1775_ = 0;
v___x_1776_ = lean_box(0);
v___x_1777_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_1758_, v_declName_1753_, v_s_1754_, v___x_1775_, v___x_1776_);
if (v_isShared_1773_ == 0)
{
lean_ctor_set(v___x_1772_, 0, v___x_1777_);
v___x_1779_ = v___x_1772_;
goto v_reusejp_1778_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v___x_1777_);
lean_ctor_set(v_reuseFailAlloc_1782_, 1, v_messages_1759_);
lean_ctor_set(v_reuseFailAlloc_1782_, 2, v_scopes_1760_);
lean_ctor_set(v_reuseFailAlloc_1782_, 3, v_usedQuotCtxts_1761_);
lean_ctor_set(v_reuseFailAlloc_1782_, 4, v_nextMacroScope_1762_);
lean_ctor_set(v_reuseFailAlloc_1782_, 5, v_maxRecDepth_1763_);
lean_ctor_set(v_reuseFailAlloc_1782_, 6, v_ngen_1764_);
lean_ctor_set(v_reuseFailAlloc_1782_, 7, v_auxDeclNGen_1765_);
lean_ctor_set(v_reuseFailAlloc_1782_, 8, v_infoState_1766_);
lean_ctor_set(v_reuseFailAlloc_1782_, 9, v_traceState_1767_);
lean_ctor_set(v_reuseFailAlloc_1782_, 10, v_snapshotTasks_1768_);
lean_ctor_set(v_reuseFailAlloc_1782_, 11, v_prevLinterStates_1769_);
lean_ctor_set(v_reuseFailAlloc_1782_, 12, v_codeQualityEntryTasks_1770_);
v___x_1779_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1778_;
}
v_reusejp_1778_:
{
lean_object* v___x_1780_; lean_object* v___x_1781_; 
v___x_1780_ = lean_st_ref_put(v___y_1755_, v___x_1779_);
v___x_1781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1781_, 0, v___x_1774_);
return v___x_1781_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12___redArg___boxed(lean_object* v_declName_1784_, lean_object* v_s_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_){
_start:
{
uint8_t v_s_boxed_1788_; lean_object* v_res_1789_; 
v_s_boxed_1788_ = lean_unbox(v_s_1785_);
v_res_1789_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12___redArg(v_declName_1784_, v_s_boxed_1788_, v___y_1786_);
lean_dec(v___y_1786_);
return v_res_1789_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6(lean_object* v_declName_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_){
_start:
{
uint8_t v___x_1794_; lean_object* v___x_1795_; 
v___x_1794_ = 2;
v___x_1795_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12___redArg(v_declName_1790_, v___x_1794_, v___y_1792_);
return v___x_1795_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6___boxed(lean_object* v_declName_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_){
_start:
{
lean_object* v_res_1800_; 
v_res_1800_ = l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6(v_declName_1796_, v___y_1797_, v___y_1798_);
lean_dec(v___y_1798_);
lean_dec_ref(v___y_1797_);
return v_res_1800_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg(lean_object* v_as_x27_1801_, lean_object* v_b_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_){
_start:
{
if (lean_obj_tag(v_as_x27_1801_) == 0)
{
lean_object* v___x_1806_; 
v___x_1806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1806_, 0, v_b_1802_);
return v___x_1806_;
}
else
{
lean_object* v_head_1807_; lean_object* v_tail_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; 
v_head_1807_ = lean_ctor_get(v_as_x27_1801_, 0);
v_tail_1808_ = lean_ctor_get(v_as_x27_1801_, 1);
v___x_1809_ = lean_box(0);
lean_inc(v_head_1807_);
v___x_1810_ = l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6(v_head_1807_, v___y_1803_, v___y_1804_);
lean_dec_ref(v___x_1810_);
v_as_x27_1801_ = v_tail_1808_;
v_b_1802_ = v___x_1809_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg___boxed(lean_object* v_as_x27_1812_, lean_object* v_b_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_){
_start:
{
lean_object* v_res_1817_; 
v_res_1817_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg(v_as_x27_1812_, v_b_1813_, v___y_1814_, v___y_1815_);
lean_dec(v___y_1815_);
lean_dec_ref(v___y_1814_);
lean_dec(v_as_x27_1812_);
return v_res_1817_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__3(size_t v_sz_1818_, size_t v_i_1819_, lean_object* v_bs_1820_){
_start:
{
uint8_t v___x_1821_; 
v___x_1821_ = lean_usize_dec_lt(v_i_1819_, v_sz_1818_);
if (v___x_1821_ == 0)
{
return v_bs_1820_;
}
else
{
lean_object* v_v_1822_; lean_object* v___x_1823_; lean_object* v_bs_x27_1824_; size_t v___x_1825_; size_t v___x_1826_; lean_object* v___x_1827_; 
v_v_1822_ = lean_array_uget(v_bs_1820_, v_i_1819_);
v___x_1823_ = lean_unsigned_to_nat(0u);
v_bs_x27_1824_ = lean_array_uset(v_bs_1820_, v_i_1819_, v___x_1823_);
v___x_1825_ = ((size_t)1ULL);
v___x_1826_ = lean_usize_add(v_i_1819_, v___x_1825_);
v___x_1827_ = lean_array_uset(v_bs_x27_1824_, v_i_1819_, v_v_1822_);
v_i_1819_ = v___x_1826_;
v_bs_1820_ = v___x_1827_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__3___boxed(lean_object* v_sz_1829_, lean_object* v_i_1830_, lean_object* v_bs_1831_){
_start:
{
size_t v_sz_boxed_1832_; size_t v_i_boxed_1833_; lean_object* v_res_1834_; 
v_sz_boxed_1832_ = lean_unbox_usize(v_sz_1829_);
lean_dec(v_sz_1829_);
v_i_boxed_1833_ = lean_unbox_usize(v_i_1830_);
lean_dec(v_i_1830_);
v_res_1834_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__3(v_sz_boxed_1832_, v_i_boxed_1833_, v_bs_1831_);
return v_res_1834_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___redArg(lean_object* v_as_x27_1835_, lean_object* v_b_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_){
_start:
{
if (lean_obj_tag(v_as_x27_1835_) == 0)
{
lean_object* v___x_1840_; 
v___x_1840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1840_, 0, v_b_1836_);
return v___x_1840_;
}
else
{
lean_object* v_head_1841_; lean_object* v_tail_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; 
v_head_1841_ = lean_ctor_get(v_as_x27_1835_, 0);
v_tail_1842_ = lean_ctor_get(v_as_x27_1835_, 1);
v___x_1843_ = lean_box(0);
lean_inc(v_head_1841_);
v___x_1844_ = lean_alloc_closure((void*)(l_Lean_enableRealizationsForConst___boxed), 4, 1);
lean_closure_set(v___x_1844_, 0, v_head_1841_);
v___x_1845_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_1844_, v___y_1837_, v___y_1838_);
if (lean_obj_tag(v___x_1845_) == 0)
{
lean_dec_ref_known(v___x_1845_, 1);
v_as_x27_1835_ = v_tail_1842_;
v_b_1836_ = v___x_1843_;
goto _start;
}
else
{
return v___x_1845_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___redArg___boxed(lean_object* v_as_x27_1847_, lean_object* v_b_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_){
_start:
{
lean_object* v_res_1852_; 
v_res_1852_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___redArg(v_as_x27_1847_, v_b_1848_, v___y_1849_, v___y_1850_);
lean_dec(v___y_1850_);
lean_dec_ref(v___y_1849_);
lean_dec(v_as_x27_1847_);
return v_res_1852_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___redArg(lean_object* v_stx_1853_, lean_object* v___y_1854_){
_start:
{
uint8_t v___x_1856_; lean_object* v___x_1857_; 
v___x_1856_ = 0;
v___x_1857_ = l_Lean_Syntax_getRange_x3f(v_stx_1853_, v___x_1856_);
if (lean_obj_tag(v___x_1857_) == 1)
{
lean_object* v_val_1858_; lean_object* v___x_1860_; uint8_t v_isShared_1861_; uint8_t v_isSharedCheck_1870_; 
v_val_1858_ = lean_ctor_get(v___x_1857_, 0);
v_isSharedCheck_1870_ = !lean_is_exclusive(v___x_1857_);
if (v_isSharedCheck_1870_ == 0)
{
v___x_1860_ = v___x_1857_;
v_isShared_1861_ = v_isSharedCheck_1870_;
goto v_resetjp_1859_;
}
else
{
lean_inc(v_val_1858_);
lean_dec(v___x_1857_);
v___x_1860_ = lean_box(0);
v_isShared_1861_ = v_isSharedCheck_1870_;
goto v_resetjp_1859_;
}
v_resetjp_1859_:
{
lean_object* v_fileMap_1862_; lean_object* v_start_1863_; lean_object* v_stop_1864_; lean_object* v___x_1865_; lean_object* v___x_1867_; 
v_fileMap_1862_ = lean_ctor_get(v___y_1854_, 1);
v_start_1863_ = lean_ctor_get(v_val_1858_, 0);
lean_inc(v_start_1863_);
v_stop_1864_ = lean_ctor_get(v_val_1858_, 1);
lean_inc(v_stop_1864_);
lean_dec(v_val_1858_);
lean_inc_ref(v_fileMap_1862_);
v___x_1865_ = l_Lean_DeclarationRange_ofStringPositions(v_fileMap_1862_, v_start_1863_, v_stop_1864_);
lean_dec(v_stop_1864_);
lean_dec(v_start_1863_);
if (v_isShared_1861_ == 0)
{
lean_ctor_set(v___x_1860_, 0, v___x_1865_);
v___x_1867_ = v___x_1860_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1869_; 
v_reuseFailAlloc_1869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1869_, 0, v___x_1865_);
v___x_1867_ = v_reuseFailAlloc_1869_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
lean_object* v___x_1868_; 
v___x_1868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1868_, 0, v___x_1867_);
return v___x_1868_;
}
}
}
else
{
lean_object* v___x_1871_; lean_object* v___x_1872_; 
lean_dec(v___x_1857_);
v___x_1871_ = lean_box(0);
v___x_1872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1872_, 0, v___x_1871_);
return v___x_1872_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___redArg___boxed(lean_object* v_stx_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_){
_start:
{
lean_object* v_res_1876_; 
v_res_1876_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___redArg(v_stx_1873_, v___y_1874_);
lean_dec_ref(v___y_1874_);
lean_dec(v_stx_1873_);
return v_res_1876_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7___redArg(lean_object* v_declName_1877_, lean_object* v_declRanges_1878_, lean_object* v___y_1879_){
_start:
{
uint8_t v___x_1881_; 
v___x_1881_ = l_Lean_Name_isAnonymous(v_declName_1877_);
if (v___x_1881_ == 0)
{
lean_object* v___x_1882_; lean_object* v_env_1883_; lean_object* v_messages_1884_; lean_object* v_scopes_1885_; lean_object* v_usedQuotCtxts_1886_; lean_object* v_nextMacroScope_1887_; lean_object* v_maxRecDepth_1888_; lean_object* v_ngen_1889_; lean_object* v_auxDeclNGen_1890_; lean_object* v_infoState_1891_; lean_object* v_traceState_1892_; lean_object* v_snapshotTasks_1893_; lean_object* v_prevLinterStates_1894_; lean_object* v_codeQualityEntryTasks_1895_; lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1907_; 
v___x_1882_ = lean_st_ref_take(v___y_1879_);
v_env_1883_ = lean_ctor_get(v___x_1882_, 0);
v_messages_1884_ = lean_ctor_get(v___x_1882_, 1);
v_scopes_1885_ = lean_ctor_get(v___x_1882_, 2);
v_usedQuotCtxts_1886_ = lean_ctor_get(v___x_1882_, 3);
v_nextMacroScope_1887_ = lean_ctor_get(v___x_1882_, 4);
v_maxRecDepth_1888_ = lean_ctor_get(v___x_1882_, 5);
v_ngen_1889_ = lean_ctor_get(v___x_1882_, 6);
v_auxDeclNGen_1890_ = lean_ctor_get(v___x_1882_, 7);
v_infoState_1891_ = lean_ctor_get(v___x_1882_, 8);
v_traceState_1892_ = lean_ctor_get(v___x_1882_, 9);
v_snapshotTasks_1893_ = lean_ctor_get(v___x_1882_, 10);
v_prevLinterStates_1894_ = lean_ctor_get(v___x_1882_, 11);
v_codeQualityEntryTasks_1895_ = lean_ctor_get(v___x_1882_, 12);
v_isSharedCheck_1907_ = !lean_is_exclusive(v___x_1882_);
if (v_isSharedCheck_1907_ == 0)
{
v___x_1897_ = v___x_1882_;
v_isShared_1898_ = v_isSharedCheck_1907_;
goto v_resetjp_1896_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1895_);
lean_inc(v_prevLinterStates_1894_);
lean_inc(v_snapshotTasks_1893_);
lean_inc(v_traceState_1892_);
lean_inc(v_infoState_1891_);
lean_inc(v_auxDeclNGen_1890_);
lean_inc(v_ngen_1889_);
lean_inc(v_maxRecDepth_1888_);
lean_inc(v_nextMacroScope_1887_);
lean_inc(v_usedQuotCtxts_1886_);
lean_inc(v_scopes_1885_);
lean_inc(v_messages_1884_);
lean_inc(v_env_1883_);
lean_dec(v___x_1882_);
v___x_1897_ = lean_box(0);
v_isShared_1898_ = v_isSharedCheck_1907_;
goto v_resetjp_1896_;
}
v_resetjp_1896_:
{
lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1903_; 
v___x_1899_ = lean_box(0);
v___x_1900_ = l_Lean_declRangeExt;
v___x_1901_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_1900_, v_env_1883_, v_declName_1877_, v_declRanges_1878_);
if (v_isShared_1898_ == 0)
{
lean_ctor_set(v___x_1897_, 0, v___x_1901_);
v___x_1903_ = v___x_1897_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1906_; 
v_reuseFailAlloc_1906_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1906_, 0, v___x_1901_);
lean_ctor_set(v_reuseFailAlloc_1906_, 1, v_messages_1884_);
lean_ctor_set(v_reuseFailAlloc_1906_, 2, v_scopes_1885_);
lean_ctor_set(v_reuseFailAlloc_1906_, 3, v_usedQuotCtxts_1886_);
lean_ctor_set(v_reuseFailAlloc_1906_, 4, v_nextMacroScope_1887_);
lean_ctor_set(v_reuseFailAlloc_1906_, 5, v_maxRecDepth_1888_);
lean_ctor_set(v_reuseFailAlloc_1906_, 6, v_ngen_1889_);
lean_ctor_set(v_reuseFailAlloc_1906_, 7, v_auxDeclNGen_1890_);
lean_ctor_set(v_reuseFailAlloc_1906_, 8, v_infoState_1891_);
lean_ctor_set(v_reuseFailAlloc_1906_, 9, v_traceState_1892_);
lean_ctor_set(v_reuseFailAlloc_1906_, 10, v_snapshotTasks_1893_);
lean_ctor_set(v_reuseFailAlloc_1906_, 11, v_prevLinterStates_1894_);
lean_ctor_set(v_reuseFailAlloc_1906_, 12, v_codeQualityEntryTasks_1895_);
v___x_1903_ = v_reuseFailAlloc_1906_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; 
v___x_1904_ = lean_st_ref_put(v___y_1879_, v___x_1903_);
v___x_1905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1905_, 0, v___x_1899_);
return v___x_1905_;
}
}
}
else
{
lean_object* v___x_1908_; lean_object* v___x_1909_; 
lean_dec_ref(v_declRanges_1878_);
lean_dec(v_declName_1877_);
v___x_1908_ = lean_box(0);
v___x_1909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1909_, 0, v___x_1908_);
return v___x_1909_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7___redArg___boxed(lean_object* v_declName_1910_, lean_object* v_declRanges_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_){
_start:
{
lean_object* v_res_1914_; 
v_res_1914_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7___redArg(v_declName_1910_, v_declRanges_1911_, v___y_1912_);
lean_dec(v___y_1912_);
return v_res_1914_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4(lean_object* v_declName_1915_, lean_object* v_rangeStx_1916_, lean_object* v_selectionRangeStx_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_){
_start:
{
lean_object* v___x_1921_; lean_object* v_a_1922_; lean_object* v___x_1924_; uint8_t v_isShared_1925_; uint8_t v_isSharedCheck_1938_; 
v___x_1921_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___redArg(v_rangeStx_1916_, v___y_1918_);
v_a_1922_ = lean_ctor_get(v___x_1921_, 0);
v_isSharedCheck_1938_ = !lean_is_exclusive(v___x_1921_);
if (v_isSharedCheck_1938_ == 0)
{
v___x_1924_ = v___x_1921_;
v_isShared_1925_ = v_isSharedCheck_1938_;
goto v_resetjp_1923_;
}
else
{
lean_inc(v_a_1922_);
lean_dec(v___x_1921_);
v___x_1924_ = lean_box(0);
v_isShared_1925_ = v_isSharedCheck_1938_;
goto v_resetjp_1923_;
}
v_resetjp_1923_:
{
if (lean_obj_tag(v_a_1922_) == 1)
{
lean_object* v_val_1926_; lean_object* v_a_1928_; lean_object* v___x_1931_; lean_object* v_a_1932_; 
lean_del_object(v___x_1924_);
v_val_1926_ = lean_ctor_get(v_a_1922_, 0);
lean_inc(v_val_1926_);
lean_dec_ref_known(v_a_1922_, 1);
v___x_1931_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___redArg(v_selectionRangeStx_1917_, v___y_1918_);
v_a_1932_ = lean_ctor_get(v___x_1931_, 0);
lean_inc(v_a_1932_);
lean_dec_ref(v___x_1931_);
if (lean_obj_tag(v_a_1932_) == 0)
{
lean_inc(v_val_1926_);
v_a_1928_ = v_val_1926_;
goto v___jp_1927_;
}
else
{
lean_object* v_val_1933_; 
v_val_1933_ = lean_ctor_get(v_a_1932_, 0);
lean_inc(v_val_1933_);
lean_dec_ref_known(v_a_1932_, 1);
v_a_1928_ = v_val_1933_;
goto v___jp_1927_;
}
v___jp_1927_:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; 
v___x_1929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1929_, 0, v_val_1926_);
lean_ctor_set(v___x_1929_, 1, v_a_1928_);
v___x_1930_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7___redArg(v_declName_1915_, v___x_1929_, v___y_1919_);
return v___x_1930_;
}
}
else
{
lean_object* v___x_1934_; lean_object* v___x_1936_; 
lean_dec(v_a_1922_);
lean_dec(v_declName_1915_);
v___x_1934_ = lean_box(0);
if (v_isShared_1925_ == 0)
{
lean_ctor_set(v___x_1924_, 0, v___x_1934_);
v___x_1936_ = v___x_1924_;
goto v_reusejp_1935_;
}
else
{
lean_object* v_reuseFailAlloc_1937_; 
v_reuseFailAlloc_1937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1937_, 0, v___x_1934_);
v___x_1936_ = v_reuseFailAlloc_1937_;
goto v_reusejp_1935_;
}
v_reusejp_1935_:
{
return v___x_1936_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4___boxed(lean_object* v_declName_1939_, lean_object* v_rangeStx_1940_, lean_object* v_selectionRangeStx_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_){
_start:
{
lean_object* v_res_1945_; 
v_res_1945_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4(v_declName_1939_, v_rangeStx_1940_, v_selectionRangeStx_1941_, v___y_1942_, v___y_1943_);
lean_dec(v___y_1943_);
lean_dec_ref(v___y_1942_);
lean_dec(v_selectionRangeStx_1941_);
lean_dec(v_rangeStx_1940_);
return v_res_1945_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabNewtype___lam__0___closed__8(void){
_start:
{
lean_object* v___x_1956_; 
v___x_1956_ = l_Array_mkArray0___redArg();
return v___x_1956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__0(lean_object* v___x_1961_, lean_object* v_a_1962_, lean_object* v_projId_1963_, lean_object* v___x_1964_, lean_object* v___x_1965_, lean_object* v___x_1966_, lean_object* v_params_1967_, lean_object* v___x_1968_, lean_object* v_mods_1969_, lean_object* v___x_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_){
_start:
{
lean_object* v___x_1974_; 
v___x_1974_ = l_Lean_Elab_Command_getScope___redArg(v___y_1972_);
if (lean_obj_tag(v___x_1974_) == 0)
{
lean_object* v_a_1975_; lean_object* v_currNamespace_1976_; lean_object* v___x_1977_; 
v_a_1975_ = lean_ctor_get(v___x_1974_, 0);
lean_inc(v_a_1975_);
lean_dec_ref_known(v___x_1974_, 1);
v_currNamespace_1976_ = lean_ctor_get(v_a_1975_, 2);
lean_inc(v_currNamespace_1976_);
lean_dec(v_a_1975_);
v___x_1977_ = l_Lean_Elab_Command_getLevelNames___redArg(v___y_1972_);
if (lean_obj_tag(v___x_1977_) == 0)
{
lean_object* v_a_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; 
v_a_1978_ = lean_ctor_get(v___x_1977_, 0);
lean_inc(v_a_1978_);
lean_dec_ref_known(v___x_1977_, 1);
lean_inc(v___x_1961_);
v___x_1979_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandDeclId___boxed), 11, 4);
lean_closure_set(v___x_1979_, 0, v_currNamespace_1976_);
lean_closure_set(v___x_1979_, 1, v_a_1978_);
lean_closure_set(v___x_1979_, 2, v___x_1961_);
lean_closure_set(v___x_1979_, 3, v_a_1962_);
v___x_1980_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_1979_, v___y_1971_, v___y_1972_);
if (lean_obj_tag(v___x_1980_) == 0)
{
lean_object* v_a_1981_; lean_object* v_declName_1982_; lean_object* v___x_1984_; uint8_t v_isShared_1985_; uint8_t v_isSharedCheck_2101_; 
v_a_1981_ = lean_ctor_get(v___x_1980_, 0);
lean_inc(v_a_1981_);
lean_dec_ref_known(v___x_1980_, 1);
v_declName_1982_ = lean_ctor_get(v_a_1981_, 1);
v_isSharedCheck_2101_ = !lean_is_exclusive(v_a_1981_);
if (v_isSharedCheck_2101_ == 0)
{
lean_object* v_unused_2102_; lean_object* v_unused_2103_; lean_object* v_unused_2104_; 
v_unused_2102_ = lean_ctor_get(v_a_1981_, 3);
lean_dec(v_unused_2102_);
v_unused_2103_ = lean_ctor_get(v_a_1981_, 2);
lean_dec(v_unused_2103_);
v_unused_2104_ = lean_ctor_get(v_a_1981_, 0);
lean_dec(v_unused_2104_);
v___x_1984_ = v_a_1981_;
v_isShared_1985_ = v_isSharedCheck_2101_;
goto v_resetjp_1983_;
}
else
{
lean_inc(v_declName_1982_);
lean_dec(v_a_1981_);
v___x_1984_ = lean_box(0);
v_isShared_1985_ = v_isSharedCheck_2101_;
goto v_resetjp_1983_;
}
v_resetjp_1983_:
{
lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; 
v___x_1986_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__1));
lean_inc_n(v_declName_1982_, 2);
v___x_1987_ = l_Lean_Name_append(v_declName_1982_, v___x_1986_);
v___x_1988_ = l_Lean_TSyntax_getId(v_projId_1963_);
lean_inc(v___x_1988_);
v___x_1989_ = l_Lean_Name_append(v_declName_1982_, v___x_1988_);
v___x_1990_ = l_Lean_Elab_Command_getRef___redArg(v___y_1971_);
if (lean_obj_tag(v___x_1990_) == 0)
{
lean_object* v_a_1991_; uint8_t v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_2082_; 
v_a_1991_ = lean_ctor_get(v___x_1990_, 0);
lean_inc(v_a_1991_);
lean_dec_ref_known(v___x_1990_, 1);
v___x_1992_ = 0;
v___x_1993_ = l_Lean_SourceInfo_fromRef(v_a_1991_, v___x_1992_);
lean_dec(v_a_1991_);
v___x_2082_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_1971_);
if (lean_obj_tag(v___x_2082_) == 0)
{
lean_object* v_quotContext_x3f_2083_; 
lean_dec_ref_known(v___x_2082_, 1);
v_quotContext_x3f_2083_ = lean_ctor_get(v___y_1971_, 5);
if (lean_obj_tag(v_quotContext_x3f_2083_) == 0)
{
lean_object* v___x_2084_; 
v___x_2084_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v___y_1972_);
lean_dec_ref(v___x_2084_);
goto v___jp_1994_;
}
else
{
goto v___jp_1994_;
}
}
else
{
lean_object* v_a_2085_; lean_object* v___x_2087_; uint8_t v_isShared_2088_; uint8_t v_isSharedCheck_2092_; 
lean_dec(v___x_1993_);
lean_dec(v___x_1989_);
lean_dec(v___x_1988_);
lean_dec(v___x_1987_);
lean_del_object(v___x_1984_);
lean_dec(v_declName_1982_);
lean_dec(v___x_1970_);
lean_dec(v_mods_1969_);
lean_dec(v___x_1968_);
lean_dec_ref(v_params_1967_);
lean_dec_ref(v___x_1966_);
lean_dec_ref(v___x_1965_);
lean_dec_ref(v___x_1964_);
lean_dec(v_projId_1963_);
lean_dec(v___x_1961_);
v_a_2085_ = lean_ctor_get(v___x_2082_, 0);
v_isSharedCheck_2092_ = !lean_is_exclusive(v___x_2082_);
if (v_isSharedCheck_2092_ == 0)
{
v___x_2087_ = v___x_2082_;
v_isShared_2088_ = v_isSharedCheck_2092_;
goto v_resetjp_2086_;
}
else
{
lean_inc(v_a_2085_);
lean_dec(v___x_2082_);
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
v___jp_1994_:
{
lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; size_t v_sz_2005_; size_t v___x_2006_; lean_object* v___x_2007_; size_t v_sz_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; 
v___x_1995_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__2));
lean_inc_ref_n(v___x_1966_, 3);
lean_inc_ref_n(v___x_1965_, 4);
lean_inc_ref_n(v___x_1964_, 4);
v___x_1996_ = l_Lean_Name_mkStr4(v___x_1964_, v___x_1965_, v___x_1966_, v___x_1995_);
v___x_1997_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__3));
v___x_1998_ = l_Lean_Name_mkStr4(v___x_1964_, v___x_1965_, v___x_1966_, v___x_1997_);
v___x_1999_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__4));
lean_inc_n(v___x_1993_, 8);
v___x_2000_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2000_, 0, v___x_1993_);
lean_ctor_set(v___x_2000_, 1, v___x_1999_);
v___x_2001_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__5));
v___x_2002_ = l_Lean_Name_mkStr4(v___x_1964_, v___x_1965_, v___x_1966_, v___x_2001_);
v___x_2003_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__7));
v___x_2004_ = lean_obj_once(&l_Lean_Elab_Command_elabNewtype___lam__0___closed__8, &l_Lean_Elab_Command_elabNewtype___lam__0___closed__8_once, _init_l_Lean_Elab_Command_elabNewtype___lam__0___closed__8);
v_sz_2005_ = lean_array_size(v_params_1967_);
v___x_2006_ = ((size_t)0ULL);
v___x_2007_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(v_sz_2005_, v___x_2006_, v_params_1967_);
v_sz_2008_ = lean_array_size(v___x_2007_);
v___x_2009_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__3(v_sz_2008_, v___x_2006_, v___x_2007_);
v___x_2010_ = l_Array_append___redArg(v___x_2004_, v___x_2009_);
lean_dec_ref(v___x_2009_);
v___x_2011_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2011_, 0, v___x_1993_);
lean_ctor_set(v___x_2011_, 1, v___x_2003_);
lean_ctor_set(v___x_2011_, 2, v___x_2010_);
v___x_2012_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2012_, 0, v___x_1993_);
lean_ctor_set(v___x_2012_, 1, v___x_2003_);
lean_ctor_set(v___x_2012_, 2, v___x_2004_);
lean_inc_ref_n(v___x_2012_, 4);
v___x_2013_ = l_Lean_Syntax_node2(v___x_1993_, v___x_2002_, v___x_2011_, v___x_2012_);
v___x_2014_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__9));
v___x_2015_ = l_Lean_Name_mkStr4(v___x_1964_, v___x_1965_, v___x_1966_, v___x_2014_);
v___x_2016_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__10));
v___x_2017_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2017_, 0, v___x_1993_);
lean_ctor_set(v___x_2017_, 1, v___x_2016_);
v___x_2018_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__11));
v___x_2019_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__0___closed__12));
v___x_2020_ = l_Lean_Name_mkStr4(v___x_1964_, v___x_1965_, v___x_2018_, v___x_2019_);
v___x_2021_ = l_Lean_Syntax_node2(v___x_1993_, v___x_2020_, v___x_2012_, v___x_2012_);
v___x_2022_ = l_Lean_Syntax_node4(v___x_1993_, v___x_2015_, v___x_2017_, v___x_1968_, v___x_2021_, v___x_2012_);
lean_inc(v___x_1961_);
v___x_2023_ = l_Lean_Syntax_node5(v___x_1993_, v___x_1998_, v___x_2000_, v___x_1961_, v___x_2013_, v___x_2022_, v___x_2012_);
v___x_2024_ = l_Lean_Syntax_node2(v___x_1993_, v___x_1996_, v_mods_1969_, v___x_2023_);
v___x_2025_ = l_Lean_Elab_Command_elabCommand(v___x_2024_, v___y_1971_, v___y_1972_);
if (lean_obj_tag(v___x_2025_) == 0)
{
lean_object* v___x_2026_; lean_object* v___x_2027_; 
lean_dec_ref_known(v___x_2025_, 1);
lean_inc(v___x_1989_);
lean_inc(v___x_1987_);
lean_inc(v_declName_1982_);
v___x_2026_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___boxed), 11, 4);
lean_closure_set(v___x_2026_, 0, v_declName_1982_);
lean_closure_set(v___x_2026_, 1, v___x_1987_);
lean_closure_set(v___x_2026_, 2, v___x_1989_);
lean_closure_set(v___x_2026_, 3, v___x_1988_);
v___x_2027_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_2026_, v___y_1971_, v___y_1972_);
if (lean_obj_tag(v___x_2027_) == 0)
{
lean_object* v_a_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; 
v_a_2028_ = lean_ctor_get(v___x_2027_, 0);
lean_inc(v_a_2028_);
lean_dec_ref_known(v___x_2027_, 1);
v___x_2029_ = lean_box(0);
lean_inc(v___x_1987_);
v___x_2030_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4(v___x_1987_, v___x_1961_, v___x_2029_, v___y_1971_, v___y_1972_);
lean_dec(v___x_1961_);
if (lean_obj_tag(v___x_2030_) == 0)
{
lean_object* v___x_2031_; 
lean_dec_ref_known(v___x_2030_, 1);
lean_inc(v___x_1989_);
v___x_2031_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4(v___x_1989_, v_projId_1963_, v___x_2029_, v___y_1971_, v___y_1972_);
if (lean_obj_tag(v___x_2031_) == 0)
{
lean_object* v___x_2032_; lean_object* v___x_2033_; 
lean_dec_ref_known(v___x_2031_, 1);
v___x_2032_ = lean_box(0);
lean_inc(v___x_1989_);
v___x_2033_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5(v_projId_1963_, v___x_1989_, v___x_2032_, v___y_1971_, v___y_1972_);
if (lean_obj_tag(v___x_2033_) == 0)
{
lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v_env_2040_; lean_object* v_messages_2041_; lean_object* v_scopes_2042_; lean_object* v_usedQuotCtxts_2043_; lean_object* v_nextMacroScope_2044_; lean_object* v_maxRecDepth_2045_; lean_object* v_ngen_2046_; lean_object* v_auxDeclNGen_2047_; lean_object* v_infoState_2048_; lean_object* v_traceState_2049_; lean_object* v_snapshotTasks_2050_; lean_object* v_prevLinterStates_2051_; lean_object* v_codeQualityEntryTasks_2052_; lean_object* v___x_2054_; uint8_t v_isShared_2055_; uint8_t v_isSharedCheck_2073_; 
lean_dec_ref_known(v___x_2033_, 1);
lean_inc(v___x_1989_);
v___x_2034_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2034_, 0, v___x_1989_);
lean_ctor_set(v___x_2034_, 1, v___x_1970_);
lean_inc(v___x_1987_);
v___x_2035_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2035_, 0, v___x_1987_);
lean_ctor_set(v___x_2035_, 1, v___x_2034_);
lean_inc_ref(v___x_2035_);
lean_inc(v_declName_1982_);
v___x_2036_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2036_, 0, v_declName_1982_);
lean_ctor_set(v___x_2036_, 1, v___x_2035_);
v___x_2037_ = lean_box(0);
v___x_2038_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg(v___x_2036_, v___x_2037_, v___y_1971_, v___y_1972_);
lean_dec_ref_known(v___x_2036_, 2);
lean_dec_ref(v___x_2038_);
v___x_2039_ = lean_st_ref_take(v___y_1972_);
v_env_2040_ = lean_ctor_get(v___x_2039_, 0);
v_messages_2041_ = lean_ctor_get(v___x_2039_, 1);
v_scopes_2042_ = lean_ctor_get(v___x_2039_, 2);
v_usedQuotCtxts_2043_ = lean_ctor_get(v___x_2039_, 3);
v_nextMacroScope_2044_ = lean_ctor_get(v___x_2039_, 4);
v_maxRecDepth_2045_ = lean_ctor_get(v___x_2039_, 5);
v_ngen_2046_ = lean_ctor_get(v___x_2039_, 6);
v_auxDeclNGen_2047_ = lean_ctor_get(v___x_2039_, 7);
v_infoState_2048_ = lean_ctor_get(v___x_2039_, 8);
v_traceState_2049_ = lean_ctor_get(v___x_2039_, 9);
v_snapshotTasks_2050_ = lean_ctor_get(v___x_2039_, 10);
v_prevLinterStates_2051_ = lean_ctor_get(v___x_2039_, 11);
v_codeQualityEntryTasks_2052_ = lean_ctor_get(v___x_2039_, 12);
v_isSharedCheck_2073_ = !lean_is_exclusive(v___x_2039_);
if (v_isSharedCheck_2073_ == 0)
{
v___x_2054_ = v___x_2039_;
v_isShared_2055_ = v_isSharedCheck_2073_;
goto v_resetjp_2053_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2052_);
lean_inc(v_prevLinterStates_2051_);
lean_inc(v_snapshotTasks_2050_);
lean_inc(v_traceState_2049_);
lean_inc(v_infoState_2048_);
lean_inc(v_auxDeclNGen_2047_);
lean_inc(v_ngen_2046_);
lean_inc(v_maxRecDepth_2045_);
lean_inc(v_nextMacroScope_2044_);
lean_inc(v_usedQuotCtxts_2043_);
lean_inc(v_scopes_2042_);
lean_inc(v_messages_2041_);
lean_inc(v_env_2040_);
lean_dec(v___x_2039_);
v___x_2054_ = lean_box(0);
v_isShared_2055_ = v_isSharedCheck_2073_;
goto v_resetjp_2053_;
}
v_resetjp_2053_:
{
lean_object* v___x_2057_; 
if (v_isShared_1985_ == 0)
{
lean_ctor_set(v___x_1984_, 3, v_a_2028_);
lean_ctor_set(v___x_1984_, 2, v___x_1989_);
lean_ctor_set(v___x_1984_, 1, v___x_1987_);
lean_ctor_set(v___x_1984_, 0, v_declName_1982_);
v___x_2057_ = v___x_1984_;
goto v_reusejp_2056_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v_declName_1982_);
lean_ctor_set(v_reuseFailAlloc_2072_, 1, v___x_1987_);
lean_ctor_set(v_reuseFailAlloc_2072_, 2, v___x_1989_);
lean_ctor_set(v_reuseFailAlloc_2072_, 3, v_a_2028_);
v___x_2057_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2056_;
}
v_reusejp_2056_:
{
lean_object* v___x_2058_; lean_object* v___x_2060_; 
v___x_2058_ = l_Lean_registerVirtualStructure(v_env_2040_, v___x_2057_);
if (v_isShared_2055_ == 0)
{
lean_ctor_set(v___x_2054_, 0, v___x_2058_);
v___x_2060_ = v___x_2054_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v___x_2058_);
lean_ctor_set(v_reuseFailAlloc_2071_, 1, v_messages_2041_);
lean_ctor_set(v_reuseFailAlloc_2071_, 2, v_scopes_2042_);
lean_ctor_set(v_reuseFailAlloc_2071_, 3, v_usedQuotCtxts_2043_);
lean_ctor_set(v_reuseFailAlloc_2071_, 4, v_nextMacroScope_2044_);
lean_ctor_set(v_reuseFailAlloc_2071_, 5, v_maxRecDepth_2045_);
lean_ctor_set(v_reuseFailAlloc_2071_, 6, v_ngen_2046_);
lean_ctor_set(v_reuseFailAlloc_2071_, 7, v_auxDeclNGen_2047_);
lean_ctor_set(v_reuseFailAlloc_2071_, 8, v_infoState_2048_);
lean_ctor_set(v_reuseFailAlloc_2071_, 9, v_traceState_2049_);
lean_ctor_set(v_reuseFailAlloc_2071_, 10, v_snapshotTasks_2050_);
lean_ctor_set(v_reuseFailAlloc_2071_, 11, v_prevLinterStates_2051_);
lean_ctor_set(v_reuseFailAlloc_2071_, 12, v_codeQualityEntryTasks_2052_);
v___x_2060_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
lean_object* v___x_2061_; lean_object* v___x_2062_; 
v___x_2061_ = lean_st_ref_put(v___y_1972_, v___x_2060_);
v___x_2062_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___redArg(v___x_2035_, v___x_2037_, v___y_1971_, v___y_1972_);
lean_dec_ref_known(v___x_2035_, 2);
if (lean_obj_tag(v___x_2062_) == 0)
{
lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2069_; 
v_isSharedCheck_2069_ = !lean_is_exclusive(v___x_2062_);
if (v_isSharedCheck_2069_ == 0)
{
lean_object* v_unused_2070_; 
v_unused_2070_ = lean_ctor_get(v___x_2062_, 0);
lean_dec(v_unused_2070_);
v___x_2064_ = v___x_2062_;
v_isShared_2065_ = v_isSharedCheck_2069_;
goto v_resetjp_2063_;
}
else
{
lean_dec(v___x_2062_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2069_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v___x_2067_; 
if (v_isShared_2065_ == 0)
{
lean_ctor_set(v___x_2064_, 0, v___x_2037_);
v___x_2067_ = v___x_2064_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v___x_2037_);
v___x_2067_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
return v___x_2067_;
}
}
}
else
{
return v___x_2062_;
}
}
}
}
}
else
{
lean_dec(v_a_2028_);
lean_dec(v___x_1989_);
lean_dec(v___x_1987_);
lean_del_object(v___x_1984_);
lean_dec(v_declName_1982_);
lean_dec(v___x_1970_);
return v___x_2033_;
}
}
else
{
lean_dec(v_a_2028_);
lean_dec(v___x_1989_);
lean_dec(v___x_1987_);
lean_del_object(v___x_1984_);
lean_dec(v_declName_1982_);
lean_dec(v___x_1970_);
lean_dec(v_projId_1963_);
return v___x_2031_;
}
}
else
{
lean_dec(v_a_2028_);
lean_dec(v___x_1989_);
lean_dec(v___x_1987_);
lean_del_object(v___x_1984_);
lean_dec(v_declName_1982_);
lean_dec(v___x_1970_);
lean_dec(v_projId_1963_);
return v___x_2030_;
}
}
else
{
lean_object* v_a_2074_; lean_object* v___x_2076_; uint8_t v_isShared_2077_; uint8_t v_isSharedCheck_2081_; 
lean_dec(v___x_1989_);
lean_dec(v___x_1987_);
lean_del_object(v___x_1984_);
lean_dec(v_declName_1982_);
lean_dec(v___x_1970_);
lean_dec(v_projId_1963_);
lean_dec(v___x_1961_);
v_a_2074_ = lean_ctor_get(v___x_2027_, 0);
v_isSharedCheck_2081_ = !lean_is_exclusive(v___x_2027_);
if (v_isSharedCheck_2081_ == 0)
{
v___x_2076_ = v___x_2027_;
v_isShared_2077_ = v_isSharedCheck_2081_;
goto v_resetjp_2075_;
}
else
{
lean_inc(v_a_2074_);
lean_dec(v___x_2027_);
v___x_2076_ = lean_box(0);
v_isShared_2077_ = v_isSharedCheck_2081_;
goto v_resetjp_2075_;
}
v_resetjp_2075_:
{
lean_object* v___x_2079_; 
if (v_isShared_2077_ == 0)
{
v___x_2079_ = v___x_2076_;
goto v_reusejp_2078_;
}
else
{
lean_object* v_reuseFailAlloc_2080_; 
v_reuseFailAlloc_2080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2080_, 0, v_a_2074_);
v___x_2079_ = v_reuseFailAlloc_2080_;
goto v_reusejp_2078_;
}
v_reusejp_2078_:
{
return v___x_2079_;
}
}
}
}
else
{
lean_dec(v___x_1989_);
lean_dec(v___x_1988_);
lean_dec(v___x_1987_);
lean_del_object(v___x_1984_);
lean_dec(v_declName_1982_);
lean_dec(v___x_1970_);
lean_dec(v_projId_1963_);
lean_dec(v___x_1961_);
return v___x_2025_;
}
}
}
else
{
lean_object* v_a_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2100_; 
lean_dec(v___x_1989_);
lean_dec(v___x_1988_);
lean_dec(v___x_1987_);
lean_del_object(v___x_1984_);
lean_dec(v_declName_1982_);
lean_dec(v___x_1970_);
lean_dec(v_mods_1969_);
lean_dec(v___x_1968_);
lean_dec_ref(v_params_1967_);
lean_dec_ref(v___x_1966_);
lean_dec_ref(v___x_1965_);
lean_dec_ref(v___x_1964_);
lean_dec(v_projId_1963_);
lean_dec(v___x_1961_);
v_a_2093_ = lean_ctor_get(v___x_1990_, 0);
v_isSharedCheck_2100_ = !lean_is_exclusive(v___x_1990_);
if (v_isSharedCheck_2100_ == 0)
{
v___x_2095_ = v___x_1990_;
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_a_2093_);
lean_dec(v___x_1990_);
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
}
else
{
lean_object* v_a_2105_; lean_object* v___x_2107_; uint8_t v_isShared_2108_; uint8_t v_isSharedCheck_2112_; 
lean_dec(v___x_1970_);
lean_dec(v_mods_1969_);
lean_dec(v___x_1968_);
lean_dec_ref(v_params_1967_);
lean_dec_ref(v___x_1966_);
lean_dec_ref(v___x_1965_);
lean_dec_ref(v___x_1964_);
lean_dec(v_projId_1963_);
lean_dec(v___x_1961_);
v_a_2105_ = lean_ctor_get(v___x_1980_, 0);
v_isSharedCheck_2112_ = !lean_is_exclusive(v___x_1980_);
if (v_isSharedCheck_2112_ == 0)
{
v___x_2107_ = v___x_1980_;
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
else
{
lean_inc(v_a_2105_);
lean_dec(v___x_1980_);
v___x_2107_ = lean_box(0);
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
v_resetjp_2106_:
{
lean_object* v___x_2110_; 
if (v_isShared_2108_ == 0)
{
v___x_2110_ = v___x_2107_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v_a_2105_);
v___x_2110_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
return v___x_2110_;
}
}
}
}
else
{
lean_object* v_a_2113_; lean_object* v___x_2115_; uint8_t v_isShared_2116_; uint8_t v_isSharedCheck_2120_; 
lean_dec(v_currNamespace_1976_);
lean_dec(v___x_1970_);
lean_dec(v_mods_1969_);
lean_dec(v___x_1968_);
lean_dec_ref(v_params_1967_);
lean_dec_ref(v___x_1966_);
lean_dec_ref(v___x_1965_);
lean_dec_ref(v___x_1964_);
lean_dec(v_projId_1963_);
lean_dec_ref(v_a_1962_);
lean_dec(v___x_1961_);
v_a_2113_ = lean_ctor_get(v___x_1977_, 0);
v_isSharedCheck_2120_ = !lean_is_exclusive(v___x_1977_);
if (v_isSharedCheck_2120_ == 0)
{
v___x_2115_ = v___x_1977_;
v_isShared_2116_ = v_isSharedCheck_2120_;
goto v_resetjp_2114_;
}
else
{
lean_inc(v_a_2113_);
lean_dec(v___x_1977_);
v___x_2115_ = lean_box(0);
v_isShared_2116_ = v_isSharedCheck_2120_;
goto v_resetjp_2114_;
}
v_resetjp_2114_:
{
lean_object* v___x_2118_; 
if (v_isShared_2116_ == 0)
{
v___x_2118_ = v___x_2115_;
goto v_reusejp_2117_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v_a_2113_);
v___x_2118_ = v_reuseFailAlloc_2119_;
goto v_reusejp_2117_;
}
v_reusejp_2117_:
{
return v___x_2118_;
}
}
}
}
else
{
lean_object* v_a_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2128_; 
lean_dec(v___x_1970_);
lean_dec(v_mods_1969_);
lean_dec(v___x_1968_);
lean_dec_ref(v_params_1967_);
lean_dec_ref(v___x_1966_);
lean_dec_ref(v___x_1965_);
lean_dec_ref(v___x_1964_);
lean_dec(v_projId_1963_);
lean_dec_ref(v_a_1962_);
lean_dec(v___x_1961_);
v_a_2121_ = lean_ctor_get(v___x_1974_, 0);
v_isSharedCheck_2128_ = !lean_is_exclusive(v___x_1974_);
if (v_isSharedCheck_2128_ == 0)
{
v___x_2123_ = v___x_1974_;
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_a_2121_);
lean_dec(v___x_1974_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
lean_object* v___x_2126_; 
if (v_isShared_2124_ == 0)
{
v___x_2126_ = v___x_2123_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v_a_2121_);
v___x_2126_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
return v___x_2126_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__0___boxed(lean_object* v___x_2129_, lean_object* v_a_2130_, lean_object* v_projId_2131_, lean_object* v___x_2132_, lean_object* v___x_2133_, lean_object* v___x_2134_, lean_object* v_params_2135_, lean_object* v___x_2136_, lean_object* v_mods_2137_, lean_object* v___x_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_){
_start:
{
lean_object* v_res_2142_; 
v_res_2142_ = l_Lean_Elab_Command_elabNewtype___lam__0(v___x_2129_, v_a_2130_, v_projId_2131_, v___x_2132_, v___x_2133_, v___x_2134_, v_params_2135_, v___x_2136_, v_mods_2137_, v___x_2138_, v___y_2139_, v___y_2140_);
lean_dec(v___y_2140_);
lean_dec_ref(v___y_2139_);
return v_res_2142_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___lam__0(uint8_t v_suppressElabErrors_2144_, uint8_t v___y_2145_, lean_object* v_x_2146_){
_start:
{
if (lean_obj_tag(v_x_2146_) == 1)
{
lean_object* v_pre_2147_; 
v_pre_2147_ = lean_ctor_get(v_x_2146_, 0);
if (lean_obj_tag(v_pre_2147_) == 0)
{
lean_object* v_str_2148_; lean_object* v___x_2149_; uint8_t v___x_2150_; 
v_str_2148_ = lean_ctor_get(v_x_2146_, 1);
v___x_2149_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___lam__0___closed__0));
v___x_2150_ = lean_string_dec_eq(v_str_2148_, v___x_2149_);
if (v___x_2150_ == 0)
{
return v___x_2150_;
}
else
{
return v_suppressElabErrors_2144_;
}
}
else
{
return v___y_2145_;
}
}
else
{
return v___y_2145_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___lam__0___boxed(lean_object* v_suppressElabErrors_2151_, lean_object* v___y_2152_, lean_object* v_x_2153_){
_start:
{
uint8_t v_suppressElabErrors_boxed_2154_; uint8_t v___y_31199__boxed_2155_; uint8_t v_res_2156_; lean_object* v_r_2157_; 
v_suppressElabErrors_boxed_2154_ = lean_unbox(v_suppressElabErrors_2151_);
v___y_31199__boxed_2155_ = lean_unbox(v___y_2152_);
v_res_2156_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___lam__0(v_suppressElabErrors_boxed_2154_, v___y_31199__boxed_2155_, v_x_2153_);
lean_dec(v_x_2153_);
v_r_2157_ = lean_box(v_res_2156_);
return v_r_2157_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29(lean_object* v_ref_2159_, lean_object* v_msgData_2160_, uint8_t v_severity_2161_, uint8_t v_isSilent_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_){
_start:
{
lean_object* v___y_2167_; lean_object* v___y_2168_; uint8_t v___y_2169_; lean_object* v___y_2170_; uint8_t v___y_2171_; lean_object* v___y_2172_; lean_object* v___y_2173_; lean_object* v___y_2174_; uint8_t v___y_2232_; uint8_t v___y_2233_; lean_object* v___y_2234_; uint8_t v___y_2235_; lean_object* v___y_2236_; uint8_t v___y_2260_; uint8_t v___y_2261_; uint8_t v___y_2262_; lean_object* v___y_2263_; lean_object* v___y_2264_; uint8_t v___y_2268_; uint8_t v___y_2269_; uint8_t v___y_2270_; uint8_t v___x_2285_; uint8_t v___y_2287_; uint8_t v___y_2288_; uint8_t v___y_2289_; uint8_t v___y_2291_; uint8_t v___x_2303_; 
v___x_2285_ = 2;
v___x_2303_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2161_, v___x_2285_);
if (v___x_2303_ == 0)
{
v___y_2291_ = v___x_2303_;
goto v___jp_2290_;
}
else
{
uint8_t v___x_2304_; 
lean_inc_ref(v_msgData_2160_);
v___x_2304_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_2160_);
v___y_2291_ = v___x_2304_;
goto v___jp_2290_;
}
v___jp_2166_:
{
lean_object* v___x_2175_; 
v___x_2175_ = l_Lean_Elab_Command_getScope___redArg(v___y_2174_);
if (lean_obj_tag(v___x_2175_) == 0)
{
lean_object* v_a_2176_; lean_object* v_currNamespace_2177_; lean_object* v___x_2178_; 
v_a_2176_ = lean_ctor_get(v___x_2175_, 0);
lean_inc(v_a_2176_);
lean_dec_ref_known(v___x_2175_, 1);
v_currNamespace_2177_ = lean_ctor_get(v_a_2176_, 2);
lean_inc(v_currNamespace_2177_);
lean_dec(v_a_2176_);
v___x_2178_ = l_Lean_Elab_Command_getScope___redArg(v___y_2174_);
if (lean_obj_tag(v___x_2178_) == 0)
{
lean_object* v_a_2179_; lean_object* v___x_2181_; uint8_t v_isShared_2182_; uint8_t v_isSharedCheck_2214_; 
v_a_2179_ = lean_ctor_get(v___x_2178_, 0);
v_isSharedCheck_2214_ = !lean_is_exclusive(v___x_2178_);
if (v_isSharedCheck_2214_ == 0)
{
v___x_2181_ = v___x_2178_;
v_isShared_2182_ = v_isSharedCheck_2214_;
goto v_resetjp_2180_;
}
else
{
lean_inc(v_a_2179_);
lean_dec(v___x_2178_);
v___x_2181_ = lean_box(0);
v_isShared_2182_ = v_isSharedCheck_2214_;
goto v_resetjp_2180_;
}
v_resetjp_2180_:
{
lean_object* v_openDecls_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v_env_2188_; lean_object* v_messages_2189_; lean_object* v_scopes_2190_; lean_object* v_usedQuotCtxts_2191_; lean_object* v_nextMacroScope_2192_; lean_object* v_maxRecDepth_2193_; lean_object* v_ngen_2194_; lean_object* v_auxDeclNGen_2195_; lean_object* v_infoState_2196_; lean_object* v_traceState_2197_; lean_object* v_snapshotTasks_2198_; lean_object* v_prevLinterStates_2199_; lean_object* v_codeQualityEntryTasks_2200_; lean_object* v___x_2202_; uint8_t v_isShared_2203_; uint8_t v_isSharedCheck_2213_; 
v_openDecls_2183_ = lean_ctor_get(v_a_2179_, 3);
lean_inc(v_openDecls_2183_);
lean_dec(v_a_2179_);
v___x_2184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2184_, 0, v_currNamespace_2177_);
lean_ctor_set(v___x_2184_, 1, v_openDecls_2183_);
v___x_2185_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2185_, 0, v___x_2184_);
lean_ctor_set(v___x_2185_, 1, v___y_2168_);
lean_inc_ref(v___y_2173_);
lean_inc_ref(v___y_2170_);
v___x_2186_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2186_, 0, v___y_2170_);
lean_ctor_set(v___x_2186_, 1, v___y_2167_);
lean_ctor_set(v___x_2186_, 2, v___y_2172_);
lean_ctor_set(v___x_2186_, 3, v___y_2173_);
lean_ctor_set(v___x_2186_, 4, v___x_2185_);
lean_ctor_set_uint8(v___x_2186_, sizeof(void*)*5, v___y_2171_);
lean_ctor_set_uint8(v___x_2186_, sizeof(void*)*5 + 1, v___y_2169_);
lean_ctor_set_uint8(v___x_2186_, sizeof(void*)*5 + 2, v_isSilent_2162_);
v___x_2187_ = lean_st_ref_take(v___y_2174_);
v_env_2188_ = lean_ctor_get(v___x_2187_, 0);
v_messages_2189_ = lean_ctor_get(v___x_2187_, 1);
v_scopes_2190_ = lean_ctor_get(v___x_2187_, 2);
v_usedQuotCtxts_2191_ = lean_ctor_get(v___x_2187_, 3);
v_nextMacroScope_2192_ = lean_ctor_get(v___x_2187_, 4);
v_maxRecDepth_2193_ = lean_ctor_get(v___x_2187_, 5);
v_ngen_2194_ = lean_ctor_get(v___x_2187_, 6);
v_auxDeclNGen_2195_ = lean_ctor_get(v___x_2187_, 7);
v_infoState_2196_ = lean_ctor_get(v___x_2187_, 8);
v_traceState_2197_ = lean_ctor_get(v___x_2187_, 9);
v_snapshotTasks_2198_ = lean_ctor_get(v___x_2187_, 10);
v_prevLinterStates_2199_ = lean_ctor_get(v___x_2187_, 11);
v_codeQualityEntryTasks_2200_ = lean_ctor_get(v___x_2187_, 12);
v_isSharedCheck_2213_ = !lean_is_exclusive(v___x_2187_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2202_ = v___x_2187_;
v_isShared_2203_ = v_isSharedCheck_2213_;
goto v_resetjp_2201_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2200_);
lean_inc(v_prevLinterStates_2199_);
lean_inc(v_snapshotTasks_2198_);
lean_inc(v_traceState_2197_);
lean_inc(v_infoState_2196_);
lean_inc(v_auxDeclNGen_2195_);
lean_inc(v_ngen_2194_);
lean_inc(v_maxRecDepth_2193_);
lean_inc(v_nextMacroScope_2192_);
lean_inc(v_usedQuotCtxts_2191_);
lean_inc(v_scopes_2190_);
lean_inc(v_messages_2189_);
lean_inc(v_env_2188_);
lean_dec(v___x_2187_);
v___x_2202_ = lean_box(0);
v_isShared_2203_ = v_isSharedCheck_2213_;
goto v_resetjp_2201_;
}
v_resetjp_2201_:
{
lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2207_; 
v___x_2204_ = lean_box(0);
v___x_2205_ = l_Lean_MessageLog_add(v___x_2186_, v_messages_2189_);
if (v_isShared_2203_ == 0)
{
lean_ctor_set(v___x_2202_, 1, v___x_2205_);
v___x_2207_ = v___x_2202_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2212_; 
v_reuseFailAlloc_2212_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2212_, 0, v_env_2188_);
lean_ctor_set(v_reuseFailAlloc_2212_, 1, v___x_2205_);
lean_ctor_set(v_reuseFailAlloc_2212_, 2, v_scopes_2190_);
lean_ctor_set(v_reuseFailAlloc_2212_, 3, v_usedQuotCtxts_2191_);
lean_ctor_set(v_reuseFailAlloc_2212_, 4, v_nextMacroScope_2192_);
lean_ctor_set(v_reuseFailAlloc_2212_, 5, v_maxRecDepth_2193_);
lean_ctor_set(v_reuseFailAlloc_2212_, 6, v_ngen_2194_);
lean_ctor_set(v_reuseFailAlloc_2212_, 7, v_auxDeclNGen_2195_);
lean_ctor_set(v_reuseFailAlloc_2212_, 8, v_infoState_2196_);
lean_ctor_set(v_reuseFailAlloc_2212_, 9, v_traceState_2197_);
lean_ctor_set(v_reuseFailAlloc_2212_, 10, v_snapshotTasks_2198_);
lean_ctor_set(v_reuseFailAlloc_2212_, 11, v_prevLinterStates_2199_);
lean_ctor_set(v_reuseFailAlloc_2212_, 12, v_codeQualityEntryTasks_2200_);
v___x_2207_ = v_reuseFailAlloc_2212_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
lean_object* v___x_2208_; lean_object* v___x_2210_; 
v___x_2208_ = lean_st_ref_put(v___y_2174_, v___x_2207_);
if (v_isShared_2182_ == 0)
{
lean_ctor_set(v___x_2181_, 0, v___x_2204_);
v___x_2210_ = v___x_2181_;
goto v_reusejp_2209_;
}
else
{
lean_object* v_reuseFailAlloc_2211_; 
v_reuseFailAlloc_2211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2211_, 0, v___x_2204_);
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
}
else
{
lean_object* v_a_2215_; lean_object* v___x_2217_; uint8_t v_isShared_2218_; uint8_t v_isSharedCheck_2222_; 
lean_dec(v_currNamespace_2177_);
lean_dec(v___y_2172_);
lean_dec_ref(v___y_2168_);
lean_dec_ref(v___y_2167_);
v_a_2215_ = lean_ctor_get(v___x_2178_, 0);
v_isSharedCheck_2222_ = !lean_is_exclusive(v___x_2178_);
if (v_isSharedCheck_2222_ == 0)
{
v___x_2217_ = v___x_2178_;
v_isShared_2218_ = v_isSharedCheck_2222_;
goto v_resetjp_2216_;
}
else
{
lean_inc(v_a_2215_);
lean_dec(v___x_2178_);
v___x_2217_ = lean_box(0);
v_isShared_2218_ = v_isSharedCheck_2222_;
goto v_resetjp_2216_;
}
v_resetjp_2216_:
{
lean_object* v___x_2220_; 
if (v_isShared_2218_ == 0)
{
v___x_2220_ = v___x_2217_;
goto v_reusejp_2219_;
}
else
{
lean_object* v_reuseFailAlloc_2221_; 
v_reuseFailAlloc_2221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2221_, 0, v_a_2215_);
v___x_2220_ = v_reuseFailAlloc_2221_;
goto v_reusejp_2219_;
}
v_reusejp_2219_:
{
return v___x_2220_;
}
}
}
}
else
{
lean_object* v_a_2223_; lean_object* v___x_2225_; uint8_t v_isShared_2226_; uint8_t v_isSharedCheck_2230_; 
lean_dec(v___y_2172_);
lean_dec_ref(v___y_2168_);
lean_dec_ref(v___y_2167_);
v_a_2223_ = lean_ctor_get(v___x_2175_, 0);
v_isSharedCheck_2230_ = !lean_is_exclusive(v___x_2175_);
if (v_isSharedCheck_2230_ == 0)
{
v___x_2225_ = v___x_2175_;
v_isShared_2226_ = v_isSharedCheck_2230_;
goto v_resetjp_2224_;
}
else
{
lean_inc(v_a_2223_);
lean_dec(v___x_2175_);
v___x_2225_ = lean_box(0);
v_isShared_2226_ = v_isSharedCheck_2230_;
goto v_resetjp_2224_;
}
v_resetjp_2224_:
{
lean_object* v___x_2228_; 
if (v_isShared_2226_ == 0)
{
v___x_2228_ = v___x_2225_;
goto v_reusejp_2227_;
}
else
{
lean_object* v_reuseFailAlloc_2229_; 
v_reuseFailAlloc_2229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2229_, 0, v_a_2223_);
v___x_2228_ = v_reuseFailAlloc_2229_;
goto v_reusejp_2227_;
}
v_reusejp_2227_:
{
return v___x_2228_;
}
}
}
}
v___jp_2231_:
{
lean_object* v_fileName_2237_; lean_object* v_fileMap_2238_; uint8_t v_suppressElabErrors_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___f_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v_a_2245_; lean_object* v___x_2247_; uint8_t v_isShared_2248_; uint8_t v_isSharedCheck_2258_; 
v_fileName_2237_ = lean_ctor_get(v___y_2163_, 0);
v_fileMap_2238_ = lean_ctor_get(v___y_2163_, 1);
v_suppressElabErrors_2239_ = lean_ctor_get_uint8(v___y_2163_, sizeof(void*)*10);
v___x_2240_ = lean_box(v_suppressElabErrors_2239_);
v___x_2241_ = lean_box(v___y_2232_);
v___f_2242_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2242_, 0, v___x_2240_);
lean_closure_set(v___f_2242_, 1, v___x_2241_);
v___x_2243_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_2160_);
v___x_2244_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg(v___x_2243_, v___y_2164_);
v_a_2245_ = lean_ctor_get(v___x_2244_, 0);
v_isSharedCheck_2258_ = !lean_is_exclusive(v___x_2244_);
if (v_isSharedCheck_2258_ == 0)
{
v___x_2247_ = v___x_2244_;
v_isShared_2248_ = v_isSharedCheck_2258_;
goto v_resetjp_2246_;
}
else
{
lean_inc(v_a_2245_);
lean_dec(v___x_2244_);
v___x_2247_ = lean_box(0);
v_isShared_2248_ = v_isSharedCheck_2258_;
goto v_resetjp_2246_;
}
v_resetjp_2246_:
{
lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; 
lean_inc_ref_n(v_fileMap_2238_, 2);
v___x_2249_ = l_Lean_FileMap_toPosition(v_fileMap_2238_, v___y_2234_);
lean_dec(v___y_2234_);
v___x_2250_ = l_Lean_FileMap_toPosition(v_fileMap_2238_, v___y_2236_);
lean_dec(v___y_2236_);
v___x_2251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2251_, 0, v___x_2250_);
v___x_2252_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___closed__0));
if (v_suppressElabErrors_2239_ == 0)
{
lean_del_object(v___x_2247_);
lean_dec_ref(v___f_2242_);
v___y_2167_ = v___x_2249_;
v___y_2168_ = v_a_2245_;
v___y_2169_ = v___y_2233_;
v___y_2170_ = v_fileName_2237_;
v___y_2171_ = v___y_2235_;
v___y_2172_ = v___x_2251_;
v___y_2173_ = v___x_2252_;
v___y_2174_ = v___y_2164_;
goto v___jp_2166_;
}
else
{
uint8_t v___x_2253_; 
lean_inc(v_a_2245_);
v___x_2253_ = l_Lean_MessageData_hasTag(v___f_2242_, v_a_2245_);
if (v___x_2253_ == 0)
{
lean_object* v___x_2254_; lean_object* v___x_2256_; 
lean_dec_ref_known(v___x_2251_, 1);
lean_dec_ref(v___x_2249_);
lean_dec(v_a_2245_);
v___x_2254_ = lean_box(0);
if (v_isShared_2248_ == 0)
{
lean_ctor_set(v___x_2247_, 0, v___x_2254_);
v___x_2256_ = v___x_2247_;
goto v_reusejp_2255_;
}
else
{
lean_object* v_reuseFailAlloc_2257_; 
v_reuseFailAlloc_2257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2257_, 0, v___x_2254_);
v___x_2256_ = v_reuseFailAlloc_2257_;
goto v_reusejp_2255_;
}
v_reusejp_2255_:
{
return v___x_2256_;
}
}
else
{
lean_del_object(v___x_2247_);
v___y_2167_ = v___x_2249_;
v___y_2168_ = v_a_2245_;
v___y_2169_ = v___y_2233_;
v___y_2170_ = v_fileName_2237_;
v___y_2171_ = v___y_2235_;
v___y_2172_ = v___x_2251_;
v___y_2173_ = v___x_2252_;
v___y_2174_ = v___y_2164_;
goto v___jp_2166_;
}
}
}
}
v___jp_2259_:
{
lean_object* v___x_2265_; 
v___x_2265_ = l_Lean_Syntax_getTailPos_x3f(v___y_2263_, v___y_2262_);
lean_dec(v___y_2263_);
if (lean_obj_tag(v___x_2265_) == 0)
{
lean_inc(v___y_2264_);
v___y_2232_ = v___y_2260_;
v___y_2233_ = v___y_2261_;
v___y_2234_ = v___y_2264_;
v___y_2235_ = v___y_2262_;
v___y_2236_ = v___y_2264_;
goto v___jp_2231_;
}
else
{
lean_object* v_val_2266_; 
v_val_2266_ = lean_ctor_get(v___x_2265_, 0);
lean_inc(v_val_2266_);
lean_dec_ref_known(v___x_2265_, 1);
v___y_2232_ = v___y_2260_;
v___y_2233_ = v___y_2261_;
v___y_2234_ = v___y_2264_;
v___y_2235_ = v___y_2262_;
v___y_2236_ = v_val_2266_;
goto v___jp_2231_;
}
}
v___jp_2267_:
{
lean_object* v___x_2271_; 
v___x_2271_ = l_Lean_Elab_Command_getRef___redArg(v___y_2163_);
if (lean_obj_tag(v___x_2271_) == 0)
{
lean_object* v_a_2272_; lean_object* v_ref_2273_; lean_object* v___x_2274_; 
v_a_2272_ = lean_ctor_get(v___x_2271_, 0);
lean_inc(v_a_2272_);
lean_dec_ref_known(v___x_2271_, 1);
v_ref_2273_ = l_Lean_replaceRef(v_ref_2159_, v_a_2272_);
lean_dec(v_a_2272_);
v___x_2274_ = l_Lean_Syntax_getPos_x3f(v_ref_2273_, v___y_2269_);
if (lean_obj_tag(v___x_2274_) == 0)
{
lean_object* v___x_2275_; 
v___x_2275_ = lean_unsigned_to_nat(0u);
v___y_2260_ = v___y_2268_;
v___y_2261_ = v___y_2270_;
v___y_2262_ = v___y_2269_;
v___y_2263_ = v_ref_2273_;
v___y_2264_ = v___x_2275_;
goto v___jp_2259_;
}
else
{
lean_object* v_val_2276_; 
v_val_2276_ = lean_ctor_get(v___x_2274_, 0);
lean_inc(v_val_2276_);
lean_dec_ref_known(v___x_2274_, 1);
v___y_2260_ = v___y_2268_;
v___y_2261_ = v___y_2270_;
v___y_2262_ = v___y_2269_;
v___y_2263_ = v_ref_2273_;
v___y_2264_ = v_val_2276_;
goto v___jp_2259_;
}
}
else
{
lean_object* v_a_2277_; lean_object* v___x_2279_; uint8_t v_isShared_2280_; uint8_t v_isSharedCheck_2284_; 
lean_dec_ref(v_msgData_2160_);
v_a_2277_ = lean_ctor_get(v___x_2271_, 0);
v_isSharedCheck_2284_ = !lean_is_exclusive(v___x_2271_);
if (v_isSharedCheck_2284_ == 0)
{
v___x_2279_ = v___x_2271_;
v_isShared_2280_ = v_isSharedCheck_2284_;
goto v_resetjp_2278_;
}
else
{
lean_inc(v_a_2277_);
lean_dec(v___x_2271_);
v___x_2279_ = lean_box(0);
v_isShared_2280_ = v_isSharedCheck_2284_;
goto v_resetjp_2278_;
}
v_resetjp_2278_:
{
lean_object* v___x_2282_; 
if (v_isShared_2280_ == 0)
{
v___x_2282_ = v___x_2279_;
goto v_reusejp_2281_;
}
else
{
lean_object* v_reuseFailAlloc_2283_; 
v_reuseFailAlloc_2283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2283_, 0, v_a_2277_);
v___x_2282_ = v_reuseFailAlloc_2283_;
goto v_reusejp_2281_;
}
v_reusejp_2281_:
{
return v___x_2282_;
}
}
}
}
v___jp_2286_:
{
if (v___y_2289_ == 0)
{
v___y_2268_ = v___y_2287_;
v___y_2269_ = v___y_2288_;
v___y_2270_ = v_severity_2161_;
goto v___jp_2267_;
}
else
{
v___y_2268_ = v___y_2287_;
v___y_2269_ = v___y_2288_;
v___y_2270_ = v___x_2285_;
goto v___jp_2267_;
}
}
v___jp_2290_:
{
if (v___y_2291_ == 0)
{
lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v_scopes_2294_; lean_object* v___x_2295_; lean_object* v_opts_2296_; uint8_t v___x_2297_; uint8_t v___x_2298_; 
v___x_2292_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2293_ = lean_st_ref_get(v___y_2164_);
v_scopes_2294_ = lean_ctor_get(v___x_2293_, 2);
lean_inc(v_scopes_2294_);
lean_dec(v___x_2293_);
v___x_2295_ = l_List_head_x21___redArg(v___x_2292_, v_scopes_2294_);
lean_dec(v_scopes_2294_);
v_opts_2296_ = lean_ctor_get(v___x_2295_, 1);
lean_inc_ref(v_opts_2296_);
lean_dec(v___x_2295_);
v___x_2297_ = 1;
v___x_2298_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2161_, v___x_2297_);
if (v___x_2298_ == 0)
{
lean_dec_ref(v_opts_2296_);
v___y_2287_ = v___y_2291_;
v___y_2288_ = v___y_2291_;
v___y_2289_ = v___x_2298_;
goto v___jp_2286_;
}
else
{
lean_object* v___x_2299_; uint8_t v___x_2300_; 
v___x_2299_ = l_Lean_warningAsError;
v___x_2300_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6_spec__10_spec__12(v_opts_2296_, v___x_2299_);
lean_dec_ref(v_opts_2296_);
v___y_2287_ = v___y_2291_;
v___y_2288_ = v___y_2291_;
v___y_2289_ = v___x_2300_;
goto v___jp_2286_;
}
}
else
{
lean_object* v___x_2301_; lean_object* v___x_2302_; 
lean_dec_ref(v_msgData_2160_);
v___x_2301_ = lean_box(0);
v___x_2302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2302_, 0, v___x_2301_);
return v___x_2302_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___boxed(lean_object* v_ref_2305_, lean_object* v_msgData_2306_, lean_object* v_severity_2307_, lean_object* v_isSilent_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_){
_start:
{
uint8_t v_severity_boxed_2312_; uint8_t v_isSilent_boxed_2313_; lean_object* v_res_2314_; 
v_severity_boxed_2312_ = lean_unbox(v_severity_2307_);
v_isSilent_boxed_2313_ = lean_unbox(v_isSilent_2308_);
v_res_2314_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29(v_ref_2305_, v_msgData_2306_, v_severity_boxed_2312_, v_isSilent_boxed_2313_, v___y_2309_, v___y_2310_);
lean_dec(v___y_2310_);
lean_dec_ref(v___y_2309_);
lean_dec(v_ref_2305_);
return v_res_2314_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26(lean_object* v_ref_2315_, lean_object* v_msgData_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_){
_start:
{
uint8_t v___x_2320_; uint8_t v___x_2321_; lean_object* v___x_2322_; 
v___x_2320_ = 1;
v___x_2321_ = 0;
v___x_2322_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29(v_ref_2315_, v_msgData_2316_, v___x_2320_, v___x_2321_, v___y_2317_, v___y_2318_);
return v___x_2322_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26___boxed(lean_object* v_ref_2323_, lean_object* v_msgData_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_){
_start:
{
lean_object* v_res_2328_; 
v_res_2328_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26(v_ref_2323_, v_msgData_2324_, v___y_2325_, v___y_2326_);
lean_dec(v___y_2326_);
lean_dec_ref(v___y_2325_);
lean_dec(v_ref_2323_);
return v_res_2328_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__1(void){
_start:
{
lean_object* v___x_2330_; lean_object* v___x_2331_; 
v___x_2330_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__0));
v___x_2331_ = l_Lean_stringToMessageData(v___x_2330_);
return v___x_2331_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__3(void){
_start:
{
lean_object* v___x_2333_; lean_object* v___x_2334_; 
v___x_2333_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__2));
v___x_2334_ = l_Lean_stringToMessageData(v___x_2333_);
return v___x_2334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18(lean_object* v_linterOption_2335_, lean_object* v_stx_2336_, lean_object* v_msg_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_){
_start:
{
lean_object* v_name_2341_; lean_object* v___x_2343_; uint8_t v_isShared_2344_; uint8_t v_isSharedCheck_2359_; 
v_name_2341_ = lean_ctor_get(v_linterOption_2335_, 0);
v_isSharedCheck_2359_ = !lean_is_exclusive(v_linterOption_2335_);
if (v_isSharedCheck_2359_ == 0)
{
lean_object* v_unused_2360_; 
v_unused_2360_ = lean_ctor_get(v_linterOption_2335_, 1);
lean_dec(v_unused_2360_);
v___x_2343_ = v_linterOption_2335_;
v_isShared_2344_ = v_isSharedCheck_2359_;
goto v_resetjp_2342_;
}
else
{
lean_inc(v_name_2341_);
lean_dec(v_linterOption_2335_);
v___x_2343_ = lean_box(0);
v_isShared_2344_ = v_isSharedCheck_2359_;
goto v_resetjp_2342_;
}
v_resetjp_2342_:
{
lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2348_; 
v___x_2345_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__1, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__1_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__1);
lean_inc(v_name_2341_);
v___x_2346_ = l_Lean_MessageData_ofName(v_name_2341_);
if (v_isShared_2344_ == 0)
{
lean_ctor_set_tag(v___x_2343_, 7);
lean_ctor_set(v___x_2343_, 1, v___x_2346_);
lean_ctor_set(v___x_2343_, 0, v___x_2345_);
v___x_2348_ = v___x_2343_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v___x_2345_);
lean_ctor_set(v_reuseFailAlloc_2358_, 1, v___x_2346_);
v___x_2348_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v_disable_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; 
v___x_2349_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__3, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__3_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___closed__3);
v___x_2350_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2350_, 0, v___x_2348_);
lean_ctor_set(v___x_2350_, 1, v___x_2349_);
v_disable_2351_ = l_Lean_MessageData_note(v___x_2350_);
v___x_2352_ = l_Lean_Linter_linterMessageTag;
v___x_2353_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2353_, 0, v_msg_2337_);
lean_ctor_set(v___x_2353_, 1, v_disable_2351_);
v___x_2354_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2354_, 0, v___x_2352_);
lean_ctor_set(v___x_2354_, 1, v___x_2353_);
v___x_2355_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2355_, 0, v_name_2341_);
lean_ctor_set(v___x_2355_, 1, v___x_2354_);
lean_inc(v_stx_2336_);
v___x_2356_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_2356_, 0, v_stx_2336_);
lean_ctor_set(v___x_2356_, 1, v___x_2355_);
v___x_2357_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26(v_stx_2336_, v___x_2356_, v___y_2338_, v___y_2339_);
lean_dec(v_stx_2336_);
return v___x_2357_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18___boxed(lean_object* v_linterOption_2361_, lean_object* v_stx_2362_, lean_object* v_msg_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_){
_start:
{
lean_object* v_res_2367_; 
v_res_2367_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18(v_linterOption_2361_, v_stx_2362_, v_msg_2363_, v___y_2364_, v___y_2365_);
lean_dec(v___y_2365_);
lean_dec_ref(v___y_2364_);
return v_res_2367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24___redArg(lean_object* v_o_2368_, lean_object* v___y_2369_){
_start:
{
lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v_env_2373_; lean_object* v___x_2374_; lean_object* v_toEnvExtension_2375_; lean_object* v_asyncMode_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v_merged_2379_; lean_object* v___x_2381_; uint8_t v_isShared_2382_; uint8_t v_isSharedCheck_2387_; 
v___x_2371_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_2372_ = lean_st_ref_get(v___y_2369_);
v_env_2373_ = lean_ctor_get(v___x_2372_, 0);
lean_inc_ref(v_env_2373_);
lean_dec(v___x_2372_);
v___x_2374_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_2375_ = lean_ctor_get(v___x_2374_, 0);
v_asyncMode_2376_ = lean_ctor_get(v_toEnvExtension_2375_, 2);
v___x_2377_ = lean_box(0);
v___x_2378_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2371_, v___x_2374_, v_env_2373_, v_asyncMode_2376_, v___x_2377_);
v_merged_2379_ = lean_ctor_get(v___x_2378_, 0);
v_isSharedCheck_2387_ = !lean_is_exclusive(v___x_2378_);
if (v_isSharedCheck_2387_ == 0)
{
lean_object* v_unused_2388_; 
v_unused_2388_ = lean_ctor_get(v___x_2378_, 1);
lean_dec(v_unused_2388_);
v___x_2381_ = v___x_2378_;
v_isShared_2382_ = v_isSharedCheck_2387_;
goto v_resetjp_2380_;
}
else
{
lean_inc(v_merged_2379_);
lean_dec(v___x_2378_);
v___x_2381_ = lean_box(0);
v_isShared_2382_ = v_isSharedCheck_2387_;
goto v_resetjp_2380_;
}
v_resetjp_2380_:
{
lean_object* v___x_2384_; 
if (v_isShared_2382_ == 0)
{
lean_ctor_set(v___x_2381_, 1, v_merged_2379_);
lean_ctor_set(v___x_2381_, 0, v_o_2368_);
v___x_2384_ = v___x_2381_;
goto v_reusejp_2383_;
}
else
{
lean_object* v_reuseFailAlloc_2386_; 
v_reuseFailAlloc_2386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2386_, 0, v_o_2368_);
lean_ctor_set(v_reuseFailAlloc_2386_, 1, v_merged_2379_);
v___x_2384_ = v_reuseFailAlloc_2386_;
goto v_reusejp_2383_;
}
v_reusejp_2383_:
{
lean_object* v___x_2385_; 
v___x_2385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2385_, 0, v___x_2384_);
return v___x_2385_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24___redArg___boxed(lean_object* v_o_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_){
_start:
{
lean_object* v_res_2392_; 
v_res_2392_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24___redArg(v_o_2389_, v___y_2390_);
lean_dec(v___y_2390_);
return v_res_2392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17(lean_object* v___y_2393_, lean_object* v___y_2394_){
_start:
{
lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v_scopes_2398_; lean_object* v___x_2399_; lean_object* v_opts_2400_; lean_object* v___x_2401_; 
v___x_2396_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2397_ = lean_st_ref_get(v___y_2394_);
v_scopes_2398_ = lean_ctor_get(v___x_2397_, 2);
lean_inc(v_scopes_2398_);
lean_dec(v___x_2397_);
v___x_2399_ = l_List_head_x21___redArg(v___x_2396_, v_scopes_2398_);
lean_dec(v_scopes_2398_);
v_opts_2400_ = lean_ctor_get(v___x_2399_, 1);
lean_inc_ref(v_opts_2400_);
lean_dec(v___x_2399_);
v___x_2401_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24___redArg(v_opts_2400_, v___y_2394_);
return v___x_2401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17___boxed(lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_){
_start:
{
lean_object* v_res_2405_; 
v_res_2405_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17(v___y_2402_, v___y_2403_);
lean_dec(v___y_2403_);
lean_dec_ref(v___y_2402_);
return v_res_2405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5(lean_object* v_linterOption_2406_, lean_object* v_stx_2407_, lean_object* v_msg_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_){
_start:
{
lean_object* v___x_2412_; lean_object* v_a_2413_; lean_object* v___x_2415_; uint8_t v_isShared_2416_; uint8_t v_isSharedCheck_2423_; 
v___x_2412_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17(v___y_2409_, v___y_2410_);
v_a_2413_ = lean_ctor_get(v___x_2412_, 0);
v_isSharedCheck_2423_ = !lean_is_exclusive(v___x_2412_);
if (v_isSharedCheck_2423_ == 0)
{
v___x_2415_ = v___x_2412_;
v_isShared_2416_ = v_isSharedCheck_2423_;
goto v_resetjp_2414_;
}
else
{
lean_inc(v_a_2413_);
lean_dec(v___x_2412_);
v___x_2415_ = lean_box(0);
v_isShared_2416_ = v_isSharedCheck_2423_;
goto v_resetjp_2414_;
}
v_resetjp_2414_:
{
uint8_t v___x_2417_; 
v___x_2417_ = l_Lean_Linter_getLinterValue(v_linterOption_2406_, v_a_2413_);
lean_dec(v_a_2413_);
if (v___x_2417_ == 0)
{
lean_object* v___x_2418_; lean_object* v___x_2420_; 
lean_dec_ref(v_msg_2408_);
lean_dec(v_stx_2407_);
lean_dec_ref(v_linterOption_2406_);
v___x_2418_ = lean_box(0);
if (v_isShared_2416_ == 0)
{
lean_ctor_set(v___x_2415_, 0, v___x_2418_);
v___x_2420_ = v___x_2415_;
goto v_reusejp_2419_;
}
else
{
lean_object* v_reuseFailAlloc_2421_; 
v_reuseFailAlloc_2421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2421_, 0, v___x_2418_);
v___x_2420_ = v_reuseFailAlloc_2421_;
goto v_reusejp_2419_;
}
v_reusejp_2419_:
{
return v___x_2420_;
}
}
else
{
lean_object* v___x_2422_; 
lean_del_object(v___x_2415_);
v___x_2422_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18(v_linterOption_2406_, v_stx_2407_, v_msg_2408_, v___y_2409_, v___y_2410_);
return v___x_2422_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5___boxed(lean_object* v_linterOption_2424_, lean_object* v_stx_2425_, lean_object* v_msg_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_){
_start:
{
lean_object* v_res_2430_; 
v_res_2430_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5(v_linterOption_2424_, v_stx_2425_, v_msg_2426_, v___y_2427_, v___y_2428_);
lean_dec(v___y_2428_);
lean_dec_ref(v___y_2427_);
return v_res_2430_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__1(void){
_start:
{
lean_object* v___x_2432_; lean_object* v___x_2433_; 
v___x_2432_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__0));
v___x_2433_ = l_Lean_stringToMessageData(v___x_2432_);
return v___x_2433_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__3(void){
_start:
{
lean_object* v___x_2435_; lean_object* v___x_2436_; 
v___x_2435_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__2));
v___x_2436_ = l_Lean_stringToMessageData(v___x_2435_);
return v___x_2436_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__13(void){
_start:
{
lean_object* v___x_2454_; lean_object* v___x_2455_; 
v___x_2454_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__12));
v___x_2455_ = l_Lean_stringToMessageData(v___x_2454_);
return v___x_2455_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__15(void){
_start:
{
lean_object* v___x_2457_; lean_object* v___x_2458_; 
v___x_2457_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__14));
v___x_2458_ = l_Lean_stringToMessageData(v___x_2457_);
return v___x_2458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1(lean_object* v_vis_x3f_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_){
_start:
{
lean_object* v___x_2471_; 
v___x_2471_ = lean_st_ref_get(v___y_2461_);
if (lean_obj_tag(v_vis_x3f_2459_) == 0)
{
uint8_t v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; 
lean_dec(v___x_2471_);
v___x_2472_ = 0;
v___x_2473_ = lean_box(v___x_2472_);
v___x_2474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2474_, 0, v___x_2473_);
return v___x_2474_;
}
else
{
lean_object* v_env_2475_; lean_object* v_val_2476_; lean_object* v___y_2478_; lean_object* v___y_2479_; lean_object* v___y_2480_; uint8_t v___y_2502_; lean_object* v___x_2503_; uint8_t v___x_2504_; uint8_t v___y_2506_; 
v_env_2475_ = lean_ctor_get(v___x_2471_, 0);
lean_inc_ref(v_env_2475_);
lean_dec(v___x_2471_);
v_val_2476_ = lean_ctor_get(v_vis_x3f_2459_, 0);
lean_inc_n(v_val_2476_, 2);
lean_dec_ref_known(v_vis_x3f_2459_, 1);
v___x_2503_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__9));
v___x_2504_ = l_Lean_Syntax_isOfKind(v_val_2476_, v___x_2503_);
if (v___x_2504_ == 0)
{
lean_object* v___x_2510_; uint8_t v___x_2511_; 
v___x_2510_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__11));
lean_inc(v_val_2476_);
v___x_2511_ = l_Lean_Syntax_isOfKind(v_val_2476_, v___x_2510_);
if (v___x_2511_ == 0)
{
lean_object* v___x_2512_; lean_object* v___x_2513_; 
lean_dec_ref(v_env_2475_);
v___x_2512_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__13, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__13_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__13);
v___x_2513_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___redArg(v_val_2476_, v___x_2512_, v___y_2460_, v___y_2461_);
lean_dec(v_val_2476_);
return v___x_2513_;
}
else
{
lean_object* v___x_2514_; 
v___x_2514_ = l_Lean_Syntax_getHeadInfo(v_val_2476_);
if (lean_obj_tag(v___x_2514_) == 0)
{
lean_dec_ref_known(v___x_2514_, 4);
v___y_2506_ = v___x_2511_;
goto v___jp_2505_;
}
else
{
lean_dec(v___x_2514_);
if (v___x_2504_ == 0)
{
lean_dec(v_val_2476_);
lean_dec_ref(v_env_2475_);
goto v___jp_2463_;
}
else
{
v___y_2506_ = v___x_2504_;
goto v___jp_2505_;
}
}
}
}
else
{
lean_object* v___x_2515_; 
v___x_2515_ = l_Lean_Syntax_getHeadInfo(v_val_2476_);
if (lean_obj_tag(v___x_2515_) == 0)
{
lean_object* v___x_2516_; uint8_t v_isModule_2517_; 
lean_dec_ref_known(v___x_2515_, 4);
v___x_2516_ = l_Lean_Environment_header(v_env_2475_);
v_isModule_2517_ = lean_ctor_get_uint8(v___x_2516_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_2516_);
if (v_isModule_2517_ == 0)
{
lean_dec(v_val_2476_);
lean_dec_ref(v_env_2475_);
goto v___jp_2467_;
}
else
{
uint8_t v_isExporting_2518_; 
v_isExporting_2518_ = lean_ctor_get_uint8(v_env_2475_, sizeof(void*)*8);
lean_dec_ref(v_env_2475_);
if (v_isExporting_2518_ == 0)
{
lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; 
v___x_2519_ = l_Lean_linter_redundantVisibility;
v___x_2520_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__15, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__15_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__15);
v___x_2521_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5(v___x_2519_, v_val_2476_, v___x_2520_, v___y_2460_, v___y_2461_);
if (lean_obj_tag(v___x_2521_) == 0)
{
lean_dec_ref_known(v___x_2521_, 1);
goto v___jp_2467_;
}
else
{
lean_object* v_a_2522_; lean_object* v___x_2524_; uint8_t v_isShared_2525_; uint8_t v_isSharedCheck_2529_; 
v_a_2522_ = lean_ctor_get(v___x_2521_, 0);
v_isSharedCheck_2529_ = !lean_is_exclusive(v___x_2521_);
if (v_isSharedCheck_2529_ == 0)
{
v___x_2524_ = v___x_2521_;
v_isShared_2525_ = v_isSharedCheck_2529_;
goto v_resetjp_2523_;
}
else
{
lean_inc(v_a_2522_);
lean_dec(v___x_2521_);
v___x_2524_ = lean_box(0);
v_isShared_2525_ = v_isSharedCheck_2529_;
goto v_resetjp_2523_;
}
v_resetjp_2523_:
{
lean_object* v___x_2527_; 
if (v_isShared_2525_ == 0)
{
v___x_2527_ = v___x_2524_;
goto v_reusejp_2526_;
}
else
{
lean_object* v_reuseFailAlloc_2528_; 
v_reuseFailAlloc_2528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2528_, 0, v_a_2522_);
v___x_2527_ = v_reuseFailAlloc_2528_;
goto v_reusejp_2526_;
}
v_reusejp_2526_:
{
return v___x_2527_;
}
}
}
}
else
{
lean_dec(v_val_2476_);
goto v___jp_2467_;
}
}
}
else
{
lean_dec(v___x_2515_);
lean_dec(v_val_2476_);
lean_dec_ref(v_env_2475_);
goto v___jp_2467_;
}
}
v___jp_2477_:
{
lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; 
lean_inc_ref(v___y_2480_);
v___x_2481_ = l_Lean_stringToMessageData(v___y_2480_);
lean_inc_ref(v___y_2478_);
v___x_2482_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2482_, 0, v___y_2478_);
lean_ctor_set(v___x_2482_, 1, v___x_2481_);
v___x_2483_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__1, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__1_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__1);
v___x_2484_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2484_, 0, v___x_2482_);
lean_ctor_set(v___x_2484_, 1, v___x_2483_);
lean_inc_ref(v___y_2479_);
v___x_2485_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5(v___y_2479_, v_val_2476_, v___x_2484_, v___y_2460_, v___y_2461_);
if (lean_obj_tag(v___x_2485_) == 0)
{
lean_dec_ref_known(v___x_2485_, 1);
goto v___jp_2463_;
}
else
{
lean_object* v_a_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2493_; 
v_a_2486_ = lean_ctor_get(v___x_2485_, 0);
v_isSharedCheck_2493_ = !lean_is_exclusive(v___x_2485_);
if (v_isSharedCheck_2493_ == 0)
{
v___x_2488_ = v___x_2485_;
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_a_2486_);
lean_dec(v___x_2485_);
v___x_2488_ = lean_box(0);
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
v_resetjp_2487_:
{
lean_object* v___x_2491_; 
if (v_isShared_2489_ == 0)
{
v___x_2491_ = v___x_2488_;
goto v_reusejp_2490_;
}
else
{
lean_object* v_reuseFailAlloc_2492_; 
v_reuseFailAlloc_2492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v_a_2486_);
v___x_2491_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2490_;
}
v_reusejp_2490_:
{
return v___x_2491_;
}
}
}
}
v___jp_2494_:
{
lean_object* v___x_2495_; uint8_t v_isModule_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; 
v___x_2495_ = l_Lean_Environment_header(v_env_2475_);
lean_dec_ref(v_env_2475_);
v_isModule_2496_ = lean_ctor_get_uint8(v___x_2495_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_2495_);
v___x_2497_ = l_Lean_linter_redundantVisibility;
v___x_2498_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__3, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__3_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__3);
if (v_isModule_2496_ == 0)
{
lean_object* v___x_2499_; 
v___x_2499_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___closed__0));
v___y_2478_ = v___x_2498_;
v___y_2479_ = v___x_2497_;
v___y_2480_ = v___x_2499_;
goto v___jp_2477_;
}
else
{
lean_object* v___x_2500_; 
v___x_2500_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__4));
v___y_2478_ = v___x_2498_;
v___y_2479_ = v___x_2497_;
v___y_2480_ = v___x_2500_;
goto v___jp_2477_;
}
}
v___jp_2501_:
{
if (v___y_2502_ == 0)
{
lean_dec(v_val_2476_);
lean_dec_ref(v_env_2475_);
goto v___jp_2463_;
}
else
{
goto v___jp_2494_;
}
}
v___jp_2505_:
{
uint8_t v_isExporting_2507_; 
v_isExporting_2507_ = lean_ctor_get_uint8(v_env_2475_, sizeof(void*)*8);
if (v_isExporting_2507_ == 0)
{
lean_object* v___x_2508_; uint8_t v_isModule_2509_; 
v___x_2508_ = l_Lean_Environment_header(v_env_2475_);
v_isModule_2509_ = lean_ctor_get_uint8(v___x_2508_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_2508_);
if (v_isModule_2509_ == 0)
{
v___y_2502_ = v___y_2506_;
goto v___jp_2501_;
}
else
{
v___y_2502_ = v___x_2504_;
goto v___jp_2501_;
}
}
else
{
goto v___jp_2494_;
}
}
}
v___jp_2463_:
{
uint8_t v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; 
v___x_2464_ = 2;
v___x_2465_ = lean_box(v___x_2464_);
v___x_2466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2466_, 0, v___x_2465_);
return v___x_2466_;
}
v___jp_2467_:
{
uint8_t v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; 
v___x_2468_ = 1;
v___x_2469_ = lean_box(v___x_2468_);
v___x_2470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2470_, 0, v___x_2469_);
return v___x_2470_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___boxed(lean_object* v_vis_x3f_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_){
_start:
{
lean_object* v_res_2534_; 
v_res_2534_ = l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1(v_vis_x3f_2530_, v___y_2531_, v___y_2532_);
lean_dec(v___y_2532_);
lean_dec_ref(v___y_2531_);
return v_res_2534_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30_spec__33(lean_object* v_msgData_2535_, uint8_t v_severity_2536_, uint8_t v_isSilent_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_){
_start:
{
lean_object* v___x_2541_; 
v___x_2541_ = l_Lean_Elab_Command_getRef___redArg(v___y_2538_);
if (lean_obj_tag(v___x_2541_) == 0)
{
lean_object* v_a_2542_; lean_object* v___x_2543_; 
v_a_2542_ = lean_ctor_get(v___x_2541_, 0);
lean_inc(v_a_2542_);
lean_dec_ref_known(v___x_2541_, 1);
v___x_2543_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29(v_a_2542_, v_msgData_2535_, v_severity_2536_, v_isSilent_2537_, v___y_2538_, v___y_2539_);
lean_dec(v_a_2542_);
return v___x_2543_;
}
else
{
lean_object* v_a_2544_; lean_object* v___x_2546_; uint8_t v_isShared_2547_; uint8_t v_isSharedCheck_2551_; 
lean_dec_ref(v_msgData_2535_);
v_a_2544_ = lean_ctor_get(v___x_2541_, 0);
v_isSharedCheck_2551_ = !lean_is_exclusive(v___x_2541_);
if (v_isSharedCheck_2551_ == 0)
{
v___x_2546_ = v___x_2541_;
v_isShared_2547_ = v_isSharedCheck_2551_;
goto v_resetjp_2545_;
}
else
{
lean_inc(v_a_2544_);
lean_dec(v___x_2541_);
v___x_2546_ = lean_box(0);
v_isShared_2547_ = v_isSharedCheck_2551_;
goto v_resetjp_2545_;
}
v_resetjp_2545_:
{
lean_object* v___x_2549_; 
if (v_isShared_2547_ == 0)
{
v___x_2549_ = v___x_2546_;
goto v_reusejp_2548_;
}
else
{
lean_object* v_reuseFailAlloc_2550_; 
v_reuseFailAlloc_2550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2550_, 0, v_a_2544_);
v___x_2549_ = v_reuseFailAlloc_2550_;
goto v_reusejp_2548_;
}
v_reusejp_2548_:
{
return v___x_2549_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30_spec__33___boxed(lean_object* v_msgData_2552_, lean_object* v_severity_2553_, lean_object* v_isSilent_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_){
_start:
{
uint8_t v_severity_boxed_2558_; uint8_t v_isSilent_boxed_2559_; lean_object* v_res_2560_; 
v_severity_boxed_2558_ = lean_unbox(v_severity_2553_);
v_isSilent_boxed_2559_ = lean_unbox(v_isSilent_2554_);
v_res_2560_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30_spec__33(v_msgData_2552_, v_severity_boxed_2558_, v_isSilent_boxed_2559_, v___y_2555_, v___y_2556_);
lean_dec(v___y_2556_);
lean_dec_ref(v___y_2555_);
return v_res_2560_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30(lean_object* v_msgData_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_){
_start:
{
uint8_t v___x_2565_; uint8_t v___x_2566_; lean_object* v___x_2567_; 
v___x_2565_ = 2;
v___x_2566_ = 0;
v___x_2567_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30_spec__33(v_msgData_2561_, v___x_2565_, v___x_2566_, v___y_2562_, v___y_2563_);
return v___x_2567_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30___boxed(lean_object* v_msgData_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_){
_start:
{
lean_object* v_res_2572_; 
v_res_2572_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30(v_msgData_2568_, v___y_2569_, v___y_2570_);
lean_dec(v___y_2570_);
lean_dec_ref(v___y_2569_);
return v_res_2572_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__29(lean_object* v_ref_2573_, lean_object* v_msgData_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_){
_start:
{
uint8_t v___x_2578_; uint8_t v___x_2579_; lean_object* v___x_2580_; 
v___x_2578_ = 2;
v___x_2579_ = 0;
v___x_2580_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29(v_ref_2573_, v_msgData_2574_, v___x_2578_, v___x_2579_, v___y_2575_, v___y_2576_);
return v___x_2580_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__29___boxed(lean_object* v_ref_2581_, lean_object* v_msgData_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_){
_start:
{
lean_object* v_res_2586_; 
v_res_2586_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__29(v_ref_2581_, v_msgData_2582_, v___y_2583_, v___y_2584_);
lean_dec(v___y_2584_);
lean_dec_ref(v___y_2583_);
lean_dec(v_ref_2581_);
return v_res_2586_;
}
}
static lean_object* _init_l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21___closed__1(void){
_start:
{
lean_object* v___x_2588_; lean_object* v___x_2589_; 
v___x_2588_ = ((lean_object*)(l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21___closed__0));
v___x_2589_ = l_Lean_stringToMessageData(v___x_2588_);
return v___x_2589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21(lean_object* v_ex_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_){
_start:
{
if (lean_obj_tag(v_ex_2590_) == 0)
{
lean_object* v_ref_2594_; lean_object* v_msg_2595_; lean_object* v___x_2596_; 
v_ref_2594_ = lean_ctor_get(v_ex_2590_, 0);
lean_inc(v_ref_2594_);
v_msg_2595_ = lean_ctor_get(v_ex_2590_, 1);
lean_inc_ref(v_msg_2595_);
lean_dec_ref_known(v_ex_2590_, 2);
v___x_2596_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__29(v_ref_2594_, v_msg_2595_, v___y_2591_, v___y_2592_);
lean_dec(v_ref_2594_);
return v___x_2596_;
}
else
{
lean_object* v_id_2597_; uint8_t v___y_2599_; uint8_t v___x_2621_; 
v_id_2597_ = lean_ctor_get(v_ex_2590_, 0);
lean_inc(v_id_2597_);
v___x_2621_ = l_Lean_Elab_isAbortExceptionId(v_id_2597_);
if (v___x_2621_ == 0)
{
uint8_t v___x_2622_; 
v___x_2622_ = l_Lean_Exception_isInterrupt(v_ex_2590_);
lean_dec_ref_known(v_ex_2590_, 2);
v___y_2599_ = v___x_2622_;
goto v___jp_2598_;
}
else
{
lean_dec_ref_known(v_ex_2590_, 2);
v___y_2599_ = v___x_2621_;
goto v___jp_2598_;
}
v___jp_2598_:
{
if (v___y_2599_ == 0)
{
lean_object* v___x_2600_; 
v___x_2600_ = l_Lean_InternalExceptionId_getName(v_id_2597_);
lean_dec(v_id_2597_);
if (lean_obj_tag(v___x_2600_) == 0)
{
lean_object* v_a_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; 
v_a_2601_ = lean_ctor_get(v___x_2600_, 0);
lean_inc(v_a_2601_);
lean_dec_ref_known(v___x_2600_, 1);
v___x_2602_ = lean_obj_once(&l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21___closed__1, &l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21___closed__1_once, _init_l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21___closed__1);
v___x_2603_ = l_Lean_MessageData_ofName(v_a_2601_);
v___x_2604_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2602_);
lean_ctor_set(v___x_2604_, 1, v___x_2603_);
v___x_2605_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21_spec__30(v___x_2604_, v___y_2591_, v___y_2592_);
return v___x_2605_;
}
else
{
lean_object* v_a_2606_; lean_object* v___x_2608_; uint8_t v_isShared_2609_; uint8_t v_isSharedCheck_2618_; 
v_a_2606_ = lean_ctor_get(v___x_2600_, 0);
v_isSharedCheck_2618_ = !lean_is_exclusive(v___x_2600_);
if (v_isSharedCheck_2618_ == 0)
{
v___x_2608_ = v___x_2600_;
v_isShared_2609_ = v_isSharedCheck_2618_;
goto v_resetjp_2607_;
}
else
{
lean_inc(v_a_2606_);
lean_dec(v___x_2600_);
v___x_2608_ = lean_box(0);
v_isShared_2609_ = v_isSharedCheck_2618_;
goto v_resetjp_2607_;
}
v_resetjp_2607_:
{
lean_object* v_ref_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2616_; 
v_ref_2610_ = lean_ctor_get(v___y_2591_, 7);
v___x_2611_ = lean_io_error_to_string(v_a_2606_);
v___x_2612_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2612_, 0, v___x_2611_);
v___x_2613_ = l_Lean_MessageData_ofFormat(v___x_2612_);
lean_inc(v_ref_2610_);
v___x_2614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2614_, 0, v_ref_2610_);
lean_ctor_set(v___x_2614_, 1, v___x_2613_);
if (v_isShared_2609_ == 0)
{
lean_ctor_set(v___x_2608_, 0, v___x_2614_);
v___x_2616_ = v___x_2608_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v___x_2614_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
return v___x_2616_;
}
}
}
}
else
{
lean_object* v___x_2619_; lean_object* v___x_2620_; 
lean_dec(v_id_2597_);
v___x_2619_ = lean_box(0);
v___x_2620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2620_, 0, v___x_2619_);
return v___x_2620_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21___boxed(lean_object* v_ex_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_){
_start:
{
lean_object* v_res_2627_; 
v_res_2627_ = l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21(v_ex_2623_, v___y_2624_, v___y_2625_);
lean_dec(v___y_2625_);
lean_dec_ref(v___y_2624_);
return v_res_2627_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44_spec__48___redArg(lean_object* v_a_2628_, lean_object* v_x_2629_){
_start:
{
if (lean_obj_tag(v_x_2629_) == 0)
{
lean_object* v___x_2630_; 
v___x_2630_ = lean_box(0);
return v___x_2630_;
}
else
{
lean_object* v_key_2631_; lean_object* v_value_2632_; lean_object* v_tail_2633_; uint8_t v___x_2634_; 
v_key_2631_ = lean_ctor_get(v_x_2629_, 0);
v_value_2632_ = lean_ctor_get(v_x_2629_, 1);
v_tail_2633_ = lean_ctor_get(v_x_2629_, 2);
v___x_2634_ = lean_name_eq(v_key_2631_, v_a_2628_);
if (v___x_2634_ == 0)
{
v_x_2629_ = v_tail_2633_;
goto _start;
}
else
{
lean_object* v___x_2636_; 
lean_inc(v_value_2632_);
v___x_2636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2636_, 0, v_value_2632_);
return v___x_2636_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44_spec__48___redArg___boxed(lean_object* v_a_2637_, lean_object* v_x_2638_){
_start:
{
lean_object* v_res_2639_; 
v_res_2639_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44_spec__48___redArg(v_a_2637_, v_x_2638_);
lean_dec(v_x_2638_);
lean_dec(v_a_2637_);
return v_res_2639_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44___redArg(lean_object* v_m_2640_, lean_object* v_a_2641_){
_start:
{
lean_object* v_buckets_2642_; lean_object* v___x_2643_; uint64_t v___y_2645_; 
v_buckets_2642_ = lean_ctor_get(v_m_2640_, 1);
v___x_2643_ = lean_array_get_size(v_buckets_2642_);
if (lean_obj_tag(v_a_2641_) == 0)
{
uint64_t v___x_2659_; 
v___x_2659_ = 1723ULL;
v___y_2645_ = v___x_2659_;
goto v___jp_2644_;
}
else
{
uint64_t v_hash_2660_; 
v_hash_2660_ = lean_ctor_get_uint64(v_a_2641_, sizeof(void*)*2);
v___y_2645_ = v_hash_2660_;
goto v___jp_2644_;
}
v___jp_2644_:
{
uint64_t v___x_2646_; uint64_t v___x_2647_; uint64_t v_fold_2648_; uint64_t v___x_2649_; uint64_t v___x_2650_; uint64_t v___x_2651_; size_t v___x_2652_; size_t v___x_2653_; size_t v___x_2654_; size_t v___x_2655_; size_t v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; 
v___x_2646_ = 32ULL;
v___x_2647_ = lean_uint64_shift_right(v___y_2645_, v___x_2646_);
v_fold_2648_ = lean_uint64_xor(v___y_2645_, v___x_2647_);
v___x_2649_ = 16ULL;
v___x_2650_ = lean_uint64_shift_right(v_fold_2648_, v___x_2649_);
v___x_2651_ = lean_uint64_xor(v_fold_2648_, v___x_2650_);
v___x_2652_ = lean_uint64_to_usize(v___x_2651_);
v___x_2653_ = lean_usize_of_nat(v___x_2643_);
v___x_2654_ = ((size_t)1ULL);
v___x_2655_ = lean_usize_sub(v___x_2653_, v___x_2654_);
v___x_2656_ = lean_usize_land(v___x_2652_, v___x_2655_);
v___x_2657_ = lean_array_uget_borrowed(v_buckets_2642_, v___x_2656_);
v___x_2658_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44_spec__48___redArg(v_a_2641_, v___x_2657_);
return v___x_2658_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44___redArg___boxed(lean_object* v_m_2661_, lean_object* v_a_2662_){
_start:
{
lean_object* v_res_2663_; 
v_res_2663_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44___redArg(v_m_2661_, v_a_2662_);
lean_dec(v_a_2662_);
lean_dec_ref(v_m_2661_);
return v_res_2663_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___closed__0(void){
_start:
{
lean_object* v___x_2664_; double v___x_2665_; 
v___x_2664_ = lean_unsigned_to_nat(0u);
v___x_2665_ = lean_float_of_nat(v___x_2664_);
return v___x_2665_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36(lean_object* v_cls_2668_, lean_object* v_msg_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_){
_start:
{
lean_object* v___x_2673_; 
v___x_2673_ = l_Lean_Elab_Command_getRef___redArg(v___y_2670_);
if (lean_obj_tag(v___x_2673_) == 0)
{
lean_object* v_a_2674_; lean_object* v___x_2675_; lean_object* v_a_2676_; lean_object* v___x_2678_; uint8_t v_isShared_2679_; uint8_t v_isSharedCheck_2724_; 
v_a_2674_ = lean_ctor_get(v___x_2673_, 0);
lean_inc(v_a_2674_);
lean_dec_ref_known(v___x_2673_, 1);
v___x_2675_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg(v_msg_2669_, v___y_2671_);
v_a_2676_ = lean_ctor_get(v___x_2675_, 0);
v_isSharedCheck_2724_ = !lean_is_exclusive(v___x_2675_);
if (v_isSharedCheck_2724_ == 0)
{
v___x_2678_ = v___x_2675_;
v_isShared_2679_ = v_isSharedCheck_2724_;
goto v_resetjp_2677_;
}
else
{
lean_inc(v_a_2676_);
lean_dec(v___x_2675_);
v___x_2678_ = lean_box(0);
v_isShared_2679_ = v_isSharedCheck_2724_;
goto v_resetjp_2677_;
}
v_resetjp_2677_:
{
lean_object* v___x_2680_; lean_object* v_traceState_2681_; lean_object* v_env_2682_; lean_object* v_messages_2683_; lean_object* v_scopes_2684_; lean_object* v_usedQuotCtxts_2685_; lean_object* v_nextMacroScope_2686_; lean_object* v_maxRecDepth_2687_; lean_object* v_ngen_2688_; lean_object* v_auxDeclNGen_2689_; lean_object* v_infoState_2690_; lean_object* v_snapshotTasks_2691_; lean_object* v_prevLinterStates_2692_; lean_object* v_codeQualityEntryTasks_2693_; lean_object* v___x_2695_; uint8_t v_isShared_2696_; uint8_t v_isSharedCheck_2723_; 
v___x_2680_ = lean_st_ref_take(v___y_2671_);
v_traceState_2681_ = lean_ctor_get(v___x_2680_, 9);
v_env_2682_ = lean_ctor_get(v___x_2680_, 0);
v_messages_2683_ = lean_ctor_get(v___x_2680_, 1);
v_scopes_2684_ = lean_ctor_get(v___x_2680_, 2);
v_usedQuotCtxts_2685_ = lean_ctor_get(v___x_2680_, 3);
v_nextMacroScope_2686_ = lean_ctor_get(v___x_2680_, 4);
v_maxRecDepth_2687_ = lean_ctor_get(v___x_2680_, 5);
v_ngen_2688_ = lean_ctor_get(v___x_2680_, 6);
v_auxDeclNGen_2689_ = lean_ctor_get(v___x_2680_, 7);
v_infoState_2690_ = lean_ctor_get(v___x_2680_, 8);
v_snapshotTasks_2691_ = lean_ctor_get(v___x_2680_, 10);
v_prevLinterStates_2692_ = lean_ctor_get(v___x_2680_, 11);
v_codeQualityEntryTasks_2693_ = lean_ctor_get(v___x_2680_, 12);
v_isSharedCheck_2723_ = !lean_is_exclusive(v___x_2680_);
if (v_isSharedCheck_2723_ == 0)
{
v___x_2695_ = v___x_2680_;
v_isShared_2696_ = v_isSharedCheck_2723_;
goto v_resetjp_2694_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2693_);
lean_inc(v_prevLinterStates_2692_);
lean_inc(v_snapshotTasks_2691_);
lean_inc(v_traceState_2681_);
lean_inc(v_infoState_2690_);
lean_inc(v_auxDeclNGen_2689_);
lean_inc(v_ngen_2688_);
lean_inc(v_maxRecDepth_2687_);
lean_inc(v_nextMacroScope_2686_);
lean_inc(v_usedQuotCtxts_2685_);
lean_inc(v_scopes_2684_);
lean_inc(v_messages_2683_);
lean_inc(v_env_2682_);
lean_dec(v___x_2680_);
v___x_2695_ = lean_box(0);
v_isShared_2696_ = v_isSharedCheck_2723_;
goto v_resetjp_2694_;
}
v_resetjp_2694_:
{
uint64_t v_tid_2697_; lean_object* v_traces_2698_; lean_object* v___x_2700_; uint8_t v_isShared_2701_; uint8_t v_isSharedCheck_2722_; 
v_tid_2697_ = lean_ctor_get_uint64(v_traceState_2681_, sizeof(void*)*1);
v_traces_2698_ = lean_ctor_get(v_traceState_2681_, 0);
v_isSharedCheck_2722_ = !lean_is_exclusive(v_traceState_2681_);
if (v_isSharedCheck_2722_ == 0)
{
v___x_2700_ = v_traceState_2681_;
v_isShared_2701_ = v_isSharedCheck_2722_;
goto v_resetjp_2699_;
}
else
{
lean_inc(v_traces_2698_);
lean_dec(v_traceState_2681_);
v___x_2700_ = lean_box(0);
v_isShared_2701_ = v_isSharedCheck_2722_;
goto v_resetjp_2699_;
}
v_resetjp_2699_:
{
lean_object* v___x_2702_; lean_object* v___x_2703_; double v___x_2704_; uint8_t v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2713_; 
v___x_2702_ = lean_box(0);
v___x_2703_ = lean_box(0);
v___x_2704_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___closed__0, &l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___closed__0);
v___x_2705_ = 0;
v___x_2706_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___closed__0));
v___x_2707_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2707_, 0, v_cls_2668_);
lean_ctor_set(v___x_2707_, 1, v___x_2703_);
lean_ctor_set(v___x_2707_, 2, v___x_2706_);
lean_ctor_set_float(v___x_2707_, sizeof(void*)*3, v___x_2704_);
lean_ctor_set_float(v___x_2707_, sizeof(void*)*3 + 8, v___x_2704_);
lean_ctor_set_uint8(v___x_2707_, sizeof(void*)*3 + 16, v___x_2705_);
v___x_2708_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___closed__1));
v___x_2709_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2709_, 0, v___x_2707_);
lean_ctor_set(v___x_2709_, 1, v_a_2676_);
lean_ctor_set(v___x_2709_, 2, v___x_2708_);
v___x_2710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2710_, 0, v_a_2674_);
lean_ctor_set(v___x_2710_, 1, v___x_2709_);
v___x_2711_ = l_Lean_PersistentArray_push___redArg(v_traces_2698_, v___x_2710_);
if (v_isShared_2701_ == 0)
{
lean_ctor_set(v___x_2700_, 0, v___x_2711_);
v___x_2713_ = v___x_2700_;
goto v_reusejp_2712_;
}
else
{
lean_object* v_reuseFailAlloc_2721_; 
v_reuseFailAlloc_2721_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2721_, 0, v___x_2711_);
lean_ctor_set_uint64(v_reuseFailAlloc_2721_, sizeof(void*)*1, v_tid_2697_);
v___x_2713_ = v_reuseFailAlloc_2721_;
goto v_reusejp_2712_;
}
v_reusejp_2712_:
{
lean_object* v___x_2715_; 
if (v_isShared_2696_ == 0)
{
lean_ctor_set(v___x_2695_, 9, v___x_2713_);
v___x_2715_ = v___x_2695_;
goto v_reusejp_2714_;
}
else
{
lean_object* v_reuseFailAlloc_2720_; 
v_reuseFailAlloc_2720_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2720_, 0, v_env_2682_);
lean_ctor_set(v_reuseFailAlloc_2720_, 1, v_messages_2683_);
lean_ctor_set(v_reuseFailAlloc_2720_, 2, v_scopes_2684_);
lean_ctor_set(v_reuseFailAlloc_2720_, 3, v_usedQuotCtxts_2685_);
lean_ctor_set(v_reuseFailAlloc_2720_, 4, v_nextMacroScope_2686_);
lean_ctor_set(v_reuseFailAlloc_2720_, 5, v_maxRecDepth_2687_);
lean_ctor_set(v_reuseFailAlloc_2720_, 6, v_ngen_2688_);
lean_ctor_set(v_reuseFailAlloc_2720_, 7, v_auxDeclNGen_2689_);
lean_ctor_set(v_reuseFailAlloc_2720_, 8, v_infoState_2690_);
lean_ctor_set(v_reuseFailAlloc_2720_, 9, v___x_2713_);
lean_ctor_set(v_reuseFailAlloc_2720_, 10, v_snapshotTasks_2691_);
lean_ctor_set(v_reuseFailAlloc_2720_, 11, v_prevLinterStates_2692_);
lean_ctor_set(v_reuseFailAlloc_2720_, 12, v_codeQualityEntryTasks_2693_);
v___x_2715_ = v_reuseFailAlloc_2720_;
goto v_reusejp_2714_;
}
v_reusejp_2714_:
{
lean_object* v___x_2716_; lean_object* v___x_2718_; 
v___x_2716_ = lean_st_ref_put(v___y_2671_, v___x_2715_);
if (v_isShared_2679_ == 0)
{
lean_ctor_set(v___x_2678_, 0, v___x_2702_);
v___x_2718_ = v___x_2678_;
goto v_reusejp_2717_;
}
else
{
lean_object* v_reuseFailAlloc_2719_; 
v_reuseFailAlloc_2719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2719_, 0, v___x_2702_);
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
}
}
else
{
lean_object* v_a_2725_; lean_object* v___x_2727_; uint8_t v_isShared_2728_; uint8_t v_isSharedCheck_2732_; 
lean_dec_ref(v_msg_2669_);
lean_dec(v_cls_2668_);
v_a_2725_ = lean_ctor_get(v___x_2673_, 0);
v_isSharedCheck_2732_ = !lean_is_exclusive(v___x_2673_);
if (v_isSharedCheck_2732_ == 0)
{
v___x_2727_ = v___x_2673_;
v_isShared_2728_ = v_isSharedCheck_2732_;
goto v_resetjp_2726_;
}
else
{
lean_inc(v_a_2725_);
lean_dec(v___x_2673_);
v___x_2727_ = lean_box(0);
v_isShared_2728_ = v_isSharedCheck_2732_;
goto v_resetjp_2726_;
}
v_resetjp_2726_:
{
lean_object* v___x_2730_; 
if (v_isShared_2728_ == 0)
{
v___x_2730_ = v___x_2727_;
goto v_reusejp_2729_;
}
else
{
lean_object* v_reuseFailAlloc_2731_; 
v_reuseFailAlloc_2731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2731_, 0, v_a_2725_);
v___x_2730_ = v_reuseFailAlloc_2731_;
goto v_reusejp_2729_;
}
v_reusejp_2729_:
{
return v___x_2730_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36___boxed(lean_object* v_cls_2733_, lean_object* v_msg_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_){
_start:
{
lean_object* v_res_2738_; 
v_res_2738_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36(v_cls_2733_, v_msg_2734_, v___y_2735_, v___y_2736_);
lean_dec(v___y_2736_);
lean_dec_ref(v___y_2735_);
return v_res_2738_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48_spec__52___redArg(lean_object* v_keys_2739_, lean_object* v_i_2740_, lean_object* v_k_2741_){
_start:
{
lean_object* v___x_2742_; uint8_t v___x_2743_; 
v___x_2742_ = lean_array_get_size(v_keys_2739_);
v___x_2743_ = lean_nat_dec_lt(v_i_2740_, v___x_2742_);
if (v___x_2743_ == 0)
{
lean_dec(v_i_2740_);
return v___x_2743_;
}
else
{
lean_object* v_k_x27_2744_; uint8_t v___x_2745_; 
v_k_x27_2744_ = lean_array_fget_borrowed(v_keys_2739_, v_i_2740_);
v___x_2745_ = l_Lean_instBEqExtraModUse_beq(v_k_2741_, v_k_x27_2744_);
if (v___x_2745_ == 0)
{
lean_object* v___x_2746_; lean_object* v___x_2747_; 
v___x_2746_ = lean_unsigned_to_nat(1u);
v___x_2747_ = lean_nat_add(v_i_2740_, v___x_2746_);
lean_dec(v_i_2740_);
v_i_2740_ = v___x_2747_;
goto _start;
}
else
{
lean_dec(v_i_2740_);
return v___x_2743_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48_spec__52___redArg___boxed(lean_object* v_keys_2749_, lean_object* v_i_2750_, lean_object* v_k_2751_){
_start:
{
uint8_t v_res_2752_; lean_object* v_r_2753_; 
v_res_2752_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48_spec__52___redArg(v_keys_2749_, v_i_2750_, v_k_2751_);
lean_dec_ref(v_k_2751_);
lean_dec_ref(v_keys_2749_);
v_r_2753_ = lean_box(v_res_2752_);
return v_r_2753_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48___redArg(lean_object* v_x_2754_, size_t v_x_2755_, lean_object* v_x_2756_){
_start:
{
if (lean_obj_tag(v_x_2754_) == 0)
{
lean_object* v_es_2757_; lean_object* v___x_2758_; size_t v___x_2759_; size_t v___x_2760_; lean_object* v_j_2761_; lean_object* v___x_2762_; 
v_es_2757_ = lean_ctor_get(v_x_2754_, 0);
v___x_2758_ = lean_box(2);
v___x_2759_ = ((size_t)31ULL);
v___x_2760_ = lean_usize_land(v_x_2755_, v___x_2759_);
v_j_2761_ = lean_usize_to_nat(v___x_2760_);
v___x_2762_ = lean_array_get_borrowed(v___x_2758_, v_es_2757_, v_j_2761_);
lean_dec(v_j_2761_);
switch(lean_obj_tag(v___x_2762_))
{
case 0:
{
lean_object* v_key_2763_; uint8_t v___x_2764_; 
v_key_2763_ = lean_ctor_get(v___x_2762_, 0);
v___x_2764_ = l_Lean_instBEqExtraModUse_beq(v_x_2756_, v_key_2763_);
return v___x_2764_;
}
case 1:
{
lean_object* v_node_2765_; size_t v___x_2766_; size_t v___x_2767_; 
v_node_2765_ = lean_ctor_get(v___x_2762_, 0);
v___x_2766_ = ((size_t)5ULL);
v___x_2767_ = lean_usize_shift_right(v_x_2755_, v___x_2766_);
v_x_2754_ = v_node_2765_;
v_x_2755_ = v___x_2767_;
goto _start;
}
default: 
{
uint8_t v___x_2769_; 
v___x_2769_ = 0;
return v___x_2769_;
}
}
}
else
{
lean_object* v_ks_2770_; lean_object* v___x_2771_; uint8_t v___x_2772_; 
v_ks_2770_ = lean_ctor_get(v_x_2754_, 0);
v___x_2771_ = lean_unsigned_to_nat(0u);
v___x_2772_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48_spec__52___redArg(v_ks_2770_, v___x_2771_, v_x_2756_);
return v___x_2772_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48___redArg___boxed(lean_object* v_x_2773_, lean_object* v_x_2774_, lean_object* v_x_2775_){
_start:
{
size_t v_x_32170__boxed_2776_; uint8_t v_res_2777_; lean_object* v_r_2778_; 
v_x_32170__boxed_2776_ = lean_unbox_usize(v_x_2774_);
lean_dec(v_x_2774_);
v_res_2777_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48___redArg(v_x_2773_, v_x_32170__boxed_2776_, v_x_2775_);
lean_dec_ref(v_x_2775_);
lean_dec_ref(v_x_2773_);
v_r_2778_ = lean_box(v_res_2777_);
return v_r_2778_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45___redArg(lean_object* v_x_2779_, lean_object* v_x_2780_){
_start:
{
uint64_t v___x_2781_; size_t v___x_2782_; uint8_t v___x_2783_; 
v___x_2781_ = l_Lean_instHashableExtraModUse_hash(v_x_2780_);
v___x_2782_ = lean_uint64_to_usize(v___x_2781_);
v___x_2783_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48___redArg(v_x_2779_, v___x_2782_, v_x_2780_);
return v___x_2783_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45___redArg___boxed(lean_object* v_x_2784_, lean_object* v_x_2785_){
_start:
{
uint8_t v_res_2786_; lean_object* v_r_2787_; 
v_res_2786_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45___redArg(v_x_2784_, v_x_2785_);
lean_dec_ref(v_x_2785_);
lean_dec_ref(v_x_2784_);
v_r_2787_ = lean_box(v_res_2786_);
return v_r_2787_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__0(void){
_start:
{
lean_object* v___x_2788_; 
v___x_2788_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_2788_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__4(void){
_start:
{
lean_object* v___x_2793_; lean_object* v___x_2794_; 
v___x_2793_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__3));
v___x_2794_ = l_Lean_stringToMessageData(v___x_2793_);
return v___x_2794_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__6(void){
_start:
{
lean_object* v___x_2796_; lean_object* v___x_2797_; 
v___x_2796_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__5));
v___x_2797_ = l_Lean_stringToMessageData(v___x_2796_);
return v___x_2797_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__7(void){
_start:
{
lean_object* v___x_2798_; lean_object* v___x_2799_; 
v___x_2798_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__18_spec__26_spec__29___closed__0));
v___x_2799_ = l_Lean_stringToMessageData(v___x_2798_);
return v___x_2799_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__9(void){
_start:
{
lean_object* v_cls_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; 
v_cls_2802_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__2));
v___x_2803_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__8));
v___x_2804_ = l_Lean_Name_append(v___x_2803_, v_cls_2802_);
return v___x_2804_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__11(void){
_start:
{
lean_object* v___x_2806_; lean_object* v___x_2807_; 
v___x_2806_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__10));
v___x_2807_ = l_Lean_stringToMessageData(v___x_2806_);
return v___x_2807_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__13(void){
_start:
{
lean_object* v___x_2809_; lean_object* v___x_2810_; 
v___x_2809_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__12));
v___x_2810_ = l_Lean_stringToMessageData(v___x_2809_);
return v___x_2810_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42(lean_object* v_mod_2813_, uint8_t v_isMeta_2814_, lean_object* v_hint_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_){
_start:
{
lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v_env_2821_; uint8_t v_isExporting_2822_; lean_object* v_entry_2823_; lean_object* v___x_2824_; lean_object* v_env_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___y_2830_; lean_object* v___x_2858_; uint8_t v___x_2859_; 
v___x_2819_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__0);
v___x_2820_ = lean_st_ref_get(v___y_2817_);
v_env_2821_ = lean_ctor_get(v___x_2820_, 0);
lean_inc_ref(v_env_2821_);
lean_dec(v___x_2820_);
v_isExporting_2822_ = lean_ctor_get_uint8(v_env_2821_, sizeof(void*)*8);
lean_dec_ref(v_env_2821_);
lean_inc(v_mod_2813_);
v_entry_2823_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_2823_, 0, v_mod_2813_);
lean_ctor_set_uint8(v_entry_2823_, sizeof(void*)*1, v_isExporting_2822_);
lean_ctor_set_uint8(v_entry_2823_, sizeof(void*)*1 + 1, v_isMeta_2814_);
v___x_2824_ = lean_st_ref_get(v___y_2817_);
v_env_2825_ = lean_ctor_get(v___x_2824_, 0);
lean_inc_ref(v_env_2825_);
lean_dec(v___x_2824_);
v___x_2826_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_2827_ = lean_box(1);
v___x_2828_ = lean_box(0);
v___x_2858_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2819_, v___x_2826_, v_env_2825_, v___x_2827_, v___x_2828_);
v___x_2859_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45___redArg(v___x_2858_, v_entry_2823_);
lean_dec(v___x_2858_);
if (v___x_2859_ == 0)
{
lean_object* v_cls_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___y_2866_; lean_object* v___y_2867_; lean_object* v___y_2871_; lean_object* v___y_2872_; lean_object* v_scopes_2884_; lean_object* v___x_2885_; lean_object* v_opts_2886_; uint8_t v_hasTrace_2887_; 
v_cls_2860_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__2));
v___x_2861_ = l_Lean_inheritedTraceOptions;
v___x_2862_ = lean_st_ref_get(v___x_2861_);
v___x_2863_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2864_ = lean_st_ref_get(v___y_2817_);
v_scopes_2884_ = lean_ctor_get(v___x_2864_, 2);
lean_inc(v_scopes_2884_);
lean_dec(v___x_2864_);
v___x_2885_ = l_List_head_x21___redArg(v___x_2863_, v_scopes_2884_);
lean_dec(v_scopes_2884_);
v_opts_2886_ = lean_ctor_get(v___x_2885_, 1);
lean_inc_ref(v_opts_2886_);
lean_dec(v___x_2885_);
v_hasTrace_2887_ = lean_ctor_get_uint8(v_opts_2886_, sizeof(void*)*1);
if (v_hasTrace_2887_ == 0)
{
lean_dec_ref(v_opts_2886_);
lean_dec(v___x_2862_);
lean_dec(v_hint_2815_);
lean_dec(v_mod_2813_);
v___y_2830_ = v___y_2817_;
goto v___jp_2829_;
}
else
{
lean_object* v___x_2888_; uint8_t v___x_2889_; 
v___x_2888_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__9);
v___x_2889_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_2862_, v_opts_2886_, v___x_2888_);
lean_dec_ref(v_opts_2886_);
lean_dec(v___x_2862_);
if (v___x_2889_ == 0)
{
lean_dec(v_hint_2815_);
lean_dec(v_mod_2813_);
v___y_2830_ = v___y_2817_;
goto v___jp_2829_;
}
else
{
lean_object* v___x_2890_; lean_object* v___y_2892_; 
v___x_2890_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__11);
if (v_isExporting_2822_ == 0)
{
lean_object* v___x_2899_; 
v___x_2899_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__8));
v___y_2892_ = v___x_2899_;
goto v___jp_2891_;
}
else
{
lean_object* v___x_2900_; 
v___x_2900_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__10));
v___y_2892_ = v___x_2900_;
goto v___jp_2891_;
}
v___jp_2891_:
{
lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; 
lean_inc_ref(v___y_2892_);
v___x_2893_ = l_Lean_stringToMessageData(v___y_2892_);
v___x_2894_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2894_, 0, v___x_2890_);
lean_ctor_set(v___x_2894_, 1, v___x_2893_);
v___x_2895_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__13);
v___x_2896_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2896_, 0, v___x_2894_);
lean_ctor_set(v___x_2896_, 1, v___x_2895_);
if (v_isMeta_2814_ == 0)
{
lean_object* v___x_2897_; 
v___x_2897_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__14));
v___y_2871_ = v___x_2896_;
v___y_2872_ = v___x_2897_;
goto v___jp_2870_;
}
else
{
lean_object* v___x_2898_; 
v___x_2898_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__15));
v___y_2871_ = v___x_2896_;
v___y_2872_ = v___x_2898_;
goto v___jp_2870_;
}
}
}
}
v___jp_2865_:
{
lean_object* v___x_2868_; lean_object* v___x_2869_; 
v___x_2868_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2868_, 0, v___y_2866_);
lean_ctor_set(v___x_2868_, 1, v___y_2867_);
v___x_2869_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36(v_cls_2860_, v___x_2868_, v___y_2816_, v___y_2817_);
if (lean_obj_tag(v___x_2869_) == 0)
{
lean_dec_ref_known(v___x_2869_, 1);
v___y_2830_ = v___y_2817_;
goto v___jp_2829_;
}
else
{
lean_dec_ref_known(v_entry_2823_, 1);
return v___x_2869_;
}
}
v___jp_2870_:
{
lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; uint8_t v___x_2879_; 
lean_inc_ref(v___y_2872_);
v___x_2873_ = l_Lean_stringToMessageData(v___y_2872_);
v___x_2874_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2874_, 0, v___y_2871_);
lean_ctor_set(v___x_2874_, 1, v___x_2873_);
v___x_2875_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__4);
v___x_2876_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2876_, 0, v___x_2874_);
lean_ctor_set(v___x_2876_, 1, v___x_2875_);
v___x_2877_ = l_Lean_MessageData_ofName(v_mod_2813_);
v___x_2878_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2878_, 0, v___x_2876_);
lean_ctor_set(v___x_2878_, 1, v___x_2877_);
v___x_2879_ = l_Lean_Name_isAnonymous(v_hint_2815_);
if (v___x_2879_ == 0)
{
lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; 
v___x_2880_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__6);
v___x_2881_ = l_Lean_MessageData_ofName(v_hint_2815_);
v___x_2882_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2882_, 0, v___x_2880_);
lean_ctor_set(v___x_2882_, 1, v___x_2881_);
v___y_2866_ = v___x_2878_;
v___y_2867_ = v___x_2882_;
goto v___jp_2865_;
}
else
{
lean_object* v___x_2883_; 
lean_dec(v_hint_2815_);
v___x_2883_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__7);
v___y_2866_ = v___x_2878_;
v___y_2867_ = v___x_2883_;
goto v___jp_2865_;
}
}
}
else
{
lean_object* v___x_2901_; lean_object* v___x_2902_; 
lean_dec_ref_known(v_entry_2823_, 1);
lean_dec(v_hint_2815_);
lean_dec(v_mod_2813_);
v___x_2901_ = lean_box(0);
v___x_2902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2902_, 0, v___x_2901_);
return v___x_2902_;
}
v___jp_2829_:
{
lean_object* v___x_2831_; lean_object* v_toEnvExtension_2832_; lean_object* v_env_2833_; lean_object* v_messages_2834_; lean_object* v_scopes_2835_; lean_object* v_usedQuotCtxts_2836_; lean_object* v_nextMacroScope_2837_; lean_object* v_maxRecDepth_2838_; lean_object* v_ngen_2839_; lean_object* v_auxDeclNGen_2840_; lean_object* v_infoState_2841_; lean_object* v_traceState_2842_; lean_object* v_snapshotTasks_2843_; lean_object* v_prevLinterStates_2844_; lean_object* v_codeQualityEntryTasks_2845_; lean_object* v___x_2847_; uint8_t v_isShared_2848_; uint8_t v_isSharedCheck_2857_; 
v___x_2831_ = lean_st_ref_take(v___y_2830_);
v_toEnvExtension_2832_ = lean_ctor_get(v___x_2826_, 0);
v_env_2833_ = lean_ctor_get(v___x_2831_, 0);
v_messages_2834_ = lean_ctor_get(v___x_2831_, 1);
v_scopes_2835_ = lean_ctor_get(v___x_2831_, 2);
v_usedQuotCtxts_2836_ = lean_ctor_get(v___x_2831_, 3);
v_nextMacroScope_2837_ = lean_ctor_get(v___x_2831_, 4);
v_maxRecDepth_2838_ = lean_ctor_get(v___x_2831_, 5);
v_ngen_2839_ = lean_ctor_get(v___x_2831_, 6);
v_auxDeclNGen_2840_ = lean_ctor_get(v___x_2831_, 7);
v_infoState_2841_ = lean_ctor_get(v___x_2831_, 8);
v_traceState_2842_ = lean_ctor_get(v___x_2831_, 9);
v_snapshotTasks_2843_ = lean_ctor_get(v___x_2831_, 10);
v_prevLinterStates_2844_ = lean_ctor_get(v___x_2831_, 11);
v_codeQualityEntryTasks_2845_ = lean_ctor_get(v___x_2831_, 12);
v_isSharedCheck_2857_ = !lean_is_exclusive(v___x_2831_);
if (v_isSharedCheck_2857_ == 0)
{
v___x_2847_ = v___x_2831_;
v_isShared_2848_ = v_isSharedCheck_2857_;
goto v_resetjp_2846_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2845_);
lean_inc(v_prevLinterStates_2844_);
lean_inc(v_snapshotTasks_2843_);
lean_inc(v_traceState_2842_);
lean_inc(v_infoState_2841_);
lean_inc(v_auxDeclNGen_2840_);
lean_inc(v_ngen_2839_);
lean_inc(v_maxRecDepth_2838_);
lean_inc(v_nextMacroScope_2837_);
lean_inc(v_usedQuotCtxts_2836_);
lean_inc(v_scopes_2835_);
lean_inc(v_messages_2834_);
lean_inc(v_env_2833_);
lean_dec(v___x_2831_);
v___x_2847_ = lean_box(0);
v_isShared_2848_ = v_isSharedCheck_2857_;
goto v_resetjp_2846_;
}
v_resetjp_2846_:
{
lean_object* v_asyncMode_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2853_; 
v_asyncMode_2849_ = lean_ctor_get(v_toEnvExtension_2832_, 2);
v___x_2850_ = lean_box(0);
v___x_2851_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_2826_, v_env_2833_, v_entry_2823_, v_asyncMode_2849_, v___x_2828_);
if (v_isShared_2848_ == 0)
{
lean_ctor_set(v___x_2847_, 0, v___x_2851_);
v___x_2853_ = v___x_2847_;
goto v_reusejp_2852_;
}
else
{
lean_object* v_reuseFailAlloc_2856_; 
v_reuseFailAlloc_2856_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2856_, 0, v___x_2851_);
lean_ctor_set(v_reuseFailAlloc_2856_, 1, v_messages_2834_);
lean_ctor_set(v_reuseFailAlloc_2856_, 2, v_scopes_2835_);
lean_ctor_set(v_reuseFailAlloc_2856_, 3, v_usedQuotCtxts_2836_);
lean_ctor_set(v_reuseFailAlloc_2856_, 4, v_nextMacroScope_2837_);
lean_ctor_set(v_reuseFailAlloc_2856_, 5, v_maxRecDepth_2838_);
lean_ctor_set(v_reuseFailAlloc_2856_, 6, v_ngen_2839_);
lean_ctor_set(v_reuseFailAlloc_2856_, 7, v_auxDeclNGen_2840_);
lean_ctor_set(v_reuseFailAlloc_2856_, 8, v_infoState_2841_);
lean_ctor_set(v_reuseFailAlloc_2856_, 9, v_traceState_2842_);
lean_ctor_set(v_reuseFailAlloc_2856_, 10, v_snapshotTasks_2843_);
lean_ctor_set(v_reuseFailAlloc_2856_, 11, v_prevLinterStates_2844_);
lean_ctor_set(v_reuseFailAlloc_2856_, 12, v_codeQualityEntryTasks_2845_);
v___x_2853_ = v_reuseFailAlloc_2856_;
goto v_reusejp_2852_;
}
v_reusejp_2852_:
{
lean_object* v___x_2854_; lean_object* v___x_2855_; 
v___x_2854_ = lean_st_ref_put(v___y_2830_, v___x_2853_);
v___x_2855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2855_, 0, v___x_2850_);
return v___x_2855_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___boxed(lean_object* v_mod_2903_, lean_object* v_isMeta_2904_, lean_object* v_hint_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_){
_start:
{
uint8_t v_isMeta_boxed_2909_; lean_object* v_res_2910_; 
v_isMeta_boxed_2909_ = lean_unbox(v_isMeta_2904_);
v_res_2910_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42(v_mod_2903_, v_isMeta_boxed_2909_, v_hint_2905_, v___y_2906_, v___y_2907_);
lean_dec(v___y_2907_);
lean_dec_ref(v___y_2906_);
return v_res_2910_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43(lean_object* v___x_2911_, lean_object* v_declName_2912_, lean_object* v_as_2913_, size_t v_sz_2914_, size_t v_i_2915_, lean_object* v_b_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_){
_start:
{
uint8_t v___x_2920_; 
v___x_2920_ = lean_usize_dec_lt(v_i_2915_, v_sz_2914_);
if (v___x_2920_ == 0)
{
lean_object* v___x_2921_; 
lean_dec(v_declName_2912_);
v___x_2921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2921_, 0, v_b_2916_);
return v___x_2921_;
}
else
{
lean_object* v___x_2922_; lean_object* v_modules_2923_; lean_object* v___x_2924_; lean_object* v_a_2925_; lean_object* v___x_2926_; lean_object* v_toImport_2927_; lean_object* v_module_2928_; lean_object* v___x_2929_; uint8_t v___x_2930_; lean_object* v___x_2931_; 
v___x_2922_ = l_Lean_Environment_header(v___x_2911_);
v_modules_2923_ = lean_ctor_get(v___x_2922_, 3);
lean_inc_ref(v_modules_2923_);
lean_dec_ref(v___x_2922_);
v___x_2924_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_2925_ = lean_array_uget_borrowed(v_as_2913_, v_i_2915_);
v___x_2926_ = lean_array_get(v___x_2924_, v_modules_2923_, v_a_2925_);
lean_dec_ref(v_modules_2923_);
v_toImport_2927_ = lean_ctor_get(v___x_2926_, 0);
lean_inc_ref(v_toImport_2927_);
lean_dec(v___x_2926_);
v_module_2928_ = lean_ctor_get(v_toImport_2927_, 0);
lean_inc(v_module_2928_);
lean_dec_ref(v_toImport_2927_);
v___x_2929_ = lean_box(0);
v___x_2930_ = 0;
lean_inc(v_declName_2912_);
v___x_2931_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42(v_module_2928_, v___x_2930_, v_declName_2912_, v___y_2917_, v___y_2918_);
if (lean_obj_tag(v___x_2931_) == 0)
{
size_t v___x_2932_; size_t v___x_2933_; 
lean_dec_ref_known(v___x_2931_, 1);
v___x_2932_ = ((size_t)1ULL);
v___x_2933_ = lean_usize_add(v_i_2915_, v___x_2932_);
v_i_2915_ = v___x_2933_;
v_b_2916_ = v___x_2929_;
goto _start;
}
else
{
lean_dec(v_declName_2912_);
return v___x_2931_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43___boxed(lean_object* v___x_2935_, lean_object* v_declName_2936_, lean_object* v_as_2937_, lean_object* v_sz_2938_, lean_object* v_i_2939_, lean_object* v_b_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_, lean_object* v___y_2943_){
_start:
{
size_t v_sz_boxed_2944_; size_t v_i_boxed_2945_; lean_object* v_res_2946_; 
v_sz_boxed_2944_ = lean_unbox_usize(v_sz_2938_);
lean_dec(v_sz_2938_);
v_i_boxed_2945_ = lean_unbox_usize(v_i_2939_);
lean_dec(v_i_2939_);
v_res_2946_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43(v___x_2935_, v_declName_2936_, v_as_2937_, v_sz_boxed_2944_, v_i_boxed_2945_, v_b_2940_, v___y_2941_, v___y_2942_);
lean_dec(v___y_2942_);
lean_dec_ref(v___y_2941_);
lean_dec_ref(v_as_2937_);
lean_dec_ref(v___x_2935_);
return v_res_2946_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33___closed__0(void){
_start:
{
lean_object* v___x_2947_; 
v___x_2947_ = l_Std_HashMap_instInhabited___redArg();
return v___x_2947_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33(lean_object* v_declName_2950_, uint8_t v_isMeta_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_){
_start:
{
lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v_env_2960_; lean_object* v___y_2962_; lean_object* v___x_2975_; 
v___x_2955_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33___closed__0);
v___x_2956_ = lean_st_ref_get(v___y_2953_);
v_env_2960_ = lean_ctor_get(v___x_2956_, 0);
lean_inc_ref(v_env_2960_);
lean_dec(v___x_2956_);
v___x_2975_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2960_, v_declName_2950_);
if (lean_obj_tag(v___x_2975_) == 0)
{
lean_dec_ref(v_env_2960_);
lean_dec(v_declName_2950_);
goto v___jp_2957_;
}
else
{
lean_object* v_val_2976_; lean_object* v___x_2977_; lean_object* v_modules_2978_; lean_object* v___x_2979_; uint8_t v___x_2980_; 
v_val_2976_ = lean_ctor_get(v___x_2975_, 0);
lean_inc(v_val_2976_);
lean_dec_ref_known(v___x_2975_, 1);
v___x_2977_ = l_Lean_Environment_header(v_env_2960_);
v_modules_2978_ = lean_ctor_get(v___x_2977_, 3);
lean_inc_ref(v_modules_2978_);
lean_dec_ref(v___x_2977_);
v___x_2979_ = lean_array_get_size(v_modules_2978_);
v___x_2980_ = lean_nat_dec_lt(v_val_2976_, v___x_2979_);
if (v___x_2980_ == 0)
{
lean_dec_ref(v_modules_2978_);
lean_dec(v_val_2976_);
lean_dec_ref(v_env_2960_);
lean_dec(v_declName_2950_);
goto v___jp_2957_;
}
else
{
lean_object* v___x_2981_; lean_object* v___x_2982_; uint8_t v___y_2984_; 
v___x_2981_ = lean_array_fget(v_modules_2978_, v_val_2976_);
lean_dec(v_val_2976_);
lean_dec_ref(v_modules_2978_);
v___x_2982_ = lean_st_ref_get(v___y_2953_);
if (v_isMeta_2951_ == 0)
{
lean_dec(v___x_2982_);
v___y_2984_ = v_isMeta_2951_;
goto v___jp_2983_;
}
else
{
lean_object* v_env_2995_; uint8_t v___x_2996_; 
v_env_2995_ = lean_ctor_get(v___x_2982_, 0);
lean_inc_ref(v_env_2995_);
lean_dec(v___x_2982_);
lean_inc(v_declName_2950_);
v___x_2996_ = l_Lean_isMarkedMeta(v_env_2995_, v_declName_2950_);
if (v___x_2996_ == 0)
{
v___y_2984_ = v_isMeta_2951_;
goto v___jp_2983_;
}
else
{
uint8_t v___x_2997_; 
v___x_2997_ = 0;
v___y_2984_ = v___x_2997_;
goto v___jp_2983_;
}
}
v___jp_2983_:
{
lean_object* v_toImport_2985_; lean_object* v_module_2986_; lean_object* v___x_2987_; 
v_toImport_2985_ = lean_ctor_get(v___x_2981_, 0);
lean_inc_ref(v_toImport_2985_);
lean_dec(v___x_2981_);
v_module_2986_ = lean_ctor_get(v_toImport_2985_, 0);
lean_inc(v_module_2986_);
lean_dec_ref(v_toImport_2985_);
lean_inc(v_declName_2950_);
v___x_2987_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42(v_module_2986_, v___y_2984_, v_declName_2950_, v___y_2952_, v___y_2953_);
if (lean_obj_tag(v___x_2987_) == 0)
{
lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; 
lean_dec_ref_known(v___x_2987_, 1);
v___x_2988_ = l_Lean_indirectModUseExt;
v___x_2989_ = lean_box(1);
v___x_2990_ = lean_box(0);
lean_inc_ref(v_env_2960_);
v___x_2991_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2955_, v___x_2988_, v_env_2960_, v___x_2989_, v___x_2990_);
v___x_2992_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44___redArg(v___x_2991_, v_declName_2950_);
lean_dec(v___x_2991_);
if (lean_obj_tag(v___x_2992_) == 0)
{
lean_object* v___x_2993_; 
v___x_2993_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33___closed__1));
v___y_2962_ = v___x_2993_;
goto v___jp_2961_;
}
else
{
lean_object* v_val_2994_; 
v_val_2994_ = lean_ctor_get(v___x_2992_, 0);
lean_inc(v_val_2994_);
lean_dec_ref_known(v___x_2992_, 1);
v___y_2962_ = v_val_2994_;
goto v___jp_2961_;
}
}
else
{
lean_dec_ref(v_env_2960_);
lean_dec(v_declName_2950_);
return v___x_2987_;
}
}
}
}
v___jp_2957_:
{
lean_object* v___x_2958_; lean_object* v___x_2959_; 
v___x_2958_ = lean_box(0);
v___x_2959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2959_, 0, v___x_2958_);
return v___x_2959_;
}
v___jp_2961_:
{
lean_object* v___x_2963_; size_t v_sz_2964_; size_t v___x_2965_; lean_object* v___x_2966_; 
v___x_2963_ = lean_box(0);
v_sz_2964_ = lean_array_size(v___y_2962_);
v___x_2965_ = ((size_t)0ULL);
v___x_2966_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__43(v_env_2960_, v_declName_2950_, v___y_2962_, v_sz_2964_, v___x_2965_, v___x_2963_, v___y_2952_, v___y_2953_);
lean_dec_ref(v___y_2962_);
lean_dec_ref(v_env_2960_);
if (lean_obj_tag(v___x_2966_) == 0)
{
lean_object* v___x_2968_; uint8_t v_isShared_2969_; uint8_t v_isSharedCheck_2973_; 
v_isSharedCheck_2973_ = !lean_is_exclusive(v___x_2966_);
if (v_isSharedCheck_2973_ == 0)
{
lean_object* v_unused_2974_; 
v_unused_2974_ = lean_ctor_get(v___x_2966_, 0);
lean_dec(v_unused_2974_);
v___x_2968_ = v___x_2966_;
v_isShared_2969_ = v_isSharedCheck_2973_;
goto v_resetjp_2967_;
}
else
{
lean_dec(v___x_2966_);
v___x_2968_ = lean_box(0);
v_isShared_2969_ = v_isSharedCheck_2973_;
goto v_resetjp_2967_;
}
v_resetjp_2967_:
{
lean_object* v___x_2971_; 
if (v_isShared_2969_ == 0)
{
lean_ctor_set(v___x_2968_, 0, v___x_2963_);
v___x_2971_ = v___x_2968_;
goto v_reusejp_2970_;
}
else
{
lean_object* v_reuseFailAlloc_2972_; 
v_reuseFailAlloc_2972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2972_, 0, v___x_2963_);
v___x_2971_ = v_reuseFailAlloc_2972_;
goto v_reusejp_2970_;
}
v_reusejp_2970_:
{
return v___x_2971_;
}
}
}
else
{
return v___x_2966_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33___boxed(lean_object* v_declName_2998_, lean_object* v_isMeta_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_){
_start:
{
uint8_t v_isMeta_boxed_3003_; lean_object* v_res_3004_; 
v_isMeta_boxed_3003_ = lean_unbox(v_isMeta_2999_);
v_res_3004_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33(v_declName_2998_, v_isMeta_boxed_3003_, v___y_3000_, v___y_3001_);
lean_dec(v___y_3001_);
lean_dec_ref(v___y_3000_);
return v_res_3004_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37___redArg(lean_object* v_x_3005_, lean_object* v___y_3006_){
_start:
{
if (lean_obj_tag(v_x_3005_) == 0)
{
lean_object* v_a_3007_; lean_object* v___x_3008_; 
v_a_3007_ = lean_ctor_get(v_x_3005_, 0);
lean_inc(v_a_3007_);
v___x_3008_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3008_, 0, v_a_3007_);
lean_ctor_set(v___x_3008_, 1, v___y_3006_);
return v___x_3008_;
}
else
{
lean_object* v_a_3009_; lean_object* v___x_3010_; 
v_a_3009_ = lean_ctor_get(v_x_3005_, 0);
lean_inc(v_a_3009_);
v___x_3010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3010_, 0, v_a_3009_);
lean_ctor_set(v___x_3010_, 1, v___y_3006_);
return v___x_3010_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37___redArg___boxed(lean_object* v_x_3011_, lean_object* v___y_3012_){
_start:
{
lean_object* v_res_3013_; 
v_res_3013_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37___redArg(v_x_3011_, v___y_3012_);
lean_dec_ref(v_x_3011_);
return v_res_3013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__1(lean_object* v_env_3014_, lean_object* v_stx_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_){
_start:
{
lean_object* v___x_3018_; 
v___x_3018_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_3014_, v_stx_3015_, v___y_3016_, v___y_3017_);
if (lean_obj_tag(v___x_3018_) == 0)
{
lean_object* v_a_3019_; 
v_a_3019_ = lean_ctor_get(v___x_3018_, 0);
lean_inc(v_a_3019_);
if (lean_obj_tag(v_a_3019_) == 0)
{
lean_object* v_a_3020_; lean_object* v___x_3022_; uint8_t v_isShared_3023_; uint8_t v_isSharedCheck_3028_; 
v_a_3020_ = lean_ctor_get(v___x_3018_, 1);
v_isSharedCheck_3028_ = !lean_is_exclusive(v___x_3018_);
if (v_isSharedCheck_3028_ == 0)
{
lean_object* v_unused_3029_; 
v_unused_3029_ = lean_ctor_get(v___x_3018_, 0);
lean_dec(v_unused_3029_);
v___x_3022_ = v___x_3018_;
v_isShared_3023_ = v_isSharedCheck_3028_;
goto v_resetjp_3021_;
}
else
{
lean_inc(v_a_3020_);
lean_dec(v___x_3018_);
v___x_3022_ = lean_box(0);
v_isShared_3023_ = v_isSharedCheck_3028_;
goto v_resetjp_3021_;
}
v_resetjp_3021_:
{
lean_object* v___x_3024_; lean_object* v___x_3026_; 
v___x_3024_ = lean_box(0);
if (v_isShared_3023_ == 0)
{
lean_ctor_set(v___x_3022_, 0, v___x_3024_);
v___x_3026_ = v___x_3022_;
goto v_reusejp_3025_;
}
else
{
lean_object* v_reuseFailAlloc_3027_; 
v_reuseFailAlloc_3027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3027_, 0, v___x_3024_);
lean_ctor_set(v_reuseFailAlloc_3027_, 1, v_a_3020_);
v___x_3026_ = v_reuseFailAlloc_3027_;
goto v_reusejp_3025_;
}
v_reusejp_3025_:
{
return v___x_3026_;
}
}
}
else
{
lean_object* v_val_3030_; lean_object* v___x_3032_; uint8_t v_isShared_3033_; uint8_t v_isSharedCheck_3058_; 
v_val_3030_ = lean_ctor_get(v_a_3019_, 0);
v_isSharedCheck_3058_ = !lean_is_exclusive(v_a_3019_);
if (v_isSharedCheck_3058_ == 0)
{
v___x_3032_ = v_a_3019_;
v_isShared_3033_ = v_isSharedCheck_3058_;
goto v_resetjp_3031_;
}
else
{
lean_inc(v_val_3030_);
lean_dec(v_a_3019_);
v___x_3032_ = lean_box(0);
v_isShared_3033_ = v_isSharedCheck_3058_;
goto v_resetjp_3031_;
}
v_resetjp_3031_:
{
lean_object* v_snd_3034_; 
v_snd_3034_ = lean_ctor_get(v_val_3030_, 1);
lean_inc(v_snd_3034_);
lean_dec(v_val_3030_);
if (lean_obj_tag(v_snd_3034_) == 0)
{
lean_object* v_a_3035_; lean_object* v_a_3036_; lean_object* v___x_3038_; uint8_t v_isShared_3039_; uint8_t v_isSharedCheck_3044_; 
lean_del_object(v___x_3032_);
v_a_3035_ = lean_ctor_get(v___x_3018_, 1);
lean_inc(v_a_3035_);
lean_dec_ref_known(v___x_3018_, 2);
v_a_3036_ = lean_ctor_get(v_snd_3034_, 0);
v_isSharedCheck_3044_ = !lean_is_exclusive(v_snd_3034_);
if (v_isSharedCheck_3044_ == 0)
{
v___x_3038_ = v_snd_3034_;
v_isShared_3039_ = v_isSharedCheck_3044_;
goto v_resetjp_3037_;
}
else
{
lean_inc(v_a_3036_);
lean_dec(v_snd_3034_);
v___x_3038_ = lean_box(0);
v_isShared_3039_ = v_isSharedCheck_3044_;
goto v_resetjp_3037_;
}
v_resetjp_3037_:
{
lean_object* v___x_3041_; 
if (v_isShared_3039_ == 0)
{
v___x_3041_ = v___x_3038_;
goto v_reusejp_3040_;
}
else
{
lean_object* v_reuseFailAlloc_3043_; 
v_reuseFailAlloc_3043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3043_, 0, v_a_3036_);
v___x_3041_ = v_reuseFailAlloc_3043_;
goto v_reusejp_3040_;
}
v_reusejp_3040_:
{
lean_object* v___x_3042_; 
v___x_3042_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37___redArg(v___x_3041_, v_a_3035_);
lean_dec_ref(v___x_3041_);
return v___x_3042_;
}
}
}
else
{
lean_object* v_a_3045_; lean_object* v_a_3046_; lean_object* v___x_3048_; uint8_t v_isShared_3049_; uint8_t v_isSharedCheck_3057_; 
v_a_3045_ = lean_ctor_get(v___x_3018_, 1);
lean_inc(v_a_3045_);
lean_dec_ref_known(v___x_3018_, 2);
v_a_3046_ = lean_ctor_get(v_snd_3034_, 0);
v_isSharedCheck_3057_ = !lean_is_exclusive(v_snd_3034_);
if (v_isSharedCheck_3057_ == 0)
{
v___x_3048_ = v_snd_3034_;
v_isShared_3049_ = v_isSharedCheck_3057_;
goto v_resetjp_3047_;
}
else
{
lean_inc(v_a_3046_);
lean_dec(v_snd_3034_);
v___x_3048_ = lean_box(0);
v_isShared_3049_ = v_isSharedCheck_3057_;
goto v_resetjp_3047_;
}
v_resetjp_3047_:
{
lean_object* v___x_3051_; 
if (v_isShared_3033_ == 0)
{
lean_ctor_set(v___x_3032_, 0, v_a_3046_);
v___x_3051_ = v___x_3032_;
goto v_reusejp_3050_;
}
else
{
lean_object* v_reuseFailAlloc_3056_; 
v_reuseFailAlloc_3056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3056_, 0, v_a_3046_);
v___x_3051_ = v_reuseFailAlloc_3056_;
goto v_reusejp_3050_;
}
v_reusejp_3050_:
{
lean_object* v___x_3053_; 
if (v_isShared_3049_ == 0)
{
lean_ctor_set(v___x_3048_, 0, v___x_3051_);
v___x_3053_ = v___x_3048_;
goto v_reusejp_3052_;
}
else
{
lean_object* v_reuseFailAlloc_3055_; 
v_reuseFailAlloc_3055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3055_, 0, v___x_3051_);
v___x_3053_ = v_reuseFailAlloc_3055_;
goto v_reusejp_3052_;
}
v_reusejp_3052_:
{
lean_object* v___x_3054_; 
v___x_3054_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37___redArg(v___x_3053_, v_a_3045_);
lean_dec_ref(v___x_3053_);
return v___x_3054_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3059_; lean_object* v_a_3060_; lean_object* v___x_3062_; uint8_t v_isShared_3063_; uint8_t v_isSharedCheck_3067_; 
v_a_3059_ = lean_ctor_get(v___x_3018_, 0);
v_a_3060_ = lean_ctor_get(v___x_3018_, 1);
v_isSharedCheck_3067_ = !lean_is_exclusive(v___x_3018_);
if (v_isSharedCheck_3067_ == 0)
{
v___x_3062_ = v___x_3018_;
v_isShared_3063_ = v_isSharedCheck_3067_;
goto v_resetjp_3061_;
}
else
{
lean_inc(v_a_3060_);
lean_inc(v_a_3059_);
lean_dec(v___x_3018_);
v___x_3062_ = lean_box(0);
v_isShared_3063_ = v_isSharedCheck_3067_;
goto v_resetjp_3061_;
}
v_resetjp_3061_:
{
lean_object* v___x_3065_; 
if (v_isShared_3063_ == 0)
{
v___x_3065_ = v___x_3062_;
goto v_reusejp_3064_;
}
else
{
lean_object* v_reuseFailAlloc_3066_; 
v_reuseFailAlloc_3066_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3066_, 0, v_a_3059_);
lean_ctor_set(v_reuseFailAlloc_3066_, 1, v_a_3060_);
v___x_3065_ = v_reuseFailAlloc_3066_;
goto v_reusejp_3064_;
}
v_reusejp_3064_:
{
return v___x_3065_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__1___boxed(lean_object* v_env_3068_, lean_object* v_stx_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_){
_start:
{
lean_object* v_res_3072_; 
v_res_3072_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__1(v_env_3068_, v_stx_3069_, v___y_3070_, v___y_3071_);
lean_dec_ref(v___y_3070_);
return v_res_3072_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__39(lean_object* v_as_3073_, lean_object* v___y_3074_, lean_object* v___y_3075_){
_start:
{
if (lean_obj_tag(v_as_3073_) == 0)
{
lean_object* v___x_3077_; lean_object* v___x_3078_; 
v___x_3077_ = lean_box(0);
v___x_3078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3078_, 0, v___x_3077_);
return v___x_3078_;
}
else
{
lean_object* v_head_3079_; lean_object* v_tail_3080_; lean_object* v_fst_3081_; lean_object* v_snd_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v_scopes_3087_; lean_object* v___x_3088_; lean_object* v_opts_3089_; uint8_t v_hasTrace_3090_; 
v_head_3079_ = lean_ctor_get(v_as_3073_, 0);
lean_inc(v_head_3079_);
v_tail_3080_ = lean_ctor_get(v_as_3073_, 1);
lean_inc(v_tail_3080_);
lean_dec_ref_known(v_as_3073_, 2);
v_fst_3081_ = lean_ctor_get(v_head_3079_, 0);
lean_inc(v_fst_3081_);
v_snd_3082_ = lean_ctor_get(v_head_3079_, 1);
lean_inc(v_snd_3082_);
lean_dec(v_head_3079_);
v___x_3083_ = l_Lean_inheritedTraceOptions;
v___x_3084_ = lean_st_ref_get(v___x_3083_);
v___x_3085_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3086_ = lean_st_ref_get(v___y_3075_);
v_scopes_3087_ = lean_ctor_get(v___x_3086_, 2);
lean_inc(v_scopes_3087_);
lean_dec(v___x_3086_);
v___x_3088_ = l_List_head_x21___redArg(v___x_3085_, v_scopes_3087_);
lean_dec(v_scopes_3087_);
v_opts_3089_ = lean_ctor_get(v___x_3088_, 1);
lean_inc_ref(v_opts_3089_);
lean_dec(v___x_3088_);
v_hasTrace_3090_ = lean_ctor_get_uint8(v_opts_3089_, sizeof(void*)*1);
if (v_hasTrace_3090_ == 0)
{
lean_dec_ref(v_opts_3089_);
lean_dec(v___x_3084_);
lean_dec(v_snd_3082_);
lean_dec(v_fst_3081_);
v_as_3073_ = v_tail_3080_;
goto _start;
}
else
{
lean_object* v___x_3092_; lean_object* v___x_3093_; uint8_t v___x_3094_; 
v___x_3092_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42___closed__8));
lean_inc(v_fst_3081_);
v___x_3093_ = l_Lean_Name_append(v___x_3092_, v_fst_3081_);
v___x_3094_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_3084_, v_opts_3089_, v___x_3093_);
lean_dec(v___x_3093_);
lean_dec_ref(v_opts_3089_);
lean_dec(v___x_3084_);
if (v___x_3094_ == 0)
{
lean_dec(v_snd_3082_);
lean_dec(v_fst_3081_);
v_as_3073_ = v_tail_3080_;
goto _start;
}
else
{
lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; 
v___x_3096_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3096_, 0, v_snd_3082_);
v___x_3097_ = l_Lean_MessageData_ofFormat(v___x_3096_);
v___x_3098_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__36(v_fst_3081_, v___x_3097_, v___y_3074_, v___y_3075_);
if (lean_obj_tag(v___x_3098_) == 0)
{
lean_dec_ref_known(v___x_3098_, 1);
v_as_3073_ = v_tail_3080_;
goto _start;
}
else
{
lean_dec(v_tail_3080_);
return v___x_3098_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__39___boxed(lean_object* v_as_3100_, lean_object* v___y_3101_, lean_object* v___y_3102_, lean_object* v___y_3103_){
_start:
{
lean_object* v_res_3104_; 
v_res_3104_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__39(v_as_3100_, v___y_3101_, v___y_3102_);
lean_dec(v___y_3102_);
lean_dec_ref(v___y_3101_);
return v_res_3104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__2(lean_object* v_currNamespace_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_){
_start:
{
lean_object* v___x_3108_; 
v___x_3108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3108_, 0, v_currNamespace_3105_);
lean_ctor_set(v___x_3108_, 1, v___y_3107_);
return v___x_3108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__2___boxed(lean_object* v_currNamespace_3109_, lean_object* v___y_3110_, lean_object* v___y_3111_){
_start:
{
lean_object* v_res_3112_; 
v_res_3112_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__2(v_currNamespace_3109_, v___y_3110_, v___y_3111_);
lean_dec_ref(v___y_3110_);
return v_res_3112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__4(lean_object* v_env_3113_, lean_object* v_opts_3114_, lean_object* v_currNamespace_3115_, lean_object* v_openDecls_3116_, lean_object* v_n_3117_, lean_object* v___y_3118_, lean_object* v___y_3119_){
_start:
{
lean_object* v___x_3120_; lean_object* v___x_3121_; 
v___x_3120_ = l_Lean_ResolveName_resolveGlobalName(v_env_3113_, v_opts_3114_, v_currNamespace_3115_, v_openDecls_3116_, v_n_3117_);
v___x_3121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3121_, 0, v___x_3120_);
lean_ctor_set(v___x_3121_, 1, v___y_3119_);
return v___x_3121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__4___boxed(lean_object* v_env_3122_, lean_object* v_opts_3123_, lean_object* v_currNamespace_3124_, lean_object* v_openDecls_3125_, lean_object* v_n_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_){
_start:
{
lean_object* v_res_3129_; 
v_res_3129_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__4(v_env_3122_, v_opts_3123_, v_currNamespace_3124_, v_openDecls_3125_, v_n_3126_, v___y_3127_, v___y_3128_);
lean_dec_ref(v___y_3127_);
lean_dec_ref(v_opts_3123_);
return v_res_3129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__0(lean_object* v_env_3130_, lean_object* v_declName_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_){
_start:
{
uint8_t v___x_3134_; lean_object* v_env_3135_; lean_object* v___x_3136_; uint8_t v___x_3137_; uint8_t v___x_3138_; 
v___x_3134_ = 0;
v_env_3135_ = l_Lean_Environment_setExporting(v_env_3130_, v___x_3134_);
lean_inc(v_declName_3131_);
v___x_3136_ = l_Lean_mkPrivateName(v_env_3135_, v_declName_3131_);
v___x_3137_ = 1;
lean_inc_ref(v_env_3135_);
v___x_3138_ = l_Lean_Environment_contains(v_env_3135_, v___x_3136_, v___x_3137_);
if (v___x_3138_ == 0)
{
lean_object* v___x_3139_; uint8_t v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; 
v___x_3139_ = l_Lean_privateToUserName(v_declName_3131_);
v___x_3140_ = l_Lean_Environment_contains(v_env_3135_, v___x_3139_, v___x_3137_);
v___x_3141_ = lean_box(v___x_3140_);
v___x_3142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3142_, 0, v___x_3141_);
lean_ctor_set(v___x_3142_, 1, v___y_3133_);
return v___x_3142_;
}
else
{
lean_object* v___x_3143_; lean_object* v___x_3144_; 
lean_dec_ref(v_env_3135_);
lean_dec(v_declName_3131_);
v___x_3143_ = lean_box(v___x_3138_);
v___x_3144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3144_, 0, v___x_3143_);
lean_ctor_set(v___x_3144_, 1, v___y_3133_);
return v___x_3144_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__0___boxed(lean_object* v_env_3145_, lean_object* v_declName_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_){
_start:
{
lean_object* v_res_3149_; 
v_res_3149_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__0(v_env_3145_, v_declName_3146_, v___y_3147_, v___y_3148_);
lean_dec_ref(v___y_3147_);
return v_res_3149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__3(lean_object* v_env_3150_, lean_object* v_currNamespace_3151_, lean_object* v_openDecls_3152_, lean_object* v_n_3153_, lean_object* v___y_3154_, lean_object* v___y_3155_){
_start:
{
lean_object* v___x_3156_; lean_object* v___x_3157_; 
v___x_3156_ = l_Lean_ResolveName_resolveNamespace(v_env_3150_, v_currNamespace_3151_, v_openDecls_3152_, v_n_3153_);
v___x_3157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3157_, 0, v___x_3156_);
lean_ctor_set(v___x_3157_, 1, v___y_3155_);
return v___x_3157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__3___boxed(lean_object* v_env_3158_, lean_object* v_currNamespace_3159_, lean_object* v_openDecls_3160_, lean_object* v_n_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_){
_start:
{
lean_object* v_res_3164_; 
v_res_3164_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__3(v_env_3158_, v_currNamespace_3159_, v_openDecls_3160_, v_n_3161_, v___y_3162_, v___y_3163_);
lean_dec_ref(v___y_3162_);
return v_res_3164_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38___redArg(lean_object* v_as_x27_3165_, lean_object* v_b_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_){
_start:
{
if (lean_obj_tag(v_as_x27_3165_) == 0)
{
lean_object* v___x_3170_; 
v___x_3170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3170_, 0, v_b_3166_);
return v___x_3170_;
}
else
{
lean_object* v_head_3171_; lean_object* v_tail_3172_; lean_object* v___x_3173_; uint8_t v___x_3174_; lean_object* v___x_3175_; 
v_head_3171_ = lean_ctor_get(v_as_x27_3165_, 0);
v_tail_3172_ = lean_ctor_get(v_as_x27_3165_, 1);
v___x_3173_ = lean_box(0);
v___x_3174_ = 1;
lean_inc(v_head_3171_);
v___x_3175_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33(v_head_3171_, v___x_3174_, v___y_3167_, v___y_3168_);
if (lean_obj_tag(v___x_3175_) == 0)
{
lean_dec_ref_known(v___x_3175_, 1);
v_as_x27_3165_ = v_tail_3172_;
v_b_3166_ = v___x_3173_;
goto _start;
}
else
{
return v___x_3175_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38___redArg___boxed(lean_object* v_as_x27_3177_, lean_object* v_b_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_, lean_object* v___y_3181_){
_start:
{
lean_object* v_res_3182_; 
v_res_3182_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38___redArg(v_as_x27_3177_, v_b_3178_, v___y_3179_, v___y_3180_);
lean_dec(v___y_3180_);
lean_dec_ref(v___y_3179_);
lean_dec(v_as_x27_3177_);
return v_res_3182_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__3(void){
_start:
{
lean_object* v___x_3188_; lean_object* v___x_3189_; 
v___x_3188_ = l_Lean_maxRecDepthErrorMessage;
v___x_3189_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3189_, 0, v___x_3188_);
return v___x_3189_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__4(void){
_start:
{
lean_object* v___x_3190_; lean_object* v___x_3191_; 
v___x_3190_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__3);
v___x_3191_ = l_Lean_MessageData_ofFormat(v___x_3190_);
return v___x_3191_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__5(void){
_start:
{
lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; 
v___x_3192_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__4);
v___x_3193_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__2));
v___x_3194_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3194_, 0, v___x_3193_);
lean_ctor_set(v___x_3194_, 1, v___x_3192_);
return v___x_3194_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg(lean_object* v_ref_3195_){
_start:
{
lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; 
v___x_3197_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___closed__5);
v___x_3198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3198_, 0, v_ref_3195_);
lean_ctor_set(v___x_3198_, 1, v___x_3197_);
v___x_3199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3199_, 0, v___x_3198_);
return v___x_3199_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg___boxed(lean_object* v_ref_3200_, lean_object* v___y_3201_){
_start:
{
lean_object* v_res_3202_; 
v_res_3202_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg(v_ref_3200_);
return v_res_3202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg(lean_object* v_x_3204_, lean_object* v___y_3205_, lean_object* v___y_3206_){
_start:
{
lean_object* v___x_3208_; lean_object* v_env_3209_; lean_object* v___f_3210_; lean_object* v___f_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v_scopes_3214_; lean_object* v___x_3215_; lean_object* v_opts_3216_; lean_object* v___x_3217_; 
v___x_3208_ = lean_st_ref_get(v___y_3206_);
v_env_3209_ = lean_ctor_get(v___x_3208_, 0);
lean_inc_ref_n(v_env_3209_, 3);
lean_dec(v___x_3208_);
v___f_3210_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_3210_, 0, v_env_3209_);
v___f_3211_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_3211_, 0, v_env_3209_);
v___x_3212_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3213_ = lean_st_ref_get(v___y_3206_);
v_scopes_3214_ = lean_ctor_get(v___x_3213_, 2);
lean_inc(v_scopes_3214_);
lean_dec(v___x_3213_);
v___x_3215_ = l_List_head_x21___redArg(v___x_3212_, v_scopes_3214_);
lean_dec(v_scopes_3214_);
v_opts_3216_ = lean_ctor_get(v___x_3215_, 1);
lean_inc_ref(v_opts_3216_);
lean_dec(v___x_3215_);
v___x_3217_ = l_Lean_Elab_Command_getScope___redArg(v___y_3206_);
if (lean_obj_tag(v___x_3217_) == 0)
{
lean_object* v_a_3218_; lean_object* v_currNamespace_3219_; lean_object* v___f_3220_; lean_object* v___x_3221_; 
v_a_3218_ = lean_ctor_get(v___x_3217_, 0);
lean_inc(v_a_3218_);
lean_dec_ref_known(v___x_3217_, 1);
v_currNamespace_3219_ = lean_ctor_get(v_a_3218_, 2);
lean_inc_n(v_currNamespace_3219_, 2);
lean_dec(v_a_3218_);
v___f_3220_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3220_, 0, v_currNamespace_3219_);
v___x_3221_ = l_Lean_Elab_Command_getScope___redArg(v___y_3206_);
if (lean_obj_tag(v___x_3221_) == 0)
{
lean_object* v_a_3222_; lean_object* v_openDecls_3223_; lean_object* v___f_3224_; lean_object* v___f_3225_; lean_object* v_methods_3226_; lean_object* v___x_3227_; 
v_a_3222_ = lean_ctor_get(v___x_3221_, 0);
lean_inc(v_a_3222_);
lean_dec_ref_known(v___x_3221_, 1);
v_openDecls_3223_ = lean_ctor_get(v_a_3222_, 3);
lean_inc_n(v_openDecls_3223_, 2);
lean_dec(v_a_3222_);
lean_inc(v_currNamespace_3219_);
lean_inc_ref(v_env_3209_);
v___f_3224_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__3___boxed), 6, 3);
lean_closure_set(v___f_3224_, 0, v_env_3209_);
lean_closure_set(v___f_3224_, 1, v_currNamespace_3219_);
lean_closure_set(v___f_3224_, 2, v_openDecls_3223_);
v___f_3225_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___lam__4___boxed), 7, 4);
lean_closure_set(v___f_3225_, 0, v_env_3209_);
lean_closure_set(v___f_3225_, 1, v_opts_3216_);
lean_closure_set(v___f_3225_, 2, v_currNamespace_3219_);
lean_closure_set(v___f_3225_, 3, v_openDecls_3223_);
v_methods_3226_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_methods_3226_, 0, v___f_3211_);
lean_ctor_set(v_methods_3226_, 1, v___f_3220_);
lean_ctor_set(v_methods_3226_, 2, v___f_3210_);
lean_ctor_set(v_methods_3226_, 3, v___f_3224_);
lean_ctor_set(v_methods_3226_, 4, v___f_3225_);
v___x_3227_ = l_Lean_Elab_Command_getRef___redArg(v___y_3205_);
if (lean_obj_tag(v___x_3227_) == 0)
{
lean_object* v_a_3228_; lean_object* v___x_3229_; 
v_a_3228_ = lean_ctor_get(v___x_3227_, 0);
lean_inc(v_a_3228_);
lean_dec_ref_known(v___x_3227_, 1);
v___x_3229_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_3205_);
if (lean_obj_tag(v___x_3229_) == 0)
{
lean_object* v_a_3230_; lean_object* v_currRecDepth_3231_; lean_object* v_quotContext_x3f_3232_; lean_object* v_a_3234_; 
v_a_3230_ = lean_ctor_get(v___x_3229_, 0);
lean_inc(v_a_3230_);
lean_dec_ref_known(v___x_3229_, 1);
v_currRecDepth_3231_ = lean_ctor_get(v___y_3205_, 2);
v_quotContext_x3f_3232_ = lean_ctor_get(v___y_3205_, 5);
if (lean_obj_tag(v_quotContext_x3f_3232_) == 0)
{
lean_object* v___x_3308_; lean_object* v_a_3309_; 
v___x_3308_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v___y_3206_);
v_a_3309_ = lean_ctor_get(v___x_3308_, 0);
lean_inc(v_a_3309_);
lean_dec_ref(v___x_3308_);
v_a_3234_ = v_a_3309_;
goto v___jp_3233_;
}
else
{
lean_object* v_val_3310_; 
v_val_3310_ = lean_ctor_get(v_quotContext_x3f_3232_, 0);
lean_inc(v_val_3310_);
v_a_3234_ = v_val_3310_;
goto v___jp_3233_;
}
v___jp_3233_:
{
lean_object* v___x_3235_; lean_object* v_maxRecDepth_3236_; lean_object* v___x_3237_; lean_object* v_nextMacroScope_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; 
v___x_3235_ = lean_st_ref_get(v___y_3206_);
v_maxRecDepth_3236_ = lean_ctor_get(v___x_3235_, 5);
lean_inc(v_maxRecDepth_3236_);
lean_dec(v___x_3235_);
v___x_3237_ = lean_st_ref_get(v___y_3206_);
v_nextMacroScope_3238_ = lean_ctor_get(v___x_3237_, 4);
lean_inc(v_nextMacroScope_3238_);
lean_dec(v___x_3237_);
lean_inc(v_currRecDepth_3231_);
v___x_3239_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3239_, 0, v_methods_3226_);
lean_ctor_set(v___x_3239_, 1, v_a_3234_);
lean_ctor_set(v___x_3239_, 2, v_a_3230_);
lean_ctor_set(v___x_3239_, 3, v_currRecDepth_3231_);
lean_ctor_set(v___x_3239_, 4, v_maxRecDepth_3236_);
lean_ctor_set(v___x_3239_, 5, v_a_3228_);
v___x_3240_ = lean_box(0);
v___x_3241_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3241_, 0, v_nextMacroScope_3238_);
lean_ctor_set(v___x_3241_, 1, v___x_3240_);
lean_ctor_set(v___x_3241_, 2, v___x_3240_);
v___x_3242_ = lean_apply_2(v_x_3204_, v___x_3239_, v___x_3241_);
if (lean_obj_tag(v___x_3242_) == 0)
{
lean_object* v_a_3243_; lean_object* v_a_3244_; lean_object* v_macroScope_3245_; lean_object* v_traceMsgs_3246_; lean_object* v_expandedMacroDecls_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; 
v_a_3243_ = lean_ctor_get(v___x_3242_, 1);
lean_inc(v_a_3243_);
v_a_3244_ = lean_ctor_get(v___x_3242_, 0);
lean_inc(v_a_3244_);
lean_dec_ref_known(v___x_3242_, 2);
v_macroScope_3245_ = lean_ctor_get(v_a_3243_, 0);
lean_inc(v_macroScope_3245_);
v_traceMsgs_3246_ = lean_ctor_get(v_a_3243_, 1);
lean_inc(v_traceMsgs_3246_);
v_expandedMacroDecls_3247_ = lean_ctor_get(v_a_3243_, 2);
lean_inc(v_expandedMacroDecls_3247_);
lean_dec(v_a_3243_);
v___x_3248_ = lean_box(0);
v___x_3249_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38___redArg(v_expandedMacroDecls_3247_, v___x_3248_, v___y_3205_, v___y_3206_);
lean_dec(v_expandedMacroDecls_3247_);
if (lean_obj_tag(v___x_3249_) == 0)
{
lean_object* v___x_3250_; lean_object* v_env_3251_; lean_object* v_messages_3252_; lean_object* v_scopes_3253_; lean_object* v_usedQuotCtxts_3254_; lean_object* v_maxRecDepth_3255_; lean_object* v_ngen_3256_; lean_object* v_auxDeclNGen_3257_; lean_object* v_infoState_3258_; lean_object* v_traceState_3259_; lean_object* v_snapshotTasks_3260_; lean_object* v_prevLinterStates_3261_; lean_object* v_codeQualityEntryTasks_3262_; lean_object* v___x_3264_; uint8_t v_isShared_3265_; uint8_t v_isSharedCheck_3288_; 
lean_dec_ref_known(v___x_3249_, 1);
v___x_3250_ = lean_st_ref_take(v___y_3206_);
v_env_3251_ = lean_ctor_get(v___x_3250_, 0);
v_messages_3252_ = lean_ctor_get(v___x_3250_, 1);
v_scopes_3253_ = lean_ctor_get(v___x_3250_, 2);
v_usedQuotCtxts_3254_ = lean_ctor_get(v___x_3250_, 3);
v_maxRecDepth_3255_ = lean_ctor_get(v___x_3250_, 5);
v_ngen_3256_ = lean_ctor_get(v___x_3250_, 6);
v_auxDeclNGen_3257_ = lean_ctor_get(v___x_3250_, 7);
v_infoState_3258_ = lean_ctor_get(v___x_3250_, 8);
v_traceState_3259_ = lean_ctor_get(v___x_3250_, 9);
v_snapshotTasks_3260_ = lean_ctor_get(v___x_3250_, 10);
v_prevLinterStates_3261_ = lean_ctor_get(v___x_3250_, 11);
v_codeQualityEntryTasks_3262_ = lean_ctor_get(v___x_3250_, 12);
v_isSharedCheck_3288_ = !lean_is_exclusive(v___x_3250_);
if (v_isSharedCheck_3288_ == 0)
{
lean_object* v_unused_3289_; 
v_unused_3289_ = lean_ctor_get(v___x_3250_, 4);
lean_dec(v_unused_3289_);
v___x_3264_ = v___x_3250_;
v_isShared_3265_ = v_isSharedCheck_3288_;
goto v_resetjp_3263_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3262_);
lean_inc(v_prevLinterStates_3261_);
lean_inc(v_snapshotTasks_3260_);
lean_inc(v_traceState_3259_);
lean_inc(v_infoState_3258_);
lean_inc(v_auxDeclNGen_3257_);
lean_inc(v_ngen_3256_);
lean_inc(v_maxRecDepth_3255_);
lean_inc(v_usedQuotCtxts_3254_);
lean_inc(v_scopes_3253_);
lean_inc(v_messages_3252_);
lean_inc(v_env_3251_);
lean_dec(v___x_3250_);
v___x_3264_ = lean_box(0);
v_isShared_3265_ = v_isSharedCheck_3288_;
goto v_resetjp_3263_;
}
v_resetjp_3263_:
{
lean_object* v___x_3267_; 
if (v_isShared_3265_ == 0)
{
lean_ctor_set(v___x_3264_, 4, v_macroScope_3245_);
v___x_3267_ = v___x_3264_;
goto v_reusejp_3266_;
}
else
{
lean_object* v_reuseFailAlloc_3287_; 
v_reuseFailAlloc_3287_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3287_, 0, v_env_3251_);
lean_ctor_set(v_reuseFailAlloc_3287_, 1, v_messages_3252_);
lean_ctor_set(v_reuseFailAlloc_3287_, 2, v_scopes_3253_);
lean_ctor_set(v_reuseFailAlloc_3287_, 3, v_usedQuotCtxts_3254_);
lean_ctor_set(v_reuseFailAlloc_3287_, 4, v_macroScope_3245_);
lean_ctor_set(v_reuseFailAlloc_3287_, 5, v_maxRecDepth_3255_);
lean_ctor_set(v_reuseFailAlloc_3287_, 6, v_ngen_3256_);
lean_ctor_set(v_reuseFailAlloc_3287_, 7, v_auxDeclNGen_3257_);
lean_ctor_set(v_reuseFailAlloc_3287_, 8, v_infoState_3258_);
lean_ctor_set(v_reuseFailAlloc_3287_, 9, v_traceState_3259_);
lean_ctor_set(v_reuseFailAlloc_3287_, 10, v_snapshotTasks_3260_);
lean_ctor_set(v_reuseFailAlloc_3287_, 11, v_prevLinterStates_3261_);
lean_ctor_set(v_reuseFailAlloc_3287_, 12, v_codeQualityEntryTasks_3262_);
v___x_3267_ = v_reuseFailAlloc_3287_;
goto v_reusejp_3266_;
}
v_reusejp_3266_:
{
lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; 
v___x_3268_ = lean_st_ref_put(v___y_3206_, v___x_3267_);
v___x_3269_ = l_List_reverse___redArg(v_traceMsgs_3246_);
v___x_3270_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__39(v___x_3269_, v___y_3205_, v___y_3206_);
if (lean_obj_tag(v___x_3270_) == 0)
{
lean_object* v___x_3272_; uint8_t v_isShared_3273_; uint8_t v_isSharedCheck_3277_; 
v_isSharedCheck_3277_ = !lean_is_exclusive(v___x_3270_);
if (v_isSharedCheck_3277_ == 0)
{
lean_object* v_unused_3278_; 
v_unused_3278_ = lean_ctor_get(v___x_3270_, 0);
lean_dec(v_unused_3278_);
v___x_3272_ = v___x_3270_;
v_isShared_3273_ = v_isSharedCheck_3277_;
goto v_resetjp_3271_;
}
else
{
lean_dec(v___x_3270_);
v___x_3272_ = lean_box(0);
v_isShared_3273_ = v_isSharedCheck_3277_;
goto v_resetjp_3271_;
}
v_resetjp_3271_:
{
lean_object* v___x_3275_; 
if (v_isShared_3273_ == 0)
{
lean_ctor_set(v___x_3272_, 0, v_a_3244_);
v___x_3275_ = v___x_3272_;
goto v_reusejp_3274_;
}
else
{
lean_object* v_reuseFailAlloc_3276_; 
v_reuseFailAlloc_3276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3276_, 0, v_a_3244_);
v___x_3275_ = v_reuseFailAlloc_3276_;
goto v_reusejp_3274_;
}
v_reusejp_3274_:
{
return v___x_3275_;
}
}
}
else
{
lean_object* v_a_3279_; lean_object* v___x_3281_; uint8_t v_isShared_3282_; uint8_t v_isSharedCheck_3286_; 
lean_dec(v_a_3244_);
v_a_3279_ = lean_ctor_get(v___x_3270_, 0);
v_isSharedCheck_3286_ = !lean_is_exclusive(v___x_3270_);
if (v_isSharedCheck_3286_ == 0)
{
v___x_3281_ = v___x_3270_;
v_isShared_3282_ = v_isSharedCheck_3286_;
goto v_resetjp_3280_;
}
else
{
lean_inc(v_a_3279_);
lean_dec(v___x_3270_);
v___x_3281_ = lean_box(0);
v_isShared_3282_ = v_isSharedCheck_3286_;
goto v_resetjp_3280_;
}
v_resetjp_3280_:
{
lean_object* v___x_3284_; 
if (v_isShared_3282_ == 0)
{
v___x_3284_ = v___x_3281_;
goto v_reusejp_3283_;
}
else
{
lean_object* v_reuseFailAlloc_3285_; 
v_reuseFailAlloc_3285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3285_, 0, v_a_3279_);
v___x_3284_ = v_reuseFailAlloc_3285_;
goto v_reusejp_3283_;
}
v_reusejp_3283_:
{
return v___x_3284_;
}
}
}
}
}
}
else
{
lean_object* v_a_3290_; lean_object* v___x_3292_; uint8_t v_isShared_3293_; uint8_t v_isSharedCheck_3297_; 
lean_dec(v_traceMsgs_3246_);
lean_dec(v_macroScope_3245_);
lean_dec(v_a_3244_);
v_a_3290_ = lean_ctor_get(v___x_3249_, 0);
v_isSharedCheck_3297_ = !lean_is_exclusive(v___x_3249_);
if (v_isSharedCheck_3297_ == 0)
{
v___x_3292_ = v___x_3249_;
v_isShared_3293_ = v_isSharedCheck_3297_;
goto v_resetjp_3291_;
}
else
{
lean_inc(v_a_3290_);
lean_dec(v___x_3249_);
v___x_3292_ = lean_box(0);
v_isShared_3293_ = v_isSharedCheck_3297_;
goto v_resetjp_3291_;
}
v_resetjp_3291_:
{
lean_object* v___x_3295_; 
if (v_isShared_3293_ == 0)
{
v___x_3295_ = v___x_3292_;
goto v_reusejp_3294_;
}
else
{
lean_object* v_reuseFailAlloc_3296_; 
v_reuseFailAlloc_3296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3296_, 0, v_a_3290_);
v___x_3295_ = v_reuseFailAlloc_3296_;
goto v_reusejp_3294_;
}
v_reusejp_3294_:
{
return v___x_3295_;
}
}
}
}
else
{
lean_object* v_a_3298_; 
v_a_3298_ = lean_ctor_get(v___x_3242_, 0);
lean_inc(v_a_3298_);
lean_dec_ref_known(v___x_3242_, 2);
if (lean_obj_tag(v_a_3298_) == 0)
{
lean_object* v_a_3299_; lean_object* v_a_3300_; lean_object* v___x_3301_; uint8_t v___x_3302_; 
v_a_3299_ = lean_ctor_get(v_a_3298_, 0);
lean_inc(v_a_3299_);
v_a_3300_ = lean_ctor_get(v_a_3298_, 1);
lean_inc_ref(v_a_3300_);
lean_dec_ref_known(v_a_3298_, 2);
v___x_3301_ = ((lean_object*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___closed__0));
v___x_3302_ = lean_string_dec_eq(v_a_3300_, v___x_3301_);
if (v___x_3302_ == 0)
{
lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; 
v___x_3303_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3303_, 0, v_a_3300_);
v___x_3304_ = l_Lean_MessageData_ofFormat(v___x_3303_);
v___x_3305_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___redArg(v_a_3299_, v___x_3304_, v___y_3205_, v___y_3206_);
lean_dec(v_a_3299_);
return v___x_3305_;
}
else
{
lean_object* v___x_3306_; 
lean_dec_ref(v_a_3300_);
v___x_3306_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg(v_a_3299_);
return v___x_3306_;
}
}
else
{
lean_object* v___x_3307_; 
v___x_3307_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg();
return v___x_3307_;
}
}
}
}
else
{
lean_object* v_a_3311_; lean_object* v___x_3313_; uint8_t v_isShared_3314_; uint8_t v_isSharedCheck_3318_; 
lean_dec(v_a_3228_);
lean_dec_ref_known(v_methods_3226_, 5);
lean_dec_ref(v_x_3204_);
v_a_3311_ = lean_ctor_get(v___x_3229_, 0);
v_isSharedCheck_3318_ = !lean_is_exclusive(v___x_3229_);
if (v_isSharedCheck_3318_ == 0)
{
v___x_3313_ = v___x_3229_;
v_isShared_3314_ = v_isSharedCheck_3318_;
goto v_resetjp_3312_;
}
else
{
lean_inc(v_a_3311_);
lean_dec(v___x_3229_);
v___x_3313_ = lean_box(0);
v_isShared_3314_ = v_isSharedCheck_3318_;
goto v_resetjp_3312_;
}
v_resetjp_3312_:
{
lean_object* v___x_3316_; 
if (v_isShared_3314_ == 0)
{
v___x_3316_ = v___x_3313_;
goto v_reusejp_3315_;
}
else
{
lean_object* v_reuseFailAlloc_3317_; 
v_reuseFailAlloc_3317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3317_, 0, v_a_3311_);
v___x_3316_ = v_reuseFailAlloc_3317_;
goto v_reusejp_3315_;
}
v_reusejp_3315_:
{
return v___x_3316_;
}
}
}
}
else
{
lean_object* v_a_3319_; lean_object* v___x_3321_; uint8_t v_isShared_3322_; uint8_t v_isSharedCheck_3326_; 
lean_dec_ref_known(v_methods_3226_, 5);
lean_dec_ref(v_x_3204_);
v_a_3319_ = lean_ctor_get(v___x_3227_, 0);
v_isSharedCheck_3326_ = !lean_is_exclusive(v___x_3227_);
if (v_isSharedCheck_3326_ == 0)
{
v___x_3321_ = v___x_3227_;
v_isShared_3322_ = v_isSharedCheck_3326_;
goto v_resetjp_3320_;
}
else
{
lean_inc(v_a_3319_);
lean_dec(v___x_3227_);
v___x_3321_ = lean_box(0);
v_isShared_3322_ = v_isSharedCheck_3326_;
goto v_resetjp_3320_;
}
v_resetjp_3320_:
{
lean_object* v___x_3324_; 
if (v_isShared_3322_ == 0)
{
v___x_3324_ = v___x_3321_;
goto v_reusejp_3323_;
}
else
{
lean_object* v_reuseFailAlloc_3325_; 
v_reuseFailAlloc_3325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3325_, 0, v_a_3319_);
v___x_3324_ = v_reuseFailAlloc_3325_;
goto v_reusejp_3323_;
}
v_reusejp_3323_:
{
return v___x_3324_;
}
}
}
}
else
{
lean_object* v_a_3327_; lean_object* v___x_3329_; uint8_t v_isShared_3330_; uint8_t v_isSharedCheck_3334_; 
lean_dec_ref(v___f_3220_);
lean_dec(v_currNamespace_3219_);
lean_dec_ref(v_opts_3216_);
lean_dec_ref(v___f_3211_);
lean_dec_ref(v___f_3210_);
lean_dec_ref(v_env_3209_);
lean_dec_ref(v_x_3204_);
v_a_3327_ = lean_ctor_get(v___x_3221_, 0);
v_isSharedCheck_3334_ = !lean_is_exclusive(v___x_3221_);
if (v_isSharedCheck_3334_ == 0)
{
v___x_3329_ = v___x_3221_;
v_isShared_3330_ = v_isSharedCheck_3334_;
goto v_resetjp_3328_;
}
else
{
lean_inc(v_a_3327_);
lean_dec(v___x_3221_);
v___x_3329_ = lean_box(0);
v_isShared_3330_ = v_isSharedCheck_3334_;
goto v_resetjp_3328_;
}
v_resetjp_3328_:
{
lean_object* v___x_3332_; 
if (v_isShared_3330_ == 0)
{
v___x_3332_ = v___x_3329_;
goto v_reusejp_3331_;
}
else
{
lean_object* v_reuseFailAlloc_3333_; 
v_reuseFailAlloc_3333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3333_, 0, v_a_3327_);
v___x_3332_ = v_reuseFailAlloc_3333_;
goto v_reusejp_3331_;
}
v_reusejp_3331_:
{
return v___x_3332_;
}
}
}
}
else
{
lean_object* v_a_3335_; lean_object* v___x_3337_; uint8_t v_isShared_3338_; uint8_t v_isSharedCheck_3342_; 
lean_dec_ref(v_opts_3216_);
lean_dec_ref(v___f_3211_);
lean_dec_ref(v___f_3210_);
lean_dec_ref(v_env_3209_);
lean_dec_ref(v_x_3204_);
v_a_3335_ = lean_ctor_get(v___x_3217_, 0);
v_isSharedCheck_3342_ = !lean_is_exclusive(v___x_3217_);
if (v_isSharedCheck_3342_ == 0)
{
v___x_3337_ = v___x_3217_;
v_isShared_3338_ = v_isSharedCheck_3342_;
goto v_resetjp_3336_;
}
else
{
lean_inc(v_a_3335_);
lean_dec(v___x_3217_);
v___x_3337_ = lean_box(0);
v_isShared_3338_ = v_isSharedCheck_3342_;
goto v_resetjp_3336_;
}
v_resetjp_3336_:
{
lean_object* v___x_3340_; 
if (v_isShared_3338_ == 0)
{
v___x_3340_ = v___x_3337_;
goto v_reusejp_3339_;
}
else
{
lean_object* v_reuseFailAlloc_3341_; 
v_reuseFailAlloc_3341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3341_, 0, v_a_3335_);
v___x_3340_ = v_reuseFailAlloc_3341_;
goto v_reusejp_3339_;
}
v_reusejp_3339_:
{
return v___x_3340_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg___boxed(lean_object* v_x_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_){
_start:
{
lean_object* v_res_3347_; 
v_res_3347_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg(v_x_3343_, v___y_3344_, v___y_3345_);
lean_dec(v___y_3345_);
lean_dec_ref(v___y_3344_);
return v_res_3347_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3349_; lean_object* v___x_3350_; 
v___x_3349_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__0));
v___x_3350_ = l_Lean_stringToMessageData(v___x_3349_);
return v___x_3350_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__3(void){
_start:
{
lean_object* v___x_3352_; lean_object* v___x_3353_; 
v___x_3352_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__2));
v___x_3353_ = l_Lean_stringToMessageData(v___x_3352_);
return v___x_3353_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__5(void){
_start:
{
lean_object* v___x_3355_; lean_object* v___x_3356_; 
v___x_3355_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__4));
v___x_3356_ = l_Lean_stringToMessageData(v___x_3355_);
return v___x_3356_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__7(void){
_start:
{
lean_object* v___x_3358_; lean_object* v___x_3359_; 
v___x_3358_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__6));
v___x_3359_ = l_Lean_stringToMessageData(v___x_3358_);
return v___x_3359_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__9(void){
_start:
{
lean_object* v___x_3361_; lean_object* v___x_3362_; 
v___x_3361_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__8));
v___x_3362_ = l_Lean_stringToMessageData(v___x_3361_);
return v___x_3362_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__14(void){
_start:
{
lean_object* v___x_3371_; lean_object* v___x_3372_; 
v___x_3371_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__13));
v___x_3372_ = l_Lean_stringToMessageData(v___x_3371_);
return v___x_3372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1(lean_object* v___x_3373_, lean_object* v_attrInstance_3374_, lean_object* v___f_3375_, lean_object* v___x_3376_, lean_object* v___x_3377_, lean_object* v___x_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_){
_start:
{
lean_object* v___x_3382_; 
v___x_3382_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg(v___x_3373_, v___y_3379_, v___y_3380_);
if (lean_obj_tag(v___x_3382_) == 0)
{
lean_object* v_a_3383_; lean_object* v___x_3384_; lean_object* v_attr_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; 
v_a_3383_ = lean_ctor_get(v___x_3382_, 0);
lean_inc(v_a_3383_);
lean_dec_ref_known(v___x_3382_, 1);
v___x_3384_ = lean_unsigned_to_nat(1u);
v_attr_3385_ = l_Lean_Syntax_getArg(v_attrInstance_3374_, v___x_3384_);
v___x_3386_ = lean_alloc_closure((void*)(l_Lean_expandMacros), 4, 2);
lean_closure_set(v___x_3386_, 0, v_attr_3385_);
lean_closure_set(v___x_3386_, 1, v___f_3375_);
v___x_3387_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg(v___x_3386_, v___y_3379_, v___y_3380_);
if (lean_obj_tag(v___x_3387_) == 0)
{
lean_object* v_a_3388_; lean_object* v___x_3390_; uint8_t v_isShared_3391_; uint8_t v_isSharedCheck_3493_; 
v_a_3388_ = lean_ctor_get(v___x_3387_, 0);
v_isSharedCheck_3493_ = !lean_is_exclusive(v___x_3387_);
if (v_isSharedCheck_3493_ == 0)
{
v___x_3390_ = v___x_3387_;
v_isShared_3391_ = v_isSharedCheck_3493_;
goto v_resetjp_3389_;
}
else
{
lean_inc(v_a_3388_);
lean_dec(v___x_3387_);
v___x_3390_ = lean_box(0);
v_isShared_3391_ = v_isSharedCheck_3493_;
goto v_resetjp_3389_;
}
v_resetjp_3389_:
{
lean_object* v___y_3393_; lean_object* v___y_3400_; uint8_t v___y_3401_; lean_object* v___y_3402_; lean_object* v___y_3403_; lean_object* v___y_3404_; lean_object* v_attrName_3415_; lean_object* v___y_3416_; lean_object* v___y_3417_; lean_object* v___x_3474_; lean_object* v___x_3475_; uint8_t v___x_3476_; 
lean_inc(v_a_3388_);
v___x_3474_ = l_Lean_Syntax_getKind(v_a_3388_);
v___x_3475_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__12));
v___x_3476_ = lean_name_eq(v___x_3474_, v___x_3475_);
if (v___x_3476_ == 0)
{
if (lean_obj_tag(v___x_3474_) == 1)
{
lean_object* v_str_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; 
v_str_3477_ = lean_ctor_get(v___x_3474_, 1);
lean_inc_ref(v_str_3477_);
lean_dec_ref_known(v___x_3474_, 2);
v___x_3478_ = lean_box(0);
v___x_3479_ = l_Lean_Name_str___override(v___x_3478_, v_str_3477_);
v_attrName_3415_ = v___x_3479_;
v___y_3416_ = v___y_3379_;
v___y_3417_ = v___y_3380_;
goto v___jp_3414_;
}
else
{
lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v_a_3482_; lean_object* v___x_3484_; uint8_t v_isShared_3485_; uint8_t v_isSharedCheck_3489_; 
lean_dec(v___x_3474_);
lean_del_object(v___x_3390_);
lean_dec(v_a_3383_);
lean_dec(v___x_3376_);
v___x_3480_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__14, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__14_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__14);
v___x_3481_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___redArg(v_a_3388_, v___x_3480_, v___y_3379_, v___y_3380_);
lean_dec(v_a_3388_);
v_a_3482_ = lean_ctor_get(v___x_3481_, 0);
v_isSharedCheck_3489_ = !lean_is_exclusive(v___x_3481_);
if (v_isSharedCheck_3489_ == 0)
{
v___x_3484_ = v___x_3481_;
v_isShared_3485_ = v_isSharedCheck_3489_;
goto v_resetjp_3483_;
}
else
{
lean_inc(v_a_3482_);
lean_dec(v___x_3481_);
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
else
{
lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; 
lean_dec(v___x_3474_);
v___x_3490_ = l_Lean_Syntax_getArg(v_a_3388_, v___x_3378_);
v___x_3491_ = l_Lean_Syntax_getId(v___x_3490_);
lean_dec(v___x_3490_);
v___x_3492_ = l_Lean_Name_eraseMacroScopes(v___x_3491_);
lean_dec(v___x_3491_);
v_attrName_3415_ = v___x_3492_;
v___y_3416_ = v___y_3379_;
v___y_3417_ = v___y_3380_;
goto v___jp_3414_;
}
v___jp_3392_:
{
lean_object* v___x_3394_; uint8_t v___x_3395_; lean_object* v___x_3397_; 
v___x_3394_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3394_, 0, v___y_3393_);
lean_ctor_set(v___x_3394_, 1, v_a_3388_);
v___x_3395_ = lean_unbox(v_a_3383_);
lean_dec(v_a_3383_);
lean_ctor_set_uint8(v___x_3394_, sizeof(void*)*2, v___x_3395_);
if (v_isShared_3391_ == 0)
{
lean_ctor_set(v___x_3390_, 0, v___x_3394_);
v___x_3397_ = v___x_3390_;
goto v_reusejp_3396_;
}
else
{
lean_object* v_reuseFailAlloc_3398_; 
v_reuseFailAlloc_3398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3398_, 0, v___x_3394_);
v___x_3397_ = v_reuseFailAlloc_3398_;
goto v_reusejp_3396_;
}
v_reusejp_3396_:
{
return v___x_3397_;
}
}
v___jp_3399_:
{
lean_object* v___x_3405_; 
v___x_3405_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33(v___y_3402_, v___y_3401_, v___y_3403_, v___y_3404_);
if (lean_obj_tag(v___x_3405_) == 0)
{
lean_dec_ref_known(v___x_3405_, 1);
v___y_3393_ = v___y_3400_;
goto v___jp_3392_;
}
else
{
lean_object* v_a_3406_; lean_object* v___x_3408_; uint8_t v_isShared_3409_; uint8_t v_isSharedCheck_3413_; 
lean_dec(v___y_3400_);
lean_del_object(v___x_3390_);
lean_dec(v_a_3388_);
lean_dec(v_a_3383_);
v_a_3406_ = lean_ctor_get(v___x_3405_, 0);
v_isSharedCheck_3413_ = !lean_is_exclusive(v___x_3405_);
if (v_isSharedCheck_3413_ == 0)
{
v___x_3408_ = v___x_3405_;
v_isShared_3409_ = v_isSharedCheck_3413_;
goto v_resetjp_3407_;
}
else
{
lean_inc(v_a_3406_);
lean_dec(v___x_3405_);
v___x_3408_ = lean_box(0);
v_isShared_3409_ = v_isSharedCheck_3413_;
goto v_resetjp_3407_;
}
v_resetjp_3407_:
{
lean_object* v___x_3411_; 
if (v_isShared_3409_ == 0)
{
v___x_3411_ = v___x_3408_;
goto v_reusejp_3410_;
}
else
{
lean_object* v_reuseFailAlloc_3412_; 
v_reuseFailAlloc_3412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3412_, 0, v_a_3406_);
v___x_3411_ = v_reuseFailAlloc_3412_;
goto v_reusejp_3410_;
}
v_reusejp_3410_:
{
return v___x_3411_;
}
}
}
}
v___jp_3414_:
{
lean_object* v___x_3418_; lean_object* v_env_3419_; lean_object* v___x_3420_; 
v___x_3418_ = lean_st_ref_get(v___y_3417_);
v_env_3419_ = lean_ctor_get(v___x_3418_, 0);
lean_inc_ref(v_env_3419_);
lean_dec(v___x_3418_);
lean_inc(v_attrName_3415_);
v___x_3420_ = l_Lean_getAttributeImpl(v_env_3419_, v_attrName_3415_);
if (lean_obj_tag(v___x_3420_) == 1)
{
lean_object* v___x_3421_; lean_object* v_env_3422_; lean_object* v___x_3423_; 
lean_dec_ref_known(v___x_3420_, 1);
v___x_3421_ = lean_st_ref_get(v___y_3417_);
v_env_3422_ = lean_ctor_get(v___x_3421_, 0);
lean_inc_ref(v_env_3422_);
lean_dec(v___x_3421_);
lean_inc(v_attrName_3415_);
v___x_3423_ = l_Lean_getAttributeImpl(v_env_3422_, v_attrName_3415_);
if (lean_obj_tag(v___x_3423_) == 1)
{
lean_object* v_a_3424_; lean_object* v___x_3425_; lean_object* v_toAttributeImplCore_3426_; lean_object* v_env_3427_; lean_object* v_ref_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; 
v_a_3424_ = lean_ctor_get(v___x_3423_, 0);
lean_inc(v_a_3424_);
lean_dec_ref_known(v___x_3423_, 1);
v___x_3425_ = lean_st_ref_get(v___y_3417_);
v_toAttributeImplCore_3426_ = lean_ctor_get(v_a_3424_, 0);
lean_inc_ref(v_toAttributeImplCore_3426_);
lean_dec(v_a_3424_);
v_env_3427_ = lean_ctor_get(v___x_3425_, 0);
lean_inc_ref(v_env_3427_);
lean_dec(v___x_3425_);
v_ref_3428_ = lean_ctor_get(v_toAttributeImplCore_3426_, 0);
lean_inc_n(v_ref_3428_, 2);
lean_dec_ref(v_toAttributeImplCore_3426_);
v___x_3429_ = l_Lean_regularInitAttr;
v___x_3430_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v___x_3376_, v___x_3429_, v_env_3427_, v_ref_3428_);
if (lean_obj_tag(v___x_3430_) == 0)
{
lean_dec(v_ref_3428_);
v___y_3393_ = v_attrName_3415_;
goto v___jp_3392_;
}
else
{
uint8_t v___x_3431_; lean_object* v___x_3432_; lean_object* v_env_3433_; lean_object* v___x_3434_; 
lean_dec_ref_known(v___x_3430_, 1);
v___x_3431_ = 1;
v___x_3432_ = lean_st_ref_get(v___y_3417_);
v_env_3433_ = lean_ctor_get(v___x_3432_, 0);
lean_inc_ref(v_env_3433_);
lean_dec(v___x_3432_);
v___x_3434_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3433_, v_ref_3428_);
lean_dec_ref(v_env_3433_);
if (lean_obj_tag(v___x_3434_) == 1)
{
lean_object* v_val_3435_; lean_object* v___x_3436_; lean_object* v_env_3437_; lean_object* v___x_3438_; lean_object* v_modules_3439_; lean_object* v___x_3440_; uint8_t v___x_3441_; 
v_val_3435_ = lean_ctor_get(v___x_3434_, 0);
lean_inc(v_val_3435_);
lean_dec_ref_known(v___x_3434_, 1);
v___x_3436_ = lean_st_ref_get(v___y_3417_);
v_env_3437_ = lean_ctor_get(v___x_3436_, 0);
lean_inc_ref(v_env_3437_);
lean_dec(v___x_3436_);
v___x_3438_ = l_Lean_Environment_header(v_env_3437_);
lean_dec_ref(v_env_3437_);
v_modules_3439_ = lean_ctor_get(v___x_3438_, 3);
lean_inc_ref(v_modules_3439_);
lean_dec_ref(v___x_3438_);
v___x_3440_ = lean_array_get_size(v_modules_3439_);
v___x_3441_ = lean_nat_dec_lt(v_val_3435_, v___x_3440_);
if (v___x_3441_ == 0)
{
lean_dec_ref(v_modules_3439_);
lean_dec(v_val_3435_);
v___y_3400_ = v_attrName_3415_;
v___y_3401_ = v___x_3431_;
v___y_3402_ = v_ref_3428_;
v___y_3403_ = v___y_3416_;
v___y_3404_ = v___y_3417_;
goto v___jp_3399_;
}
else
{
lean_object* v___x_3442_; uint8_t v_hasData_3443_; 
v___x_3442_ = lean_array_fget_borrowed(v_modules_3439_, v_val_3435_);
v_hasData_3443_ = lean_ctor_get_uint8(v___x_3442_, sizeof(void*)*1 + 1);
if (v_hasData_3443_ == 0)
{
lean_object* v___x_3444_; lean_object* v_toImport_3445_; lean_object* v_module_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v_a_3460_; lean_object* v___x_3462_; uint8_t v_isShared_3463_; uint8_t v_isSharedCheck_3467_; 
lean_dec(v_ref_3428_);
lean_del_object(v___x_3390_);
lean_dec(v_a_3388_);
lean_dec(v_a_3383_);
v___x_3444_ = lean_array_get(v___x_3377_, v_modules_3439_, v_val_3435_);
lean_dec(v_val_3435_);
lean_dec_ref(v_modules_3439_);
v_toImport_3445_ = lean_ctor_get(v___x_3444_, 0);
lean_inc_ref(v_toImport_3445_);
lean_dec(v___x_3444_);
v_module_3446_ = lean_ctor_get(v_toImport_3445_, 0);
lean_inc(v_module_3446_);
lean_dec_ref(v_toImport_3445_);
v___x_3447_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__1, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__1_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__1);
v___x_3448_ = l_Lean_MessageData_ofName(v_attrName_3415_);
v___x_3449_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3449_, 0, v___x_3447_);
lean_ctor_set(v___x_3449_, 1, v___x_3448_);
v___x_3450_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__3, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__3_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__3);
v___x_3451_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3451_, 0, v___x_3449_);
lean_ctor_set(v___x_3451_, 1, v___x_3450_);
v___x_3452_ = l_Lean_MessageData_ofName(v_module_3446_);
lean_inc_ref(v___x_3452_);
v___x_3453_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3453_, 0, v___x_3451_);
lean_ctor_set(v___x_3453_, 1, v___x_3452_);
v___x_3454_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__5, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__5_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__5);
v___x_3455_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3455_, 0, v___x_3453_);
lean_ctor_set(v___x_3455_, 1, v___x_3454_);
v___x_3456_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3456_, 0, v___x_3455_);
lean_ctor_set(v___x_3456_, 1, v___x_3452_);
v___x_3457_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg___closed__9);
v___x_3458_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3458_, 0, v___x_3456_);
lean_ctor_set(v___x_3458_, 1, v___x_3457_);
v___x_3459_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15___redArg(v___x_3458_, v___y_3416_, v___y_3417_);
v_a_3460_ = lean_ctor_get(v___x_3459_, 0);
v_isSharedCheck_3467_ = !lean_is_exclusive(v___x_3459_);
if (v_isSharedCheck_3467_ == 0)
{
v___x_3462_ = v___x_3459_;
v_isShared_3463_ = v_isSharedCheck_3467_;
goto v_resetjp_3461_;
}
else
{
lean_inc(v_a_3460_);
lean_dec(v___x_3459_);
v___x_3462_ = lean_box(0);
v_isShared_3463_ = v_isSharedCheck_3467_;
goto v_resetjp_3461_;
}
v_resetjp_3461_:
{
lean_object* v___x_3465_; 
if (v_isShared_3463_ == 0)
{
v___x_3465_ = v___x_3462_;
goto v_reusejp_3464_;
}
else
{
lean_object* v_reuseFailAlloc_3466_; 
v_reuseFailAlloc_3466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3466_, 0, v_a_3460_);
v___x_3465_ = v_reuseFailAlloc_3466_;
goto v_reusejp_3464_;
}
v_reusejp_3464_:
{
return v___x_3465_;
}
}
}
else
{
lean_dec_ref(v_modules_3439_);
lean_dec(v_val_3435_);
v___y_3400_ = v_attrName_3415_;
v___y_3401_ = v___x_3431_;
v___y_3402_ = v_ref_3428_;
v___y_3403_ = v___y_3416_;
v___y_3404_ = v___y_3417_;
goto v___jp_3399_;
}
}
}
else
{
lean_dec(v___x_3434_);
v___y_3400_ = v_attrName_3415_;
v___y_3401_ = v___x_3431_;
v___y_3402_ = v_ref_3428_;
v___y_3403_ = v___y_3416_;
v___y_3404_ = v___y_3417_;
goto v___jp_3399_;
}
}
}
else
{
lean_dec_ref(v___x_3423_);
lean_dec(v___x_3376_);
v___y_3393_ = v_attrName_3415_;
goto v___jp_3392_;
}
}
else
{
lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; 
lean_dec_ref(v___x_3420_);
lean_del_object(v___x_3390_);
lean_dec(v_a_3388_);
lean_dec(v_a_3383_);
lean_dec(v___x_3376_);
v___x_3468_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__7, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__7_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__7);
v___x_3469_ = l_Lean_MessageData_ofName(v_attrName_3415_);
v___x_3470_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3470_, 0, v___x_3468_);
lean_ctor_set(v___x_3470_, 1, v___x_3469_);
v___x_3471_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__9, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__9_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___closed__9);
v___x_3472_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3472_, 0, v___x_3470_);
lean_ctor_set(v___x_3472_, 1, v___x_3471_);
v___x_3473_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15___redArg(v___x_3472_, v___y_3416_, v___y_3417_);
return v___x_3473_;
}
}
}
}
else
{
lean_object* v_a_3494_; lean_object* v___x_3496_; uint8_t v_isShared_3497_; uint8_t v_isSharedCheck_3501_; 
lean_dec(v_a_3383_);
lean_dec(v___x_3376_);
v_a_3494_ = lean_ctor_get(v___x_3387_, 0);
v_isSharedCheck_3501_ = !lean_is_exclusive(v___x_3387_);
if (v_isSharedCheck_3501_ == 0)
{
v___x_3496_ = v___x_3387_;
v_isShared_3497_ = v_isSharedCheck_3501_;
goto v_resetjp_3495_;
}
else
{
lean_inc(v_a_3494_);
lean_dec(v___x_3387_);
v___x_3496_ = lean_box(0);
v_isShared_3497_ = v_isSharedCheck_3501_;
goto v_resetjp_3495_;
}
v_resetjp_3495_:
{
lean_object* v___x_3499_; 
if (v_isShared_3497_ == 0)
{
v___x_3499_ = v___x_3496_;
goto v_reusejp_3498_;
}
else
{
lean_object* v_reuseFailAlloc_3500_; 
v_reuseFailAlloc_3500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3500_, 0, v_a_3494_);
v___x_3499_ = v_reuseFailAlloc_3500_;
goto v_reusejp_3498_;
}
v_reusejp_3498_:
{
return v___x_3499_;
}
}
}
}
else
{
lean_object* v_a_3502_; lean_object* v___x_3504_; uint8_t v_isShared_3505_; uint8_t v_isSharedCheck_3509_; 
lean_dec(v___x_3376_);
lean_dec_ref(v___f_3375_);
v_a_3502_ = lean_ctor_get(v___x_3382_, 0);
v_isSharedCheck_3509_ = !lean_is_exclusive(v___x_3382_);
if (v_isSharedCheck_3509_ == 0)
{
v___x_3504_ = v___x_3382_;
v_isShared_3505_ = v_isSharedCheck_3509_;
goto v_resetjp_3503_;
}
else
{
lean_inc(v_a_3502_);
lean_dec(v___x_3382_);
v___x_3504_ = lean_box(0);
v_isShared_3505_ = v_isSharedCheck_3509_;
goto v_resetjp_3503_;
}
v_resetjp_3503_:
{
lean_object* v___x_3507_; 
if (v_isShared_3505_ == 0)
{
v___x_3507_ = v___x_3504_;
goto v_reusejp_3506_;
}
else
{
lean_object* v_reuseFailAlloc_3508_; 
v_reuseFailAlloc_3508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3508_, 0, v_a_3502_);
v___x_3507_ = v_reuseFailAlloc_3508_;
goto v_reusejp_3506_;
}
v_reusejp_3506_:
{
return v___x_3507_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___boxed(lean_object* v___x_3510_, lean_object* v_attrInstance_3511_, lean_object* v___f_3512_, lean_object* v___x_3513_, lean_object* v___x_3514_, lean_object* v___x_3515_, lean_object* v___y_3516_, lean_object* v___y_3517_, lean_object* v___y_3518_){
_start:
{
lean_object* v_res_3519_; 
v_res_3519_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1(v___x_3510_, v_attrInstance_3511_, v___f_3512_, v___x_3513_, v___x_3514_, v___x_3515_, v___y_3516_, v___y_3517_);
lean_dec(v___y_3517_);
lean_dec_ref(v___y_3516_);
lean_dec(v___x_3515_);
lean_dec_ref(v___x_3514_);
lean_dec(v_attrInstance_3511_);
return v_res_3519_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0(lean_object* v_k_3527_){
_start:
{
lean_object* v___x_3528_; uint8_t v___x_3529_; 
v___x_3528_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0___closed__2));
v___x_3529_ = lean_name_eq(v_k_3527_, v___x_3528_);
if (v___x_3529_ == 0)
{
uint8_t v___x_3530_; 
v___x_3530_ = 1;
return v___x_3530_;
}
else
{
uint8_t v___x_3531_; 
v___x_3531_ = 0;
return v___x_3531_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0___boxed(lean_object* v_k_3532_){
_start:
{
uint8_t v_res_3533_; lean_object* v_r_3534_; 
v_res_3533_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__0(v_k_3532_);
lean_dec(v_k_3532_);
v_r_3534_ = lean_box(v_res_3533_);
return v_r_3534_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34___redArg(lean_object* v_x_3535_, uint8_t v_when_3536_, lean_object* v___y_3537_, lean_object* v___y_3538_){
_start:
{
if (v_when_3536_ == 0)
{
lean_object* v___x_3540_; 
lean_inc(v___y_3538_);
lean_inc_ref(v___y_3537_);
v___x_3540_ = lean_apply_3(v_x_3535_, v___y_3537_, v___y_3538_, lean_box(0));
return v___x_3540_;
}
else
{
uint8_t v___x_3541_; lean_object* v___x_3542_; 
v___x_3541_ = 0;
v___x_3542_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(v_x_3535_, v___x_3541_, v___y_3537_, v___y_3538_);
return v___x_3542_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34___redArg___boxed(lean_object* v_x_3543_, lean_object* v_when_3544_, lean_object* v___y_3545_, lean_object* v___y_3546_, lean_object* v___y_3547_){
_start:
{
uint8_t v_when_boxed_3548_; lean_object* v_res_3549_; 
v_when_boxed_3548_ = lean_unbox(v_when_3544_);
v_res_3549_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34___redArg(v_x_3543_, v_when_boxed_3548_, v___y_3545_, v___y_3546_);
lean_dec(v___y_3546_);
lean_dec_ref(v___y_3545_);
return v_res_3549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22(lean_object* v_attrInstance_3551_, lean_object* v___y_3552_, lean_object* v___y_3553_){
_start:
{
lean_object* v___f_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___f_3561_; uint8_t v___x_3562_; lean_object* v___x_3563_; 
v___f_3555_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___closed__0));
v___x_3556_ = lean_box(0);
v___x_3557_ = l_Lean_instInhabitedEffectiveImport_default;
v___x_3558_ = lean_unsigned_to_nat(0u);
v___x_3559_ = l_Lean_Syntax_getArg(v_attrInstance_3551_, v___x_3558_);
v___x_3560_ = lean_alloc_closure((void*)(l_Lean_Elab_toAttributeKind___boxed), 3, 1);
lean_closure_set(v___x_3560_, 0, v___x_3559_);
v___f_3561_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___lam__1___boxed), 9, 6);
lean_closure_set(v___f_3561_, 0, v___x_3560_);
lean_closure_set(v___f_3561_, 1, v_attrInstance_3551_);
lean_closure_set(v___f_3561_, 2, v___f_3555_);
lean_closure_set(v___f_3561_, 3, v___x_3556_);
lean_closure_set(v___f_3561_, 4, v___x_3557_);
lean_closure_set(v___f_3561_, 5, v___x_3558_);
v___x_3562_ = 1;
v___x_3563_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34___redArg(v___f_3561_, v___x_3562_, v___y_3552_, v___y_3553_);
return v___x_3563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22___boxed(lean_object* v_attrInstance_3564_, lean_object* v___y_3565_, lean_object* v___y_3566_, lean_object* v___y_3567_){
_start:
{
lean_object* v_res_3568_; 
v_res_3568_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22(v_attrInstance_3564_, v___y_3565_, v___y_3566_);
lean_dec(v___y_3566_);
lean_dec_ref(v___y_3565_);
return v_res_3568_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__23(lean_object* v_as_3569_, size_t v_sz_3570_, size_t v_i_3571_, lean_object* v_b_3572_, lean_object* v___y_3573_, lean_object* v___y_3574_){
_start:
{
lean_object* v_snd_3577_; lean_object* v_a_3582_; uint8_t v___x_3594_; 
v___x_3594_ = lean_usize_dec_lt(v_i_3571_, v_sz_3570_);
if (v___x_3594_ == 0)
{
lean_object* v___x_3595_; 
v___x_3595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3595_, 0, v_b_3572_);
return v___x_3595_;
}
else
{
lean_object* v_a_3596_; lean_object* v___x_3597_; 
v_a_3596_ = lean_array_uget_borrowed(v_as_3569_, v_i_3571_);
v___x_3597_ = l_Lean_Elab_Command_getRef___redArg(v___y_3573_);
if (lean_obj_tag(v___x_3597_) == 0)
{
lean_object* v_a_3598_; lean_object* v_fileName_3599_; lean_object* v_fileMap_3600_; lean_object* v_currRecDepth_3601_; lean_object* v_cmdPos_3602_; lean_object* v_macroStack_3603_; lean_object* v_quotContext_x3f_3604_; lean_object* v_currMacroScope_3605_; lean_object* v_snap_x3f_3606_; lean_object* v_cancelTk_x3f_3607_; uint8_t v_suppressElabErrors_3608_; lean_object* v_ref_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; 
v_a_3598_ = lean_ctor_get(v___x_3597_, 0);
lean_inc(v_a_3598_);
lean_dec_ref_known(v___x_3597_, 1);
v_fileName_3599_ = lean_ctor_get(v___y_3573_, 0);
v_fileMap_3600_ = lean_ctor_get(v___y_3573_, 1);
v_currRecDepth_3601_ = lean_ctor_get(v___y_3573_, 2);
v_cmdPos_3602_ = lean_ctor_get(v___y_3573_, 3);
v_macroStack_3603_ = lean_ctor_get(v___y_3573_, 4);
v_quotContext_x3f_3604_ = lean_ctor_get(v___y_3573_, 5);
v_currMacroScope_3605_ = lean_ctor_get(v___y_3573_, 6);
v_snap_x3f_3606_ = lean_ctor_get(v___y_3573_, 8);
v_cancelTk_x3f_3607_ = lean_ctor_get(v___y_3573_, 9);
v_suppressElabErrors_3608_ = lean_ctor_get_uint8(v___y_3573_, sizeof(void*)*10);
v_ref_3609_ = l_Lean_replaceRef(v_a_3596_, v_a_3598_);
lean_dec(v_a_3598_);
lean_inc(v_cancelTk_x3f_3607_);
lean_inc(v_snap_x3f_3606_);
lean_inc(v_currMacroScope_3605_);
lean_inc(v_quotContext_x3f_3604_);
lean_inc(v_macroStack_3603_);
lean_inc(v_cmdPos_3602_);
lean_inc(v_currRecDepth_3601_);
lean_inc_ref(v_fileMap_3600_);
lean_inc_ref(v_fileName_3599_);
v___x_3610_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_3610_, 0, v_fileName_3599_);
lean_ctor_set(v___x_3610_, 1, v_fileMap_3600_);
lean_ctor_set(v___x_3610_, 2, v_currRecDepth_3601_);
lean_ctor_set(v___x_3610_, 3, v_cmdPos_3602_);
lean_ctor_set(v___x_3610_, 4, v_macroStack_3603_);
lean_ctor_set(v___x_3610_, 5, v_quotContext_x3f_3604_);
lean_ctor_set(v___x_3610_, 6, v_currMacroScope_3605_);
lean_ctor_set(v___x_3610_, 7, v_ref_3609_);
lean_ctor_set(v___x_3610_, 8, v_snap_x3f_3606_);
lean_ctor_set(v___x_3610_, 9, v_cancelTk_x3f_3607_);
lean_ctor_set_uint8(v___x_3610_, sizeof(void*)*10, v_suppressElabErrors_3608_);
lean_inc(v_a_3596_);
v___x_3611_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22(v_a_3596_, v___x_3610_, v___y_3574_);
lean_dec_ref_known(v___x_3610_, 10);
if (lean_obj_tag(v___x_3611_) == 0)
{
lean_object* v_a_3612_; lean_object* v___x_3613_; 
v_a_3612_ = lean_ctor_get(v___x_3611_, 0);
lean_inc(v_a_3612_);
lean_dec_ref_known(v___x_3611_, 1);
v___x_3613_ = lean_array_push(v_b_3572_, v_a_3612_);
v_snd_3577_ = v___x_3613_;
goto v___jp_3576_;
}
else
{
lean_object* v_a_3614_; 
v_a_3614_ = lean_ctor_get(v___x_3611_, 0);
lean_inc(v_a_3614_);
lean_dec_ref_known(v___x_3611_, 1);
v_a_3582_ = v_a_3614_;
goto v___jp_3581_;
}
}
else
{
lean_object* v_a_3615_; 
v_a_3615_ = lean_ctor_get(v___x_3597_, 0);
lean_inc(v_a_3615_);
lean_dec_ref_known(v___x_3597_, 1);
v_a_3582_ = v_a_3615_;
goto v___jp_3581_;
}
}
v___jp_3576_:
{
size_t v___x_3578_; size_t v___x_3579_; 
v___x_3578_ = ((size_t)1ULL);
v___x_3579_ = lean_usize_add(v_i_3571_, v___x_3578_);
v_i_3571_ = v___x_3579_;
v_b_3572_ = v_snd_3577_;
goto _start;
}
v___jp_3581_:
{
uint8_t v___x_3583_; 
v___x_3583_ = l_Lean_Exception_isInterrupt(v_a_3582_);
if (v___x_3583_ == 0)
{
lean_object* v___x_3584_; 
v___x_3584_ = l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__21(v_a_3582_, v___y_3573_, v___y_3574_);
if (lean_obj_tag(v___x_3584_) == 0)
{
lean_dec_ref_known(v___x_3584_, 1);
v_snd_3577_ = v_b_3572_;
goto v___jp_3576_;
}
else
{
lean_object* v_a_3585_; lean_object* v___x_3587_; uint8_t v_isShared_3588_; uint8_t v_isSharedCheck_3592_; 
lean_dec_ref(v_b_3572_);
v_a_3585_ = lean_ctor_get(v___x_3584_, 0);
v_isSharedCheck_3592_ = !lean_is_exclusive(v___x_3584_);
if (v_isSharedCheck_3592_ == 0)
{
v___x_3587_ = v___x_3584_;
v_isShared_3588_ = v_isSharedCheck_3592_;
goto v_resetjp_3586_;
}
else
{
lean_inc(v_a_3585_);
lean_dec(v___x_3584_);
v___x_3587_ = lean_box(0);
v_isShared_3588_ = v_isSharedCheck_3592_;
goto v_resetjp_3586_;
}
v_resetjp_3586_:
{
lean_object* v___x_3590_; 
if (v_isShared_3588_ == 0)
{
v___x_3590_ = v___x_3587_;
goto v_reusejp_3589_;
}
else
{
lean_object* v_reuseFailAlloc_3591_; 
v_reuseFailAlloc_3591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3591_, 0, v_a_3585_);
v___x_3590_ = v_reuseFailAlloc_3591_;
goto v_reusejp_3589_;
}
v_reusejp_3589_:
{
return v___x_3590_;
}
}
}
}
else
{
lean_object* v___x_3593_; 
lean_dec_ref(v_b_3572_);
v___x_3593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3593_, 0, v_a_3582_);
return v___x_3593_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__23___boxed(lean_object* v_as_3616_, lean_object* v_sz_3617_, lean_object* v_i_3618_, lean_object* v_b_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_, lean_object* v___y_3622_){
_start:
{
size_t v_sz_boxed_3623_; size_t v_i_boxed_3624_; lean_object* v_res_3625_; 
v_sz_boxed_3623_ = lean_unbox_usize(v_sz_3617_);
lean_dec(v_sz_3617_);
v_i_boxed_3624_ = lean_unbox_usize(v_i_3618_);
lean_dec(v_i_3618_);
v_res_3625_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__23(v_as_3616_, v_sz_boxed_3623_, v_i_boxed_3624_, v_b_3619_, v___y_3620_, v___y_3621_);
lean_dec(v___y_3621_);
lean_dec_ref(v___y_3620_);
lean_dec_ref(v_as_3616_);
return v_res_3625_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7(lean_object* v_attrInstances_3628_, lean_object* v___y_3629_, lean_object* v___y_3630_){
_start:
{
lean_object* v_attrs_3632_; size_t v_sz_3633_; size_t v___x_3634_; lean_object* v___x_3635_; 
v_attrs_3632_ = ((lean_object*)(l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7___closed__0));
v_sz_3633_ = lean_array_size(v_attrInstances_3628_);
v___x_3634_ = ((size_t)0ULL);
v___x_3635_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__23(v_attrInstances_3628_, v_sz_3633_, v___x_3634_, v_attrs_3632_, v___y_3629_, v___y_3630_);
return v___x_3635_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7___boxed(lean_object* v_attrInstances_3636_, lean_object* v___y_3637_, lean_object* v___y_3638_, lean_object* v___y_3639_){
_start:
{
lean_object* v_res_3640_; 
v_res_3640_ = l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7(v_attrInstances_3636_, v___y_3637_, v___y_3638_);
lean_dec(v___y_3638_);
lean_dec_ref(v___y_3637_);
lean_dec_ref(v_attrInstances_3636_);
return v_res_3640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2(lean_object* v_stx_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_){
_start:
{
lean_object* v___x_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; 
v___x_3645_ = lean_unsigned_to_nat(1u);
v___x_3646_ = l_Lean_Syntax_getArg(v_stx_3641_, v___x_3645_);
v___x_3647_ = l_Lean_Syntax_getSepArgs(v___x_3646_);
lean_dec(v___x_3646_);
v___x_3648_ = l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7(v___x_3647_, v___y_3642_, v___y_3643_);
lean_dec_ref(v___x_3647_);
return v___x_3648_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2___boxed(lean_object* v_stx_3649_, lean_object* v___y_3650_, lean_object* v___y_3651_, lean_object* v___y_3652_){
_start:
{
lean_object* v_res_3653_; 
v_res_3653_ = l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2(v_stx_3649_, v___y_3650_, v___y_3651_);
lean_dec(v___y_3651_);
lean_dec_ref(v___y_3650_);
lean_dec(v_stx_3649_);
return v_res_3653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1(lean_object* v_stx_3665_, lean_object* v___y_3666_, lean_object* v___y_3667_){
_start:
{
lean_object* v___y_3670_; uint8_t v___y_3671_; uint8_t v___y_3672_; uint8_t v___y_3673_; lean_object* v___y_3674_; uint8_t v___y_3675_; uint8_t v___y_3676_; uint8_t v___y_3680_; lean_object* v___y_3681_; uint8_t v___y_3682_; uint8_t v___y_3683_; lean_object* v___y_3684_; uint8_t v___y_3685_; lean_object* v_attrs_3686_; lean_object* v___x_3690_; lean_object* v_docCommentStx_3691_; lean_object* v___x_3692_; lean_object* v_attrsStx_3693_; uint8_t v___y_3695_; uint8_t v___y_3696_; uint8_t v___y_3697_; lean_object* v___y_3698_; lean_object* v___y_3699_; uint8_t v___y_3700_; lean_object* v___x_3714_; lean_object* v_visibilityStx_3715_; lean_object* v___x_3716_; lean_object* v_protectedStx_3717_; uint8_t v___y_3719_; lean_object* v___y_3720_; uint8_t v___y_3721_; lean_object* v___y_3722_; lean_object* v___y_3723_; uint8_t v___y_3740_; uint8_t v___y_3741_; lean_object* v___y_3742_; lean_object* v___y_3743_; uint8_t v___y_3755_; lean_object* v___y_3756_; uint8_t v___y_3757_; uint8_t v___y_3769_; lean_object* v___x_3782_; lean_object* v___x_3783_; uint8_t v___x_3784_; 
v___x_3690_ = lean_unsigned_to_nat(0u);
v_docCommentStx_3691_ = l_Lean_Syntax_getArg(v_stx_3665_, v___x_3690_);
v___x_3692_ = lean_unsigned_to_nat(1u);
v_attrsStx_3693_ = l_Lean_Syntax_getArg(v_stx_3665_, v___x_3692_);
v___x_3714_ = lean_unsigned_to_nat(2u);
v_visibilityStx_3715_ = l_Lean_Syntax_getArg(v_stx_3665_, v___x_3714_);
v___x_3716_ = lean_unsigned_to_nat(3u);
v_protectedStx_3717_ = l_Lean_Syntax_getArg(v_stx_3665_, v___x_3716_);
v___x_3782_ = lean_unsigned_to_nat(4u);
v___x_3783_ = l_Lean_Syntax_getArg(v_stx_3665_, v___x_3782_);
v___x_3784_ = l_Lean_Syntax_isNone(v___x_3783_);
if (v___x_3784_ == 0)
{
lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; uint8_t v___x_3788_; 
v___x_3785_ = l_Lean_Syntax_getArg(v___x_3783_, v___x_3690_);
lean_dec(v___x_3783_);
v___x_3786_ = l_Lean_Syntax_getKind(v___x_3785_);
v___x_3787_ = ((lean_object*)(l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__2));
v___x_3788_ = lean_name_eq(v___x_3786_, v___x_3787_);
lean_dec(v___x_3786_);
if (v___x_3788_ == 0)
{
uint8_t v___x_3789_; 
v___x_3789_ = 2;
v___y_3769_ = v___x_3789_;
goto v___jp_3768_;
}
else
{
uint8_t v___x_3790_; 
v___x_3790_ = 1;
v___y_3769_ = v___x_3790_;
goto v___jp_3768_;
}
}
else
{
uint8_t v___x_3791_; 
lean_dec(v___x_3783_);
v___x_3791_ = 0;
v___y_3769_ = v___x_3791_;
goto v___jp_3768_;
}
v___jp_3669_:
{
lean_object* v___x_3677_; lean_object* v___x_3678_; 
v___x_3677_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_3677_, 0, v_stx_3665_);
lean_ctor_set(v___x_3677_, 1, v___y_3674_);
lean_ctor_set(v___x_3677_, 2, v___y_3670_);
lean_ctor_set_uint8(v___x_3677_, sizeof(void*)*3, v___y_3673_);
lean_ctor_set_uint8(v___x_3677_, sizeof(void*)*3 + 1, v___y_3675_);
lean_ctor_set_uint8(v___x_3677_, sizeof(void*)*3 + 2, v___y_3672_);
lean_ctor_set_uint8(v___x_3677_, sizeof(void*)*3 + 3, v___y_3671_);
lean_ctor_set_uint8(v___x_3677_, sizeof(void*)*3 + 4, v___y_3676_);
v___x_3678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3678_, 0, v___x_3677_);
return v___x_3678_;
}
v___jp_3679_:
{
uint8_t v___x_3687_; 
v___x_3687_ = l_Lean_Syntax_isNone(v___y_3684_);
lean_dec(v___y_3684_);
if (v___x_3687_ == 0)
{
uint8_t v___x_3688_; 
v___x_3688_ = 1;
v___y_3670_ = v_attrs_3686_;
v___y_3671_ = v___y_3680_;
v___y_3672_ = v___y_3683_;
v___y_3673_ = v___y_3682_;
v___y_3674_ = v___y_3681_;
v___y_3675_ = v___y_3685_;
v___y_3676_ = v___x_3688_;
goto v___jp_3669_;
}
else
{
uint8_t v___x_3689_; 
v___x_3689_ = 0;
v___y_3670_ = v_attrs_3686_;
v___y_3671_ = v___y_3680_;
v___y_3672_ = v___y_3683_;
v___y_3673_ = v___y_3682_;
v___y_3674_ = v___y_3681_;
v___y_3675_ = v___y_3685_;
v___y_3676_ = v___x_3689_;
goto v___jp_3669_;
}
}
v___jp_3694_:
{
lean_object* v___x_3701_; 
v___x_3701_ = l_Lean_Syntax_getOptional_x3f(v_attrsStx_3693_);
lean_dec(v_attrsStx_3693_);
if (lean_obj_tag(v___x_3701_) == 0)
{
lean_object* v___x_3702_; 
v___x_3702_ = ((lean_object*)(l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7___closed__0));
v___y_3680_ = v___y_3695_;
v___y_3681_ = v___y_3698_;
v___y_3682_ = v___y_3697_;
v___y_3683_ = v___y_3696_;
v___y_3684_ = v___y_3699_;
v___y_3685_ = v___y_3700_;
v_attrs_3686_ = v___x_3702_;
goto v___jp_3679_;
}
else
{
lean_object* v_val_3703_; lean_object* v___x_3704_; 
v_val_3703_ = lean_ctor_get(v___x_3701_, 0);
lean_inc(v_val_3703_);
lean_dec_ref_known(v___x_3701_, 1);
v___x_3704_ = l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2(v_val_3703_, v___y_3666_, v___y_3667_);
lean_dec(v_val_3703_);
if (lean_obj_tag(v___x_3704_) == 0)
{
lean_object* v_a_3705_; 
v_a_3705_ = lean_ctor_get(v___x_3704_, 0);
lean_inc(v_a_3705_);
lean_dec_ref_known(v___x_3704_, 1);
v___y_3680_ = v___y_3695_;
v___y_3681_ = v___y_3698_;
v___y_3682_ = v___y_3697_;
v___y_3683_ = v___y_3696_;
v___y_3684_ = v___y_3699_;
v___y_3685_ = v___y_3700_;
v_attrs_3686_ = v_a_3705_;
goto v___jp_3679_;
}
else
{
lean_object* v_a_3706_; lean_object* v___x_3708_; uint8_t v_isShared_3709_; uint8_t v_isSharedCheck_3713_; 
lean_dec(v___y_3699_);
lean_dec(v___y_3698_);
lean_dec(v_stx_3665_);
v_a_3706_ = lean_ctor_get(v___x_3704_, 0);
v_isSharedCheck_3713_ = !lean_is_exclusive(v___x_3704_);
if (v_isSharedCheck_3713_ == 0)
{
v___x_3708_ = v___x_3704_;
v_isShared_3709_ = v_isSharedCheck_3713_;
goto v_resetjp_3707_;
}
else
{
lean_inc(v_a_3706_);
lean_dec(v___x_3704_);
v___x_3708_ = lean_box(0);
v_isShared_3709_ = v_isSharedCheck_3713_;
goto v_resetjp_3707_;
}
v_resetjp_3707_:
{
lean_object* v___x_3711_; 
if (v_isShared_3709_ == 0)
{
v___x_3711_ = v___x_3708_;
goto v_reusejp_3710_;
}
else
{
lean_object* v_reuseFailAlloc_3712_; 
v_reuseFailAlloc_3712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3712_, 0, v_a_3706_);
v___x_3711_ = v_reuseFailAlloc_3712_;
goto v_reusejp_3710_;
}
v_reusejp_3710_:
{
return v___x_3711_;
}
}
}
}
}
v___jp_3718_:
{
lean_object* v___x_3724_; 
v___x_3724_ = l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1(v___y_3723_, v___y_3666_, v___y_3667_);
if (lean_obj_tag(v___x_3724_) == 0)
{
lean_object* v_a_3725_; uint8_t v___x_3726_; 
v_a_3725_ = lean_ctor_get(v___x_3724_, 0);
lean_inc(v_a_3725_);
lean_dec_ref_known(v___x_3724_, 1);
v___x_3726_ = l_Lean_Syntax_isNone(v_protectedStx_3717_);
lean_dec(v_protectedStx_3717_);
if (v___x_3726_ == 0)
{
uint8_t v___x_3727_; uint8_t v___x_3728_; 
v___x_3727_ = 1;
v___x_3728_ = lean_unbox(v_a_3725_);
lean_dec(v_a_3725_);
v___y_3695_ = v___y_3719_;
v___y_3696_ = v___y_3721_;
v___y_3697_ = v___x_3728_;
v___y_3698_ = v___y_3720_;
v___y_3699_ = v___y_3722_;
v___y_3700_ = v___x_3727_;
goto v___jp_3694_;
}
else
{
uint8_t v___x_3729_; uint8_t v___x_3730_; 
v___x_3729_ = 0;
v___x_3730_ = lean_unbox(v_a_3725_);
lean_dec(v_a_3725_);
v___y_3695_ = v___y_3719_;
v___y_3696_ = v___y_3721_;
v___y_3697_ = v___x_3730_;
v___y_3698_ = v___y_3720_;
v___y_3699_ = v___y_3722_;
v___y_3700_ = v___x_3729_;
goto v___jp_3694_;
}
}
else
{
lean_object* v_a_3731_; lean_object* v___x_3733_; uint8_t v_isShared_3734_; uint8_t v_isSharedCheck_3738_; 
lean_dec(v___y_3722_);
lean_dec(v___y_3720_);
lean_dec(v_protectedStx_3717_);
lean_dec(v_attrsStx_3693_);
lean_dec(v_stx_3665_);
v_a_3731_ = lean_ctor_get(v___x_3724_, 0);
v_isSharedCheck_3738_ = !lean_is_exclusive(v___x_3724_);
if (v_isSharedCheck_3738_ == 0)
{
v___x_3733_ = v___x_3724_;
v_isShared_3734_ = v_isSharedCheck_3738_;
goto v_resetjp_3732_;
}
else
{
lean_inc(v_a_3731_);
lean_dec(v___x_3724_);
v___x_3733_ = lean_box(0);
v_isShared_3734_ = v_isSharedCheck_3738_;
goto v_resetjp_3732_;
}
v_resetjp_3732_:
{
lean_object* v___x_3736_; 
if (v_isShared_3734_ == 0)
{
v___x_3736_ = v___x_3733_;
goto v_reusejp_3735_;
}
else
{
lean_object* v_reuseFailAlloc_3737_; 
v_reuseFailAlloc_3737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3737_, 0, v_a_3731_);
v___x_3736_ = v_reuseFailAlloc_3737_;
goto v_reusejp_3735_;
}
v_reusejp_3735_:
{
return v___x_3736_;
}
}
}
}
v___jp_3739_:
{
lean_object* v___x_3744_; 
v___x_3744_ = l_Lean_Syntax_getOptional_x3f(v_visibilityStx_3715_);
lean_dec(v_visibilityStx_3715_);
if (lean_obj_tag(v___x_3744_) == 0)
{
lean_object* v___x_3745_; 
v___x_3745_ = lean_box(0);
v___y_3719_ = v___y_3740_;
v___y_3720_ = v___y_3743_;
v___y_3721_ = v___y_3741_;
v___y_3722_ = v___y_3742_;
v___y_3723_ = v___x_3745_;
goto v___jp_3718_;
}
else
{
lean_object* v_val_3746_; lean_object* v___x_3748_; uint8_t v_isShared_3749_; uint8_t v_isSharedCheck_3753_; 
v_val_3746_ = lean_ctor_get(v___x_3744_, 0);
v_isSharedCheck_3753_ = !lean_is_exclusive(v___x_3744_);
if (v_isSharedCheck_3753_ == 0)
{
v___x_3748_ = v___x_3744_;
v_isShared_3749_ = v_isSharedCheck_3753_;
goto v_resetjp_3747_;
}
else
{
lean_inc(v_val_3746_);
lean_dec(v___x_3744_);
v___x_3748_ = lean_box(0);
v_isShared_3749_ = v_isSharedCheck_3753_;
goto v_resetjp_3747_;
}
v_resetjp_3747_:
{
lean_object* v___x_3751_; 
if (v_isShared_3749_ == 0)
{
v___x_3751_ = v___x_3748_;
goto v_reusejp_3750_;
}
else
{
lean_object* v_reuseFailAlloc_3752_; 
v_reuseFailAlloc_3752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3752_, 0, v_val_3746_);
v___x_3751_ = v_reuseFailAlloc_3752_;
goto v_reusejp_3750_;
}
v_reusejp_3750_:
{
v___y_3719_ = v___y_3740_;
v___y_3720_ = v___y_3743_;
v___y_3721_ = v___y_3741_;
v___y_3722_ = v___y_3742_;
v___y_3723_ = v___x_3751_;
goto v___jp_3718_;
}
}
}
}
v___jp_3754_:
{
lean_object* v___x_3758_; 
v___x_3758_ = l_Lean_Syntax_getOptional_x3f(v_docCommentStx_3691_);
lean_dec(v_docCommentStx_3691_);
if (lean_obj_tag(v___x_3758_) == 0)
{
lean_object* v___x_3759_; 
v___x_3759_ = lean_box(0);
v___y_3740_ = v___y_3757_;
v___y_3741_ = v___y_3755_;
v___y_3742_ = v___y_3756_;
v___y_3743_ = v___x_3759_;
goto v___jp_3739_;
}
else
{
lean_object* v_val_3760_; lean_object* v___x_3762_; uint8_t v_isShared_3763_; uint8_t v_isSharedCheck_3767_; 
v_val_3760_ = lean_ctor_get(v___x_3758_, 0);
v_isSharedCheck_3767_ = !lean_is_exclusive(v___x_3758_);
if (v_isSharedCheck_3767_ == 0)
{
v___x_3762_ = v___x_3758_;
v_isShared_3763_ = v_isSharedCheck_3767_;
goto v_resetjp_3761_;
}
else
{
lean_inc(v_val_3760_);
lean_dec(v___x_3758_);
v___x_3762_ = lean_box(0);
v_isShared_3763_ = v_isSharedCheck_3767_;
goto v_resetjp_3761_;
}
v_resetjp_3761_:
{
lean_object* v___x_3765_; 
if (v_isShared_3763_ == 0)
{
v___x_3765_ = v___x_3762_;
goto v_reusejp_3764_;
}
else
{
lean_object* v_reuseFailAlloc_3766_; 
v_reuseFailAlloc_3766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3766_, 0, v_val_3760_);
v___x_3765_ = v_reuseFailAlloc_3766_;
goto v_reusejp_3764_;
}
v_reusejp_3764_:
{
v___y_3740_ = v___y_3757_;
v___y_3741_ = v___y_3755_;
v___y_3742_ = v___y_3756_;
v___y_3743_ = v___x_3765_;
goto v___jp_3739_;
}
}
}
}
v___jp_3768_:
{
lean_object* v___x_3770_; lean_object* v_unsafeStx_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; uint8_t v___x_3774_; 
v___x_3770_ = lean_unsigned_to_nat(5u);
v_unsafeStx_3771_ = l_Lean_Syntax_getArg(v_stx_3665_, v___x_3770_);
v___x_3772_ = lean_unsigned_to_nat(6u);
v___x_3773_ = l_Lean_Syntax_getArg(v_stx_3665_, v___x_3772_);
v___x_3774_ = l_Lean_Syntax_isNone(v___x_3773_);
if (v___x_3774_ == 0)
{
lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; uint8_t v___x_3778_; 
v___x_3775_ = l_Lean_Syntax_getArg(v___x_3773_, v___x_3690_);
lean_dec(v___x_3773_);
v___x_3776_ = l_Lean_Syntax_getKind(v___x_3775_);
v___x_3777_ = ((lean_object*)(l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___closed__1));
v___x_3778_ = lean_name_eq(v___x_3776_, v___x_3777_);
lean_dec(v___x_3776_);
if (v___x_3778_ == 0)
{
uint8_t v___x_3779_; 
v___x_3779_ = 1;
v___y_3755_ = v___y_3769_;
v___y_3756_ = v_unsafeStx_3771_;
v___y_3757_ = v___x_3779_;
goto v___jp_3754_;
}
else
{
uint8_t v___x_3780_; 
v___x_3780_ = 0;
v___y_3755_ = v___y_3769_;
v___y_3756_ = v_unsafeStx_3771_;
v___y_3757_ = v___x_3780_;
goto v___jp_3754_;
}
}
else
{
uint8_t v___x_3781_; 
lean_dec(v___x_3773_);
v___x_3781_ = 2;
v___y_3755_ = v___y_3769_;
v___y_3756_ = v_unsafeStx_3771_;
v___y_3757_ = v___x_3781_;
goto v___jp_3754_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1___boxed(lean_object* v_stx_3792_, lean_object* v___y_3793_, lean_object* v___y_3794_, lean_object* v___y_3795_){
_start:
{
lean_object* v_res_3796_; 
v_res_3796_ = l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1(v_stx_3792_, v___y_3793_, v___y_3794_);
lean_dec(v___y_3794_);
lean_dec_ref(v___y_3793_);
return v_res_3796_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__1(lean_object* v_mods_3797_, lean_object* v___x_3798_, lean_object* v_projId_3799_, lean_object* v___x_3800_, lean_object* v___x_3801_, lean_object* v___x_3802_, lean_object* v_params_3803_, lean_object* v___x_3804_, lean_object* v___x_3805_, lean_object* v___y_3806_, lean_object* v___y_3807_){
_start:
{
lean_object* v___x_3809_; 
lean_inc(v_mods_3797_);
v___x_3809_ = l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1(v_mods_3797_, v___y_3806_, v___y_3807_);
if (lean_obj_tag(v___x_3809_) == 0)
{
lean_object* v_a_3810_; lean_object* v___f_3811_; lean_object* v___x_3812_; lean_object* v_env_3813_; uint8_t v___x_3814_; lean_object* v___x_3815_; 
v_a_3810_ = lean_ctor_get(v___x_3809_, 0);
lean_inc_n(v_a_3810_, 2);
lean_dec_ref_known(v___x_3809_, 1);
v___f_3811_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___lam__0___boxed), 13, 10);
lean_closure_set(v___f_3811_, 0, v___x_3798_);
lean_closure_set(v___f_3811_, 1, v_a_3810_);
lean_closure_set(v___f_3811_, 2, v_projId_3799_);
lean_closure_set(v___f_3811_, 3, v___x_3800_);
lean_closure_set(v___f_3811_, 4, v___x_3801_);
lean_closure_set(v___f_3811_, 5, v___x_3802_);
lean_closure_set(v___f_3811_, 6, v_params_3803_);
lean_closure_set(v___f_3811_, 7, v___x_3804_);
lean_closure_set(v___f_3811_, 8, v_mods_3797_);
lean_closure_set(v___f_3811_, 9, v___x_3805_);
v___x_3812_ = lean_st_ref_get(v___y_3807_);
v_env_3813_ = lean_ctor_get(v___x_3812_, 0);
lean_inc_ref(v_env_3813_);
lean_dec(v___x_3812_);
v___x_3814_ = l_Lean_Elab_Modifiers_isInferredPublic(v_env_3813_, v_a_3810_);
lean_dec(v_a_3810_);
lean_dec_ref(v_env_3813_);
v___x_3815_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(v___f_3811_, v___x_3814_, v___y_3806_, v___y_3807_);
return v___x_3815_;
}
else
{
lean_object* v_a_3816_; lean_object* v___x_3818_; uint8_t v_isShared_3819_; uint8_t v_isSharedCheck_3823_; 
lean_dec(v___x_3805_);
lean_dec(v___x_3804_);
lean_dec_ref(v_params_3803_);
lean_dec_ref(v___x_3802_);
lean_dec_ref(v___x_3801_);
lean_dec_ref(v___x_3800_);
lean_dec(v_projId_3799_);
lean_dec(v___x_3798_);
lean_dec(v_mods_3797_);
v_a_3816_ = lean_ctor_get(v___x_3809_, 0);
v_isSharedCheck_3823_ = !lean_is_exclusive(v___x_3809_);
if (v_isSharedCheck_3823_ == 0)
{
v___x_3818_ = v___x_3809_;
v_isShared_3819_ = v_isSharedCheck_3823_;
goto v_resetjp_3817_;
}
else
{
lean_inc(v_a_3816_);
lean_dec(v___x_3809_);
v___x_3818_ = lean_box(0);
v_isShared_3819_ = v_isSharedCheck_3823_;
goto v_resetjp_3817_;
}
v_resetjp_3817_:
{
lean_object* v___x_3821_; 
if (v_isShared_3819_ == 0)
{
v___x_3821_ = v___x_3818_;
goto v_reusejp_3820_;
}
else
{
lean_object* v_reuseFailAlloc_3822_; 
v_reuseFailAlloc_3822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3822_, 0, v_a_3816_);
v___x_3821_ = v_reuseFailAlloc_3822_;
goto v_reusejp_3820_;
}
v_reusejp_3820_:
{
return v___x_3821_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__1___boxed(lean_object* v_mods_3824_, lean_object* v___x_3825_, lean_object* v_projId_3826_, lean_object* v___x_3827_, lean_object* v___x_3828_, lean_object* v___x_3829_, lean_object* v_params_3830_, lean_object* v___x_3831_, lean_object* v___x_3832_, lean_object* v___y_3833_, lean_object* v___y_3834_, lean_object* v___y_3835_){
_start:
{
lean_object* v_res_3836_; 
v_res_3836_ = l_Lean_Elab_Command_elabNewtype___lam__1(v_mods_3824_, v___x_3825_, v_projId_3826_, v___x_3827_, v___x_3828_, v___x_3829_, v_params_3830_, v___x_3831_, v___x_3832_, v___y_3833_, v___y_3834_);
lean_dec(v___y_3834_);
lean_dec_ref(v___y_3833_);
return v_res_3836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype(lean_object* v_x_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_){
_start:
{
lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; uint8_t v___x_3860_; 
v___x_3856_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__5));
v___x_3857_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__6));
v___x_3858_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1___closed__7));
v___x_3859_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___closed__1));
lean_inc(v_x_3852_);
v___x_3860_ = l_Lean_Syntax_isOfKind(v_x_3852_, v___x_3859_);
if (v___x_3860_ == 0)
{
lean_object* v___x_3861_; 
lean_dec(v_x_3852_);
v___x_3861_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg();
return v___x_3861_;
}
else
{
lean_object* v___x_3862_; lean_object* v_mods_3863_; lean_object* v___x_3864_; uint8_t v___x_3865_; 
v___x_3862_ = lean_unsigned_to_nat(0u);
v_mods_3863_ = l_Lean_Syntax_getArg(v_x_3852_, v___x_3862_);
v___x_3864_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___closed__3));
lean_inc(v_mods_3863_);
v___x_3865_ = l_Lean_Syntax_isOfKind(v_mods_3863_, v___x_3864_);
if (v___x_3865_ == 0)
{
lean_object* v___x_3866_; 
lean_dec(v_mods_3863_);
lean_dec(v_x_3852_);
v___x_3866_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg();
return v___x_3866_;
}
else
{
lean_object* v___x_3867_; lean_object* v_projId_3868_; lean_object* v___x_3869_; uint8_t v___x_3870_; 
v___x_3867_ = lean_unsigned_to_nat(7u);
v_projId_3868_ = l_Lean_Syntax_getArg(v_x_3852_, v___x_3867_);
v___x_3869_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___closed__5));
lean_inc(v_projId_3868_);
v___x_3870_ = l_Lean_Syntax_isOfKind(v_projId_3868_, v___x_3869_);
if (v___x_3870_ == 0)
{
lean_object* v___x_3871_; 
lean_dec(v_projId_3868_);
lean_dec(v_mods_3863_);
lean_dec(v_x_3852_);
v___x_3871_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNewtype_spec__0___redArg();
return v___x_3871_;
}
else
{
lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v_params_3879_; lean_object* v___f_3880_; lean_object* v___x_3881_; 
v___x_3872_ = lean_unsigned_to_nat(2u);
v___x_3873_ = l_Lean_Syntax_getArg(v_x_3852_, v___x_3872_);
v___x_3874_ = lean_unsigned_to_nat(3u);
v___x_3875_ = l_Lean_Syntax_getArg(v_x_3852_, v___x_3874_);
v___x_3876_ = lean_unsigned_to_nat(5u);
v___x_3877_ = l_Lean_Syntax_getArg(v_x_3852_, v___x_3876_);
lean_dec(v_x_3852_);
v___x_3878_ = lean_box(0);
v_params_3879_ = l_Lean_Syntax_getArgs(v___x_3875_);
lean_dec(v___x_3875_);
v___f_3880_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___lam__1___boxed), 12, 9);
lean_closure_set(v___f_3880_, 0, v_mods_3863_);
lean_closure_set(v___f_3880_, 1, v___x_3873_);
lean_closure_set(v___f_3880_, 2, v_projId_3868_);
lean_closure_set(v___f_3880_, 3, v___x_3856_);
lean_closure_set(v___f_3880_, 4, v___x_3857_);
lean_closure_set(v___f_3880_, 5, v___x_3858_);
lean_closure_set(v___f_3880_, 6, v_params_3879_);
lean_closure_set(v___f_3880_, 7, v___x_3877_);
lean_closure_set(v___f_3880_, 8, v___x_3878_);
v___x_3881_ = l_Lean_Elab_Command_getScope___redArg(v___y_3854_);
if (lean_obj_tag(v___x_3881_) == 0)
{
lean_object* v_a_3882_; uint8_t v_isPublic_3883_; lean_object* v___x_3884_; 
v_a_3882_ = lean_ctor_get(v___x_3881_, 0);
lean_inc(v_a_3882_);
lean_dec_ref_known(v___x_3881_, 1);
v_isPublic_3883_ = lean_ctor_get_uint8(v_a_3882_, sizeof(void*)*10 + 1);
lean_dec(v_a_3882_);
v___x_3884_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(v___f_3880_, v_isPublic_3883_, v___y_3853_, v___y_3854_);
return v___x_3884_;
}
else
{
lean_object* v_a_3885_; lean_object* v___x_3887_; uint8_t v_isShared_3888_; uint8_t v_isSharedCheck_3892_; 
lean_dec_ref(v___f_3880_);
v_a_3885_ = lean_ctor_get(v___x_3881_, 0);
v_isSharedCheck_3892_ = !lean_is_exclusive(v___x_3881_);
if (v_isSharedCheck_3892_ == 0)
{
v___x_3887_ = v___x_3881_;
v_isShared_3888_ = v_isSharedCheck_3892_;
goto v_resetjp_3886_;
}
else
{
lean_inc(v_a_3885_);
lean_dec(v___x_3881_);
v___x_3887_ = lean_box(0);
v_isShared_3888_ = v_isSharedCheck_3892_;
goto v_resetjp_3886_;
}
v_resetjp_3886_:
{
lean_object* v___x_3890_; 
if (v_isShared_3888_ == 0)
{
v___x_3890_ = v___x_3887_;
goto v_reusejp_3889_;
}
else
{
lean_object* v_reuseFailAlloc_3891_; 
v_reuseFailAlloc_3891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3891_, 0, v_a_3885_);
v___x_3890_ = v_reuseFailAlloc_3891_;
goto v_reusejp_3889_;
}
v_reusejp_3889_:
{
return v___x_3890_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___boxed(lean_object* v_x_3893_, lean_object* v___y_3894_, lean_object* v___y_3895_, lean_object* v___y_3896_){
_start:
{
lean_object* v_res_3897_; 
v_res_3897_ = l_Lean_Elab_Command_elabNewtype(v_x_3893_, v___y_3894_, v___y_3895_);
lean_dec(v___y_3895_);
lean_dec_ref(v___y_3894_);
return v_res_3897_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6(lean_object* v_stx_3898_, lean_object* v___y_3899_, lean_object* v___y_3900_){
_start:
{
lean_object* v___x_3902_; 
v___x_3902_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___redArg(v_stx_3898_, v___y_3899_);
return v___x_3902_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6___boxed(lean_object* v_stx_3903_, lean_object* v___y_3904_, lean_object* v___y_3905_, lean_object* v___y_3906_){
_start:
{
lean_object* v_res_3907_; 
v_res_3907_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__6(v_stx_3903_, v___y_3904_, v___y_3905_);
lean_dec(v___y_3905_);
lean_dec_ref(v___y_3904_);
lean_dec(v_stx_3903_);
return v_res_3907_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7(lean_object* v_declName_3908_, lean_object* v_declRanges_3909_, lean_object* v___y_3910_, lean_object* v___y_3911_){
_start:
{
lean_object* v___x_3913_; 
v___x_3913_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7___redArg(v_declName_3908_, v_declRanges_3909_, v___y_3911_);
return v___x_3913_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7___boxed(lean_object* v_declName_3914_, lean_object* v_declRanges_3915_, lean_object* v___y_3916_, lean_object* v___y_3917_, lean_object* v___y_3918_){
_start:
{
lean_object* v_res_3919_; 
v_res_3919_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__7(v_declName_3914_, v_declRanges_3915_, v___y_3916_, v___y_3917_);
lean_dec(v___y_3917_);
lean_dec_ref(v___y_3916_);
return v_res_3919_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12(lean_object* v_declName_3920_, uint8_t v_s_3921_, lean_object* v___y_3922_, lean_object* v___y_3923_){
_start:
{
lean_object* v___x_3925_; 
v___x_3925_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12___redArg(v_declName_3920_, v_s_3921_, v___y_3923_);
return v___x_3925_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12___boxed(lean_object* v_declName_3926_, lean_object* v_s_3927_, lean_object* v___y_3928_, lean_object* v___y_3929_, lean_object* v___y_3930_){
_start:
{
uint8_t v_s_boxed_3931_; lean_object* v_res_3932_; 
v_s_boxed_3931_ = lean_unbox(v_s_3927_);
v_res_3932_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__12(v_declName_3926_, v_s_boxed_3931_, v___y_3928_, v___y_3929_);
lean_dec(v___y_3929_);
lean_dec_ref(v___y_3928_);
return v_res_3932_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7(lean_object* v_as_3933_, lean_object* v_as_x27_3934_, lean_object* v_b_3935_, lean_object* v_a_3936_, lean_object* v___y_3937_, lean_object* v___y_3938_){
_start:
{
lean_object* v___x_3940_; 
v___x_3940_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg(v_as_x27_3934_, v_b_3935_, v___y_3937_, v___y_3938_);
return v___x_3940_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___boxed(lean_object* v_as_3941_, lean_object* v_as_x27_3942_, lean_object* v_b_3943_, lean_object* v_a_3944_, lean_object* v___y_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_){
_start:
{
lean_object* v_res_3948_; 
v_res_3948_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7(v_as_3941_, v_as_x27_3942_, v_b_3943_, v_a_3944_, v___y_3945_, v___y_3946_);
lean_dec(v___y_3946_);
lean_dec_ref(v___y_3945_);
lean_dec(v_as_x27_3942_);
lean_dec(v_as_3941_);
return v_res_3948_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8(lean_object* v_as_3949_, lean_object* v_as_x27_3950_, lean_object* v_b_3951_, lean_object* v_a_3952_, lean_object* v___y_3953_, lean_object* v___y_3954_){
_start:
{
lean_object* v___x_3956_; 
v___x_3956_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___redArg(v_as_x27_3950_, v_b_3951_, v___y_3953_, v___y_3954_);
return v___x_3956_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___boxed(lean_object* v_as_3957_, lean_object* v_as_x27_3958_, lean_object* v_b_3959_, lean_object* v_a_3960_, lean_object* v___y_3961_, lean_object* v___y_3962_, lean_object* v___y_3963_){
_start:
{
lean_object* v_res_3964_; 
v_res_3964_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__8(v_as_3957_, v_as_x27_3958_, v_b_3959_, v_a_3960_, v___y_3961_, v___y_3962_);
lean_dec(v___y_3962_);
lean_dec_ref(v___y_3961_);
lean_dec(v_as_x27_3958_);
lean_dec(v_as_3957_);
return v_res_3964_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17(lean_object* v_t_3965_, lean_object* v___y_3966_, lean_object* v___y_3967_){
_start:
{
lean_object* v___x_3969_; 
v___x_3969_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17___redArg(v_t_3965_, v___y_3967_);
return v___x_3969_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17___boxed(lean_object* v_t_3970_, lean_object* v___y_3971_, lean_object* v___y_3972_, lean_object* v___y_3973_){
_start:
{
lean_object* v_res_3974_; 
v_res_3974_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__10_spec__17(v_t_3970_, v___y_3971_, v___y_3972_);
lean_dec(v___y_3972_);
lean_dec_ref(v___y_3971_);
return v_res_3974_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4(lean_object* v_00_u03b1_3975_, lean_object* v_ref_3976_, lean_object* v_msg_3977_, lean_object* v___y_3978_, lean_object* v___y_3979_){
_start:
{
lean_object* v___x_3981_; 
v___x_3981_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___redArg(v_ref_3976_, v_msg_3977_, v___y_3978_, v___y_3979_);
return v___x_3981_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4___boxed(lean_object* v_00_u03b1_3982_, lean_object* v_ref_3983_, lean_object* v_msg_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_){
_start:
{
lean_object* v_res_3988_; 
v_res_3988_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4(v_00_u03b1_3982_, v_ref_3983_, v_msg_3984_, v___y_3985_, v___y_3986_);
lean_dec(v___y_3986_);
lean_dec_ref(v___y_3985_);
lean_dec(v_ref_3983_);
return v_res_3988_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20(lean_object* v_msgData_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_){
_start:
{
lean_object* v___x_3993_; 
v___x_3993_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___redArg(v_msgData_3989_, v___y_3991_);
return v___x_3993_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20___boxed(lean_object* v_msgData_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_){
_start:
{
lean_object* v_res_3998_; 
v_res_3998_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__20(v_msgData_3994_, v___y_3995_, v___y_3996_);
lean_dec(v___y_3996_);
lean_dec_ref(v___y_3995_);
return v_res_3998_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15(lean_object* v_00_u03b1_3999_, lean_object* v_msg_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_){
_start:
{
lean_object* v___x_4004_; 
v___x_4004_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15___redArg(v_msg_4000_, v___y_4001_, v___y_4002_);
return v___x_4004_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15___boxed(lean_object* v_00_u03b1_4005_, lean_object* v_msg_4006_, lean_object* v___y_4007_, lean_object* v___y_4008_, lean_object* v___y_4009_){
_start:
{
lean_object* v_res_4010_; 
v_res_4010_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15(v_00_u03b1_4005_, v_msg_4006_, v___y_4007_, v___y_4008_);
lean_dec(v___y_4008_);
lean_dec_ref(v___y_4007_);
return v_res_4010_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24(lean_object* v_o_4011_, lean_object* v___y_4012_, lean_object* v___y_4013_){
_start:
{
lean_object* v___x_4015_; 
v___x_4015_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24___redArg(v_o_4011_, v___y_4013_);
return v___x_4015_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24___boxed(lean_object* v_o_4016_, lean_object* v___y_4017_, lean_object* v___y_4018_, lean_object* v___y_4019_){
_start:
{
lean_object* v_res_4020_; 
v_res_4020_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__5_spec__17_spec__24(v_o_4016_, v___y_4017_, v___y_4018_);
lean_dec(v___y_4018_);
lean_dec_ref(v___y_4017_);
return v_res_4020_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26(lean_object* v_00_u03b1_4021_, lean_object* v_constName_4022_, lean_object* v___y_4023_, lean_object* v___y_4024_){
_start:
{
lean_object* v___x_4026_; 
v___x_4026_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26___redArg(v_constName_4022_, v___y_4023_, v___y_4024_);
return v___x_4026_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26___boxed(lean_object* v_00_u03b1_4027_, lean_object* v_constName_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_, lean_object* v___y_4031_){
_start:
{
lean_object* v_res_4032_; 
v_res_4032_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26(v_00_u03b1_4027_, v_constName_4028_, v___y_4029_, v___y_4030_);
lean_dec(v___y_4030_);
lean_dec_ref(v___y_4029_);
return v_res_4032_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21(lean_object* v_msgData_4033_, lean_object* v_macroStack_4034_, lean_object* v___y_4035_, lean_object* v___y_4036_){
_start:
{
lean_object* v___x_4038_; 
v___x_4038_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21___redArg(v_msgData_4033_, v_macroStack_4034_, v___y_4036_);
return v___x_4038_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21___boxed(lean_object* v_msgData_4039_, lean_object* v_macroStack_4040_, lean_object* v___y_4041_, lean_object* v___y_4042_, lean_object* v___y_4043_){
_start:
{
lean_object* v_res_4044_; 
v_res_4044_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__1_spec__4_spec__15_spec__21(v_msgData_4039_, v_macroStack_4040_, v___y_4041_, v___y_4042_);
lean_dec(v___y_4042_);
lean_dec_ref(v___y_4041_);
return v_res_4044_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37(lean_object* v_00_u03b1_4045_, lean_object* v_x_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_){
_start:
{
lean_object* v___x_4049_; 
v___x_4049_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37___redArg(v_x_4046_, v___y_4048_);
return v___x_4049_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37___boxed(lean_object* v_00_u03b1_4050_, lean_object* v_x_4051_, lean_object* v___y_4052_, lean_object* v___y_4053_){
_start:
{
lean_object* v_res_4054_; 
v_res_4054_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__37(v_00_u03b1_4050_, v_x_4051_, v___y_4052_, v___y_4053_);
lean_dec_ref(v___y_4052_);
lean_dec_ref(v_x_4051_);
return v_res_4054_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40(lean_object* v_00_u03b1_4055_, lean_object* v_ref_4056_, lean_object* v___y_4057_, lean_object* v___y_4058_){
_start:
{
lean_object* v___x_4060_; 
v___x_4060_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___redArg(v_ref_4056_);
return v___x_4060_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40___boxed(lean_object* v_00_u03b1_4061_, lean_object* v_ref_4062_, lean_object* v___y_4063_, lean_object* v___y_4064_, lean_object* v___y_4065_){
_start:
{
lean_object* v_res_4066_; 
v_res_4066_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__40(v_00_u03b1_4061_, v_ref_4062_, v___y_4063_, v___y_4064_);
lean_dec(v___y_4064_);
lean_dec_ref(v___y_4063_);
return v_res_4066_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32(lean_object* v_00_u03b1_4067_, lean_object* v_x_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_){
_start:
{
lean_object* v___x_4072_; 
v___x_4072_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___redArg(v_x_4068_, v___y_4069_, v___y_4070_);
return v___x_4072_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32___boxed(lean_object* v_00_u03b1_4073_, lean_object* v_x_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_, lean_object* v___y_4077_){
_start:
{
lean_object* v_res_4078_; 
v_res_4078_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32(v_00_u03b1_4073_, v_x_4074_, v___y_4075_, v___y_4076_);
lean_dec(v___y_4076_);
lean_dec_ref(v___y_4075_);
return v_res_4078_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34(lean_object* v_00_u03b1_4079_, lean_object* v_x_4080_, uint8_t v_when_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_){
_start:
{
lean_object* v___x_4085_; 
v___x_4085_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34___redArg(v_x_4080_, v_when_4081_, v___y_4082_, v___y_4083_);
return v___x_4085_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34___boxed(lean_object* v_00_u03b1_4086_, lean_object* v_x_4087_, lean_object* v_when_4088_, lean_object* v___y_4089_, lean_object* v___y_4090_, lean_object* v___y_4091_){
_start:
{
uint8_t v_when_boxed_4092_; lean_object* v_res_4093_; 
v_when_boxed_4092_ = lean_unbox(v_when_4088_);
v_res_4093_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__34(v_00_u03b1_4086_, v_x_4087_, v_when_boxed_4092_, v___y_4089_, v___y_4090_);
lean_dec(v___y_4090_);
lean_dec_ref(v___y_4089_);
return v_res_4093_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38(lean_object* v_00_u03b1_4094_, lean_object* v_ref_4095_, lean_object* v_constName_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_){
_start:
{
lean_object* v___x_4100_; 
v___x_4100_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___redArg(v_ref_4095_, v_constName_4096_, v___y_4097_, v___y_4098_);
return v___x_4100_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38___boxed(lean_object* v_00_u03b1_4101_, lean_object* v_ref_4102_, lean_object* v_constName_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_){
_start:
{
lean_object* v_res_4107_; 
v_res_4107_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38(v_00_u03b1_4101_, v_ref_4102_, v_constName_4103_, v___y_4104_, v___y_4105_);
lean_dec(v___y_4105_);
lean_dec_ref(v___y_4104_);
lean_dec(v_ref_4102_);
return v_res_4107_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38(lean_object* v_as_4108_, lean_object* v_as_x27_4109_, lean_object* v_b_4110_, lean_object* v_a_4111_, lean_object* v___y_4112_, lean_object* v___y_4113_){
_start:
{
lean_object* v___x_4115_; 
v___x_4115_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38___redArg(v_as_x27_4109_, v_b_4110_, v___y_4112_, v___y_4113_);
return v___x_4115_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38___boxed(lean_object* v_as_4116_, lean_object* v_as_x27_4117_, lean_object* v_b_4118_, lean_object* v_a_4119_, lean_object* v___y_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_){
_start:
{
lean_object* v_res_4123_; 
v_res_4123_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__32_spec__38(v_as_4116_, v_as_x27_4117_, v_b_4118_, v_a_4119_, v___y_4120_, v___y_4121_);
lean_dec(v___y_4121_);
lean_dec_ref(v___y_4120_);
lean_dec(v_as_x27_4117_);
lean_dec(v_as_4116_);
return v_res_4123_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44(lean_object* v_00_u03b2_4124_, lean_object* v_m_4125_, lean_object* v_a_4126_){
_start:
{
lean_object* v___x_4127_; 
v___x_4127_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44___redArg(v_m_4125_, v_a_4126_);
return v___x_4127_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44___boxed(lean_object* v_00_u03b2_4128_, lean_object* v_m_4129_, lean_object* v_a_4130_){
_start:
{
lean_object* v_res_4131_; 
v_res_4131_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44(v_00_u03b2_4128_, v_m_4129_, v_a_4130_);
lean_dec(v_a_4130_);
lean_dec_ref(v_m_4129_);
return v_res_4131_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49(lean_object* v_00_u03b1_4132_, lean_object* v_ref_4133_, lean_object* v_msg_4134_, lean_object* v_declHint_4135_, lean_object* v___y_4136_, lean_object* v___y_4137_){
_start:
{
lean_object* v___x_4139_; 
v___x_4139_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49___redArg(v_ref_4133_, v_msg_4134_, v_declHint_4135_, v___y_4136_, v___y_4137_);
return v___x_4139_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49___boxed(lean_object* v_00_u03b1_4140_, lean_object* v_ref_4141_, lean_object* v_msg_4142_, lean_object* v_declHint_4143_, lean_object* v___y_4144_, lean_object* v___y_4145_, lean_object* v___y_4146_){
_start:
{
lean_object* v_res_4147_; 
v_res_4147_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49(v_00_u03b1_4140_, v_ref_4141_, v_msg_4142_, v_declHint_4143_, v___y_4144_, v___y_4145_);
lean_dec(v___y_4145_);
lean_dec_ref(v___y_4144_);
lean_dec(v_ref_4141_);
return v_res_4147_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45(lean_object* v_00_u03b2_4148_, lean_object* v_x_4149_, lean_object* v_x_4150_){
_start:
{
uint8_t v___x_4151_; 
v___x_4151_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45___redArg(v_x_4149_, v_x_4150_);
return v___x_4151_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45___boxed(lean_object* v_00_u03b2_4152_, lean_object* v_x_4153_, lean_object* v_x_4154_){
_start:
{
uint8_t v_res_4155_; lean_object* v_r_4156_; 
v_res_4155_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45(v_00_u03b2_4152_, v_x_4153_, v_x_4154_);
lean_dec_ref(v_x_4154_);
lean_dec_ref(v_x_4153_);
v_r_4156_ = lean_box(v_res_4155_);
return v_r_4156_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44_spec__48(lean_object* v_00_u03b2_4157_, lean_object* v_a_4158_, lean_object* v_x_4159_){
_start:
{
lean_object* v___x_4160_; 
v___x_4160_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44_spec__48___redArg(v_a_4158_, v_x_4159_);
return v___x_4160_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44_spec__48___boxed(lean_object* v_00_u03b2_4161_, lean_object* v_a_4162_, lean_object* v_x_4163_){
_start:
{
lean_object* v_res_4164_; 
v_res_4164_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__44_spec__48(v_00_u03b2_4161_, v_a_4162_, v_x_4163_);
lean_dec(v_x_4163_);
lean_dec(v_a_4162_);
return v_res_4164_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54(lean_object* v_msg_4165_, lean_object* v_declHint_4166_, lean_object* v___y_4167_, lean_object* v___y_4168_){
_start:
{
lean_object* v___x_4170_; 
v___x_4170_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___redArg(v_msg_4165_, v_declHint_4166_, v___y_4168_);
return v___x_4170_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54___boxed(lean_object* v_msg_4171_, lean_object* v_declHint_4172_, lean_object* v___y_4173_, lean_object* v___y_4174_, lean_object* v___y_4175_){
_start:
{
lean_object* v_res_4176_; 
v_res_4176_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__9_spec__15_spec__26_spec__38_spec__49_spec__52_spec__54(v_msg_4171_, v_declHint_4172_, v___y_4173_, v___y_4174_);
lean_dec(v___y_4174_);
lean_dec_ref(v___y_4173_);
return v_res_4176_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48(lean_object* v_00_u03b2_4177_, lean_object* v_x_4178_, size_t v_x_4179_, lean_object* v_x_4180_){
_start:
{
uint8_t v___x_4181_; 
v___x_4181_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48___redArg(v_x_4178_, v_x_4179_, v_x_4180_);
return v___x_4181_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48___boxed(lean_object* v_00_u03b2_4182_, lean_object* v_x_4183_, lean_object* v_x_4184_, lean_object* v_x_4185_){
_start:
{
size_t v_x_34326__boxed_4186_; uint8_t v_res_4187_; lean_object* v_r_4188_; 
v_x_34326__boxed_4186_ = lean_unbox_usize(v_x_4184_);
lean_dec(v_x_4184_);
v_res_4187_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48(v_00_u03b2_4182_, v_x_4183_, v_x_34326__boxed_4186_, v_x_4185_);
lean_dec_ref(v_x_4185_);
lean_dec_ref(v_x_4183_);
v_r_4188_ = lean_box(v_res_4187_);
return v_r_4188_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48_spec__52(lean_object* v_00_u03b2_4189_, lean_object* v_keys_4190_, lean_object* v_vals_4191_, lean_object* v_heq_4192_, lean_object* v_i_4193_, lean_object* v_k_4194_){
_start:
{
uint8_t v___x_4195_; 
v___x_4195_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48_spec__52___redArg(v_keys_4190_, v_i_4193_, v_k_4194_);
return v___x_4195_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48_spec__52___boxed(lean_object* v_00_u03b2_4196_, lean_object* v_keys_4197_, lean_object* v_vals_4198_, lean_object* v_heq_4199_, lean_object* v_i_4200_, lean_object* v_k_4201_){
_start:
{
uint8_t v_res_4202_; lean_object* v_r_4203_; 
v_res_4202_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__1_spec__2_spec__7_spec__22_spec__33_spec__42_spec__45_spec__48_spec__52(v_00_u03b2_4196_, v_keys_4197_, v_vals_4198_, v_heq_4199_, v_i_4200_, v_k_4201_);
lean_dec_ref(v_k_4201_);
lean_dec_ref(v_vals_4198_);
lean_dec_ref(v_keys_4197_);
v_r_4203_ = lean_box(v_res_4202_);
return v_r_4203_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1(){
_start:
{
lean_object* v___x_4212_; lean_object* v___x_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; 
v___x_4212_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_4213_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___closed__1));
v___x_4214_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__2));
v___x_4215_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___boxed), 4, 0);
v___x_4216_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4212_, v___x_4213_, v___x_4214_, v___x_4215_);
return v___x_4216_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___boxed(lean_object* v___y_4217_){
_start:
{
lean_object* v_res_4218_; 
v_res_4218_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1();
return v_res_4218_;
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
