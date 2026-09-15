// Lean compiler output
// Module: Lean.Elab.Tactic.Grind.Param
// Imports: public import Lean.Elab.Tactic.Grind.Basic import Lean.Meta.Tactic.Grind.ForallProp import Lean.Elab.Tactic.Grind.Anchor import Lean.Elab.SyntheticMVars
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
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MacroScopesView_isSuffixOf(lean_object*, lean_object*);
lean_object* l_Lean_privateToUserName_x3f(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_Grind_Theorems_mkEmpty___redArg();
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Meta_Grind_CasesTypes_contains(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
uint8_t l_Lean_getReducibilityStatusCore(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Expr_eta(lean_object*);
lean_object* l_Lean_Meta_abstractMVars(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutModifyingElabMetaStateWithInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEMatchTheoremWithKind_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getAttrKindCore(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Meta_Grind_isMatchEqLikeDeclName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_checkAnchorRefsEMatchTheoremProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_ResolveName_backward_privateInPublic_warn;
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_elabAnchorRef(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate_x3f(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_CasesTypes_insert(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_isInductivePredicate_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_ExtensionStateArray_containsWithSamePatterns(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_toAttribute(lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Meta_Grind_EMatchTheorems_getKindsFor(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEMatchEqTheoremsForDef_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Array_toPArray_x27___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_EMatchTheoremKind_isEqLhs(lean_object*);
uint8_t l_Lean_Meta_Grind_EMatchTheoremKind_isDefault(lean_object*);
lean_object* l_Lean_Meta_Grind_mkEMatchTheoremForDecl(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_backward_grind_inferPattern;
lean_object* l_Lean_Meta_Grind_mkEMatchTheoremAndSuggest(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Meta_Grind_grindExt;
lean_object* l_Lean_Meta_Grind_Extension_getEMatchTheorems___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Theorems_find___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_instBEqEMatchTheoremKind_beq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_validateCasesAttr(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_checkDeprecatedCore___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isCasesAttrPredicateCandidate_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_SymbolPriorities_insert(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkInjectiveTheorem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_instInhabitedExtensionState_default;
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_Meta_Grind_getExtension_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
lean_object* l_Lean_Meta_Grind_ensureNotBuiltinCases(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_CasesTypes_erase(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t l_Lean_Meta_Grind_Theorems_contains___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Theorems_erase___redArg(lean_object*, lean_object*);
uint8_t l_Lean_wasOriginallyTheorem(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getEqnsFor_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_assertExtra___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_liftGoalM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_runParserCategory(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertFunCC(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatchCore(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__1(lean_object*, uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseInj(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ExtensionStateArray_find(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ExtensionStateArray_find___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__0_value;
static lean_once_cell_t l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__2(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "this parameter is redundant, environment already contains `"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "` annotated with `"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__3;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindMod"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 252, 83, 80, 136, 168, 19, 119)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "<input>"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "unexpected modifier "};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "redundant modifier `!` in `grind` parameter"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_addEMatchTheorem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "failed to generate equation theorems for `"};
static const lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_addEMatchTheorem___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_addEMatchTheorem___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_addEMatchTheorem___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "invalid `grind` parameter, `"};
static const lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_addEMatchTheorem___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_addEMatchTheorem___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_addEMatchTheorem___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "` is a definition, the only acceptable (and redundant) modifier is '='"};
static const lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_addEMatchTheorem___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_addEMatchTheorem___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__5;
static const lean_string_object l_Lean_Elab_Tactic_addEMatchTheorem___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "` is a reducible definition, `grind` automatically unfolds them"};
static const lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_addEMatchTheorem___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Tactic_addEMatchTheorem___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__7;
static const lean_string_object l_Lean_Elab_Tactic_addEMatchTheorem___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "` is not a theorem, definition, or inductive type"};
static const lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_addEMatchTheorem___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Tactic_addEMatchTheorem___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_addEMatchTheorem(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 87, .m_capacity = 87, .m_length = 86, .m_data = "invalid `grind` parameter, only global declarations are allowed when `+revert` is used"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "extra"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(140, 97, 194, 195, 68, 28, 219, 173)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "invalid `grind` parameter, failed to infer patterns"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 88, .m_capacity = 88, .m_length = 87, .m_data = "invalid `grind` parameter, parameter type is not a `forall` and is universe polymorphic"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 92, .m_capacity = 92, .m_length = 91, .m_data = "invalid `grind` parameter, modifier is redundant since the parameter type is not a `forall`"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__3;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "invalid `grind` parameter, proof term expected"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__5;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 91, .m_capacity = 91, .m_length = 90, .m_data = "invalid `grind` parameter, only global declarations are allowed with this kind of modifier"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 8}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__10_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__10_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__6___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__6___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__7_spec__8___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__7(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__18_spec__20_spec__21___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__18_spec__20_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__18_spec__20(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__18_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__17___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Private declaration `"};
static const lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16___closed__0 = (const lean_object*)&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16___closed__0_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16___closed__1;
static const lean_string_object l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 167, .m_capacity = 167, .m_length = 166, .m_data = "` accessed publicly; this is allowed only because the `backward.privateInPublic` option is enabled. \n\nDisable `backward.privateInPublic.warn` to silence this warning."};
static const lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16___closed__2 = (const lean_object*)&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16___closed__2_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16___closed__3;
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__15(lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__15___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "invalid use of `usr` modifier, `"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` does not have patterns specified with the command `grind_pattern`"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__3;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "`cases` parameter is not supported here"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__5;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "invalid use of `intro` modifier, `"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__7;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "` is not an inductive predicate"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__9;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "`[grind ext]` cannot be set using parameters"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__10_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__11;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 79, .m_data = "normalization theorems should be registered using the `@[grind norm]` attribute"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__12_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__13;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 108, .m_capacity = 108, .m_length = 107, .m_data = "declarations to be unfolded during normalization should be registered using the `@[grind unfold]` attribute"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__14 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__14_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__15;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 75, .m_capacity = 75, .m_length = 74, .m_data = "homomorphism rules should be registered using the `@[grind hom]` attribute"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__16 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__16_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__17;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "homomorphism predicates should be registered using the `@[grind hom_pred]` attribute"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__18 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__18_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__19;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "invalid use of modifier in `grind` attribute `"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__20 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__20_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__21;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "redundant parameter `"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__22 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__22_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__23;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "`, `grind` uses local hypotheses automatically"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__24 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__24_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__25;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__7_spec__8(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__10_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__10_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__18_spec__20_spec__21(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__18_spec__20_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindParam"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(16, 144, 208, 205, 52, 106, 220, 83)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "unexpected `grind` parameter"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindErase"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(171, 172, 113, 174, 15, 5, 26, 121)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindLemma"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(185, 180, 24, 243, 113, 54, 79, 133)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "grindLemmaMin"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(65, 124, 255, 191, 121, 182, 88, 219)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "anchor"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(168, 155, 228, 98, 168, 72, 115, 174)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "invalid anchor, `only` modifier expected"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__12_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__13;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "hexnum"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__14_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__14_value),LEAN_SCALAR_PTR_LITERAL(152, 252, 51, 178, 203, 245, 189, 159)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__15_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "invalid `-` occurrence, it can only be used at the `grind` tactic entry point"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__16 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__16_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__17;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0(uint8_t, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabGrindParams(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabGrindParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_shouldKeep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_shouldKeep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0___boxed(lean_object**);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes(lean_object* v_params_1_, lean_object* v_declName_2_, uint8_t v_eager_3_){
_start:
{
lean_object* v_config_4_; lean_object* v_extensions_5_; lean_object* v_extra_6_; lean_object* v_extraInj_7_; lean_object* v_extraFacts_8_; lean_object* v_symPrios_9_; lean_object* v_norm_10_; lean_object* v_normProcs_11_; lean_object* v_anchorRefs_x3f_12_; lean_object* v___x_13_; lean_object* v___x_14_; uint8_t v___x_15_; 
v_config_4_ = lean_ctor_get(v_params_1_, 0);
v_extensions_5_ = lean_ctor_get(v_params_1_, 1);
v_extra_6_ = lean_ctor_get(v_params_1_, 2);
v_extraInj_7_ = lean_ctor_get(v_params_1_, 3);
v_extraFacts_8_ = lean_ctor_get(v_params_1_, 4);
v_symPrios_9_ = lean_ctor_get(v_params_1_, 5);
v_norm_10_ = lean_ctor_get(v_params_1_, 6);
v_normProcs_11_ = lean_ctor_get(v_params_1_, 7);
v_anchorRefs_x3f_12_ = lean_ctor_get(v_params_1_, 8);
v___x_13_ = lean_unsigned_to_nat(0u);
v___x_14_ = lean_array_get_size(v_extensions_5_);
v___x_15_ = lean_nat_dec_lt(v___x_13_, v___x_14_);
if (v___x_15_ == 0)
{
lean_dec(v_declName_2_);
return v_params_1_;
}
else
{
lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_39_; 
lean_inc(v_anchorRefs_x3f_12_);
lean_inc_ref(v_normProcs_11_);
lean_inc_ref(v_norm_10_);
lean_inc_ref(v_symPrios_9_);
lean_inc_ref(v_extraFacts_8_);
lean_inc_ref(v_extraInj_7_);
lean_inc_ref(v_extra_6_);
lean_inc_ref(v_extensions_5_);
lean_inc_ref(v_config_4_);
v_isSharedCheck_39_ = !lean_is_exclusive(v_params_1_);
if (v_isSharedCheck_39_ == 0)
{
lean_object* v_unused_40_; lean_object* v_unused_41_; lean_object* v_unused_42_; lean_object* v_unused_43_; lean_object* v_unused_44_; lean_object* v_unused_45_; lean_object* v_unused_46_; lean_object* v_unused_47_; lean_object* v_unused_48_; 
v_unused_40_ = lean_ctor_get(v_params_1_, 8);
lean_dec(v_unused_40_);
v_unused_41_ = lean_ctor_get(v_params_1_, 7);
lean_dec(v_unused_41_);
v_unused_42_ = lean_ctor_get(v_params_1_, 6);
lean_dec(v_unused_42_);
v_unused_43_ = lean_ctor_get(v_params_1_, 5);
lean_dec(v_unused_43_);
v_unused_44_ = lean_ctor_get(v_params_1_, 4);
lean_dec(v_unused_44_);
v_unused_45_ = lean_ctor_get(v_params_1_, 3);
lean_dec(v_unused_45_);
v_unused_46_ = lean_ctor_get(v_params_1_, 2);
lean_dec(v_unused_46_);
v_unused_47_ = lean_ctor_get(v_params_1_, 1);
lean_dec(v_unused_47_);
v_unused_48_ = lean_ctor_get(v_params_1_, 0);
lean_dec(v_unused_48_);
v___x_17_ = v_params_1_;
v_isShared_18_ = v_isSharedCheck_39_;
goto v_resetjp_16_;
}
else
{
lean_dec(v_params_1_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_39_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v_v_19_; lean_object* v_casesTypes_20_; lean_object* v_extThms_21_; lean_object* v_funCC_22_; lean_object* v_ematch_23_; lean_object* v_inj_24_; lean_object* v___x_26_; uint8_t v_isShared_27_; uint8_t v_isSharedCheck_38_; 
v_v_19_ = lean_array_fget(v_extensions_5_, v___x_13_);
v_casesTypes_20_ = lean_ctor_get(v_v_19_, 0);
v_extThms_21_ = lean_ctor_get(v_v_19_, 1);
v_funCC_22_ = lean_ctor_get(v_v_19_, 2);
v_ematch_23_ = lean_ctor_get(v_v_19_, 3);
v_inj_24_ = lean_ctor_get(v_v_19_, 4);
v_isSharedCheck_38_ = !lean_is_exclusive(v_v_19_);
if (v_isSharedCheck_38_ == 0)
{
v___x_26_ = v_v_19_;
v_isShared_27_ = v_isSharedCheck_38_;
goto v_resetjp_25_;
}
else
{
lean_inc(v_inj_24_);
lean_inc(v_ematch_23_);
lean_inc(v_funCC_22_);
lean_inc(v_extThms_21_);
lean_inc(v_casesTypes_20_);
lean_dec(v_v_19_);
v___x_26_ = lean_box(0);
v_isShared_27_ = v_isSharedCheck_38_;
goto v_resetjp_25_;
}
v_resetjp_25_:
{
lean_object* v___x_28_; lean_object* v_xs_x27_29_; lean_object* v___x_30_; lean_object* v___x_32_; 
v___x_28_ = lean_box(0);
v_xs_x27_29_ = lean_array_fset(v_extensions_5_, v___x_13_, v___x_28_);
v___x_30_ = l_Lean_Meta_Grind_CasesTypes_insert(v_casesTypes_20_, v_declName_2_, v_eager_3_);
if (v_isShared_27_ == 0)
{
lean_ctor_set(v___x_26_, 0, v___x_30_);
v___x_32_ = v___x_26_;
goto v_reusejp_31_;
}
else
{
lean_object* v_reuseFailAlloc_37_; 
v_reuseFailAlloc_37_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_37_, 0, v___x_30_);
lean_ctor_set(v_reuseFailAlloc_37_, 1, v_extThms_21_);
lean_ctor_set(v_reuseFailAlloc_37_, 2, v_funCC_22_);
lean_ctor_set(v_reuseFailAlloc_37_, 3, v_ematch_23_);
lean_ctor_set(v_reuseFailAlloc_37_, 4, v_inj_24_);
v___x_32_ = v_reuseFailAlloc_37_;
goto v_reusejp_31_;
}
v_reusejp_31_:
{
lean_object* v___x_33_; lean_object* v___x_35_; 
v___x_33_ = lean_array_fset(v_xs_x27_29_, v___x_13_, v___x_32_);
if (v_isShared_18_ == 0)
{
lean_ctor_set(v___x_17_, 1, v___x_33_);
v___x_35_ = v___x_17_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v_config_4_);
lean_ctor_set(v_reuseFailAlloc_36_, 1, v___x_33_);
lean_ctor_set(v_reuseFailAlloc_36_, 2, v_extra_6_);
lean_ctor_set(v_reuseFailAlloc_36_, 3, v_extraInj_7_);
lean_ctor_set(v_reuseFailAlloc_36_, 4, v_extraFacts_8_);
lean_ctor_set(v_reuseFailAlloc_36_, 5, v_symPrios_9_);
lean_ctor_set(v_reuseFailAlloc_36_, 6, v_norm_10_);
lean_ctor_set(v_reuseFailAlloc_36_, 7, v_normProcs_11_);
lean_ctor_set(v_reuseFailAlloc_36_, 8, v_anchorRefs_x3f_12_);
v___x_35_ = v_reuseFailAlloc_36_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
return v___x_35_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes___boxed(lean_object* v_params_49_, lean_object* v_declName_50_, lean_object* v_eager_51_){
_start:
{
uint8_t v_eager_boxed_52_; lean_object* v_res_53_; 
v_eager_boxed_52_ = lean_unbox(v_eager_51_);
v_res_53_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes(v_params_49_, v_declName_50_, v_eager_boxed_52_);
return v_res_53_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes_spec__0(lean_object* v_declName_54_, lean_object* v_as_55_, size_t v_i_56_, size_t v_stop_57_){
_start:
{
uint8_t v___x_58_; 
v___x_58_ = lean_usize_dec_eq(v_i_56_, v_stop_57_);
if (v___x_58_ == 0)
{
lean_object* v___x_59_; lean_object* v_casesTypes_60_; uint8_t v___x_61_; 
v___x_59_ = lean_array_uget_borrowed(v_as_55_, v_i_56_);
v_casesTypes_60_ = lean_ctor_get(v___x_59_, 0);
v___x_61_ = l_Lean_Meta_Grind_CasesTypes_contains(v_casesTypes_60_, v_declName_54_);
if (v___x_61_ == 0)
{
size_t v___x_62_; size_t v___x_63_; 
v___x_62_ = ((size_t)1ULL);
v___x_63_ = lean_usize_add(v_i_56_, v___x_62_);
v_i_56_ = v___x_63_;
goto _start;
}
else
{
return v___x_61_;
}
}
else
{
uint8_t v___x_65_; 
v___x_65_ = 0;
return v___x_65_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes_spec__0___boxed(lean_object* v_declName_66_, lean_object* v_as_67_, lean_object* v_i_68_, lean_object* v_stop_69_){
_start:
{
size_t v_i_boxed_70_; size_t v_stop_boxed_71_; uint8_t v_res_72_; lean_object* v_r_73_; 
v_i_boxed_70_ = lean_unbox_usize(v_i_68_);
lean_dec(v_i_68_);
v_stop_boxed_71_ = lean_unbox_usize(v_stop_69_);
lean_dec(v_stop_69_);
v_res_72_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes_spec__0(v_declName_66_, v_as_67_, v_i_boxed_70_, v_stop_boxed_71_);
lean_dec_ref(v_as_67_);
lean_dec(v_declName_66_);
v_r_73_ = lean_box(v_res_72_);
return v_r_73_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes(lean_object* v_params_74_, lean_object* v_declName_75_, lean_object* v___y_76_, lean_object* v___y_77_){
_start:
{
lean_object* v___y_80_; lean_object* v___y_81_; lean_object* v___y_82_; lean_object* v___y_83_; lean_object* v___y_84_; lean_object* v___y_85_; lean_object* v___y_86_; lean_object* v___y_87_; lean_object* v___y_88_; lean_object* v_config_91_; lean_object* v_extensions_92_; lean_object* v_extra_93_; lean_object* v_extraInj_94_; lean_object* v_extraFacts_95_; lean_object* v_symPrios_96_; lean_object* v_norm_97_; lean_object* v_normProcs_98_; lean_object* v_anchorRefs_x3f_99_; lean_object* v___x_131_; lean_object* v___x_132_; uint8_t v___x_133_; 
v_config_91_ = lean_ctor_get(v_params_74_, 0);
lean_inc_ref(v_config_91_);
v_extensions_92_ = lean_ctor_get(v_params_74_, 1);
lean_inc_ref(v_extensions_92_);
v_extra_93_ = lean_ctor_get(v_params_74_, 2);
lean_inc_ref(v_extra_93_);
v_extraInj_94_ = lean_ctor_get(v_params_74_, 3);
lean_inc_ref(v_extraInj_94_);
v_extraFacts_95_ = lean_ctor_get(v_params_74_, 4);
lean_inc_ref(v_extraFacts_95_);
v_symPrios_96_ = lean_ctor_get(v_params_74_, 5);
lean_inc_ref(v_symPrios_96_);
v_norm_97_ = lean_ctor_get(v_params_74_, 6);
lean_inc_ref(v_norm_97_);
v_normProcs_98_ = lean_ctor_get(v_params_74_, 7);
lean_inc_ref(v_normProcs_98_);
v_anchorRefs_x3f_99_ = lean_ctor_get(v_params_74_, 8);
lean_inc(v_anchorRefs_x3f_99_);
lean_dec_ref(v_params_74_);
v___x_131_ = lean_unsigned_to_nat(0u);
v___x_132_ = lean_array_get_size(v_extensions_92_);
v___x_133_ = lean_nat_dec_lt(v___x_131_, v___x_132_);
if (v___x_133_ == 0)
{
goto v___jp_121_;
}
else
{
if (v___x_133_ == 0)
{
goto v___jp_121_;
}
else
{
size_t v___x_134_; size_t v___x_135_; uint8_t v___x_136_; 
v___x_134_ = ((size_t)0ULL);
v___x_135_ = lean_usize_of_nat(v___x_132_);
v___x_136_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes_spec__0(v_declName_75_, v_extensions_92_, v___x_134_, v___x_135_);
if (v___x_136_ == 0)
{
goto v___jp_121_;
}
else
{
goto v___jp_100_;
}
}
}
v___jp_79_:
{
lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_89_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_89_, 0, v___y_87_);
lean_ctor_set(v___x_89_, 1, v___y_88_);
lean_ctor_set(v___x_89_, 2, v___y_86_);
lean_ctor_set(v___x_89_, 3, v___y_83_);
lean_ctor_set(v___x_89_, 4, v___y_82_);
lean_ctor_set(v___x_89_, 5, v___y_80_);
lean_ctor_set(v___x_89_, 6, v___y_81_);
lean_ctor_set(v___x_89_, 7, v___y_85_);
lean_ctor_set(v___x_89_, 8, v___y_84_);
v___x_90_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_90_, 0, v___x_89_);
return v___x_90_;
}
v___jp_100_:
{
lean_object* v___x_101_; lean_object* v___x_102_; uint8_t v___x_103_; 
v___x_101_ = lean_unsigned_to_nat(0u);
v___x_102_ = lean_array_get_size(v_extensions_92_);
v___x_103_ = lean_nat_dec_lt(v___x_101_, v___x_102_);
if (v___x_103_ == 0)
{
lean_dec(v_declName_75_);
v___y_80_ = v_symPrios_96_;
v___y_81_ = v_norm_97_;
v___y_82_ = v_extraFacts_95_;
v___y_83_ = v_extraInj_94_;
v___y_84_ = v_anchorRefs_x3f_99_;
v___y_85_ = v_normProcs_98_;
v___y_86_ = v_extra_93_;
v___y_87_ = v_config_91_;
v___y_88_ = v_extensions_92_;
goto v___jp_79_;
}
else
{
lean_object* v_v_104_; lean_object* v_casesTypes_105_; lean_object* v_extThms_106_; lean_object* v_funCC_107_; lean_object* v_ematch_108_; lean_object* v_inj_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_120_; 
v_v_104_ = lean_array_fget(v_extensions_92_, v___x_101_);
v_casesTypes_105_ = lean_ctor_get(v_v_104_, 0);
v_extThms_106_ = lean_ctor_get(v_v_104_, 1);
v_funCC_107_ = lean_ctor_get(v_v_104_, 2);
v_ematch_108_ = lean_ctor_get(v_v_104_, 3);
v_inj_109_ = lean_ctor_get(v_v_104_, 4);
v_isSharedCheck_120_ = !lean_is_exclusive(v_v_104_);
if (v_isSharedCheck_120_ == 0)
{
v___x_111_ = v_v_104_;
v_isShared_112_ = v_isSharedCheck_120_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_inj_109_);
lean_inc(v_ematch_108_);
lean_inc(v_funCC_107_);
lean_inc(v_extThms_106_);
lean_inc(v_casesTypes_105_);
lean_dec(v_v_104_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_120_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_113_; lean_object* v_xs_x27_114_; lean_object* v___x_115_; lean_object* v___x_117_; 
v___x_113_ = lean_box(0);
v_xs_x27_114_ = lean_array_fset(v_extensions_92_, v___x_101_, v___x_113_);
v___x_115_ = l_Lean_Meta_Grind_CasesTypes_erase(v_casesTypes_105_, v_declName_75_);
lean_dec(v_declName_75_);
if (v_isShared_112_ == 0)
{
lean_ctor_set(v___x_111_, 0, v___x_115_);
v___x_117_ = v___x_111_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v___x_115_);
lean_ctor_set(v_reuseFailAlloc_119_, 1, v_extThms_106_);
lean_ctor_set(v_reuseFailAlloc_119_, 2, v_funCC_107_);
lean_ctor_set(v_reuseFailAlloc_119_, 3, v_ematch_108_);
lean_ctor_set(v_reuseFailAlloc_119_, 4, v_inj_109_);
v___x_117_ = v_reuseFailAlloc_119_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
lean_object* v___x_118_; 
v___x_118_ = lean_array_fset(v_xs_x27_114_, v___x_101_, v___x_117_);
v___y_80_ = v_symPrios_96_;
v___y_81_ = v_norm_97_;
v___y_82_ = v_extraFacts_95_;
v___y_83_ = v_extraInj_94_;
v___y_84_ = v_anchorRefs_x3f_99_;
v___y_85_ = v_normProcs_98_;
v___y_86_ = v_extra_93_;
v___y_87_ = v_config_91_;
v___y_88_ = v___x_118_;
goto v___jp_79_;
}
}
}
}
v___jp_121_:
{
lean_object* v___x_122_; 
lean_inc(v_declName_75_);
v___x_122_ = l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(v_declName_75_, v___y_76_, v___y_77_);
if (lean_obj_tag(v___x_122_) == 0)
{
lean_dec_ref_known(v___x_122_, 1);
goto v___jp_100_;
}
else
{
lean_object* v_a_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_130_; 
lean_dec(v_anchorRefs_x3f_99_);
lean_dec_ref(v_normProcs_98_);
lean_dec_ref(v_norm_97_);
lean_dec_ref(v_symPrios_96_);
lean_dec_ref(v_extraFacts_95_);
lean_dec_ref(v_extraInj_94_);
lean_dec_ref(v_extra_93_);
lean_dec_ref(v_extensions_92_);
lean_dec_ref(v_config_91_);
lean_dec(v_declName_75_);
v_a_123_ = lean_ctor_get(v___x_122_, 0);
v_isSharedCheck_130_ = !lean_is_exclusive(v___x_122_);
if (v_isSharedCheck_130_ == 0)
{
v___x_125_ = v___x_122_;
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_a_123_);
lean_dec(v___x_122_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_128_; 
if (v_isShared_126_ == 0)
{
v___x_128_ = v___x_125_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v_a_123_);
v___x_128_ = v_reuseFailAlloc_129_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
return v___x_128_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes___boxed(lean_object* v_params_137_, lean_object* v_declName_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes(v_params_137_, v_declName_138_, v___y_139_, v___y_140_);
lean_dec(v___y_140_);
lean_dec_ref(v___y_139_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertFunCC(lean_object* v_params_143_, lean_object* v_declName_144_){
_start:
{
lean_object* v_config_145_; lean_object* v_extensions_146_; lean_object* v_extra_147_; lean_object* v_extraInj_148_; lean_object* v_extraFacts_149_; lean_object* v_symPrios_150_; lean_object* v_norm_151_; lean_object* v_normProcs_152_; lean_object* v_anchorRefs_x3f_153_; lean_object* v___x_154_; lean_object* v___x_155_; uint8_t v___x_156_; 
v_config_145_ = lean_ctor_get(v_params_143_, 0);
v_extensions_146_ = lean_ctor_get(v_params_143_, 1);
v_extra_147_ = lean_ctor_get(v_params_143_, 2);
v_extraInj_148_ = lean_ctor_get(v_params_143_, 3);
v_extraFacts_149_ = lean_ctor_get(v_params_143_, 4);
v_symPrios_150_ = lean_ctor_get(v_params_143_, 5);
v_norm_151_ = lean_ctor_get(v_params_143_, 6);
v_normProcs_152_ = lean_ctor_get(v_params_143_, 7);
v_anchorRefs_x3f_153_ = lean_ctor_get(v_params_143_, 8);
v___x_154_ = lean_unsigned_to_nat(0u);
v___x_155_ = lean_array_get_size(v_extensions_146_);
v___x_156_ = lean_nat_dec_lt(v___x_154_, v___x_155_);
if (v___x_156_ == 0)
{
lean_dec(v_declName_144_);
return v_params_143_;
}
else
{
lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_180_; 
lean_inc(v_anchorRefs_x3f_153_);
lean_inc_ref(v_normProcs_152_);
lean_inc_ref(v_norm_151_);
lean_inc_ref(v_symPrios_150_);
lean_inc_ref(v_extraFacts_149_);
lean_inc_ref(v_extraInj_148_);
lean_inc_ref(v_extra_147_);
lean_inc_ref(v_extensions_146_);
lean_inc_ref(v_config_145_);
v_isSharedCheck_180_ = !lean_is_exclusive(v_params_143_);
if (v_isSharedCheck_180_ == 0)
{
lean_object* v_unused_181_; lean_object* v_unused_182_; lean_object* v_unused_183_; lean_object* v_unused_184_; lean_object* v_unused_185_; lean_object* v_unused_186_; lean_object* v_unused_187_; lean_object* v_unused_188_; lean_object* v_unused_189_; 
v_unused_181_ = lean_ctor_get(v_params_143_, 8);
lean_dec(v_unused_181_);
v_unused_182_ = lean_ctor_get(v_params_143_, 7);
lean_dec(v_unused_182_);
v_unused_183_ = lean_ctor_get(v_params_143_, 6);
lean_dec(v_unused_183_);
v_unused_184_ = lean_ctor_get(v_params_143_, 5);
lean_dec(v_unused_184_);
v_unused_185_ = lean_ctor_get(v_params_143_, 4);
lean_dec(v_unused_185_);
v_unused_186_ = lean_ctor_get(v_params_143_, 3);
lean_dec(v_unused_186_);
v_unused_187_ = lean_ctor_get(v_params_143_, 2);
lean_dec(v_unused_187_);
v_unused_188_ = lean_ctor_get(v_params_143_, 1);
lean_dec(v_unused_188_);
v_unused_189_ = lean_ctor_get(v_params_143_, 0);
lean_dec(v_unused_189_);
v___x_158_ = v_params_143_;
v_isShared_159_ = v_isSharedCheck_180_;
goto v_resetjp_157_;
}
else
{
lean_dec(v_params_143_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_180_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v_v_160_; lean_object* v_casesTypes_161_; lean_object* v_extThms_162_; lean_object* v_funCC_163_; lean_object* v_ematch_164_; lean_object* v_inj_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_179_; 
v_v_160_ = lean_array_fget(v_extensions_146_, v___x_154_);
v_casesTypes_161_ = lean_ctor_get(v_v_160_, 0);
v_extThms_162_ = lean_ctor_get(v_v_160_, 1);
v_funCC_163_ = lean_ctor_get(v_v_160_, 2);
v_ematch_164_ = lean_ctor_get(v_v_160_, 3);
v_inj_165_ = lean_ctor_get(v_v_160_, 4);
v_isSharedCheck_179_ = !lean_is_exclusive(v_v_160_);
if (v_isSharedCheck_179_ == 0)
{
v___x_167_ = v_v_160_;
v_isShared_168_ = v_isSharedCheck_179_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_inj_165_);
lean_inc(v_ematch_164_);
lean_inc(v_funCC_163_);
lean_inc(v_extThms_162_);
lean_inc(v_casesTypes_161_);
lean_dec(v_v_160_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_179_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v___x_169_; lean_object* v_xs_x27_170_; lean_object* v___x_171_; lean_object* v___x_173_; 
v___x_169_ = lean_box(0);
v_xs_x27_170_ = lean_array_fset(v_extensions_146_, v___x_154_, v___x_169_);
v___x_171_ = l_Lean_NameSet_insert(v_funCC_163_, v_declName_144_);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 2, v___x_171_);
v___x_173_ = v___x_167_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v_casesTypes_161_);
lean_ctor_set(v_reuseFailAlloc_178_, 1, v_extThms_162_);
lean_ctor_set(v_reuseFailAlloc_178_, 2, v___x_171_);
lean_ctor_set(v_reuseFailAlloc_178_, 3, v_ematch_164_);
lean_ctor_set(v_reuseFailAlloc_178_, 4, v_inj_165_);
v___x_173_ = v_reuseFailAlloc_178_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
lean_object* v___x_174_; lean_object* v___x_176_; 
v___x_174_ = lean_array_fset(v_xs_x27_170_, v___x_154_, v___x_173_);
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 1, v___x_174_);
v___x_176_ = v___x_158_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v_config_145_);
lean_ctor_set(v_reuseFailAlloc_177_, 1, v___x_174_);
lean_ctor_set(v_reuseFailAlloc_177_, 2, v_extra_147_);
lean_ctor_set(v_reuseFailAlloc_177_, 3, v_extraInj_148_);
lean_ctor_set(v_reuseFailAlloc_177_, 4, v_extraFacts_149_);
lean_ctor_set(v_reuseFailAlloc_177_, 5, v_symPrios_150_);
lean_ctor_set(v_reuseFailAlloc_177_, 6, v_norm_151_);
lean_ctor_set(v_reuseFailAlloc_177_, 7, v_normProcs_152_);
lean_ctor_set(v_reuseFailAlloc_177_, 8, v_anchorRefs_x3f_153_);
v___x_176_ = v_reuseFailAlloc_177_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
return v___x_176_;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch_spec__0(lean_object* v_declName_190_, lean_object* v_as_191_, size_t v_i_192_, size_t v_stop_193_){
_start:
{
uint8_t v___x_194_; 
v___x_194_ = lean_usize_dec_eq(v_i_192_, v_stop_193_);
if (v___x_194_ == 0)
{
lean_object* v___x_195_; lean_object* v_ematch_196_; lean_object* v___x_197_; uint8_t v___x_198_; 
v___x_195_ = lean_array_uget_borrowed(v_as_191_, v_i_192_);
v_ematch_196_ = lean_ctor_get(v___x_195_, 3);
lean_inc(v_declName_190_);
v___x_197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_197_, 0, v_declName_190_);
v___x_198_ = l_Lean_Meta_Grind_Theorems_contains___redArg(v_ematch_196_, v___x_197_);
lean_dec_ref_known(v___x_197_, 1);
if (v___x_198_ == 0)
{
size_t v___x_199_; size_t v___x_200_; 
v___x_199_ = ((size_t)1ULL);
v___x_200_ = lean_usize_add(v_i_192_, v___x_199_);
v_i_192_ = v___x_200_;
goto _start;
}
else
{
lean_dec(v_declName_190_);
return v___x_198_;
}
}
else
{
uint8_t v___x_202_; 
lean_dec(v_declName_190_);
v___x_202_ = 0;
return v___x_202_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch_spec__0___boxed(lean_object* v_declName_203_, lean_object* v_as_204_, lean_object* v_i_205_, lean_object* v_stop_206_){
_start:
{
size_t v_i_boxed_207_; size_t v_stop_boxed_208_; uint8_t v_res_209_; lean_object* v_r_210_; 
v_i_boxed_207_ = lean_unbox_usize(v_i_205_);
lean_dec(v_i_205_);
v_stop_boxed_208_ = lean_unbox_usize(v_stop_206_);
lean_dec(v_stop_206_);
v_res_209_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch_spec__0(v_declName_203_, v_as_204_, v_i_boxed_207_, v_stop_boxed_208_);
lean_dec_ref(v_as_204_);
v_r_210_ = lean_box(v_res_209_);
return v_r_210_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch(lean_object* v_params_211_, lean_object* v_declName_212_){
_start:
{
lean_object* v_extensions_213_; lean_object* v___x_214_; lean_object* v___x_215_; uint8_t v___x_216_; 
v_extensions_213_ = lean_ctor_get(v_params_211_, 1);
v___x_214_ = lean_unsigned_to_nat(0u);
v___x_215_ = lean_array_get_size(v_extensions_213_);
v___x_216_ = lean_nat_dec_lt(v___x_214_, v___x_215_);
if (v___x_216_ == 0)
{
lean_dec(v_declName_212_);
return v___x_216_;
}
else
{
if (v___x_216_ == 0)
{
lean_dec(v_declName_212_);
return v___x_216_;
}
else
{
size_t v___x_217_; size_t v___x_218_; uint8_t v___x_219_; 
v___x_217_ = ((size_t)0ULL);
v___x_218_ = lean_usize_of_nat(v___x_215_);
v___x_219_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch_spec__0(v_declName_212_, v_extensions_213_, v___x_217_, v___x_218_);
return v___x_219_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch___boxed(lean_object* v_params_220_, lean_object* v_declName_221_){
_start:
{
uint8_t v_res_222_; lean_object* v_r_223_; 
v_res_222_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch(v_params_220_, v_declName_221_);
lean_dec_ref(v_params_220_);
v_r_223_ = lean_box(v_res_222_);
return v_r_223_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem_spec__0(lean_object* v_declName_224_, lean_object* v_as_225_, size_t v_i_226_, size_t v_stop_227_){
_start:
{
uint8_t v___x_228_; 
v___x_228_ = lean_usize_dec_eq(v_i_226_, v_stop_227_);
if (v___x_228_ == 0)
{
lean_object* v___x_229_; lean_object* v_inj_230_; lean_object* v___x_231_; uint8_t v___x_232_; 
v___x_229_ = lean_array_uget_borrowed(v_as_225_, v_i_226_);
v_inj_230_ = lean_ctor_get(v___x_229_, 4);
lean_inc(v_declName_224_);
v___x_231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_231_, 0, v_declName_224_);
v___x_232_ = l_Lean_Meta_Grind_Theorems_contains___redArg(v_inj_230_, v___x_231_);
lean_dec_ref_known(v___x_231_, 1);
if (v___x_232_ == 0)
{
size_t v___x_233_; size_t v___x_234_; 
v___x_233_ = ((size_t)1ULL);
v___x_234_ = lean_usize_add(v_i_226_, v___x_233_);
v_i_226_ = v___x_234_;
goto _start;
}
else
{
lean_dec(v_declName_224_);
return v___x_232_;
}
}
else
{
uint8_t v___x_236_; 
lean_dec(v_declName_224_);
v___x_236_ = 0;
return v___x_236_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem_spec__0___boxed(lean_object* v_declName_237_, lean_object* v_as_238_, lean_object* v_i_239_, lean_object* v_stop_240_){
_start:
{
size_t v_i_boxed_241_; size_t v_stop_boxed_242_; uint8_t v_res_243_; lean_object* v_r_244_; 
v_i_boxed_241_ = lean_unbox_usize(v_i_239_);
lean_dec(v_i_239_);
v_stop_boxed_242_ = lean_unbox_usize(v_stop_240_);
lean_dec(v_stop_240_);
v_res_243_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem_spec__0(v_declName_237_, v_as_238_, v_i_boxed_241_, v_stop_boxed_242_);
lean_dec_ref(v_as_238_);
v_r_244_ = lean_box(v_res_243_);
return v_r_244_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem(lean_object* v_params_245_, lean_object* v_declName_246_){
_start:
{
lean_object* v_extensions_247_; lean_object* v___x_248_; lean_object* v___x_249_; uint8_t v___x_250_; 
v_extensions_247_ = lean_ctor_get(v_params_245_, 1);
v___x_248_ = lean_unsigned_to_nat(0u);
v___x_249_ = lean_array_get_size(v_extensions_247_);
v___x_250_ = lean_nat_dec_lt(v___x_248_, v___x_249_);
if (v___x_250_ == 0)
{
lean_dec(v_declName_246_);
return v___x_250_;
}
else
{
if (v___x_250_ == 0)
{
lean_dec(v_declName_246_);
return v___x_250_;
}
else
{
size_t v___x_251_; size_t v___x_252_; uint8_t v___x_253_; 
v___x_251_ = ((size_t)0ULL);
v___x_252_ = lean_usize_of_nat(v___x_249_);
v___x_253_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem_spec__0(v_declName_246_, v_extensions_247_, v___x_251_, v___x_252_);
return v___x_253_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem___boxed(lean_object* v_params_254_, lean_object* v_declName_255_){
_start:
{
uint8_t v_res_256_; lean_object* v_r_257_; 
v_res_256_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem(v_params_254_, v_declName_255_);
lean_dec_ref(v_params_254_);
v_r_257_ = lean_box(v_res_256_);
return v_r_257_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatchCore(lean_object* v_params_258_, lean_object* v_declName_259_){
_start:
{
lean_object* v_config_260_; lean_object* v_extensions_261_; lean_object* v_extra_262_; lean_object* v_extraInj_263_; lean_object* v_extraFacts_264_; lean_object* v_symPrios_265_; lean_object* v_norm_266_; lean_object* v_normProcs_267_; lean_object* v_anchorRefs_x3f_268_; lean_object* v___x_269_; lean_object* v___x_270_; uint8_t v___x_271_; 
v_config_260_ = lean_ctor_get(v_params_258_, 0);
v_extensions_261_ = lean_ctor_get(v_params_258_, 1);
v_extra_262_ = lean_ctor_get(v_params_258_, 2);
v_extraInj_263_ = lean_ctor_get(v_params_258_, 3);
v_extraFacts_264_ = lean_ctor_get(v_params_258_, 4);
v_symPrios_265_ = lean_ctor_get(v_params_258_, 5);
v_norm_266_ = lean_ctor_get(v_params_258_, 6);
v_normProcs_267_ = lean_ctor_get(v_params_258_, 7);
v_anchorRefs_x3f_268_ = lean_ctor_get(v_params_258_, 8);
v___x_269_ = lean_unsigned_to_nat(0u);
v___x_270_ = lean_array_get_size(v_extensions_261_);
v___x_271_ = lean_nat_dec_lt(v___x_269_, v___x_270_);
if (v___x_271_ == 0)
{
lean_dec(v_declName_259_);
return v_params_258_;
}
else
{
lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_296_; 
lean_inc(v_anchorRefs_x3f_268_);
lean_inc_ref(v_normProcs_267_);
lean_inc_ref(v_norm_266_);
lean_inc_ref(v_symPrios_265_);
lean_inc_ref(v_extraFacts_264_);
lean_inc_ref(v_extraInj_263_);
lean_inc_ref(v_extra_262_);
lean_inc_ref(v_extensions_261_);
lean_inc_ref(v_config_260_);
v_isSharedCheck_296_ = !lean_is_exclusive(v_params_258_);
if (v_isSharedCheck_296_ == 0)
{
lean_object* v_unused_297_; lean_object* v_unused_298_; lean_object* v_unused_299_; lean_object* v_unused_300_; lean_object* v_unused_301_; lean_object* v_unused_302_; lean_object* v_unused_303_; lean_object* v_unused_304_; lean_object* v_unused_305_; 
v_unused_297_ = lean_ctor_get(v_params_258_, 8);
lean_dec(v_unused_297_);
v_unused_298_ = lean_ctor_get(v_params_258_, 7);
lean_dec(v_unused_298_);
v_unused_299_ = lean_ctor_get(v_params_258_, 6);
lean_dec(v_unused_299_);
v_unused_300_ = lean_ctor_get(v_params_258_, 5);
lean_dec(v_unused_300_);
v_unused_301_ = lean_ctor_get(v_params_258_, 4);
lean_dec(v_unused_301_);
v_unused_302_ = lean_ctor_get(v_params_258_, 3);
lean_dec(v_unused_302_);
v_unused_303_ = lean_ctor_get(v_params_258_, 2);
lean_dec(v_unused_303_);
v_unused_304_ = lean_ctor_get(v_params_258_, 1);
lean_dec(v_unused_304_);
v_unused_305_ = lean_ctor_get(v_params_258_, 0);
lean_dec(v_unused_305_);
v___x_273_ = v_params_258_;
v_isShared_274_ = v_isSharedCheck_296_;
goto v_resetjp_272_;
}
else
{
lean_dec(v_params_258_);
v___x_273_ = lean_box(0);
v_isShared_274_ = v_isSharedCheck_296_;
goto v_resetjp_272_;
}
v_resetjp_272_:
{
lean_object* v_v_275_; lean_object* v_casesTypes_276_; lean_object* v_extThms_277_; lean_object* v_funCC_278_; lean_object* v_ematch_279_; lean_object* v_inj_280_; lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_295_; 
v_v_275_ = lean_array_fget(v_extensions_261_, v___x_269_);
v_casesTypes_276_ = lean_ctor_get(v_v_275_, 0);
v_extThms_277_ = lean_ctor_get(v_v_275_, 1);
v_funCC_278_ = lean_ctor_get(v_v_275_, 2);
v_ematch_279_ = lean_ctor_get(v_v_275_, 3);
v_inj_280_ = lean_ctor_get(v_v_275_, 4);
v_isSharedCheck_295_ = !lean_is_exclusive(v_v_275_);
if (v_isSharedCheck_295_ == 0)
{
v___x_282_ = v_v_275_;
v_isShared_283_ = v_isSharedCheck_295_;
goto v_resetjp_281_;
}
else
{
lean_inc(v_inj_280_);
lean_inc(v_ematch_279_);
lean_inc(v_funCC_278_);
lean_inc(v_extThms_277_);
lean_inc(v_casesTypes_276_);
lean_dec(v_v_275_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_295_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v___x_284_; lean_object* v_xs_x27_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_289_; 
v___x_284_ = lean_box(0);
v_xs_x27_285_ = lean_array_fset(v_extensions_261_, v___x_269_, v___x_284_);
v___x_286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_286_, 0, v_declName_259_);
v___x_287_ = l_Lean_Meta_Grind_Theorems_erase___redArg(v_ematch_279_, v___x_286_);
if (v_isShared_283_ == 0)
{
lean_ctor_set(v___x_282_, 3, v___x_287_);
v___x_289_ = v___x_282_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v_casesTypes_276_);
lean_ctor_set(v_reuseFailAlloc_294_, 1, v_extThms_277_);
lean_ctor_set(v_reuseFailAlloc_294_, 2, v_funCC_278_);
lean_ctor_set(v_reuseFailAlloc_294_, 3, v___x_287_);
lean_ctor_set(v_reuseFailAlloc_294_, 4, v_inj_280_);
v___x_289_ = v_reuseFailAlloc_294_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
lean_object* v___x_290_; lean_object* v___x_292_; 
v___x_290_ = lean_array_fset(v_xs_x27_285_, v___x_269_, v___x_289_);
if (v_isShared_274_ == 0)
{
lean_ctor_set(v___x_273_, 1, v___x_290_);
v___x_292_ = v___x_273_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_config_260_);
lean_ctor_set(v_reuseFailAlloc_293_, 1, v___x_290_);
lean_ctor_set(v_reuseFailAlloc_293_, 2, v_extra_262_);
lean_ctor_set(v_reuseFailAlloc_293_, 3, v_extraInj_263_);
lean_ctor_set(v_reuseFailAlloc_293_, 4, v_extraFacts_264_);
lean_ctor_set(v_reuseFailAlloc_293_, 5, v_symPrios_265_);
lean_ctor_set(v_reuseFailAlloc_293_, 6, v_norm_266_);
lean_ctor_set(v_reuseFailAlloc_293_, 7, v_normProcs_267_);
lean_ctor_set(v_reuseFailAlloc_293_, 8, v_anchorRefs_x3f_268_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__1(lean_object* v_params_306_, uint8_t v___x_307_, lean_object* v_as_308_, size_t v_i_309_, size_t v_stop_310_){
_start:
{
uint8_t v___x_311_; 
v___x_311_ = lean_usize_dec_eq(v_i_309_, v_stop_310_);
if (v___x_311_ == 0)
{
uint8_t v___x_312_; lean_object* v___x_313_; uint8_t v___x_314_; 
v___x_312_ = 1;
v___x_313_ = lean_array_uget_borrowed(v_as_308_, v_i_309_);
lean_inc(v___x_313_);
v___x_314_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch(v_params_306_, v___x_313_);
if (v___x_314_ == 0)
{
return v___x_312_;
}
else
{
if (v___x_307_ == 0)
{
size_t v___x_315_; size_t v___x_316_; 
v___x_315_ = ((size_t)1ULL);
v___x_316_ = lean_usize_add(v_i_309_, v___x_315_);
v_i_309_ = v___x_316_;
goto _start;
}
else
{
return v___x_312_;
}
}
}
else
{
uint8_t v___x_318_; 
v___x_318_ = 0;
return v___x_318_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__1___boxed(lean_object* v_params_319_, lean_object* v___x_320_, lean_object* v_as_321_, lean_object* v_i_322_, lean_object* v_stop_323_){
_start:
{
uint8_t v___x_1859__boxed_324_; size_t v_i_boxed_325_; size_t v_stop_boxed_326_; uint8_t v_res_327_; lean_object* v_r_328_; 
v___x_1859__boxed_324_ = lean_unbox(v___x_320_);
v_i_boxed_325_ = lean_unbox_usize(v_i_322_);
lean_dec(v_i_322_);
v_stop_boxed_326_ = lean_unbox_usize(v_stop_323_);
lean_dec(v_stop_323_);
v_res_327_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__1(v_params_319_, v___x_1859__boxed_324_, v_as_321_, v_i_boxed_325_, v_stop_boxed_326_);
lean_dec_ref(v_as_321_);
lean_dec_ref(v_params_319_);
v_r_328_ = lean_box(v_res_327_);
return v_r_328_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__0(lean_object* v_as_329_, size_t v_i_330_, size_t v_stop_331_, lean_object* v_b_332_){
_start:
{
uint8_t v___x_333_; 
v___x_333_ = lean_usize_dec_eq(v_i_330_, v_stop_331_);
if (v___x_333_ == 0)
{
lean_object* v___x_334_; lean_object* v___x_335_; size_t v___x_336_; size_t v___x_337_; 
v___x_334_ = lean_array_uget_borrowed(v_as_329_, v_i_330_);
lean_inc(v___x_334_);
v___x_335_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatchCore(v_b_332_, v___x_334_);
v___x_336_ = ((size_t)1ULL);
v___x_337_ = lean_usize_add(v_i_330_, v___x_336_);
v_i_330_ = v___x_337_;
v_b_332_ = v___x_335_;
goto _start;
}
else
{
return v_b_332_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__0___boxed(lean_object* v_as_339_, lean_object* v_i_340_, lean_object* v_stop_341_, lean_object* v_b_342_){
_start:
{
size_t v_i_boxed_343_; size_t v_stop_boxed_344_; lean_object* v_res_345_; 
v_i_boxed_343_ = lean_unbox_usize(v_i_340_);
lean_dec(v_i_340_);
v_stop_boxed_344_ = lean_unbox_usize(v_stop_341_);
lean_dec(v_stop_341_);
v_res_345_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__0(v_as_339_, v_i_boxed_343_, v_stop_boxed_344_, v_b_342_);
lean_dec_ref(v_as_339_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch(lean_object* v_params_346_, lean_object* v_declName_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_){
_start:
{
lean_object* v___x_356_; lean_object* v_env_357_; uint8_t v___x_358_; 
v___x_356_ = lean_st_ref_get(v___y_351_);
v_env_357_ = lean_ctor_get(v___x_356_, 0);
lean_inc_ref(v_env_357_);
lean_dec(v___x_356_);
lean_inc(v_declName_347_);
v___x_358_ = l_Lean_wasOriginallyTheorem(v_env_357_, v_declName_347_);
if (v___x_358_ == 0)
{
lean_object* v___x_359_; 
lean_inc(v_declName_347_);
v___x_359_ = l_Lean_Meta_getEqnsFor_x3f(v_declName_347_, v___y_348_, v___y_349_, v___y_350_, v___y_351_);
if (lean_obj_tag(v___x_359_) == 0)
{
lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_404_; 
v_a_360_ = lean_ctor_get(v___x_359_, 0);
v_isSharedCheck_404_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_404_ == 0)
{
v___x_362_ = v___x_359_;
v_isShared_363_ = v_isSharedCheck_404_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_dec(v___x_359_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_404_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
if (lean_obj_tag(v_a_360_) == 1)
{
lean_object* v_val_364_; lean_object* v___x_388_; lean_object* v___x_389_; uint8_t v___x_390_; 
v_val_364_ = lean_ctor_get(v_a_360_, 0);
lean_inc(v_val_364_);
lean_dec_ref_known(v_a_360_, 1);
v___x_388_ = lean_unsigned_to_nat(0u);
v___x_389_ = lean_array_get_size(v_val_364_);
v___x_390_ = lean_nat_dec_lt(v___x_388_, v___x_389_);
if (v___x_390_ == 0)
{
lean_dec(v_declName_347_);
goto v___jp_365_;
}
else
{
if (v___x_390_ == 0)
{
lean_dec(v_declName_347_);
goto v___jp_365_;
}
else
{
size_t v___x_391_; size_t v___x_392_; uint8_t v___x_393_; 
v___x_391_ = ((size_t)0ULL);
v___x_392_ = lean_usize_of_nat(v___x_389_);
v___x_393_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__1(v_params_346_, v___x_358_, v_val_364_, v___x_391_, v___x_392_);
if (v___x_393_ == 0)
{
lean_dec(v_declName_347_);
goto v___jp_365_;
}
else
{
lean_object* v___x_394_; 
v___x_394_ = l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(v_declName_347_, v___y_350_, v___y_351_);
if (lean_obj_tag(v___x_394_) == 0)
{
lean_dec_ref_known(v___x_394_, 1);
goto v___jp_365_;
}
else
{
lean_object* v_a_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_402_; 
lean_dec(v_val_364_);
lean_del_object(v___x_362_);
lean_dec_ref(v_params_346_);
v_a_395_ = lean_ctor_get(v___x_394_, 0);
v_isSharedCheck_402_ = !lean_is_exclusive(v___x_394_);
if (v_isSharedCheck_402_ == 0)
{
v___x_397_ = v___x_394_;
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_a_395_);
lean_dec(v___x_394_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_400_; 
if (v_isShared_398_ == 0)
{
v___x_400_ = v___x_397_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_a_395_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
}
}
}
}
v___jp_365_:
{
lean_object* v___x_366_; lean_object* v___x_367_; uint8_t v___x_368_; 
v___x_366_ = lean_unsigned_to_nat(0u);
v___x_367_ = lean_array_get_size(v_val_364_);
v___x_368_ = lean_nat_dec_lt(v___x_366_, v___x_367_);
if (v___x_368_ == 0)
{
lean_object* v___x_370_; 
lean_dec(v_val_364_);
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 0, v_params_346_);
v___x_370_ = v___x_362_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v_params_346_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
return v___x_370_;
}
}
else
{
uint8_t v___x_372_; 
v___x_372_ = lean_nat_dec_le(v___x_367_, v___x_367_);
if (v___x_372_ == 0)
{
if (v___x_368_ == 0)
{
lean_object* v___x_374_; 
lean_dec(v_val_364_);
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 0, v_params_346_);
v___x_374_ = v___x_362_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v_params_346_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
else
{
size_t v___x_376_; size_t v___x_377_; lean_object* v___x_378_; lean_object* v___x_380_; 
v___x_376_ = ((size_t)0ULL);
v___x_377_ = lean_usize_of_nat(v___x_367_);
v___x_378_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__0(v_val_364_, v___x_376_, v___x_377_, v_params_346_);
lean_dec(v_val_364_);
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 0, v___x_378_);
v___x_380_ = v___x_362_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v___x_378_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
return v___x_380_;
}
}
}
else
{
size_t v___x_382_; size_t v___x_383_; lean_object* v___x_384_; lean_object* v___x_386_; 
v___x_382_ = ((size_t)0ULL);
v___x_383_ = lean_usize_of_nat(v___x_367_);
v___x_384_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__0(v_val_364_, v___x_382_, v___x_383_, v_params_346_);
lean_dec(v_val_364_);
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 0, v___x_384_);
v___x_386_ = v___x_362_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v___x_384_);
v___x_386_ = v_reuseFailAlloc_387_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
return v___x_386_;
}
}
}
}
}
else
{
lean_object* v___x_403_; 
lean_del_object(v___x_362_);
lean_dec(v_a_360_);
lean_dec_ref(v_params_346_);
v___x_403_ = l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(v_declName_347_, v___y_350_, v___y_351_);
return v___x_403_;
}
}
}
else
{
lean_object* v_a_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_412_; 
lean_dec(v_declName_347_);
lean_dec_ref(v_params_346_);
v_a_405_ = lean_ctor_get(v___x_359_, 0);
v_isSharedCheck_412_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_412_ == 0)
{
v___x_407_ = v___x_359_;
v_isShared_408_ = v_isSharedCheck_412_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_a_405_);
lean_dec(v___x_359_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_412_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___x_410_; 
if (v_isShared_408_ == 0)
{
v___x_410_ = v___x_407_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v_a_405_);
v___x_410_ = v_reuseFailAlloc_411_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
return v___x_410_;
}
}
}
}
else
{
uint8_t v___x_413_; 
lean_inc(v_declName_347_);
v___x_413_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch(v_params_346_, v_declName_347_);
if (v___x_413_ == 0)
{
lean_object* v___x_414_; 
lean_inc(v_declName_347_);
v___x_414_ = l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(v_declName_347_, v___y_350_, v___y_351_);
if (lean_obj_tag(v___x_414_) == 0)
{
lean_dec_ref_known(v___x_414_, 1);
goto v___jp_353_;
}
else
{
lean_object* v_a_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_422_; 
lean_dec(v_declName_347_);
lean_dec_ref(v_params_346_);
v_a_415_ = lean_ctor_get(v___x_414_, 0);
v_isSharedCheck_422_ = !lean_is_exclusive(v___x_414_);
if (v_isSharedCheck_422_ == 0)
{
v___x_417_ = v___x_414_;
v_isShared_418_ = v_isSharedCheck_422_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_a_415_);
lean_dec(v___x_414_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_422_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v___x_420_; 
if (v_isShared_418_ == 0)
{
v___x_420_ = v___x_417_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v_a_415_);
v___x_420_ = v_reuseFailAlloc_421_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
return v___x_420_;
}
}
}
}
else
{
goto v___jp_353_;
}
}
v___jp_353_:
{
lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_354_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatchCore(v_params_346_, v_declName_347_);
v___x_355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_355_, 0, v___x_354_);
return v___x_355_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch___boxed(lean_object* v_params_423_, lean_object* v_declName_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_){
_start:
{
lean_object* v_res_430_; 
v_res_430_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch(v_params_423_, v_declName_424_, v___y_425_, v___y_426_, v___y_427_, v___y_428_);
lean_dec(v___y_428_);
lean_dec_ref(v___y_427_);
lean_dec(v___y_426_);
lean_dec_ref(v___y_425_);
return v_res_430_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseInj(lean_object* v_params_431_, lean_object* v_declName_432_){
_start:
{
lean_object* v_config_433_; lean_object* v_extensions_434_; lean_object* v_extra_435_; lean_object* v_extraInj_436_; lean_object* v_extraFacts_437_; lean_object* v_symPrios_438_; lean_object* v_norm_439_; lean_object* v_normProcs_440_; lean_object* v_anchorRefs_x3f_441_; lean_object* v___x_442_; lean_object* v___x_443_; uint8_t v___x_444_; 
v_config_433_ = lean_ctor_get(v_params_431_, 0);
v_extensions_434_ = lean_ctor_get(v_params_431_, 1);
v_extra_435_ = lean_ctor_get(v_params_431_, 2);
v_extraInj_436_ = lean_ctor_get(v_params_431_, 3);
v_extraFacts_437_ = lean_ctor_get(v_params_431_, 4);
v_symPrios_438_ = lean_ctor_get(v_params_431_, 5);
v_norm_439_ = lean_ctor_get(v_params_431_, 6);
v_normProcs_440_ = lean_ctor_get(v_params_431_, 7);
v_anchorRefs_x3f_441_ = lean_ctor_get(v_params_431_, 8);
v___x_442_ = lean_unsigned_to_nat(0u);
v___x_443_ = lean_array_get_size(v_extensions_434_);
v___x_444_ = lean_nat_dec_lt(v___x_442_, v___x_443_);
if (v___x_444_ == 0)
{
lean_dec(v_declName_432_);
return v_params_431_;
}
else
{
lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_469_; 
lean_inc(v_anchorRefs_x3f_441_);
lean_inc_ref(v_normProcs_440_);
lean_inc_ref(v_norm_439_);
lean_inc_ref(v_symPrios_438_);
lean_inc_ref(v_extraFacts_437_);
lean_inc_ref(v_extraInj_436_);
lean_inc_ref(v_extra_435_);
lean_inc_ref(v_extensions_434_);
lean_inc_ref(v_config_433_);
v_isSharedCheck_469_ = !lean_is_exclusive(v_params_431_);
if (v_isSharedCheck_469_ == 0)
{
lean_object* v_unused_470_; lean_object* v_unused_471_; lean_object* v_unused_472_; lean_object* v_unused_473_; lean_object* v_unused_474_; lean_object* v_unused_475_; lean_object* v_unused_476_; lean_object* v_unused_477_; lean_object* v_unused_478_; 
v_unused_470_ = lean_ctor_get(v_params_431_, 8);
lean_dec(v_unused_470_);
v_unused_471_ = lean_ctor_get(v_params_431_, 7);
lean_dec(v_unused_471_);
v_unused_472_ = lean_ctor_get(v_params_431_, 6);
lean_dec(v_unused_472_);
v_unused_473_ = lean_ctor_get(v_params_431_, 5);
lean_dec(v_unused_473_);
v_unused_474_ = lean_ctor_get(v_params_431_, 4);
lean_dec(v_unused_474_);
v_unused_475_ = lean_ctor_get(v_params_431_, 3);
lean_dec(v_unused_475_);
v_unused_476_ = lean_ctor_get(v_params_431_, 2);
lean_dec(v_unused_476_);
v_unused_477_ = lean_ctor_get(v_params_431_, 1);
lean_dec(v_unused_477_);
v_unused_478_ = lean_ctor_get(v_params_431_, 0);
lean_dec(v_unused_478_);
v___x_446_ = v_params_431_;
v_isShared_447_ = v_isSharedCheck_469_;
goto v_resetjp_445_;
}
else
{
lean_dec(v_params_431_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_469_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v_v_448_; lean_object* v_casesTypes_449_; lean_object* v_extThms_450_; lean_object* v_funCC_451_; lean_object* v_ematch_452_; lean_object* v_inj_453_; lean_object* v___x_455_; uint8_t v_isShared_456_; uint8_t v_isSharedCheck_468_; 
v_v_448_ = lean_array_fget(v_extensions_434_, v___x_442_);
v_casesTypes_449_ = lean_ctor_get(v_v_448_, 0);
v_extThms_450_ = lean_ctor_get(v_v_448_, 1);
v_funCC_451_ = lean_ctor_get(v_v_448_, 2);
v_ematch_452_ = lean_ctor_get(v_v_448_, 3);
v_inj_453_ = lean_ctor_get(v_v_448_, 4);
v_isSharedCheck_468_ = !lean_is_exclusive(v_v_448_);
if (v_isSharedCheck_468_ == 0)
{
v___x_455_ = v_v_448_;
v_isShared_456_ = v_isSharedCheck_468_;
goto v_resetjp_454_;
}
else
{
lean_inc(v_inj_453_);
lean_inc(v_ematch_452_);
lean_inc(v_funCC_451_);
lean_inc(v_extThms_450_);
lean_inc(v_casesTypes_449_);
lean_dec(v_v_448_);
v___x_455_ = lean_box(0);
v_isShared_456_ = v_isSharedCheck_468_;
goto v_resetjp_454_;
}
v_resetjp_454_:
{
lean_object* v___x_457_; lean_object* v_xs_x27_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_462_; 
v___x_457_ = lean_box(0);
v_xs_x27_458_ = lean_array_fset(v_extensions_434_, v___x_442_, v___x_457_);
v___x_459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_459_, 0, v_declName_432_);
v___x_460_ = l_Lean_Meta_Grind_Theorems_erase___redArg(v_inj_453_, v___x_459_);
if (v_isShared_456_ == 0)
{
lean_ctor_set(v___x_455_, 4, v___x_460_);
v___x_462_ = v___x_455_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v_casesTypes_449_);
lean_ctor_set(v_reuseFailAlloc_467_, 1, v_extThms_450_);
lean_ctor_set(v_reuseFailAlloc_467_, 2, v_funCC_451_);
lean_ctor_set(v_reuseFailAlloc_467_, 3, v_ematch_452_);
lean_ctor_set(v_reuseFailAlloc_467_, 4, v___x_460_);
v___x_462_ = v_reuseFailAlloc_467_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
lean_object* v___x_463_; lean_object* v___x_465_; 
v___x_463_ = lean_array_fset(v_xs_x27_458_, v___x_442_, v___x_462_);
if (v_isShared_447_ == 0)
{
lean_ctor_set(v___x_446_, 1, v___x_463_);
v___x_465_ = v___x_446_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v_config_433_);
lean_ctor_set(v_reuseFailAlloc_466_, 1, v___x_463_);
lean_ctor_set(v_reuseFailAlloc_466_, 2, v_extra_435_);
lean_ctor_set(v_reuseFailAlloc_466_, 3, v_extraInj_436_);
lean_ctor_set(v_reuseFailAlloc_466_, 4, v_extraFacts_437_);
lean_ctor_set(v_reuseFailAlloc_466_, 5, v_symPrios_438_);
lean_ctor_set(v_reuseFailAlloc_466_, 6, v_norm_439_);
lean_ctor_set(v_reuseFailAlloc_466_, 7, v_normProcs_440_);
lean_ctor_set(v_reuseFailAlloc_466_, 8, v_anchorRefs_x3f_441_);
v___x_465_ = v_reuseFailAlloc_466_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
return v___x_465_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor_spec__0(lean_object* v_origin_479_, lean_object* v_as_480_, size_t v_sz_481_, size_t v_i_482_, lean_object* v_b_483_){
_start:
{
lean_object* v_a_485_; uint8_t v___x_489_; 
v___x_489_ = lean_usize_dec_lt(v_i_482_, v_sz_481_);
if (v___x_489_ == 0)
{
return v_b_483_;
}
else
{
lean_object* v_a_490_; lean_object* v_ematch_491_; lean_object* v___x_492_; uint8_t v___x_493_; 
v_a_490_ = lean_array_uget_borrowed(v_as_480_, v_i_482_);
v_ematch_491_ = lean_ctor_get(v_a_490_, 3);
v___x_492_ = l_Lean_Meta_Grind_EMatchTheorems_getKindsFor(v_ematch_491_, v_origin_479_);
v___x_493_ = l_List_isEmpty___redArg(v___x_492_);
if (v___x_493_ == 0)
{
lean_object* v___x_494_; 
v___x_494_ = l_List_appendTR___redArg(v_b_483_, v___x_492_);
v_a_485_ = v___x_494_;
goto v___jp_484_;
}
else
{
lean_dec(v___x_492_);
v_a_485_ = v_b_483_;
goto v___jp_484_;
}
}
v___jp_484_:
{
size_t v___x_486_; size_t v___x_487_; 
v___x_486_ = ((size_t)1ULL);
v___x_487_ = lean_usize_add(v_i_482_, v___x_486_);
v_i_482_ = v___x_487_;
v_b_483_ = v_a_485_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor_spec__0___boxed(lean_object* v_origin_495_, lean_object* v_as_496_, lean_object* v_sz_497_, lean_object* v_i_498_, lean_object* v_b_499_){
_start:
{
size_t v_sz_boxed_500_; size_t v_i_boxed_501_; lean_object* v_res_502_; 
v_sz_boxed_500_ = lean_unbox_usize(v_sz_497_);
lean_dec(v_sz_497_);
v_i_boxed_501_ = lean_unbox_usize(v_i_498_);
lean_dec(v_i_498_);
v_res_502_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor_spec__0(v_origin_495_, v_as_496_, v_sz_boxed_500_, v_i_boxed_501_, v_b_499_);
lean_dec_ref(v_as_496_);
lean_dec_ref(v_origin_495_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor(lean_object* v_s_503_, lean_object* v_origin_504_){
_start:
{
lean_object* v_result_505_; size_t v_sz_506_; size_t v___x_507_; lean_object* v___x_508_; 
v_result_505_ = lean_box(0);
v_sz_506_ = lean_array_size(v_s_503_);
v___x_507_ = ((size_t)0ULL);
v___x_508_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor_spec__0(v_origin_504_, v_s_503_, v_sz_506_, v___x_507_, v_result_505_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor___boxed(lean_object* v_s_509_, lean_object* v_origin_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor(v_s_509_, v_origin_510_);
lean_dec_ref(v_origin_510_);
lean_dec_ref(v_s_509_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0___redArg(lean_object* v_upperBound_512_, lean_object* v_s_513_, lean_object* v_origin_514_, lean_object* v_a_515_, lean_object* v_b_516_){
_start:
{
lean_object* v_a_518_; uint8_t v___x_522_; 
v___x_522_ = lean_nat_dec_lt(v_a_515_, v_upperBound_512_);
if (v___x_522_ == 0)
{
lean_dec(v_a_515_);
return v_b_516_;
}
else
{
lean_object* v___x_523_; lean_object* v_ematch_524_; lean_object* v___x_525_; uint8_t v___x_526_; 
v___x_523_ = lean_array_fget_borrowed(v_s_513_, v_a_515_);
v_ematch_524_ = lean_ctor_get(v___x_523_, 3);
v___x_525_ = l_Lean_Meta_Grind_Theorems_find___redArg(v_ematch_524_, v_origin_514_);
v___x_526_ = l_List_isEmpty___redArg(v___x_525_);
if (v___x_526_ == 0)
{
lean_object* v___x_527_; 
v___x_527_ = l_List_appendTR___redArg(v_b_516_, v___x_525_);
v_a_518_ = v___x_527_;
goto v___jp_517_;
}
else
{
lean_dec(v___x_525_);
v_a_518_ = v_b_516_;
goto v___jp_517_;
}
}
v___jp_517_:
{
lean_object* v___x_519_; lean_object* v___x_520_; 
v___x_519_ = lean_unsigned_to_nat(1u);
v___x_520_ = lean_nat_add(v_a_515_, v___x_519_);
lean_dec(v_a_515_);
v_a_515_ = v___x_520_;
v_b_516_ = v_a_518_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0___redArg___boxed(lean_object* v_upperBound_528_, lean_object* v_s_529_, lean_object* v_origin_530_, lean_object* v_a_531_, lean_object* v_b_532_){
_start:
{
lean_object* v_res_533_; 
v_res_533_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0___redArg(v_upperBound_528_, v_s_529_, v_origin_530_, v_a_531_, v_b_532_);
lean_dec_ref(v_origin_530_);
lean_dec_ref(v_s_529_);
lean_dec(v_upperBound_528_);
return v_res_533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ExtensionStateArray_find(lean_object* v_s_534_, lean_object* v_origin_535_){
_start:
{
lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v_r_538_; lean_object* v___x_539_; 
v___x_536_ = lean_array_get_size(v_s_534_);
v___x_537_ = lean_unsigned_to_nat(0u);
v_r_538_ = lean_box(0);
v___x_539_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0___redArg(v___x_536_, v_s_534_, v_origin_535_, v___x_537_, v_r_538_);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ExtensionStateArray_find___boxed(lean_object* v_s_540_, lean_object* v_origin_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = l_Lean_Meta_Grind_ExtensionStateArray_find(v_s_540_, v_origin_541_);
lean_dec_ref(v_origin_541_);
lean_dec_ref(v_s_540_);
return v_res_542_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0(lean_object* v_upperBound_543_, lean_object* v_s_544_, lean_object* v_origin_545_, lean_object* v_inst_546_, lean_object* v_R_547_, lean_object* v_a_548_, lean_object* v_b_549_, lean_object* v_c_550_){
_start:
{
lean_object* v___x_551_; 
v___x_551_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0___redArg(v_upperBound_543_, v_s_544_, v_origin_545_, v_a_548_, v_b_549_);
return v___x_551_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0___boxed(lean_object* v_upperBound_552_, lean_object* v_s_553_, lean_object* v_origin_554_, lean_object* v_inst_555_, lean_object* v_R_556_, lean_object* v_a_557_, lean_object* v_b_558_, lean_object* v_c_559_){
_start:
{
lean_object* v_res_560_; 
v_res_560_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0(v_upperBound_552_, v_s_553_, v_origin_554_, v_inst_555_, v_R_556_, v_a_557_, v_b_558_, v_c_559_);
lean_dec_ref(v_origin_554_);
lean_dec_ref(v_s_553_);
lean_dec(v_upperBound_552_);
return v_res_560_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__4(lean_object* v_msgData_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_){
_start:
{
lean_object* v___x_567_; lean_object* v_env_568_; lean_object* v___x_569_; lean_object* v_toCold_570_; lean_object* v_mctx_571_; lean_object* v_lctx_572_; lean_object* v_options_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_567_ = lean_st_ref_get(v___y_565_);
v_env_568_ = lean_ctor_get(v___x_567_, 0);
lean_inc_ref(v_env_568_);
lean_dec(v___x_567_);
v___x_569_ = lean_st_ref_get(v___y_563_);
v_toCold_570_ = lean_ctor_get(v___y_564_, 0);
v_mctx_571_ = lean_ctor_get(v___x_569_, 0);
lean_inc_ref(v_mctx_571_);
lean_dec(v___x_569_);
v_lctx_572_ = lean_ctor_get(v___y_562_, 2);
v_options_573_ = lean_ctor_get(v_toCold_570_, 2);
lean_inc_ref(v_options_573_);
lean_inc_ref(v_lctx_572_);
v___x_574_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_574_, 0, v_env_568_);
lean_ctor_set(v___x_574_, 1, v_mctx_571_);
lean_ctor_set(v___x_574_, 2, v_lctx_572_);
lean_ctor_set(v___x_574_, 3, v_options_573_);
v___x_575_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_575_, 0, v___x_574_);
lean_ctor_set(v___x_575_, 1, v_msgData_561_);
v___x_576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_576_, 0, v___x_575_);
return v___x_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_msgData_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_){
_start:
{
lean_object* v_res_583_; 
v_res_583_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__4(v_msgData_577_, v___y_578_, v___y_579_, v___y_580_, v___y_581_);
lean_dec(v___y_581_);
lean_dec_ref(v___y_580_);
lean_dec(v___y_579_);
lean_dec_ref(v___y_578_);
return v_res_583_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5(lean_object* v_opts_584_, lean_object* v_opt_585_){
_start:
{
lean_object* v_name_586_; lean_object* v_defValue_587_; lean_object* v_map_588_; lean_object* v___x_589_; 
v_name_586_ = lean_ctor_get(v_opt_585_, 0);
v_defValue_587_ = lean_ctor_get(v_opt_585_, 1);
v_map_588_ = lean_ctor_get(v_opts_584_, 0);
v___x_589_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_588_, v_name_586_);
if (lean_obj_tag(v___x_589_) == 0)
{
uint8_t v___x_590_; 
v___x_590_ = lean_unbox(v_defValue_587_);
return v___x_590_;
}
else
{
lean_object* v_val_591_; 
v_val_591_ = lean_ctor_get(v___x_589_, 0);
lean_inc(v_val_591_);
lean_dec_ref_known(v___x_589_, 1);
if (lean_obj_tag(v_val_591_) == 1)
{
uint8_t v_v_592_; 
v_v_592_ = lean_ctor_get_uint8(v_val_591_, 0);
lean_dec_ref_known(v_val_591_, 0);
return v_v_592_;
}
else
{
uint8_t v___x_593_; 
lean_dec(v_val_591_);
v___x_593_ = lean_unbox(v_defValue_587_);
return v___x_593_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v_opts_594_, lean_object* v_opt_595_){
_start:
{
uint8_t v_res_596_; lean_object* v_r_597_; 
v_res_596_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5(v_opts_594_, v_opt_595_);
lean_dec_ref(v_opt_595_);
lean_dec_ref(v_opts_594_);
v_r_597_ = lean_box(v_res_596_);
return v_r_597_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0(uint8_t v_suppressElabErrors_606_, uint8_t v___y_607_, lean_object* v_x_608_){
_start:
{
if (lean_obj_tag(v_x_608_) == 1)
{
lean_object* v_pre_609_; 
v_pre_609_ = lean_ctor_get(v_x_608_, 0);
switch(lean_obj_tag(v_pre_609_))
{
case 1:
{
lean_object* v_pre_610_; 
v_pre_610_ = lean_ctor_get(v_pre_609_, 0);
switch(lean_obj_tag(v_pre_610_))
{
case 0:
{
lean_object* v_str_611_; lean_object* v_str_612_; lean_object* v___x_613_; uint8_t v___x_614_; 
v_str_611_ = lean_ctor_get(v_x_608_, 1);
v_str_612_ = lean_ctor_get(v_pre_609_, 1);
v___x_613_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__0));
v___x_614_ = lean_string_dec_eq(v_str_612_, v___x_613_);
if (v___x_614_ == 0)
{
lean_object* v___x_615_; uint8_t v___x_616_; 
v___x_615_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__1));
v___x_616_ = lean_string_dec_eq(v_str_612_, v___x_615_);
if (v___x_616_ == 0)
{
return v___x_616_;
}
else
{
lean_object* v___x_617_; uint8_t v___x_618_; 
v___x_617_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__2));
v___x_618_ = lean_string_dec_eq(v_str_611_, v___x_617_);
if (v___x_618_ == 0)
{
return v___x_618_;
}
else
{
return v_suppressElabErrors_606_;
}
}
}
else
{
lean_object* v___x_619_; uint8_t v___x_620_; 
v___x_619_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__3));
v___x_620_ = lean_string_dec_eq(v_str_611_, v___x_619_);
if (v___x_620_ == 0)
{
return v___x_620_;
}
else
{
return v_suppressElabErrors_606_;
}
}
}
case 1:
{
lean_object* v_pre_621_; 
v_pre_621_ = lean_ctor_get(v_pre_610_, 0);
if (lean_obj_tag(v_pre_621_) == 0)
{
lean_object* v_str_622_; lean_object* v_str_623_; lean_object* v_str_624_; lean_object* v___x_625_; uint8_t v___x_626_; 
v_str_622_ = lean_ctor_get(v_x_608_, 1);
v_str_623_ = lean_ctor_get(v_pre_609_, 1);
v_str_624_ = lean_ctor_get(v_pre_610_, 1);
v___x_625_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__4));
v___x_626_ = lean_string_dec_eq(v_str_624_, v___x_625_);
if (v___x_626_ == 0)
{
return v___x_626_;
}
else
{
lean_object* v___x_627_; uint8_t v___x_628_; 
v___x_627_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__5));
v___x_628_ = lean_string_dec_eq(v_str_623_, v___x_627_);
if (v___x_628_ == 0)
{
return v___x_628_;
}
else
{
lean_object* v___x_629_; uint8_t v___x_630_; 
v___x_629_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__6));
v___x_630_ = lean_string_dec_eq(v_str_622_, v___x_629_);
if (v___x_630_ == 0)
{
return v___x_630_;
}
else
{
return v_suppressElabErrors_606_;
}
}
}
}
else
{
return v___y_607_;
}
}
default: 
{
return v___y_607_;
}
}
}
case 0:
{
lean_object* v_str_631_; lean_object* v___x_632_; uint8_t v___x_633_; 
v_str_631_ = lean_ctor_get(v_x_608_, 1);
v___x_632_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__7));
v___x_633_ = lean_string_dec_eq(v_str_631_, v___x_632_);
if (v___x_633_ == 0)
{
return v___x_633_;
}
else
{
return v_suppressElabErrors_606_;
}
}
default: 
{
return v___y_607_;
}
}
}
else
{
return v___y_607_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___boxed(lean_object* v_suppressElabErrors_634_, lean_object* v___y_635_, lean_object* v_x_636_){
_start:
{
uint8_t v_suppressElabErrors_boxed_637_; uint8_t v___y_4687__boxed_638_; uint8_t v_res_639_; lean_object* v_r_640_; 
v_suppressElabErrors_boxed_637_ = lean_unbox(v_suppressElabErrors_634_);
v___y_4687__boxed_638_ = lean_unbox(v___y_635_);
v_res_639_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0(v_suppressElabErrors_boxed_637_, v___y_4687__boxed_638_, v_x_636_);
lean_dec(v_x_636_);
v_r_640_ = lean_box(v_res_639_);
return v_r_640_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1(lean_object* v_ref_642_, lean_object* v_msgData_643_, uint8_t v_severity_644_, uint8_t v_isSilent_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_){
_start:
{
lean_object* v___y_652_; uint8_t v___y_653_; lean_object* v___y_654_; lean_object* v___y_655_; lean_object* v___y_656_; lean_object* v___y_657_; uint8_t v___y_658_; lean_object* v_currNamespace_659_; lean_object* v_openDecls_660_; lean_object* v___y_661_; lean_object* v___y_687_; lean_object* v___y_688_; lean_object* v___y_689_; uint8_t v___y_690_; uint8_t v___y_691_; lean_object* v___y_692_; uint8_t v___y_693_; lean_object* v___y_694_; lean_object* v___y_695_; lean_object* v___y_696_; lean_object* v___y_714_; lean_object* v___y_715_; lean_object* v___y_716_; uint8_t v___y_717_; uint8_t v___y_718_; lean_object* v___y_719_; lean_object* v___y_720_; uint8_t v___y_721_; lean_object* v___y_722_; lean_object* v___y_723_; lean_object* v___y_727_; lean_object* v___y_728_; lean_object* v___y_729_; uint8_t v___y_730_; uint8_t v___y_731_; lean_object* v___y_732_; lean_object* v___y_733_; lean_object* v___y_734_; uint8_t v___y_735_; uint8_t v___x_740_; lean_object* v___y_742_; lean_object* v___y_743_; lean_object* v___y_744_; lean_object* v___y_745_; lean_object* v___y_746_; uint8_t v___y_747_; uint8_t v___y_748_; lean_object* v___y_749_; uint8_t v___y_750_; uint8_t v___y_752_; uint8_t v___x_770_; 
v___x_740_ = 2;
v___x_770_ = l_Lean_instBEqMessageSeverity_beq(v_severity_644_, v___x_740_);
if (v___x_770_ == 0)
{
v___y_752_ = v___x_770_;
goto v___jp_751_;
}
else
{
uint8_t v___x_771_; 
lean_inc_ref(v_msgData_643_);
v___x_771_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_643_);
v___y_752_ = v___x_771_;
goto v___jp_751_;
}
v___jp_651_:
{
lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v_env_666_; lean_object* v_nextMacroScope_667_; lean_object* v_ngen_668_; lean_object* v_auxDeclNGen_669_; lean_object* v_traceState_670_; lean_object* v_cache_671_; lean_object* v_messages_672_; lean_object* v_infoState_673_; lean_object* v_snapshotTasks_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_685_; 
lean_inc(v_openDecls_660_);
lean_inc(v_currNamespace_659_);
v___x_662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_662_, 0, v_currNamespace_659_);
lean_ctor_set(v___x_662_, 1, v_openDecls_660_);
v___x_663_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_663_, 0, v___x_662_);
lean_ctor_set(v___x_663_, 1, v___y_655_);
lean_inc_ref(v___y_654_);
lean_inc_ref(v___y_657_);
v___x_664_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_664_, 0, v___y_657_);
lean_ctor_set(v___x_664_, 1, v___y_652_);
lean_ctor_set(v___x_664_, 2, v___y_656_);
lean_ctor_set(v___x_664_, 3, v___y_654_);
lean_ctor_set(v___x_664_, 4, v___x_663_);
lean_ctor_set_uint8(v___x_664_, sizeof(void*)*5, v___y_653_);
lean_ctor_set_uint8(v___x_664_, sizeof(void*)*5 + 1, v___y_658_);
lean_ctor_set_uint8(v___x_664_, sizeof(void*)*5 + 2, v_isSilent_645_);
v___x_665_ = lean_st_ref_take(v___y_661_);
v_env_666_ = lean_ctor_get(v___x_665_, 0);
v_nextMacroScope_667_ = lean_ctor_get(v___x_665_, 1);
v_ngen_668_ = lean_ctor_get(v___x_665_, 2);
v_auxDeclNGen_669_ = lean_ctor_get(v___x_665_, 3);
v_traceState_670_ = lean_ctor_get(v___x_665_, 4);
v_cache_671_ = lean_ctor_get(v___x_665_, 5);
v_messages_672_ = lean_ctor_get(v___x_665_, 6);
v_infoState_673_ = lean_ctor_get(v___x_665_, 7);
v_snapshotTasks_674_ = lean_ctor_get(v___x_665_, 8);
v_isSharedCheck_685_ = !lean_is_exclusive(v___x_665_);
if (v_isSharedCheck_685_ == 0)
{
v___x_676_ = v___x_665_;
v_isShared_677_ = v_isSharedCheck_685_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_snapshotTasks_674_);
lean_inc(v_infoState_673_);
lean_inc(v_messages_672_);
lean_inc(v_cache_671_);
lean_inc(v_traceState_670_);
lean_inc(v_auxDeclNGen_669_);
lean_inc(v_ngen_668_);
lean_inc(v_nextMacroScope_667_);
lean_inc(v_env_666_);
lean_dec(v___x_665_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_685_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_681_; 
v___x_678_ = lean_box(0);
v___x_679_ = l_Lean_MessageLog_add(v___x_664_, v_messages_672_);
if (v_isShared_677_ == 0)
{
lean_ctor_set(v___x_676_, 6, v___x_679_);
v___x_681_ = v___x_676_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v_env_666_);
lean_ctor_set(v_reuseFailAlloc_684_, 1, v_nextMacroScope_667_);
lean_ctor_set(v_reuseFailAlloc_684_, 2, v_ngen_668_);
lean_ctor_set(v_reuseFailAlloc_684_, 3, v_auxDeclNGen_669_);
lean_ctor_set(v_reuseFailAlloc_684_, 4, v_traceState_670_);
lean_ctor_set(v_reuseFailAlloc_684_, 5, v_cache_671_);
lean_ctor_set(v_reuseFailAlloc_684_, 6, v___x_679_);
lean_ctor_set(v_reuseFailAlloc_684_, 7, v_infoState_673_);
lean_ctor_set(v_reuseFailAlloc_684_, 8, v_snapshotTasks_674_);
v___x_681_ = v_reuseFailAlloc_684_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_682_ = lean_st_ref_put(v___y_661_, v___x_681_);
v___x_683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_683_, 0, v___x_678_);
return v___x_683_;
}
}
}
v___jp_686_:
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v_a_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_712_; 
v___x_697_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_643_);
v___x_698_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__4(v___x_697_, v___y_646_, v___y_647_, v___y_648_, v___y_649_);
v_a_699_ = lean_ctor_get(v___x_698_, 0);
v_isSharedCheck_712_ = !lean_is_exclusive(v___x_698_);
if (v_isSharedCheck_712_ == 0)
{
v___x_701_ = v___x_698_;
v_isShared_702_ = v_isSharedCheck_712_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_a_699_);
lean_dec(v___x_698_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_712_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
lean_inc_ref_n(v___y_695_, 2);
v___x_703_ = l_Lean_FileMap_toPosition(v___y_695_, v___y_694_);
lean_dec(v___y_694_);
v___x_704_ = l_Lean_FileMap_toPosition(v___y_695_, v___y_696_);
lean_dec(v___y_696_);
v___x_705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_705_, 0, v___x_704_);
v___x_706_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___closed__0));
if (v___y_690_ == 0)
{
lean_del_object(v___x_701_);
lean_dec_ref(v___y_688_);
v___y_652_ = v___x_703_;
v___y_653_ = v___y_691_;
v___y_654_ = v___x_706_;
v___y_655_ = v_a_699_;
v___y_656_ = v___x_705_;
v___y_657_ = v___y_692_;
v___y_658_ = v___y_693_;
v_currNamespace_659_ = v___y_689_;
v_openDecls_660_ = v___y_687_;
v___y_661_ = v___y_649_;
goto v___jp_651_;
}
else
{
uint8_t v___x_707_; 
lean_inc(v_a_699_);
v___x_707_ = l_Lean_MessageData_hasTag(v___y_688_, v_a_699_);
if (v___x_707_ == 0)
{
lean_object* v___x_708_; lean_object* v___x_710_; 
lean_dec_ref_known(v___x_705_, 1);
lean_dec_ref(v___x_703_);
lean_dec(v_a_699_);
v___x_708_ = lean_box(0);
if (v_isShared_702_ == 0)
{
lean_ctor_set(v___x_701_, 0, v___x_708_);
v___x_710_ = v___x_701_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v___x_708_);
v___x_710_ = v_reuseFailAlloc_711_;
goto v_reusejp_709_;
}
v_reusejp_709_:
{
return v___x_710_;
}
}
else
{
lean_del_object(v___x_701_);
v___y_652_ = v___x_703_;
v___y_653_ = v___y_691_;
v___y_654_ = v___x_706_;
v___y_655_ = v_a_699_;
v___y_656_ = v___x_705_;
v___y_657_ = v___y_692_;
v___y_658_ = v___y_693_;
v_currNamespace_659_ = v___y_689_;
v_openDecls_660_ = v___y_687_;
v___y_661_ = v___y_649_;
goto v___jp_651_;
}
}
}
}
v___jp_713_:
{
lean_object* v___x_724_; 
v___x_724_ = l_Lean_Syntax_getTailPos_x3f(v___y_719_, v___y_718_);
lean_dec(v___y_719_);
if (lean_obj_tag(v___x_724_) == 0)
{
lean_inc(v___y_723_);
v___y_687_ = v___y_714_;
v___y_688_ = v___y_716_;
v___y_689_ = v___y_715_;
v___y_690_ = v___y_717_;
v___y_691_ = v___y_718_;
v___y_692_ = v___y_720_;
v___y_693_ = v___y_721_;
v___y_694_ = v___y_723_;
v___y_695_ = v___y_722_;
v___y_696_ = v___y_723_;
goto v___jp_686_;
}
else
{
lean_object* v_val_725_; 
v_val_725_ = lean_ctor_get(v___x_724_, 0);
lean_inc(v_val_725_);
lean_dec_ref_known(v___x_724_, 1);
v___y_687_ = v___y_714_;
v___y_688_ = v___y_716_;
v___y_689_ = v___y_715_;
v___y_690_ = v___y_717_;
v___y_691_ = v___y_718_;
v___y_692_ = v___y_720_;
v___y_693_ = v___y_721_;
v___y_694_ = v___y_723_;
v___y_695_ = v___y_722_;
v___y_696_ = v_val_725_;
goto v___jp_686_;
}
}
v___jp_726_:
{
lean_object* v_ref_736_; lean_object* v___x_737_; 
v_ref_736_ = l_Lean_replaceRef(v_ref_642_, v___y_733_);
v___x_737_ = l_Lean_Syntax_getPos_x3f(v_ref_736_, v___y_731_);
if (lean_obj_tag(v___x_737_) == 0)
{
lean_object* v___x_738_; 
v___x_738_ = lean_unsigned_to_nat(0u);
v___y_714_ = v___y_727_;
v___y_715_ = v___y_729_;
v___y_716_ = v___y_728_;
v___y_717_ = v___y_730_;
v___y_718_ = v___y_731_;
v___y_719_ = v_ref_736_;
v___y_720_ = v___y_732_;
v___y_721_ = v___y_735_;
v___y_722_ = v___y_734_;
v___y_723_ = v___x_738_;
goto v___jp_713_;
}
else
{
lean_object* v_val_739_; 
v_val_739_ = lean_ctor_get(v___x_737_, 0);
lean_inc(v_val_739_);
lean_dec_ref_known(v___x_737_, 1);
v___y_714_ = v___y_727_;
v___y_715_ = v___y_729_;
v___y_716_ = v___y_728_;
v___y_717_ = v___y_730_;
v___y_718_ = v___y_731_;
v___y_719_ = v_ref_736_;
v___y_720_ = v___y_732_;
v___y_721_ = v___y_735_;
v___y_722_ = v___y_734_;
v___y_723_ = v_val_739_;
goto v___jp_713_;
}
}
v___jp_741_:
{
if (v___y_750_ == 0)
{
v___y_727_ = v___y_742_;
v___y_728_ = v___y_744_;
v___y_729_ = v___y_743_;
v___y_730_ = v___y_747_;
v___y_731_ = v___y_748_;
v___y_732_ = v___y_745_;
v___y_733_ = v___y_749_;
v___y_734_ = v___y_746_;
v___y_735_ = v_severity_644_;
goto v___jp_726_;
}
else
{
v___y_727_ = v___y_742_;
v___y_728_ = v___y_744_;
v___y_729_ = v___y_743_;
v___y_730_ = v___y_747_;
v___y_731_ = v___y_748_;
v___y_732_ = v___y_745_;
v___y_733_ = v___y_749_;
v___y_734_ = v___y_746_;
v___y_735_ = v___x_740_;
goto v___jp_726_;
}
}
v___jp_751_:
{
if (v___y_752_ == 0)
{
lean_object* v_toCold_753_; lean_object* v_ref_754_; uint8_t v_suppressElabErrors_755_; lean_object* v_fileName_756_; lean_object* v_fileMap_757_; lean_object* v_options_758_; lean_object* v_currNamespace_759_; lean_object* v_openDecls_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___f_763_; uint8_t v___x_764_; uint8_t v___x_765_; 
v_toCold_753_ = lean_ctor_get(v___y_648_, 0);
v_ref_754_ = lean_ctor_get(v___y_648_, 2);
v_suppressElabErrors_755_ = lean_ctor_get_uint8(v___y_648_, sizeof(void*)*3 + 1);
v_fileName_756_ = lean_ctor_get(v_toCold_753_, 0);
v_fileMap_757_ = lean_ctor_get(v_toCold_753_, 1);
v_options_758_ = lean_ctor_get(v_toCold_753_, 2);
v_currNamespace_759_ = lean_ctor_get(v_toCold_753_, 4);
v_openDecls_760_ = lean_ctor_get(v_toCold_753_, 5);
v___x_761_ = lean_box(v_suppressElabErrors_755_);
v___x_762_ = lean_box(v___y_752_);
v___f_763_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___boxed), 3, 2);
lean_closure_set(v___f_763_, 0, v___x_761_);
lean_closure_set(v___f_763_, 1, v___x_762_);
v___x_764_ = 1;
v___x_765_ = l_Lean_instBEqMessageSeverity_beq(v_severity_644_, v___x_764_);
if (v___x_765_ == 0)
{
v___y_742_ = v_openDecls_760_;
v___y_743_ = v_currNamespace_759_;
v___y_744_ = v___f_763_;
v___y_745_ = v_fileName_756_;
v___y_746_ = v_fileMap_757_;
v___y_747_ = v_suppressElabErrors_755_;
v___y_748_ = v___y_752_;
v___y_749_ = v_ref_754_;
v___y_750_ = v___x_765_;
goto v___jp_741_;
}
else
{
lean_object* v___x_766_; uint8_t v___x_767_; 
v___x_766_ = l_Lean_warningAsError;
v___x_767_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5(v_options_758_, v___x_766_);
v___y_742_ = v_openDecls_760_;
v___y_743_ = v_currNamespace_759_;
v___y_744_ = v___f_763_;
v___y_745_ = v_fileName_756_;
v___y_746_ = v_fileMap_757_;
v___y_747_ = v_suppressElabErrors_755_;
v___y_748_ = v___y_752_;
v___y_749_ = v_ref_754_;
v___y_750_ = v___x_767_;
goto v___jp_741_;
}
}
else
{
lean_object* v___x_768_; lean_object* v___x_769_; 
lean_dec_ref(v_msgData_643_);
v___x_768_ = lean_box(0);
v___x_769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_769_, 0, v___x_768_);
return v___x_769_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___boxed(lean_object* v_ref_772_, lean_object* v_msgData_773_, lean_object* v_severity_774_, lean_object* v_isSilent_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_){
_start:
{
uint8_t v_severity_boxed_781_; uint8_t v_isSilent_boxed_782_; lean_object* v_res_783_; 
v_severity_boxed_781_ = lean_unbox(v_severity_774_);
v_isSilent_boxed_782_ = lean_unbox(v_isSilent_775_);
v_res_783_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1(v_ref_772_, v_msgData_773_, v_severity_boxed_781_, v_isSilent_boxed_782_, v___y_776_, v___y_777_, v___y_778_, v___y_779_);
lean_dec(v___y_779_);
lean_dec_ref(v___y_778_);
lean_dec(v___y_777_);
lean_dec_ref(v___y_776_);
lean_dec(v_ref_772_);
return v_res_783_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0(lean_object* v_msgData_784_, uint8_t v_severity_785_, uint8_t v_isSilent_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_){
_start:
{
lean_object* v_ref_792_; lean_object* v___x_793_; 
v_ref_792_ = lean_ctor_get(v___y_789_, 2);
v___x_793_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1(v_ref_792_, v_msgData_784_, v_severity_785_, v_isSilent_786_, v___y_787_, v___y_788_, v___y_789_, v___y_790_);
return v___x_793_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0___boxed(lean_object* v_msgData_794_, lean_object* v_severity_795_, lean_object* v_isSilent_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_){
_start:
{
uint8_t v_severity_boxed_802_; uint8_t v_isSilent_boxed_803_; lean_object* v_res_804_; 
v_severity_boxed_802_ = lean_unbox(v_severity_795_);
v_isSilent_boxed_803_ = lean_unbox(v_isSilent_796_);
v_res_804_ = l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0(v_msgData_794_, v_severity_boxed_802_, v_isSilent_boxed_803_, v___y_797_, v___y_798_, v___y_799_, v___y_800_);
lean_dec(v___y_800_);
lean_dec_ref(v___y_799_);
lean_dec(v___y_798_);
lean_dec_ref(v___y_797_);
return v_res_804_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0(lean_object* v_msgData_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_){
_start:
{
uint8_t v___x_811_; uint8_t v___x_812_; lean_object* v___x_813_; 
v___x_811_ = 1;
v___x_812_ = 0;
v___x_813_ = l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0(v_msgData_805_, v___x_811_, v___x_812_, v___y_806_, v___y_807_, v___y_808_, v___y_809_);
return v___x_813_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0___boxed(lean_object* v_msgData_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_){
_start:
{
lean_object* v_res_820_; 
v_res_820_ = l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0(v_msgData_814_, v___y_815_, v___y_816_, v___y_817_, v___y_818_);
lean_dec(v___y_818_);
lean_dec_ref(v___y_817_);
lean_dec(v___y_816_);
lean_dec_ref(v___y_815_);
return v_res_820_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1(void){
_start:
{
lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_822_ = ((lean_object*)(l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__0));
v___x_823_ = l_Lean_stringToMessageData(v___x_822_);
return v___x_823_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1(lean_object* v_a_824_, lean_object* v_a_825_){
_start:
{
if (lean_obj_tag(v_a_824_) == 0)
{
lean_object* v___x_826_; 
v___x_826_ = l_List_reverse___redArg(v_a_825_);
return v___x_826_;
}
else
{
lean_object* v_head_827_; lean_object* v_tail_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_841_; 
v_head_827_ = lean_ctor_get(v_a_824_, 0);
v_tail_828_ = lean_ctor_get(v_a_824_, 1);
v_isSharedCheck_841_ = !lean_is_exclusive(v_a_824_);
if (v_isSharedCheck_841_ == 0)
{
v___x_830_ = v_a_824_;
v_isShared_831_ = v_isSharedCheck_841_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_tail_828_);
lean_inc(v_head_827_);
lean_dec(v_a_824_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_841_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
uint8_t v_minIndexable_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_838_; 
v_minIndexable_832_ = 0;
v___x_833_ = lean_obj_once(&l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1, &l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1_once, _init_l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1);
v___x_834_ = l_Lean_Meta_Grind_EMatchTheoremKind_toAttribute(v_head_827_, v_minIndexable_832_);
lean_dec(v_head_827_);
v___x_835_ = l_Lean_stringToMessageData(v___x_834_);
v___x_836_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_836_, 0, v___x_833_);
lean_ctor_set(v___x_836_, 1, v___x_835_);
if (v_isShared_831_ == 0)
{
lean_ctor_set(v___x_830_, 1, v_a_825_);
lean_ctor_set(v___x_830_, 0, v___x_836_);
v___x_838_ = v___x_830_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v___x_836_);
lean_ctor_set(v_reuseFailAlloc_840_, 1, v_a_825_);
v___x_838_ = v_reuseFailAlloc_840_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
v_a_824_ = v_tail_828_;
v_a_825_ = v___x_838_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__2(lean_object* v_a_842_, lean_object* v_a_843_){
_start:
{
if (lean_obj_tag(v_a_842_) == 0)
{
lean_object* v___x_844_; 
v___x_844_ = l_List_reverse___redArg(v_a_843_);
return v___x_844_;
}
else
{
lean_object* v_head_845_; lean_object* v_tail_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_854_; 
v_head_845_ = lean_ctor_get(v_a_842_, 0);
v_tail_846_ = lean_ctor_get(v_a_842_, 1);
v_isSharedCheck_854_ = !lean_is_exclusive(v_a_842_);
if (v_isSharedCheck_854_ == 0)
{
v___x_848_ = v_a_842_;
v_isShared_849_ = v_isSharedCheck_854_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_tail_846_);
lean_inc(v_head_845_);
lean_dec(v_a_842_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_854_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v___x_851_; 
if (v_isShared_849_ == 0)
{
lean_ctor_set(v___x_848_, 1, v_a_843_);
v___x_851_ = v___x_848_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v_head_845_);
lean_ctor_set(v_reuseFailAlloc_853_, 1, v_a_843_);
v___x_851_ = v_reuseFailAlloc_853_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
v_a_842_ = v_tail_846_;
v_a_843_ = v___x_851_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__1(void){
_start:
{
lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_856_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__0));
v___x_857_ = l_Lean_stringToMessageData(v___x_856_);
return v___x_857_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__3(void){
_start:
{
lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_859_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__2));
v___x_860_ = l_Lean_stringToMessageData(v___x_859_);
return v___x_860_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5(void){
_start:
{
lean_object* v___x_862_; lean_object* v___x_863_; 
v___x_862_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__4));
v___x_863_ = l_Lean_stringToMessageData(v___x_862_);
return v___x_863_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg(lean_object* v_s_864_, lean_object* v_declName_865_, lean_object* v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_){
_start:
{
lean_object* v_kinds_872_; lean_object* v___y_873_; lean_object* v___y_874_; lean_object* v___y_875_; lean_object* v___y_876_; lean_object* v_ks_887_; lean_object* v___y_888_; lean_object* v___y_889_; lean_object* v___y_890_; lean_object* v___y_891_; lean_object* v___x_896_; lean_object* v___x_897_; 
lean_inc(v_declName_865_);
v___x_896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_896_, 0, v_declName_865_);
v___x_897_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor(v_s_864_, v___x_896_);
lean_dec_ref_known(v___x_896_, 1);
if (lean_obj_tag(v___x_897_) == 0)
{
lean_object* v___x_898_; lean_object* v___x_899_; 
lean_dec(v_declName_865_);
v___x_898_ = lean_box(0);
v___x_899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_899_, 0, v___x_898_);
return v___x_899_;
}
else
{
lean_object* v_head_900_; lean_object* v_tail_901_; uint8_t v_minIndexable_902_; uint8_t v_gen_904_; lean_object* v___y_905_; lean_object* v___y_906_; lean_object* v___y_907_; lean_object* v___y_908_; 
v_head_900_ = lean_ctor_get(v___x_897_, 0);
lean_inc(v_head_900_);
v_tail_901_ = lean_ctor_get(v___x_897_, 1);
lean_inc(v_tail_901_);
v_minIndexable_902_ = 0;
if (lean_obj_tag(v_tail_901_) == 0)
{
lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_923_; 
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_897_);
if (v_isSharedCheck_923_ == 0)
{
lean_object* v_unused_924_; lean_object* v_unused_925_; 
v_unused_924_ = lean_ctor_get(v___x_897_, 1);
lean_dec(v_unused_924_);
v_unused_925_ = lean_ctor_get(v___x_897_, 0);
lean_dec(v_unused_925_);
v___x_915_ = v___x_897_;
v_isShared_916_ = v_isSharedCheck_923_;
goto v_resetjp_914_;
}
else
{
lean_dec(v___x_897_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_923_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_921_; 
v___x_917_ = lean_obj_once(&l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1, &l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1_once, _init_l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1);
v___x_918_ = l_Lean_Meta_Grind_EMatchTheoremKind_toAttribute(v_head_900_, v_minIndexable_902_);
lean_dec(v_head_900_);
v___x_919_ = l_Lean_stringToMessageData(v___x_918_);
if (v_isShared_916_ == 0)
{
lean_ctor_set_tag(v___x_915_, 7);
lean_ctor_set(v___x_915_, 1, v___x_919_);
lean_ctor_set(v___x_915_, 0, v___x_917_);
v___x_921_ = v___x_915_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v___x_917_);
lean_ctor_set(v_reuseFailAlloc_922_, 1, v___x_919_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
v_kinds_872_ = v___x_921_;
v___y_873_ = v___y_866_;
v___y_874_ = v___y_867_;
v___y_875_ = v___y_868_;
v___y_876_ = v___y_869_;
goto v___jp_871_;
}
}
}
else
{
lean_object* v_head_926_; 
v_head_926_ = lean_ctor_get(v_tail_901_, 0);
switch(lean_obj_tag(v_head_926_))
{
case 1:
{
lean_object* v_tail_927_; 
v_tail_927_ = lean_ctor_get(v_tail_901_, 1);
lean_inc(v_tail_927_);
lean_dec_ref_known(v_tail_901_, 2);
if (lean_obj_tag(v_tail_927_) == 0)
{
if (lean_obj_tag(v_head_900_) == 0)
{
uint8_t v_gen_928_; 
lean_dec_ref_known(v___x_897_, 2);
v_gen_928_ = lean_ctor_get_uint8(v_head_900_, 0);
lean_dec_ref_known(v_head_900_, 0);
v_gen_904_ = v_gen_928_;
v___y_905_ = v___y_866_;
v___y_906_ = v___y_867_;
v___y_907_ = v___y_868_;
v___y_908_ = v___y_869_;
goto v___jp_903_;
}
else
{
lean_dec(v_head_900_);
v_ks_887_ = v___x_897_;
v___y_888_ = v___y_866_;
v___y_889_ = v___y_867_;
v___y_890_ = v___y_868_;
v___y_891_ = v___y_869_;
goto v___jp_886_;
}
}
else
{
lean_dec(v_tail_927_);
lean_dec(v_head_900_);
v_ks_887_ = v___x_897_;
v___y_888_ = v___y_866_;
v___y_889_ = v___y_867_;
v___y_890_ = v___y_868_;
v___y_891_ = v___y_869_;
goto v___jp_886_;
}
}
case 0:
{
lean_object* v_tail_929_; 
v_tail_929_ = lean_ctor_get(v_tail_901_, 1);
lean_inc(v_tail_929_);
lean_dec_ref_known(v_tail_901_, 2);
if (lean_obj_tag(v_tail_929_) == 0)
{
if (lean_obj_tag(v_head_900_) == 1)
{
uint8_t v_gen_930_; 
lean_dec_ref_known(v___x_897_, 2);
v_gen_930_ = lean_ctor_get_uint8(v_head_900_, 0);
lean_dec_ref_known(v_head_900_, 0);
v_gen_904_ = v_gen_930_;
v___y_905_ = v___y_866_;
v___y_906_ = v___y_867_;
v___y_907_ = v___y_868_;
v___y_908_ = v___y_869_;
goto v___jp_903_;
}
else
{
lean_dec(v_head_900_);
v_ks_887_ = v___x_897_;
v___y_888_ = v___y_866_;
v___y_889_ = v___y_867_;
v___y_890_ = v___y_868_;
v___y_891_ = v___y_869_;
goto v___jp_886_;
}
}
else
{
lean_dec(v_tail_929_);
lean_dec(v_head_900_);
v_ks_887_ = v___x_897_;
v___y_888_ = v___y_866_;
v___y_889_ = v___y_867_;
v___y_890_ = v___y_868_;
v___y_891_ = v___y_869_;
goto v___jp_886_;
}
}
default: 
{
lean_dec_ref_known(v_tail_901_, 2);
lean_dec(v_head_900_);
v_ks_887_ = v___x_897_;
v___y_888_ = v___y_866_;
v___y_889_ = v___y_867_;
v___y_890_ = v___y_868_;
v___y_891_ = v___y_869_;
goto v___jp_886_;
}
}
}
v___jp_903_:
{
lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_909_ = lean_obj_once(&l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1, &l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1_once, _init_l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1);
v___x_910_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_910_, 0, v_gen_904_);
v___x_911_ = l_Lean_Meta_Grind_EMatchTheoremKind_toAttribute(v___x_910_, v_minIndexable_902_);
lean_dec_ref_known(v___x_910_, 0);
v___x_912_ = l_Lean_stringToMessageData(v___x_911_);
v___x_913_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_913_, 0, v___x_909_);
lean_ctor_set(v___x_913_, 1, v___x_912_);
v_kinds_872_ = v___x_913_;
v___y_873_ = v___y_905_;
v___y_874_ = v___y_906_;
v___y_875_ = v___y_907_;
v___y_876_ = v___y_908_;
goto v___jp_871_;
}
}
v___jp_871_:
{
lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_877_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__1, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__1);
v___x_878_ = l_Lean_MessageData_ofName(v_declName_865_);
v___x_879_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_879_, 0, v___x_877_);
lean_ctor_set(v___x_879_, 1, v___x_878_);
v___x_880_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__3, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__3);
v___x_881_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_881_, 0, v___x_879_);
lean_ctor_set(v___x_881_, 1, v___x_880_);
v___x_882_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_882_, 0, v___x_881_);
lean_ctor_set(v___x_882_, 1, v_kinds_872_);
v___x_883_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5);
v___x_884_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_884_, 0, v___x_882_);
lean_ctor_set(v___x_884_, 1, v___x_883_);
v___x_885_ = l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0(v___x_884_, v___y_873_, v___y_874_, v___y_875_, v___y_876_);
return v___x_885_;
}
v___jp_886_:
{
lean_object* v___x_892_; lean_object* v_ks_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_892_ = lean_box(0);
v_ks_893_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1(v_ks_887_, v___x_892_);
v___x_894_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__2(v_ks_893_, v___x_892_);
v___x_895_ = l_Lean_MessageData_ofList(v___x_894_);
v_kinds_872_ = v___x_895_;
v___y_873_ = v___y_888_;
v___y_874_ = v___y_889_;
v___y_875_ = v___y_890_;
v___y_876_ = v___y_891_;
goto v___jp_871_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___boxed(lean_object* v_s_931_, lean_object* v_declName_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_){
_start:
{
lean_object* v_res_938_; 
v_res_938_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg(v_s_931_, v_declName_932_, v___y_933_, v___y_934_, v___y_935_, v___y_936_);
lean_dec(v___y_936_);
lean_dec_ref(v___y_935_);
lean_dec(v___y_934_);
lean_dec_ref(v___y_933_);
lean_dec_ref(v_s_931_);
return v_res_938_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_939_; 
v___x_939_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_939_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_940_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__0);
v___x_941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_941_, 0, v___x_940_);
return v___x_941_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; 
v___x_942_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__1);
v___x_943_ = lean_unsigned_to_nat(0u);
v___x_944_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_944_, 0, v___x_943_);
lean_ctor_set(v___x_944_, 1, v___x_943_);
lean_ctor_set(v___x_944_, 2, v___x_943_);
lean_ctor_set(v___x_944_, 3, v___x_943_);
lean_ctor_set(v___x_944_, 4, v___x_942_);
lean_ctor_set(v___x_944_, 5, v___x_942_);
lean_ctor_set(v___x_944_, 6, v___x_942_);
lean_ctor_set(v___x_944_, 7, v___x_942_);
lean_ctor_set(v___x_944_, 8, v___x_942_);
lean_ctor_set(v___x_944_, 9, v___x_942_);
lean_ctor_set(v___x_944_, 10, v___x_942_);
return v___x_944_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; 
v___x_945_ = lean_unsigned_to_nat(32u);
v___x_946_ = lean_mk_empty_array_with_capacity(v___x_945_);
v___x_947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_947_, 0, v___x_946_);
return v___x_947_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_948_ = ((size_t)5ULL);
v___x_949_ = lean_unsigned_to_nat(0u);
v___x_950_ = lean_unsigned_to_nat(32u);
v___x_951_ = lean_mk_empty_array_with_capacity(v___x_950_);
v___x_952_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__3);
v___x_953_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_953_, 0, v___x_952_);
lean_ctor_set(v___x_953_, 1, v___x_951_);
lean_ctor_set(v___x_953_, 2, v___x_949_);
lean_ctor_set(v___x_953_, 3, v___x_949_);
lean_ctor_set_usize(v___x_953_, 4, v___x_948_);
return v___x_953_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; 
v___x_954_ = lean_box(1);
v___x_955_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__4);
v___x_956_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__1);
v___x_957_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_957_, 0, v___x_956_);
lean_ctor_set(v___x_957_, 1, v___x_955_);
lean_ctor_set(v___x_957_, 2, v___x_954_);
return v___x_957_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0(lean_object* v_msgData_958_, lean_object* v___y_959_, lean_object* v___y_960_){
_start:
{
lean_object* v___x_962_; lean_object* v_toCold_963_; lean_object* v_env_964_; lean_object* v_options_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; 
v___x_962_ = lean_st_ref_get(v___y_960_);
v_toCold_963_ = lean_ctor_get(v___y_959_, 0);
v_env_964_ = lean_ctor_get(v___x_962_, 0);
lean_inc_ref(v_env_964_);
lean_dec(v___x_962_);
v_options_965_ = lean_ctor_get(v_toCold_963_, 2);
v___x_966_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__2);
v___x_967_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__5);
lean_inc_ref(v_options_965_);
v___x_968_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_968_, 0, v_env_964_);
lean_ctor_set(v___x_968_, 1, v___x_966_);
lean_ctor_set(v___x_968_, 2, v___x_967_);
lean_ctor_set(v___x_968_, 3, v_options_965_);
v___x_969_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_969_, 0, v___x_968_);
lean_ctor_set(v___x_969_, 1, v_msgData_958_);
v___x_970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_970_, 0, v___x_969_);
return v___x_970_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___boxed(lean_object* v_msgData_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0(v_msgData_971_, v___y_972_, v___y_973_);
lean_dec(v___y_973_);
lean_dec_ref(v___y_972_);
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___redArg(lean_object* v_msg_976_, lean_object* v___y_977_, lean_object* v___y_978_){
_start:
{
lean_object* v_ref_980_; lean_object* v___x_981_; lean_object* v_a_982_; lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_990_; 
v_ref_980_ = lean_ctor_get(v___y_977_, 2);
v___x_981_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0(v_msg_976_, v___y_977_, v___y_978_);
v_a_982_ = lean_ctor_get(v___x_981_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v___x_981_);
if (v_isSharedCheck_990_ == 0)
{
v___x_984_ = v___x_981_;
v_isShared_985_ = v_isSharedCheck_990_;
goto v_resetjp_983_;
}
else
{
lean_inc(v_a_982_);
lean_dec(v___x_981_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_990_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
lean_object* v___x_986_; lean_object* v___x_988_; 
lean_inc(v_ref_980_);
v___x_986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_986_, 0, v_ref_980_);
lean_ctor_set(v___x_986_, 1, v_a_982_);
if (v_isShared_985_ == 0)
{
lean_ctor_set_tag(v___x_984_, 1);
lean_ctor_set(v___x_984_, 0, v___x_986_);
v___x_988_ = v___x_984_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v___x_986_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___redArg___boxed(lean_object* v_msg_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_){
_start:
{
lean_object* v_res_995_; 
v_res_995_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___redArg(v_msg_991_, v___y_992_, v___y_993_);
lean_dec(v___y_993_);
lean_dec_ref(v___y_992_);
return v_res_995_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__7(void){
_start:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1007_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__6));
v___x_1008_ = l_Lean_stringToMessageData(v___x_1007_);
return v___x_1008_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier(lean_object* v_s_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_){
_start:
{
lean_object* v___x_1013_; lean_object* v_env_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1013_ = lean_st_ref_get(v___y_1011_);
v_env_1014_ = lean_ctor_get(v___x_1013_, 0);
lean_inc_ref(v_env_1014_);
lean_dec(v___x_1013_);
v___x_1015_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4));
v___x_1016_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__5));
lean_inc_ref(v_s_1009_);
v___x_1017_ = l_Lean_Parser_runParserCategory(v_env_1014_, v___x_1015_, v_s_1009_, v___x_1016_);
if (lean_obj_tag(v___x_1017_) == 1)
{
lean_object* v_a_1018_; lean_object* v___x_1019_; 
lean_dec_ref(v_s_1009_);
v_a_1018_ = lean_ctor_get(v___x_1017_, 0);
lean_inc(v_a_1018_);
lean_dec_ref_known(v___x_1017_, 1);
v___x_1019_ = l_Lean_Meta_Grind_getAttrKindCore(v_a_1018_, v___y_1010_, v___y_1011_);
return v___x_1019_;
}
else
{
lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; 
lean_dec_ref(v___x_1017_);
v___x_1020_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__7, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__7_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__7);
v___x_1021_ = l_Lean_stringToMessageData(v_s_1009_);
v___x_1022_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1022_, 0, v___x_1020_);
lean_ctor_set(v___x_1022_, 1, v___x_1021_);
v___x_1023_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___redArg(v___x_1022_, v___y_1010_, v___y_1011_);
return v___x_1023_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___boxed(lean_object* v_s_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_){
_start:
{
lean_object* v_res_1028_; 
v_res_1028_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier(v_s_1024_, v___y_1025_, v___y_1026_);
lean_dec(v___y_1026_);
lean_dec_ref(v___y_1025_);
return v_res_1028_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0(lean_object* v_00_u03b1_1029_, lean_object* v_msg_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_){
_start:
{
lean_object* v___x_1034_; 
v___x_1034_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___redArg(v_msg_1030_, v___y_1031_, v___y_1032_);
return v___x_1034_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___boxed(lean_object* v_00_u03b1_1035_, lean_object* v_msg_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_){
_start:
{
lean_object* v_res_1040_; 
v_res_1040_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0(v_00_u03b1_1035_, v_msg_1036_, v___y_1037_, v___y_1038_);
lean_dec(v___y_1038_);
lean_dec_ref(v___y_1037_);
return v_res_1040_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(lean_object* v_msg_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_){
_start:
{
lean_object* v_ref_1047_; lean_object* v___x_1048_; lean_object* v_a_1049_; lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1057_; 
v_ref_1047_ = lean_ctor_get(v___y_1044_, 2);
v___x_1048_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__4(v_msg_1041_, v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_);
v_a_1049_ = lean_ctor_get(v___x_1048_, 0);
v_isSharedCheck_1057_ = !lean_is_exclusive(v___x_1048_);
if (v_isSharedCheck_1057_ == 0)
{
v___x_1051_ = v___x_1048_;
v_isShared_1052_ = v_isSharedCheck_1057_;
goto v_resetjp_1050_;
}
else
{
lean_inc(v_a_1049_);
lean_dec(v___x_1048_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1057_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v___x_1053_; lean_object* v___x_1055_; 
lean_inc(v_ref_1047_);
v___x_1053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1053_, 0, v_ref_1047_);
lean_ctor_set(v___x_1053_, 1, v_a_1049_);
if (v_isShared_1052_ == 0)
{
lean_ctor_set_tag(v___x_1051_, 1);
lean_ctor_set(v___x_1051_, 0, v___x_1053_);
v___x_1055_ = v___x_1051_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v___x_1053_);
v___x_1055_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
return v___x_1055_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg___boxed(lean_object* v_msg_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(v_msg_1058_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_);
lean_dec(v___y_1062_);
lean_dec_ref(v___y_1061_);
lean_dec(v___y_1060_);
lean_dec_ref(v___y_1059_);
return v_res_1064_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__1(void){
_start:
{
lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1066_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__0));
v___x_1067_ = l_Lean_stringToMessageData(v___x_1066_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(uint8_t v_minIndexable_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_){
_start:
{
if (v_minIndexable_1068_ == 0)
{
lean_object* v___x_1074_; lean_object* v___x_1075_; 
v___x_1074_ = lean_box(0);
v___x_1075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1075_, 0, v___x_1074_);
return v___x_1075_;
}
else
{
lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1076_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__1, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__1);
v___x_1077_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(v___x_1076_, v___y_1069_, v___y_1070_, v___y_1071_, v___y_1072_);
return v___x_1077_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___boxed(lean_object* v_minIndexable_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_){
_start:
{
uint8_t v_minIndexable_boxed_1084_; lean_object* v_res_1085_; 
v_minIndexable_boxed_1084_ = lean_unbox(v_minIndexable_1078_);
v_res_1085_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_boxed_1084_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_);
lean_dec(v___y_1082_);
lean_dec_ref(v___y_1081_);
lean_dec(v___y_1080_);
lean_dec_ref(v___y_1079_);
return v_res_1085_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0(lean_object* v_00_u03b1_1086_, lean_object* v_msg_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_){
_start:
{
lean_object* v___x_1093_; 
v___x_1093_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(v_msg_1087_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_);
return v___x_1093_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___boxed(lean_object* v_00_u03b1_1094_, lean_object* v_msg_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0(v_00_u03b1_1094_, v_msg_1095_, v___y_1096_, v___y_1097_, v___y_1098_, v___y_1099_);
lean_dec(v___y_1099_);
lean_dec_ref(v___y_1098_);
lean_dec(v___y_1097_);
lean_dec_ref(v___y_1096_);
return v_res_1101_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1103_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0));
v___x_1104_ = l_Lean_stringToMessageData(v___x_1103_);
return v___x_1104_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; 
v___x_1106_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2));
v___x_1107_ = l_Lean_stringToMessageData(v___x_1106_);
return v___x_1107_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5(void){
_start:
{
lean_object* v___x_1109_; lean_object* v___x_1110_; 
v___x_1109_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4));
v___x_1110_ = l_Lean_stringToMessageData(v___x_1109_);
return v___x_1110_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7(void){
_start:
{
lean_object* v___x_1112_; lean_object* v___x_1113_; 
v___x_1112_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6));
v___x_1113_ = l_Lean_stringToMessageData(v___x_1112_);
return v___x_1113_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9(void){
_start:
{
lean_object* v___x_1115_; lean_object* v___x_1116_; 
v___x_1115_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8));
v___x_1116_ = l_Lean_stringToMessageData(v___x_1115_);
return v___x_1116_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11(void){
_start:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; 
v___x_1118_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10));
v___x_1119_ = l_Lean_stringToMessageData(v___x_1118_);
return v___x_1119_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13(void){
_start:
{
lean_object* v___x_1121_; lean_object* v___x_1122_; 
v___x_1121_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12));
v___x_1122_ = l_Lean_stringToMessageData(v___x_1121_);
return v___x_1122_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(lean_object* v_msg_1123_, lean_object* v_declHint_1124_, lean_object* v___y_1125_){
_start:
{
lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v_env_1129_; uint8_t v___x_1130_; 
v___x_1127_ = lean_box(0);
v___x_1128_ = lean_st_ref_get(v___y_1125_);
v_env_1129_ = lean_ctor_get(v___x_1128_, 0);
lean_inc_ref(v_env_1129_);
lean_dec(v___x_1128_);
v___x_1130_ = l_Lean_Name_isAnonymous(v_declHint_1124_);
if (v___x_1130_ == 0)
{
uint8_t v_isExporting_1131_; 
v_isExporting_1131_ = lean_ctor_get_uint8(v_env_1129_, sizeof(void*)*8);
if (v_isExporting_1131_ == 0)
{
lean_object* v___x_1132_; 
lean_dec_ref(v_env_1129_);
lean_dec(v_declHint_1124_);
v___x_1132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1132_, 0, v_msg_1123_);
return v___x_1132_;
}
else
{
lean_object* v___x_1133_; uint8_t v___x_1134_; 
lean_inc_ref(v_env_1129_);
v___x_1133_ = l_Lean_Environment_setExporting(v_env_1129_, v___x_1130_);
lean_inc(v_declHint_1124_);
lean_inc_ref(v___x_1133_);
v___x_1134_ = l_Lean_Environment_contains(v___x_1133_, v_declHint_1124_, v_isExporting_1131_);
if (v___x_1134_ == 0)
{
lean_object* v___x_1135_; 
lean_dec_ref(v___x_1133_);
lean_dec_ref(v_env_1129_);
lean_dec(v_declHint_1124_);
v___x_1135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1135_, 0, v_msg_1123_);
return v___x_1135_;
}
else
{
lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v_c_1141_; lean_object* v___x_1142_; 
v___x_1136_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__2);
v___x_1137_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__5);
v___x_1138_ = l_Lean_Options_empty;
v___x_1139_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1139_, 0, v___x_1133_);
lean_ctor_set(v___x_1139_, 1, v___x_1136_);
lean_ctor_set(v___x_1139_, 2, v___x_1137_);
lean_ctor_set(v___x_1139_, 3, v___x_1138_);
lean_inc(v_declHint_1124_);
v___x_1140_ = l_Lean_MessageData_ofConstName(v_declHint_1124_, v___x_1130_);
v_c_1141_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1141_, 0, v___x_1139_);
lean_ctor_set(v_c_1141_, 1, v___x_1140_);
v___x_1142_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1129_, v_declHint_1124_);
if (lean_obj_tag(v___x_1142_) == 0)
{
lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; 
lean_dec_ref(v_env_1129_);
lean_dec(v_declHint_1124_);
v___x_1143_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1);
v___x_1144_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1144_, 0, v___x_1143_);
lean_ctor_set(v___x_1144_, 1, v_c_1141_);
v___x_1145_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3);
v___x_1146_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1146_, 0, v___x_1144_);
lean_ctor_set(v___x_1146_, 1, v___x_1145_);
v___x_1147_ = l_Lean_MessageData_note(v___x_1146_);
v___x_1148_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1148_, 0, v_msg_1123_);
lean_ctor_set(v___x_1148_, 1, v___x_1147_);
v___x_1149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1148_);
return v___x_1149_;
}
else
{
lean_object* v_val_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1184_; 
v_val_1150_ = lean_ctor_get(v___x_1142_, 0);
v_isSharedCheck_1184_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1184_ == 0)
{
v___x_1152_ = v___x_1142_;
v_isShared_1153_ = v_isSharedCheck_1184_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_val_1150_);
lean_dec(v___x_1142_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1184_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v_mod_1156_; uint8_t v___x_1157_; 
v___x_1154_ = l_Lean_Environment_header(v_env_1129_);
lean_dec_ref(v_env_1129_);
v___x_1155_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1154_);
v_mod_1156_ = lean_array_get(v___x_1127_, v___x_1155_, v_val_1150_);
lean_dec(v_val_1150_);
lean_dec_ref(v___x_1155_);
v___x_1157_ = l_Lean_isPrivateName(v_declHint_1124_);
lean_dec(v_declHint_1124_);
if (v___x_1157_ == 0)
{
lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1169_; 
v___x_1158_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5);
v___x_1159_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1159_, 0, v___x_1158_);
lean_ctor_set(v___x_1159_, 1, v_c_1141_);
v___x_1160_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7);
v___x_1161_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1161_, 0, v___x_1159_);
lean_ctor_set(v___x_1161_, 1, v___x_1160_);
v___x_1162_ = l_Lean_MessageData_ofName(v_mod_1156_);
v___x_1163_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1163_, 0, v___x_1161_);
lean_ctor_set(v___x_1163_, 1, v___x_1162_);
v___x_1164_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9);
v___x_1165_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1165_, 0, v___x_1163_);
lean_ctor_set(v___x_1165_, 1, v___x_1164_);
v___x_1166_ = l_Lean_MessageData_note(v___x_1165_);
v___x_1167_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1167_, 0, v_msg_1123_);
lean_ctor_set(v___x_1167_, 1, v___x_1166_);
if (v_isShared_1153_ == 0)
{
lean_ctor_set_tag(v___x_1152_, 0);
lean_ctor_set(v___x_1152_, 0, v___x_1167_);
v___x_1169_ = v___x_1152_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v___x_1167_);
v___x_1169_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
return v___x_1169_;
}
}
else
{
lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1182_; 
v___x_1171_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1);
v___x_1172_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1172_, 0, v___x_1171_);
lean_ctor_set(v___x_1172_, 1, v_c_1141_);
v___x_1173_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11);
v___x_1174_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1174_, 0, v___x_1172_);
lean_ctor_set(v___x_1174_, 1, v___x_1173_);
v___x_1175_ = l_Lean_MessageData_ofName(v_mod_1156_);
v___x_1176_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1174_);
lean_ctor_set(v___x_1176_, 1, v___x_1175_);
v___x_1177_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13);
v___x_1178_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1176_);
lean_ctor_set(v___x_1178_, 1, v___x_1177_);
v___x_1179_ = l_Lean_MessageData_note(v___x_1178_);
v___x_1180_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1180_, 0, v_msg_1123_);
lean_ctor_set(v___x_1180_, 1, v___x_1179_);
if (v_isShared_1153_ == 0)
{
lean_ctor_set_tag(v___x_1152_, 0);
lean_ctor_set(v___x_1152_, 0, v___x_1180_);
v___x_1182_ = v___x_1152_;
goto v_reusejp_1181_;
}
else
{
lean_object* v_reuseFailAlloc_1183_; 
v_reuseFailAlloc_1183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1183_, 0, v___x_1180_);
v___x_1182_ = v_reuseFailAlloc_1183_;
goto v_reusejp_1181_;
}
v_reusejp_1181_:
{
return v___x_1182_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1185_; 
lean_dec_ref(v_env_1129_);
lean_dec(v_declHint_1124_);
v___x_1185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1185_, 0, v_msg_1123_);
return v___x_1185_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___boxed(lean_object* v_msg_1186_, lean_object* v_declHint_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_){
_start:
{
lean_object* v_res_1190_; 
v_res_1190_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(v_msg_1186_, v_declHint_1187_, v___y_1188_);
lean_dec(v___y_1188_);
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5(lean_object* v_msg_1191_, lean_object* v_declHint_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_){
_start:
{
lean_object* v___x_1198_; lean_object* v_a_1199_; lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1208_; 
v___x_1198_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(v_msg_1191_, v_declHint_1192_, v___y_1196_);
v_a_1199_ = lean_ctor_get(v___x_1198_, 0);
v_isSharedCheck_1208_ = !lean_is_exclusive(v___x_1198_);
if (v_isSharedCheck_1208_ == 0)
{
v___x_1201_ = v___x_1198_;
v_isShared_1202_ = v_isSharedCheck_1208_;
goto v_resetjp_1200_;
}
else
{
lean_inc(v_a_1199_);
lean_dec(v___x_1198_);
v___x_1201_ = lean_box(0);
v_isShared_1202_ = v_isSharedCheck_1208_;
goto v_resetjp_1200_;
}
v_resetjp_1200_:
{
lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1206_; 
v___x_1203_ = l_Lean_unknownIdentifierMessageTag;
v___x_1204_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1204_, 0, v___x_1203_);
lean_ctor_set(v___x_1204_, 1, v_a_1199_);
if (v_isShared_1202_ == 0)
{
lean_ctor_set(v___x_1201_, 0, v___x_1204_);
v___x_1206_ = v___x_1201_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v___x_1204_);
v___x_1206_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
return v___x_1206_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5___boxed(lean_object* v_msg_1209_, lean_object* v_declHint_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_){
_start:
{
lean_object* v_res_1216_; 
v_res_1216_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5(v_msg_1209_, v_declHint_1210_, v___y_1211_, v___y_1212_, v___y_1213_, v___y_1214_);
lean_dec(v___y_1214_);
lean_dec_ref(v___y_1213_);
lean_dec(v___y_1212_);
lean_dec_ref(v___y_1211_);
return v_res_1216_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(lean_object* v_ref_1217_, lean_object* v_msg_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_){
_start:
{
lean_object* v_toCold_1224_; lean_object* v_currRecDepth_1225_; lean_object* v_ref_1226_; uint8_t v_diag_1227_; uint8_t v_suppressElabErrors_1228_; lean_object* v_ref_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; 
v_toCold_1224_ = lean_ctor_get(v___y_1221_, 0);
v_currRecDepth_1225_ = lean_ctor_get(v___y_1221_, 1);
v_ref_1226_ = lean_ctor_get(v___y_1221_, 2);
v_diag_1227_ = lean_ctor_get_uint8(v___y_1221_, sizeof(void*)*3);
v_suppressElabErrors_1228_ = lean_ctor_get_uint8(v___y_1221_, sizeof(void*)*3 + 1);
v_ref_1229_ = l_Lean_replaceRef(v_ref_1217_, v_ref_1226_);
lean_inc(v_currRecDepth_1225_);
lean_inc_ref(v_toCold_1224_);
v___x_1230_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1230_, 0, v_toCold_1224_);
lean_ctor_set(v___x_1230_, 1, v_currRecDepth_1225_);
lean_ctor_set(v___x_1230_, 2, v_ref_1229_);
lean_ctor_set_uint8(v___x_1230_, sizeof(void*)*3, v_diag_1227_);
lean_ctor_set_uint8(v___x_1230_, sizeof(void*)*3 + 1, v_suppressElabErrors_1228_);
v___x_1231_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(v_msg_1218_, v___y_1219_, v___y_1220_, v___x_1230_, v___y_1222_);
lean_dec_ref_known(v___x_1230_, 3);
return v___x_1231_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6___redArg___boxed(lean_object* v_ref_1232_, lean_object* v_msg_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_){
_start:
{
lean_object* v_res_1239_; 
v_res_1239_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_1232_, v_msg_1233_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_);
lean_dec(v___y_1237_);
lean_dec_ref(v___y_1236_);
lean_dec(v___y_1235_);
lean_dec_ref(v___y_1234_);
lean_dec(v_ref_1232_);
return v_res_1239_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_ref_1240_, lean_object* v_msg_1241_, lean_object* v_declHint_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_){
_start:
{
lean_object* v___x_1248_; lean_object* v_a_1249_; lean_object* v___x_1250_; 
v___x_1248_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5(v_msg_1241_, v_declHint_1242_, v___y_1243_, v___y_1244_, v___y_1245_, v___y_1246_);
v_a_1249_ = lean_ctor_get(v___x_1248_, 0);
lean_inc(v_a_1249_);
lean_dec_ref(v___x_1248_);
v___x_1250_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_1240_, v_a_1249_, v___y_1243_, v___y_1244_, v___y_1245_, v___y_1246_);
return v___x_1250_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_ref_1251_, lean_object* v_msg_1252_, lean_object* v_declHint_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_){
_start:
{
lean_object* v_res_1259_; 
v_res_1259_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_1251_, v_msg_1252_, v_declHint_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_);
lean_dec(v___y_1257_);
lean_dec_ref(v___y_1256_);
lean_dec(v___y_1255_);
lean_dec_ref(v___y_1254_);
lean_dec(v_ref_1251_);
return v_res_1259_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1261_; lean_object* v___x_1262_; 
v___x_1261_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__0));
v___x_1262_ = l_Lean_stringToMessageData(v___x_1261_);
return v___x_1262_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_1263_, lean_object* v_constName_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_){
_start:
{
lean_object* v___x_1270_; uint8_t v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; 
v___x_1270_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_1271_ = 0;
lean_inc(v_constName_1264_);
v___x_1272_ = l_Lean_MessageData_ofConstName(v_constName_1264_, v___x_1271_);
v___x_1273_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1273_, 0, v___x_1270_);
lean_ctor_set(v___x_1273_, 1, v___x_1272_);
v___x_1274_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5);
v___x_1275_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1273_);
lean_ctor_set(v___x_1275_, 1, v___x_1274_);
v___x_1276_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_1263_, v___x_1275_, v_constName_1264_, v___y_1265_, v___y_1266_, v___y_1267_, v___y_1268_);
return v___x_1276_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_1277_, lean_object* v_constName_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_){
_start:
{
lean_object* v_res_1284_; 
v_res_1284_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg(v_ref_1277_, v_constName_1278_, v___y_1279_, v___y_1280_, v___y_1281_, v___y_1282_);
lean_dec(v___y_1282_);
lean_dec_ref(v___y_1281_);
lean_dec(v___y_1280_);
lean_dec_ref(v___y_1279_);
lean_dec(v_ref_1277_);
return v_res_1284_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0___redArg(lean_object* v_constName_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_){
_start:
{
lean_object* v_ref_1291_; lean_object* v___x_1292_; 
v_ref_1291_ = lean_ctor_get(v___y_1288_, 2);
v___x_1292_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg(v_ref_1291_, v_constName_1285_, v___y_1286_, v___y_1287_, v___y_1288_, v___y_1289_);
return v___x_1292_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0___redArg___boxed(lean_object* v_constName_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_){
_start:
{
lean_object* v_res_1299_; 
v_res_1299_ = l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0___redArg(v_constName_1293_, v___y_1294_, v___y_1295_, v___y_1296_, v___y_1297_);
lean_dec(v___y_1297_);
lean_dec_ref(v___y_1296_);
lean_dec(v___y_1295_);
lean_dec_ref(v___y_1294_);
return v_res_1299_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0(lean_object* v_constName_1300_, uint8_t v_skipRealize_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_){
_start:
{
lean_object* v___x_1307_; lean_object* v_env_1308_; lean_object* v___x_1309_; 
v___x_1307_ = lean_st_ref_get(v___y_1305_);
v_env_1308_ = lean_ctor_get(v___x_1307_, 0);
lean_inc_ref(v_env_1308_);
lean_dec(v___x_1307_);
lean_inc(v_constName_1300_);
v___x_1309_ = l_Lean_Environment_findAsync_x3f(v_env_1308_, v_constName_1300_, v_skipRealize_1301_);
if (lean_obj_tag(v___x_1309_) == 0)
{
lean_object* v___x_1310_; 
v___x_1310_ = l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0___redArg(v_constName_1300_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_);
return v___x_1310_;
}
else
{
lean_object* v_val_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1318_; 
lean_dec(v_constName_1300_);
v_val_1311_ = lean_ctor_get(v___x_1309_, 0);
v_isSharedCheck_1318_ = !lean_is_exclusive(v___x_1309_);
if (v_isSharedCheck_1318_ == 0)
{
v___x_1313_ = v___x_1309_;
v_isShared_1314_ = v_isSharedCheck_1318_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_val_1311_);
lean_dec(v___x_1309_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1318_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v___x_1316_; 
if (v_isShared_1314_ == 0)
{
lean_ctor_set_tag(v___x_1313_, 0);
v___x_1316_ = v___x_1313_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1317_; 
v_reuseFailAlloc_1317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v_val_1311_);
v___x_1316_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
return v___x_1316_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0___boxed(lean_object* v_constName_1319_, lean_object* v_skipRealize_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_){
_start:
{
uint8_t v_skipRealize_boxed_1326_; lean_object* v_res_1327_; 
v_skipRealize_boxed_1326_ = lean_unbox(v_skipRealize_1320_);
v_res_1327_ = l_Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0(v_constName_1319_, v_skipRealize_boxed_1326_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_);
lean_dec(v___y_1324_);
lean_dec_ref(v___y_1323_);
lean_dec(v___y_1322_);
lean_dec_ref(v___y_1321_);
return v_res_1327_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2___redArg(lean_object* v_declName_1328_, lean_object* v___y_1329_){
_start:
{
lean_object* v___x_1331_; lean_object* v_env_1332_; uint8_t v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1331_ = lean_st_ref_get(v___y_1329_);
v_env_1332_ = lean_ctor_get(v___x_1331_, 0);
lean_inc_ref(v_env_1332_);
lean_dec(v___x_1331_);
v___x_1333_ = l_Lean_getReducibilityStatusCore(v_env_1332_, v_declName_1328_);
v___x_1334_ = lean_box(v___x_1333_);
v___x_1335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1335_, 0, v___x_1334_);
return v___x_1335_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2___redArg___boxed(lean_object* v_declName_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_){
_start:
{
lean_object* v_res_1339_; 
v_res_1339_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2___redArg(v_declName_1336_, v___y_1337_);
lean_dec(v___y_1337_);
return v_res_1339_;
}
}
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1(lean_object* v_declName_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_){
_start:
{
lean_object* v___x_1346_; lean_object* v_a_1347_; lean_object* v___x_1349_; uint8_t v_isShared_1350_; uint8_t v_isSharedCheck_1362_; 
v___x_1346_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2___redArg(v_declName_1340_, v___y_1344_);
v_a_1347_ = lean_ctor_get(v___x_1346_, 0);
v_isSharedCheck_1362_ = !lean_is_exclusive(v___x_1346_);
if (v_isSharedCheck_1362_ == 0)
{
v___x_1349_ = v___x_1346_;
v_isShared_1350_ = v_isSharedCheck_1362_;
goto v_resetjp_1348_;
}
else
{
lean_inc(v_a_1347_);
lean_dec(v___x_1346_);
v___x_1349_ = lean_box(0);
v_isShared_1350_ = v_isSharedCheck_1362_;
goto v_resetjp_1348_;
}
v_resetjp_1348_:
{
uint8_t v___x_1351_; 
v___x_1351_ = lean_unbox(v_a_1347_);
lean_dec(v_a_1347_);
if (v___x_1351_ == 0)
{
uint8_t v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1355_; 
v___x_1352_ = 1;
v___x_1353_ = lean_box(v___x_1352_);
if (v_isShared_1350_ == 0)
{
lean_ctor_set(v___x_1349_, 0, v___x_1353_);
v___x_1355_ = v___x_1349_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1356_; 
v_reuseFailAlloc_1356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1356_, 0, v___x_1353_);
v___x_1355_ = v_reuseFailAlloc_1356_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
return v___x_1355_;
}
}
else
{
uint8_t v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1360_; 
v___x_1357_ = 0;
v___x_1358_ = lean_box(v___x_1357_);
if (v_isShared_1350_ == 0)
{
lean_ctor_set(v___x_1349_, 0, v___x_1358_);
v___x_1360_ = v___x_1349_;
goto v_reusejp_1359_;
}
else
{
lean_object* v_reuseFailAlloc_1361_; 
v_reuseFailAlloc_1361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1361_, 0, v___x_1358_);
v___x_1360_ = v_reuseFailAlloc_1361_;
goto v_reusejp_1359_;
}
v_reusejp_1359_:
{
return v___x_1360_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1___boxed(lean_object* v_declName_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_){
_start:
{
lean_object* v_res_1369_; 
v_res_1369_ = l_Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1(v_declName_1363_, v___y_1364_, v___y_1365_, v___y_1366_, v___y_1367_);
lean_dec(v___y_1367_);
lean_dec_ref(v___y_1366_);
lean_dec(v___y_1365_);
lean_dec_ref(v___y_1364_);
return v_res_1369_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__1(void){
_start:
{
lean_object* v___x_1371_; lean_object* v___x_1372_; 
v___x_1371_ = ((lean_object*)(l_Lean_Elab_Tactic_addEMatchTheorem___closed__0));
v___x_1372_ = l_Lean_stringToMessageData(v___x_1371_);
return v___x_1372_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__3(void){
_start:
{
lean_object* v___x_1374_; lean_object* v___x_1375_; 
v___x_1374_ = ((lean_object*)(l_Lean_Elab_Tactic_addEMatchTheorem___closed__2));
v___x_1375_ = l_Lean_stringToMessageData(v___x_1374_);
return v___x_1375_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__5(void){
_start:
{
lean_object* v___x_1377_; lean_object* v___x_1378_; 
v___x_1377_ = ((lean_object*)(l_Lean_Elab_Tactic_addEMatchTheorem___closed__4));
v___x_1378_ = l_Lean_stringToMessageData(v___x_1377_);
return v___x_1378_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__7(void){
_start:
{
lean_object* v___x_1380_; lean_object* v___x_1381_; 
v___x_1380_ = ((lean_object*)(l_Lean_Elab_Tactic_addEMatchTheorem___closed__6));
v___x_1381_ = l_Lean_stringToMessageData(v___x_1380_);
return v___x_1381_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__9(void){
_start:
{
lean_object* v___x_1383_; lean_object* v___x_1384_; 
v___x_1383_ = ((lean_object*)(l_Lean_Elab_Tactic_addEMatchTheorem___closed__8));
v___x_1384_ = l_Lean_stringToMessageData(v___x_1383_);
return v___x_1384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_addEMatchTheorem(lean_object* v_params_1385_, lean_object* v_id_1386_, lean_object* v_declName_1387_, lean_object* v_kind_1388_, uint8_t v_minIndexable_1389_, uint8_t v_suggest_1390_, uint8_t v_warn_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_){
_start:
{
lean_object* v___y_1398_; lean_object* v_thm_1418_; lean_object* v___y_1419_; lean_object* v___y_1420_; lean_object* v___y_1421_; lean_object* v___y_1422_; lean_object* v___y_1438_; lean_object* v___y_1439_; lean_object* v___y_1440_; lean_object* v___y_1441_; lean_object* v___y_1442_; lean_object* v___y_1443_; lean_object* v___y_1444_; lean_object* v___y_1445_; lean_object* v___y_1446_; lean_object* v___y_1447_; lean_object* v___y_1448_; uint8_t v___x_1453_; lean_object* v___y_1455_; lean_object* v___y_1456_; lean_object* v___y_1457_; lean_object* v___y_1458_; lean_object* v___y_1511_; lean_object* v___y_1512_; lean_object* v___y_1513_; lean_object* v___y_1514_; lean_object* v___y_1532_; lean_object* v___y_1533_; lean_object* v___y_1534_; lean_object* v___y_1535_; lean_object* v___y_1548_; lean_object* v___y_1549_; lean_object* v___y_1550_; lean_object* v___y_1551_; lean_object* v___y_1568_; lean_object* v___y_1569_; lean_object* v___y_1570_; lean_object* v___y_1571_; lean_object* v___y_1582_; lean_object* v___y_1583_; lean_object* v___y_1584_; lean_object* v___y_1585_; lean_object* v___x_1651_; 
v___x_1453_ = 0;
lean_inc(v_declName_1387_);
v___x_1651_ = l_Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0(v_declName_1387_, v___x_1453_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_);
if (lean_obj_tag(v___x_1651_) == 0)
{
lean_object* v_a_1652_; uint8_t v_kind_1653_; 
v_a_1652_ = lean_ctor_get(v___x_1651_, 0);
lean_inc(v_a_1652_);
lean_dec_ref_known(v___x_1651_, 1);
v_kind_1653_ = lean_ctor_get_uint8(v_a_1652_, sizeof(void*)*3);
lean_dec(v_a_1652_);
switch(v_kind_1653_)
{
case 1:
{
v___y_1582_ = v___y_1392_;
v___y_1583_ = v___y_1393_;
v___y_1584_ = v___y_1394_;
v___y_1585_ = v___y_1395_;
goto v___jp_1581_;
}
case 2:
{
v___y_1582_ = v___y_1392_;
v___y_1583_ = v___y_1393_;
v___y_1584_ = v___y_1394_;
v___y_1585_ = v___y_1395_;
goto v___jp_1581_;
}
case 6:
{
v___y_1582_ = v___y_1392_;
v___y_1583_ = v___y_1393_;
v___y_1584_ = v___y_1394_;
v___y_1585_ = v___y_1395_;
goto v___jp_1581_;
}
case 0:
{
lean_object* v___x_1654_; 
lean_dec(v_id_1386_);
lean_inc(v_declName_1387_);
v___x_1654_ = l_Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1(v_declName_1387_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_);
if (lean_obj_tag(v___x_1654_) == 0)
{
lean_object* v_a_1655_; uint8_t v___x_1656_; 
v_a_1655_ = lean_ctor_get(v___x_1654_, 0);
lean_inc(v_a_1655_);
lean_dec_ref_known(v___x_1654_, 1);
v___x_1656_ = lean_unbox(v_a_1655_);
lean_dec(v_a_1655_);
if (v___x_1656_ == 0)
{
v___y_1511_ = v___y_1392_;
v___y_1512_ = v___y_1393_;
v___y_1513_ = v___y_1394_;
v___y_1514_ = v___y_1395_;
goto v___jp_1510_;
}
else
{
lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v_a_1663_; lean_object* v___x_1665_; uint8_t v_isShared_1666_; uint8_t v_isSharedCheck_1670_; 
lean_dec(v_kind_1388_);
lean_dec_ref(v_params_1385_);
v___x_1657_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5);
v___x_1658_ = l_Lean_MessageData_ofConstName(v_declName_1387_, v___x_1453_);
v___x_1659_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1659_, 0, v___x_1657_);
lean_ctor_set(v___x_1659_, 1, v___x_1658_);
v___x_1660_ = lean_obj_once(&l_Lean_Elab_Tactic_addEMatchTheorem___closed__7, &l_Lean_Elab_Tactic_addEMatchTheorem___closed__7_once, _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__7);
v___x_1661_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1661_, 0, v___x_1659_);
lean_ctor_set(v___x_1661_, 1, v___x_1660_);
v___x_1662_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(v___x_1661_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_);
v_a_1663_ = lean_ctor_get(v___x_1662_, 0);
v_isSharedCheck_1670_ = !lean_is_exclusive(v___x_1662_);
if (v_isSharedCheck_1670_ == 0)
{
v___x_1665_ = v___x_1662_;
v_isShared_1666_ = v_isSharedCheck_1670_;
goto v_resetjp_1664_;
}
else
{
lean_inc(v_a_1663_);
lean_dec(v___x_1662_);
v___x_1665_ = lean_box(0);
v_isShared_1666_ = v_isSharedCheck_1670_;
goto v_resetjp_1664_;
}
v_resetjp_1664_:
{
lean_object* v___x_1668_; 
if (v_isShared_1666_ == 0)
{
v___x_1668_ = v___x_1665_;
goto v_reusejp_1667_;
}
else
{
lean_object* v_reuseFailAlloc_1669_; 
v_reuseFailAlloc_1669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1669_, 0, v_a_1663_);
v___x_1668_ = v_reuseFailAlloc_1669_;
goto v_reusejp_1667_;
}
v_reusejp_1667_:
{
return v___x_1668_;
}
}
}
}
else
{
lean_object* v_a_1671_; lean_object* v___x_1673_; uint8_t v_isShared_1674_; uint8_t v_isSharedCheck_1678_; 
lean_dec(v_kind_1388_);
lean_dec(v_declName_1387_);
lean_dec_ref(v_params_1385_);
v_a_1671_ = lean_ctor_get(v___x_1654_, 0);
v_isSharedCheck_1678_ = !lean_is_exclusive(v___x_1654_);
if (v_isSharedCheck_1678_ == 0)
{
v___x_1673_ = v___x_1654_;
v_isShared_1674_ = v_isSharedCheck_1678_;
goto v_resetjp_1672_;
}
else
{
lean_inc(v_a_1671_);
lean_dec(v___x_1654_);
v___x_1673_ = lean_box(0);
v_isShared_1674_ = v_isSharedCheck_1678_;
goto v_resetjp_1672_;
}
v_resetjp_1672_:
{
lean_object* v___x_1676_; 
if (v_isShared_1674_ == 0)
{
v___x_1676_ = v___x_1673_;
goto v_reusejp_1675_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v_a_1671_);
v___x_1676_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1675_;
}
v_reusejp_1675_:
{
return v___x_1676_;
}
}
}
}
default: 
{
lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; 
lean_dec(v_kind_1388_);
lean_dec(v_id_1386_);
lean_dec_ref(v_params_1385_);
v___x_1679_ = lean_obj_once(&l_Lean_Elab_Tactic_addEMatchTheorem___closed__3, &l_Lean_Elab_Tactic_addEMatchTheorem___closed__3_once, _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__3);
v___x_1680_ = l_Lean_MessageData_ofConstName(v_declName_1387_, v___x_1453_);
v___x_1681_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1681_, 0, v___x_1679_);
lean_ctor_set(v___x_1681_, 1, v___x_1680_);
v___x_1682_ = lean_obj_once(&l_Lean_Elab_Tactic_addEMatchTheorem___closed__9, &l_Lean_Elab_Tactic_addEMatchTheorem___closed__9_once, _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__9);
v___x_1683_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1683_, 0, v___x_1681_);
lean_ctor_set(v___x_1683_, 1, v___x_1682_);
v___x_1684_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(v___x_1683_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_);
return v___x_1684_;
}
}
}
else
{
lean_object* v_a_1685_; lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1692_; 
lean_dec(v_kind_1388_);
lean_dec(v_declName_1387_);
lean_dec(v_id_1386_);
lean_dec_ref(v_params_1385_);
v_a_1685_ = lean_ctor_get(v___x_1651_, 0);
v_isSharedCheck_1692_ = !lean_is_exclusive(v___x_1651_);
if (v_isSharedCheck_1692_ == 0)
{
v___x_1687_ = v___x_1651_;
v_isShared_1688_ = v_isSharedCheck_1692_;
goto v_resetjp_1686_;
}
else
{
lean_inc(v_a_1685_);
lean_dec(v___x_1651_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1692_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
lean_object* v___x_1690_; 
if (v_isShared_1688_ == 0)
{
v___x_1690_ = v___x_1687_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1691_; 
v_reuseFailAlloc_1691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1691_, 0, v_a_1685_);
v___x_1690_ = v_reuseFailAlloc_1691_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
return v___x_1690_;
}
}
}
v___jp_1397_:
{
lean_object* v_config_1399_; lean_object* v_extensions_1400_; lean_object* v_extra_1401_; lean_object* v_extraInj_1402_; lean_object* v_extraFacts_1403_; lean_object* v_symPrios_1404_; lean_object* v_norm_1405_; lean_object* v_normProcs_1406_; lean_object* v_anchorRefs_x3f_1407_; lean_object* v___x_1409_; uint8_t v_isShared_1410_; uint8_t v_isSharedCheck_1416_; 
v_config_1399_ = lean_ctor_get(v_params_1385_, 0);
v_extensions_1400_ = lean_ctor_get(v_params_1385_, 1);
v_extra_1401_ = lean_ctor_get(v_params_1385_, 2);
v_extraInj_1402_ = lean_ctor_get(v_params_1385_, 3);
v_extraFacts_1403_ = lean_ctor_get(v_params_1385_, 4);
v_symPrios_1404_ = lean_ctor_get(v_params_1385_, 5);
v_norm_1405_ = lean_ctor_get(v_params_1385_, 6);
v_normProcs_1406_ = lean_ctor_get(v_params_1385_, 7);
v_anchorRefs_x3f_1407_ = lean_ctor_get(v_params_1385_, 8);
v_isSharedCheck_1416_ = !lean_is_exclusive(v_params_1385_);
if (v_isSharedCheck_1416_ == 0)
{
v___x_1409_ = v_params_1385_;
v_isShared_1410_ = v_isSharedCheck_1416_;
goto v_resetjp_1408_;
}
else
{
lean_inc(v_anchorRefs_x3f_1407_);
lean_inc(v_normProcs_1406_);
lean_inc(v_norm_1405_);
lean_inc(v_symPrios_1404_);
lean_inc(v_extraFacts_1403_);
lean_inc(v_extraInj_1402_);
lean_inc(v_extra_1401_);
lean_inc(v_extensions_1400_);
lean_inc(v_config_1399_);
lean_dec(v_params_1385_);
v___x_1409_ = lean_box(0);
v_isShared_1410_ = v_isSharedCheck_1416_;
goto v_resetjp_1408_;
}
v_resetjp_1408_:
{
lean_object* v___x_1411_; lean_object* v___x_1413_; 
v___x_1411_ = l_Lean_PersistentArray_push___redArg(v_extra_1401_, v___y_1398_);
if (v_isShared_1410_ == 0)
{
lean_ctor_set(v___x_1409_, 2, v___x_1411_);
v___x_1413_ = v___x_1409_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v_config_1399_);
lean_ctor_set(v_reuseFailAlloc_1415_, 1, v_extensions_1400_);
lean_ctor_set(v_reuseFailAlloc_1415_, 2, v___x_1411_);
lean_ctor_set(v_reuseFailAlloc_1415_, 3, v_extraInj_1402_);
lean_ctor_set(v_reuseFailAlloc_1415_, 4, v_extraFacts_1403_);
lean_ctor_set(v_reuseFailAlloc_1415_, 5, v_symPrios_1404_);
lean_ctor_set(v_reuseFailAlloc_1415_, 6, v_norm_1405_);
lean_ctor_set(v_reuseFailAlloc_1415_, 7, v_normProcs_1406_);
lean_ctor_set(v_reuseFailAlloc_1415_, 8, v_anchorRefs_x3f_1407_);
v___x_1413_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
lean_object* v___x_1414_; 
v___x_1414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1414_, 0, v___x_1413_);
return v___x_1414_;
}
}
}
v___jp_1417_:
{
if (v_warn_1391_ == 0)
{
lean_dec(v_declName_1387_);
v___y_1398_ = v_thm_1418_;
goto v___jp_1397_;
}
else
{
lean_object* v_extensions_1423_; lean_object* v_patterns_1424_; lean_object* v_origin_1425_; lean_object* v_cnstrs_1426_; uint8_t v___x_1427_; 
v_extensions_1423_ = lean_ctor_get(v_params_1385_, 1);
v_patterns_1424_ = lean_ctor_get(v_thm_1418_, 3);
v_origin_1425_ = lean_ctor_get(v_thm_1418_, 5);
v_cnstrs_1426_ = lean_ctor_get(v_thm_1418_, 7);
v___x_1427_ = l_Lean_Meta_Grind_ExtensionStateArray_containsWithSamePatterns(v_extensions_1423_, v_origin_1425_, v_patterns_1424_, v_cnstrs_1426_);
if (v___x_1427_ == 0)
{
lean_dec(v_declName_1387_);
v___y_1398_ = v_thm_1418_;
goto v___jp_1397_;
}
else
{
lean_object* v___x_1428_; 
v___x_1428_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg(v_extensions_1423_, v_declName_1387_, v___y_1419_, v___y_1420_, v___y_1421_, v___y_1422_);
if (lean_obj_tag(v___x_1428_) == 0)
{
lean_dec_ref_known(v___x_1428_, 1);
v___y_1398_ = v_thm_1418_;
goto v___jp_1397_;
}
else
{
lean_object* v_a_1429_; lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1436_; 
lean_dec_ref(v_thm_1418_);
lean_dec_ref(v_params_1385_);
v_a_1429_ = lean_ctor_get(v___x_1428_, 0);
v_isSharedCheck_1436_ = !lean_is_exclusive(v___x_1428_);
if (v_isSharedCheck_1436_ == 0)
{
v___x_1431_ = v___x_1428_;
v_isShared_1432_ = v_isSharedCheck_1436_;
goto v_resetjp_1430_;
}
else
{
lean_inc(v_a_1429_);
lean_dec(v___x_1428_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1436_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
lean_object* v___x_1434_; 
if (v_isShared_1432_ == 0)
{
v___x_1434_ = v___x_1431_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v_a_1429_);
v___x_1434_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
return v___x_1434_;
}
}
}
}
}
}
v___jp_1437_:
{
lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; 
v___x_1449_ = l_Lean_PersistentArray_push___redArg(v___y_1443_, v___y_1447_);
v___x_1450_ = l_Lean_PersistentArray_push___redArg(v___x_1449_, v___y_1445_);
v___x_1451_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_1451_, 0, v___y_1444_);
lean_ctor_set(v___x_1451_, 1, v___y_1439_);
lean_ctor_set(v___x_1451_, 2, v___x_1450_);
lean_ctor_set(v___x_1451_, 3, v___y_1448_);
lean_ctor_set(v___x_1451_, 4, v___y_1438_);
lean_ctor_set(v___x_1451_, 5, v___y_1440_);
lean_ctor_set(v___x_1451_, 6, v___y_1442_);
lean_ctor_set(v___x_1451_, 7, v___y_1446_);
lean_ctor_set(v___x_1451_, 8, v___y_1441_);
v___x_1452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1452_, 0, v___x_1451_);
return v___x_1452_;
}
v___jp_1454_:
{
lean_object* v___x_1459_; 
v___x_1459_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_1389_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_);
if (lean_obj_tag(v___x_1459_) == 0)
{
lean_object* v___x_1460_; 
lean_dec_ref_known(v___x_1459_, 1);
lean_inc(v_declName_1387_);
v___x_1460_ = l_Lean_Meta_Grind_mkEMatchEqTheoremsForDef_x3f(v_declName_1387_, v___x_1453_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_);
if (lean_obj_tag(v___x_1460_) == 0)
{
lean_object* v_a_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1493_; 
v_a_1461_ = lean_ctor_get(v___x_1460_, 0);
v_isSharedCheck_1493_ = !lean_is_exclusive(v___x_1460_);
if (v_isSharedCheck_1493_ == 0)
{
v___x_1463_ = v___x_1460_;
v_isShared_1464_ = v_isSharedCheck_1493_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_a_1461_);
lean_dec(v___x_1460_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1493_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
if (lean_obj_tag(v_a_1461_) == 1)
{
lean_object* v_val_1465_; lean_object* v_config_1466_; lean_object* v_extensions_1467_; lean_object* v_extra_1468_; lean_object* v_extraInj_1469_; lean_object* v_extraFacts_1470_; lean_object* v_symPrios_1471_; lean_object* v_norm_1472_; lean_object* v_normProcs_1473_; lean_object* v_anchorRefs_x3f_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1486_; 
lean_dec(v_declName_1387_);
v_val_1465_ = lean_ctor_get(v_a_1461_, 0);
lean_inc(v_val_1465_);
lean_dec_ref_known(v_a_1461_, 1);
v_config_1466_ = lean_ctor_get(v_params_1385_, 0);
v_extensions_1467_ = lean_ctor_get(v_params_1385_, 1);
v_extra_1468_ = lean_ctor_get(v_params_1385_, 2);
v_extraInj_1469_ = lean_ctor_get(v_params_1385_, 3);
v_extraFacts_1470_ = lean_ctor_get(v_params_1385_, 4);
v_symPrios_1471_ = lean_ctor_get(v_params_1385_, 5);
v_norm_1472_ = lean_ctor_get(v_params_1385_, 6);
v_normProcs_1473_ = lean_ctor_get(v_params_1385_, 7);
v_anchorRefs_x3f_1474_ = lean_ctor_get(v_params_1385_, 8);
v_isSharedCheck_1486_ = !lean_is_exclusive(v_params_1385_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1476_ = v_params_1385_;
v_isShared_1477_ = v_isSharedCheck_1486_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_anchorRefs_x3f_1474_);
lean_inc(v_normProcs_1473_);
lean_inc(v_norm_1472_);
lean_inc(v_symPrios_1471_);
lean_inc(v_extraFacts_1470_);
lean_inc(v_extraInj_1469_);
lean_inc(v_extra_1468_);
lean_inc(v_extensions_1467_);
lean_inc(v_config_1466_);
lean_dec(v_params_1385_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1486_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1481_; 
v___x_1478_ = l_Lean_Array_toPArray_x27___redArg(v_val_1465_);
lean_dec(v_val_1465_);
v___x_1479_ = l_Lean_PersistentArray_append___redArg(v_extra_1468_, v___x_1478_);
lean_dec_ref(v___x_1478_);
if (v_isShared_1477_ == 0)
{
lean_ctor_set(v___x_1476_, 2, v___x_1479_);
v___x_1481_ = v___x_1476_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v_config_1466_);
lean_ctor_set(v_reuseFailAlloc_1485_, 1, v_extensions_1467_);
lean_ctor_set(v_reuseFailAlloc_1485_, 2, v___x_1479_);
lean_ctor_set(v_reuseFailAlloc_1485_, 3, v_extraInj_1469_);
lean_ctor_set(v_reuseFailAlloc_1485_, 4, v_extraFacts_1470_);
lean_ctor_set(v_reuseFailAlloc_1485_, 5, v_symPrios_1471_);
lean_ctor_set(v_reuseFailAlloc_1485_, 6, v_norm_1472_);
lean_ctor_set(v_reuseFailAlloc_1485_, 7, v_normProcs_1473_);
lean_ctor_set(v_reuseFailAlloc_1485_, 8, v_anchorRefs_x3f_1474_);
v___x_1481_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
lean_object* v___x_1483_; 
if (v_isShared_1464_ == 0)
{
lean_ctor_set(v___x_1463_, 0, v___x_1481_);
v___x_1483_ = v___x_1463_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v___x_1481_);
v___x_1483_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
return v___x_1483_;
}
}
}
}
else
{
lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; 
lean_del_object(v___x_1463_);
lean_dec(v_a_1461_);
lean_dec_ref(v_params_1385_);
v___x_1487_ = lean_obj_once(&l_Lean_Elab_Tactic_addEMatchTheorem___closed__1, &l_Lean_Elab_Tactic_addEMatchTheorem___closed__1_once, _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__1);
v___x_1488_ = l_Lean_MessageData_ofConstName(v_declName_1387_, v___x_1453_);
v___x_1489_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1489_, 0, v___x_1487_);
lean_ctor_set(v___x_1489_, 1, v___x_1488_);
v___x_1490_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5);
v___x_1491_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1491_, 0, v___x_1489_);
lean_ctor_set(v___x_1491_, 1, v___x_1490_);
v___x_1492_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(v___x_1491_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_);
return v___x_1492_;
}
}
}
else
{
lean_object* v_a_1494_; lean_object* v___x_1496_; uint8_t v_isShared_1497_; uint8_t v_isSharedCheck_1501_; 
lean_dec(v_declName_1387_);
lean_dec_ref(v_params_1385_);
v_a_1494_ = lean_ctor_get(v___x_1460_, 0);
v_isSharedCheck_1501_ = !lean_is_exclusive(v___x_1460_);
if (v_isSharedCheck_1501_ == 0)
{
v___x_1496_ = v___x_1460_;
v_isShared_1497_ = v_isSharedCheck_1501_;
goto v_resetjp_1495_;
}
else
{
lean_inc(v_a_1494_);
lean_dec(v___x_1460_);
v___x_1496_ = lean_box(0);
v_isShared_1497_ = v_isSharedCheck_1501_;
goto v_resetjp_1495_;
}
v_resetjp_1495_:
{
lean_object* v___x_1499_; 
if (v_isShared_1497_ == 0)
{
v___x_1499_ = v___x_1496_;
goto v_reusejp_1498_;
}
else
{
lean_object* v_reuseFailAlloc_1500_; 
v_reuseFailAlloc_1500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1500_, 0, v_a_1494_);
v___x_1499_ = v_reuseFailAlloc_1500_;
goto v_reusejp_1498_;
}
v_reusejp_1498_:
{
return v___x_1499_;
}
}
}
}
else
{
lean_object* v_a_1502_; lean_object* v___x_1504_; uint8_t v_isShared_1505_; uint8_t v_isSharedCheck_1509_; 
lean_dec(v_declName_1387_);
lean_dec_ref(v_params_1385_);
v_a_1502_ = lean_ctor_get(v___x_1459_, 0);
v_isSharedCheck_1509_ = !lean_is_exclusive(v___x_1459_);
if (v_isSharedCheck_1509_ == 0)
{
v___x_1504_ = v___x_1459_;
v_isShared_1505_ = v_isSharedCheck_1509_;
goto v_resetjp_1503_;
}
else
{
lean_inc(v_a_1502_);
lean_dec(v___x_1459_);
v___x_1504_ = lean_box(0);
v_isShared_1505_ = v_isSharedCheck_1509_;
goto v_resetjp_1503_;
}
v_resetjp_1503_:
{
lean_object* v___x_1507_; 
if (v_isShared_1505_ == 0)
{
v___x_1507_ = v___x_1504_;
goto v_reusejp_1506_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v_a_1502_);
v___x_1507_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1506_;
}
v_reusejp_1506_:
{
return v___x_1507_;
}
}
}
}
v___jp_1510_:
{
uint8_t v___x_1515_; 
v___x_1515_ = l_Lean_Meta_Grind_EMatchTheoremKind_isEqLhs(v_kind_1388_);
if (v___x_1515_ == 0)
{
uint8_t v___x_1516_; 
v___x_1516_ = l_Lean_Meta_Grind_EMatchTheoremKind_isDefault(v_kind_1388_);
lean_dec(v_kind_1388_);
if (v___x_1516_ == 0)
{
lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v_a_1523_; lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1530_; 
lean_dec_ref(v_params_1385_);
v___x_1517_ = lean_obj_once(&l_Lean_Elab_Tactic_addEMatchTheorem___closed__3, &l_Lean_Elab_Tactic_addEMatchTheorem___closed__3_once, _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__3);
v___x_1518_ = l_Lean_MessageData_ofConstName(v_declName_1387_, v___x_1453_);
v___x_1519_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1519_, 0, v___x_1517_);
lean_ctor_set(v___x_1519_, 1, v___x_1518_);
v___x_1520_ = lean_obj_once(&l_Lean_Elab_Tactic_addEMatchTheorem___closed__5, &l_Lean_Elab_Tactic_addEMatchTheorem___closed__5_once, _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__5);
v___x_1521_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1521_, 0, v___x_1519_);
lean_ctor_set(v___x_1521_, 1, v___x_1520_);
v___x_1522_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(v___x_1521_, v___y_1511_, v___y_1512_, v___y_1513_, v___y_1514_);
v_a_1523_ = lean_ctor_get(v___x_1522_, 0);
v_isSharedCheck_1530_ = !lean_is_exclusive(v___x_1522_);
if (v_isSharedCheck_1530_ == 0)
{
v___x_1525_ = v___x_1522_;
v_isShared_1526_ = v_isSharedCheck_1530_;
goto v_resetjp_1524_;
}
else
{
lean_inc(v_a_1523_);
lean_dec(v___x_1522_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1530_;
goto v_resetjp_1524_;
}
v_resetjp_1524_:
{
lean_object* v___x_1528_; 
if (v_isShared_1526_ == 0)
{
v___x_1528_ = v___x_1525_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v_a_1523_);
v___x_1528_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
return v___x_1528_;
}
}
}
else
{
v___y_1455_ = v___y_1511_;
v___y_1456_ = v___y_1512_;
v___y_1457_ = v___y_1513_;
v___y_1458_ = v___y_1514_;
goto v___jp_1454_;
}
}
else
{
lean_dec(v_kind_1388_);
v___y_1455_ = v___y_1511_;
v___y_1456_ = v___y_1512_;
v___y_1457_ = v___y_1513_;
v___y_1458_ = v___y_1514_;
goto v___jp_1454_;
}
}
v___jp_1531_:
{
lean_object* v_symPrios_1536_; lean_object* v___x_1537_; 
v_symPrios_1536_ = lean_ctor_get(v_params_1385_, 5);
lean_inc_ref(v_symPrios_1536_);
lean_inc(v_declName_1387_);
v___x_1537_ = l_Lean_Meta_Grind_mkEMatchTheoremForDecl(v_declName_1387_, v_kind_1388_, v_symPrios_1536_, v___x_1453_, v_minIndexable_1389_, v___y_1532_, v___y_1535_, v___y_1534_, v___y_1533_);
if (lean_obj_tag(v___x_1537_) == 0)
{
lean_object* v_a_1538_; 
v_a_1538_ = lean_ctor_get(v___x_1537_, 0);
lean_inc(v_a_1538_);
lean_dec_ref_known(v___x_1537_, 1);
v_thm_1418_ = v_a_1538_;
v___y_1419_ = v___y_1532_;
v___y_1420_ = v___y_1535_;
v___y_1421_ = v___y_1534_;
v___y_1422_ = v___y_1533_;
goto v___jp_1417_;
}
else
{
lean_object* v_a_1539_; lean_object* v___x_1541_; uint8_t v_isShared_1542_; uint8_t v_isSharedCheck_1546_; 
lean_dec(v_declName_1387_);
lean_dec_ref(v_params_1385_);
v_a_1539_ = lean_ctor_get(v___x_1537_, 0);
v_isSharedCheck_1546_ = !lean_is_exclusive(v___x_1537_);
if (v_isSharedCheck_1546_ == 0)
{
v___x_1541_ = v___x_1537_;
v_isShared_1542_ = v_isSharedCheck_1546_;
goto v_resetjp_1540_;
}
else
{
lean_inc(v_a_1539_);
lean_dec(v___x_1537_);
v___x_1541_ = lean_box(0);
v_isShared_1542_ = v_isSharedCheck_1546_;
goto v_resetjp_1540_;
}
v_resetjp_1540_:
{
lean_object* v___x_1544_; 
if (v_isShared_1542_ == 0)
{
v___x_1544_ = v___x_1541_;
goto v_reusejp_1543_;
}
else
{
lean_object* v_reuseFailAlloc_1545_; 
v_reuseFailAlloc_1545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1545_, 0, v_a_1539_);
v___x_1544_ = v_reuseFailAlloc_1545_;
goto v_reusejp_1543_;
}
v_reusejp_1543_:
{
return v___x_1544_;
}
}
}
}
v___jp_1547_:
{
if (v_suggest_1390_ == 0)
{
lean_dec(v_id_1386_);
v___y_1532_ = v___y_1548_;
v___y_1533_ = v___y_1551_;
v___y_1534_ = v___y_1550_;
v___y_1535_ = v___y_1549_;
goto v___jp_1531_;
}
else
{
lean_object* v_toCold_1552_; lean_object* v_options_1553_; lean_object* v___x_1554_; uint8_t v___x_1555_; 
v_toCold_1552_ = lean_ctor_get(v___y_1550_, 0);
v_options_1553_ = lean_ctor_get(v_toCold_1552_, 2);
v___x_1554_ = l_Lean_Meta_Grind_backward_grind_inferPattern;
v___x_1555_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5(v_options_1553_, v___x_1554_);
if (v___x_1555_ == 0)
{
lean_object* v_symPrios_1556_; lean_object* v___x_1557_; 
lean_dec(v_kind_1388_);
v_symPrios_1556_ = lean_ctor_get(v_params_1385_, 5);
lean_inc_ref(v_symPrios_1556_);
lean_inc(v_declName_1387_);
v___x_1557_ = l_Lean_Meta_Grind_mkEMatchTheoremAndSuggest(v_id_1386_, v_declName_1387_, v_symPrios_1556_, v_minIndexable_1389_, v_suggest_1390_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_);
if (lean_obj_tag(v___x_1557_) == 0)
{
lean_object* v_a_1558_; 
v_a_1558_ = lean_ctor_get(v___x_1557_, 0);
lean_inc(v_a_1558_);
lean_dec_ref_known(v___x_1557_, 1);
v_thm_1418_ = v_a_1558_;
v___y_1419_ = v___y_1548_;
v___y_1420_ = v___y_1549_;
v___y_1421_ = v___y_1550_;
v___y_1422_ = v___y_1551_;
goto v___jp_1417_;
}
else
{
lean_object* v_a_1559_; lean_object* v___x_1561_; uint8_t v_isShared_1562_; uint8_t v_isSharedCheck_1566_; 
lean_dec(v_declName_1387_);
lean_dec_ref(v_params_1385_);
v_a_1559_ = lean_ctor_get(v___x_1557_, 0);
v_isSharedCheck_1566_ = !lean_is_exclusive(v___x_1557_);
if (v_isSharedCheck_1566_ == 0)
{
v___x_1561_ = v___x_1557_;
v_isShared_1562_ = v_isSharedCheck_1566_;
goto v_resetjp_1560_;
}
else
{
lean_inc(v_a_1559_);
lean_dec(v___x_1557_);
v___x_1561_ = lean_box(0);
v_isShared_1562_ = v_isSharedCheck_1566_;
goto v_resetjp_1560_;
}
v_resetjp_1560_:
{
lean_object* v___x_1564_; 
if (v_isShared_1562_ == 0)
{
v___x_1564_ = v___x_1561_;
goto v_reusejp_1563_;
}
else
{
lean_object* v_reuseFailAlloc_1565_; 
v_reuseFailAlloc_1565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1565_, 0, v_a_1559_);
v___x_1564_ = v_reuseFailAlloc_1565_;
goto v_reusejp_1563_;
}
v_reusejp_1563_:
{
return v___x_1564_;
}
}
}
}
else
{
lean_dec(v_id_1386_);
v___y_1532_ = v___y_1548_;
v___y_1533_ = v___y_1551_;
v___y_1534_ = v___y_1550_;
v___y_1535_ = v___y_1549_;
goto v___jp_1531_;
}
}
}
v___jp_1567_:
{
lean_object* v___x_1572_; 
v___x_1572_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_1389_, v___y_1571_, v___y_1568_, v___y_1570_, v___y_1569_);
if (lean_obj_tag(v___x_1572_) == 0)
{
lean_dec_ref_known(v___x_1572_, 1);
v___y_1548_ = v___y_1571_;
v___y_1549_ = v___y_1568_;
v___y_1550_ = v___y_1570_;
v___y_1551_ = v___y_1569_;
goto v___jp_1547_;
}
else
{
lean_object* v_a_1573_; lean_object* v___x_1575_; uint8_t v_isShared_1576_; uint8_t v_isSharedCheck_1580_; 
lean_dec(v_kind_1388_);
lean_dec(v_declName_1387_);
lean_dec(v_id_1386_);
lean_dec_ref(v_params_1385_);
v_a_1573_ = lean_ctor_get(v___x_1572_, 0);
v_isSharedCheck_1580_ = !lean_is_exclusive(v___x_1572_);
if (v_isSharedCheck_1580_ == 0)
{
v___x_1575_ = v___x_1572_;
v_isShared_1576_ = v_isSharedCheck_1580_;
goto v_resetjp_1574_;
}
else
{
lean_inc(v_a_1573_);
lean_dec(v___x_1572_);
v___x_1575_ = lean_box(0);
v_isShared_1576_ = v_isSharedCheck_1580_;
goto v_resetjp_1574_;
}
v_resetjp_1574_:
{
lean_object* v___x_1578_; 
if (v_isShared_1576_ == 0)
{
v___x_1578_ = v___x_1575_;
goto v_reusejp_1577_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v_a_1573_);
v___x_1578_ = v_reuseFailAlloc_1579_;
goto v_reusejp_1577_;
}
v_reusejp_1577_:
{
return v___x_1578_;
}
}
}
}
v___jp_1581_:
{
if (lean_obj_tag(v_kind_1388_) == 2)
{
uint8_t v_gen_1586_; lean_object* v___x_1588_; uint8_t v_isShared_1589_; uint8_t v_isSharedCheck_1650_; 
lean_dec(v_id_1386_);
v_gen_1586_ = lean_ctor_get_uint8(v_kind_1388_, 0);
v_isSharedCheck_1650_ = !lean_is_exclusive(v_kind_1388_);
if (v_isSharedCheck_1650_ == 0)
{
v___x_1588_ = v_kind_1388_;
v_isShared_1589_ = v_isSharedCheck_1650_;
goto v_resetjp_1587_;
}
else
{
lean_dec(v_kind_1388_);
v___x_1588_ = lean_box(0);
v_isShared_1589_ = v_isSharedCheck_1650_;
goto v_resetjp_1587_;
}
v_resetjp_1587_:
{
lean_object* v___x_1590_; 
v___x_1590_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_1389_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_);
if (lean_obj_tag(v___x_1590_) == 0)
{
lean_object* v_config_1591_; lean_object* v_extensions_1592_; lean_object* v_extra_1593_; lean_object* v_extraInj_1594_; lean_object* v_extraFacts_1595_; lean_object* v_symPrios_1596_; lean_object* v_norm_1597_; lean_object* v_normProcs_1598_; lean_object* v_anchorRefs_x3f_1599_; lean_object* v___x_1601_; 
lean_dec_ref_known(v___x_1590_, 1);
v_config_1591_ = lean_ctor_get(v_params_1385_, 0);
lean_inc_ref(v_config_1591_);
v_extensions_1592_ = lean_ctor_get(v_params_1385_, 1);
lean_inc_ref(v_extensions_1592_);
v_extra_1593_ = lean_ctor_get(v_params_1385_, 2);
lean_inc_ref(v_extra_1593_);
v_extraInj_1594_ = lean_ctor_get(v_params_1385_, 3);
lean_inc_ref(v_extraInj_1594_);
v_extraFacts_1595_ = lean_ctor_get(v_params_1385_, 4);
lean_inc_ref(v_extraFacts_1595_);
v_symPrios_1596_ = lean_ctor_get(v_params_1385_, 5);
lean_inc_ref(v_symPrios_1596_);
v_norm_1597_ = lean_ctor_get(v_params_1385_, 6);
lean_inc_ref(v_norm_1597_);
v_normProcs_1598_ = lean_ctor_get(v_params_1385_, 7);
lean_inc_ref(v_normProcs_1598_);
v_anchorRefs_x3f_1599_ = lean_ctor_get(v_params_1385_, 8);
lean_inc(v_anchorRefs_x3f_1599_);
lean_dec_ref(v_params_1385_);
if (v_isShared_1589_ == 0)
{
lean_ctor_set_tag(v___x_1588_, 0);
v___x_1601_ = v___x_1588_;
goto v_reusejp_1600_;
}
else
{
lean_object* v_reuseFailAlloc_1641_; 
v_reuseFailAlloc_1641_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_1641_, 0, v_gen_1586_);
v___x_1601_ = v_reuseFailAlloc_1641_;
goto v_reusejp_1600_;
}
v_reusejp_1600_:
{
lean_object* v___x_1602_; 
lean_inc_ref(v_symPrios_1596_);
lean_inc(v_declName_1387_);
v___x_1602_ = l_Lean_Meta_Grind_mkEMatchTheoremForDecl(v_declName_1387_, v___x_1601_, v_symPrios_1596_, v___x_1453_, v___x_1453_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_);
if (lean_obj_tag(v___x_1602_) == 0)
{
lean_object* v_a_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; 
v_a_1603_ = lean_ctor_get(v___x_1602_, 0);
lean_inc(v_a_1603_);
lean_dec_ref_known(v___x_1602_, 1);
v___x_1604_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1604_, 0, v_gen_1586_);
lean_inc_ref(v_symPrios_1596_);
lean_inc(v_declName_1387_);
v___x_1605_ = l_Lean_Meta_Grind_mkEMatchTheoremForDecl(v_declName_1387_, v___x_1604_, v_symPrios_1596_, v___x_1453_, v___x_1453_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_);
if (lean_obj_tag(v___x_1605_) == 0)
{
if (v_warn_1391_ == 0)
{
lean_object* v_a_1606_; 
lean_dec(v_declName_1387_);
v_a_1606_ = lean_ctor_get(v___x_1605_, 0);
lean_inc(v_a_1606_);
lean_dec_ref_known(v___x_1605_, 1);
v___y_1438_ = v_extraFacts_1595_;
v___y_1439_ = v_extensions_1592_;
v___y_1440_ = v_symPrios_1596_;
v___y_1441_ = v_anchorRefs_x3f_1599_;
v___y_1442_ = v_norm_1597_;
v___y_1443_ = v_extra_1593_;
v___y_1444_ = v_config_1591_;
v___y_1445_ = v_a_1606_;
v___y_1446_ = v_normProcs_1598_;
v___y_1447_ = v_a_1603_;
v___y_1448_ = v_extraInj_1594_;
goto v___jp_1437_;
}
else
{
lean_object* v_a_1607_; lean_object* v_patterns_1608_; lean_object* v_origin_1609_; lean_object* v_cnstrs_1610_; uint8_t v___x_1611_; 
v_a_1607_ = lean_ctor_get(v___x_1605_, 0);
lean_inc(v_a_1607_);
lean_dec_ref_known(v___x_1605_, 1);
v_patterns_1608_ = lean_ctor_get(v_a_1603_, 3);
v_origin_1609_ = lean_ctor_get(v_a_1603_, 5);
v_cnstrs_1610_ = lean_ctor_get(v_a_1603_, 7);
v___x_1611_ = l_Lean_Meta_Grind_ExtensionStateArray_containsWithSamePatterns(v_extensions_1592_, v_origin_1609_, v_patterns_1608_, v_cnstrs_1610_);
if (v___x_1611_ == 0)
{
lean_dec(v_declName_1387_);
v___y_1438_ = v_extraFacts_1595_;
v___y_1439_ = v_extensions_1592_;
v___y_1440_ = v_symPrios_1596_;
v___y_1441_ = v_anchorRefs_x3f_1599_;
v___y_1442_ = v_norm_1597_;
v___y_1443_ = v_extra_1593_;
v___y_1444_ = v_config_1591_;
v___y_1445_ = v_a_1607_;
v___y_1446_ = v_normProcs_1598_;
v___y_1447_ = v_a_1603_;
v___y_1448_ = v_extraInj_1594_;
goto v___jp_1437_;
}
else
{
lean_object* v_patterns_1612_; lean_object* v_origin_1613_; lean_object* v_cnstrs_1614_; uint8_t v___x_1615_; 
v_patterns_1612_ = lean_ctor_get(v_a_1607_, 3);
v_origin_1613_ = lean_ctor_get(v_a_1607_, 5);
v_cnstrs_1614_ = lean_ctor_get(v_a_1607_, 7);
v___x_1615_ = l_Lean_Meta_Grind_ExtensionStateArray_containsWithSamePatterns(v_extensions_1592_, v_origin_1613_, v_patterns_1612_, v_cnstrs_1614_);
if (v___x_1615_ == 0)
{
lean_dec(v_declName_1387_);
v___y_1438_ = v_extraFacts_1595_;
v___y_1439_ = v_extensions_1592_;
v___y_1440_ = v_symPrios_1596_;
v___y_1441_ = v_anchorRefs_x3f_1599_;
v___y_1442_ = v_norm_1597_;
v___y_1443_ = v_extra_1593_;
v___y_1444_ = v_config_1591_;
v___y_1445_ = v_a_1607_;
v___y_1446_ = v_normProcs_1598_;
v___y_1447_ = v_a_1603_;
v___y_1448_ = v_extraInj_1594_;
goto v___jp_1437_;
}
else
{
lean_object* v___x_1616_; 
v___x_1616_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg(v_extensions_1592_, v_declName_1387_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_);
if (lean_obj_tag(v___x_1616_) == 0)
{
lean_dec_ref_known(v___x_1616_, 1);
v___y_1438_ = v_extraFacts_1595_;
v___y_1439_ = v_extensions_1592_;
v___y_1440_ = v_symPrios_1596_;
v___y_1441_ = v_anchorRefs_x3f_1599_;
v___y_1442_ = v_norm_1597_;
v___y_1443_ = v_extra_1593_;
v___y_1444_ = v_config_1591_;
v___y_1445_ = v_a_1607_;
v___y_1446_ = v_normProcs_1598_;
v___y_1447_ = v_a_1603_;
v___y_1448_ = v_extraInj_1594_;
goto v___jp_1437_;
}
else
{
lean_object* v_a_1617_; lean_object* v___x_1619_; uint8_t v_isShared_1620_; uint8_t v_isSharedCheck_1624_; 
lean_dec(v_a_1607_);
lean_dec(v_a_1603_);
lean_dec(v_anchorRefs_x3f_1599_);
lean_dec_ref(v_normProcs_1598_);
lean_dec_ref(v_norm_1597_);
lean_dec_ref(v_symPrios_1596_);
lean_dec_ref(v_extraFacts_1595_);
lean_dec_ref(v_extraInj_1594_);
lean_dec_ref(v_extra_1593_);
lean_dec_ref(v_extensions_1592_);
lean_dec_ref(v_config_1591_);
v_a_1617_ = lean_ctor_get(v___x_1616_, 0);
v_isSharedCheck_1624_ = !lean_is_exclusive(v___x_1616_);
if (v_isSharedCheck_1624_ == 0)
{
v___x_1619_ = v___x_1616_;
v_isShared_1620_ = v_isSharedCheck_1624_;
goto v_resetjp_1618_;
}
else
{
lean_inc(v_a_1617_);
lean_dec(v___x_1616_);
v___x_1619_ = lean_box(0);
v_isShared_1620_ = v_isSharedCheck_1624_;
goto v_resetjp_1618_;
}
v_resetjp_1618_:
{
lean_object* v___x_1622_; 
if (v_isShared_1620_ == 0)
{
v___x_1622_ = v___x_1619_;
goto v_reusejp_1621_;
}
else
{
lean_object* v_reuseFailAlloc_1623_; 
v_reuseFailAlloc_1623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1623_, 0, v_a_1617_);
v___x_1622_ = v_reuseFailAlloc_1623_;
goto v_reusejp_1621_;
}
v_reusejp_1621_:
{
return v___x_1622_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1625_; lean_object* v___x_1627_; uint8_t v_isShared_1628_; uint8_t v_isSharedCheck_1632_; 
lean_dec(v_a_1603_);
lean_dec(v_anchorRefs_x3f_1599_);
lean_dec_ref(v_normProcs_1598_);
lean_dec_ref(v_norm_1597_);
lean_dec_ref(v_symPrios_1596_);
lean_dec_ref(v_extraFacts_1595_);
lean_dec_ref(v_extraInj_1594_);
lean_dec_ref(v_extra_1593_);
lean_dec_ref(v_extensions_1592_);
lean_dec_ref(v_config_1591_);
lean_dec(v_declName_1387_);
v_a_1625_ = lean_ctor_get(v___x_1605_, 0);
v_isSharedCheck_1632_ = !lean_is_exclusive(v___x_1605_);
if (v_isSharedCheck_1632_ == 0)
{
v___x_1627_ = v___x_1605_;
v_isShared_1628_ = v_isSharedCheck_1632_;
goto v_resetjp_1626_;
}
else
{
lean_inc(v_a_1625_);
lean_dec(v___x_1605_);
v___x_1627_ = lean_box(0);
v_isShared_1628_ = v_isSharedCheck_1632_;
goto v_resetjp_1626_;
}
v_resetjp_1626_:
{
lean_object* v___x_1630_; 
if (v_isShared_1628_ == 0)
{
v___x_1630_ = v___x_1627_;
goto v_reusejp_1629_;
}
else
{
lean_object* v_reuseFailAlloc_1631_; 
v_reuseFailAlloc_1631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1631_, 0, v_a_1625_);
v___x_1630_ = v_reuseFailAlloc_1631_;
goto v_reusejp_1629_;
}
v_reusejp_1629_:
{
return v___x_1630_;
}
}
}
}
else
{
lean_object* v_a_1633_; lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1640_; 
lean_dec(v_anchorRefs_x3f_1599_);
lean_dec_ref(v_normProcs_1598_);
lean_dec_ref(v_norm_1597_);
lean_dec_ref(v_symPrios_1596_);
lean_dec_ref(v_extraFacts_1595_);
lean_dec_ref(v_extraInj_1594_);
lean_dec_ref(v_extra_1593_);
lean_dec_ref(v_extensions_1592_);
lean_dec_ref(v_config_1591_);
lean_dec(v_declName_1387_);
v_a_1633_ = lean_ctor_get(v___x_1602_, 0);
v_isSharedCheck_1640_ = !lean_is_exclusive(v___x_1602_);
if (v_isSharedCheck_1640_ == 0)
{
v___x_1635_ = v___x_1602_;
v_isShared_1636_ = v_isSharedCheck_1640_;
goto v_resetjp_1634_;
}
else
{
lean_inc(v_a_1633_);
lean_dec(v___x_1602_);
v___x_1635_ = lean_box(0);
v_isShared_1636_ = v_isSharedCheck_1640_;
goto v_resetjp_1634_;
}
v_resetjp_1634_:
{
lean_object* v___x_1638_; 
if (v_isShared_1636_ == 0)
{
v___x_1638_ = v___x_1635_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1639_; 
v_reuseFailAlloc_1639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1639_, 0, v_a_1633_);
v___x_1638_ = v_reuseFailAlloc_1639_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
return v___x_1638_;
}
}
}
}
}
else
{
lean_object* v_a_1642_; lean_object* v___x_1644_; uint8_t v_isShared_1645_; uint8_t v_isSharedCheck_1649_; 
lean_del_object(v___x_1588_);
lean_dec(v_declName_1387_);
lean_dec_ref(v_params_1385_);
v_a_1642_ = lean_ctor_get(v___x_1590_, 0);
v_isSharedCheck_1649_ = !lean_is_exclusive(v___x_1590_);
if (v_isSharedCheck_1649_ == 0)
{
v___x_1644_ = v___x_1590_;
v_isShared_1645_ = v_isSharedCheck_1649_;
goto v_resetjp_1643_;
}
else
{
lean_inc(v_a_1642_);
lean_dec(v___x_1590_);
v___x_1644_ = lean_box(0);
v_isShared_1645_ = v_isSharedCheck_1649_;
goto v_resetjp_1643_;
}
v_resetjp_1643_:
{
lean_object* v___x_1647_; 
if (v_isShared_1645_ == 0)
{
v___x_1647_ = v___x_1644_;
goto v_reusejp_1646_;
}
else
{
lean_object* v_reuseFailAlloc_1648_; 
v_reuseFailAlloc_1648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1648_, 0, v_a_1642_);
v___x_1647_ = v_reuseFailAlloc_1648_;
goto v_reusejp_1646_;
}
v_reusejp_1646_:
{
return v___x_1647_;
}
}
}
}
}
else
{
switch(lean_obj_tag(v_kind_1388_))
{
case 0:
{
v___y_1568_ = v___y_1583_;
v___y_1569_ = v___y_1585_;
v___y_1570_ = v___y_1584_;
v___y_1571_ = v___y_1582_;
goto v___jp_1567_;
}
case 1:
{
v___y_1568_ = v___y_1583_;
v___y_1569_ = v___y_1585_;
v___y_1570_ = v___y_1584_;
v___y_1571_ = v___y_1582_;
goto v___jp_1567_;
}
default: 
{
v___y_1548_ = v___y_1582_;
v___y_1549_ = v___y_1583_;
v___y_1550_ = v___y_1584_;
v___y_1551_ = v___y_1585_;
goto v___jp_1547_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___boxed(lean_object* v_params_1693_, lean_object* v_id_1694_, lean_object* v_declName_1695_, lean_object* v_kind_1696_, lean_object* v_minIndexable_1697_, lean_object* v_suggest_1698_, lean_object* v_warn_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_){
_start:
{
uint8_t v_minIndexable_boxed_1705_; uint8_t v_suggest_boxed_1706_; uint8_t v_warn_boxed_1707_; lean_object* v_res_1708_; 
v_minIndexable_boxed_1705_ = lean_unbox(v_minIndexable_1697_);
v_suggest_boxed_1706_ = lean_unbox(v_suggest_1698_);
v_warn_boxed_1707_ = lean_unbox(v_warn_1699_);
v_res_1708_ = l_Lean_Elab_Tactic_addEMatchTheorem(v_params_1693_, v_id_1694_, v_declName_1695_, v_kind_1696_, v_minIndexable_boxed_1705_, v_suggest_boxed_1706_, v_warn_boxed_1707_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
return v_res_1708_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2(lean_object* v_declName_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_){
_start:
{
lean_object* v___x_1715_; 
v___x_1715_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2___redArg(v_declName_1709_, v___y_1713_);
return v___x_1715_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2___boxed(lean_object* v_declName_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_){
_start:
{
lean_object* v_res_1722_; 
v_res_1722_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2(v_declName_1716_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_);
lean_dec(v___y_1720_);
lean_dec_ref(v___y_1719_);
lean_dec(v___y_1718_);
lean_dec_ref(v___y_1717_);
return v_res_1722_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0(lean_object* v_00_u03b1_1723_, lean_object* v_constName_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_){
_start:
{
lean_object* v___x_1730_; 
v___x_1730_ = l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0___redArg(v_constName_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_);
return v___x_1730_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1731_, lean_object* v_constName_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_){
_start:
{
lean_object* v_res_1738_; 
v_res_1738_ = l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0(v_00_u03b1_1731_, v_constName_1732_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_);
lean_dec(v___y_1736_);
lean_dec_ref(v___y_1735_);
lean_dec(v___y_1734_);
lean_dec_ref(v___y_1733_);
return v_res_1738_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_1739_, lean_object* v_ref_1740_, lean_object* v_constName_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_){
_start:
{
lean_object* v___x_1747_; 
v___x_1747_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg(v_ref_1740_, v_constName_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_);
return v___x_1747_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1748_, lean_object* v_ref_1749_, lean_object* v_constName_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_){
_start:
{
lean_object* v_res_1756_; 
v_res_1756_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1(v_00_u03b1_1748_, v_ref_1749_, v_constName_1750_, v___y_1751_, v___y_1752_, v___y_1753_, v___y_1754_);
lean_dec(v___y_1754_);
lean_dec_ref(v___y_1753_);
lean_dec(v___y_1752_);
lean_dec_ref(v___y_1751_);
lean_dec(v_ref_1749_);
return v_res_1756_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b1_1757_, lean_object* v_ref_1758_, lean_object* v_msg_1759_, lean_object* v_declHint_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_){
_start:
{
lean_object* v___x_1766_; 
v___x_1766_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_1758_, v_msg_1759_, v_declHint_1760_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_);
return v___x_1766_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b1_1767_, lean_object* v_ref_1768_, lean_object* v_msg_1769_, lean_object* v_declHint_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_){
_start:
{
lean_object* v_res_1776_; 
v_res_1776_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4(v_00_u03b1_1767_, v_ref_1768_, v_msg_1769_, v_declHint_1770_, v___y_1771_, v___y_1772_, v___y_1773_, v___y_1774_);
lean_dec(v___y_1774_);
lean_dec_ref(v___y_1773_);
lean_dec(v___y_1772_);
lean_dec_ref(v___y_1771_);
lean_dec(v_ref_1768_);
return v_res_1776_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6(lean_object* v_msg_1777_, lean_object* v_declHint_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_){
_start:
{
lean_object* v___x_1784_; 
v___x_1784_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(v_msg_1777_, v_declHint_1778_, v___y_1782_);
return v___x_1784_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___boxed(lean_object* v_msg_1785_, lean_object* v_declHint_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_){
_start:
{
lean_object* v_res_1792_; 
v_res_1792_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6(v_msg_1785_, v_declHint_1786_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_);
lean_dec(v___y_1790_);
lean_dec_ref(v___y_1789_);
lean_dec(v___y_1788_);
lean_dec_ref(v___y_1787_);
return v_res_1792_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6(lean_object* v_00_u03b1_1793_, lean_object* v_ref_1794_, lean_object* v_msg_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_){
_start:
{
lean_object* v___x_1801_; 
v___x_1801_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_1794_, v_msg_1795_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_);
return v___x_1801_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6___boxed(lean_object* v_00_u03b1_1802_, lean_object* v_ref_1803_, lean_object* v_msg_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_){
_start:
{
lean_object* v_res_1810_; 
v_res_1810_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6(v_00_u03b1_1802_, v_ref_1803_, v_msg_1804_, v___y_1805_, v___y_1806_, v___y_1807_, v___y_1808_);
lean_dec(v___y_1808_);
lean_dec_ref(v___y_1807_);
lean_dec(v___y_1806_);
lean_dec_ref(v___y_1805_);
lean_dec(v_ref_1803_);
return v_res_1810_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor(lean_object* v_params_1813_, lean_object* v_val_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_){
_start:
{
lean_object* v_config_1818_; lean_object* v_extensions_1819_; lean_object* v_extra_1820_; lean_object* v_extraInj_1821_; lean_object* v_extraFacts_1822_; lean_object* v_symPrios_1823_; lean_object* v_norm_1824_; lean_object* v_normProcs_1825_; lean_object* v_anchorRefs_x3f_1826_; lean_object* v___x_1828_; uint8_t v_isShared_1829_; uint8_t v_isSharedCheck_1856_; 
v_config_1818_ = lean_ctor_get(v_params_1813_, 0);
v_extensions_1819_ = lean_ctor_get(v_params_1813_, 1);
v_extra_1820_ = lean_ctor_get(v_params_1813_, 2);
v_extraInj_1821_ = lean_ctor_get(v_params_1813_, 3);
v_extraFacts_1822_ = lean_ctor_get(v_params_1813_, 4);
v_symPrios_1823_ = lean_ctor_get(v_params_1813_, 5);
v_norm_1824_ = lean_ctor_get(v_params_1813_, 6);
v_normProcs_1825_ = lean_ctor_get(v_params_1813_, 7);
v_anchorRefs_x3f_1826_ = lean_ctor_get(v_params_1813_, 8);
v_isSharedCheck_1856_ = !lean_is_exclusive(v_params_1813_);
if (v_isSharedCheck_1856_ == 0)
{
v___x_1828_ = v_params_1813_;
v_isShared_1829_ = v_isSharedCheck_1856_;
goto v_resetjp_1827_;
}
else
{
lean_inc(v_anchorRefs_x3f_1826_);
lean_inc(v_normProcs_1825_);
lean_inc(v_norm_1824_);
lean_inc(v_symPrios_1823_);
lean_inc(v_extraFacts_1822_);
lean_inc(v_extraInj_1821_);
lean_inc(v_extra_1820_);
lean_inc(v_extensions_1819_);
lean_inc(v_config_1818_);
lean_dec(v_params_1813_);
v___x_1828_ = lean_box(0);
v_isShared_1829_ = v_isSharedCheck_1856_;
goto v_resetjp_1827_;
}
v_resetjp_1827_:
{
lean_object* v___y_1831_; 
if (lean_obj_tag(v_anchorRefs_x3f_1826_) == 0)
{
lean_object* v___x_1854_; 
v___x_1854_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor___closed__0));
v___y_1831_ = v___x_1854_;
goto v___jp_1830_;
}
else
{
lean_object* v_val_1855_; 
v_val_1855_ = lean_ctor_get(v_anchorRefs_x3f_1826_, 0);
lean_inc(v_val_1855_);
lean_dec_ref_known(v_anchorRefs_x3f_1826_, 1);
v___y_1831_ = v_val_1855_;
goto v___jp_1830_;
}
v___jp_1830_:
{
lean_object* v___x_1832_; 
v___x_1832_ = l_Lean_Elab_Tactic_Grind_elabAnchorRef(v_val_1814_, v___y_1815_, v___y_1816_);
if (lean_obj_tag(v___x_1832_) == 0)
{
lean_object* v_a_1833_; lean_object* v___x_1835_; uint8_t v_isShared_1836_; uint8_t v_isSharedCheck_1845_; 
v_a_1833_ = lean_ctor_get(v___x_1832_, 0);
v_isSharedCheck_1845_ = !lean_is_exclusive(v___x_1832_);
if (v_isSharedCheck_1845_ == 0)
{
v___x_1835_ = v___x_1832_;
v_isShared_1836_ = v_isSharedCheck_1845_;
goto v_resetjp_1834_;
}
else
{
lean_inc(v_a_1833_);
lean_dec(v___x_1832_);
v___x_1835_ = lean_box(0);
v_isShared_1836_ = v_isSharedCheck_1845_;
goto v_resetjp_1834_;
}
v_resetjp_1834_:
{
lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1840_; 
v___x_1837_ = lean_array_push(v___y_1831_, v_a_1833_);
v___x_1838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1838_, 0, v___x_1837_);
if (v_isShared_1829_ == 0)
{
lean_ctor_set(v___x_1828_, 8, v___x_1838_);
v___x_1840_ = v___x_1828_;
goto v_reusejp_1839_;
}
else
{
lean_object* v_reuseFailAlloc_1844_; 
v_reuseFailAlloc_1844_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1844_, 0, v_config_1818_);
lean_ctor_set(v_reuseFailAlloc_1844_, 1, v_extensions_1819_);
lean_ctor_set(v_reuseFailAlloc_1844_, 2, v_extra_1820_);
lean_ctor_set(v_reuseFailAlloc_1844_, 3, v_extraInj_1821_);
lean_ctor_set(v_reuseFailAlloc_1844_, 4, v_extraFacts_1822_);
lean_ctor_set(v_reuseFailAlloc_1844_, 5, v_symPrios_1823_);
lean_ctor_set(v_reuseFailAlloc_1844_, 6, v_norm_1824_);
lean_ctor_set(v_reuseFailAlloc_1844_, 7, v_normProcs_1825_);
lean_ctor_set(v_reuseFailAlloc_1844_, 8, v___x_1838_);
v___x_1840_ = v_reuseFailAlloc_1844_;
goto v_reusejp_1839_;
}
v_reusejp_1839_:
{
lean_object* v___x_1842_; 
if (v_isShared_1836_ == 0)
{
lean_ctor_set(v___x_1835_, 0, v___x_1840_);
v___x_1842_ = v___x_1835_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1843_; 
v_reuseFailAlloc_1843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1843_, 0, v___x_1840_);
v___x_1842_ = v_reuseFailAlloc_1843_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
return v___x_1842_;
}
}
}
}
else
{
lean_object* v_a_1846_; lean_object* v___x_1848_; uint8_t v_isShared_1849_; uint8_t v_isSharedCheck_1853_; 
lean_dec_ref(v___y_1831_);
lean_del_object(v___x_1828_);
lean_dec_ref(v_normProcs_1825_);
lean_dec_ref(v_norm_1824_);
lean_dec_ref(v_symPrios_1823_);
lean_dec_ref(v_extraFacts_1822_);
lean_dec_ref(v_extraInj_1821_);
lean_dec_ref(v_extra_1820_);
lean_dec_ref(v_extensions_1819_);
lean_dec_ref(v_config_1818_);
v_a_1846_ = lean_ctor_get(v___x_1832_, 0);
v_isSharedCheck_1853_ = !lean_is_exclusive(v___x_1832_);
if (v_isSharedCheck_1853_ == 0)
{
v___x_1848_ = v___x_1832_;
v_isShared_1849_ = v_isSharedCheck_1853_;
goto v_resetjp_1847_;
}
else
{
lean_inc(v_a_1846_);
lean_dec(v___x_1832_);
v___x_1848_ = lean_box(0);
v_isShared_1849_ = v_isSharedCheck_1853_;
goto v_resetjp_1847_;
}
v_resetjp_1847_:
{
lean_object* v___x_1851_; 
if (v_isShared_1849_ == 0)
{
v___x_1851_ = v___x_1848_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v_a_1846_);
v___x_1851_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
return v___x_1851_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor___boxed(lean_object* v_params_1857_, lean_object* v_val_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_){
_start:
{
lean_object* v_res_1862_; 
v_res_1862_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor(v_params_1857_, v_val_1858_, v___y_1859_, v___y_1860_);
lean_dec(v___y_1860_);
lean_dec_ref(v___y_1859_);
lean_dec(v_val_1858_);
return v_res_1862_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__1(void){
_start:
{
lean_object* v___x_1864_; lean_object* v___x_1865_; 
v___x_1864_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__0));
v___x_1865_ = l_Lean_stringToMessageData(v___x_1864_);
return v___x_1865_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert(lean_object* v_params_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_){
_start:
{
lean_object* v_config_1870_; uint8_t v_revert_1871_; 
v_config_1870_ = lean_ctor_get(v_params_1866_, 0);
v_revert_1871_ = lean_ctor_get_uint8(v_config_1870_, sizeof(void*)*14 + 30);
if (v_revert_1871_ == 0)
{
lean_object* v___x_1872_; lean_object* v___x_1873_; 
v___x_1872_ = lean_box(0);
v___x_1873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1873_, 0, v___x_1872_);
return v___x_1873_;
}
else
{
lean_object* v___x_1874_; lean_object* v___x_1875_; 
v___x_1874_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__1, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__1);
v___x_1875_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___redArg(v___x_1874_, v___y_1867_, v___y_1868_);
return v___x_1875_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___boxed(lean_object* v_params_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_){
_start:
{
lean_object* v_res_1880_; 
v_res_1880_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert(v_params_1876_, v___y_1877_, v___y_1878_);
lean_dec(v___y_1878_);
lean_dec_ref(v___y_1877_);
lean_dec_ref(v_params_1876_);
return v_res_1880_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0___redArg(lean_object* v_e_1881_, lean_object* v___y_1882_){
_start:
{
uint8_t v___x_1884_; 
v___x_1884_ = l_Lean_Expr_hasMVar(v_e_1881_);
if (v___x_1884_ == 0)
{
lean_object* v___x_1885_; 
v___x_1885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1885_, 0, v_e_1881_);
return v___x_1885_;
}
else
{
lean_object* v___x_1886_; lean_object* v_mctx_1887_; lean_object* v___x_1888_; lean_object* v_fst_1889_; lean_object* v_snd_1890_; lean_object* v___x_1891_; lean_object* v_cache_1892_; lean_object* v_zetaDeltaFVarIds_1893_; lean_object* v_postponed_1894_; lean_object* v_diag_1895_; lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1904_; 
v___x_1886_ = lean_st_ref_get(v___y_1882_);
v_mctx_1887_ = lean_ctor_get(v___x_1886_, 0);
lean_inc_ref(v_mctx_1887_);
lean_dec(v___x_1886_);
v___x_1888_ = l_Lean_instantiateMVarsCore(v_mctx_1887_, v_e_1881_);
v_fst_1889_ = lean_ctor_get(v___x_1888_, 0);
lean_inc(v_fst_1889_);
v_snd_1890_ = lean_ctor_get(v___x_1888_, 1);
lean_inc(v_snd_1890_);
lean_dec_ref(v___x_1888_);
v___x_1891_ = lean_st_ref_take(v___y_1882_);
v_cache_1892_ = lean_ctor_get(v___x_1891_, 1);
v_zetaDeltaFVarIds_1893_ = lean_ctor_get(v___x_1891_, 2);
v_postponed_1894_ = lean_ctor_get(v___x_1891_, 3);
v_diag_1895_ = lean_ctor_get(v___x_1891_, 4);
v_isSharedCheck_1904_ = !lean_is_exclusive(v___x_1891_);
if (v_isSharedCheck_1904_ == 0)
{
lean_object* v_unused_1905_; 
v_unused_1905_ = lean_ctor_get(v___x_1891_, 0);
lean_dec(v_unused_1905_);
v___x_1897_ = v___x_1891_;
v_isShared_1898_ = v_isSharedCheck_1904_;
goto v_resetjp_1896_;
}
else
{
lean_inc(v_diag_1895_);
lean_inc(v_postponed_1894_);
lean_inc(v_zetaDeltaFVarIds_1893_);
lean_inc(v_cache_1892_);
lean_dec(v___x_1891_);
v___x_1897_ = lean_box(0);
v_isShared_1898_ = v_isSharedCheck_1904_;
goto v_resetjp_1896_;
}
v_resetjp_1896_:
{
lean_object* v___x_1900_; 
if (v_isShared_1898_ == 0)
{
lean_ctor_set(v___x_1897_, 0, v_snd_1890_);
v___x_1900_ = v___x_1897_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v_snd_1890_);
lean_ctor_set(v_reuseFailAlloc_1903_, 1, v_cache_1892_);
lean_ctor_set(v_reuseFailAlloc_1903_, 2, v_zetaDeltaFVarIds_1893_);
lean_ctor_set(v_reuseFailAlloc_1903_, 3, v_postponed_1894_);
lean_ctor_set(v_reuseFailAlloc_1903_, 4, v_diag_1895_);
v___x_1900_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
lean_object* v___x_1901_; lean_object* v___x_1902_; 
v___x_1901_ = lean_st_ref_put(v___y_1882_, v___x_1900_);
v___x_1902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1902_, 0, v_fst_1889_);
return v___x_1902_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0___redArg___boxed(lean_object* v_e_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_){
_start:
{
lean_object* v_res_1909_; 
v_res_1909_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0___redArg(v_e_1906_, v___y_1907_);
lean_dec(v___y_1907_);
return v_res_1909_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0(lean_object* v_e_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_){
_start:
{
lean_object* v___x_1918_; 
v___x_1918_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0___redArg(v_e_1910_, v___y_1914_);
return v___x_1918_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0___boxed(lean_object* v_e_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_){
_start:
{
lean_object* v_res_1927_; 
v_res_1927_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0(v_e_1919_, v___y_1920_, v___y_1921_, v___y_1922_, v___y_1923_, v___y_1924_, v___y_1925_);
lean_dec(v___y_1925_);
lean_dec_ref(v___y_1924_);
lean_dec(v___y_1923_);
lean_dec_ref(v___y_1922_);
lean_dec(v___y_1921_);
lean_dec_ref(v___y_1920_);
return v_res_1927_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__0(lean_object* v_p_1930_, lean_object* v_term_1931_, lean_object* v___x_1932_, uint8_t v___x_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_){
_start:
{
lean_object* v_toCold_1941_; lean_object* v_currRecDepth_1942_; lean_object* v_ref_1943_; uint8_t v_diag_1944_; uint8_t v_suppressElabErrors_1945_; lean_object* v___x_1947_; uint8_t v_isShared_1948_; uint8_t v_isSharedCheck_2013_; 
v_toCold_1941_ = lean_ctor_get(v___y_1938_, 0);
v_currRecDepth_1942_ = lean_ctor_get(v___y_1938_, 1);
v_ref_1943_ = lean_ctor_get(v___y_1938_, 2);
v_diag_1944_ = lean_ctor_get_uint8(v___y_1938_, sizeof(void*)*3);
v_suppressElabErrors_1945_ = lean_ctor_get_uint8(v___y_1938_, sizeof(void*)*3 + 1);
v_isSharedCheck_2013_ = !lean_is_exclusive(v___y_1938_);
if (v_isSharedCheck_2013_ == 0)
{
v___x_1947_ = v___y_1938_;
v_isShared_1948_ = v_isSharedCheck_2013_;
goto v_resetjp_1946_;
}
else
{
lean_inc(v_ref_1943_);
lean_inc(v_currRecDepth_1942_);
lean_inc(v_toCold_1941_);
lean_dec(v___y_1938_);
v___x_1947_ = lean_box(0);
v_isShared_1948_ = v_isSharedCheck_2013_;
goto v_resetjp_1946_;
}
v_resetjp_1946_:
{
lean_object* v_ref_1949_; lean_object* v___x_1951_; 
v_ref_1949_ = l_Lean_replaceRef(v_p_1930_, v_ref_1943_);
lean_dec(v_ref_1943_);
if (v_isShared_1948_ == 0)
{
lean_ctor_set(v___x_1947_, 2, v_ref_1949_);
v___x_1951_ = v___x_1947_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v_toCold_1941_);
lean_ctor_set(v_reuseFailAlloc_2012_, 1, v_currRecDepth_1942_);
lean_ctor_set(v_reuseFailAlloc_2012_, 2, v_ref_1949_);
lean_ctor_set_uint8(v_reuseFailAlloc_2012_, sizeof(void*)*3, v_diag_1944_);
lean_ctor_set_uint8(v_reuseFailAlloc_2012_, sizeof(void*)*3 + 1, v_suppressElabErrors_1945_);
v___x_1951_ = v_reuseFailAlloc_2012_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
lean_object* v___x_1952_; 
v___x_1952_ = l_Lean_Elab_Term_elabTerm(v_term_1931_, v___x_1932_, v___x_1933_, v___x_1933_, v___y_1934_, v___y_1935_, v___y_1936_, v___y_1937_, v___x_1951_, v___y_1939_);
if (lean_obj_tag(v___x_1952_) == 0)
{
lean_object* v_a_1953_; uint8_t v___x_1954_; lean_object* v___x_1955_; 
v_a_1953_ = lean_ctor_get(v___x_1952_, 0);
lean_inc(v_a_1953_);
lean_dec_ref_known(v___x_1952_, 1);
v___x_1954_ = 1;
v___x_1955_ = l_Lean_Elab_Term_synthesizeSyntheticMVars(v___x_1954_, v___x_1933_, v___y_1934_, v___y_1935_, v___y_1936_, v___y_1937_, v___x_1951_, v___y_1939_);
if (lean_obj_tag(v___x_1955_) == 0)
{
lean_object* v___x_1956_; lean_object* v_a_1957_; lean_object* v___x_1959_; uint8_t v_isShared_1960_; uint8_t v_isSharedCheck_1995_; 
lean_dec_ref_known(v___x_1955_, 1);
v___x_1956_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0___redArg(v_a_1953_, v___y_1937_);
v_a_1957_ = lean_ctor_get(v___x_1956_, 0);
v_isSharedCheck_1995_ = !lean_is_exclusive(v___x_1956_);
if (v_isSharedCheck_1995_ == 0)
{
v___x_1959_ = v___x_1956_;
v_isShared_1960_ = v_isSharedCheck_1995_;
goto v_resetjp_1958_;
}
else
{
lean_inc(v_a_1957_);
lean_dec(v___x_1956_);
v___x_1959_ = lean_box(0);
v_isShared_1960_ = v_isSharedCheck_1995_;
goto v_resetjp_1958_;
}
v_resetjp_1958_:
{
uint8_t v___x_1961_; 
v___x_1961_ = l_Lean_Expr_hasSyntheticSorry(v_a_1957_);
if (v___x_1961_ == 0)
{
lean_object* v___x_1962_; uint8_t v___x_1963_; 
v___x_1962_ = l_Lean_Expr_eta(v_a_1957_);
v___x_1963_ = l_Lean_Expr_hasMVar(v___x_1962_);
if (v___x_1963_ == 0)
{
lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1968_; 
lean_dec_ref(v___x_1951_);
v___x_1964_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__0___closed__0));
v___x_1965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1965_, 0, v___x_1964_);
lean_ctor_set(v___x_1965_, 1, v___x_1962_);
v___x_1966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1966_, 0, v___x_1965_);
if (v_isShared_1960_ == 0)
{
lean_ctor_set(v___x_1959_, 0, v___x_1966_);
v___x_1968_ = v___x_1959_;
goto v_reusejp_1967_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v___x_1966_);
v___x_1968_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1967_;
}
v_reusejp_1967_:
{
return v___x_1968_;
}
}
else
{
lean_object* v___x_1970_; 
lean_del_object(v___x_1959_);
v___x_1970_ = l_Lean_Meta_abstractMVars(v___x_1962_, v___x_1933_, v___y_1936_, v___y_1937_, v___x_1951_, v___y_1939_);
lean_dec_ref(v___x_1951_);
if (lean_obj_tag(v___x_1970_) == 0)
{
lean_object* v_a_1971_; lean_object* v___x_1973_; uint8_t v_isShared_1974_; uint8_t v_isSharedCheck_1982_; 
v_a_1971_ = lean_ctor_get(v___x_1970_, 0);
v_isSharedCheck_1982_ = !lean_is_exclusive(v___x_1970_);
if (v_isSharedCheck_1982_ == 0)
{
v___x_1973_ = v___x_1970_;
v_isShared_1974_ = v_isSharedCheck_1982_;
goto v_resetjp_1972_;
}
else
{
lean_inc(v_a_1971_);
lean_dec(v___x_1970_);
v___x_1973_ = lean_box(0);
v_isShared_1974_ = v_isSharedCheck_1982_;
goto v_resetjp_1972_;
}
v_resetjp_1972_:
{
lean_object* v_paramNames_1975_; lean_object* v_expr_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1980_; 
v_paramNames_1975_ = lean_ctor_get(v_a_1971_, 0);
lean_inc_ref(v_paramNames_1975_);
v_expr_1976_ = lean_ctor_get(v_a_1971_, 2);
lean_inc_ref(v_expr_1976_);
lean_dec(v_a_1971_);
v___x_1977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1977_, 0, v_paramNames_1975_);
lean_ctor_set(v___x_1977_, 1, v_expr_1976_);
v___x_1978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1978_, 0, v___x_1977_);
if (v_isShared_1974_ == 0)
{
lean_ctor_set(v___x_1973_, 0, v___x_1978_);
v___x_1980_ = v___x_1973_;
goto v_reusejp_1979_;
}
else
{
lean_object* v_reuseFailAlloc_1981_; 
v_reuseFailAlloc_1981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1981_, 0, v___x_1978_);
v___x_1980_ = v_reuseFailAlloc_1981_;
goto v_reusejp_1979_;
}
v_reusejp_1979_:
{
return v___x_1980_;
}
}
}
else
{
lean_object* v_a_1983_; lean_object* v___x_1985_; uint8_t v_isShared_1986_; uint8_t v_isSharedCheck_1990_; 
v_a_1983_ = lean_ctor_get(v___x_1970_, 0);
v_isSharedCheck_1990_ = !lean_is_exclusive(v___x_1970_);
if (v_isSharedCheck_1990_ == 0)
{
v___x_1985_ = v___x_1970_;
v_isShared_1986_ = v_isSharedCheck_1990_;
goto v_resetjp_1984_;
}
else
{
lean_inc(v_a_1983_);
lean_dec(v___x_1970_);
v___x_1985_ = lean_box(0);
v_isShared_1986_ = v_isSharedCheck_1990_;
goto v_resetjp_1984_;
}
v_resetjp_1984_:
{
lean_object* v___x_1988_; 
if (v_isShared_1986_ == 0)
{
v___x_1988_ = v___x_1985_;
goto v_reusejp_1987_;
}
else
{
lean_object* v_reuseFailAlloc_1989_; 
v_reuseFailAlloc_1989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1989_, 0, v_a_1983_);
v___x_1988_ = v_reuseFailAlloc_1989_;
goto v_reusejp_1987_;
}
v_reusejp_1987_:
{
return v___x_1988_;
}
}
}
}
}
else
{
lean_object* v___x_1991_; lean_object* v___x_1993_; 
lean_dec(v_a_1957_);
lean_dec_ref(v___x_1951_);
v___x_1991_ = lean_box(0);
if (v_isShared_1960_ == 0)
{
lean_ctor_set(v___x_1959_, 0, v___x_1991_);
v___x_1993_ = v___x_1959_;
goto v_reusejp_1992_;
}
else
{
lean_object* v_reuseFailAlloc_1994_; 
v_reuseFailAlloc_1994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1994_, 0, v___x_1991_);
v___x_1993_ = v_reuseFailAlloc_1994_;
goto v_reusejp_1992_;
}
v_reusejp_1992_:
{
return v___x_1993_;
}
}
}
}
else
{
lean_object* v_a_1996_; lean_object* v___x_1998_; uint8_t v_isShared_1999_; uint8_t v_isSharedCheck_2003_; 
lean_dec(v_a_1953_);
lean_dec_ref(v___x_1951_);
v_a_1996_ = lean_ctor_get(v___x_1955_, 0);
v_isSharedCheck_2003_ = !lean_is_exclusive(v___x_1955_);
if (v_isSharedCheck_2003_ == 0)
{
v___x_1998_ = v___x_1955_;
v_isShared_1999_ = v_isSharedCheck_2003_;
goto v_resetjp_1997_;
}
else
{
lean_inc(v_a_1996_);
lean_dec(v___x_1955_);
v___x_1998_ = lean_box(0);
v_isShared_1999_ = v_isSharedCheck_2003_;
goto v_resetjp_1997_;
}
v_resetjp_1997_:
{
lean_object* v___x_2001_; 
if (v_isShared_1999_ == 0)
{
v___x_2001_ = v___x_1998_;
goto v_reusejp_2000_;
}
else
{
lean_object* v_reuseFailAlloc_2002_; 
v_reuseFailAlloc_2002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2002_, 0, v_a_1996_);
v___x_2001_ = v_reuseFailAlloc_2002_;
goto v_reusejp_2000_;
}
v_reusejp_2000_:
{
return v___x_2001_;
}
}
}
}
else
{
lean_object* v_a_2004_; lean_object* v___x_2006_; uint8_t v_isShared_2007_; uint8_t v_isSharedCheck_2011_; 
lean_dec_ref(v___x_1951_);
v_a_2004_ = lean_ctor_get(v___x_1952_, 0);
v_isSharedCheck_2011_ = !lean_is_exclusive(v___x_1952_);
if (v_isSharedCheck_2011_ == 0)
{
v___x_2006_ = v___x_1952_;
v_isShared_2007_ = v_isSharedCheck_2011_;
goto v_resetjp_2005_;
}
else
{
lean_inc(v_a_2004_);
lean_dec(v___x_1952_);
v___x_2006_ = lean_box(0);
v_isShared_2007_ = v_isSharedCheck_2011_;
goto v_resetjp_2005_;
}
v_resetjp_2005_:
{
lean_object* v___x_2009_; 
if (v_isShared_2007_ == 0)
{
v___x_2009_ = v___x_2006_;
goto v_reusejp_2008_;
}
else
{
lean_object* v_reuseFailAlloc_2010_; 
v_reuseFailAlloc_2010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2010_, 0, v_a_2004_);
v___x_2009_ = v_reuseFailAlloc_2010_;
goto v_reusejp_2008_;
}
v_reusejp_2008_:
{
return v___x_2009_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__0___boxed(lean_object* v_p_2014_, lean_object* v_term_2015_, lean_object* v___x_2016_, lean_object* v___x_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_){
_start:
{
uint8_t v___x_12649__boxed_2025_; lean_object* v_res_2026_; 
v___x_12649__boxed_2025_ = lean_unbox(v___x_2017_);
v_res_2026_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__0(v_p_2014_, v_term_2015_, v___x_2016_, v___x_12649__boxed_2025_, v___y_2018_, v___y_2019_, v___y_2020_, v___y_2021_, v___y_2022_, v___y_2023_);
lean_dec(v___y_2023_);
lean_dec(v___y_2021_);
lean_dec_ref(v___y_2020_);
lean_dec(v___y_2019_);
lean_dec_ref(v___y_2018_);
lean_dec(v_p_2014_);
return v_res_2026_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__3(void){
_start:
{
lean_object* v___x_2031_; lean_object* v___x_2032_; 
v___x_2031_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__2));
v___x_2032_ = l_Lean_stringToMessageData(v___x_2031_);
return v___x_2032_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1(lean_object* v_params_2033_, lean_object* v_p_2034_, lean_object* v_fst_2035_, lean_object* v_snd_2036_, uint8_t v___x_2037_, uint8_t v_minIndexable_2038_, lean_object* v_kind_2039_, lean_object* v_idx_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_){
_start:
{
lean_object* v_symPrios_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; uint8_t v___x_2050_; lean_object* v___x_2051_; 
v_symPrios_2046_ = lean_ctor_get(v_params_2033_, 5);
lean_inc_ref(v_symPrios_2046_);
lean_dec_ref(v_params_2033_);
v___x_2047_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__1));
v___x_2048_ = lean_name_append_index_after(v___x_2047_, v_idx_2040_);
v___x_2049_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2049_, 0, v___x_2048_);
lean_ctor_set(v___x_2049_, 1, v_p_2034_);
v___x_2050_ = 0;
v___x_2051_ = l_Lean_Meta_Grind_mkEMatchTheoremWithKind_x3f(v___x_2049_, v_fst_2035_, v_snd_2036_, v_kind_2039_, v_symPrios_2046_, v___x_2037_, v___x_2050_, v_minIndexable_2038_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_);
if (lean_obj_tag(v___x_2051_) == 0)
{
lean_object* v_a_2052_; lean_object* v___x_2054_; uint8_t v_isShared_2055_; uint8_t v_isSharedCheck_2062_; 
v_a_2052_ = lean_ctor_get(v___x_2051_, 0);
v_isSharedCheck_2062_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2062_ == 0)
{
v___x_2054_ = v___x_2051_;
v_isShared_2055_ = v_isSharedCheck_2062_;
goto v_resetjp_2053_;
}
else
{
lean_inc(v_a_2052_);
lean_dec(v___x_2051_);
v___x_2054_ = lean_box(0);
v_isShared_2055_ = v_isSharedCheck_2062_;
goto v_resetjp_2053_;
}
v_resetjp_2053_:
{
if (lean_obj_tag(v_a_2052_) == 1)
{
lean_object* v_val_2056_; lean_object* v___x_2058_; 
v_val_2056_ = lean_ctor_get(v_a_2052_, 0);
lean_inc(v_val_2056_);
lean_dec_ref_known(v_a_2052_, 1);
if (v_isShared_2055_ == 0)
{
lean_ctor_set(v___x_2054_, 0, v_val_2056_);
v___x_2058_ = v___x_2054_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v_val_2056_);
v___x_2058_ = v_reuseFailAlloc_2059_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
return v___x_2058_;
}
}
else
{
lean_object* v___x_2060_; lean_object* v___x_2061_; 
lean_del_object(v___x_2054_);
lean_dec(v_a_2052_);
v___x_2060_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__3, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__3);
v___x_2061_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(v___x_2060_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_);
return v___x_2061_;
}
}
}
else
{
lean_object* v_a_2063_; lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2070_; 
v_a_2063_ = lean_ctor_get(v___x_2051_, 0);
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2065_ = v___x_2051_;
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
else
{
lean_inc(v_a_2063_);
lean_dec(v___x_2051_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
lean_object* v___x_2068_; 
if (v_isShared_2066_ == 0)
{
v___x_2068_ = v___x_2065_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v_a_2063_);
v___x_2068_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
return v___x_2068_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___boxed(lean_object* v_params_2071_, lean_object* v_p_2072_, lean_object* v_fst_2073_, lean_object* v_snd_2074_, lean_object* v___x_2075_, lean_object* v_minIndexable_2076_, lean_object* v_kind_2077_, lean_object* v_idx_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_){
_start:
{
uint8_t v___x_12823__boxed_2084_; uint8_t v_minIndexable_boxed_2085_; lean_object* v_res_2086_; 
v___x_12823__boxed_2084_ = lean_unbox(v___x_2075_);
v_minIndexable_boxed_2085_ = lean_unbox(v_minIndexable_2076_);
v_res_2086_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1(v_params_2071_, v_p_2072_, v_fst_2073_, v_snd_2074_, v___x_12823__boxed_2084_, v_minIndexable_boxed_2085_, v_kind_2077_, v_idx_2078_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_);
lean_dec(v___y_2082_);
lean_dec_ref(v___y_2081_);
lean_dec(v___y_2080_);
lean_dec_ref(v___y_2079_);
return v_res_2086_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__0(void){
_start:
{
lean_object* v___x_2087_; lean_object* v___x_2088_; 
v___x_2087_ = lean_box(1);
v___x_2088_ = l_Lean_MessageData_ofFormat(v___x_2087_);
return v___x_2088_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__3(void){
_start:
{
lean_object* v___x_2092_; lean_object* v___x_2093_; 
v___x_2092_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__2));
v___x_2093_ = l_Lean_MessageData_ofFormat(v___x_2092_);
return v___x_2093_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2(lean_object* v_x_2094_, lean_object* v_x_2095_){
_start:
{
if (lean_obj_tag(v_x_2095_) == 0)
{
return v_x_2094_;
}
else
{
lean_object* v_head_2096_; lean_object* v_tail_2097_; lean_object* v___x_2099_; uint8_t v_isShared_2100_; uint8_t v_isSharedCheck_2119_; 
v_head_2096_ = lean_ctor_get(v_x_2095_, 0);
v_tail_2097_ = lean_ctor_get(v_x_2095_, 1);
v_isSharedCheck_2119_ = !lean_is_exclusive(v_x_2095_);
if (v_isSharedCheck_2119_ == 0)
{
v___x_2099_ = v_x_2095_;
v_isShared_2100_ = v_isSharedCheck_2119_;
goto v_resetjp_2098_;
}
else
{
lean_inc(v_tail_2097_);
lean_inc(v_head_2096_);
lean_dec(v_x_2095_);
v___x_2099_ = lean_box(0);
v_isShared_2100_ = v_isSharedCheck_2119_;
goto v_resetjp_2098_;
}
v_resetjp_2098_:
{
lean_object* v_before_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2117_; 
v_before_2101_ = lean_ctor_get(v_head_2096_, 0);
v_isSharedCheck_2117_ = !lean_is_exclusive(v_head_2096_);
if (v_isSharedCheck_2117_ == 0)
{
lean_object* v_unused_2118_; 
v_unused_2118_ = lean_ctor_get(v_head_2096_, 1);
lean_dec(v_unused_2118_);
v___x_2103_ = v_head_2096_;
v_isShared_2104_ = v_isSharedCheck_2117_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_before_2101_);
lean_dec(v_head_2096_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2117_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v___x_2105_; lean_object* v___x_2107_; 
v___x_2105_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__0);
if (v_isShared_2104_ == 0)
{
lean_ctor_set_tag(v___x_2103_, 7);
lean_ctor_set(v___x_2103_, 1, v___x_2105_);
lean_ctor_set(v___x_2103_, 0, v_x_2094_);
v___x_2107_ = v___x_2103_;
goto v_reusejp_2106_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v_x_2094_);
lean_ctor_set(v_reuseFailAlloc_2116_, 1, v___x_2105_);
v___x_2107_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2106_;
}
v_reusejp_2106_:
{
lean_object* v___x_2108_; lean_object* v___x_2110_; 
v___x_2108_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__3);
if (v_isShared_2100_ == 0)
{
lean_ctor_set_tag(v___x_2099_, 7);
lean_ctor_set(v___x_2099_, 1, v___x_2108_);
lean_ctor_set(v___x_2099_, 0, v___x_2107_);
v___x_2110_ = v___x_2099_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v___x_2107_);
lean_ctor_set(v_reuseFailAlloc_2115_, 1, v___x_2108_);
v___x_2110_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; 
v___x_2111_ = l_Lean_MessageData_ofSyntax(v_before_2101_);
v___x_2112_ = l_Lean_indentD(v___x_2111_);
v___x_2113_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2110_);
lean_ctor_set(v___x_2113_, 1, v___x_2112_);
v_x_2094_ = v___x_2113_;
v_x_2095_ = v_tail_2097_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_2123_; lean_object* v___x_2124_; 
v___x_2123_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__1));
v___x_2124_ = l_Lean_MessageData_ofFormat(v___x_2123_);
return v___x_2124_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg(lean_object* v_msgData_2125_, lean_object* v_macroStack_2126_, lean_object* v___y_2127_){
_start:
{
lean_object* v_toCold_2129_; lean_object* v_options_2130_; lean_object* v___x_2131_; uint8_t v___x_2132_; 
v_toCold_2129_ = lean_ctor_get(v___y_2127_, 0);
v_options_2130_ = lean_ctor_get(v_toCold_2129_, 2);
v___x_2131_ = l_Lean_Elab_pp_macroStack;
v___x_2132_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5(v_options_2130_, v___x_2131_);
if (v___x_2132_ == 0)
{
lean_object* v___x_2133_; 
lean_dec(v_macroStack_2126_);
v___x_2133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2133_, 0, v_msgData_2125_);
return v___x_2133_;
}
else
{
if (lean_obj_tag(v_macroStack_2126_) == 0)
{
lean_object* v___x_2134_; 
v___x_2134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2134_, 0, v_msgData_2125_);
return v___x_2134_;
}
else
{
lean_object* v_head_2135_; lean_object* v_after_2136_; lean_object* v___x_2138_; uint8_t v_isShared_2139_; uint8_t v_isSharedCheck_2151_; 
v_head_2135_ = lean_ctor_get(v_macroStack_2126_, 0);
lean_inc(v_head_2135_);
v_after_2136_ = lean_ctor_get(v_head_2135_, 1);
v_isSharedCheck_2151_ = !lean_is_exclusive(v_head_2135_);
if (v_isSharedCheck_2151_ == 0)
{
lean_object* v_unused_2152_; 
v_unused_2152_ = lean_ctor_get(v_head_2135_, 0);
lean_dec(v_unused_2152_);
v___x_2138_ = v_head_2135_;
v_isShared_2139_ = v_isSharedCheck_2151_;
goto v_resetjp_2137_;
}
else
{
lean_inc(v_after_2136_);
lean_dec(v_head_2135_);
v___x_2138_ = lean_box(0);
v_isShared_2139_ = v_isSharedCheck_2151_;
goto v_resetjp_2137_;
}
v_resetjp_2137_:
{
lean_object* v___x_2140_; lean_object* v___x_2142_; 
v___x_2140_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__0);
if (v_isShared_2139_ == 0)
{
lean_ctor_set_tag(v___x_2138_, 7);
lean_ctor_set(v___x_2138_, 1, v___x_2140_);
lean_ctor_set(v___x_2138_, 0, v_msgData_2125_);
v___x_2142_ = v___x_2138_;
goto v_reusejp_2141_;
}
else
{
lean_object* v_reuseFailAlloc_2150_; 
v_reuseFailAlloc_2150_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2150_, 0, v_msgData_2125_);
lean_ctor_set(v_reuseFailAlloc_2150_, 1, v___x_2140_);
v___x_2142_ = v_reuseFailAlloc_2150_;
goto v_reusejp_2141_;
}
v_reusejp_2141_:
{
lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v_msgData_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; 
v___x_2143_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__2);
v___x_2144_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2144_, 0, v___x_2142_);
lean_ctor_set(v___x_2144_, 1, v___x_2143_);
v___x_2145_ = l_Lean_MessageData_ofSyntax(v_after_2136_);
v___x_2146_ = l_Lean_indentD(v___x_2145_);
v_msgData_2147_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_2147_, 0, v___x_2144_);
lean_ctor_set(v_msgData_2147_, 1, v___x_2146_);
v___x_2148_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2(v_msgData_2147_, v_macroStack_2126_);
v___x_2149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2149_, 0, v___x_2148_);
return v___x_2149_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___boxed(lean_object* v_msgData_2153_, lean_object* v_macroStack_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_){
_start:
{
lean_object* v_res_2157_; 
v_res_2157_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg(v_msgData_2153_, v_macroStack_2154_, v___y_2155_);
lean_dec_ref(v___y_2155_);
return v_res_2157_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(lean_object* v_msg_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_){
_start:
{
lean_object* v_ref_2166_; lean_object* v_macroStack_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v_a_2170_; lean_object* v___x_2171_; lean_object* v_a_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2180_; 
v_ref_2166_ = lean_ctor_get(v___y_2163_, 2);
v_macroStack_2167_ = lean_ctor_get(v___y_2159_, 1);
v___x_2168_ = l_Lean_Elab_getBetterRef(v_ref_2166_, v_macroStack_2167_);
v___x_2169_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__4(v_msg_2158_, v___y_2161_, v___y_2162_, v___y_2163_, v___y_2164_);
v_a_2170_ = lean_ctor_get(v___x_2169_, 0);
lean_inc(v_a_2170_);
lean_dec_ref(v___x_2169_);
lean_inc(v_macroStack_2167_);
v___x_2171_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg(v_a_2170_, v_macroStack_2167_, v___y_2163_);
v_a_2172_ = lean_ctor_get(v___x_2171_, 0);
v_isSharedCheck_2180_ = !lean_is_exclusive(v___x_2171_);
if (v_isSharedCheck_2180_ == 0)
{
v___x_2174_ = v___x_2171_;
v_isShared_2175_ = v_isSharedCheck_2180_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_a_2172_);
lean_dec(v___x_2171_);
v___x_2174_ = lean_box(0);
v_isShared_2175_ = v_isSharedCheck_2180_;
goto v_resetjp_2173_;
}
v_resetjp_2173_:
{
lean_object* v___x_2176_; lean_object* v___x_2178_; 
v___x_2176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2176_, 0, v___x_2168_);
lean_ctor_set(v___x_2176_, 1, v_a_2172_);
if (v_isShared_2175_ == 0)
{
lean_ctor_set_tag(v___x_2174_, 1);
lean_ctor_set(v___x_2174_, 0, v___x_2176_);
v___x_2178_ = v___x_2174_;
goto v_reusejp_2177_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v___x_2176_);
v___x_2178_ = v_reuseFailAlloc_2179_;
goto v_reusejp_2177_;
}
v_reusejp_2177_:
{
return v___x_2178_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg___boxed(lean_object* v_msg_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_){
_start:
{
lean_object* v_res_2189_; 
v_res_2189_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v_msg_2181_, v___y_2182_, v___y_2183_, v___y_2184_, v___y_2185_, v___y_2186_, v___y_2187_);
lean_dec(v___y_2187_);
lean_dec_ref(v___y_2186_);
lean_dec(v___y_2185_);
lean_dec_ref(v___y_2184_);
lean_dec(v___y_2183_);
lean_dec_ref(v___y_2182_);
return v_res_2189_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__1(void){
_start:
{
lean_object* v___x_2191_; lean_object* v___x_2192_; 
v___x_2191_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__0));
v___x_2192_ = l_Lean_stringToMessageData(v___x_2191_);
return v___x_2192_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__3(void){
_start:
{
lean_object* v___x_2194_; lean_object* v___x_2195_; 
v___x_2194_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__2));
v___x_2195_ = l_Lean_stringToMessageData(v___x_2194_);
return v___x_2195_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__5(void){
_start:
{
lean_object* v___x_2197_; lean_object* v___x_2198_; 
v___x_2197_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__4));
v___x_2198_ = l_Lean_stringToMessageData(v___x_2197_);
return v___x_2198_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7(void){
_start:
{
lean_object* v___x_2200_; lean_object* v___x_2201_; 
v___x_2200_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__6));
v___x_2201_ = l_Lean_stringToMessageData(v___x_2200_);
return v___x_2201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam(lean_object* v_params_2204_, lean_object* v_p_2205_, lean_object* v_mod_x3f_2206_, lean_object* v_term_2207_, uint8_t v_minIndexable_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_){
_start:
{
lean_object* v___y_2217_; lean_object* v___y_2237_; lean_object* v___y_2238_; lean_object* v___y_2239_; lean_object* v___y_2240_; lean_object* v___y_2241_; lean_object* v___y_2242_; lean_object* v___y_2243_; lean_object* v___y_2244_; lean_object* v___y_2245_; lean_object* v___y_2262_; lean_object* v___y_2263_; lean_object* v___y_2264_; lean_object* v___y_2265_; lean_object* v___y_2266_; lean_object* v___y_2267_; lean_object* v___y_2268_; lean_object* v___y_2269_; lean_object* v___y_2270_; lean_object* v___y_2271_; lean_object* v___y_2272_; lean_object* v___y_2273_; lean_object* v___y_2274_; lean_object* v___y_2275_; lean_object* v___y_2276_; lean_object* v___y_2277_; lean_object* v___y_2298_; lean_object* v___y_2299_; lean_object* v___y_2300_; lean_object* v___y_2301_; lean_object* v___y_2302_; lean_object* v___y_2303_; lean_object* v___y_2304_; lean_object* v___y_2305_; lean_object* v___y_2306_; lean_object* v___y_2307_; lean_object* v___y_2308_; lean_object* v___y_2309_; lean_object* v___y_2310_; lean_object* v___y_2311_; lean_object* v___y_2312_; lean_object* v___y_2313_; lean_object* v___y_2324_; lean_object* v___y_2325_; lean_object* v___y_2326_; lean_object* v___y_2327_; lean_object* v___y_2328_; lean_object* v___y_2329_; lean_object* v___y_2330_; lean_object* v___y_2331_; lean_object* v___y_2332_; lean_object* v___y_2333_; lean_object* v___y_2334_; lean_object* v_kind_2441_; lean_object* v___y_2442_; lean_object* v___y_2443_; lean_object* v___y_2444_; lean_object* v___y_2445_; lean_object* v___y_2446_; lean_object* v___y_2447_; lean_object* v___y_2507_; lean_object* v___y_2508_; lean_object* v___y_2509_; lean_object* v___y_2510_; lean_object* v___y_2511_; lean_object* v___y_2512_; lean_object* v___y_2524_; lean_object* v___y_2525_; lean_object* v___y_2526_; lean_object* v___y_2527_; lean_object* v___y_2528_; lean_object* v___y_2529_; lean_object* v_toCold_2531_; lean_object* v_currRecDepth_2532_; lean_object* v_ref_2533_; uint8_t v_diag_2534_; uint8_t v_suppressElabErrors_2535_; lean_object* v_ref_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; 
v_toCold_2531_ = lean_ctor_get(v___y_2213_, 0);
v_currRecDepth_2532_ = lean_ctor_get(v___y_2213_, 1);
v_ref_2533_ = lean_ctor_get(v___y_2213_, 2);
v_diag_2534_ = lean_ctor_get_uint8(v___y_2213_, sizeof(void*)*3);
v_suppressElabErrors_2535_ = lean_ctor_get_uint8(v___y_2213_, sizeof(void*)*3 + 1);
v_ref_2536_ = l_Lean_replaceRef(v_p_2205_, v_ref_2533_);
lean_inc(v_currRecDepth_2532_);
lean_inc_ref(v_toCold_2531_);
v___x_2537_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2537_, 0, v_toCold_2531_);
lean_ctor_set(v___x_2537_, 1, v_currRecDepth_2532_);
lean_ctor_set(v___x_2537_, 2, v_ref_2536_);
lean_ctor_set_uint8(v___x_2537_, sizeof(void*)*3, v_diag_2534_);
lean_ctor_set_uint8(v___x_2537_, sizeof(void*)*3 + 1, v_suppressElabErrors_2535_);
v___x_2538_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert(v_params_2204_, v___x_2537_, v___y_2214_);
if (lean_obj_tag(v___x_2538_) == 0)
{
lean_dec_ref_known(v___x_2538_, 1);
if (lean_obj_tag(v_mod_x3f_2206_) == 1)
{
lean_object* v_val_2539_; lean_object* v___x_2540_; 
v_val_2539_ = lean_ctor_get(v_mod_x3f_2206_, 0);
lean_inc(v_val_2539_);
v___x_2540_ = l_Lean_Meta_Grind_getAttrKindCore(v_val_2539_, v___x_2537_, v___y_2214_);
if (lean_obj_tag(v___x_2540_) == 0)
{
lean_object* v_a_2541_; 
v_a_2541_ = lean_ctor_get(v___x_2540_, 0);
lean_inc(v_a_2541_);
lean_dec_ref_known(v___x_2540_, 1);
switch(lean_obj_tag(v_a_2541_))
{
case 0:
{
lean_object* v_k_2542_; 
v_k_2542_ = lean_ctor_get(v_a_2541_, 0);
lean_inc(v_k_2542_);
lean_dec_ref_known(v_a_2541_, 1);
if (lean_obj_tag(v_k_2542_) == 9)
{
lean_dec_ref_known(v_mod_x3f_2206_, 1);
lean_dec(v_term_2207_);
lean_dec(v_p_2205_);
lean_dec_ref(v_params_2204_);
v___y_2507_ = v___y_2209_;
v___y_2508_ = v___y_2210_;
v___y_2509_ = v___y_2211_;
v___y_2510_ = v___y_2212_;
v___y_2511_ = v___x_2537_;
v___y_2512_ = v___y_2214_;
goto v___jp_2506_;
}
else
{
v_kind_2441_ = v_k_2542_;
v___y_2442_ = v___y_2209_;
v___y_2443_ = v___y_2210_;
v___y_2444_ = v___y_2211_;
v___y_2445_ = v___y_2212_;
v___y_2446_ = v___x_2537_;
v___y_2447_ = v___y_2214_;
goto v___jp_2440_;
}
}
case 1:
{
lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v_a_2545_; lean_object* v___x_2547_; uint8_t v_isShared_2548_; uint8_t v_isSharedCheck_2552_; 
lean_dec_ref_known(v_a_2541_, 0);
lean_dec_ref_known(v_mod_x3f_2206_, 1);
lean_dec(v_term_2207_);
lean_dec(v_p_2205_);
lean_dec_ref(v_params_2204_);
v___x_2543_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7);
v___x_2544_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_2543_, v___y_2209_, v___y_2210_, v___y_2211_, v___y_2212_, v___x_2537_, v___y_2214_);
lean_dec_ref_known(v___x_2537_, 3);
v_a_2545_ = lean_ctor_get(v___x_2544_, 0);
v_isSharedCheck_2552_ = !lean_is_exclusive(v___x_2544_);
if (v_isSharedCheck_2552_ == 0)
{
v___x_2547_ = v___x_2544_;
v_isShared_2548_ = v_isSharedCheck_2552_;
goto v_resetjp_2546_;
}
else
{
lean_inc(v_a_2545_);
lean_dec(v___x_2544_);
v___x_2547_ = lean_box(0);
v_isShared_2548_ = v_isSharedCheck_2552_;
goto v_resetjp_2546_;
}
v_resetjp_2546_:
{
lean_object* v___x_2550_; 
if (v_isShared_2548_ == 0)
{
v___x_2550_ = v___x_2547_;
goto v_reusejp_2549_;
}
else
{
lean_object* v_reuseFailAlloc_2551_; 
v_reuseFailAlloc_2551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2551_, 0, v_a_2545_);
v___x_2550_ = v_reuseFailAlloc_2551_;
goto v_reusejp_2549_;
}
v_reusejp_2549_:
{
return v___x_2550_;
}
}
}
case 3:
{
v___y_2524_ = v___y_2209_;
v___y_2525_ = v___y_2210_;
v___y_2526_ = v___y_2211_;
v___y_2527_ = v___y_2212_;
v___y_2528_ = v___x_2537_;
v___y_2529_ = v___y_2214_;
goto v___jp_2523_;
}
case 5:
{
lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v_a_2555_; lean_object* v___x_2557_; uint8_t v_isShared_2558_; uint8_t v_isSharedCheck_2562_; 
lean_dec_ref_known(v_a_2541_, 1);
lean_dec_ref_known(v_mod_x3f_2206_, 1);
lean_dec(v_term_2207_);
lean_dec(v_p_2205_);
lean_dec_ref(v_params_2204_);
v___x_2553_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7);
v___x_2554_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_2553_, v___y_2209_, v___y_2210_, v___y_2211_, v___y_2212_, v___x_2537_, v___y_2214_);
lean_dec_ref_known(v___x_2537_, 3);
v_a_2555_ = lean_ctor_get(v___x_2554_, 0);
v_isSharedCheck_2562_ = !lean_is_exclusive(v___x_2554_);
if (v_isSharedCheck_2562_ == 0)
{
v___x_2557_ = v___x_2554_;
v_isShared_2558_ = v_isSharedCheck_2562_;
goto v_resetjp_2556_;
}
else
{
lean_inc(v_a_2555_);
lean_dec(v___x_2554_);
v___x_2557_ = lean_box(0);
v_isShared_2558_ = v_isSharedCheck_2562_;
goto v_resetjp_2556_;
}
v_resetjp_2556_:
{
lean_object* v___x_2560_; 
if (v_isShared_2558_ == 0)
{
v___x_2560_ = v___x_2557_;
goto v_reusejp_2559_;
}
else
{
lean_object* v_reuseFailAlloc_2561_; 
v_reuseFailAlloc_2561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2561_, 0, v_a_2555_);
v___x_2560_ = v_reuseFailAlloc_2561_;
goto v_reusejp_2559_;
}
v_reusejp_2559_:
{
return v___x_2560_;
}
}
}
case 8:
{
lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v_a_2565_; lean_object* v___x_2567_; uint8_t v_isShared_2568_; uint8_t v_isSharedCheck_2572_; 
lean_dec_ref_known(v_a_2541_, 0);
lean_dec_ref_known(v_mod_x3f_2206_, 1);
lean_dec(v_term_2207_);
lean_dec(v_p_2205_);
lean_dec_ref(v_params_2204_);
v___x_2563_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7);
v___x_2564_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_2563_, v___y_2209_, v___y_2210_, v___y_2211_, v___y_2212_, v___x_2537_, v___y_2214_);
lean_dec_ref_known(v___x_2537_, 3);
v_a_2565_ = lean_ctor_get(v___x_2564_, 0);
v_isSharedCheck_2572_ = !lean_is_exclusive(v___x_2564_);
if (v_isSharedCheck_2572_ == 0)
{
v___x_2567_ = v___x_2564_;
v_isShared_2568_ = v_isSharedCheck_2572_;
goto v_resetjp_2566_;
}
else
{
lean_inc(v_a_2565_);
lean_dec(v___x_2564_);
v___x_2567_ = lean_box(0);
v_isShared_2568_ = v_isSharedCheck_2572_;
goto v_resetjp_2566_;
}
v_resetjp_2566_:
{
lean_object* v___x_2570_; 
if (v_isShared_2568_ == 0)
{
v___x_2570_ = v___x_2567_;
goto v_reusejp_2569_;
}
else
{
lean_object* v_reuseFailAlloc_2571_; 
v_reuseFailAlloc_2571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2571_, 0, v_a_2565_);
v___x_2570_ = v_reuseFailAlloc_2571_;
goto v_reusejp_2569_;
}
v_reusejp_2569_:
{
return v___x_2570_;
}
}
}
default: 
{
lean_dec(v_a_2541_);
lean_dec_ref_known(v_mod_x3f_2206_, 1);
lean_dec(v_term_2207_);
lean_dec(v_p_2205_);
lean_dec_ref(v_params_2204_);
v___y_2507_ = v___y_2209_;
v___y_2508_ = v___y_2210_;
v___y_2509_ = v___y_2211_;
v___y_2510_ = v___y_2212_;
v___y_2511_ = v___x_2537_;
v___y_2512_ = v___y_2214_;
goto v___jp_2506_;
}
}
}
else
{
lean_object* v_a_2573_; lean_object* v___x_2575_; uint8_t v_isShared_2576_; uint8_t v_isSharedCheck_2580_; 
lean_dec_ref_known(v_mod_x3f_2206_, 1);
lean_dec_ref_known(v___x_2537_, 3);
lean_dec(v_term_2207_);
lean_dec(v_p_2205_);
lean_dec_ref(v_params_2204_);
v_a_2573_ = lean_ctor_get(v___x_2540_, 0);
v_isSharedCheck_2580_ = !lean_is_exclusive(v___x_2540_);
if (v_isSharedCheck_2580_ == 0)
{
v___x_2575_ = v___x_2540_;
v_isShared_2576_ = v_isSharedCheck_2580_;
goto v_resetjp_2574_;
}
else
{
lean_inc(v_a_2573_);
lean_dec(v___x_2540_);
v___x_2575_ = lean_box(0);
v_isShared_2576_ = v_isSharedCheck_2580_;
goto v_resetjp_2574_;
}
v_resetjp_2574_:
{
lean_object* v___x_2578_; 
if (v_isShared_2576_ == 0)
{
v___x_2578_ = v___x_2575_;
goto v_reusejp_2577_;
}
else
{
lean_object* v_reuseFailAlloc_2579_; 
v_reuseFailAlloc_2579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2579_, 0, v_a_2573_);
v___x_2578_ = v_reuseFailAlloc_2579_;
goto v_reusejp_2577_;
}
v_reusejp_2577_:
{
return v___x_2578_;
}
}
}
}
else
{
v___y_2524_ = v___y_2209_;
v___y_2525_ = v___y_2210_;
v___y_2526_ = v___y_2211_;
v___y_2527_ = v___y_2212_;
v___y_2528_ = v___x_2537_;
v___y_2529_ = v___y_2214_;
goto v___jp_2523_;
}
}
else
{
lean_object* v_a_2581_; lean_object* v___x_2583_; uint8_t v_isShared_2584_; uint8_t v_isSharedCheck_2588_; 
lean_dec_ref_known(v___x_2537_, 3);
lean_dec(v_term_2207_);
lean_dec(v_mod_x3f_2206_);
lean_dec(v_p_2205_);
lean_dec_ref(v_params_2204_);
v_a_2581_ = lean_ctor_get(v___x_2538_, 0);
v_isSharedCheck_2588_ = !lean_is_exclusive(v___x_2538_);
if (v_isSharedCheck_2588_ == 0)
{
v___x_2583_ = v___x_2538_;
v_isShared_2584_ = v_isSharedCheck_2588_;
goto v_resetjp_2582_;
}
else
{
lean_inc(v_a_2581_);
lean_dec(v___x_2538_);
v___x_2583_ = lean_box(0);
v_isShared_2584_ = v_isSharedCheck_2588_;
goto v_resetjp_2582_;
}
v_resetjp_2582_:
{
lean_object* v___x_2586_; 
if (v_isShared_2584_ == 0)
{
v___x_2586_ = v___x_2583_;
goto v_reusejp_2585_;
}
else
{
lean_object* v_reuseFailAlloc_2587_; 
v_reuseFailAlloc_2587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2587_, 0, v_a_2581_);
v___x_2586_ = v_reuseFailAlloc_2587_;
goto v_reusejp_2585_;
}
v_reusejp_2585_:
{
return v___x_2586_;
}
}
}
v___jp_2216_:
{
lean_object* v_config_2218_; lean_object* v_extensions_2219_; lean_object* v_extra_2220_; lean_object* v_extraInj_2221_; lean_object* v_extraFacts_2222_; lean_object* v_symPrios_2223_; lean_object* v_norm_2224_; lean_object* v_normProcs_2225_; lean_object* v_anchorRefs_x3f_2226_; lean_object* v___x_2228_; uint8_t v_isShared_2229_; uint8_t v_isSharedCheck_2235_; 
v_config_2218_ = lean_ctor_get(v_params_2204_, 0);
v_extensions_2219_ = lean_ctor_get(v_params_2204_, 1);
v_extra_2220_ = lean_ctor_get(v_params_2204_, 2);
v_extraInj_2221_ = lean_ctor_get(v_params_2204_, 3);
v_extraFacts_2222_ = lean_ctor_get(v_params_2204_, 4);
v_symPrios_2223_ = lean_ctor_get(v_params_2204_, 5);
v_norm_2224_ = lean_ctor_get(v_params_2204_, 6);
v_normProcs_2225_ = lean_ctor_get(v_params_2204_, 7);
v_anchorRefs_x3f_2226_ = lean_ctor_get(v_params_2204_, 8);
v_isSharedCheck_2235_ = !lean_is_exclusive(v_params_2204_);
if (v_isSharedCheck_2235_ == 0)
{
v___x_2228_ = v_params_2204_;
v_isShared_2229_ = v_isSharedCheck_2235_;
goto v_resetjp_2227_;
}
else
{
lean_inc(v_anchorRefs_x3f_2226_);
lean_inc(v_normProcs_2225_);
lean_inc(v_norm_2224_);
lean_inc(v_symPrios_2223_);
lean_inc(v_extraFacts_2222_);
lean_inc(v_extraInj_2221_);
lean_inc(v_extra_2220_);
lean_inc(v_extensions_2219_);
lean_inc(v_config_2218_);
lean_dec(v_params_2204_);
v___x_2228_ = lean_box(0);
v_isShared_2229_ = v_isSharedCheck_2235_;
goto v_resetjp_2227_;
}
v_resetjp_2227_:
{
lean_object* v___x_2230_; lean_object* v___x_2232_; 
v___x_2230_ = l_Lean_PersistentArray_push___redArg(v_extraFacts_2222_, v___y_2217_);
if (v_isShared_2229_ == 0)
{
lean_ctor_set(v___x_2228_, 4, v___x_2230_);
v___x_2232_ = v___x_2228_;
goto v_reusejp_2231_;
}
else
{
lean_object* v_reuseFailAlloc_2234_; 
v_reuseFailAlloc_2234_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2234_, 0, v_config_2218_);
lean_ctor_set(v_reuseFailAlloc_2234_, 1, v_extensions_2219_);
lean_ctor_set(v_reuseFailAlloc_2234_, 2, v_extra_2220_);
lean_ctor_set(v_reuseFailAlloc_2234_, 3, v_extraInj_2221_);
lean_ctor_set(v_reuseFailAlloc_2234_, 4, v___x_2230_);
lean_ctor_set(v_reuseFailAlloc_2234_, 5, v_symPrios_2223_);
lean_ctor_set(v_reuseFailAlloc_2234_, 6, v_norm_2224_);
lean_ctor_set(v_reuseFailAlloc_2234_, 7, v_normProcs_2225_);
lean_ctor_set(v_reuseFailAlloc_2234_, 8, v_anchorRefs_x3f_2226_);
v___x_2232_ = v_reuseFailAlloc_2234_;
goto v_reusejp_2231_;
}
v_reusejp_2231_:
{
lean_object* v___x_2233_; 
v___x_2233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2233_, 0, v___x_2232_);
return v___x_2233_;
}
}
}
v___jp_2236_:
{
lean_object* v___x_2246_; lean_object* v___x_2247_; uint8_t v___x_2248_; 
v___x_2246_ = lean_array_get_size(v___y_2238_);
lean_dec_ref(v___y_2238_);
v___x_2247_ = lean_unsigned_to_nat(0u);
v___x_2248_ = lean_nat_dec_eq(v___x_2246_, v___x_2247_);
if (v___x_2248_ == 0)
{
lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v_a_2253_; lean_object* v___x_2255_; uint8_t v_isShared_2256_; uint8_t v_isSharedCheck_2260_; 
lean_dec_ref(v___y_2237_);
lean_dec_ref(v_params_2204_);
v___x_2249_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__1, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__1);
v___x_2250_ = l_Lean_indentExpr(v___y_2239_);
v___x_2251_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2251_, 0, v___x_2249_);
lean_ctor_set(v___x_2251_, 1, v___x_2250_);
v___x_2252_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_2251_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_, v___y_2245_);
lean_dec_ref(v___y_2244_);
v_a_2253_ = lean_ctor_get(v___x_2252_, 0);
v_isSharedCheck_2260_ = !lean_is_exclusive(v___x_2252_);
if (v_isSharedCheck_2260_ == 0)
{
v___x_2255_ = v___x_2252_;
v_isShared_2256_ = v_isSharedCheck_2260_;
goto v_resetjp_2254_;
}
else
{
lean_inc(v_a_2253_);
lean_dec(v___x_2252_);
v___x_2255_ = lean_box(0);
v_isShared_2256_ = v_isSharedCheck_2260_;
goto v_resetjp_2254_;
}
v_resetjp_2254_:
{
lean_object* v___x_2258_; 
if (v_isShared_2256_ == 0)
{
v___x_2258_ = v___x_2255_;
goto v_reusejp_2257_;
}
else
{
lean_object* v_reuseFailAlloc_2259_; 
v_reuseFailAlloc_2259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2259_, 0, v_a_2253_);
v___x_2258_ = v_reuseFailAlloc_2259_;
goto v_reusejp_2257_;
}
v_reusejp_2257_:
{
return v___x_2258_;
}
}
}
else
{
lean_dec_ref(v___y_2244_);
lean_dec_ref(v___y_2239_);
v___y_2217_ = v___y_2237_;
goto v___jp_2216_;
}
}
v___jp_2261_:
{
lean_object* v___x_2278_; 
lean_inc(v___y_2277_);
lean_inc(v___y_2275_);
lean_inc_ref(v___y_2274_);
v___x_2278_ = lean_apply_7(v___y_2266_, v___y_2270_, v___y_2265_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_, lean_box(0));
if (lean_obj_tag(v___x_2278_) == 0)
{
lean_object* v_a_2279_; lean_object* v___x_2281_; uint8_t v_isShared_2282_; uint8_t v_isSharedCheck_2288_; 
v_a_2279_ = lean_ctor_get(v___x_2278_, 0);
v_isSharedCheck_2288_ = !lean_is_exclusive(v___x_2278_);
if (v_isSharedCheck_2288_ == 0)
{
v___x_2281_ = v___x_2278_;
v_isShared_2282_ = v_isSharedCheck_2288_;
goto v_resetjp_2280_;
}
else
{
lean_inc(v_a_2279_);
lean_dec(v___x_2278_);
v___x_2281_ = lean_box(0);
v_isShared_2282_ = v_isSharedCheck_2288_;
goto v_resetjp_2280_;
}
v_resetjp_2280_:
{
lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2286_; 
v___x_2283_ = l_Lean_PersistentArray_push___redArg(v___y_2271_, v_a_2279_);
v___x_2284_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_2284_, 0, v___y_2267_);
lean_ctor_set(v___x_2284_, 1, v___y_2268_);
lean_ctor_set(v___x_2284_, 2, v___x_2283_);
lean_ctor_set(v___x_2284_, 3, v___y_2273_);
lean_ctor_set(v___x_2284_, 4, v___y_2263_);
lean_ctor_set(v___x_2284_, 5, v___y_2262_);
lean_ctor_set(v___x_2284_, 6, v___y_2272_);
lean_ctor_set(v___x_2284_, 7, v___y_2269_);
lean_ctor_set(v___x_2284_, 8, v___y_2264_);
if (v_isShared_2282_ == 0)
{
lean_ctor_set(v___x_2281_, 0, v___x_2284_);
v___x_2286_ = v___x_2281_;
goto v_reusejp_2285_;
}
else
{
lean_object* v_reuseFailAlloc_2287_; 
v_reuseFailAlloc_2287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2287_, 0, v___x_2284_);
v___x_2286_ = v_reuseFailAlloc_2287_;
goto v_reusejp_2285_;
}
v_reusejp_2285_:
{
return v___x_2286_;
}
}
}
else
{
lean_object* v_a_2289_; lean_object* v___x_2291_; uint8_t v_isShared_2292_; uint8_t v_isSharedCheck_2296_; 
lean_dec_ref(v___y_2273_);
lean_dec_ref(v___y_2272_);
lean_dec_ref(v___y_2271_);
lean_dec_ref(v___y_2269_);
lean_dec_ref(v___y_2268_);
lean_dec_ref(v___y_2267_);
lean_dec(v___y_2264_);
lean_dec_ref(v___y_2263_);
lean_dec_ref(v___y_2262_);
v_a_2289_ = lean_ctor_get(v___x_2278_, 0);
v_isSharedCheck_2296_ = !lean_is_exclusive(v___x_2278_);
if (v_isSharedCheck_2296_ == 0)
{
v___x_2291_ = v___x_2278_;
v_isShared_2292_ = v_isSharedCheck_2296_;
goto v_resetjp_2290_;
}
else
{
lean_inc(v_a_2289_);
lean_dec(v___x_2278_);
v___x_2291_ = lean_box(0);
v_isShared_2292_ = v_isSharedCheck_2296_;
goto v_resetjp_2290_;
}
v_resetjp_2290_:
{
lean_object* v___x_2294_; 
if (v_isShared_2292_ == 0)
{
v___x_2294_ = v___x_2291_;
goto v_reusejp_2293_;
}
else
{
lean_object* v_reuseFailAlloc_2295_; 
v_reuseFailAlloc_2295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2295_, 0, v_a_2289_);
v___x_2294_ = v_reuseFailAlloc_2295_;
goto v_reusejp_2293_;
}
v_reusejp_2293_:
{
return v___x_2294_;
}
}
}
}
v___jp_2297_:
{
lean_object* v___x_2314_; 
v___x_2314_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_2208_, v___y_2306_, v___y_2308_, v___y_2303_, v___y_2313_);
if (lean_obj_tag(v___x_2314_) == 0)
{
lean_dec_ref_known(v___x_2314_, 1);
v___y_2262_ = v___y_2307_;
v___y_2263_ = v___y_2298_;
v___y_2264_ = v___y_2299_;
v___y_2265_ = v___y_2309_;
v___y_2266_ = v___y_2310_;
v___y_2267_ = v___y_2311_;
v___y_2268_ = v___y_2300_;
v___y_2269_ = v___y_2312_;
v___y_2270_ = v___y_2301_;
v___y_2271_ = v___y_2302_;
v___y_2272_ = v___y_2305_;
v___y_2273_ = v___y_2304_;
v___y_2274_ = v___y_2306_;
v___y_2275_ = v___y_2308_;
v___y_2276_ = v___y_2303_;
v___y_2277_ = v___y_2313_;
goto v___jp_2261_;
}
else
{
lean_object* v_a_2315_; lean_object* v___x_2317_; uint8_t v_isShared_2318_; uint8_t v_isSharedCheck_2322_; 
lean_dec_ref(v___y_2312_);
lean_dec_ref(v___y_2311_);
lean_dec_ref(v___y_2310_);
lean_dec(v___y_2309_);
lean_dec_ref(v___y_2307_);
lean_dec_ref(v___y_2305_);
lean_dec_ref(v___y_2304_);
lean_dec_ref(v___y_2303_);
lean_dec_ref(v___y_2302_);
lean_dec(v___y_2301_);
lean_dec_ref(v___y_2300_);
lean_dec(v___y_2299_);
lean_dec_ref(v___y_2298_);
v_a_2315_ = lean_ctor_get(v___x_2314_, 0);
v_isSharedCheck_2322_ = !lean_is_exclusive(v___x_2314_);
if (v_isSharedCheck_2322_ == 0)
{
v___x_2317_ = v___x_2314_;
v_isShared_2318_ = v_isSharedCheck_2322_;
goto v_resetjp_2316_;
}
else
{
lean_inc(v_a_2315_);
lean_dec(v___x_2314_);
v___x_2317_ = lean_box(0);
v_isShared_2318_ = v_isSharedCheck_2322_;
goto v_resetjp_2316_;
}
v_resetjp_2316_:
{
lean_object* v___x_2320_; 
if (v_isShared_2318_ == 0)
{
v___x_2320_ = v___x_2317_;
goto v_reusejp_2319_;
}
else
{
lean_object* v_reuseFailAlloc_2321_; 
v_reuseFailAlloc_2321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2321_, 0, v_a_2315_);
v___x_2320_ = v_reuseFailAlloc_2321_;
goto v_reusejp_2319_;
}
v_reusejp_2319_:
{
return v___x_2320_;
}
}
}
}
v___jp_2323_:
{
uint8_t v___x_2335_; 
v___x_2335_ = l_Lean_Expr_isForall(v___y_2328_);
if (v___x_2335_ == 0)
{
lean_dec(v___y_2327_);
lean_dec_ref(v___y_2326_);
if (lean_obj_tag(v_mod_x3f_2206_) == 0)
{
v___y_2237_ = v___y_2324_;
v___y_2238_ = v___y_2325_;
v___y_2239_ = v___y_2328_;
v___y_2240_ = v___y_2329_;
v___y_2241_ = v___y_2330_;
v___y_2242_ = v___y_2331_;
v___y_2243_ = v___y_2332_;
v___y_2244_ = v___y_2333_;
v___y_2245_ = v___y_2334_;
goto v___jp_2236_;
}
else
{
lean_dec_ref_known(v_mod_x3f_2206_, 1);
if (v___x_2335_ == 0)
{
lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v_a_2340_; lean_object* v___x_2342_; uint8_t v_isShared_2343_; uint8_t v_isSharedCheck_2347_; 
lean_dec_ref(v___y_2325_);
lean_dec_ref(v___y_2324_);
lean_dec_ref(v_params_2204_);
v___x_2336_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__3, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__3);
v___x_2337_ = l_Lean_indentExpr(v___y_2328_);
v___x_2338_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2338_, 0, v___x_2336_);
lean_ctor_set(v___x_2338_, 1, v___x_2337_);
v___x_2339_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_2338_, v___y_2329_, v___y_2330_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_);
lean_dec_ref(v___y_2333_);
v_a_2340_ = lean_ctor_get(v___x_2339_, 0);
v_isSharedCheck_2347_ = !lean_is_exclusive(v___x_2339_);
if (v_isSharedCheck_2347_ == 0)
{
v___x_2342_ = v___x_2339_;
v_isShared_2343_ = v_isSharedCheck_2347_;
goto v_resetjp_2341_;
}
else
{
lean_inc(v_a_2340_);
lean_dec(v___x_2339_);
v___x_2342_ = lean_box(0);
v_isShared_2343_ = v_isSharedCheck_2347_;
goto v_resetjp_2341_;
}
v_resetjp_2341_:
{
lean_object* v___x_2345_; 
if (v_isShared_2343_ == 0)
{
v___x_2345_ = v___x_2342_;
goto v_reusejp_2344_;
}
else
{
lean_object* v_reuseFailAlloc_2346_; 
v_reuseFailAlloc_2346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2346_, 0, v_a_2340_);
v___x_2345_ = v_reuseFailAlloc_2346_;
goto v_reusejp_2344_;
}
v_reusejp_2344_:
{
return v___x_2345_;
}
}
}
else
{
v___y_2237_ = v___y_2324_;
v___y_2238_ = v___y_2325_;
v___y_2239_ = v___y_2328_;
v___y_2240_ = v___y_2329_;
v___y_2241_ = v___y_2330_;
v___y_2242_ = v___y_2331_;
v___y_2243_ = v___y_2332_;
v___y_2244_ = v___y_2333_;
v___y_2245_ = v___y_2334_;
goto v___jp_2236_;
}
}
}
else
{
lean_object* v_extra_2348_; 
lean_dec_ref(v___y_2328_);
lean_dec_ref(v___y_2325_);
lean_dec_ref(v___y_2324_);
lean_dec(v_mod_x3f_2206_);
v_extra_2348_ = lean_ctor_get(v_params_2204_, 2);
lean_inc_ref(v_extra_2348_);
if (lean_obj_tag(v___y_2327_) == 2)
{
lean_object* v_config_2349_; lean_object* v_extensions_2350_; lean_object* v_extraInj_2351_; lean_object* v_extraFacts_2352_; lean_object* v_symPrios_2353_; lean_object* v_norm_2354_; lean_object* v_normProcs_2355_; lean_object* v_anchorRefs_x3f_2356_; lean_object* v___x_2358_; uint8_t v_isShared_2359_; uint8_t v_isSharedCheck_2411_; 
v_config_2349_ = lean_ctor_get(v_params_2204_, 0);
v_extensions_2350_ = lean_ctor_get(v_params_2204_, 1);
v_extraInj_2351_ = lean_ctor_get(v_params_2204_, 3);
v_extraFacts_2352_ = lean_ctor_get(v_params_2204_, 4);
v_symPrios_2353_ = lean_ctor_get(v_params_2204_, 5);
v_norm_2354_ = lean_ctor_get(v_params_2204_, 6);
v_normProcs_2355_ = lean_ctor_get(v_params_2204_, 7);
v_anchorRefs_x3f_2356_ = lean_ctor_get(v_params_2204_, 8);
v_isSharedCheck_2411_ = !lean_is_exclusive(v_params_2204_);
if (v_isSharedCheck_2411_ == 0)
{
lean_object* v_unused_2412_; 
v_unused_2412_ = lean_ctor_get(v_params_2204_, 2);
lean_dec(v_unused_2412_);
v___x_2358_ = v_params_2204_;
v_isShared_2359_ = v_isSharedCheck_2411_;
goto v_resetjp_2357_;
}
else
{
lean_inc(v_anchorRefs_x3f_2356_);
lean_inc(v_normProcs_2355_);
lean_inc(v_norm_2354_);
lean_inc(v_symPrios_2353_);
lean_inc(v_extraFacts_2352_);
lean_inc(v_extraInj_2351_);
lean_inc(v_extensions_2350_);
lean_inc(v_config_2349_);
lean_dec(v_params_2204_);
v___x_2358_ = lean_box(0);
v_isShared_2359_ = v_isSharedCheck_2411_;
goto v_resetjp_2357_;
}
v_resetjp_2357_:
{
lean_object* v_size_2360_; uint8_t v_gen_2361_; lean_object* v___x_2363_; uint8_t v_isShared_2364_; uint8_t v_isSharedCheck_2410_; 
v_size_2360_ = lean_ctor_get(v_extra_2348_, 2);
v_gen_2361_ = lean_ctor_get_uint8(v___y_2327_, 0);
v_isSharedCheck_2410_ = !lean_is_exclusive(v___y_2327_);
if (v_isSharedCheck_2410_ == 0)
{
v___x_2363_ = v___y_2327_;
v_isShared_2364_ = v_isSharedCheck_2410_;
goto v_resetjp_2362_;
}
else
{
lean_dec(v___y_2327_);
v___x_2363_ = lean_box(0);
v_isShared_2364_ = v_isSharedCheck_2410_;
goto v_resetjp_2362_;
}
v_resetjp_2362_:
{
lean_object* v___x_2365_; 
v___x_2365_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_2208_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_);
if (lean_obj_tag(v___x_2365_) == 0)
{
lean_object* v___x_2367_; 
lean_dec_ref_known(v___x_2365_, 1);
if (v_isShared_2364_ == 0)
{
lean_ctor_set_tag(v___x_2363_, 0);
v___x_2367_ = v___x_2363_;
goto v_reusejp_2366_;
}
else
{
lean_object* v_reuseFailAlloc_2401_; 
v_reuseFailAlloc_2401_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_2401_, 0, v_gen_2361_);
v___x_2367_ = v_reuseFailAlloc_2401_;
goto v_reusejp_2366_;
}
v_reusejp_2366_:
{
lean_object* v___x_2368_; 
lean_inc_ref(v___y_2326_);
lean_inc(v___y_2334_);
lean_inc_ref(v___y_2333_);
lean_inc(v___y_2332_);
lean_inc_ref(v___y_2331_);
lean_inc(v_size_2360_);
v___x_2368_ = lean_apply_7(v___y_2326_, v___x_2367_, v_size_2360_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_, lean_box(0));
if (lean_obj_tag(v___x_2368_) == 0)
{
lean_object* v_a_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; 
v_a_2369_ = lean_ctor_get(v___x_2368_, 0);
lean_inc(v_a_2369_);
lean_dec_ref_known(v___x_2368_, 1);
v___x_2370_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2370_, 0, v_gen_2361_);
lean_inc(v___y_2334_);
lean_inc(v___y_2332_);
lean_inc_ref(v___y_2331_);
lean_inc(v_size_2360_);
v___x_2371_ = lean_apply_7(v___y_2326_, v___x_2370_, v_size_2360_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_, lean_box(0));
if (lean_obj_tag(v___x_2371_) == 0)
{
lean_object* v_a_2372_; lean_object* v___x_2374_; uint8_t v_isShared_2375_; uint8_t v_isSharedCheck_2384_; 
v_a_2372_ = lean_ctor_get(v___x_2371_, 0);
v_isSharedCheck_2384_ = !lean_is_exclusive(v___x_2371_);
if (v_isSharedCheck_2384_ == 0)
{
v___x_2374_ = v___x_2371_;
v_isShared_2375_ = v_isSharedCheck_2384_;
goto v_resetjp_2373_;
}
else
{
lean_inc(v_a_2372_);
lean_dec(v___x_2371_);
v___x_2374_ = lean_box(0);
v_isShared_2375_ = v_isSharedCheck_2384_;
goto v_resetjp_2373_;
}
v_resetjp_2373_:
{
lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2379_; 
v___x_2376_ = l_Lean_PersistentArray_push___redArg(v_extra_2348_, v_a_2369_);
v___x_2377_ = l_Lean_PersistentArray_push___redArg(v___x_2376_, v_a_2372_);
if (v_isShared_2359_ == 0)
{
lean_ctor_set(v___x_2358_, 2, v___x_2377_);
v___x_2379_ = v___x_2358_;
goto v_reusejp_2378_;
}
else
{
lean_object* v_reuseFailAlloc_2383_; 
v_reuseFailAlloc_2383_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2383_, 0, v_config_2349_);
lean_ctor_set(v_reuseFailAlloc_2383_, 1, v_extensions_2350_);
lean_ctor_set(v_reuseFailAlloc_2383_, 2, v___x_2377_);
lean_ctor_set(v_reuseFailAlloc_2383_, 3, v_extraInj_2351_);
lean_ctor_set(v_reuseFailAlloc_2383_, 4, v_extraFacts_2352_);
lean_ctor_set(v_reuseFailAlloc_2383_, 5, v_symPrios_2353_);
lean_ctor_set(v_reuseFailAlloc_2383_, 6, v_norm_2354_);
lean_ctor_set(v_reuseFailAlloc_2383_, 7, v_normProcs_2355_);
lean_ctor_set(v_reuseFailAlloc_2383_, 8, v_anchorRefs_x3f_2356_);
v___x_2379_ = v_reuseFailAlloc_2383_;
goto v_reusejp_2378_;
}
v_reusejp_2378_:
{
lean_object* v___x_2381_; 
if (v_isShared_2375_ == 0)
{
lean_ctor_set(v___x_2374_, 0, v___x_2379_);
v___x_2381_ = v___x_2374_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v___x_2379_);
v___x_2381_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
return v___x_2381_;
}
}
}
}
else
{
lean_object* v_a_2385_; lean_object* v___x_2387_; uint8_t v_isShared_2388_; uint8_t v_isSharedCheck_2392_; 
lean_dec(v_a_2369_);
lean_del_object(v___x_2358_);
lean_dec(v_anchorRefs_x3f_2356_);
lean_dec_ref(v_normProcs_2355_);
lean_dec_ref(v_norm_2354_);
lean_dec_ref(v_symPrios_2353_);
lean_dec_ref(v_extraFacts_2352_);
lean_dec_ref(v_extraInj_2351_);
lean_dec_ref(v_extensions_2350_);
lean_dec_ref(v_config_2349_);
lean_dec_ref(v_extra_2348_);
v_a_2385_ = lean_ctor_get(v___x_2371_, 0);
v_isSharedCheck_2392_ = !lean_is_exclusive(v___x_2371_);
if (v_isSharedCheck_2392_ == 0)
{
v___x_2387_ = v___x_2371_;
v_isShared_2388_ = v_isSharedCheck_2392_;
goto v_resetjp_2386_;
}
else
{
lean_inc(v_a_2385_);
lean_dec(v___x_2371_);
v___x_2387_ = lean_box(0);
v_isShared_2388_ = v_isSharedCheck_2392_;
goto v_resetjp_2386_;
}
v_resetjp_2386_:
{
lean_object* v___x_2390_; 
if (v_isShared_2388_ == 0)
{
v___x_2390_ = v___x_2387_;
goto v_reusejp_2389_;
}
else
{
lean_object* v_reuseFailAlloc_2391_; 
v_reuseFailAlloc_2391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2391_, 0, v_a_2385_);
v___x_2390_ = v_reuseFailAlloc_2391_;
goto v_reusejp_2389_;
}
v_reusejp_2389_:
{
return v___x_2390_;
}
}
}
}
else
{
lean_object* v_a_2393_; lean_object* v___x_2395_; uint8_t v_isShared_2396_; uint8_t v_isSharedCheck_2400_; 
lean_del_object(v___x_2358_);
lean_dec(v_anchorRefs_x3f_2356_);
lean_dec_ref(v_normProcs_2355_);
lean_dec_ref(v_norm_2354_);
lean_dec_ref(v_symPrios_2353_);
lean_dec_ref(v_extraFacts_2352_);
lean_dec_ref(v_extraInj_2351_);
lean_dec_ref(v_extensions_2350_);
lean_dec_ref(v_config_2349_);
lean_dec_ref(v_extra_2348_);
lean_dec_ref(v___y_2333_);
lean_dec_ref(v___y_2326_);
v_a_2393_ = lean_ctor_get(v___x_2368_, 0);
v_isSharedCheck_2400_ = !lean_is_exclusive(v___x_2368_);
if (v_isSharedCheck_2400_ == 0)
{
v___x_2395_ = v___x_2368_;
v_isShared_2396_ = v_isSharedCheck_2400_;
goto v_resetjp_2394_;
}
else
{
lean_inc(v_a_2393_);
lean_dec(v___x_2368_);
v___x_2395_ = lean_box(0);
v_isShared_2396_ = v_isSharedCheck_2400_;
goto v_resetjp_2394_;
}
v_resetjp_2394_:
{
lean_object* v___x_2398_; 
if (v_isShared_2396_ == 0)
{
v___x_2398_ = v___x_2395_;
goto v_reusejp_2397_;
}
else
{
lean_object* v_reuseFailAlloc_2399_; 
v_reuseFailAlloc_2399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2399_, 0, v_a_2393_);
v___x_2398_ = v_reuseFailAlloc_2399_;
goto v_reusejp_2397_;
}
v_reusejp_2397_:
{
return v___x_2398_;
}
}
}
}
}
else
{
lean_object* v_a_2402_; lean_object* v___x_2404_; uint8_t v_isShared_2405_; uint8_t v_isSharedCheck_2409_; 
lean_del_object(v___x_2363_);
lean_del_object(v___x_2358_);
lean_dec(v_anchorRefs_x3f_2356_);
lean_dec_ref(v_normProcs_2355_);
lean_dec_ref(v_norm_2354_);
lean_dec_ref(v_symPrios_2353_);
lean_dec_ref(v_extraFacts_2352_);
lean_dec_ref(v_extraInj_2351_);
lean_dec_ref(v_extensions_2350_);
lean_dec_ref(v_config_2349_);
lean_dec_ref(v_extra_2348_);
lean_dec_ref(v___y_2333_);
lean_dec_ref(v___y_2326_);
v_a_2402_ = lean_ctor_get(v___x_2365_, 0);
v_isSharedCheck_2409_ = !lean_is_exclusive(v___x_2365_);
if (v_isSharedCheck_2409_ == 0)
{
v___x_2404_ = v___x_2365_;
v_isShared_2405_ = v_isSharedCheck_2409_;
goto v_resetjp_2403_;
}
else
{
lean_inc(v_a_2402_);
lean_dec(v___x_2365_);
v___x_2404_ = lean_box(0);
v_isShared_2405_ = v_isSharedCheck_2409_;
goto v_resetjp_2403_;
}
v_resetjp_2403_:
{
lean_object* v___x_2407_; 
if (v_isShared_2405_ == 0)
{
v___x_2407_ = v___x_2404_;
goto v_reusejp_2406_;
}
else
{
lean_object* v_reuseFailAlloc_2408_; 
v_reuseFailAlloc_2408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2408_, 0, v_a_2402_);
v___x_2407_ = v_reuseFailAlloc_2408_;
goto v_reusejp_2406_;
}
v_reusejp_2406_:
{
return v___x_2407_;
}
}
}
}
}
}
else
{
switch(lean_obj_tag(v___y_2327_))
{
case 0:
{
lean_object* v_config_2413_; lean_object* v_extensions_2414_; lean_object* v_extraInj_2415_; lean_object* v_extraFacts_2416_; lean_object* v_symPrios_2417_; lean_object* v_norm_2418_; lean_object* v_normProcs_2419_; lean_object* v_anchorRefs_x3f_2420_; lean_object* v_size_2421_; 
v_config_2413_ = lean_ctor_get(v_params_2204_, 0);
lean_inc_ref(v_config_2413_);
v_extensions_2414_ = lean_ctor_get(v_params_2204_, 1);
lean_inc_ref(v_extensions_2414_);
v_extraInj_2415_ = lean_ctor_get(v_params_2204_, 3);
lean_inc_ref(v_extraInj_2415_);
v_extraFacts_2416_ = lean_ctor_get(v_params_2204_, 4);
lean_inc_ref(v_extraFacts_2416_);
v_symPrios_2417_ = lean_ctor_get(v_params_2204_, 5);
lean_inc_ref(v_symPrios_2417_);
v_norm_2418_ = lean_ctor_get(v_params_2204_, 6);
lean_inc_ref(v_norm_2418_);
v_normProcs_2419_ = lean_ctor_get(v_params_2204_, 7);
lean_inc_ref(v_normProcs_2419_);
v_anchorRefs_x3f_2420_ = lean_ctor_get(v_params_2204_, 8);
lean_inc(v_anchorRefs_x3f_2420_);
lean_dec_ref(v_params_2204_);
v_size_2421_ = lean_ctor_get(v_extra_2348_, 2);
lean_inc(v_size_2421_);
v___y_2298_ = v_extraFacts_2416_;
v___y_2299_ = v_anchorRefs_x3f_2420_;
v___y_2300_ = v_extensions_2414_;
v___y_2301_ = v___y_2327_;
v___y_2302_ = v_extra_2348_;
v___y_2303_ = v___y_2333_;
v___y_2304_ = v_extraInj_2415_;
v___y_2305_ = v_norm_2418_;
v___y_2306_ = v___y_2331_;
v___y_2307_ = v_symPrios_2417_;
v___y_2308_ = v___y_2332_;
v___y_2309_ = v_size_2421_;
v___y_2310_ = v___y_2326_;
v___y_2311_ = v_config_2413_;
v___y_2312_ = v_normProcs_2419_;
v___y_2313_ = v___y_2334_;
goto v___jp_2297_;
}
case 1:
{
lean_object* v_config_2422_; lean_object* v_extensions_2423_; lean_object* v_extraInj_2424_; lean_object* v_extraFacts_2425_; lean_object* v_symPrios_2426_; lean_object* v_norm_2427_; lean_object* v_normProcs_2428_; lean_object* v_anchorRefs_x3f_2429_; lean_object* v_size_2430_; 
v_config_2422_ = lean_ctor_get(v_params_2204_, 0);
lean_inc_ref(v_config_2422_);
v_extensions_2423_ = lean_ctor_get(v_params_2204_, 1);
lean_inc_ref(v_extensions_2423_);
v_extraInj_2424_ = lean_ctor_get(v_params_2204_, 3);
lean_inc_ref(v_extraInj_2424_);
v_extraFacts_2425_ = lean_ctor_get(v_params_2204_, 4);
lean_inc_ref(v_extraFacts_2425_);
v_symPrios_2426_ = lean_ctor_get(v_params_2204_, 5);
lean_inc_ref(v_symPrios_2426_);
v_norm_2427_ = lean_ctor_get(v_params_2204_, 6);
lean_inc_ref(v_norm_2427_);
v_normProcs_2428_ = lean_ctor_get(v_params_2204_, 7);
lean_inc_ref(v_normProcs_2428_);
v_anchorRefs_x3f_2429_ = lean_ctor_get(v_params_2204_, 8);
lean_inc(v_anchorRefs_x3f_2429_);
lean_dec_ref(v_params_2204_);
v_size_2430_ = lean_ctor_get(v_extra_2348_, 2);
lean_inc(v_size_2430_);
v___y_2298_ = v_extraFacts_2425_;
v___y_2299_ = v_anchorRefs_x3f_2429_;
v___y_2300_ = v_extensions_2423_;
v___y_2301_ = v___y_2327_;
v___y_2302_ = v_extra_2348_;
v___y_2303_ = v___y_2333_;
v___y_2304_ = v_extraInj_2424_;
v___y_2305_ = v_norm_2427_;
v___y_2306_ = v___y_2331_;
v___y_2307_ = v_symPrios_2426_;
v___y_2308_ = v___y_2332_;
v___y_2309_ = v_size_2430_;
v___y_2310_ = v___y_2326_;
v___y_2311_ = v_config_2422_;
v___y_2312_ = v_normProcs_2428_;
v___y_2313_ = v___y_2334_;
goto v___jp_2297_;
}
default: 
{
lean_object* v_config_2431_; lean_object* v_extensions_2432_; lean_object* v_extraInj_2433_; lean_object* v_extraFacts_2434_; lean_object* v_symPrios_2435_; lean_object* v_norm_2436_; lean_object* v_normProcs_2437_; lean_object* v_anchorRefs_x3f_2438_; lean_object* v_size_2439_; 
v_config_2431_ = lean_ctor_get(v_params_2204_, 0);
lean_inc_ref(v_config_2431_);
v_extensions_2432_ = lean_ctor_get(v_params_2204_, 1);
lean_inc_ref(v_extensions_2432_);
v_extraInj_2433_ = lean_ctor_get(v_params_2204_, 3);
lean_inc_ref(v_extraInj_2433_);
v_extraFacts_2434_ = lean_ctor_get(v_params_2204_, 4);
lean_inc_ref(v_extraFacts_2434_);
v_symPrios_2435_ = lean_ctor_get(v_params_2204_, 5);
lean_inc_ref(v_symPrios_2435_);
v_norm_2436_ = lean_ctor_get(v_params_2204_, 6);
lean_inc_ref(v_norm_2436_);
v_normProcs_2437_ = lean_ctor_get(v_params_2204_, 7);
lean_inc_ref(v_normProcs_2437_);
v_anchorRefs_x3f_2438_ = lean_ctor_get(v_params_2204_, 8);
lean_inc(v_anchorRefs_x3f_2438_);
lean_dec_ref(v_params_2204_);
v_size_2439_ = lean_ctor_get(v_extra_2348_, 2);
lean_inc(v_size_2439_);
v___y_2262_ = v_symPrios_2435_;
v___y_2263_ = v_extraFacts_2434_;
v___y_2264_ = v_anchorRefs_x3f_2438_;
v___y_2265_ = v_size_2439_;
v___y_2266_ = v___y_2326_;
v___y_2267_ = v_config_2431_;
v___y_2268_ = v_extensions_2432_;
v___y_2269_ = v_normProcs_2437_;
v___y_2270_ = v___y_2327_;
v___y_2271_ = v_extra_2348_;
v___y_2272_ = v_norm_2436_;
v___y_2273_ = v_extraInj_2433_;
v___y_2274_ = v___y_2331_;
v___y_2275_ = v___y_2332_;
v___y_2276_ = v___y_2333_;
v___y_2277_ = v___y_2334_;
goto v___jp_2261_;
}
}
}
}
}
v___jp_2440_:
{
lean_object* v___x_2448_; uint8_t v___x_2449_; lean_object* v___x_2450_; lean_object* v___f_2451_; lean_object* v___x_2452_; 
v___x_2448_ = lean_box(0);
v___x_2449_ = 1;
v___x_2450_ = lean_box(v___x_2449_);
lean_inc(v_p_2205_);
v___f_2451_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__0___boxed), 11, 4);
lean_closure_set(v___f_2451_, 0, v_p_2205_);
lean_closure_set(v___f_2451_, 1, v_term_2207_);
lean_closure_set(v___f_2451_, 2, v___x_2448_);
lean_closure_set(v___f_2451_, 3, v___x_2450_);
v___x_2452_ = l_Lean_Elab_Term_withoutModifyingElabMetaStateWithInfo___redArg(v___f_2451_, v___y_2442_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_);
if (lean_obj_tag(v___x_2452_) == 0)
{
lean_object* v_a_2453_; lean_object* v___x_2455_; uint8_t v_isShared_2456_; uint8_t v_isSharedCheck_2497_; 
v_a_2453_ = lean_ctor_get(v___x_2452_, 0);
v_isSharedCheck_2497_ = !lean_is_exclusive(v___x_2452_);
if (v_isSharedCheck_2497_ == 0)
{
v___x_2455_ = v___x_2452_;
v_isShared_2456_ = v_isSharedCheck_2497_;
goto v_resetjp_2454_;
}
else
{
lean_inc(v_a_2453_);
lean_dec(v___x_2452_);
v___x_2455_ = lean_box(0);
v_isShared_2456_ = v_isSharedCheck_2497_;
goto v_resetjp_2454_;
}
v_resetjp_2454_:
{
if (lean_obj_tag(v_a_2453_) == 1)
{
lean_object* v_val_2457_; lean_object* v_fst_2458_; lean_object* v_snd_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___f_2462_; lean_object* v___x_2463_; 
lean_del_object(v___x_2455_);
v_val_2457_ = lean_ctor_get(v_a_2453_, 0);
lean_inc(v_val_2457_);
lean_dec_ref_known(v_a_2453_, 1);
v_fst_2458_ = lean_ctor_get(v_val_2457_, 0);
lean_inc_n(v_fst_2458_, 2);
v_snd_2459_ = lean_ctor_get(v_val_2457_, 1);
lean_inc_n(v_snd_2459_, 3);
lean_dec(v_val_2457_);
v___x_2460_ = lean_box(v___x_2449_);
v___x_2461_ = lean_box(v_minIndexable_2208_);
lean_inc_ref(v_params_2204_);
v___f_2462_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___boxed), 13, 6);
lean_closure_set(v___f_2462_, 0, v_params_2204_);
lean_closure_set(v___f_2462_, 1, v_p_2205_);
lean_closure_set(v___f_2462_, 2, v_fst_2458_);
lean_closure_set(v___f_2462_, 3, v_snd_2459_);
lean_closure_set(v___f_2462_, 4, v___x_2460_);
lean_closure_set(v___f_2462_, 5, v___x_2461_);
lean_inc(v___y_2447_);
lean_inc_ref(v___y_2446_);
lean_inc(v___y_2445_);
lean_inc_ref(v___y_2444_);
v___x_2463_ = lean_infer_type(v_snd_2459_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_);
if (lean_obj_tag(v___x_2463_) == 0)
{
lean_object* v_a_2464_; lean_object* v___x_2465_; 
v_a_2464_ = lean_ctor_get(v___x_2463_, 0);
lean_inc_n(v_a_2464_, 2);
lean_dec_ref_known(v___x_2463_, 1);
v___x_2465_ = l_Lean_Meta_isProp(v_a_2464_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_);
if (lean_obj_tag(v___x_2465_) == 0)
{
lean_object* v_a_2466_; uint8_t v___x_2467_; 
v_a_2466_ = lean_ctor_get(v___x_2465_, 0);
lean_inc(v_a_2466_);
lean_dec_ref_known(v___x_2465_, 1);
v___x_2467_ = lean_unbox(v_a_2466_);
lean_dec(v_a_2466_);
if (v___x_2467_ == 0)
{
lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v_a_2470_; lean_object* v___x_2472_; uint8_t v_isShared_2473_; uint8_t v_isSharedCheck_2477_; 
lean_dec(v_a_2464_);
lean_dec_ref(v___f_2462_);
lean_dec(v_snd_2459_);
lean_dec(v_fst_2458_);
lean_dec(v_kind_2441_);
lean_dec(v_mod_x3f_2206_);
lean_dec_ref(v_params_2204_);
v___x_2468_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__5, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__5);
v___x_2469_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_2468_, v___y_2442_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_);
lean_dec_ref(v___y_2446_);
v_a_2470_ = lean_ctor_get(v___x_2469_, 0);
v_isSharedCheck_2477_ = !lean_is_exclusive(v___x_2469_);
if (v_isSharedCheck_2477_ == 0)
{
v___x_2472_ = v___x_2469_;
v_isShared_2473_ = v_isSharedCheck_2477_;
goto v_resetjp_2471_;
}
else
{
lean_inc(v_a_2470_);
lean_dec(v___x_2469_);
v___x_2472_ = lean_box(0);
v_isShared_2473_ = v_isSharedCheck_2477_;
goto v_resetjp_2471_;
}
v_resetjp_2471_:
{
lean_object* v___x_2475_; 
if (v_isShared_2473_ == 0)
{
v___x_2475_ = v___x_2472_;
goto v_reusejp_2474_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v_a_2470_);
v___x_2475_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2474_;
}
v_reusejp_2474_:
{
return v___x_2475_;
}
}
}
else
{
v___y_2324_ = v_snd_2459_;
v___y_2325_ = v_fst_2458_;
v___y_2326_ = v___f_2462_;
v___y_2327_ = v_kind_2441_;
v___y_2328_ = v_a_2464_;
v___y_2329_ = v___y_2442_;
v___y_2330_ = v___y_2443_;
v___y_2331_ = v___y_2444_;
v___y_2332_ = v___y_2445_;
v___y_2333_ = v___y_2446_;
v___y_2334_ = v___y_2447_;
goto v___jp_2323_;
}
}
else
{
lean_object* v_a_2478_; lean_object* v___x_2480_; uint8_t v_isShared_2481_; uint8_t v_isSharedCheck_2485_; 
lean_dec(v_a_2464_);
lean_dec_ref(v___f_2462_);
lean_dec(v_snd_2459_);
lean_dec(v_fst_2458_);
lean_dec_ref(v___y_2446_);
lean_dec(v_kind_2441_);
lean_dec(v_mod_x3f_2206_);
lean_dec_ref(v_params_2204_);
v_a_2478_ = lean_ctor_get(v___x_2465_, 0);
v_isSharedCheck_2485_ = !lean_is_exclusive(v___x_2465_);
if (v_isSharedCheck_2485_ == 0)
{
v___x_2480_ = v___x_2465_;
v_isShared_2481_ = v_isSharedCheck_2485_;
goto v_resetjp_2479_;
}
else
{
lean_inc(v_a_2478_);
lean_dec(v___x_2465_);
v___x_2480_ = lean_box(0);
v_isShared_2481_ = v_isSharedCheck_2485_;
goto v_resetjp_2479_;
}
v_resetjp_2479_:
{
lean_object* v___x_2483_; 
if (v_isShared_2481_ == 0)
{
v___x_2483_ = v___x_2480_;
goto v_reusejp_2482_;
}
else
{
lean_object* v_reuseFailAlloc_2484_; 
v_reuseFailAlloc_2484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2484_, 0, v_a_2478_);
v___x_2483_ = v_reuseFailAlloc_2484_;
goto v_reusejp_2482_;
}
v_reusejp_2482_:
{
return v___x_2483_;
}
}
}
}
else
{
lean_object* v_a_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2493_; 
lean_dec_ref(v___f_2462_);
lean_dec(v_snd_2459_);
lean_dec(v_fst_2458_);
lean_dec_ref(v___y_2446_);
lean_dec(v_kind_2441_);
lean_dec(v_mod_x3f_2206_);
lean_dec_ref(v_params_2204_);
v_a_2486_ = lean_ctor_get(v___x_2463_, 0);
v_isSharedCheck_2493_ = !lean_is_exclusive(v___x_2463_);
if (v_isSharedCheck_2493_ == 0)
{
v___x_2488_ = v___x_2463_;
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_a_2486_);
lean_dec(v___x_2463_);
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
else
{
lean_object* v___x_2495_; 
lean_dec(v_a_2453_);
lean_dec_ref(v___y_2446_);
lean_dec(v_kind_2441_);
lean_dec(v_mod_x3f_2206_);
lean_dec(v_p_2205_);
if (v_isShared_2456_ == 0)
{
lean_ctor_set(v___x_2455_, 0, v_params_2204_);
v___x_2495_ = v___x_2455_;
goto v_reusejp_2494_;
}
else
{
lean_object* v_reuseFailAlloc_2496_; 
v_reuseFailAlloc_2496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2496_, 0, v_params_2204_);
v___x_2495_ = v_reuseFailAlloc_2496_;
goto v_reusejp_2494_;
}
v_reusejp_2494_:
{
return v___x_2495_;
}
}
}
}
else
{
lean_object* v_a_2498_; lean_object* v___x_2500_; uint8_t v_isShared_2501_; uint8_t v_isSharedCheck_2505_; 
lean_dec_ref(v___y_2446_);
lean_dec(v_kind_2441_);
lean_dec(v_mod_x3f_2206_);
lean_dec(v_p_2205_);
lean_dec_ref(v_params_2204_);
v_a_2498_ = lean_ctor_get(v___x_2452_, 0);
v_isSharedCheck_2505_ = !lean_is_exclusive(v___x_2452_);
if (v_isSharedCheck_2505_ == 0)
{
v___x_2500_ = v___x_2452_;
v_isShared_2501_ = v_isSharedCheck_2505_;
goto v_resetjp_2499_;
}
else
{
lean_inc(v_a_2498_);
lean_dec(v___x_2452_);
v___x_2500_ = lean_box(0);
v_isShared_2501_ = v_isSharedCheck_2505_;
goto v_resetjp_2499_;
}
v_resetjp_2499_:
{
lean_object* v___x_2503_; 
if (v_isShared_2501_ == 0)
{
v___x_2503_ = v___x_2500_;
goto v_reusejp_2502_;
}
else
{
lean_object* v_reuseFailAlloc_2504_; 
v_reuseFailAlloc_2504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2504_, 0, v_a_2498_);
v___x_2503_ = v_reuseFailAlloc_2504_;
goto v_reusejp_2502_;
}
v_reusejp_2502_:
{
return v___x_2503_;
}
}
}
}
v___jp_2506_:
{
lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v_a_2515_; lean_object* v___x_2517_; uint8_t v_isShared_2518_; uint8_t v_isSharedCheck_2522_; 
v___x_2513_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7);
v___x_2514_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_2513_, v___y_2507_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_, v___y_2512_);
lean_dec_ref(v___y_2511_);
v_a_2515_ = lean_ctor_get(v___x_2514_, 0);
v_isSharedCheck_2522_ = !lean_is_exclusive(v___x_2514_);
if (v_isSharedCheck_2522_ == 0)
{
v___x_2517_ = v___x_2514_;
v_isShared_2518_ = v_isSharedCheck_2522_;
goto v_resetjp_2516_;
}
else
{
lean_inc(v_a_2515_);
lean_dec(v___x_2514_);
v___x_2517_ = lean_box(0);
v_isShared_2518_ = v_isSharedCheck_2522_;
goto v_resetjp_2516_;
}
v_resetjp_2516_:
{
lean_object* v___x_2520_; 
if (v_isShared_2518_ == 0)
{
v___x_2520_ = v___x_2517_;
goto v_reusejp_2519_;
}
else
{
lean_object* v_reuseFailAlloc_2521_; 
v_reuseFailAlloc_2521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2521_, 0, v_a_2515_);
v___x_2520_ = v_reuseFailAlloc_2521_;
goto v_reusejp_2519_;
}
v_reusejp_2519_:
{
return v___x_2520_;
}
}
}
v___jp_2523_:
{
lean_object* v___x_2530_; 
v___x_2530_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__8));
v_kind_2441_ = v___x_2530_;
v___y_2442_ = v___y_2524_;
v___y_2443_ = v___y_2525_;
v___y_2444_ = v___y_2526_;
v___y_2445_ = v___y_2527_;
v___y_2446_ = v___y_2528_;
v___y_2447_ = v___y_2529_;
goto v___jp_2440_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___boxed(lean_object* v_params_2589_, lean_object* v_p_2590_, lean_object* v_mod_x3f_2591_, lean_object* v_term_2592_, lean_object* v_minIndexable_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_){
_start:
{
uint8_t v_minIndexable_boxed_2601_; lean_object* v_res_2602_; 
v_minIndexable_boxed_2601_ = lean_unbox(v_minIndexable_2593_);
v_res_2602_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam(v_params_2589_, v_p_2590_, v_mod_x3f_2591_, v_term_2592_, v_minIndexable_boxed_2601_, v___y_2594_, v___y_2595_, v___y_2596_, v___y_2597_, v___y_2598_, v___y_2599_);
lean_dec(v___y_2599_);
lean_dec_ref(v___y_2598_);
lean_dec(v___y_2597_);
lean_dec_ref(v___y_2596_);
lean_dec(v___y_2595_);
lean_dec_ref(v___y_2594_);
return v_res_2602_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1(lean_object* v_00_u03b1_2603_, lean_object* v_msg_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_){
_start:
{
lean_object* v___x_2612_; 
v___x_2612_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v_msg_2604_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_);
return v___x_2612_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___boxed(lean_object* v_00_u03b1_2613_, lean_object* v_msg_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_){
_start:
{
lean_object* v_res_2622_; 
v_res_2622_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1(v_00_u03b1_2613_, v_msg_2614_, v___y_2615_, v___y_2616_, v___y_2617_, v___y_2618_, v___y_2619_, v___y_2620_);
lean_dec(v___y_2620_);
lean_dec_ref(v___y_2619_);
lean_dec(v___y_2618_);
lean_dec_ref(v___y_2617_);
lean_dec(v___y_2616_);
lean_dec_ref(v___y_2615_);
return v_res_2622_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1(lean_object* v_msgData_2623_, lean_object* v_macroStack_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_){
_start:
{
lean_object* v___x_2632_; 
v___x_2632_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg(v_msgData_2623_, v_macroStack_2624_, v___y_2629_);
return v___x_2632_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___boxed(lean_object* v_msgData_2633_, lean_object* v_macroStack_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_){
_start:
{
lean_object* v_res_2642_; 
v_res_2642_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1(v_msgData_2633_, v_macroStack_2634_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_, v___y_2639_, v___y_2640_);
lean_dec(v___y_2640_);
lean_dec_ref(v___y_2639_);
lean_dec(v___y_2638_);
lean_dec_ref(v___y_2637_);
lean_dec(v___y_2636_);
lean_dec_ref(v___y_2635_);
return v_res_2642_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___lam__0(lean_object* v_params_2643_, lean_object* v_val_2644_, lean_object* v___x_2645_, lean_object* v_____r_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_){
_start:
{
lean_object* v___x_2654_; lean_object* v_ext_2655_; lean_object* v_toEnvExtension_2656_; lean_object* v_env_2657_; lean_object* v_config_2658_; lean_object* v_extensions_2659_; lean_object* v_extra_2660_; lean_object* v_extraInj_2661_; lean_object* v_extraFacts_2662_; lean_object* v_symPrios_2663_; lean_object* v_norm_2664_; lean_object* v_normProcs_2665_; lean_object* v_anchorRefs_x3f_2666_; lean_object* v___x_2668_; uint8_t v_isShared_2669_; uint8_t v_isSharedCheck_2678_; 
v___x_2654_ = lean_st_ref_get(v___y_2652_);
v_ext_2655_ = lean_ctor_get(v_val_2644_, 1);
v_toEnvExtension_2656_ = lean_ctor_get(v_ext_2655_, 0);
v_env_2657_ = lean_ctor_get(v___x_2654_, 0);
lean_inc_ref(v_env_2657_);
lean_dec(v___x_2654_);
v_config_2658_ = lean_ctor_get(v_params_2643_, 0);
v_extensions_2659_ = lean_ctor_get(v_params_2643_, 1);
v_extra_2660_ = lean_ctor_get(v_params_2643_, 2);
v_extraInj_2661_ = lean_ctor_get(v_params_2643_, 3);
v_extraFacts_2662_ = lean_ctor_get(v_params_2643_, 4);
v_symPrios_2663_ = lean_ctor_get(v_params_2643_, 5);
v_norm_2664_ = lean_ctor_get(v_params_2643_, 6);
v_normProcs_2665_ = lean_ctor_get(v_params_2643_, 7);
v_anchorRefs_x3f_2666_ = lean_ctor_get(v_params_2643_, 8);
v_isSharedCheck_2678_ = !lean_is_exclusive(v_params_2643_);
if (v_isSharedCheck_2678_ == 0)
{
v___x_2668_ = v_params_2643_;
v_isShared_2669_ = v_isSharedCheck_2678_;
goto v_resetjp_2667_;
}
else
{
lean_inc(v_anchorRefs_x3f_2666_);
lean_inc(v_normProcs_2665_);
lean_inc(v_norm_2664_);
lean_inc(v_symPrios_2663_);
lean_inc(v_extraFacts_2662_);
lean_inc(v_extraInj_2661_);
lean_inc(v_extra_2660_);
lean_inc(v_extensions_2659_);
lean_inc(v_config_2658_);
lean_dec(v_params_2643_);
v___x_2668_ = lean_box(0);
v_isShared_2669_ = v_isSharedCheck_2678_;
goto v_resetjp_2667_;
}
v_resetjp_2667_:
{
lean_object* v_asyncMode_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2674_; 
v_asyncMode_2670_ = lean_ctor_get(v_toEnvExtension_2656_, 2);
v___x_2671_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2645_, v_val_2644_, v_env_2657_, v_asyncMode_2670_);
v___x_2672_ = lean_array_push(v_extensions_2659_, v___x_2671_);
if (v_isShared_2669_ == 0)
{
lean_ctor_set(v___x_2668_, 1, v___x_2672_);
v___x_2674_ = v___x_2668_;
goto v_reusejp_2673_;
}
else
{
lean_object* v_reuseFailAlloc_2677_; 
v_reuseFailAlloc_2677_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2677_, 0, v_config_2658_);
lean_ctor_set(v_reuseFailAlloc_2677_, 1, v___x_2672_);
lean_ctor_set(v_reuseFailAlloc_2677_, 2, v_extra_2660_);
lean_ctor_set(v_reuseFailAlloc_2677_, 3, v_extraInj_2661_);
lean_ctor_set(v_reuseFailAlloc_2677_, 4, v_extraFacts_2662_);
lean_ctor_set(v_reuseFailAlloc_2677_, 5, v_symPrios_2663_);
lean_ctor_set(v_reuseFailAlloc_2677_, 6, v_norm_2664_);
lean_ctor_set(v_reuseFailAlloc_2677_, 7, v_normProcs_2665_);
lean_ctor_set(v_reuseFailAlloc_2677_, 8, v_anchorRefs_x3f_2666_);
v___x_2674_ = v_reuseFailAlloc_2677_;
goto v_reusejp_2673_;
}
v_reusejp_2673_:
{
lean_object* v___x_2675_; lean_object* v___x_2676_; 
v___x_2675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2675_, 0, v___x_2674_);
v___x_2676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2676_, 0, v___x_2675_);
return v___x_2676_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___lam__0___boxed(lean_object* v_params_2679_, lean_object* v_val_2680_, lean_object* v___x_2681_, lean_object* v_____r_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_){
_start:
{
lean_object* v_res_2690_; 
v_res_2690_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___lam__0(v_params_2679_, v_val_2680_, v___x_2681_, v_____r_2682_, v___y_2683_, v___y_2684_, v___y_2685_, v___y_2686_, v___y_2687_, v___y_2688_);
lean_dec(v___y_2688_);
lean_dec_ref(v___y_2687_);
lean_dec(v___y_2686_);
lean_dec_ref(v___y_2685_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec_ref(v___x_2681_);
lean_dec_ref(v_val_2680_);
return v_res_2690_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0___redArg(lean_object* v_p_2691_, lean_object* v_id_2692_, uint8_t v_minIndexable_2693_, lean_object* v_as_x27_2694_, lean_object* v_b_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_){
_start:
{
if (lean_obj_tag(v_as_x27_2694_) == 0)
{
lean_object* v___x_2701_; 
lean_dec(v_id_2692_);
v___x_2701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2701_, 0, v_b_2695_);
return v___x_2701_;
}
else
{
lean_object* v_head_2702_; lean_object* v_tail_2703_; lean_object* v_toCold_2704_; lean_object* v_currRecDepth_2705_; lean_object* v_ref_2706_; uint8_t v_diag_2707_; uint8_t v_suppressElabErrors_2708_; uint8_t v___x_2709_; lean_object* v___x_2710_; lean_object* v_ref_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; 
v_head_2702_ = lean_ctor_get(v_as_x27_2694_, 0);
v_tail_2703_ = lean_ctor_get(v_as_x27_2694_, 1);
v_toCold_2704_ = lean_ctor_get(v___y_2698_, 0);
v_currRecDepth_2705_ = lean_ctor_get(v___y_2698_, 1);
v_ref_2706_ = lean_ctor_get(v___y_2698_, 2);
v_diag_2707_ = lean_ctor_get_uint8(v___y_2698_, sizeof(void*)*3);
v_suppressElabErrors_2708_ = lean_ctor_get_uint8(v___y_2698_, sizeof(void*)*3 + 1);
v___x_2709_ = 0;
v___x_2710_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__8));
v_ref_2711_ = l_Lean_replaceRef(v_p_2691_, v_ref_2706_);
lean_inc(v_currRecDepth_2705_);
lean_inc_ref(v_toCold_2704_);
v___x_2712_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2712_, 0, v_toCold_2704_);
lean_ctor_set(v___x_2712_, 1, v_currRecDepth_2705_);
lean_ctor_set(v___x_2712_, 2, v_ref_2711_);
lean_ctor_set_uint8(v___x_2712_, sizeof(void*)*3, v_diag_2707_);
lean_ctor_set_uint8(v___x_2712_, sizeof(void*)*3 + 1, v_suppressElabErrors_2708_);
lean_inc(v_head_2702_);
lean_inc(v_id_2692_);
v___x_2713_ = l_Lean_Elab_Tactic_addEMatchTheorem(v_b_2695_, v_id_2692_, v_head_2702_, v___x_2710_, v_minIndexable_2693_, v___x_2709_, v___x_2709_, v___y_2696_, v___y_2697_, v___x_2712_, v___y_2699_);
lean_dec_ref_known(v___x_2712_, 3);
if (lean_obj_tag(v___x_2713_) == 0)
{
lean_object* v_a_2714_; 
v_a_2714_ = lean_ctor_get(v___x_2713_, 0);
lean_inc(v_a_2714_);
lean_dec_ref_known(v___x_2713_, 1);
v_as_x27_2694_ = v_tail_2703_;
v_b_2695_ = v_a_2714_;
goto _start;
}
else
{
lean_dec(v_id_2692_);
return v___x_2713_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0___redArg___boxed(lean_object* v_p_2716_, lean_object* v_id_2717_, lean_object* v_minIndexable_2718_, lean_object* v_as_x27_2719_, lean_object* v_b_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_){
_start:
{
uint8_t v_minIndexable_boxed_2726_; lean_object* v_res_2727_; 
v_minIndexable_boxed_2726_ = lean_unbox(v_minIndexable_2718_);
v_res_2727_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0___redArg(v_p_2716_, v_id_2717_, v_minIndexable_boxed_2726_, v_as_x27_2719_, v_b_2720_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_);
lean_dec(v___y_2724_);
lean_dec_ref(v___y_2723_);
lean_dec(v___y_2722_);
lean_dec_ref(v___y_2721_);
lean_dec(v_as_x27_2719_);
lean_dec(v_p_2716_);
return v_res_2727_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__1(lean_object* v_k_2728_, lean_object* v_a_2729_, lean_object* v_a_2730_){
_start:
{
if (lean_obj_tag(v_a_2729_) == 0)
{
lean_object* v___x_2731_; 
v___x_2731_ = l_List_reverse___redArg(v_a_2730_);
return v___x_2731_;
}
else
{
lean_object* v_head_2732_; lean_object* v_tail_2733_; lean_object* v___x_2735_; uint8_t v_isShared_2736_; uint8_t v_isSharedCheck_2744_; 
v_head_2732_ = lean_ctor_get(v_a_2729_, 0);
v_tail_2733_ = lean_ctor_get(v_a_2729_, 1);
v_isSharedCheck_2744_ = !lean_is_exclusive(v_a_2729_);
if (v_isSharedCheck_2744_ == 0)
{
v___x_2735_ = v_a_2729_;
v_isShared_2736_ = v_isSharedCheck_2744_;
goto v_resetjp_2734_;
}
else
{
lean_inc(v_tail_2733_);
lean_inc(v_head_2732_);
lean_dec(v_a_2729_);
v___x_2735_ = lean_box(0);
v_isShared_2736_ = v_isSharedCheck_2744_;
goto v_resetjp_2734_;
}
v_resetjp_2734_:
{
lean_object* v_kind_2737_; uint8_t v___x_2738_; 
v_kind_2737_ = lean_ctor_get(v_head_2732_, 6);
v___x_2738_ = l_Lean_Meta_Grind_instBEqEMatchTheoremKind_beq(v_kind_2737_, v_k_2728_);
if (v___x_2738_ == 0)
{
lean_del_object(v___x_2735_);
lean_dec(v_head_2732_);
v_a_2729_ = v_tail_2733_;
goto _start;
}
else
{
lean_object* v___x_2741_; 
if (v_isShared_2736_ == 0)
{
lean_ctor_set(v___x_2735_, 1, v_a_2730_);
v___x_2741_ = v___x_2735_;
goto v_reusejp_2740_;
}
else
{
lean_object* v_reuseFailAlloc_2743_; 
v_reuseFailAlloc_2743_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2743_, 0, v_head_2732_);
lean_ctor_set(v_reuseFailAlloc_2743_, 1, v_a_2730_);
v___x_2741_ = v_reuseFailAlloc_2743_;
goto v_reusejp_2740_;
}
v_reusejp_2740_:
{
v_a_2729_ = v_tail_2733_;
v_a_2730_ = v___x_2741_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__1___boxed(lean_object* v_k_2745_, lean_object* v_a_2746_, lean_object* v_a_2747_){
_start:
{
lean_object* v_res_2748_; 
v_res_2748_ = l_List_filterTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__1(v_k_2745_, v_a_2746_, v_a_2747_);
lean_dec(v_k_2745_);
return v_res_2748_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg(lean_object* v_ref_2749_, lean_object* v_msg_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_){
_start:
{
lean_object* v_toCold_2758_; lean_object* v_currRecDepth_2759_; lean_object* v_ref_2760_; uint8_t v_diag_2761_; uint8_t v_suppressElabErrors_2762_; lean_object* v_ref_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; 
v_toCold_2758_ = lean_ctor_get(v___y_2755_, 0);
v_currRecDepth_2759_ = lean_ctor_get(v___y_2755_, 1);
v_ref_2760_ = lean_ctor_get(v___y_2755_, 2);
v_diag_2761_ = lean_ctor_get_uint8(v___y_2755_, sizeof(void*)*3);
v_suppressElabErrors_2762_ = lean_ctor_get_uint8(v___y_2755_, sizeof(void*)*3 + 1);
v_ref_2763_ = l_Lean_replaceRef(v_ref_2749_, v_ref_2760_);
lean_inc(v_currRecDepth_2759_);
lean_inc_ref(v_toCold_2758_);
v___x_2764_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2764_, 0, v_toCold_2758_);
lean_ctor_set(v___x_2764_, 1, v_currRecDepth_2759_);
lean_ctor_set(v___x_2764_, 2, v_ref_2763_);
lean_ctor_set_uint8(v___x_2764_, sizeof(void*)*3, v_diag_2761_);
lean_ctor_set_uint8(v___x_2764_, sizeof(void*)*3 + 1, v_suppressElabErrors_2762_);
v___x_2765_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v_msg_2750_, v___y_2751_, v___y_2752_, v___y_2753_, v___y_2754_, v___x_2764_, v___y_2756_);
lean_dec_ref_known(v___x_2764_, 3);
return v___x_2765_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg___boxed(lean_object* v_ref_2766_, lean_object* v_msg_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_){
_start:
{
lean_object* v_res_2775_; 
v_res_2775_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg(v_ref_2766_, v_msg_2767_, v___y_2768_, v___y_2769_, v___y_2770_, v___y_2771_, v___y_2772_, v___y_2773_);
lean_dec(v___y_2773_);
lean_dec_ref(v___y_2772_);
lean_dec(v___y_2771_);
lean_dec_ref(v___y_2770_);
lean_dec(v___y_2769_);
lean_dec_ref(v___y_2768_);
lean_dec(v_ref_2766_);
return v_res_2775_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4___redArg(lean_object* v_p_2776_, lean_object* v_id_2777_, uint8_t v_minIndexable_2778_, lean_object* v_as_x27_2779_, lean_object* v_b_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_){
_start:
{
if (lean_obj_tag(v_as_x27_2779_) == 0)
{
lean_object* v___x_2786_; 
lean_dec(v_id_2777_);
v___x_2786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2786_, 0, v_b_2780_);
return v___x_2786_;
}
else
{
lean_object* v_head_2787_; lean_object* v_tail_2788_; lean_object* v_toCold_2789_; lean_object* v_currRecDepth_2790_; lean_object* v_ref_2791_; uint8_t v_diag_2792_; uint8_t v_suppressElabErrors_2793_; uint8_t v___x_2794_; uint8_t v___x_2795_; lean_object* v___x_2796_; lean_object* v_ref_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; 
v_head_2787_ = lean_ctor_get(v_as_x27_2779_, 0);
v_tail_2788_ = lean_ctor_get(v_as_x27_2779_, 1);
v_toCold_2789_ = lean_ctor_get(v___y_2783_, 0);
v_currRecDepth_2790_ = lean_ctor_get(v___y_2783_, 1);
v_ref_2791_ = lean_ctor_get(v___y_2783_, 2);
v_diag_2792_ = lean_ctor_get_uint8(v___y_2783_, sizeof(void*)*3);
v_suppressElabErrors_2793_ = lean_ctor_get_uint8(v___y_2783_, sizeof(void*)*3 + 1);
v___x_2794_ = 0;
v___x_2795_ = 1;
v___x_2796_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__8));
v_ref_2797_ = l_Lean_replaceRef(v_p_2776_, v_ref_2791_);
lean_inc(v_currRecDepth_2790_);
lean_inc_ref(v_toCold_2789_);
v___x_2798_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2798_, 0, v_toCold_2789_);
lean_ctor_set(v___x_2798_, 1, v_currRecDepth_2790_);
lean_ctor_set(v___x_2798_, 2, v_ref_2797_);
lean_ctor_set_uint8(v___x_2798_, sizeof(void*)*3, v_diag_2792_);
lean_ctor_set_uint8(v___x_2798_, sizeof(void*)*3 + 1, v_suppressElabErrors_2793_);
lean_inc(v_head_2787_);
lean_inc(v_id_2777_);
v___x_2799_ = l_Lean_Elab_Tactic_addEMatchTheorem(v_b_2780_, v_id_2777_, v_head_2787_, v___x_2796_, v_minIndexable_2778_, v___x_2794_, v___x_2795_, v___y_2781_, v___y_2782_, v___x_2798_, v___y_2784_);
lean_dec_ref_known(v___x_2798_, 3);
if (lean_obj_tag(v___x_2799_) == 0)
{
lean_object* v_a_2800_; 
v_a_2800_ = lean_ctor_get(v___x_2799_, 0);
lean_inc(v_a_2800_);
lean_dec_ref_known(v___x_2799_, 1);
v_as_x27_2779_ = v_tail_2788_;
v_b_2780_ = v_a_2800_;
goto _start;
}
else
{
lean_dec(v_id_2777_);
return v___x_2799_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4___redArg___boxed(lean_object* v_p_2802_, lean_object* v_id_2803_, lean_object* v_minIndexable_2804_, lean_object* v_as_x27_2805_, lean_object* v_b_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_){
_start:
{
uint8_t v_minIndexable_boxed_2812_; lean_object* v_res_2813_; 
v_minIndexable_boxed_2812_ = lean_unbox(v_minIndexable_2804_);
v_res_2813_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4___redArg(v_p_2802_, v_id_2803_, v_minIndexable_boxed_2812_, v_as_x27_2805_, v_b_2806_, v___y_2807_, v___y_2808_, v___y_2809_, v___y_2810_);
lean_dec(v___y_2810_);
lean_dec_ref(v___y_2809_);
lean_dec(v___y_2808_);
lean_dec_ref(v___y_2807_);
lean_dec(v_as_x27_2805_);
lean_dec(v_p_2802_);
return v_res_2813_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__9___redArg(lean_object* v_localDecl_x3f_2814_, lean_object* v_givenName_2815_, lean_object* v_as_2816_, lean_object* v_i_2817_){
_start:
{
lean_object* v_zero_2818_; uint8_t v_isZero_2819_; 
v_zero_2818_ = lean_unsigned_to_nat(0u);
v_isZero_2819_ = lean_nat_dec_eq(v_i_2817_, v_zero_2818_);
if (v_isZero_2819_ == 1)
{
lean_object* v___x_2820_; 
lean_dec(v_i_2817_);
v___x_2820_ = lean_box(0);
return v___x_2820_;
}
else
{
lean_object* v_one_2821_; lean_object* v_n_2822_; lean_object* v___y_2824_; lean_object* v___x_2826_; 
v_one_2821_ = lean_unsigned_to_nat(1u);
v_n_2822_ = lean_nat_sub(v_i_2817_, v_one_2821_);
lean_dec(v_i_2817_);
v___x_2826_ = lean_array_fget_borrowed(v_as_2816_, v_n_2822_);
if (lean_obj_tag(v___x_2826_) == 0)
{
v___y_2824_ = v___x_2826_;
goto v___jp_2823_;
}
else
{
lean_object* v_val_2827_; uint8_t v___x_2828_; 
v_val_2827_ = lean_ctor_get(v___x_2826_, 0);
v___x_2828_ = l_Lean_LocalDecl_isAuxDecl(v_val_2827_);
if (v___x_2828_ == 0)
{
v___y_2824_ = v_localDecl_x3f_2814_;
goto v___jp_2823_;
}
else
{
lean_object* v___x_2829_; uint8_t v___x_2830_; 
v___x_2829_ = l_Lean_LocalDecl_userName(v_val_2827_);
v___x_2830_ = lean_name_eq(v___x_2829_, v_givenName_2815_);
lean_dec(v___x_2829_);
if (v___x_2830_ == 0)
{
v_i_2817_ = v_n_2822_;
goto _start;
}
else
{
v___y_2824_ = v___x_2826_;
goto v___jp_2823_;
}
}
}
v___jp_2823_:
{
if (lean_obj_tag(v___y_2824_) == 0)
{
v_i_2817_ = v_n_2822_;
goto _start;
}
else
{
lean_dec(v_n_2822_);
lean_inc_ref(v___y_2824_);
return v___y_2824_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__9___redArg___boxed(lean_object* v_localDecl_x3f_2832_, lean_object* v_givenName_2833_, lean_object* v_as_2834_, lean_object* v_i_2835_){
_start:
{
lean_object* v_res_2836_; 
v_res_2836_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__9___redArg(v_localDecl_x3f_2832_, v_givenName_2833_, v_as_2834_, v_i_2835_);
lean_dec_ref(v_as_2834_);
lean_dec(v_givenName_2833_);
lean_dec(v_localDecl_x3f_2832_);
return v_res_2836_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__10_spec__12___redArg(lean_object* v_localDecl_x3f_2837_, lean_object* v_givenName_2838_, lean_object* v_as_2839_, lean_object* v_i_2840_){
_start:
{
lean_object* v_zero_2841_; uint8_t v_isZero_2842_; 
v_zero_2841_ = lean_unsigned_to_nat(0u);
v_isZero_2842_ = lean_nat_dec_eq(v_i_2840_, v_zero_2841_);
if (v_isZero_2842_ == 1)
{
lean_object* v___x_2843_; 
lean_dec(v_i_2840_);
v___x_2843_ = lean_box(0);
return v___x_2843_;
}
else
{
lean_object* v_one_2844_; lean_object* v_n_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; 
v_one_2844_ = lean_unsigned_to_nat(1u);
v_n_2845_ = lean_nat_sub(v_i_2840_, v_one_2844_);
lean_dec(v_i_2840_);
v___x_2846_ = lean_array_fget_borrowed(v_as_2839_, v_n_2845_);
v___x_2847_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__10(v_localDecl_x3f_2837_, v_givenName_2838_, v___x_2846_);
if (lean_obj_tag(v___x_2847_) == 0)
{
v_i_2840_ = v_n_2845_;
goto _start;
}
else
{
lean_dec(v_n_2845_);
return v___x_2847_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__10(lean_object* v_localDecl_x3f_2849_, lean_object* v_givenName_2850_, lean_object* v_x_2851_){
_start:
{
if (lean_obj_tag(v_x_2851_) == 0)
{
lean_object* v_cs_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; 
v_cs_2852_ = lean_ctor_get(v_x_2851_, 0);
v___x_2853_ = lean_array_get_size(v_cs_2852_);
v___x_2854_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__10_spec__12___redArg(v_localDecl_x3f_2849_, v_givenName_2850_, v_cs_2852_, v___x_2853_);
return v___x_2854_;
}
else
{
lean_object* v_vs_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; 
v_vs_2855_ = lean_ctor_get(v_x_2851_, 0);
v___x_2856_ = lean_array_get_size(v_vs_2855_);
v___x_2857_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__9___redArg(v_localDecl_x3f_2849_, v_givenName_2850_, v_vs_2855_, v___x_2856_);
return v___x_2857_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__10___boxed(lean_object* v_localDecl_x3f_2858_, lean_object* v_givenName_2859_, lean_object* v_x_2860_){
_start:
{
lean_object* v_res_2861_; 
v_res_2861_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__10(v_localDecl_x3f_2858_, v_givenName_2859_, v_x_2860_);
lean_dec_ref(v_x_2860_);
lean_dec(v_givenName_2859_);
lean_dec(v_localDecl_x3f_2858_);
return v_res_2861_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__10_spec__12___redArg___boxed(lean_object* v_localDecl_x3f_2862_, lean_object* v_givenName_2863_, lean_object* v_as_2864_, lean_object* v_i_2865_){
_start:
{
lean_object* v_res_2866_; 
v_res_2866_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__10_spec__12___redArg(v_localDecl_x3f_2862_, v_givenName_2863_, v_as_2864_, v_i_2865_);
lean_dec_ref(v_as_2864_);
lean_dec(v_givenName_2863_);
lean_dec(v_localDecl_x3f_2862_);
return v_res_2866_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6(lean_object* v_localDecl_x3f_2867_, lean_object* v_givenName_2868_, lean_object* v_t_2869_){
_start:
{
lean_object* v_root_2870_; lean_object* v_tail_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; 
v_root_2870_ = lean_ctor_get(v_t_2869_, 0);
v_tail_2871_ = lean_ctor_get(v_t_2869_, 1);
v___x_2872_ = lean_array_get_size(v_tail_2871_);
v___x_2873_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__9___redArg(v_localDecl_x3f_2867_, v_givenName_2868_, v_tail_2871_, v___x_2872_);
if (lean_obj_tag(v___x_2873_) == 0)
{
lean_object* v___x_2874_; 
v___x_2874_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__10(v_localDecl_x3f_2867_, v_givenName_2868_, v_root_2870_);
return v___x_2874_;
}
else
{
return v___x_2873_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6___boxed(lean_object* v_localDecl_x3f_2875_, lean_object* v_givenName_2876_, lean_object* v_t_2877_){
_start:
{
lean_object* v_res_2878_; 
v_res_2878_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6(v_localDecl_x3f_2875_, v_givenName_2876_, v_t_2877_);
lean_dec_ref(v_t_2877_);
lean_dec(v_givenName_2876_);
lean_dec(v_localDecl_x3f_2875_);
return v_res_2878_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__6___redArg___lam__0(lean_object* v_localDecl_2879_, lean_object* v_givenName_2880_){
_start:
{
lean_object* v___x_2881_; uint8_t v___x_2882_; 
v___x_2881_ = l_Lean_LocalDecl_userName(v_localDecl_2879_);
v___x_2882_ = lean_name_eq(v___x_2881_, v_givenName_2880_);
lean_dec(v___x_2881_);
if (v___x_2882_ == 0)
{
lean_object* v___x_2883_; 
lean_dec_ref(v_localDecl_2879_);
v___x_2883_ = lean_box(0);
return v___x_2883_;
}
else
{
lean_object* v___x_2884_; 
v___x_2884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2884_, 0, v_localDecl_2879_);
return v___x_2884_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__6___redArg___lam__0___boxed(lean_object* v_localDecl_2885_, lean_object* v_givenName_2886_){
_start:
{
lean_object* v_res_2887_; 
v_res_2887_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__6___redArg___lam__0(v_localDecl_2885_, v_givenName_2886_);
lean_dec(v_givenName_2886_);
return v_res_2887_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__6___redArg(lean_object* v_givenName_2888_, uint8_t v_skipAuxDecl_2889_, lean_object* v_auxDeclToFullName_2890_, lean_object* v___x_2891_, lean_object* v_givenNameView_2892_, lean_object* v_as_2893_, lean_object* v_i_2894_){
_start:
{
lean_object* v_zero_2895_; uint8_t v_isZero_2896_; 
v_zero_2895_ = lean_unsigned_to_nat(0u);
v_isZero_2896_ = lean_nat_dec_eq(v_i_2894_, v_zero_2895_);
if (v_isZero_2896_ == 1)
{
lean_object* v___x_2897_; 
lean_dec(v_i_2894_);
lean_dec_ref(v_givenNameView_2892_);
lean_dec(v___x_2891_);
v___x_2897_ = lean_box(0);
return v___x_2897_;
}
else
{
lean_object* v_one_2898_; lean_object* v_n_2899_; lean_object* v___y_2901_; lean_object* v___x_2903_; 
v_one_2898_ = lean_unsigned_to_nat(1u);
v_n_2899_ = lean_nat_sub(v_i_2894_, v_one_2898_);
lean_dec(v_i_2894_);
v___x_2903_ = lean_array_fget_borrowed(v_as_2893_, v_n_2899_);
if (lean_obj_tag(v___x_2903_) == 0)
{
v___y_2901_ = v___x_2903_;
goto v___jp_2900_;
}
else
{
lean_object* v_val_2904_; uint8_t v___x_2905_; 
v_val_2904_ = lean_ctor_get(v___x_2903_, 0);
v___x_2905_ = l_Lean_LocalDecl_isAuxDecl(v_val_2904_);
if (v___x_2905_ == 0)
{
lean_object* v___x_2906_; 
lean_inc(v_val_2904_);
v___x_2906_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__6___redArg___lam__0(v_val_2904_, v_givenName_2888_);
v___y_2901_ = v___x_2906_;
goto v___jp_2900_;
}
else
{
if (v_skipAuxDecl_2889_ == 0)
{
if (v___x_2905_ == 0)
{
v_i_2894_ = v_n_2899_;
goto _start;
}
else
{
lean_object* v___x_2908_; lean_object* v___x_2909_; 
v___x_2908_ = l_Lean_LocalDecl_fvarId(v_val_2904_);
v___x_2909_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v_auxDeclToFullName_2890_, v___x_2908_);
lean_dec(v___x_2908_);
if (lean_obj_tag(v___x_2909_) == 1)
{
lean_object* v_val_2910_; lean_object* v_fullDeclView_2911_; lean_object* v___y_2913_; lean_object* v_name_2934_; lean_object* v___x_2935_; 
v_val_2910_ = lean_ctor_get(v___x_2909_, 0);
lean_inc(v_val_2910_);
lean_dec_ref_known(v___x_2909_, 1);
v_fullDeclView_2911_ = l_Lean_extractMacroScopes(v_val_2910_);
v_name_2934_ = lean_ctor_get(v_fullDeclView_2911_, 0);
lean_inc_n(v_name_2934_, 2);
v___x_2935_ = l_Lean_privateToUserName_x3f(v_name_2934_);
if (lean_obj_tag(v___x_2935_) == 0)
{
v___y_2913_ = v_name_2934_;
goto v___jp_2912_;
}
else
{
lean_object* v_val_2936_; 
lean_dec(v_name_2934_);
v_val_2936_ = lean_ctor_get(v___x_2935_, 0);
lean_inc(v_val_2936_);
lean_dec_ref_known(v___x_2935_, 1);
v___y_2913_ = v_val_2936_;
goto v___jp_2912_;
}
v___jp_2912_:
{
lean_object* v_imported_2914_; lean_object* v_ctx_2915_; lean_object* v_scopes_2916_; lean_object* v___x_2918_; uint8_t v_isShared_2919_; uint8_t v_isSharedCheck_2932_; 
v_imported_2914_ = lean_ctor_get(v_fullDeclView_2911_, 1);
v_ctx_2915_ = lean_ctor_get(v_fullDeclView_2911_, 2);
v_scopes_2916_ = lean_ctor_get(v_fullDeclView_2911_, 3);
v_isSharedCheck_2932_ = !lean_is_exclusive(v_fullDeclView_2911_);
if (v_isSharedCheck_2932_ == 0)
{
lean_object* v_unused_2933_; 
v_unused_2933_ = lean_ctor_get(v_fullDeclView_2911_, 0);
lean_dec(v_unused_2933_);
v___x_2918_ = v_fullDeclView_2911_;
v_isShared_2919_ = v_isSharedCheck_2932_;
goto v_resetjp_2917_;
}
else
{
lean_inc(v_scopes_2916_);
lean_inc(v_ctx_2915_);
lean_inc(v_imported_2914_);
lean_dec(v_fullDeclView_2911_);
v___x_2918_ = lean_box(0);
v_isShared_2919_ = v_isSharedCheck_2932_;
goto v_resetjp_2917_;
}
v_resetjp_2917_:
{
lean_object* v_fullDeclView_2921_; 
if (v_isShared_2919_ == 0)
{
lean_ctor_set(v___x_2918_, 0, v___y_2913_);
v_fullDeclView_2921_ = v___x_2918_;
goto v_reusejp_2920_;
}
else
{
lean_object* v_reuseFailAlloc_2931_; 
v_reuseFailAlloc_2931_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2931_, 0, v___y_2913_);
lean_ctor_set(v_reuseFailAlloc_2931_, 1, v_imported_2914_);
lean_ctor_set(v_reuseFailAlloc_2931_, 2, v_ctx_2915_);
lean_ctor_set(v_reuseFailAlloc_2931_, 3, v_scopes_2916_);
v_fullDeclView_2921_ = v_reuseFailAlloc_2931_;
goto v_reusejp_2920_;
}
v_reusejp_2920_:
{
lean_object* v_fullDeclName_2922_; uint8_t v___x_2923_; 
lean_inc_ref(v_fullDeclView_2921_);
v_fullDeclName_2922_ = l_Lean_MacroScopesView_review(v_fullDeclView_2921_);
v___x_2923_ = l_Lean_Name_isPrefixOf(v___x_2891_, v_fullDeclName_2922_);
if (v___x_2923_ == 0)
{
lean_object* v___x_2924_; 
lean_dec_ref(v_fullDeclView_2921_);
lean_inc(v___x_2891_);
lean_inc_ref(v_givenNameView_2892_);
lean_inc(v_val_2904_);
v___x_2924_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(v_val_2904_, v_givenNameView_2892_, v_fullDeclName_2922_, v___x_2891_);
lean_dec(v_fullDeclName_2922_);
v___y_2901_ = v___x_2924_;
goto v___jp_2900_;
}
else
{
lean_object* v___x_2925_; lean_object* v_localDeclNameView_2926_; uint8_t v___x_2927_; 
lean_dec(v_fullDeclName_2922_);
v___x_2925_ = l_Lean_LocalDecl_userName(v_val_2904_);
v_localDeclNameView_2926_ = l_Lean_extractMacroScopes(v___x_2925_);
v___x_2927_ = l_Lean_MacroScopesView_isSuffixOf(v_localDeclNameView_2926_, v_givenNameView_2892_);
lean_dec_ref(v_localDeclNameView_2926_);
if (v___x_2927_ == 0)
{
lean_dec_ref(v_fullDeclView_2921_);
v_i_2894_ = v_n_2899_;
goto _start;
}
else
{
uint8_t v___x_2929_; 
v___x_2929_ = l_Lean_MacroScopesView_isSuffixOf(v_givenNameView_2892_, v_fullDeclView_2921_);
lean_dec_ref(v_fullDeclView_2921_);
if (v___x_2929_ == 0)
{
v_i_2894_ = v_n_2899_;
goto _start;
}
else
{
lean_inc_ref(v___x_2903_);
v___y_2901_ = v___x_2903_;
goto v___jp_2900_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2937_; 
lean_dec(v___x_2909_);
lean_inc(v_val_2904_);
v___x_2937_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__6___redArg___lam__0(v_val_2904_, v_givenName_2888_);
v___y_2901_ = v___x_2937_;
goto v___jp_2900_;
}
}
}
else
{
v_i_2894_ = v_n_2899_;
goto _start;
}
}
}
v___jp_2900_:
{
if (lean_obj_tag(v___y_2901_) == 0)
{
v_i_2894_ = v_n_2899_;
goto _start;
}
else
{
lean_dec(v_n_2899_);
lean_dec_ref(v_givenNameView_2892_);
lean_dec(v___x_2891_);
return v___y_2901_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__6___redArg___boxed(lean_object* v_givenName_2939_, lean_object* v_skipAuxDecl_2940_, lean_object* v_auxDeclToFullName_2941_, lean_object* v___x_2942_, lean_object* v_givenNameView_2943_, lean_object* v_as_2944_, lean_object* v_i_2945_){
_start:
{
uint8_t v_skipAuxDecl_boxed_2946_; lean_object* v_res_2947_; 
v_skipAuxDecl_boxed_2946_ = lean_unbox(v_skipAuxDecl_2940_);
v_res_2947_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__6___redArg(v_givenName_2939_, v_skipAuxDecl_boxed_2946_, v_auxDeclToFullName_2941_, v___x_2942_, v_givenNameView_2943_, v_as_2944_, v_i_2945_);
lean_dec_ref(v_as_2944_);
lean_dec(v_auxDeclToFullName_2941_);
lean_dec(v_givenName_2939_);
return v_res_2947_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__7_spec__8___redArg(lean_object* v_givenName_2948_, uint8_t v_skipAuxDecl_2949_, lean_object* v_auxDeclToFullName_2950_, lean_object* v___x_2951_, lean_object* v_givenNameView_2952_, lean_object* v_as_2953_, lean_object* v_i_2954_){
_start:
{
lean_object* v_zero_2955_; uint8_t v_isZero_2956_; 
v_zero_2955_ = lean_unsigned_to_nat(0u);
v_isZero_2956_ = lean_nat_dec_eq(v_i_2954_, v_zero_2955_);
if (v_isZero_2956_ == 1)
{
lean_object* v___x_2957_; 
lean_dec(v_i_2954_);
lean_dec_ref(v_givenNameView_2952_);
lean_dec(v___x_2951_);
v___x_2957_ = lean_box(0);
return v___x_2957_;
}
else
{
lean_object* v_one_2958_; lean_object* v_n_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; 
v_one_2958_ = lean_unsigned_to_nat(1u);
v_n_2959_ = lean_nat_sub(v_i_2954_, v_one_2958_);
lean_dec(v_i_2954_);
v___x_2960_ = lean_array_fget_borrowed(v_as_2953_, v_n_2959_);
lean_inc_ref(v_givenNameView_2952_);
lean_inc(v___x_2951_);
v___x_2961_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__7(v_givenName_2948_, v_skipAuxDecl_2949_, v_auxDeclToFullName_2950_, v___x_2951_, v_givenNameView_2952_, v___x_2960_);
if (lean_obj_tag(v___x_2961_) == 0)
{
v_i_2954_ = v_n_2959_;
goto _start;
}
else
{
lean_dec(v_n_2959_);
lean_dec_ref(v_givenNameView_2952_);
lean_dec(v___x_2951_);
return v___x_2961_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__7(lean_object* v_givenName_2963_, uint8_t v_skipAuxDecl_2964_, lean_object* v_auxDeclToFullName_2965_, lean_object* v___x_2966_, lean_object* v_givenNameView_2967_, lean_object* v_x_2968_){
_start:
{
if (lean_obj_tag(v_x_2968_) == 0)
{
lean_object* v_cs_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; 
v_cs_2969_ = lean_ctor_get(v_x_2968_, 0);
v___x_2970_ = lean_array_get_size(v_cs_2969_);
v___x_2971_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__7_spec__8___redArg(v_givenName_2963_, v_skipAuxDecl_2964_, v_auxDeclToFullName_2965_, v___x_2966_, v_givenNameView_2967_, v_cs_2969_, v___x_2970_);
return v___x_2971_;
}
else
{
lean_object* v_vs_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; 
v_vs_2972_ = lean_ctor_get(v_x_2968_, 0);
v___x_2973_ = lean_array_get_size(v_vs_2972_);
v___x_2974_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__6___redArg(v_givenName_2963_, v_skipAuxDecl_2964_, v_auxDeclToFullName_2965_, v___x_2966_, v_givenNameView_2967_, v_vs_2972_, v___x_2973_);
return v___x_2974_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__7___boxed(lean_object* v_givenName_2975_, lean_object* v_skipAuxDecl_2976_, lean_object* v_auxDeclToFullName_2977_, lean_object* v___x_2978_, lean_object* v_givenNameView_2979_, lean_object* v_x_2980_){
_start:
{
uint8_t v_skipAuxDecl_boxed_2981_; lean_object* v_res_2982_; 
v_skipAuxDecl_boxed_2981_ = lean_unbox(v_skipAuxDecl_2976_);
v_res_2982_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__7(v_givenName_2975_, v_skipAuxDecl_boxed_2981_, v_auxDeclToFullName_2977_, v___x_2978_, v_givenNameView_2979_, v_x_2980_);
lean_dec_ref(v_x_2980_);
lean_dec(v_auxDeclToFullName_2977_);
lean_dec(v_givenName_2975_);
return v_res_2982_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__7_spec__8___redArg___boxed(lean_object* v_givenName_2983_, lean_object* v_skipAuxDecl_2984_, lean_object* v_auxDeclToFullName_2985_, lean_object* v___x_2986_, lean_object* v_givenNameView_2987_, lean_object* v_as_2988_, lean_object* v_i_2989_){
_start:
{
uint8_t v_skipAuxDecl_boxed_2990_; lean_object* v_res_2991_; 
v_skipAuxDecl_boxed_2990_ = lean_unbox(v_skipAuxDecl_2984_);
v_res_2991_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__7_spec__8___redArg(v_givenName_2983_, v_skipAuxDecl_boxed_2990_, v_auxDeclToFullName_2985_, v___x_2986_, v_givenNameView_2987_, v_as_2988_, v_i_2989_);
lean_dec_ref(v_as_2988_);
lean_dec(v_auxDeclToFullName_2985_);
lean_dec(v_givenName_2983_);
return v_res_2991_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5(lean_object* v_givenName_2992_, uint8_t v_skipAuxDecl_2993_, lean_object* v_auxDeclToFullName_2994_, lean_object* v___x_2995_, lean_object* v_givenNameView_2996_, lean_object* v_t_2997_){
_start:
{
lean_object* v_root_2998_; lean_object* v_tail_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; 
v_root_2998_ = lean_ctor_get(v_t_2997_, 0);
v_tail_2999_ = lean_ctor_get(v_t_2997_, 1);
v___x_3000_ = lean_array_get_size(v_tail_2999_);
lean_inc_ref(v_givenNameView_2996_);
lean_inc(v___x_2995_);
v___x_3001_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__6___redArg(v_givenName_2992_, v_skipAuxDecl_2993_, v_auxDeclToFullName_2994_, v___x_2995_, v_givenNameView_2996_, v_tail_2999_, v___x_3000_);
if (lean_obj_tag(v___x_3001_) == 0)
{
lean_object* v___x_3002_; 
v___x_3002_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__7(v_givenName_2992_, v_skipAuxDecl_2993_, v_auxDeclToFullName_2994_, v___x_2995_, v_givenNameView_2996_, v_root_2998_);
return v___x_3002_;
}
else
{
lean_dec_ref(v_givenNameView_2996_);
lean_dec(v___x_2995_);
return v___x_3001_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5___boxed(lean_object* v_givenName_3003_, lean_object* v_skipAuxDecl_3004_, lean_object* v_auxDeclToFullName_3005_, lean_object* v___x_3006_, lean_object* v_givenNameView_3007_, lean_object* v_t_3008_){
_start:
{
uint8_t v_skipAuxDecl_boxed_3009_; lean_object* v_res_3010_; 
v_skipAuxDecl_boxed_3009_ = lean_unbox(v_skipAuxDecl_3004_);
v_res_3010_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5(v_givenName_3003_, v_skipAuxDecl_boxed_3009_, v_auxDeclToFullName_3005_, v___x_3006_, v_givenNameView_3007_, v_t_3008_);
lean_dec_ref(v_t_3008_);
lean_dec(v_auxDeclToFullName_3005_);
lean_dec(v_givenName_3003_);
return v_res_3010_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5___lam__0(lean_object* v_auxDeclToFullName_3011_, lean_object* v_currNamespace_3012_, lean_object* v_decls_3013_, lean_object* v_givenNameView_3014_, uint8_t v_skipAuxDecl_3015_){
_start:
{
lean_object* v_givenName_3016_; lean_object* v_localDecl_x3f_3017_; 
lean_inc_ref(v_givenNameView_3014_);
v_givenName_3016_ = l_Lean_MacroScopesView_review(v_givenNameView_3014_);
v_localDecl_x3f_3017_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5(v_givenName_3016_, v_skipAuxDecl_3015_, v_auxDeclToFullName_3011_, v_currNamespace_3012_, v_givenNameView_3014_, v_decls_3013_);
if (lean_obj_tag(v_localDecl_x3f_3017_) == 0)
{
if (v_skipAuxDecl_3015_ == 0)
{
lean_object* v___x_3018_; 
v___x_3018_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6(v_localDecl_x3f_3017_, v_givenName_3016_, v_decls_3013_);
lean_dec(v_givenName_3016_);
return v___x_3018_;
}
else
{
lean_dec(v_givenName_3016_);
return v_localDecl_x3f_3017_;
}
}
else
{
lean_dec(v_givenName_3016_);
return v_localDecl_x3f_3017_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5___lam__0___boxed(lean_object* v_auxDeclToFullName_3019_, lean_object* v_currNamespace_3020_, lean_object* v_decls_3021_, lean_object* v_givenNameView_3022_, lean_object* v_skipAuxDecl_3023_){
_start:
{
uint8_t v_skipAuxDecl_boxed_3024_; lean_object* v_res_3025_; 
v_skipAuxDecl_boxed_3024_ = lean_unbox(v_skipAuxDecl_3023_);
v_res_3025_ = l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5___lam__0(v_auxDeclToFullName_3019_, v_currNamespace_3020_, v_decls_3021_, v_givenNameView_3022_, v_skipAuxDecl_boxed_3024_);
lean_dec_ref(v_decls_3021_);
lean_dec(v_auxDeclToFullName_3019_);
return v_res_3025_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__18_spec__20_spec__21___redArg(lean_object* v_ref_3026_, lean_object* v_msgData_3027_, uint8_t v_severity_3028_, uint8_t v_isSilent_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_){
_start:
{
uint8_t v___y_3036_; lean_object* v___y_3037_; uint8_t v___y_3038_; lean_object* v___y_3039_; lean_object* v___y_3040_; lean_object* v___y_3041_; lean_object* v___y_3042_; lean_object* v_currNamespace_3043_; lean_object* v_openDecls_3044_; lean_object* v___y_3045_; lean_object* v___y_3071_; lean_object* v___y_3072_; lean_object* v___y_3073_; lean_object* v___y_3074_; lean_object* v___y_3075_; uint8_t v___y_3076_; uint8_t v___y_3077_; uint8_t v___y_3078_; lean_object* v___y_3079_; lean_object* v___y_3080_; lean_object* v___y_3098_; lean_object* v___y_3099_; lean_object* v___y_3100_; lean_object* v___y_3101_; lean_object* v___y_3102_; uint8_t v___y_3103_; uint8_t v___y_3104_; uint8_t v___y_3105_; lean_object* v___y_3106_; lean_object* v___y_3107_; lean_object* v___y_3111_; lean_object* v___y_3112_; lean_object* v___y_3113_; lean_object* v___y_3114_; lean_object* v___y_3115_; uint8_t v___y_3116_; uint8_t v___y_3117_; lean_object* v___y_3118_; uint8_t v___y_3119_; uint8_t v___x_3124_; lean_object* v___y_3126_; lean_object* v___y_3127_; lean_object* v___y_3128_; lean_object* v___y_3129_; lean_object* v___y_3130_; lean_object* v___y_3131_; uint8_t v___y_3132_; uint8_t v___y_3133_; uint8_t v___y_3134_; uint8_t v___y_3136_; uint8_t v___x_3154_; 
v___x_3124_ = 2;
v___x_3154_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3028_, v___x_3124_);
if (v___x_3154_ == 0)
{
v___y_3136_ = v___x_3154_;
goto v___jp_3135_;
}
else
{
uint8_t v___x_3155_; 
lean_inc_ref(v_msgData_3027_);
v___x_3155_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_3027_);
v___y_3136_ = v___x_3155_;
goto v___jp_3135_;
}
v___jp_3035_:
{
lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v_env_3050_; lean_object* v_nextMacroScope_3051_; lean_object* v_ngen_3052_; lean_object* v_auxDeclNGen_3053_; lean_object* v_traceState_3054_; lean_object* v_cache_3055_; lean_object* v_messages_3056_; lean_object* v_infoState_3057_; lean_object* v_snapshotTasks_3058_; lean_object* v___x_3060_; uint8_t v_isShared_3061_; uint8_t v_isSharedCheck_3069_; 
lean_inc(v_openDecls_3044_);
lean_inc(v_currNamespace_3043_);
v___x_3046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3046_, 0, v_currNamespace_3043_);
lean_ctor_set(v___x_3046_, 1, v_openDecls_3044_);
v___x_3047_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3047_, 0, v___x_3046_);
lean_ctor_set(v___x_3047_, 1, v___y_3040_);
lean_inc_ref(v___y_3042_);
lean_inc_ref(v___y_3039_);
v___x_3048_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_3048_, 0, v___y_3039_);
lean_ctor_set(v___x_3048_, 1, v___y_3041_);
lean_ctor_set(v___x_3048_, 2, v___y_3037_);
lean_ctor_set(v___x_3048_, 3, v___y_3042_);
lean_ctor_set(v___x_3048_, 4, v___x_3047_);
lean_ctor_set_uint8(v___x_3048_, sizeof(void*)*5, v___y_3036_);
lean_ctor_set_uint8(v___x_3048_, sizeof(void*)*5 + 1, v___y_3038_);
lean_ctor_set_uint8(v___x_3048_, sizeof(void*)*5 + 2, v_isSilent_3029_);
v___x_3049_ = lean_st_ref_take(v___y_3045_);
v_env_3050_ = lean_ctor_get(v___x_3049_, 0);
v_nextMacroScope_3051_ = lean_ctor_get(v___x_3049_, 1);
v_ngen_3052_ = lean_ctor_get(v___x_3049_, 2);
v_auxDeclNGen_3053_ = lean_ctor_get(v___x_3049_, 3);
v_traceState_3054_ = lean_ctor_get(v___x_3049_, 4);
v_cache_3055_ = lean_ctor_get(v___x_3049_, 5);
v_messages_3056_ = lean_ctor_get(v___x_3049_, 6);
v_infoState_3057_ = lean_ctor_get(v___x_3049_, 7);
v_snapshotTasks_3058_ = lean_ctor_get(v___x_3049_, 8);
v_isSharedCheck_3069_ = !lean_is_exclusive(v___x_3049_);
if (v_isSharedCheck_3069_ == 0)
{
v___x_3060_ = v___x_3049_;
v_isShared_3061_ = v_isSharedCheck_3069_;
goto v_resetjp_3059_;
}
else
{
lean_inc(v_snapshotTasks_3058_);
lean_inc(v_infoState_3057_);
lean_inc(v_messages_3056_);
lean_inc(v_cache_3055_);
lean_inc(v_traceState_3054_);
lean_inc(v_auxDeclNGen_3053_);
lean_inc(v_ngen_3052_);
lean_inc(v_nextMacroScope_3051_);
lean_inc(v_env_3050_);
lean_dec(v___x_3049_);
v___x_3060_ = lean_box(0);
v_isShared_3061_ = v_isSharedCheck_3069_;
goto v_resetjp_3059_;
}
v_resetjp_3059_:
{
lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3065_; 
v___x_3062_ = lean_box(0);
v___x_3063_ = l_Lean_MessageLog_add(v___x_3048_, v_messages_3056_);
if (v_isShared_3061_ == 0)
{
lean_ctor_set(v___x_3060_, 6, v___x_3063_);
v___x_3065_ = v___x_3060_;
goto v_reusejp_3064_;
}
else
{
lean_object* v_reuseFailAlloc_3068_; 
v_reuseFailAlloc_3068_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3068_, 0, v_env_3050_);
lean_ctor_set(v_reuseFailAlloc_3068_, 1, v_nextMacroScope_3051_);
lean_ctor_set(v_reuseFailAlloc_3068_, 2, v_ngen_3052_);
lean_ctor_set(v_reuseFailAlloc_3068_, 3, v_auxDeclNGen_3053_);
lean_ctor_set(v_reuseFailAlloc_3068_, 4, v_traceState_3054_);
lean_ctor_set(v_reuseFailAlloc_3068_, 5, v_cache_3055_);
lean_ctor_set(v_reuseFailAlloc_3068_, 6, v___x_3063_);
lean_ctor_set(v_reuseFailAlloc_3068_, 7, v_infoState_3057_);
lean_ctor_set(v_reuseFailAlloc_3068_, 8, v_snapshotTasks_3058_);
v___x_3065_ = v_reuseFailAlloc_3068_;
goto v_reusejp_3064_;
}
v_reusejp_3064_:
{
lean_object* v___x_3066_; lean_object* v___x_3067_; 
v___x_3066_ = lean_st_ref_put(v___y_3045_, v___x_3065_);
v___x_3067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3067_, 0, v___x_3062_);
return v___x_3067_;
}
}
}
v___jp_3070_:
{
lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v_a_3083_; lean_object* v___x_3085_; uint8_t v_isShared_3086_; uint8_t v_isSharedCheck_3096_; 
v___x_3081_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_3027_);
v___x_3082_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__4(v___x_3081_, v___y_3030_, v___y_3031_, v___y_3032_, v___y_3033_);
v_a_3083_ = lean_ctor_get(v___x_3082_, 0);
v_isSharedCheck_3096_ = !lean_is_exclusive(v___x_3082_);
if (v_isSharedCheck_3096_ == 0)
{
v___x_3085_ = v___x_3082_;
v_isShared_3086_ = v_isSharedCheck_3096_;
goto v_resetjp_3084_;
}
else
{
lean_inc(v_a_3083_);
lean_dec(v___x_3082_);
v___x_3085_ = lean_box(0);
v_isShared_3086_ = v_isSharedCheck_3096_;
goto v_resetjp_3084_;
}
v_resetjp_3084_:
{
lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; 
lean_inc_ref_n(v___y_3075_, 2);
v___x_3087_ = l_Lean_FileMap_toPosition(v___y_3075_, v___y_3074_);
lean_dec(v___y_3074_);
v___x_3088_ = l_Lean_FileMap_toPosition(v___y_3075_, v___y_3080_);
lean_dec(v___y_3080_);
v___x_3089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3089_, 0, v___x_3088_);
v___x_3090_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___closed__0));
if (v___y_3076_ == 0)
{
lean_del_object(v___x_3085_);
lean_dec_ref(v___y_3073_);
v___y_3036_ = v___y_3077_;
v___y_3037_ = v___x_3089_;
v___y_3038_ = v___y_3078_;
v___y_3039_ = v___y_3079_;
v___y_3040_ = v_a_3083_;
v___y_3041_ = v___x_3087_;
v___y_3042_ = v___x_3090_;
v_currNamespace_3043_ = v___y_3072_;
v_openDecls_3044_ = v___y_3071_;
v___y_3045_ = v___y_3033_;
goto v___jp_3035_;
}
else
{
uint8_t v___x_3091_; 
lean_inc(v_a_3083_);
v___x_3091_ = l_Lean_MessageData_hasTag(v___y_3073_, v_a_3083_);
if (v___x_3091_ == 0)
{
lean_object* v___x_3092_; lean_object* v___x_3094_; 
lean_dec_ref_known(v___x_3089_, 1);
lean_dec_ref(v___x_3087_);
lean_dec(v_a_3083_);
v___x_3092_ = lean_box(0);
if (v_isShared_3086_ == 0)
{
lean_ctor_set(v___x_3085_, 0, v___x_3092_);
v___x_3094_ = v___x_3085_;
goto v_reusejp_3093_;
}
else
{
lean_object* v_reuseFailAlloc_3095_; 
v_reuseFailAlloc_3095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3095_, 0, v___x_3092_);
v___x_3094_ = v_reuseFailAlloc_3095_;
goto v_reusejp_3093_;
}
v_reusejp_3093_:
{
return v___x_3094_;
}
}
else
{
lean_del_object(v___x_3085_);
v___y_3036_ = v___y_3077_;
v___y_3037_ = v___x_3089_;
v___y_3038_ = v___y_3078_;
v___y_3039_ = v___y_3079_;
v___y_3040_ = v_a_3083_;
v___y_3041_ = v___x_3087_;
v___y_3042_ = v___x_3090_;
v_currNamespace_3043_ = v___y_3072_;
v_openDecls_3044_ = v___y_3071_;
v___y_3045_ = v___y_3033_;
goto v___jp_3035_;
}
}
}
}
v___jp_3097_:
{
lean_object* v___x_3108_; 
v___x_3108_ = l_Lean_Syntax_getTailPos_x3f(v___y_3101_, v___y_3104_);
lean_dec(v___y_3101_);
if (lean_obj_tag(v___x_3108_) == 0)
{
lean_inc(v___y_3107_);
v___y_3071_ = v___y_3098_;
v___y_3072_ = v___y_3099_;
v___y_3073_ = v___y_3100_;
v___y_3074_ = v___y_3107_;
v___y_3075_ = v___y_3102_;
v___y_3076_ = v___y_3103_;
v___y_3077_ = v___y_3104_;
v___y_3078_ = v___y_3105_;
v___y_3079_ = v___y_3106_;
v___y_3080_ = v___y_3107_;
goto v___jp_3070_;
}
else
{
lean_object* v_val_3109_; 
v_val_3109_ = lean_ctor_get(v___x_3108_, 0);
lean_inc(v_val_3109_);
lean_dec_ref_known(v___x_3108_, 1);
v___y_3071_ = v___y_3098_;
v___y_3072_ = v___y_3099_;
v___y_3073_ = v___y_3100_;
v___y_3074_ = v___y_3107_;
v___y_3075_ = v___y_3102_;
v___y_3076_ = v___y_3103_;
v___y_3077_ = v___y_3104_;
v___y_3078_ = v___y_3105_;
v___y_3079_ = v___y_3106_;
v___y_3080_ = v_val_3109_;
goto v___jp_3070_;
}
}
v___jp_3110_:
{
lean_object* v_ref_3120_; lean_object* v___x_3121_; 
v_ref_3120_ = l_Lean_replaceRef(v_ref_3026_, v___y_3115_);
v___x_3121_ = l_Lean_Syntax_getPos_x3f(v_ref_3120_, v___y_3117_);
if (lean_obj_tag(v___x_3121_) == 0)
{
lean_object* v___x_3122_; 
v___x_3122_ = lean_unsigned_to_nat(0u);
v___y_3098_ = v___y_3111_;
v___y_3099_ = v___y_3112_;
v___y_3100_ = v___y_3113_;
v___y_3101_ = v_ref_3120_;
v___y_3102_ = v___y_3114_;
v___y_3103_ = v___y_3116_;
v___y_3104_ = v___y_3117_;
v___y_3105_ = v___y_3119_;
v___y_3106_ = v___y_3118_;
v___y_3107_ = v___x_3122_;
goto v___jp_3097_;
}
else
{
lean_object* v_val_3123_; 
v_val_3123_ = lean_ctor_get(v___x_3121_, 0);
lean_inc(v_val_3123_);
lean_dec_ref_known(v___x_3121_, 1);
v___y_3098_ = v___y_3111_;
v___y_3099_ = v___y_3112_;
v___y_3100_ = v___y_3113_;
v___y_3101_ = v_ref_3120_;
v___y_3102_ = v___y_3114_;
v___y_3103_ = v___y_3116_;
v___y_3104_ = v___y_3117_;
v___y_3105_ = v___y_3119_;
v___y_3106_ = v___y_3118_;
v___y_3107_ = v_val_3123_;
goto v___jp_3097_;
}
}
v___jp_3125_:
{
if (v___y_3134_ == 0)
{
v___y_3111_ = v___y_3126_;
v___y_3112_ = v___y_3129_;
v___y_3113_ = v___y_3130_;
v___y_3114_ = v___y_3127_;
v___y_3115_ = v___y_3131_;
v___y_3116_ = v___y_3132_;
v___y_3117_ = v___y_3133_;
v___y_3118_ = v___y_3128_;
v___y_3119_ = v_severity_3028_;
goto v___jp_3110_;
}
else
{
v___y_3111_ = v___y_3126_;
v___y_3112_ = v___y_3129_;
v___y_3113_ = v___y_3130_;
v___y_3114_ = v___y_3127_;
v___y_3115_ = v___y_3131_;
v___y_3116_ = v___y_3132_;
v___y_3117_ = v___y_3133_;
v___y_3118_ = v___y_3128_;
v___y_3119_ = v___x_3124_;
goto v___jp_3110_;
}
}
v___jp_3135_:
{
if (v___y_3136_ == 0)
{
lean_object* v_toCold_3137_; lean_object* v_ref_3138_; uint8_t v_suppressElabErrors_3139_; lean_object* v_fileName_3140_; lean_object* v_fileMap_3141_; lean_object* v_options_3142_; lean_object* v_currNamespace_3143_; lean_object* v_openDecls_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___f_3147_; uint8_t v___x_3148_; uint8_t v___x_3149_; 
v_toCold_3137_ = lean_ctor_get(v___y_3032_, 0);
v_ref_3138_ = lean_ctor_get(v___y_3032_, 2);
v_suppressElabErrors_3139_ = lean_ctor_get_uint8(v___y_3032_, sizeof(void*)*3 + 1);
v_fileName_3140_ = lean_ctor_get(v_toCold_3137_, 0);
v_fileMap_3141_ = lean_ctor_get(v_toCold_3137_, 1);
v_options_3142_ = lean_ctor_get(v_toCold_3137_, 2);
v_currNamespace_3143_ = lean_ctor_get(v_toCold_3137_, 4);
v_openDecls_3144_ = lean_ctor_get(v_toCold_3137_, 5);
v___x_3145_ = lean_box(v_suppressElabErrors_3139_);
v___x_3146_ = lean_box(v___y_3136_);
v___f_3147_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3147_, 0, v___x_3145_);
lean_closure_set(v___f_3147_, 1, v___x_3146_);
v___x_3148_ = 1;
v___x_3149_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3028_, v___x_3148_);
if (v___x_3149_ == 0)
{
v___y_3126_ = v_openDecls_3144_;
v___y_3127_ = v_fileMap_3141_;
v___y_3128_ = v_fileName_3140_;
v___y_3129_ = v_currNamespace_3143_;
v___y_3130_ = v___f_3147_;
v___y_3131_ = v_ref_3138_;
v___y_3132_ = v_suppressElabErrors_3139_;
v___y_3133_ = v___y_3136_;
v___y_3134_ = v___x_3149_;
goto v___jp_3125_;
}
else
{
lean_object* v___x_3150_; uint8_t v___x_3151_; 
v___x_3150_ = l_Lean_warningAsError;
v___x_3151_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5(v_options_3142_, v___x_3150_);
v___y_3126_ = v_openDecls_3144_;
v___y_3127_ = v_fileMap_3141_;
v___y_3128_ = v_fileName_3140_;
v___y_3129_ = v_currNamespace_3143_;
v___y_3130_ = v___f_3147_;
v___y_3131_ = v_ref_3138_;
v___y_3132_ = v_suppressElabErrors_3139_;
v___y_3133_ = v___y_3136_;
v___y_3134_ = v___x_3151_;
goto v___jp_3125_;
}
}
else
{
lean_object* v___x_3152_; lean_object* v___x_3153_; 
lean_dec_ref(v_msgData_3027_);
v___x_3152_ = lean_box(0);
v___x_3153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3153_, 0, v___x_3152_);
return v___x_3153_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__18_spec__20_spec__21___redArg___boxed(lean_object* v_ref_3156_, lean_object* v_msgData_3157_, lean_object* v_severity_3158_, lean_object* v_isSilent_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_){
_start:
{
uint8_t v_severity_boxed_3165_; uint8_t v_isSilent_boxed_3166_; lean_object* v_res_3167_; 
v_severity_boxed_3165_ = lean_unbox(v_severity_3158_);
v_isSilent_boxed_3166_ = lean_unbox(v_isSilent_3159_);
v_res_3167_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__18_spec__20_spec__21___redArg(v_ref_3156_, v_msgData_3157_, v_severity_boxed_3165_, v_isSilent_boxed_3166_, v___y_3160_, v___y_3161_, v___y_3162_, v___y_3163_);
lean_dec(v___y_3163_);
lean_dec_ref(v___y_3162_);
lean_dec(v___y_3161_);
lean_dec_ref(v___y_3160_);
lean_dec(v_ref_3156_);
return v_res_3167_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__18_spec__20(lean_object* v_msgData_3168_, uint8_t v_severity_3169_, uint8_t v_isSilent_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_, lean_object* v___y_3173_, lean_object* v___y_3174_, lean_object* v___y_3175_, lean_object* v___y_3176_){
_start:
{
lean_object* v_ref_3178_; lean_object* v___x_3179_; 
v_ref_3178_ = lean_ctor_get(v___y_3175_, 2);
v___x_3179_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__18_spec__20_spec__21___redArg(v_ref_3178_, v_msgData_3168_, v_severity_3169_, v_isSilent_3170_, v___y_3173_, v___y_3174_, v___y_3175_, v___y_3176_);
return v___x_3179_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__18_spec__20___boxed(lean_object* v_msgData_3180_, lean_object* v_severity_3181_, lean_object* v_isSilent_3182_, lean_object* v___y_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_){
_start:
{
uint8_t v_severity_boxed_3190_; uint8_t v_isSilent_boxed_3191_; lean_object* v_res_3192_; 
v_severity_boxed_3190_ = lean_unbox(v_severity_3181_);
v_isSilent_boxed_3191_ = lean_unbox(v_isSilent_3182_);
v_res_3192_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__18_spec__20(v_msgData_3180_, v_severity_boxed_3190_, v_isSilent_boxed_3191_, v___y_3183_, v___y_3184_, v___y_3185_, v___y_3186_, v___y_3187_, v___y_3188_);
lean_dec(v___y_3188_);
lean_dec_ref(v___y_3187_);
lean_dec(v___y_3186_);
lean_dec_ref(v___y_3185_);
lean_dec(v___y_3184_);
lean_dec_ref(v___y_3183_);
return v_res_3192_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__18(lean_object* v_msgData_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_, lean_object* v___y_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_, lean_object* v___y_3199_){
_start:
{
uint8_t v___x_3201_; uint8_t v___x_3202_; lean_object* v___x_3203_; 
v___x_3201_ = 1;
v___x_3202_ = 0;
v___x_3203_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__18_spec__20(v_msgData_3193_, v___x_3201_, v___x_3202_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_, v___y_3199_);
return v___x_3203_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__18___boxed(lean_object* v_msgData_3204_, lean_object* v___y_3205_, lean_object* v___y_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_){
_start:
{
lean_object* v_res_3212_; 
v_res_3212_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__18(v_msgData_3204_, v___y_3205_, v___y_3206_, v___y_3207_, v___y_3208_, v___y_3209_, v___y_3210_);
lean_dec(v___y_3210_);
lean_dec_ref(v___y_3209_);
lean_dec(v___y_3208_);
lean_dec_ref(v___y_3207_);
lean_dec(v___y_3206_);
lean_dec_ref(v___y_3205_);
return v_res_3212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__17___redArg(lean_object* v_opt_3213_, lean_object* v___y_3214_){
_start:
{
lean_object* v_toCold_3216_; lean_object* v_options_3217_; uint8_t v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; 
v_toCold_3216_ = lean_ctor_get(v___y_3214_, 0);
v_options_3217_ = lean_ctor_get(v_toCold_3216_, 2);
v___x_3218_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5(v_options_3217_, v_opt_3213_);
v___x_3219_ = lean_box(v___x_3218_);
v___x_3220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3220_, 0, v___x_3219_);
return v___x_3220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__17___redArg___boxed(lean_object* v_opt_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_){
_start:
{
lean_object* v_res_3224_; 
v_res_3224_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__17___redArg(v_opt_3221_, v___y_3222_);
lean_dec_ref(v___y_3222_);
lean_dec_ref(v_opt_3221_);
return v_res_3224_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16___closed__1(void){
_start:
{
lean_object* v___x_3226_; lean_object* v___x_3227_; 
v___x_3226_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16___closed__0));
v___x_3227_ = l_Lean_stringToMessageData(v___x_3226_);
return v___x_3227_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16___closed__3(void){
_start:
{
lean_object* v___x_3229_; lean_object* v___x_3230_; 
v___x_3229_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16___closed__2));
v___x_3230_ = l_Lean_stringToMessageData(v___x_3229_);
return v___x_3230_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16(lean_object* v_id_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_, lean_object* v___y_3234_, lean_object* v___y_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_){
_start:
{
lean_object* v___x_3239_; lean_object* v_env_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v_a_3243_; lean_object* v___x_3245_; uint8_t v_isShared_3246_; uint8_t v_isSharedCheck_3262_; 
v___x_3239_ = lean_st_ref_get(v___y_3237_);
v_env_3240_ = lean_ctor_get(v___x_3239_, 0);
lean_inc_ref(v_env_3240_);
lean_dec(v___x_3239_);
v___x_3241_ = l_Lean_ResolveName_backward_privateInPublic_warn;
v___x_3242_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__17___redArg(v___x_3241_, v___y_3236_);
v_a_3243_ = lean_ctor_get(v___x_3242_, 0);
v_isSharedCheck_3262_ = !lean_is_exclusive(v___x_3242_);
if (v_isSharedCheck_3262_ == 0)
{
v___x_3245_ = v___x_3242_;
v_isShared_3246_ = v_isSharedCheck_3262_;
goto v_resetjp_3244_;
}
else
{
lean_inc(v_a_3243_);
lean_dec(v___x_3242_);
v___x_3245_ = lean_box(0);
v_isShared_3246_ = v_isSharedCheck_3262_;
goto v_resetjp_3244_;
}
v_resetjp_3244_:
{
uint8_t v_isExporting_3252_; 
v_isExporting_3252_ = lean_ctor_get_uint8(v_env_3240_, sizeof(void*)*8);
lean_dec_ref(v_env_3240_);
if (v_isExporting_3252_ == 0)
{
lean_dec(v_a_3243_);
lean_dec(v_id_3231_);
goto v___jp_3247_;
}
else
{
uint8_t v___x_3253_; 
v___x_3253_ = l_Lean_isPrivateName(v_id_3231_);
if (v___x_3253_ == 0)
{
lean_dec(v_a_3243_);
lean_dec(v_id_3231_);
goto v___jp_3247_;
}
else
{
uint8_t v___x_3254_; 
v___x_3254_ = lean_unbox(v_a_3243_);
lean_dec(v_a_3243_);
if (v___x_3254_ == 0)
{
lean_dec(v_id_3231_);
goto v___jp_3247_;
}
else
{
lean_object* v___x_3255_; uint8_t v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; 
lean_del_object(v___x_3245_);
v___x_3255_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16___closed__1, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16___closed__1_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16___closed__1);
v___x_3256_ = 0;
v___x_3257_ = l_Lean_MessageData_ofConstName(v_id_3231_, v___x_3256_);
v___x_3258_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3258_, 0, v___x_3255_);
lean_ctor_set(v___x_3258_, 1, v___x_3257_);
v___x_3259_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16___closed__3, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16___closed__3_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16___closed__3);
v___x_3260_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3260_, 0, v___x_3258_);
lean_ctor_set(v___x_3260_, 1, v___x_3259_);
v___x_3261_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__18(v___x_3260_, v___y_3232_, v___y_3233_, v___y_3234_, v___y_3235_, v___y_3236_, v___y_3237_);
return v___x_3261_;
}
}
}
v___jp_3247_:
{
lean_object* v___x_3248_; lean_object* v___x_3250_; 
v___x_3248_ = lean_box(0);
if (v_isShared_3246_ == 0)
{
lean_ctor_set(v___x_3245_, 0, v___x_3248_);
v___x_3250_ = v___x_3245_;
goto v_reusejp_3249_;
}
else
{
lean_object* v_reuseFailAlloc_3251_; 
v_reuseFailAlloc_3251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3251_, 0, v___x_3248_);
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
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16___boxed(lean_object* v_id_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_){
_start:
{
lean_object* v_res_3271_; 
v_res_3271_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16(v_id_3263_, v___y_3264_, v___y_3265_, v___y_3266_, v___y_3267_, v___y_3268_, v___y_3269_);
lean_dec(v___y_3269_);
lean_dec_ref(v___y_3268_);
lean_dec(v___y_3267_);
lean_dec_ref(v___y_3266_);
lean_dec(v___y_3265_);
lean_dec_ref(v___y_3264_);
return v_res_3271_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__15(lean_object* v_x_3272_){
_start:
{
if (lean_obj_tag(v_x_3272_) == 0)
{
lean_object* v___x_3273_; 
v___x_3273_ = lean_box(0);
return v___x_3273_;
}
else
{
lean_object* v_head_3274_; lean_object* v_tail_3275_; lean_object* v_fst_3276_; uint8_t v___x_3277_; 
v_head_3274_ = lean_ctor_get(v_x_3272_, 0);
v_tail_3275_ = lean_ctor_get(v_x_3272_, 1);
v_fst_3276_ = lean_ctor_get(v_head_3274_, 0);
v___x_3277_ = l_Lean_isPrivateName(v_fst_3276_);
if (v___x_3277_ == 0)
{
v_x_3272_ = v_tail_3275_;
goto _start;
}
else
{
lean_object* v___x_3279_; 
lean_inc(v_head_3274_);
v___x_3279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3279_, 0, v_head_3274_);
return v___x_3279_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__15___boxed(lean_object* v_x_3280_){
_start:
{
lean_object* v_res_3281_; 
v_res_3281_ = l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__15(v_x_3280_);
lean_dec(v_x_3280_);
return v_res_3281_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12(lean_object* v_id_3282_, uint8_t v_enableLog_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_){
_start:
{
lean_object* v___x_3291_; lean_object* v_toCold_3292_; lean_object* v_env_3293_; lean_object* v_options_3294_; lean_object* v_currNamespace_3295_; lean_object* v_openDecls_3296_; lean_object* v_res_3297_; lean_object* v___x_3298_; 
v___x_3291_ = lean_st_ref_get(v___y_3289_);
v_toCold_3292_ = lean_ctor_get(v___y_3288_, 0);
v_env_3293_ = lean_ctor_get(v___x_3291_, 0);
lean_inc_ref(v_env_3293_);
lean_dec(v___x_3291_);
v_options_3294_ = lean_ctor_get(v_toCold_3292_, 2);
v_currNamespace_3295_ = lean_ctor_get(v_toCold_3292_, 4);
v_openDecls_3296_ = lean_ctor_get(v_toCold_3292_, 5);
lean_inc(v_openDecls_3296_);
lean_inc(v_currNamespace_3295_);
v_res_3297_ = l_Lean_ResolveName_resolveGlobalName(v_env_3293_, v_options_3294_, v_currNamespace_3295_, v_openDecls_3296_, v_id_3282_);
v___x_3298_ = lean_st_ref_get(v___y_3289_);
if (v_enableLog_3283_ == 0)
{
lean_object* v___x_3299_; 
lean_dec(v___x_3298_);
v___x_3299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3299_, 0, v_res_3297_);
return v___x_3299_;
}
else
{
lean_object* v_env_3300_; uint8_t v_isExporting_3301_; 
v_env_3300_ = lean_ctor_get(v___x_3298_, 0);
lean_inc_ref(v_env_3300_);
lean_dec(v___x_3298_);
v_isExporting_3301_ = lean_ctor_get_uint8(v_env_3300_, sizeof(void*)*8);
lean_dec_ref(v_env_3300_);
if (v_isExporting_3301_ == 0)
{
lean_object* v___x_3302_; 
v___x_3302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3302_, 0, v_res_3297_);
return v___x_3302_;
}
else
{
lean_object* v___x_3303_; 
v___x_3303_ = l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__15(v_res_3297_);
if (lean_obj_tag(v___x_3303_) == 1)
{
lean_object* v_val_3304_; lean_object* v_fst_3305_; lean_object* v___x_3306_; 
v_val_3304_ = lean_ctor_get(v___x_3303_, 0);
lean_inc(v_val_3304_);
lean_dec_ref_known(v___x_3303_, 1);
v_fst_3305_ = lean_ctor_get(v_val_3304_, 0);
lean_inc(v_fst_3305_);
lean_dec(v_val_3304_);
v___x_3306_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16(v_fst_3305_, v___y_3284_, v___y_3285_, v___y_3286_, v___y_3287_, v___y_3288_, v___y_3289_);
if (lean_obj_tag(v___x_3306_) == 0)
{
lean_object* v___x_3308_; uint8_t v_isShared_3309_; uint8_t v_isSharedCheck_3313_; 
v_isSharedCheck_3313_ = !lean_is_exclusive(v___x_3306_);
if (v_isSharedCheck_3313_ == 0)
{
lean_object* v_unused_3314_; 
v_unused_3314_ = lean_ctor_get(v___x_3306_, 0);
lean_dec(v_unused_3314_);
v___x_3308_ = v___x_3306_;
v_isShared_3309_ = v_isSharedCheck_3313_;
goto v_resetjp_3307_;
}
else
{
lean_dec(v___x_3306_);
v___x_3308_ = lean_box(0);
v_isShared_3309_ = v_isSharedCheck_3313_;
goto v_resetjp_3307_;
}
v_resetjp_3307_:
{
lean_object* v___x_3311_; 
if (v_isShared_3309_ == 0)
{
lean_ctor_set(v___x_3308_, 0, v_res_3297_);
v___x_3311_ = v___x_3308_;
goto v_reusejp_3310_;
}
else
{
lean_object* v_reuseFailAlloc_3312_; 
v_reuseFailAlloc_3312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3312_, 0, v_res_3297_);
v___x_3311_ = v_reuseFailAlloc_3312_;
goto v_reusejp_3310_;
}
v_reusejp_3310_:
{
return v___x_3311_;
}
}
}
else
{
lean_object* v_a_3315_; lean_object* v___x_3317_; uint8_t v_isShared_3318_; uint8_t v_isSharedCheck_3322_; 
lean_dec(v_res_3297_);
v_a_3315_ = lean_ctor_get(v___x_3306_, 0);
v_isSharedCheck_3322_ = !lean_is_exclusive(v___x_3306_);
if (v_isSharedCheck_3322_ == 0)
{
v___x_3317_ = v___x_3306_;
v_isShared_3318_ = v_isSharedCheck_3322_;
goto v_resetjp_3316_;
}
else
{
lean_inc(v_a_3315_);
lean_dec(v___x_3306_);
v___x_3317_ = lean_box(0);
v_isShared_3318_ = v_isSharedCheck_3322_;
goto v_resetjp_3316_;
}
v_resetjp_3316_:
{
lean_object* v___x_3320_; 
if (v_isShared_3318_ == 0)
{
v___x_3320_ = v___x_3317_;
goto v_reusejp_3319_;
}
else
{
lean_object* v_reuseFailAlloc_3321_; 
v_reuseFailAlloc_3321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3321_, 0, v_a_3315_);
v___x_3320_ = v_reuseFailAlloc_3321_;
goto v_reusejp_3319_;
}
v_reusejp_3319_:
{
return v___x_3320_;
}
}
}
}
else
{
lean_object* v___x_3323_; 
lean_dec(v___x_3303_);
v___x_3323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3323_, 0, v_res_3297_);
return v___x_3323_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12___boxed(lean_object* v_id_3324_, lean_object* v_enableLog_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_){
_start:
{
uint8_t v_enableLog_boxed_3333_; lean_object* v_res_3334_; 
v_enableLog_boxed_3333_ = lean_unbox(v_enableLog_3325_);
v_res_3334_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12(v_id_3324_, v_enableLog_boxed_3333_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_);
lean_dec(v___y_3331_);
lean_dec_ref(v___y_3330_);
lean_dec(v___y_3329_);
lean_dec_ref(v___y_3328_);
lean_dec(v___y_3327_);
lean_dec_ref(v___y_3326_);
return v_res_3334_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__13(lean_object* v_a_3335_, lean_object* v_a_3336_){
_start:
{
if (lean_obj_tag(v_a_3335_) == 0)
{
lean_object* v___x_3337_; 
v___x_3337_ = l_List_reverse___redArg(v_a_3336_);
return v___x_3337_;
}
else
{
lean_object* v_head_3338_; lean_object* v_tail_3339_; lean_object* v___x_3341_; uint8_t v_isShared_3342_; uint8_t v_isSharedCheck_3350_; 
v_head_3338_ = lean_ctor_get(v_a_3335_, 0);
v_tail_3339_ = lean_ctor_get(v_a_3335_, 1);
v_isSharedCheck_3350_ = !lean_is_exclusive(v_a_3335_);
if (v_isSharedCheck_3350_ == 0)
{
v___x_3341_ = v_a_3335_;
v_isShared_3342_ = v_isSharedCheck_3350_;
goto v_resetjp_3340_;
}
else
{
lean_inc(v_tail_3339_);
lean_inc(v_head_3338_);
lean_dec(v_a_3335_);
v___x_3341_ = lean_box(0);
v_isShared_3342_ = v_isSharedCheck_3350_;
goto v_resetjp_3340_;
}
v_resetjp_3340_:
{
lean_object* v_snd_3343_; uint8_t v___x_3344_; 
v_snd_3343_ = lean_ctor_get(v_head_3338_, 1);
v___x_3344_ = l_List_isEmpty___redArg(v_snd_3343_);
if (v___x_3344_ == 0)
{
lean_del_object(v___x_3341_);
lean_dec(v_head_3338_);
v_a_3335_ = v_tail_3339_;
goto _start;
}
else
{
lean_object* v___x_3347_; 
if (v_isShared_3342_ == 0)
{
lean_ctor_set(v___x_3341_, 1, v_a_3336_);
v___x_3347_ = v___x_3341_;
goto v_reusejp_3346_;
}
else
{
lean_object* v_reuseFailAlloc_3349_; 
v_reuseFailAlloc_3349_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3349_, 0, v_head_3338_);
lean_ctor_set(v_reuseFailAlloc_3349_, 1, v_a_3336_);
v___x_3347_ = v_reuseFailAlloc_3349_;
goto v_reusejp_3346_;
}
v_reusejp_3346_:
{
v_a_3335_ = v_tail_3339_;
v_a_3336_ = v___x_3347_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7(lean_object* v_view_3351_, lean_object* v_findLocalDecl_x3f_3352_, lean_object* v_n_3353_, lean_object* v_projs_3354_, uint8_t v_globalDeclFound_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_, lean_object* v___y_3360_, lean_object* v___y_3361_){
_start:
{
lean_object* v___y_3364_; lean_object* v___y_3365_; uint8_t v_globalDeclFoundNext_3366_; lean_object* v___y_3367_; lean_object* v___y_3368_; lean_object* v___y_3369_; lean_object* v___y_3370_; lean_object* v___y_3371_; lean_object* v___y_3372_; lean_object* v_imported_3375_; lean_object* v_ctx_3376_; lean_object* v_scopes_3377_; lean_object* v_givenNameView_3378_; uint8_t v___y_3380_; 
v_imported_3375_ = lean_ctor_get(v_view_3351_, 1);
v_ctx_3376_ = lean_ctor_get(v_view_3351_, 2);
v_scopes_3377_ = lean_ctor_get(v_view_3351_, 3);
lean_inc(v_scopes_3377_);
lean_inc(v_ctx_3376_);
lean_inc(v_imported_3375_);
lean_inc(v_n_3353_);
v_givenNameView_3378_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_givenNameView_3378_, 0, v_n_3353_);
lean_ctor_set(v_givenNameView_3378_, 1, v_imported_3375_);
lean_ctor_set(v_givenNameView_3378_, 2, v_ctx_3376_);
lean_ctor_set(v_givenNameView_3378_, 3, v_scopes_3377_);
if (v_globalDeclFound_3355_ == 0)
{
v___y_3380_ = v_globalDeclFound_3355_;
goto v___jp_3379_;
}
else
{
uint8_t v___x_3415_; 
v___x_3415_ = l_List_isEmpty___redArg(v_projs_3354_);
if (v___x_3415_ == 0)
{
v___y_3380_ = v_globalDeclFound_3355_;
goto v___jp_3379_;
}
else
{
uint8_t v___x_3416_; 
v___x_3416_ = 0;
v___y_3380_ = v___x_3416_;
goto v___jp_3379_;
}
}
v___jp_3363_:
{
lean_object* v___x_3373_; 
v___x_3373_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3373_, 0, v___y_3364_);
lean_ctor_set(v___x_3373_, 1, v_projs_3354_);
v_n_3353_ = v___y_3365_;
v_projs_3354_ = v___x_3373_;
v_globalDeclFound_3355_ = v_globalDeclFoundNext_3366_;
v___y_3356_ = v___y_3367_;
v___y_3357_ = v___y_3368_;
v___y_3358_ = v___y_3369_;
v___y_3359_ = v___y_3370_;
v___y_3360_ = v___y_3371_;
v___y_3361_ = v___y_3372_;
goto _start;
}
v___jp_3379_:
{
lean_object* v___x_3381_; lean_object* v___x_3382_; 
v___x_3381_ = lean_box(v___y_3380_);
lean_inc_ref(v_findLocalDecl_x3f_3352_);
lean_inc_ref(v_givenNameView_3378_);
v___x_3382_ = lean_apply_2(v_findLocalDecl_x3f_3352_, v_givenNameView_3378_, v___x_3381_);
if (lean_obj_tag(v___x_3382_) == 0)
{
if (lean_obj_tag(v_n_3353_) == 1)
{
if (v_globalDeclFound_3355_ == 0)
{
lean_object* v_pre_3383_; lean_object* v_str_3384_; uint8_t v_globalDeclFoundNext_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; 
v_pre_3383_ = lean_ctor_get(v_n_3353_, 0);
lean_inc(v_pre_3383_);
v_str_3384_ = lean_ctor_get(v_n_3353_, 1);
lean_inc_ref(v_str_3384_);
lean_dec_ref_known(v_n_3353_, 2);
v_globalDeclFoundNext_3385_ = 1;
v___x_3386_ = l_Lean_MacroScopesView_review(v_givenNameView_3378_);
v___x_3387_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12(v___x_3386_, v_globalDeclFound_3355_, v___y_3356_, v___y_3357_, v___y_3358_, v___y_3359_, v___y_3360_, v___y_3361_);
if (lean_obj_tag(v___x_3387_) == 0)
{
lean_object* v_a_3388_; lean_object* v___x_3389_; lean_object* v_r_3390_; uint8_t v___x_3391_; 
v_a_3388_ = lean_ctor_get(v___x_3387_, 0);
lean_inc(v_a_3388_);
lean_dec_ref_known(v___x_3387_, 1);
v___x_3389_ = lean_box(0);
v_r_3390_ = l_List_filterTR_loop___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__13(v_a_3388_, v___x_3389_);
v___x_3391_ = l_List_isEmpty___redArg(v_r_3390_);
lean_dec(v_r_3390_);
if (v___x_3391_ == 0)
{
v___y_3364_ = v_str_3384_;
v___y_3365_ = v_pre_3383_;
v_globalDeclFoundNext_3366_ = v_globalDeclFoundNext_3385_;
v___y_3367_ = v___y_3356_;
v___y_3368_ = v___y_3357_;
v___y_3369_ = v___y_3358_;
v___y_3370_ = v___y_3359_;
v___y_3371_ = v___y_3360_;
v___y_3372_ = v___y_3361_;
goto v___jp_3363_;
}
else
{
v___y_3364_ = v_str_3384_;
v___y_3365_ = v_pre_3383_;
v_globalDeclFoundNext_3366_ = v_globalDeclFound_3355_;
v___y_3367_ = v___y_3356_;
v___y_3368_ = v___y_3357_;
v___y_3369_ = v___y_3358_;
v___y_3370_ = v___y_3359_;
v___y_3371_ = v___y_3360_;
v___y_3372_ = v___y_3361_;
goto v___jp_3363_;
}
}
else
{
lean_object* v_a_3392_; lean_object* v___x_3394_; uint8_t v_isShared_3395_; uint8_t v_isSharedCheck_3399_; 
lean_dec_ref(v_str_3384_);
lean_dec(v_pre_3383_);
lean_dec(v_projs_3354_);
lean_dec_ref(v_findLocalDecl_x3f_3352_);
v_a_3392_ = lean_ctor_get(v___x_3387_, 0);
v_isSharedCheck_3399_ = !lean_is_exclusive(v___x_3387_);
if (v_isSharedCheck_3399_ == 0)
{
v___x_3394_ = v___x_3387_;
v_isShared_3395_ = v_isSharedCheck_3399_;
goto v_resetjp_3393_;
}
else
{
lean_inc(v_a_3392_);
lean_dec(v___x_3387_);
v___x_3394_ = lean_box(0);
v_isShared_3395_ = v_isSharedCheck_3399_;
goto v_resetjp_3393_;
}
v_resetjp_3393_:
{
lean_object* v___x_3397_; 
if (v_isShared_3395_ == 0)
{
v___x_3397_ = v___x_3394_;
goto v_reusejp_3396_;
}
else
{
lean_object* v_reuseFailAlloc_3398_; 
v_reuseFailAlloc_3398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3398_, 0, v_a_3392_);
v___x_3397_ = v_reuseFailAlloc_3398_;
goto v_reusejp_3396_;
}
v_reusejp_3396_:
{
return v___x_3397_;
}
}
}
}
else
{
lean_object* v_pre_3400_; lean_object* v_str_3401_; 
lean_dec_ref_known(v_givenNameView_3378_, 4);
v_pre_3400_ = lean_ctor_get(v_n_3353_, 0);
lean_inc(v_pre_3400_);
v_str_3401_ = lean_ctor_get(v_n_3353_, 1);
lean_inc_ref(v_str_3401_);
lean_dec_ref_known(v_n_3353_, 2);
v___y_3364_ = v_str_3401_;
v___y_3365_ = v_pre_3400_;
v_globalDeclFoundNext_3366_ = v_globalDeclFound_3355_;
v___y_3367_ = v___y_3356_;
v___y_3368_ = v___y_3357_;
v___y_3369_ = v___y_3358_;
v___y_3370_ = v___y_3359_;
v___y_3371_ = v___y_3360_;
v___y_3372_ = v___y_3361_;
goto v___jp_3363_;
}
}
else
{
lean_object* v___x_3402_; lean_object* v___x_3403_; 
lean_dec_ref_known(v_givenNameView_3378_, 4);
lean_dec(v_projs_3354_);
lean_dec(v_n_3353_);
lean_dec_ref(v_findLocalDecl_x3f_3352_);
v___x_3402_ = lean_box(0);
v___x_3403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3403_, 0, v___x_3402_);
return v___x_3403_;
}
}
else
{
lean_object* v_val_3404_; lean_object* v___x_3406_; uint8_t v_isShared_3407_; uint8_t v_isSharedCheck_3414_; 
lean_dec_ref_known(v_givenNameView_3378_, 4);
lean_dec(v_n_3353_);
lean_dec_ref(v_findLocalDecl_x3f_3352_);
v_val_3404_ = lean_ctor_get(v___x_3382_, 0);
v_isSharedCheck_3414_ = !lean_is_exclusive(v___x_3382_);
if (v_isSharedCheck_3414_ == 0)
{
v___x_3406_ = v___x_3382_;
v_isShared_3407_ = v_isSharedCheck_3414_;
goto v_resetjp_3405_;
}
else
{
lean_inc(v_val_3404_);
lean_dec(v___x_3382_);
v___x_3406_ = lean_box(0);
v_isShared_3407_ = v_isSharedCheck_3414_;
goto v_resetjp_3405_;
}
v_resetjp_3405_:
{
lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3411_; 
v___x_3408_ = l_Lean_LocalDecl_toExpr(v_val_3404_);
v___x_3409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3409_, 0, v___x_3408_);
lean_ctor_set(v___x_3409_, 1, v_projs_3354_);
if (v_isShared_3407_ == 0)
{
lean_ctor_set(v___x_3406_, 0, v___x_3409_);
v___x_3411_ = v___x_3406_;
goto v_reusejp_3410_;
}
else
{
lean_object* v_reuseFailAlloc_3413_; 
v_reuseFailAlloc_3413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3413_, 0, v___x_3409_);
v___x_3411_ = v_reuseFailAlloc_3413_;
goto v_reusejp_3410_;
}
v_reusejp_3410_:
{
lean_object* v___x_3412_; 
v___x_3412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3412_, 0, v___x_3411_);
return v___x_3412_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7___boxed(lean_object* v_view_3417_, lean_object* v_findLocalDecl_x3f_3418_, lean_object* v_n_3419_, lean_object* v_projs_3420_, lean_object* v_globalDeclFound_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_, lean_object* v___y_3428_){
_start:
{
uint8_t v_globalDeclFound_boxed_3429_; lean_object* v_res_3430_; 
v_globalDeclFound_boxed_3429_ = lean_unbox(v_globalDeclFound_3421_);
v_res_3430_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7(v_view_3417_, v_findLocalDecl_x3f_3418_, v_n_3419_, v_projs_3420_, v_globalDeclFound_boxed_3429_, v___y_3422_, v___y_3423_, v___y_3424_, v___y_3425_, v___y_3426_, v___y_3427_);
lean_dec(v___y_3427_);
lean_dec_ref(v___y_3426_);
lean_dec(v___y_3425_);
lean_dec_ref(v___y_3424_);
lean_dec(v___y_3423_);
lean_dec_ref(v___y_3422_);
lean_dec_ref(v_view_3417_);
return v_res_3430_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5(lean_object* v_n_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_){
_start:
{
lean_object* v_lctx_3439_; lean_object* v_toCold_3440_; lean_object* v_decls_3441_; lean_object* v_auxDeclToFullName_3442_; lean_object* v_currNamespace_3443_; lean_object* v_view_3444_; lean_object* v_name_3445_; lean_object* v_findLocalDecl_x3f_3446_; lean_object* v___x_3447_; uint8_t v___x_3448_; lean_object* v___x_3449_; 
v_lctx_3439_ = lean_ctor_get(v___y_3434_, 2);
v_toCold_3440_ = lean_ctor_get(v___y_3436_, 0);
v_decls_3441_ = lean_ctor_get(v_lctx_3439_, 1);
v_auxDeclToFullName_3442_ = lean_ctor_get(v_lctx_3439_, 2);
v_currNamespace_3443_ = lean_ctor_get(v_toCold_3440_, 4);
v_view_3444_ = l_Lean_extractMacroScopes(v_n_3431_);
v_name_3445_ = lean_ctor_get(v_view_3444_, 0);
lean_inc(v_name_3445_);
lean_inc_ref(v_decls_3441_);
lean_inc(v_currNamespace_3443_);
lean_inc(v_auxDeclToFullName_3442_);
v_findLocalDecl_x3f_3446_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5___lam__0___boxed), 5, 3);
lean_closure_set(v_findLocalDecl_x3f_3446_, 0, v_auxDeclToFullName_3442_);
lean_closure_set(v_findLocalDecl_x3f_3446_, 1, v_currNamespace_3443_);
lean_closure_set(v_findLocalDecl_x3f_3446_, 2, v_decls_3441_);
v___x_3447_ = lean_box(0);
v___x_3448_ = 0;
v___x_3449_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7(v_view_3444_, v_findLocalDecl_x3f_3446_, v_name_3445_, v___x_3447_, v___x_3448_, v___y_3432_, v___y_3433_, v___y_3434_, v___y_3435_, v___y_3436_, v___y_3437_);
lean_dec_ref(v_view_3444_);
return v___x_3449_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5___boxed(lean_object* v_n_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_, lean_object* v___y_3455_, lean_object* v___y_3456_, lean_object* v___y_3457_){
_start:
{
lean_object* v_res_3458_; 
v_res_3458_ = l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5(v_n_3450_, v___y_3451_, v___y_3452_, v___y_3453_, v___y_3454_, v___y_3455_, v___y_3456_);
lean_dec(v___y_3456_);
lean_dec_ref(v___y_3455_);
lean_dec(v___y_3454_);
lean_dec_ref(v___y_3453_);
lean_dec(v___y_3452_);
lean_dec_ref(v___y_3451_);
return v_res_3458_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2___redArg(lean_object* v_as_x27_3459_, lean_object* v_b_3460_){
_start:
{
if (lean_obj_tag(v_as_x27_3459_) == 0)
{
lean_object* v___x_3462_; 
v___x_3462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3462_, 0, v_b_3460_);
return v___x_3462_;
}
else
{
lean_object* v_head_3463_; lean_object* v_tail_3464_; lean_object* v_config_3465_; lean_object* v_extensions_3466_; lean_object* v_extra_3467_; lean_object* v_extraInj_3468_; lean_object* v_extraFacts_3469_; lean_object* v_symPrios_3470_; lean_object* v_norm_3471_; lean_object* v_normProcs_3472_; lean_object* v_anchorRefs_x3f_3473_; lean_object* v___x_3475_; uint8_t v_isShared_3476_; uint8_t v_isSharedCheck_3482_; 
v_head_3463_ = lean_ctor_get(v_as_x27_3459_, 0);
v_tail_3464_ = lean_ctor_get(v_as_x27_3459_, 1);
v_config_3465_ = lean_ctor_get(v_b_3460_, 0);
v_extensions_3466_ = lean_ctor_get(v_b_3460_, 1);
v_extra_3467_ = lean_ctor_get(v_b_3460_, 2);
v_extraInj_3468_ = lean_ctor_get(v_b_3460_, 3);
v_extraFacts_3469_ = lean_ctor_get(v_b_3460_, 4);
v_symPrios_3470_ = lean_ctor_get(v_b_3460_, 5);
v_norm_3471_ = lean_ctor_get(v_b_3460_, 6);
v_normProcs_3472_ = lean_ctor_get(v_b_3460_, 7);
v_anchorRefs_x3f_3473_ = lean_ctor_get(v_b_3460_, 8);
v_isSharedCheck_3482_ = !lean_is_exclusive(v_b_3460_);
if (v_isSharedCheck_3482_ == 0)
{
v___x_3475_ = v_b_3460_;
v_isShared_3476_ = v_isSharedCheck_3482_;
goto v_resetjp_3474_;
}
else
{
lean_inc(v_anchorRefs_x3f_3473_);
lean_inc(v_normProcs_3472_);
lean_inc(v_norm_3471_);
lean_inc(v_symPrios_3470_);
lean_inc(v_extraFacts_3469_);
lean_inc(v_extraInj_3468_);
lean_inc(v_extra_3467_);
lean_inc(v_extensions_3466_);
lean_inc(v_config_3465_);
lean_dec(v_b_3460_);
v___x_3475_ = lean_box(0);
v_isShared_3476_ = v_isSharedCheck_3482_;
goto v_resetjp_3474_;
}
v_resetjp_3474_:
{
lean_object* v___x_3477_; lean_object* v___x_3479_; 
lean_inc(v_head_3463_);
v___x_3477_ = l_Lean_PersistentArray_push___redArg(v_extra_3467_, v_head_3463_);
if (v_isShared_3476_ == 0)
{
lean_ctor_set(v___x_3475_, 2, v___x_3477_);
v___x_3479_ = v___x_3475_;
goto v_reusejp_3478_;
}
else
{
lean_object* v_reuseFailAlloc_3481_; 
v_reuseFailAlloc_3481_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3481_, 0, v_config_3465_);
lean_ctor_set(v_reuseFailAlloc_3481_, 1, v_extensions_3466_);
lean_ctor_set(v_reuseFailAlloc_3481_, 2, v___x_3477_);
lean_ctor_set(v_reuseFailAlloc_3481_, 3, v_extraInj_3468_);
lean_ctor_set(v_reuseFailAlloc_3481_, 4, v_extraFacts_3469_);
lean_ctor_set(v_reuseFailAlloc_3481_, 5, v_symPrios_3470_);
lean_ctor_set(v_reuseFailAlloc_3481_, 6, v_norm_3471_);
lean_ctor_set(v_reuseFailAlloc_3481_, 7, v_normProcs_3472_);
lean_ctor_set(v_reuseFailAlloc_3481_, 8, v_anchorRefs_x3f_3473_);
v___x_3479_ = v_reuseFailAlloc_3481_;
goto v_reusejp_3478_;
}
v_reusejp_3478_:
{
v_as_x27_3459_ = v_tail_3464_;
v_b_3460_ = v___x_3479_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2___redArg___boxed(lean_object* v_as_x27_3483_, lean_object* v_b_3484_, lean_object* v___y_3485_){
_start:
{
lean_object* v_res_3486_; 
v_res_3486_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2___redArg(v_as_x27_3483_, v_b_3484_);
lean_dec(v_as_x27_3483_);
return v_res_3486_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__1(void){
_start:
{
lean_object* v___x_3488_; lean_object* v___x_3489_; 
v___x_3488_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__0));
v___x_3489_ = l_Lean_stringToMessageData(v___x_3488_);
return v___x_3489_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__3(void){
_start:
{
lean_object* v___x_3491_; lean_object* v___x_3492_; 
v___x_3491_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__2));
v___x_3492_ = l_Lean_stringToMessageData(v___x_3491_);
return v___x_3492_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__5(void){
_start:
{
lean_object* v___x_3494_; lean_object* v___x_3495_; 
v___x_3494_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__4));
v___x_3495_ = l_Lean_stringToMessageData(v___x_3494_);
return v___x_3495_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__7(void){
_start:
{
lean_object* v___x_3497_; lean_object* v___x_3498_; 
v___x_3497_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__6));
v___x_3498_ = l_Lean_stringToMessageData(v___x_3497_);
return v___x_3498_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__9(void){
_start:
{
lean_object* v___x_3500_; lean_object* v___x_3501_; 
v___x_3500_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__8));
v___x_3501_ = l_Lean_stringToMessageData(v___x_3500_);
return v___x_3501_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__11(void){
_start:
{
lean_object* v___x_3503_; lean_object* v___x_3504_; 
v___x_3503_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__10));
v___x_3504_ = l_Lean_stringToMessageData(v___x_3503_);
return v___x_3504_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__13(void){
_start:
{
lean_object* v___x_3506_; lean_object* v___x_3507_; 
v___x_3506_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__12));
v___x_3507_ = l_Lean_stringToMessageData(v___x_3506_);
return v___x_3507_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__15(void){
_start:
{
lean_object* v___x_3509_; lean_object* v___x_3510_; 
v___x_3509_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__14));
v___x_3510_ = l_Lean_stringToMessageData(v___x_3509_);
return v___x_3510_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__17(void){
_start:
{
lean_object* v___x_3512_; lean_object* v___x_3513_; 
v___x_3512_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__16));
v___x_3513_ = l_Lean_stringToMessageData(v___x_3512_);
return v___x_3513_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__19(void){
_start:
{
lean_object* v___x_3515_; lean_object* v___x_3516_; 
v___x_3515_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__18));
v___x_3516_ = l_Lean_stringToMessageData(v___x_3515_);
return v___x_3516_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__21(void){
_start:
{
lean_object* v___x_3518_; lean_object* v___x_3519_; 
v___x_3518_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__20));
v___x_3519_ = l_Lean_stringToMessageData(v___x_3518_);
return v___x_3519_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__23(void){
_start:
{
lean_object* v___x_3521_; lean_object* v___x_3522_; 
v___x_3521_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__22));
v___x_3522_ = l_Lean_stringToMessageData(v___x_3521_);
return v___x_3522_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__25(void){
_start:
{
lean_object* v___x_3524_; lean_object* v___x_3525_; 
v___x_3524_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__24));
v___x_3525_ = l_Lean_stringToMessageData(v___x_3524_);
return v___x_3525_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam(lean_object* v_params_3526_, lean_object* v_p_3527_, lean_object* v_mod_x3f_3528_, lean_object* v_id_3529_, uint8_t v_minIndexable_3530_, uint8_t v_only_3531_, uint8_t v_incremental_3532_, lean_object* v___y_3533_, lean_object* v___y_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_, lean_object* v___y_3537_, lean_object* v___y_3538_){
_start:
{
uint8_t v___y_3541_; lean_object* v___y_3542_; lean_object* v___y_3543_; lean_object* v___y_3544_; lean_object* v___y_3545_; lean_object* v___y_3546_; lean_object* v___y_3547_; lean_object* v___y_3548_; lean_object* v___y_3592_; lean_object* v___y_3593_; lean_object* v___y_3594_; lean_object* v___y_3595_; lean_object* v___y_3596_; lean_object* v___y_3597_; lean_object* v___y_3598_; lean_object* v___y_3599_; uint8_t v___y_3642_; lean_object* v___y_3643_; lean_object* v___y_3644_; lean_object* v___y_3645_; lean_object* v___y_3646_; lean_object* v___y_3647_; lean_object* v___y_3683_; lean_object* v___y_3684_; lean_object* v___y_3685_; lean_object* v___y_3686_; lean_object* v___y_3687_; lean_object* v___y_3688_; lean_object* v___y_3689_; lean_object* v_a_3693_; lean_object* v___y_3916_; lean_object* v___x_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; 
v___x_3927_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_3928_ = lean_box(0);
lean_inc(v_id_3529_);
v___x_3929_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v_id_3529_, v___x_3928_, v___y_3537_, v___y_3538_);
if (lean_obj_tag(v___x_3929_) == 0)
{
lean_object* v_a_3930_; 
v_a_3930_ = lean_ctor_get(v___x_3929_, 0);
lean_inc(v_a_3930_);
lean_dec_ref_known(v___x_3929_, 1);
v_a_3693_ = v_a_3930_;
goto v___jp_3692_;
}
else
{
lean_object* v_a_3931_; lean_object* v___x_3933_; uint8_t v_isShared_3934_; uint8_t v_isSharedCheck_4005_; 
v_a_3931_ = lean_ctor_get(v___x_3929_, 0);
v_isSharedCheck_4005_ = !lean_is_exclusive(v___x_3929_);
if (v_isSharedCheck_4005_ == 0)
{
v___x_3933_ = v___x_3929_;
v_isShared_3934_ = v_isSharedCheck_4005_;
goto v_resetjp_3932_;
}
else
{
lean_inc(v_a_3931_);
lean_dec(v___x_3929_);
v___x_3933_ = lean_box(0);
v_isShared_3934_ = v_isSharedCheck_4005_;
goto v_resetjp_3932_;
}
v_resetjp_3932_:
{
uint8_t v___y_3936_; uint8_t v___x_4003_; 
v___x_4003_ = l_Lean_Exception_isInterrupt(v_a_3931_);
if (v___x_4003_ == 0)
{
uint8_t v___x_4004_; 
lean_inc(v_a_3931_);
v___x_4004_ = l_Lean_Exception_isRuntime(v_a_3931_);
v___y_3936_ = v___x_4004_;
goto v___jp_3935_;
}
else
{
v___y_3936_ = v___x_4003_;
goto v___jp_3935_;
}
v___jp_3935_:
{
if (v___y_3936_ == 0)
{
lean_object* v___x_3937_; lean_object* v___x_3938_; 
lean_del_object(v___x_3933_);
v___x_3937_ = l_Lean_TSyntax_getId(v_id_3529_);
lean_inc(v___x_3937_);
v___x_3938_ = l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5(v___x_3937_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_, v___y_3538_);
if (lean_obj_tag(v___x_3938_) == 0)
{
lean_object* v_a_3939_; 
v_a_3939_ = lean_ctor_get(v___x_3938_, 0);
lean_inc(v_a_3939_);
lean_dec_ref_known(v___x_3938_, 1);
if (lean_obj_tag(v_a_3939_) == 0)
{
lean_object* v___x_3940_; 
v___x_3940_ = l_Lean_Meta_Grind_getExtension_x3f(v___x_3937_, v___y_3537_, v___y_3538_);
if (lean_obj_tag(v___x_3940_) == 0)
{
lean_object* v_a_3941_; lean_object* v___x_3943_; uint8_t v_isShared_3944_; uint8_t v_isSharedCheck_3969_; 
v_a_3941_ = lean_ctor_get(v___x_3940_, 0);
v_isSharedCheck_3969_ = !lean_is_exclusive(v___x_3940_);
if (v_isSharedCheck_3969_ == 0)
{
v___x_3943_ = v___x_3940_;
v_isShared_3944_ = v_isSharedCheck_3969_;
goto v_resetjp_3942_;
}
else
{
lean_inc(v_a_3941_);
lean_dec(v___x_3940_);
v___x_3943_ = lean_box(0);
v_isShared_3944_ = v_isSharedCheck_3969_;
goto v_resetjp_3942_;
}
v_resetjp_3942_:
{
if (lean_obj_tag(v_a_3941_) == 1)
{
lean_del_object(v___x_3943_);
lean_dec(v_a_3931_);
if (lean_obj_tag(v_mod_x3f_3528_) == 1)
{
lean_object* v_val_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v_a_3952_; lean_object* v___x_3954_; uint8_t v_isShared_3955_; uint8_t v_isSharedCheck_3959_; 
lean_dec_ref_known(v_a_3941_, 1);
lean_dec(v_id_3529_);
lean_dec(v_p_3527_);
lean_dec_ref(v_params_3526_);
v_val_3945_ = lean_ctor_get(v_mod_x3f_3528_, 0);
lean_inc(v_val_3945_);
lean_dec_ref_known(v_mod_x3f_3528_, 1);
v___x_3946_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__21, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__21_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__21);
v___x_3947_ = l_Lean_MessageData_ofName(v___x_3937_);
v___x_3948_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3948_, 0, v___x_3946_);
lean_ctor_set(v___x_3948_, 1, v___x_3947_);
v___x_3949_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5);
v___x_3950_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3950_, 0, v___x_3948_);
lean_ctor_set(v___x_3950_, 1, v___x_3949_);
v___x_3951_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg(v_val_3945_, v___x_3950_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_, v___y_3538_);
lean_dec(v_val_3945_);
v_a_3952_ = lean_ctor_get(v___x_3951_, 0);
v_isSharedCheck_3959_ = !lean_is_exclusive(v___x_3951_);
if (v_isSharedCheck_3959_ == 0)
{
v___x_3954_ = v___x_3951_;
v_isShared_3955_ = v_isSharedCheck_3959_;
goto v_resetjp_3953_;
}
else
{
lean_inc(v_a_3952_);
lean_dec(v___x_3951_);
v___x_3954_ = lean_box(0);
v_isShared_3955_ = v_isSharedCheck_3959_;
goto v_resetjp_3953_;
}
v_resetjp_3953_:
{
lean_object* v___x_3957_; 
if (v_isShared_3955_ == 0)
{
v___x_3957_ = v___x_3954_;
goto v_reusejp_3956_;
}
else
{
lean_object* v_reuseFailAlloc_3958_; 
v_reuseFailAlloc_3958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3958_, 0, v_a_3952_);
v___x_3957_ = v_reuseFailAlloc_3958_;
goto v_reusejp_3956_;
}
v_reusejp_3956_:
{
return v___x_3957_;
}
}
}
else
{
lean_object* v_val_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; 
lean_dec(v___x_3937_);
v_val_3960_ = lean_ctor_get(v_a_3941_, 0);
lean_inc(v_val_3960_);
lean_dec_ref_known(v_a_3941_, 1);
v___x_3961_ = lean_box(0);
lean_inc_ref(v_params_3526_);
v___x_3962_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___lam__0(v_params_3526_, v_val_3960_, v___x_3927_, v___x_3961_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_, v___y_3538_);
lean_dec(v_val_3960_);
v___y_3916_ = v___x_3962_;
goto v___jp_3915_;
}
}
else
{
lean_object* v___x_3963_; uint8_t v___x_3964_; 
lean_dec(v_a_3941_);
v___x_3963_ = l_Lean_Name_getPrefix(v___x_3937_);
lean_dec(v___x_3937_);
v___x_3964_ = l_Lean_Name_isAnonymous(v___x_3963_);
lean_dec(v___x_3963_);
if (v___x_3964_ == 0)
{
lean_object* v___x_3965_; 
lean_del_object(v___x_3943_);
lean_dec(v_a_3931_);
v___x_3965_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam(v_params_3526_, v_p_3527_, v_mod_x3f_3528_, v_id_3529_, v_minIndexable_3530_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_, v___y_3538_);
return v___x_3965_;
}
else
{
lean_object* v___x_3967_; 
lean_dec(v_id_3529_);
lean_dec(v_mod_x3f_3528_);
lean_dec(v_p_3527_);
lean_dec_ref(v_params_3526_);
if (v_isShared_3944_ == 0)
{
lean_ctor_set_tag(v___x_3943_, 1);
lean_ctor_set(v___x_3943_, 0, v_a_3931_);
v___x_3967_ = v___x_3943_;
goto v_reusejp_3966_;
}
else
{
lean_object* v_reuseFailAlloc_3968_; 
v_reuseFailAlloc_3968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3968_, 0, v_a_3931_);
v___x_3967_ = v_reuseFailAlloc_3968_;
goto v_reusejp_3966_;
}
v_reusejp_3966_:
{
return v___x_3967_;
}
}
}
}
}
else
{
lean_object* v_a_3970_; lean_object* v___x_3972_; uint8_t v_isShared_3973_; uint8_t v_isSharedCheck_3977_; 
lean_dec(v___x_3937_);
lean_dec(v_a_3931_);
lean_dec(v_id_3529_);
lean_dec(v_mod_x3f_3528_);
lean_dec(v_p_3527_);
lean_dec_ref(v_params_3526_);
v_a_3970_ = lean_ctor_get(v___x_3940_, 0);
v_isSharedCheck_3977_ = !lean_is_exclusive(v___x_3940_);
if (v_isSharedCheck_3977_ == 0)
{
v___x_3972_ = v___x_3940_;
v_isShared_3973_ = v_isSharedCheck_3977_;
goto v_resetjp_3971_;
}
else
{
lean_inc(v_a_3970_);
lean_dec(v___x_3940_);
v___x_3972_ = lean_box(0);
v_isShared_3973_ = v_isSharedCheck_3977_;
goto v_resetjp_3971_;
}
v_resetjp_3971_:
{
lean_object* v___x_3975_; 
if (v_isShared_3973_ == 0)
{
v___x_3975_ = v___x_3972_;
goto v_reusejp_3974_;
}
else
{
lean_object* v_reuseFailAlloc_3976_; 
v_reuseFailAlloc_3976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3976_, 0, v_a_3970_);
v___x_3975_ = v_reuseFailAlloc_3976_;
goto v_reusejp_3974_;
}
v_reusejp_3974_:
{
return v___x_3975_;
}
}
}
}
else
{
lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; lean_object* v___x_3982_; lean_object* v___x_3983_; lean_object* v_a_3984_; lean_object* v___x_3986_; uint8_t v_isShared_3987_; uint8_t v_isSharedCheck_3991_; 
lean_dec_ref_known(v_a_3939_, 1);
lean_dec(v___x_3937_);
lean_dec(v_a_3931_);
lean_dec(v_mod_x3f_3528_);
lean_dec(v_p_3527_);
lean_dec_ref(v_params_3526_);
v___x_3978_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__23, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__23_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__23);
lean_inc(v_id_3529_);
v___x_3979_ = l_Lean_MessageData_ofSyntax(v_id_3529_);
v___x_3980_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3980_, 0, v___x_3978_);
lean_ctor_set(v___x_3980_, 1, v___x_3979_);
v___x_3981_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__25, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__25_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__25);
v___x_3982_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3982_, 0, v___x_3980_);
lean_ctor_set(v___x_3982_, 1, v___x_3981_);
v___x_3983_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg(v_id_3529_, v___x_3982_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_, v___y_3538_);
lean_dec(v_id_3529_);
v_a_3984_ = lean_ctor_get(v___x_3983_, 0);
v_isSharedCheck_3991_ = !lean_is_exclusive(v___x_3983_);
if (v_isSharedCheck_3991_ == 0)
{
v___x_3986_ = v___x_3983_;
v_isShared_3987_ = v_isSharedCheck_3991_;
goto v_resetjp_3985_;
}
else
{
lean_inc(v_a_3984_);
lean_dec(v___x_3983_);
v___x_3986_ = lean_box(0);
v_isShared_3987_ = v_isSharedCheck_3991_;
goto v_resetjp_3985_;
}
v_resetjp_3985_:
{
lean_object* v___x_3989_; 
if (v_isShared_3987_ == 0)
{
v___x_3989_ = v___x_3986_;
goto v_reusejp_3988_;
}
else
{
lean_object* v_reuseFailAlloc_3990_; 
v_reuseFailAlloc_3990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3990_, 0, v_a_3984_);
v___x_3989_ = v_reuseFailAlloc_3990_;
goto v_reusejp_3988_;
}
v_reusejp_3988_:
{
return v___x_3989_;
}
}
}
}
else
{
lean_object* v_a_3992_; lean_object* v___x_3994_; uint8_t v_isShared_3995_; uint8_t v_isSharedCheck_3999_; 
lean_dec(v___x_3937_);
lean_dec(v_a_3931_);
lean_dec(v_id_3529_);
lean_dec(v_mod_x3f_3528_);
lean_dec(v_p_3527_);
lean_dec_ref(v_params_3526_);
v_a_3992_ = lean_ctor_get(v___x_3938_, 0);
v_isSharedCheck_3999_ = !lean_is_exclusive(v___x_3938_);
if (v_isSharedCheck_3999_ == 0)
{
v___x_3994_ = v___x_3938_;
v_isShared_3995_ = v_isSharedCheck_3999_;
goto v_resetjp_3993_;
}
else
{
lean_inc(v_a_3992_);
lean_dec(v___x_3938_);
v___x_3994_ = lean_box(0);
v_isShared_3995_ = v_isSharedCheck_3999_;
goto v_resetjp_3993_;
}
v_resetjp_3993_:
{
lean_object* v___x_3997_; 
if (v_isShared_3995_ == 0)
{
v___x_3997_ = v___x_3994_;
goto v_reusejp_3996_;
}
else
{
lean_object* v_reuseFailAlloc_3998_; 
v_reuseFailAlloc_3998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3998_, 0, v_a_3992_);
v___x_3997_ = v_reuseFailAlloc_3998_;
goto v_reusejp_3996_;
}
v_reusejp_3996_:
{
return v___x_3997_;
}
}
}
}
else
{
lean_object* v___x_4001_; 
lean_dec(v_id_3529_);
lean_dec(v_mod_x3f_3528_);
lean_dec(v_p_3527_);
lean_dec_ref(v_params_3526_);
if (v_isShared_3934_ == 0)
{
v___x_4001_ = v___x_3933_;
goto v_reusejp_4000_;
}
else
{
lean_object* v_reuseFailAlloc_4002_; 
v_reuseFailAlloc_4002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4002_, 0, v_a_3931_);
v___x_4001_ = v_reuseFailAlloc_4002_;
goto v_reusejp_4000_;
}
v_reusejp_4000_:
{
return v___x_4001_;
}
}
}
}
}
v___jp_3540_:
{
uint8_t v___x_3549_; lean_object* v___x_3550_; 
v___x_3549_ = 0;
lean_inc(v___y_3542_);
v___x_3550_ = l_Lean_Meta_Grind_isCasesAttrCandidate_x3f(v___y_3542_, v___x_3549_, v___y_3547_, v___y_3548_);
if (lean_obj_tag(v___x_3550_) == 0)
{
lean_object* v_a_3551_; 
v_a_3551_ = lean_ctor_get(v___x_3550_, 0);
lean_inc(v_a_3551_);
lean_dec_ref_known(v___x_3550_, 1);
if (lean_obj_tag(v_a_3551_) == 1)
{
lean_object* v_val_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; 
lean_dec(v___y_3542_);
v_val_3552_ = lean_ctor_get(v_a_3551_, 0);
lean_inc_n(v_val_3552_, 2);
lean_dec_ref_known(v_a_3551_, 1);
v___x_3553_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes(v_params_3526_, v_val_3552_, v___x_3549_);
v___x_3554_ = l_Lean_Meta_isInductivePredicate_x3f(v_val_3552_, v___y_3545_, v___y_3546_, v___y_3547_, v___y_3548_);
if (lean_obj_tag(v___x_3554_) == 0)
{
lean_object* v_a_3555_; lean_object* v___x_3557_; uint8_t v_isShared_3558_; uint8_t v_isSharedCheck_3565_; 
v_a_3555_ = lean_ctor_get(v___x_3554_, 0);
v_isSharedCheck_3565_ = !lean_is_exclusive(v___x_3554_);
if (v_isSharedCheck_3565_ == 0)
{
v___x_3557_ = v___x_3554_;
v_isShared_3558_ = v_isSharedCheck_3565_;
goto v_resetjp_3556_;
}
else
{
lean_inc(v_a_3555_);
lean_dec(v___x_3554_);
v___x_3557_ = lean_box(0);
v_isShared_3558_ = v_isSharedCheck_3565_;
goto v_resetjp_3556_;
}
v_resetjp_3556_:
{
if (lean_obj_tag(v_a_3555_) == 1)
{
lean_object* v_val_3559_; lean_object* v_ctors_3560_; lean_object* v___x_3561_; 
lean_del_object(v___x_3557_);
v_val_3559_ = lean_ctor_get(v_a_3555_, 0);
lean_inc(v_val_3559_);
lean_dec_ref_known(v_a_3555_, 1);
v_ctors_3560_ = lean_ctor_get(v_val_3559_, 4);
lean_inc(v_ctors_3560_);
lean_dec(v_val_3559_);
v___x_3561_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0___redArg(v_p_3527_, v_id_3529_, v_minIndexable_3530_, v_ctors_3560_, v___x_3553_, v___y_3545_, v___y_3546_, v___y_3547_, v___y_3548_);
lean_dec(v_ctors_3560_);
lean_dec(v_p_3527_);
return v___x_3561_;
}
else
{
lean_object* v___x_3563_; 
lean_dec(v_a_3555_);
lean_dec(v_id_3529_);
lean_dec(v_p_3527_);
if (v_isShared_3558_ == 0)
{
lean_ctor_set(v___x_3557_, 0, v___x_3553_);
v___x_3563_ = v___x_3557_;
goto v_reusejp_3562_;
}
else
{
lean_object* v_reuseFailAlloc_3564_; 
v_reuseFailAlloc_3564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3564_, 0, v___x_3553_);
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
else
{
lean_object* v_a_3566_; lean_object* v___x_3568_; uint8_t v_isShared_3569_; uint8_t v_isSharedCheck_3573_; 
lean_dec_ref(v___x_3553_);
lean_dec(v_id_3529_);
lean_dec(v_p_3527_);
v_a_3566_ = lean_ctor_get(v___x_3554_, 0);
v_isSharedCheck_3573_ = !lean_is_exclusive(v___x_3554_);
if (v_isSharedCheck_3573_ == 0)
{
v___x_3568_ = v___x_3554_;
v_isShared_3569_ = v_isSharedCheck_3573_;
goto v_resetjp_3567_;
}
else
{
lean_inc(v_a_3566_);
lean_dec(v___x_3554_);
v___x_3568_ = lean_box(0);
v_isShared_3569_ = v_isSharedCheck_3573_;
goto v_resetjp_3567_;
}
v_resetjp_3567_:
{
lean_object* v___x_3571_; 
if (v_isShared_3569_ == 0)
{
v___x_3571_ = v___x_3568_;
goto v_reusejp_3570_;
}
else
{
lean_object* v_reuseFailAlloc_3572_; 
v_reuseFailAlloc_3572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3572_, 0, v_a_3566_);
v___x_3571_ = v_reuseFailAlloc_3572_;
goto v_reusejp_3570_;
}
v_reusejp_3570_:
{
return v___x_3571_;
}
}
}
}
else
{
lean_object* v_toCold_3574_; lean_object* v_currRecDepth_3575_; lean_object* v_ref_3576_; uint8_t v_diag_3577_; uint8_t v_suppressElabErrors_3578_; lean_object* v___x_3579_; lean_object* v_ref_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; 
lean_dec(v_a_3551_);
v_toCold_3574_ = lean_ctor_get(v___y_3547_, 0);
v_currRecDepth_3575_ = lean_ctor_get(v___y_3547_, 1);
v_ref_3576_ = lean_ctor_get(v___y_3547_, 2);
v_diag_3577_ = lean_ctor_get_uint8(v___y_3547_, sizeof(void*)*3);
v_suppressElabErrors_3578_ = lean_ctor_get_uint8(v___y_3547_, sizeof(void*)*3 + 1);
v___x_3579_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__8));
v_ref_3580_ = l_Lean_replaceRef(v_p_3527_, v_ref_3576_);
lean_dec(v_p_3527_);
lean_inc(v_currRecDepth_3575_);
lean_inc_ref(v_toCold_3574_);
v___x_3581_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3581_, 0, v_toCold_3574_);
lean_ctor_set(v___x_3581_, 1, v_currRecDepth_3575_);
lean_ctor_set(v___x_3581_, 2, v_ref_3580_);
lean_ctor_set_uint8(v___x_3581_, sizeof(void*)*3, v_diag_3577_);
lean_ctor_set_uint8(v___x_3581_, sizeof(void*)*3 + 1, v_suppressElabErrors_3578_);
v___x_3582_ = l_Lean_Elab_Tactic_addEMatchTheorem(v_params_3526_, v_id_3529_, v___y_3542_, v___x_3579_, v_minIndexable_3530_, v___y_3541_, v___y_3541_, v___y_3545_, v___y_3546_, v___x_3581_, v___y_3548_);
lean_dec_ref_known(v___x_3581_, 3);
return v___x_3582_;
}
}
else
{
lean_object* v_a_3583_; lean_object* v___x_3585_; uint8_t v_isShared_3586_; uint8_t v_isSharedCheck_3590_; 
lean_dec(v___y_3542_);
lean_dec(v_id_3529_);
lean_dec(v_p_3527_);
lean_dec_ref(v_params_3526_);
v_a_3583_ = lean_ctor_get(v___x_3550_, 0);
v_isSharedCheck_3590_ = !lean_is_exclusive(v___x_3550_);
if (v_isSharedCheck_3590_ == 0)
{
v___x_3585_ = v___x_3550_;
v_isShared_3586_ = v_isSharedCheck_3590_;
goto v_resetjp_3584_;
}
else
{
lean_inc(v_a_3583_);
lean_dec(v___x_3550_);
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
v___jp_3591_:
{
lean_object* v___x_3600_; 
v___x_3600_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_3530_, v___y_3596_, v___y_3597_, v___y_3598_, v___y_3599_);
if (lean_obj_tag(v___x_3600_) == 0)
{
lean_object* v___x_3601_; lean_object* v___x_3602_; 
lean_dec_ref_known(v___x_3600_, 1);
v___x_3601_ = l_Lean_Meta_Grind_grindExt;
v___x_3602_ = l_Lean_Meta_Grind_Extension_getEMatchTheorems___redArg(v___x_3601_, v___y_3599_);
if (lean_obj_tag(v___x_3602_) == 0)
{
lean_object* v_a_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; uint8_t v___x_3608_; 
v_a_3603_ = lean_ctor_get(v___x_3602_, 0);
lean_inc(v_a_3603_);
lean_dec_ref_known(v___x_3602_, 1);
lean_inc(v___y_3593_);
v___x_3604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3604_, 0, v___y_3593_);
v___x_3605_ = l_Lean_Meta_Grind_Theorems_find___redArg(v_a_3603_, v___x_3604_);
lean_dec_ref_known(v___x_3604_, 1);
lean_dec(v_a_3603_);
v___x_3606_ = lean_box(0);
v___x_3607_ = l_List_filterTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__1(v___y_3592_, v___x_3605_, v___x_3606_);
lean_dec(v___y_3592_);
v___x_3608_ = l_List_isEmpty___redArg(v___x_3607_);
if (v___x_3608_ == 0)
{
lean_object* v___x_3609_; 
lean_dec(v___y_3593_);
lean_dec(v_p_3527_);
v___x_3609_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2___redArg(v___x_3607_, v_params_3526_);
lean_dec(v___x_3607_);
return v___x_3609_;
}
else
{
lean_object* v___x_3610_; uint8_t v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v_a_3617_; lean_object* v___x_3619_; uint8_t v_isShared_3620_; uint8_t v_isSharedCheck_3624_; 
lean_dec(v___x_3607_);
lean_dec_ref(v_params_3526_);
v___x_3610_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__1, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__1);
v___x_3611_ = 0;
v___x_3612_ = l_Lean_MessageData_ofConstName(v___y_3593_, v___x_3611_);
v___x_3613_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3613_, 0, v___x_3610_);
lean_ctor_set(v___x_3613_, 1, v___x_3612_);
v___x_3614_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__3, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__3);
v___x_3615_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3615_, 0, v___x_3613_);
lean_ctor_set(v___x_3615_, 1, v___x_3614_);
v___x_3616_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg(v_p_3527_, v___x_3615_, v___y_3594_, v___y_3595_, v___y_3596_, v___y_3597_, v___y_3598_, v___y_3599_);
lean_dec(v_p_3527_);
v_a_3617_ = lean_ctor_get(v___x_3616_, 0);
v_isSharedCheck_3624_ = !lean_is_exclusive(v___x_3616_);
if (v_isSharedCheck_3624_ == 0)
{
v___x_3619_ = v___x_3616_;
v_isShared_3620_ = v_isSharedCheck_3624_;
goto v_resetjp_3618_;
}
else
{
lean_inc(v_a_3617_);
lean_dec(v___x_3616_);
v___x_3619_ = lean_box(0);
v_isShared_3620_ = v_isSharedCheck_3624_;
goto v_resetjp_3618_;
}
v_resetjp_3618_:
{
lean_object* v___x_3622_; 
if (v_isShared_3620_ == 0)
{
v___x_3622_ = v___x_3619_;
goto v_reusejp_3621_;
}
else
{
lean_object* v_reuseFailAlloc_3623_; 
v_reuseFailAlloc_3623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3623_, 0, v_a_3617_);
v___x_3622_ = v_reuseFailAlloc_3623_;
goto v_reusejp_3621_;
}
v_reusejp_3621_:
{
return v___x_3622_;
}
}
}
}
else
{
lean_object* v_a_3625_; lean_object* v___x_3627_; uint8_t v_isShared_3628_; uint8_t v_isSharedCheck_3632_; 
lean_dec(v___y_3593_);
lean_dec(v___y_3592_);
lean_dec(v_p_3527_);
lean_dec_ref(v_params_3526_);
v_a_3625_ = lean_ctor_get(v___x_3602_, 0);
v_isSharedCheck_3632_ = !lean_is_exclusive(v___x_3602_);
if (v_isSharedCheck_3632_ == 0)
{
v___x_3627_ = v___x_3602_;
v_isShared_3628_ = v_isSharedCheck_3632_;
goto v_resetjp_3626_;
}
else
{
lean_inc(v_a_3625_);
lean_dec(v___x_3602_);
v___x_3627_ = lean_box(0);
v_isShared_3628_ = v_isSharedCheck_3632_;
goto v_resetjp_3626_;
}
v_resetjp_3626_:
{
lean_object* v___x_3630_; 
if (v_isShared_3628_ == 0)
{
v___x_3630_ = v___x_3627_;
goto v_reusejp_3629_;
}
else
{
lean_object* v_reuseFailAlloc_3631_; 
v_reuseFailAlloc_3631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3631_, 0, v_a_3625_);
v___x_3630_ = v_reuseFailAlloc_3631_;
goto v_reusejp_3629_;
}
v_reusejp_3629_:
{
return v___x_3630_;
}
}
}
}
else
{
lean_object* v_a_3633_; lean_object* v___x_3635_; uint8_t v_isShared_3636_; uint8_t v_isSharedCheck_3640_; 
lean_dec(v___y_3593_);
lean_dec(v___y_3592_);
lean_dec(v_p_3527_);
lean_dec_ref(v_params_3526_);
v_a_3633_ = lean_ctor_get(v___x_3600_, 0);
v_isSharedCheck_3640_ = !lean_is_exclusive(v___x_3600_);
if (v_isSharedCheck_3640_ == 0)
{
v___x_3635_ = v___x_3600_;
v_isShared_3636_ = v_isSharedCheck_3640_;
goto v_resetjp_3634_;
}
else
{
lean_inc(v_a_3633_);
lean_dec(v___x_3600_);
v___x_3635_ = lean_box(0);
v_isShared_3636_ = v_isSharedCheck_3640_;
goto v_resetjp_3634_;
}
v_resetjp_3634_:
{
lean_object* v___x_3638_; 
if (v_isShared_3636_ == 0)
{
v___x_3638_ = v___x_3635_;
goto v_reusejp_3637_;
}
else
{
lean_object* v_reuseFailAlloc_3639_; 
v_reuseFailAlloc_3639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3639_, 0, v_a_3633_);
v___x_3638_ = v_reuseFailAlloc_3639_;
goto v_reusejp_3637_;
}
v_reusejp_3637_:
{
return v___x_3638_;
}
}
}
}
v___jp_3641_:
{
lean_object* v___x_3648_; 
v___x_3648_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_3530_, v___y_3644_, v___y_3645_, v___y_3646_, v___y_3647_);
if (lean_obj_tag(v___x_3648_) == 0)
{
lean_object* v_toCold_3649_; lean_object* v_currRecDepth_3650_; lean_object* v_ref_3651_; uint8_t v_diag_3652_; uint8_t v_suppressElabErrors_3653_; lean_object* v_ref_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; 
lean_dec_ref_known(v___x_3648_, 1);
v_toCold_3649_ = lean_ctor_get(v___y_3646_, 0);
v_currRecDepth_3650_ = lean_ctor_get(v___y_3646_, 1);
v_ref_3651_ = lean_ctor_get(v___y_3646_, 2);
v_diag_3652_ = lean_ctor_get_uint8(v___y_3646_, sizeof(void*)*3);
v_suppressElabErrors_3653_ = lean_ctor_get_uint8(v___y_3646_, sizeof(void*)*3 + 1);
v_ref_3654_ = l_Lean_replaceRef(v_p_3527_, v_ref_3651_);
lean_dec(v_p_3527_);
lean_inc(v_currRecDepth_3650_);
lean_inc_ref(v_toCold_3649_);
v___x_3655_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3655_, 0, v_toCold_3649_);
lean_ctor_set(v___x_3655_, 1, v_currRecDepth_3650_);
lean_ctor_set(v___x_3655_, 2, v_ref_3654_);
lean_ctor_set_uint8(v___x_3655_, sizeof(void*)*3, v_diag_3652_);
lean_ctor_set_uint8(v___x_3655_, sizeof(void*)*3 + 1, v_suppressElabErrors_3653_);
lean_inc(v___y_3643_);
v___x_3656_ = l_Lean_Meta_Grind_validateCasesAttr(v___y_3643_, v___y_3642_, v___x_3655_, v___y_3647_);
lean_dec_ref_known(v___x_3655_, 3);
if (lean_obj_tag(v___x_3656_) == 0)
{
lean_object* v___x_3658_; uint8_t v_isShared_3659_; uint8_t v_isSharedCheck_3664_; 
v_isSharedCheck_3664_ = !lean_is_exclusive(v___x_3656_);
if (v_isSharedCheck_3664_ == 0)
{
lean_object* v_unused_3665_; 
v_unused_3665_ = lean_ctor_get(v___x_3656_, 0);
lean_dec(v_unused_3665_);
v___x_3658_ = v___x_3656_;
v_isShared_3659_ = v_isSharedCheck_3664_;
goto v_resetjp_3657_;
}
else
{
lean_dec(v___x_3656_);
v___x_3658_ = lean_box(0);
v_isShared_3659_ = v_isSharedCheck_3664_;
goto v_resetjp_3657_;
}
v_resetjp_3657_:
{
lean_object* v___x_3660_; lean_object* v___x_3662_; 
v___x_3660_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes(v_params_3526_, v___y_3643_, v___y_3642_);
if (v_isShared_3659_ == 0)
{
lean_ctor_set(v___x_3658_, 0, v___x_3660_);
v___x_3662_ = v___x_3658_;
goto v_reusejp_3661_;
}
else
{
lean_object* v_reuseFailAlloc_3663_; 
v_reuseFailAlloc_3663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3663_, 0, v___x_3660_);
v___x_3662_ = v_reuseFailAlloc_3663_;
goto v_reusejp_3661_;
}
v_reusejp_3661_:
{
return v___x_3662_;
}
}
}
else
{
lean_object* v_a_3666_; lean_object* v___x_3668_; uint8_t v_isShared_3669_; uint8_t v_isSharedCheck_3673_; 
lean_dec(v___y_3643_);
lean_dec_ref(v_params_3526_);
v_a_3666_ = lean_ctor_get(v___x_3656_, 0);
v_isSharedCheck_3673_ = !lean_is_exclusive(v___x_3656_);
if (v_isSharedCheck_3673_ == 0)
{
v___x_3668_ = v___x_3656_;
v_isShared_3669_ = v_isSharedCheck_3673_;
goto v_resetjp_3667_;
}
else
{
lean_inc(v_a_3666_);
lean_dec(v___x_3656_);
v___x_3668_ = lean_box(0);
v_isShared_3669_ = v_isSharedCheck_3673_;
goto v_resetjp_3667_;
}
v_resetjp_3667_:
{
lean_object* v___x_3671_; 
if (v_isShared_3669_ == 0)
{
v___x_3671_ = v___x_3668_;
goto v_reusejp_3670_;
}
else
{
lean_object* v_reuseFailAlloc_3672_; 
v_reuseFailAlloc_3672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3672_, 0, v_a_3666_);
v___x_3671_ = v_reuseFailAlloc_3672_;
goto v_reusejp_3670_;
}
v_reusejp_3670_:
{
return v___x_3671_;
}
}
}
}
else
{
lean_object* v_a_3674_; lean_object* v___x_3676_; uint8_t v_isShared_3677_; uint8_t v_isSharedCheck_3681_; 
lean_dec(v___y_3643_);
lean_dec(v_p_3527_);
lean_dec_ref(v_params_3526_);
v_a_3674_ = lean_ctor_get(v___x_3648_, 0);
v_isSharedCheck_3681_ = !lean_is_exclusive(v___x_3648_);
if (v_isSharedCheck_3681_ == 0)
{
v___x_3676_ = v___x_3648_;
v_isShared_3677_ = v_isSharedCheck_3681_;
goto v_resetjp_3675_;
}
else
{
lean_inc(v_a_3674_);
lean_dec(v___x_3648_);
v___x_3676_ = lean_box(0);
v_isShared_3677_ = v_isSharedCheck_3681_;
goto v_resetjp_3675_;
}
v_resetjp_3675_:
{
lean_object* v___x_3679_; 
if (v_isShared_3677_ == 0)
{
v___x_3679_ = v___x_3676_;
goto v_reusejp_3678_;
}
else
{
lean_object* v_reuseFailAlloc_3680_; 
v_reuseFailAlloc_3680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3680_, 0, v_a_3674_);
v___x_3679_ = v_reuseFailAlloc_3680_;
goto v_reusejp_3678_;
}
v_reusejp_3678_:
{
return v___x_3679_;
}
}
}
}
v___jp_3682_:
{
lean_object* v_ctors_3690_; lean_object* v___x_3691_; 
v_ctors_3690_ = lean_ctor_get(v___y_3683_, 4);
lean_inc(v_ctors_3690_);
lean_dec_ref(v___y_3683_);
v___x_3691_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4___redArg(v_p_3527_, v_id_3529_, v_minIndexable_3530_, v_ctors_3690_, v_params_3526_, v___y_3686_, v___y_3687_, v___y_3688_, v___y_3689_);
lean_dec(v_ctors_3690_);
lean_dec(v_p_3527_);
return v___x_3691_;
}
v___jp_3692_:
{
uint8_t v___x_3694_; lean_object* v___x_3695_; 
v___x_3694_ = 1;
lean_inc(v_a_3693_);
v___x_3695_ = l_Lean_Elab_Term_checkDeprecatedCore___redArg(v_a_3693_, v___x_3694_, v___y_3533_, v___y_3535_, v___y_3536_, v___y_3537_, v___y_3538_);
if (lean_obj_tag(v___x_3695_) == 0)
{
lean_dec_ref_known(v___x_3695_, 1);
if (lean_obj_tag(v_mod_x3f_3528_) == 1)
{
lean_object* v_val_3696_; lean_object* v___x_3697_; 
v_val_3696_ = lean_ctor_get(v_mod_x3f_3528_, 0);
lean_inc(v_val_3696_);
lean_dec_ref_known(v_mod_x3f_3528_, 1);
v___x_3697_ = l_Lean_Meta_Grind_getAttrKindCore(v_val_3696_, v___y_3537_, v___y_3538_);
if (lean_obj_tag(v___x_3697_) == 0)
{
lean_object* v_a_3698_; lean_object* v___x_3700_; uint8_t v_isShared_3701_; uint8_t v_isSharedCheck_3898_; 
v_a_3698_ = lean_ctor_get(v___x_3697_, 0);
v_isSharedCheck_3898_ = !lean_is_exclusive(v___x_3697_);
if (v_isSharedCheck_3898_ == 0)
{
v___x_3700_ = v___x_3697_;
v_isShared_3701_ = v_isSharedCheck_3898_;
goto v_resetjp_3699_;
}
else
{
lean_inc(v_a_3698_);
lean_dec(v___x_3697_);
v___x_3700_ = lean_box(0);
v_isShared_3701_ = v_isSharedCheck_3898_;
goto v_resetjp_3699_;
}
v_resetjp_3699_:
{
switch(lean_obj_tag(v_a_3698_))
{
case 0:
{
lean_object* v_k_3702_; 
lean_del_object(v___x_3700_);
v_k_3702_ = lean_ctor_get(v_a_3698_, 0);
lean_inc(v_k_3702_);
lean_dec_ref_known(v_a_3698_, 1);
if (lean_obj_tag(v_k_3702_) == 9)
{
lean_dec(v_id_3529_);
if (v_only_3531_ == 0)
{
lean_object* v_toCold_3703_; lean_object* v_currRecDepth_3704_; lean_object* v_ref_3705_; uint8_t v_diag_3706_; uint8_t v_suppressElabErrors_3707_; lean_object* v_ref_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; 
v_toCold_3703_ = lean_ctor_get(v___y_3537_, 0);
v_currRecDepth_3704_ = lean_ctor_get(v___y_3537_, 1);
v_ref_3705_ = lean_ctor_get(v___y_3537_, 2);
v_diag_3706_ = lean_ctor_get_uint8(v___y_3537_, sizeof(void*)*3);
v_suppressElabErrors_3707_ = lean_ctor_get_uint8(v___y_3537_, sizeof(void*)*3 + 1);
v_ref_3708_ = l_Lean_replaceRef(v_p_3527_, v_ref_3705_);
lean_inc(v_currRecDepth_3704_);
lean_inc_ref(v_toCold_3703_);
v___x_3709_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3709_, 0, v_toCold_3703_);
lean_ctor_set(v___x_3709_, 1, v_currRecDepth_3704_);
lean_ctor_set(v___x_3709_, 2, v_ref_3708_);
lean_ctor_set_uint8(v___x_3709_, sizeof(void*)*3, v_diag_3706_);
lean_ctor_set_uint8(v___x_3709_, sizeof(void*)*3 + 1, v_suppressElabErrors_3707_);
v___x_3710_ = l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg(v___x_3709_, v___y_3538_);
lean_dec_ref_known(v___x_3709_, 3);
if (lean_obj_tag(v___x_3710_) == 0)
{
lean_dec_ref_known(v___x_3710_, 1);
v___y_3592_ = v_k_3702_;
v___y_3593_ = v_a_3693_;
v___y_3594_ = v___y_3533_;
v___y_3595_ = v___y_3534_;
v___y_3596_ = v___y_3535_;
v___y_3597_ = v___y_3536_;
v___y_3598_ = v___y_3537_;
v___y_3599_ = v___y_3538_;
goto v___jp_3591_;
}
else
{
lean_object* v_a_3711_; lean_object* v___x_3713_; uint8_t v_isShared_3714_; uint8_t v_isSharedCheck_3718_; 
lean_dec(v_a_3693_);
lean_dec(v_p_3527_);
lean_dec_ref(v_params_3526_);
v_a_3711_ = lean_ctor_get(v___x_3710_, 0);
v_isSharedCheck_3718_ = !lean_is_exclusive(v___x_3710_);
if (v_isSharedCheck_3718_ == 0)
{
v___x_3713_ = v___x_3710_;
v_isShared_3714_ = v_isSharedCheck_3718_;
goto v_resetjp_3712_;
}
else
{
lean_inc(v_a_3711_);
lean_dec(v___x_3710_);
v___x_3713_ = lean_box(0);
v_isShared_3714_ = v_isSharedCheck_3718_;
goto v_resetjp_3712_;
}
v_resetjp_3712_:
{
lean_object* v___x_3716_; 
if (v_isShared_3714_ == 0)
{
v___x_3716_ = v___x_3713_;
goto v_reusejp_3715_;
}
else
{
lean_object* v_reuseFailAlloc_3717_; 
v_reuseFailAlloc_3717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3717_, 0, v_a_3711_);
v___x_3716_ = v_reuseFailAlloc_3717_;
goto v_reusejp_3715_;
}
v_reusejp_3715_:
{
return v___x_3716_;
}
}
}
}
else
{
v___y_3592_ = v_k_3702_;
v___y_3593_ = v_a_3693_;
v___y_3594_ = v___y_3533_;
v___y_3595_ = v___y_3534_;
v___y_3596_ = v___y_3535_;
v___y_3597_ = v___y_3536_;
v___y_3598_ = v___y_3537_;
v___y_3599_ = v___y_3538_;
goto v___jp_3591_;
}
}
else
{
lean_object* v_toCold_3719_; lean_object* v_currRecDepth_3720_; lean_object* v_ref_3721_; uint8_t v_diag_3722_; uint8_t v_suppressElabErrors_3723_; uint8_t v___x_3724_; lean_object* v_ref_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; 
v_toCold_3719_ = lean_ctor_get(v___y_3537_, 0);
v_currRecDepth_3720_ = lean_ctor_get(v___y_3537_, 1);
v_ref_3721_ = lean_ctor_get(v___y_3537_, 2);
v_diag_3722_ = lean_ctor_get_uint8(v___y_3537_, sizeof(void*)*3);
v_suppressElabErrors_3723_ = lean_ctor_get_uint8(v___y_3537_, sizeof(void*)*3 + 1);
v___x_3724_ = 0;
v_ref_3725_ = l_Lean_replaceRef(v_p_3527_, v_ref_3721_);
lean_dec(v_p_3527_);
lean_inc(v_currRecDepth_3720_);
lean_inc_ref(v_toCold_3719_);
v___x_3726_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3726_, 0, v_toCold_3719_);
lean_ctor_set(v___x_3726_, 1, v_currRecDepth_3720_);
lean_ctor_set(v___x_3726_, 2, v_ref_3725_);
lean_ctor_set_uint8(v___x_3726_, sizeof(void*)*3, v_diag_3722_);
lean_ctor_set_uint8(v___x_3726_, sizeof(void*)*3 + 1, v_suppressElabErrors_3723_);
v___x_3727_ = l_Lean_Elab_Tactic_addEMatchTheorem(v_params_3526_, v_id_3529_, v_a_3693_, v_k_3702_, v_minIndexable_3530_, v___x_3724_, v___x_3694_, v___y_3535_, v___y_3536_, v___x_3726_, v___y_3538_);
lean_dec_ref_known(v___x_3726_, 3);
return v___x_3727_;
}
}
case 1:
{
lean_del_object(v___x_3700_);
lean_dec(v_id_3529_);
if (v_incremental_3532_ == 0)
{
uint8_t v_eager_3728_; 
v_eager_3728_ = lean_ctor_get_uint8(v_a_3698_, 0);
lean_dec_ref_known(v_a_3698_, 0);
v___y_3642_ = v_eager_3728_;
v___y_3643_ = v_a_3693_;
v___y_3644_ = v___y_3535_;
v___y_3645_ = v___y_3536_;
v___y_3646_ = v___y_3537_;
v___y_3647_ = v___y_3538_;
goto v___jp_3641_;
}
else
{
lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v_a_3731_; lean_object* v___x_3733_; uint8_t v_isShared_3734_; uint8_t v_isSharedCheck_3738_; 
lean_dec_ref_known(v_a_3698_, 0);
lean_dec(v_a_3693_);
lean_dec(v_p_3527_);
lean_dec_ref(v_params_3526_);
v___x_3729_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__5, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__5);
v___x_3730_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_3729_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_, v___y_3538_);
v_a_3731_ = lean_ctor_get(v___x_3730_, 0);
v_isSharedCheck_3738_ = !lean_is_exclusive(v___x_3730_);
if (v_isSharedCheck_3738_ == 0)
{
v___x_3733_ = v___x_3730_;
v_isShared_3734_ = v_isSharedCheck_3738_;
goto v_resetjp_3732_;
}
else
{
lean_inc(v_a_3731_);
lean_dec(v___x_3730_);
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
case 2:
{
uint8_t v___x_3739_; lean_object* v___x_3740_; 
lean_del_object(v___x_3700_);
v___x_3739_ = 0;
lean_inc(v_a_3693_);
v___x_3740_ = l_Lean_Meta_Grind_isCasesAttrPredicateCandidate_x3f(v_a_3693_, v___x_3739_, v___y_3535_, v___y_3536_, v___y_3537_, v___y_3538_);
if (lean_obj_tag(v___x_3740_) == 0)
{
lean_object* v_a_3741_; 
v_a_3741_ = lean_ctor_get(v___x_3740_, 0);
lean_inc(v_a_3741_);
lean_dec_ref_known(v___x_3740_, 1);
if (lean_obj_tag(v_a_3741_) == 1)
{
lean_dec(v_a_3693_);
if (v_incremental_3532_ == 0)
{
lean_object* v_val_3742_; 
v_val_3742_ = lean_ctor_get(v_a_3741_, 0);
lean_inc(v_val_3742_);
lean_dec_ref_known(v_a_3741_, 1);
v___y_3683_ = v_val_3742_;
v___y_3684_ = v___y_3533_;
v___y_3685_ = v___y_3534_;
v___y_3686_ = v___y_3535_;
v___y_3687_ = v___y_3536_;
v___y_3688_ = v___y_3537_;
v___y_3689_ = v___y_3538_;
goto v___jp_3682_;
}
else
{
lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v_a_3745_; lean_object* v___x_3747_; uint8_t v_isShared_3748_; uint8_t v_isSharedCheck_3752_; 
lean_dec_ref_known(v_a_3741_, 1);
lean_dec(v_id_3529_);
lean_dec(v_p_3527_);
lean_dec_ref(v_params_3526_);
v___x_3743_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__5, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__5);
v___x_3744_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_3743_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_, v___y_3538_);
v_a_3745_ = lean_ctor_get(v___x_3744_, 0);
v_isSharedCheck_3752_ = !lean_is_exclusive(v___x_3744_);
if (v_isSharedCheck_3752_ == 0)
{
v___x_3747_ = v___x_3744_;
v_isShared_3748_ = v_isSharedCheck_3752_;
goto v_resetjp_3746_;
}
else
{
lean_inc(v_a_3745_);
lean_dec(v___x_3744_);
v___x_3747_ = lean_box(0);
v_isShared_3748_ = v_isSharedCheck_3752_;
goto v_resetjp_3746_;
}
v_resetjp_3746_:
{
lean_object* v___x_3750_; 
if (v_isShared_3748_ == 0)
{
v___x_3750_ = v___x_3747_;
goto v_reusejp_3749_;
}
else
{
lean_object* v_reuseFailAlloc_3751_; 
v_reuseFailAlloc_3751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3751_, 0, v_a_3745_);
v___x_3750_ = v_reuseFailAlloc_3751_;
goto v_reusejp_3749_;
}
v_reusejp_3749_:
{
return v___x_3750_;
}
}
}
}
else
{
lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v_a_3759_; lean_object* v___x_3761_; uint8_t v_isShared_3762_; uint8_t v_isSharedCheck_3766_; 
lean_dec(v_a_3741_);
lean_dec(v_id_3529_);
lean_dec(v_p_3527_);
lean_dec_ref(v_params_3526_);
v___x_3753_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__7, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__7_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__7);
v___x_3754_ = l_Lean_MessageData_ofConstName(v_a_3693_, v___x_3739_);
v___x_3755_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3755_, 0, v___x_3753_);
lean_ctor_set(v___x_3755_, 1, v___x_3754_);
v___x_3756_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__9, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__9_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__9);
v___x_3757_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3757_, 0, v___x_3755_);
lean_ctor_set(v___x_3757_, 1, v___x_3756_);
v___x_3758_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_3757_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_, v___y_3538_);
v_a_3759_ = lean_ctor_get(v___x_3758_, 0);
v_isSharedCheck_3766_ = !lean_is_exclusive(v___x_3758_);
if (v_isSharedCheck_3766_ == 0)
{
v___x_3761_ = v___x_3758_;
v_isShared_3762_ = v_isSharedCheck_3766_;
goto v_resetjp_3760_;
}
else
{
lean_inc(v_a_3759_);
lean_dec(v___x_3758_);
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
lean_object* v_a_3767_; lean_object* v___x_3769_; uint8_t v_isShared_3770_; uint8_t v_isSharedCheck_3774_; 
lean_dec(v_a_3693_);
lean_dec(v_id_3529_);
lean_dec(v_p_3527_);
lean_dec_ref(v_params_3526_);
v_a_3767_ = lean_ctor_get(v___x_3740_, 0);
v_isSharedCheck_3774_ = !lean_is_exclusive(v___x_3740_);
if (v_isSharedCheck_3774_ == 0)
{
v___x_3769_ = v___x_3740_;
v_isShared_3770_ = v_isSharedCheck_3774_;
goto v_resetjp_3768_;
}
else
{
lean_inc(v_a_3767_);
lean_dec(v___x_3740_);
v___x_3769_ = lean_box(0);
v_isShared_3770_ = v_isSharedCheck_3774_;
goto v_resetjp_3768_;
}
v_resetjp_3768_:
{
lean_object* v___x_3772_; 
if (v_isShared_3770_ == 0)
{
v___x_3772_ = v___x_3769_;
goto v_reusejp_3771_;
}
else
{
lean_object* v_reuseFailAlloc_3773_; 
v_reuseFailAlloc_3773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3773_, 0, v_a_3767_);
v___x_3772_ = v_reuseFailAlloc_3773_;
goto v_reusejp_3771_;
}
v_reusejp_3771_:
{
return v___x_3772_;
}
}
}
}
case 3:
{
lean_del_object(v___x_3700_);
v___y_3541_ = v___x_3694_;
v___y_3542_ = v_a_3693_;
v___y_3543_ = v___y_3533_;
v___y_3544_ = v___y_3534_;
v___y_3545_ = v___y_3535_;
v___y_3546_ = v___y_3536_;
v___y_3547_ = v___y_3537_;
v___y_3548_ = v___y_3538_;
goto v___jp_3540_;
}
case 4:
{
lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v_a_3777_; lean_object* v___x_3779_; uint8_t v_isShared_3780_; uint8_t v_isSharedCheck_3784_; 
lean_del_object(v___x_3700_);
lean_dec(v_a_3693_);
lean_dec(v_id_3529_);
lean_dec(v_p_3527_);
lean_dec_ref(v_params_3526_);
v___x_3775_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__11, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__11_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__11);
v___x_3776_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_3775_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_, v___y_3538_);
v_a_3777_ = lean_ctor_get(v___x_3776_, 0);
v_isSharedCheck_3784_ = !lean_is_exclusive(v___x_3776_);
if (v_isSharedCheck_3784_ == 0)
{
v___x_3779_ = v___x_3776_;
v_isShared_3780_ = v_isSharedCheck_3784_;
goto v_resetjp_3778_;
}
else
{
lean_inc(v_a_3777_);
lean_dec(v___x_3776_);
v___x_3779_ = lean_box(0);
v_isShared_3780_ = v_isSharedCheck_3784_;
goto v_resetjp_3778_;
}
v_resetjp_3778_:
{
lean_object* v___x_3782_; 
if (v_isShared_3780_ == 0)
{
v___x_3782_ = v___x_3779_;
goto v_reusejp_3781_;
}
else
{
lean_object* v_reuseFailAlloc_3783_; 
v_reuseFailAlloc_3783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3783_, 0, v_a_3777_);
v___x_3782_ = v_reuseFailAlloc_3783_;
goto v_reusejp_3781_;
}
v_reusejp_3781_:
{
return v___x_3782_;
}
}
}
case 5:
{
lean_object* v_prio_3785_; lean_object* v___x_3786_; 
lean_del_object(v___x_3700_);
lean_dec(v_id_3529_);
lean_dec(v_p_3527_);
v_prio_3785_ = lean_ctor_get(v_a_3698_, 0);
lean_inc(v_prio_3785_);
lean_dec_ref_known(v_a_3698_, 1);
v___x_3786_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_3530_, v___y_3535_, v___y_3536_, v___y_3537_, v___y_3538_);
if (lean_obj_tag(v___x_3786_) == 0)
{
lean_object* v___x_3788_; uint8_t v_isShared_3789_; uint8_t v_isSharedCheck_3810_; 
v_isSharedCheck_3810_ = !lean_is_exclusive(v___x_3786_);
if (v_isSharedCheck_3810_ == 0)
{
lean_object* v_unused_3811_; 
v_unused_3811_ = lean_ctor_get(v___x_3786_, 0);
lean_dec(v_unused_3811_);
v___x_3788_ = v___x_3786_;
v_isShared_3789_ = v_isSharedCheck_3810_;
goto v_resetjp_3787_;
}
else
{
lean_dec(v___x_3786_);
v___x_3788_ = lean_box(0);
v_isShared_3789_ = v_isSharedCheck_3810_;
goto v_resetjp_3787_;
}
v_resetjp_3787_:
{
lean_object* v_config_3790_; lean_object* v_extensions_3791_; lean_object* v_extra_3792_; lean_object* v_extraInj_3793_; lean_object* v_extraFacts_3794_; lean_object* v_symPrios_3795_; lean_object* v_norm_3796_; lean_object* v_normProcs_3797_; lean_object* v_anchorRefs_x3f_3798_; lean_object* v___x_3800_; uint8_t v_isShared_3801_; uint8_t v_isSharedCheck_3809_; 
v_config_3790_ = lean_ctor_get(v_params_3526_, 0);
v_extensions_3791_ = lean_ctor_get(v_params_3526_, 1);
v_extra_3792_ = lean_ctor_get(v_params_3526_, 2);
v_extraInj_3793_ = lean_ctor_get(v_params_3526_, 3);
v_extraFacts_3794_ = lean_ctor_get(v_params_3526_, 4);
v_symPrios_3795_ = lean_ctor_get(v_params_3526_, 5);
v_norm_3796_ = lean_ctor_get(v_params_3526_, 6);
v_normProcs_3797_ = lean_ctor_get(v_params_3526_, 7);
v_anchorRefs_x3f_3798_ = lean_ctor_get(v_params_3526_, 8);
v_isSharedCheck_3809_ = !lean_is_exclusive(v_params_3526_);
if (v_isSharedCheck_3809_ == 0)
{
v___x_3800_ = v_params_3526_;
v_isShared_3801_ = v_isSharedCheck_3809_;
goto v_resetjp_3799_;
}
else
{
lean_inc(v_anchorRefs_x3f_3798_);
lean_inc(v_normProcs_3797_);
lean_inc(v_norm_3796_);
lean_inc(v_symPrios_3795_);
lean_inc(v_extraFacts_3794_);
lean_inc(v_extraInj_3793_);
lean_inc(v_extra_3792_);
lean_inc(v_extensions_3791_);
lean_inc(v_config_3790_);
lean_dec(v_params_3526_);
v___x_3800_ = lean_box(0);
v_isShared_3801_ = v_isSharedCheck_3809_;
goto v_resetjp_3799_;
}
v_resetjp_3799_:
{
lean_object* v___x_3802_; lean_object* v___x_3804_; 
v___x_3802_ = l_Lean_Meta_Grind_SymbolPriorities_insert(v_symPrios_3795_, v_a_3693_, v_prio_3785_);
if (v_isShared_3801_ == 0)
{
lean_ctor_set(v___x_3800_, 5, v___x_3802_);
v___x_3804_ = v___x_3800_;
goto v_reusejp_3803_;
}
else
{
lean_object* v_reuseFailAlloc_3808_; 
v_reuseFailAlloc_3808_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3808_, 0, v_config_3790_);
lean_ctor_set(v_reuseFailAlloc_3808_, 1, v_extensions_3791_);
lean_ctor_set(v_reuseFailAlloc_3808_, 2, v_extra_3792_);
lean_ctor_set(v_reuseFailAlloc_3808_, 3, v_extraInj_3793_);
lean_ctor_set(v_reuseFailAlloc_3808_, 4, v_extraFacts_3794_);
lean_ctor_set(v_reuseFailAlloc_3808_, 5, v___x_3802_);
lean_ctor_set(v_reuseFailAlloc_3808_, 6, v_norm_3796_);
lean_ctor_set(v_reuseFailAlloc_3808_, 7, v_normProcs_3797_);
lean_ctor_set(v_reuseFailAlloc_3808_, 8, v_anchorRefs_x3f_3798_);
v___x_3804_ = v_reuseFailAlloc_3808_;
goto v_reusejp_3803_;
}
v_reusejp_3803_:
{
lean_object* v___x_3806_; 
if (v_isShared_3789_ == 0)
{
lean_ctor_set(v___x_3788_, 0, v___x_3804_);
v___x_3806_ = v___x_3788_;
goto v_reusejp_3805_;
}
else
{
lean_object* v_reuseFailAlloc_3807_; 
v_reuseFailAlloc_3807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3807_, 0, v___x_3804_);
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
else
{
lean_object* v_a_3812_; lean_object* v___x_3814_; uint8_t v_isShared_3815_; uint8_t v_isSharedCheck_3819_; 
lean_dec(v_prio_3785_);
lean_dec(v_a_3693_);
lean_dec_ref(v_params_3526_);
v_a_3812_ = lean_ctor_get(v___x_3786_, 0);
v_isSharedCheck_3819_ = !lean_is_exclusive(v___x_3786_);
if (v_isSharedCheck_3819_ == 0)
{
v___x_3814_ = v___x_3786_;
v_isShared_3815_ = v_isSharedCheck_3819_;
goto v_resetjp_3813_;
}
else
{
lean_inc(v_a_3812_);
lean_dec(v___x_3786_);
v___x_3814_ = lean_box(0);
v_isShared_3815_ = v_isSharedCheck_3819_;
goto v_resetjp_3813_;
}
v_resetjp_3813_:
{
lean_object* v___x_3817_; 
if (v_isShared_3815_ == 0)
{
v___x_3817_ = v___x_3814_;
goto v_reusejp_3816_;
}
else
{
lean_object* v_reuseFailAlloc_3818_; 
v_reuseFailAlloc_3818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3818_, 0, v_a_3812_);
v___x_3817_ = v_reuseFailAlloc_3818_;
goto v_reusejp_3816_;
}
v_reusejp_3816_:
{
return v___x_3817_;
}
}
}
}
case 6:
{
lean_object* v___x_3820_; 
lean_del_object(v___x_3700_);
lean_dec(v_id_3529_);
lean_dec(v_p_3527_);
v___x_3820_ = l_Lean_Meta_Grind_mkInjectiveTheorem(v_a_3693_, v___y_3535_, v___y_3536_, v___y_3537_, v___y_3538_);
if (lean_obj_tag(v___x_3820_) == 0)
{
lean_object* v_a_3821_; lean_object* v___x_3823_; uint8_t v_isShared_3824_; uint8_t v_isSharedCheck_3845_; 
v_a_3821_ = lean_ctor_get(v___x_3820_, 0);
v_isSharedCheck_3845_ = !lean_is_exclusive(v___x_3820_);
if (v_isSharedCheck_3845_ == 0)
{
v___x_3823_ = v___x_3820_;
v_isShared_3824_ = v_isSharedCheck_3845_;
goto v_resetjp_3822_;
}
else
{
lean_inc(v_a_3821_);
lean_dec(v___x_3820_);
v___x_3823_ = lean_box(0);
v_isShared_3824_ = v_isSharedCheck_3845_;
goto v_resetjp_3822_;
}
v_resetjp_3822_:
{
lean_object* v_config_3825_; lean_object* v_extensions_3826_; lean_object* v_extra_3827_; lean_object* v_extraInj_3828_; lean_object* v_extraFacts_3829_; lean_object* v_symPrios_3830_; lean_object* v_norm_3831_; lean_object* v_normProcs_3832_; lean_object* v_anchorRefs_x3f_3833_; lean_object* v___x_3835_; uint8_t v_isShared_3836_; uint8_t v_isSharedCheck_3844_; 
v_config_3825_ = lean_ctor_get(v_params_3526_, 0);
v_extensions_3826_ = lean_ctor_get(v_params_3526_, 1);
v_extra_3827_ = lean_ctor_get(v_params_3526_, 2);
v_extraInj_3828_ = lean_ctor_get(v_params_3526_, 3);
v_extraFacts_3829_ = lean_ctor_get(v_params_3526_, 4);
v_symPrios_3830_ = lean_ctor_get(v_params_3526_, 5);
v_norm_3831_ = lean_ctor_get(v_params_3526_, 6);
v_normProcs_3832_ = lean_ctor_get(v_params_3526_, 7);
v_anchorRefs_x3f_3833_ = lean_ctor_get(v_params_3526_, 8);
v_isSharedCheck_3844_ = !lean_is_exclusive(v_params_3526_);
if (v_isSharedCheck_3844_ == 0)
{
v___x_3835_ = v_params_3526_;
v_isShared_3836_ = v_isSharedCheck_3844_;
goto v_resetjp_3834_;
}
else
{
lean_inc(v_anchorRefs_x3f_3833_);
lean_inc(v_normProcs_3832_);
lean_inc(v_norm_3831_);
lean_inc(v_symPrios_3830_);
lean_inc(v_extraFacts_3829_);
lean_inc(v_extraInj_3828_);
lean_inc(v_extra_3827_);
lean_inc(v_extensions_3826_);
lean_inc(v_config_3825_);
lean_dec(v_params_3526_);
v___x_3835_ = lean_box(0);
v_isShared_3836_ = v_isSharedCheck_3844_;
goto v_resetjp_3834_;
}
v_resetjp_3834_:
{
lean_object* v___x_3837_; lean_object* v___x_3839_; 
v___x_3837_ = l_Lean_PersistentArray_push___redArg(v_extraInj_3828_, v_a_3821_);
if (v_isShared_3836_ == 0)
{
lean_ctor_set(v___x_3835_, 3, v___x_3837_);
v___x_3839_ = v___x_3835_;
goto v_reusejp_3838_;
}
else
{
lean_object* v_reuseFailAlloc_3843_; 
v_reuseFailAlloc_3843_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3843_, 0, v_config_3825_);
lean_ctor_set(v_reuseFailAlloc_3843_, 1, v_extensions_3826_);
lean_ctor_set(v_reuseFailAlloc_3843_, 2, v_extra_3827_);
lean_ctor_set(v_reuseFailAlloc_3843_, 3, v___x_3837_);
lean_ctor_set(v_reuseFailAlloc_3843_, 4, v_extraFacts_3829_);
lean_ctor_set(v_reuseFailAlloc_3843_, 5, v_symPrios_3830_);
lean_ctor_set(v_reuseFailAlloc_3843_, 6, v_norm_3831_);
lean_ctor_set(v_reuseFailAlloc_3843_, 7, v_normProcs_3832_);
lean_ctor_set(v_reuseFailAlloc_3843_, 8, v_anchorRefs_x3f_3833_);
v___x_3839_ = v_reuseFailAlloc_3843_;
goto v_reusejp_3838_;
}
v_reusejp_3838_:
{
lean_object* v___x_3841_; 
if (v_isShared_3824_ == 0)
{
lean_ctor_set(v___x_3823_, 0, v___x_3839_);
v___x_3841_ = v___x_3823_;
goto v_reusejp_3840_;
}
else
{
lean_object* v_reuseFailAlloc_3842_; 
v_reuseFailAlloc_3842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3842_, 0, v___x_3839_);
v___x_3841_ = v_reuseFailAlloc_3842_;
goto v_reusejp_3840_;
}
v_reusejp_3840_:
{
return v___x_3841_;
}
}
}
}
}
else
{
lean_object* v_a_3846_; lean_object* v___x_3848_; uint8_t v_isShared_3849_; uint8_t v_isSharedCheck_3853_; 
lean_dec_ref(v_params_3526_);
v_a_3846_ = lean_ctor_get(v___x_3820_, 0);
v_isSharedCheck_3853_ = !lean_is_exclusive(v___x_3820_);
if (v_isSharedCheck_3853_ == 0)
{
v___x_3848_ = v___x_3820_;
v_isShared_3849_ = v_isSharedCheck_3853_;
goto v_resetjp_3847_;
}
else
{
lean_inc(v_a_3846_);
lean_dec(v___x_3820_);
v___x_3848_ = lean_box(0);
v_isShared_3849_ = v_isSharedCheck_3853_;
goto v_resetjp_3847_;
}
v_resetjp_3847_:
{
lean_object* v___x_3851_; 
if (v_isShared_3849_ == 0)
{
v___x_3851_ = v___x_3848_;
goto v_reusejp_3850_;
}
else
{
lean_object* v_reuseFailAlloc_3852_; 
v_reuseFailAlloc_3852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3852_, 0, v_a_3846_);
v___x_3851_ = v_reuseFailAlloc_3852_;
goto v_reusejp_3850_;
}
v_reusejp_3850_:
{
return v___x_3851_;
}
}
}
}
case 7:
{
lean_object* v___x_3854_; lean_object* v___x_3856_; 
lean_dec(v_id_3529_);
lean_dec(v_p_3527_);
v___x_3854_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertFunCC(v_params_3526_, v_a_3693_);
if (v_isShared_3701_ == 0)
{
lean_ctor_set(v___x_3700_, 0, v___x_3854_);
v___x_3856_ = v___x_3700_;
goto v_reusejp_3855_;
}
else
{
lean_object* v_reuseFailAlloc_3857_; 
v_reuseFailAlloc_3857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3857_, 0, v___x_3854_);
v___x_3856_ = v_reuseFailAlloc_3857_;
goto v_reusejp_3855_;
}
v_reusejp_3855_:
{
return v___x_3856_;
}
}
case 8:
{
lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v_a_3860_; lean_object* v___x_3862_; uint8_t v_isShared_3863_; uint8_t v_isSharedCheck_3867_; 
lean_dec_ref_known(v_a_3698_, 0);
lean_del_object(v___x_3700_);
lean_dec(v_a_3693_);
lean_dec(v_id_3529_);
lean_dec(v_p_3527_);
lean_dec_ref(v_params_3526_);
v___x_3858_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__13, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__13_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__13);
v___x_3859_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_3858_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_, v___y_3538_);
v_a_3860_ = lean_ctor_get(v___x_3859_, 0);
v_isSharedCheck_3867_ = !lean_is_exclusive(v___x_3859_);
if (v_isSharedCheck_3867_ == 0)
{
v___x_3862_ = v___x_3859_;
v_isShared_3863_ = v_isSharedCheck_3867_;
goto v_resetjp_3861_;
}
else
{
lean_inc(v_a_3860_);
lean_dec(v___x_3859_);
v___x_3862_ = lean_box(0);
v_isShared_3863_ = v_isSharedCheck_3867_;
goto v_resetjp_3861_;
}
v_resetjp_3861_:
{
lean_object* v___x_3865_; 
if (v_isShared_3863_ == 0)
{
v___x_3865_ = v___x_3862_;
goto v_reusejp_3864_;
}
else
{
lean_object* v_reuseFailAlloc_3866_; 
v_reuseFailAlloc_3866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3866_, 0, v_a_3860_);
v___x_3865_ = v_reuseFailAlloc_3866_;
goto v_reusejp_3864_;
}
v_reusejp_3864_:
{
return v___x_3865_;
}
}
}
case 9:
{
lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v_a_3870_; lean_object* v___x_3872_; uint8_t v_isShared_3873_; uint8_t v_isSharedCheck_3877_; 
lean_del_object(v___x_3700_);
lean_dec(v_a_3693_);
lean_dec(v_id_3529_);
lean_dec(v_p_3527_);
lean_dec_ref(v_params_3526_);
v___x_3868_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__15, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__15_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__15);
v___x_3869_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_3868_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_, v___y_3538_);
v_a_3870_ = lean_ctor_get(v___x_3869_, 0);
v_isSharedCheck_3877_ = !lean_is_exclusive(v___x_3869_);
if (v_isSharedCheck_3877_ == 0)
{
v___x_3872_ = v___x_3869_;
v_isShared_3873_ = v_isSharedCheck_3877_;
goto v_resetjp_3871_;
}
else
{
lean_inc(v_a_3870_);
lean_dec(v___x_3869_);
v___x_3872_ = lean_box(0);
v_isShared_3873_ = v_isSharedCheck_3877_;
goto v_resetjp_3871_;
}
v_resetjp_3871_:
{
lean_object* v___x_3875_; 
if (v_isShared_3873_ == 0)
{
v___x_3875_ = v___x_3872_;
goto v_reusejp_3874_;
}
else
{
lean_object* v_reuseFailAlloc_3876_; 
v_reuseFailAlloc_3876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3876_, 0, v_a_3870_);
v___x_3875_ = v_reuseFailAlloc_3876_;
goto v_reusejp_3874_;
}
v_reusejp_3874_:
{
return v___x_3875_;
}
}
}
case 10:
{
lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v_a_3880_; lean_object* v___x_3882_; uint8_t v_isShared_3883_; uint8_t v_isSharedCheck_3887_; 
lean_del_object(v___x_3700_);
lean_dec(v_a_3693_);
lean_dec(v_id_3529_);
lean_dec(v_p_3527_);
lean_dec_ref(v_params_3526_);
v___x_3878_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__17, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__17_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__17);
v___x_3879_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_3878_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_, v___y_3538_);
v_a_3880_ = lean_ctor_get(v___x_3879_, 0);
v_isSharedCheck_3887_ = !lean_is_exclusive(v___x_3879_);
if (v_isSharedCheck_3887_ == 0)
{
v___x_3882_ = v___x_3879_;
v_isShared_3883_ = v_isSharedCheck_3887_;
goto v_resetjp_3881_;
}
else
{
lean_inc(v_a_3880_);
lean_dec(v___x_3879_);
v___x_3882_ = lean_box(0);
v_isShared_3883_ = v_isSharedCheck_3887_;
goto v_resetjp_3881_;
}
v_resetjp_3881_:
{
lean_object* v___x_3885_; 
if (v_isShared_3883_ == 0)
{
v___x_3885_ = v___x_3882_;
goto v_reusejp_3884_;
}
else
{
lean_object* v_reuseFailAlloc_3886_; 
v_reuseFailAlloc_3886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3886_, 0, v_a_3880_);
v___x_3885_ = v_reuseFailAlloc_3886_;
goto v_reusejp_3884_;
}
v_reusejp_3884_:
{
return v___x_3885_;
}
}
}
default: 
{
lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v_a_3890_; lean_object* v___x_3892_; uint8_t v_isShared_3893_; uint8_t v_isSharedCheck_3897_; 
lean_del_object(v___x_3700_);
lean_dec(v_a_3693_);
lean_dec(v_id_3529_);
lean_dec(v_p_3527_);
lean_dec_ref(v_params_3526_);
v___x_3888_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__19, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__19_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__19);
v___x_3889_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_3888_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_, v___y_3538_);
v_a_3890_ = lean_ctor_get(v___x_3889_, 0);
v_isSharedCheck_3897_ = !lean_is_exclusive(v___x_3889_);
if (v_isSharedCheck_3897_ == 0)
{
v___x_3892_ = v___x_3889_;
v_isShared_3893_ = v_isSharedCheck_3897_;
goto v_resetjp_3891_;
}
else
{
lean_inc(v_a_3890_);
lean_dec(v___x_3889_);
v___x_3892_ = lean_box(0);
v_isShared_3893_ = v_isSharedCheck_3897_;
goto v_resetjp_3891_;
}
v_resetjp_3891_:
{
lean_object* v___x_3895_; 
if (v_isShared_3893_ == 0)
{
v___x_3895_ = v___x_3892_;
goto v_reusejp_3894_;
}
else
{
lean_object* v_reuseFailAlloc_3896_; 
v_reuseFailAlloc_3896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3896_, 0, v_a_3890_);
v___x_3895_ = v_reuseFailAlloc_3896_;
goto v_reusejp_3894_;
}
v_reusejp_3894_:
{
return v___x_3895_;
}
}
}
}
}
}
else
{
lean_object* v_a_3899_; lean_object* v___x_3901_; uint8_t v_isShared_3902_; uint8_t v_isSharedCheck_3906_; 
lean_dec(v_a_3693_);
lean_dec(v_id_3529_);
lean_dec(v_p_3527_);
lean_dec_ref(v_params_3526_);
v_a_3899_ = lean_ctor_get(v___x_3697_, 0);
v_isSharedCheck_3906_ = !lean_is_exclusive(v___x_3697_);
if (v_isSharedCheck_3906_ == 0)
{
v___x_3901_ = v___x_3697_;
v_isShared_3902_ = v_isSharedCheck_3906_;
goto v_resetjp_3900_;
}
else
{
lean_inc(v_a_3899_);
lean_dec(v___x_3697_);
v___x_3901_ = lean_box(0);
v_isShared_3902_ = v_isSharedCheck_3906_;
goto v_resetjp_3900_;
}
v_resetjp_3900_:
{
lean_object* v___x_3904_; 
if (v_isShared_3902_ == 0)
{
v___x_3904_ = v___x_3901_;
goto v_reusejp_3903_;
}
else
{
lean_object* v_reuseFailAlloc_3905_; 
v_reuseFailAlloc_3905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3905_, 0, v_a_3899_);
v___x_3904_ = v_reuseFailAlloc_3905_;
goto v_reusejp_3903_;
}
v_reusejp_3903_:
{
return v___x_3904_;
}
}
}
}
else
{
lean_dec(v_mod_x3f_3528_);
v___y_3541_ = v___x_3694_;
v___y_3542_ = v_a_3693_;
v___y_3543_ = v___y_3533_;
v___y_3544_ = v___y_3534_;
v___y_3545_ = v___y_3535_;
v___y_3546_ = v___y_3536_;
v___y_3547_ = v___y_3537_;
v___y_3548_ = v___y_3538_;
goto v___jp_3540_;
}
}
else
{
lean_object* v_a_3907_; lean_object* v___x_3909_; uint8_t v_isShared_3910_; uint8_t v_isSharedCheck_3914_; 
lean_dec(v_a_3693_);
lean_dec(v_id_3529_);
lean_dec(v_mod_x3f_3528_);
lean_dec(v_p_3527_);
lean_dec_ref(v_params_3526_);
v_a_3907_ = lean_ctor_get(v___x_3695_, 0);
v_isSharedCheck_3914_ = !lean_is_exclusive(v___x_3695_);
if (v_isSharedCheck_3914_ == 0)
{
v___x_3909_ = v___x_3695_;
v_isShared_3910_ = v_isSharedCheck_3914_;
goto v_resetjp_3908_;
}
else
{
lean_inc(v_a_3907_);
lean_dec(v___x_3695_);
v___x_3909_ = lean_box(0);
v_isShared_3910_ = v_isSharedCheck_3914_;
goto v_resetjp_3908_;
}
v_resetjp_3908_:
{
lean_object* v___x_3912_; 
if (v_isShared_3910_ == 0)
{
v___x_3912_ = v___x_3909_;
goto v_reusejp_3911_;
}
else
{
lean_object* v_reuseFailAlloc_3913_; 
v_reuseFailAlloc_3913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3913_, 0, v_a_3907_);
v___x_3912_ = v_reuseFailAlloc_3913_;
goto v_reusejp_3911_;
}
v_reusejp_3911_:
{
return v___x_3912_;
}
}
}
}
v___jp_3915_:
{
lean_object* v_a_3917_; lean_object* v___x_3919_; uint8_t v_isShared_3920_; uint8_t v_isSharedCheck_3926_; 
v_a_3917_ = lean_ctor_get(v___y_3916_, 0);
v_isSharedCheck_3926_ = !lean_is_exclusive(v___y_3916_);
if (v_isSharedCheck_3926_ == 0)
{
v___x_3919_ = v___y_3916_;
v_isShared_3920_ = v_isSharedCheck_3926_;
goto v_resetjp_3918_;
}
else
{
lean_inc(v_a_3917_);
lean_dec(v___y_3916_);
v___x_3919_ = lean_box(0);
v_isShared_3920_ = v_isSharedCheck_3926_;
goto v_resetjp_3918_;
}
v_resetjp_3918_:
{
if (lean_obj_tag(v_a_3917_) == 0)
{
lean_object* v_a_3921_; lean_object* v___x_3923_; 
lean_dec(v_id_3529_);
lean_dec(v_mod_x3f_3528_);
lean_dec(v_p_3527_);
lean_dec_ref(v_params_3526_);
v_a_3921_ = lean_ctor_get(v_a_3917_, 0);
lean_inc(v_a_3921_);
lean_dec_ref_known(v_a_3917_, 1);
if (v_isShared_3920_ == 0)
{
lean_ctor_set(v___x_3919_, 0, v_a_3921_);
v___x_3923_ = v___x_3919_;
goto v_reusejp_3922_;
}
else
{
lean_object* v_reuseFailAlloc_3924_; 
v_reuseFailAlloc_3924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3924_, 0, v_a_3921_);
v___x_3923_ = v_reuseFailAlloc_3924_;
goto v_reusejp_3922_;
}
v_reusejp_3922_:
{
return v___x_3923_;
}
}
else
{
lean_object* v_a_3925_; 
lean_del_object(v___x_3919_);
v_a_3925_ = lean_ctor_get(v_a_3917_, 0);
lean_inc(v_a_3925_);
lean_dec_ref_known(v_a_3917_, 1);
v_a_3693_ = v_a_3925_;
goto v___jp_3692_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___boxed(lean_object* v_params_4006_, lean_object* v_p_4007_, lean_object* v_mod_x3f_4008_, lean_object* v_id_4009_, lean_object* v_minIndexable_4010_, lean_object* v_only_4011_, lean_object* v_incremental_4012_, lean_object* v___y_4013_, lean_object* v___y_4014_, lean_object* v___y_4015_, lean_object* v___y_4016_, lean_object* v___y_4017_, lean_object* v___y_4018_, lean_object* v___y_4019_){
_start:
{
uint8_t v_minIndexable_boxed_4020_; uint8_t v_only_boxed_4021_; uint8_t v_incremental_boxed_4022_; lean_object* v_res_4023_; 
v_minIndexable_boxed_4020_ = lean_unbox(v_minIndexable_4010_);
v_only_boxed_4021_ = lean_unbox(v_only_4011_);
v_incremental_boxed_4022_ = lean_unbox(v_incremental_4012_);
v_res_4023_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam(v_params_4006_, v_p_4007_, v_mod_x3f_4008_, v_id_4009_, v_minIndexable_boxed_4020_, v_only_boxed_4021_, v_incremental_boxed_4022_, v___y_4013_, v___y_4014_, v___y_4015_, v___y_4016_, v___y_4017_, v___y_4018_);
lean_dec(v___y_4018_);
lean_dec_ref(v___y_4017_);
lean_dec(v___y_4016_);
lean_dec_ref(v___y_4015_);
lean_dec(v___y_4014_);
lean_dec_ref(v___y_4013_);
return v_res_4023_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0(lean_object* v_p_4024_, lean_object* v_id_4025_, uint8_t v_minIndexable_4026_, lean_object* v_as_4027_, lean_object* v_as_x27_4028_, lean_object* v_b_4029_, lean_object* v_a_4030_, lean_object* v___y_4031_, lean_object* v___y_4032_, lean_object* v___y_4033_, lean_object* v___y_4034_, lean_object* v___y_4035_, lean_object* v___y_4036_){
_start:
{
lean_object* v___x_4038_; 
v___x_4038_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0___redArg(v_p_4024_, v_id_4025_, v_minIndexable_4026_, v_as_x27_4028_, v_b_4029_, v___y_4033_, v___y_4034_, v___y_4035_, v___y_4036_);
return v___x_4038_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0___boxed(lean_object* v_p_4039_, lean_object* v_id_4040_, lean_object* v_minIndexable_4041_, lean_object* v_as_4042_, lean_object* v_as_x27_4043_, lean_object* v_b_4044_, lean_object* v_a_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_, lean_object* v___y_4052_){
_start:
{
uint8_t v_minIndexable_boxed_4053_; lean_object* v_res_4054_; 
v_minIndexable_boxed_4053_ = lean_unbox(v_minIndexable_4041_);
v_res_4054_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0(v_p_4039_, v_id_4040_, v_minIndexable_boxed_4053_, v_as_4042_, v_as_x27_4043_, v_b_4044_, v_a_4045_, v___y_4046_, v___y_4047_, v___y_4048_, v___y_4049_, v___y_4050_, v___y_4051_);
lean_dec(v___y_4051_);
lean_dec_ref(v___y_4050_);
lean_dec(v___y_4049_);
lean_dec_ref(v___y_4048_);
lean_dec(v___y_4047_);
lean_dec_ref(v___y_4046_);
lean_dec(v_as_x27_4043_);
lean_dec(v_as_4042_);
lean_dec(v_p_4039_);
return v_res_4054_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2(lean_object* v_as_4055_, lean_object* v_as_x27_4056_, lean_object* v_b_4057_, lean_object* v_a_4058_, lean_object* v___y_4059_, lean_object* v___y_4060_, lean_object* v___y_4061_, lean_object* v___y_4062_, lean_object* v___y_4063_, lean_object* v___y_4064_){
_start:
{
lean_object* v___x_4066_; 
v___x_4066_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2___redArg(v_as_x27_4056_, v_b_4057_);
return v___x_4066_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2___boxed(lean_object* v_as_4067_, lean_object* v_as_x27_4068_, lean_object* v_b_4069_, lean_object* v_a_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_, lean_object* v___y_4077_){
_start:
{
lean_object* v_res_4078_; 
v_res_4078_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2(v_as_4067_, v_as_x27_4068_, v_b_4069_, v_a_4070_, v___y_4071_, v___y_4072_, v___y_4073_, v___y_4074_, v___y_4075_, v___y_4076_);
lean_dec(v___y_4076_);
lean_dec_ref(v___y_4075_);
lean_dec(v___y_4074_);
lean_dec_ref(v___y_4073_);
lean_dec(v___y_4072_);
lean_dec_ref(v___y_4071_);
lean_dec(v_as_x27_4068_);
lean_dec(v_as_4067_);
return v_res_4078_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3(lean_object* v_00_u03b1_4079_, lean_object* v_ref_4080_, lean_object* v_msg_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_, lean_object* v___y_4086_, lean_object* v___y_4087_){
_start:
{
lean_object* v___x_4089_; 
v___x_4089_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg(v_ref_4080_, v_msg_4081_, v___y_4082_, v___y_4083_, v___y_4084_, v___y_4085_, v___y_4086_, v___y_4087_);
return v___x_4089_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___boxed(lean_object* v_00_u03b1_4090_, lean_object* v_ref_4091_, lean_object* v_msg_4092_, lean_object* v___y_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_, lean_object* v___y_4099_){
_start:
{
lean_object* v_res_4100_; 
v_res_4100_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3(v_00_u03b1_4090_, v_ref_4091_, v_msg_4092_, v___y_4093_, v___y_4094_, v___y_4095_, v___y_4096_, v___y_4097_, v___y_4098_);
lean_dec(v___y_4098_);
lean_dec_ref(v___y_4097_);
lean_dec(v___y_4096_);
lean_dec_ref(v___y_4095_);
lean_dec(v___y_4094_);
lean_dec_ref(v___y_4093_);
lean_dec(v_ref_4091_);
return v_res_4100_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4(lean_object* v_p_4101_, lean_object* v_id_4102_, uint8_t v_minIndexable_4103_, lean_object* v_as_4104_, lean_object* v_as_x27_4105_, lean_object* v_b_4106_, lean_object* v_a_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_, lean_object* v___y_4111_, lean_object* v___y_4112_, lean_object* v___y_4113_){
_start:
{
lean_object* v___x_4115_; 
v___x_4115_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4___redArg(v_p_4101_, v_id_4102_, v_minIndexable_4103_, v_as_x27_4105_, v_b_4106_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_);
return v___x_4115_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4___boxed(lean_object* v_p_4116_, lean_object* v_id_4117_, lean_object* v_minIndexable_4118_, lean_object* v_as_4119_, lean_object* v_as_x27_4120_, lean_object* v_b_4121_, lean_object* v_a_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_, lean_object* v___y_4125_, lean_object* v___y_4126_, lean_object* v___y_4127_, lean_object* v___y_4128_, lean_object* v___y_4129_){
_start:
{
uint8_t v_minIndexable_boxed_4130_; lean_object* v_res_4131_; 
v_minIndexable_boxed_4130_ = lean_unbox(v_minIndexable_4118_);
v_res_4131_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4(v_p_4116_, v_id_4117_, v_minIndexable_boxed_4130_, v_as_4119_, v_as_x27_4120_, v_b_4121_, v_a_4122_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_, v___y_4127_, v___y_4128_);
lean_dec(v___y_4128_);
lean_dec_ref(v___y_4127_);
lean_dec(v___y_4126_);
lean_dec_ref(v___y_4125_);
lean_dec(v___y_4124_);
lean_dec_ref(v___y_4123_);
lean_dec(v_as_x27_4120_);
lean_dec(v_as_4119_);
lean_dec(v_p_4116_);
return v_res_4131_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__6(lean_object* v_givenName_4132_, uint8_t v_skipAuxDecl_4133_, lean_object* v_auxDeclToFullName_4134_, lean_object* v___x_4135_, lean_object* v_givenNameView_4136_, lean_object* v_as_4137_, lean_object* v_i_4138_, lean_object* v_a_4139_){
_start:
{
lean_object* v___x_4140_; 
v___x_4140_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__6___redArg(v_givenName_4132_, v_skipAuxDecl_4133_, v_auxDeclToFullName_4134_, v___x_4135_, v_givenNameView_4136_, v_as_4137_, v_i_4138_);
return v___x_4140_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__6___boxed(lean_object* v_givenName_4141_, lean_object* v_skipAuxDecl_4142_, lean_object* v_auxDeclToFullName_4143_, lean_object* v___x_4144_, lean_object* v_givenNameView_4145_, lean_object* v_as_4146_, lean_object* v_i_4147_, lean_object* v_a_4148_){
_start:
{
uint8_t v_skipAuxDecl_boxed_4149_; lean_object* v_res_4150_; 
v_skipAuxDecl_boxed_4149_ = lean_unbox(v_skipAuxDecl_4142_);
v_res_4150_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__6(v_givenName_4141_, v_skipAuxDecl_boxed_4149_, v_auxDeclToFullName_4143_, v___x_4144_, v_givenNameView_4145_, v_as_4146_, v_i_4147_, v_a_4148_);
lean_dec_ref(v_as_4146_);
lean_dec(v_auxDeclToFullName_4143_);
lean_dec(v_givenName_4141_);
return v_res_4150_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__9(lean_object* v_localDecl_x3f_4151_, lean_object* v_givenName_4152_, lean_object* v_as_4153_, lean_object* v_i_4154_, lean_object* v_a_4155_){
_start:
{
lean_object* v___x_4156_; 
v___x_4156_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__9___redArg(v_localDecl_x3f_4151_, v_givenName_4152_, v_as_4153_, v_i_4154_);
return v___x_4156_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__9___boxed(lean_object* v_localDecl_x3f_4157_, lean_object* v_givenName_4158_, lean_object* v_as_4159_, lean_object* v_i_4160_, lean_object* v_a_4161_){
_start:
{
lean_object* v_res_4162_; 
v_res_4162_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__9(v_localDecl_x3f_4157_, v_givenName_4158_, v_as_4159_, v_i_4160_, v_a_4161_);
lean_dec_ref(v_as_4159_);
lean_dec(v_givenName_4158_);
lean_dec(v_localDecl_x3f_4157_);
return v_res_4162_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__7_spec__8(lean_object* v_givenName_4163_, uint8_t v_skipAuxDecl_4164_, lean_object* v_auxDeclToFullName_4165_, lean_object* v___x_4166_, lean_object* v_givenNameView_4167_, lean_object* v_as_4168_, lean_object* v_i_4169_, lean_object* v_a_4170_){
_start:
{
lean_object* v___x_4171_; 
v___x_4171_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__7_spec__8___redArg(v_givenName_4163_, v_skipAuxDecl_4164_, v_auxDeclToFullName_4165_, v___x_4166_, v_givenNameView_4167_, v_as_4168_, v_i_4169_);
return v___x_4171_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__7_spec__8___boxed(lean_object* v_givenName_4172_, lean_object* v_skipAuxDecl_4173_, lean_object* v_auxDeclToFullName_4174_, lean_object* v___x_4175_, lean_object* v_givenNameView_4176_, lean_object* v_as_4177_, lean_object* v_i_4178_, lean_object* v_a_4179_){
_start:
{
uint8_t v_skipAuxDecl_boxed_4180_; lean_object* v_res_4181_; 
v_skipAuxDecl_boxed_4180_ = lean_unbox(v_skipAuxDecl_4173_);
v_res_4181_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5_spec__7_spec__8(v_givenName_4172_, v_skipAuxDecl_boxed_4180_, v_auxDeclToFullName_4174_, v___x_4175_, v_givenNameView_4176_, v_as_4177_, v_i_4178_, v_a_4179_);
lean_dec_ref(v_as_4177_);
lean_dec(v_auxDeclToFullName_4174_);
lean_dec(v_givenName_4172_);
return v_res_4181_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__10_spec__12(lean_object* v_localDecl_x3f_4182_, lean_object* v_givenName_4183_, lean_object* v_as_4184_, lean_object* v_i_4185_, lean_object* v_a_4186_){
_start:
{
lean_object* v___x_4187_; 
v___x_4187_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__10_spec__12___redArg(v_localDecl_x3f_4182_, v_givenName_4183_, v_as_4184_, v_i_4185_);
return v___x_4187_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__10_spec__12___boxed(lean_object* v_localDecl_x3f_4188_, lean_object* v_givenName_4189_, lean_object* v_as_4190_, lean_object* v_i_4191_, lean_object* v_a_4192_){
_start:
{
lean_object* v_res_4193_; 
v_res_4193_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__10_spec__12(v_localDecl_x3f_4188_, v_givenName_4189_, v_as_4190_, v_i_4191_, v_a_4192_);
lean_dec_ref(v_as_4190_);
lean_dec(v_givenName_4189_);
lean_dec(v_localDecl_x3f_4188_);
return v_res_4193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__17(lean_object* v_opt_4194_, lean_object* v___y_4195_, lean_object* v___y_4196_, lean_object* v___y_4197_, lean_object* v___y_4198_, lean_object* v___y_4199_, lean_object* v___y_4200_){
_start:
{
lean_object* v___x_4202_; 
v___x_4202_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__17___redArg(v_opt_4194_, v___y_4199_);
return v___x_4202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__17___boxed(lean_object* v_opt_4203_, lean_object* v___y_4204_, lean_object* v___y_4205_, lean_object* v___y_4206_, lean_object* v___y_4207_, lean_object* v___y_4208_, lean_object* v___y_4209_, lean_object* v___y_4210_){
_start:
{
lean_object* v_res_4211_; 
v_res_4211_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__17(v_opt_4203_, v___y_4204_, v___y_4205_, v___y_4206_, v___y_4207_, v___y_4208_, v___y_4209_);
lean_dec(v___y_4209_);
lean_dec_ref(v___y_4208_);
lean_dec(v___y_4207_);
lean_dec_ref(v___y_4206_);
lean_dec(v___y_4205_);
lean_dec_ref(v___y_4204_);
lean_dec_ref(v_opt_4203_);
return v_res_4211_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__18_spec__20_spec__21(lean_object* v_ref_4212_, lean_object* v_msgData_4213_, uint8_t v_severity_4214_, uint8_t v_isSilent_4215_, lean_object* v___y_4216_, lean_object* v___y_4217_, lean_object* v___y_4218_, lean_object* v___y_4219_, lean_object* v___y_4220_, lean_object* v___y_4221_){
_start:
{
lean_object* v___x_4223_; 
v___x_4223_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__18_spec__20_spec__21___redArg(v_ref_4212_, v_msgData_4213_, v_severity_4214_, v_isSilent_4215_, v___y_4218_, v___y_4219_, v___y_4220_, v___y_4221_);
return v___x_4223_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__18_spec__20_spec__21___boxed(lean_object* v_ref_4224_, lean_object* v_msgData_4225_, lean_object* v_severity_4226_, lean_object* v_isSilent_4227_, lean_object* v___y_4228_, lean_object* v___y_4229_, lean_object* v___y_4230_, lean_object* v___y_4231_, lean_object* v___y_4232_, lean_object* v___y_4233_, lean_object* v___y_4234_){
_start:
{
uint8_t v_severity_boxed_4235_; uint8_t v_isSilent_boxed_4236_; lean_object* v_res_4237_; 
v_severity_boxed_4235_ = lean_unbox(v_severity_4226_);
v_isSilent_boxed_4236_ = lean_unbox(v_isSilent_4227_);
v_res_4237_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__12_spec__16_spec__18_spec__20_spec__21(v_ref_4224_, v_msgData_4225_, v_severity_boxed_4235_, v_isSilent_boxed_4236_, v___y_4228_, v___y_4229_, v___y_4230_, v___y_4231_, v___y_4232_, v___y_4233_);
lean_dec(v___y_4233_);
lean_dec_ref(v___y_4232_);
lean_dec(v___y_4231_);
lean_dec_ref(v___y_4230_);
lean_dec(v___y_4229_);
lean_dec_ref(v___y_4228_);
lean_dec(v_ref_4224_);
return v_res_4237_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__3(lean_object* v___x_4238_, uint8_t v___x_4239_, lean_object* v_b_4240_, lean_object* v_____r_4241_, lean_object* v___y_4242_, lean_object* v___y_4243_, lean_object* v___y_4244_, lean_object* v___y_4245_, lean_object* v___y_4246_, lean_object* v___y_4247_){
_start:
{
lean_object* v___x_4249_; lean_object* v___x_4250_; 
v___x_4249_ = lean_box(0);
v___x_4250_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v___x_4238_, v___x_4249_, v___y_4246_, v___y_4247_);
if (lean_obj_tag(v___x_4250_) == 0)
{
lean_object* v_a_4251_; lean_object* v___x_4252_; 
v_a_4251_ = lean_ctor_get(v___x_4250_, 0);
lean_inc_n(v_a_4251_, 2);
lean_dec_ref_known(v___x_4250_, 1);
v___x_4252_ = l_Lean_Elab_Term_checkDeprecatedCore___redArg(v_a_4251_, v___x_4239_, v___y_4242_, v___y_4244_, v___y_4245_, v___y_4246_, v___y_4247_);
if (lean_obj_tag(v___x_4252_) == 0)
{
uint8_t v___x_4253_; lean_object* v___x_4254_; 
lean_dec_ref_known(v___x_4252_, 1);
v___x_4253_ = 0;
lean_inc(v_a_4251_);
v___x_4254_ = l_Lean_Meta_Grind_isCasesAttrCandidate_x3f(v_a_4251_, v___x_4253_, v___y_4246_, v___y_4247_);
if (lean_obj_tag(v___x_4254_) == 0)
{
lean_object* v_a_4255_; lean_object* v___x_4257_; uint8_t v_isShared_4258_; uint8_t v_isSharedCheck_4314_; 
v_a_4255_ = lean_ctor_get(v___x_4254_, 0);
v_isSharedCheck_4314_ = !lean_is_exclusive(v___x_4254_);
if (v_isSharedCheck_4314_ == 0)
{
v___x_4257_ = v___x_4254_;
v_isShared_4258_ = v_isSharedCheck_4314_;
goto v_resetjp_4256_;
}
else
{
lean_inc(v_a_4255_);
lean_dec(v___x_4254_);
v___x_4257_ = lean_box(0);
v_isShared_4258_ = v_isSharedCheck_4314_;
goto v_resetjp_4256_;
}
v_resetjp_4256_:
{
if (lean_obj_tag(v_a_4255_) == 1)
{
lean_object* v_val_4259_; lean_object* v___x_4260_; 
lean_del_object(v___x_4257_);
lean_dec(v_a_4251_);
v_val_4259_ = lean_ctor_get(v_a_4255_, 0);
lean_inc_n(v_val_4259_, 2);
lean_dec_ref_known(v_a_4255_, 1);
v___x_4260_ = l_Lean_Meta_Grind_ensureNotBuiltinCases(v_val_4259_, v___y_4246_, v___y_4247_);
if (lean_obj_tag(v___x_4260_) == 0)
{
lean_object* v___x_4261_; 
lean_dec_ref_known(v___x_4260_, 1);
v___x_4261_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes(v_b_4240_, v_val_4259_, v___y_4246_, v___y_4247_);
if (lean_obj_tag(v___x_4261_) == 0)
{
lean_object* v_a_4262_; lean_object* v___x_4264_; uint8_t v_isShared_4265_; uint8_t v_isSharedCheck_4271_; 
v_a_4262_ = lean_ctor_get(v___x_4261_, 0);
v_isSharedCheck_4271_ = !lean_is_exclusive(v___x_4261_);
if (v_isSharedCheck_4271_ == 0)
{
v___x_4264_ = v___x_4261_;
v_isShared_4265_ = v_isSharedCheck_4271_;
goto v_resetjp_4263_;
}
else
{
lean_inc(v_a_4262_);
lean_dec(v___x_4261_);
v___x_4264_ = lean_box(0);
v_isShared_4265_ = v_isSharedCheck_4271_;
goto v_resetjp_4263_;
}
v_resetjp_4263_:
{
lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4269_; 
v___x_4266_ = lean_box(0);
v___x_4267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4267_, 0, v___x_4266_);
lean_ctor_set(v___x_4267_, 1, v_a_4262_);
if (v_isShared_4265_ == 0)
{
lean_ctor_set(v___x_4264_, 0, v___x_4267_);
v___x_4269_ = v___x_4264_;
goto v_reusejp_4268_;
}
else
{
lean_object* v_reuseFailAlloc_4270_; 
v_reuseFailAlloc_4270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4270_, 0, v___x_4267_);
v___x_4269_ = v_reuseFailAlloc_4270_;
goto v_reusejp_4268_;
}
v_reusejp_4268_:
{
return v___x_4269_;
}
}
}
else
{
lean_object* v_a_4272_; lean_object* v___x_4274_; uint8_t v_isShared_4275_; uint8_t v_isSharedCheck_4279_; 
v_a_4272_ = lean_ctor_get(v___x_4261_, 0);
v_isSharedCheck_4279_ = !lean_is_exclusive(v___x_4261_);
if (v_isSharedCheck_4279_ == 0)
{
v___x_4274_ = v___x_4261_;
v_isShared_4275_ = v_isSharedCheck_4279_;
goto v_resetjp_4273_;
}
else
{
lean_inc(v_a_4272_);
lean_dec(v___x_4261_);
v___x_4274_ = lean_box(0);
v_isShared_4275_ = v_isSharedCheck_4279_;
goto v_resetjp_4273_;
}
v_resetjp_4273_:
{
lean_object* v___x_4277_; 
if (v_isShared_4275_ == 0)
{
v___x_4277_ = v___x_4274_;
goto v_reusejp_4276_;
}
else
{
lean_object* v_reuseFailAlloc_4278_; 
v_reuseFailAlloc_4278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4278_, 0, v_a_4272_);
v___x_4277_ = v_reuseFailAlloc_4278_;
goto v_reusejp_4276_;
}
v_reusejp_4276_:
{
return v___x_4277_;
}
}
}
}
else
{
lean_object* v_a_4280_; lean_object* v___x_4282_; uint8_t v_isShared_4283_; uint8_t v_isSharedCheck_4287_; 
lean_dec(v_val_4259_);
lean_dec_ref(v_b_4240_);
v_a_4280_ = lean_ctor_get(v___x_4260_, 0);
v_isSharedCheck_4287_ = !lean_is_exclusive(v___x_4260_);
if (v_isSharedCheck_4287_ == 0)
{
v___x_4282_ = v___x_4260_;
v_isShared_4283_ = v_isSharedCheck_4287_;
goto v_resetjp_4281_;
}
else
{
lean_inc(v_a_4280_);
lean_dec(v___x_4260_);
v___x_4282_ = lean_box(0);
v_isShared_4283_ = v_isSharedCheck_4287_;
goto v_resetjp_4281_;
}
v_resetjp_4281_:
{
lean_object* v___x_4285_; 
if (v_isShared_4283_ == 0)
{
v___x_4285_ = v___x_4282_;
goto v_reusejp_4284_;
}
else
{
lean_object* v_reuseFailAlloc_4286_; 
v_reuseFailAlloc_4286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4286_, 0, v_a_4280_);
v___x_4285_ = v_reuseFailAlloc_4286_;
goto v_reusejp_4284_;
}
v_reusejp_4284_:
{
return v___x_4285_;
}
}
}
}
else
{
uint8_t v___x_4288_; 
lean_dec(v_a_4255_);
lean_inc(v_a_4251_);
v___x_4288_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem(v_b_4240_, v_a_4251_);
if (v___x_4288_ == 0)
{
lean_object* v___x_4289_; 
lean_del_object(v___x_4257_);
v___x_4289_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch(v_b_4240_, v_a_4251_, v___y_4244_, v___y_4245_, v___y_4246_, v___y_4247_);
if (lean_obj_tag(v___x_4289_) == 0)
{
lean_object* v_a_4290_; lean_object* v___x_4292_; uint8_t v_isShared_4293_; uint8_t v_isSharedCheck_4299_; 
v_a_4290_ = lean_ctor_get(v___x_4289_, 0);
v_isSharedCheck_4299_ = !lean_is_exclusive(v___x_4289_);
if (v_isSharedCheck_4299_ == 0)
{
v___x_4292_ = v___x_4289_;
v_isShared_4293_ = v_isSharedCheck_4299_;
goto v_resetjp_4291_;
}
else
{
lean_inc(v_a_4290_);
lean_dec(v___x_4289_);
v___x_4292_ = lean_box(0);
v_isShared_4293_ = v_isSharedCheck_4299_;
goto v_resetjp_4291_;
}
v_resetjp_4291_:
{
lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v___x_4297_; 
v___x_4294_ = lean_box(0);
v___x_4295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4295_, 0, v___x_4294_);
lean_ctor_set(v___x_4295_, 1, v_a_4290_);
if (v_isShared_4293_ == 0)
{
lean_ctor_set(v___x_4292_, 0, v___x_4295_);
v___x_4297_ = v___x_4292_;
goto v_reusejp_4296_;
}
else
{
lean_object* v_reuseFailAlloc_4298_; 
v_reuseFailAlloc_4298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4298_, 0, v___x_4295_);
v___x_4297_ = v_reuseFailAlloc_4298_;
goto v_reusejp_4296_;
}
v_reusejp_4296_:
{
return v___x_4297_;
}
}
}
else
{
lean_object* v_a_4300_; lean_object* v___x_4302_; uint8_t v_isShared_4303_; uint8_t v_isSharedCheck_4307_; 
v_a_4300_ = lean_ctor_get(v___x_4289_, 0);
v_isSharedCheck_4307_ = !lean_is_exclusive(v___x_4289_);
if (v_isSharedCheck_4307_ == 0)
{
v___x_4302_ = v___x_4289_;
v_isShared_4303_ = v_isSharedCheck_4307_;
goto v_resetjp_4301_;
}
else
{
lean_inc(v_a_4300_);
lean_dec(v___x_4289_);
v___x_4302_ = lean_box(0);
v_isShared_4303_ = v_isSharedCheck_4307_;
goto v_resetjp_4301_;
}
v_resetjp_4301_:
{
lean_object* v___x_4305_; 
if (v_isShared_4303_ == 0)
{
v___x_4305_ = v___x_4302_;
goto v_reusejp_4304_;
}
else
{
lean_object* v_reuseFailAlloc_4306_; 
v_reuseFailAlloc_4306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4306_, 0, v_a_4300_);
v___x_4305_ = v_reuseFailAlloc_4306_;
goto v_reusejp_4304_;
}
v_reusejp_4304_:
{
return v___x_4305_;
}
}
}
}
else
{
lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; lean_object* v___x_4312_; 
v___x_4308_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseInj(v_b_4240_, v_a_4251_);
v___x_4309_ = lean_box(0);
v___x_4310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4310_, 0, v___x_4309_);
lean_ctor_set(v___x_4310_, 1, v___x_4308_);
if (v_isShared_4258_ == 0)
{
lean_ctor_set(v___x_4257_, 0, v___x_4310_);
v___x_4312_ = v___x_4257_;
goto v_reusejp_4311_;
}
else
{
lean_object* v_reuseFailAlloc_4313_; 
v_reuseFailAlloc_4313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4313_, 0, v___x_4310_);
v___x_4312_ = v_reuseFailAlloc_4313_;
goto v_reusejp_4311_;
}
v_reusejp_4311_:
{
return v___x_4312_;
}
}
}
}
}
else
{
lean_object* v_a_4315_; lean_object* v___x_4317_; uint8_t v_isShared_4318_; uint8_t v_isSharedCheck_4322_; 
lean_dec(v_a_4251_);
lean_dec_ref(v_b_4240_);
v_a_4315_ = lean_ctor_get(v___x_4254_, 0);
v_isSharedCheck_4322_ = !lean_is_exclusive(v___x_4254_);
if (v_isSharedCheck_4322_ == 0)
{
v___x_4317_ = v___x_4254_;
v_isShared_4318_ = v_isSharedCheck_4322_;
goto v_resetjp_4316_;
}
else
{
lean_inc(v_a_4315_);
lean_dec(v___x_4254_);
v___x_4317_ = lean_box(0);
v_isShared_4318_ = v_isSharedCheck_4322_;
goto v_resetjp_4316_;
}
v_resetjp_4316_:
{
lean_object* v___x_4320_; 
if (v_isShared_4318_ == 0)
{
v___x_4320_ = v___x_4317_;
goto v_reusejp_4319_;
}
else
{
lean_object* v_reuseFailAlloc_4321_; 
v_reuseFailAlloc_4321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4321_, 0, v_a_4315_);
v___x_4320_ = v_reuseFailAlloc_4321_;
goto v_reusejp_4319_;
}
v_reusejp_4319_:
{
return v___x_4320_;
}
}
}
}
else
{
lean_object* v_a_4323_; lean_object* v___x_4325_; uint8_t v_isShared_4326_; uint8_t v_isSharedCheck_4330_; 
lean_dec(v_a_4251_);
lean_dec_ref(v_b_4240_);
v_a_4323_ = lean_ctor_get(v___x_4252_, 0);
v_isSharedCheck_4330_ = !lean_is_exclusive(v___x_4252_);
if (v_isSharedCheck_4330_ == 0)
{
v___x_4325_ = v___x_4252_;
v_isShared_4326_ = v_isSharedCheck_4330_;
goto v_resetjp_4324_;
}
else
{
lean_inc(v_a_4323_);
lean_dec(v___x_4252_);
v___x_4325_ = lean_box(0);
v_isShared_4326_ = v_isSharedCheck_4330_;
goto v_resetjp_4324_;
}
v_resetjp_4324_:
{
lean_object* v___x_4328_; 
if (v_isShared_4326_ == 0)
{
v___x_4328_ = v___x_4325_;
goto v_reusejp_4327_;
}
else
{
lean_object* v_reuseFailAlloc_4329_; 
v_reuseFailAlloc_4329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4329_, 0, v_a_4323_);
v___x_4328_ = v_reuseFailAlloc_4329_;
goto v_reusejp_4327_;
}
v_reusejp_4327_:
{
return v___x_4328_;
}
}
}
}
else
{
lean_object* v_a_4331_; lean_object* v___x_4333_; uint8_t v_isShared_4334_; uint8_t v_isSharedCheck_4338_; 
lean_dec_ref(v_b_4240_);
v_a_4331_ = lean_ctor_get(v___x_4250_, 0);
v_isSharedCheck_4338_ = !lean_is_exclusive(v___x_4250_);
if (v_isSharedCheck_4338_ == 0)
{
v___x_4333_ = v___x_4250_;
v_isShared_4334_ = v_isSharedCheck_4338_;
goto v_resetjp_4332_;
}
else
{
lean_inc(v_a_4331_);
lean_dec(v___x_4250_);
v___x_4333_ = lean_box(0);
v_isShared_4334_ = v_isSharedCheck_4338_;
goto v_resetjp_4332_;
}
v_resetjp_4332_:
{
lean_object* v___x_4336_; 
if (v_isShared_4334_ == 0)
{
v___x_4336_ = v___x_4333_;
goto v_reusejp_4335_;
}
else
{
lean_object* v_reuseFailAlloc_4337_; 
v_reuseFailAlloc_4337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4337_, 0, v_a_4331_);
v___x_4336_ = v_reuseFailAlloc_4337_;
goto v_reusejp_4335_;
}
v_reusejp_4335_:
{
return v___x_4336_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__3___boxed(lean_object* v___x_4339_, lean_object* v___x_4340_, lean_object* v_b_4341_, lean_object* v_____r_4342_, lean_object* v___y_4343_, lean_object* v___y_4344_, lean_object* v___y_4345_, lean_object* v___y_4346_, lean_object* v___y_4347_, lean_object* v___y_4348_, lean_object* v___y_4349_){
_start:
{
uint8_t v___x_17664__boxed_4350_; lean_object* v_res_4351_; 
v___x_17664__boxed_4350_ = lean_unbox(v___x_4340_);
v_res_4351_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__3(v___x_4339_, v___x_17664__boxed_4350_, v_b_4341_, v_____r_4342_, v___y_4343_, v___y_4344_, v___y_4345_, v___y_4346_, v___y_4347_, v___y_4348_);
lean_dec(v___y_4348_);
lean_dec_ref(v___y_4347_);
lean_dec(v___y_4346_);
lean_dec_ref(v___y_4345_);
lean_dec(v___y_4344_);
lean_dec_ref(v___y_4343_);
return v_res_4351_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2(lean_object* v___x_4355_, lean_object* v_b_4356_, lean_object* v_a_4357_, uint8_t v___x_4358_, uint8_t v_only_4359_, uint8_t v_incremental_4360_, lean_object* v_x_4361_, lean_object* v_mod_x3f_4362_, lean_object* v___y_4363_, lean_object* v___y_4364_, lean_object* v___y_4365_, lean_object* v___y_4366_, lean_object* v___y_4367_, lean_object* v___y_4368_){
_start:
{
lean_object* v___x_4370_; lean_object* v___x_4371_; 
v___x_4370_ = lean_unsigned_to_nat(1u);
v___x_4371_ = l_Lean_Syntax_getArg(v___x_4355_, v___x_4370_);
if (v___x_4358_ == 0)
{
lean_object* v___x_4432_; uint8_t v___x_4433_; 
v___x_4432_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__1));
lean_inc(v___x_4371_);
v___x_4433_ = l_Lean_Syntax_isOfKind(v___x_4371_, v___x_4432_);
if (v___x_4433_ == 0)
{
lean_object* v___x_4434_; 
v___x_4434_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam(v_b_4356_, v_a_4357_, v_mod_x3f_4362_, v___x_4371_, v___x_4358_, v___y_4363_, v___y_4364_, v___y_4365_, v___y_4366_, v___y_4367_, v___y_4368_);
if (lean_obj_tag(v___x_4434_) == 0)
{
lean_object* v_a_4435_; lean_object* v___x_4437_; uint8_t v_isShared_4438_; uint8_t v_isSharedCheck_4444_; 
v_a_4435_ = lean_ctor_get(v___x_4434_, 0);
v_isSharedCheck_4444_ = !lean_is_exclusive(v___x_4434_);
if (v_isSharedCheck_4444_ == 0)
{
v___x_4437_ = v___x_4434_;
v_isShared_4438_ = v_isSharedCheck_4444_;
goto v_resetjp_4436_;
}
else
{
lean_inc(v_a_4435_);
lean_dec(v___x_4434_);
v___x_4437_ = lean_box(0);
v_isShared_4438_ = v_isSharedCheck_4444_;
goto v_resetjp_4436_;
}
v_resetjp_4436_:
{
lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4442_; 
v___x_4439_ = lean_box(0);
v___x_4440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4440_, 0, v___x_4439_);
lean_ctor_set(v___x_4440_, 1, v_a_4435_);
if (v_isShared_4438_ == 0)
{
lean_ctor_set(v___x_4437_, 0, v___x_4440_);
v___x_4442_ = v___x_4437_;
goto v_reusejp_4441_;
}
else
{
lean_object* v_reuseFailAlloc_4443_; 
v_reuseFailAlloc_4443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4443_, 0, v___x_4440_);
v___x_4442_ = v_reuseFailAlloc_4443_;
goto v_reusejp_4441_;
}
v_reusejp_4441_:
{
return v___x_4442_;
}
}
}
else
{
lean_object* v_a_4445_; lean_object* v___x_4447_; uint8_t v_isShared_4448_; uint8_t v_isSharedCheck_4452_; 
v_a_4445_ = lean_ctor_get(v___x_4434_, 0);
v_isSharedCheck_4452_ = !lean_is_exclusive(v___x_4434_);
if (v_isSharedCheck_4452_ == 0)
{
v___x_4447_ = v___x_4434_;
v_isShared_4448_ = v_isSharedCheck_4452_;
goto v_resetjp_4446_;
}
else
{
lean_inc(v_a_4445_);
lean_dec(v___x_4434_);
v___x_4447_ = lean_box(0);
v_isShared_4448_ = v_isSharedCheck_4452_;
goto v_resetjp_4446_;
}
v_resetjp_4446_:
{
lean_object* v___x_4450_; 
if (v_isShared_4448_ == 0)
{
v___x_4450_ = v___x_4447_;
goto v_reusejp_4449_;
}
else
{
lean_object* v_reuseFailAlloc_4451_; 
v_reuseFailAlloc_4451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4451_, 0, v_a_4445_);
v___x_4450_ = v_reuseFailAlloc_4451_;
goto v_reusejp_4449_;
}
v_reusejp_4449_:
{
return v___x_4450_;
}
}
}
}
else
{
goto v___jp_4392_;
}
}
else
{
goto v___jp_4392_;
}
v___jp_4372_:
{
lean_object* v___x_4373_; 
v___x_4373_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam(v_b_4356_, v_a_4357_, v_mod_x3f_4362_, v___x_4371_, v___x_4358_, v_only_4359_, v_incremental_4360_, v___y_4363_, v___y_4364_, v___y_4365_, v___y_4366_, v___y_4367_, v___y_4368_);
if (lean_obj_tag(v___x_4373_) == 0)
{
lean_object* v_a_4374_; lean_object* v___x_4376_; uint8_t v_isShared_4377_; uint8_t v_isSharedCheck_4383_; 
v_a_4374_ = lean_ctor_get(v___x_4373_, 0);
v_isSharedCheck_4383_ = !lean_is_exclusive(v___x_4373_);
if (v_isSharedCheck_4383_ == 0)
{
v___x_4376_ = v___x_4373_;
v_isShared_4377_ = v_isSharedCheck_4383_;
goto v_resetjp_4375_;
}
else
{
lean_inc(v_a_4374_);
lean_dec(v___x_4373_);
v___x_4376_ = lean_box(0);
v_isShared_4377_ = v_isSharedCheck_4383_;
goto v_resetjp_4375_;
}
v_resetjp_4375_:
{
lean_object* v___x_4378_; lean_object* v___x_4379_; lean_object* v___x_4381_; 
v___x_4378_ = lean_box(0);
v___x_4379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4379_, 0, v___x_4378_);
lean_ctor_set(v___x_4379_, 1, v_a_4374_);
if (v_isShared_4377_ == 0)
{
lean_ctor_set(v___x_4376_, 0, v___x_4379_);
v___x_4381_ = v___x_4376_;
goto v_reusejp_4380_;
}
else
{
lean_object* v_reuseFailAlloc_4382_; 
v_reuseFailAlloc_4382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4382_, 0, v___x_4379_);
v___x_4381_ = v_reuseFailAlloc_4382_;
goto v_reusejp_4380_;
}
v_reusejp_4380_:
{
return v___x_4381_;
}
}
}
else
{
lean_object* v_a_4384_; lean_object* v___x_4386_; uint8_t v_isShared_4387_; uint8_t v_isSharedCheck_4391_; 
v_a_4384_ = lean_ctor_get(v___x_4373_, 0);
v_isSharedCheck_4391_ = !lean_is_exclusive(v___x_4373_);
if (v_isSharedCheck_4391_ == 0)
{
v___x_4386_ = v___x_4373_;
v_isShared_4387_ = v_isSharedCheck_4391_;
goto v_resetjp_4385_;
}
else
{
lean_inc(v_a_4384_);
lean_dec(v___x_4373_);
v___x_4386_ = lean_box(0);
v_isShared_4387_ = v_isSharedCheck_4391_;
goto v_resetjp_4385_;
}
v_resetjp_4385_:
{
lean_object* v___x_4389_; 
if (v_isShared_4387_ == 0)
{
v___x_4389_ = v___x_4386_;
goto v_reusejp_4388_;
}
else
{
lean_object* v_reuseFailAlloc_4390_; 
v_reuseFailAlloc_4390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4390_, 0, v_a_4384_);
v___x_4389_ = v_reuseFailAlloc_4390_;
goto v_reusejp_4388_;
}
v_reusejp_4388_:
{
return v___x_4389_;
}
}
}
}
v___jp_4392_:
{
lean_object* v___x_4393_; lean_object* v___x_4394_; 
v___x_4393_ = l_Lean_TSyntax_getId(v___x_4371_);
v___x_4394_ = l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5(v___x_4393_, v___y_4363_, v___y_4364_, v___y_4365_, v___y_4366_, v___y_4367_, v___y_4368_);
if (lean_obj_tag(v___x_4394_) == 0)
{
lean_object* v_a_4395_; 
v_a_4395_ = lean_ctor_get(v___x_4394_, 0);
lean_inc(v_a_4395_);
lean_dec_ref_known(v___x_4394_, 1);
if (lean_obj_tag(v_a_4395_) == 1)
{
lean_object* v_val_4396_; lean_object* v_snd_4397_; lean_object* v___x_4399_; uint8_t v_isShared_4400_; uint8_t v_isSharedCheck_4422_; 
v_val_4396_ = lean_ctor_get(v_a_4395_, 0);
lean_inc(v_val_4396_);
lean_dec_ref_known(v_a_4395_, 1);
v_snd_4397_ = lean_ctor_get(v_val_4396_, 1);
v_isSharedCheck_4422_ = !lean_is_exclusive(v_val_4396_);
if (v_isSharedCheck_4422_ == 0)
{
lean_object* v_unused_4423_; 
v_unused_4423_ = lean_ctor_get(v_val_4396_, 0);
lean_dec(v_unused_4423_);
v___x_4399_ = v_val_4396_;
v_isShared_4400_ = v_isSharedCheck_4422_;
goto v_resetjp_4398_;
}
else
{
lean_inc(v_snd_4397_);
lean_dec(v_val_4396_);
v___x_4399_ = lean_box(0);
v_isShared_4400_ = v_isSharedCheck_4422_;
goto v_resetjp_4398_;
}
v_resetjp_4398_:
{
if (lean_obj_tag(v_snd_4397_) == 1)
{
lean_object* v___x_4401_; 
lean_dec_ref_known(v_snd_4397_, 2);
v___x_4401_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam(v_b_4356_, v_a_4357_, v_mod_x3f_4362_, v___x_4371_, v___x_4358_, v___y_4363_, v___y_4364_, v___y_4365_, v___y_4366_, v___y_4367_, v___y_4368_);
if (lean_obj_tag(v___x_4401_) == 0)
{
lean_object* v_a_4402_; lean_object* v___x_4404_; uint8_t v_isShared_4405_; uint8_t v_isSharedCheck_4413_; 
v_a_4402_ = lean_ctor_get(v___x_4401_, 0);
v_isSharedCheck_4413_ = !lean_is_exclusive(v___x_4401_);
if (v_isSharedCheck_4413_ == 0)
{
v___x_4404_ = v___x_4401_;
v_isShared_4405_ = v_isSharedCheck_4413_;
goto v_resetjp_4403_;
}
else
{
lean_inc(v_a_4402_);
lean_dec(v___x_4401_);
v___x_4404_ = lean_box(0);
v_isShared_4405_ = v_isSharedCheck_4413_;
goto v_resetjp_4403_;
}
v_resetjp_4403_:
{
lean_object* v___x_4406_; lean_object* v___x_4408_; 
v___x_4406_ = lean_box(0);
if (v_isShared_4400_ == 0)
{
lean_ctor_set(v___x_4399_, 1, v_a_4402_);
lean_ctor_set(v___x_4399_, 0, v___x_4406_);
v___x_4408_ = v___x_4399_;
goto v_reusejp_4407_;
}
else
{
lean_object* v_reuseFailAlloc_4412_; 
v_reuseFailAlloc_4412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4412_, 0, v___x_4406_);
lean_ctor_set(v_reuseFailAlloc_4412_, 1, v_a_4402_);
v___x_4408_ = v_reuseFailAlloc_4412_;
goto v_reusejp_4407_;
}
v_reusejp_4407_:
{
lean_object* v___x_4410_; 
if (v_isShared_4405_ == 0)
{
lean_ctor_set(v___x_4404_, 0, v___x_4408_);
v___x_4410_ = v___x_4404_;
goto v_reusejp_4409_;
}
else
{
lean_object* v_reuseFailAlloc_4411_; 
v_reuseFailAlloc_4411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4411_, 0, v___x_4408_);
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
else
{
lean_object* v_a_4414_; lean_object* v___x_4416_; uint8_t v_isShared_4417_; uint8_t v_isSharedCheck_4421_; 
lean_del_object(v___x_4399_);
v_a_4414_ = lean_ctor_get(v___x_4401_, 0);
v_isSharedCheck_4421_ = !lean_is_exclusive(v___x_4401_);
if (v_isSharedCheck_4421_ == 0)
{
v___x_4416_ = v___x_4401_;
v_isShared_4417_ = v_isSharedCheck_4421_;
goto v_resetjp_4415_;
}
else
{
lean_inc(v_a_4414_);
lean_dec(v___x_4401_);
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
lean_del_object(v___x_4399_);
lean_dec(v_snd_4397_);
goto v___jp_4372_;
}
}
}
else
{
lean_dec(v_a_4395_);
goto v___jp_4372_;
}
}
else
{
lean_object* v_a_4424_; lean_object* v___x_4426_; uint8_t v_isShared_4427_; uint8_t v_isSharedCheck_4431_; 
lean_dec(v___x_4371_);
lean_dec(v_mod_x3f_4362_);
lean_dec(v_a_4357_);
lean_dec_ref(v_b_4356_);
v_a_4424_ = lean_ctor_get(v___x_4394_, 0);
v_isSharedCheck_4431_ = !lean_is_exclusive(v___x_4394_);
if (v_isSharedCheck_4431_ == 0)
{
v___x_4426_ = v___x_4394_;
v_isShared_4427_ = v_isSharedCheck_4431_;
goto v_resetjp_4425_;
}
else
{
lean_inc(v_a_4424_);
lean_dec(v___x_4394_);
v___x_4426_ = lean_box(0);
v_isShared_4427_ = v_isSharedCheck_4431_;
goto v_resetjp_4425_;
}
v_resetjp_4425_:
{
lean_object* v___x_4429_; 
if (v_isShared_4427_ == 0)
{
v___x_4429_ = v___x_4426_;
goto v_reusejp_4428_;
}
else
{
lean_object* v_reuseFailAlloc_4430_; 
v_reuseFailAlloc_4430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4430_, 0, v_a_4424_);
v___x_4429_ = v_reuseFailAlloc_4430_;
goto v_reusejp_4428_;
}
v_reusejp_4428_:
{
return v___x_4429_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___boxed(lean_object* v___x_4453_, lean_object* v_b_4454_, lean_object* v_a_4455_, lean_object* v___x_4456_, lean_object* v_only_4457_, lean_object* v_incremental_4458_, lean_object* v_x_4459_, lean_object* v_mod_x3f_4460_, lean_object* v___y_4461_, lean_object* v___y_4462_, lean_object* v___y_4463_, lean_object* v___y_4464_, lean_object* v___y_4465_, lean_object* v___y_4466_, lean_object* v___y_4467_){
_start:
{
uint8_t v___x_17882__boxed_4468_; uint8_t v_only_boxed_4469_; uint8_t v_incremental_boxed_4470_; lean_object* v_res_4471_; 
v___x_17882__boxed_4468_ = lean_unbox(v___x_4456_);
v_only_boxed_4469_ = lean_unbox(v_only_4457_);
v_incremental_boxed_4470_ = lean_unbox(v_incremental_4458_);
v_res_4471_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2(v___x_4453_, v_b_4454_, v_a_4455_, v___x_17882__boxed_4468_, v_only_boxed_4469_, v_incremental_boxed_4470_, v_x_4459_, v_mod_x3f_4460_, v___y_4461_, v___y_4462_, v___y_4463_, v___y_4464_, v___y_4465_, v___y_4466_);
lean_dec(v___y_4466_);
lean_dec_ref(v___y_4465_);
lean_dec(v___y_4464_);
lean_dec_ref(v___y_4463_);
lean_dec(v___y_4462_);
lean_dec_ref(v___y_4461_);
lean_dec(v___x_4453_);
return v_res_4471_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__0(lean_object* v_b_4472_, lean_object* v___x_4473_, lean_object* v_____r_4474_, lean_object* v___y_4475_, lean_object* v___y_4476_, lean_object* v___y_4477_, lean_object* v___y_4478_, lean_object* v___y_4479_, lean_object* v___y_4480_){
_start:
{
lean_object* v___x_4482_; 
v___x_4482_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor(v_b_4472_, v___x_4473_, v___y_4479_, v___y_4480_);
if (lean_obj_tag(v___x_4482_) == 0)
{
lean_object* v_a_4483_; lean_object* v___x_4485_; uint8_t v_isShared_4486_; uint8_t v_isSharedCheck_4492_; 
v_a_4483_ = lean_ctor_get(v___x_4482_, 0);
v_isSharedCheck_4492_ = !lean_is_exclusive(v___x_4482_);
if (v_isSharedCheck_4492_ == 0)
{
v___x_4485_ = v___x_4482_;
v_isShared_4486_ = v_isSharedCheck_4492_;
goto v_resetjp_4484_;
}
else
{
lean_inc(v_a_4483_);
lean_dec(v___x_4482_);
v___x_4485_ = lean_box(0);
v_isShared_4486_ = v_isSharedCheck_4492_;
goto v_resetjp_4484_;
}
v_resetjp_4484_:
{
lean_object* v___x_4487_; lean_object* v___x_4488_; lean_object* v___x_4490_; 
v___x_4487_ = lean_box(0);
v___x_4488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4488_, 0, v___x_4487_);
lean_ctor_set(v___x_4488_, 1, v_a_4483_);
if (v_isShared_4486_ == 0)
{
lean_ctor_set(v___x_4485_, 0, v___x_4488_);
v___x_4490_ = v___x_4485_;
goto v_reusejp_4489_;
}
else
{
lean_object* v_reuseFailAlloc_4491_; 
v_reuseFailAlloc_4491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4491_, 0, v___x_4488_);
v___x_4490_ = v_reuseFailAlloc_4491_;
goto v_reusejp_4489_;
}
v_reusejp_4489_:
{
return v___x_4490_;
}
}
}
else
{
lean_object* v_a_4493_; lean_object* v___x_4495_; uint8_t v_isShared_4496_; uint8_t v_isSharedCheck_4500_; 
v_a_4493_ = lean_ctor_get(v___x_4482_, 0);
v_isSharedCheck_4500_ = !lean_is_exclusive(v___x_4482_);
if (v_isSharedCheck_4500_ == 0)
{
v___x_4495_ = v___x_4482_;
v_isShared_4496_ = v_isSharedCheck_4500_;
goto v_resetjp_4494_;
}
else
{
lean_inc(v_a_4493_);
lean_dec(v___x_4482_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__0___boxed(lean_object* v_b_4501_, lean_object* v___x_4502_, lean_object* v_____r_4503_, lean_object* v___y_4504_, lean_object* v___y_4505_, lean_object* v___y_4506_, lean_object* v___y_4507_, lean_object* v___y_4508_, lean_object* v___y_4509_, lean_object* v___y_4510_){
_start:
{
lean_object* v_res_4511_; 
v_res_4511_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__0(v_b_4501_, v___x_4502_, v_____r_4503_, v___y_4504_, v___y_4505_, v___y_4506_, v___y_4507_, v___y_4508_, v___y_4509_);
lean_dec(v___y_4509_);
lean_dec_ref(v___y_4508_);
lean_dec(v___y_4507_);
lean_dec_ref(v___y_4506_);
lean_dec(v___y_4505_);
lean_dec_ref(v___y_4504_);
lean_dec(v___x_4502_);
return v_res_4511_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__1(lean_object* v___x_4512_, lean_object* v_b_4513_, lean_object* v_a_4514_, uint8_t v___x_4515_, uint8_t v_only_4516_, uint8_t v_incremental_4517_, uint8_t v___x_4518_, lean_object* v_x_4519_, lean_object* v_mod_x3f_4520_, lean_object* v___y_4521_, lean_object* v___y_4522_, lean_object* v___y_4523_, lean_object* v___y_4524_, lean_object* v___y_4525_, lean_object* v___y_4526_){
_start:
{
lean_object* v___x_4528_; lean_object* v___x_4529_; 
v___x_4528_ = lean_unsigned_to_nat(2u);
v___x_4529_ = l_Lean_Syntax_getArg(v___x_4512_, v___x_4528_);
if (v___x_4518_ == 0)
{
lean_object* v___x_4590_; uint8_t v___x_4591_; 
v___x_4590_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__1));
lean_inc(v___x_4529_);
v___x_4591_ = l_Lean_Syntax_isOfKind(v___x_4529_, v___x_4590_);
if (v___x_4591_ == 0)
{
lean_object* v___x_4592_; 
v___x_4592_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam(v_b_4513_, v_a_4514_, v_mod_x3f_4520_, v___x_4529_, v___x_4515_, v___y_4521_, v___y_4522_, v___y_4523_, v___y_4524_, v___y_4525_, v___y_4526_);
if (lean_obj_tag(v___x_4592_) == 0)
{
lean_object* v_a_4593_; lean_object* v___x_4595_; uint8_t v_isShared_4596_; uint8_t v_isSharedCheck_4602_; 
v_a_4593_ = lean_ctor_get(v___x_4592_, 0);
v_isSharedCheck_4602_ = !lean_is_exclusive(v___x_4592_);
if (v_isSharedCheck_4602_ == 0)
{
v___x_4595_ = v___x_4592_;
v_isShared_4596_ = v_isSharedCheck_4602_;
goto v_resetjp_4594_;
}
else
{
lean_inc(v_a_4593_);
lean_dec(v___x_4592_);
v___x_4595_ = lean_box(0);
v_isShared_4596_ = v_isSharedCheck_4602_;
goto v_resetjp_4594_;
}
v_resetjp_4594_:
{
lean_object* v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4600_; 
v___x_4597_ = lean_box(0);
v___x_4598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4598_, 0, v___x_4597_);
lean_ctor_set(v___x_4598_, 1, v_a_4593_);
if (v_isShared_4596_ == 0)
{
lean_ctor_set(v___x_4595_, 0, v___x_4598_);
v___x_4600_ = v___x_4595_;
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
else
{
lean_object* v_a_4603_; lean_object* v___x_4605_; uint8_t v_isShared_4606_; uint8_t v_isSharedCheck_4610_; 
v_a_4603_ = lean_ctor_get(v___x_4592_, 0);
v_isSharedCheck_4610_ = !lean_is_exclusive(v___x_4592_);
if (v_isSharedCheck_4610_ == 0)
{
v___x_4605_ = v___x_4592_;
v_isShared_4606_ = v_isSharedCheck_4610_;
goto v_resetjp_4604_;
}
else
{
lean_inc(v_a_4603_);
lean_dec(v___x_4592_);
v___x_4605_ = lean_box(0);
v_isShared_4606_ = v_isSharedCheck_4610_;
goto v_resetjp_4604_;
}
v_resetjp_4604_:
{
lean_object* v___x_4608_; 
if (v_isShared_4606_ == 0)
{
v___x_4608_ = v___x_4605_;
goto v_reusejp_4607_;
}
else
{
lean_object* v_reuseFailAlloc_4609_; 
v_reuseFailAlloc_4609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4609_, 0, v_a_4603_);
v___x_4608_ = v_reuseFailAlloc_4609_;
goto v_reusejp_4607_;
}
v_reusejp_4607_:
{
return v___x_4608_;
}
}
}
}
else
{
goto v___jp_4550_;
}
}
else
{
goto v___jp_4550_;
}
v___jp_4530_:
{
lean_object* v___x_4531_; 
v___x_4531_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam(v_b_4513_, v_a_4514_, v_mod_x3f_4520_, v___x_4529_, v___x_4515_, v_only_4516_, v_incremental_4517_, v___y_4521_, v___y_4522_, v___y_4523_, v___y_4524_, v___y_4525_, v___y_4526_);
if (lean_obj_tag(v___x_4531_) == 0)
{
lean_object* v_a_4532_; lean_object* v___x_4534_; uint8_t v_isShared_4535_; uint8_t v_isSharedCheck_4541_; 
v_a_4532_ = lean_ctor_get(v___x_4531_, 0);
v_isSharedCheck_4541_ = !lean_is_exclusive(v___x_4531_);
if (v_isSharedCheck_4541_ == 0)
{
v___x_4534_ = v___x_4531_;
v_isShared_4535_ = v_isSharedCheck_4541_;
goto v_resetjp_4533_;
}
else
{
lean_inc(v_a_4532_);
lean_dec(v___x_4531_);
v___x_4534_ = lean_box(0);
v_isShared_4535_ = v_isSharedCheck_4541_;
goto v_resetjp_4533_;
}
v_resetjp_4533_:
{
lean_object* v___x_4536_; lean_object* v___x_4537_; lean_object* v___x_4539_; 
v___x_4536_ = lean_box(0);
v___x_4537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4537_, 0, v___x_4536_);
lean_ctor_set(v___x_4537_, 1, v_a_4532_);
if (v_isShared_4535_ == 0)
{
lean_ctor_set(v___x_4534_, 0, v___x_4537_);
v___x_4539_ = v___x_4534_;
goto v_reusejp_4538_;
}
else
{
lean_object* v_reuseFailAlloc_4540_; 
v_reuseFailAlloc_4540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4540_, 0, v___x_4537_);
v___x_4539_ = v_reuseFailAlloc_4540_;
goto v_reusejp_4538_;
}
v_reusejp_4538_:
{
return v___x_4539_;
}
}
}
else
{
lean_object* v_a_4542_; lean_object* v___x_4544_; uint8_t v_isShared_4545_; uint8_t v_isSharedCheck_4549_; 
v_a_4542_ = lean_ctor_get(v___x_4531_, 0);
v_isSharedCheck_4549_ = !lean_is_exclusive(v___x_4531_);
if (v_isSharedCheck_4549_ == 0)
{
v___x_4544_ = v___x_4531_;
v_isShared_4545_ = v_isSharedCheck_4549_;
goto v_resetjp_4543_;
}
else
{
lean_inc(v_a_4542_);
lean_dec(v___x_4531_);
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
v___jp_4550_:
{
lean_object* v___x_4551_; lean_object* v___x_4552_; 
v___x_4551_ = l_Lean_TSyntax_getId(v___x_4529_);
v___x_4552_ = l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5(v___x_4551_, v___y_4521_, v___y_4522_, v___y_4523_, v___y_4524_, v___y_4525_, v___y_4526_);
if (lean_obj_tag(v___x_4552_) == 0)
{
lean_object* v_a_4553_; 
v_a_4553_ = lean_ctor_get(v___x_4552_, 0);
lean_inc(v_a_4553_);
lean_dec_ref_known(v___x_4552_, 1);
if (lean_obj_tag(v_a_4553_) == 1)
{
lean_object* v_val_4554_; lean_object* v_snd_4555_; lean_object* v___x_4557_; uint8_t v_isShared_4558_; uint8_t v_isSharedCheck_4580_; 
v_val_4554_ = lean_ctor_get(v_a_4553_, 0);
lean_inc(v_val_4554_);
lean_dec_ref_known(v_a_4553_, 1);
v_snd_4555_ = lean_ctor_get(v_val_4554_, 1);
v_isSharedCheck_4580_ = !lean_is_exclusive(v_val_4554_);
if (v_isSharedCheck_4580_ == 0)
{
lean_object* v_unused_4581_; 
v_unused_4581_ = lean_ctor_get(v_val_4554_, 0);
lean_dec(v_unused_4581_);
v___x_4557_ = v_val_4554_;
v_isShared_4558_ = v_isSharedCheck_4580_;
goto v_resetjp_4556_;
}
else
{
lean_inc(v_snd_4555_);
lean_dec(v_val_4554_);
v___x_4557_ = lean_box(0);
v_isShared_4558_ = v_isSharedCheck_4580_;
goto v_resetjp_4556_;
}
v_resetjp_4556_:
{
if (lean_obj_tag(v_snd_4555_) == 1)
{
lean_object* v___x_4559_; 
lean_dec_ref_known(v_snd_4555_, 2);
v___x_4559_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam(v_b_4513_, v_a_4514_, v_mod_x3f_4520_, v___x_4529_, v___x_4515_, v___y_4521_, v___y_4522_, v___y_4523_, v___y_4524_, v___y_4525_, v___y_4526_);
if (lean_obj_tag(v___x_4559_) == 0)
{
lean_object* v_a_4560_; lean_object* v___x_4562_; uint8_t v_isShared_4563_; uint8_t v_isSharedCheck_4571_; 
v_a_4560_ = lean_ctor_get(v___x_4559_, 0);
v_isSharedCheck_4571_ = !lean_is_exclusive(v___x_4559_);
if (v_isSharedCheck_4571_ == 0)
{
v___x_4562_ = v___x_4559_;
v_isShared_4563_ = v_isSharedCheck_4571_;
goto v_resetjp_4561_;
}
else
{
lean_inc(v_a_4560_);
lean_dec(v___x_4559_);
v___x_4562_ = lean_box(0);
v_isShared_4563_ = v_isSharedCheck_4571_;
goto v_resetjp_4561_;
}
v_resetjp_4561_:
{
lean_object* v___x_4564_; lean_object* v___x_4566_; 
v___x_4564_ = lean_box(0);
if (v_isShared_4558_ == 0)
{
lean_ctor_set(v___x_4557_, 1, v_a_4560_);
lean_ctor_set(v___x_4557_, 0, v___x_4564_);
v___x_4566_ = v___x_4557_;
goto v_reusejp_4565_;
}
else
{
lean_object* v_reuseFailAlloc_4570_; 
v_reuseFailAlloc_4570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4570_, 0, v___x_4564_);
lean_ctor_set(v_reuseFailAlloc_4570_, 1, v_a_4560_);
v___x_4566_ = v_reuseFailAlloc_4570_;
goto v_reusejp_4565_;
}
v_reusejp_4565_:
{
lean_object* v___x_4568_; 
if (v_isShared_4563_ == 0)
{
lean_ctor_set(v___x_4562_, 0, v___x_4566_);
v___x_4568_ = v___x_4562_;
goto v_reusejp_4567_;
}
else
{
lean_object* v_reuseFailAlloc_4569_; 
v_reuseFailAlloc_4569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4569_, 0, v___x_4566_);
v___x_4568_ = v_reuseFailAlloc_4569_;
goto v_reusejp_4567_;
}
v_reusejp_4567_:
{
return v___x_4568_;
}
}
}
}
else
{
lean_object* v_a_4572_; lean_object* v___x_4574_; uint8_t v_isShared_4575_; uint8_t v_isSharedCheck_4579_; 
lean_del_object(v___x_4557_);
v_a_4572_ = lean_ctor_get(v___x_4559_, 0);
v_isSharedCheck_4579_ = !lean_is_exclusive(v___x_4559_);
if (v_isSharedCheck_4579_ == 0)
{
v___x_4574_ = v___x_4559_;
v_isShared_4575_ = v_isSharedCheck_4579_;
goto v_resetjp_4573_;
}
else
{
lean_inc(v_a_4572_);
lean_dec(v___x_4559_);
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
else
{
lean_del_object(v___x_4557_);
lean_dec(v_snd_4555_);
goto v___jp_4530_;
}
}
}
else
{
lean_dec(v_a_4553_);
goto v___jp_4530_;
}
}
else
{
lean_object* v_a_4582_; lean_object* v___x_4584_; uint8_t v_isShared_4585_; uint8_t v_isSharedCheck_4589_; 
lean_dec(v___x_4529_);
lean_dec(v_mod_x3f_4520_);
lean_dec(v_a_4514_);
lean_dec_ref(v_b_4513_);
v_a_4582_ = lean_ctor_get(v___x_4552_, 0);
v_isSharedCheck_4589_ = !lean_is_exclusive(v___x_4552_);
if (v_isSharedCheck_4589_ == 0)
{
v___x_4584_ = v___x_4552_;
v_isShared_4585_ = v_isSharedCheck_4589_;
goto v_resetjp_4583_;
}
else
{
lean_inc(v_a_4582_);
lean_dec(v___x_4552_);
v___x_4584_ = lean_box(0);
v_isShared_4585_ = v_isSharedCheck_4589_;
goto v_resetjp_4583_;
}
v_resetjp_4583_:
{
lean_object* v___x_4587_; 
if (v_isShared_4585_ == 0)
{
v___x_4587_ = v___x_4584_;
goto v_reusejp_4586_;
}
else
{
lean_object* v_reuseFailAlloc_4588_; 
v_reuseFailAlloc_4588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4588_, 0, v_a_4582_);
v___x_4587_ = v_reuseFailAlloc_4588_;
goto v_reusejp_4586_;
}
v_reusejp_4586_:
{
return v___x_4587_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__1___boxed(lean_object* v___x_4611_, lean_object* v_b_4612_, lean_object* v_a_4613_, lean_object* v___x_4614_, lean_object* v_only_4615_, lean_object* v_incremental_4616_, lean_object* v___x_4617_, lean_object* v_x_4618_, lean_object* v_mod_x3f_4619_, lean_object* v___y_4620_, lean_object* v___y_4621_, lean_object* v___y_4622_, lean_object* v___y_4623_, lean_object* v___y_4624_, lean_object* v___y_4625_, lean_object* v___y_4626_){
_start:
{
uint8_t v___x_18151__boxed_4627_; uint8_t v_only_boxed_4628_; uint8_t v_incremental_boxed_4629_; uint8_t v___x_18152__boxed_4630_; lean_object* v_res_4631_; 
v___x_18151__boxed_4627_ = lean_unbox(v___x_4614_);
v_only_boxed_4628_ = lean_unbox(v_only_4615_);
v_incremental_boxed_4629_ = lean_unbox(v_incremental_4616_);
v___x_18152__boxed_4630_ = lean_unbox(v___x_4617_);
v_res_4631_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__1(v___x_4611_, v_b_4612_, v_a_4613_, v___x_18151__boxed_4627_, v_only_boxed_4628_, v_incremental_boxed_4629_, v___x_18152__boxed_4630_, v_x_4618_, v_mod_x3f_4619_, v___y_4620_, v___y_4621_, v___y_4622_, v___y_4623_, v___y_4624_, v___y_4625_);
lean_dec(v___y_4625_);
lean_dec_ref(v___y_4624_);
lean_dec(v___y_4623_);
lean_dec_ref(v___y_4622_);
lean_dec(v___y_4621_);
lean_dec_ref(v___y_4620_);
lean_dec(v___x_4611_);
return v_res_4631_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3(void){
_start:
{
lean_object* v___x_4639_; lean_object* v___x_4640_; 
v___x_4639_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__2));
v___x_4640_ = l_Lean_stringToMessageData(v___x_4639_);
return v___x_4640_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__13(void){
_start:
{
lean_object* v___x_4666_; lean_object* v___x_4667_; 
v___x_4666_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__12));
v___x_4667_ = l_Lean_stringToMessageData(v___x_4666_);
return v___x_4667_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__17(void){
_start:
{
lean_object* v___x_4672_; lean_object* v___x_4673_; 
v___x_4672_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__16));
v___x_4673_ = l_Lean_stringToMessageData(v___x_4672_);
return v___x_4673_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0(uint8_t v_lax_4674_, uint8_t v_only_4675_, uint8_t v_incremental_4676_, lean_object* v_as_4677_, size_t v_sz_4678_, size_t v_i_4679_, lean_object* v_b_4680_, lean_object* v___y_4681_, lean_object* v___y_4682_, lean_object* v___y_4683_, lean_object* v___y_4684_, lean_object* v___y_4685_, lean_object* v___y_4686_){
_start:
{
lean_object* v_snd_4689_; lean_object* v___y_4694_; uint8_t v___y_4695_; lean_object* v_a_4699_; lean_object* v___y_4703_; uint8_t v___x_4707_; 
v___x_4707_ = lean_usize_dec_lt(v_i_4679_, v_sz_4678_);
if (v___x_4707_ == 0)
{
lean_object* v___x_4708_; 
v___x_4708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4708_, 0, v_b_4680_);
return v___x_4708_;
}
else
{
lean_object* v_a_4709_; lean_object* v___x_4710_; uint8_t v___x_4711_; 
v_a_4709_ = lean_array_uget_borrowed(v_as_4677_, v_i_4679_);
v___x_4710_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1));
lean_inc(v_a_4709_);
v___x_4711_ = l_Lean_Syntax_isOfKind(v_a_4709_, v___x_4710_);
if (v___x_4711_ == 0)
{
lean_object* v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; lean_object* v___x_4715_; lean_object* v___x_4716_; 
v___x_4712_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3);
lean_inc(v_a_4709_);
v___x_4713_ = l_Lean_MessageData_ofSyntax(v_a_4709_);
v___x_4714_ = l_Lean_indentD(v___x_4713_);
v___x_4715_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4715_, 0, v___x_4712_);
lean_ctor_set(v___x_4715_, 1, v___x_4714_);
v___x_4716_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_4715_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_, v___y_4685_, v___y_4686_);
if (lean_obj_tag(v___x_4716_) == 0)
{
lean_dec_ref_known(v___x_4716_, 1);
v_snd_4689_ = v_b_4680_;
goto v___jp_4688_;
}
else
{
lean_object* v_a_4717_; 
v_a_4717_ = lean_ctor_get(v___x_4716_, 0);
lean_inc(v_a_4717_);
lean_dec_ref_known(v___x_4716_, 1);
v_a_4699_ = v_a_4717_;
goto v___jp_4698_;
}
}
else
{
lean_object* v___x_4718_; lean_object* v___x_4719_; lean_object* v___x_4720_; uint8_t v___x_4721_; 
v___x_4718_ = lean_unsigned_to_nat(0u);
v___x_4719_ = l_Lean_Syntax_getArg(v_a_4709_, v___x_4718_);
v___x_4720_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5));
lean_inc(v___x_4719_);
v___x_4721_ = l_Lean_Syntax_isOfKind(v___x_4719_, v___x_4720_);
if (v___x_4721_ == 0)
{
lean_object* v___x_4722_; uint8_t v___x_4723_; 
v___x_4722_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7));
lean_inc(v___x_4719_);
v___x_4723_ = l_Lean_Syntax_isOfKind(v___x_4719_, v___x_4722_);
if (v___x_4723_ == 0)
{
lean_object* v___x_4724_; uint8_t v___x_4725_; 
v___x_4724_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9));
lean_inc(v___x_4719_);
v___x_4725_ = l_Lean_Syntax_isOfKind(v___x_4719_, v___x_4724_);
if (v___x_4725_ == 0)
{
lean_object* v___x_4726_; uint8_t v___x_4727_; 
v___x_4726_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11));
lean_inc(v___x_4719_);
v___x_4727_ = l_Lean_Syntax_isOfKind(v___x_4719_, v___x_4726_);
if (v___x_4727_ == 0)
{
lean_object* v___x_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; lean_object* v___x_4731_; lean_object* v___x_4732_; 
lean_dec(v___x_4719_);
v___x_4728_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3);
lean_inc(v_a_4709_);
v___x_4729_ = l_Lean_MessageData_ofSyntax(v_a_4709_);
v___x_4730_ = l_Lean_indentD(v___x_4729_);
v___x_4731_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4731_, 0, v___x_4728_);
lean_ctor_set(v___x_4731_, 1, v___x_4730_);
v___x_4732_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_4731_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_, v___y_4685_, v___y_4686_);
if (lean_obj_tag(v___x_4732_) == 0)
{
lean_dec_ref_known(v___x_4732_, 1);
v_snd_4689_ = v_b_4680_;
goto v___jp_4688_;
}
else
{
lean_object* v_a_4733_; 
v_a_4733_ = lean_ctor_get(v___x_4732_, 0);
lean_inc(v_a_4733_);
lean_dec_ref_known(v___x_4732_, 1);
v_a_4699_ = v_a_4733_;
goto v___jp_4698_;
}
}
else
{
lean_object* v___x_4734_; lean_object* v___x_4735_; 
v___x_4734_ = lean_unsigned_to_nat(1u);
v___x_4735_ = l_Lean_Syntax_getArg(v___x_4719_, v___x_4734_);
lean_dec(v___x_4719_);
if (v___x_4725_ == 0)
{
lean_object* v___x_4744_; uint8_t v___x_4745_; 
v___x_4744_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__15));
lean_inc(v___x_4735_);
v___x_4745_ = l_Lean_Syntax_isOfKind(v___x_4735_, v___x_4744_);
if (v___x_4745_ == 0)
{
lean_object* v___x_4746_; lean_object* v___x_4747_; lean_object* v___x_4748_; lean_object* v___x_4749_; lean_object* v___x_4750_; 
lean_dec(v___x_4735_);
v___x_4746_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3);
lean_inc(v_a_4709_);
v___x_4747_ = l_Lean_MessageData_ofSyntax(v_a_4709_);
v___x_4748_ = l_Lean_indentD(v___x_4747_);
v___x_4749_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4749_, 0, v___x_4746_);
lean_ctor_set(v___x_4749_, 1, v___x_4748_);
v___x_4750_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_4749_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_, v___y_4685_, v___y_4686_);
if (lean_obj_tag(v___x_4750_) == 0)
{
lean_dec_ref_known(v___x_4750_, 1);
v_snd_4689_ = v_b_4680_;
goto v___jp_4688_;
}
else
{
lean_object* v_a_4751_; 
v_a_4751_ = lean_ctor_get(v___x_4750_, 0);
lean_inc(v_a_4751_);
lean_dec_ref_known(v___x_4750_, 1);
v_a_4699_ = v_a_4751_;
goto v___jp_4698_;
}
}
else
{
goto v___jp_4736_;
}
}
else
{
goto v___jp_4736_;
}
v___jp_4736_:
{
if (v_only_4675_ == 0)
{
lean_object* v___x_4737_; lean_object* v___x_4738_; 
v___x_4737_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__13, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__13);
v___x_4738_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg(v___x_4735_, v___x_4737_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_, v___y_4685_, v___y_4686_);
if (lean_obj_tag(v___x_4738_) == 0)
{
lean_object* v_a_4739_; lean_object* v___x_4740_; 
v_a_4739_ = lean_ctor_get(v___x_4738_, 0);
lean_inc(v_a_4739_);
lean_dec_ref_known(v___x_4738_, 1);
lean_inc_ref(v_b_4680_);
v___x_4740_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__0(v_b_4680_, v___x_4735_, v_a_4739_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_, v___y_4685_, v___y_4686_);
lean_dec(v___x_4735_);
v___y_4703_ = v___x_4740_;
goto v___jp_4702_;
}
else
{
lean_object* v_a_4741_; 
lean_dec(v___x_4735_);
v_a_4741_ = lean_ctor_get(v___x_4738_, 0);
lean_inc(v_a_4741_);
lean_dec_ref_known(v___x_4738_, 1);
v_a_4699_ = v_a_4741_;
goto v___jp_4698_;
}
}
else
{
lean_object* v___x_4742_; lean_object* v___x_4743_; 
v___x_4742_ = lean_box(0);
lean_inc_ref(v_b_4680_);
v___x_4743_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__0(v_b_4680_, v___x_4735_, v___x_4742_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_, v___y_4685_, v___y_4686_);
lean_dec(v___x_4735_);
v___y_4703_ = v___x_4743_;
goto v___jp_4702_;
}
}
}
}
else
{
lean_object* v___x_4752_; lean_object* v___x_4753_; uint8_t v___x_4754_; 
v___x_4752_ = lean_unsigned_to_nat(1u);
v___x_4753_ = l_Lean_Syntax_getArg(v___x_4719_, v___x_4752_);
v___x_4754_ = l_Lean_Syntax_isNone(v___x_4753_);
if (v___x_4754_ == 0)
{
uint8_t v___x_4755_; 
lean_inc(v___x_4753_);
v___x_4755_ = l_Lean_Syntax_matchesNull(v___x_4753_, v___x_4752_);
if (v___x_4755_ == 0)
{
lean_object* v___x_4756_; lean_object* v___x_4757_; lean_object* v___x_4758_; lean_object* v___x_4759_; lean_object* v___x_4760_; 
lean_dec(v___x_4753_);
lean_dec(v___x_4719_);
v___x_4756_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3);
lean_inc(v_a_4709_);
v___x_4757_ = l_Lean_MessageData_ofSyntax(v_a_4709_);
v___x_4758_ = l_Lean_indentD(v___x_4757_);
v___x_4759_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4759_, 0, v___x_4756_);
lean_ctor_set(v___x_4759_, 1, v___x_4758_);
v___x_4760_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_4759_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_, v___y_4685_, v___y_4686_);
if (lean_obj_tag(v___x_4760_) == 0)
{
lean_dec_ref_known(v___x_4760_, 1);
v_snd_4689_ = v_b_4680_;
goto v___jp_4688_;
}
else
{
lean_object* v_a_4761_; 
v_a_4761_ = lean_ctor_get(v___x_4760_, 0);
lean_inc(v_a_4761_);
lean_dec_ref_known(v___x_4760_, 1);
v_a_4699_ = v_a_4761_;
goto v___jp_4698_;
}
}
else
{
lean_object* v___x_4762_; 
v___x_4762_ = l_Lean_Syntax_getArg(v___x_4753_, v___x_4718_);
lean_dec(v___x_4753_);
if (v___x_4754_ == 0)
{
lean_object* v___x_4767_; uint8_t v___x_4768_; 
v___x_4767_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4));
lean_inc(v___x_4762_);
v___x_4768_ = l_Lean_Syntax_isOfKind(v___x_4762_, v___x_4767_);
if (v___x_4768_ == 0)
{
lean_object* v___x_4769_; lean_object* v___x_4770_; lean_object* v___x_4771_; lean_object* v___x_4772_; lean_object* v___x_4773_; 
lean_dec(v___x_4762_);
lean_dec(v___x_4719_);
v___x_4769_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3);
lean_inc(v_a_4709_);
v___x_4770_ = l_Lean_MessageData_ofSyntax(v_a_4709_);
v___x_4771_ = l_Lean_indentD(v___x_4770_);
v___x_4772_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4772_, 0, v___x_4769_);
lean_ctor_set(v___x_4772_, 1, v___x_4771_);
v___x_4773_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_4772_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_, v___y_4685_, v___y_4686_);
if (lean_obj_tag(v___x_4773_) == 0)
{
lean_dec_ref_known(v___x_4773_, 1);
v_snd_4689_ = v_b_4680_;
goto v___jp_4688_;
}
else
{
lean_object* v_a_4774_; 
v_a_4774_ = lean_ctor_get(v___x_4773_, 0);
lean_inc(v_a_4774_);
lean_dec_ref_known(v___x_4773_, 1);
v_a_4699_ = v_a_4774_;
goto v___jp_4698_;
}
}
else
{
goto v___jp_4763_;
}
}
else
{
goto v___jp_4763_;
}
v___jp_4763_:
{
lean_object* v___x_4764_; lean_object* v___x_4765_; lean_object* v___x_4766_; 
v___x_4764_ = lean_box(0);
v___x_4765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4765_, 0, v___x_4762_);
lean_inc(v_a_4709_);
lean_inc_ref(v_b_4680_);
v___x_4766_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__1(v___x_4719_, v_b_4680_, v_a_4709_, v___x_4711_, v_only_4675_, v_incremental_4676_, v___x_4723_, v___x_4764_, v___x_4765_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_, v___y_4685_, v___y_4686_);
lean_dec(v___x_4719_);
v___y_4703_ = v___x_4766_;
goto v___jp_4702_;
}
}
}
else
{
lean_object* v___x_4775_; lean_object* v___x_4776_; lean_object* v___x_4777_; 
lean_dec(v___x_4753_);
v___x_4775_ = lean_box(0);
v___x_4776_ = lean_box(0);
lean_inc(v_a_4709_);
lean_inc_ref(v_b_4680_);
v___x_4777_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__1(v___x_4719_, v_b_4680_, v_a_4709_, v___x_4711_, v_only_4675_, v_incremental_4676_, v___x_4723_, v___x_4775_, v___x_4776_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_, v___y_4685_, v___y_4686_);
lean_dec(v___x_4719_);
v___y_4703_ = v___x_4777_;
goto v___jp_4702_;
}
}
}
else
{
lean_object* v___x_4778_; uint8_t v___x_4779_; 
v___x_4778_ = l_Lean_Syntax_getArg(v___x_4719_, v___x_4718_);
v___x_4779_ = l_Lean_Syntax_isNone(v___x_4778_);
if (v___x_4779_ == 0)
{
lean_object* v___x_4780_; uint8_t v___x_4781_; 
v___x_4780_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_4778_);
v___x_4781_ = l_Lean_Syntax_matchesNull(v___x_4778_, v___x_4780_);
if (v___x_4781_ == 0)
{
lean_object* v___x_4782_; lean_object* v___x_4783_; lean_object* v___x_4784_; lean_object* v___x_4785_; lean_object* v___x_4786_; 
lean_dec(v___x_4778_);
lean_dec(v___x_4719_);
v___x_4782_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3);
lean_inc(v_a_4709_);
v___x_4783_ = l_Lean_MessageData_ofSyntax(v_a_4709_);
v___x_4784_ = l_Lean_indentD(v___x_4783_);
v___x_4785_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4785_, 0, v___x_4782_);
lean_ctor_set(v___x_4785_, 1, v___x_4784_);
v___x_4786_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_4785_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_, v___y_4685_, v___y_4686_);
if (lean_obj_tag(v___x_4786_) == 0)
{
lean_dec_ref_known(v___x_4786_, 1);
v_snd_4689_ = v_b_4680_;
goto v___jp_4688_;
}
else
{
lean_object* v_a_4787_; 
v_a_4787_ = lean_ctor_get(v___x_4786_, 0);
lean_inc(v_a_4787_);
lean_dec_ref_known(v___x_4786_, 1);
v_a_4699_ = v_a_4787_;
goto v___jp_4698_;
}
}
else
{
lean_object* v___x_4788_; 
v___x_4788_ = l_Lean_Syntax_getArg(v___x_4778_, v___x_4718_);
lean_dec(v___x_4778_);
if (v___x_4779_ == 0)
{
lean_object* v___x_4793_; uint8_t v___x_4794_; 
v___x_4793_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4));
lean_inc(v___x_4788_);
v___x_4794_ = l_Lean_Syntax_isOfKind(v___x_4788_, v___x_4793_);
if (v___x_4794_ == 0)
{
lean_object* v___x_4795_; lean_object* v___x_4796_; lean_object* v___x_4797_; lean_object* v___x_4798_; lean_object* v___x_4799_; 
lean_dec(v___x_4788_);
lean_dec(v___x_4719_);
v___x_4795_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3);
lean_inc(v_a_4709_);
v___x_4796_ = l_Lean_MessageData_ofSyntax(v_a_4709_);
v___x_4797_ = l_Lean_indentD(v___x_4796_);
v___x_4798_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4798_, 0, v___x_4795_);
lean_ctor_set(v___x_4798_, 1, v___x_4797_);
v___x_4799_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_4798_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_, v___y_4685_, v___y_4686_);
if (lean_obj_tag(v___x_4799_) == 0)
{
lean_dec_ref_known(v___x_4799_, 1);
v_snd_4689_ = v_b_4680_;
goto v___jp_4688_;
}
else
{
lean_object* v_a_4800_; 
v_a_4800_ = lean_ctor_get(v___x_4799_, 0);
lean_inc(v_a_4800_);
lean_dec_ref_known(v___x_4799_, 1);
v_a_4699_ = v_a_4800_;
goto v___jp_4698_;
}
}
else
{
goto v___jp_4789_;
}
}
else
{
goto v___jp_4789_;
}
v___jp_4789_:
{
lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; 
v___x_4790_ = lean_box(0);
v___x_4791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4791_, 0, v___x_4788_);
lean_inc(v_a_4709_);
lean_inc_ref(v_b_4680_);
v___x_4792_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2(v___x_4719_, v_b_4680_, v_a_4709_, v___x_4721_, v_only_4675_, v_incremental_4676_, v___x_4790_, v___x_4791_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_, v___y_4685_, v___y_4686_);
lean_dec(v___x_4719_);
v___y_4703_ = v___x_4792_;
goto v___jp_4702_;
}
}
}
else
{
lean_object* v___x_4801_; lean_object* v___x_4802_; lean_object* v___x_4803_; 
lean_dec(v___x_4778_);
v___x_4801_ = lean_box(0);
v___x_4802_ = lean_box(0);
lean_inc(v_a_4709_);
lean_inc_ref(v_b_4680_);
v___x_4803_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2(v___x_4719_, v_b_4680_, v_a_4709_, v___x_4721_, v_only_4675_, v_incremental_4676_, v___x_4801_, v___x_4802_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_, v___y_4685_, v___y_4686_);
lean_dec(v___x_4719_);
v___y_4703_ = v___x_4803_;
goto v___jp_4702_;
}
}
}
else
{
lean_object* v___x_4804_; lean_object* v___x_4805_; lean_object* v___x_4806_; uint8_t v___x_4807_; 
v___x_4804_ = lean_unsigned_to_nat(1u);
v___x_4805_ = l_Lean_Syntax_getArg(v___x_4719_, v___x_4804_);
lean_dec(v___x_4719_);
v___x_4806_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__1));
lean_inc(v___x_4805_);
v___x_4807_ = l_Lean_Syntax_isOfKind(v___x_4805_, v___x_4806_);
if (v___x_4807_ == 0)
{
lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; lean_object* v___x_4811_; lean_object* v___x_4812_; 
lean_dec(v___x_4805_);
v___x_4808_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3);
lean_inc(v_a_4709_);
v___x_4809_ = l_Lean_MessageData_ofSyntax(v_a_4709_);
v___x_4810_ = l_Lean_indentD(v___x_4809_);
v___x_4811_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4811_, 0, v___x_4808_);
lean_ctor_set(v___x_4811_, 1, v___x_4810_);
v___x_4812_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_4811_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_, v___y_4685_, v___y_4686_);
if (lean_obj_tag(v___x_4812_) == 0)
{
lean_dec_ref_known(v___x_4812_, 1);
v_snd_4689_ = v_b_4680_;
goto v___jp_4688_;
}
else
{
lean_object* v_a_4813_; 
v_a_4813_ = lean_ctor_get(v___x_4812_, 0);
lean_inc(v_a_4813_);
lean_dec_ref_known(v___x_4812_, 1);
v_a_4699_ = v_a_4813_;
goto v___jp_4698_;
}
}
else
{
if (v_incremental_4676_ == 0)
{
lean_object* v___x_4814_; lean_object* v___x_4815_; 
v___x_4814_ = lean_box(0);
lean_inc_ref(v_b_4680_);
v___x_4815_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__3(v___x_4805_, v___x_4711_, v_b_4680_, v___x_4814_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_, v___y_4685_, v___y_4686_);
v___y_4703_ = v___x_4815_;
goto v___jp_4702_;
}
else
{
lean_object* v___x_4816_; lean_object* v___x_4817_; 
v___x_4816_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__17, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__17_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__17);
v___x_4817_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg(v_a_4709_, v___x_4816_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_, v___y_4685_, v___y_4686_);
if (lean_obj_tag(v___x_4817_) == 0)
{
lean_object* v_a_4818_; lean_object* v___x_4819_; 
v_a_4818_ = lean_ctor_get(v___x_4817_, 0);
lean_inc(v_a_4818_);
lean_dec_ref_known(v___x_4817_, 1);
lean_inc_ref(v_b_4680_);
v___x_4819_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__3(v___x_4805_, v___x_4711_, v_b_4680_, v_a_4818_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_, v___y_4685_, v___y_4686_);
v___y_4703_ = v___x_4819_;
goto v___jp_4702_;
}
else
{
lean_object* v_a_4820_; 
lean_dec(v___x_4805_);
v_a_4820_ = lean_ctor_get(v___x_4817_, 0);
lean_inc(v_a_4820_);
lean_dec_ref_known(v___x_4817_, 1);
v_a_4699_ = v_a_4820_;
goto v___jp_4698_;
}
}
}
}
}
}
v___jp_4688_:
{
size_t v___x_4690_; size_t v___x_4691_; 
v___x_4690_ = ((size_t)1ULL);
v___x_4691_ = lean_usize_add(v_i_4679_, v___x_4690_);
v_i_4679_ = v___x_4691_;
v_b_4680_ = v_snd_4689_;
goto _start;
}
v___jp_4693_:
{
if (v___y_4695_ == 0)
{
if (v_lax_4674_ == 0)
{
lean_object* v___x_4696_; 
lean_dec_ref(v_b_4680_);
v___x_4696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4696_, 0, v___y_4694_);
return v___x_4696_;
}
else
{
lean_dec_ref(v___y_4694_);
v_snd_4689_ = v_b_4680_;
goto v___jp_4688_;
}
}
else
{
lean_object* v___x_4697_; 
lean_dec_ref(v_b_4680_);
v___x_4697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4697_, 0, v___y_4694_);
return v___x_4697_;
}
}
v___jp_4698_:
{
uint8_t v___x_4700_; 
v___x_4700_ = l_Lean_Exception_isInterrupt(v_a_4699_);
if (v___x_4700_ == 0)
{
uint8_t v___x_4701_; 
lean_inc_ref(v_a_4699_);
v___x_4701_ = l_Lean_Exception_isRuntime(v_a_4699_);
v___y_4694_ = v_a_4699_;
v___y_4695_ = v___x_4701_;
goto v___jp_4693_;
}
else
{
v___y_4694_ = v_a_4699_;
v___y_4695_ = v___x_4700_;
goto v___jp_4693_;
}
}
v___jp_4702_:
{
if (lean_obj_tag(v___y_4703_) == 0)
{
lean_object* v_a_4704_; lean_object* v_snd_4705_; 
lean_dec_ref(v_b_4680_);
v_a_4704_ = lean_ctor_get(v___y_4703_, 0);
lean_inc(v_a_4704_);
lean_dec_ref_known(v___y_4703_, 1);
v_snd_4705_ = lean_ctor_get(v_a_4704_, 1);
lean_inc(v_snd_4705_);
lean_dec(v_a_4704_);
v_snd_4689_ = v_snd_4705_;
goto v___jp_4688_;
}
else
{
lean_object* v_a_4706_; 
v_a_4706_ = lean_ctor_get(v___y_4703_, 0);
lean_inc(v_a_4706_);
lean_dec_ref_known(v___y_4703_, 1);
v_a_4699_ = v_a_4706_;
goto v___jp_4698_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___boxed(lean_object* v_lax_4821_, lean_object* v_only_4822_, lean_object* v_incremental_4823_, lean_object* v_as_4824_, lean_object* v_sz_4825_, lean_object* v_i_4826_, lean_object* v_b_4827_, lean_object* v___y_4828_, lean_object* v___y_4829_, lean_object* v___y_4830_, lean_object* v___y_4831_, lean_object* v___y_4832_, lean_object* v___y_4833_, lean_object* v___y_4834_){
_start:
{
uint8_t v_lax_boxed_4835_; uint8_t v_only_boxed_4836_; uint8_t v_incremental_boxed_4837_; size_t v_sz_boxed_4838_; size_t v_i_boxed_4839_; lean_object* v_res_4840_; 
v_lax_boxed_4835_ = lean_unbox(v_lax_4821_);
v_only_boxed_4836_ = lean_unbox(v_only_4822_);
v_incremental_boxed_4837_ = lean_unbox(v_incremental_4823_);
v_sz_boxed_4838_ = lean_unbox_usize(v_sz_4825_);
lean_dec(v_sz_4825_);
v_i_boxed_4839_ = lean_unbox_usize(v_i_4826_);
lean_dec(v_i_4826_);
v_res_4840_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0(v_lax_boxed_4835_, v_only_boxed_4836_, v_incremental_boxed_4837_, v_as_4824_, v_sz_boxed_4838_, v_i_boxed_4839_, v_b_4827_, v___y_4828_, v___y_4829_, v___y_4830_, v___y_4831_, v___y_4832_, v___y_4833_);
lean_dec(v___y_4833_);
lean_dec_ref(v___y_4832_);
lean_dec(v___y_4831_);
lean_dec_ref(v___y_4830_);
lean_dec(v___y_4829_);
lean_dec_ref(v___y_4828_);
lean_dec_ref(v_as_4824_);
return v_res_4840_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabGrindParams(lean_object* v_params_4841_, lean_object* v_ps_4842_, uint8_t v_only_4843_, uint8_t v_lax_4844_, uint8_t v_incremental_4845_, lean_object* v___y_4846_, lean_object* v___y_4847_, lean_object* v___y_4848_, lean_object* v___y_4849_, lean_object* v___y_4850_, lean_object* v___y_4851_){
_start:
{
size_t v_sz_4853_; size_t v___x_4854_; lean_object* v___x_4855_; 
v_sz_4853_ = lean_array_size(v_ps_4842_);
v___x_4854_ = ((size_t)0ULL);
v___x_4855_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0(v_lax_4844_, v_only_4843_, v_incremental_4845_, v_ps_4842_, v_sz_4853_, v___x_4854_, v_params_4841_, v___y_4846_, v___y_4847_, v___y_4848_, v___y_4849_, v___y_4850_, v___y_4851_);
return v___x_4855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabGrindParams___boxed(lean_object* v_params_4856_, lean_object* v_ps_4857_, lean_object* v_only_4858_, lean_object* v_lax_4859_, lean_object* v_incremental_4860_, lean_object* v___y_4861_, lean_object* v___y_4862_, lean_object* v___y_4863_, lean_object* v___y_4864_, lean_object* v___y_4865_, lean_object* v___y_4866_, lean_object* v___y_4867_){
_start:
{
uint8_t v_only_boxed_4868_; uint8_t v_lax_boxed_4869_; uint8_t v_incremental_boxed_4870_; lean_object* v_res_4871_; 
v_only_boxed_4868_ = lean_unbox(v_only_4858_);
v_lax_boxed_4869_ = lean_unbox(v_lax_4859_);
v_incremental_boxed_4870_ = lean_unbox(v_incremental_4860_);
v_res_4871_ = l_Lean_Elab_Tactic_elabGrindParams(v_params_4856_, v_ps_4857_, v_only_boxed_4868_, v_lax_boxed_4869_, v_incremental_boxed_4870_, v___y_4861_, v___y_4862_, v___y_4863_, v___y_4864_, v___y_4865_, v___y_4866_);
lean_dec(v___y_4866_);
lean_dec_ref(v___y_4865_);
lean_dec(v___y_4864_);
lean_dec_ref(v___y_4863_);
lean_dec(v___y_4862_);
lean_dec_ref(v___y_4861_);
lean_dec_ref(v_ps_4857_);
return v_res_4871_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_shouldKeep(lean_object* v_thm_4872_, lean_object* v___y_4873_, lean_object* v___y_4874_, lean_object* v___y_4875_, lean_object* v___y_4876_, lean_object* v___y_4877_, lean_object* v___y_4878_, lean_object* v___y_4879_, lean_object* v___y_4880_, lean_object* v___y_4881_){
_start:
{
lean_object* v_origin_4883_; 
v_origin_4883_ = lean_ctor_get(v_thm_4872_, 5);
if (lean_obj_tag(v_origin_4883_) == 0)
{
lean_object* v_declName_4884_; lean_object* v___x_4885_; 
lean_inc_ref(v_origin_4883_);
lean_dec_ref(v_thm_4872_);
v_declName_4884_ = lean_ctor_get(v_origin_4883_, 0);
lean_inc(v_declName_4884_);
lean_dec_ref_known(v_origin_4883_, 1);
v___x_4885_ = l_Lean_Meta_Grind_isMatchEqLikeDeclName(v_declName_4884_, v___y_4880_, v___y_4881_);
return v___x_4885_;
}
else
{
lean_object* v_proof_4886_; lean_object* v___x_4887_; 
v_proof_4886_ = lean_ctor_get(v_thm_4872_, 1);
lean_inc_ref(v_proof_4886_);
lean_dec_ref(v_thm_4872_);
v___x_4887_ = l_Lean_Meta_Grind_checkAnchorRefsEMatchTheoremProof(v_proof_4886_, v___y_4873_, v___y_4874_, v___y_4875_, v___y_4876_, v___y_4877_, v___y_4878_, v___y_4879_, v___y_4880_, v___y_4881_);
return v___x_4887_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_shouldKeep___boxed(lean_object* v_thm_4888_, lean_object* v___y_4889_, lean_object* v___y_4890_, lean_object* v___y_4891_, lean_object* v___y_4892_, lean_object* v___y_4893_, lean_object* v___y_4894_, lean_object* v___y_4895_, lean_object* v___y_4896_, lean_object* v___y_4897_, lean_object* v___y_4898_){
_start:
{
lean_object* v_res_4899_; 
v_res_4899_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_shouldKeep(v_thm_4888_, v___y_4889_, v___y_4890_, v___y_4891_, v___y_4892_, v___y_4893_, v___y_4894_, v___y_4895_, v___y_4896_, v___y_4897_);
lean_dec(v___y_4897_);
lean_dec_ref(v___y_4896_);
lean_dec(v___y_4895_);
lean_dec_ref(v___y_4894_);
lean_dec(v___y_4893_);
lean_dec_ref(v___y_4892_);
lean_dec(v___y_4891_);
lean_dec_ref(v___y_4890_);
lean_dec(v___y_4889_);
return v_res_4899_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1_spec__4(lean_object* v_as_4900_, size_t v_sz_4901_, size_t v_i_4902_, lean_object* v_b_4903_, lean_object* v___y_4904_, lean_object* v___y_4905_, lean_object* v___y_4906_, lean_object* v___y_4907_, lean_object* v___y_4908_, lean_object* v___y_4909_, lean_object* v___y_4910_, lean_object* v___y_4911_, lean_object* v___y_4912_){
_start:
{
uint8_t v___x_4914_; 
v___x_4914_ = lean_usize_dec_lt(v_i_4902_, v_sz_4901_);
if (v___x_4914_ == 0)
{
lean_object* v___x_4915_; 
v___x_4915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4915_, 0, v_b_4903_);
return v___x_4915_;
}
else
{
lean_object* v_snd_4916_; lean_object* v___x_4918_; uint8_t v_isShared_4919_; uint8_t v_isSharedCheck_4942_; 
v_snd_4916_ = lean_ctor_get(v_b_4903_, 1);
v_isSharedCheck_4942_ = !lean_is_exclusive(v_b_4903_);
if (v_isSharedCheck_4942_ == 0)
{
lean_object* v_unused_4943_; 
v_unused_4943_ = lean_ctor_get(v_b_4903_, 0);
lean_dec(v_unused_4943_);
v___x_4918_ = v_b_4903_;
v_isShared_4919_ = v_isSharedCheck_4942_;
goto v_resetjp_4917_;
}
else
{
lean_inc(v_snd_4916_);
lean_dec(v_b_4903_);
v___x_4918_ = lean_box(0);
v_isShared_4919_ = v_isSharedCheck_4942_;
goto v_resetjp_4917_;
}
v_resetjp_4917_:
{
lean_object* v___x_4920_; lean_object* v_a_4922_; lean_object* v_a_4929_; lean_object* v___x_4930_; 
v___x_4920_ = lean_box(0);
v_a_4929_ = lean_array_uget_borrowed(v_as_4900_, v_i_4902_);
lean_inc(v_a_4929_);
v___x_4930_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_shouldKeep(v_a_4929_, v___y_4904_, v___y_4905_, v___y_4906_, v___y_4907_, v___y_4908_, v___y_4909_, v___y_4910_, v___y_4911_, v___y_4912_);
if (lean_obj_tag(v___x_4930_) == 0)
{
lean_object* v_a_4931_; uint8_t v___x_4932_; 
v_a_4931_ = lean_ctor_get(v___x_4930_, 0);
lean_inc(v_a_4931_);
lean_dec_ref_known(v___x_4930_, 1);
v___x_4932_ = lean_unbox(v_a_4931_);
lean_dec(v_a_4931_);
if (v___x_4932_ == 0)
{
v_a_4922_ = v_snd_4916_;
goto v___jp_4921_;
}
else
{
lean_object* v___x_4933_; 
lean_inc(v_a_4929_);
v___x_4933_ = l_Lean_PersistentArray_push___redArg(v_snd_4916_, v_a_4929_);
v_a_4922_ = v___x_4933_;
goto v___jp_4921_;
}
}
else
{
lean_object* v_a_4934_; lean_object* v___x_4936_; uint8_t v_isShared_4937_; uint8_t v_isSharedCheck_4941_; 
lean_del_object(v___x_4918_);
lean_dec(v_snd_4916_);
v_a_4934_ = lean_ctor_get(v___x_4930_, 0);
v_isSharedCheck_4941_ = !lean_is_exclusive(v___x_4930_);
if (v_isSharedCheck_4941_ == 0)
{
v___x_4936_ = v___x_4930_;
v_isShared_4937_ = v_isSharedCheck_4941_;
goto v_resetjp_4935_;
}
else
{
lean_inc(v_a_4934_);
lean_dec(v___x_4930_);
v___x_4936_ = lean_box(0);
v_isShared_4937_ = v_isSharedCheck_4941_;
goto v_resetjp_4935_;
}
v_resetjp_4935_:
{
lean_object* v___x_4939_; 
if (v_isShared_4937_ == 0)
{
v___x_4939_ = v___x_4936_;
goto v_reusejp_4938_;
}
else
{
lean_object* v_reuseFailAlloc_4940_; 
v_reuseFailAlloc_4940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4940_, 0, v_a_4934_);
v___x_4939_ = v_reuseFailAlloc_4940_;
goto v_reusejp_4938_;
}
v_reusejp_4938_:
{
return v___x_4939_;
}
}
}
v___jp_4921_:
{
lean_object* v___x_4924_; 
if (v_isShared_4919_ == 0)
{
lean_ctor_set(v___x_4918_, 1, v_a_4922_);
lean_ctor_set(v___x_4918_, 0, v___x_4920_);
v___x_4924_ = v___x_4918_;
goto v_reusejp_4923_;
}
else
{
lean_object* v_reuseFailAlloc_4928_; 
v_reuseFailAlloc_4928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4928_, 0, v___x_4920_);
lean_ctor_set(v_reuseFailAlloc_4928_, 1, v_a_4922_);
v___x_4924_ = v_reuseFailAlloc_4928_;
goto v_reusejp_4923_;
}
v_reusejp_4923_:
{
size_t v___x_4925_; size_t v___x_4926_; 
v___x_4925_ = ((size_t)1ULL);
v___x_4926_ = lean_usize_add(v_i_4902_, v___x_4925_);
v_i_4902_ = v___x_4926_;
v_b_4903_ = v___x_4924_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1_spec__4___boxed(lean_object* v_as_4944_, lean_object* v_sz_4945_, lean_object* v_i_4946_, lean_object* v_b_4947_, lean_object* v___y_4948_, lean_object* v___y_4949_, lean_object* v___y_4950_, lean_object* v___y_4951_, lean_object* v___y_4952_, lean_object* v___y_4953_, lean_object* v___y_4954_, lean_object* v___y_4955_, lean_object* v___y_4956_, lean_object* v___y_4957_){
_start:
{
size_t v_sz_boxed_4958_; size_t v_i_boxed_4959_; lean_object* v_res_4960_; 
v_sz_boxed_4958_ = lean_unbox_usize(v_sz_4945_);
lean_dec(v_sz_4945_);
v_i_boxed_4959_ = lean_unbox_usize(v_i_4946_);
lean_dec(v_i_4946_);
v_res_4960_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1_spec__4(v_as_4944_, v_sz_boxed_4958_, v_i_boxed_4959_, v_b_4947_, v___y_4948_, v___y_4949_, v___y_4950_, v___y_4951_, v___y_4952_, v___y_4953_, v___y_4954_, v___y_4955_, v___y_4956_);
lean_dec(v___y_4956_);
lean_dec_ref(v___y_4955_);
lean_dec(v___y_4954_);
lean_dec_ref(v___y_4953_);
lean_dec(v___y_4952_);
lean_dec_ref(v___y_4951_);
lean_dec(v___y_4950_);
lean_dec_ref(v___y_4949_);
lean_dec(v___y_4948_);
lean_dec_ref(v_as_4944_);
return v_res_4960_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1(lean_object* v_as_4961_, size_t v_sz_4962_, size_t v_i_4963_, lean_object* v_b_4964_, lean_object* v___y_4965_, lean_object* v___y_4966_, lean_object* v___y_4967_, lean_object* v___y_4968_, lean_object* v___y_4969_, lean_object* v___y_4970_, lean_object* v___y_4971_, lean_object* v___y_4972_, lean_object* v___y_4973_){
_start:
{
uint8_t v___x_4975_; 
v___x_4975_ = lean_usize_dec_lt(v_i_4963_, v_sz_4962_);
if (v___x_4975_ == 0)
{
lean_object* v___x_4976_; 
v___x_4976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4976_, 0, v_b_4964_);
return v___x_4976_;
}
else
{
lean_object* v_snd_4977_; lean_object* v___x_4979_; uint8_t v_isShared_4980_; uint8_t v_isSharedCheck_5003_; 
v_snd_4977_ = lean_ctor_get(v_b_4964_, 1);
v_isSharedCheck_5003_ = !lean_is_exclusive(v_b_4964_);
if (v_isSharedCheck_5003_ == 0)
{
lean_object* v_unused_5004_; 
v_unused_5004_ = lean_ctor_get(v_b_4964_, 0);
lean_dec(v_unused_5004_);
v___x_4979_ = v_b_4964_;
v_isShared_4980_ = v_isSharedCheck_5003_;
goto v_resetjp_4978_;
}
else
{
lean_inc(v_snd_4977_);
lean_dec(v_b_4964_);
v___x_4979_ = lean_box(0);
v_isShared_4980_ = v_isSharedCheck_5003_;
goto v_resetjp_4978_;
}
v_resetjp_4978_:
{
lean_object* v___x_4981_; lean_object* v_a_4983_; lean_object* v_a_4990_; lean_object* v___x_4991_; 
v___x_4981_ = lean_box(0);
v_a_4990_ = lean_array_uget_borrowed(v_as_4961_, v_i_4963_);
lean_inc(v_a_4990_);
v___x_4991_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_shouldKeep(v_a_4990_, v___y_4965_, v___y_4966_, v___y_4967_, v___y_4968_, v___y_4969_, v___y_4970_, v___y_4971_, v___y_4972_, v___y_4973_);
if (lean_obj_tag(v___x_4991_) == 0)
{
lean_object* v_a_4992_; uint8_t v___x_4993_; 
v_a_4992_ = lean_ctor_get(v___x_4991_, 0);
lean_inc(v_a_4992_);
lean_dec_ref_known(v___x_4991_, 1);
v___x_4993_ = lean_unbox(v_a_4992_);
lean_dec(v_a_4992_);
if (v___x_4993_ == 0)
{
v_a_4983_ = v_snd_4977_;
goto v___jp_4982_;
}
else
{
lean_object* v___x_4994_; 
lean_inc(v_a_4990_);
v___x_4994_ = l_Lean_PersistentArray_push___redArg(v_snd_4977_, v_a_4990_);
v_a_4983_ = v___x_4994_;
goto v___jp_4982_;
}
}
else
{
lean_object* v_a_4995_; lean_object* v___x_4997_; uint8_t v_isShared_4998_; uint8_t v_isSharedCheck_5002_; 
lean_del_object(v___x_4979_);
lean_dec(v_snd_4977_);
v_a_4995_ = lean_ctor_get(v___x_4991_, 0);
v_isSharedCheck_5002_ = !lean_is_exclusive(v___x_4991_);
if (v_isSharedCheck_5002_ == 0)
{
v___x_4997_ = v___x_4991_;
v_isShared_4998_ = v_isSharedCheck_5002_;
goto v_resetjp_4996_;
}
else
{
lean_inc(v_a_4995_);
lean_dec(v___x_4991_);
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
lean_ctor_set(v_reuseFailAlloc_5001_, 0, v_a_4995_);
v___x_5000_ = v_reuseFailAlloc_5001_;
goto v_reusejp_4999_;
}
v_reusejp_4999_:
{
return v___x_5000_;
}
}
}
v___jp_4982_:
{
lean_object* v___x_4985_; 
if (v_isShared_4980_ == 0)
{
lean_ctor_set(v___x_4979_, 1, v_a_4983_);
lean_ctor_set(v___x_4979_, 0, v___x_4981_);
v___x_4985_ = v___x_4979_;
goto v_reusejp_4984_;
}
else
{
lean_object* v_reuseFailAlloc_4989_; 
v_reuseFailAlloc_4989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4989_, 0, v___x_4981_);
lean_ctor_set(v_reuseFailAlloc_4989_, 1, v_a_4983_);
v___x_4985_ = v_reuseFailAlloc_4989_;
goto v_reusejp_4984_;
}
v_reusejp_4984_:
{
size_t v___x_4986_; size_t v___x_4987_; lean_object* v___x_4988_; 
v___x_4986_ = ((size_t)1ULL);
v___x_4987_ = lean_usize_add(v_i_4963_, v___x_4986_);
v___x_4988_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1_spec__4(v_as_4961_, v_sz_4962_, v___x_4987_, v___x_4985_, v___y_4965_, v___y_4966_, v___y_4967_, v___y_4968_, v___y_4969_, v___y_4970_, v___y_4971_, v___y_4972_, v___y_4973_);
return v___x_4988_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1___boxed(lean_object* v_as_5005_, lean_object* v_sz_5006_, lean_object* v_i_5007_, lean_object* v_b_5008_, lean_object* v___y_5009_, lean_object* v___y_5010_, lean_object* v___y_5011_, lean_object* v___y_5012_, lean_object* v___y_5013_, lean_object* v___y_5014_, lean_object* v___y_5015_, lean_object* v___y_5016_, lean_object* v___y_5017_, lean_object* v___y_5018_){
_start:
{
size_t v_sz_boxed_5019_; size_t v_i_boxed_5020_; lean_object* v_res_5021_; 
v_sz_boxed_5019_ = lean_unbox_usize(v_sz_5006_);
lean_dec(v_sz_5006_);
v_i_boxed_5020_ = lean_unbox_usize(v_i_5007_);
lean_dec(v_i_5007_);
v_res_5021_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1(v_as_5005_, v_sz_boxed_5019_, v_i_boxed_5020_, v_b_5008_, v___y_5009_, v___y_5010_, v___y_5011_, v___y_5012_, v___y_5013_, v___y_5014_, v___y_5015_, v___y_5016_, v___y_5017_);
lean_dec(v___y_5017_);
lean_dec_ref(v___y_5016_);
lean_dec(v___y_5015_);
lean_dec_ref(v___y_5014_);
lean_dec(v___y_5013_);
lean_dec_ref(v___y_5012_);
lean_dec(v___y_5011_);
lean_dec_ref(v___y_5010_);
lean_dec(v___y_5009_);
lean_dec_ref(v_as_5005_);
return v_res_5021_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2_spec__3(lean_object* v_as_5022_, size_t v_sz_5023_, size_t v_i_5024_, lean_object* v_b_5025_, lean_object* v___y_5026_, lean_object* v___y_5027_, lean_object* v___y_5028_, lean_object* v___y_5029_, lean_object* v___y_5030_, lean_object* v___y_5031_, lean_object* v___y_5032_, lean_object* v___y_5033_, lean_object* v___y_5034_){
_start:
{
uint8_t v___x_5036_; 
v___x_5036_ = lean_usize_dec_lt(v_i_5024_, v_sz_5023_);
if (v___x_5036_ == 0)
{
lean_object* v___x_5037_; 
v___x_5037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5037_, 0, v_b_5025_);
return v___x_5037_;
}
else
{
lean_object* v_snd_5038_; lean_object* v___x_5040_; uint8_t v_isShared_5041_; uint8_t v_isSharedCheck_5064_; 
v_snd_5038_ = lean_ctor_get(v_b_5025_, 1);
v_isSharedCheck_5064_ = !lean_is_exclusive(v_b_5025_);
if (v_isSharedCheck_5064_ == 0)
{
lean_object* v_unused_5065_; 
v_unused_5065_ = lean_ctor_get(v_b_5025_, 0);
lean_dec(v_unused_5065_);
v___x_5040_ = v_b_5025_;
v_isShared_5041_ = v_isSharedCheck_5064_;
goto v_resetjp_5039_;
}
else
{
lean_inc(v_snd_5038_);
lean_dec(v_b_5025_);
v___x_5040_ = lean_box(0);
v_isShared_5041_ = v_isSharedCheck_5064_;
goto v_resetjp_5039_;
}
v_resetjp_5039_:
{
lean_object* v___x_5042_; lean_object* v_a_5044_; lean_object* v_a_5051_; lean_object* v___x_5052_; 
v___x_5042_ = lean_box(0);
v_a_5051_ = lean_array_uget_borrowed(v_as_5022_, v_i_5024_);
lean_inc(v_a_5051_);
v___x_5052_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_shouldKeep(v_a_5051_, v___y_5026_, v___y_5027_, v___y_5028_, v___y_5029_, v___y_5030_, v___y_5031_, v___y_5032_, v___y_5033_, v___y_5034_);
if (lean_obj_tag(v___x_5052_) == 0)
{
lean_object* v_a_5053_; uint8_t v___x_5054_; 
v_a_5053_ = lean_ctor_get(v___x_5052_, 0);
lean_inc(v_a_5053_);
lean_dec_ref_known(v___x_5052_, 1);
v___x_5054_ = lean_unbox(v_a_5053_);
lean_dec(v_a_5053_);
if (v___x_5054_ == 0)
{
v_a_5044_ = v_snd_5038_;
goto v___jp_5043_;
}
else
{
lean_object* v___x_5055_; 
lean_inc(v_a_5051_);
v___x_5055_ = l_Lean_PersistentArray_push___redArg(v_snd_5038_, v_a_5051_);
v_a_5044_ = v___x_5055_;
goto v___jp_5043_;
}
}
else
{
lean_object* v_a_5056_; lean_object* v___x_5058_; uint8_t v_isShared_5059_; uint8_t v_isSharedCheck_5063_; 
lean_del_object(v___x_5040_);
lean_dec(v_snd_5038_);
v_a_5056_ = lean_ctor_get(v___x_5052_, 0);
v_isSharedCheck_5063_ = !lean_is_exclusive(v___x_5052_);
if (v_isSharedCheck_5063_ == 0)
{
v___x_5058_ = v___x_5052_;
v_isShared_5059_ = v_isSharedCheck_5063_;
goto v_resetjp_5057_;
}
else
{
lean_inc(v_a_5056_);
lean_dec(v___x_5052_);
v___x_5058_ = lean_box(0);
v_isShared_5059_ = v_isSharedCheck_5063_;
goto v_resetjp_5057_;
}
v_resetjp_5057_:
{
lean_object* v___x_5061_; 
if (v_isShared_5059_ == 0)
{
v___x_5061_ = v___x_5058_;
goto v_reusejp_5060_;
}
else
{
lean_object* v_reuseFailAlloc_5062_; 
v_reuseFailAlloc_5062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5062_, 0, v_a_5056_);
v___x_5061_ = v_reuseFailAlloc_5062_;
goto v_reusejp_5060_;
}
v_reusejp_5060_:
{
return v___x_5061_;
}
}
}
v___jp_5043_:
{
lean_object* v___x_5046_; 
if (v_isShared_5041_ == 0)
{
lean_ctor_set(v___x_5040_, 1, v_a_5044_);
lean_ctor_set(v___x_5040_, 0, v___x_5042_);
v___x_5046_ = v___x_5040_;
goto v_reusejp_5045_;
}
else
{
lean_object* v_reuseFailAlloc_5050_; 
v_reuseFailAlloc_5050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5050_, 0, v___x_5042_);
lean_ctor_set(v_reuseFailAlloc_5050_, 1, v_a_5044_);
v___x_5046_ = v_reuseFailAlloc_5050_;
goto v_reusejp_5045_;
}
v_reusejp_5045_:
{
size_t v___x_5047_; size_t v___x_5048_; 
v___x_5047_ = ((size_t)1ULL);
v___x_5048_ = lean_usize_add(v_i_5024_, v___x_5047_);
v_i_5024_ = v___x_5048_;
v_b_5025_ = v___x_5046_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_as_5066_, lean_object* v_sz_5067_, lean_object* v_i_5068_, lean_object* v_b_5069_, lean_object* v___y_5070_, lean_object* v___y_5071_, lean_object* v___y_5072_, lean_object* v___y_5073_, lean_object* v___y_5074_, lean_object* v___y_5075_, lean_object* v___y_5076_, lean_object* v___y_5077_, lean_object* v___y_5078_, lean_object* v___y_5079_){
_start:
{
size_t v_sz_boxed_5080_; size_t v_i_boxed_5081_; lean_object* v_res_5082_; 
v_sz_boxed_5080_ = lean_unbox_usize(v_sz_5067_);
lean_dec(v_sz_5067_);
v_i_boxed_5081_ = lean_unbox_usize(v_i_5068_);
lean_dec(v_i_5068_);
v_res_5082_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2_spec__3(v_as_5066_, v_sz_boxed_5080_, v_i_boxed_5081_, v_b_5069_, v___y_5070_, v___y_5071_, v___y_5072_, v___y_5073_, v___y_5074_, v___y_5075_, v___y_5076_, v___y_5077_, v___y_5078_);
lean_dec(v___y_5078_);
lean_dec_ref(v___y_5077_);
lean_dec(v___y_5076_);
lean_dec_ref(v___y_5075_);
lean_dec(v___y_5074_);
lean_dec_ref(v___y_5073_);
lean_dec(v___y_5072_);
lean_dec_ref(v___y_5071_);
lean_dec(v___y_5070_);
lean_dec_ref(v_as_5066_);
return v_res_5082_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2(lean_object* v_as_5083_, size_t v_sz_5084_, size_t v_i_5085_, lean_object* v_b_5086_, lean_object* v___y_5087_, lean_object* v___y_5088_, lean_object* v___y_5089_, lean_object* v___y_5090_, lean_object* v___y_5091_, lean_object* v___y_5092_, lean_object* v___y_5093_, lean_object* v___y_5094_, lean_object* v___y_5095_){
_start:
{
uint8_t v___x_5097_; 
v___x_5097_ = lean_usize_dec_lt(v_i_5085_, v_sz_5084_);
if (v___x_5097_ == 0)
{
lean_object* v___x_5098_; 
v___x_5098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5098_, 0, v_b_5086_);
return v___x_5098_;
}
else
{
lean_object* v_snd_5099_; lean_object* v___x_5101_; uint8_t v_isShared_5102_; uint8_t v_isSharedCheck_5125_; 
v_snd_5099_ = lean_ctor_get(v_b_5086_, 1);
v_isSharedCheck_5125_ = !lean_is_exclusive(v_b_5086_);
if (v_isSharedCheck_5125_ == 0)
{
lean_object* v_unused_5126_; 
v_unused_5126_ = lean_ctor_get(v_b_5086_, 0);
lean_dec(v_unused_5126_);
v___x_5101_ = v_b_5086_;
v_isShared_5102_ = v_isSharedCheck_5125_;
goto v_resetjp_5100_;
}
else
{
lean_inc(v_snd_5099_);
lean_dec(v_b_5086_);
v___x_5101_ = lean_box(0);
v_isShared_5102_ = v_isSharedCheck_5125_;
goto v_resetjp_5100_;
}
v_resetjp_5100_:
{
lean_object* v___x_5103_; lean_object* v_a_5105_; lean_object* v_a_5112_; lean_object* v___x_5113_; 
v___x_5103_ = lean_box(0);
v_a_5112_ = lean_array_uget_borrowed(v_as_5083_, v_i_5085_);
lean_inc(v_a_5112_);
v___x_5113_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_shouldKeep(v_a_5112_, v___y_5087_, v___y_5088_, v___y_5089_, v___y_5090_, v___y_5091_, v___y_5092_, v___y_5093_, v___y_5094_, v___y_5095_);
if (lean_obj_tag(v___x_5113_) == 0)
{
lean_object* v_a_5114_; uint8_t v___x_5115_; 
v_a_5114_ = lean_ctor_get(v___x_5113_, 0);
lean_inc(v_a_5114_);
lean_dec_ref_known(v___x_5113_, 1);
v___x_5115_ = lean_unbox(v_a_5114_);
lean_dec(v_a_5114_);
if (v___x_5115_ == 0)
{
v_a_5105_ = v_snd_5099_;
goto v___jp_5104_;
}
else
{
lean_object* v___x_5116_; 
lean_inc(v_a_5112_);
v___x_5116_ = l_Lean_PersistentArray_push___redArg(v_snd_5099_, v_a_5112_);
v_a_5105_ = v___x_5116_;
goto v___jp_5104_;
}
}
else
{
lean_object* v_a_5117_; lean_object* v___x_5119_; uint8_t v_isShared_5120_; uint8_t v_isSharedCheck_5124_; 
lean_del_object(v___x_5101_);
lean_dec(v_snd_5099_);
v_a_5117_ = lean_ctor_get(v___x_5113_, 0);
v_isSharedCheck_5124_ = !lean_is_exclusive(v___x_5113_);
if (v_isSharedCheck_5124_ == 0)
{
v___x_5119_ = v___x_5113_;
v_isShared_5120_ = v_isSharedCheck_5124_;
goto v_resetjp_5118_;
}
else
{
lean_inc(v_a_5117_);
lean_dec(v___x_5113_);
v___x_5119_ = lean_box(0);
v_isShared_5120_ = v_isSharedCheck_5124_;
goto v_resetjp_5118_;
}
v_resetjp_5118_:
{
lean_object* v___x_5122_; 
if (v_isShared_5120_ == 0)
{
v___x_5122_ = v___x_5119_;
goto v_reusejp_5121_;
}
else
{
lean_object* v_reuseFailAlloc_5123_; 
v_reuseFailAlloc_5123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5123_, 0, v_a_5117_);
v___x_5122_ = v_reuseFailAlloc_5123_;
goto v_reusejp_5121_;
}
v_reusejp_5121_:
{
return v___x_5122_;
}
}
}
v___jp_5104_:
{
lean_object* v___x_5107_; 
if (v_isShared_5102_ == 0)
{
lean_ctor_set(v___x_5101_, 1, v_a_5105_);
lean_ctor_set(v___x_5101_, 0, v___x_5103_);
v___x_5107_ = v___x_5101_;
goto v_reusejp_5106_;
}
else
{
lean_object* v_reuseFailAlloc_5111_; 
v_reuseFailAlloc_5111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5111_, 0, v___x_5103_);
lean_ctor_set(v_reuseFailAlloc_5111_, 1, v_a_5105_);
v___x_5107_ = v_reuseFailAlloc_5111_;
goto v_reusejp_5106_;
}
v_reusejp_5106_:
{
size_t v___x_5108_; size_t v___x_5109_; lean_object* v___x_5110_; 
v___x_5108_ = ((size_t)1ULL);
v___x_5109_ = lean_usize_add(v_i_5085_, v___x_5108_);
v___x_5110_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2_spec__3(v_as_5083_, v_sz_5084_, v___x_5109_, v___x_5107_, v___y_5087_, v___y_5088_, v___y_5089_, v___y_5090_, v___y_5091_, v___y_5092_, v___y_5093_, v___y_5094_, v___y_5095_);
return v___x_5110_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2___boxed(lean_object* v_as_5127_, lean_object* v_sz_5128_, lean_object* v_i_5129_, lean_object* v_b_5130_, lean_object* v___y_5131_, lean_object* v___y_5132_, lean_object* v___y_5133_, lean_object* v___y_5134_, lean_object* v___y_5135_, lean_object* v___y_5136_, lean_object* v___y_5137_, lean_object* v___y_5138_, lean_object* v___y_5139_, lean_object* v___y_5140_){
_start:
{
size_t v_sz_boxed_5141_; size_t v_i_boxed_5142_; lean_object* v_res_5143_; 
v_sz_boxed_5141_ = lean_unbox_usize(v_sz_5128_);
lean_dec(v_sz_5128_);
v_i_boxed_5142_ = lean_unbox_usize(v_i_5129_);
lean_dec(v_i_5129_);
v_res_5143_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2(v_as_5127_, v_sz_boxed_5141_, v_i_boxed_5142_, v_b_5130_, v___y_5131_, v___y_5132_, v___y_5133_, v___y_5134_, v___y_5135_, v___y_5136_, v___y_5137_, v___y_5138_, v___y_5139_);
lean_dec(v___y_5139_);
lean_dec_ref(v___y_5138_);
lean_dec(v___y_5137_);
lean_dec_ref(v___y_5136_);
lean_dec(v___y_5135_);
lean_dec_ref(v___y_5134_);
lean_dec(v___y_5133_);
lean_dec_ref(v___y_5132_);
lean_dec(v___y_5131_);
lean_dec_ref(v_as_5127_);
return v_res_5143_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0(lean_object* v_init_5144_, lean_object* v_n_5145_, lean_object* v_b_5146_, lean_object* v___y_5147_, lean_object* v___y_5148_, lean_object* v___y_5149_, lean_object* v___y_5150_, lean_object* v___y_5151_, lean_object* v___y_5152_, lean_object* v___y_5153_, lean_object* v___y_5154_, lean_object* v___y_5155_){
_start:
{
if (lean_obj_tag(v_n_5145_) == 0)
{
lean_object* v_cs_5157_; lean_object* v___x_5158_; lean_object* v___x_5159_; size_t v_sz_5160_; size_t v___x_5161_; lean_object* v___x_5162_; 
v_cs_5157_ = lean_ctor_get(v_n_5145_, 0);
v___x_5158_ = lean_box(0);
v___x_5159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5159_, 0, v___x_5158_);
lean_ctor_set(v___x_5159_, 1, v_b_5146_);
v_sz_5160_ = lean_array_size(v_cs_5157_);
v___x_5161_ = ((size_t)0ULL);
v___x_5162_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__1(v_init_5144_, v_cs_5157_, v_sz_5160_, v___x_5161_, v___x_5159_, v___y_5147_, v___y_5148_, v___y_5149_, v___y_5150_, v___y_5151_, v___y_5152_, v___y_5153_, v___y_5154_, v___y_5155_);
if (lean_obj_tag(v___x_5162_) == 0)
{
lean_object* v_a_5163_; lean_object* v___x_5165_; uint8_t v_isShared_5166_; uint8_t v_isSharedCheck_5177_; 
v_a_5163_ = lean_ctor_get(v___x_5162_, 0);
v_isSharedCheck_5177_ = !lean_is_exclusive(v___x_5162_);
if (v_isSharedCheck_5177_ == 0)
{
v___x_5165_ = v___x_5162_;
v_isShared_5166_ = v_isSharedCheck_5177_;
goto v_resetjp_5164_;
}
else
{
lean_inc(v_a_5163_);
lean_dec(v___x_5162_);
v___x_5165_ = lean_box(0);
v_isShared_5166_ = v_isSharedCheck_5177_;
goto v_resetjp_5164_;
}
v_resetjp_5164_:
{
lean_object* v_fst_5167_; 
v_fst_5167_ = lean_ctor_get(v_a_5163_, 0);
if (lean_obj_tag(v_fst_5167_) == 0)
{
lean_object* v_snd_5168_; lean_object* v___x_5169_; lean_object* v___x_5171_; 
v_snd_5168_ = lean_ctor_get(v_a_5163_, 1);
lean_inc(v_snd_5168_);
lean_dec(v_a_5163_);
v___x_5169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5169_, 0, v_snd_5168_);
if (v_isShared_5166_ == 0)
{
lean_ctor_set(v___x_5165_, 0, v___x_5169_);
v___x_5171_ = v___x_5165_;
goto v_reusejp_5170_;
}
else
{
lean_object* v_reuseFailAlloc_5172_; 
v_reuseFailAlloc_5172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5172_, 0, v___x_5169_);
v___x_5171_ = v_reuseFailAlloc_5172_;
goto v_reusejp_5170_;
}
v_reusejp_5170_:
{
return v___x_5171_;
}
}
else
{
lean_object* v_val_5173_; lean_object* v___x_5175_; 
lean_inc_ref(v_fst_5167_);
lean_dec(v_a_5163_);
v_val_5173_ = lean_ctor_get(v_fst_5167_, 0);
lean_inc(v_val_5173_);
lean_dec_ref_known(v_fst_5167_, 1);
if (v_isShared_5166_ == 0)
{
lean_ctor_set(v___x_5165_, 0, v_val_5173_);
v___x_5175_ = v___x_5165_;
goto v_reusejp_5174_;
}
else
{
lean_object* v_reuseFailAlloc_5176_; 
v_reuseFailAlloc_5176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5176_, 0, v_val_5173_);
v___x_5175_ = v_reuseFailAlloc_5176_;
goto v_reusejp_5174_;
}
v_reusejp_5174_:
{
return v___x_5175_;
}
}
}
}
else
{
lean_object* v_a_5178_; lean_object* v___x_5180_; uint8_t v_isShared_5181_; uint8_t v_isSharedCheck_5185_; 
v_a_5178_ = lean_ctor_get(v___x_5162_, 0);
v_isSharedCheck_5185_ = !lean_is_exclusive(v___x_5162_);
if (v_isSharedCheck_5185_ == 0)
{
v___x_5180_ = v___x_5162_;
v_isShared_5181_ = v_isSharedCheck_5185_;
goto v_resetjp_5179_;
}
else
{
lean_inc(v_a_5178_);
lean_dec(v___x_5162_);
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
else
{
lean_object* v_vs_5186_; lean_object* v___x_5187_; lean_object* v___x_5188_; size_t v_sz_5189_; size_t v___x_5190_; lean_object* v___x_5191_; 
v_vs_5186_ = lean_ctor_get(v_n_5145_, 0);
v___x_5187_ = lean_box(0);
v___x_5188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5188_, 0, v___x_5187_);
lean_ctor_set(v___x_5188_, 1, v_b_5146_);
v_sz_5189_ = lean_array_size(v_vs_5186_);
v___x_5190_ = ((size_t)0ULL);
v___x_5191_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2(v_vs_5186_, v_sz_5189_, v___x_5190_, v___x_5188_, v___y_5147_, v___y_5148_, v___y_5149_, v___y_5150_, v___y_5151_, v___y_5152_, v___y_5153_, v___y_5154_, v___y_5155_);
if (lean_obj_tag(v___x_5191_) == 0)
{
lean_object* v_a_5192_; lean_object* v___x_5194_; uint8_t v_isShared_5195_; uint8_t v_isSharedCheck_5206_; 
v_a_5192_ = lean_ctor_get(v___x_5191_, 0);
v_isSharedCheck_5206_ = !lean_is_exclusive(v___x_5191_);
if (v_isSharedCheck_5206_ == 0)
{
v___x_5194_ = v___x_5191_;
v_isShared_5195_ = v_isSharedCheck_5206_;
goto v_resetjp_5193_;
}
else
{
lean_inc(v_a_5192_);
lean_dec(v___x_5191_);
v___x_5194_ = lean_box(0);
v_isShared_5195_ = v_isSharedCheck_5206_;
goto v_resetjp_5193_;
}
v_resetjp_5193_:
{
lean_object* v_fst_5196_; 
v_fst_5196_ = lean_ctor_get(v_a_5192_, 0);
if (lean_obj_tag(v_fst_5196_) == 0)
{
lean_object* v_snd_5197_; lean_object* v___x_5198_; lean_object* v___x_5200_; 
v_snd_5197_ = lean_ctor_get(v_a_5192_, 1);
lean_inc(v_snd_5197_);
lean_dec(v_a_5192_);
v___x_5198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5198_, 0, v_snd_5197_);
if (v_isShared_5195_ == 0)
{
lean_ctor_set(v___x_5194_, 0, v___x_5198_);
v___x_5200_ = v___x_5194_;
goto v_reusejp_5199_;
}
else
{
lean_object* v_reuseFailAlloc_5201_; 
v_reuseFailAlloc_5201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5201_, 0, v___x_5198_);
v___x_5200_ = v_reuseFailAlloc_5201_;
goto v_reusejp_5199_;
}
v_reusejp_5199_:
{
return v___x_5200_;
}
}
else
{
lean_object* v_val_5202_; lean_object* v___x_5204_; 
lean_inc_ref(v_fst_5196_);
lean_dec(v_a_5192_);
v_val_5202_ = lean_ctor_get(v_fst_5196_, 0);
lean_inc(v_val_5202_);
lean_dec_ref_known(v_fst_5196_, 1);
if (v_isShared_5195_ == 0)
{
lean_ctor_set(v___x_5194_, 0, v_val_5202_);
v___x_5204_ = v___x_5194_;
goto v_reusejp_5203_;
}
else
{
lean_object* v_reuseFailAlloc_5205_; 
v_reuseFailAlloc_5205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5205_, 0, v_val_5202_);
v___x_5204_ = v_reuseFailAlloc_5205_;
goto v_reusejp_5203_;
}
v_reusejp_5203_:
{
return v___x_5204_;
}
}
}
}
else
{
lean_object* v_a_5207_; lean_object* v___x_5209_; uint8_t v_isShared_5210_; uint8_t v_isSharedCheck_5214_; 
v_a_5207_ = lean_ctor_get(v___x_5191_, 0);
v_isSharedCheck_5214_ = !lean_is_exclusive(v___x_5191_);
if (v_isSharedCheck_5214_ == 0)
{
v___x_5209_ = v___x_5191_;
v_isShared_5210_ = v_isSharedCheck_5214_;
goto v_resetjp_5208_;
}
else
{
lean_inc(v_a_5207_);
lean_dec(v___x_5191_);
v___x_5209_ = lean_box(0);
v_isShared_5210_ = v_isSharedCheck_5214_;
goto v_resetjp_5208_;
}
v_resetjp_5208_:
{
lean_object* v___x_5212_; 
if (v_isShared_5210_ == 0)
{
v___x_5212_ = v___x_5209_;
goto v_reusejp_5211_;
}
else
{
lean_object* v_reuseFailAlloc_5213_; 
v_reuseFailAlloc_5213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5213_, 0, v_a_5207_);
v___x_5212_ = v_reuseFailAlloc_5213_;
goto v_reusejp_5211_;
}
v_reusejp_5211_:
{
return v___x_5212_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__1(lean_object* v_init_5215_, lean_object* v_as_5216_, size_t v_sz_5217_, size_t v_i_5218_, lean_object* v_b_5219_, lean_object* v___y_5220_, lean_object* v___y_5221_, lean_object* v___y_5222_, lean_object* v___y_5223_, lean_object* v___y_5224_, lean_object* v___y_5225_, lean_object* v___y_5226_, lean_object* v___y_5227_, lean_object* v___y_5228_){
_start:
{
uint8_t v___x_5230_; 
v___x_5230_ = lean_usize_dec_lt(v_i_5218_, v_sz_5217_);
if (v___x_5230_ == 0)
{
lean_object* v___x_5231_; 
v___x_5231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5231_, 0, v_b_5219_);
return v___x_5231_;
}
else
{
lean_object* v_snd_5232_; lean_object* v___x_5234_; uint8_t v_isShared_5235_; uint8_t v_isSharedCheck_5266_; 
v_snd_5232_ = lean_ctor_get(v_b_5219_, 1);
v_isSharedCheck_5266_ = !lean_is_exclusive(v_b_5219_);
if (v_isSharedCheck_5266_ == 0)
{
lean_object* v_unused_5267_; 
v_unused_5267_ = lean_ctor_get(v_b_5219_, 0);
lean_dec(v_unused_5267_);
v___x_5234_ = v_b_5219_;
v_isShared_5235_ = v_isSharedCheck_5266_;
goto v_resetjp_5233_;
}
else
{
lean_inc(v_snd_5232_);
lean_dec(v_b_5219_);
v___x_5234_ = lean_box(0);
v_isShared_5235_ = v_isSharedCheck_5266_;
goto v_resetjp_5233_;
}
v_resetjp_5233_:
{
lean_object* v___x_5236_; lean_object* v_a_5237_; lean_object* v___x_5238_; 
v___x_5236_ = lean_box(0);
v_a_5237_ = lean_array_uget_borrowed(v_as_5216_, v_i_5218_);
lean_inc(v_snd_5232_);
v___x_5238_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0(v_init_5215_, v_a_5237_, v_snd_5232_, v___y_5220_, v___y_5221_, v___y_5222_, v___y_5223_, v___y_5224_, v___y_5225_, v___y_5226_, v___y_5227_, v___y_5228_);
if (lean_obj_tag(v___x_5238_) == 0)
{
lean_object* v_a_5239_; lean_object* v___x_5241_; uint8_t v_isShared_5242_; uint8_t v_isSharedCheck_5257_; 
v_a_5239_ = lean_ctor_get(v___x_5238_, 0);
v_isSharedCheck_5257_ = !lean_is_exclusive(v___x_5238_);
if (v_isSharedCheck_5257_ == 0)
{
v___x_5241_ = v___x_5238_;
v_isShared_5242_ = v_isSharedCheck_5257_;
goto v_resetjp_5240_;
}
else
{
lean_inc(v_a_5239_);
lean_dec(v___x_5238_);
v___x_5241_ = lean_box(0);
v_isShared_5242_ = v_isSharedCheck_5257_;
goto v_resetjp_5240_;
}
v_resetjp_5240_:
{
if (lean_obj_tag(v_a_5239_) == 0)
{
lean_object* v___x_5243_; lean_object* v___x_5245_; 
v___x_5243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5243_, 0, v_a_5239_);
if (v_isShared_5235_ == 0)
{
lean_ctor_set(v___x_5234_, 0, v___x_5243_);
v___x_5245_ = v___x_5234_;
goto v_reusejp_5244_;
}
else
{
lean_object* v_reuseFailAlloc_5249_; 
v_reuseFailAlloc_5249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5249_, 0, v___x_5243_);
lean_ctor_set(v_reuseFailAlloc_5249_, 1, v_snd_5232_);
v___x_5245_ = v_reuseFailAlloc_5249_;
goto v_reusejp_5244_;
}
v_reusejp_5244_:
{
lean_object* v___x_5247_; 
if (v_isShared_5242_ == 0)
{
lean_ctor_set(v___x_5241_, 0, v___x_5245_);
v___x_5247_ = v___x_5241_;
goto v_reusejp_5246_;
}
else
{
lean_object* v_reuseFailAlloc_5248_; 
v_reuseFailAlloc_5248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5248_, 0, v___x_5245_);
v___x_5247_ = v_reuseFailAlloc_5248_;
goto v_reusejp_5246_;
}
v_reusejp_5246_:
{
return v___x_5247_;
}
}
}
else
{
lean_object* v_a_5250_; lean_object* v___x_5252_; 
lean_del_object(v___x_5241_);
lean_dec(v_snd_5232_);
v_a_5250_ = lean_ctor_get(v_a_5239_, 0);
lean_inc(v_a_5250_);
lean_dec_ref_known(v_a_5239_, 1);
if (v_isShared_5235_ == 0)
{
lean_ctor_set(v___x_5234_, 1, v_a_5250_);
lean_ctor_set(v___x_5234_, 0, v___x_5236_);
v___x_5252_ = v___x_5234_;
goto v_reusejp_5251_;
}
else
{
lean_object* v_reuseFailAlloc_5256_; 
v_reuseFailAlloc_5256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5256_, 0, v___x_5236_);
lean_ctor_set(v_reuseFailAlloc_5256_, 1, v_a_5250_);
v___x_5252_ = v_reuseFailAlloc_5256_;
goto v_reusejp_5251_;
}
v_reusejp_5251_:
{
size_t v___x_5253_; size_t v___x_5254_; 
v___x_5253_ = ((size_t)1ULL);
v___x_5254_ = lean_usize_add(v_i_5218_, v___x_5253_);
v_i_5218_ = v___x_5254_;
v_b_5219_ = v___x_5252_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_5258_; lean_object* v___x_5260_; uint8_t v_isShared_5261_; uint8_t v_isSharedCheck_5265_; 
lean_del_object(v___x_5234_);
lean_dec(v_snd_5232_);
v_a_5258_ = lean_ctor_get(v___x_5238_, 0);
v_isSharedCheck_5265_ = !lean_is_exclusive(v___x_5238_);
if (v_isSharedCheck_5265_ == 0)
{
v___x_5260_ = v___x_5238_;
v_isShared_5261_ = v_isSharedCheck_5265_;
goto v_resetjp_5259_;
}
else
{
lean_inc(v_a_5258_);
lean_dec(v___x_5238_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__1___boxed(lean_object* v_init_5268_, lean_object* v_as_5269_, lean_object* v_sz_5270_, lean_object* v_i_5271_, lean_object* v_b_5272_, lean_object* v___y_5273_, lean_object* v___y_5274_, lean_object* v___y_5275_, lean_object* v___y_5276_, lean_object* v___y_5277_, lean_object* v___y_5278_, lean_object* v___y_5279_, lean_object* v___y_5280_, lean_object* v___y_5281_, lean_object* v___y_5282_){
_start:
{
size_t v_sz_boxed_5283_; size_t v_i_boxed_5284_; lean_object* v_res_5285_; 
v_sz_boxed_5283_ = lean_unbox_usize(v_sz_5270_);
lean_dec(v_sz_5270_);
v_i_boxed_5284_ = lean_unbox_usize(v_i_5271_);
lean_dec(v_i_5271_);
v_res_5285_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__1(v_init_5268_, v_as_5269_, v_sz_boxed_5283_, v_i_boxed_5284_, v_b_5272_, v___y_5273_, v___y_5274_, v___y_5275_, v___y_5276_, v___y_5277_, v___y_5278_, v___y_5279_, v___y_5280_, v___y_5281_);
lean_dec(v___y_5281_);
lean_dec_ref(v___y_5280_);
lean_dec(v___y_5279_);
lean_dec_ref(v___y_5278_);
lean_dec(v___y_5277_);
lean_dec_ref(v___y_5276_);
lean_dec(v___y_5275_);
lean_dec_ref(v___y_5274_);
lean_dec(v___y_5273_);
lean_dec_ref(v_as_5269_);
lean_dec_ref(v_init_5268_);
return v_res_5285_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0___boxed(lean_object* v_init_5286_, lean_object* v_n_5287_, lean_object* v_b_5288_, lean_object* v___y_5289_, lean_object* v___y_5290_, lean_object* v___y_5291_, lean_object* v___y_5292_, lean_object* v___y_5293_, lean_object* v___y_5294_, lean_object* v___y_5295_, lean_object* v___y_5296_, lean_object* v___y_5297_, lean_object* v___y_5298_){
_start:
{
lean_object* v_res_5299_; 
v_res_5299_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0(v_init_5286_, v_n_5287_, v_b_5288_, v___y_5289_, v___y_5290_, v___y_5291_, v___y_5292_, v___y_5293_, v___y_5294_, v___y_5295_, v___y_5296_, v___y_5297_);
lean_dec(v___y_5297_);
lean_dec_ref(v___y_5296_);
lean_dec(v___y_5295_);
lean_dec_ref(v___y_5294_);
lean_dec(v___y_5293_);
lean_dec_ref(v___y_5292_);
lean_dec(v___y_5291_);
lean_dec_ref(v___y_5290_);
lean_dec(v___y_5289_);
lean_dec_ref(v_n_5287_);
lean_dec_ref(v_init_5286_);
return v_res_5299_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0(lean_object* v_t_5300_, lean_object* v_init_5301_, lean_object* v___y_5302_, lean_object* v___y_5303_, lean_object* v___y_5304_, lean_object* v___y_5305_, lean_object* v___y_5306_, lean_object* v___y_5307_, lean_object* v___y_5308_, lean_object* v___y_5309_, lean_object* v___y_5310_){
_start:
{
lean_object* v_root_5312_; lean_object* v_tail_5313_; lean_object* v___x_5314_; 
v_root_5312_ = lean_ctor_get(v_t_5300_, 0);
v_tail_5313_ = lean_ctor_get(v_t_5300_, 1);
lean_inc_ref(v_init_5301_);
v___x_5314_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0(v_init_5301_, v_root_5312_, v_init_5301_, v___y_5302_, v___y_5303_, v___y_5304_, v___y_5305_, v___y_5306_, v___y_5307_, v___y_5308_, v___y_5309_, v___y_5310_);
lean_dec_ref(v_init_5301_);
if (lean_obj_tag(v___x_5314_) == 0)
{
lean_object* v_a_5315_; lean_object* v___x_5317_; uint8_t v_isShared_5318_; uint8_t v_isSharedCheck_5351_; 
v_a_5315_ = lean_ctor_get(v___x_5314_, 0);
v_isSharedCheck_5351_ = !lean_is_exclusive(v___x_5314_);
if (v_isSharedCheck_5351_ == 0)
{
v___x_5317_ = v___x_5314_;
v_isShared_5318_ = v_isSharedCheck_5351_;
goto v_resetjp_5316_;
}
else
{
lean_inc(v_a_5315_);
lean_dec(v___x_5314_);
v___x_5317_ = lean_box(0);
v_isShared_5318_ = v_isSharedCheck_5351_;
goto v_resetjp_5316_;
}
v_resetjp_5316_:
{
if (lean_obj_tag(v_a_5315_) == 0)
{
lean_object* v_a_5319_; lean_object* v___x_5321_; 
v_a_5319_ = lean_ctor_get(v_a_5315_, 0);
lean_inc(v_a_5319_);
lean_dec_ref_known(v_a_5315_, 1);
if (v_isShared_5318_ == 0)
{
lean_ctor_set(v___x_5317_, 0, v_a_5319_);
v___x_5321_ = v___x_5317_;
goto v_reusejp_5320_;
}
else
{
lean_object* v_reuseFailAlloc_5322_; 
v_reuseFailAlloc_5322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5322_, 0, v_a_5319_);
v___x_5321_ = v_reuseFailAlloc_5322_;
goto v_reusejp_5320_;
}
v_reusejp_5320_:
{
return v___x_5321_;
}
}
else
{
lean_object* v_a_5323_; lean_object* v___x_5324_; lean_object* v___x_5325_; size_t v_sz_5326_; size_t v___x_5327_; lean_object* v___x_5328_; 
lean_del_object(v___x_5317_);
v_a_5323_ = lean_ctor_get(v_a_5315_, 0);
lean_inc(v_a_5323_);
lean_dec_ref_known(v_a_5315_, 1);
v___x_5324_ = lean_box(0);
v___x_5325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5325_, 0, v___x_5324_);
lean_ctor_set(v___x_5325_, 1, v_a_5323_);
v_sz_5326_ = lean_array_size(v_tail_5313_);
v___x_5327_ = ((size_t)0ULL);
v___x_5328_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1(v_tail_5313_, v_sz_5326_, v___x_5327_, v___x_5325_, v___y_5302_, v___y_5303_, v___y_5304_, v___y_5305_, v___y_5306_, v___y_5307_, v___y_5308_, v___y_5309_, v___y_5310_);
if (lean_obj_tag(v___x_5328_) == 0)
{
lean_object* v_a_5329_; lean_object* v___x_5331_; uint8_t v_isShared_5332_; uint8_t v_isSharedCheck_5342_; 
v_a_5329_ = lean_ctor_get(v___x_5328_, 0);
v_isSharedCheck_5342_ = !lean_is_exclusive(v___x_5328_);
if (v_isSharedCheck_5342_ == 0)
{
v___x_5331_ = v___x_5328_;
v_isShared_5332_ = v_isSharedCheck_5342_;
goto v_resetjp_5330_;
}
else
{
lean_inc(v_a_5329_);
lean_dec(v___x_5328_);
v___x_5331_ = lean_box(0);
v_isShared_5332_ = v_isSharedCheck_5342_;
goto v_resetjp_5330_;
}
v_resetjp_5330_:
{
lean_object* v_fst_5333_; 
v_fst_5333_ = lean_ctor_get(v_a_5329_, 0);
if (lean_obj_tag(v_fst_5333_) == 0)
{
lean_object* v_snd_5334_; lean_object* v___x_5336_; 
v_snd_5334_ = lean_ctor_get(v_a_5329_, 1);
lean_inc(v_snd_5334_);
lean_dec(v_a_5329_);
if (v_isShared_5332_ == 0)
{
lean_ctor_set(v___x_5331_, 0, v_snd_5334_);
v___x_5336_ = v___x_5331_;
goto v_reusejp_5335_;
}
else
{
lean_object* v_reuseFailAlloc_5337_; 
v_reuseFailAlloc_5337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5337_, 0, v_snd_5334_);
v___x_5336_ = v_reuseFailAlloc_5337_;
goto v_reusejp_5335_;
}
v_reusejp_5335_:
{
return v___x_5336_;
}
}
else
{
lean_object* v_val_5338_; lean_object* v___x_5340_; 
lean_inc_ref(v_fst_5333_);
lean_dec(v_a_5329_);
v_val_5338_ = lean_ctor_get(v_fst_5333_, 0);
lean_inc(v_val_5338_);
lean_dec_ref_known(v_fst_5333_, 1);
if (v_isShared_5332_ == 0)
{
lean_ctor_set(v___x_5331_, 0, v_val_5338_);
v___x_5340_ = v___x_5331_;
goto v_reusejp_5339_;
}
else
{
lean_object* v_reuseFailAlloc_5341_; 
v_reuseFailAlloc_5341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5341_, 0, v_val_5338_);
v___x_5340_ = v_reuseFailAlloc_5341_;
goto v_reusejp_5339_;
}
v_reusejp_5339_:
{
return v___x_5340_;
}
}
}
}
else
{
lean_object* v_a_5343_; lean_object* v___x_5345_; uint8_t v_isShared_5346_; uint8_t v_isSharedCheck_5350_; 
v_a_5343_ = lean_ctor_get(v___x_5328_, 0);
v_isSharedCheck_5350_ = !lean_is_exclusive(v___x_5328_);
if (v_isSharedCheck_5350_ == 0)
{
v___x_5345_ = v___x_5328_;
v_isShared_5346_ = v_isSharedCheck_5350_;
goto v_resetjp_5344_;
}
else
{
lean_inc(v_a_5343_);
lean_dec(v___x_5328_);
v___x_5345_ = lean_box(0);
v_isShared_5346_ = v_isSharedCheck_5350_;
goto v_resetjp_5344_;
}
v_resetjp_5344_:
{
lean_object* v___x_5348_; 
if (v_isShared_5346_ == 0)
{
v___x_5348_ = v___x_5345_;
goto v_reusejp_5347_;
}
else
{
lean_object* v_reuseFailAlloc_5349_; 
v_reuseFailAlloc_5349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5349_, 0, v_a_5343_);
v___x_5348_ = v_reuseFailAlloc_5349_;
goto v_reusejp_5347_;
}
v_reusejp_5347_:
{
return v___x_5348_;
}
}
}
}
}
}
else
{
lean_object* v_a_5352_; lean_object* v___x_5354_; uint8_t v_isShared_5355_; uint8_t v_isSharedCheck_5359_; 
v_a_5352_ = lean_ctor_get(v___x_5314_, 0);
v_isSharedCheck_5359_ = !lean_is_exclusive(v___x_5314_);
if (v_isSharedCheck_5359_ == 0)
{
v___x_5354_ = v___x_5314_;
v_isShared_5355_ = v_isSharedCheck_5359_;
goto v_resetjp_5353_;
}
else
{
lean_inc(v_a_5352_);
lean_dec(v___x_5314_);
v___x_5354_ = lean_box(0);
v_isShared_5355_ = v_isSharedCheck_5359_;
goto v_resetjp_5353_;
}
v_resetjp_5353_:
{
lean_object* v___x_5357_; 
if (v_isShared_5355_ == 0)
{
v___x_5357_ = v___x_5354_;
goto v_reusejp_5356_;
}
else
{
lean_object* v_reuseFailAlloc_5358_; 
v_reuseFailAlloc_5358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5358_, 0, v_a_5352_);
v___x_5357_ = v_reuseFailAlloc_5358_;
goto v_reusejp_5356_;
}
v_reusejp_5356_:
{
return v___x_5357_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0___boxed(lean_object* v_t_5360_, lean_object* v_init_5361_, lean_object* v___y_5362_, lean_object* v___y_5363_, lean_object* v___y_5364_, lean_object* v___y_5365_, lean_object* v___y_5366_, lean_object* v___y_5367_, lean_object* v___y_5368_, lean_object* v___y_5369_, lean_object* v___y_5370_, lean_object* v___y_5371_){
_start:
{
lean_object* v_res_5372_; 
v_res_5372_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0(v_t_5360_, v_init_5361_, v___y_5362_, v___y_5363_, v___y_5364_, v___y_5365_, v___y_5366_, v___y_5367_, v___y_5368_, v___y_5369_, v___y_5370_);
lean_dec(v___y_5370_);
lean_dec_ref(v___y_5369_);
lean_dec(v___y_5368_);
lean_dec_ref(v___y_5367_);
lean_dec(v___y_5366_);
lean_dec_ref(v___y_5365_);
lean_dec(v___y_5364_);
lean_dec_ref(v___y_5363_);
lean_dec(v___y_5362_);
lean_dec_ref(v_t_5360_);
return v_res_5372_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__0(void){
_start:
{
lean_object* v___x_5373_; lean_object* v___x_5374_; lean_object* v___x_5375_; 
v___x_5373_ = lean_unsigned_to_nat(32u);
v___x_5374_ = lean_mk_empty_array_with_capacity(v___x_5373_);
v___x_5375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5375_, 0, v___x_5374_);
return v___x_5375_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__1(void){
_start:
{
size_t v___x_5376_; lean_object* v___x_5377_; lean_object* v___x_5378_; lean_object* v___x_5379_; lean_object* v___x_5380_; lean_object* v_result_5381_; 
v___x_5376_ = ((size_t)5ULL);
v___x_5377_ = lean_unsigned_to_nat(0u);
v___x_5378_ = lean_unsigned_to_nat(32u);
v___x_5379_ = lean_mk_empty_array_with_capacity(v___x_5378_);
v___x_5380_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__0, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__0_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__0);
v_result_5381_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_result_5381_, 0, v___x_5380_);
lean_ctor_set(v_result_5381_, 1, v___x_5379_);
lean_ctor_set(v_result_5381_, 2, v___x_5377_);
lean_ctor_set(v_result_5381_, 3, v___x_5377_);
lean_ctor_set_usize(v_result_5381_, 4, v___x_5376_);
return v_result_5381_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms(lean_object* v_thms_5382_, lean_object* v___y_5383_, lean_object* v___y_5384_, lean_object* v___y_5385_, lean_object* v___y_5386_, lean_object* v___y_5387_, lean_object* v___y_5388_, lean_object* v___y_5389_, lean_object* v___y_5390_, lean_object* v___y_5391_){
_start:
{
lean_object* v_result_5393_; lean_object* v___x_5394_; 
v_result_5393_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__1, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__1);
v___x_5394_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0(v_thms_5382_, v_result_5393_, v___y_5383_, v___y_5384_, v___y_5385_, v___y_5386_, v___y_5387_, v___y_5388_, v___y_5389_, v___y_5390_, v___y_5391_);
return v___x_5394_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___boxed(lean_object* v_thms_5395_, lean_object* v___y_5396_, lean_object* v___y_5397_, lean_object* v___y_5398_, lean_object* v___y_5399_, lean_object* v___y_5400_, lean_object* v___y_5401_, lean_object* v___y_5402_, lean_object* v___y_5403_, lean_object* v___y_5404_, lean_object* v___y_5405_){
_start:
{
lean_object* v_res_5406_; 
v_res_5406_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms(v_thms_5395_, v___y_5396_, v___y_5397_, v___y_5398_, v___y_5399_, v___y_5400_, v___y_5401_, v___y_5402_, v___y_5403_, v___y_5404_);
lean_dec(v___y_5404_);
lean_dec_ref(v___y_5403_);
lean_dec(v___y_5402_);
lean_dec_ref(v___y_5401_);
lean_dec(v___y_5400_);
lean_dec_ref(v___y_5399_);
lean_dec(v___y_5398_);
lean_dec_ref(v___y_5397_);
lean_dec(v___y_5396_);
lean_dec_ref(v_thms_5395_);
return v_res_5406_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0(lean_object* v_thms_5409_, lean_object* v_newThms_5410_, lean_object* v_gmt_5411_, lean_object* v_numInstances_5412_, lean_object* v_numDelayedInstances_5413_, lean_object* v_num_5414_, lean_object* v_preInstances_5415_, lean_object* v_nextThmIdx_5416_, lean_object* v_matchEqNames_5417_, lean_object* v_delayedThmInsts_5418_, lean_object* v_nextDeclIdx_5419_, lean_object* v_enodeMap_5420_, lean_object* v_exprs_5421_, lean_object* v_parents_5422_, lean_object* v_congrTable_5423_, lean_object* v_appMap_5424_, lean_object* v_indicesFound_5425_, lean_object* v_newFacts_5426_, uint8_t v_inconsistent_5427_, lean_object* v_nextIdx_5428_, lean_object* v_newRawFacts_5429_, lean_object* v_facts_5430_, lean_object* v_extThms_5431_, lean_object* v_inj_5432_, lean_object* v_split_5433_, lean_object* v_clean_5434_, lean_object* v_sstates_5435_, lean_object* v_mvarId_5436_, lean_object* v___y_5437_, lean_object* v___y_5438_, lean_object* v___y_5439_, lean_object* v___y_5440_, lean_object* v___y_5441_, lean_object* v___y_5442_, lean_object* v___y_5443_, lean_object* v___y_5444_, lean_object* v___y_5445_){
_start:
{
lean_object* v___x_5447_; 
v___x_5447_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms(v_thms_5409_, v___y_5437_, v___y_5438_, v___y_5439_, v___y_5440_, v___y_5441_, v___y_5442_, v___y_5443_, v___y_5444_, v___y_5445_);
if (lean_obj_tag(v___x_5447_) == 0)
{
lean_object* v_a_5448_; lean_object* v___x_5449_; 
v_a_5448_ = lean_ctor_get(v___x_5447_, 0);
lean_inc(v_a_5448_);
lean_dec_ref_known(v___x_5447_, 1);
v___x_5449_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms(v_newThms_5410_, v___y_5437_, v___y_5438_, v___y_5439_, v___y_5440_, v___y_5441_, v___y_5442_, v___y_5443_, v___y_5444_, v___y_5445_);
if (lean_obj_tag(v___x_5449_) == 0)
{
lean_object* v_a_5450_; lean_object* v___x_5452_; uint8_t v_isShared_5453_; uint8_t v_isSharedCheck_5461_; 
v_a_5450_ = lean_ctor_get(v___x_5449_, 0);
v_isSharedCheck_5461_ = !lean_is_exclusive(v___x_5449_);
if (v_isSharedCheck_5461_ == 0)
{
v___x_5452_ = v___x_5449_;
v_isShared_5453_ = v_isSharedCheck_5461_;
goto v_resetjp_5451_;
}
else
{
lean_inc(v_a_5450_);
lean_dec(v___x_5449_);
v___x_5452_ = lean_box(0);
v_isShared_5453_ = v_isSharedCheck_5461_;
goto v_resetjp_5451_;
}
v_resetjp_5451_:
{
lean_object* v___x_5454_; lean_object* v___x_5455_; lean_object* v___x_5456_; lean_object* v___x_5457_; lean_object* v___x_5459_; 
v___x_5454_ = ((lean_object*)(l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0___closed__0));
v___x_5455_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_5455_, 0, v___x_5454_);
lean_ctor_set(v___x_5455_, 1, v_gmt_5411_);
lean_ctor_set(v___x_5455_, 2, v_a_5448_);
lean_ctor_set(v___x_5455_, 3, v_a_5450_);
lean_ctor_set(v___x_5455_, 4, v_numInstances_5412_);
lean_ctor_set(v___x_5455_, 5, v_numDelayedInstances_5413_);
lean_ctor_set(v___x_5455_, 6, v_num_5414_);
lean_ctor_set(v___x_5455_, 7, v_preInstances_5415_);
lean_ctor_set(v___x_5455_, 8, v_nextThmIdx_5416_);
lean_ctor_set(v___x_5455_, 9, v_matchEqNames_5417_);
lean_ctor_set(v___x_5455_, 10, v_delayedThmInsts_5418_);
v___x_5456_ = lean_alloc_ctor(0, 17, 1);
lean_ctor_set(v___x_5456_, 0, v_nextDeclIdx_5419_);
lean_ctor_set(v___x_5456_, 1, v_enodeMap_5420_);
lean_ctor_set(v___x_5456_, 2, v_exprs_5421_);
lean_ctor_set(v___x_5456_, 3, v_parents_5422_);
lean_ctor_set(v___x_5456_, 4, v_congrTable_5423_);
lean_ctor_set(v___x_5456_, 5, v_appMap_5424_);
lean_ctor_set(v___x_5456_, 6, v_indicesFound_5425_);
lean_ctor_set(v___x_5456_, 7, v_newFacts_5426_);
lean_ctor_set(v___x_5456_, 8, v_nextIdx_5428_);
lean_ctor_set(v___x_5456_, 9, v_newRawFacts_5429_);
lean_ctor_set(v___x_5456_, 10, v_facts_5430_);
lean_ctor_set(v___x_5456_, 11, v_extThms_5431_);
lean_ctor_set(v___x_5456_, 12, v___x_5455_);
lean_ctor_set(v___x_5456_, 13, v_inj_5432_);
lean_ctor_set(v___x_5456_, 14, v_split_5433_);
lean_ctor_set(v___x_5456_, 15, v_clean_5434_);
lean_ctor_set(v___x_5456_, 16, v_sstates_5435_);
lean_ctor_set_uint8(v___x_5456_, sizeof(void*)*17, v_inconsistent_5427_);
v___x_5457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5457_, 0, v___x_5456_);
lean_ctor_set(v___x_5457_, 1, v_mvarId_5436_);
if (v_isShared_5453_ == 0)
{
lean_ctor_set(v___x_5452_, 0, v___x_5457_);
v___x_5459_ = v___x_5452_;
goto v_reusejp_5458_;
}
else
{
lean_object* v_reuseFailAlloc_5460_; 
v_reuseFailAlloc_5460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5460_, 0, v___x_5457_);
v___x_5459_ = v_reuseFailAlloc_5460_;
goto v_reusejp_5458_;
}
v_reusejp_5458_:
{
return v___x_5459_;
}
}
}
else
{
lean_object* v_a_5462_; lean_object* v___x_5464_; uint8_t v_isShared_5465_; uint8_t v_isSharedCheck_5469_; 
lean_dec(v_a_5448_);
lean_dec(v_mvarId_5436_);
lean_dec_ref(v_sstates_5435_);
lean_dec_ref(v_clean_5434_);
lean_dec_ref(v_split_5433_);
lean_dec_ref(v_inj_5432_);
lean_dec_ref(v_extThms_5431_);
lean_dec_ref(v_facts_5430_);
lean_dec_ref(v_newRawFacts_5429_);
lean_dec(v_nextIdx_5428_);
lean_dec_ref(v_newFacts_5426_);
lean_dec_ref(v_indicesFound_5425_);
lean_dec_ref(v_appMap_5424_);
lean_dec_ref(v_congrTable_5423_);
lean_dec_ref(v_parents_5422_);
lean_dec_ref(v_exprs_5421_);
lean_dec_ref(v_enodeMap_5420_);
lean_dec(v_nextDeclIdx_5419_);
lean_dec_ref(v_delayedThmInsts_5418_);
lean_dec_ref(v_matchEqNames_5417_);
lean_dec(v_nextThmIdx_5416_);
lean_dec_ref(v_preInstances_5415_);
lean_dec(v_num_5414_);
lean_dec(v_numDelayedInstances_5413_);
lean_dec(v_numInstances_5412_);
lean_dec(v_gmt_5411_);
v_a_5462_ = lean_ctor_get(v___x_5449_, 0);
v_isSharedCheck_5469_ = !lean_is_exclusive(v___x_5449_);
if (v_isSharedCheck_5469_ == 0)
{
v___x_5464_ = v___x_5449_;
v_isShared_5465_ = v_isSharedCheck_5469_;
goto v_resetjp_5463_;
}
else
{
lean_inc(v_a_5462_);
lean_dec(v___x_5449_);
v___x_5464_ = lean_box(0);
v_isShared_5465_ = v_isSharedCheck_5469_;
goto v_resetjp_5463_;
}
v_resetjp_5463_:
{
lean_object* v___x_5467_; 
if (v_isShared_5465_ == 0)
{
v___x_5467_ = v___x_5464_;
goto v_reusejp_5466_;
}
else
{
lean_object* v_reuseFailAlloc_5468_; 
v_reuseFailAlloc_5468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5468_, 0, v_a_5462_);
v___x_5467_ = v_reuseFailAlloc_5468_;
goto v_reusejp_5466_;
}
v_reusejp_5466_:
{
return v___x_5467_;
}
}
}
}
else
{
lean_object* v_a_5470_; lean_object* v___x_5472_; uint8_t v_isShared_5473_; uint8_t v_isSharedCheck_5477_; 
lean_dec(v_mvarId_5436_);
lean_dec_ref(v_sstates_5435_);
lean_dec_ref(v_clean_5434_);
lean_dec_ref(v_split_5433_);
lean_dec_ref(v_inj_5432_);
lean_dec_ref(v_extThms_5431_);
lean_dec_ref(v_facts_5430_);
lean_dec_ref(v_newRawFacts_5429_);
lean_dec(v_nextIdx_5428_);
lean_dec_ref(v_newFacts_5426_);
lean_dec_ref(v_indicesFound_5425_);
lean_dec_ref(v_appMap_5424_);
lean_dec_ref(v_congrTable_5423_);
lean_dec_ref(v_parents_5422_);
lean_dec_ref(v_exprs_5421_);
lean_dec_ref(v_enodeMap_5420_);
lean_dec(v_nextDeclIdx_5419_);
lean_dec_ref(v_delayedThmInsts_5418_);
lean_dec_ref(v_matchEqNames_5417_);
lean_dec(v_nextThmIdx_5416_);
lean_dec_ref(v_preInstances_5415_);
lean_dec(v_num_5414_);
lean_dec(v_numDelayedInstances_5413_);
lean_dec(v_numInstances_5412_);
lean_dec(v_gmt_5411_);
v_a_5470_ = lean_ctor_get(v___x_5447_, 0);
v_isSharedCheck_5477_ = !lean_is_exclusive(v___x_5447_);
if (v_isSharedCheck_5477_ == 0)
{
v___x_5472_ = v___x_5447_;
v_isShared_5473_ = v_isSharedCheck_5477_;
goto v_resetjp_5471_;
}
else
{
lean_inc(v_a_5470_);
lean_dec(v___x_5447_);
v___x_5472_ = lean_box(0);
v_isShared_5473_ = v_isSharedCheck_5477_;
goto v_resetjp_5471_;
}
v_resetjp_5471_:
{
lean_object* v___x_5475_; 
if (v_isShared_5473_ == 0)
{
v___x_5475_ = v___x_5472_;
goto v_reusejp_5474_;
}
else
{
lean_object* v_reuseFailAlloc_5476_; 
v_reuseFailAlloc_5476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5476_, 0, v_a_5470_);
v___x_5475_ = v_reuseFailAlloc_5476_;
goto v_reusejp_5474_;
}
v_reusejp_5474_:
{
return v___x_5475_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0___boxed(lean_object** _args){
lean_object* v_thms_5478_ = _args[0];
lean_object* v_newThms_5479_ = _args[1];
lean_object* v_gmt_5480_ = _args[2];
lean_object* v_numInstances_5481_ = _args[3];
lean_object* v_numDelayedInstances_5482_ = _args[4];
lean_object* v_num_5483_ = _args[5];
lean_object* v_preInstances_5484_ = _args[6];
lean_object* v_nextThmIdx_5485_ = _args[7];
lean_object* v_matchEqNames_5486_ = _args[8];
lean_object* v_delayedThmInsts_5487_ = _args[9];
lean_object* v_nextDeclIdx_5488_ = _args[10];
lean_object* v_enodeMap_5489_ = _args[11];
lean_object* v_exprs_5490_ = _args[12];
lean_object* v_parents_5491_ = _args[13];
lean_object* v_congrTable_5492_ = _args[14];
lean_object* v_appMap_5493_ = _args[15];
lean_object* v_indicesFound_5494_ = _args[16];
lean_object* v_newFacts_5495_ = _args[17];
lean_object* v_inconsistent_5496_ = _args[18];
lean_object* v_nextIdx_5497_ = _args[19];
lean_object* v_newRawFacts_5498_ = _args[20];
lean_object* v_facts_5499_ = _args[21];
lean_object* v_extThms_5500_ = _args[22];
lean_object* v_inj_5501_ = _args[23];
lean_object* v_split_5502_ = _args[24];
lean_object* v_clean_5503_ = _args[25];
lean_object* v_sstates_5504_ = _args[26];
lean_object* v_mvarId_5505_ = _args[27];
lean_object* v___y_5506_ = _args[28];
lean_object* v___y_5507_ = _args[29];
lean_object* v___y_5508_ = _args[30];
lean_object* v___y_5509_ = _args[31];
lean_object* v___y_5510_ = _args[32];
lean_object* v___y_5511_ = _args[33];
lean_object* v___y_5512_ = _args[34];
lean_object* v___y_5513_ = _args[35];
lean_object* v___y_5514_ = _args[36];
lean_object* v___y_5515_ = _args[37];
_start:
{
uint8_t v_inconsistent_boxed_5516_; lean_object* v_res_5517_; 
v_inconsistent_boxed_5516_ = lean_unbox(v_inconsistent_5496_);
v_res_5517_ = l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0(v_thms_5478_, v_newThms_5479_, v_gmt_5480_, v_numInstances_5481_, v_numDelayedInstances_5482_, v_num_5483_, v_preInstances_5484_, v_nextThmIdx_5485_, v_matchEqNames_5486_, v_delayedThmInsts_5487_, v_nextDeclIdx_5488_, v_enodeMap_5489_, v_exprs_5490_, v_parents_5491_, v_congrTable_5492_, v_appMap_5493_, v_indicesFound_5494_, v_newFacts_5495_, v_inconsistent_boxed_5516_, v_nextIdx_5497_, v_newRawFacts_5498_, v_facts_5499_, v_extThms_5500_, v_inj_5501_, v_split_5502_, v_clean_5503_, v_sstates_5504_, v_mvarId_5505_, v___y_5506_, v___y_5507_, v___y_5508_, v___y_5509_, v___y_5510_, v___y_5511_, v___y_5512_, v___y_5513_, v___y_5514_);
lean_dec(v___y_5514_);
lean_dec_ref(v___y_5513_);
lean_dec(v___y_5512_);
lean_dec_ref(v___y_5511_);
lean_dec(v___y_5510_);
lean_dec_ref(v___y_5509_);
lean_dec(v___y_5508_);
lean_dec_ref(v___y_5507_);
lean_dec(v___y_5506_);
lean_dec_ref(v_newThms_5479_);
lean_dec_ref(v_thms_5478_);
return v_res_5517_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0___closed__0(void){
_start:
{
lean_object* v___x_5518_; 
v___x_5518_ = l_Lean_Meta_Grind_Theorems_mkEmpty___redArg();
return v___x_5518_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0(size_t v_sz_5519_, size_t v_i_5520_, lean_object* v_bs_5521_){
_start:
{
uint8_t v___x_5522_; 
v___x_5522_ = lean_usize_dec_lt(v_i_5520_, v_sz_5519_);
if (v___x_5522_ == 0)
{
return v_bs_5521_;
}
else
{
lean_object* v_v_5523_; lean_object* v_casesTypes_5524_; lean_object* v_extThms_5525_; lean_object* v_funCC_5526_; lean_object* v_inj_5527_; lean_object* v___x_5529_; uint8_t v_isShared_5530_; uint8_t v_isSharedCheck_5541_; 
v_v_5523_ = lean_array_uget(v_bs_5521_, v_i_5520_);
v_casesTypes_5524_ = lean_ctor_get(v_v_5523_, 0);
v_extThms_5525_ = lean_ctor_get(v_v_5523_, 1);
v_funCC_5526_ = lean_ctor_get(v_v_5523_, 2);
v_inj_5527_ = lean_ctor_get(v_v_5523_, 4);
v_isSharedCheck_5541_ = !lean_is_exclusive(v_v_5523_);
if (v_isSharedCheck_5541_ == 0)
{
lean_object* v_unused_5542_; 
v_unused_5542_ = lean_ctor_get(v_v_5523_, 3);
lean_dec(v_unused_5542_);
v___x_5529_ = v_v_5523_;
v_isShared_5530_ = v_isSharedCheck_5541_;
goto v_resetjp_5528_;
}
else
{
lean_inc(v_inj_5527_);
lean_inc(v_funCC_5526_);
lean_inc(v_extThms_5525_);
lean_inc(v_casesTypes_5524_);
lean_dec(v_v_5523_);
v___x_5529_ = lean_box(0);
v_isShared_5530_ = v_isSharedCheck_5541_;
goto v_resetjp_5528_;
}
v_resetjp_5528_:
{
lean_object* v___x_5531_; lean_object* v_bs_x27_5532_; lean_object* v___x_5533_; lean_object* v___x_5535_; 
v___x_5531_ = lean_unsigned_to_nat(0u);
v_bs_x27_5532_ = lean_array_uset(v_bs_5521_, v_i_5520_, v___x_5531_);
v___x_5533_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0___closed__0);
if (v_isShared_5530_ == 0)
{
lean_ctor_set(v___x_5529_, 3, v___x_5533_);
v___x_5535_ = v___x_5529_;
goto v_reusejp_5534_;
}
else
{
lean_object* v_reuseFailAlloc_5540_; 
v_reuseFailAlloc_5540_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5540_, 0, v_casesTypes_5524_);
lean_ctor_set(v_reuseFailAlloc_5540_, 1, v_extThms_5525_);
lean_ctor_set(v_reuseFailAlloc_5540_, 2, v_funCC_5526_);
lean_ctor_set(v_reuseFailAlloc_5540_, 3, v___x_5533_);
lean_ctor_set(v_reuseFailAlloc_5540_, 4, v_inj_5527_);
v___x_5535_ = v_reuseFailAlloc_5540_;
goto v_reusejp_5534_;
}
v_reusejp_5534_:
{
size_t v___x_5536_; size_t v___x_5537_; lean_object* v___x_5538_; 
v___x_5536_ = ((size_t)1ULL);
v___x_5537_ = lean_usize_add(v_i_5520_, v___x_5536_);
v___x_5538_ = lean_array_uset(v_bs_x27_5532_, v_i_5520_, v___x_5535_);
v_i_5520_ = v___x_5537_;
v_bs_5521_ = v___x_5538_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0___boxed(lean_object* v_sz_5543_, lean_object* v_i_5544_, lean_object* v_bs_5545_){
_start:
{
size_t v_sz_boxed_5546_; size_t v_i_boxed_5547_; lean_object* v_res_5548_; 
v_sz_boxed_5546_ = lean_unbox_usize(v_sz_5543_);
lean_dec(v_sz_5543_);
v_i_boxed_5547_ = lean_unbox_usize(v_i_5544_);
lean_dec(v_i_5544_);
v_res_5548_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0(v_sz_boxed_5546_, v_i_boxed_5547_, v_bs_5545_);
return v_res_5548_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg(lean_object* v_params_5549_, lean_object* v_ps_5550_, uint8_t v_only_5551_, lean_object* v_k_5552_, lean_object* v___y_5553_, lean_object* v___y_5554_, lean_object* v___y_5555_, lean_object* v___y_5556_, lean_object* v___y_5557_, lean_object* v___y_5558_, lean_object* v___y_5559_, lean_object* v___y_5560_){
_start:
{
lean_object* v___y_5563_; lean_object* v___y_5564_; lean_object* v___y_5565_; lean_object* v___y_5566_; lean_object* v___y_5567_; lean_object* v___y_5568_; lean_object* v___y_5569_; lean_object* v___y_5570_; lean_object* v___y_5571_; uint8_t v___y_5584_; uint8_t v___y_5585_; lean_object* v_params_5586_; lean_object* v___y_5587_; lean_object* v___y_5588_; lean_object* v___y_5589_; lean_object* v___y_5590_; lean_object* v___y_5591_; lean_object* v___y_5592_; lean_object* v___y_5593_; lean_object* v___y_5594_; uint8_t v___y_5695_; 
if (v_only_5551_ == 0)
{
lean_object* v___x_5717_; lean_object* v___x_5718_; uint8_t v___x_5719_; 
v___x_5717_ = lean_array_get_size(v_ps_5550_);
v___x_5718_ = lean_unsigned_to_nat(0u);
v___x_5719_ = lean_nat_dec_eq(v___x_5717_, v___x_5718_);
if (v___x_5719_ == 0)
{
v___y_5695_ = v___x_5719_;
goto v___jp_5694_;
}
else
{
lean_object* v___x_5720_; 
lean_dec_ref(v_params_5549_);
lean_inc(v___y_5560_);
lean_inc_ref(v___y_5559_);
lean_inc(v___y_5558_);
lean_inc_ref(v___y_5557_);
lean_inc(v___y_5556_);
lean_inc_ref(v___y_5555_);
lean_inc(v___y_5554_);
lean_inc_ref(v___y_5553_);
v___x_5720_ = lean_apply_9(v_k_5552_, v___y_5553_, v___y_5554_, v___y_5555_, v___y_5556_, v___y_5557_, v___y_5558_, v___y_5559_, v___y_5560_, lean_box(0));
return v___x_5720_;
}
}
else
{
uint8_t v___x_5721_; 
v___x_5721_ = 0;
v___y_5695_ = v___x_5721_;
goto v___jp_5694_;
}
v___jp_5562_:
{
lean_object* v___x_5572_; lean_object* v___x_5573_; 
v___x_5572_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_assertExtra___boxed), 12, 1);
lean_closure_set(v___x_5572_, 0, v___y_5563_);
v___x_5573_ = l_Lean_Elab_Tactic_Grind_liftGoalM___redArg(v___x_5572_, v___y_5564_, v___y_5565_, v___y_5568_, v___y_5569_, v___y_5570_, v___y_5571_);
if (lean_obj_tag(v___x_5573_) == 0)
{
lean_object* v___x_5574_; 
lean_dec_ref_known(v___x_5573_, 1);
lean_inc(v___y_5571_);
lean_inc_ref(v___y_5570_);
lean_inc(v___y_5569_);
lean_inc_ref(v___y_5568_);
lean_inc(v___y_5567_);
lean_inc_ref(v___y_5566_);
lean_inc(v___y_5565_);
v___x_5574_ = lean_apply_9(v_k_5552_, v___y_5564_, v___y_5565_, v___y_5566_, v___y_5567_, v___y_5568_, v___y_5569_, v___y_5570_, v___y_5571_, lean_box(0));
return v___x_5574_;
}
else
{
lean_object* v_a_5575_; lean_object* v___x_5577_; uint8_t v_isShared_5578_; uint8_t v_isSharedCheck_5582_; 
lean_dec_ref(v___y_5564_);
lean_dec_ref(v_k_5552_);
v_a_5575_ = lean_ctor_get(v___x_5573_, 0);
v_isSharedCheck_5582_ = !lean_is_exclusive(v___x_5573_);
if (v_isSharedCheck_5582_ == 0)
{
v___x_5577_ = v___x_5573_;
v_isShared_5578_ = v_isSharedCheck_5582_;
goto v_resetjp_5576_;
}
else
{
lean_inc(v_a_5575_);
lean_dec(v___x_5573_);
v___x_5577_ = lean_box(0);
v_isShared_5578_ = v_isSharedCheck_5582_;
goto v_resetjp_5576_;
}
v_resetjp_5576_:
{
lean_object* v___x_5580_; 
if (v_isShared_5578_ == 0)
{
v___x_5580_ = v___x_5577_;
goto v_reusejp_5579_;
}
else
{
lean_object* v_reuseFailAlloc_5581_; 
v_reuseFailAlloc_5581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5581_, 0, v_a_5575_);
v___x_5580_ = v_reuseFailAlloc_5581_;
goto v_reusejp_5579_;
}
v_reusejp_5579_:
{
return v___x_5580_;
}
}
}
}
v___jp_5583_:
{
lean_object* v___x_5595_; 
v___x_5595_ = l_Lean_Elab_Tactic_elabGrindParams(v_params_5586_, v_ps_5550_, v_only_5551_, v___y_5585_, v___y_5584_, v___y_5589_, v___y_5590_, v___y_5591_, v___y_5592_, v___y_5593_, v___y_5594_);
if (lean_obj_tag(v___x_5595_) == 0)
{
lean_object* v_a_5596_; lean_object* v_ctx_5597_; lean_object* v_anchorRefs_x3f_5598_; lean_object* v_toContext_5599_; lean_object* v_sctx_5600_; lean_object* v_methods_5601_; uint8_t v_sym_5602_; lean_object* v_simp_5603_; lean_object* v_simpMethods_5604_; lean_object* v_config_5605_; uint8_t v_cheapCases_5606_; uint8_t v_reportMVarIssue_5607_; lean_object* v_splitSource_5608_; lean_object* v_ematchDiagSource_5609_; lean_object* v_symPrios_5610_; lean_object* v_extensions_5611_; uint8_t v_debug_5612_; uint8_t v_ematchDiag_5613_; lean_object* v___x_5614_; lean_object* v___x_5615_; 
v_a_5596_ = lean_ctor_get(v___x_5595_, 0);
lean_inc_n(v_a_5596_, 2);
lean_dec_ref_known(v___x_5595_, 1);
v_ctx_5597_ = lean_ctor_get(v___y_5587_, 1);
v_anchorRefs_x3f_5598_ = lean_ctor_get(v_a_5596_, 8);
v_toContext_5599_ = lean_ctor_get(v___y_5587_, 0);
v_sctx_5600_ = lean_ctor_get(v___y_5587_, 2);
v_methods_5601_ = lean_ctor_get(v___y_5587_, 3);
v_sym_5602_ = lean_ctor_get_uint8(v___y_5587_, sizeof(void*)*5);
v_simp_5603_ = lean_ctor_get(v_ctx_5597_, 0);
v_simpMethods_5604_ = lean_ctor_get(v_ctx_5597_, 1);
v_config_5605_ = lean_ctor_get(v_ctx_5597_, 2);
v_cheapCases_5606_ = lean_ctor_get_uint8(v_ctx_5597_, sizeof(void*)*8);
v_reportMVarIssue_5607_ = lean_ctor_get_uint8(v_ctx_5597_, sizeof(void*)*8 + 1);
v_splitSource_5608_ = lean_ctor_get(v_ctx_5597_, 4);
v_ematchDiagSource_5609_ = lean_ctor_get(v_ctx_5597_, 5);
v_symPrios_5610_ = lean_ctor_get(v_ctx_5597_, 6);
v_extensions_5611_ = lean_ctor_get(v_ctx_5597_, 7);
v_debug_5612_ = lean_ctor_get_uint8(v_ctx_5597_, sizeof(void*)*8 + 2);
v_ematchDiag_5613_ = lean_ctor_get_uint8(v_ctx_5597_, sizeof(void*)*8 + 3);
lean_inc_ref(v_extensions_5611_);
lean_inc_ref(v_symPrios_5610_);
lean_inc(v_ematchDiagSource_5609_);
lean_inc(v_splitSource_5608_);
lean_inc(v_anchorRefs_x3f_5598_);
lean_inc_ref(v_config_5605_);
lean_inc_ref(v_simpMethods_5604_);
lean_inc_ref(v_simp_5603_);
v___x_5614_ = lean_alloc_ctor(0, 8, 4);
lean_ctor_set(v___x_5614_, 0, v_simp_5603_);
lean_ctor_set(v___x_5614_, 1, v_simpMethods_5604_);
lean_ctor_set(v___x_5614_, 2, v_config_5605_);
lean_ctor_set(v___x_5614_, 3, v_anchorRefs_x3f_5598_);
lean_ctor_set(v___x_5614_, 4, v_splitSource_5608_);
lean_ctor_set(v___x_5614_, 5, v_ematchDiagSource_5609_);
lean_ctor_set(v___x_5614_, 6, v_symPrios_5610_);
lean_ctor_set(v___x_5614_, 7, v_extensions_5611_);
lean_ctor_set_uint8(v___x_5614_, sizeof(void*)*8, v_cheapCases_5606_);
lean_ctor_set_uint8(v___x_5614_, sizeof(void*)*8 + 1, v_reportMVarIssue_5607_);
lean_ctor_set_uint8(v___x_5614_, sizeof(void*)*8 + 2, v_debug_5612_);
lean_ctor_set_uint8(v___x_5614_, sizeof(void*)*8 + 3, v_ematchDiag_5613_);
lean_inc_ref(v_methods_5601_);
lean_inc_ref(v_sctx_5600_);
lean_inc_ref(v_toContext_5599_);
v___x_5615_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_5615_, 0, v_toContext_5599_);
lean_ctor_set(v___x_5615_, 1, v___x_5614_);
lean_ctor_set(v___x_5615_, 2, v_sctx_5600_);
lean_ctor_set(v___x_5615_, 3, v_methods_5601_);
lean_ctor_set(v___x_5615_, 4, v_a_5596_);
lean_ctor_set_uint8(v___x_5615_, sizeof(void*)*5, v_sym_5602_);
if (v_only_5551_ == 0)
{
v___y_5563_ = v_a_5596_;
v___y_5564_ = v___x_5615_;
v___y_5565_ = v___y_5588_;
v___y_5566_ = v___y_5589_;
v___y_5567_ = v___y_5590_;
v___y_5568_ = v___y_5591_;
v___y_5569_ = v___y_5592_;
v___y_5570_ = v___y_5593_;
v___y_5571_ = v___y_5594_;
goto v___jp_5562_;
}
else
{
lean_object* v___x_5616_; 
v___x_5616_ = l_Lean_Elab_Tactic_Grind_getMainGoal___redArg(v___y_5588_, v___y_5591_, v___y_5592_, v___y_5593_, v___y_5594_);
if (lean_obj_tag(v___x_5616_) == 0)
{
lean_object* v_a_5617_; lean_object* v_toGoalState_5618_; lean_object* v_ematch_5619_; lean_object* v_mvarId_5620_; lean_object* v___x_5622_; uint8_t v_isShared_5623_; uint8_t v_isSharedCheck_5676_; 
v_a_5617_ = lean_ctor_get(v___x_5616_, 0);
lean_inc(v_a_5617_);
lean_dec_ref_known(v___x_5616_, 1);
v_toGoalState_5618_ = lean_ctor_get(v_a_5617_, 0);
lean_inc_ref(v_toGoalState_5618_);
v_ematch_5619_ = lean_ctor_get(v_toGoalState_5618_, 12);
lean_inc_ref(v_ematch_5619_);
v_mvarId_5620_ = lean_ctor_get(v_a_5617_, 1);
v_isSharedCheck_5676_ = !lean_is_exclusive(v_a_5617_);
if (v_isSharedCheck_5676_ == 0)
{
lean_object* v_unused_5677_; 
v_unused_5677_ = lean_ctor_get(v_a_5617_, 0);
lean_dec(v_unused_5677_);
v___x_5622_ = v_a_5617_;
v_isShared_5623_ = v_isSharedCheck_5676_;
goto v_resetjp_5621_;
}
else
{
lean_inc(v_mvarId_5620_);
lean_dec(v_a_5617_);
v___x_5622_ = lean_box(0);
v_isShared_5623_ = v_isSharedCheck_5676_;
goto v_resetjp_5621_;
}
v_resetjp_5621_:
{
lean_object* v_nextDeclIdx_5624_; lean_object* v_enodeMap_5625_; lean_object* v_exprs_5626_; lean_object* v_parents_5627_; lean_object* v_congrTable_5628_; lean_object* v_appMap_5629_; lean_object* v_indicesFound_5630_; lean_object* v_newFacts_5631_; uint8_t v_inconsistent_5632_; lean_object* v_nextIdx_5633_; lean_object* v_newRawFacts_5634_; lean_object* v_facts_5635_; lean_object* v_extThms_5636_; lean_object* v_inj_5637_; lean_object* v_split_5638_; lean_object* v_clean_5639_; lean_object* v_sstates_5640_; lean_object* v_gmt_5641_; lean_object* v_thms_5642_; lean_object* v_newThms_5643_; lean_object* v_numInstances_5644_; lean_object* v_numDelayedInstances_5645_; lean_object* v_num_5646_; lean_object* v_preInstances_5647_; lean_object* v_nextThmIdx_5648_; lean_object* v_matchEqNames_5649_; lean_object* v_delayedThmInsts_5650_; lean_object* v___x_5651_; lean_object* v___f_5652_; lean_object* v___x_5653_; 
v_nextDeclIdx_5624_ = lean_ctor_get(v_toGoalState_5618_, 0);
lean_inc(v_nextDeclIdx_5624_);
v_enodeMap_5625_ = lean_ctor_get(v_toGoalState_5618_, 1);
lean_inc_ref(v_enodeMap_5625_);
v_exprs_5626_ = lean_ctor_get(v_toGoalState_5618_, 2);
lean_inc_ref(v_exprs_5626_);
v_parents_5627_ = lean_ctor_get(v_toGoalState_5618_, 3);
lean_inc_ref(v_parents_5627_);
v_congrTable_5628_ = lean_ctor_get(v_toGoalState_5618_, 4);
lean_inc_ref(v_congrTable_5628_);
v_appMap_5629_ = lean_ctor_get(v_toGoalState_5618_, 5);
lean_inc_ref(v_appMap_5629_);
v_indicesFound_5630_ = lean_ctor_get(v_toGoalState_5618_, 6);
lean_inc_ref(v_indicesFound_5630_);
v_newFacts_5631_ = lean_ctor_get(v_toGoalState_5618_, 7);
lean_inc_ref(v_newFacts_5631_);
v_inconsistent_5632_ = lean_ctor_get_uint8(v_toGoalState_5618_, sizeof(void*)*17);
v_nextIdx_5633_ = lean_ctor_get(v_toGoalState_5618_, 8);
lean_inc(v_nextIdx_5633_);
v_newRawFacts_5634_ = lean_ctor_get(v_toGoalState_5618_, 9);
lean_inc_ref(v_newRawFacts_5634_);
v_facts_5635_ = lean_ctor_get(v_toGoalState_5618_, 10);
lean_inc_ref(v_facts_5635_);
v_extThms_5636_ = lean_ctor_get(v_toGoalState_5618_, 11);
lean_inc_ref(v_extThms_5636_);
v_inj_5637_ = lean_ctor_get(v_toGoalState_5618_, 13);
lean_inc_ref(v_inj_5637_);
v_split_5638_ = lean_ctor_get(v_toGoalState_5618_, 14);
lean_inc_ref(v_split_5638_);
v_clean_5639_ = lean_ctor_get(v_toGoalState_5618_, 15);
lean_inc_ref(v_clean_5639_);
v_sstates_5640_ = lean_ctor_get(v_toGoalState_5618_, 16);
lean_inc_ref(v_sstates_5640_);
lean_dec_ref(v_toGoalState_5618_);
v_gmt_5641_ = lean_ctor_get(v_ematch_5619_, 1);
lean_inc(v_gmt_5641_);
v_thms_5642_ = lean_ctor_get(v_ematch_5619_, 2);
lean_inc_ref(v_thms_5642_);
v_newThms_5643_ = lean_ctor_get(v_ematch_5619_, 3);
lean_inc_ref(v_newThms_5643_);
v_numInstances_5644_ = lean_ctor_get(v_ematch_5619_, 4);
lean_inc(v_numInstances_5644_);
v_numDelayedInstances_5645_ = lean_ctor_get(v_ematch_5619_, 5);
lean_inc(v_numDelayedInstances_5645_);
v_num_5646_ = lean_ctor_get(v_ematch_5619_, 6);
lean_inc(v_num_5646_);
v_preInstances_5647_ = lean_ctor_get(v_ematch_5619_, 7);
lean_inc_ref(v_preInstances_5647_);
v_nextThmIdx_5648_ = lean_ctor_get(v_ematch_5619_, 8);
lean_inc(v_nextThmIdx_5648_);
v_matchEqNames_5649_ = lean_ctor_get(v_ematch_5619_, 9);
lean_inc_ref(v_matchEqNames_5649_);
v_delayedThmInsts_5650_ = lean_ctor_get(v_ematch_5619_, 10);
lean_inc_ref(v_delayedThmInsts_5650_);
lean_dec_ref(v_ematch_5619_);
v___x_5651_ = lean_box(v_inconsistent_5632_);
v___f_5652_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0___boxed), 38, 28);
lean_closure_set(v___f_5652_, 0, v_thms_5642_);
lean_closure_set(v___f_5652_, 1, v_newThms_5643_);
lean_closure_set(v___f_5652_, 2, v_gmt_5641_);
lean_closure_set(v___f_5652_, 3, v_numInstances_5644_);
lean_closure_set(v___f_5652_, 4, v_numDelayedInstances_5645_);
lean_closure_set(v___f_5652_, 5, v_num_5646_);
lean_closure_set(v___f_5652_, 6, v_preInstances_5647_);
lean_closure_set(v___f_5652_, 7, v_nextThmIdx_5648_);
lean_closure_set(v___f_5652_, 8, v_matchEqNames_5649_);
lean_closure_set(v___f_5652_, 9, v_delayedThmInsts_5650_);
lean_closure_set(v___f_5652_, 10, v_nextDeclIdx_5624_);
lean_closure_set(v___f_5652_, 11, v_enodeMap_5625_);
lean_closure_set(v___f_5652_, 12, v_exprs_5626_);
lean_closure_set(v___f_5652_, 13, v_parents_5627_);
lean_closure_set(v___f_5652_, 14, v_congrTable_5628_);
lean_closure_set(v___f_5652_, 15, v_appMap_5629_);
lean_closure_set(v___f_5652_, 16, v_indicesFound_5630_);
lean_closure_set(v___f_5652_, 17, v_newFacts_5631_);
lean_closure_set(v___f_5652_, 18, v___x_5651_);
lean_closure_set(v___f_5652_, 19, v_nextIdx_5633_);
lean_closure_set(v___f_5652_, 20, v_newRawFacts_5634_);
lean_closure_set(v___f_5652_, 21, v_facts_5635_);
lean_closure_set(v___f_5652_, 22, v_extThms_5636_);
lean_closure_set(v___f_5652_, 23, v_inj_5637_);
lean_closure_set(v___f_5652_, 24, v_split_5638_);
lean_closure_set(v___f_5652_, 25, v_clean_5639_);
lean_closure_set(v___f_5652_, 26, v_sstates_5640_);
lean_closure_set(v___f_5652_, 27, v_mvarId_5620_);
v___x_5653_ = l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(v___f_5652_, v___x_5615_, v___y_5588_, v___y_5591_, v___y_5592_, v___y_5593_, v___y_5594_);
if (lean_obj_tag(v___x_5653_) == 0)
{
lean_object* v_a_5654_; lean_object* v___x_5655_; lean_object* v___x_5657_; 
v_a_5654_ = lean_ctor_get(v___x_5653_, 0);
lean_inc(v_a_5654_);
lean_dec_ref_known(v___x_5653_, 1);
v___x_5655_ = lean_box(0);
if (v_isShared_5623_ == 0)
{
lean_ctor_set_tag(v___x_5622_, 1);
lean_ctor_set(v___x_5622_, 1, v___x_5655_);
lean_ctor_set(v___x_5622_, 0, v_a_5654_);
v___x_5657_ = v___x_5622_;
goto v_reusejp_5656_;
}
else
{
lean_object* v_reuseFailAlloc_5667_; 
v_reuseFailAlloc_5667_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5667_, 0, v_a_5654_);
lean_ctor_set(v_reuseFailAlloc_5667_, 1, v___x_5655_);
v___x_5657_ = v_reuseFailAlloc_5667_;
goto v_reusejp_5656_;
}
v_reusejp_5656_:
{
lean_object* v___x_5658_; 
v___x_5658_ = l_Lean_Elab_Tactic_Grind_replaceMainGoal___redArg(v___x_5657_, v___y_5588_, v___y_5591_, v___y_5592_, v___y_5593_, v___y_5594_);
if (lean_obj_tag(v___x_5658_) == 0)
{
lean_dec_ref_known(v___x_5658_, 1);
v___y_5563_ = v_a_5596_;
v___y_5564_ = v___x_5615_;
v___y_5565_ = v___y_5588_;
v___y_5566_ = v___y_5589_;
v___y_5567_ = v___y_5590_;
v___y_5568_ = v___y_5591_;
v___y_5569_ = v___y_5592_;
v___y_5570_ = v___y_5593_;
v___y_5571_ = v___y_5594_;
goto v___jp_5562_;
}
else
{
lean_object* v_a_5659_; lean_object* v___x_5661_; uint8_t v_isShared_5662_; uint8_t v_isSharedCheck_5666_; 
lean_dec_ref_known(v___x_5615_, 5);
lean_dec(v_a_5596_);
lean_dec_ref(v_k_5552_);
v_a_5659_ = lean_ctor_get(v___x_5658_, 0);
v_isSharedCheck_5666_ = !lean_is_exclusive(v___x_5658_);
if (v_isSharedCheck_5666_ == 0)
{
v___x_5661_ = v___x_5658_;
v_isShared_5662_ = v_isSharedCheck_5666_;
goto v_resetjp_5660_;
}
else
{
lean_inc(v_a_5659_);
lean_dec(v___x_5658_);
v___x_5661_ = lean_box(0);
v_isShared_5662_ = v_isSharedCheck_5666_;
goto v_resetjp_5660_;
}
v_resetjp_5660_:
{
lean_object* v___x_5664_; 
if (v_isShared_5662_ == 0)
{
v___x_5664_ = v___x_5661_;
goto v_reusejp_5663_;
}
else
{
lean_object* v_reuseFailAlloc_5665_; 
v_reuseFailAlloc_5665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5665_, 0, v_a_5659_);
v___x_5664_ = v_reuseFailAlloc_5665_;
goto v_reusejp_5663_;
}
v_reusejp_5663_:
{
return v___x_5664_;
}
}
}
}
}
else
{
lean_object* v_a_5668_; lean_object* v___x_5670_; uint8_t v_isShared_5671_; uint8_t v_isSharedCheck_5675_; 
lean_del_object(v___x_5622_);
lean_dec_ref_known(v___x_5615_, 5);
lean_dec(v_a_5596_);
lean_dec_ref(v_k_5552_);
v_a_5668_ = lean_ctor_get(v___x_5653_, 0);
v_isSharedCheck_5675_ = !lean_is_exclusive(v___x_5653_);
if (v_isSharedCheck_5675_ == 0)
{
v___x_5670_ = v___x_5653_;
v_isShared_5671_ = v_isSharedCheck_5675_;
goto v_resetjp_5669_;
}
else
{
lean_inc(v_a_5668_);
lean_dec(v___x_5653_);
v___x_5670_ = lean_box(0);
v_isShared_5671_ = v_isSharedCheck_5675_;
goto v_resetjp_5669_;
}
v_resetjp_5669_:
{
lean_object* v___x_5673_; 
if (v_isShared_5671_ == 0)
{
v___x_5673_ = v___x_5670_;
goto v_reusejp_5672_;
}
else
{
lean_object* v_reuseFailAlloc_5674_; 
v_reuseFailAlloc_5674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5674_, 0, v_a_5668_);
v___x_5673_ = v_reuseFailAlloc_5674_;
goto v_reusejp_5672_;
}
v_reusejp_5672_:
{
return v___x_5673_;
}
}
}
}
}
else
{
lean_object* v_a_5678_; lean_object* v___x_5680_; uint8_t v_isShared_5681_; uint8_t v_isSharedCheck_5685_; 
lean_dec_ref_known(v___x_5615_, 5);
lean_dec(v_a_5596_);
lean_dec_ref(v_k_5552_);
v_a_5678_ = lean_ctor_get(v___x_5616_, 0);
v_isSharedCheck_5685_ = !lean_is_exclusive(v___x_5616_);
if (v_isSharedCheck_5685_ == 0)
{
v___x_5680_ = v___x_5616_;
v_isShared_5681_ = v_isSharedCheck_5685_;
goto v_resetjp_5679_;
}
else
{
lean_inc(v_a_5678_);
lean_dec(v___x_5616_);
v___x_5680_ = lean_box(0);
v_isShared_5681_ = v_isSharedCheck_5685_;
goto v_resetjp_5679_;
}
v_resetjp_5679_:
{
lean_object* v___x_5683_; 
if (v_isShared_5681_ == 0)
{
v___x_5683_ = v___x_5680_;
goto v_reusejp_5682_;
}
else
{
lean_object* v_reuseFailAlloc_5684_; 
v_reuseFailAlloc_5684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5684_, 0, v_a_5678_);
v___x_5683_ = v_reuseFailAlloc_5684_;
goto v_reusejp_5682_;
}
v_reusejp_5682_:
{
return v___x_5683_;
}
}
}
}
}
else
{
lean_object* v_a_5686_; lean_object* v___x_5688_; uint8_t v_isShared_5689_; uint8_t v_isSharedCheck_5693_; 
lean_dec_ref(v_k_5552_);
v_a_5686_ = lean_ctor_get(v___x_5595_, 0);
v_isSharedCheck_5693_ = !lean_is_exclusive(v___x_5595_);
if (v_isSharedCheck_5693_ == 0)
{
v___x_5688_ = v___x_5595_;
v_isShared_5689_ = v_isSharedCheck_5693_;
goto v_resetjp_5687_;
}
else
{
lean_inc(v_a_5686_);
lean_dec(v___x_5595_);
v___x_5688_ = lean_box(0);
v_isShared_5689_ = v_isSharedCheck_5693_;
goto v_resetjp_5687_;
}
v_resetjp_5687_:
{
lean_object* v___x_5691_; 
if (v_isShared_5689_ == 0)
{
v___x_5691_ = v___x_5688_;
goto v_reusejp_5690_;
}
else
{
lean_object* v_reuseFailAlloc_5692_; 
v_reuseFailAlloc_5692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5692_, 0, v_a_5686_);
v___x_5691_ = v_reuseFailAlloc_5692_;
goto v_reusejp_5690_;
}
v_reusejp_5690_:
{
return v___x_5691_;
}
}
}
}
v___jp_5694_:
{
uint8_t v___x_5696_; 
v___x_5696_ = 1;
if (v_only_5551_ == 0)
{
v___y_5584_ = v___x_5696_;
v___y_5585_ = v___y_5695_;
v_params_5586_ = v_params_5549_;
v___y_5587_ = v___y_5553_;
v___y_5588_ = v___y_5554_;
v___y_5589_ = v___y_5555_;
v___y_5590_ = v___y_5556_;
v___y_5591_ = v___y_5557_;
v___y_5592_ = v___y_5558_;
v___y_5593_ = v___y_5559_;
v___y_5594_ = v___y_5560_;
goto v___jp_5583_;
}
else
{
lean_object* v_config_5697_; lean_object* v_extensions_5698_; lean_object* v_extra_5699_; lean_object* v_extraInj_5700_; lean_object* v_extraFacts_5701_; lean_object* v_symPrios_5702_; lean_object* v_norm_5703_; lean_object* v_normProcs_5704_; lean_object* v___x_5706_; uint8_t v_isShared_5707_; uint8_t v_isSharedCheck_5715_; 
v_config_5697_ = lean_ctor_get(v_params_5549_, 0);
v_extensions_5698_ = lean_ctor_get(v_params_5549_, 1);
v_extra_5699_ = lean_ctor_get(v_params_5549_, 2);
v_extraInj_5700_ = lean_ctor_get(v_params_5549_, 3);
v_extraFacts_5701_ = lean_ctor_get(v_params_5549_, 4);
v_symPrios_5702_ = lean_ctor_get(v_params_5549_, 5);
v_norm_5703_ = lean_ctor_get(v_params_5549_, 6);
v_normProcs_5704_ = lean_ctor_get(v_params_5549_, 7);
v_isSharedCheck_5715_ = !lean_is_exclusive(v_params_5549_);
if (v_isSharedCheck_5715_ == 0)
{
lean_object* v_unused_5716_; 
v_unused_5716_ = lean_ctor_get(v_params_5549_, 8);
lean_dec(v_unused_5716_);
v___x_5706_ = v_params_5549_;
v_isShared_5707_ = v_isSharedCheck_5715_;
goto v_resetjp_5705_;
}
else
{
lean_inc(v_normProcs_5704_);
lean_inc(v_norm_5703_);
lean_inc(v_symPrios_5702_);
lean_inc(v_extraFacts_5701_);
lean_inc(v_extraInj_5700_);
lean_inc(v_extra_5699_);
lean_inc(v_extensions_5698_);
lean_inc(v_config_5697_);
lean_dec(v_params_5549_);
v___x_5706_ = lean_box(0);
v_isShared_5707_ = v_isSharedCheck_5715_;
goto v_resetjp_5705_;
}
v_resetjp_5705_:
{
size_t v_sz_5708_; size_t v___x_5709_; lean_object* v___x_5710_; lean_object* v___x_5711_; lean_object* v_params_5713_; 
v_sz_5708_ = lean_array_size(v_extensions_5698_);
v___x_5709_ = ((size_t)0ULL);
v___x_5710_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0(v_sz_5708_, v___x_5709_, v_extensions_5698_);
v___x_5711_ = lean_box(0);
if (v_isShared_5707_ == 0)
{
lean_ctor_set(v___x_5706_, 8, v___x_5711_);
lean_ctor_set(v___x_5706_, 1, v___x_5710_);
v_params_5713_ = v___x_5706_;
goto v_reusejp_5712_;
}
else
{
lean_object* v_reuseFailAlloc_5714_; 
v_reuseFailAlloc_5714_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5714_, 0, v_config_5697_);
lean_ctor_set(v_reuseFailAlloc_5714_, 1, v___x_5710_);
lean_ctor_set(v_reuseFailAlloc_5714_, 2, v_extra_5699_);
lean_ctor_set(v_reuseFailAlloc_5714_, 3, v_extraInj_5700_);
lean_ctor_set(v_reuseFailAlloc_5714_, 4, v_extraFacts_5701_);
lean_ctor_set(v_reuseFailAlloc_5714_, 5, v_symPrios_5702_);
lean_ctor_set(v_reuseFailAlloc_5714_, 6, v_norm_5703_);
lean_ctor_set(v_reuseFailAlloc_5714_, 7, v_normProcs_5704_);
lean_ctor_set(v_reuseFailAlloc_5714_, 8, v___x_5711_);
v_params_5713_ = v_reuseFailAlloc_5714_;
goto v_reusejp_5712_;
}
v_reusejp_5712_:
{
v___y_5584_ = v___x_5696_;
v___y_5585_ = v___y_5695_;
v_params_5586_ = v_params_5713_;
v___y_5587_ = v___y_5553_;
v___y_5588_ = v___y_5554_;
v___y_5589_ = v___y_5555_;
v___y_5590_ = v___y_5556_;
v___y_5591_ = v___y_5557_;
v___y_5592_ = v___y_5558_;
v___y_5593_ = v___y_5559_;
v___y_5594_ = v___y_5560_;
goto v___jp_5583_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg___boxed(lean_object* v_params_5722_, lean_object* v_ps_5723_, lean_object* v_only_5724_, lean_object* v_k_5725_, lean_object* v___y_5726_, lean_object* v___y_5727_, lean_object* v___y_5728_, lean_object* v___y_5729_, lean_object* v___y_5730_, lean_object* v___y_5731_, lean_object* v___y_5732_, lean_object* v___y_5733_, lean_object* v___y_5734_){
_start:
{
uint8_t v_only_boxed_5735_; lean_object* v_res_5736_; 
v_only_boxed_5735_ = lean_unbox(v_only_5724_);
v_res_5736_ = l_Lean_Elab_Tactic_Grind_withParams___redArg(v_params_5722_, v_ps_5723_, v_only_boxed_5735_, v_k_5725_, v___y_5726_, v___y_5727_, v___y_5728_, v___y_5729_, v___y_5730_, v___y_5731_, v___y_5732_, v___y_5733_);
lean_dec(v___y_5733_);
lean_dec_ref(v___y_5732_);
lean_dec(v___y_5731_);
lean_dec_ref(v___y_5730_);
lean_dec(v___y_5729_);
lean_dec_ref(v___y_5728_);
lean_dec(v___y_5727_);
lean_dec_ref(v___y_5726_);
lean_dec_ref(v_ps_5723_);
return v_res_5736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams(lean_object* v_00_u03b1_5737_, lean_object* v_params_5738_, lean_object* v_ps_5739_, uint8_t v_only_5740_, lean_object* v_k_5741_, lean_object* v___y_5742_, lean_object* v___y_5743_, lean_object* v___y_5744_, lean_object* v___y_5745_, lean_object* v___y_5746_, lean_object* v___y_5747_, lean_object* v___y_5748_, lean_object* v___y_5749_){
_start:
{
lean_object* v___x_5751_; 
v___x_5751_ = l_Lean_Elab_Tactic_Grind_withParams___redArg(v_params_5738_, v_ps_5739_, v_only_5740_, v_k_5741_, v___y_5742_, v___y_5743_, v___y_5744_, v___y_5745_, v___y_5746_, v___y_5747_, v___y_5748_, v___y_5749_);
return v___x_5751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___boxed(lean_object* v_00_u03b1_5752_, lean_object* v_params_5753_, lean_object* v_ps_5754_, lean_object* v_only_5755_, lean_object* v_k_5756_, lean_object* v___y_5757_, lean_object* v___y_5758_, lean_object* v___y_5759_, lean_object* v___y_5760_, lean_object* v___y_5761_, lean_object* v___y_5762_, lean_object* v___y_5763_, lean_object* v___y_5764_, lean_object* v___y_5765_){
_start:
{
uint8_t v_only_boxed_5766_; lean_object* v_res_5767_; 
v_only_boxed_5766_ = lean_unbox(v_only_5755_);
v_res_5767_ = l_Lean_Elab_Tactic_Grind_withParams(v_00_u03b1_5752_, v_params_5753_, v_ps_5754_, v_only_boxed_5766_, v_k_5756_, v___y_5757_, v___y_5758_, v___y_5759_, v___y_5760_, v___y_5761_, v___y_5762_, v___y_5763_, v___y_5764_);
lean_dec(v___y_5764_);
lean_dec_ref(v___y_5763_);
lean_dec(v___y_5762_);
lean_dec_ref(v___y_5761_);
lean_dec(v___y_5760_);
lean_dec_ref(v___y_5759_);
lean_dec(v___y_5758_);
lean_dec_ref(v___y_5757_);
lean_dec_ref(v_ps_5754_);
return v_res_5767_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_ForallProp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_Anchor(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_SyntheticMVars(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_Param(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_Grind_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_ForallProp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Grind_Anchor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_SyntheticMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Grind_Param(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Grind_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_ForallProp(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Grind_Anchor(uint8_t builtin);
lean_object* initialize_Lean_Elab_SyntheticMVars(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Grind_Param(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Grind_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_ForallProp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Grind_Anchor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_SyntheticMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Grind_Param(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Grind_Param(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Grind_Param(builtin);
}
#ifdef __cplusplus
}
#endif
