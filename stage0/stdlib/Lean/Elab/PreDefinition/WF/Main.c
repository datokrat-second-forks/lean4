// Lean compiler output
// Module: Lean.Elab.PreDefinition.WF.Main
// Imports: public import Lean.Elab.PreDefinition.WF.PackMutual public import Lean.Elab.PreDefinition.WF.FloatRecApp public import Lean.Elab.PreDefinition.WF.Rel public import Lean.Elab.PreDefinition.WF.Fix public import Lean.Elab.PreDefinition.WF.Unfold public import Lean.Elab.PreDefinition.WF.Preprocess public import Lean.Elab.PreDefinition.WF.GuessLex
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_Elab_WF_varyingVarNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Elab_WF_floatRecApp(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Meta_unfoldDeclsFrom(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_copyExtraModUses(lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAsAxiom___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_mkFix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_isNatLtWF(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Elab_WF_elabWFRel___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Elab_getFixedParamPerms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldIfArgIsAppOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_packMutual(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Elab_DefKind_isTheorem(uint8_t);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_enableRealizationsForConst(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Mutual_addPreDefAttributes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_mkUnfoldEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_guessLex(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
extern lean_object* l_Lean_maxRecDepth;
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
uint16_t lean_uint16_land(uint16_t, uint16_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
extern lean_object* l_Lean_Elab_instInhabitedPreDefinition_default;
lean_object* l_Lean_Environment_unlockAsync(lean_object*);
lean_object* l_Lean_Elab_WF_preDefsFromUnaryNonRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAndCompilePartialRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Mutual_cleanPreDef(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_registerEqnsInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_markAsRecursive___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_wfRecursion_spec__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_wfRecursion_spec__18___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_Elab_wfRecursion_spec__19___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_Elab_wfRecursion_spec__19___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Elab_wfRecursion_spec__19___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Elab_wfRecursion_spec__19___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_Elab_wfRecursion_spec__19___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Elab_wfRecursion_spec__19___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Elab_wfRecursion_spec__19___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Elab_wfRecursion_spec__19(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Elab_wfRecursion_spec__19___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__7___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__7___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__7___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__7___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__7___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__7___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__7___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__7___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__7(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__6___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "well-founded recursion cannot be used, `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "` does not take any (non-fixed) arguments"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__3(lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "marking functions defined by well-founded recursion as `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "` is not effective"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reducible"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__2_value),LEAN_SCALAR_PTR_LITERAL(29, 67, 225, 118, 155, 2, 197, 97)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "semireducible"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__4_value),LEAN_SCALAR_PTR_LITERAL(106, 254, 211, 230, 8, 182, 79, 36)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__5_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__13(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__10(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__10___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__0;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_wfRecursion___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "wfRel: "};
static const lean_object* l_Lean_Elab_wfRecursion___lam__4___closed__0 = (const lean_object*)&l_Lean_Elab_wfRecursion___lam__4___closed__0_value;
static lean_once_cell_t l_Lean_Elab_wfRecursion___lam__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___lam__4___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__4___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_wfRecursion___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "wfRecursion: expected unary function type: "};
static const lean_object* l_Lean_Elab_wfRecursion___lam__5___closed__0 = (const lean_object*)&l_Lean_Elab_wfRecursion___lam__5___closed__0_value;
static lean_once_cell_t l_Lean_Elab_wfRecursion___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___lam__5___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__5(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20_spec__23___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20_spec__23___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20_spec__23___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_wfRecursion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "elaborator"};
static const lean_object* l_Lean_Elab_wfRecursion___closed__0 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__0_value;
static const lean_string_object l_Lean_Elab_wfRecursion___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "implicitTransparency"};
static const lean_object* l_Lean_Elab_wfRecursion___closed__1 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__1_value;
static const lean_ctor_object l_Lean_Elab_wfRecursion___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_wfRecursion___closed__0_value),LEAN_SCALAR_PTR_LITERAL(112, 111, 101, 251, 226, 145, 127, 248)}};
static const lean_ctor_object l_Lean_Elab_wfRecursion___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_wfRecursion___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_wfRecursion___closed__1_value),LEAN_SCALAR_PTR_LITERAL(170, 240, 247, 247, 192, 175, 46, 125)}};
static const lean_object* l_Lean_Elab_wfRecursion___closed__2 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__2_value;
static const lean_string_object l_Lean_Elab_wfRecursion___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lean_Elab_wfRecursion___closed__3 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__3_value;
static const lean_string_object l_Lean_Elab_wfRecursion___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "wf"};
static const lean_object* l_Lean_Elab_wfRecursion___closed__4 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__4_value;
static const lean_ctor_object l_Lean_Elab_wfRecursion___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l_Lean_Elab_wfRecursion___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_wfRecursion___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_wfRecursion___closed__3_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l_Lean_Elab_wfRecursion___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_wfRecursion___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_wfRecursion___closed__4_value),LEAN_SCALAR_PTR_LITERAL(235, 76, 232, 241, 91, 21, 77, 227)}};
static const lean_object* l_Lean_Elab_wfRecursion___closed__5 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__5_value;
static const lean_string_object l_Lean_Elab_wfRecursion___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = ">> "};
static const lean_object* l_Lean_Elab_wfRecursion___closed__6 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__6_value;
static lean_once_cell_t l_Lean_Elab_wfRecursion___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___closed__7;
static const lean_string_object l_Lean_Elab_wfRecursion___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " :=\n"};
static const lean_object* l_Lean_Elab_wfRecursion___closed__8 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__8_value;
static lean_once_cell_t l_Lean_Elab_wfRecursion___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___closed__9;
static const lean_string_object l_Lean_Elab_wfRecursion___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unaryPreDefProcessed:"};
static const lean_object* l_Lean_Elab_wfRecursion___closed__10 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__10_value;
static lean_once_cell_t l_Lean_Elab_wfRecursion___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___closed__11;
static const lean_string_object l_Lean_Elab_wfRecursion___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "unaryPreDef:"};
static const lean_object* l_Lean_Elab_wfRecursion___closed__12 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__12_value;
static lean_once_cell_t l_Lean_Elab_wfRecursion___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___closed__13;
static const lean_ctor_object l_Lean_Elab_wfRecursion___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Elab_wfRecursion___boxed__const__1 = (const lean_object*)&l_Lean_Elab_wfRecursion___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20_spec__23(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PreDefinition"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 172, 242, 185, 134, 214, 81, 182)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "WF"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(231, 60, 146, 67, 170, 35, 9, 50)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Main"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(142, 191, 24, 173, 99, 110, 250, 159)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(183, 176, 152, 199, 88, 244, 126, 231)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(74, 192, 220, 42, 201, 36, 231, 139)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(136, 8, 70, 241, 95, 177, 39, 230)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(165, 164, 65, 123, 204, 166, 116, 237)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(24, 212, 71, 249, 113, 26, 236, 1)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(145, 192, 221, 228, 155, 175, 93, 246)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 119, 48, 4, 113, 111, 251, 171)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(12, 104, 40, 162, 247, 89, 56, 248)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(128, 159, 143, 175, 93, 190, 135, 30)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(5, 178, 65, 214, 219, 44, 29, 26)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1197449596) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(114, 70, 68, 25, 255, 132, 81, 38)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 173, 23, 241, 152, 14, 79, 23)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(93, 207, 166, 163, 30, 74, 122, 49)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(48, 76, 225, 120, 116, 96, 87, 123)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__0, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__0);
v___x_3_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1);
v___x_5_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5_, 0, v___x_4_);
lean_ctor_set(v___x_5_, 1, v___x_4_);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_6_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1);
v___x_7_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_7_, 0, v___x_6_);
lean_ctor_set(v___x_7_, 1, v___x_6_);
lean_ctor_set(v___x_7_, 2, v___x_6_);
lean_ctor_set(v___x_7_, 3, v___x_6_);
lean_ctor_set(v___x_7_, 4, v___x_6_);
lean_ctor_set(v___x_7_, 5, v___x_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(lean_object* v_env_8_, lean_object* v___y_9_, lean_object* v___y_10_){
_start:
{
lean_object* v___x_12_; lean_object* v_nextMacroScope_13_; lean_object* v_ngen_14_; lean_object* v_auxDeclNGen_15_; lean_object* v_traceState_16_; lean_object* v_recordedDeps_17_; lean_object* v_messages_18_; lean_object* v_infoState_19_; lean_object* v_snapshotTasks_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_46_; 
v___x_12_ = lean_st_ref_take(v___y_10_);
v_nextMacroScope_13_ = lean_ctor_get(v___x_12_, 1);
v_ngen_14_ = lean_ctor_get(v___x_12_, 2);
v_auxDeclNGen_15_ = lean_ctor_get(v___x_12_, 3);
v_traceState_16_ = lean_ctor_get(v___x_12_, 4);
v_recordedDeps_17_ = lean_ctor_get(v___x_12_, 6);
v_messages_18_ = lean_ctor_get(v___x_12_, 7);
v_infoState_19_ = lean_ctor_get(v___x_12_, 8);
v_snapshotTasks_20_ = lean_ctor_get(v___x_12_, 9);
v_isSharedCheck_46_ = !lean_is_exclusive(v___x_12_);
if (v_isSharedCheck_46_ == 0)
{
lean_object* v_unused_47_; lean_object* v_unused_48_; 
v_unused_47_ = lean_ctor_get(v___x_12_, 5);
lean_dec(v_unused_47_);
v_unused_48_ = lean_ctor_get(v___x_12_, 0);
lean_dec(v_unused_48_);
v___x_22_ = v___x_12_;
v_isShared_23_ = v_isSharedCheck_46_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_snapshotTasks_20_);
lean_inc(v_infoState_19_);
lean_inc(v_messages_18_);
lean_inc(v_recordedDeps_17_);
lean_inc(v_traceState_16_);
lean_inc(v_auxDeclNGen_15_);
lean_inc(v_ngen_14_);
lean_inc(v_nextMacroScope_13_);
lean_dec(v___x_12_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_46_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v___x_24_; lean_object* v___x_26_; 
v___x_24_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2);
if (v_isShared_23_ == 0)
{
lean_ctor_set(v___x_22_, 5, v___x_24_);
lean_ctor_set(v___x_22_, 0, v_env_8_);
v___x_26_ = v___x_22_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v_env_8_);
lean_ctor_set(v_reuseFailAlloc_45_, 1, v_nextMacroScope_13_);
lean_ctor_set(v_reuseFailAlloc_45_, 2, v_ngen_14_);
lean_ctor_set(v_reuseFailAlloc_45_, 3, v_auxDeclNGen_15_);
lean_ctor_set(v_reuseFailAlloc_45_, 4, v_traceState_16_);
lean_ctor_set(v_reuseFailAlloc_45_, 5, v___x_24_);
lean_ctor_set(v_reuseFailAlloc_45_, 6, v_recordedDeps_17_);
lean_ctor_set(v_reuseFailAlloc_45_, 7, v_messages_18_);
lean_ctor_set(v_reuseFailAlloc_45_, 8, v_infoState_19_);
lean_ctor_set(v_reuseFailAlloc_45_, 9, v_snapshotTasks_20_);
v___x_26_ = v_reuseFailAlloc_45_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v_mctx_29_; lean_object* v_zetaDeltaFVarIds_30_; lean_object* v_postponed_31_; lean_object* v_diag_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_43_; 
v___x_27_ = lean_st_ref_put(v___y_10_, v___x_26_);
v___x_28_ = lean_st_ref_take(v___y_9_);
v_mctx_29_ = lean_ctor_get(v___x_28_, 0);
v_zetaDeltaFVarIds_30_ = lean_ctor_get(v___x_28_, 2);
v_postponed_31_ = lean_ctor_get(v___x_28_, 3);
v_diag_32_ = lean_ctor_get(v___x_28_, 4);
v_isSharedCheck_43_ = !lean_is_exclusive(v___x_28_);
if (v_isSharedCheck_43_ == 0)
{
lean_object* v_unused_44_; 
v_unused_44_ = lean_ctor_get(v___x_28_, 1);
lean_dec(v_unused_44_);
v___x_34_ = v___x_28_;
v_isShared_35_ = v_isSharedCheck_43_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_diag_32_);
lean_inc(v_postponed_31_);
lean_inc(v_zetaDeltaFVarIds_30_);
lean_inc(v_mctx_29_);
lean_dec(v___x_28_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_43_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_39_; 
v___x_36_ = lean_box(0);
v___x_37_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3);
if (v_isShared_35_ == 0)
{
lean_ctor_set(v___x_34_, 1, v___x_37_);
v___x_39_ = v___x_34_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_42_; 
v_reuseFailAlloc_42_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_42_, 0, v_mctx_29_);
lean_ctor_set(v_reuseFailAlloc_42_, 1, v___x_37_);
lean_ctor_set(v_reuseFailAlloc_42_, 2, v_zetaDeltaFVarIds_30_);
lean_ctor_set(v_reuseFailAlloc_42_, 3, v_postponed_31_);
lean_ctor_set(v_reuseFailAlloc_42_, 4, v_diag_32_);
v___x_39_ = v_reuseFailAlloc_42_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_40_ = lean_st_ref_put(v___y_9_, v___x_39_);
v___x_41_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_41_, 0, v___x_36_);
return v___x_41_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___boxed(lean_object* v_env_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v_env_49_, v___y_50_, v___y_51_);
lean_dec(v___y_51_);
lean_dec(v___y_50_);
return v_res_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9(lean_object* v_env_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v_env_54_, v___y_58_, v___y_60_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___boxed(lean_object* v_env_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9(v_env_63_, v___y_64_, v___y_65_, v___y_66_, v___y_67_, v___y_68_, v___y_69_);
lean_dec(v___y_69_);
lean_dec_ref(v___y_68_);
lean_dec(v___y_67_);
lean_dec_ref(v___y_66_);
lean_dec(v___y_65_);
lean_dec_ref(v___y_64_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___lam__0(lean_object* v_k_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v_b_75_, lean_object* v_c_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
lean_object* v___x_82_; 
lean_inc(v___y_80_);
lean_inc_ref(v___y_79_);
lean_inc(v___y_78_);
lean_inc_ref(v___y_77_);
lean_inc(v___y_74_);
lean_inc_ref(v___y_73_);
v___x_82_ = lean_apply_9(v_k_72_, v_b_75_, v_c_76_, v___y_73_, v___y_74_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, lean_box(0));
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___lam__0___boxed(lean_object* v_k_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v_b_86_, lean_object* v_c_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___lam__0(v_k_83_, v___y_84_, v___y_85_, v_b_86_, v_c_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_);
lean_dec(v___y_91_);
lean_dec_ref(v___y_90_);
lean_dec(v___y_89_);
lean_dec_ref(v___y_88_);
lean_dec(v___y_85_);
lean_dec_ref(v___y_84_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg(lean_object* v_type_94_, lean_object* v_maxFVars_x3f_95_, lean_object* v_k_96_, uint8_t v_cleanupAnnotations_97_, uint8_t v_whnfType_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_){
_start:
{
lean_object* v___f_106_; lean_object* v___x_107_; 
lean_inc(v___y_100_);
lean_inc_ref(v___y_99_);
v___f_106_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_106_, 0, v_k_96_);
lean_closure_set(v___f_106_, 1, v___y_99_);
lean_closure_set(v___f_106_, 2, v___y_100_);
v___x_107_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_94_, v_maxFVars_x3f_95_, v___f_106_, v_cleanupAnnotations_97_, v_whnfType_98_, v___y_101_, v___y_102_, v___y_103_, v___y_104_);
if (lean_obj_tag(v___x_107_) == 0)
{
return v___x_107_;
}
else
{
lean_object* v_a_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_115_; 
v_a_108_ = lean_ctor_get(v___x_107_, 0);
v_isSharedCheck_115_ = !lean_is_exclusive(v___x_107_);
if (v_isSharedCheck_115_ == 0)
{
v___x_110_ = v___x_107_;
v_isShared_111_ = v_isSharedCheck_115_;
goto v_resetjp_109_;
}
else
{
lean_inc(v_a_108_);
lean_dec(v___x_107_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_115_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
lean_object* v___x_113_; 
if (v_isShared_111_ == 0)
{
v___x_113_ = v___x_110_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v_a_108_);
v___x_113_ = v_reuseFailAlloc_114_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
return v___x_113_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___boxed(lean_object* v_type_116_, lean_object* v_maxFVars_x3f_117_, lean_object* v_k_118_, lean_object* v_cleanupAnnotations_119_, lean_object* v_whnfType_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_128_; uint8_t v_whnfType_boxed_129_; lean_object* v_res_130_; 
v_cleanupAnnotations_boxed_128_ = lean_unbox(v_cleanupAnnotations_119_);
v_whnfType_boxed_129_ = lean_unbox(v_whnfType_120_);
v_res_130_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg(v_type_116_, v_maxFVars_x3f_117_, v_k_118_, v_cleanupAnnotations_boxed_128_, v_whnfType_boxed_129_, v___y_121_, v___y_122_, v___y_123_, v___y_124_, v___y_125_, v___y_126_);
lean_dec(v___y_126_);
lean_dec_ref(v___y_125_);
lean_dec(v___y_124_);
lean_dec_ref(v___y_123_);
lean_dec(v___y_122_);
lean_dec_ref(v___y_121_);
return v_res_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15(lean_object* v_00_u03b1_131_, lean_object* v_type_132_, lean_object* v_maxFVars_x3f_133_, lean_object* v_k_134_, uint8_t v_cleanupAnnotations_135_, uint8_t v_whnfType_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg(v_type_132_, v_maxFVars_x3f_133_, v_k_134_, v_cleanupAnnotations_135_, v_whnfType_136_, v___y_137_, v___y_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___boxed(lean_object* v_00_u03b1_145_, lean_object* v_type_146_, lean_object* v_maxFVars_x3f_147_, lean_object* v_k_148_, lean_object* v_cleanupAnnotations_149_, lean_object* v_whnfType_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_158_; uint8_t v_whnfType_boxed_159_; lean_object* v_res_160_; 
v_cleanupAnnotations_boxed_158_ = lean_unbox(v_cleanupAnnotations_149_);
v_whnfType_boxed_159_ = lean_unbox(v_whnfType_150_);
v_res_160_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15(v_00_u03b1_145_, v_type_146_, v_maxFVars_x3f_147_, v_k_148_, v_cleanupAnnotations_boxed_158_, v_whnfType_boxed_159_, v___y_151_, v___y_152_, v___y_153_, v___y_154_, v___y_155_, v___y_156_);
lean_dec(v___y_156_);
lean_dec_ref(v___y_155_);
lean_dec(v___y_154_);
lean_dec_ref(v___y_153_);
lean_dec(v___y_152_);
lean_dec_ref(v___y_151_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_wfRecursion_spec__18(lean_object* v_opts_161_, lean_object* v_opt_162_){
_start:
{
lean_object* v_name_163_; lean_object* v_defValue_164_; lean_object* v_map_165_; lean_object* v___x_166_; 
v_name_163_ = lean_ctor_get(v_opt_162_, 0);
v_defValue_164_ = lean_ctor_get(v_opt_162_, 1);
v_map_165_ = lean_ctor_get(v_opts_161_, 0);
v___x_166_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_165_, v_name_163_);
if (lean_obj_tag(v___x_166_) == 0)
{
lean_inc(v_defValue_164_);
return v_defValue_164_;
}
else
{
lean_object* v_val_167_; 
v_val_167_ = lean_ctor_get(v___x_166_, 0);
lean_inc(v_val_167_);
lean_dec_ref_known(v___x_166_, 1);
if (lean_obj_tag(v_val_167_) == 3)
{
lean_object* v_v_168_; 
v_v_168_ = lean_ctor_get(v_val_167_, 0);
lean_inc(v_v_168_);
lean_dec_ref_known(v_val_167_, 1);
return v_v_168_;
}
else
{
lean_dec(v_val_167_);
lean_inc(v_defValue_164_);
return v_defValue_164_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_wfRecursion_spec__18___boxed(lean_object* v_opts_169_, lean_object* v_opt_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l_Lean_Option_get___at___00Lean_Elab_wfRecursion_spec__18(v_opts_169_, v_opt_170_);
lean_dec_ref(v_opt_170_);
lean_dec_ref(v_opts_169_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Elab_wfRecursion_spec__19(lean_object* v_o_175_, lean_object* v_k_176_, uint8_t v_v_177_){
_start:
{
lean_object* v_map_178_; uint8_t v_hasTrace_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_193_; 
v_map_178_ = lean_ctor_get(v_o_175_, 0);
v_hasTrace_179_ = lean_ctor_get_uint8(v_o_175_, sizeof(void*)*1);
v_isSharedCheck_193_ = !lean_is_exclusive(v_o_175_);
if (v_isSharedCheck_193_ == 0)
{
v___x_181_ = v_o_175_;
v_isShared_182_ = v_isSharedCheck_193_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_map_178_);
lean_dec(v_o_175_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_193_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_183_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_183_, 0, v_v_177_);
lean_inc(v_k_176_);
v___x_184_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_176_, v___x_183_, v_map_178_);
if (v_hasTrace_179_ == 0)
{
lean_object* v___x_185_; uint8_t v___x_186_; lean_object* v___x_188_; 
v___x_185_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Elab_wfRecursion_spec__19___closed__1));
v___x_186_ = l_Lean_Name_isPrefixOf(v___x_185_, v_k_176_);
lean_dec(v_k_176_);
if (v_isShared_182_ == 0)
{
lean_ctor_set(v___x_181_, 0, v___x_184_);
v___x_188_ = v___x_181_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v___x_184_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
lean_ctor_set_uint8(v___x_188_, sizeof(void*)*1, v___x_186_);
return v___x_188_;
}
}
else
{
lean_object* v___x_191_; 
lean_dec(v_k_176_);
if (v_isShared_182_ == 0)
{
lean_ctor_set(v___x_181_, 0, v___x_184_);
v___x_191_ = v___x_181_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v___x_184_);
lean_ctor_set_uint8(v_reuseFailAlloc_192_, sizeof(void*)*1, v_hasTrace_179_);
v___x_191_ = v_reuseFailAlloc_192_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
return v___x_191_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Elab_wfRecursion_spec__19___boxed(lean_object* v_o_194_, lean_object* v_k_195_, lean_object* v_v_196_){
_start:
{
uint8_t v_v_boxed_197_; lean_object* v_res_198_; 
v_v_boxed_197_ = lean_unbox(v_v_196_);
v_res_198_ = l_Lean_Options_set___at___00Lean_Elab_wfRecursion_spec__19(v_o_194_, v_k_195_, v_v_boxed_197_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3___redArg(lean_object* v_as_199_, size_t v_sz_200_, size_t v_i_201_, lean_object* v_b_202_, lean_object* v___y_203_, lean_object* v___y_204_){
_start:
{
uint8_t v___x_206_; 
v___x_206_ = lean_usize_dec_lt(v_i_201_, v_sz_200_);
if (v___x_206_ == 0)
{
lean_object* v___x_207_; 
v___x_207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_207_, 0, v_b_202_);
return v___x_207_;
}
else
{
lean_object* v___x_208_; lean_object* v_a_209_; lean_object* v___x_210_; 
v___x_208_ = lean_box(0);
v_a_209_ = lean_array_uget_borrowed(v_as_199_, v_i_201_);
v___x_210_ = l_Lean_Elab_addAsAxiom___redArg(v_a_209_, v___y_203_, v___y_204_);
if (lean_obj_tag(v___x_210_) == 0)
{
size_t v___x_211_; size_t v___x_212_; 
lean_dec_ref_known(v___x_210_, 1);
v___x_211_ = ((size_t)1ULL);
v___x_212_ = lean_usize_add(v_i_201_, v___x_211_);
v_i_201_ = v___x_212_;
v_b_202_ = v___x_208_;
goto _start;
}
else
{
return v___x_210_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3___redArg___boxed(lean_object* v_as_214_, lean_object* v_sz_215_, lean_object* v_i_216_, lean_object* v_b_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_){
_start:
{
size_t v_sz_boxed_221_; size_t v_i_boxed_222_; lean_object* v_res_223_; 
v_sz_boxed_221_ = lean_unbox_usize(v_sz_215_);
lean_dec(v_sz_215_);
v_i_boxed_222_ = lean_unbox_usize(v_i_216_);
lean_dec(v_i_216_);
v_res_223_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3___redArg(v_as_214_, v_sz_boxed_221_, v_i_boxed_222_, v_b_217_, v___y_218_, v___y_219_);
lean_dec(v___y_219_);
lean_dec_ref(v___y_218_);
lean_dec_ref(v_as_214_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___redArg(lean_object* v_a_224_, size_t v_sz_225_, size_t v_i_226_, lean_object* v_bs_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_){
_start:
{
uint8_t v___x_233_; 
v___x_233_ = lean_usize_dec_lt(v_i_226_, v_sz_225_);
if (v___x_233_ == 0)
{
lean_object* v___x_234_; 
lean_dec_ref(v_a_224_);
v___x_234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_234_, 0, v_bs_227_);
return v___x_234_;
}
else
{
lean_object* v_v_235_; lean_object* v___x_236_; lean_object* v_bs_x27_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v_v_235_ = lean_array_uget(v_bs_227_, v_i_226_);
v___x_236_ = lean_unsigned_to_nat(0u);
v_bs_x27_237_ = lean_array_uset(v_bs_227_, v_i_226_, v___x_236_);
v___x_238_ = lean_usize_to_nat(v_i_226_);
lean_inc_ref(v_a_224_);
v___x_239_ = l_Lean_Elab_WF_varyingVarNames(v_a_224_, v___x_238_, v_v_235_, v___y_228_, v___y_229_, v___y_230_, v___y_231_);
if (lean_obj_tag(v___x_239_) == 0)
{
lean_object* v_a_240_; size_t v___x_241_; size_t v___x_242_; lean_object* v___x_243_; 
v_a_240_ = lean_ctor_get(v___x_239_, 0);
lean_inc(v_a_240_);
lean_dec_ref_known(v___x_239_, 1);
v___x_241_ = ((size_t)1ULL);
v___x_242_ = lean_usize_add(v_i_226_, v___x_241_);
v___x_243_ = lean_array_uset(v_bs_x27_237_, v_i_226_, v_a_240_);
v_i_226_ = v___x_242_;
v_bs_227_ = v___x_243_;
goto _start;
}
else
{
lean_object* v_a_245_; lean_object* v___x_247_; uint8_t v_isShared_248_; uint8_t v_isSharedCheck_252_; 
lean_dec_ref(v_bs_x27_237_);
lean_dec_ref(v_a_224_);
v_a_245_ = lean_ctor_get(v___x_239_, 0);
v_isSharedCheck_252_ = !lean_is_exclusive(v___x_239_);
if (v_isSharedCheck_252_ == 0)
{
v___x_247_ = v___x_239_;
v_isShared_248_ = v_isSharedCheck_252_;
goto v_resetjp_246_;
}
else
{
lean_inc(v_a_245_);
lean_dec(v___x_239_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___redArg___boxed(lean_object* v_a_253_, lean_object* v_sz_254_, lean_object* v_i_255_, lean_object* v_bs_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_){
_start:
{
size_t v_sz_boxed_262_; size_t v_i_boxed_263_; lean_object* v_res_264_; 
v_sz_boxed_262_ = lean_unbox_usize(v_sz_254_);
lean_dec(v_sz_254_);
v_i_boxed_263_ = lean_unbox_usize(v_i_255_);
lean_dec(v_i_255_);
v_res_264_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___redArg(v_a_253_, v_sz_boxed_262_, v_i_boxed_263_, v_bs_256_, v___y_257_, v___y_258_, v___y_259_, v___y_260_);
lean_dec(v___y_260_);
lean_dec_ref(v___y_259_);
lean_dec(v___y_258_);
lean_dec_ref(v___y_257_);
return v_res_264_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__7___closed__0(void){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; 
v___x_265_ = lean_box(1);
v___x_266_ = l_Lean_MessageData_ofFormat(v___x_265_);
return v___x_266_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__7___closed__3(void){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_270_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__7___closed__2));
v___x_271_ = l_Lean_MessageData_ofFormat(v___x_270_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__7(lean_object* v_x_272_, lean_object* v_x_273_){
_start:
{
if (lean_obj_tag(v_x_273_) == 0)
{
return v_x_272_;
}
else
{
lean_object* v_head_274_; lean_object* v_tail_275_; lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_297_; 
v_head_274_ = lean_ctor_get(v_x_273_, 0);
v_tail_275_ = lean_ctor_get(v_x_273_, 1);
v_isSharedCheck_297_ = !lean_is_exclusive(v_x_273_);
if (v_isSharedCheck_297_ == 0)
{
v___x_277_ = v_x_273_;
v_isShared_278_ = v_isSharedCheck_297_;
goto v_resetjp_276_;
}
else
{
lean_inc(v_tail_275_);
lean_inc(v_head_274_);
lean_dec(v_x_273_);
v___x_277_ = lean_box(0);
v_isShared_278_ = v_isSharedCheck_297_;
goto v_resetjp_276_;
}
v_resetjp_276_:
{
lean_object* v_before_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_295_; 
v_before_279_ = lean_ctor_get(v_head_274_, 0);
v_isSharedCheck_295_ = !lean_is_exclusive(v_head_274_);
if (v_isSharedCheck_295_ == 0)
{
lean_object* v_unused_296_; 
v_unused_296_ = lean_ctor_get(v_head_274_, 1);
lean_dec(v_unused_296_);
v___x_281_ = v_head_274_;
v_isShared_282_ = v_isSharedCheck_295_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_before_279_);
lean_dec(v_head_274_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_295_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_283_; lean_object* v___x_285_; 
v___x_283_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__7___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__7___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__7___closed__0);
if (v_isShared_282_ == 0)
{
lean_ctor_set_tag(v___x_281_, 7);
lean_ctor_set(v___x_281_, 1, v___x_283_);
lean_ctor_set(v___x_281_, 0, v_x_272_);
v___x_285_ = v___x_281_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v_x_272_);
lean_ctor_set(v_reuseFailAlloc_294_, 1, v___x_283_);
v___x_285_ = v_reuseFailAlloc_294_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
lean_object* v___x_286_; lean_object* v___x_288_; 
v___x_286_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__7___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__7___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__7___closed__3);
if (v_isShared_278_ == 0)
{
lean_ctor_set_tag(v___x_277_, 7);
lean_ctor_set(v___x_277_, 1, v___x_286_);
lean_ctor_set(v___x_277_, 0, v___x_285_);
v___x_288_ = v___x_277_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v___x_285_);
lean_ctor_set(v_reuseFailAlloc_293_, 1, v___x_286_);
v___x_288_ = v_reuseFailAlloc_293_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_289_ = l_Lean_MessageData_ofSyntax(v_before_279_);
v___x_290_ = l_Lean_indentD(v___x_289_);
v___x_291_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_291_, 0, v___x_288_);
lean_ctor_set(v___x_291_, 1, v___x_290_);
v_x_272_ = v___x_291_;
v_x_273_ = v_tail_275_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__6(lean_object* v_opts_298_, lean_object* v_opt_299_){
_start:
{
lean_object* v_name_300_; lean_object* v_defValue_301_; lean_object* v_map_302_; lean_object* v___x_303_; 
v_name_300_ = lean_ctor_get(v_opt_299_, 0);
v_defValue_301_ = lean_ctor_get(v_opt_299_, 1);
v_map_302_ = lean_ctor_get(v_opts_298_, 0);
v___x_303_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_302_, v_name_300_);
if (lean_obj_tag(v___x_303_) == 0)
{
uint8_t v___x_304_; 
v___x_304_ = lean_unbox(v_defValue_301_);
return v___x_304_;
}
else
{
lean_object* v_val_305_; 
v_val_305_ = lean_ctor_get(v___x_303_, 0);
lean_inc(v_val_305_);
lean_dec_ref_known(v___x_303_, 1);
if (lean_obj_tag(v_val_305_) == 1)
{
uint8_t v_v_306_; 
v_v_306_ = lean_ctor_get_uint8(v_val_305_, 0);
lean_dec_ref_known(v_val_305_, 0);
return v_v_306_;
}
else
{
uint8_t v___x_307_; 
lean_dec(v_val_305_);
v___x_307_ = lean_unbox(v_defValue_301_);
return v___x_307_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__6___boxed(lean_object* v_opts_308_, lean_object* v_opt_309_){
_start:
{
uint8_t v_res_310_; lean_object* v_r_311_; 
v_res_310_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__6(v_opts_308_, v_opt_309_);
lean_dec_ref(v_opt_309_);
lean_dec_ref(v_opts_308_);
v_r_311_ = lean_box(v_res_310_);
return v_r_311_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_315_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__1));
v___x_316_ = l_Lean_MessageData_ofFormat(v___x_315_);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg(lean_object* v_msgData_317_, lean_object* v_macroStack_318_, lean_object* v___y_319_){
_start:
{
lean_object* v___x_321_; lean_object* v___x_322_; uint8_t v___x_323_; 
v___x_321_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_319_);
v___x_322_ = l_Lean_Elab_pp_macroStack;
v___x_323_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__6(v___x_321_, v___x_322_);
lean_dec_ref(v___x_321_);
if (v___x_323_ == 0)
{
lean_object* v___x_324_; 
lean_dec(v_macroStack_318_);
v___x_324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_324_, 0, v_msgData_317_);
return v___x_324_;
}
else
{
if (lean_obj_tag(v_macroStack_318_) == 0)
{
lean_object* v___x_325_; 
v___x_325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_325_, 0, v_msgData_317_);
return v___x_325_;
}
else
{
lean_object* v_head_326_; lean_object* v_after_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_342_; 
v_head_326_ = lean_ctor_get(v_macroStack_318_, 0);
lean_inc(v_head_326_);
v_after_327_ = lean_ctor_get(v_head_326_, 1);
v_isSharedCheck_342_ = !lean_is_exclusive(v_head_326_);
if (v_isSharedCheck_342_ == 0)
{
lean_object* v_unused_343_; 
v_unused_343_ = lean_ctor_get(v_head_326_, 0);
lean_dec(v_unused_343_);
v___x_329_ = v_head_326_;
v_isShared_330_ = v_isSharedCheck_342_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_after_327_);
lean_dec(v_head_326_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_342_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v___x_331_; lean_object* v___x_333_; 
v___x_331_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__7___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__7___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__7___closed__0);
if (v_isShared_330_ == 0)
{
lean_ctor_set_tag(v___x_329_, 7);
lean_ctor_set(v___x_329_, 1, v___x_331_);
lean_ctor_set(v___x_329_, 0, v_msgData_317_);
v___x_333_ = v___x_329_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v_msgData_317_);
lean_ctor_set(v_reuseFailAlloc_341_, 1, v___x_331_);
v___x_333_ = v_reuseFailAlloc_341_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v_msgData_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_334_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2);
v___x_335_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_335_, 0, v___x_333_);
lean_ctor_set(v___x_335_, 1, v___x_334_);
v___x_336_ = l_Lean_MessageData_ofSyntax(v_after_327_);
v___x_337_ = l_Lean_indentD(v___x_336_);
v_msgData_338_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_338_, 0, v___x_335_);
lean_ctor_set(v_msgData_338_, 1, v___x_337_);
v___x_339_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__7(v_msgData_338_, v_macroStack_318_);
v___x_340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_340_, 0, v___x_339_);
return v___x_340_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___boxed(lean_object* v_msgData_344_, lean_object* v_macroStack_345_, lean_object* v___y_346_, lean_object* v___y_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg(v_msgData_344_, v_macroStack_345_, v___y_346_);
lean_dec_ref(v___y_346_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(lean_object* v_msgData_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_){
_start:
{
lean_object* v___x_355_; lean_object* v_env_356_; uint8_t v___x_357_; lean_object* v_env_358_; lean_object* v___x_359_; lean_object* v_toCold_360_; lean_object* v_mctx_361_; lean_object* v_lctx_362_; lean_object* v_options_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_355_ = lean_st_ref_get(v___y_353_);
v_env_356_ = lean_ctor_get(v___x_355_, 0);
lean_inc_ref(v_env_356_);
lean_dec(v___x_355_);
v___x_357_ = 0;
v_env_358_ = l_Lean_Environment_setRecordingDeps(v_env_356_, v___x_357_);
v___x_359_ = lean_st_ref_get(v___y_351_);
v_toCold_360_ = lean_ctor_get(v___y_352_, 0);
v_mctx_361_ = lean_ctor_get(v___x_359_, 0);
lean_inc_ref(v_mctx_361_);
lean_dec(v___x_359_);
v_lctx_362_ = lean_ctor_get(v___y_350_, 2);
v_options_363_ = lean_ctor_get(v_toCold_360_, 2);
lean_inc_ref(v_options_363_);
lean_inc_ref(v_lctx_362_);
v___x_364_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_364_, 0, v_env_358_);
lean_ctor_set(v___x_364_, 1, v_mctx_361_);
lean_ctor_set(v___x_364_, 2, v_lctx_362_);
lean_ctor_set(v___x_364_, 3, v_options_363_);
v___x_365_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_365_, 0, v___x_364_);
lean_ctor_set(v___x_365_, 1, v_msgData_349_);
v___x_366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_366_, 0, v___x_365_);
return v___x_366_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0___boxed(lean_object* v_msgData_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(v_msgData_367_, v___y_368_, v___y_369_, v___y_370_, v___y_371_);
lean_dec(v___y_371_);
lean_dec_ref(v___y_370_);
lean_dec(v___y_369_);
lean_dec_ref(v___y_368_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(lean_object* v_msg_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
lean_object* v_ref_382_; lean_object* v_macroStack_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v_a_386_; lean_object* v___x_387_; lean_object* v_a_388_; lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_396_; 
v_ref_382_ = lean_ctor_get(v___y_379_, 2);
v_macroStack_383_ = lean_ctor_get(v___y_375_, 1);
v___x_384_ = l_Lean_Elab_getBetterRef(v_ref_382_, v_macroStack_383_);
v___x_385_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(v_msg_374_, v___y_377_, v___y_378_, v___y_379_, v___y_380_);
v_a_386_ = lean_ctor_get(v___x_385_, 0);
lean_inc(v_a_386_);
lean_dec_ref(v___x_385_);
lean_inc(v_macroStack_383_);
v___x_387_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg(v_a_386_, v_macroStack_383_, v___y_379_);
v_a_388_ = lean_ctor_get(v___x_387_, 0);
v_isSharedCheck_396_ = !lean_is_exclusive(v___x_387_);
if (v_isSharedCheck_396_ == 0)
{
v___x_390_ = v___x_387_;
v_isShared_391_ = v_isSharedCheck_396_;
goto v_resetjp_389_;
}
else
{
lean_inc(v_a_388_);
lean_dec(v___x_387_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_396_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
lean_object* v___x_392_; lean_object* v___x_394_; 
v___x_392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_392_, 0, v___x_384_);
lean_ctor_set(v___x_392_, 1, v_a_388_);
if (v_isShared_391_ == 0)
{
lean_ctor_set_tag(v___x_390_, 1);
lean_ctor_set(v___x_390_, 0, v___x_392_);
v___x_394_ = v___x_390_;
goto v_reusejp_393_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v___x_392_);
v___x_394_ = v_reuseFailAlloc_395_;
goto v_reusejp_393_;
}
v_reusejp_393_:
{
return v___x_394_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg___boxed(lean_object* v_msg_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(v_msg_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_);
lean_dec(v___y_403_);
lean_dec_ref(v___y_402_);
lean_dec(v___y_401_);
lean_dec_ref(v___y_400_);
lean_dec(v___y_399_);
lean_dec_ref(v___y_398_);
return v_res_405_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__1(void){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_407_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__0));
v___x_408_ = l_Lean_stringToMessageData(v___x_407_);
return v___x_408_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__3(void){
_start:
{
lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_410_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__2));
v___x_411_ = l_Lean_stringToMessageData(v___x_410_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5(lean_object* v_as_412_, size_t v_sz_413_, size_t v_i_414_, lean_object* v_b_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
lean_object* v_a_424_; uint8_t v___x_428_; 
v___x_428_ = lean_usize_dec_lt(v_i_414_, v_sz_413_);
if (v___x_428_ == 0)
{
lean_object* v___x_429_; 
v___x_429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_429_, 0, v_b_415_);
return v___x_429_;
}
else
{
lean_object* v_array_430_; lean_object* v_start_431_; lean_object* v_stop_432_; uint8_t v___x_433_; 
v_array_430_ = lean_ctor_get(v_b_415_, 0);
v_start_431_ = lean_ctor_get(v_b_415_, 1);
v_stop_432_ = lean_ctor_get(v_b_415_, 2);
v___x_433_ = lean_nat_dec_lt(v_start_431_, v_stop_432_);
if (v___x_433_ == 0)
{
lean_object* v___x_434_; 
v___x_434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_434_, 0, v_b_415_);
return v___x_434_;
}
else
{
lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_463_; 
lean_inc(v_stop_432_);
lean_inc(v_start_431_);
lean_inc_ref(v_array_430_);
v_isSharedCheck_463_ = !lean_is_exclusive(v_b_415_);
if (v_isSharedCheck_463_ == 0)
{
lean_object* v_unused_464_; lean_object* v_unused_465_; lean_object* v_unused_466_; 
v_unused_464_ = lean_ctor_get(v_b_415_, 2);
lean_dec(v_unused_464_);
v_unused_465_ = lean_ctor_get(v_b_415_, 1);
lean_dec(v_unused_465_);
v_unused_466_ = lean_ctor_get(v_b_415_, 0);
lean_dec(v_unused_466_);
v___x_436_ = v_b_415_;
v_isShared_437_ = v_isSharedCheck_463_;
goto v_resetjp_435_;
}
else
{
lean_dec(v_b_415_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_463_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v_a_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_443_; 
v_a_438_ = lean_array_uget_borrowed(v_as_412_, v_i_414_);
v___x_439_ = lean_array_fget(v_array_430_, v_start_431_);
v___x_440_ = lean_unsigned_to_nat(1u);
v___x_441_ = lean_nat_add(v_start_431_, v___x_440_);
lean_dec(v_start_431_);
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 1, v___x_441_);
v___x_443_ = v___x_436_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v_array_430_);
lean_ctor_set(v_reuseFailAlloc_462_, 1, v___x_441_);
lean_ctor_set(v_reuseFailAlloc_462_, 2, v_stop_432_);
v___x_443_ = v_reuseFailAlloc_462_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
lean_object* v___x_444_; lean_object* v___x_445_; uint8_t v___x_446_; 
v___x_444_ = lean_array_get_size(v_a_438_);
v___x_445_ = lean_unsigned_to_nat(0u);
v___x_446_ = lean_nat_dec_eq(v___x_444_, v___x_445_);
if (v___x_446_ == 0)
{
lean_dec(v___x_439_);
v_a_424_ = v___x_443_;
goto v___jp_423_;
}
else
{
lean_object* v_declName_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v_declName_447_ = lean_ctor_get(v___x_439_, 3);
lean_inc(v_declName_447_);
lean_dec(v___x_439_);
v___x_448_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__1);
v___x_449_ = l_Lean_MessageData_ofName(v_declName_447_);
v___x_450_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_450_, 0, v___x_448_);
lean_ctor_set(v___x_450_, 1, v___x_449_);
v___x_451_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__3);
v___x_452_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_452_, 0, v___x_450_);
lean_ctor_set(v___x_452_, 1, v___x_451_);
v___x_453_ = l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(v___x_452_, v___y_416_, v___y_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
if (lean_obj_tag(v___x_453_) == 0)
{
lean_dec_ref_known(v___x_453_, 1);
v_a_424_ = v___x_443_;
goto v___jp_423_;
}
else
{
lean_object* v_a_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_461_; 
lean_dec_ref(v___x_443_);
v_a_454_ = lean_ctor_get(v___x_453_, 0);
v_isSharedCheck_461_ = !lean_is_exclusive(v___x_453_);
if (v_isSharedCheck_461_ == 0)
{
v___x_456_ = v___x_453_;
v_isShared_457_ = v_isSharedCheck_461_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_a_454_);
lean_dec(v___x_453_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_461_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v___x_459_; 
if (v_isShared_457_ == 0)
{
v___x_459_ = v___x_456_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v_a_454_);
v___x_459_ = v_reuseFailAlloc_460_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
return v___x_459_;
}
}
}
}
}
}
}
}
v___jp_423_:
{
size_t v___x_425_; size_t v___x_426_; 
v___x_425_ = ((size_t)1ULL);
v___x_426_ = lean_usize_add(v_i_414_, v___x_425_);
v_i_414_ = v___x_426_;
v_b_415_ = v_a_424_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___boxed(lean_object* v_as_467_, lean_object* v_sz_468_, lean_object* v_i_469_, lean_object* v_b_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_){
_start:
{
size_t v_sz_boxed_478_; size_t v_i_boxed_479_; lean_object* v_res_480_; 
v_sz_boxed_478_ = lean_unbox_usize(v_sz_468_);
lean_dec(v_sz_468_);
v_i_boxed_479_ = lean_unbox_usize(v_i_469_);
lean_dec(v_i_469_);
v_res_480_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5(v_as_467_, v_sz_boxed_478_, v_i_boxed_479_, v_b_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_);
lean_dec(v___y_476_);
lean_dec_ref(v___y_475_);
lean_dec(v___y_474_);
lean_dec_ref(v___y_473_);
lean_dec(v___y_472_);
lean_dec_ref(v___y_471_);
lean_dec_ref(v_as_467_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6(size_t v_sz_481_, size_t v_i_482_, lean_object* v_bs_483_){
_start:
{
uint8_t v___x_484_; 
v___x_484_ = lean_usize_dec_lt(v_i_482_, v_sz_481_);
if (v___x_484_ == 0)
{
return v_bs_483_;
}
else
{
lean_object* v_v_485_; lean_object* v_declName_486_; lean_object* v___x_487_; lean_object* v_bs_x27_488_; size_t v___x_489_; size_t v___x_490_; lean_object* v___x_491_; 
v_v_485_ = lean_array_uget_borrowed(v_bs_483_, v_i_482_);
v_declName_486_ = lean_ctor_get(v_v_485_, 3);
lean_inc(v_declName_486_);
v___x_487_ = lean_unsigned_to_nat(0u);
v_bs_x27_488_ = lean_array_uset(v_bs_483_, v_i_482_, v___x_487_);
v___x_489_ = ((size_t)1ULL);
v___x_490_ = lean_usize_add(v_i_482_, v___x_489_);
v___x_491_ = lean_array_uset(v_bs_x27_488_, v_i_482_, v_declName_486_);
v_i_482_ = v___x_490_;
v_bs_483_ = v___x_491_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6___boxed(lean_object* v_sz_493_, lean_object* v_i_494_, lean_object* v_bs_495_){
_start:
{
size_t v_sz_boxed_496_; size_t v_i_boxed_497_; lean_object* v_res_498_; 
v_sz_boxed_496_ = lean_unbox_usize(v_sz_493_);
lean_dec(v_sz_493_);
v_i_boxed_497_ = lean_unbox_usize(v_i_494_);
lean_dec(v_i_494_);
v_res_498_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6(v_sz_boxed_496_, v_i_boxed_497_, v_bs_495_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7___redArg(lean_object* v_a_499_, lean_object* v___x_500_, size_t v_sz_501_, size_t v_i_502_, lean_object* v_bs_503_, lean_object* v___y_504_, lean_object* v___y_505_){
_start:
{
uint8_t v___x_507_; 
v___x_507_ = lean_usize_dec_lt(v_i_502_, v_sz_501_);
if (v___x_507_ == 0)
{
lean_object* v___x_508_; 
lean_dec(v___x_500_);
lean_dec_ref(v_a_499_);
v___x_508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_508_, 0, v_bs_503_);
return v___x_508_;
}
else
{
lean_object* v_v_509_; lean_object* v_ref_510_; uint8_t v_kind_511_; lean_object* v_levelParams_512_; lean_object* v_modifiers_513_; lean_object* v_declName_514_; lean_object* v_binders_515_; lean_object* v_numSectionVars_516_; lean_object* v_type_517_; lean_object* v_value_518_; lean_object* v_termination_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_545_; 
v_v_509_ = lean_array_uget(v_bs_503_, v_i_502_);
v_ref_510_ = lean_ctor_get(v_v_509_, 0);
v_kind_511_ = lean_ctor_get_uint8(v_v_509_, sizeof(void*)*9);
v_levelParams_512_ = lean_ctor_get(v_v_509_, 1);
v_modifiers_513_ = lean_ctor_get(v_v_509_, 2);
v_declName_514_ = lean_ctor_get(v_v_509_, 3);
v_binders_515_ = lean_ctor_get(v_v_509_, 4);
v_numSectionVars_516_ = lean_ctor_get(v_v_509_, 5);
v_type_517_ = lean_ctor_get(v_v_509_, 6);
v_value_518_ = lean_ctor_get(v_v_509_, 7);
v_termination_519_ = lean_ctor_get(v_v_509_, 8);
v_isSharedCheck_545_ = !lean_is_exclusive(v_v_509_);
if (v_isSharedCheck_545_ == 0)
{
v___x_521_ = v_v_509_;
v_isShared_522_ = v_isSharedCheck_545_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_termination_519_);
lean_inc(v_value_518_);
lean_inc(v_type_517_);
lean_inc(v_numSectionVars_516_);
lean_inc(v_binders_515_);
lean_inc(v_declName_514_);
lean_inc(v_modifiers_513_);
lean_inc(v_levelParams_512_);
lean_inc(v_ref_510_);
lean_dec(v_v_509_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_545_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
size_t v_sz_523_; lean_object* v___x_524_; lean_object* v_bs_x27_525_; size_t v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
v_sz_523_ = lean_array_size(v_a_499_);
v___x_524_ = lean_unsigned_to_nat(0u);
v_bs_x27_525_ = lean_array_uset(v_bs_503_, v_i_502_, v___x_524_);
v___x_526_ = ((size_t)0ULL);
lean_inc_ref(v_a_499_);
v___x_527_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6(v_sz_523_, v___x_526_, v_a_499_);
lean_inc(v___x_500_);
v___x_528_ = l_Lean_Meta_unfoldIfArgIsAppOf(v___x_527_, v___x_500_, v_value_518_, v___y_504_, v___y_505_);
if (lean_obj_tag(v___x_528_) == 0)
{
lean_object* v_a_529_; lean_object* v___x_531_; 
v_a_529_ = lean_ctor_get(v___x_528_, 0);
lean_inc(v_a_529_);
lean_dec_ref_known(v___x_528_, 1);
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 7, v_a_529_);
v___x_531_ = v___x_521_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_536_; 
v_reuseFailAlloc_536_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_536_, 0, v_ref_510_);
lean_ctor_set(v_reuseFailAlloc_536_, 1, v_levelParams_512_);
lean_ctor_set(v_reuseFailAlloc_536_, 2, v_modifiers_513_);
lean_ctor_set(v_reuseFailAlloc_536_, 3, v_declName_514_);
lean_ctor_set(v_reuseFailAlloc_536_, 4, v_binders_515_);
lean_ctor_set(v_reuseFailAlloc_536_, 5, v_numSectionVars_516_);
lean_ctor_set(v_reuseFailAlloc_536_, 6, v_type_517_);
lean_ctor_set(v_reuseFailAlloc_536_, 7, v_a_529_);
lean_ctor_set(v_reuseFailAlloc_536_, 8, v_termination_519_);
lean_ctor_set_uint8(v_reuseFailAlloc_536_, sizeof(void*)*9, v_kind_511_);
v___x_531_ = v_reuseFailAlloc_536_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
size_t v___x_532_; size_t v___x_533_; lean_object* v___x_534_; 
v___x_532_ = ((size_t)1ULL);
v___x_533_ = lean_usize_add(v_i_502_, v___x_532_);
v___x_534_ = lean_array_uset(v_bs_x27_525_, v_i_502_, v___x_531_);
v_i_502_ = v___x_533_;
v_bs_503_ = v___x_534_;
goto _start;
}
}
else
{
lean_object* v_a_537_; lean_object* v___x_539_; uint8_t v_isShared_540_; uint8_t v_isSharedCheck_544_; 
lean_dec_ref(v_bs_x27_525_);
lean_del_object(v___x_521_);
lean_dec_ref(v_termination_519_);
lean_dec_ref(v_type_517_);
lean_dec(v_numSectionVars_516_);
lean_dec(v_binders_515_);
lean_dec(v_declName_514_);
lean_dec_ref(v_modifiers_513_);
lean_dec(v_levelParams_512_);
lean_dec(v_ref_510_);
lean_dec(v___x_500_);
lean_dec_ref(v_a_499_);
v_a_537_ = lean_ctor_get(v___x_528_, 0);
v_isSharedCheck_544_ = !lean_is_exclusive(v___x_528_);
if (v_isSharedCheck_544_ == 0)
{
v___x_539_ = v___x_528_;
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
else
{
lean_inc(v_a_537_);
lean_dec(v___x_528_);
v___x_539_ = lean_box(0);
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
v_resetjp_538_:
{
lean_object* v___x_542_; 
if (v_isShared_540_ == 0)
{
v___x_542_ = v___x_539_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v_a_537_);
v___x_542_ = v_reuseFailAlloc_543_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
return v___x_542_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7___redArg___boxed(lean_object* v_a_546_, lean_object* v___x_547_, lean_object* v_sz_548_, lean_object* v_i_549_, lean_object* v_bs_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_){
_start:
{
size_t v_sz_boxed_554_; size_t v_i_boxed_555_; lean_object* v_res_556_; 
v_sz_boxed_554_ = lean_unbox_usize(v_sz_548_);
lean_dec(v_sz_548_);
v_i_boxed_555_ = lean_unbox_usize(v_i_549_);
lean_dec(v_i_549_);
v_res_556_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7___redArg(v_a_546_, v___x_547_, v_sz_boxed_554_, v_i_boxed_555_, v_bs_550_, v___y_551_, v___y_552_);
lean_dec(v___y_552_);
lean_dec_ref(v___y_551_);
return v_res_556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__0(lean_object* v_a_557_, size_t v_sz_558_, size_t v___x_559_, lean_object* v___x_560_, lean_object* v___x_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_){
_start:
{
lean_object* v___x_569_; 
v___x_569_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3___redArg(v_a_557_, v_sz_558_, v___x_559_, v___x_560_, v___y_566_, v___y_567_);
if (lean_obj_tag(v___x_569_) == 0)
{
lean_object* v___x_570_; 
lean_dec_ref_known(v___x_569_, 1);
lean_inc_ref(v_a_557_);
v___x_570_ = l_Lean_Elab_getFixedParamPerms(v_a_557_, v___y_564_, v___y_565_, v___y_566_, v___y_567_);
if (lean_obj_tag(v___x_570_) == 0)
{
lean_object* v_a_571_; lean_object* v___x_572_; 
v_a_571_ = lean_ctor_get(v___x_570_, 0);
lean_inc_n(v_a_571_, 2);
lean_dec_ref_known(v___x_570_, 1);
lean_inc_ref(v_a_557_);
v___x_572_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___redArg(v_a_571_, v_sz_558_, v___x_559_, v_a_557_, v___y_564_, v___y_565_, v___y_566_, v___y_567_);
if (lean_obj_tag(v___x_572_) == 0)
{
lean_object* v_a_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; size_t v_sz_577_; lean_object* v___x_578_; 
v_a_573_ = lean_ctor_get(v___x_572_, 0);
lean_inc(v_a_573_);
lean_dec_ref_known(v___x_572_, 1);
v___x_574_ = lean_unsigned_to_nat(0u);
v___x_575_ = lean_array_get_size(v_a_557_);
lean_inc_ref(v_a_557_);
v___x_576_ = l_Array_toSubarray___redArg(v_a_557_, v___x_574_, v___x_575_);
v_sz_577_ = lean_array_size(v_a_573_);
v___x_578_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5(v_a_573_, v_sz_577_, v___x_559_, v___x_576_, v___y_562_, v___y_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_);
if (lean_obj_tag(v___x_578_) == 0)
{
lean_object* v___x_579_; lean_object* v_numSectionVars_580_; lean_object* v___x_581_; 
lean_dec_ref_known(v___x_578_, 1);
v___x_579_ = lean_array_get_borrowed(v___x_561_, v_a_557_, v___x_574_);
v_numSectionVars_580_ = lean_ctor_get(v___x_579_, 5);
lean_inc(v_numSectionVars_580_);
lean_inc_ref(v_a_557_);
v___x_581_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7___redArg(v_a_557_, v_numSectionVars_580_, v_sz_558_, v___x_559_, v_a_557_, v___y_566_, v___y_567_);
if (lean_obj_tag(v___x_581_) == 0)
{
lean_object* v_a_582_; lean_object* v___x_583_; 
v_a_582_ = lean_ctor_get(v___x_581_, 0);
lean_inc(v_a_582_);
lean_dec_ref_known(v___x_581_, 1);
lean_inc(v_a_573_);
lean_inc(v_a_571_);
v___x_583_ = l_Lean_Elab_WF_packMutual(v_a_571_, v_a_573_, v_a_582_, v___y_564_, v___y_565_, v___y_566_, v___y_567_);
if (lean_obj_tag(v___x_583_) == 0)
{
lean_object* v_a_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_593_; 
v_a_584_ = lean_ctor_get(v___x_583_, 0);
v_isSharedCheck_593_ = !lean_is_exclusive(v___x_583_);
if (v_isSharedCheck_593_ == 0)
{
v___x_586_ = v___x_583_;
v_isShared_587_ = v_isSharedCheck_593_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_a_584_);
lean_dec(v___x_583_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_593_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_591_; 
v___x_588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_588_, 0, v_a_573_);
lean_ctor_set(v___x_588_, 1, v_a_584_);
v___x_589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_589_, 0, v_a_571_);
lean_ctor_set(v___x_589_, 1, v___x_588_);
if (v_isShared_587_ == 0)
{
lean_ctor_set(v___x_586_, 0, v___x_589_);
v___x_591_ = v___x_586_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v___x_589_);
v___x_591_ = v_reuseFailAlloc_592_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
return v___x_591_;
}
}
}
else
{
lean_object* v_a_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_601_; 
lean_dec(v_a_573_);
lean_dec(v_a_571_);
v_a_594_ = lean_ctor_get(v___x_583_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v___x_583_);
if (v_isSharedCheck_601_ == 0)
{
v___x_596_ = v___x_583_;
v_isShared_597_ = v_isSharedCheck_601_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_a_594_);
lean_dec(v___x_583_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_601_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_599_; 
if (v_isShared_597_ == 0)
{
v___x_599_ = v___x_596_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v_a_594_);
v___x_599_ = v_reuseFailAlloc_600_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
return v___x_599_;
}
}
}
}
else
{
lean_object* v_a_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_609_; 
lean_dec(v_a_573_);
lean_dec(v_a_571_);
v_a_602_ = lean_ctor_get(v___x_581_, 0);
v_isSharedCheck_609_ = !lean_is_exclusive(v___x_581_);
if (v_isSharedCheck_609_ == 0)
{
v___x_604_ = v___x_581_;
v_isShared_605_ = v_isSharedCheck_609_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_a_602_);
lean_dec(v___x_581_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_609_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v___x_607_; 
if (v_isShared_605_ == 0)
{
v___x_607_ = v___x_604_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v_a_602_);
v___x_607_ = v_reuseFailAlloc_608_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
return v___x_607_;
}
}
}
}
else
{
lean_object* v_a_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_617_; 
lean_dec(v_a_573_);
lean_dec(v_a_571_);
lean_dec_ref(v_a_557_);
v_a_610_ = lean_ctor_get(v___x_578_, 0);
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_578_);
if (v_isSharedCheck_617_ == 0)
{
v___x_612_ = v___x_578_;
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_a_610_);
lean_dec(v___x_578_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v___x_615_; 
if (v_isShared_613_ == 0)
{
v___x_615_ = v___x_612_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v_a_610_);
v___x_615_ = v_reuseFailAlloc_616_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
return v___x_615_;
}
}
}
}
else
{
lean_object* v_a_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_625_; 
lean_dec(v_a_571_);
lean_dec_ref(v_a_557_);
v_a_618_ = lean_ctor_get(v___x_572_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v___x_572_);
if (v_isSharedCheck_625_ == 0)
{
v___x_620_ = v___x_572_;
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_a_618_);
lean_dec(v___x_572_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_623_; 
if (v_isShared_621_ == 0)
{
v___x_623_ = v___x_620_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_a_618_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
return v___x_623_;
}
}
}
}
else
{
lean_object* v_a_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_633_; 
lean_dec_ref(v_a_557_);
v_a_626_ = lean_ctor_get(v___x_570_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_570_);
if (v_isSharedCheck_633_ == 0)
{
v___x_628_ = v___x_570_;
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_a_626_);
lean_dec(v___x_570_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_631_; 
if (v_isShared_629_ == 0)
{
v___x_631_ = v___x_628_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v_a_626_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
return v___x_631_;
}
}
}
}
else
{
lean_object* v_a_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_641_; 
lean_dec_ref(v_a_557_);
v_a_634_ = lean_ctor_get(v___x_569_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v___x_569_);
if (v_isSharedCheck_641_ == 0)
{
v___x_636_ = v___x_569_;
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_a_634_);
lean_dec(v___x_569_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_639_; 
if (v_isShared_637_ == 0)
{
v___x_639_ = v___x_636_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v_a_634_);
v___x_639_ = v_reuseFailAlloc_640_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
return v___x_639_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__0___boxed(lean_object* v_a_642_, lean_object* v_sz_643_, lean_object* v___x_644_, lean_object* v___x_645_, lean_object* v___x_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_){
_start:
{
size_t v_sz_boxed_654_; size_t v___x_50754__boxed_655_; lean_object* v_res_656_; 
v_sz_boxed_654_ = lean_unbox_usize(v_sz_643_);
lean_dec(v_sz_643_);
v___x_50754__boxed_655_ = lean_unbox_usize(v___x_644_);
lean_dec(v___x_644_);
v_res_656_ = l_Lean_Elab_wfRecursion___lam__0(v_a_642_, v_sz_boxed_654_, v___x_50754__boxed_655_, v___x_645_, v___x_646_, v___y_647_, v___y_648_, v___y_649_, v___y_650_, v___y_651_, v___y_652_);
lean_dec(v___y_652_);
lean_dec_ref(v___y_651_);
lean_dec(v___y_650_);
lean_dec_ref(v___y_649_);
lean_dec(v___y_648_);
lean_dec_ref(v___y_647_);
lean_dec_ref(v___x_646_);
return v_res_656_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__1(lean_object* v_snd_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_){
_start:
{
lean_object* v___x_665_; 
v___x_665_ = l_Lean_Elab_addAsAxiom___redArg(v_snd_657_, v___y_662_, v___y_663_);
if (lean_obj_tag(v___x_665_) == 0)
{
lean_object* v_ref_666_; uint8_t v_kind_667_; lean_object* v_levelParams_668_; lean_object* v_modifiers_669_; lean_object* v_declName_670_; lean_object* v_binders_671_; lean_object* v_numSectionVars_672_; lean_object* v_type_673_; lean_object* v_value_674_; lean_object* v_termination_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_701_; 
lean_dec_ref_known(v___x_665_, 1);
v_ref_666_ = lean_ctor_get(v_snd_657_, 0);
v_kind_667_ = lean_ctor_get_uint8(v_snd_657_, sizeof(void*)*9);
v_levelParams_668_ = lean_ctor_get(v_snd_657_, 1);
v_modifiers_669_ = lean_ctor_get(v_snd_657_, 2);
v_declName_670_ = lean_ctor_get(v_snd_657_, 3);
v_binders_671_ = lean_ctor_get(v_snd_657_, 4);
v_numSectionVars_672_ = lean_ctor_get(v_snd_657_, 5);
v_type_673_ = lean_ctor_get(v_snd_657_, 6);
v_value_674_ = lean_ctor_get(v_snd_657_, 7);
v_termination_675_ = lean_ctor_get(v_snd_657_, 8);
v_isSharedCheck_701_ = !lean_is_exclusive(v_snd_657_);
if (v_isSharedCheck_701_ == 0)
{
v___x_677_ = v_snd_657_;
v_isShared_678_ = v_isSharedCheck_701_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_termination_675_);
lean_inc(v_value_674_);
lean_inc(v_type_673_);
lean_inc(v_numSectionVars_672_);
lean_inc(v_binders_671_);
lean_inc(v_declName_670_);
lean_inc(v_modifiers_669_);
lean_inc(v_levelParams_668_);
lean_inc(v_ref_666_);
lean_dec(v_snd_657_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_701_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v___x_679_; 
v___x_679_ = l_Lean_Elab_WF_preprocess(v_value_674_, v___y_660_, v___y_661_, v___y_662_, v___y_663_);
if (lean_obj_tag(v___x_679_) == 0)
{
lean_object* v_a_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_692_; 
v_a_680_ = lean_ctor_get(v___x_679_, 0);
v_isSharedCheck_692_ = !lean_is_exclusive(v___x_679_);
if (v_isSharedCheck_692_ == 0)
{
v___x_682_ = v___x_679_;
v_isShared_683_ = v_isSharedCheck_692_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_a_680_);
lean_dec(v___x_679_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_692_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v_expr_684_; lean_object* v___x_686_; 
v_expr_684_ = lean_ctor_get(v_a_680_, 0);
lean_inc_ref(v_expr_684_);
if (v_isShared_678_ == 0)
{
lean_ctor_set(v___x_677_, 7, v_expr_684_);
v___x_686_ = v___x_677_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v_ref_666_);
lean_ctor_set(v_reuseFailAlloc_691_, 1, v_levelParams_668_);
lean_ctor_set(v_reuseFailAlloc_691_, 2, v_modifiers_669_);
lean_ctor_set(v_reuseFailAlloc_691_, 3, v_declName_670_);
lean_ctor_set(v_reuseFailAlloc_691_, 4, v_binders_671_);
lean_ctor_set(v_reuseFailAlloc_691_, 5, v_numSectionVars_672_);
lean_ctor_set(v_reuseFailAlloc_691_, 6, v_type_673_);
lean_ctor_set(v_reuseFailAlloc_691_, 7, v_expr_684_);
lean_ctor_set(v_reuseFailAlloc_691_, 8, v_termination_675_);
lean_ctor_set_uint8(v_reuseFailAlloc_691_, sizeof(void*)*9, v_kind_667_);
v___x_686_ = v_reuseFailAlloc_691_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
lean_object* v___x_687_; lean_object* v___x_689_; 
v___x_687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_687_, 0, v___x_686_);
lean_ctor_set(v___x_687_, 1, v_a_680_);
if (v_isShared_683_ == 0)
{
lean_ctor_set(v___x_682_, 0, v___x_687_);
v___x_689_ = v___x_682_;
goto v_reusejp_688_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v___x_687_);
v___x_689_ = v_reuseFailAlloc_690_;
goto v_reusejp_688_;
}
v_reusejp_688_:
{
return v___x_689_;
}
}
}
}
else
{
lean_object* v_a_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_700_; 
lean_del_object(v___x_677_);
lean_dec_ref(v_termination_675_);
lean_dec_ref(v_type_673_);
lean_dec(v_numSectionVars_672_);
lean_dec(v_binders_671_);
lean_dec(v_declName_670_);
lean_dec_ref(v_modifiers_669_);
lean_dec(v_levelParams_668_);
lean_dec(v_ref_666_);
v_a_693_ = lean_ctor_get(v___x_679_, 0);
v_isSharedCheck_700_ = !lean_is_exclusive(v___x_679_);
if (v_isSharedCheck_700_ == 0)
{
v___x_695_ = v___x_679_;
v_isShared_696_ = v_isSharedCheck_700_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_a_693_);
lean_dec(v___x_679_);
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
else
{
lean_object* v_a_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_709_; 
lean_dec_ref(v_snd_657_);
v_a_702_ = lean_ctor_get(v___x_665_, 0);
v_isSharedCheck_709_ = !lean_is_exclusive(v___x_665_);
if (v_isSharedCheck_709_ == 0)
{
v___x_704_ = v___x_665_;
v_isShared_705_ = v_isSharedCheck_709_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_a_702_);
lean_dec(v___x_665_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_709_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
lean_object* v___x_707_; 
if (v_isShared_705_ == 0)
{
v___x_707_ = v___x_704_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v_a_702_);
v___x_707_ = v_reuseFailAlloc_708_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
return v___x_707_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__1___boxed(lean_object* v_snd_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_){
_start:
{
lean_object* v_res_718_; 
v_res_718_ = l_Lean_Elab_wfRecursion___lam__1(v_snd_710_, v___y_711_, v___y_712_, v___y_713_, v___y_714_, v___y_715_, v___y_716_);
lean_dec(v___y_716_);
lean_dec_ref(v___y_715_);
lean_dec(v___y_714_);
lean_dec_ref(v___y_713_);
lean_dec(v___y_712_);
lean_dec_ref(v___y_711_);
return v_res_718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__2(lean_object* v___x_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_){
_start:
{
lean_object* v_toCold_727_; lean_object* v_options_728_; uint8_t v_hasTrace_729_; 
v_toCold_727_ = lean_ctor_get(v___y_724_, 0);
v_options_728_ = lean_ctor_get(v_toCold_727_, 2);
v_hasTrace_729_ = lean_ctor_get_uint8(v_options_728_, sizeof(void*)*1);
if (v_hasTrace_729_ == 0)
{
lean_object* v___x_730_; lean_object* v___x_731_; 
lean_dec(v___x_719_);
v___x_730_ = lean_box(v_hasTrace_729_);
v___x_731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_731_, 0, v___x_730_);
return v___x_731_;
}
else
{
lean_object* v_inheritedTraceOptions_732_; lean_object* v___x_733_; lean_object* v___x_734_; uint8_t v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v_inheritedTraceOptions_732_ = lean_ctor_get(v_toCold_727_, 11);
v___x_733_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Elab_wfRecursion_spec__19___closed__1));
v___x_734_ = l_Lean_Name_append(v___x_733_, v___x_719_);
v___x_735_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_732_, v_options_728_, v___x_734_);
lean_dec(v___x_734_);
v___x_736_ = lean_box(v___x_735_);
v___x_737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_737_, 0, v___x_736_);
return v___x_737_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__2___boxed(lean_object* v___x_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_){
_start:
{
lean_object* v_res_746_; 
v_res_746_ = l_Lean_Elab_wfRecursion___lam__2(v___x_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_);
lean_dec(v___y_744_);
lean_dec_ref(v___y_743_);
lean_dec(v___y_742_);
lean_dec_ref(v___y_741_);
lean_dec(v___y_740_);
lean_dec_ref(v___y_739_);
return v_res_746_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg(lean_object* v___x_747_, lean_object* v_as_748_, size_t v_sz_749_, size_t v_i_750_, lean_object* v_b_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_){
_start:
{
lean_object* v_a_758_; uint8_t v___x_762_; 
v___x_762_ = lean_usize_dec_lt(v_i_750_, v_sz_749_);
if (v___x_762_ == 0)
{
lean_object* v___x_763_; 
lean_dec(v___x_747_);
v___x_763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_763_, 0, v_b_751_);
return v___x_763_;
}
else
{
lean_object* v_a_764_; uint8_t v_kind_765_; lean_object* v_declName_766_; lean_object* v_type_767_; lean_object* v___x_768_; uint8_t v___x_769_; 
v_a_764_ = lean_array_uget_borrowed(v_as_748_, v_i_750_);
v_kind_765_ = lean_ctor_get_uint8(v_a_764_, sizeof(void*)*9);
v_declName_766_ = lean_ctor_get(v_a_764_, 3);
v_type_767_ = lean_ctor_get(v_a_764_, 6);
v___x_768_ = lean_box(0);
v___x_769_ = lean_name_eq(v_declName_766_, v___x_747_);
if (v___x_769_ == 0)
{
uint8_t v___x_770_; 
v___x_770_ = l_Lean_Elab_DefKind_isTheorem(v_kind_765_);
if (v___x_770_ == 0)
{
lean_object* v___x_771_; 
lean_inc_ref(v_type_767_);
v___x_771_ = l_Lean_Meta_isProp(v_type_767_, v___y_752_, v___y_753_, v___y_754_, v___y_755_);
if (lean_obj_tag(v___x_771_) == 0)
{
lean_object* v_a_772_; uint8_t v___x_773_; 
v_a_772_ = lean_ctor_get(v___x_771_, 0);
lean_inc(v_a_772_);
lean_dec_ref_known(v___x_771_, 1);
v___x_773_ = lean_unbox(v_a_772_);
lean_dec(v_a_772_);
if (v___x_773_ == 0)
{
lean_object* v___x_774_; 
lean_inc(v___x_747_);
lean_inc(v_a_764_);
v___x_774_ = l_Lean_Elab_WF_mkBinaryUnfoldEq(v_a_764_, v___x_747_, v___y_752_, v___y_753_, v___y_754_, v___y_755_);
if (lean_obj_tag(v___x_774_) == 0)
{
lean_dec_ref_known(v___x_774_, 1);
v_a_758_ = v___x_768_;
goto v___jp_757_;
}
else
{
lean_dec(v___x_747_);
return v___x_774_;
}
}
else
{
v_a_758_ = v___x_768_;
goto v___jp_757_;
}
}
else
{
lean_object* v_a_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_782_; 
lean_dec(v___x_747_);
v_a_775_ = lean_ctor_get(v___x_771_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_771_);
if (v_isSharedCheck_782_ == 0)
{
v___x_777_ = v___x_771_;
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_a_775_);
lean_dec(v___x_771_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_780_; 
if (v_isShared_778_ == 0)
{
v___x_780_ = v___x_777_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_a_775_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
}
else
{
v_a_758_ = v___x_768_;
goto v___jp_757_;
}
}
else
{
v_a_758_ = v___x_768_;
goto v___jp_757_;
}
}
v___jp_757_:
{
size_t v___x_759_; size_t v___x_760_; 
v___x_759_ = ((size_t)1ULL);
v___x_760_ = lean_usize_add(v_i_750_, v___x_759_);
v_i_750_ = v___x_760_;
v_b_751_ = v_a_758_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg___boxed(lean_object* v___x_783_, lean_object* v_as_784_, lean_object* v_sz_785_, lean_object* v_i_786_, lean_object* v_b_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_){
_start:
{
size_t v_sz_boxed_793_; size_t v_i_boxed_794_; lean_object* v_res_795_; 
v_sz_boxed_793_ = lean_unbox_usize(v_sz_785_);
lean_dec(v_sz_785_);
v_i_boxed_794_ = lean_unbox_usize(v_i_786_);
lean_dec(v_i_786_);
v_res_795_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg(v___x_783_, v_as_784_, v_sz_boxed_793_, v_i_boxed_794_, v_b_787_, v___y_788_, v___y_789_, v___y_790_, v___y_791_);
lean_dec(v___y_791_);
lean_dec_ref(v___y_790_);
lean_dec(v___y_789_);
lean_dec_ref(v___y_788_);
lean_dec_ref(v_as_784_);
return v_res_795_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__3(lean_object* v_a_796_, lean_object* v_declName_797_, size_t v___x_798_, lean_object* v___x_799_, lean_object* v_type_800_, lean_object* v_a_801_, lean_object* v_snd_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_){
_start:
{
lean_object* v___x_815_; 
v___x_815_ = l_Lean_Meta_isProp(v_type_800_, v___y_805_, v___y_806_, v___y_807_, v___y_808_);
if (lean_obj_tag(v___x_815_) == 0)
{
lean_object* v_a_816_; uint8_t v___x_817_; 
v_a_816_ = lean_ctor_get(v___x_815_, 0);
lean_inc(v_a_816_);
lean_dec_ref_known(v___x_815_, 1);
v___x_817_ = lean_unbox(v_a_816_);
lean_dec(v_a_816_);
if (v___x_817_ == 0)
{
lean_object* v___x_818_; 
lean_inc(v_declName_797_);
v___x_818_ = l_Lean_Elab_WF_mkUnfoldEq(v_a_801_, v_declName_797_, v_snd_802_, v___y_805_, v___y_806_, v___y_807_, v___y_808_);
if (lean_obj_tag(v___x_818_) == 0)
{
lean_dec_ref_known(v___x_818_, 1);
goto v___jp_810_;
}
else
{
lean_dec(v_declName_797_);
lean_dec_ref(v_a_796_);
return v___x_818_;
}
}
else
{
lean_dec_ref(v_snd_802_);
lean_dec_ref(v_a_801_);
goto v___jp_810_;
}
}
else
{
lean_object* v_a_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_826_; 
lean_dec_ref(v_snd_802_);
lean_dec_ref(v_a_801_);
lean_dec(v_declName_797_);
lean_dec_ref(v_a_796_);
v_a_819_ = lean_ctor_get(v___x_815_, 0);
v_isSharedCheck_826_ = !lean_is_exclusive(v___x_815_);
if (v_isSharedCheck_826_ == 0)
{
v___x_821_ = v___x_815_;
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_a_819_);
lean_dec(v___x_815_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
lean_object* v___x_824_; 
if (v_isShared_822_ == 0)
{
v___x_824_ = v___x_821_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v_a_819_);
v___x_824_ = v_reuseFailAlloc_825_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
return v___x_824_;
}
}
}
v___jp_810_:
{
size_t v_sz_811_; lean_object* v___x_812_; 
v_sz_811_ = lean_array_size(v_a_796_);
lean_inc(v_declName_797_);
v___x_812_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg(v_declName_797_, v_a_796_, v_sz_811_, v___x_798_, v___x_799_, v___y_805_, v___y_806_, v___y_807_, v___y_808_);
if (lean_obj_tag(v___x_812_) == 0)
{
lean_object* v___x_813_; 
lean_dec_ref_known(v___x_812_, 1);
v___x_813_ = l_Lean_enableRealizationsForConst(v_declName_797_, v___y_807_, v___y_808_);
if (lean_obj_tag(v___x_813_) == 0)
{
lean_object* v___x_814_; 
lean_dec_ref_known(v___x_813_, 1);
v___x_814_ = l_Lean_Elab_Mutual_addPreDefAttributes(v_a_796_, v___y_803_, v___y_804_, v___y_805_, v___y_806_, v___y_807_, v___y_808_);
return v___x_814_;
}
else
{
lean_dec_ref(v_a_796_);
return v___x_813_;
}
}
else
{
lean_dec(v_declName_797_);
lean_dec_ref(v_a_796_);
return v___x_812_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__3___boxed(lean_object* v_a_827_, lean_object* v_declName_828_, lean_object* v___x_829_, lean_object* v___x_830_, lean_object* v_type_831_, lean_object* v_a_832_, lean_object* v_snd_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_){
_start:
{
size_t v___x_51129__boxed_841_; lean_object* v_res_842_; 
v___x_51129__boxed_841_ = lean_unbox_usize(v___x_829_);
lean_dec(v___x_829_);
v_res_842_ = l_Lean_Elab_wfRecursion___lam__3(v_a_827_, v_declName_828_, v___x_51129__boxed_841_, v___x_830_, v_type_831_, v_a_832_, v_snd_833_, v___y_834_, v___y_835_, v___y_836_, v___y_837_, v___y_838_, v___y_839_);
lean_dec(v___y_839_);
lean_dec_ref(v___y_838_);
lean_dec(v___y_837_);
lean_dec_ref(v___y_836_);
lean_dec(v___y_835_);
lean_dec_ref(v___y_834_);
return v_res_842_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0(uint8_t v_suppressElabErrors_850_, uint8_t v___y_851_, lean_object* v_x_852_){
_start:
{
if (lean_obj_tag(v_x_852_) == 1)
{
lean_object* v_pre_853_; 
v_pre_853_ = lean_ctor_get(v_x_852_, 0);
switch(lean_obj_tag(v_pre_853_))
{
case 1:
{
lean_object* v_pre_854_; 
v_pre_854_ = lean_ctor_get(v_pre_853_, 0);
switch(lean_obj_tag(v_pre_854_))
{
case 0:
{
lean_object* v_str_855_; lean_object* v_str_856_; lean_object* v___x_857_; uint8_t v___x_858_; 
v_str_855_ = lean_ctor_get(v_x_852_, 1);
v_str_856_ = lean_ctor_get(v_pre_853_, 1);
v___x_857_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0));
v___x_858_ = lean_string_dec_eq(v_str_856_, v___x_857_);
if (v___x_858_ == 0)
{
lean_object* v___x_859_; uint8_t v___x_860_; 
v___x_859_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__1));
v___x_860_ = lean_string_dec_eq(v_str_856_, v___x_859_);
if (v___x_860_ == 0)
{
return v___x_860_;
}
else
{
lean_object* v___x_861_; uint8_t v___x_862_; 
v___x_861_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__2));
v___x_862_ = lean_string_dec_eq(v_str_855_, v___x_861_);
if (v___x_862_ == 0)
{
return v___x_862_;
}
else
{
return v_suppressElabErrors_850_;
}
}
}
else
{
lean_object* v___x_863_; uint8_t v___x_864_; 
v___x_863_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__3));
v___x_864_ = lean_string_dec_eq(v_str_855_, v___x_863_);
if (v___x_864_ == 0)
{
return v___x_864_;
}
else
{
return v_suppressElabErrors_850_;
}
}
}
case 1:
{
lean_object* v_pre_865_; 
v_pre_865_ = lean_ctor_get(v_pre_854_, 0);
if (lean_obj_tag(v_pre_865_) == 0)
{
lean_object* v_str_866_; lean_object* v_str_867_; lean_object* v_str_868_; lean_object* v___x_869_; uint8_t v___x_870_; 
v_str_866_ = lean_ctor_get(v_x_852_, 1);
v_str_867_ = lean_ctor_get(v_pre_853_, 1);
v_str_868_ = lean_ctor_get(v_pre_854_, 1);
v___x_869_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__4));
v___x_870_ = lean_string_dec_eq(v_str_868_, v___x_869_);
if (v___x_870_ == 0)
{
return v___x_870_;
}
else
{
lean_object* v___x_871_; uint8_t v___x_872_; 
v___x_871_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__5));
v___x_872_ = lean_string_dec_eq(v_str_867_, v___x_871_);
if (v___x_872_ == 0)
{
return v___x_872_;
}
else
{
lean_object* v___x_873_; uint8_t v___x_874_; 
v___x_873_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__6));
v___x_874_ = lean_string_dec_eq(v_str_866_, v___x_873_);
if (v___x_874_ == 0)
{
return v___x_874_;
}
else
{
return v_suppressElabErrors_850_;
}
}
}
}
else
{
return v___y_851_;
}
}
default: 
{
return v___y_851_;
}
}
}
case 0:
{
lean_object* v_str_875_; lean_object* v___x_876_; uint8_t v___x_877_; 
v_str_875_ = lean_ctor_get(v_x_852_, 1);
v___x_876_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Elab_wfRecursion_spec__19___closed__0));
v___x_877_ = lean_string_dec_eq(v_str_875_, v___x_876_);
if (v___x_877_ == 0)
{
return v___x_877_;
}
else
{
return v_suppressElabErrors_850_;
}
}
default: 
{
return v___y_851_;
}
}
}
else
{
return v___y_851_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___boxed(lean_object* v_suppressElabErrors_878_, lean_object* v___y_879_, lean_object* v_x_880_){
_start:
{
uint8_t v_suppressElabErrors_boxed_881_; uint8_t v___y_51217__boxed_882_; uint8_t v_res_883_; lean_object* v_r_884_; 
v_suppressElabErrors_boxed_881_ = lean_unbox(v_suppressElabErrors_878_);
v___y_51217__boxed_882_ = lean_unbox(v___y_879_);
v_res_883_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0(v_suppressElabErrors_boxed_881_, v___y_51217__boxed_882_, v_x_880_);
lean_dec(v_x_880_);
v_r_884_ = lean_box(v_res_883_);
return v_r_884_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg(lean_object* v_ref_886_, lean_object* v_msgData_887_, uint8_t v_severity_888_, uint8_t v_isSilent_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_){
_start:
{
lean_object* v___y_896_; uint8_t v___y_897_; lean_object* v___y_898_; lean_object* v___y_899_; lean_object* v___y_900_; uint8_t v___y_901_; lean_object* v___y_902_; lean_object* v_toCold_903_; lean_object* v___y_904_; lean_object* v___y_933_; lean_object* v___y_934_; uint8_t v___y_935_; lean_object* v___y_936_; lean_object* v___y_937_; uint8_t v___y_938_; uint8_t v___y_939_; lean_object* v___y_940_; lean_object* v___y_960_; lean_object* v___y_961_; uint8_t v___y_962_; uint8_t v___y_963_; lean_object* v___y_964_; uint8_t v___y_965_; lean_object* v___y_966_; uint8_t v___y_970_; uint8_t v___y_971_; uint8_t v___y_972_; uint8_t v___x_983_; uint8_t v___y_985_; uint8_t v___y_986_; uint8_t v___y_987_; uint8_t v___y_989_; uint8_t v___x_997_; 
v___x_983_ = 2;
v___x_997_ = l_Lean_instBEqMessageSeverity_beq(v_severity_888_, v___x_983_);
if (v___x_997_ == 0)
{
v___y_989_ = v___x_997_;
goto v___jp_988_;
}
else
{
uint8_t v___x_998_; 
lean_inc_ref(v_msgData_887_);
v___x_998_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_887_);
v___y_989_ = v___x_998_;
goto v___jp_988_;
}
v___jp_895_:
{
lean_object* v_currNamespace_905_; lean_object* v_openDecls_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v_env_911_; lean_object* v_nextMacroScope_912_; lean_object* v_ngen_913_; lean_object* v_auxDeclNGen_914_; lean_object* v_traceState_915_; lean_object* v_cache_916_; lean_object* v_recordedDeps_917_; lean_object* v_messages_918_; lean_object* v_infoState_919_; lean_object* v_snapshotTasks_920_; lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_931_; 
v_currNamespace_905_ = lean_ctor_get(v_toCold_903_, 4);
v_openDecls_906_ = lean_ctor_get(v_toCold_903_, 5);
lean_inc(v_openDecls_906_);
lean_inc(v_currNamespace_905_);
v___x_907_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_907_, 0, v_currNamespace_905_);
lean_ctor_set(v___x_907_, 1, v_openDecls_906_);
v___x_908_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_908_, 0, v___x_907_);
lean_ctor_set(v___x_908_, 1, v___y_898_);
lean_inc_ref(v___y_900_);
lean_inc_ref(v___y_902_);
v___x_909_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_909_, 0, v___y_902_);
lean_ctor_set(v___x_909_, 1, v___y_899_);
lean_ctor_set(v___x_909_, 2, v___y_896_);
lean_ctor_set(v___x_909_, 3, v___y_900_);
lean_ctor_set(v___x_909_, 4, v___x_908_);
lean_ctor_set_uint8(v___x_909_, sizeof(void*)*5, v___y_901_);
lean_ctor_set_uint8(v___x_909_, sizeof(void*)*5 + 1, v___y_897_);
lean_ctor_set_uint8(v___x_909_, sizeof(void*)*5 + 2, v_isSilent_889_);
v___x_910_ = lean_st_ref_take(v___y_904_);
v_env_911_ = lean_ctor_get(v___x_910_, 0);
v_nextMacroScope_912_ = lean_ctor_get(v___x_910_, 1);
v_ngen_913_ = lean_ctor_get(v___x_910_, 2);
v_auxDeclNGen_914_ = lean_ctor_get(v___x_910_, 3);
v_traceState_915_ = lean_ctor_get(v___x_910_, 4);
v_cache_916_ = lean_ctor_get(v___x_910_, 5);
v_recordedDeps_917_ = lean_ctor_get(v___x_910_, 6);
v_messages_918_ = lean_ctor_get(v___x_910_, 7);
v_infoState_919_ = lean_ctor_get(v___x_910_, 8);
v_snapshotTasks_920_ = lean_ctor_get(v___x_910_, 9);
v_isSharedCheck_931_ = !lean_is_exclusive(v___x_910_);
if (v_isSharedCheck_931_ == 0)
{
v___x_922_ = v___x_910_;
v_isShared_923_ = v_isSharedCheck_931_;
goto v_resetjp_921_;
}
else
{
lean_inc(v_snapshotTasks_920_);
lean_inc(v_infoState_919_);
lean_inc(v_messages_918_);
lean_inc(v_recordedDeps_917_);
lean_inc(v_cache_916_);
lean_inc(v_traceState_915_);
lean_inc(v_auxDeclNGen_914_);
lean_inc(v_ngen_913_);
lean_inc(v_nextMacroScope_912_);
lean_inc(v_env_911_);
lean_dec(v___x_910_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_931_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_927_; 
v___x_924_ = lean_box(0);
v___x_925_ = l_Lean_MessageLog_add(v___x_909_, v_messages_918_);
if (v_isShared_923_ == 0)
{
lean_ctor_set(v___x_922_, 7, v___x_925_);
v___x_927_ = v___x_922_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_env_911_);
lean_ctor_set(v_reuseFailAlloc_930_, 1, v_nextMacroScope_912_);
lean_ctor_set(v_reuseFailAlloc_930_, 2, v_ngen_913_);
lean_ctor_set(v_reuseFailAlloc_930_, 3, v_auxDeclNGen_914_);
lean_ctor_set(v_reuseFailAlloc_930_, 4, v_traceState_915_);
lean_ctor_set(v_reuseFailAlloc_930_, 5, v_cache_916_);
lean_ctor_set(v_reuseFailAlloc_930_, 6, v_recordedDeps_917_);
lean_ctor_set(v_reuseFailAlloc_930_, 7, v___x_925_);
lean_ctor_set(v_reuseFailAlloc_930_, 8, v_infoState_919_);
lean_ctor_set(v_reuseFailAlloc_930_, 9, v_snapshotTasks_920_);
v___x_927_ = v_reuseFailAlloc_930_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
lean_object* v___x_928_; lean_object* v___x_929_; 
v___x_928_ = lean_st_ref_put(v___y_904_, v___x_927_);
v___x_929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_929_, 0, v___x_924_);
return v___x_929_;
}
}
}
v___jp_932_:
{
lean_object* v_fileName_941_; lean_object* v_fileMap_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v_a_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_958_; 
v_fileName_941_ = lean_ctor_get(v___y_936_, 0);
v_fileMap_942_ = lean_ctor_get(v___y_936_, 1);
v___x_943_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_887_);
v___x_944_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(v___x_943_, v___y_890_, v___y_891_, v___y_892_, v___y_893_);
v_a_945_ = lean_ctor_get(v___x_944_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v___x_944_);
if (v_isSharedCheck_958_ == 0)
{
v___x_947_ = v___x_944_;
v_isShared_948_ = v_isSharedCheck_958_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_a_945_);
lean_dec(v___x_944_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_958_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; 
lean_inc_ref_n(v_fileMap_942_, 2);
v___x_949_ = l_Lean_FileMap_toPosition(v_fileMap_942_, v___y_937_);
lean_dec(v___y_937_);
v___x_950_ = l_Lean_FileMap_toPosition(v_fileMap_942_, v___y_940_);
lean_dec(v___y_940_);
v___x_951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_951_, 0, v___x_950_);
v___x_952_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___closed__0));
if (v___y_938_ == 0)
{
lean_del_object(v___x_947_);
lean_dec_ref(v___y_934_);
v___y_896_ = v___x_951_;
v___y_897_ = v___y_935_;
v___y_898_ = v_a_945_;
v___y_899_ = v___x_949_;
v___y_900_ = v___x_952_;
v___y_901_ = v___y_939_;
v___y_902_ = v_fileName_941_;
v_toCold_903_ = v___y_933_;
v___y_904_ = v___y_893_;
goto v___jp_895_;
}
else
{
uint8_t v___x_953_; 
lean_inc(v_a_945_);
v___x_953_ = l_Lean_MessageData_hasTag(v___y_934_, v_a_945_);
if (v___x_953_ == 0)
{
lean_object* v___x_954_; lean_object* v___x_956_; 
lean_dec_ref_known(v___x_951_, 1);
lean_dec_ref(v___x_949_);
lean_dec(v_a_945_);
v___x_954_ = lean_box(0);
if (v_isShared_948_ == 0)
{
lean_ctor_set(v___x_947_, 0, v___x_954_);
v___x_956_ = v___x_947_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v___x_954_);
v___x_956_ = v_reuseFailAlloc_957_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
return v___x_956_;
}
}
else
{
lean_del_object(v___x_947_);
v___y_896_ = v___x_951_;
v___y_897_ = v___y_935_;
v___y_898_ = v_a_945_;
v___y_899_ = v___x_949_;
v___y_900_ = v___x_952_;
v___y_901_ = v___y_939_;
v___y_902_ = v_fileName_941_;
v_toCold_903_ = v___y_933_;
v___y_904_ = v___y_893_;
goto v___jp_895_;
}
}
}
}
v___jp_959_:
{
lean_object* v___x_967_; 
v___x_967_ = l_Lean_Syntax_getTailPos_x3f(v___y_964_, v___y_965_);
lean_dec(v___y_964_);
if (lean_obj_tag(v___x_967_) == 0)
{
lean_inc(v___y_966_);
v___y_933_ = v___y_960_;
v___y_934_ = v___y_961_;
v___y_935_ = v___y_963_;
v___y_936_ = v___y_960_;
v___y_937_ = v___y_966_;
v___y_938_ = v___y_962_;
v___y_939_ = v___y_965_;
v___y_940_ = v___y_966_;
goto v___jp_932_;
}
else
{
lean_object* v_val_968_; 
v_val_968_ = lean_ctor_get(v___x_967_, 0);
lean_inc(v_val_968_);
lean_dec_ref_known(v___x_967_, 1);
v___y_933_ = v___y_960_;
v___y_934_ = v___y_961_;
v___y_935_ = v___y_963_;
v___y_936_ = v___y_960_;
v___y_937_ = v___y_966_;
v___y_938_ = v___y_962_;
v___y_939_ = v___y_965_;
v___y_940_ = v_val_968_;
goto v___jp_932_;
}
}
v___jp_969_:
{
lean_object* v_toCold_973_; lean_object* v_ref_974_; uint8_t v_suppressElabErrors_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___f_978_; lean_object* v_ref_979_; lean_object* v___x_980_; 
v_toCold_973_ = lean_ctor_get(v___y_892_, 0);
v_ref_974_ = lean_ctor_get(v___y_892_, 2);
v_suppressElabErrors_975_ = lean_ctor_get_uint8(v___y_892_, sizeof(void*)*3 + 2);
v___x_976_ = lean_box(v_suppressElabErrors_975_);
v___x_977_ = lean_box(v___y_970_);
v___f_978_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_978_, 0, v___x_976_);
lean_closure_set(v___f_978_, 1, v___x_977_);
v_ref_979_ = l_Lean_replaceRef(v_ref_886_, v_ref_974_);
v___x_980_ = l_Lean_Syntax_getPos_x3f(v_ref_979_, v___y_971_);
if (lean_obj_tag(v___x_980_) == 0)
{
lean_object* v___x_981_; 
v___x_981_ = lean_unsigned_to_nat(0u);
v___y_960_ = v_toCold_973_;
v___y_961_ = v___f_978_;
v___y_962_ = v_suppressElabErrors_975_;
v___y_963_ = v___y_972_;
v___y_964_ = v_ref_979_;
v___y_965_ = v___y_971_;
v___y_966_ = v___x_981_;
goto v___jp_959_;
}
else
{
lean_object* v_val_982_; 
v_val_982_ = lean_ctor_get(v___x_980_, 0);
lean_inc(v_val_982_);
lean_dec_ref_known(v___x_980_, 1);
v___y_960_ = v_toCold_973_;
v___y_961_ = v___f_978_;
v___y_962_ = v_suppressElabErrors_975_;
v___y_963_ = v___y_972_;
v___y_964_ = v_ref_979_;
v___y_965_ = v___y_971_;
v___y_966_ = v_val_982_;
goto v___jp_959_;
}
}
v___jp_984_:
{
if (v___y_987_ == 0)
{
v___y_970_ = v___y_985_;
v___y_971_ = v___y_986_;
v___y_972_ = v_severity_888_;
goto v___jp_969_;
}
else
{
v___y_970_ = v___y_985_;
v___y_971_ = v___y_986_;
v___y_972_ = v___x_983_;
goto v___jp_969_;
}
}
v___jp_988_:
{
if (v___y_989_ == 0)
{
uint8_t v___x_990_; uint8_t v___x_991_; 
v___x_990_ = 1;
v___x_991_ = l_Lean_instBEqMessageSeverity_beq(v_severity_888_, v___x_990_);
if (v___x_991_ == 0)
{
v___y_985_ = v___y_989_;
v___y_986_ = v___y_989_;
v___y_987_ = v___x_991_;
goto v___jp_984_;
}
else
{
lean_object* v___x_992_; lean_object* v___x_993_; uint8_t v___x_994_; 
v___x_992_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_892_);
v___x_993_ = l_Lean_warningAsError;
v___x_994_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__6(v___x_992_, v___x_993_);
lean_dec_ref(v___x_992_);
v___y_985_ = v___y_989_;
v___y_986_ = v___y_989_;
v___y_987_ = v___x_994_;
goto v___jp_984_;
}
}
else
{
lean_object* v___x_995_; lean_object* v___x_996_; 
lean_dec_ref(v_msgData_887_);
v___x_995_ = lean_box(0);
v___x_996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_996_, 0, v___x_995_);
return v___x_996_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___boxed(lean_object* v_ref_999_, lean_object* v_msgData_1000_, lean_object* v_severity_1001_, lean_object* v_isSilent_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_){
_start:
{
uint8_t v_severity_boxed_1008_; uint8_t v_isSilent_boxed_1009_; lean_object* v_res_1010_; 
v_severity_boxed_1008_ = lean_unbox(v_severity_1001_);
v_isSilent_boxed_1009_ = lean_unbox(v_isSilent_1002_);
v_res_1010_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg(v_ref_999_, v_msgData_1000_, v_severity_boxed_1008_, v_isSilent_boxed_1009_, v___y_1003_, v___y_1004_, v___y_1005_, v___y_1006_);
lean_dec(v___y_1006_);
lean_dec_ref(v___y_1005_);
lean_dec(v___y_1004_);
lean_dec_ref(v___y_1003_);
lean_dec(v_ref_999_);
return v_res_1010_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11(lean_object* v_ref_1011_, lean_object* v_msgData_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_){
_start:
{
uint8_t v___x_1020_; uint8_t v___x_1021_; lean_object* v___x_1022_; 
v___x_1020_ = 1;
v___x_1021_ = 0;
v___x_1022_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg(v_ref_1011_, v_msgData_1012_, v___x_1020_, v___x_1021_, v___y_1015_, v___y_1016_, v___y_1017_, v___y_1018_);
return v___x_1022_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11___boxed(lean_object* v_ref_1023_, lean_object* v_msgData_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_){
_start:
{
lean_object* v_res_1032_; 
v_res_1032_ = l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11(v_ref_1023_, v_msgData_1024_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
lean_dec(v___y_1030_);
lean_dec_ref(v___y_1029_);
lean_dec(v___y_1028_);
lean_dec_ref(v___y_1027_);
lean_dec(v___y_1026_);
lean_dec_ref(v___y_1025_);
lean_dec(v_ref_1023_);
return v_res_1032_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12(lean_object* v___x_1041_, lean_object* v_as_1042_, size_t v_i_1043_, size_t v_stop_1044_, lean_object* v_b_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_){
_start:
{
lean_object* v_a_1054_; uint8_t v___x_1058_; 
v___x_1058_ = lean_usize_dec_eq(v_i_1043_, v_stop_1044_);
if (v___x_1058_ == 0)
{
lean_object* v___x_1059_; lean_object* v_name_1060_; lean_object* v_stx_1061_; uint8_t v___y_1063_; lean_object* v___x_1073_; uint8_t v___x_1074_; 
v___x_1059_ = lean_array_uget_borrowed(v_as_1042_, v_i_1043_);
v_name_1060_ = lean_ctor_get(v___x_1059_, 0);
v_stx_1061_ = lean_ctor_get(v___x_1059_, 1);
v___x_1073_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__3));
v___x_1074_ = lean_name_eq(v_name_1060_, v___x_1073_);
if (v___x_1074_ == 0)
{
lean_object* v___x_1075_; uint8_t v___x_1076_; 
v___x_1075_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__5));
v___x_1076_ = lean_name_eq(v_name_1060_, v___x_1075_);
if (v___x_1076_ == 0)
{
lean_object* v___x_1077_; 
v___x_1077_ = lean_box(0);
v_a_1054_ = v___x_1077_;
goto v___jp_1053_;
}
else
{
v___y_1063_ = v___x_1076_;
goto v___jp_1062_;
}
}
else
{
lean_object* v___x_1078_; uint8_t v___x_1079_; 
v___x_1078_ = lean_unsigned_to_nat(0u);
v___x_1079_ = lean_nat_dec_lt(v___x_1078_, v___x_1041_);
v___y_1063_ = v___x_1079_;
goto v___jp_1062_;
}
v___jp_1062_:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; 
v___x_1064_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__0));
lean_inc(v_name_1060_);
v___x_1065_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_1060_, v___y_1063_);
v___x_1066_ = lean_string_append(v___x_1064_, v___x_1065_);
lean_dec_ref(v___x_1065_);
v___x_1067_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__1));
v___x_1068_ = lean_string_append(v___x_1066_, v___x_1067_);
v___x_1069_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1069_, 0, v___x_1068_);
v___x_1070_ = l_Lean_MessageData_ofFormat(v___x_1069_);
v___x_1071_ = l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11(v_stx_1061_, v___x_1070_, v___y_1046_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_, v___y_1051_);
if (lean_obj_tag(v___x_1071_) == 0)
{
lean_object* v_a_1072_; 
v_a_1072_ = lean_ctor_get(v___x_1071_, 0);
lean_inc(v_a_1072_);
lean_dec_ref_known(v___x_1071_, 1);
v_a_1054_ = v_a_1072_;
goto v___jp_1053_;
}
else
{
return v___x_1071_;
}
}
}
else
{
lean_object* v___x_1080_; 
v___x_1080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1080_, 0, v_b_1045_);
return v___x_1080_;
}
v___jp_1053_:
{
size_t v___x_1055_; size_t v___x_1056_; 
v___x_1055_ = ((size_t)1ULL);
v___x_1056_ = lean_usize_add(v_i_1043_, v___x_1055_);
v_i_1043_ = v___x_1056_;
v_b_1045_ = v_a_1054_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___boxed(lean_object* v___x_1081_, lean_object* v_as_1082_, lean_object* v_i_1083_, lean_object* v_stop_1084_, lean_object* v_b_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_){
_start:
{
size_t v_i_boxed_1093_; size_t v_stop_boxed_1094_; lean_object* v_res_1095_; 
v_i_boxed_1093_ = lean_unbox_usize(v_i_1083_);
lean_dec(v_i_1083_);
v_stop_boxed_1094_ = lean_unbox_usize(v_stop_1084_);
lean_dec(v_stop_1084_);
v_res_1095_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12(v___x_1081_, v_as_1082_, v_i_boxed_1093_, v_stop_boxed_1094_, v_b_1085_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_);
lean_dec(v___y_1091_);
lean_dec_ref(v___y_1090_);
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec(v___y_1087_);
lean_dec_ref(v___y_1086_);
lean_dec_ref(v_as_1082_);
lean_dec(v___x_1081_);
return v_res_1095_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__13(lean_object* v___x_1096_, lean_object* v_as_1097_, size_t v_i_1098_, size_t v_stop_1099_, lean_object* v_b_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_){
_start:
{
lean_object* v_a_1109_; lean_object* v___y_1114_; uint8_t v___x_1116_; 
v___x_1116_ = lean_usize_dec_eq(v_i_1098_, v_stop_1099_);
if (v___x_1116_ == 0)
{
lean_object* v___x_1117_; lean_object* v_modifiers_1118_; lean_object* v_attrs_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; uint8_t v___x_1123_; 
v___x_1117_ = lean_array_uget_borrowed(v_as_1097_, v_i_1098_);
v_modifiers_1118_ = lean_ctor_get(v___x_1117_, 2);
v_attrs_1119_ = lean_ctor_get(v_modifiers_1118_, 2);
v___x_1120_ = lean_unsigned_to_nat(0u);
v___x_1121_ = lean_array_get_size(v_attrs_1119_);
v___x_1122_ = lean_box(0);
v___x_1123_ = lean_nat_dec_lt(v___x_1120_, v___x_1121_);
if (v___x_1123_ == 0)
{
v_a_1109_ = v___x_1122_;
goto v___jp_1108_;
}
else
{
uint8_t v___x_1124_; 
v___x_1124_ = lean_nat_dec_le(v___x_1121_, v___x_1121_);
if (v___x_1124_ == 0)
{
if (v___x_1123_ == 0)
{
v_a_1109_ = v___x_1122_;
goto v___jp_1108_;
}
else
{
size_t v___x_1125_; size_t v___x_1126_; lean_object* v___x_1127_; 
v___x_1125_ = ((size_t)0ULL);
v___x_1126_ = lean_usize_of_nat(v___x_1121_);
v___x_1127_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12(v___x_1096_, v_attrs_1119_, v___x_1125_, v___x_1126_, v___x_1122_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_);
v___y_1114_ = v___x_1127_;
goto v___jp_1113_;
}
}
else
{
size_t v___x_1128_; size_t v___x_1129_; lean_object* v___x_1130_; 
v___x_1128_ = ((size_t)0ULL);
v___x_1129_ = lean_usize_of_nat(v___x_1121_);
v___x_1130_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12(v___x_1096_, v_attrs_1119_, v___x_1128_, v___x_1129_, v___x_1122_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_);
v___y_1114_ = v___x_1130_;
goto v___jp_1113_;
}
}
}
else
{
lean_object* v___x_1131_; 
v___x_1131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1131_, 0, v_b_1100_);
return v___x_1131_;
}
v___jp_1108_:
{
size_t v___x_1110_; size_t v___x_1111_; 
v___x_1110_ = ((size_t)1ULL);
v___x_1111_ = lean_usize_add(v_i_1098_, v___x_1110_);
v_i_1098_ = v___x_1111_;
v_b_1100_ = v_a_1109_;
goto _start;
}
v___jp_1113_:
{
if (lean_obj_tag(v___y_1114_) == 0)
{
lean_object* v_a_1115_; 
v_a_1115_ = lean_ctor_get(v___y_1114_, 0);
lean_inc(v_a_1115_);
lean_dec_ref_known(v___y_1114_, 1);
v_a_1109_ = v_a_1115_;
goto v___jp_1108_;
}
else
{
return v___y_1114_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__13___boxed(lean_object* v___x_1132_, lean_object* v_as_1133_, lean_object* v_i_1134_, lean_object* v_stop_1135_, lean_object* v_b_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_){
_start:
{
size_t v_i_boxed_1144_; size_t v_stop_boxed_1145_; lean_object* v_res_1146_; 
v_i_boxed_1144_ = lean_unbox_usize(v_i_1134_);
lean_dec(v_i_1134_);
v_stop_boxed_1145_ = lean_unbox_usize(v_stop_1135_);
lean_dec(v_stop_1135_);
v_res_1146_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__13(v___x_1132_, v_as_1133_, v_i_boxed_1144_, v_stop_boxed_1145_, v_b_1136_, v___y_1137_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_, v___y_1142_);
lean_dec(v___y_1142_);
lean_dec_ref(v___y_1141_);
lean_dec(v___y_1140_);
lean_dec_ref(v___y_1139_);
lean_dec(v___y_1138_);
lean_dec_ref(v___y_1137_);
lean_dec_ref(v_as_1133_);
lean_dec(v___x_1132_);
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__10(size_t v_sz_1147_, size_t v_i_1148_, lean_object* v_bs_1149_){
_start:
{
uint8_t v___x_1150_; 
v___x_1150_ = lean_usize_dec_lt(v_i_1148_, v_sz_1147_);
if (v___x_1150_ == 0)
{
return v_bs_1149_;
}
else
{
lean_object* v_v_1151_; lean_object* v_termination_1152_; lean_object* v_decreasingBy_x3f_1153_; lean_object* v___x_1154_; lean_object* v_bs_x27_1155_; size_t v___x_1156_; size_t v___x_1157_; lean_object* v___x_1158_; 
v_v_1151_ = lean_array_uget_borrowed(v_bs_1149_, v_i_1148_);
v_termination_1152_ = lean_ctor_get(v_v_1151_, 8);
v_decreasingBy_x3f_1153_ = lean_ctor_get(v_termination_1152_, 4);
lean_inc(v_decreasingBy_x3f_1153_);
v___x_1154_ = lean_unsigned_to_nat(0u);
v_bs_x27_1155_ = lean_array_uset(v_bs_1149_, v_i_1148_, v___x_1154_);
v___x_1156_ = ((size_t)1ULL);
v___x_1157_ = lean_usize_add(v_i_1148_, v___x_1156_);
v___x_1158_ = lean_array_uset(v_bs_x27_1155_, v_i_1148_, v_decreasingBy_x3f_1153_);
v_i_1148_ = v___x_1157_;
v_bs_1149_ = v___x_1158_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__10___boxed(lean_object* v_sz_1160_, lean_object* v_i_1161_, lean_object* v_bs_1162_){
_start:
{
size_t v_sz_boxed_1163_; size_t v_i_boxed_1164_; lean_object* v_res_1165_; 
v_sz_boxed_1163_ = lean_unbox_usize(v_sz_1160_);
lean_dec(v_sz_1160_);
v_i_boxed_1164_ = lean_unbox_usize(v_i_1161_);
lean_dec(v_i_1161_);
v_res_1165_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__10(v_sz_boxed_1163_, v_i_boxed_1164_, v_bs_1162_);
return v_res_1165_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__0(void){
_start:
{
lean_object* v___x_1166_; double v___x_1167_; 
v___x_1166_ = lean_unsigned_to_nat(0u);
v___x_1167_ = lean_float_of_nat(v___x_1166_);
return v___x_1167_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(lean_object* v_cls_1170_, lean_object* v_msg_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_){
_start:
{
lean_object* v_ref_1177_; lean_object* v___x_1178_; lean_object* v_a_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1224_; 
v_ref_1177_ = lean_ctor_get(v___y_1174_, 2);
v___x_1178_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(v_msg_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_);
v_a_1179_ = lean_ctor_get(v___x_1178_, 0);
v_isSharedCheck_1224_ = !lean_is_exclusive(v___x_1178_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1181_ = v___x_1178_;
v_isShared_1182_ = v_isSharedCheck_1224_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_a_1179_);
lean_dec(v___x_1178_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1224_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1183_; lean_object* v_traceState_1184_; lean_object* v_env_1185_; lean_object* v_nextMacroScope_1186_; lean_object* v_ngen_1187_; lean_object* v_auxDeclNGen_1188_; lean_object* v_cache_1189_; lean_object* v_recordedDeps_1190_; lean_object* v_messages_1191_; lean_object* v_infoState_1192_; lean_object* v_snapshotTasks_1193_; lean_object* v___x_1195_; uint8_t v_isShared_1196_; uint8_t v_isSharedCheck_1223_; 
v___x_1183_ = lean_st_ref_take(v___y_1175_);
v_traceState_1184_ = lean_ctor_get(v___x_1183_, 4);
v_env_1185_ = lean_ctor_get(v___x_1183_, 0);
v_nextMacroScope_1186_ = lean_ctor_get(v___x_1183_, 1);
v_ngen_1187_ = lean_ctor_get(v___x_1183_, 2);
v_auxDeclNGen_1188_ = lean_ctor_get(v___x_1183_, 3);
v_cache_1189_ = lean_ctor_get(v___x_1183_, 5);
v_recordedDeps_1190_ = lean_ctor_get(v___x_1183_, 6);
v_messages_1191_ = lean_ctor_get(v___x_1183_, 7);
v_infoState_1192_ = lean_ctor_get(v___x_1183_, 8);
v_snapshotTasks_1193_ = lean_ctor_get(v___x_1183_, 9);
v_isSharedCheck_1223_ = !lean_is_exclusive(v___x_1183_);
if (v_isSharedCheck_1223_ == 0)
{
v___x_1195_ = v___x_1183_;
v_isShared_1196_ = v_isSharedCheck_1223_;
goto v_resetjp_1194_;
}
else
{
lean_inc(v_snapshotTasks_1193_);
lean_inc(v_infoState_1192_);
lean_inc(v_messages_1191_);
lean_inc(v_recordedDeps_1190_);
lean_inc(v_cache_1189_);
lean_inc(v_traceState_1184_);
lean_inc(v_auxDeclNGen_1188_);
lean_inc(v_ngen_1187_);
lean_inc(v_nextMacroScope_1186_);
lean_inc(v_env_1185_);
lean_dec(v___x_1183_);
v___x_1195_ = lean_box(0);
v_isShared_1196_ = v_isSharedCheck_1223_;
goto v_resetjp_1194_;
}
v_resetjp_1194_:
{
uint64_t v_tid_1197_; lean_object* v_traces_1198_; lean_object* v___x_1200_; uint8_t v_isShared_1201_; uint8_t v_isSharedCheck_1222_; 
v_tid_1197_ = lean_ctor_get_uint64(v_traceState_1184_, sizeof(void*)*1);
v_traces_1198_ = lean_ctor_get(v_traceState_1184_, 0);
v_isSharedCheck_1222_ = !lean_is_exclusive(v_traceState_1184_);
if (v_isSharedCheck_1222_ == 0)
{
v___x_1200_ = v_traceState_1184_;
v_isShared_1201_ = v_isSharedCheck_1222_;
goto v_resetjp_1199_;
}
else
{
lean_inc(v_traces_1198_);
lean_dec(v_traceState_1184_);
v___x_1200_ = lean_box(0);
v_isShared_1201_ = v_isSharedCheck_1222_;
goto v_resetjp_1199_;
}
v_resetjp_1199_:
{
lean_object* v___x_1202_; lean_object* v___x_1203_; double v___x_1204_; uint8_t v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1213_; 
v___x_1202_ = lean_box(0);
v___x_1203_ = lean_box(0);
v___x_1204_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__0);
v___x_1205_ = 0;
v___x_1206_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___closed__0));
v___x_1207_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1207_, 0, v_cls_1170_);
lean_ctor_set(v___x_1207_, 1, v___x_1203_);
lean_ctor_set(v___x_1207_, 2, v___x_1206_);
lean_ctor_set_float(v___x_1207_, sizeof(void*)*3, v___x_1204_);
lean_ctor_set_float(v___x_1207_, sizeof(void*)*3 + 8, v___x_1204_);
lean_ctor_set_uint8(v___x_1207_, sizeof(void*)*3 + 16, v___x_1205_);
v___x_1208_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__1));
v___x_1209_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1209_, 0, v___x_1207_);
lean_ctor_set(v___x_1209_, 1, v_a_1179_);
lean_ctor_set(v___x_1209_, 2, v___x_1208_);
lean_inc(v_ref_1177_);
v___x_1210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1210_, 0, v_ref_1177_);
lean_ctor_set(v___x_1210_, 1, v___x_1209_);
v___x_1211_ = l_Lean_PersistentArray_push___redArg(v_traces_1198_, v___x_1210_);
if (v_isShared_1201_ == 0)
{
lean_ctor_set(v___x_1200_, 0, v___x_1211_);
v___x_1213_ = v___x_1200_;
goto v_reusejp_1212_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v___x_1211_);
lean_ctor_set_uint64(v_reuseFailAlloc_1221_, sizeof(void*)*1, v_tid_1197_);
v___x_1213_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1212_;
}
v_reusejp_1212_:
{
lean_object* v___x_1215_; 
if (v_isShared_1196_ == 0)
{
lean_ctor_set(v___x_1195_, 4, v___x_1213_);
v___x_1215_ = v___x_1195_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v_env_1185_);
lean_ctor_set(v_reuseFailAlloc_1220_, 1, v_nextMacroScope_1186_);
lean_ctor_set(v_reuseFailAlloc_1220_, 2, v_ngen_1187_);
lean_ctor_set(v_reuseFailAlloc_1220_, 3, v_auxDeclNGen_1188_);
lean_ctor_set(v_reuseFailAlloc_1220_, 4, v___x_1213_);
lean_ctor_set(v_reuseFailAlloc_1220_, 5, v_cache_1189_);
lean_ctor_set(v_reuseFailAlloc_1220_, 6, v_recordedDeps_1190_);
lean_ctor_set(v_reuseFailAlloc_1220_, 7, v_messages_1191_);
lean_ctor_set(v_reuseFailAlloc_1220_, 8, v_infoState_1192_);
lean_ctor_set(v_reuseFailAlloc_1220_, 9, v_snapshotTasks_1193_);
v___x_1215_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
lean_object* v___x_1216_; lean_object* v___x_1218_; 
v___x_1216_ = lean_st_ref_put(v___y_1175_, v___x_1215_);
if (v_isShared_1182_ == 0)
{
lean_ctor_set(v___x_1181_, 0, v___x_1202_);
v___x_1218_ = v___x_1181_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v___x_1202_);
v___x_1218_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
return v___x_1218_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___boxed(lean_object* v_cls_1225_, lean_object* v_msg_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_){
_start:
{
lean_object* v_res_1232_; 
v_res_1232_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(v_cls_1225_, v_msg_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_);
lean_dec(v___y_1230_);
lean_dec_ref(v___y_1229_);
lean_dec(v___y_1228_);
lean_dec_ref(v___y_1227_);
return v_res_1232_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___lam__4___closed__1(void){
_start:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; 
v___x_1234_ = ((lean_object*)(l_Lean_Elab_wfRecursion___lam__4___closed__0));
v___x_1235_ = l_Lean_stringToMessageData(v___x_1234_);
return v___x_1235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__4(lean_object* v_fst_1236_, lean_object* v_snd_1237_, size_t v_sz_1238_, size_t v___x_1239_, lean_object* v_a_1240_, lean_object* v_fixedArgs_1241_, lean_object* v_fst_1242_, lean_object* v___x_1243_, lean_object* v___x_1244_, lean_object* v___x_1245_, lean_object* v_wfRel_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_){
_start:
{
lean_object* v___y_1255_; lean_object* v___y_1256_; lean_object* v___y_1257_; lean_object* v_a_1258_; lean_object* v___y_1269_; lean_object* v___y_1270_; lean_object* v___y_1271_; lean_object* v___y_1272_; lean_object* v___y_1273_; lean_object* v___y_1350_; lean_object* v___y_1351_; lean_object* v___y_1352_; lean_object* v___y_1353_; lean_object* v___y_1354_; lean_object* v___y_1355_; lean_object* v___y_1365_; lean_object* v___y_1366_; lean_object* v___y_1367_; lean_object* v___y_1368_; lean_object* v___y_1369_; lean_object* v___y_1370_; lean_object* v___y_1371_; lean_object* v___y_1381_; lean_object* v___y_1382_; lean_object* v___y_1383_; lean_object* v___y_1384_; lean_object* v___y_1385_; lean_object* v___y_1386_; lean_object* v_toCold_1405_; lean_object* v_options_1406_; uint8_t v_hasTrace_1407_; 
v_toCold_1405_ = lean_ctor_get(v___y_1251_, 0);
v_options_1406_ = lean_ctor_get(v_toCold_1405_, 2);
v_hasTrace_1407_ = lean_ctor_get_uint8(v_options_1406_, sizeof(void*)*1);
if (v_hasTrace_1407_ == 0)
{
lean_dec(v___x_1245_);
v___y_1381_ = v___y_1247_;
v___y_1382_ = v___y_1248_;
v___y_1383_ = v___y_1249_;
v___y_1384_ = v___y_1250_;
v___y_1385_ = v___y_1251_;
v___y_1386_ = v___y_1252_;
goto v___jp_1380_;
}
else
{
lean_object* v_inheritedTraceOptions_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; uint8_t v___x_1411_; 
v_inheritedTraceOptions_1408_ = lean_ctor_get(v_toCold_1405_, 11);
v___x_1409_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Elab_wfRecursion_spec__19___closed__1));
lean_inc(v___x_1245_);
v___x_1410_ = l_Lean_Name_append(v___x_1409_, v___x_1245_);
v___x_1411_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1408_, v_options_1406_, v___x_1410_);
lean_dec(v___x_1410_);
if (v___x_1411_ == 0)
{
lean_dec(v___x_1245_);
v___y_1381_ = v___y_1247_;
v___y_1382_ = v___y_1248_;
v___y_1383_ = v___y_1249_;
v___y_1384_ = v___y_1250_;
v___y_1385_ = v___y_1251_;
v___y_1386_ = v___y_1252_;
goto v___jp_1380_;
}
else
{
lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; 
v___x_1412_ = lean_obj_once(&l_Lean_Elab_wfRecursion___lam__4___closed__1, &l_Lean_Elab_wfRecursion___lam__4___closed__1_once, _init_l_Lean_Elab_wfRecursion___lam__4___closed__1);
lean_inc_ref(v_wfRel_1246_);
v___x_1413_ = l_Lean_MessageData_ofExpr(v_wfRel_1246_);
v___x_1414_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1414_, 0, v___x_1412_);
lean_ctor_set(v___x_1414_, 1, v___x_1413_);
v___x_1415_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(v___x_1245_, v___x_1414_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
if (lean_obj_tag(v___x_1415_) == 0)
{
lean_dec_ref_known(v___x_1415_, 1);
v___y_1381_ = v___y_1247_;
v___y_1382_ = v___y_1248_;
v___y_1383_ = v___y_1249_;
v___y_1384_ = v___y_1250_;
v___y_1385_ = v___y_1251_;
v___y_1386_ = v___y_1252_;
goto v___jp_1380_;
}
else
{
lean_object* v_a_1416_; lean_object* v___x_1418_; uint8_t v_isShared_1419_; uint8_t v_isSharedCheck_1423_; 
lean_dec_ref(v_wfRel_1246_);
lean_dec_ref(v___x_1243_);
lean_dec_ref(v_fst_1242_);
lean_dec_ref(v_fixedArgs_1241_);
lean_dec_ref(v_a_1240_);
lean_dec_ref(v_fst_1236_);
v_a_1416_ = lean_ctor_get(v___x_1415_, 0);
v_isSharedCheck_1423_ = !lean_is_exclusive(v___x_1415_);
if (v_isSharedCheck_1423_ == 0)
{
v___x_1418_ = v___x_1415_;
v_isShared_1419_ = v_isSharedCheck_1423_;
goto v_resetjp_1417_;
}
else
{
lean_inc(v_a_1416_);
lean_dec(v___x_1415_);
v___x_1418_ = lean_box(0);
v_isShared_1419_ = v_isSharedCheck_1423_;
goto v_resetjp_1417_;
}
v_resetjp_1417_:
{
lean_object* v___x_1421_; 
if (v_isShared_1419_ == 0)
{
v___x_1421_ = v___x_1418_;
goto v_reusejp_1420_;
}
else
{
lean_object* v_reuseFailAlloc_1422_; 
v_reuseFailAlloc_1422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1422_, 0, v_a_1416_);
v___x_1421_ = v_reuseFailAlloc_1422_;
goto v_reusejp_1420_;
}
v_reusejp_1420_:
{
return v___x_1421_;
}
}
}
}
}
v___jp_1254_:
{
lean_object* v___x_1259_; lean_object* v___x_1261_; uint8_t v_isShared_1262_; uint8_t v_isSharedCheck_1266_; 
v___x_1259_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v___y_1255_, v___y_1257_, v___y_1256_);
v_isSharedCheck_1266_ = !lean_is_exclusive(v___x_1259_);
if (v_isSharedCheck_1266_ == 0)
{
lean_object* v_unused_1267_; 
v_unused_1267_ = lean_ctor_get(v___x_1259_, 0);
lean_dec(v_unused_1267_);
v___x_1261_ = v___x_1259_;
v_isShared_1262_ = v_isSharedCheck_1266_;
goto v_resetjp_1260_;
}
else
{
lean_dec(v___x_1259_);
v___x_1261_ = lean_box(0);
v_isShared_1262_ = v_isSharedCheck_1266_;
goto v_resetjp_1260_;
}
v_resetjp_1260_:
{
lean_object* v___x_1264_; 
if (v_isShared_1262_ == 0)
{
lean_ctor_set_tag(v___x_1261_, 1);
lean_ctor_set(v___x_1261_, 0, v_a_1258_);
v___x_1264_ = v___x_1261_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v_a_1258_);
v___x_1264_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
return v___x_1264_;
}
}
}
v___jp_1268_:
{
if (lean_obj_tag(v___y_1273_) == 0)
{
lean_object* v_a_1274_; lean_object* v___x_1275_; lean_object* v_env_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; 
v_a_1274_ = lean_ctor_get(v___y_1273_, 0);
lean_inc(v_a_1274_);
lean_dec_ref_known(v___y_1273_, 1);
v___x_1275_ = lean_st_ref_get(v___y_1270_);
v_env_1276_ = lean_ctor_get(v___x_1275_, 0);
lean_inc_ref_n(v_env_1276_, 2);
lean_dec(v___x_1275_);
v___x_1277_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v___y_1269_, v___y_1271_, v___y_1270_);
lean_dec_ref(v___x_1277_);
v___x_1278_ = l_Lean_Meta_unfoldDeclsFrom(v_env_1276_, v_a_1274_, v___y_1272_, v___y_1270_);
if (lean_obj_tag(v___x_1278_) == 0)
{
lean_object* v_a_1279_; lean_object* v___x_1281_; uint8_t v_isShared_1282_; uint8_t v_isSharedCheck_1339_; 
v_a_1279_ = lean_ctor_get(v___x_1278_, 0);
v_isSharedCheck_1339_ = !lean_is_exclusive(v___x_1278_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1281_ = v___x_1278_;
v_isShared_1282_ = v_isSharedCheck_1339_;
goto v_resetjp_1280_;
}
else
{
lean_inc(v_a_1279_);
lean_dec(v___x_1278_);
v___x_1281_ = lean_box(0);
v_isShared_1282_ = v_isSharedCheck_1339_;
goto v_resetjp_1280_;
}
v_resetjp_1280_:
{
lean_object* v___x_1283_; lean_object* v_env_1284_; lean_object* v_nextMacroScope_1285_; lean_object* v_ngen_1286_; lean_object* v_auxDeclNGen_1287_; lean_object* v_traceState_1288_; lean_object* v_recordedDeps_1289_; lean_object* v_messages_1290_; lean_object* v_infoState_1291_; lean_object* v_snapshotTasks_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1337_; 
v___x_1283_ = lean_st_ref_take(v___y_1270_);
v_env_1284_ = lean_ctor_get(v___x_1283_, 0);
v_nextMacroScope_1285_ = lean_ctor_get(v___x_1283_, 1);
v_ngen_1286_ = lean_ctor_get(v___x_1283_, 2);
v_auxDeclNGen_1287_ = lean_ctor_get(v___x_1283_, 3);
v_traceState_1288_ = lean_ctor_get(v___x_1283_, 4);
v_recordedDeps_1289_ = lean_ctor_get(v___x_1283_, 6);
v_messages_1290_ = lean_ctor_get(v___x_1283_, 7);
v_infoState_1291_ = lean_ctor_get(v___x_1283_, 8);
v_snapshotTasks_1292_ = lean_ctor_get(v___x_1283_, 9);
v_isSharedCheck_1337_ = !lean_is_exclusive(v___x_1283_);
if (v_isSharedCheck_1337_ == 0)
{
lean_object* v_unused_1338_; 
v_unused_1338_ = lean_ctor_get(v___x_1283_, 5);
lean_dec(v_unused_1338_);
v___x_1294_ = v___x_1283_;
v_isShared_1295_ = v_isSharedCheck_1337_;
goto v_resetjp_1293_;
}
else
{
lean_inc(v_snapshotTasks_1292_);
lean_inc(v_infoState_1291_);
lean_inc(v_messages_1290_);
lean_inc(v_recordedDeps_1289_);
lean_inc(v_traceState_1288_);
lean_inc(v_auxDeclNGen_1287_);
lean_inc(v_ngen_1286_);
lean_inc(v_nextMacroScope_1285_);
lean_inc(v_env_1284_);
lean_dec(v___x_1283_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1337_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1299_; 
v___x_1296_ = l_Lean_copyExtraModUses(v_env_1276_, v_env_1284_);
v___x_1297_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2);
if (v_isShared_1295_ == 0)
{
lean_ctor_set(v___x_1294_, 5, v___x_1297_);
lean_ctor_set(v___x_1294_, 0, v___x_1296_);
v___x_1299_ = v___x_1294_;
goto v_reusejp_1298_;
}
else
{
lean_object* v_reuseFailAlloc_1336_; 
v_reuseFailAlloc_1336_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1336_, 0, v___x_1296_);
lean_ctor_set(v_reuseFailAlloc_1336_, 1, v_nextMacroScope_1285_);
lean_ctor_set(v_reuseFailAlloc_1336_, 2, v_ngen_1286_);
lean_ctor_set(v_reuseFailAlloc_1336_, 3, v_auxDeclNGen_1287_);
lean_ctor_set(v_reuseFailAlloc_1336_, 4, v_traceState_1288_);
lean_ctor_set(v_reuseFailAlloc_1336_, 5, v___x_1297_);
lean_ctor_set(v_reuseFailAlloc_1336_, 6, v_recordedDeps_1289_);
lean_ctor_set(v_reuseFailAlloc_1336_, 7, v_messages_1290_);
lean_ctor_set(v_reuseFailAlloc_1336_, 8, v_infoState_1291_);
lean_ctor_set(v_reuseFailAlloc_1336_, 9, v_snapshotTasks_1292_);
v___x_1299_ = v_reuseFailAlloc_1336_;
goto v_reusejp_1298_;
}
v_reusejp_1298_:
{
lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v_mctx_1302_; lean_object* v_zetaDeltaFVarIds_1303_; lean_object* v_postponed_1304_; lean_object* v_diag_1305_; lean_object* v___x_1307_; uint8_t v_isShared_1308_; uint8_t v_isSharedCheck_1334_; 
v___x_1300_ = lean_st_ref_put(v___y_1270_, v___x_1299_);
v___x_1301_ = lean_st_ref_take(v___y_1271_);
v_mctx_1302_ = lean_ctor_get(v___x_1301_, 0);
v_zetaDeltaFVarIds_1303_ = lean_ctor_get(v___x_1301_, 2);
v_postponed_1304_ = lean_ctor_get(v___x_1301_, 3);
v_diag_1305_ = lean_ctor_get(v___x_1301_, 4);
v_isSharedCheck_1334_ = !lean_is_exclusive(v___x_1301_);
if (v_isSharedCheck_1334_ == 0)
{
lean_object* v_unused_1335_; 
v_unused_1335_ = lean_ctor_get(v___x_1301_, 1);
lean_dec(v_unused_1335_);
v___x_1307_ = v___x_1301_;
v_isShared_1308_ = v_isSharedCheck_1334_;
goto v_resetjp_1306_;
}
else
{
lean_inc(v_diag_1305_);
lean_inc(v_postponed_1304_);
lean_inc(v_zetaDeltaFVarIds_1303_);
lean_inc(v_mctx_1302_);
lean_dec(v___x_1301_);
v___x_1307_ = lean_box(0);
v_isShared_1308_ = v_isSharedCheck_1334_;
goto v_resetjp_1306_;
}
v_resetjp_1306_:
{
lean_object* v___x_1309_; lean_object* v___x_1311_; 
v___x_1309_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3);
if (v_isShared_1308_ == 0)
{
lean_ctor_set(v___x_1307_, 1, v___x_1309_);
v___x_1311_ = v___x_1307_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1333_; 
v_reuseFailAlloc_1333_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1333_, 0, v_mctx_1302_);
lean_ctor_set(v_reuseFailAlloc_1333_, 1, v___x_1309_);
lean_ctor_set(v_reuseFailAlloc_1333_, 2, v_zetaDeltaFVarIds_1303_);
lean_ctor_set(v_reuseFailAlloc_1333_, 3, v_postponed_1304_);
lean_ctor_set(v_reuseFailAlloc_1333_, 4, v_diag_1305_);
v___x_1311_ = v_reuseFailAlloc_1333_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
lean_object* v___x_1312_; lean_object* v_ref_1313_; uint8_t v_kind_1314_; lean_object* v_levelParams_1315_; lean_object* v_modifiers_1316_; lean_object* v_declName_1317_; lean_object* v_binders_1318_; lean_object* v_numSectionVars_1319_; lean_object* v_type_1320_; lean_object* v_termination_1321_; lean_object* v___x_1323_; uint8_t v_isShared_1324_; uint8_t v_isSharedCheck_1331_; 
v___x_1312_ = lean_st_ref_put(v___y_1271_, v___x_1311_);
v_ref_1313_ = lean_ctor_get(v_fst_1236_, 0);
v_kind_1314_ = lean_ctor_get_uint8(v_fst_1236_, sizeof(void*)*9);
v_levelParams_1315_ = lean_ctor_get(v_fst_1236_, 1);
v_modifiers_1316_ = lean_ctor_get(v_fst_1236_, 2);
v_declName_1317_ = lean_ctor_get(v_fst_1236_, 3);
v_binders_1318_ = lean_ctor_get(v_fst_1236_, 4);
v_numSectionVars_1319_ = lean_ctor_get(v_fst_1236_, 5);
v_type_1320_ = lean_ctor_get(v_fst_1236_, 6);
v_termination_1321_ = lean_ctor_get(v_fst_1236_, 8);
v_isSharedCheck_1331_ = !lean_is_exclusive(v_fst_1236_);
if (v_isSharedCheck_1331_ == 0)
{
lean_object* v_unused_1332_; 
v_unused_1332_ = lean_ctor_get(v_fst_1236_, 7);
lean_dec(v_unused_1332_);
v___x_1323_ = v_fst_1236_;
v_isShared_1324_ = v_isSharedCheck_1331_;
goto v_resetjp_1322_;
}
else
{
lean_inc(v_termination_1321_);
lean_inc(v_type_1320_);
lean_inc(v_numSectionVars_1319_);
lean_inc(v_binders_1318_);
lean_inc(v_declName_1317_);
lean_inc(v_modifiers_1316_);
lean_inc(v_levelParams_1315_);
lean_inc(v_ref_1313_);
lean_dec(v_fst_1236_);
v___x_1323_ = lean_box(0);
v_isShared_1324_ = v_isSharedCheck_1331_;
goto v_resetjp_1322_;
}
v_resetjp_1322_:
{
lean_object* v___x_1326_; 
if (v_isShared_1324_ == 0)
{
lean_ctor_set(v___x_1323_, 7, v_a_1279_);
v___x_1326_ = v___x_1323_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1330_; 
v_reuseFailAlloc_1330_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_1330_, 0, v_ref_1313_);
lean_ctor_set(v_reuseFailAlloc_1330_, 1, v_levelParams_1315_);
lean_ctor_set(v_reuseFailAlloc_1330_, 2, v_modifiers_1316_);
lean_ctor_set(v_reuseFailAlloc_1330_, 3, v_declName_1317_);
lean_ctor_set(v_reuseFailAlloc_1330_, 4, v_binders_1318_);
lean_ctor_set(v_reuseFailAlloc_1330_, 5, v_numSectionVars_1319_);
lean_ctor_set(v_reuseFailAlloc_1330_, 6, v_type_1320_);
lean_ctor_set(v_reuseFailAlloc_1330_, 7, v_a_1279_);
lean_ctor_set(v_reuseFailAlloc_1330_, 8, v_termination_1321_);
lean_ctor_set_uint8(v_reuseFailAlloc_1330_, sizeof(void*)*9, v_kind_1314_);
v___x_1326_ = v_reuseFailAlloc_1330_;
goto v_reusejp_1325_;
}
v_reusejp_1325_:
{
lean_object* v___x_1328_; 
if (v_isShared_1282_ == 0)
{
lean_ctor_set(v___x_1281_, 0, v___x_1326_);
v___x_1328_ = v___x_1281_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v___x_1326_);
v___x_1328_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
return v___x_1328_;
}
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1347_; 
lean_dec_ref(v_env_1276_);
lean_dec_ref(v_fst_1236_);
v_a_1340_ = lean_ctor_get(v___x_1278_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1278_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1342_ = v___x_1278_;
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_a_1340_);
lean_dec(v___x_1278_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___x_1345_; 
if (v_isShared_1343_ == 0)
{
v___x_1345_ = v___x_1342_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v_a_1340_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
return v___x_1345_;
}
}
}
}
else
{
lean_object* v_a_1348_; 
lean_dec_ref(v_fst_1236_);
v_a_1348_ = lean_ctor_get(v___y_1273_, 0);
lean_inc(v_a_1348_);
lean_dec_ref_known(v___y_1273_, 1);
v___y_1255_ = v___y_1269_;
v___y_1256_ = v___y_1270_;
v___y_1257_ = v___y_1271_;
v_a_1258_ = v_a_1348_;
goto v___jp_1254_;
}
}
v___jp_1349_:
{
lean_object* v___x_1356_; lean_object* v_env_1357_; lean_object* v___x_1358_; 
v___x_1356_ = lean_st_ref_get(v___y_1355_);
v_env_1357_ = lean_ctor_get(v___x_1356_, 0);
lean_inc_ref(v_env_1357_);
lean_dec(v___x_1356_);
v___x_1358_ = l_Lean_Elab_addAsAxiom___redArg(v_snd_1237_, v___y_1354_, v___y_1355_);
if (lean_obj_tag(v___x_1358_) == 0)
{
lean_object* v___x_1359_; lean_object* v___x_1360_; 
lean_dec_ref_known(v___x_1358_, 1);
v___x_1359_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__10(v_sz_1238_, v___x_1239_, v_a_1240_);
lean_inc_ref(v_fst_1236_);
v___x_1360_ = l_Lean_Elab_WF_mkFix(v_fst_1236_, v_fixedArgs_1241_, v_fst_1242_, v_wfRel_1246_, v___x_1243_, v___x_1359_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_);
if (lean_obj_tag(v___x_1360_) == 0)
{
lean_object* v_a_1361_; lean_object* v___x_1362_; 
v_a_1361_ = lean_ctor_get(v___x_1360_, 0);
lean_inc(v_a_1361_);
lean_dec_ref_known(v___x_1360_, 1);
v___x_1362_ = l_Lean_Elab_eraseRecAppSyntaxExpr(v_a_1361_, v___y_1354_, v___y_1355_);
v___y_1269_ = v_env_1357_;
v___y_1270_ = v___y_1355_;
v___y_1271_ = v___y_1353_;
v___y_1272_ = v___y_1354_;
v___y_1273_ = v___x_1362_;
goto v___jp_1268_;
}
else
{
v___y_1269_ = v_env_1357_;
v___y_1270_ = v___y_1355_;
v___y_1271_ = v___y_1353_;
v___y_1272_ = v___y_1354_;
v___y_1273_ = v___x_1360_;
goto v___jp_1268_;
}
}
else
{
lean_object* v_a_1363_; 
lean_dec_ref(v_wfRel_1246_);
lean_dec_ref(v___x_1243_);
lean_dec_ref(v_fst_1242_);
lean_dec_ref(v_fixedArgs_1241_);
lean_dec_ref(v_a_1240_);
lean_dec_ref(v_fst_1236_);
v_a_1363_ = lean_ctor_get(v___x_1358_, 0);
lean_inc(v_a_1363_);
lean_dec_ref_known(v___x_1358_, 1);
v___y_1255_ = v_env_1357_;
v___y_1256_ = v___y_1355_;
v___y_1257_ = v___y_1353_;
v_a_1258_ = v_a_1363_;
goto v___jp_1254_;
}
}
v___jp_1364_:
{
if (lean_obj_tag(v___y_1371_) == 0)
{
lean_dec_ref_known(v___y_1371_, 1);
v___y_1350_ = v___y_1365_;
v___y_1351_ = v___y_1368_;
v___y_1352_ = v___y_1369_;
v___y_1353_ = v___y_1367_;
v___y_1354_ = v___y_1366_;
v___y_1355_ = v___y_1370_;
goto v___jp_1349_;
}
else
{
lean_object* v_a_1372_; lean_object* v___x_1374_; uint8_t v_isShared_1375_; uint8_t v_isSharedCheck_1379_; 
lean_dec_ref(v_wfRel_1246_);
lean_dec_ref(v___x_1243_);
lean_dec_ref(v_fst_1242_);
lean_dec_ref(v_fixedArgs_1241_);
lean_dec_ref(v_a_1240_);
lean_dec_ref(v_fst_1236_);
v_a_1372_ = lean_ctor_get(v___y_1371_, 0);
v_isSharedCheck_1379_ = !lean_is_exclusive(v___y_1371_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1374_ = v___y_1371_;
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
else
{
lean_inc(v_a_1372_);
lean_dec(v___y_1371_);
v___x_1374_ = lean_box(0);
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
v_resetjp_1373_:
{
lean_object* v___x_1377_; 
if (v_isShared_1375_ == 0)
{
v___x_1377_ = v___x_1374_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v_a_1372_);
v___x_1377_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
return v___x_1377_;
}
}
}
}
v___jp_1380_:
{
lean_object* v___x_1387_; 
lean_inc_ref(v_wfRel_1246_);
v___x_1387_ = l_Lean_Elab_WF_isNatLtWF(v_wfRel_1246_, v___y_1383_, v___y_1384_, v___y_1385_, v___y_1386_);
if (lean_obj_tag(v___x_1387_) == 0)
{
lean_object* v_a_1388_; 
v_a_1388_ = lean_ctor_get(v___x_1387_, 0);
lean_inc(v_a_1388_);
lean_dec_ref_known(v___x_1387_, 1);
if (lean_obj_tag(v_a_1388_) == 0)
{
lean_object* v___x_1389_; lean_object* v___x_1390_; uint8_t v___x_1391_; 
v___x_1389_ = lean_unsigned_to_nat(0u);
v___x_1390_ = lean_array_get_size(v_a_1240_);
v___x_1391_ = lean_nat_dec_lt(v___x_1389_, v___x_1390_);
if (v___x_1391_ == 0)
{
v___y_1350_ = v___y_1381_;
v___y_1351_ = v___y_1382_;
v___y_1352_ = v___y_1383_;
v___y_1353_ = v___y_1384_;
v___y_1354_ = v___y_1385_;
v___y_1355_ = v___y_1386_;
goto v___jp_1349_;
}
else
{
uint8_t v___x_1392_; 
v___x_1392_ = lean_nat_dec_le(v___x_1390_, v___x_1390_);
if (v___x_1392_ == 0)
{
if (v___x_1391_ == 0)
{
v___y_1350_ = v___y_1381_;
v___y_1351_ = v___y_1382_;
v___y_1352_ = v___y_1383_;
v___y_1353_ = v___y_1384_;
v___y_1354_ = v___y_1385_;
v___y_1355_ = v___y_1386_;
goto v___jp_1349_;
}
else
{
size_t v___x_1393_; lean_object* v___x_1394_; 
v___x_1393_ = lean_usize_of_nat(v___x_1390_);
v___x_1394_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__13(v___x_1390_, v_a_1240_, v___x_1239_, v___x_1393_, v___x_1244_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_, v___y_1386_);
v___y_1365_ = v___y_1381_;
v___y_1366_ = v___y_1385_;
v___y_1367_ = v___y_1384_;
v___y_1368_ = v___y_1382_;
v___y_1369_ = v___y_1383_;
v___y_1370_ = v___y_1386_;
v___y_1371_ = v___x_1394_;
goto v___jp_1364_;
}
}
else
{
size_t v___x_1395_; lean_object* v___x_1396_; 
v___x_1395_ = lean_usize_of_nat(v___x_1390_);
v___x_1396_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__13(v___x_1390_, v_a_1240_, v___x_1239_, v___x_1395_, v___x_1244_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_, v___y_1386_);
v___y_1365_ = v___y_1381_;
v___y_1366_ = v___y_1385_;
v___y_1367_ = v___y_1384_;
v___y_1368_ = v___y_1382_;
v___y_1369_ = v___y_1383_;
v___y_1370_ = v___y_1386_;
v___y_1371_ = v___x_1396_;
goto v___jp_1364_;
}
}
}
else
{
lean_dec_ref_known(v_a_1388_, 1);
v___y_1350_ = v___y_1381_;
v___y_1351_ = v___y_1382_;
v___y_1352_ = v___y_1383_;
v___y_1353_ = v___y_1384_;
v___y_1354_ = v___y_1385_;
v___y_1355_ = v___y_1386_;
goto v___jp_1349_;
}
}
else
{
lean_object* v_a_1397_; lean_object* v___x_1399_; uint8_t v_isShared_1400_; uint8_t v_isSharedCheck_1404_; 
lean_dec_ref(v_wfRel_1246_);
lean_dec_ref(v___x_1243_);
lean_dec_ref(v_fst_1242_);
lean_dec_ref(v_fixedArgs_1241_);
lean_dec_ref(v_a_1240_);
lean_dec_ref(v_fst_1236_);
v_a_1397_ = lean_ctor_get(v___x_1387_, 0);
v_isSharedCheck_1404_ = !lean_is_exclusive(v___x_1387_);
if (v_isSharedCheck_1404_ == 0)
{
v___x_1399_ = v___x_1387_;
v_isShared_1400_ = v_isSharedCheck_1404_;
goto v_resetjp_1398_;
}
else
{
lean_inc(v_a_1397_);
lean_dec(v___x_1387_);
v___x_1399_ = lean_box(0);
v_isShared_1400_ = v_isSharedCheck_1404_;
goto v_resetjp_1398_;
}
v_resetjp_1398_:
{
lean_object* v___x_1402_; 
if (v_isShared_1400_ == 0)
{
v___x_1402_ = v___x_1399_;
goto v_reusejp_1401_;
}
else
{
lean_object* v_reuseFailAlloc_1403_; 
v_reuseFailAlloc_1403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1403_, 0, v_a_1397_);
v___x_1402_ = v_reuseFailAlloc_1403_;
goto v_reusejp_1401_;
}
v_reusejp_1401_:
{
return v___x_1402_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__4___boxed(lean_object** _args){
lean_object* v_fst_1424_ = _args[0];
lean_object* v_snd_1425_ = _args[1];
lean_object* v_sz_1426_ = _args[2];
lean_object* v___x_1427_ = _args[3];
lean_object* v_a_1428_ = _args[4];
lean_object* v_fixedArgs_1429_ = _args[5];
lean_object* v_fst_1430_ = _args[6];
lean_object* v___x_1431_ = _args[7];
lean_object* v___x_1432_ = _args[8];
lean_object* v___x_1433_ = _args[9];
lean_object* v_wfRel_1434_ = _args[10];
lean_object* v___y_1435_ = _args[11];
lean_object* v___y_1436_ = _args[12];
lean_object* v___y_1437_ = _args[13];
lean_object* v___y_1438_ = _args[14];
lean_object* v___y_1439_ = _args[15];
lean_object* v___y_1440_ = _args[16];
lean_object* v___y_1441_ = _args[17];
_start:
{
size_t v_sz_boxed_1442_; size_t v___x_51808__boxed_1443_; lean_object* v_res_1444_; 
v_sz_boxed_1442_ = lean_unbox_usize(v_sz_1426_);
lean_dec(v_sz_1426_);
v___x_51808__boxed_1443_ = lean_unbox_usize(v___x_1427_);
lean_dec(v___x_1427_);
v_res_1444_ = l_Lean_Elab_wfRecursion___lam__4(v_fst_1424_, v_snd_1425_, v_sz_boxed_1442_, v___x_51808__boxed_1443_, v_a_1428_, v_fixedArgs_1429_, v_fst_1430_, v___x_1431_, v___x_1432_, v___x_1433_, v_wfRel_1434_, v___y_1435_, v___y_1436_, v___y_1437_, v___y_1438_, v___y_1439_, v___y_1440_);
lean_dec(v___y_1440_);
lean_dec_ref(v___y_1439_);
lean_dec(v___y_1438_);
lean_dec_ref(v___y_1437_);
lean_dec(v___y_1436_);
lean_dec_ref(v___y_1435_);
lean_dec_ref(v_snd_1425_);
return v_res_1444_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___lam__5___closed__1(void){
_start:
{
lean_object* v___x_1446_; lean_object* v___x_1447_; 
v___x_1446_ = ((lean_object*)(l_Lean_Elab_wfRecursion___lam__5___closed__0));
v___x_1447_ = l_Lean_stringToMessageData(v___x_1446_);
return v___x_1447_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__5(size_t v_sz_1448_, size_t v___x_1449_, lean_object* v_a_1450_, lean_object* v_fst_1451_, lean_object* v_snd_1452_, lean_object* v_fst_1453_, lean_object* v___x_1454_, lean_object* v___x_1455_, lean_object* v_declName_1456_, lean_object* v_fst_1457_, lean_object* v_wf_1458_, lean_object* v_fixedArgs_1459_, lean_object* v_type_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_){
_start:
{
lean_object* v___x_1468_; 
v___x_1468_ = l_Lean_Meta_whnfForall(v_type_1460_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_);
if (lean_obj_tag(v___x_1468_) == 0)
{
lean_object* v_a_1469_; lean_object* v___y_1471_; lean_object* v___y_1472_; lean_object* v___y_1473_; lean_object* v___y_1474_; lean_object* v___y_1475_; lean_object* v___y_1476_; uint8_t v___x_1483_; 
v_a_1469_ = lean_ctor_get(v___x_1468_, 0);
lean_inc(v_a_1469_);
lean_dec_ref_known(v___x_1468_, 1);
v___x_1483_ = l_Lean_Expr_isForall(v_a_1469_);
if (v___x_1483_ == 0)
{
lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v_a_1488_; lean_object* v___x_1490_; uint8_t v_isShared_1491_; uint8_t v_isSharedCheck_1495_; 
lean_dec_ref(v_fixedArgs_1459_);
lean_dec_ref(v_wf_1458_);
lean_dec_ref(v_fst_1457_);
lean_dec(v_declName_1456_);
lean_dec(v___x_1455_);
lean_dec_ref(v_fst_1453_);
lean_dec_ref(v_snd_1452_);
lean_dec_ref(v_fst_1451_);
lean_dec_ref(v_a_1450_);
v___x_1484_ = lean_obj_once(&l_Lean_Elab_wfRecursion___lam__5___closed__1, &l_Lean_Elab_wfRecursion___lam__5___closed__1_once, _init_l_Lean_Elab_wfRecursion___lam__5___closed__1);
v___x_1485_ = l_Lean_MessageData_ofExpr(v_a_1469_);
v___x_1486_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1486_, 0, v___x_1484_);
lean_ctor_set(v___x_1486_, 1, v___x_1485_);
v___x_1487_ = l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(v___x_1486_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_);
v_a_1488_ = lean_ctor_get(v___x_1487_, 0);
v_isSharedCheck_1495_ = !lean_is_exclusive(v___x_1487_);
if (v_isSharedCheck_1495_ == 0)
{
v___x_1490_ = v___x_1487_;
v_isShared_1491_ = v_isSharedCheck_1495_;
goto v_resetjp_1489_;
}
else
{
lean_inc(v_a_1488_);
lean_dec(v___x_1487_);
v___x_1490_ = lean_box(0);
v_isShared_1491_ = v_isSharedCheck_1495_;
goto v_resetjp_1489_;
}
v_resetjp_1489_:
{
lean_object* v___x_1493_; 
if (v_isShared_1491_ == 0)
{
v___x_1493_ = v___x_1490_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v_a_1488_);
v___x_1493_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
return v___x_1493_;
}
}
}
else
{
v___y_1471_ = v___y_1461_;
v___y_1472_ = v___y_1462_;
v___y_1473_ = v___y_1463_;
v___y_1474_ = v___y_1464_;
v___y_1475_ = v___y_1465_;
v___y_1476_ = v___y_1466_;
goto v___jp_1470_;
}
v___jp_1470_:
{
lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___f_1481_; lean_object* v___x_1482_; 
v___x_1477_ = l_Lean_Expr_bindingDomain_x21(v_a_1469_);
lean_dec(v_a_1469_);
lean_inc_ref(v_a_1450_);
v___x_1478_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6(v_sz_1448_, v___x_1449_, v_a_1450_);
v___x_1479_ = lean_box_usize(v_sz_1448_);
v___x_1480_ = lean_box_usize(v___x_1449_);
lean_inc_ref(v___x_1478_);
lean_inc_ref(v_fst_1453_);
lean_inc_ref(v_fixedArgs_1459_);
v___f_1481_ = lean_alloc_closure((void*)(l_Lean_Elab_wfRecursion___lam__4___boxed), 18, 10);
lean_closure_set(v___f_1481_, 0, v_fst_1451_);
lean_closure_set(v___f_1481_, 1, v_snd_1452_);
lean_closure_set(v___f_1481_, 2, v___x_1479_);
lean_closure_set(v___f_1481_, 3, v___x_1480_);
lean_closure_set(v___f_1481_, 4, v_a_1450_);
lean_closure_set(v___f_1481_, 5, v_fixedArgs_1459_);
lean_closure_set(v___f_1481_, 6, v_fst_1453_);
lean_closure_set(v___f_1481_, 7, v___x_1478_);
lean_closure_set(v___f_1481_, 8, v___x_1454_);
lean_closure_set(v___f_1481_, 9, v___x_1455_);
v___x_1482_ = l_Lean_Elab_WF_elabWFRel___redArg(v___x_1478_, v_declName_1456_, v_fst_1457_, v_fixedArgs_1459_, v_fst_1453_, v___x_1477_, v_wf_1458_, v___f_1481_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_, v___y_1476_);
return v___x_1482_;
}
}
else
{
lean_object* v_a_1496_; lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1503_; 
lean_dec_ref(v_fixedArgs_1459_);
lean_dec_ref(v_wf_1458_);
lean_dec_ref(v_fst_1457_);
lean_dec(v_declName_1456_);
lean_dec(v___x_1455_);
lean_dec_ref(v_fst_1453_);
lean_dec_ref(v_snd_1452_);
lean_dec_ref(v_fst_1451_);
lean_dec_ref(v_a_1450_);
v_a_1496_ = lean_ctor_get(v___x_1468_, 0);
v_isSharedCheck_1503_ = !lean_is_exclusive(v___x_1468_);
if (v_isSharedCheck_1503_ == 0)
{
v___x_1498_ = v___x_1468_;
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
else
{
lean_inc(v_a_1496_);
lean_dec(v___x_1468_);
v___x_1498_ = lean_box(0);
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
v_resetjp_1497_:
{
lean_object* v___x_1501_; 
if (v_isShared_1499_ == 0)
{
v___x_1501_ = v___x_1498_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v_a_1496_);
v___x_1501_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
return v___x_1501_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__5___boxed(lean_object** _args){
lean_object* v_sz_1504_ = _args[0];
lean_object* v___x_1505_ = _args[1];
lean_object* v_a_1506_ = _args[2];
lean_object* v_fst_1507_ = _args[3];
lean_object* v_snd_1508_ = _args[4];
lean_object* v_fst_1509_ = _args[5];
lean_object* v___x_1510_ = _args[6];
lean_object* v___x_1511_ = _args[7];
lean_object* v_declName_1512_ = _args[8];
lean_object* v_fst_1513_ = _args[9];
lean_object* v_wf_1514_ = _args[10];
lean_object* v_fixedArgs_1515_ = _args[11];
lean_object* v_type_1516_ = _args[12];
lean_object* v___y_1517_ = _args[13];
lean_object* v___y_1518_ = _args[14];
lean_object* v___y_1519_ = _args[15];
lean_object* v___y_1520_ = _args[16];
lean_object* v___y_1521_ = _args[17];
lean_object* v___y_1522_ = _args[18];
lean_object* v___y_1523_ = _args[19];
_start:
{
size_t v_sz_boxed_1524_; size_t v___x_52153__boxed_1525_; lean_object* v_res_1526_; 
v_sz_boxed_1524_ = lean_unbox_usize(v_sz_1504_);
lean_dec(v_sz_1504_);
v___x_52153__boxed_1525_ = lean_unbox_usize(v___x_1505_);
lean_dec(v___x_1505_);
v_res_1526_ = l_Lean_Elab_wfRecursion___lam__5(v_sz_boxed_1524_, v___x_52153__boxed_1525_, v_a_1506_, v_fst_1507_, v_snd_1508_, v_fst_1509_, v___x_1510_, v___x_1511_, v_declName_1512_, v_fst_1513_, v_wf_1514_, v_fixedArgs_1515_, v_type_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_, v___y_1522_);
lean_dec(v___y_1522_);
lean_dec_ref(v___y_1521_);
lean_dec(v___y_1520_);
lean_dec_ref(v___y_1519_);
lean_dec(v___y_1518_);
lean_dec_ref(v___y_1517_);
return v_res_1526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__6(lean_object* v_a_1527_, lean_object* v_fst_1528_, lean_object* v_fst_1529_, lean_object* v_fst_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_){
_start:
{
lean_object* v___x_1538_; 
v___x_1538_ = l_Lean_Elab_WF_guessLex(v_a_1527_, v_fst_1528_, v_fst_1529_, v_fst_1530_, v___y_1533_, v___y_1534_, v___y_1535_, v___y_1536_);
return v___x_1538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__6___boxed(lean_object* v_a_1539_, lean_object* v_fst_1540_, lean_object* v_fst_1541_, lean_object* v_fst_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_){
_start:
{
lean_object* v_res_1550_; 
v_res_1550_ = l_Lean_Elab_wfRecursion___lam__6(v_a_1539_, v_fst_1540_, v_fst_1541_, v_fst_1542_, v___y_1543_, v___y_1544_, v___y_1545_, v___y_1546_, v___y_1547_, v___y_1548_);
lean_dec(v___y_1548_);
lean_dec_ref(v___y_1547_);
lean_dec(v___y_1546_);
lean_dec_ref(v___y_1545_);
lean_dec(v___y_1544_);
lean_dec_ref(v___y_1543_);
return v_res_1550_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___redArg(lean_object* v_env_1551_, lean_object* v_x_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_){
_start:
{
lean_object* v___x_1560_; lean_object* v_env_1561_; lean_object* v_a_1563_; lean_object* v___x_1573_; lean_object* v___x_1574_; 
v___x_1560_ = lean_st_ref_get(v___y_1558_);
v_env_1561_ = lean_ctor_get(v___x_1560_, 0);
lean_inc_ref(v_env_1561_);
lean_dec(v___x_1560_);
v___x_1573_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v_env_1551_, v___y_1556_, v___y_1558_);
lean_dec_ref(v___x_1573_);
lean_inc(v___y_1558_);
lean_inc_ref(v___y_1557_);
lean_inc(v___y_1556_);
lean_inc_ref(v___y_1555_);
lean_inc(v___y_1554_);
lean_inc_ref(v___y_1553_);
v___x_1574_ = lean_apply_7(v_x_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_, lean_box(0));
if (lean_obj_tag(v___x_1574_) == 0)
{
lean_object* v_a_1575_; lean_object* v___x_1576_; lean_object* v___x_1578_; uint8_t v_isShared_1579_; uint8_t v_isSharedCheck_1583_; 
v_a_1575_ = lean_ctor_get(v___x_1574_, 0);
lean_inc(v_a_1575_);
lean_dec_ref_known(v___x_1574_, 1);
v___x_1576_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v_env_1561_, v___y_1556_, v___y_1558_);
v_isSharedCheck_1583_ = !lean_is_exclusive(v___x_1576_);
if (v_isSharedCheck_1583_ == 0)
{
lean_object* v_unused_1584_; 
v_unused_1584_ = lean_ctor_get(v___x_1576_, 0);
lean_dec(v_unused_1584_);
v___x_1578_ = v___x_1576_;
v_isShared_1579_ = v_isSharedCheck_1583_;
goto v_resetjp_1577_;
}
else
{
lean_dec(v___x_1576_);
v___x_1578_ = lean_box(0);
v_isShared_1579_ = v_isSharedCheck_1583_;
goto v_resetjp_1577_;
}
v_resetjp_1577_:
{
lean_object* v___x_1581_; 
if (v_isShared_1579_ == 0)
{
lean_ctor_set(v___x_1578_, 0, v_a_1575_);
v___x_1581_ = v___x_1578_;
goto v_reusejp_1580_;
}
else
{
lean_object* v_reuseFailAlloc_1582_; 
v_reuseFailAlloc_1582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1582_, 0, v_a_1575_);
v___x_1581_ = v_reuseFailAlloc_1582_;
goto v_reusejp_1580_;
}
v_reusejp_1580_:
{
return v___x_1581_;
}
}
}
else
{
lean_object* v_a_1585_; 
v_a_1585_ = lean_ctor_get(v___x_1574_, 0);
lean_inc(v_a_1585_);
lean_dec_ref_known(v___x_1574_, 1);
v_a_1563_ = v_a_1585_;
goto v___jp_1562_;
}
v___jp_1562_:
{
lean_object* v___x_1564_; lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1571_; 
v___x_1564_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v_env_1561_, v___y_1556_, v___y_1558_);
v_isSharedCheck_1571_ = !lean_is_exclusive(v___x_1564_);
if (v_isSharedCheck_1571_ == 0)
{
lean_object* v_unused_1572_; 
v_unused_1572_ = lean_ctor_get(v___x_1564_, 0);
lean_dec(v_unused_1572_);
v___x_1566_ = v___x_1564_;
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
else
{
lean_dec(v___x_1564_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
lean_object* v___x_1569_; 
if (v_isShared_1567_ == 0)
{
lean_ctor_set_tag(v___x_1566_, 1);
lean_ctor_set(v___x_1566_, 0, v_a_1563_);
v___x_1569_ = v___x_1566_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v_a_1563_);
v___x_1569_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
return v___x_1569_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___redArg___boxed(lean_object* v_env_1586_, lean_object* v_x_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_){
_start:
{
lean_object* v_res_1595_; 
v_res_1595_ = l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___redArg(v_env_1586_, v_x_1587_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_, v___y_1592_, v___y_1593_);
lean_dec(v___y_1593_);
lean_dec_ref(v___y_1592_);
lean_dec(v___y_1591_);
lean_dec_ref(v___y_1590_);
lean_dec(v___y_1589_);
lean_dec_ref(v___y_1588_);
return v_res_1595_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2___redArg(size_t v_sz_1596_, size_t v_i_1597_, lean_object* v_bs_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_){
_start:
{
uint8_t v___x_1602_; 
v___x_1602_ = lean_usize_dec_lt(v_i_1597_, v_sz_1596_);
if (v___x_1602_ == 0)
{
lean_object* v___x_1603_; 
v___x_1603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1603_, 0, v_bs_1598_);
return v___x_1603_;
}
else
{
lean_object* v_v_1604_; lean_object* v_ref_1605_; uint8_t v_kind_1606_; lean_object* v_levelParams_1607_; lean_object* v_modifiers_1608_; lean_object* v_declName_1609_; lean_object* v_binders_1610_; lean_object* v_numSectionVars_1611_; lean_object* v_type_1612_; lean_object* v_value_1613_; lean_object* v_termination_1614_; lean_object* v___x_1616_; uint8_t v_isShared_1617_; uint8_t v_isSharedCheck_1637_; 
v_v_1604_ = lean_array_uget(v_bs_1598_, v_i_1597_);
v_ref_1605_ = lean_ctor_get(v_v_1604_, 0);
v_kind_1606_ = lean_ctor_get_uint8(v_v_1604_, sizeof(void*)*9);
v_levelParams_1607_ = lean_ctor_get(v_v_1604_, 1);
v_modifiers_1608_ = lean_ctor_get(v_v_1604_, 2);
v_declName_1609_ = lean_ctor_get(v_v_1604_, 3);
v_binders_1610_ = lean_ctor_get(v_v_1604_, 4);
v_numSectionVars_1611_ = lean_ctor_get(v_v_1604_, 5);
v_type_1612_ = lean_ctor_get(v_v_1604_, 6);
v_value_1613_ = lean_ctor_get(v_v_1604_, 7);
v_termination_1614_ = lean_ctor_get(v_v_1604_, 8);
v_isSharedCheck_1637_ = !lean_is_exclusive(v_v_1604_);
if (v_isSharedCheck_1637_ == 0)
{
v___x_1616_ = v_v_1604_;
v_isShared_1617_ = v_isSharedCheck_1637_;
goto v_resetjp_1615_;
}
else
{
lean_inc(v_termination_1614_);
lean_inc(v_value_1613_);
lean_inc(v_type_1612_);
lean_inc(v_numSectionVars_1611_);
lean_inc(v_binders_1610_);
lean_inc(v_declName_1609_);
lean_inc(v_modifiers_1608_);
lean_inc(v_levelParams_1607_);
lean_inc(v_ref_1605_);
lean_dec(v_v_1604_);
v___x_1616_ = lean_box(0);
v_isShared_1617_ = v_isSharedCheck_1637_;
goto v_resetjp_1615_;
}
v_resetjp_1615_:
{
lean_object* v___x_1618_; lean_object* v_bs_x27_1619_; lean_object* v___x_1620_; 
v___x_1618_ = lean_unsigned_to_nat(0u);
v_bs_x27_1619_ = lean_array_uset(v_bs_1598_, v_i_1597_, v___x_1618_);
v___x_1620_ = l_Lean_Elab_WF_floatRecApp(v_value_1613_, v___y_1599_, v___y_1600_);
if (lean_obj_tag(v___x_1620_) == 0)
{
lean_object* v_a_1621_; lean_object* v___x_1623_; 
v_a_1621_ = lean_ctor_get(v___x_1620_, 0);
lean_inc(v_a_1621_);
lean_dec_ref_known(v___x_1620_, 1);
if (v_isShared_1617_ == 0)
{
lean_ctor_set(v___x_1616_, 7, v_a_1621_);
v___x_1623_ = v___x_1616_;
goto v_reusejp_1622_;
}
else
{
lean_object* v_reuseFailAlloc_1628_; 
v_reuseFailAlloc_1628_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_1628_, 0, v_ref_1605_);
lean_ctor_set(v_reuseFailAlloc_1628_, 1, v_levelParams_1607_);
lean_ctor_set(v_reuseFailAlloc_1628_, 2, v_modifiers_1608_);
lean_ctor_set(v_reuseFailAlloc_1628_, 3, v_declName_1609_);
lean_ctor_set(v_reuseFailAlloc_1628_, 4, v_binders_1610_);
lean_ctor_set(v_reuseFailAlloc_1628_, 5, v_numSectionVars_1611_);
lean_ctor_set(v_reuseFailAlloc_1628_, 6, v_type_1612_);
lean_ctor_set(v_reuseFailAlloc_1628_, 7, v_a_1621_);
lean_ctor_set(v_reuseFailAlloc_1628_, 8, v_termination_1614_);
lean_ctor_set_uint8(v_reuseFailAlloc_1628_, sizeof(void*)*9, v_kind_1606_);
v___x_1623_ = v_reuseFailAlloc_1628_;
goto v_reusejp_1622_;
}
v_reusejp_1622_:
{
size_t v___x_1624_; size_t v___x_1625_; lean_object* v___x_1626_; 
v___x_1624_ = ((size_t)1ULL);
v___x_1625_ = lean_usize_add(v_i_1597_, v___x_1624_);
v___x_1626_ = lean_array_uset(v_bs_x27_1619_, v_i_1597_, v___x_1623_);
v_i_1597_ = v___x_1625_;
v_bs_1598_ = v___x_1626_;
goto _start;
}
}
else
{
lean_object* v_a_1629_; lean_object* v___x_1631_; uint8_t v_isShared_1632_; uint8_t v_isSharedCheck_1636_; 
lean_dec_ref(v_bs_x27_1619_);
lean_del_object(v___x_1616_);
lean_dec_ref(v_termination_1614_);
lean_dec_ref(v_type_1612_);
lean_dec(v_numSectionVars_1611_);
lean_dec(v_binders_1610_);
lean_dec(v_declName_1609_);
lean_dec_ref(v_modifiers_1608_);
lean_dec(v_levelParams_1607_);
lean_dec(v_ref_1605_);
v_a_1629_ = lean_ctor_get(v___x_1620_, 0);
v_isSharedCheck_1636_ = !lean_is_exclusive(v___x_1620_);
if (v_isSharedCheck_1636_ == 0)
{
v___x_1631_ = v___x_1620_;
v_isShared_1632_ = v_isSharedCheck_1636_;
goto v_resetjp_1630_;
}
else
{
lean_inc(v_a_1629_);
lean_dec(v___x_1620_);
v___x_1631_ = lean_box(0);
v_isShared_1632_ = v_isSharedCheck_1636_;
goto v_resetjp_1630_;
}
v_resetjp_1630_:
{
lean_object* v___x_1634_; 
if (v_isShared_1632_ == 0)
{
v___x_1634_ = v___x_1631_;
goto v_reusejp_1633_;
}
else
{
lean_object* v_reuseFailAlloc_1635_; 
v_reuseFailAlloc_1635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1635_, 0, v_a_1629_);
v___x_1634_ = v_reuseFailAlloc_1635_;
goto v_reusejp_1633_;
}
v_reusejp_1633_:
{
return v___x_1634_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2___redArg___boxed(lean_object* v_sz_1638_, lean_object* v_i_1639_, lean_object* v_bs_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_){
_start:
{
size_t v_sz_boxed_1644_; size_t v_i_boxed_1645_; lean_object* v_res_1646_; 
v_sz_boxed_1644_ = lean_unbox_usize(v_sz_1638_);
lean_dec(v_sz_1638_);
v_i_boxed_1645_ = lean_unbox_usize(v_i_1639_);
lean_dec(v_i_1639_);
v_res_1646_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2___redArg(v_sz_boxed_1644_, v_i_boxed_1645_, v_bs_1640_, v___y_1641_, v___y_1642_);
lean_dec(v___y_1642_);
lean_dec_ref(v___y_1641_);
return v_res_1646_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20_spec__23___redArg___lam__0(lean_object* v___y_1647_, uint8_t v_isExporting_1648_, lean_object* v___x_1649_, lean_object* v___y_1650_, lean_object* v___x_1651_, lean_object* v_a_x3f_1652_){
_start:
{
lean_object* v___x_1654_; lean_object* v_env_1655_; lean_object* v_nextMacroScope_1656_; lean_object* v_ngen_1657_; lean_object* v_auxDeclNGen_1658_; lean_object* v_traceState_1659_; lean_object* v_recordedDeps_1660_; lean_object* v_messages_1661_; lean_object* v_infoState_1662_; lean_object* v_snapshotTasks_1663_; lean_object* v___x_1665_; uint8_t v_isShared_1666_; uint8_t v_isSharedCheck_1688_; 
v___x_1654_ = lean_st_ref_take(v___y_1647_);
v_env_1655_ = lean_ctor_get(v___x_1654_, 0);
v_nextMacroScope_1656_ = lean_ctor_get(v___x_1654_, 1);
v_ngen_1657_ = lean_ctor_get(v___x_1654_, 2);
v_auxDeclNGen_1658_ = lean_ctor_get(v___x_1654_, 3);
v_traceState_1659_ = lean_ctor_get(v___x_1654_, 4);
v_recordedDeps_1660_ = lean_ctor_get(v___x_1654_, 6);
v_messages_1661_ = lean_ctor_get(v___x_1654_, 7);
v_infoState_1662_ = lean_ctor_get(v___x_1654_, 8);
v_snapshotTasks_1663_ = lean_ctor_get(v___x_1654_, 9);
v_isSharedCheck_1688_ = !lean_is_exclusive(v___x_1654_);
if (v_isSharedCheck_1688_ == 0)
{
lean_object* v_unused_1689_; 
v_unused_1689_ = lean_ctor_get(v___x_1654_, 5);
lean_dec(v_unused_1689_);
v___x_1665_ = v___x_1654_;
v_isShared_1666_ = v_isSharedCheck_1688_;
goto v_resetjp_1664_;
}
else
{
lean_inc(v_snapshotTasks_1663_);
lean_inc(v_infoState_1662_);
lean_inc(v_messages_1661_);
lean_inc(v_recordedDeps_1660_);
lean_inc(v_traceState_1659_);
lean_inc(v_auxDeclNGen_1658_);
lean_inc(v_ngen_1657_);
lean_inc(v_nextMacroScope_1656_);
lean_inc(v_env_1655_);
lean_dec(v___x_1654_);
v___x_1665_ = lean_box(0);
v_isShared_1666_ = v_isSharedCheck_1688_;
goto v_resetjp_1664_;
}
v_resetjp_1664_:
{
lean_object* v___x_1667_; lean_object* v___x_1669_; 
v___x_1667_ = l_Lean_Environment_setExporting(v_env_1655_, v_isExporting_1648_);
if (v_isShared_1666_ == 0)
{
lean_ctor_set(v___x_1665_, 5, v___x_1649_);
lean_ctor_set(v___x_1665_, 0, v___x_1667_);
v___x_1669_ = v___x_1665_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1687_; 
v_reuseFailAlloc_1687_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1687_, 0, v___x_1667_);
lean_ctor_set(v_reuseFailAlloc_1687_, 1, v_nextMacroScope_1656_);
lean_ctor_set(v_reuseFailAlloc_1687_, 2, v_ngen_1657_);
lean_ctor_set(v_reuseFailAlloc_1687_, 3, v_auxDeclNGen_1658_);
lean_ctor_set(v_reuseFailAlloc_1687_, 4, v_traceState_1659_);
lean_ctor_set(v_reuseFailAlloc_1687_, 5, v___x_1649_);
lean_ctor_set(v_reuseFailAlloc_1687_, 6, v_recordedDeps_1660_);
lean_ctor_set(v_reuseFailAlloc_1687_, 7, v_messages_1661_);
lean_ctor_set(v_reuseFailAlloc_1687_, 8, v_infoState_1662_);
lean_ctor_set(v_reuseFailAlloc_1687_, 9, v_snapshotTasks_1663_);
v___x_1669_ = v_reuseFailAlloc_1687_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v_mctx_1672_; lean_object* v_zetaDeltaFVarIds_1673_; lean_object* v_postponed_1674_; lean_object* v_diag_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1685_; 
v___x_1670_ = lean_st_ref_put(v___y_1647_, v___x_1669_);
v___x_1671_ = lean_st_ref_take(v___y_1650_);
v_mctx_1672_ = lean_ctor_get(v___x_1671_, 0);
v_zetaDeltaFVarIds_1673_ = lean_ctor_get(v___x_1671_, 2);
v_postponed_1674_ = lean_ctor_get(v___x_1671_, 3);
v_diag_1675_ = lean_ctor_get(v___x_1671_, 4);
v_isSharedCheck_1685_ = !lean_is_exclusive(v___x_1671_);
if (v_isSharedCheck_1685_ == 0)
{
lean_object* v_unused_1686_; 
v_unused_1686_ = lean_ctor_get(v___x_1671_, 1);
lean_dec(v_unused_1686_);
v___x_1677_ = v___x_1671_;
v_isShared_1678_ = v_isSharedCheck_1685_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_diag_1675_);
lean_inc(v_postponed_1674_);
lean_inc(v_zetaDeltaFVarIds_1673_);
lean_inc(v_mctx_1672_);
lean_dec(v___x_1671_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1685_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
lean_object* v___x_1679_; lean_object* v___x_1681_; 
v___x_1679_ = lean_box(0);
if (v_isShared_1678_ == 0)
{
lean_ctor_set(v___x_1677_, 1, v___x_1651_);
v___x_1681_ = v___x_1677_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1684_; 
v_reuseFailAlloc_1684_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1684_, 0, v_mctx_1672_);
lean_ctor_set(v_reuseFailAlloc_1684_, 1, v___x_1651_);
lean_ctor_set(v_reuseFailAlloc_1684_, 2, v_zetaDeltaFVarIds_1673_);
lean_ctor_set(v_reuseFailAlloc_1684_, 3, v_postponed_1674_);
lean_ctor_set(v_reuseFailAlloc_1684_, 4, v_diag_1675_);
v___x_1681_ = v_reuseFailAlloc_1684_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
lean_object* v___x_1682_; lean_object* v___x_1683_; 
v___x_1682_ = lean_st_ref_put(v___y_1650_, v___x_1681_);
v___x_1683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1683_, 0, v___x_1679_);
return v___x_1683_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20_spec__23___redArg___lam__0___boxed(lean_object* v___y_1690_, lean_object* v_isExporting_1691_, lean_object* v___x_1692_, lean_object* v___y_1693_, lean_object* v___x_1694_, lean_object* v_a_x3f_1695_, lean_object* v___y_1696_){
_start:
{
uint8_t v_isExporting_boxed_1697_; lean_object* v_res_1698_; 
v_isExporting_boxed_1697_ = lean_unbox(v_isExporting_1691_);
v_res_1698_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20_spec__23___redArg___lam__0(v___y_1690_, v_isExporting_boxed_1697_, v___x_1692_, v___y_1693_, v___x_1694_, v_a_x3f_1695_);
lean_dec(v_a_x3f_1695_);
lean_dec(v___y_1693_);
lean_dec(v___y_1690_);
return v_res_1698_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20_spec__23___redArg(lean_object* v_x_1699_, uint8_t v_isExporting_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_){
_start:
{
lean_object* v___x_1708_; lean_object* v_env_1709_; lean_object* v___x_1710_; uint8_t v_isModule_1711_; 
v___x_1708_ = lean_st_ref_get(v___y_1706_);
v_env_1709_ = lean_ctor_get(v___x_1708_, 0);
lean_inc_ref(v_env_1709_);
lean_dec(v___x_1708_);
v___x_1710_ = l_Lean_Environment_header(v_env_1709_);
v_isModule_1711_ = lean_ctor_get_uint8(v___x_1710_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_1710_);
if (v_isModule_1711_ == 0)
{
lean_object* v___x_1712_; 
lean_dec_ref(v_env_1709_);
lean_inc(v___y_1706_);
lean_inc_ref(v___y_1705_);
lean_inc(v___y_1704_);
lean_inc_ref(v___y_1703_);
lean_inc(v___y_1702_);
lean_inc_ref(v___y_1701_);
v___x_1712_ = lean_apply_7(v_x_1699_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_, v___y_1705_, v___y_1706_, lean_box(0));
return v___x_1712_;
}
else
{
uint8_t v_isExporting_1713_; 
v_isExporting_1713_ = lean_ctor_get_uint8(v_env_1709_, sizeof(void*)*13);
lean_dec_ref(v_env_1709_);
if (v_isExporting_1700_ == 0)
{
if (v_isExporting_1713_ == 0)
{
lean_object* v___x_1780_; 
lean_inc(v___y_1706_);
lean_inc_ref(v___y_1705_);
lean_inc(v___y_1704_);
lean_inc_ref(v___y_1703_);
lean_inc(v___y_1702_);
lean_inc_ref(v___y_1701_);
v___x_1780_ = lean_apply_7(v_x_1699_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_, v___y_1705_, v___y_1706_, lean_box(0));
return v___x_1780_;
}
else
{
goto v___jp_1714_;
}
}
else
{
if (v_isExporting_1713_ == 0)
{
goto v___jp_1714_;
}
else
{
lean_object* v___x_1781_; 
lean_inc(v___y_1706_);
lean_inc_ref(v___y_1705_);
lean_inc(v___y_1704_);
lean_inc_ref(v___y_1703_);
lean_inc(v___y_1702_);
lean_inc_ref(v___y_1701_);
v___x_1781_ = lean_apply_7(v_x_1699_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_, v___y_1705_, v___y_1706_, lean_box(0));
return v___x_1781_;
}
}
v___jp_1714_:
{
lean_object* v___x_1715_; lean_object* v_env_1716_; lean_object* v_nextMacroScope_1717_; lean_object* v_ngen_1718_; lean_object* v_auxDeclNGen_1719_; lean_object* v_traceState_1720_; lean_object* v_recordedDeps_1721_; lean_object* v_messages_1722_; lean_object* v_infoState_1723_; lean_object* v_snapshotTasks_1724_; lean_object* v___x_1726_; uint8_t v_isShared_1727_; uint8_t v_isSharedCheck_1778_; 
v___x_1715_ = lean_st_ref_take(v___y_1706_);
v_env_1716_ = lean_ctor_get(v___x_1715_, 0);
v_nextMacroScope_1717_ = lean_ctor_get(v___x_1715_, 1);
v_ngen_1718_ = lean_ctor_get(v___x_1715_, 2);
v_auxDeclNGen_1719_ = lean_ctor_get(v___x_1715_, 3);
v_traceState_1720_ = lean_ctor_get(v___x_1715_, 4);
v_recordedDeps_1721_ = lean_ctor_get(v___x_1715_, 6);
v_messages_1722_ = lean_ctor_get(v___x_1715_, 7);
v_infoState_1723_ = lean_ctor_get(v___x_1715_, 8);
v_snapshotTasks_1724_ = lean_ctor_get(v___x_1715_, 9);
v_isSharedCheck_1778_ = !lean_is_exclusive(v___x_1715_);
if (v_isSharedCheck_1778_ == 0)
{
lean_object* v_unused_1779_; 
v_unused_1779_ = lean_ctor_get(v___x_1715_, 5);
lean_dec(v_unused_1779_);
v___x_1726_ = v___x_1715_;
v_isShared_1727_ = v_isSharedCheck_1778_;
goto v_resetjp_1725_;
}
else
{
lean_inc(v_snapshotTasks_1724_);
lean_inc(v_infoState_1723_);
lean_inc(v_messages_1722_);
lean_inc(v_recordedDeps_1721_);
lean_inc(v_traceState_1720_);
lean_inc(v_auxDeclNGen_1719_);
lean_inc(v_ngen_1718_);
lean_inc(v_nextMacroScope_1717_);
lean_inc(v_env_1716_);
lean_dec(v___x_1715_);
v___x_1726_ = lean_box(0);
v_isShared_1727_ = v_isSharedCheck_1778_;
goto v_resetjp_1725_;
}
v_resetjp_1725_:
{
lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1731_; 
v___x_1728_ = l_Lean_Environment_setExporting(v_env_1716_, v_isExporting_1700_);
v___x_1729_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2);
if (v_isShared_1727_ == 0)
{
lean_ctor_set(v___x_1726_, 5, v___x_1729_);
lean_ctor_set(v___x_1726_, 0, v___x_1728_);
v___x_1731_ = v___x_1726_;
goto v_reusejp_1730_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v___x_1728_);
lean_ctor_set(v_reuseFailAlloc_1777_, 1, v_nextMacroScope_1717_);
lean_ctor_set(v_reuseFailAlloc_1777_, 2, v_ngen_1718_);
lean_ctor_set(v_reuseFailAlloc_1777_, 3, v_auxDeclNGen_1719_);
lean_ctor_set(v_reuseFailAlloc_1777_, 4, v_traceState_1720_);
lean_ctor_set(v_reuseFailAlloc_1777_, 5, v___x_1729_);
lean_ctor_set(v_reuseFailAlloc_1777_, 6, v_recordedDeps_1721_);
lean_ctor_set(v_reuseFailAlloc_1777_, 7, v_messages_1722_);
lean_ctor_set(v_reuseFailAlloc_1777_, 8, v_infoState_1723_);
lean_ctor_set(v_reuseFailAlloc_1777_, 9, v_snapshotTasks_1724_);
v___x_1731_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1730_;
}
v_reusejp_1730_:
{
lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v_mctx_1734_; lean_object* v_zetaDeltaFVarIds_1735_; lean_object* v_postponed_1736_; lean_object* v_diag_1737_; lean_object* v___x_1739_; uint8_t v_isShared_1740_; uint8_t v_isSharedCheck_1775_; 
v___x_1732_ = lean_st_ref_put(v___y_1706_, v___x_1731_);
v___x_1733_ = lean_st_ref_take(v___y_1704_);
v_mctx_1734_ = lean_ctor_get(v___x_1733_, 0);
v_zetaDeltaFVarIds_1735_ = lean_ctor_get(v___x_1733_, 2);
v_postponed_1736_ = lean_ctor_get(v___x_1733_, 3);
v_diag_1737_ = lean_ctor_get(v___x_1733_, 4);
v_isSharedCheck_1775_ = !lean_is_exclusive(v___x_1733_);
if (v_isSharedCheck_1775_ == 0)
{
lean_object* v_unused_1776_; 
v_unused_1776_ = lean_ctor_get(v___x_1733_, 1);
lean_dec(v_unused_1776_);
v___x_1739_ = v___x_1733_;
v_isShared_1740_ = v_isSharedCheck_1775_;
goto v_resetjp_1738_;
}
else
{
lean_inc(v_diag_1737_);
lean_inc(v_postponed_1736_);
lean_inc(v_zetaDeltaFVarIds_1735_);
lean_inc(v_mctx_1734_);
lean_dec(v___x_1733_);
v___x_1739_ = lean_box(0);
v_isShared_1740_ = v_isSharedCheck_1775_;
goto v_resetjp_1738_;
}
v_resetjp_1738_:
{
lean_object* v___x_1741_; lean_object* v___x_1743_; 
v___x_1741_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3);
if (v_isShared_1740_ == 0)
{
lean_ctor_set(v___x_1739_, 1, v___x_1741_);
v___x_1743_ = v___x_1739_;
goto v_reusejp_1742_;
}
else
{
lean_object* v_reuseFailAlloc_1774_; 
v_reuseFailAlloc_1774_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1774_, 0, v_mctx_1734_);
lean_ctor_set(v_reuseFailAlloc_1774_, 1, v___x_1741_);
lean_ctor_set(v_reuseFailAlloc_1774_, 2, v_zetaDeltaFVarIds_1735_);
lean_ctor_set(v_reuseFailAlloc_1774_, 3, v_postponed_1736_);
lean_ctor_set(v_reuseFailAlloc_1774_, 4, v_diag_1737_);
v___x_1743_ = v_reuseFailAlloc_1774_;
goto v_reusejp_1742_;
}
v_reusejp_1742_:
{
lean_object* v___x_1744_; lean_object* v_r_1745_; 
v___x_1744_ = lean_st_ref_put(v___y_1704_, v___x_1743_);
lean_inc(v___y_1706_);
lean_inc_ref(v___y_1705_);
lean_inc(v___y_1704_);
lean_inc_ref(v___y_1703_);
lean_inc(v___y_1702_);
lean_inc_ref(v___y_1701_);
v_r_1745_ = lean_apply_7(v_x_1699_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_, v___y_1705_, v___y_1706_, lean_box(0));
if (lean_obj_tag(v_r_1745_) == 0)
{
lean_object* v_a_1746_; lean_object* v___x_1748_; uint8_t v_isShared_1749_; uint8_t v_isSharedCheck_1762_; 
v_a_1746_ = lean_ctor_get(v_r_1745_, 0);
v_isSharedCheck_1762_ = !lean_is_exclusive(v_r_1745_);
if (v_isSharedCheck_1762_ == 0)
{
v___x_1748_ = v_r_1745_;
v_isShared_1749_ = v_isSharedCheck_1762_;
goto v_resetjp_1747_;
}
else
{
lean_inc(v_a_1746_);
lean_dec(v_r_1745_);
v___x_1748_ = lean_box(0);
v_isShared_1749_ = v_isSharedCheck_1762_;
goto v_resetjp_1747_;
}
v_resetjp_1747_:
{
lean_object* v___x_1751_; 
lean_inc(v_a_1746_);
if (v_isShared_1749_ == 0)
{
lean_ctor_set_tag(v___x_1748_, 1);
v___x_1751_ = v___x_1748_;
goto v_reusejp_1750_;
}
else
{
lean_object* v_reuseFailAlloc_1761_; 
v_reuseFailAlloc_1761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1761_, 0, v_a_1746_);
v___x_1751_ = v_reuseFailAlloc_1761_;
goto v_reusejp_1750_;
}
v_reusejp_1750_:
{
lean_object* v___x_1752_; lean_object* v___x_1754_; uint8_t v_isShared_1755_; uint8_t v_isSharedCheck_1759_; 
v___x_1752_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20_spec__23___redArg___lam__0(v___y_1706_, v_isExporting_1713_, v___x_1729_, v___y_1704_, v___x_1741_, v___x_1751_);
lean_dec_ref(v___x_1751_);
v_isSharedCheck_1759_ = !lean_is_exclusive(v___x_1752_);
if (v_isSharedCheck_1759_ == 0)
{
lean_object* v_unused_1760_; 
v_unused_1760_ = lean_ctor_get(v___x_1752_, 0);
lean_dec(v_unused_1760_);
v___x_1754_ = v___x_1752_;
v_isShared_1755_ = v_isSharedCheck_1759_;
goto v_resetjp_1753_;
}
else
{
lean_dec(v___x_1752_);
v___x_1754_ = lean_box(0);
v_isShared_1755_ = v_isSharedCheck_1759_;
goto v_resetjp_1753_;
}
v_resetjp_1753_:
{
lean_object* v___x_1757_; 
if (v_isShared_1755_ == 0)
{
lean_ctor_set(v___x_1754_, 0, v_a_1746_);
v___x_1757_ = v___x_1754_;
goto v_reusejp_1756_;
}
else
{
lean_object* v_reuseFailAlloc_1758_; 
v_reuseFailAlloc_1758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1758_, 0, v_a_1746_);
v___x_1757_ = v_reuseFailAlloc_1758_;
goto v_reusejp_1756_;
}
v_reusejp_1756_:
{
return v___x_1757_;
}
}
}
}
}
else
{
lean_object* v_a_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1767_; uint8_t v_isShared_1768_; uint8_t v_isSharedCheck_1772_; 
v_a_1763_ = lean_ctor_get(v_r_1745_, 0);
lean_inc(v_a_1763_);
lean_dec_ref_known(v_r_1745_, 1);
v___x_1764_ = lean_box(0);
v___x_1765_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20_spec__23___redArg___lam__0(v___y_1706_, v_isExporting_1713_, v___x_1729_, v___y_1704_, v___x_1741_, v___x_1764_);
v_isSharedCheck_1772_ = !lean_is_exclusive(v___x_1765_);
if (v_isSharedCheck_1772_ == 0)
{
lean_object* v_unused_1773_; 
v_unused_1773_ = lean_ctor_get(v___x_1765_, 0);
lean_dec(v_unused_1773_);
v___x_1767_ = v___x_1765_;
v_isShared_1768_ = v_isSharedCheck_1772_;
goto v_resetjp_1766_;
}
else
{
lean_dec(v___x_1765_);
v___x_1767_ = lean_box(0);
v_isShared_1768_ = v_isSharedCheck_1772_;
goto v_resetjp_1766_;
}
v_resetjp_1766_:
{
lean_object* v___x_1770_; 
if (v_isShared_1768_ == 0)
{
lean_ctor_set_tag(v___x_1767_, 1);
lean_ctor_set(v___x_1767_, 0, v_a_1763_);
v___x_1770_ = v___x_1767_;
goto v_reusejp_1769_;
}
else
{
lean_object* v_reuseFailAlloc_1771_; 
v_reuseFailAlloc_1771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1771_, 0, v_a_1763_);
v___x_1770_ = v_reuseFailAlloc_1771_;
goto v_reusejp_1769_;
}
v_reusejp_1769_:
{
return v___x_1770_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20_spec__23___redArg___boxed(lean_object* v_x_1782_, lean_object* v_isExporting_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_){
_start:
{
uint8_t v_isExporting_boxed_1791_; lean_object* v_res_1792_; 
v_isExporting_boxed_1791_ = lean_unbox(v_isExporting_1783_);
v_res_1792_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20_spec__23___redArg(v_x_1782_, v_isExporting_boxed_1791_, v___y_1784_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_);
lean_dec(v___y_1789_);
lean_dec_ref(v___y_1788_);
lean_dec(v___y_1787_);
lean_dec_ref(v___y_1786_);
lean_dec(v___y_1785_);
lean_dec_ref(v___y_1784_);
return v_res_1792_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20___redArg(lean_object* v_x_1793_, uint8_t v_when_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_){
_start:
{
if (v_when_1794_ == 0)
{
lean_object* v___x_1802_; 
lean_inc(v___y_1800_);
lean_inc_ref(v___y_1799_);
lean_inc(v___y_1798_);
lean_inc_ref(v___y_1797_);
lean_inc(v___y_1796_);
lean_inc_ref(v___y_1795_);
v___x_1802_ = lean_apply_7(v_x_1793_, v___y_1795_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_, v___y_1800_, lean_box(0));
return v___x_1802_;
}
else
{
uint8_t v___x_1803_; lean_object* v___x_1804_; 
v___x_1803_ = 0;
v___x_1804_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20_spec__23___redArg(v_x_1793_, v___x_1803_, v___y_1795_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_, v___y_1800_);
return v___x_1804_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20___redArg___boxed(lean_object* v_x_1805_, lean_object* v_when_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_){
_start:
{
uint8_t v_when_boxed_1814_; lean_object* v_res_1815_; 
v_when_boxed_1814_ = lean_unbox(v_when_1806_);
v_res_1815_ = l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20___redArg(v_x_1805_, v_when_boxed_1814_, v___y_1807_, v___y_1808_, v___y_1809_, v___y_1810_, v___y_1811_, v___y_1812_);
lean_dec(v___y_1812_);
lean_dec_ref(v___y_1811_);
lean_dec(v___y_1810_);
lean_dec_ref(v___y_1809_);
lean_dec(v___y_1808_);
lean_dec_ref(v___y_1807_);
return v_res_1815_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1(size_t v_sz_1816_, size_t v_i_1817_, lean_object* v_bs_1818_){
_start:
{
uint8_t v___x_1819_; 
v___x_1819_ = lean_usize_dec_lt(v_i_1817_, v_sz_1816_);
if (v___x_1819_ == 0)
{
lean_object* v___x_1820_; 
v___x_1820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1820_, 0, v_bs_1818_);
return v___x_1820_;
}
else
{
lean_object* v_v_1821_; 
v_v_1821_ = lean_array_uget_borrowed(v_bs_1818_, v_i_1817_);
if (lean_obj_tag(v_v_1821_) == 0)
{
lean_object* v___x_1822_; 
lean_dec_ref(v_bs_1818_);
v___x_1822_ = lean_box(0);
return v___x_1822_;
}
else
{
lean_object* v_val_1823_; lean_object* v___x_1824_; lean_object* v_bs_x27_1825_; size_t v___x_1826_; size_t v___x_1827_; lean_object* v___x_1828_; 
v_val_1823_ = lean_ctor_get(v_v_1821_, 0);
lean_inc(v_val_1823_);
v___x_1824_ = lean_unsigned_to_nat(0u);
v_bs_x27_1825_ = lean_array_uset(v_bs_1818_, v_i_1817_, v___x_1824_);
v___x_1826_ = ((size_t)1ULL);
v___x_1827_ = lean_usize_add(v_i_1817_, v___x_1826_);
v___x_1828_ = lean_array_uset(v_bs_x27_1825_, v_i_1817_, v_val_1823_);
v_i_1817_ = v___x_1827_;
v_bs_1818_ = v___x_1828_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1___boxed(lean_object* v_sz_1830_, lean_object* v_i_1831_, lean_object* v_bs_1832_){
_start:
{
size_t v_sz_boxed_1833_; size_t v_i_boxed_1834_; lean_object* v_res_1835_; 
v_sz_boxed_1833_ = lean_unbox_usize(v_sz_1830_);
lean_dec(v_sz_1830_);
v_i_boxed_1834_ = lean_unbox_usize(v_i_1831_);
lean_dec(v_i_1831_);
v_res_1835_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1(v_sz_boxed_1833_, v_i_boxed_1834_, v_bs_1832_);
return v_res_1835_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___redArg(size_t v_sz_1836_, size_t v_i_1837_, lean_object* v_bs_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_){
_start:
{
uint8_t v___x_1844_; 
v___x_1844_ = lean_usize_dec_lt(v_i_1837_, v_sz_1836_);
if (v___x_1844_ == 0)
{
lean_object* v___x_1845_; 
v___x_1845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1845_, 0, v_bs_1838_);
return v___x_1845_;
}
else
{
uint8_t v___x_1846_; lean_object* v_v_1847_; lean_object* v___x_1848_; lean_object* v_bs_x27_1849_; lean_object* v___x_1850_; 
v___x_1846_ = 0;
v_v_1847_ = lean_array_uget(v_bs_1838_, v_i_1837_);
v___x_1848_ = lean_unsigned_to_nat(0u);
v_bs_x27_1849_ = lean_array_uset(v_bs_1838_, v_i_1837_, v___x_1848_);
v___x_1850_ = l_Lean_Elab_Mutual_cleanPreDef(v_v_1847_, v___x_1846_, v___y_1839_, v___y_1840_, v___y_1841_, v___y_1842_);
if (lean_obj_tag(v___x_1850_) == 0)
{
lean_object* v_a_1851_; size_t v___x_1852_; size_t v___x_1853_; lean_object* v___x_1854_; 
v_a_1851_ = lean_ctor_get(v___x_1850_, 0);
lean_inc(v_a_1851_);
lean_dec_ref_known(v___x_1850_, 1);
v___x_1852_ = ((size_t)1ULL);
v___x_1853_ = lean_usize_add(v_i_1837_, v___x_1852_);
v___x_1854_ = lean_array_uset(v_bs_x27_1849_, v_i_1837_, v_a_1851_);
v_i_1837_ = v___x_1853_;
v_bs_1838_ = v___x_1854_;
goto _start;
}
else
{
lean_object* v_a_1856_; lean_object* v___x_1858_; uint8_t v_isShared_1859_; uint8_t v_isSharedCheck_1863_; 
lean_dec_ref(v_bs_x27_1849_);
v_a_1856_ = lean_ctor_get(v___x_1850_, 0);
v_isSharedCheck_1863_ = !lean_is_exclusive(v___x_1850_);
if (v_isSharedCheck_1863_ == 0)
{
v___x_1858_ = v___x_1850_;
v_isShared_1859_ = v_isSharedCheck_1863_;
goto v_resetjp_1857_;
}
else
{
lean_inc(v_a_1856_);
lean_dec(v___x_1850_);
v___x_1858_ = lean_box(0);
v_isShared_1859_ = v_isSharedCheck_1863_;
goto v_resetjp_1857_;
}
v_resetjp_1857_:
{
lean_object* v___x_1861_; 
if (v_isShared_1859_ == 0)
{
v___x_1861_ = v___x_1858_;
goto v_reusejp_1860_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v_a_1856_);
v___x_1861_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1860_;
}
v_reusejp_1860_:
{
return v___x_1861_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___redArg___boxed(lean_object* v_sz_1864_, lean_object* v_i_1865_, lean_object* v_bs_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_){
_start:
{
size_t v_sz_boxed_1872_; size_t v_i_boxed_1873_; lean_object* v_res_1874_; 
v_sz_boxed_1872_ = lean_unbox_usize(v_sz_1864_);
lean_dec(v_sz_1864_);
v_i_boxed_1873_ = lean_unbox_usize(v_i_1865_);
lean_dec(v_i_1865_);
v_res_1874_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___redArg(v_sz_boxed_1872_, v_i_boxed_1873_, v_bs_1866_, v___y_1867_, v___y_1868_, v___y_1869_, v___y_1870_);
lean_dec(v___y_1870_);
lean_dec_ref(v___y_1869_);
lean_dec(v___y_1868_);
lean_dec_ref(v___y_1867_);
return v_res_1874_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___closed__7(void){
_start:
{
lean_object* v___x_1887_; lean_object* v___x_1888_; 
v___x_1887_ = ((lean_object*)(l_Lean_Elab_wfRecursion___closed__6));
v___x_1888_ = l_Lean_stringToMessageData(v___x_1887_);
return v___x_1888_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___closed__9(void){
_start:
{
lean_object* v___x_1890_; lean_object* v___x_1891_; 
v___x_1890_ = ((lean_object*)(l_Lean_Elab_wfRecursion___closed__8));
v___x_1891_ = l_Lean_stringToMessageData(v___x_1890_);
return v___x_1891_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___closed__11(void){
_start:
{
lean_object* v___x_1893_; lean_object* v___x_1894_; 
v___x_1893_ = ((lean_object*)(l_Lean_Elab_wfRecursion___closed__10));
v___x_1894_ = l_Lean_stringToMessageData(v___x_1893_);
return v___x_1894_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___closed__13(void){
_start:
{
lean_object* v___x_1896_; lean_object* v___x_1897_; 
v___x_1896_ = ((lean_object*)(l_Lean_Elab_wfRecursion___closed__12));
v___x_1897_ = l_Lean_stringToMessageData(v___x_1896_);
return v___x_1897_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion(lean_object* v_docCtx_1900_, lean_object* v_preDefs_1901_, lean_object* v_termMeasure_x3fs_1902_, lean_object* v_a_1903_, lean_object* v_a_1904_, lean_object* v_a_1905_, lean_object* v_a_1906_, lean_object* v_a_1907_, lean_object* v_a_1908_){
_start:
{
lean_object* v___y_1911_; lean_object* v___y_1921_; lean_object* v___y_1922_; lean_object* v___y_1923_; uint8_t v___y_1924_; lean_object* v___y_1925_; lean_object* v___y_1926_; lean_object* v___y_1927_; uint16_t v___y_1928_; lean_object* v___y_1929_; lean_object* v___y_1930_; lean_object* v___y_1969_; lean_object* v___y_1970_; lean_object* v___y_1971_; uint8_t v___y_1972_; lean_object* v___y_1973_; lean_object* v___y_1974_; lean_object* v___y_1975_; lean_object* v___y_1976_; uint8_t v___y_1977_; uint16_t v___y_1978_; lean_object* v___y_1979_; lean_object* v___y_2002_; lean_object* v___y_2003_; lean_object* v___y_2004_; lean_object* v___y_2005_; uint8_t v___y_2006_; lean_object* v___y_2007_; lean_object* v___y_2008_; uint8_t v___y_2009_; lean_object* v___y_2010_; lean_object* v___y_2011_; uint16_t v___y_2012_; uint8_t v___y_2013_; uint8_t v___y_2015_; lean_object* v___y_2016_; lean_object* v___y_2017_; uint8_t v___y_2018_; lean_object* v___y_2019_; lean_object* v___y_2020_; lean_object* v___y_2021_; lean_object* v___y_2022_; lean_object* v___y_2023_; lean_object* v___y_2024_; lean_object* v___x_2034_; size_t v_sz_2035_; size_t v___x_2036_; lean_object* v_termMeasures_x3f_2037_; size_t v_sz_2038_; lean_object* v___x_2039_; 
v___x_2034_ = l_Lean_Elab_instInhabitedPreDefinition_default;
v_sz_2035_ = lean_array_size(v_termMeasure_x3fs_1902_);
v___x_2036_ = ((size_t)0ULL);
v_termMeasures_x3f_2037_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1(v_sz_2035_, v___x_2036_, v_termMeasure_x3fs_1902_);
v_sz_2038_ = lean_array_size(v_preDefs_1901_);
v___x_2039_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2___redArg(v_sz_2038_, v___x_2036_, v_preDefs_1901_, v_a_1907_, v_a_1908_);
if (lean_obj_tag(v___x_2039_) == 0)
{
lean_object* v_a_2040_; lean_object* v___x_2041_; size_t v_sz_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___f_2045_; lean_object* v___x_2046_; lean_object* v_env_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; 
v_a_2040_ = lean_ctor_get(v___x_2039_, 0);
lean_inc_n(v_a_2040_, 2);
lean_dec_ref_known(v___x_2039_, 1);
v___x_2041_ = lean_box(0);
v_sz_2042_ = lean_array_size(v_a_2040_);
v___x_2043_ = lean_box_usize(v_sz_2042_);
v___x_2044_ = ((lean_object*)(l_Lean_Elab_wfRecursion___boxed__const__1));
v___f_2045_ = lean_alloc_closure((void*)(l_Lean_Elab_wfRecursion___lam__0___boxed), 12, 5);
lean_closure_set(v___f_2045_, 0, v_a_2040_);
lean_closure_set(v___f_2045_, 1, v___x_2043_);
lean_closure_set(v___f_2045_, 2, v___x_2044_);
lean_closure_set(v___f_2045_, 3, v___x_2041_);
lean_closure_set(v___f_2045_, 4, v___x_2034_);
v___x_2046_ = lean_st_ref_get(v_a_1908_);
v_env_2047_ = lean_ctor_get(v___x_2046_, 0);
lean_inc_ref(v_env_2047_);
lean_dec(v___x_2046_);
v___x_2048_ = l_Lean_Environment_unlockAsync(v_env_2047_);
v___x_2049_ = l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___redArg(v___x_2048_, v___f_2045_, v_a_1903_, v_a_1904_, v_a_1905_, v_a_1906_, v_a_1907_, v_a_1908_);
if (lean_obj_tag(v___x_2049_) == 0)
{
lean_object* v_a_2050_; lean_object* v_snd_2051_; lean_object* v_fst_2052_; lean_object* v___x_2054_; uint8_t v_isShared_2055_; uint8_t v_isSharedCheck_2234_; 
v_a_2050_ = lean_ctor_get(v___x_2049_, 0);
lean_inc(v_a_2050_);
lean_dec_ref_known(v___x_2049_, 1);
v_snd_2051_ = lean_ctor_get(v_a_2050_, 1);
v_fst_2052_ = lean_ctor_get(v_a_2050_, 0);
v_isSharedCheck_2234_ = !lean_is_exclusive(v_a_2050_);
if (v_isSharedCheck_2234_ == 0)
{
v___x_2054_ = v_a_2050_;
v_isShared_2055_ = v_isSharedCheck_2234_;
goto v_resetjp_2053_;
}
else
{
lean_inc(v_snd_2051_);
lean_inc(v_fst_2052_);
lean_dec(v_a_2050_);
v___x_2054_ = lean_box(0);
v_isShared_2055_ = v_isSharedCheck_2234_;
goto v_resetjp_2053_;
}
v_resetjp_2053_:
{
lean_object* v_fst_2056_; lean_object* v_snd_2057_; lean_object* v___x_2059_; uint8_t v_isShared_2060_; uint8_t v_isSharedCheck_2233_; 
v_fst_2056_ = lean_ctor_get(v_snd_2051_, 0);
v_snd_2057_ = lean_ctor_get(v_snd_2051_, 1);
v_isSharedCheck_2233_ = !lean_is_exclusive(v_snd_2051_);
if (v_isSharedCheck_2233_ == 0)
{
v___x_2059_ = v_snd_2051_;
v_isShared_2060_ = v_isSharedCheck_2233_;
goto v_resetjp_2058_;
}
else
{
lean_inc(v_snd_2057_);
lean_inc(v_fst_2056_);
lean_dec(v_snd_2051_);
v___x_2059_ = lean_box(0);
v_isShared_2060_ = v_isSharedCheck_2233_;
goto v_resetjp_2058_;
}
v_resetjp_2058_:
{
lean_object* v___y_2062_; uint8_t v___y_2063_; lean_object* v___y_2064_; lean_object* v___y_2065_; lean_object* v___y_2066_; lean_object* v___y_2067_; lean_object* v___y_2068_; lean_object* v___y_2069_; lean_object* v___y_2070_; lean_object* v___f_2117_; lean_object* v___x_2118_; lean_object* v___y_2120_; lean_object* v___y_2121_; lean_object* v_wf_2122_; lean_object* v___y_2123_; lean_object* v___y_2124_; lean_object* v___y_2125_; lean_object* v___y_2126_; lean_object* v___y_2127_; lean_object* v___y_2128_; lean_object* v___y_2165_; lean_object* v___y_2166_; lean_object* v___y_2167_; lean_object* v___y_2168_; lean_object* v___y_2169_; lean_object* v___y_2170_; lean_object* v___y_2171_; lean_object* v___y_2172_; lean_object* v___y_2173_; lean_object* v___y_2187_; lean_object* v___y_2188_; lean_object* v___y_2189_; lean_object* v___y_2190_; lean_object* v___y_2191_; lean_object* v___y_2192_; lean_object* v___x_2224_; lean_object* v_a_2225_; uint8_t v___x_2226_; 
lean_inc(v_snd_2057_);
v___f_2117_ = lean_alloc_closure((void*)(l_Lean_Elab_wfRecursion___lam__1___boxed), 8, 1);
lean_closure_set(v___f_2117_, 0, v_snd_2057_);
v___x_2118_ = ((lean_object*)(l_Lean_Elab_wfRecursion___closed__5));
v___x_2224_ = l_Lean_Elab_wfRecursion___lam__2(v___x_2118_, v_a_1903_, v_a_1904_, v_a_1905_, v_a_1906_, v_a_1907_, v_a_1908_);
v_a_2225_ = lean_ctor_get(v___x_2224_, 0);
lean_inc(v_a_2225_);
lean_dec_ref(v___x_2224_);
v___x_2226_ = lean_unbox(v_a_2225_);
lean_dec(v_a_2225_);
if (v___x_2226_ == 0)
{
v___y_2187_ = v_a_1903_;
v___y_2188_ = v_a_1904_;
v___y_2189_ = v_a_1905_;
v___y_2190_ = v_a_1906_;
v___y_2191_ = v_a_1907_;
v___y_2192_ = v_a_1908_;
goto v___jp_2186_;
}
else
{
lean_object* v_value_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; 
v_value_2227_ = lean_ctor_get(v_snd_2057_, 7);
v___x_2228_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__13, &l_Lean_Elab_wfRecursion___closed__13_once, _init_l_Lean_Elab_wfRecursion___closed__13);
lean_inc_ref(v_value_2227_);
v___x_2229_ = l_Lean_MessageData_ofExpr(v_value_2227_);
v___x_2230_ = l_Lean_indentD(v___x_2229_);
v___x_2231_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2231_, 0, v___x_2228_);
lean_ctor_set(v___x_2231_, 1, v___x_2230_);
v___x_2232_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(v___x_2118_, v___x_2231_, v_a_1905_, v_a_1906_, v_a_1907_, v_a_1908_);
if (lean_obj_tag(v___x_2232_) == 0)
{
lean_dec_ref_known(v___x_2232_, 1);
v___y_2187_ = v_a_1903_;
v___y_2188_ = v_a_1904_;
v___y_2189_ = v_a_1905_;
v___y_2190_ = v_a_1906_;
v___y_2191_ = v_a_1907_;
v___y_2192_ = v_a_1908_;
goto v___jp_2186_;
}
else
{
lean_dec_ref(v___f_2117_);
lean_del_object(v___x_2059_);
lean_dec(v_snd_2057_);
lean_dec(v_fst_2056_);
lean_del_object(v___x_2054_);
lean_dec(v_fst_2052_);
lean_dec(v_a_2040_);
lean_dec(v_termMeasures_x3f_2037_);
lean_dec_ref(v_docCtx_1900_);
return v___x_2232_;
}
}
v___jp_2061_:
{
lean_object* v___x_2071_; 
lean_inc_ref(v___y_2064_);
lean_inc(v_a_2040_);
lean_inc(v_fst_2056_);
lean_inc(v_fst_2052_);
v___x_2071_ = l_Lean_Elab_WF_preDefsFromUnaryNonRec(v_fst_2052_, v_fst_2056_, v_a_2040_, v___y_2064_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_);
if (lean_obj_tag(v___x_2071_) == 0)
{
lean_object* v_a_2072_; lean_object* v___x_2073_; 
v_a_2072_ = lean_ctor_get(v___x_2071_, 0);
lean_inc(v_a_2072_);
lean_dec_ref_known(v___x_2071_, 1);
lean_inc_ref(v___y_2064_);
lean_inc(v_a_2040_);
lean_inc_ref(v_docCtx_1900_);
v___x_2073_ = l_Lean_Elab_Mutual_addPreDefsFromUnary(v_docCtx_1900_, v_a_2040_, v_a_2072_, v___y_2064_, v___y_2063_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_);
lean_dec(v_a_2072_);
if (lean_obj_tag(v___x_2073_) == 0)
{
lean_object* v___x_2074_; 
lean_dec_ref_known(v___x_2073_, 1);
lean_inc(v_a_2040_);
v___x_2074_ = l_Lean_Elab_addAndCompilePartialRec(v_docCtx_1900_, v_a_2040_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_);
if (lean_obj_tag(v___x_2074_) == 0)
{
lean_object* v___x_2075_; 
lean_dec_ref_known(v___x_2074_, 1);
v___x_2075_ = l_Lean_Elab_Mutual_cleanPreDef(v_snd_2057_, v___y_2063_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_);
if (lean_obj_tag(v___x_2075_) == 0)
{
lean_object* v_a_2076_; lean_object* v___x_2077_; 
v_a_2076_ = lean_ctor_get(v___x_2075_, 0);
lean_inc(v_a_2076_);
lean_dec_ref_known(v___x_2075_, 1);
v___x_2077_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___redArg(v_sz_2042_, v___x_2036_, v_a_2040_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_);
if (lean_obj_tag(v___x_2077_) == 0)
{
lean_object* v_a_2078_; lean_object* v_declName_2079_; lean_object* v___x_2080_; 
v_a_2078_ = lean_ctor_get(v___x_2077_, 0);
lean_inc_n(v_a_2078_, 2);
lean_dec_ref_known(v___x_2077_, 1);
v_declName_2079_ = lean_ctor_get(v___y_2064_, 3);
lean_inc_n(v_declName_2079_, 2);
lean_dec_ref(v___y_2064_);
v___x_2080_ = l_Lean_Elab_WF_registerEqnsInfo(v_a_2078_, v_declName_2079_, v_fst_2052_, v_fst_2056_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_);
if (lean_obj_tag(v___x_2080_) == 0)
{
lean_object* v_declName_2081_; lean_object* v_type_2082_; lean_object* v___x_2083_; lean_object* v___f_2084_; lean_object* v___x_2085_; 
lean_dec_ref_known(v___x_2080_, 1);
v_declName_2081_ = lean_ctor_get(v_a_2076_, 3);
lean_inc(v_declName_2081_);
v_type_2082_ = lean_ctor_get(v_a_2076_, 6);
lean_inc_ref(v_type_2082_);
v___x_2083_ = ((lean_object*)(l_Lean_Elab_wfRecursion___boxed__const__1));
v___f_2084_ = lean_alloc_closure((void*)(l_Lean_Elab_wfRecursion___lam__3___boxed), 14, 7);
lean_closure_set(v___f_2084_, 0, v_a_2078_);
lean_closure_set(v___f_2084_, 1, v_declName_2079_);
lean_closure_set(v___f_2084_, 2, v___x_2083_);
lean_closure_set(v___f_2084_, 3, v___x_2041_);
lean_closure_set(v___f_2084_, 4, v_type_2082_);
lean_closure_set(v___f_2084_, 5, v_a_2076_);
lean_closure_set(v___f_2084_, 6, v___y_2062_);
v___x_2085_ = l_Lean_Meta_markAsRecursive___redArg(v_declName_2081_, v___y_2070_);
if (lean_obj_tag(v___x_2085_) == 0)
{
lean_object* v_toCold_2086_; uint8_t v_isRecordingDeps_2087_; lean_object* v_options_2088_; uint8_t v___x_2089_; 
lean_dec_ref_known(v___x_2085_, 1);
v_toCold_2086_ = lean_ctor_get(v___y_2069_, 0);
v_isRecordingDeps_2087_ = lean_ctor_get_uint8(v___y_2069_, sizeof(void*)*3 + 3);
v_options_2088_ = lean_ctor_get(v_toCold_2086_, 2);
v___x_2089_ = 1;
if (v_isRecordingDeps_2087_ == 0)
{
lean_object* v___x_2090_; lean_object* v___x_2091_; 
v___x_2090_ = ((lean_object*)(l_Lean_Elab_wfRecursion___closed__2));
lean_inc_ref(v_options_2088_);
v___x_2091_ = l_Lean_Options_set___at___00Lean_Elab_wfRecursion_spec__19(v_options_2088_, v___x_2090_, v_isRecordingDeps_2087_);
v___y_2015_ = v___y_2063_;
v___y_2016_ = v___y_2070_;
v___y_2017_ = v___y_2065_;
v___y_2018_ = v___x_2089_;
v___y_2019_ = v___y_2068_;
v___y_2020_ = v___y_2069_;
v___y_2021_ = v___f_2084_;
v___y_2022_ = v___y_2066_;
v___y_2023_ = v___y_2067_;
v___y_2024_ = v___x_2091_;
goto v___jp_2014_;
}
else
{
lean_object* v___x_2092_; 
lean_inc_ref(v_options_2088_);
v___x_2092_ = l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(v_options_2088_);
v___y_2015_ = v___y_2063_;
v___y_2016_ = v___y_2070_;
v___y_2017_ = v___y_2065_;
v___y_2018_ = v___x_2089_;
v___y_2019_ = v___y_2068_;
v___y_2020_ = v___y_2069_;
v___y_2021_ = v___f_2084_;
v___y_2022_ = v___y_2066_;
v___y_2023_ = v___y_2067_;
v___y_2024_ = v___x_2092_;
goto v___jp_2014_;
}
}
else
{
lean_dec_ref(v___f_2084_);
return v___x_2085_;
}
}
else
{
lean_dec(v_declName_2079_);
lean_dec(v_a_2078_);
lean_dec(v_a_2076_);
lean_dec_ref(v___y_2062_);
return v___x_2080_;
}
}
else
{
lean_object* v_a_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2100_; 
lean_dec(v_a_2076_);
lean_dec_ref(v___y_2064_);
lean_dec_ref(v___y_2062_);
lean_dec(v_fst_2056_);
lean_dec(v_fst_2052_);
v_a_2093_ = lean_ctor_get(v___x_2077_, 0);
v_isSharedCheck_2100_ = !lean_is_exclusive(v___x_2077_);
if (v_isSharedCheck_2100_ == 0)
{
v___x_2095_ = v___x_2077_;
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_a_2093_);
lean_dec(v___x_2077_);
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
lean_dec_ref(v___y_2064_);
lean_dec_ref(v___y_2062_);
lean_dec(v_fst_2056_);
lean_dec(v_fst_2052_);
lean_dec(v_a_2040_);
v_a_2101_ = lean_ctor_get(v___x_2075_, 0);
v_isSharedCheck_2108_ = !lean_is_exclusive(v___x_2075_);
if (v_isSharedCheck_2108_ == 0)
{
v___x_2103_ = v___x_2075_;
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_a_2101_);
lean_dec(v___x_2075_);
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
else
{
lean_dec_ref(v___y_2064_);
lean_dec_ref(v___y_2062_);
lean_dec(v_snd_2057_);
lean_dec(v_fst_2056_);
lean_dec(v_fst_2052_);
lean_dec(v_a_2040_);
return v___x_2074_;
}
}
else
{
lean_dec_ref(v___y_2064_);
lean_dec_ref(v___y_2062_);
lean_dec(v_snd_2057_);
lean_dec(v_fst_2056_);
lean_dec(v_fst_2052_);
lean_dec(v_a_2040_);
lean_dec_ref(v_docCtx_1900_);
return v___x_2073_;
}
}
else
{
lean_object* v_a_2109_; lean_object* v___x_2111_; uint8_t v_isShared_2112_; uint8_t v_isSharedCheck_2116_; 
lean_dec_ref(v___y_2064_);
lean_dec_ref(v___y_2062_);
lean_dec(v_snd_2057_);
lean_dec(v_fst_2056_);
lean_dec(v_fst_2052_);
lean_dec(v_a_2040_);
lean_dec_ref(v_docCtx_1900_);
v_a_2109_ = lean_ctor_get(v___x_2071_, 0);
v_isSharedCheck_2116_ = !lean_is_exclusive(v___x_2071_);
if (v_isSharedCheck_2116_ == 0)
{
v___x_2111_ = v___x_2071_;
v_isShared_2112_ = v_isSharedCheck_2116_;
goto v_resetjp_2110_;
}
else
{
lean_inc(v_a_2109_);
lean_dec(v___x_2071_);
v___x_2111_ = lean_box(0);
v_isShared_2112_ = v_isSharedCheck_2116_;
goto v_resetjp_2110_;
}
v_resetjp_2110_:
{
lean_object* v___x_2114_; 
if (v_isShared_2112_ == 0)
{
v___x_2114_ = v___x_2111_;
goto v_reusejp_2113_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v_a_2109_);
v___x_2114_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
return v___x_2114_;
}
}
}
}
v___jp_2119_:
{
lean_object* v_declName_2129_; lean_object* v_type_2130_; lean_object* v_numFixed_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___f_2134_; lean_object* v___x_2135_; uint8_t v___x_2136_; lean_object* v___x_2137_; 
v_declName_2129_ = lean_ctor_get(v_snd_2057_, 3);
v_type_2130_ = lean_ctor_get(v_snd_2057_, 6);
v_numFixed_2131_ = lean_ctor_get(v_fst_2052_, 0);
v___x_2132_ = lean_box_usize(v_sz_2042_);
v___x_2133_ = ((lean_object*)(l_Lean_Elab_wfRecursion___boxed__const__1));
lean_inc(v_fst_2052_);
lean_inc(v_declName_2129_);
lean_inc(v_fst_2056_);
lean_inc(v_snd_2057_);
lean_inc(v_a_2040_);
v___f_2134_ = lean_alloc_closure((void*)(l_Lean_Elab_wfRecursion___lam__5___boxed), 20, 11);
lean_closure_set(v___f_2134_, 0, v___x_2132_);
lean_closure_set(v___f_2134_, 1, v___x_2133_);
lean_closure_set(v___f_2134_, 2, v_a_2040_);
lean_closure_set(v___f_2134_, 3, v___y_2121_);
lean_closure_set(v___f_2134_, 4, v_snd_2057_);
lean_closure_set(v___f_2134_, 5, v_fst_2056_);
lean_closure_set(v___f_2134_, 6, v___x_2041_);
lean_closure_set(v___f_2134_, 7, v___x_2118_);
lean_closure_set(v___f_2134_, 8, v_declName_2129_);
lean_closure_set(v___f_2134_, 9, v_fst_2052_);
lean_closure_set(v___f_2134_, 10, v_wf_2122_);
lean_inc(v_numFixed_2131_);
v___x_2135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2135_, 0, v_numFixed_2131_);
v___x_2136_ = 0;
lean_inc_ref(v_type_2130_);
v___x_2137_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg(v_type_2130_, v___x_2135_, v___f_2134_, v___x_2136_, v___x_2136_, v___y_2123_, v___y_2124_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_);
if (lean_obj_tag(v___x_2137_) == 0)
{
lean_object* v_a_2138_; lean_object* v___x_2139_; lean_object* v_a_2140_; uint8_t v___x_2141_; 
v_a_2138_ = lean_ctor_get(v___x_2137_, 0);
lean_inc(v_a_2138_);
lean_dec_ref_known(v___x_2137_, 1);
v___x_2139_ = l_Lean_Elab_wfRecursion___lam__2(v___x_2118_, v___y_2123_, v___y_2124_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_);
v_a_2140_ = lean_ctor_get(v___x_2139_, 0);
lean_inc(v_a_2140_);
lean_dec_ref(v___x_2139_);
v___x_2141_ = lean_unbox(v_a_2140_);
lean_dec(v_a_2140_);
if (v___x_2141_ == 0)
{
lean_del_object(v___x_2059_);
lean_del_object(v___x_2054_);
v___y_2062_ = v___y_2120_;
v___y_2063_ = v___x_2136_;
v___y_2064_ = v_a_2138_;
v___y_2065_ = v___y_2123_;
v___y_2066_ = v___y_2124_;
v___y_2067_ = v___y_2125_;
v___y_2068_ = v___y_2126_;
v___y_2069_ = v___y_2127_;
v___y_2070_ = v___y_2128_;
goto v___jp_2061_;
}
else
{
lean_object* v_declName_2142_; lean_object* v_value_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2147_; 
v_declName_2142_ = lean_ctor_get(v_a_2138_, 3);
v_value_2143_ = lean_ctor_get(v_a_2138_, 7);
v___x_2144_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__7, &l_Lean_Elab_wfRecursion___closed__7_once, _init_l_Lean_Elab_wfRecursion___closed__7);
lean_inc(v_declName_2142_);
v___x_2145_ = l_Lean_MessageData_ofName(v_declName_2142_);
if (v_isShared_2060_ == 0)
{
lean_ctor_set_tag(v___x_2059_, 7);
lean_ctor_set(v___x_2059_, 1, v___x_2145_);
lean_ctor_set(v___x_2059_, 0, v___x_2144_);
v___x_2147_ = v___x_2059_;
goto v_reusejp_2146_;
}
else
{
lean_object* v_reuseFailAlloc_2155_; 
v_reuseFailAlloc_2155_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2155_, 0, v___x_2144_);
lean_ctor_set(v_reuseFailAlloc_2155_, 1, v___x_2145_);
v___x_2147_ = v_reuseFailAlloc_2155_;
goto v_reusejp_2146_;
}
v_reusejp_2146_:
{
lean_object* v___x_2148_; lean_object* v___x_2150_; 
v___x_2148_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__9, &l_Lean_Elab_wfRecursion___closed__9_once, _init_l_Lean_Elab_wfRecursion___closed__9);
if (v_isShared_2055_ == 0)
{
lean_ctor_set_tag(v___x_2054_, 7);
lean_ctor_set(v___x_2054_, 1, v___x_2148_);
lean_ctor_set(v___x_2054_, 0, v___x_2147_);
v___x_2150_ = v___x_2054_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2154_; 
v_reuseFailAlloc_2154_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2154_, 0, v___x_2147_);
lean_ctor_set(v_reuseFailAlloc_2154_, 1, v___x_2148_);
v___x_2150_ = v_reuseFailAlloc_2154_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; 
lean_inc_ref(v_value_2143_);
v___x_2151_ = l_Lean_MessageData_ofExpr(v_value_2143_);
v___x_2152_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2152_, 0, v___x_2150_);
lean_ctor_set(v___x_2152_, 1, v___x_2151_);
v___x_2153_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(v___x_2118_, v___x_2152_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_);
if (lean_obj_tag(v___x_2153_) == 0)
{
lean_dec_ref_known(v___x_2153_, 1);
v___y_2062_ = v___y_2120_;
v___y_2063_ = v___x_2136_;
v___y_2064_ = v_a_2138_;
v___y_2065_ = v___y_2123_;
v___y_2066_ = v___y_2124_;
v___y_2067_ = v___y_2125_;
v___y_2068_ = v___y_2126_;
v___y_2069_ = v___y_2127_;
v___y_2070_ = v___y_2128_;
goto v___jp_2061_;
}
else
{
lean_dec(v_a_2138_);
lean_dec_ref(v___y_2120_);
lean_dec(v_snd_2057_);
lean_dec(v_fst_2056_);
lean_dec(v_fst_2052_);
lean_dec(v_a_2040_);
lean_dec_ref(v_docCtx_1900_);
return v___x_2153_;
}
}
}
}
}
else
{
lean_object* v_a_2156_; lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2163_; 
lean_dec_ref(v___y_2120_);
lean_del_object(v___x_2059_);
lean_dec(v_snd_2057_);
lean_dec(v_fst_2056_);
lean_del_object(v___x_2054_);
lean_dec(v_fst_2052_);
lean_dec(v_a_2040_);
lean_dec_ref(v_docCtx_1900_);
v_a_2156_ = lean_ctor_get(v___x_2137_, 0);
v_isSharedCheck_2163_ = !lean_is_exclusive(v___x_2137_);
if (v_isSharedCheck_2163_ == 0)
{
v___x_2158_ = v___x_2137_;
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
else
{
lean_inc(v_a_2156_);
lean_dec(v___x_2137_);
v___x_2158_ = lean_box(0);
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
v_resetjp_2157_:
{
lean_object* v___x_2161_; 
if (v_isShared_2159_ == 0)
{
v___x_2161_ = v___x_2158_;
goto v_reusejp_2160_;
}
else
{
lean_object* v_reuseFailAlloc_2162_; 
v_reuseFailAlloc_2162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2162_, 0, v_a_2156_);
v___x_2161_ = v_reuseFailAlloc_2162_;
goto v_reusejp_2160_;
}
v_reusejp_2160_:
{
return v___x_2161_;
}
}
}
}
v___jp_2164_:
{
if (lean_obj_tag(v_termMeasures_x3f_2037_) == 1)
{
lean_object* v_val_2174_; 
lean_dec_ref(v___y_2167_);
v_val_2174_ = lean_ctor_get(v_termMeasures_x3f_2037_, 0);
lean_inc(v_val_2174_);
lean_dec_ref_known(v_termMeasures_x3f_2037_, 1);
v___y_2120_ = v___y_2165_;
v___y_2121_ = v___y_2166_;
v_wf_2122_ = v_val_2174_;
v___y_2123_ = v___y_2168_;
v___y_2124_ = v___y_2169_;
v___y_2125_ = v___y_2170_;
v___y_2126_ = v___y_2171_;
v___y_2127_ = v___y_2172_;
v___y_2128_ = v___y_2173_;
goto v___jp_2119_;
}
else
{
uint8_t v___x_2175_; lean_object* v___x_2176_; 
lean_dec(v_termMeasures_x3f_2037_);
v___x_2175_ = 1;
v___x_2176_ = l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20___redArg(v___y_2167_, v___x_2175_, v___y_2168_, v___y_2169_, v___y_2170_, v___y_2171_, v___y_2172_, v___y_2173_);
if (lean_obj_tag(v___x_2176_) == 0)
{
lean_object* v_a_2177_; 
v_a_2177_ = lean_ctor_get(v___x_2176_, 0);
lean_inc(v_a_2177_);
lean_dec_ref_known(v___x_2176_, 1);
v___y_2120_ = v___y_2165_;
v___y_2121_ = v___y_2166_;
v_wf_2122_ = v_a_2177_;
v___y_2123_ = v___y_2168_;
v___y_2124_ = v___y_2169_;
v___y_2125_ = v___y_2170_;
v___y_2126_ = v___y_2171_;
v___y_2127_ = v___y_2172_;
v___y_2128_ = v___y_2173_;
goto v___jp_2119_;
}
else
{
lean_object* v_a_2178_; lean_object* v___x_2180_; uint8_t v_isShared_2181_; uint8_t v_isSharedCheck_2185_; 
lean_dec_ref(v___y_2166_);
lean_dec_ref(v___y_2165_);
lean_del_object(v___x_2059_);
lean_dec(v_snd_2057_);
lean_dec(v_fst_2056_);
lean_del_object(v___x_2054_);
lean_dec(v_fst_2052_);
lean_dec(v_a_2040_);
lean_dec_ref(v_docCtx_1900_);
v_a_2178_ = lean_ctor_get(v___x_2176_, 0);
v_isSharedCheck_2185_ = !lean_is_exclusive(v___x_2176_);
if (v_isSharedCheck_2185_ == 0)
{
v___x_2180_ = v___x_2176_;
v_isShared_2181_ = v_isSharedCheck_2185_;
goto v_resetjp_2179_;
}
else
{
lean_inc(v_a_2178_);
lean_dec(v___x_2176_);
v___x_2180_ = lean_box(0);
v_isShared_2181_ = v_isSharedCheck_2185_;
goto v_resetjp_2179_;
}
v_resetjp_2179_:
{
lean_object* v___x_2183_; 
if (v_isShared_2181_ == 0)
{
v___x_2183_ = v___x_2180_;
goto v_reusejp_2182_;
}
else
{
lean_object* v_reuseFailAlloc_2184_; 
v_reuseFailAlloc_2184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2184_, 0, v_a_2178_);
v___x_2183_ = v_reuseFailAlloc_2184_;
goto v_reusejp_2182_;
}
v_reusejp_2182_:
{
return v___x_2183_;
}
}
}
}
}
v___jp_2186_:
{
lean_object* v___x_2193_; lean_object* v_env_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; 
v___x_2193_ = lean_st_ref_get(v___y_2192_);
v_env_2194_ = lean_ctor_get(v___x_2193_, 0);
lean_inc_ref(v_env_2194_);
lean_dec(v___x_2193_);
v___x_2195_ = l_Lean_Environment_unlockAsync(v_env_2194_);
v___x_2196_ = l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___redArg(v___x_2195_, v___f_2117_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_);
if (lean_obj_tag(v___x_2196_) == 0)
{
lean_object* v_a_2197_; lean_object* v_fst_2198_; lean_object* v_snd_2199_; lean_object* v___x_2201_; uint8_t v_isShared_2202_; uint8_t v_isSharedCheck_2215_; 
v_a_2197_ = lean_ctor_get(v___x_2196_, 0);
lean_inc(v_a_2197_);
lean_dec_ref_known(v___x_2196_, 1);
v_fst_2198_ = lean_ctor_get(v_a_2197_, 0);
v_snd_2199_ = lean_ctor_get(v_a_2197_, 1);
v_isSharedCheck_2215_ = !lean_is_exclusive(v_a_2197_);
if (v_isSharedCheck_2215_ == 0)
{
v___x_2201_ = v_a_2197_;
v_isShared_2202_ = v_isSharedCheck_2215_;
goto v_resetjp_2200_;
}
else
{
lean_inc(v_snd_2199_);
lean_inc(v_fst_2198_);
lean_dec(v_a_2197_);
v___x_2201_ = lean_box(0);
v_isShared_2202_ = v_isSharedCheck_2215_;
goto v_resetjp_2200_;
}
v_resetjp_2200_:
{
lean_object* v___f_2203_; lean_object* v___x_2204_; lean_object* v_a_2205_; uint8_t v___x_2206_; 
lean_inc(v_fst_2056_);
lean_inc(v_fst_2052_);
lean_inc(v_fst_2198_);
lean_inc(v_a_2040_);
v___f_2203_ = lean_alloc_closure((void*)(l_Lean_Elab_wfRecursion___lam__6___boxed), 11, 4);
lean_closure_set(v___f_2203_, 0, v_a_2040_);
lean_closure_set(v___f_2203_, 1, v_fst_2198_);
lean_closure_set(v___f_2203_, 2, v_fst_2052_);
lean_closure_set(v___f_2203_, 3, v_fst_2056_);
v___x_2204_ = l_Lean_Elab_wfRecursion___lam__2(v___x_2118_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_);
v_a_2205_ = lean_ctor_get(v___x_2204_, 0);
lean_inc(v_a_2205_);
lean_dec_ref(v___x_2204_);
v___x_2206_ = lean_unbox(v_a_2205_);
lean_dec(v_a_2205_);
if (v___x_2206_ == 0)
{
lean_del_object(v___x_2201_);
v___y_2165_ = v_snd_2199_;
v___y_2166_ = v_fst_2198_;
v___y_2167_ = v___f_2203_;
v___y_2168_ = v___y_2187_;
v___y_2169_ = v___y_2188_;
v___y_2170_ = v___y_2189_;
v___y_2171_ = v___y_2190_;
v___y_2172_ = v___y_2191_;
v___y_2173_ = v___y_2192_;
goto v___jp_2164_;
}
else
{
lean_object* v_value_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2212_; 
v_value_2207_ = lean_ctor_get(v_snd_2057_, 7);
v___x_2208_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__11, &l_Lean_Elab_wfRecursion___closed__11_once, _init_l_Lean_Elab_wfRecursion___closed__11);
lean_inc_ref(v_value_2207_);
v___x_2209_ = l_Lean_MessageData_ofExpr(v_value_2207_);
v___x_2210_ = l_Lean_indentD(v___x_2209_);
if (v_isShared_2202_ == 0)
{
lean_ctor_set_tag(v___x_2201_, 7);
lean_ctor_set(v___x_2201_, 1, v___x_2210_);
lean_ctor_set(v___x_2201_, 0, v___x_2208_);
v___x_2212_ = v___x_2201_;
goto v_reusejp_2211_;
}
else
{
lean_object* v_reuseFailAlloc_2214_; 
v_reuseFailAlloc_2214_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2214_, 0, v___x_2208_);
lean_ctor_set(v_reuseFailAlloc_2214_, 1, v___x_2210_);
v___x_2212_ = v_reuseFailAlloc_2214_;
goto v_reusejp_2211_;
}
v_reusejp_2211_:
{
lean_object* v___x_2213_; 
v___x_2213_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(v___x_2118_, v___x_2212_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_);
if (lean_obj_tag(v___x_2213_) == 0)
{
lean_dec_ref_known(v___x_2213_, 1);
v___y_2165_ = v_snd_2199_;
v___y_2166_ = v_fst_2198_;
v___y_2167_ = v___f_2203_;
v___y_2168_ = v___y_2187_;
v___y_2169_ = v___y_2188_;
v___y_2170_ = v___y_2189_;
v___y_2171_ = v___y_2190_;
v___y_2172_ = v___y_2191_;
v___y_2173_ = v___y_2192_;
goto v___jp_2164_;
}
else
{
lean_dec_ref(v___f_2203_);
lean_dec(v_snd_2199_);
lean_dec(v_fst_2198_);
lean_del_object(v___x_2059_);
lean_dec(v_snd_2057_);
lean_dec(v_fst_2056_);
lean_del_object(v___x_2054_);
lean_dec(v_fst_2052_);
lean_dec(v_a_2040_);
lean_dec(v_termMeasures_x3f_2037_);
lean_dec_ref(v_docCtx_1900_);
return v___x_2213_;
}
}
}
}
}
else
{
lean_object* v_a_2216_; lean_object* v___x_2218_; uint8_t v_isShared_2219_; uint8_t v_isSharedCheck_2223_; 
lean_del_object(v___x_2059_);
lean_dec(v_snd_2057_);
lean_dec(v_fst_2056_);
lean_del_object(v___x_2054_);
lean_dec(v_fst_2052_);
lean_dec(v_a_2040_);
lean_dec(v_termMeasures_x3f_2037_);
lean_dec_ref(v_docCtx_1900_);
v_a_2216_ = lean_ctor_get(v___x_2196_, 0);
v_isSharedCheck_2223_ = !lean_is_exclusive(v___x_2196_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2218_ = v___x_2196_;
v_isShared_2219_ = v_isSharedCheck_2223_;
goto v_resetjp_2217_;
}
else
{
lean_inc(v_a_2216_);
lean_dec(v___x_2196_);
v___x_2218_ = lean_box(0);
v_isShared_2219_ = v_isSharedCheck_2223_;
goto v_resetjp_2217_;
}
v_resetjp_2217_:
{
lean_object* v___x_2221_; 
if (v_isShared_2219_ == 0)
{
v___x_2221_ = v___x_2218_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v_a_2216_);
v___x_2221_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
return v___x_2221_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2235_; lean_object* v___x_2237_; uint8_t v_isShared_2238_; uint8_t v_isSharedCheck_2242_; 
lean_dec(v_a_2040_);
lean_dec(v_termMeasures_x3f_2037_);
lean_dec_ref(v_docCtx_1900_);
v_a_2235_ = lean_ctor_get(v___x_2049_, 0);
v_isSharedCheck_2242_ = !lean_is_exclusive(v___x_2049_);
if (v_isSharedCheck_2242_ == 0)
{
v___x_2237_ = v___x_2049_;
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
else
{
lean_inc(v_a_2235_);
lean_dec(v___x_2049_);
v___x_2237_ = lean_box(0);
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
v_resetjp_2236_:
{
lean_object* v___x_2240_; 
if (v_isShared_2238_ == 0)
{
v___x_2240_ = v___x_2237_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2241_; 
v_reuseFailAlloc_2241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2241_, 0, v_a_2235_);
v___x_2240_ = v_reuseFailAlloc_2241_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
return v___x_2240_;
}
}
}
}
else
{
lean_object* v_a_2243_; lean_object* v___x_2245_; uint8_t v_isShared_2246_; uint8_t v_isSharedCheck_2250_; 
lean_dec(v_termMeasures_x3f_2037_);
lean_dec_ref(v_docCtx_1900_);
v_a_2243_ = lean_ctor_get(v___x_2039_, 0);
v_isSharedCheck_2250_ = !lean_is_exclusive(v___x_2039_);
if (v_isSharedCheck_2250_ == 0)
{
v___x_2245_ = v___x_2039_;
v_isShared_2246_ = v_isSharedCheck_2250_;
goto v_resetjp_2244_;
}
else
{
lean_inc(v_a_2243_);
lean_dec(v___x_2039_);
v___x_2245_ = lean_box(0);
v_isShared_2246_ = v_isSharedCheck_2250_;
goto v_resetjp_2244_;
}
v_resetjp_2244_:
{
lean_object* v___x_2248_; 
if (v_isShared_2246_ == 0)
{
v___x_2248_ = v___x_2245_;
goto v_reusejp_2247_;
}
else
{
lean_object* v_reuseFailAlloc_2249_; 
v_reuseFailAlloc_2249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2249_, 0, v_a_2243_);
v___x_2248_ = v_reuseFailAlloc_2249_;
goto v_reusejp_2247_;
}
v_reusejp_2247_:
{
return v___x_2248_;
}
}
}
v___jp_1910_:
{
if (lean_obj_tag(v___y_1911_) == 0)
{
return v___y_1911_;
}
else
{
lean_object* v_a_1912_; lean_object* v___x_1914_; uint8_t v_isShared_1915_; uint8_t v_isSharedCheck_1919_; 
v_a_1912_ = lean_ctor_get(v___y_1911_, 0);
v_isSharedCheck_1919_ = !lean_is_exclusive(v___y_1911_);
if (v_isSharedCheck_1919_ == 0)
{
v___x_1914_ = v___y_1911_;
v_isShared_1915_ = v_isSharedCheck_1919_;
goto v_resetjp_1913_;
}
else
{
lean_inc(v_a_1912_);
lean_dec(v___y_1911_);
v___x_1914_ = lean_box(0);
v_isShared_1915_ = v_isSharedCheck_1919_;
goto v_resetjp_1913_;
}
v_resetjp_1913_:
{
lean_object* v___x_1917_; 
if (v_isShared_1915_ == 0)
{
v___x_1917_ = v___x_1914_;
goto v_reusejp_1916_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v_a_1912_);
v___x_1917_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1916_;
}
v_reusejp_1916_:
{
return v___x_1917_;
}
}
}
}
v___jp_1920_:
{
lean_object* v_toCold_1931_; lean_object* v_currRecDepth_1932_; lean_object* v_ref_1933_; uint8_t v_suppressElabErrors_1934_; uint8_t v_isRecordingDeps_1935_; lean_object* v_fileName_1936_; lean_object* v_fileMap_1937_; lean_object* v_currNamespace_1938_; lean_object* v_openDecls_1939_; lean_object* v_initHeartbeats_1940_; lean_object* v_maxHeartbeats_1941_; lean_object* v_quotContext_1942_; lean_object* v_currMacroScope_1943_; lean_object* v_cancelTk_x3f_1944_; lean_object* v_inheritedTraceOptions_1945_; lean_object* v___x_1946_; uint8_t v_transparency_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; uint8_t v___x_1952_; 
v_toCold_1931_ = lean_ctor_get(v___y_1929_, 0);
v_currRecDepth_1932_ = lean_ctor_get(v___y_1929_, 1);
v_ref_1933_ = lean_ctor_get(v___y_1929_, 2);
v_suppressElabErrors_1934_ = lean_ctor_get_uint8(v___y_1929_, sizeof(void*)*3 + 2);
v_isRecordingDeps_1935_ = lean_ctor_get_uint8(v___y_1929_, sizeof(void*)*3 + 3);
v_fileName_1936_ = lean_ctor_get(v_toCold_1931_, 0);
v_fileMap_1937_ = lean_ctor_get(v_toCold_1931_, 1);
v_currNamespace_1938_ = lean_ctor_get(v_toCold_1931_, 4);
v_openDecls_1939_ = lean_ctor_get(v_toCold_1931_, 5);
v_initHeartbeats_1940_ = lean_ctor_get(v_toCold_1931_, 6);
v_maxHeartbeats_1941_ = lean_ctor_get(v_toCold_1931_, 7);
v_quotContext_1942_ = lean_ctor_get(v_toCold_1931_, 8);
v_currMacroScope_1943_ = lean_ctor_get(v_toCold_1931_, 9);
v_cancelTk_x3f_1944_ = lean_ctor_get(v_toCold_1931_, 10);
v_inheritedTraceOptions_1945_ = lean_ctor_get(v_toCold_1931_, 11);
v___x_1946_ = l_Lean_Meta_Context_config(v___y_1927_);
v_transparency_1947_ = lean_ctor_get_uint8(v___x_1946_, 9);
lean_dec_ref(v___x_1946_);
v___x_1948_ = l_Lean_maxRecDepth;
v___x_1949_ = l_Lean_Option_get___at___00Lean_Elab_wfRecursion_spec__18(v___y_1921_, v___x_1948_);
lean_inc_ref(v_inheritedTraceOptions_1945_);
lean_inc(v_cancelTk_x3f_1944_);
lean_inc(v_currMacroScope_1943_);
lean_inc(v_quotContext_1942_);
lean_inc(v_maxHeartbeats_1941_);
lean_inc(v_initHeartbeats_1940_);
lean_inc(v_openDecls_1939_);
lean_inc(v_currNamespace_1938_);
lean_inc_ref(v_fileMap_1937_);
lean_inc_ref(v_fileName_1936_);
v___x_1950_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_1950_, 0, v_fileName_1936_);
lean_ctor_set(v___x_1950_, 1, v_fileMap_1937_);
lean_ctor_set(v___x_1950_, 2, v___y_1921_);
lean_ctor_set(v___x_1950_, 3, v___x_1949_);
lean_ctor_set(v___x_1950_, 4, v_currNamespace_1938_);
lean_ctor_set(v___x_1950_, 5, v_openDecls_1939_);
lean_ctor_set(v___x_1950_, 6, v_initHeartbeats_1940_);
lean_ctor_set(v___x_1950_, 7, v_maxHeartbeats_1941_);
lean_ctor_set(v___x_1950_, 8, v_quotContext_1942_);
lean_ctor_set(v___x_1950_, 9, v_currMacroScope_1943_);
lean_ctor_set(v___x_1950_, 10, v_cancelTk_x3f_1944_);
lean_ctor_set(v___x_1950_, 11, v_inheritedTraceOptions_1945_);
lean_inc(v_ref_1933_);
lean_inc(v_currRecDepth_1932_);
v___x_1951_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_1951_, 0, v___x_1950_);
lean_ctor_set(v___x_1951_, 1, v_currRecDepth_1932_);
lean_ctor_set(v___x_1951_, 2, v_ref_1933_);
lean_ctor_set_uint16(v___x_1951_, sizeof(void*)*3, v___y_1928_);
lean_ctor_set_uint8(v___x_1951_, sizeof(void*)*3 + 2, v_suppressElabErrors_1934_);
lean_ctor_set_uint8(v___x_1951_, sizeof(void*)*3 + 3, v_isRecordingDeps_1935_);
v___x_1952_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1947_, v___y_1924_);
if (v___x_1952_ == 0)
{
lean_object* v_keyedConfig_1953_; uint8_t v_trackZetaDelta_1954_; lean_object* v_zetaDeltaSet_1955_; lean_object* v_lctx_1956_; lean_object* v_localInstances_1957_; lean_object* v_defEqCtx_x3f_1958_; lean_object* v_synthPendingDepth_1959_; lean_object* v_customCanUnfoldPredicate_x3f_1960_; uint8_t v_univApprox_1961_; uint8_t v_inTypeClassResolution_1962_; uint8_t v_cacheInferType_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; 
v_keyedConfig_1953_ = lean_ctor_get(v___y_1927_, 0);
v_trackZetaDelta_1954_ = lean_ctor_get_uint8(v___y_1927_, sizeof(void*)*7);
v_zetaDeltaSet_1955_ = lean_ctor_get(v___y_1927_, 1);
v_lctx_1956_ = lean_ctor_get(v___y_1927_, 2);
v_localInstances_1957_ = lean_ctor_get(v___y_1927_, 3);
v_defEqCtx_x3f_1958_ = lean_ctor_get(v___y_1927_, 4);
v_synthPendingDepth_1959_ = lean_ctor_get(v___y_1927_, 5);
v_customCanUnfoldPredicate_x3f_1960_ = lean_ctor_get(v___y_1927_, 6);
v_univApprox_1961_ = lean_ctor_get_uint8(v___y_1927_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1962_ = lean_ctor_get_uint8(v___y_1927_, sizeof(void*)*7 + 2);
v_cacheInferType_1963_ = lean_ctor_get_uint8(v___y_1927_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_1953_);
v___x_1964_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___y_1924_, v_keyedConfig_1953_);
lean_inc(v_customCanUnfoldPredicate_x3f_1960_);
lean_inc(v_synthPendingDepth_1959_);
lean_inc(v_defEqCtx_x3f_1958_);
lean_inc_ref(v_localInstances_1957_);
lean_inc_ref(v_lctx_1956_);
lean_inc(v_zetaDeltaSet_1955_);
v___x_1965_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1965_, 0, v___x_1964_);
lean_ctor_set(v___x_1965_, 1, v_zetaDeltaSet_1955_);
lean_ctor_set(v___x_1965_, 2, v_lctx_1956_);
lean_ctor_set(v___x_1965_, 3, v_localInstances_1957_);
lean_ctor_set(v___x_1965_, 4, v_defEqCtx_x3f_1958_);
lean_ctor_set(v___x_1965_, 5, v_synthPendingDepth_1959_);
lean_ctor_set(v___x_1965_, 6, v_customCanUnfoldPredicate_x3f_1960_);
lean_ctor_set_uint8(v___x_1965_, sizeof(void*)*7, v_trackZetaDelta_1954_);
lean_ctor_set_uint8(v___x_1965_, sizeof(void*)*7 + 1, v_univApprox_1961_);
lean_ctor_set_uint8(v___x_1965_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1962_);
lean_ctor_set_uint8(v___x_1965_, sizeof(void*)*7 + 3, v_cacheInferType_1963_);
lean_inc(v___y_1930_);
lean_inc(v___y_1923_);
lean_inc(v___y_1926_);
lean_inc_ref(v___y_1922_);
v___x_1966_ = lean_apply_7(v___y_1925_, v___y_1922_, v___y_1926_, v___x_1965_, v___y_1923_, v___x_1951_, v___y_1930_, lean_box(0));
v___y_1911_ = v___x_1966_;
goto v___jp_1910_;
}
else
{
lean_object* v___x_1967_; 
lean_inc(v___y_1930_);
lean_inc(v___y_1923_);
lean_inc_ref(v___y_1927_);
lean_inc(v___y_1926_);
lean_inc_ref(v___y_1922_);
v___x_1967_ = lean_apply_7(v___y_1925_, v___y_1922_, v___y_1926_, v___y_1927_, v___y_1923_, v___x_1951_, v___y_1930_, lean_box(0));
v___y_1911_ = v___x_1967_;
goto v___jp_1910_;
}
}
v___jp_1968_:
{
lean_object* v___x_1980_; lean_object* v_env_1981_; lean_object* v_nextMacroScope_1982_; lean_object* v_ngen_1983_; lean_object* v_auxDeclNGen_1984_; lean_object* v_traceState_1985_; lean_object* v_recordedDeps_1986_; lean_object* v_messages_1987_; lean_object* v_infoState_1988_; lean_object* v_snapshotTasks_1989_; lean_object* v___x_1991_; uint8_t v_isShared_1992_; uint8_t v_isSharedCheck_1999_; 
v___x_1980_ = lean_st_ref_take(v___y_1971_);
v_env_1981_ = lean_ctor_get(v___x_1980_, 0);
v_nextMacroScope_1982_ = lean_ctor_get(v___x_1980_, 1);
v_ngen_1983_ = lean_ctor_get(v___x_1980_, 2);
v_auxDeclNGen_1984_ = lean_ctor_get(v___x_1980_, 3);
v_traceState_1985_ = lean_ctor_get(v___x_1980_, 4);
v_recordedDeps_1986_ = lean_ctor_get(v___x_1980_, 6);
v_messages_1987_ = lean_ctor_get(v___x_1980_, 7);
v_infoState_1988_ = lean_ctor_get(v___x_1980_, 8);
v_snapshotTasks_1989_ = lean_ctor_get(v___x_1980_, 9);
v_isSharedCheck_1999_ = !lean_is_exclusive(v___x_1980_);
if (v_isSharedCheck_1999_ == 0)
{
lean_object* v_unused_2000_; 
v_unused_2000_ = lean_ctor_get(v___x_1980_, 5);
lean_dec(v_unused_2000_);
v___x_1991_ = v___x_1980_;
v_isShared_1992_ = v_isSharedCheck_1999_;
goto v_resetjp_1990_;
}
else
{
lean_inc(v_snapshotTasks_1989_);
lean_inc(v_infoState_1988_);
lean_inc(v_messages_1987_);
lean_inc(v_recordedDeps_1986_);
lean_inc(v_traceState_1985_);
lean_inc(v_auxDeclNGen_1984_);
lean_inc(v_ngen_1983_);
lean_inc(v_nextMacroScope_1982_);
lean_inc(v_env_1981_);
lean_dec(v___x_1980_);
v___x_1991_ = lean_box(0);
v_isShared_1992_ = v_isSharedCheck_1999_;
goto v_resetjp_1990_;
}
v_resetjp_1990_:
{
lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1996_; 
v___x_1993_ = l_Lean_Kernel_enableDiag(v_env_1981_, v___y_1977_);
v___x_1994_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2);
if (v_isShared_1992_ == 0)
{
lean_ctor_set(v___x_1991_, 5, v___x_1994_);
lean_ctor_set(v___x_1991_, 0, v___x_1993_);
v___x_1996_ = v___x_1991_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_1998_; 
v_reuseFailAlloc_1998_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1998_, 0, v___x_1993_);
lean_ctor_set(v_reuseFailAlloc_1998_, 1, v_nextMacroScope_1982_);
lean_ctor_set(v_reuseFailAlloc_1998_, 2, v_ngen_1983_);
lean_ctor_set(v_reuseFailAlloc_1998_, 3, v_auxDeclNGen_1984_);
lean_ctor_set(v_reuseFailAlloc_1998_, 4, v_traceState_1985_);
lean_ctor_set(v_reuseFailAlloc_1998_, 5, v___x_1994_);
lean_ctor_set(v_reuseFailAlloc_1998_, 6, v_recordedDeps_1986_);
lean_ctor_set(v_reuseFailAlloc_1998_, 7, v_messages_1987_);
lean_ctor_set(v_reuseFailAlloc_1998_, 8, v_infoState_1988_);
lean_ctor_set(v_reuseFailAlloc_1998_, 9, v_snapshotTasks_1989_);
v___x_1996_ = v_reuseFailAlloc_1998_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
lean_object* v___x_1997_; 
v___x_1997_ = lean_st_ref_put(v___y_1971_, v___x_1996_);
v___y_1921_ = v___y_1969_;
v___y_1922_ = v___y_1970_;
v___y_1923_ = v___y_1973_;
v___y_1924_ = v___y_1972_;
v___y_1925_ = v___y_1975_;
v___y_1926_ = v___y_1976_;
v___y_1927_ = v___y_1979_;
v___y_1928_ = v___y_1978_;
v___y_1929_ = v___y_1974_;
v___y_1930_ = v___y_1971_;
goto v___jp_1920_;
}
}
}
v___jp_2001_:
{
if (v___y_2009_ == 0)
{
v___y_1969_ = v___y_2002_;
v___y_1970_ = v___y_2004_;
v___y_1971_ = v___y_2003_;
v___y_1972_ = v___y_2006_;
v___y_1973_ = v___y_2005_;
v___y_1974_ = v___y_2007_;
v___y_1975_ = v___y_2008_;
v___y_1976_ = v___y_2010_;
v___y_1977_ = v___y_2013_;
v___y_1978_ = v___y_2012_;
v___y_1979_ = v___y_2011_;
goto v___jp_1968_;
}
else
{
v___y_1921_ = v___y_2002_;
v___y_1922_ = v___y_2004_;
v___y_1923_ = v___y_2005_;
v___y_1924_ = v___y_2006_;
v___y_1925_ = v___y_2008_;
v___y_1926_ = v___y_2010_;
v___y_1927_ = v___y_2011_;
v___y_1928_ = v___y_2012_;
v___y_1929_ = v___y_2007_;
v___y_1930_ = v___y_2003_;
goto v___jp_1920_;
}
}
v___jp_2014_:
{
uint16_t v___x_2025_; lean_object* v___x_2026_; lean_object* v_env_2027_; uint8_t v___x_2028_; uint16_t v___x_2029_; uint16_t v___x_2030_; uint16_t v___x_2031_; uint8_t v___x_2032_; 
v___x_2025_ = l_Lean_OptionFlags_ofOptions(v___y_2024_);
v___x_2026_ = lean_st_ref_get(v___y_2016_);
v_env_2027_ = lean_ctor_get(v___x_2026_, 0);
lean_inc_ref(v_env_2027_);
lean_dec(v___x_2026_);
v___x_2028_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_2027_);
lean_dec_ref(v_env_2027_);
v___x_2029_ = 512;
v___x_2030_ = lean_uint16_land(v___x_2025_, v___x_2029_);
v___x_2031_ = 0;
v___x_2032_ = lean_uint16_dec_eq(v___x_2030_, v___x_2031_);
if (v___x_2032_ == 0)
{
uint8_t v___x_2033_; 
v___x_2033_ = 1;
v___y_2002_ = v___y_2024_;
v___y_2003_ = v___y_2016_;
v___y_2004_ = v___y_2017_;
v___y_2005_ = v___y_2019_;
v___y_2006_ = v___y_2018_;
v___y_2007_ = v___y_2020_;
v___y_2008_ = v___y_2021_;
v___y_2009_ = v___x_2028_;
v___y_2010_ = v___y_2022_;
v___y_2011_ = v___y_2023_;
v___y_2012_ = v___x_2025_;
v___y_2013_ = v___x_2033_;
goto v___jp_2001_;
}
else
{
if (v___x_2028_ == 0)
{
v___y_1921_ = v___y_2024_;
v___y_1922_ = v___y_2017_;
v___y_1923_ = v___y_2019_;
v___y_1924_ = v___y_2018_;
v___y_1925_ = v___y_2021_;
v___y_1926_ = v___y_2022_;
v___y_1927_ = v___y_2023_;
v___y_1928_ = v___x_2025_;
v___y_1929_ = v___y_2020_;
v___y_1930_ = v___y_2016_;
goto v___jp_1920_;
}
else
{
v___y_1969_ = v___y_2024_;
v___y_1970_ = v___y_2017_;
v___y_1971_ = v___y_2016_;
v___y_1972_ = v___y_2018_;
v___y_1973_ = v___y_2019_;
v___y_1974_ = v___y_2020_;
v___y_1975_ = v___y_2021_;
v___y_1976_ = v___y_2022_;
v___y_1977_ = v___y_2015_;
v___y_1978_ = v___x_2025_;
v___y_1979_ = v___y_2023_;
goto v___jp_1968_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___boxed(lean_object* v_docCtx_2251_, lean_object* v_preDefs_2252_, lean_object* v_termMeasure_x3fs_2253_, lean_object* v_a_2254_, lean_object* v_a_2255_, lean_object* v_a_2256_, lean_object* v_a_2257_, lean_object* v_a_2258_, lean_object* v_a_2259_, lean_object* v_a_2260_){
_start:
{
lean_object* v_res_2261_; 
v_res_2261_ = l_Lean_Elab_wfRecursion(v_docCtx_2251_, v_preDefs_2252_, v_termMeasure_x3fs_2253_, v_a_2254_, v_a_2255_, v_a_2256_, v_a_2257_, v_a_2258_, v_a_2259_);
lean_dec(v_a_2259_);
lean_dec_ref(v_a_2258_);
lean_dec(v_a_2257_);
lean_dec_ref(v_a_2256_);
lean_dec(v_a_2255_);
lean_dec_ref(v_a_2254_);
return v_res_2261_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0(lean_object* v_00_u03b1_2262_, lean_object* v_msg_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_){
_start:
{
lean_object* v___x_2271_; 
v___x_2271_ = l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(v_msg_2263_, v___y_2264_, v___y_2265_, v___y_2266_, v___y_2267_, v___y_2268_, v___y_2269_);
return v___x_2271_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___boxed(lean_object* v_00_u03b1_2272_, lean_object* v_msg_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_){
_start:
{
lean_object* v_res_2281_; 
v_res_2281_ = l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0(v_00_u03b1_2272_, v_msg_2273_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_, v___y_2278_, v___y_2279_);
lean_dec(v___y_2279_);
lean_dec_ref(v___y_2278_);
lean_dec(v___y_2277_);
lean_dec_ref(v___y_2276_);
lean_dec(v___y_2275_);
lean_dec_ref(v___y_2274_);
return v_res_2281_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2(size_t v_sz_2282_, size_t v_i_2283_, lean_object* v_bs_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_){
_start:
{
lean_object* v___x_2292_; 
v___x_2292_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2___redArg(v_sz_2282_, v_i_2283_, v_bs_2284_, v___y_2289_, v___y_2290_);
return v___x_2292_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2___boxed(lean_object* v_sz_2293_, lean_object* v_i_2294_, lean_object* v_bs_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_){
_start:
{
size_t v_sz_boxed_2303_; size_t v_i_boxed_2304_; lean_object* v_res_2305_; 
v_sz_boxed_2303_ = lean_unbox_usize(v_sz_2293_);
lean_dec(v_sz_2293_);
v_i_boxed_2304_ = lean_unbox_usize(v_i_2294_);
lean_dec(v_i_2294_);
v_res_2305_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2(v_sz_boxed_2303_, v_i_boxed_2304_, v_bs_2295_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_);
lean_dec(v___y_2301_);
lean_dec_ref(v___y_2300_);
lean_dec(v___y_2299_);
lean_dec_ref(v___y_2298_);
lean_dec(v___y_2297_);
lean_dec_ref(v___y_2296_);
return v_res_2305_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3(lean_object* v_as_2306_, size_t v_sz_2307_, size_t v_i_2308_, lean_object* v_b_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_){
_start:
{
lean_object* v___x_2317_; 
v___x_2317_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3___redArg(v_as_2306_, v_sz_2307_, v_i_2308_, v_b_2309_, v___y_2314_, v___y_2315_);
return v___x_2317_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3___boxed(lean_object* v_as_2318_, lean_object* v_sz_2319_, lean_object* v_i_2320_, lean_object* v_b_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_){
_start:
{
size_t v_sz_boxed_2329_; size_t v_i_boxed_2330_; lean_object* v_res_2331_; 
v_sz_boxed_2329_ = lean_unbox_usize(v_sz_2319_);
lean_dec(v_sz_2319_);
v_i_boxed_2330_ = lean_unbox_usize(v_i_2320_);
lean_dec(v_i_2320_);
v_res_2331_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3(v_as_2318_, v_sz_boxed_2329_, v_i_boxed_2330_, v_b_2321_, v___y_2322_, v___y_2323_, v___y_2324_, v___y_2325_, v___y_2326_, v___y_2327_);
lean_dec(v___y_2327_);
lean_dec_ref(v___y_2326_);
lean_dec(v___y_2325_);
lean_dec_ref(v___y_2324_);
lean_dec(v___y_2323_);
lean_dec_ref(v___y_2322_);
lean_dec_ref(v_as_2318_);
return v_res_2331_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4(lean_object* v_a_2332_, lean_object* v_as_2333_, size_t v_sz_2334_, size_t v_i_2335_, lean_object* v_bs_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_){
_start:
{
lean_object* v___x_2344_; 
v___x_2344_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___redArg(v_a_2332_, v_sz_2334_, v_i_2335_, v_bs_2336_, v___y_2339_, v___y_2340_, v___y_2341_, v___y_2342_);
return v___x_2344_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___boxed(lean_object* v_a_2345_, lean_object* v_as_2346_, lean_object* v_sz_2347_, lean_object* v_i_2348_, lean_object* v_bs_2349_, lean_object* v___y_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_){
_start:
{
size_t v_sz_boxed_2357_; size_t v_i_boxed_2358_; lean_object* v_res_2359_; 
v_sz_boxed_2357_ = lean_unbox_usize(v_sz_2347_);
lean_dec(v_sz_2347_);
v_i_boxed_2358_ = lean_unbox_usize(v_i_2348_);
lean_dec(v_i_2348_);
v_res_2359_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4(v_a_2345_, v_as_2346_, v_sz_boxed_2357_, v_i_boxed_2358_, v_bs_2349_, v___y_2350_, v___y_2351_, v___y_2352_, v___y_2353_, v___y_2354_, v___y_2355_);
lean_dec(v___y_2355_);
lean_dec_ref(v___y_2354_);
lean_dec(v___y_2353_);
lean_dec_ref(v___y_2352_);
lean_dec(v___y_2351_);
lean_dec_ref(v___y_2350_);
lean_dec_ref(v_as_2346_);
return v_res_2359_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7(lean_object* v_a_2360_, lean_object* v___x_2361_, size_t v_sz_2362_, size_t v_i_2363_, lean_object* v_bs_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_){
_start:
{
lean_object* v___x_2372_; 
v___x_2372_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7___redArg(v_a_2360_, v___x_2361_, v_sz_2362_, v_i_2363_, v_bs_2364_, v___y_2369_, v___y_2370_);
return v___x_2372_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7___boxed(lean_object* v_a_2373_, lean_object* v___x_2374_, lean_object* v_sz_2375_, lean_object* v_i_2376_, lean_object* v_bs_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_){
_start:
{
size_t v_sz_boxed_2385_; size_t v_i_boxed_2386_; lean_object* v_res_2387_; 
v_sz_boxed_2385_ = lean_unbox_usize(v_sz_2375_);
lean_dec(v_sz_2375_);
v_i_boxed_2386_ = lean_unbox_usize(v_i_2376_);
lean_dec(v_i_2376_);
v_res_2387_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7(v_a_2373_, v___x_2374_, v_sz_boxed_2385_, v_i_boxed_2386_, v_bs_2377_, v___y_2378_, v___y_2379_, v___y_2380_, v___y_2381_, v___y_2382_, v___y_2383_);
lean_dec(v___y_2383_);
lean_dec_ref(v___y_2382_);
lean_dec(v___y_2381_);
lean_dec_ref(v___y_2380_);
lean_dec(v___y_2379_);
lean_dec_ref(v___y_2378_);
return v_res_2387_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8(lean_object* v_00_u03b1_2388_, lean_object* v_env_2389_, lean_object* v_x_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_){
_start:
{
lean_object* v___x_2398_; 
v___x_2398_ = l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___redArg(v_env_2389_, v_x_2390_, v___y_2391_, v___y_2392_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_);
return v___x_2398_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___boxed(lean_object* v_00_u03b1_2399_, lean_object* v_env_2400_, lean_object* v_x_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_){
_start:
{
lean_object* v_res_2409_; 
v_res_2409_ = l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8(v_00_u03b1_2399_, v_env_2400_, v_x_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_, v___y_2407_);
lean_dec(v___y_2407_);
lean_dec_ref(v___y_2406_);
lean_dec(v___y_2405_);
lean_dec_ref(v___y_2404_);
lean_dec(v___y_2403_);
lean_dec_ref(v___y_2402_);
return v_res_2409_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14(lean_object* v_cls_2410_, lean_object* v_msg_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_){
_start:
{
lean_object* v___x_2419_; 
v___x_2419_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(v_cls_2410_, v_msg_2411_, v___y_2414_, v___y_2415_, v___y_2416_, v___y_2417_);
return v___x_2419_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___boxed(lean_object* v_cls_2420_, lean_object* v_msg_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_){
_start:
{
lean_object* v_res_2429_; 
v_res_2429_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14(v_cls_2420_, v_msg_2421_, v___y_2422_, v___y_2423_, v___y_2424_, v___y_2425_, v___y_2426_, v___y_2427_);
lean_dec(v___y_2427_);
lean_dec_ref(v___y_2426_);
lean_dec(v___y_2425_);
lean_dec_ref(v___y_2424_);
lean_dec(v___y_2423_);
lean_dec_ref(v___y_2422_);
return v_res_2429_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16(size_t v_sz_2430_, size_t v_i_2431_, lean_object* v_bs_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_){
_start:
{
lean_object* v___x_2440_; 
v___x_2440_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___redArg(v_sz_2430_, v_i_2431_, v_bs_2432_, v___y_2435_, v___y_2436_, v___y_2437_, v___y_2438_);
return v___x_2440_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___boxed(lean_object* v_sz_2441_, lean_object* v_i_2442_, lean_object* v_bs_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_){
_start:
{
size_t v_sz_boxed_2451_; size_t v_i_boxed_2452_; lean_object* v_res_2453_; 
v_sz_boxed_2451_ = lean_unbox_usize(v_sz_2441_);
lean_dec(v_sz_2441_);
v_i_boxed_2452_ = lean_unbox_usize(v_i_2442_);
lean_dec(v_i_2442_);
v_res_2453_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16(v_sz_boxed_2451_, v_i_boxed_2452_, v_bs_2443_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_);
lean_dec(v___y_2449_);
lean_dec_ref(v___y_2448_);
lean_dec(v___y_2447_);
lean_dec_ref(v___y_2446_);
lean_dec(v___y_2445_);
lean_dec_ref(v___y_2444_);
return v_res_2453_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17(lean_object* v___x_2454_, lean_object* v_as_2455_, size_t v_sz_2456_, size_t v_i_2457_, lean_object* v_b_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_){
_start:
{
lean_object* v___x_2466_; 
v___x_2466_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg(v___x_2454_, v_as_2455_, v_sz_2456_, v_i_2457_, v_b_2458_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_);
return v___x_2466_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___boxed(lean_object* v___x_2467_, lean_object* v_as_2468_, lean_object* v_sz_2469_, lean_object* v_i_2470_, lean_object* v_b_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_){
_start:
{
size_t v_sz_boxed_2479_; size_t v_i_boxed_2480_; lean_object* v_res_2481_; 
v_sz_boxed_2479_ = lean_unbox_usize(v_sz_2469_);
lean_dec(v_sz_2469_);
v_i_boxed_2480_ = lean_unbox_usize(v_i_2470_);
lean_dec(v_i_2470_);
v_res_2481_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17(v___x_2467_, v_as_2468_, v_sz_boxed_2479_, v_i_boxed_2480_, v_b_2471_, v___y_2472_, v___y_2473_, v___y_2474_, v___y_2475_, v___y_2476_, v___y_2477_);
lean_dec(v___y_2477_);
lean_dec_ref(v___y_2476_);
lean_dec(v___y_2475_);
lean_dec_ref(v___y_2474_);
lean_dec(v___y_2473_);
lean_dec_ref(v___y_2472_);
lean_dec_ref(v_as_2468_);
return v_res_2481_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20_spec__23(lean_object* v_00_u03b1_2482_, lean_object* v_x_2483_, uint8_t v_isExporting_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_){
_start:
{
lean_object* v___x_2492_; 
v___x_2492_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20_spec__23___redArg(v_x_2483_, v_isExporting_2484_, v___y_2485_, v___y_2486_, v___y_2487_, v___y_2488_, v___y_2489_, v___y_2490_);
return v___x_2492_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20_spec__23___boxed(lean_object* v_00_u03b1_2493_, lean_object* v_x_2494_, lean_object* v_isExporting_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_){
_start:
{
uint8_t v_isExporting_boxed_2503_; lean_object* v_res_2504_; 
v_isExporting_boxed_2503_ = lean_unbox(v_isExporting_2495_);
v_res_2504_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20_spec__23(v_00_u03b1_2493_, v_x_2494_, v_isExporting_boxed_2503_, v___y_2496_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_, v___y_2501_);
lean_dec(v___y_2501_);
lean_dec_ref(v___y_2500_);
lean_dec(v___y_2499_);
lean_dec_ref(v___y_2498_);
lean_dec(v___y_2497_);
lean_dec_ref(v___y_2496_);
return v_res_2504_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20(lean_object* v_00_u03b1_2505_, lean_object* v_x_2506_, uint8_t v_when_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_){
_start:
{
lean_object* v___x_2515_; 
v___x_2515_ = l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20___redArg(v_x_2506_, v_when_2507_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_);
return v___x_2515_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20___boxed(lean_object* v_00_u03b1_2516_, lean_object* v_x_2517_, lean_object* v_when_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_){
_start:
{
uint8_t v_when_boxed_2526_; lean_object* v_res_2527_; 
v_when_boxed_2526_ = lean_unbox(v_when_2518_);
v_res_2527_ = l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__20(v_00_u03b1_2516_, v_x_2517_, v_when_boxed_2526_, v___y_2519_, v___y_2520_, v___y_2521_, v___y_2522_, v___y_2523_, v___y_2524_);
lean_dec(v___y_2524_);
lean_dec_ref(v___y_2523_);
lean_dec(v___y_2522_);
lean_dec_ref(v___y_2521_);
lean_dec(v___y_2520_);
lean_dec_ref(v___y_2519_);
return v_res_2527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1(lean_object* v_msgData_2528_, lean_object* v_macroStack_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_){
_start:
{
lean_object* v___x_2537_; 
v___x_2537_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg(v_msgData_2528_, v_macroStack_2529_, v___y_2534_);
return v___x_2537_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___boxed(lean_object* v_msgData_2538_, lean_object* v_macroStack_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_){
_start:
{
lean_object* v_res_2547_; 
v_res_2547_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1(v_msgData_2538_, v_macroStack_2539_, v___y_2540_, v___y_2541_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_);
lean_dec(v___y_2545_);
lean_dec_ref(v___y_2544_);
lean_dec(v___y_2543_);
lean_dec_ref(v___y_2542_);
lean_dec(v___y_2541_);
lean_dec_ref(v___y_2540_);
return v_res_2547_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13(lean_object* v_ref_2548_, lean_object* v_msgData_2549_, uint8_t v_severity_2550_, uint8_t v_isSilent_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_){
_start:
{
lean_object* v___x_2559_; 
v___x_2559_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg(v_ref_2548_, v_msgData_2549_, v_severity_2550_, v_isSilent_2551_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_);
return v___x_2559_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___boxed(lean_object* v_ref_2560_, lean_object* v_msgData_2561_, lean_object* v_severity_2562_, lean_object* v_isSilent_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_){
_start:
{
uint8_t v_severity_boxed_2571_; uint8_t v_isSilent_boxed_2572_; lean_object* v_res_2573_; 
v_severity_boxed_2571_ = lean_unbox(v_severity_2562_);
v_isSilent_boxed_2572_ = lean_unbox(v_isSilent_2563_);
v_res_2573_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13(v_ref_2560_, v_msgData_2561_, v_severity_boxed_2571_, v_isSilent_boxed_2572_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_, v___y_2569_);
lean_dec(v___y_2569_);
lean_dec_ref(v___y_2568_);
lean_dec(v___y_2567_);
lean_dec_ref(v___y_2566_);
lean_dec(v___y_2565_);
lean_dec_ref(v___y_2564_);
lean_dec(v_ref_2560_);
return v_res_2573_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2644_; uint8_t v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; 
v___x_2644_ = ((lean_object*)(l_Lean_Elab_wfRecursion___closed__5));
v___x_2645_ = 0;
v___x_2646_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_));
v___x_2647_ = l_Lean_registerTraceClass(v___x_2644_, v___x_2645_, v___x_2646_);
return v___x_2647_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2____boxed(lean_object* v_a_2648_){
_start:
{
lean_object* v_res_2649_; 
v_res_2649_ = l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_();
return v_res_2649_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_PackMutual(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_FloatRecApp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Rel(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Fix(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Unfold(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Preprocess(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_GuessLex(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Main(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_PreDefinition_WF_PackMutual(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_FloatRecApp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Rel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Fix(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Unfold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Preprocess(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_GuessLex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_WF_Main(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_WF_PackMutual(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_FloatRecApp(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Rel(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Fix(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Unfold(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Preprocess(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_GuessLex(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_WF_Main(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_WF_PackMutual(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_FloatRecApp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Rel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Fix(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Unfold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Preprocess(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_GuessLex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_WF_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_WF_Main(builtin);
}
#ifdef __cplusplus
}
#endif
