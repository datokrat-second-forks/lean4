// Lean compiler output
// Module: Lean.Linter.Deprecated
// Imports: public import Lean.Meta.Basic import Lean.Linter.Init import Lean.Elab.InfoTree.Main import Lean.ExtraModUses import Lean.Meta.Hint import Init.Data.List.MapIdx import Init.Omega
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
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
extern lean_object* l_Lean_ResolveName_backward_privateInPublic_warn;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerParametricAttributeExt___redArg(lean_object*, uint8_t, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getString(lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_MessageData_hint_x27(lean_object*);
lean_object* l_Lean_Syntax_ofRange(lean_object*, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_hint(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_ConstantInfo_numLevelParams(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_ConstantInfo_instantiateTypeLevelParams(lean_object*, lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Std_HashMap_instInhabited___redArg();
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
extern lean_object* l_Lean_Linter_instInhabitedLinterSetsState_default;
extern lean_object* l_Lean_Linter_linterSetsExt;
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_extractMacroScopes(lean_object*);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MacroScopesView_isSuffixOf(lean_object*, lean_object*);
lean_object* l_Lean_privateToUserName_x3f(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_Name_componentsRev(lean_object*);
lean_object* l_Lean_Name_appendCore(lean_object*, lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
extern lean_object* l_Lean_rootNamespace;
lean_object* l_Lean_getRevAliases(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Name_getPrefix(lean_object*);
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_registerParametricAttributeForExt___redArg(lean_object*, lean_object*);
lean_object* l_Lean_ParametricAttribute_setParam___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setEnv___redArg(lean_object*, lean_object*);
lean_object* l_Lean_ParametricAttribute_getParam_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isProtected(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_get___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_nil;
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "linter"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "deprecated"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 218, 113, 226, 101, 176, 32, 79)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(227, 99, 57, 49, 46, 156, 253, 187)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "if true, generate deprecation warnings"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Linter"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(53, 243, 121, 207, 53, 172, 203, 87)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(248, 165, 85, 201, 27, 48, 185, 203)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_linter_deprecated;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "deprecatedTarget"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 218, 113, 226, 101, 176, 32, 79)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(227, 99, 57, 49, 46, 156, 253, 187)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(204, 166, 165, 234, 53, 174, 145, 27)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 97, .m_capacity = 97, .m_length = 96, .m_data = "if true, warn when a `@[deprecated]` attribute points at a declaration that is itself deprecated"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(53, 243, 121, 207, 53, 172, 203, 87)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(248, 165, 85, 201, 27, 48, 185, 203)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(147, 187, 162, 70, 72, 196, 181, 236)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_linter_deprecated_deprecatedTarget;
static const lean_ctor_object l_Lean_Linter_instInhabitedDeprecationEntry_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Linter_instInhabitedDeprecationEntry_default___closed__0 = (const lean_object*)&l_Lean_Linter_instInhabitedDeprecationEntry_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Linter_instInhabitedDeprecationEntry_default = (const lean_object*)&l_Lean_Linter_instInhabitedDeprecationEntry_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Linter_instInhabitedDeprecationEntry = (const lean_object*)&l_Lean_Linter_instInhabitedDeprecationEntry_default___closed__0_value;
static const lean_string_object l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_deprecated"};
static const lean_object* l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___closed__0 = (const lean_object*)&l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___closed__0_value;
static const lean_ctor_object l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(123, 51, 129, 56, 173, 194, 28, 188)}};
static const lean_object* l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___closed__1 = (const lean_object*)&l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq___closed__0 = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__6___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0___closed__0_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Try this: +typeChanged"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0___closed__0_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0___closed__0_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41_spec__43_spec__46(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41_spec__43_spec__46___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41_spec__43___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41_spec__43___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41_spec__43___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41_spec__43(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41_spec__43___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__36___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__36___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Private declaration `"};
static const lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___closed__0 = (const lean_object*)&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___closed__0_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___closed__1;
static const lean_string_object l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 167, .m_capacity = 167, .m_length = 166, .m_data = "` accessed publicly; this is allowed only because the `backward.privateInPublic` option is enabled. \n\nDisable `backward.privateInPublic.warn` to silence this warning."};
static const lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___closed__2 = (const lean_object*)&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___closed__2_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___closed__3;
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__30(lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__30___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__26(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__22___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__23_spec__27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__23(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__23___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__23_spec__27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__19___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__19___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__19___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__20_spec__23___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__20(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__20_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__42___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__42___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__43_spec__45_spec__47___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__43_spec__45_spec__47___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__43_spec__45_spec__47___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__43_spec__45_spec__47(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__43_spec__45_spec__47___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__43_spec__45(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__43_spec__45___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__43(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__43___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21___lam__0___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24___closed__0 = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24___closed__0_value;
static const lean_closure_object l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21___lam__0___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__43_spec__45_spec__47___closed__0_value)} };
static const lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24___closed__1 = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21_spec__29___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21_spec__29___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21___closed__0 = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__23(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12___closed__0 = (const lean_object*)&l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5___lam__0___boxed, .m_arity = 7, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5___closed__0 = (const lean_object*)&l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__3_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__3_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__9___closed__0;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__9___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__9___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__0;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__1;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__2;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__3_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__3_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__4 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__4_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__5_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__6;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__7_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__8;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__9;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__10 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__10_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__11;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__12 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__12_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__13;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__14 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__14_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__15;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__16 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__16_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__17_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__18 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__18_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__19 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__19_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__6_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__6_spec__12___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__6___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__0_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 134, .m_capacity = 134, .m_length = 133, .m_data = "`[deprecated]` attribute should specify the date or library version at which the deprecation was introduced, using `(since := \"...\")`"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__0_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__0_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__1_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__0_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__1_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__1_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__2_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__2_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__3_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 83, .m_capacity = 83, .m_length = 82, .m_data = "`[deprecated]` attribute should specify either a new name or a deprecation message"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__3_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__3_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__4_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__3_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__4_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__4_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__5_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__5_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__6_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "The updated constant has a different type:"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__6_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__6_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__7_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__7_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__8_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "\ninstead of"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__8_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__8_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__9_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__9_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__10_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 372, .m_capacity = 372, .m_length = 371, .m_data = "\n\nThis suggests that addressing the deprecation might be more involved than simply replacing the old name with the new name. This is often expected, but sometimes it indicates that the deprecation is in favor of the wrong declaration, or that there is a mistake in one of the statements.\n\nIf the type difference is intentional, use `+typeChanged` to silence this warning."};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__10_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__10_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__11_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__11_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__12_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Add `+typeChanged` to silence this warning."};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__12_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__12_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__13_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__12_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__13_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__13_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__14_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__14_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__15_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__15_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Invalid `[deprecated]` attribute syntax"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__17_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__17_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__18_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Add `+typeChanged`:"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__18_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__18_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__19_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__18_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__19_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__19_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__20_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__20_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__21_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " +typeChanged"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__21_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__21_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__22_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__21_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__22_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__22_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__23_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "+typeChanged"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__23_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__23_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__24_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__23_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__24_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__24_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__25_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__25_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__27_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 88, .m_capacity = 88, .m_length = 87, .m_data = "The `+typeChanged` marker is not needed because the updated constant has the same type."};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__27_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__27_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__28_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__27_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__28_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__28_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__29_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__29_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__31_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__31_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static const lean_array_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__32_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__32_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__32_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__33_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__33_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__34_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__34_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__35_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__35_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__36_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__36_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__37_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Deprecate in favor of `"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__37_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__37_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__38_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__38_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__39_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "` instead:"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__39_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__39_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__40_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__40_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__41_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "This warning can be disabled with `set_option "};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__41_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__41_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__42_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__42_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__43_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " false`"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__43_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__43_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__44_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__44_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__45_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__45_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__45_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__46_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__46_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__47_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "` is itself deprecated, but without an explicit replacement; `"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__47_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__47_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__48_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__48_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__49_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "` is being deprecated in favor of a deprecated declaration"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__49_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__49_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__50_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__50_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__51_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "` is itself deprecated in favor of `"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__51_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__51_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__52_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__52_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__53_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "`; consider deprecating `"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__53_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__53_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__54_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__54_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__55_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "` in favor of `"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__55_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__55_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__56_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__56_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__57_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` instead"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__57_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__57_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__58_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__58_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__59_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Invalid `[deprecated]` attribute: `"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__59_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__59_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__60_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__60_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__61_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "` cannot be deprecated in favor of itself"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__61_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__61_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__62_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__62_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "deprecatedAttr"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(85, 246, 23, 143, 159, 138, 155, 162)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(78, 182, 79, 155, 204, 118, 39, 140)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "mark declaration as deprecated"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__3_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__6_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__6_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__19(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21_spec__29(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21_spec__29___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__20_spec__23(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__20_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__23_spec__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__23_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__36(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__36___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__42(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__42___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_deprecatedAttr;
LEAN_EXPORT lean_object* l_Lean_Linter_setDeprecated___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_setDeprecated___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_setDeprecated(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Linter_isDeprecated(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_isDeprecated___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_MessageData_isDeprecationWarning___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_isDeprecationWarning___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_MessageData_isDeprecationWarning___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_isDeprecationWarning___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_isDeprecationWarning___closed__0 = (const lean_object*)&l_Lean_MessageData_isDeprecationWarning___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_MessageData_isDeprecationWarning(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_isDeprecationWarning___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getDeprecatedNewName(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Replace the deprecated name:"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__0 = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__0_value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "` has been deprecated"};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__0 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__0_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__1;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ": Use `"};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__2 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__2_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__3;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "` is protected. References to this constant must include "};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__4 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__4_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__5;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "its prefix `"};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__6 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__6_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__7;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "` even when inside its namespace."};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__8 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__8_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__9;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 86, .m_capacity = 86, .m_length = 85, .m_data = "The updated constant is in a different namespace. Dot notation may need to be changed"};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__10 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__10_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__11;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__12 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__12_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__13;
static const lean_ctor_object l_Lean_Linter_checkDeprecated___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41_spec__43___closed__0_value)}};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__14 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__14_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__15;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "at least the last component `"};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__16 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__16_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__17;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "` of "};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__18 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__18_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__19;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = " (e.g., from `x."};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__20 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__20_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__21;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "` to `"};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__22 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__22_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__23;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " x`)"};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__24 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__24_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__25;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__26 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__26_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__27;
LEAN_EXPORT lean_object* l_Lean_Linter_checkDeprecated(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_checkDeprecated___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
v___x_8_ = lean_alloc_ctor(1, 0, 1);
v___x_9_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_8_, 0, v___x_9_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v_name_1_);
lean_ctor_set(v___x_10_, 1, v_ref_3_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v_descr_6_);
lean_ctor_set(v___x_10_, 4, v_deprecation_x3f_7_);
v___x_11_ = lean_register_option(v_name_1_, v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; 
v_unused_20_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_20_);
v___x_13_ = v___x_11_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_dec(v___x_11_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
lean_inc(v_defValue_5_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v_name_1_);
lean_ctor_set(v___x_15_, 1, v_defValue_5_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_name_1_);
v_a_21_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_11_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_11_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v___y_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_53_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_));
v___x_54_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_));
v___x_55_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_));
v___x_56_ = l_Lean_Option_register___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__spec__0(v___x_53_, v___x_54_, v___x_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4____boxed(lean_object* v___y_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_();
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_77_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_));
v___x_78_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_));
v___x_79_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_));
v___x_80_ = l_Lean_Option_register___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__spec__0(v___x_77_, v___x_78_, v___x_79_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4____boxed(lean_object* v___y_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_();
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0(lean_object* v_a_90_, lean_object* v_a_91_){
_start:
{
if (lean_obj_tag(v_a_90_) == 0)
{
lean_object* v___x_92_; 
v___x_92_ = lean_array_to_list(v_a_91_);
return v___x_92_;
}
else
{
lean_object* v_tail_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v_tail_93_ = lean_ctor_get(v_a_90_, 1);
v___x_94_ = lean_array_get_size(v_a_91_);
v___x_95_ = ((lean_object*)(l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___closed__1));
v___x_96_ = l_Lean_Name_num___override(v___x_95_, v___x_94_);
v___x_97_ = l_Lean_mkLevelParam(v___x_96_);
v___x_98_ = lean_array_push(v_a_91_, v___x_97_);
v_a_90_ = v_tail_93_;
v_a_91_ = v___x_98_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___boxed(lean_object* v_a_100_, lean_object* v_a_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0(v_a_100_, v_a_101_);
lean_dec(v_a_100_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq(lean_object* v_decl_u2081_105_, lean_object* v_decl_u2082_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_){
_start:
{
lean_object* v___y_113_; lean_object* v___x_130_; lean_object* v___x_131_; uint8_t v___x_132_; 
v___x_130_ = l_Lean_ConstantInfo_numLevelParams(v_decl_u2081_105_);
v___x_131_ = l_Lean_ConstantInfo_numLevelParams(v_decl_u2082_106_);
v___x_132_ = lean_nat_dec_eq(v___x_130_, v___x_131_);
lean_dec(v___x_131_);
lean_dec(v___x_130_);
if (v___x_132_ == 0)
{
lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_133_ = lean_box(v___x_132_);
v___x_134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_134_, 0, v___x_133_);
return v___x_134_;
}
else
{
lean_object* v___x_135_; uint8_t v_transparency_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v_levels_139_; lean_object* v_type_u2081_140_; lean_object* v_type_u2082_141_; uint8_t v___x_142_; uint8_t v___x_143_; 
v___x_135_ = l_Lean_Meta_Context_config(v_a_107_);
v_transparency_136_ = lean_ctor_get_uint8(v___x_135_, 9);
lean_dec_ref(v___x_135_);
v___x_137_ = l_Lean_ConstantInfo_levelParams(v_decl_u2081_105_);
v___x_138_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq___closed__0));
v_levels_139_ = l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0(v___x_137_, v___x_138_);
lean_dec(v___x_137_);
lean_inc(v_levels_139_);
v_type_u2081_140_ = l_Lean_ConstantInfo_instantiateTypeLevelParams(v_decl_u2081_105_, v_levels_139_);
v_type_u2082_141_ = l_Lean_ConstantInfo_instantiateTypeLevelParams(v_decl_u2082_106_, v_levels_139_);
v___x_142_ = 2;
v___x_143_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_136_, v___x_142_);
if (v___x_143_ == 0)
{
lean_object* v_keyedConfig_144_; uint8_t v_trackZetaDelta_145_; lean_object* v_zetaDeltaSet_146_; lean_object* v_lctx_147_; lean_object* v_localInstances_148_; lean_object* v_defEqCtx_x3f_149_; lean_object* v_synthPendingDepth_150_; lean_object* v_customCanUnfoldPredicate_x3f_151_; uint8_t v_univApprox_152_; uint8_t v_inTypeClassResolution_153_; uint8_t v_cacheInferType_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v_keyedConfig_144_ = lean_ctor_get(v_a_107_, 0);
v_trackZetaDelta_145_ = lean_ctor_get_uint8(v_a_107_, sizeof(void*)*7);
v_zetaDeltaSet_146_ = lean_ctor_get(v_a_107_, 1);
v_lctx_147_ = lean_ctor_get(v_a_107_, 2);
v_localInstances_148_ = lean_ctor_get(v_a_107_, 3);
v_defEqCtx_x3f_149_ = lean_ctor_get(v_a_107_, 4);
v_synthPendingDepth_150_ = lean_ctor_get(v_a_107_, 5);
v_customCanUnfoldPredicate_x3f_151_ = lean_ctor_get(v_a_107_, 6);
v_univApprox_152_ = lean_ctor_get_uint8(v_a_107_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_153_ = lean_ctor_get_uint8(v_a_107_, sizeof(void*)*7 + 2);
v_cacheInferType_154_ = lean_ctor_get_uint8(v_a_107_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_144_);
v___x_155_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_142_, v_keyedConfig_144_);
lean_inc(v_customCanUnfoldPredicate_x3f_151_);
lean_inc(v_synthPendingDepth_150_);
lean_inc(v_defEqCtx_x3f_149_);
lean_inc_ref(v_localInstances_148_);
lean_inc_ref(v_lctx_147_);
lean_inc(v_zetaDeltaSet_146_);
v___x_156_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_156_, 0, v___x_155_);
lean_ctor_set(v___x_156_, 1, v_zetaDeltaSet_146_);
lean_ctor_set(v___x_156_, 2, v_lctx_147_);
lean_ctor_set(v___x_156_, 3, v_localInstances_148_);
lean_ctor_set(v___x_156_, 4, v_defEqCtx_x3f_149_);
lean_ctor_set(v___x_156_, 5, v_synthPendingDepth_150_);
lean_ctor_set(v___x_156_, 6, v_customCanUnfoldPredicate_x3f_151_);
lean_ctor_set_uint8(v___x_156_, sizeof(void*)*7, v_trackZetaDelta_145_);
lean_ctor_set_uint8(v___x_156_, sizeof(void*)*7 + 1, v_univApprox_152_);
lean_ctor_set_uint8(v___x_156_, sizeof(void*)*7 + 2, v_inTypeClassResolution_153_);
lean_ctor_set_uint8(v___x_156_, sizeof(void*)*7 + 3, v_cacheInferType_154_);
v___x_157_ = l_Lean_Meta_isExprDefEqGuarded(v_type_u2081_140_, v_type_u2082_141_, v___x_156_, v_a_108_, v_a_109_, v_a_110_);
lean_dec_ref_known(v___x_156_, 7);
v___y_113_ = v___x_157_;
goto v___jp_112_;
}
else
{
lean_object* v___x_158_; 
v___x_158_ = l_Lean_Meta_isExprDefEqGuarded(v_type_u2081_140_, v_type_u2082_141_, v_a_107_, v_a_108_, v_a_109_, v_a_110_);
v___y_113_ = v___x_158_;
goto v___jp_112_;
}
}
v___jp_112_:
{
if (lean_obj_tag(v___y_113_) == 0)
{
lean_object* v_a_114_; lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_121_; 
v_a_114_ = lean_ctor_get(v___y_113_, 0);
v_isSharedCheck_121_ = !lean_is_exclusive(v___y_113_);
if (v_isSharedCheck_121_ == 0)
{
v___x_116_ = v___y_113_;
v_isShared_117_ = v_isSharedCheck_121_;
goto v_resetjp_115_;
}
else
{
lean_inc(v_a_114_);
lean_dec(v___y_113_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_121_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
lean_object* v___x_119_; 
if (v_isShared_117_ == 0)
{
v___x_119_ = v___x_116_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v_a_114_);
v___x_119_ = v_reuseFailAlloc_120_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
return v___x_119_;
}
}
}
else
{
lean_object* v_a_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_129_; 
v_a_122_ = lean_ctor_get(v___y_113_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v___y_113_);
if (v_isSharedCheck_129_ == 0)
{
v___x_124_ = v___y_113_;
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_a_122_);
lean_dec(v___y_113_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_127_; 
if (v_isShared_125_ == 0)
{
v___x_127_ = v___x_124_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_a_122_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
return v___x_127_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq___boxed(lean_object* v_decl_u2081_159_, lean_object* v_decl_u2082_160_, lean_object* v_a_161_, lean_object* v_a_162_, lean_object* v_a_163_, lean_object* v_a_164_, lean_object* v___y_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq(v_decl_u2081_159_, v_decl_u2082_160_, v_a_161_, v_a_162_, v_a_163_, v_a_164_);
lean_dec(v_a_164_);
lean_dec_ref(v_a_163_);
lean_dec(v_a_162_);
lean_dec_ref(v_a_161_);
lean_dec_ref(v_decl_u2082_160_);
lean_dec_ref(v_decl_u2081_159_);
return v_res_166_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__4(lean_object* v_opts_167_, lean_object* v_opt_168_){
_start:
{
lean_object* v_name_169_; lean_object* v_defValue_170_; lean_object* v_map_171_; lean_object* v___x_172_; 
v_name_169_ = lean_ctor_get(v_opt_168_, 0);
v_defValue_170_ = lean_ctor_get(v_opt_168_, 1);
v_map_171_ = lean_ctor_get(v_opts_167_, 0);
v___x_172_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_171_, v_name_169_);
if (lean_obj_tag(v___x_172_) == 0)
{
uint8_t v___x_173_; 
v___x_173_ = lean_unbox(v_defValue_170_);
return v___x_173_;
}
else
{
lean_object* v_val_174_; 
v_val_174_ = lean_ctor_get(v___x_172_, 0);
lean_inc(v_val_174_);
lean_dec_ref_known(v___x_172_, 1);
if (lean_obj_tag(v_val_174_) == 1)
{
uint8_t v_v_175_; 
v_v_175_ = lean_ctor_get_uint8(v_val_174_, 0);
lean_dec_ref_known(v_val_174_, 0);
return v_v_175_;
}
else
{
uint8_t v___x_176_; 
lean_dec(v_val_174_);
v___x_176_ = lean_unbox(v_defValue_170_);
return v___x_176_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__4___boxed(lean_object* v_opts_177_, lean_object* v_opt_178_){
_start:
{
uint8_t v_res_179_; lean_object* v_r_180_; 
v_res_179_ = l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__4(v_opts_177_, v_opt_178_);
lean_dec_ref(v_opt_178_);
lean_dec_ref(v_opts_177_);
v_r_180_ = lean_box(v_res_179_);
return v_r_180_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__6(lean_object* v_x_181_, lean_object* v_x_182_){
_start:
{
if (lean_obj_tag(v_x_181_) == 0)
{
if (lean_obj_tag(v_x_182_) == 0)
{
uint8_t v___x_183_; 
v___x_183_ = 1;
return v___x_183_;
}
else
{
uint8_t v___x_184_; 
v___x_184_ = 0;
return v___x_184_;
}
}
else
{
if (lean_obj_tag(v_x_182_) == 0)
{
uint8_t v___x_185_; 
v___x_185_ = 0;
return v___x_185_;
}
else
{
lean_object* v_val_186_; lean_object* v_val_187_; uint8_t v___x_188_; 
v_val_186_ = lean_ctor_get(v_x_181_, 0);
v_val_187_ = lean_ctor_get(v_x_182_, 0);
v___x_188_ = lean_name_eq(v_val_186_, v_val_187_);
return v___x_188_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__6___boxed(lean_object* v_x_189_, lean_object* v_x_190_){
_start:
{
uint8_t v_res_191_; lean_object* v_r_192_; 
v_res_191_ = l_Option_instBEq_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__6(v_x_189_, v_x_190_);
lean_dec(v_x_190_);
lean_dec(v_x_189_);
v_r_192_ = lean_box(v_res_191_);
return v_r_192_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(lean_object* v_x_194_){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0___closed__0_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2____boxed(lean_object* v_x_196_){
_start:
{
lean_object* v_res_197_; 
v_res_197_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(v_x_196_);
lean_dec_ref(v_x_196_);
return v_res_197_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(lean_object* v_x_198_, lean_object* v_x_199_, lean_object* v_x_200_, lean_object* v___y_201_){
_start:
{
lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_203_ = lean_box(0);
v___x_204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_204_, 0, v___x_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2____boxed(lean_object* v_x_205_, lean_object* v_x_206_, lean_object* v_x_207_, lean_object* v___y_208_, lean_object* v___y_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(v_x_205_, v_x_206_, v_x_207_, v___y_208_);
lean_dec(v___y_208_);
lean_dec_ref(v_x_207_);
lean_dec_ref(v_x_206_);
lean_dec(v_x_205_);
return v_res_210_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(uint8_t v___x_211_, lean_object* v_env_212_, lean_object* v_n_213_, lean_object* v_x_214_){
_start:
{
uint8_t v___x_215_; 
v___x_215_ = l_Lean_Environment_contains(v_env_212_, v_n_213_, v___x_211_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2____boxed(lean_object* v___x_216_, lean_object* v_env_217_, lean_object* v_n_218_, lean_object* v_x_219_){
_start:
{
uint8_t v___x_43564__boxed_220_; uint8_t v_res_221_; lean_object* v_r_222_; 
v___x_43564__boxed_220_ = lean_unbox(v___x_216_);
v_res_221_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(v___x_43564__boxed_220_, v_env_217_, v_n_218_, v_x_219_);
lean_dec_ref(v_x_219_);
v_r_222_ = lean_box(v_res_221_);
return v_r_222_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41_spec__43_spec__46(lean_object* v_msgData_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_){
_start:
{
lean_object* v___x_229_; lean_object* v_env_230_; lean_object* v___x_231_; lean_object* v_toCold_232_; lean_object* v_mctx_233_; lean_object* v_lctx_234_; lean_object* v_options_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_229_ = lean_st_ref_get(v___y_227_);
v_env_230_ = lean_ctor_get(v___x_229_, 0);
lean_inc_ref(v_env_230_);
lean_dec(v___x_229_);
v___x_231_ = lean_st_ref_get(v___y_225_);
v_toCold_232_ = lean_ctor_get(v___y_226_, 0);
v_mctx_233_ = lean_ctor_get(v___x_231_, 0);
lean_inc_ref(v_mctx_233_);
lean_dec(v___x_231_);
v_lctx_234_ = lean_ctor_get(v___y_224_, 2);
v_options_235_ = lean_ctor_get(v_toCold_232_, 2);
lean_inc_ref(v_options_235_);
lean_inc_ref(v_lctx_234_);
v___x_236_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_236_, 0, v_env_230_);
lean_ctor_set(v___x_236_, 1, v_mctx_233_);
lean_ctor_set(v___x_236_, 2, v_lctx_234_);
lean_ctor_set(v___x_236_, 3, v_options_235_);
v___x_237_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_236_);
lean_ctor_set(v___x_237_, 1, v_msgData_223_);
v___x_238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_238_, 0, v___x_237_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41_spec__43_spec__46___boxed(lean_object* v_msgData_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41_spec__43_spec__46(v_msgData_239_, v___y_240_, v___y_241_, v___y_242_, v___y_243_);
lean_dec(v___y_243_);
lean_dec_ref(v___y_242_);
lean_dec(v___y_241_);
lean_dec_ref(v___y_240_);
return v_res_245_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0(uint8_t v_suppressElabErrors_254_, uint8_t v___y_255_, lean_object* v_x_256_){
_start:
{
if (lean_obj_tag(v_x_256_) == 1)
{
lean_object* v_pre_257_; 
v_pre_257_ = lean_ctor_get(v_x_256_, 0);
switch(lean_obj_tag(v_pre_257_))
{
case 1:
{
lean_object* v_pre_258_; 
v_pre_258_ = lean_ctor_get(v_pre_257_, 0);
switch(lean_obj_tag(v_pre_258_))
{
case 0:
{
lean_object* v_str_259_; lean_object* v_str_260_; lean_object* v___x_261_; uint8_t v___x_262_; 
v_str_259_ = lean_ctor_get(v_x_256_, 1);
v_str_260_ = lean_ctor_get(v_pre_257_, 1);
v___x_261_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__0));
v___x_262_ = lean_string_dec_eq(v_str_260_, v___x_261_);
if (v___x_262_ == 0)
{
lean_object* v___x_263_; uint8_t v___x_264_; 
v___x_263_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__1));
v___x_264_ = lean_string_dec_eq(v_str_260_, v___x_263_);
if (v___x_264_ == 0)
{
return v___x_264_;
}
else
{
lean_object* v___x_265_; uint8_t v___x_266_; 
v___x_265_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__2));
v___x_266_ = lean_string_dec_eq(v_str_259_, v___x_265_);
if (v___x_266_ == 0)
{
return v___x_266_;
}
else
{
return v_suppressElabErrors_254_;
}
}
}
else
{
lean_object* v___x_267_; uint8_t v___x_268_; 
v___x_267_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__3));
v___x_268_ = lean_string_dec_eq(v_str_259_, v___x_267_);
if (v___x_268_ == 0)
{
return v___x_268_;
}
else
{
return v_suppressElabErrors_254_;
}
}
}
case 1:
{
lean_object* v_pre_269_; 
v_pre_269_ = lean_ctor_get(v_pre_258_, 0);
if (lean_obj_tag(v_pre_269_) == 0)
{
lean_object* v_str_270_; lean_object* v_str_271_; lean_object* v_str_272_; lean_object* v___x_273_; uint8_t v___x_274_; 
v_str_270_ = lean_ctor_get(v_x_256_, 1);
v_str_271_ = lean_ctor_get(v_pre_257_, 1);
v_str_272_ = lean_ctor_get(v_pre_258_, 1);
v___x_273_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__4));
v___x_274_ = lean_string_dec_eq(v_str_272_, v___x_273_);
if (v___x_274_ == 0)
{
return v___x_274_;
}
else
{
lean_object* v___x_275_; uint8_t v___x_276_; 
v___x_275_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__5));
v___x_276_ = lean_string_dec_eq(v_str_271_, v___x_275_);
if (v___x_276_ == 0)
{
return v___x_276_;
}
else
{
lean_object* v___x_277_; uint8_t v___x_278_; 
v___x_277_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__6));
v___x_278_ = lean_string_dec_eq(v_str_270_, v___x_277_);
if (v___x_278_ == 0)
{
return v___x_278_;
}
else
{
return v_suppressElabErrors_254_;
}
}
}
}
else
{
return v___y_255_;
}
}
default: 
{
return v___y_255_;
}
}
}
case 0:
{
lean_object* v_str_279_; lean_object* v___x_280_; uint8_t v___x_281_; 
v_str_279_ = lean_ctor_get(v_x_256_, 1);
v___x_280_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__7));
v___x_281_ = lean_string_dec_eq(v_str_279_, v___x_280_);
if (v___x_281_ == 0)
{
return v___x_281_;
}
else
{
return v_suppressElabErrors_254_;
}
}
default: 
{
return v___y_255_;
}
}
}
else
{
return v___y_255_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___boxed(lean_object* v_suppressElabErrors_282_, lean_object* v___y_283_, lean_object* v_x_284_){
_start:
{
uint8_t v_suppressElabErrors_boxed_285_; uint8_t v___y_43613__boxed_286_; uint8_t v_res_287_; lean_object* v_r_288_; 
v_suppressElabErrors_boxed_285_ = lean_unbox(v_suppressElabErrors_282_);
v___y_43613__boxed_286_ = lean_unbox(v___y_283_);
v_res_287_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0(v_suppressElabErrors_boxed_285_, v___y_43613__boxed_286_, v_x_284_);
lean_dec(v_x_284_);
v_r_288_ = lean_box(v_res_287_);
return v_r_288_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41_spec__43(lean_object* v_ref_290_, lean_object* v_msgData_291_, uint8_t v_severity_292_, uint8_t v_isSilent_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_){
_start:
{
lean_object* v___y_300_; lean_object* v___y_301_; lean_object* v___y_302_; lean_object* v___y_303_; lean_object* v___y_304_; uint8_t v___y_305_; uint8_t v___y_306_; lean_object* v_currNamespace_307_; lean_object* v_openDecls_308_; lean_object* v___y_309_; lean_object* v___y_335_; lean_object* v___y_336_; lean_object* v___y_337_; lean_object* v___y_338_; uint8_t v___y_339_; lean_object* v___y_340_; uint8_t v___y_341_; uint8_t v___y_342_; lean_object* v___y_343_; lean_object* v___y_344_; lean_object* v___y_362_; lean_object* v___y_363_; lean_object* v___y_364_; lean_object* v___y_365_; uint8_t v___y_366_; lean_object* v___y_367_; uint8_t v___y_368_; lean_object* v___y_369_; uint8_t v___y_370_; lean_object* v___y_371_; lean_object* v___y_375_; lean_object* v___y_376_; lean_object* v___y_377_; lean_object* v___y_378_; uint8_t v___y_379_; lean_object* v___y_380_; lean_object* v___y_381_; uint8_t v___y_382_; uint8_t v___y_383_; uint8_t v___x_388_; lean_object* v___y_390_; lean_object* v___y_391_; lean_object* v___y_392_; lean_object* v___y_393_; lean_object* v___y_394_; lean_object* v___y_395_; uint8_t v___y_396_; uint8_t v___y_397_; uint8_t v___y_398_; uint8_t v___y_400_; uint8_t v___x_418_; 
v___x_388_ = 2;
v___x_418_ = l_Lean_instBEqMessageSeverity_beq(v_severity_292_, v___x_388_);
if (v___x_418_ == 0)
{
v___y_400_ = v___x_418_;
goto v___jp_399_;
}
else
{
uint8_t v___x_419_; 
lean_inc_ref(v_msgData_291_);
v___x_419_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_291_);
v___y_400_ = v___x_419_;
goto v___jp_399_;
}
v___jp_299_:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v_env_314_; lean_object* v_nextMacroScope_315_; lean_object* v_ngen_316_; lean_object* v_auxDeclNGen_317_; lean_object* v_traceState_318_; lean_object* v_cache_319_; lean_object* v_messages_320_; lean_object* v_infoState_321_; lean_object* v_snapshotTasks_322_; lean_object* v___x_324_; uint8_t v_isShared_325_; uint8_t v_isSharedCheck_333_; 
lean_inc(v_openDecls_308_);
lean_inc(v_currNamespace_307_);
v___x_310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_310_, 0, v_currNamespace_307_);
lean_ctor_set(v___x_310_, 1, v_openDecls_308_);
v___x_311_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_311_, 0, v___x_310_);
lean_ctor_set(v___x_311_, 1, v___y_300_);
lean_inc_ref(v___y_302_);
lean_inc_ref(v___y_304_);
v___x_312_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_312_, 0, v___y_304_);
lean_ctor_set(v___x_312_, 1, v___y_301_);
lean_ctor_set(v___x_312_, 2, v___y_303_);
lean_ctor_set(v___x_312_, 3, v___y_302_);
lean_ctor_set(v___x_312_, 4, v___x_311_);
lean_ctor_set_uint8(v___x_312_, sizeof(void*)*5, v___y_305_);
lean_ctor_set_uint8(v___x_312_, sizeof(void*)*5 + 1, v___y_306_);
lean_ctor_set_uint8(v___x_312_, sizeof(void*)*5 + 2, v_isSilent_293_);
v___x_313_ = lean_st_ref_take(v___y_309_);
v_env_314_ = lean_ctor_get(v___x_313_, 0);
v_nextMacroScope_315_ = lean_ctor_get(v___x_313_, 1);
v_ngen_316_ = lean_ctor_get(v___x_313_, 2);
v_auxDeclNGen_317_ = lean_ctor_get(v___x_313_, 3);
v_traceState_318_ = lean_ctor_get(v___x_313_, 4);
v_cache_319_ = lean_ctor_get(v___x_313_, 5);
v_messages_320_ = lean_ctor_get(v___x_313_, 6);
v_infoState_321_ = lean_ctor_get(v___x_313_, 7);
v_snapshotTasks_322_ = lean_ctor_get(v___x_313_, 8);
v_isSharedCheck_333_ = !lean_is_exclusive(v___x_313_);
if (v_isSharedCheck_333_ == 0)
{
v___x_324_ = v___x_313_;
v_isShared_325_ = v_isSharedCheck_333_;
goto v_resetjp_323_;
}
else
{
lean_inc(v_snapshotTasks_322_);
lean_inc(v_infoState_321_);
lean_inc(v_messages_320_);
lean_inc(v_cache_319_);
lean_inc(v_traceState_318_);
lean_inc(v_auxDeclNGen_317_);
lean_inc(v_ngen_316_);
lean_inc(v_nextMacroScope_315_);
lean_inc(v_env_314_);
lean_dec(v___x_313_);
v___x_324_ = lean_box(0);
v_isShared_325_ = v_isSharedCheck_333_;
goto v_resetjp_323_;
}
v_resetjp_323_:
{
lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_329_; 
v___x_326_ = lean_box(0);
v___x_327_ = l_Lean_MessageLog_add(v___x_312_, v_messages_320_);
if (v_isShared_325_ == 0)
{
lean_ctor_set(v___x_324_, 6, v___x_327_);
v___x_329_ = v___x_324_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v_env_314_);
lean_ctor_set(v_reuseFailAlloc_332_, 1, v_nextMacroScope_315_);
lean_ctor_set(v_reuseFailAlloc_332_, 2, v_ngen_316_);
lean_ctor_set(v_reuseFailAlloc_332_, 3, v_auxDeclNGen_317_);
lean_ctor_set(v_reuseFailAlloc_332_, 4, v_traceState_318_);
lean_ctor_set(v_reuseFailAlloc_332_, 5, v_cache_319_);
lean_ctor_set(v_reuseFailAlloc_332_, 6, v___x_327_);
lean_ctor_set(v_reuseFailAlloc_332_, 7, v_infoState_321_);
lean_ctor_set(v_reuseFailAlloc_332_, 8, v_snapshotTasks_322_);
v___x_329_ = v_reuseFailAlloc_332_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = lean_st_ref_put(v___y_309_, v___x_329_);
v___x_331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_331_, 0, v___x_326_);
return v___x_331_;
}
}
}
v___jp_334_:
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v_a_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_360_; 
v___x_345_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_291_);
v___x_346_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41_spec__43_spec__46(v___x_345_, v___y_294_, v___y_295_, v___y_296_, v___y_297_);
v_a_347_ = lean_ctor_get(v___x_346_, 0);
v_isSharedCheck_360_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_360_ == 0)
{
v___x_349_ = v___x_346_;
v_isShared_350_ = v_isSharedCheck_360_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_a_347_);
lean_dec(v___x_346_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_360_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
lean_inc_ref_n(v___y_338_, 2);
v___x_351_ = l_Lean_FileMap_toPosition(v___y_338_, v___y_343_);
lean_dec(v___y_343_);
v___x_352_ = l_Lean_FileMap_toPosition(v___y_338_, v___y_344_);
lean_dec(v___y_344_);
v___x_353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_353_, 0, v___x_352_);
v___x_354_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41_spec__43___closed__0));
if (v___y_339_ == 0)
{
lean_del_object(v___x_349_);
lean_dec_ref(v___y_337_);
v___y_300_ = v_a_347_;
v___y_301_ = v___x_351_;
v___y_302_ = v___x_354_;
v___y_303_ = v___x_353_;
v___y_304_ = v___y_340_;
v___y_305_ = v___y_341_;
v___y_306_ = v___y_342_;
v_currNamespace_307_ = v___y_336_;
v_openDecls_308_ = v___y_335_;
v___y_309_ = v___y_297_;
goto v___jp_299_;
}
else
{
uint8_t v___x_355_; 
lean_inc(v_a_347_);
v___x_355_ = l_Lean_MessageData_hasTag(v___y_337_, v_a_347_);
if (v___x_355_ == 0)
{
lean_object* v___x_356_; lean_object* v___x_358_; 
lean_dec_ref_known(v___x_353_, 1);
lean_dec_ref(v___x_351_);
lean_dec(v_a_347_);
v___x_356_ = lean_box(0);
if (v_isShared_350_ == 0)
{
lean_ctor_set(v___x_349_, 0, v___x_356_);
v___x_358_ = v___x_349_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v___x_356_);
v___x_358_ = v_reuseFailAlloc_359_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
return v___x_358_;
}
}
else
{
lean_del_object(v___x_349_);
v___y_300_ = v_a_347_;
v___y_301_ = v___x_351_;
v___y_302_ = v___x_354_;
v___y_303_ = v___x_353_;
v___y_304_ = v___y_340_;
v___y_305_ = v___y_341_;
v___y_306_ = v___y_342_;
v_currNamespace_307_ = v___y_336_;
v_openDecls_308_ = v___y_335_;
v___y_309_ = v___y_297_;
goto v___jp_299_;
}
}
}
}
v___jp_361_:
{
lean_object* v___x_372_; 
v___x_372_ = l_Lean_Syntax_getTailPos_x3f(v___y_369_, v___y_368_);
lean_dec(v___y_369_);
if (lean_obj_tag(v___x_372_) == 0)
{
lean_inc(v___y_371_);
v___y_335_ = v___y_362_;
v___y_336_ = v___y_363_;
v___y_337_ = v___y_364_;
v___y_338_ = v___y_365_;
v___y_339_ = v___y_366_;
v___y_340_ = v___y_367_;
v___y_341_ = v___y_368_;
v___y_342_ = v___y_370_;
v___y_343_ = v___y_371_;
v___y_344_ = v___y_371_;
goto v___jp_334_;
}
else
{
lean_object* v_val_373_; 
v_val_373_ = lean_ctor_get(v___x_372_, 0);
lean_inc(v_val_373_);
lean_dec_ref_known(v___x_372_, 1);
v___y_335_ = v___y_362_;
v___y_336_ = v___y_363_;
v___y_337_ = v___y_364_;
v___y_338_ = v___y_365_;
v___y_339_ = v___y_366_;
v___y_340_ = v___y_367_;
v___y_341_ = v___y_368_;
v___y_342_ = v___y_370_;
v___y_343_ = v___y_371_;
v___y_344_ = v_val_373_;
goto v___jp_334_;
}
}
v___jp_374_:
{
lean_object* v_ref_384_; lean_object* v___x_385_; 
v_ref_384_ = l_Lean_replaceRef(v_ref_290_, v___y_380_);
v___x_385_ = l_Lean_Syntax_getPos_x3f(v_ref_384_, v___y_382_);
if (lean_obj_tag(v___x_385_) == 0)
{
lean_object* v___x_386_; 
v___x_386_ = lean_unsigned_to_nat(0u);
v___y_362_ = v___y_375_;
v___y_363_ = v___y_376_;
v___y_364_ = v___y_377_;
v___y_365_ = v___y_378_;
v___y_366_ = v___y_379_;
v___y_367_ = v___y_381_;
v___y_368_ = v___y_382_;
v___y_369_ = v_ref_384_;
v___y_370_ = v___y_383_;
v___y_371_ = v___x_386_;
goto v___jp_361_;
}
else
{
lean_object* v_val_387_; 
v_val_387_ = lean_ctor_get(v___x_385_, 0);
lean_inc(v_val_387_);
lean_dec_ref_known(v___x_385_, 1);
v___y_362_ = v___y_375_;
v___y_363_ = v___y_376_;
v___y_364_ = v___y_377_;
v___y_365_ = v___y_378_;
v___y_366_ = v___y_379_;
v___y_367_ = v___y_381_;
v___y_368_ = v___y_382_;
v___y_369_ = v_ref_384_;
v___y_370_ = v___y_383_;
v___y_371_ = v_val_387_;
goto v___jp_361_;
}
}
v___jp_389_:
{
if (v___y_398_ == 0)
{
v___y_375_ = v___y_390_;
v___y_376_ = v___y_393_;
v___y_377_ = v___y_394_;
v___y_378_ = v___y_391_;
v___y_379_ = v___y_396_;
v___y_380_ = v___y_395_;
v___y_381_ = v___y_392_;
v___y_382_ = v___y_397_;
v___y_383_ = v_severity_292_;
goto v___jp_374_;
}
else
{
v___y_375_ = v___y_390_;
v___y_376_ = v___y_393_;
v___y_377_ = v___y_394_;
v___y_378_ = v___y_391_;
v___y_379_ = v___y_396_;
v___y_380_ = v___y_395_;
v___y_381_ = v___y_392_;
v___y_382_ = v___y_397_;
v___y_383_ = v___x_388_;
goto v___jp_374_;
}
}
v___jp_399_:
{
if (v___y_400_ == 0)
{
lean_object* v_toCold_401_; lean_object* v_ref_402_; uint8_t v_suppressElabErrors_403_; lean_object* v_fileName_404_; lean_object* v_fileMap_405_; lean_object* v_options_406_; lean_object* v_currNamespace_407_; lean_object* v_openDecls_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___f_411_; uint8_t v___x_412_; uint8_t v___x_413_; 
v_toCold_401_ = lean_ctor_get(v___y_296_, 0);
v_ref_402_ = lean_ctor_get(v___y_296_, 2);
v_suppressElabErrors_403_ = lean_ctor_get_uint8(v___y_296_, sizeof(void*)*3 + 1);
v_fileName_404_ = lean_ctor_get(v_toCold_401_, 0);
v_fileMap_405_ = lean_ctor_get(v_toCold_401_, 1);
v_options_406_ = lean_ctor_get(v_toCold_401_, 2);
v_currNamespace_407_ = lean_ctor_get(v_toCold_401_, 4);
v_openDecls_408_ = lean_ctor_get(v_toCold_401_, 5);
v___x_409_ = lean_box(v_suppressElabErrors_403_);
v___x_410_ = lean_box(v___y_400_);
v___f_411_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___boxed), 3, 2);
lean_closure_set(v___f_411_, 0, v___x_409_);
lean_closure_set(v___f_411_, 1, v___x_410_);
v___x_412_ = 1;
v___x_413_ = l_Lean_instBEqMessageSeverity_beq(v_severity_292_, v___x_412_);
if (v___x_413_ == 0)
{
v___y_390_ = v_openDecls_408_;
v___y_391_ = v_fileMap_405_;
v___y_392_ = v_fileName_404_;
v___y_393_ = v_currNamespace_407_;
v___y_394_ = v___f_411_;
v___y_395_ = v_ref_402_;
v___y_396_ = v_suppressElabErrors_403_;
v___y_397_ = v___y_400_;
v___y_398_ = v___x_413_;
goto v___jp_389_;
}
else
{
lean_object* v___x_414_; uint8_t v___x_415_; 
v___x_414_ = l_Lean_warningAsError;
v___x_415_ = l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__4(v_options_406_, v___x_414_);
v___y_390_ = v_openDecls_408_;
v___y_391_ = v_fileMap_405_;
v___y_392_ = v_fileName_404_;
v___y_393_ = v_currNamespace_407_;
v___y_394_ = v___f_411_;
v___y_395_ = v_ref_402_;
v___y_396_ = v_suppressElabErrors_403_;
v___y_397_ = v___y_400_;
v___y_398_ = v___x_415_;
goto v___jp_389_;
}
}
else
{
lean_object* v___x_416_; lean_object* v___x_417_; 
lean_dec_ref(v_msgData_291_);
v___x_416_ = lean_box(0);
v___x_417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_417_, 0, v___x_416_);
return v___x_417_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41_spec__43___boxed(lean_object* v_ref_420_, lean_object* v_msgData_421_, lean_object* v_severity_422_, lean_object* v_isSilent_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_){
_start:
{
uint8_t v_severity_boxed_429_; uint8_t v_isSilent_boxed_430_; lean_object* v_res_431_; 
v_severity_boxed_429_ = lean_unbox(v_severity_422_);
v_isSilent_boxed_430_ = lean_unbox(v_isSilent_423_);
v_res_431_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41_spec__43(v_ref_420_, v_msgData_421_, v_severity_boxed_429_, v_isSilent_boxed_430_, v___y_424_, v___y_425_, v___y_426_, v___y_427_);
lean_dec(v___y_427_);
lean_dec_ref(v___y_426_);
lean_dec(v___y_425_);
lean_dec_ref(v___y_424_);
lean_dec(v_ref_420_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41(lean_object* v_msgData_432_, uint8_t v_severity_433_, uint8_t v_isSilent_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_){
_start:
{
lean_object* v_ref_440_; lean_object* v___x_441_; 
v_ref_440_ = lean_ctor_get(v___y_437_, 2);
v___x_441_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41_spec__43(v_ref_440_, v_msgData_432_, v_severity_433_, v_isSilent_434_, v___y_435_, v___y_436_, v___y_437_, v___y_438_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41___boxed(lean_object* v_msgData_442_, lean_object* v_severity_443_, lean_object* v_isSilent_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_){
_start:
{
uint8_t v_severity_boxed_450_; uint8_t v_isSilent_boxed_451_; lean_object* v_res_452_; 
v_severity_boxed_450_ = lean_unbox(v_severity_443_);
v_isSilent_boxed_451_ = lean_unbox(v_isSilent_444_);
v_res_452_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41(v_msgData_442_, v_severity_boxed_450_, v_isSilent_boxed_451_, v___y_445_, v___y_446_, v___y_447_, v___y_448_);
lean_dec(v___y_448_);
lean_dec_ref(v___y_447_);
lean_dec(v___y_446_);
lean_dec_ref(v___y_445_);
return v_res_452_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37(lean_object* v_msgData_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_){
_start:
{
uint8_t v___x_459_; uint8_t v___x_460_; lean_object* v___x_461_; 
v___x_459_ = 1;
v___x_460_ = 0;
v___x_461_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41(v_msgData_453_, v___x_459_, v___x_460_, v___y_454_, v___y_455_, v___y_456_, v___y_457_);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37___boxed(lean_object* v_msgData_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_){
_start:
{
lean_object* v_res_468_; 
v_res_468_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37(v_msgData_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_);
lean_dec(v___y_466_);
lean_dec_ref(v___y_465_);
lean_dec(v___y_464_);
lean_dec_ref(v___y_463_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__36___redArg(lean_object* v_opt_469_, lean_object* v___y_470_){
_start:
{
lean_object* v_toCold_472_; lean_object* v_options_473_; uint8_t v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
v_toCold_472_ = lean_ctor_get(v___y_470_, 0);
v_options_473_ = lean_ctor_get(v_toCold_472_, 2);
v___x_474_ = l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__4(v_options_473_, v_opt_469_);
v___x_475_ = lean_box(v___x_474_);
v___x_476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_476_, 0, v___x_475_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__36___redArg___boxed(lean_object* v_opt_477_, lean_object* v___y_478_, lean_object* v___y_479_){
_start:
{
lean_object* v_res_480_; 
v_res_480_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__36___redArg(v_opt_477_, v___y_478_);
lean_dec_ref(v___y_478_);
lean_dec_ref(v_opt_477_);
return v_res_480_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___closed__1(void){
_start:
{
lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_482_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___closed__0));
v___x_483_ = l_Lean_stringToMessageData(v___x_482_);
return v___x_483_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___closed__3(void){
_start:
{
lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___closed__2));
v___x_486_ = l_Lean_stringToMessageData(v___x_485_);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31(lean_object* v_id_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_){
_start:
{
lean_object* v___x_493_; lean_object* v_env_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v_a_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_516_; 
v___x_493_ = lean_st_ref_get(v___y_491_);
v_env_494_ = lean_ctor_get(v___x_493_, 0);
lean_inc_ref(v_env_494_);
lean_dec(v___x_493_);
v___x_495_ = l_Lean_ResolveName_backward_privateInPublic_warn;
v___x_496_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__36___redArg(v___x_495_, v___y_490_);
v_a_497_ = lean_ctor_get(v___x_496_, 0);
v_isSharedCheck_516_ = !lean_is_exclusive(v___x_496_);
if (v_isSharedCheck_516_ == 0)
{
v___x_499_ = v___x_496_;
v_isShared_500_ = v_isSharedCheck_516_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_a_497_);
lean_dec(v___x_496_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_516_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
uint8_t v_isExporting_506_; 
v_isExporting_506_ = lean_ctor_get_uint8(v_env_494_, sizeof(void*)*8);
lean_dec_ref(v_env_494_);
if (v_isExporting_506_ == 0)
{
lean_dec(v_a_497_);
lean_dec(v_id_487_);
goto v___jp_501_;
}
else
{
uint8_t v___x_507_; 
v___x_507_ = l_Lean_isPrivateName(v_id_487_);
if (v___x_507_ == 0)
{
lean_dec(v_a_497_);
lean_dec(v_id_487_);
goto v___jp_501_;
}
else
{
uint8_t v___x_508_; 
v___x_508_ = lean_unbox(v_a_497_);
lean_dec(v_a_497_);
if (v___x_508_ == 0)
{
lean_dec(v_id_487_);
goto v___jp_501_;
}
else
{
lean_object* v___x_509_; uint8_t v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
lean_del_object(v___x_499_);
v___x_509_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___closed__1, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___closed__1_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___closed__1);
v___x_510_ = 0;
v___x_511_ = l_Lean_MessageData_ofConstName(v_id_487_, v___x_510_);
v___x_512_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_512_, 0, v___x_509_);
lean_ctor_set(v___x_512_, 1, v___x_511_);
v___x_513_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___closed__3, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___closed__3_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___closed__3);
v___x_514_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_514_, 0, v___x_512_);
lean_ctor_set(v___x_514_, 1, v___x_513_);
v___x_515_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37(v___x_514_, v___y_488_, v___y_489_, v___y_490_, v___y_491_);
return v___x_515_;
}
}
}
v___jp_501_:
{
lean_object* v___x_502_; lean_object* v___x_504_; 
v___x_502_ = lean_box(0);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 0, v___x_502_);
v___x_504_ = v___x_499_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v___x_502_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
return v___x_504_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___boxed(lean_object* v_id_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31(v_id_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_);
lean_dec(v___y_521_);
lean_dec_ref(v___y_520_);
lean_dec(v___y_519_);
lean_dec_ref(v___y_518_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__30(lean_object* v_x_524_){
_start:
{
if (lean_obj_tag(v_x_524_) == 0)
{
lean_object* v___x_525_; 
v___x_525_ = lean_box(0);
return v___x_525_;
}
else
{
lean_object* v_head_526_; lean_object* v_tail_527_; lean_object* v_fst_528_; uint8_t v___x_529_; 
v_head_526_ = lean_ctor_get(v_x_524_, 0);
v_tail_527_ = lean_ctor_get(v_x_524_, 1);
v_fst_528_ = lean_ctor_get(v_head_526_, 0);
v___x_529_ = l_Lean_isPrivateName(v_fst_528_);
if (v___x_529_ == 0)
{
v_x_524_ = v_tail_527_;
goto _start;
}
else
{
lean_object* v___x_531_; 
lean_inc(v_head_526_);
v___x_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_531_, 0, v_head_526_);
return v___x_531_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__30___boxed(lean_object* v_x_532_){
_start:
{
lean_object* v_res_533_; 
v_res_533_ = l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__30(v_x_532_);
lean_dec(v_x_532_);
return v_res_533_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25(lean_object* v_id_534_, uint8_t v_enableLog_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_){
_start:
{
lean_object* v___x_541_; lean_object* v_toCold_542_; lean_object* v_env_543_; lean_object* v_options_544_; lean_object* v_currNamespace_545_; lean_object* v_openDecls_546_; lean_object* v_res_547_; lean_object* v___x_548_; 
v___x_541_ = lean_st_ref_get(v___y_539_);
v_toCold_542_ = lean_ctor_get(v___y_538_, 0);
v_env_543_ = lean_ctor_get(v___x_541_, 0);
lean_inc_ref(v_env_543_);
lean_dec(v___x_541_);
v_options_544_ = lean_ctor_get(v_toCold_542_, 2);
v_currNamespace_545_ = lean_ctor_get(v_toCold_542_, 4);
v_openDecls_546_ = lean_ctor_get(v_toCold_542_, 5);
lean_inc(v_openDecls_546_);
lean_inc(v_currNamespace_545_);
v_res_547_ = l_Lean_ResolveName_resolveGlobalName(v_env_543_, v_options_544_, v_currNamespace_545_, v_openDecls_546_, v_id_534_);
v___x_548_ = lean_st_ref_get(v___y_539_);
if (v_enableLog_535_ == 0)
{
lean_object* v___x_549_; 
lean_dec(v___x_548_);
v___x_549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_549_, 0, v_res_547_);
return v___x_549_;
}
else
{
lean_object* v_env_550_; uint8_t v_isExporting_551_; 
v_env_550_ = lean_ctor_get(v___x_548_, 0);
lean_inc_ref(v_env_550_);
lean_dec(v___x_548_);
v_isExporting_551_ = lean_ctor_get_uint8(v_env_550_, sizeof(void*)*8);
lean_dec_ref(v_env_550_);
if (v_isExporting_551_ == 0)
{
lean_object* v___x_552_; 
v___x_552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_552_, 0, v_res_547_);
return v___x_552_;
}
else
{
lean_object* v___x_553_; 
v___x_553_ = l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__30(v_res_547_);
if (lean_obj_tag(v___x_553_) == 1)
{
lean_object* v_val_554_; lean_object* v_fst_555_; lean_object* v___x_556_; 
v_val_554_ = lean_ctor_get(v___x_553_, 0);
lean_inc(v_val_554_);
lean_dec_ref_known(v___x_553_, 1);
v_fst_555_ = lean_ctor_get(v_val_554_, 0);
lean_inc(v_fst_555_);
lean_dec(v_val_554_);
v___x_556_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31(v_fst_555_, v___y_536_, v___y_537_, v___y_538_, v___y_539_);
if (lean_obj_tag(v___x_556_) == 0)
{
lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_563_; 
v_isSharedCheck_563_ = !lean_is_exclusive(v___x_556_);
if (v_isSharedCheck_563_ == 0)
{
lean_object* v_unused_564_; 
v_unused_564_ = lean_ctor_get(v___x_556_, 0);
lean_dec(v_unused_564_);
v___x_558_ = v___x_556_;
v_isShared_559_ = v_isSharedCheck_563_;
goto v_resetjp_557_;
}
else
{
lean_dec(v___x_556_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_563_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
lean_object* v___x_561_; 
if (v_isShared_559_ == 0)
{
lean_ctor_set(v___x_558_, 0, v_res_547_);
v___x_561_ = v___x_558_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v_res_547_);
v___x_561_ = v_reuseFailAlloc_562_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
return v___x_561_;
}
}
}
else
{
lean_object* v_a_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_572_; 
lean_dec(v_res_547_);
v_a_565_ = lean_ctor_get(v___x_556_, 0);
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_556_);
if (v_isSharedCheck_572_ == 0)
{
v___x_567_ = v___x_556_;
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_a_565_);
lean_dec(v___x_556_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_570_; 
if (v_isShared_568_ == 0)
{
v___x_570_ = v___x_567_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v_a_565_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
}
}
}
}
else
{
lean_object* v___x_573_; 
lean_dec(v___x_553_);
v___x_573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_573_, 0, v_res_547_);
return v___x_573_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25___boxed(lean_object* v_id_574_, lean_object* v_enableLog_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_){
_start:
{
uint8_t v_enableLog_boxed_581_; lean_object* v_res_582_; 
v_enableLog_boxed_581_ = lean_unbox(v_enableLog_575_);
v_res_582_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25(v_id_574_, v_enableLog_boxed_581_, v___y_576_, v___y_577_, v___y_578_, v___y_579_);
lean_dec(v___y_579_);
lean_dec_ref(v___y_578_);
lean_dec(v___y_577_);
lean_dec_ref(v___y_576_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__26(lean_object* v_a_583_, lean_object* v_a_584_){
_start:
{
if (lean_obj_tag(v_a_583_) == 0)
{
lean_object* v___x_585_; 
v___x_585_ = l_List_reverse___redArg(v_a_584_);
return v___x_585_;
}
else
{
lean_object* v_head_586_; lean_object* v_tail_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_598_; 
v_head_586_ = lean_ctor_get(v_a_583_, 0);
v_tail_587_ = lean_ctor_get(v_a_583_, 1);
v_isSharedCheck_598_ = !lean_is_exclusive(v_a_583_);
if (v_isSharedCheck_598_ == 0)
{
v___x_589_ = v_a_583_;
v_isShared_590_ = v_isSharedCheck_598_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_tail_587_);
lean_inc(v_head_586_);
lean_dec(v_a_583_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_598_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v_snd_591_; uint8_t v___x_592_; 
v_snd_591_ = lean_ctor_get(v_head_586_, 1);
v___x_592_ = l_List_isEmpty___redArg(v_snd_591_);
if (v___x_592_ == 0)
{
lean_del_object(v___x_589_);
lean_dec(v_head_586_);
v_a_583_ = v_tail_587_;
goto _start;
}
else
{
lean_object* v___x_595_; 
if (v_isShared_590_ == 0)
{
lean_ctor_set(v___x_589_, 1, v_a_584_);
v___x_595_ = v___x_589_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v_head_586_);
lean_ctor_set(v_reuseFailAlloc_597_, 1, v_a_584_);
v___x_595_ = v_reuseFailAlloc_597_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
v_a_583_ = v_tail_587_;
v_a_584_ = v___x_595_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19(lean_object* v_view_599_, lean_object* v_findLocalDecl_x3f_600_, lean_object* v_n_601_, lean_object* v_projs_602_, uint8_t v_globalDeclFound_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_){
_start:
{
lean_object* v___y_610_; lean_object* v___y_611_; uint8_t v_globalDeclFoundNext_612_; lean_object* v___y_613_; lean_object* v___y_614_; lean_object* v___y_615_; lean_object* v___y_616_; lean_object* v_imported_619_; lean_object* v_ctx_620_; lean_object* v_scopes_621_; lean_object* v_givenNameView_622_; uint8_t v___y_624_; 
v_imported_619_ = lean_ctor_get(v_view_599_, 1);
v_ctx_620_ = lean_ctor_get(v_view_599_, 2);
v_scopes_621_ = lean_ctor_get(v_view_599_, 3);
lean_inc(v_scopes_621_);
lean_inc(v_ctx_620_);
lean_inc(v_imported_619_);
lean_inc(v_n_601_);
v_givenNameView_622_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_givenNameView_622_, 0, v_n_601_);
lean_ctor_set(v_givenNameView_622_, 1, v_imported_619_);
lean_ctor_set(v_givenNameView_622_, 2, v_ctx_620_);
lean_ctor_set(v_givenNameView_622_, 3, v_scopes_621_);
if (v_globalDeclFound_603_ == 0)
{
v___y_624_ = v_globalDeclFound_603_;
goto v___jp_623_;
}
else
{
uint8_t v___x_659_; 
v___x_659_ = l_List_isEmpty___redArg(v_projs_602_);
if (v___x_659_ == 0)
{
v___y_624_ = v_globalDeclFound_603_;
goto v___jp_623_;
}
else
{
uint8_t v___x_660_; 
v___x_660_ = 0;
v___y_624_ = v___x_660_;
goto v___jp_623_;
}
}
v___jp_609_:
{
lean_object* v___x_617_; 
v___x_617_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_617_, 0, v___y_610_);
lean_ctor_set(v___x_617_, 1, v_projs_602_);
v_n_601_ = v___y_611_;
v_projs_602_ = v___x_617_;
v_globalDeclFound_603_ = v_globalDeclFoundNext_612_;
v___y_604_ = v___y_613_;
v___y_605_ = v___y_614_;
v___y_606_ = v___y_615_;
v___y_607_ = v___y_616_;
goto _start;
}
v___jp_623_:
{
lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_625_ = lean_box(v___y_624_);
lean_inc_ref(v_findLocalDecl_x3f_600_);
lean_inc_ref(v_givenNameView_622_);
v___x_626_ = lean_apply_2(v_findLocalDecl_x3f_600_, v_givenNameView_622_, v___x_625_);
if (lean_obj_tag(v___x_626_) == 0)
{
if (lean_obj_tag(v_n_601_) == 1)
{
if (v_globalDeclFound_603_ == 0)
{
lean_object* v_pre_627_; lean_object* v_str_628_; uint8_t v_globalDeclFoundNext_629_; lean_object* v___x_630_; lean_object* v___x_631_; 
v_pre_627_ = lean_ctor_get(v_n_601_, 0);
lean_inc(v_pre_627_);
v_str_628_ = lean_ctor_get(v_n_601_, 1);
lean_inc_ref(v_str_628_);
lean_dec_ref_known(v_n_601_, 2);
v_globalDeclFoundNext_629_ = 1;
v___x_630_ = l_Lean_MacroScopesView_review(v_givenNameView_622_);
v___x_631_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25(v___x_630_, v_globalDeclFound_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_);
if (lean_obj_tag(v___x_631_) == 0)
{
lean_object* v_a_632_; lean_object* v___x_633_; lean_object* v_r_634_; uint8_t v___x_635_; 
v_a_632_ = lean_ctor_get(v___x_631_, 0);
lean_inc(v_a_632_);
lean_dec_ref_known(v___x_631_, 1);
v___x_633_ = lean_box(0);
v_r_634_ = l_List_filterTR_loop___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__26(v_a_632_, v___x_633_);
v___x_635_ = l_List_isEmpty___redArg(v_r_634_);
lean_dec(v_r_634_);
if (v___x_635_ == 0)
{
v___y_610_ = v_str_628_;
v___y_611_ = v_pre_627_;
v_globalDeclFoundNext_612_ = v_globalDeclFoundNext_629_;
v___y_613_ = v___y_604_;
v___y_614_ = v___y_605_;
v___y_615_ = v___y_606_;
v___y_616_ = v___y_607_;
goto v___jp_609_;
}
else
{
v___y_610_ = v_str_628_;
v___y_611_ = v_pre_627_;
v_globalDeclFoundNext_612_ = v_globalDeclFound_603_;
v___y_613_ = v___y_604_;
v___y_614_ = v___y_605_;
v___y_615_ = v___y_606_;
v___y_616_ = v___y_607_;
goto v___jp_609_;
}
}
else
{
lean_object* v_a_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_643_; 
lean_dec_ref(v_str_628_);
lean_dec(v_pre_627_);
lean_dec(v_projs_602_);
lean_dec_ref(v_findLocalDecl_x3f_600_);
v_a_636_ = lean_ctor_get(v___x_631_, 0);
v_isSharedCheck_643_ = !lean_is_exclusive(v___x_631_);
if (v_isSharedCheck_643_ == 0)
{
v___x_638_ = v___x_631_;
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_a_636_);
lean_dec(v___x_631_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
v_resetjp_637_:
{
lean_object* v___x_641_; 
if (v_isShared_639_ == 0)
{
v___x_641_ = v___x_638_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v_a_636_);
v___x_641_ = v_reuseFailAlloc_642_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
return v___x_641_;
}
}
}
}
else
{
lean_object* v_pre_644_; lean_object* v_str_645_; 
lean_dec_ref_known(v_givenNameView_622_, 4);
v_pre_644_ = lean_ctor_get(v_n_601_, 0);
lean_inc(v_pre_644_);
v_str_645_ = lean_ctor_get(v_n_601_, 1);
lean_inc_ref(v_str_645_);
lean_dec_ref_known(v_n_601_, 2);
v___y_610_ = v_str_645_;
v___y_611_ = v_pre_644_;
v_globalDeclFoundNext_612_ = v_globalDeclFound_603_;
v___y_613_ = v___y_604_;
v___y_614_ = v___y_605_;
v___y_615_ = v___y_606_;
v___y_616_ = v___y_607_;
goto v___jp_609_;
}
}
else
{
lean_object* v___x_646_; lean_object* v___x_647_; 
lean_dec_ref_known(v_givenNameView_622_, 4);
lean_dec(v_projs_602_);
lean_dec(v_n_601_);
lean_dec_ref(v_findLocalDecl_x3f_600_);
v___x_646_ = lean_box(0);
v___x_647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_647_, 0, v___x_646_);
return v___x_647_;
}
}
else
{
lean_object* v_val_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_658_; 
lean_dec_ref_known(v_givenNameView_622_, 4);
lean_dec(v_n_601_);
lean_dec_ref(v_findLocalDecl_x3f_600_);
v_val_648_ = lean_ctor_get(v___x_626_, 0);
v_isSharedCheck_658_ = !lean_is_exclusive(v___x_626_);
if (v_isSharedCheck_658_ == 0)
{
v___x_650_ = v___x_626_;
v_isShared_651_ = v_isSharedCheck_658_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_val_648_);
lean_dec(v___x_626_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_658_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_655_; 
v___x_652_ = l_Lean_LocalDecl_toExpr(v_val_648_);
v___x_653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_653_, 0, v___x_652_);
lean_ctor_set(v___x_653_, 1, v_projs_602_);
if (v_isShared_651_ == 0)
{
lean_ctor_set(v___x_650_, 0, v___x_653_);
v___x_655_ = v___x_650_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v___x_653_);
v___x_655_ = v_reuseFailAlloc_657_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
lean_object* v___x_656_; 
v___x_656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_656_, 0, v___x_655_);
return v___x_656_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19___boxed(lean_object* v_view_661_, lean_object* v_findLocalDecl_x3f_662_, lean_object* v_n_663_, lean_object* v_projs_664_, lean_object* v_globalDeclFound_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_){
_start:
{
uint8_t v_globalDeclFound_boxed_671_; lean_object* v_res_672_; 
v_globalDeclFound_boxed_671_ = lean_unbox(v_globalDeclFound_665_);
v_res_672_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19(v_view_661_, v_findLocalDecl_x3f_662_, v_n_663_, v_projs_664_, v_globalDeclFound_boxed_671_, v___y_666_, v___y_667_, v___y_668_, v___y_669_);
lean_dec(v___y_669_);
lean_dec_ref(v___y_668_);
lean_dec(v___y_667_);
lean_dec_ref(v___y_666_);
lean_dec_ref(v_view_661_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__22___redArg(lean_object* v_localDecl_x3f_673_, lean_object* v_givenName_674_, lean_object* v_as_675_, lean_object* v_i_676_){
_start:
{
lean_object* v_zero_677_; uint8_t v_isZero_678_; 
v_zero_677_ = lean_unsigned_to_nat(0u);
v_isZero_678_ = lean_nat_dec_eq(v_i_676_, v_zero_677_);
if (v_isZero_678_ == 1)
{
lean_object* v___x_679_; 
lean_dec(v_i_676_);
v___x_679_ = lean_box(0);
return v___x_679_;
}
else
{
lean_object* v_one_680_; lean_object* v_n_681_; lean_object* v___y_683_; lean_object* v___x_685_; 
v_one_680_ = lean_unsigned_to_nat(1u);
v_n_681_ = lean_nat_sub(v_i_676_, v_one_680_);
lean_dec(v_i_676_);
v___x_685_ = lean_array_fget_borrowed(v_as_675_, v_n_681_);
if (lean_obj_tag(v___x_685_) == 0)
{
v___y_683_ = v___x_685_;
goto v___jp_682_;
}
else
{
lean_object* v_val_686_; uint8_t v___x_687_; 
v_val_686_ = lean_ctor_get(v___x_685_, 0);
v___x_687_ = l_Lean_LocalDecl_isAuxDecl(v_val_686_);
if (v___x_687_ == 0)
{
v___y_683_ = v_localDecl_x3f_673_;
goto v___jp_682_;
}
else
{
lean_object* v___x_688_; uint8_t v___x_689_; 
v___x_688_ = l_Lean_LocalDecl_userName(v_val_686_);
v___x_689_ = lean_name_eq(v___x_688_, v_givenName_674_);
lean_dec(v___x_688_);
if (v___x_689_ == 0)
{
v_i_676_ = v_n_681_;
goto _start;
}
else
{
v___y_683_ = v___x_685_;
goto v___jp_682_;
}
}
}
v___jp_682_:
{
if (lean_obj_tag(v___y_683_) == 0)
{
v_i_676_ = v_n_681_;
goto _start;
}
else
{
lean_dec(v_n_681_);
lean_inc_ref(v___y_683_);
return v___y_683_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__22___redArg___boxed(lean_object* v_localDecl_x3f_691_, lean_object* v_givenName_692_, lean_object* v_as_693_, lean_object* v_i_694_){
_start:
{
lean_object* v_res_695_; 
v_res_695_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__22___redArg(v_localDecl_x3f_691_, v_givenName_692_, v_as_693_, v_i_694_);
lean_dec_ref(v_as_693_);
lean_dec(v_givenName_692_);
lean_dec(v_localDecl_x3f_691_);
return v_res_695_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__23_spec__27___redArg(lean_object* v_localDecl_x3f_696_, lean_object* v_givenName_697_, lean_object* v_as_698_, lean_object* v_i_699_){
_start:
{
lean_object* v_zero_700_; uint8_t v_isZero_701_; 
v_zero_700_ = lean_unsigned_to_nat(0u);
v_isZero_701_ = lean_nat_dec_eq(v_i_699_, v_zero_700_);
if (v_isZero_701_ == 1)
{
lean_object* v___x_702_; 
lean_dec(v_i_699_);
v___x_702_ = lean_box(0);
return v___x_702_;
}
else
{
lean_object* v_one_703_; lean_object* v_n_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
v_one_703_ = lean_unsigned_to_nat(1u);
v_n_704_ = lean_nat_sub(v_i_699_, v_one_703_);
lean_dec(v_i_699_);
v___x_705_ = lean_array_fget_borrowed(v_as_698_, v_n_704_);
v___x_706_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__23(v_localDecl_x3f_696_, v_givenName_697_, v___x_705_);
if (lean_obj_tag(v___x_706_) == 0)
{
v_i_699_ = v_n_704_;
goto _start;
}
else
{
lean_dec(v_n_704_);
return v___x_706_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__23(lean_object* v_localDecl_x3f_708_, lean_object* v_givenName_709_, lean_object* v_x_710_){
_start:
{
if (lean_obj_tag(v_x_710_) == 0)
{
lean_object* v_cs_711_; lean_object* v___x_712_; lean_object* v___x_713_; 
v_cs_711_ = lean_ctor_get(v_x_710_, 0);
v___x_712_ = lean_array_get_size(v_cs_711_);
v___x_713_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__23_spec__27___redArg(v_localDecl_x3f_708_, v_givenName_709_, v_cs_711_, v___x_712_);
return v___x_713_;
}
else
{
lean_object* v_vs_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
v_vs_714_ = lean_ctor_get(v_x_710_, 0);
v___x_715_ = lean_array_get_size(v_vs_714_);
v___x_716_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__22___redArg(v_localDecl_x3f_708_, v_givenName_709_, v_vs_714_, v___x_715_);
return v___x_716_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__23___boxed(lean_object* v_localDecl_x3f_717_, lean_object* v_givenName_718_, lean_object* v_x_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__23(v_localDecl_x3f_717_, v_givenName_718_, v_x_719_);
lean_dec_ref(v_x_719_);
lean_dec(v_givenName_718_);
lean_dec(v_localDecl_x3f_717_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__23_spec__27___redArg___boxed(lean_object* v_localDecl_x3f_721_, lean_object* v_givenName_722_, lean_object* v_as_723_, lean_object* v_i_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__23_spec__27___redArg(v_localDecl_x3f_721_, v_givenName_722_, v_as_723_, v_i_724_);
lean_dec_ref(v_as_723_);
lean_dec(v_givenName_722_);
lean_dec(v_localDecl_x3f_721_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18(lean_object* v_localDecl_x3f_726_, lean_object* v_givenName_727_, lean_object* v_t_728_){
_start:
{
lean_object* v_root_729_; lean_object* v_tail_730_; lean_object* v___x_731_; lean_object* v___x_732_; 
v_root_729_ = lean_ctor_get(v_t_728_, 0);
v_tail_730_ = lean_ctor_get(v_t_728_, 1);
v___x_731_ = lean_array_get_size(v_tail_730_);
v___x_732_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__22___redArg(v_localDecl_x3f_726_, v_givenName_727_, v_tail_730_, v___x_731_);
if (lean_obj_tag(v___x_732_) == 0)
{
lean_object* v___x_733_; 
v___x_733_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__23(v_localDecl_x3f_726_, v_givenName_727_, v_root_729_);
return v___x_733_;
}
else
{
return v___x_732_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18___boxed(lean_object* v_localDecl_x3f_734_, lean_object* v_givenName_735_, lean_object* v_t_736_){
_start:
{
lean_object* v_res_737_; 
v_res_737_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18(v_localDecl_x3f_734_, v_givenName_735_, v_t_736_);
lean_dec_ref(v_t_736_);
lean_dec(v_givenName_735_);
lean_dec(v_localDecl_x3f_734_);
return v_res_737_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__19___redArg___lam__0(lean_object* v_localDecl_738_, lean_object* v_givenName_739_){
_start:
{
lean_object* v___x_740_; uint8_t v___x_741_; 
v___x_740_ = l_Lean_LocalDecl_userName(v_localDecl_738_);
v___x_741_ = lean_name_eq(v___x_740_, v_givenName_739_);
lean_dec(v___x_740_);
if (v___x_741_ == 0)
{
lean_object* v___x_742_; 
lean_dec_ref(v_localDecl_738_);
v___x_742_ = lean_box(0);
return v___x_742_;
}
else
{
lean_object* v___x_743_; 
v___x_743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_743_, 0, v_localDecl_738_);
return v___x_743_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__19___redArg___lam__0___boxed(lean_object* v_localDecl_744_, lean_object* v_givenName_745_){
_start:
{
lean_object* v_res_746_; 
v_res_746_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__19___redArg___lam__0(v_localDecl_744_, v_givenName_745_);
lean_dec(v_givenName_745_);
return v_res_746_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__19___redArg(lean_object* v_givenName_747_, uint8_t v_skipAuxDecl_748_, lean_object* v_auxDeclToFullName_749_, lean_object* v___x_750_, lean_object* v_givenNameView_751_, lean_object* v_as_752_, lean_object* v_i_753_){
_start:
{
lean_object* v_zero_754_; uint8_t v_isZero_755_; 
v_zero_754_ = lean_unsigned_to_nat(0u);
v_isZero_755_ = lean_nat_dec_eq(v_i_753_, v_zero_754_);
if (v_isZero_755_ == 1)
{
lean_object* v___x_756_; 
lean_dec(v_i_753_);
lean_dec_ref(v_givenNameView_751_);
lean_dec(v___x_750_);
v___x_756_ = lean_box(0);
return v___x_756_;
}
else
{
lean_object* v_one_757_; lean_object* v_n_758_; lean_object* v___y_760_; lean_object* v___x_762_; 
v_one_757_ = lean_unsigned_to_nat(1u);
v_n_758_ = lean_nat_sub(v_i_753_, v_one_757_);
lean_dec(v_i_753_);
v___x_762_ = lean_array_fget_borrowed(v_as_752_, v_n_758_);
if (lean_obj_tag(v___x_762_) == 0)
{
v___y_760_ = v___x_762_;
goto v___jp_759_;
}
else
{
lean_object* v_val_763_; uint8_t v___x_764_; 
v_val_763_ = lean_ctor_get(v___x_762_, 0);
v___x_764_ = l_Lean_LocalDecl_isAuxDecl(v_val_763_);
if (v___x_764_ == 0)
{
lean_object* v___x_765_; 
lean_inc(v_val_763_);
v___x_765_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__19___redArg___lam__0(v_val_763_, v_givenName_747_);
v___y_760_ = v___x_765_;
goto v___jp_759_;
}
else
{
if (v_skipAuxDecl_748_ == 0)
{
if (v___x_764_ == 0)
{
v_i_753_ = v_n_758_;
goto _start;
}
else
{
lean_object* v___x_767_; lean_object* v___x_768_; 
v___x_767_ = l_Lean_LocalDecl_fvarId(v_val_763_);
v___x_768_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v_auxDeclToFullName_749_, v___x_767_);
lean_dec(v___x_767_);
if (lean_obj_tag(v___x_768_) == 1)
{
lean_object* v_val_769_; lean_object* v_fullDeclView_770_; lean_object* v___y_772_; lean_object* v_name_793_; lean_object* v___x_794_; 
v_val_769_ = lean_ctor_get(v___x_768_, 0);
lean_inc(v_val_769_);
lean_dec_ref_known(v___x_768_, 1);
v_fullDeclView_770_ = l_Lean_extractMacroScopes(v_val_769_);
v_name_793_ = lean_ctor_get(v_fullDeclView_770_, 0);
lean_inc_n(v_name_793_, 2);
v___x_794_ = l_Lean_privateToUserName_x3f(v_name_793_);
if (lean_obj_tag(v___x_794_) == 0)
{
v___y_772_ = v_name_793_;
goto v___jp_771_;
}
else
{
lean_object* v_val_795_; 
lean_dec(v_name_793_);
v_val_795_ = lean_ctor_get(v___x_794_, 0);
lean_inc(v_val_795_);
lean_dec_ref_known(v___x_794_, 1);
v___y_772_ = v_val_795_;
goto v___jp_771_;
}
v___jp_771_:
{
lean_object* v_imported_773_; lean_object* v_ctx_774_; lean_object* v_scopes_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_791_; 
v_imported_773_ = lean_ctor_get(v_fullDeclView_770_, 1);
v_ctx_774_ = lean_ctor_get(v_fullDeclView_770_, 2);
v_scopes_775_ = lean_ctor_get(v_fullDeclView_770_, 3);
v_isSharedCheck_791_ = !lean_is_exclusive(v_fullDeclView_770_);
if (v_isSharedCheck_791_ == 0)
{
lean_object* v_unused_792_; 
v_unused_792_ = lean_ctor_get(v_fullDeclView_770_, 0);
lean_dec(v_unused_792_);
v___x_777_ = v_fullDeclView_770_;
v_isShared_778_ = v_isSharedCheck_791_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_scopes_775_);
lean_inc(v_ctx_774_);
lean_inc(v_imported_773_);
lean_dec(v_fullDeclView_770_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_791_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v_fullDeclView_780_; 
if (v_isShared_778_ == 0)
{
lean_ctor_set(v___x_777_, 0, v___y_772_);
v_fullDeclView_780_ = v___x_777_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v___y_772_);
lean_ctor_set(v_reuseFailAlloc_790_, 1, v_imported_773_);
lean_ctor_set(v_reuseFailAlloc_790_, 2, v_ctx_774_);
lean_ctor_set(v_reuseFailAlloc_790_, 3, v_scopes_775_);
v_fullDeclView_780_ = v_reuseFailAlloc_790_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
lean_object* v_fullDeclName_781_; uint8_t v___x_782_; 
lean_inc_ref(v_fullDeclView_780_);
v_fullDeclName_781_ = l_Lean_MacroScopesView_review(v_fullDeclView_780_);
v___x_782_ = l_Lean_Name_isPrefixOf(v___x_750_, v_fullDeclName_781_);
if (v___x_782_ == 0)
{
lean_object* v___x_783_; 
lean_dec_ref(v_fullDeclView_780_);
lean_inc(v___x_750_);
lean_inc_ref(v_givenNameView_751_);
lean_inc(v_val_763_);
v___x_783_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(v_val_763_, v_givenNameView_751_, v_fullDeclName_781_, v___x_750_);
lean_dec(v_fullDeclName_781_);
v___y_760_ = v___x_783_;
goto v___jp_759_;
}
else
{
lean_object* v___x_784_; lean_object* v_localDeclNameView_785_; uint8_t v___x_786_; 
lean_dec(v_fullDeclName_781_);
v___x_784_ = l_Lean_LocalDecl_userName(v_val_763_);
v_localDeclNameView_785_ = l_Lean_extractMacroScopes(v___x_784_);
v___x_786_ = l_Lean_MacroScopesView_isSuffixOf(v_localDeclNameView_785_, v_givenNameView_751_);
lean_dec_ref(v_localDeclNameView_785_);
if (v___x_786_ == 0)
{
lean_dec_ref(v_fullDeclView_780_);
v_i_753_ = v_n_758_;
goto _start;
}
else
{
uint8_t v___x_788_; 
v___x_788_ = l_Lean_MacroScopesView_isSuffixOf(v_givenNameView_751_, v_fullDeclView_780_);
lean_dec_ref(v_fullDeclView_780_);
if (v___x_788_ == 0)
{
v_i_753_ = v_n_758_;
goto _start;
}
else
{
lean_inc_ref(v___x_762_);
v___y_760_ = v___x_762_;
goto v___jp_759_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_796_; 
lean_dec(v___x_768_);
lean_inc(v_val_763_);
v___x_796_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__19___redArg___lam__0(v_val_763_, v_givenName_747_);
v___y_760_ = v___x_796_;
goto v___jp_759_;
}
}
}
else
{
v_i_753_ = v_n_758_;
goto _start;
}
}
}
v___jp_759_:
{
if (lean_obj_tag(v___y_760_) == 0)
{
v_i_753_ = v_n_758_;
goto _start;
}
else
{
lean_dec(v_n_758_);
lean_dec_ref(v_givenNameView_751_);
lean_dec(v___x_750_);
return v___y_760_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__19___redArg___boxed(lean_object* v_givenName_798_, lean_object* v_skipAuxDecl_799_, lean_object* v_auxDeclToFullName_800_, lean_object* v___x_801_, lean_object* v_givenNameView_802_, lean_object* v_as_803_, lean_object* v_i_804_){
_start:
{
uint8_t v_skipAuxDecl_boxed_805_; lean_object* v_res_806_; 
v_skipAuxDecl_boxed_805_ = lean_unbox(v_skipAuxDecl_799_);
v_res_806_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__19___redArg(v_givenName_798_, v_skipAuxDecl_boxed_805_, v_auxDeclToFullName_800_, v___x_801_, v_givenNameView_802_, v_as_803_, v_i_804_);
lean_dec_ref(v_as_803_);
lean_dec(v_auxDeclToFullName_800_);
lean_dec(v_givenName_798_);
return v_res_806_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__20_spec__23___redArg(lean_object* v_givenName_807_, uint8_t v_skipAuxDecl_808_, lean_object* v_auxDeclToFullName_809_, lean_object* v___x_810_, lean_object* v_givenNameView_811_, lean_object* v_as_812_, lean_object* v_i_813_){
_start:
{
lean_object* v_zero_814_; uint8_t v_isZero_815_; 
v_zero_814_ = lean_unsigned_to_nat(0u);
v_isZero_815_ = lean_nat_dec_eq(v_i_813_, v_zero_814_);
if (v_isZero_815_ == 1)
{
lean_object* v___x_816_; 
lean_dec(v_i_813_);
lean_dec_ref(v_givenNameView_811_);
lean_dec(v___x_810_);
v___x_816_ = lean_box(0);
return v___x_816_;
}
else
{
lean_object* v_one_817_; lean_object* v_n_818_; lean_object* v___x_819_; lean_object* v___x_820_; 
v_one_817_ = lean_unsigned_to_nat(1u);
v_n_818_ = lean_nat_sub(v_i_813_, v_one_817_);
lean_dec(v_i_813_);
v___x_819_ = lean_array_fget_borrowed(v_as_812_, v_n_818_);
lean_inc_ref(v_givenNameView_811_);
lean_inc(v___x_810_);
v___x_820_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__20(v_givenName_807_, v_skipAuxDecl_808_, v_auxDeclToFullName_809_, v___x_810_, v_givenNameView_811_, v___x_819_);
if (lean_obj_tag(v___x_820_) == 0)
{
v_i_813_ = v_n_818_;
goto _start;
}
else
{
lean_dec(v_n_818_);
lean_dec_ref(v_givenNameView_811_);
lean_dec(v___x_810_);
return v___x_820_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__20(lean_object* v_givenName_822_, uint8_t v_skipAuxDecl_823_, lean_object* v_auxDeclToFullName_824_, lean_object* v___x_825_, lean_object* v_givenNameView_826_, lean_object* v_x_827_){
_start:
{
if (lean_obj_tag(v_x_827_) == 0)
{
lean_object* v_cs_828_; lean_object* v___x_829_; lean_object* v___x_830_; 
v_cs_828_ = lean_ctor_get(v_x_827_, 0);
v___x_829_ = lean_array_get_size(v_cs_828_);
v___x_830_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__20_spec__23___redArg(v_givenName_822_, v_skipAuxDecl_823_, v_auxDeclToFullName_824_, v___x_825_, v_givenNameView_826_, v_cs_828_, v___x_829_);
return v___x_830_;
}
else
{
lean_object* v_vs_831_; lean_object* v___x_832_; lean_object* v___x_833_; 
v_vs_831_ = lean_ctor_get(v_x_827_, 0);
v___x_832_ = lean_array_get_size(v_vs_831_);
v___x_833_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__19___redArg(v_givenName_822_, v_skipAuxDecl_823_, v_auxDeclToFullName_824_, v___x_825_, v_givenNameView_826_, v_vs_831_, v___x_832_);
return v___x_833_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__20___boxed(lean_object* v_givenName_834_, lean_object* v_skipAuxDecl_835_, lean_object* v_auxDeclToFullName_836_, lean_object* v___x_837_, lean_object* v_givenNameView_838_, lean_object* v_x_839_){
_start:
{
uint8_t v_skipAuxDecl_boxed_840_; lean_object* v_res_841_; 
v_skipAuxDecl_boxed_840_ = lean_unbox(v_skipAuxDecl_835_);
v_res_841_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__20(v_givenName_834_, v_skipAuxDecl_boxed_840_, v_auxDeclToFullName_836_, v___x_837_, v_givenNameView_838_, v_x_839_);
lean_dec_ref(v_x_839_);
lean_dec(v_auxDeclToFullName_836_);
lean_dec(v_givenName_834_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__20_spec__23___redArg___boxed(lean_object* v_givenName_842_, lean_object* v_skipAuxDecl_843_, lean_object* v_auxDeclToFullName_844_, lean_object* v___x_845_, lean_object* v_givenNameView_846_, lean_object* v_as_847_, lean_object* v_i_848_){
_start:
{
uint8_t v_skipAuxDecl_boxed_849_; lean_object* v_res_850_; 
v_skipAuxDecl_boxed_849_ = lean_unbox(v_skipAuxDecl_843_);
v_res_850_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__20_spec__23___redArg(v_givenName_842_, v_skipAuxDecl_boxed_849_, v_auxDeclToFullName_844_, v___x_845_, v_givenNameView_846_, v_as_847_, v_i_848_);
lean_dec_ref(v_as_847_);
lean_dec(v_auxDeclToFullName_844_);
lean_dec(v_givenName_842_);
return v_res_850_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17(lean_object* v_givenName_851_, uint8_t v_skipAuxDecl_852_, lean_object* v_auxDeclToFullName_853_, lean_object* v___x_854_, lean_object* v_givenNameView_855_, lean_object* v_t_856_){
_start:
{
lean_object* v_root_857_; lean_object* v_tail_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v_root_857_ = lean_ctor_get(v_t_856_, 0);
v_tail_858_ = lean_ctor_get(v_t_856_, 1);
v___x_859_ = lean_array_get_size(v_tail_858_);
lean_inc_ref(v_givenNameView_855_);
lean_inc(v___x_854_);
v___x_860_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__19___redArg(v_givenName_851_, v_skipAuxDecl_852_, v_auxDeclToFullName_853_, v___x_854_, v_givenNameView_855_, v_tail_858_, v___x_859_);
if (lean_obj_tag(v___x_860_) == 0)
{
lean_object* v___x_861_; 
v___x_861_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__20(v_givenName_851_, v_skipAuxDecl_852_, v_auxDeclToFullName_853_, v___x_854_, v_givenNameView_855_, v_root_857_);
return v___x_861_;
}
else
{
lean_dec_ref(v_givenNameView_855_);
lean_dec(v___x_854_);
return v___x_860_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17___boxed(lean_object* v_givenName_862_, lean_object* v_skipAuxDecl_863_, lean_object* v_auxDeclToFullName_864_, lean_object* v___x_865_, lean_object* v_givenNameView_866_, lean_object* v_t_867_){
_start:
{
uint8_t v_skipAuxDecl_boxed_868_; lean_object* v_res_869_; 
v_skipAuxDecl_boxed_868_ = lean_unbox(v_skipAuxDecl_863_);
v_res_869_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17(v_givenName_862_, v_skipAuxDecl_boxed_868_, v_auxDeclToFullName_864_, v___x_865_, v_givenNameView_866_, v_t_867_);
lean_dec_ref(v_t_867_);
lean_dec(v_auxDeclToFullName_864_);
lean_dec(v_givenName_862_);
return v_res_869_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11___lam__0(lean_object* v_auxDeclToFullName_870_, lean_object* v_currNamespace_871_, lean_object* v_decls_872_, lean_object* v_givenNameView_873_, uint8_t v_skipAuxDecl_874_){
_start:
{
lean_object* v_givenName_875_; lean_object* v_localDecl_x3f_876_; 
lean_inc_ref(v_givenNameView_873_);
v_givenName_875_ = l_Lean_MacroScopesView_review(v_givenNameView_873_);
v_localDecl_x3f_876_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17(v_givenName_875_, v_skipAuxDecl_874_, v_auxDeclToFullName_870_, v_currNamespace_871_, v_givenNameView_873_, v_decls_872_);
if (lean_obj_tag(v_localDecl_x3f_876_) == 0)
{
if (v_skipAuxDecl_874_ == 0)
{
lean_object* v___x_877_; 
v___x_877_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18(v_localDecl_x3f_876_, v_givenName_875_, v_decls_872_);
lean_dec(v_givenName_875_);
return v___x_877_;
}
else
{
lean_dec(v_givenName_875_);
return v_localDecl_x3f_876_;
}
}
else
{
lean_dec(v_givenName_875_);
return v_localDecl_x3f_876_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11___lam__0___boxed(lean_object* v_auxDeclToFullName_878_, lean_object* v_currNamespace_879_, lean_object* v_decls_880_, lean_object* v_givenNameView_881_, lean_object* v_skipAuxDecl_882_){
_start:
{
uint8_t v_skipAuxDecl_boxed_883_; lean_object* v_res_884_; 
v_skipAuxDecl_boxed_883_ = lean_unbox(v_skipAuxDecl_882_);
v_res_884_ = l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11___lam__0(v_auxDeclToFullName_878_, v_currNamespace_879_, v_decls_880_, v_givenNameView_881_, v_skipAuxDecl_boxed_883_);
lean_dec_ref(v_decls_880_);
lean_dec(v_auxDeclToFullName_878_);
return v_res_884_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11(lean_object* v_n_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_){
_start:
{
lean_object* v_lctx_891_; lean_object* v_toCold_892_; lean_object* v_decls_893_; lean_object* v_auxDeclToFullName_894_; lean_object* v_currNamespace_895_; lean_object* v_view_896_; lean_object* v_name_897_; lean_object* v_findLocalDecl_x3f_898_; lean_object* v___x_899_; uint8_t v___x_900_; lean_object* v___x_901_; 
v_lctx_891_ = lean_ctor_get(v___y_886_, 2);
v_toCold_892_ = lean_ctor_get(v___y_888_, 0);
v_decls_893_ = lean_ctor_get(v_lctx_891_, 1);
v_auxDeclToFullName_894_ = lean_ctor_get(v_lctx_891_, 2);
v_currNamespace_895_ = lean_ctor_get(v_toCold_892_, 4);
v_view_896_ = l_Lean_extractMacroScopes(v_n_885_);
v_name_897_ = lean_ctor_get(v_view_896_, 0);
lean_inc(v_name_897_);
lean_inc_ref(v_decls_893_);
lean_inc(v_currNamespace_895_);
lean_inc(v_auxDeclToFullName_894_);
v_findLocalDecl_x3f_898_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11___lam__0___boxed), 5, 3);
lean_closure_set(v_findLocalDecl_x3f_898_, 0, v_auxDeclToFullName_894_);
lean_closure_set(v_findLocalDecl_x3f_898_, 1, v_currNamespace_895_);
lean_closure_set(v_findLocalDecl_x3f_898_, 2, v_decls_893_);
v___x_899_ = lean_box(0);
v___x_900_ = 0;
v___x_901_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19(v_view_896_, v_findLocalDecl_x3f_898_, v_name_897_, v___x_899_, v___x_900_, v___y_886_, v___y_887_, v___y_888_, v___y_889_);
lean_dec_ref(v_view_896_);
return v___x_901_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11___boxed(lean_object* v_n_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_){
_start:
{
lean_object* v_res_908_; 
v_res_908_ = l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11(v_n_902_, v___y_903_, v___y_904_, v___y_905_, v___y_906_);
lean_dec(v___y_906_);
lean_dec_ref(v___y_905_);
lean_dec(v___y_904_);
lean_dec_ref(v___y_903_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5___lam__0(uint8_t v___x_909_, lean_object* v_n_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_){
_start:
{
lean_object* v___x_916_; 
v___x_916_ = l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11(v_n_910_, v___y_911_, v___y_912_, v___y_913_, v___y_914_);
if (lean_obj_tag(v___x_916_) == 0)
{
lean_object* v_a_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_930_; 
v_a_917_ = lean_ctor_get(v___x_916_, 0);
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_916_);
if (v_isSharedCheck_930_ == 0)
{
v___x_919_ = v___x_916_;
v_isShared_920_ = v_isSharedCheck_930_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_a_917_);
lean_dec(v___x_916_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_930_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
if (lean_obj_tag(v_a_917_) == 0)
{
uint8_t v___x_921_; lean_object* v___x_922_; lean_object* v___x_924_; 
v___x_921_ = 1;
v___x_922_ = lean_box(v___x_921_);
if (v_isShared_920_ == 0)
{
lean_ctor_set(v___x_919_, 0, v___x_922_);
v___x_924_ = v___x_919_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v___x_922_);
v___x_924_ = v_reuseFailAlloc_925_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
return v___x_924_;
}
}
else
{
lean_object* v___x_926_; lean_object* v___x_928_; 
lean_dec_ref_known(v_a_917_, 1);
v___x_926_ = lean_box(v___x_909_);
if (v_isShared_920_ == 0)
{
lean_ctor_set(v___x_919_, 0, v___x_926_);
v___x_928_ = v___x_919_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v___x_926_);
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
v_a_931_ = lean_ctor_get(v___x_916_, 0);
v_isSharedCheck_938_ = !lean_is_exclusive(v___x_916_);
if (v_isSharedCheck_938_ == 0)
{
v___x_933_ = v___x_916_;
v_isShared_934_ = v_isSharedCheck_938_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_a_931_);
lean_dec(v___x_916_);
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
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5___lam__0___boxed(lean_object* v___x_939_, lean_object* v_n_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_){
_start:
{
uint8_t v___x_44457__boxed_946_; lean_object* v_res_947_; 
v___x_44457__boxed_946_ = lean_unbox(v___x_939_);
v_res_947_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5___lam__0(v___x_44457__boxed_946_, v_n_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_);
lean_dec(v___y_944_);
lean_dec_ref(v___y_943_);
lean_dec(v___y_942_);
lean_dec_ref(v___y_941_);
return v_res_947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__42___redArg(lean_object* v_opt_948_, lean_object* v___y_949_){
_start:
{
lean_object* v_toCold_951_; lean_object* v_options_952_; uint8_t v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; 
v_toCold_951_ = lean_ctor_get(v___y_949_, 0);
v_options_952_ = lean_ctor_get(v_toCold_951_, 2);
v___x_953_ = l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__4(v_options_952_, v_opt_948_);
v___x_954_ = lean_box(v___x_953_);
v___x_955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_955_, 0, v___x_954_);
v___x_956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_956_, 0, v___x_955_);
return v___x_956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__42___redArg___boxed(lean_object* v_opt_957_, lean_object* v___y_958_, lean_object* v___y_959_){
_start:
{
lean_object* v_res_960_; 
v_res_960_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__42___redArg(v_opt_957_, v___y_958_);
lean_dec_ref(v___y_958_);
lean_dec_ref(v_opt_957_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__43_spec__45_spec__47(lean_object* v_ref_963_, lean_object* v_msgData_964_, uint8_t v_severity_965_, uint8_t v_isSilent_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_){
_start:
{
lean_object* v_a_973_; uint8_t v___y_977_; lean_object* v___y_978_; lean_object* v___y_979_; uint8_t v___y_980_; lean_object* v___y_981_; lean_object* v___y_982_; lean_object* v___y_983_; lean_object* v_currNamespace_984_; lean_object* v_openDecls_985_; lean_object* v___y_986_; lean_object* v___y_1011_; lean_object* v___y_1012_; lean_object* v___y_1013_; uint8_t v___y_1014_; uint8_t v___y_1015_; lean_object* v___y_1016_; lean_object* v___y_1017_; lean_object* v___y_1018_; uint8_t v___y_1019_; lean_object* v___y_1020_; lean_object* v___y_1037_; lean_object* v___y_1038_; lean_object* v___y_1039_; uint8_t v___y_1040_; uint8_t v___y_1041_; lean_object* v___y_1042_; lean_object* v___y_1043_; uint8_t v___y_1044_; lean_object* v___y_1045_; lean_object* v___y_1046_; lean_object* v___y_1050_; lean_object* v___y_1051_; lean_object* v___y_1052_; uint8_t v___y_1053_; uint8_t v___y_1054_; lean_object* v___y_1055_; lean_object* v___y_1056_; lean_object* v___y_1057_; uint8_t v___y_1058_; uint8_t v___x_1063_; lean_object* v___y_1065_; lean_object* v___y_1066_; lean_object* v___y_1067_; lean_object* v___y_1068_; lean_object* v___y_1069_; uint8_t v___y_1070_; uint8_t v___y_1071_; lean_object* v___y_1072_; uint8_t v___y_1073_; uint8_t v___y_1075_; uint8_t v___x_1093_; 
v___x_1063_ = 2;
v___x_1093_ = l_Lean_instBEqMessageSeverity_beq(v_severity_965_, v___x_1063_);
if (v___x_1093_ == 0)
{
v___y_1075_ = v___x_1093_;
goto v___jp_1074_;
}
else
{
uint8_t v___x_1094_; 
lean_inc_ref(v_msgData_964_);
v___x_1094_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_964_);
v___y_1075_ = v___x_1094_;
goto v___jp_1074_;
}
v___jp_972_:
{
lean_object* v___x_974_; lean_object* v___x_975_; 
v___x_974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_974_, 0, v_a_973_);
v___x_975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_975_, 0, v___x_974_);
return v___x_975_;
}
v___jp_976_:
{
lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v_env_991_; lean_object* v_nextMacroScope_992_; lean_object* v_ngen_993_; lean_object* v_auxDeclNGen_994_; lean_object* v_traceState_995_; lean_object* v_cache_996_; lean_object* v_messages_997_; lean_object* v_infoState_998_; lean_object* v_snapshotTasks_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1009_; 
lean_inc(v_openDecls_985_);
lean_inc(v_currNamespace_984_);
v___x_987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_987_, 0, v_currNamespace_984_);
lean_ctor_set(v___x_987_, 1, v_openDecls_985_);
v___x_988_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_988_, 0, v___x_987_);
lean_ctor_set(v___x_988_, 1, v___y_981_);
lean_inc_ref(v___y_983_);
lean_inc_ref(v___y_978_);
v___x_989_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_989_, 0, v___y_978_);
lean_ctor_set(v___x_989_, 1, v___y_982_);
lean_ctor_set(v___x_989_, 2, v___y_979_);
lean_ctor_set(v___x_989_, 3, v___y_983_);
lean_ctor_set(v___x_989_, 4, v___x_988_);
lean_ctor_set_uint8(v___x_989_, sizeof(void*)*5, v___y_977_);
lean_ctor_set_uint8(v___x_989_, sizeof(void*)*5 + 1, v___y_980_);
lean_ctor_set_uint8(v___x_989_, sizeof(void*)*5 + 2, v_isSilent_966_);
v___x_990_ = lean_st_ref_take(v___y_986_);
v_env_991_ = lean_ctor_get(v___x_990_, 0);
v_nextMacroScope_992_ = lean_ctor_get(v___x_990_, 1);
v_ngen_993_ = lean_ctor_get(v___x_990_, 2);
v_auxDeclNGen_994_ = lean_ctor_get(v___x_990_, 3);
v_traceState_995_ = lean_ctor_get(v___x_990_, 4);
v_cache_996_ = lean_ctor_get(v___x_990_, 5);
v_messages_997_ = lean_ctor_get(v___x_990_, 6);
v_infoState_998_ = lean_ctor_get(v___x_990_, 7);
v_snapshotTasks_999_ = lean_ctor_get(v___x_990_, 8);
v_isSharedCheck_1009_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_1001_ = v___x_990_;
v_isShared_1002_ = v_isSharedCheck_1009_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_snapshotTasks_999_);
lean_inc(v_infoState_998_);
lean_inc(v_messages_997_);
lean_inc(v_cache_996_);
lean_inc(v_traceState_995_);
lean_inc(v_auxDeclNGen_994_);
lean_inc(v_ngen_993_);
lean_inc(v_nextMacroScope_992_);
lean_inc(v_env_991_);
lean_dec(v___x_990_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1009_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1006_; 
v___x_1003_ = lean_box(0);
v___x_1004_ = l_Lean_MessageLog_add(v___x_989_, v_messages_997_);
if (v_isShared_1002_ == 0)
{
lean_ctor_set(v___x_1001_, 6, v___x_1004_);
v___x_1006_ = v___x_1001_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v_env_991_);
lean_ctor_set(v_reuseFailAlloc_1008_, 1, v_nextMacroScope_992_);
lean_ctor_set(v_reuseFailAlloc_1008_, 2, v_ngen_993_);
lean_ctor_set(v_reuseFailAlloc_1008_, 3, v_auxDeclNGen_994_);
lean_ctor_set(v_reuseFailAlloc_1008_, 4, v_traceState_995_);
lean_ctor_set(v_reuseFailAlloc_1008_, 5, v_cache_996_);
lean_ctor_set(v_reuseFailAlloc_1008_, 6, v___x_1004_);
lean_ctor_set(v_reuseFailAlloc_1008_, 7, v_infoState_998_);
lean_ctor_set(v_reuseFailAlloc_1008_, 8, v_snapshotTasks_999_);
v___x_1006_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
lean_object* v___x_1007_; 
v___x_1007_ = lean_st_ref_put(v___y_986_, v___x_1006_);
v_a_973_ = v___x_1003_;
goto v___jp_972_;
}
}
}
v___jp_1010_:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v_a_1023_; lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1035_; 
v___x_1021_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_964_);
v___x_1022_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41_spec__43_spec__46(v___x_1021_, v___y_967_, v___y_968_, v___y_969_, v___y_970_);
v_a_1023_ = lean_ctor_get(v___x_1022_, 0);
v_isSharedCheck_1035_ = !lean_is_exclusive(v___x_1022_);
if (v_isSharedCheck_1035_ == 0)
{
v___x_1025_ = v___x_1022_;
v_isShared_1026_ = v_isSharedCheck_1035_;
goto v_resetjp_1024_;
}
else
{
lean_inc(v_a_1023_);
lean_dec(v___x_1022_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1035_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1030_; 
lean_inc_ref_n(v___y_1018_, 2);
v___x_1027_ = l_Lean_FileMap_toPosition(v___y_1018_, v___y_1016_);
lean_dec(v___y_1016_);
v___x_1028_ = l_Lean_FileMap_toPosition(v___y_1018_, v___y_1020_);
lean_dec(v___y_1020_);
if (v_isShared_1026_ == 0)
{
lean_ctor_set_tag(v___x_1025_, 1);
lean_ctor_set(v___x_1025_, 0, v___x_1028_);
v___x_1030_ = v___x_1025_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v___x_1028_);
v___x_1030_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
lean_object* v___x_1031_; 
v___x_1031_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41_spec__43___closed__0));
if (v___y_1014_ == 0)
{
lean_dec_ref(v___y_1011_);
v___y_977_ = v___y_1015_;
v___y_978_ = v___y_1017_;
v___y_979_ = v___x_1030_;
v___y_980_ = v___y_1019_;
v___y_981_ = v_a_1023_;
v___y_982_ = v___x_1027_;
v___y_983_ = v___x_1031_;
v_currNamespace_984_ = v___y_1013_;
v_openDecls_985_ = v___y_1012_;
v___y_986_ = v___y_970_;
goto v___jp_976_;
}
else
{
uint8_t v___x_1032_; 
lean_inc(v_a_1023_);
v___x_1032_ = l_Lean_MessageData_hasTag(v___y_1011_, v_a_1023_);
if (v___x_1032_ == 0)
{
lean_object* v___x_1033_; 
lean_dec_ref(v___x_1030_);
lean_dec_ref(v___x_1027_);
lean_dec(v_a_1023_);
v___x_1033_ = lean_box(0);
v_a_973_ = v___x_1033_;
goto v___jp_972_;
}
else
{
v___y_977_ = v___y_1015_;
v___y_978_ = v___y_1017_;
v___y_979_ = v___x_1030_;
v___y_980_ = v___y_1019_;
v___y_981_ = v_a_1023_;
v___y_982_ = v___x_1027_;
v___y_983_ = v___x_1031_;
v_currNamespace_984_ = v___y_1013_;
v_openDecls_985_ = v___y_1012_;
v___y_986_ = v___y_970_;
goto v___jp_976_;
}
}
}
}
}
v___jp_1036_:
{
lean_object* v___x_1047_; 
v___x_1047_ = l_Lean_Syntax_getTailPos_x3f(v___y_1045_, v___y_1040_);
lean_dec(v___y_1045_);
if (lean_obj_tag(v___x_1047_) == 0)
{
lean_inc(v___y_1046_);
v___y_1011_ = v___y_1037_;
v___y_1012_ = v___y_1038_;
v___y_1013_ = v___y_1039_;
v___y_1014_ = v___y_1041_;
v___y_1015_ = v___y_1040_;
v___y_1016_ = v___y_1046_;
v___y_1017_ = v___y_1043_;
v___y_1018_ = v___y_1042_;
v___y_1019_ = v___y_1044_;
v___y_1020_ = v___y_1046_;
goto v___jp_1010_;
}
else
{
lean_object* v_val_1048_; 
v_val_1048_ = lean_ctor_get(v___x_1047_, 0);
lean_inc(v_val_1048_);
lean_dec_ref_known(v___x_1047_, 1);
v___y_1011_ = v___y_1037_;
v___y_1012_ = v___y_1038_;
v___y_1013_ = v___y_1039_;
v___y_1014_ = v___y_1041_;
v___y_1015_ = v___y_1040_;
v___y_1016_ = v___y_1046_;
v___y_1017_ = v___y_1043_;
v___y_1018_ = v___y_1042_;
v___y_1019_ = v___y_1044_;
v___y_1020_ = v_val_1048_;
goto v___jp_1010_;
}
}
v___jp_1049_:
{
lean_object* v_ref_1059_; lean_object* v___x_1060_; 
v_ref_1059_ = l_Lean_replaceRef(v_ref_963_, v___y_1057_);
v___x_1060_ = l_Lean_Syntax_getPos_x3f(v_ref_1059_, v___y_1054_);
if (lean_obj_tag(v___x_1060_) == 0)
{
lean_object* v___x_1061_; 
v___x_1061_ = lean_unsigned_to_nat(0u);
v___y_1037_ = v___y_1050_;
v___y_1038_ = v___y_1051_;
v___y_1039_ = v___y_1052_;
v___y_1040_ = v___y_1054_;
v___y_1041_ = v___y_1053_;
v___y_1042_ = v___y_1056_;
v___y_1043_ = v___y_1055_;
v___y_1044_ = v___y_1058_;
v___y_1045_ = v_ref_1059_;
v___y_1046_ = v___x_1061_;
goto v___jp_1036_;
}
else
{
lean_object* v_val_1062_; 
v_val_1062_ = lean_ctor_get(v___x_1060_, 0);
lean_inc(v_val_1062_);
lean_dec_ref_known(v___x_1060_, 1);
v___y_1037_ = v___y_1050_;
v___y_1038_ = v___y_1051_;
v___y_1039_ = v___y_1052_;
v___y_1040_ = v___y_1054_;
v___y_1041_ = v___y_1053_;
v___y_1042_ = v___y_1056_;
v___y_1043_ = v___y_1055_;
v___y_1044_ = v___y_1058_;
v___y_1045_ = v_ref_1059_;
v___y_1046_ = v_val_1062_;
goto v___jp_1036_;
}
}
v___jp_1064_:
{
if (v___y_1073_ == 0)
{
v___y_1050_ = v___y_1067_;
v___y_1051_ = v___y_1068_;
v___y_1052_ = v___y_1069_;
v___y_1053_ = v___y_1071_;
v___y_1054_ = v___y_1070_;
v___y_1055_ = v___y_1066_;
v___y_1056_ = v___y_1065_;
v___y_1057_ = v___y_1072_;
v___y_1058_ = v_severity_965_;
goto v___jp_1049_;
}
else
{
v___y_1050_ = v___y_1067_;
v___y_1051_ = v___y_1068_;
v___y_1052_ = v___y_1069_;
v___y_1053_ = v___y_1071_;
v___y_1054_ = v___y_1070_;
v___y_1055_ = v___y_1066_;
v___y_1056_ = v___y_1065_;
v___y_1057_ = v___y_1072_;
v___y_1058_ = v___x_1063_;
goto v___jp_1049_;
}
}
v___jp_1074_:
{
if (v___y_1075_ == 0)
{
lean_object* v_toCold_1076_; lean_object* v_ref_1077_; uint8_t v_suppressElabErrors_1078_; lean_object* v_fileName_1079_; lean_object* v_fileMap_1080_; lean_object* v_options_1081_; lean_object* v_currNamespace_1082_; lean_object* v_openDecls_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___f_1086_; uint8_t v___x_1087_; uint8_t v___x_1088_; 
v_toCold_1076_ = lean_ctor_get(v___y_969_, 0);
v_ref_1077_ = lean_ctor_get(v___y_969_, 2);
v_suppressElabErrors_1078_ = lean_ctor_get_uint8(v___y_969_, sizeof(void*)*3 + 1);
v_fileName_1079_ = lean_ctor_get(v_toCold_1076_, 0);
v_fileMap_1080_ = lean_ctor_get(v_toCold_1076_, 1);
v_options_1081_ = lean_ctor_get(v_toCold_1076_, 2);
v_currNamespace_1082_ = lean_ctor_get(v_toCold_1076_, 4);
v_openDecls_1083_ = lean_ctor_get(v_toCold_1076_, 5);
v___x_1084_ = lean_box(v_suppressElabErrors_1078_);
v___x_1085_ = lean_box(v___y_1075_);
v___f_1086_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1086_, 0, v___x_1084_);
lean_closure_set(v___f_1086_, 1, v___x_1085_);
v___x_1087_ = 1;
v___x_1088_ = l_Lean_instBEqMessageSeverity_beq(v_severity_965_, v___x_1087_);
if (v___x_1088_ == 0)
{
v___y_1065_ = v_fileMap_1080_;
v___y_1066_ = v_fileName_1079_;
v___y_1067_ = v___f_1086_;
v___y_1068_ = v_openDecls_1083_;
v___y_1069_ = v_currNamespace_1082_;
v___y_1070_ = v___y_1075_;
v___y_1071_ = v_suppressElabErrors_1078_;
v___y_1072_ = v_ref_1077_;
v___y_1073_ = v___x_1088_;
goto v___jp_1064_;
}
else
{
lean_object* v___x_1089_; uint8_t v___x_1090_; 
v___x_1089_ = l_Lean_warningAsError;
v___x_1090_ = l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__4(v_options_1081_, v___x_1089_);
v___y_1065_ = v_fileMap_1080_;
v___y_1066_ = v_fileName_1079_;
v___y_1067_ = v___f_1086_;
v___y_1068_ = v_openDecls_1083_;
v___y_1069_ = v_currNamespace_1082_;
v___y_1070_ = v___y_1075_;
v___y_1071_ = v_suppressElabErrors_1078_;
v___y_1072_ = v_ref_1077_;
v___y_1073_ = v___x_1090_;
goto v___jp_1064_;
}
}
else
{
lean_object* v___x_1091_; lean_object* v___x_1092_; 
lean_dec_ref(v_msgData_964_);
v___x_1091_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__43_spec__45_spec__47___closed__0));
v___x_1092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1091_);
return v___x_1092_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__43_spec__45_spec__47___boxed(lean_object* v_ref_1095_, lean_object* v_msgData_1096_, lean_object* v_severity_1097_, lean_object* v_isSilent_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_){
_start:
{
uint8_t v_severity_boxed_1104_; uint8_t v_isSilent_boxed_1105_; lean_object* v_res_1106_; 
v_severity_boxed_1104_ = lean_unbox(v_severity_1097_);
v_isSilent_boxed_1105_ = lean_unbox(v_isSilent_1098_);
v_res_1106_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__43_spec__45_spec__47(v_ref_1095_, v_msgData_1096_, v_severity_boxed_1104_, v_isSilent_boxed_1105_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_);
lean_dec(v___y_1102_);
lean_dec_ref(v___y_1101_);
lean_dec(v___y_1100_);
lean_dec_ref(v___y_1099_);
lean_dec(v_ref_1095_);
return v_res_1106_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__43_spec__45(lean_object* v_msgData_1107_, uint8_t v_severity_1108_, uint8_t v_isSilent_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_){
_start:
{
lean_object* v_ref_1115_; lean_object* v___x_1116_; 
v_ref_1115_ = lean_ctor_get(v___y_1112_, 2);
v___x_1116_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__43_spec__45_spec__47(v_ref_1115_, v_msgData_1107_, v_severity_1108_, v_isSilent_1109_, v___y_1110_, v___y_1111_, v___y_1112_, v___y_1113_);
return v___x_1116_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__43_spec__45___boxed(lean_object* v_msgData_1117_, lean_object* v_severity_1118_, lean_object* v_isSilent_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_){
_start:
{
uint8_t v_severity_boxed_1125_; uint8_t v_isSilent_boxed_1126_; lean_object* v_res_1127_; 
v_severity_boxed_1125_ = lean_unbox(v_severity_1118_);
v_isSilent_boxed_1126_ = lean_unbox(v_isSilent_1119_);
v_res_1127_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__43_spec__45(v_msgData_1117_, v_severity_boxed_1125_, v_isSilent_boxed_1126_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_);
lean_dec(v___y_1123_);
lean_dec_ref(v___y_1122_);
lean_dec(v___y_1121_);
lean_dec_ref(v___y_1120_);
return v_res_1127_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__43(lean_object* v_msgData_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_){
_start:
{
uint8_t v___x_1134_; uint8_t v___x_1135_; lean_object* v___x_1136_; 
v___x_1134_ = 1;
v___x_1135_ = 0;
v___x_1136_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__43_spec__45(v_msgData_1128_, v___x_1134_, v___x_1135_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_);
return v___x_1136_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__43___boxed(lean_object* v_msgData_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_){
_start:
{
lean_object* v_res_1143_; 
v_res_1143_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__43(v_msgData_1137_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_);
lean_dec(v___y_1141_);
lean_dec_ref(v___y_1140_);
lean_dec(v___y_1139_);
lean_dec_ref(v___y_1138_);
return v_res_1143_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39(lean_object* v_id_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_){
_start:
{
lean_object* v___x_1150_; lean_object* v_env_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v_a_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1174_; 
v___x_1150_ = lean_st_ref_get(v___y_1148_);
v_env_1151_ = lean_ctor_get(v___x_1150_, 0);
lean_inc_ref(v_env_1151_);
lean_dec(v___x_1150_);
v___x_1152_ = l_Lean_ResolveName_backward_privateInPublic_warn;
v___x_1153_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__42___redArg(v___x_1152_, v___y_1147_);
v_a_1154_ = lean_ctor_get(v___x_1153_, 0);
v_isSharedCheck_1174_ = !lean_is_exclusive(v___x_1153_);
if (v_isSharedCheck_1174_ == 0)
{
v___x_1156_ = v___x_1153_;
v_isShared_1157_ = v_isSharedCheck_1174_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_a_1154_);
lean_dec(v___x_1153_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1174_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
uint8_t v_isExporting_1163_; 
v_isExporting_1163_ = lean_ctor_get_uint8(v_env_1151_, sizeof(void*)*8);
lean_dec_ref(v_env_1151_);
if (v_isExporting_1163_ == 0)
{
lean_dec(v_a_1154_);
lean_dec(v_id_1144_);
goto v___jp_1158_;
}
else
{
lean_object* v_val_1164_; uint8_t v___x_1165_; 
v_val_1164_ = lean_ctor_get(v_a_1154_, 0);
lean_inc(v_val_1164_);
lean_dec(v_a_1154_);
v___x_1165_ = l_Lean_isPrivateName(v_id_1144_);
if (v___x_1165_ == 0)
{
lean_dec(v_val_1164_);
lean_dec(v_id_1144_);
goto v___jp_1158_;
}
else
{
uint8_t v___x_1166_; 
v___x_1166_ = lean_unbox(v_val_1164_);
lean_dec(v_val_1164_);
if (v___x_1166_ == 0)
{
lean_dec(v_id_1144_);
goto v___jp_1158_;
}
else
{
lean_object* v___x_1167_; uint8_t v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; 
lean_del_object(v___x_1156_);
v___x_1167_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___closed__1, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___closed__1_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___closed__1);
v___x_1168_ = 0;
v___x_1169_ = l_Lean_MessageData_ofConstName(v_id_1144_, v___x_1168_);
v___x_1170_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1170_, 0, v___x_1167_);
lean_ctor_set(v___x_1170_, 1, v___x_1169_);
v___x_1171_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___closed__3, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___closed__3_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31___closed__3);
v___x_1172_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1172_, 0, v___x_1170_);
lean_ctor_set(v___x_1172_, 1, v___x_1171_);
v___x_1173_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__43(v___x_1172_, v___y_1145_, v___y_1146_, v___y_1147_, v___y_1148_);
return v___x_1173_;
}
}
}
v___jp_1158_:
{
lean_object* v___x_1159_; lean_object* v___x_1161_; 
v___x_1159_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__43_spec__45_spec__47___closed__0));
if (v_isShared_1157_ == 0)
{
lean_ctor_set(v___x_1156_, 0, v___x_1159_);
v___x_1161_ = v___x_1156_;
goto v_reusejp_1160_;
}
else
{
lean_object* v_reuseFailAlloc_1162_; 
v_reuseFailAlloc_1162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1162_, 0, v___x_1159_);
v___x_1161_ = v_reuseFailAlloc_1162_;
goto v_reusejp_1160_;
}
v_reusejp_1160_:
{
return v___x_1161_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39___boxed(lean_object* v_id_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_){
_start:
{
lean_object* v_res_1181_; 
v_res_1181_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39(v_id_1175_, v___y_1176_, v___y_1177_, v___y_1178_, v___y_1179_);
lean_dec(v___y_1179_);
lean_dec_ref(v___y_1178_);
lean_dec(v___y_1177_);
lean_dec_ref(v___y_1176_);
return v_res_1181_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33(lean_object* v_id_1182_, uint8_t v_enableLog_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_){
_start:
{
lean_object* v___x_1189_; lean_object* v_toCold_1190_; lean_object* v_env_1191_; lean_object* v_options_1192_; lean_object* v_currNamespace_1193_; lean_object* v_openDecls_1194_; lean_object* v_res_1195_; lean_object* v___x_1199_; 
v___x_1189_ = lean_st_ref_get(v___y_1187_);
v_toCold_1190_ = lean_ctor_get(v___y_1186_, 0);
v_env_1191_ = lean_ctor_get(v___x_1189_, 0);
lean_inc_ref(v_env_1191_);
lean_dec(v___x_1189_);
v_options_1192_ = lean_ctor_get(v_toCold_1190_, 2);
v_currNamespace_1193_ = lean_ctor_get(v_toCold_1190_, 4);
v_openDecls_1194_ = lean_ctor_get(v_toCold_1190_, 5);
lean_inc(v_openDecls_1194_);
lean_inc(v_currNamespace_1193_);
v_res_1195_ = l_Lean_ResolveName_resolveGlobalName(v_env_1191_, v_options_1192_, v_currNamespace_1193_, v_openDecls_1194_, v_id_1182_);
v___x_1199_ = lean_st_ref_get(v___y_1187_);
if (v_enableLog_1183_ == 0)
{
lean_dec(v___x_1199_);
goto v___jp_1196_;
}
else
{
lean_object* v_env_1200_; uint8_t v_isExporting_1201_; 
v_env_1200_ = lean_ctor_get(v___x_1199_, 0);
lean_inc_ref(v_env_1200_);
lean_dec(v___x_1199_);
v_isExporting_1201_ = lean_ctor_get_uint8(v_env_1200_, sizeof(void*)*8);
lean_dec_ref(v_env_1200_);
if (v_isExporting_1201_ == 0)
{
goto v___jp_1196_;
}
else
{
lean_object* v___x_1202_; 
v___x_1202_ = l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__30(v_res_1195_);
if (lean_obj_tag(v___x_1202_) == 1)
{
lean_object* v_val_1203_; lean_object* v_fst_1204_; lean_object* v___x_1205_; 
v_val_1203_ = lean_ctor_get(v___x_1202_, 0);
lean_inc(v_val_1203_);
lean_dec_ref_known(v___x_1202_, 1);
v_fst_1204_ = lean_ctor_get(v_val_1203_, 0);
lean_inc(v_fst_1204_);
lean_dec(v_val_1203_);
v___x_1205_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39(v_fst_1204_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_);
if (lean_obj_tag(v___x_1205_) == 0)
{
lean_object* v_a_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1214_; 
v_a_1206_ = lean_ctor_get(v___x_1205_, 0);
v_isSharedCheck_1214_ = !lean_is_exclusive(v___x_1205_);
if (v_isSharedCheck_1214_ == 0)
{
v___x_1208_ = v___x_1205_;
v_isShared_1209_ = v_isSharedCheck_1214_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_a_1206_);
lean_dec(v___x_1205_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1214_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
if (lean_obj_tag(v_a_1206_) == 0)
{
lean_object* v___x_1210_; lean_object* v___x_1212_; 
lean_dec(v_res_1195_);
v___x_1210_ = lean_box(0);
if (v_isShared_1209_ == 0)
{
lean_ctor_set(v___x_1208_, 0, v___x_1210_);
v___x_1212_ = v___x_1208_;
goto v_reusejp_1211_;
}
else
{
lean_object* v_reuseFailAlloc_1213_; 
v_reuseFailAlloc_1213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1213_, 0, v___x_1210_);
v___x_1212_ = v_reuseFailAlloc_1213_;
goto v_reusejp_1211_;
}
v_reusejp_1211_:
{
return v___x_1212_;
}
}
else
{
lean_dec_ref_known(v_a_1206_, 1);
lean_del_object(v___x_1208_);
goto v___jp_1196_;
}
}
}
else
{
lean_object* v_a_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1222_; 
lean_dec(v_res_1195_);
v_a_1215_ = lean_ctor_get(v___x_1205_, 0);
v_isSharedCheck_1222_ = !lean_is_exclusive(v___x_1205_);
if (v_isSharedCheck_1222_ == 0)
{
v___x_1217_ = v___x_1205_;
v_isShared_1218_ = v_isSharedCheck_1222_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_a_1215_);
lean_dec(v___x_1205_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1222_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___x_1220_; 
if (v_isShared_1218_ == 0)
{
v___x_1220_ = v___x_1217_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v_a_1215_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
return v___x_1220_;
}
}
}
}
else
{
lean_dec(v___x_1202_);
goto v___jp_1196_;
}
}
}
v___jp_1196_:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1197_, 0, v_res_1195_);
v___x_1198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1198_, 0, v___x_1197_);
return v___x_1198_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33___boxed(lean_object* v_id_1223_, lean_object* v_enableLog_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_){
_start:
{
uint8_t v_enableLog_boxed_1230_; lean_object* v_res_1231_; 
v_enableLog_boxed_1230_ = lean_unbox(v_enableLog_1224_);
v_res_1231_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33(v_id_1223_, v_enableLog_boxed_1230_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
lean_dec(v___y_1228_);
lean_dec_ref(v___y_1227_);
lean_dec(v___y_1226_);
lean_dec_ref(v___y_1225_);
return v_res_1231_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21___lam__0(lean_object* v___x_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_){
_start:
{
lean_object* v___x_1238_; 
v___x_1238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1232_);
return v___x_1238_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21___lam__0___boxed(lean_object* v___x_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_){
_start:
{
lean_object* v_res_1245_; 
v_res_1245_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21___lam__0(v___x_1239_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_);
lean_dec(v___y_1243_);
lean_dec_ref(v___y_1242_);
lean_dec(v___y_1241_);
lean_dec_ref(v___y_1240_);
return v_res_1245_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24(lean_object* v_n_u2080_1250_, lean_object* v_filter_1251_, lean_object* v_view_x3f_1252_, lean_object* v_n_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_){
_start:
{
lean_object* v___y_1263_; lean_object* v___y_1264_; lean_object* v___y_1295_; lean_object* v___y_1296_; lean_object* v___y_1329_; 
if (lean_obj_tag(v_view_x3f_1252_) == 1)
{
lean_object* v_val_1356_; lean_object* v_imported_1357_; lean_object* v_ctx_1358_; lean_object* v_scopes_1359_; lean_object* v___x_1361_; uint8_t v_isShared_1362_; uint8_t v_isSharedCheck_1367_; 
v_val_1356_ = lean_ctor_get(v_view_x3f_1252_, 0);
lean_inc(v_val_1356_);
lean_dec_ref_known(v_view_x3f_1252_, 1);
v_imported_1357_ = lean_ctor_get(v_val_1356_, 1);
v_ctx_1358_ = lean_ctor_get(v_val_1356_, 2);
v_scopes_1359_ = lean_ctor_get(v_val_1356_, 3);
v_isSharedCheck_1367_ = !lean_is_exclusive(v_val_1356_);
if (v_isSharedCheck_1367_ == 0)
{
lean_object* v_unused_1368_; 
v_unused_1368_ = lean_ctor_get(v_val_1356_, 0);
lean_dec(v_unused_1368_);
v___x_1361_ = v_val_1356_;
v_isShared_1362_ = v_isSharedCheck_1367_;
goto v_resetjp_1360_;
}
else
{
lean_inc(v_scopes_1359_);
lean_inc(v_ctx_1358_);
lean_inc(v_imported_1357_);
lean_dec(v_val_1356_);
v___x_1361_ = lean_box(0);
v_isShared_1362_ = v_isSharedCheck_1367_;
goto v_resetjp_1360_;
}
v_resetjp_1360_:
{
lean_object* v___x_1364_; 
if (v_isShared_1362_ == 0)
{
lean_ctor_set(v___x_1361_, 0, v_n_1253_);
v___x_1364_ = v___x_1361_;
goto v_reusejp_1363_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v_n_1253_);
lean_ctor_set(v_reuseFailAlloc_1366_, 1, v_imported_1357_);
lean_ctor_set(v_reuseFailAlloc_1366_, 2, v_ctx_1358_);
lean_ctor_set(v_reuseFailAlloc_1366_, 3, v_scopes_1359_);
v___x_1364_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1363_;
}
v_reusejp_1363_:
{
lean_object* v___x_1365_; 
v___x_1365_ = l_Lean_MacroScopesView_review(v___x_1364_);
v___y_1329_ = v___x_1365_;
goto v___jp_1328_;
}
}
}
else
{
lean_dec(v_view_x3f_1252_);
v___y_1329_ = v_n_1253_;
goto v___jp_1328_;
}
v___jp_1259_:
{
lean_object* v___x_1260_; lean_object* v___x_1261_; 
v___x_1260_ = lean_box(0);
v___x_1261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1261_, 0, v___x_1260_);
return v___x_1261_;
}
v___jp_1262_:
{
lean_object* v___x_1265_; 
lean_inc_ref(v___y_1264_);
lean_inc(v___y_1257_);
lean_inc_ref(v___y_1256_);
lean_inc(v___y_1255_);
lean_inc_ref(v___y_1254_);
v___x_1265_ = lean_apply_5(v___y_1264_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_, lean_box(0));
if (lean_obj_tag(v___x_1265_) == 0)
{
lean_object* v_a_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1285_; 
v_a_1266_ = lean_ctor_get(v___x_1265_, 0);
v_isSharedCheck_1285_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1268_ = v___x_1265_;
v_isShared_1269_ = v_isSharedCheck_1285_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_a_1266_);
lean_dec(v___x_1265_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1285_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
if (lean_obj_tag(v_a_1266_) == 0)
{
lean_object* v___x_1270_; lean_object* v___x_1272_; 
lean_dec(v___y_1263_);
v___x_1270_ = lean_box(0);
if (v_isShared_1269_ == 0)
{
lean_ctor_set(v___x_1268_, 0, v___x_1270_);
v___x_1272_ = v___x_1268_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v___x_1270_);
v___x_1272_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
return v___x_1272_;
}
}
else
{
lean_object* v___x_1275_; uint8_t v_isShared_1276_; uint8_t v_isSharedCheck_1283_; 
v_isSharedCheck_1283_ = !lean_is_exclusive(v_a_1266_);
if (v_isSharedCheck_1283_ == 0)
{
lean_object* v_unused_1284_; 
v_unused_1284_ = lean_ctor_get(v_a_1266_, 0);
lean_dec(v_unused_1284_);
v___x_1275_ = v_a_1266_;
v_isShared_1276_ = v_isSharedCheck_1283_;
goto v_resetjp_1274_;
}
else
{
lean_dec(v_a_1266_);
v___x_1275_ = lean_box(0);
v_isShared_1276_ = v_isSharedCheck_1283_;
goto v_resetjp_1274_;
}
v_resetjp_1274_:
{
lean_object* v___x_1278_; 
if (v_isShared_1276_ == 0)
{
lean_ctor_set(v___x_1275_, 0, v___y_1263_);
v___x_1278_ = v___x_1275_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v___y_1263_);
v___x_1278_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
lean_object* v___x_1280_; 
if (v_isShared_1269_ == 0)
{
lean_ctor_set(v___x_1268_, 0, v___x_1278_);
v___x_1280_ = v___x_1268_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v___x_1278_);
v___x_1280_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
return v___x_1280_;
}
}
}
}
}
}
else
{
lean_object* v_a_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1293_; 
lean_dec(v___y_1263_);
v_a_1286_ = lean_ctor_get(v___x_1265_, 0);
v_isSharedCheck_1293_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1293_ == 0)
{
v___x_1288_ = v___x_1265_;
v_isShared_1289_ = v_isSharedCheck_1293_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_a_1286_);
lean_dec(v___x_1265_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1293_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
lean_object* v___x_1291_; 
if (v_isShared_1289_ == 0)
{
v___x_1291_ = v___x_1288_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v_a_1286_);
v___x_1291_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
return v___x_1291_;
}
}
}
}
v___jp_1294_:
{
lean_object* v___x_1297_; 
lean_inc_ref(v___y_1296_);
lean_inc(v___y_1257_);
lean_inc_ref(v___y_1256_);
lean_inc(v___y_1255_);
lean_inc_ref(v___y_1254_);
v___x_1297_ = lean_apply_5(v___y_1296_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_, lean_box(0));
if (lean_obj_tag(v___x_1297_) == 0)
{
lean_object* v_a_1298_; lean_object* v___x_1300_; uint8_t v_isShared_1301_; uint8_t v_isSharedCheck_1319_; 
v_a_1298_ = lean_ctor_get(v___x_1297_, 0);
v_isSharedCheck_1319_ = !lean_is_exclusive(v___x_1297_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1300_ = v___x_1297_;
v_isShared_1301_ = v_isSharedCheck_1319_;
goto v_resetjp_1299_;
}
else
{
lean_inc(v_a_1298_);
lean_dec(v___x_1297_);
v___x_1300_ = lean_box(0);
v_isShared_1301_ = v_isSharedCheck_1319_;
goto v_resetjp_1299_;
}
v_resetjp_1299_:
{
if (lean_obj_tag(v_a_1298_) == 0)
{
lean_object* v___x_1302_; lean_object* v___x_1304_; 
lean_dec(v___y_1295_);
lean_dec_ref(v_filter_1251_);
v___x_1302_ = lean_box(0);
if (v_isShared_1301_ == 0)
{
lean_ctor_set(v___x_1300_, 0, v___x_1302_);
v___x_1304_ = v___x_1300_;
goto v_reusejp_1303_;
}
else
{
lean_object* v_reuseFailAlloc_1305_; 
v_reuseFailAlloc_1305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1305_, 0, v___x_1302_);
v___x_1304_ = v_reuseFailAlloc_1305_;
goto v_reusejp_1303_;
}
v_reusejp_1303_:
{
return v___x_1304_;
}
}
else
{
lean_object* v___x_1306_; 
lean_dec_ref_known(v_a_1298_, 1);
lean_del_object(v___x_1300_);
lean_inc(v___y_1257_);
lean_inc_ref(v___y_1256_);
lean_inc(v___y_1255_);
lean_inc_ref(v___y_1254_);
lean_inc(v___y_1295_);
v___x_1306_ = lean_apply_6(v_filter_1251_, v___y_1295_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_, lean_box(0));
if (lean_obj_tag(v___x_1306_) == 0)
{
lean_object* v_a_1307_; uint8_t v___x_1308_; 
v_a_1307_ = lean_ctor_get(v___x_1306_, 0);
lean_inc(v_a_1307_);
lean_dec_ref_known(v___x_1306_, 1);
v___x_1308_ = lean_unbox(v_a_1307_);
lean_dec(v_a_1307_);
if (v___x_1308_ == 0)
{
lean_object* v___f_1309_; 
v___f_1309_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24___closed__0));
v___y_1263_ = v___y_1295_;
v___y_1264_ = v___f_1309_;
goto v___jp_1262_;
}
else
{
lean_object* v___f_1310_; 
v___f_1310_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24___closed__1));
v___y_1263_ = v___y_1295_;
v___y_1264_ = v___f_1310_;
goto v___jp_1262_;
}
}
else
{
lean_object* v_a_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1318_; 
lean_dec(v___y_1295_);
v_a_1311_ = lean_ctor_get(v___x_1306_, 0);
v_isSharedCheck_1318_ = !lean_is_exclusive(v___x_1306_);
if (v_isSharedCheck_1318_ == 0)
{
v___x_1313_ = v___x_1306_;
v_isShared_1314_ = v_isSharedCheck_1318_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_a_1311_);
lean_dec(v___x_1306_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1318_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v___x_1316_; 
if (v_isShared_1314_ == 0)
{
v___x_1316_ = v___x_1313_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1317_; 
v_reuseFailAlloc_1317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v_a_1311_);
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
}
else
{
lean_object* v_a_1320_; lean_object* v___x_1322_; uint8_t v_isShared_1323_; uint8_t v_isSharedCheck_1327_; 
lean_dec(v___y_1295_);
lean_dec_ref(v_filter_1251_);
v_a_1320_ = lean_ctor_get(v___x_1297_, 0);
v_isSharedCheck_1327_ = !lean_is_exclusive(v___x_1297_);
if (v_isSharedCheck_1327_ == 0)
{
v___x_1322_ = v___x_1297_;
v_isShared_1323_ = v_isSharedCheck_1327_;
goto v_resetjp_1321_;
}
else
{
lean_inc(v_a_1320_);
lean_dec(v___x_1297_);
v___x_1322_ = lean_box(0);
v_isShared_1323_ = v_isSharedCheck_1327_;
goto v_resetjp_1321_;
}
v_resetjp_1321_:
{
lean_object* v___x_1325_; 
if (v_isShared_1323_ == 0)
{
v___x_1325_ = v___x_1322_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1326_; 
v_reuseFailAlloc_1326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1326_, 0, v_a_1320_);
v___x_1325_ = v_reuseFailAlloc_1326_;
goto v_reusejp_1324_;
}
v_reusejp_1324_:
{
return v___x_1325_;
}
}
}
}
v___jp_1328_:
{
uint8_t v___x_1330_; lean_object* v___x_1331_; 
v___x_1330_ = 0;
lean_inc(v___y_1329_);
v___x_1331_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33(v___y_1329_, v___x_1330_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_);
if (lean_obj_tag(v___x_1331_) == 0)
{
lean_object* v_a_1332_; lean_object* v___x_1334_; uint8_t v_isShared_1335_; uint8_t v_isSharedCheck_1347_; 
v_a_1332_ = lean_ctor_get(v___x_1331_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1331_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1334_ = v___x_1331_;
v_isShared_1335_ = v_isSharedCheck_1347_;
goto v_resetjp_1333_;
}
else
{
lean_inc(v_a_1332_);
lean_dec(v___x_1331_);
v___x_1334_ = lean_box(0);
v_isShared_1335_ = v_isSharedCheck_1347_;
goto v_resetjp_1333_;
}
v_resetjp_1333_:
{
if (lean_obj_tag(v_a_1332_) == 0)
{
lean_object* v___x_1336_; lean_object* v___x_1338_; 
lean_dec(v___y_1329_);
lean_dec_ref(v_filter_1251_);
v___x_1336_ = lean_box(0);
if (v_isShared_1335_ == 0)
{
lean_ctor_set(v___x_1334_, 0, v___x_1336_);
v___x_1338_ = v___x_1334_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v___x_1336_);
v___x_1338_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
return v___x_1338_;
}
}
else
{
lean_object* v_val_1340_; 
lean_del_object(v___x_1334_);
v_val_1340_ = lean_ctor_get(v_a_1332_, 0);
lean_inc(v_val_1340_);
lean_dec_ref_known(v_a_1332_, 1);
if (lean_obj_tag(v_val_1340_) == 1)
{
lean_object* v_head_1341_; lean_object* v_tail_1342_; 
v_head_1341_ = lean_ctor_get(v_val_1340_, 0);
lean_inc(v_head_1341_);
v_tail_1342_ = lean_ctor_get(v_val_1340_, 1);
lean_inc(v_tail_1342_);
lean_dec_ref_known(v_val_1340_, 2);
if (lean_obj_tag(v_tail_1342_) == 0)
{
lean_object* v_fst_1343_; uint8_t v___x_1344_; 
v_fst_1343_ = lean_ctor_get(v_head_1341_, 0);
lean_inc(v_fst_1343_);
lean_dec(v_head_1341_);
v___x_1344_ = lean_name_eq(v_fst_1343_, v_n_u2080_1250_);
lean_dec(v_fst_1343_);
if (v___x_1344_ == 0)
{
lean_object* v___f_1345_; 
v___f_1345_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24___closed__0));
v___y_1295_ = v___y_1329_;
v___y_1296_ = v___f_1345_;
goto v___jp_1294_;
}
else
{
lean_object* v___f_1346_; 
v___f_1346_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24___closed__1));
v___y_1295_ = v___y_1329_;
v___y_1296_ = v___f_1346_;
goto v___jp_1294_;
}
}
else
{
lean_dec(v_tail_1342_);
lean_dec(v_head_1341_);
lean_dec(v___y_1329_);
lean_dec_ref(v_filter_1251_);
goto v___jp_1259_;
}
}
else
{
lean_dec(v_val_1340_);
lean_dec(v___y_1329_);
lean_dec_ref(v_filter_1251_);
goto v___jp_1259_;
}
}
}
}
else
{
lean_object* v_a_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1355_; 
lean_dec(v___y_1329_);
lean_dec_ref(v_filter_1251_);
v_a_1348_ = lean_ctor_get(v___x_1331_, 0);
v_isSharedCheck_1355_ = !lean_is_exclusive(v___x_1331_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1350_ = v___x_1331_;
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_a_1348_);
lean_dec(v___x_1331_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v___x_1353_; 
if (v_isShared_1351_ == 0)
{
v___x_1353_ = v___x_1350_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v_a_1348_);
v___x_1353_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
return v___x_1353_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24___boxed(lean_object* v_n_u2080_1369_, lean_object* v_filter_1370_, lean_object* v_view_x3f_1371_, lean_object* v_n_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_){
_start:
{
lean_object* v_res_1378_; 
v_res_1378_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24(v_n_u2080_1369_, v_filter_1370_, v_view_x3f_1371_, v_n_1372_, v___y_1373_, v___y_1374_, v___y_1375_, v___y_1376_);
lean_dec(v___y_1376_);
lean_dec_ref(v___y_1375_);
lean_dec(v___y_1374_);
lean_dec_ref(v___y_1373_);
lean_dec(v_n_u2080_1369_);
return v_res_1378_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21_spec__29___redArg(lean_object* v_n_u2080_1379_, lean_object* v_filter_1380_, lean_object* v_view_x3f_1381_, lean_object* v_as_x27_1382_, lean_object* v_b_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_){
_start:
{
if (lean_obj_tag(v_as_x27_1382_) == 0)
{
lean_object* v___x_1389_; lean_object* v___x_1390_; 
lean_dec(v_view_x3f_1381_);
lean_dec_ref(v_filter_1380_);
v___x_1389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1389_, 0, v_b_1383_);
v___x_1390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1390_, 0, v___x_1389_);
return v___x_1390_;
}
else
{
lean_object* v_head_1391_; lean_object* v_tail_1392_; lean_object* v_snd_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1431_; 
v_head_1391_ = lean_ctor_get(v_as_x27_1382_, 0);
v_tail_1392_ = lean_ctor_get(v_as_x27_1382_, 1);
v_snd_1393_ = lean_ctor_get(v_b_1383_, 1);
v_isSharedCheck_1431_ = !lean_is_exclusive(v_b_1383_);
if (v_isSharedCheck_1431_ == 0)
{
lean_object* v_unused_1432_; 
v_unused_1432_ = lean_ctor_get(v_b_1383_, 0);
lean_dec(v_unused_1432_);
v___x_1395_ = v_b_1383_;
v_isShared_1396_ = v_isSharedCheck_1431_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_snd_1393_);
lean_dec(v_b_1383_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1431_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; 
v___x_1397_ = lean_box(0);
v___x_1398_ = l_Lean_Name_appendCore(v_head_1391_, v_snd_1393_);
lean_inc(v___x_1398_);
lean_inc(v_view_x3f_1381_);
lean_inc_ref(v_filter_1380_);
v___x_1399_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24(v_n_u2080_1379_, v_filter_1380_, v_view_x3f_1381_, v___x_1398_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_);
if (lean_obj_tag(v___x_1399_) == 0)
{
lean_object* v_a_1400_; lean_object* v___x_1402_; uint8_t v_isShared_1403_; uint8_t v_isSharedCheck_1422_; 
v_a_1400_ = lean_ctor_get(v___x_1399_, 0);
v_isSharedCheck_1422_ = !lean_is_exclusive(v___x_1399_);
if (v_isSharedCheck_1422_ == 0)
{
v___x_1402_ = v___x_1399_;
v_isShared_1403_ = v_isSharedCheck_1422_;
goto v_resetjp_1401_;
}
else
{
lean_inc(v_a_1400_);
lean_dec(v___x_1399_);
v___x_1402_ = lean_box(0);
v_isShared_1403_ = v_isSharedCheck_1422_;
goto v_resetjp_1401_;
}
v_resetjp_1401_:
{
if (lean_obj_tag(v_a_1400_) == 0)
{
lean_object* v___x_1405_; 
lean_del_object(v___x_1402_);
if (v_isShared_1396_ == 0)
{
lean_ctor_set(v___x_1395_, 1, v___x_1398_);
lean_ctor_set(v___x_1395_, 0, v___x_1397_);
v___x_1405_ = v___x_1395_;
goto v_reusejp_1404_;
}
else
{
lean_object* v_reuseFailAlloc_1407_; 
v_reuseFailAlloc_1407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1407_, 0, v___x_1397_);
lean_ctor_set(v_reuseFailAlloc_1407_, 1, v___x_1398_);
v___x_1405_ = v_reuseFailAlloc_1407_;
goto v_reusejp_1404_;
}
v_reusejp_1404_:
{
v_as_x27_1382_ = v_tail_1392_;
v_b_1383_ = v___x_1405_;
goto _start;
}
}
else
{
lean_object* v___x_1409_; 
lean_dec(v_view_x3f_1381_);
lean_dec_ref(v_filter_1380_);
lean_inc_ref(v_a_1400_);
if (v_isShared_1396_ == 0)
{
lean_ctor_set(v___x_1395_, 1, v___x_1398_);
lean_ctor_set(v___x_1395_, 0, v_a_1400_);
v___x_1409_ = v___x_1395_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v_a_1400_);
lean_ctor_set(v_reuseFailAlloc_1421_, 1, v___x_1398_);
v___x_1409_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
lean_object* v___x_1411_; uint8_t v_isShared_1412_; uint8_t v_isSharedCheck_1419_; 
v_isSharedCheck_1419_ = !lean_is_exclusive(v_a_1400_);
if (v_isSharedCheck_1419_ == 0)
{
lean_object* v_unused_1420_; 
v_unused_1420_ = lean_ctor_get(v_a_1400_, 0);
lean_dec(v_unused_1420_);
v___x_1411_ = v_a_1400_;
v_isShared_1412_ = v_isSharedCheck_1419_;
goto v_resetjp_1410_;
}
else
{
lean_dec(v_a_1400_);
v___x_1411_ = lean_box(0);
v_isShared_1412_ = v_isSharedCheck_1419_;
goto v_resetjp_1410_;
}
v_resetjp_1410_:
{
lean_object* v___x_1414_; 
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 0, v___x_1409_);
v___x_1414_ = v___x_1411_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1418_; 
v_reuseFailAlloc_1418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1418_, 0, v___x_1409_);
v___x_1414_ = v_reuseFailAlloc_1418_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
lean_object* v___x_1416_; 
if (v_isShared_1403_ == 0)
{
lean_ctor_set(v___x_1402_, 0, v___x_1414_);
v___x_1416_ = v___x_1402_;
goto v_reusejp_1415_;
}
else
{
lean_object* v_reuseFailAlloc_1417_; 
v_reuseFailAlloc_1417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1417_, 0, v___x_1414_);
v___x_1416_ = v_reuseFailAlloc_1417_;
goto v_reusejp_1415_;
}
v_reusejp_1415_:
{
return v___x_1416_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1430_; 
lean_dec(v___x_1398_);
lean_del_object(v___x_1395_);
lean_dec(v_view_x3f_1381_);
lean_dec_ref(v_filter_1380_);
v_a_1423_ = lean_ctor_get(v___x_1399_, 0);
v_isSharedCheck_1430_ = !lean_is_exclusive(v___x_1399_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1425_ = v___x_1399_;
v_isShared_1426_ = v_isSharedCheck_1430_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_a_1423_);
lean_dec(v___x_1399_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1430_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
lean_object* v___x_1428_; 
if (v_isShared_1426_ == 0)
{
v___x_1428_ = v___x_1425_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v_a_1423_);
v___x_1428_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
return v___x_1428_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21_spec__29___redArg___boxed(lean_object* v_n_u2080_1433_, lean_object* v_filter_1434_, lean_object* v_view_x3f_1435_, lean_object* v_as_x27_1436_, lean_object* v_b_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_){
_start:
{
lean_object* v_res_1443_; 
v_res_1443_ = l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21_spec__29___redArg(v_n_u2080_1433_, v_filter_1434_, v_view_x3f_1435_, v_as_x27_1436_, v_b_1437_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_);
lean_dec(v___y_1441_);
lean_dec_ref(v___y_1440_);
lean_dec(v___y_1439_);
lean_dec_ref(v___y_1438_);
lean_dec(v_as_x27_1436_);
lean_dec(v_n_u2080_1433_);
return v_res_1443_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21(lean_object* v_n_u2080_1447_, lean_object* v_filter_1448_, lean_object* v_view_x3f_1449_, lean_object* v_n_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_){
_start:
{
lean_object* v___y_1457_; uint8_t v___x_1498_; 
v___x_1498_ = l_Lean_Name_hasMacroScopes(v_n_1450_);
if (v___x_1498_ == 0)
{
lean_object* v___f_1499_; 
v___f_1499_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24___closed__1));
v___y_1457_ = v___f_1499_;
goto v___jp_1456_;
}
else
{
lean_object* v___f_1500_; 
v___f_1500_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24___closed__0));
v___y_1457_ = v___f_1500_;
goto v___jp_1456_;
}
v___jp_1456_:
{
lean_object* v___x_1458_; 
lean_inc_ref(v___y_1457_);
lean_inc(v___y_1454_);
lean_inc_ref(v___y_1453_);
lean_inc(v___y_1452_);
lean_inc_ref(v___y_1451_);
v___x_1458_ = lean_apply_5(v___y_1457_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_, lean_box(0));
if (lean_obj_tag(v___x_1458_) == 0)
{
lean_object* v_a_1459_; lean_object* v___x_1461_; uint8_t v_isShared_1462_; uint8_t v_isSharedCheck_1489_; 
v_a_1459_ = lean_ctor_get(v___x_1458_, 0);
v_isSharedCheck_1489_ = !lean_is_exclusive(v___x_1458_);
if (v_isSharedCheck_1489_ == 0)
{
v___x_1461_ = v___x_1458_;
v_isShared_1462_ = v_isSharedCheck_1489_;
goto v_resetjp_1460_;
}
else
{
lean_inc(v_a_1459_);
lean_dec(v___x_1458_);
v___x_1461_ = lean_box(0);
v_isShared_1462_ = v_isSharedCheck_1489_;
goto v_resetjp_1460_;
}
v_resetjp_1460_:
{
if (lean_obj_tag(v_a_1459_) == 0)
{
lean_object* v___x_1463_; lean_object* v___x_1465_; 
lean_dec(v_n_1450_);
lean_dec(v_view_x3f_1449_);
lean_dec_ref(v_filter_1448_);
v___x_1463_ = lean_box(0);
if (v_isShared_1462_ == 0)
{
lean_ctor_set(v___x_1461_, 0, v___x_1463_);
v___x_1465_ = v___x_1461_;
goto v_reusejp_1464_;
}
else
{
lean_object* v_reuseFailAlloc_1466_; 
v_reuseFailAlloc_1466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1466_, 0, v___x_1463_);
v___x_1465_ = v_reuseFailAlloc_1466_;
goto v_reusejp_1464_;
}
v_reusejp_1464_:
{
return v___x_1465_;
}
}
else
{
lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; 
lean_dec_ref_known(v_a_1459_, 1);
lean_del_object(v___x_1461_);
v___x_1467_ = l_Lean_privateToUserName(v_n_1450_);
v___x_1468_ = l_Lean_Name_componentsRev(v___x_1467_);
v___x_1469_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21___closed__0));
v___x_1470_ = l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21_spec__29___redArg(v_n_u2080_1447_, v_filter_1448_, v_view_x3f_1449_, v___x_1468_, v___x_1469_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_);
lean_dec(v___x_1468_);
if (lean_obj_tag(v___x_1470_) == 0)
{
lean_object* v_a_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1480_; 
v_a_1471_ = lean_ctor_get(v___x_1470_, 0);
v_isSharedCheck_1480_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1480_ == 0)
{
v___x_1473_ = v___x_1470_;
v_isShared_1474_ = v_isSharedCheck_1480_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_a_1471_);
lean_dec(v___x_1470_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1480_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
lean_object* v_val_1475_; lean_object* v_fst_1476_; lean_object* v___x_1478_; 
v_val_1475_ = lean_ctor_get(v_a_1471_, 0);
lean_inc(v_val_1475_);
lean_dec(v_a_1471_);
v_fst_1476_ = lean_ctor_get(v_val_1475_, 0);
lean_inc(v_fst_1476_);
lean_dec(v_val_1475_);
if (v_isShared_1474_ == 0)
{
lean_ctor_set(v___x_1473_, 0, v_fst_1476_);
v___x_1478_ = v___x_1473_;
goto v_reusejp_1477_;
}
else
{
lean_object* v_reuseFailAlloc_1479_; 
v_reuseFailAlloc_1479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1479_, 0, v_fst_1476_);
v___x_1478_ = v_reuseFailAlloc_1479_;
goto v_reusejp_1477_;
}
v_reusejp_1477_:
{
return v___x_1478_;
}
}
}
else
{
lean_object* v_a_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1488_; 
v_a_1481_ = lean_ctor_get(v___x_1470_, 0);
v_isSharedCheck_1488_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1488_ == 0)
{
v___x_1483_ = v___x_1470_;
v_isShared_1484_ = v_isSharedCheck_1488_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_a_1481_);
lean_dec(v___x_1470_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1488_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
lean_object* v___x_1486_; 
if (v_isShared_1484_ == 0)
{
v___x_1486_ = v___x_1483_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v_a_1481_);
v___x_1486_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
return v___x_1486_;
}
}
}
}
}
}
else
{
lean_object* v_a_1490_; lean_object* v___x_1492_; uint8_t v_isShared_1493_; uint8_t v_isSharedCheck_1497_; 
lean_dec(v_n_1450_);
lean_dec(v_view_x3f_1449_);
lean_dec_ref(v_filter_1448_);
v_a_1490_ = lean_ctor_get(v___x_1458_, 0);
v_isSharedCheck_1497_ = !lean_is_exclusive(v___x_1458_);
if (v_isSharedCheck_1497_ == 0)
{
v___x_1492_ = v___x_1458_;
v_isShared_1493_ = v_isSharedCheck_1497_;
goto v_resetjp_1491_;
}
else
{
lean_inc(v_a_1490_);
lean_dec(v___x_1458_);
v___x_1492_ = lean_box(0);
v_isShared_1493_ = v_isSharedCheck_1497_;
goto v_resetjp_1491_;
}
v_resetjp_1491_:
{
lean_object* v___x_1495_; 
if (v_isShared_1493_ == 0)
{
v___x_1495_ = v___x_1492_;
goto v_reusejp_1494_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v_a_1490_);
v___x_1495_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1494_;
}
v_reusejp_1494_:
{
return v___x_1495_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21___boxed(lean_object* v_n_u2080_1501_, lean_object* v_filter_1502_, lean_object* v_view_x3f_1503_, lean_object* v_n_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_){
_start:
{
lean_object* v_res_1510_; 
v_res_1510_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21(v_n_u2080_1501_, v_filter_1502_, v_view_x3f_1503_, v_n_1504_, v___y_1505_, v___y_1506_, v___y_1507_, v___y_1508_);
lean_dec(v___y_1508_);
lean_dec_ref(v___y_1507_);
lean_dec(v___y_1506_);
lean_dec_ref(v___y_1505_);
lean_dec(v_n_u2080_1501_);
return v_res_1510_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__22(lean_object* v_n_u2080_1511_, lean_object* v_filter_1512_, lean_object* v_as_1513_, lean_object* v_i_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_){
_start:
{
lean_object* v___x_1520_; uint8_t v___x_1521_; 
v___x_1520_ = lean_array_get_size(v_as_1513_);
v___x_1521_ = lean_nat_dec_lt(v_i_1514_, v___x_1520_);
if (v___x_1521_ == 0)
{
lean_object* v___x_1522_; lean_object* v___x_1523_; 
lean_dec(v_i_1514_);
lean_dec_ref(v_filter_1512_);
v___x_1522_ = lean_box(0);
v___x_1523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1523_, 0, v___x_1522_);
return v___x_1523_;
}
else
{
lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; 
v___x_1524_ = lean_box(0);
v___x_1525_ = lean_array_fget_borrowed(v_as_1513_, v_i_1514_);
lean_inc(v___x_1525_);
lean_inc_ref(v_filter_1512_);
v___x_1526_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21(v_n_u2080_1511_, v_filter_1512_, v___x_1524_, v___x_1525_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_);
if (lean_obj_tag(v___x_1526_) == 0)
{
lean_object* v_a_1527_; 
v_a_1527_ = lean_ctor_get(v___x_1526_, 0);
lean_inc(v_a_1527_);
if (lean_obj_tag(v_a_1527_) == 0)
{
lean_object* v___x_1528_; lean_object* v___x_1529_; 
lean_dec_ref_known(v___x_1526_, 1);
v___x_1528_ = lean_unsigned_to_nat(1u);
v___x_1529_ = lean_nat_add(v_i_1514_, v___x_1528_);
lean_dec(v_i_1514_);
v_i_1514_ = v___x_1529_;
goto _start;
}
else
{
lean_dec_ref_known(v_a_1527_, 1);
lean_dec(v_i_1514_);
lean_dec_ref(v_filter_1512_);
return v___x_1526_;
}
}
else
{
lean_dec(v_i_1514_);
lean_dec_ref(v_filter_1512_);
return v___x_1526_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__22___boxed(lean_object* v_n_u2080_1531_, lean_object* v_filter_1532_, lean_object* v_as_1533_, lean_object* v_i_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_){
_start:
{
lean_object* v_res_1540_; 
v_res_1540_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__22(v_n_u2080_1531_, v_filter_1532_, v_as_1533_, v_i_1534_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_);
lean_dec(v___y_1538_);
lean_dec_ref(v___y_1537_);
lean_dec(v___y_1536_);
lean_dec_ref(v___y_1535_);
lean_dec_ref(v_as_1533_);
lean_dec(v_n_u2080_1531_);
return v_res_1540_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__23(lean_object* v_n_u2081_1541_, lean_object* v_as_1542_, size_t v_i_1543_, size_t v_stop_1544_, lean_object* v_b_1545_){
_start:
{
lean_object* v___y_1547_; uint8_t v___x_1551_; 
v___x_1551_ = lean_usize_dec_eq(v_i_1543_, v_stop_1544_);
if (v___x_1551_ == 0)
{
lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; uint8_t v___x_1555_; 
v___x_1552_ = lean_array_uget_borrowed(v_as_1542_, v_i_1543_);
v___x_1553_ = l_Lean_Name_getPrefix(v___x_1552_);
v___x_1554_ = l_Lean_Name_getPrefix(v_n_u2081_1541_);
v___x_1555_ = l_Lean_Name_isPrefixOf(v___x_1553_, v___x_1554_);
lean_dec(v___x_1554_);
lean_dec(v___x_1553_);
if (v___x_1555_ == 0)
{
v___y_1547_ = v_b_1545_;
goto v___jp_1546_;
}
else
{
lean_object* v___x_1556_; 
lean_inc(v___x_1552_);
v___x_1556_ = lean_array_push(v_b_1545_, v___x_1552_);
v___y_1547_ = v___x_1556_;
goto v___jp_1546_;
}
}
else
{
return v_b_1545_;
}
v___jp_1546_:
{
size_t v___x_1548_; size_t v___x_1549_; 
v___x_1548_ = ((size_t)1ULL);
v___x_1549_ = lean_usize_add(v_i_1543_, v___x_1548_);
v_i_1543_ = v___x_1549_;
v_b_1545_ = v___y_1547_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__23___boxed(lean_object* v_n_u2081_1557_, lean_object* v_as_1558_, lean_object* v_i_1559_, lean_object* v_stop_1560_, lean_object* v_b_1561_){
_start:
{
size_t v_i_boxed_1562_; size_t v_stop_boxed_1563_; lean_object* v_res_1564_; 
v_i_boxed_1562_ = lean_unbox_usize(v_i_1559_);
lean_dec(v_i_1559_);
v_stop_boxed_1563_ = lean_unbox_usize(v_stop_1560_);
lean_dec(v_stop_1560_);
v_res_1564_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__23(v_n_u2081_1557_, v_as_1558_, v_i_boxed_1562_, v_stop_boxed_1563_, v_b_1561_);
lean_dec_ref(v_as_1558_);
lean_dec(v_n_u2081_1557_);
return v_res_1564_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12(lean_object* v_n_u2080_1567_, uint8_t v_fullNames_1568_, uint8_t v_allowHorizAliases_1569_, lean_object* v_filter_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_){
_start:
{
lean_object* v_view_1576_; lean_object* v_name_1577_; lean_object* v_n_u2081_1578_; 
lean_inc(v_n_u2080_1567_);
v_view_1576_ = l_Lean_extractMacroScopes(v_n_u2080_1567_);
v_name_1577_ = lean_ctor_get(v_view_1576_, 0);
lean_inc(v_name_1577_);
v_n_u2081_1578_ = l_Lean_privateToUserName(v_name_1577_);
if (v_fullNames_1568_ == 0)
{
lean_object* v___x_1579_; lean_object* v_aliases_1581_; lean_object* v_env_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; 
v___x_1579_ = lean_st_ref_get(v___y_1574_);
v_env_1596_ = lean_ctor_get(v___x_1579_, 0);
lean_inc_ref(v_env_1596_);
lean_dec(v___x_1579_);
lean_inc(v_n_u2080_1567_);
v___x_1597_ = l_Lean_getRevAliases(v_env_1596_, v_n_u2080_1567_);
v___x_1598_ = lean_array_mk(v___x_1597_);
if (v_allowHorizAliases_1569_ == 0)
{
lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; uint8_t v___x_1602_; 
v___x_1599_ = lean_unsigned_to_nat(0u);
v___x_1600_ = lean_array_get_size(v___x_1598_);
v___x_1601_ = ((lean_object*)(l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12___closed__0));
v___x_1602_ = lean_nat_dec_lt(v___x_1599_, v___x_1600_);
if (v___x_1602_ == 0)
{
lean_dec_ref(v___x_1598_);
v_aliases_1581_ = v___x_1601_;
goto v___jp_1580_;
}
else
{
size_t v___x_1603_; size_t v___x_1604_; lean_object* v___x_1605_; 
v___x_1603_ = ((size_t)0ULL);
v___x_1604_ = lean_usize_of_nat(v___x_1600_);
v___x_1605_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__23(v_n_u2081_1578_, v___x_1598_, v___x_1603_, v___x_1604_, v___x_1601_);
lean_dec_ref(v___x_1598_);
v_aliases_1581_ = v___x_1605_;
goto v___jp_1580_;
}
}
else
{
v_aliases_1581_ = v___x_1598_;
goto v___jp_1580_;
}
v___jp_1580_:
{
lean_object* v___x_1582_; lean_object* v___x_1583_; 
v___x_1582_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_filter_1570_);
v___x_1583_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__22(v_n_u2080_1567_, v_filter_1570_, v_aliases_1581_, v___x_1582_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_);
lean_dec_ref(v_aliases_1581_);
if (lean_obj_tag(v___x_1583_) == 0)
{
lean_object* v_a_1584_; 
v_a_1584_ = lean_ctor_get(v___x_1583_, 0);
lean_inc(v_a_1584_);
if (lean_obj_tag(v_a_1584_) == 0)
{
lean_object* v___x_1586_; uint8_t v_isShared_1587_; uint8_t v_isSharedCheck_1594_; 
v_isSharedCheck_1594_ = !lean_is_exclusive(v___x_1583_);
if (v_isSharedCheck_1594_ == 0)
{
lean_object* v_unused_1595_; 
v_unused_1595_ = lean_ctor_get(v___x_1583_, 0);
lean_dec(v_unused_1595_);
v___x_1586_ = v___x_1583_;
v_isShared_1587_ = v_isSharedCheck_1594_;
goto v_resetjp_1585_;
}
else
{
lean_dec(v___x_1583_);
v___x_1586_ = lean_box(0);
v_isShared_1587_ = v_isSharedCheck_1594_;
goto v_resetjp_1585_;
}
v_resetjp_1585_:
{
lean_object* v___x_1589_; 
if (v_isShared_1587_ == 0)
{
lean_ctor_set_tag(v___x_1586_, 1);
lean_ctor_set(v___x_1586_, 0, v_view_1576_);
v___x_1589_ = v___x_1586_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1593_; 
v_reuseFailAlloc_1593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1593_, 0, v_view_1576_);
v___x_1589_ = v_reuseFailAlloc_1593_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; 
v___x_1590_ = l_Lean_rootNamespace;
v___x_1591_ = l_Lean_Name_append(v___x_1590_, v_n_u2081_1578_);
v___x_1592_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21(v_n_u2080_1567_, v_filter_1570_, v___x_1589_, v___x_1591_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_);
lean_dec(v_n_u2080_1567_);
return v___x_1592_;
}
}
}
else
{
lean_dec_ref_known(v_a_1584_, 1);
lean_dec(v_n_u2081_1578_);
lean_dec_ref(v_view_1576_);
lean_dec_ref(v_filter_1570_);
lean_dec(v_n_u2080_1567_);
return v___x_1583_;
}
}
else
{
lean_dec(v_n_u2081_1578_);
lean_dec_ref(v_view_1576_);
lean_dec_ref(v_filter_1570_);
lean_dec(v_n_u2080_1567_);
return v___x_1583_;
}
}
}
else
{
lean_object* v___x_1606_; lean_object* v___x_1607_; 
v___x_1606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1606_, 0, v_view_1576_);
lean_inc(v_n_u2081_1578_);
lean_inc_ref(v___x_1606_);
lean_inc_ref(v_filter_1570_);
v___x_1607_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24(v_n_u2080_1567_, v_filter_1570_, v___x_1606_, v_n_u2081_1578_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_);
if (lean_obj_tag(v___x_1607_) == 0)
{
lean_object* v_a_1608_; 
v_a_1608_ = lean_ctor_get(v___x_1607_, 0);
lean_inc(v_a_1608_);
if (lean_obj_tag(v_a_1608_) == 0)
{
lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; 
lean_dec_ref_known(v___x_1607_, 1);
v___x_1609_ = l_Lean_rootNamespace;
v___x_1610_ = l_Lean_Name_append(v___x_1609_, v_n_u2081_1578_);
v___x_1611_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24(v_n_u2080_1567_, v_filter_1570_, v___x_1606_, v___x_1610_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_);
lean_dec(v_n_u2080_1567_);
return v___x_1611_;
}
else
{
lean_dec_ref_known(v_a_1608_, 1);
lean_dec_ref_known(v___x_1606_, 1);
lean_dec(v_n_u2081_1578_);
lean_dec_ref(v_filter_1570_);
lean_dec(v_n_u2080_1567_);
return v___x_1607_;
}
}
else
{
lean_dec_ref_known(v___x_1606_, 1);
lean_dec(v_n_u2081_1578_);
lean_dec_ref(v_filter_1570_);
lean_dec(v_n_u2080_1567_);
return v___x_1607_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12___boxed(lean_object* v_n_u2080_1612_, lean_object* v_fullNames_1613_, lean_object* v_allowHorizAliases_1614_, lean_object* v_filter_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_){
_start:
{
uint8_t v_fullNames_boxed_1621_; uint8_t v_allowHorizAliases_boxed_1622_; lean_object* v_res_1623_; 
v_fullNames_boxed_1621_ = lean_unbox(v_fullNames_1613_);
v_allowHorizAliases_boxed_1622_ = lean_unbox(v_allowHorizAliases_1614_);
v_res_1623_ = l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12(v_n_u2080_1612_, v_fullNames_boxed_1621_, v_allowHorizAliases_boxed_1622_, v_filter_1615_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_);
lean_dec(v___y_1619_);
lean_dec_ref(v___y_1618_);
lean_dec(v___y_1617_);
lean_dec_ref(v___y_1616_);
return v_res_1623_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5(lean_object* v_n_u2080_1627_, uint8_t v_fullNames_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_){
_start:
{
uint8_t v___x_1634_; lean_object* v___f_1635_; lean_object* v___x_1636_; 
v___x_1634_ = 0;
v___f_1635_ = ((lean_object*)(l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5___closed__0));
v___x_1636_ = l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12(v_n_u2080_1627_, v_fullNames_1628_, v___x_1634_, v___f_1635_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_);
return v___x_1636_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5___boxed(lean_object* v_n_u2080_1637_, lean_object* v_fullNames_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_){
_start:
{
uint8_t v_fullNames_boxed_1644_; lean_object* v_res_1645_; 
v_fullNames_boxed_1644_ = lean_unbox(v_fullNames_1638_);
v_res_1645_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5(v_n_u2080_1637_, v_fullNames_boxed_1644_, v___y_1639_, v___y_1640_, v___y_1641_, v___y_1642_);
lean_dec(v___y_1642_);
lean_dec_ref(v___y_1641_);
lean_dec(v___y_1640_);
lean_dec_ref(v___y_1639_);
return v_res_1645_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1646_; 
v___x_1646_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1646_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1647_; lean_object* v___x_1648_; 
v___x_1647_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_1648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1648_, 0, v___x_1647_);
return v___x_1648_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; 
v___x_1649_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_1650_ = lean_unsigned_to_nat(0u);
v___x_1651_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1651_, 0, v___x_1650_);
lean_ctor_set(v___x_1651_, 1, v___x_1650_);
lean_ctor_set(v___x_1651_, 2, v___x_1650_);
lean_ctor_set(v___x_1651_, 3, v___x_1650_);
lean_ctor_set(v___x_1651_, 4, v___x_1649_);
lean_ctor_set(v___x_1651_, 5, v___x_1649_);
lean_ctor_set(v___x_1651_, 6, v___x_1649_);
lean_ctor_set(v___x_1651_, 7, v___x_1649_);
lean_ctor_set(v___x_1651_, 8, v___x_1649_);
lean_ctor_set(v___x_1651_, 9, v___x_1649_);
lean_ctor_set(v___x_1651_, 10, v___x_1649_);
return v___x_1651_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; 
v___x_1652_ = lean_unsigned_to_nat(32u);
v___x_1653_ = lean_mk_empty_array_with_capacity(v___x_1652_);
v___x_1654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1654_, 0, v___x_1653_);
return v___x_1654_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; 
v___x_1655_ = ((size_t)5ULL);
v___x_1656_ = lean_unsigned_to_nat(0u);
v___x_1657_ = lean_unsigned_to_nat(32u);
v___x_1658_ = lean_mk_empty_array_with_capacity(v___x_1657_);
v___x_1659_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__3);
v___x_1660_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1660_, 0, v___x_1659_);
lean_ctor_set(v___x_1660_, 1, v___x_1658_);
lean_ctor_set(v___x_1660_, 2, v___x_1656_);
lean_ctor_set(v___x_1660_, 3, v___x_1656_);
lean_ctor_set_usize(v___x_1660_, 4, v___x_1655_);
return v___x_1660_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; 
v___x_1661_ = lean_box(1);
v___x_1662_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__4);
v___x_1663_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_1664_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1664_, 0, v___x_1663_);
lean_ctor_set(v___x_1664_, 1, v___x_1662_);
lean_ctor_set(v___x_1664_, 2, v___x_1661_);
return v___x_1664_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_msgData_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_){
_start:
{
lean_object* v___x_1669_; lean_object* v_toCold_1670_; lean_object* v_env_1671_; lean_object* v_options_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; 
v___x_1669_ = lean_st_ref_get(v___y_1667_);
v_toCold_1670_ = lean_ctor_get(v___y_1666_, 0);
v_env_1671_ = lean_ctor_get(v___x_1669_, 0);
lean_inc_ref(v_env_1671_);
lean_dec(v___x_1669_);
v_options_1672_ = lean_ctor_get(v_toCold_1670_, 2);
v___x_1673_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__2);
v___x_1674_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__5);
lean_inc_ref(v_options_1672_);
v___x_1675_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1675_, 0, v_env_1671_);
lean_ctor_set(v___x_1675_, 1, v___x_1673_);
lean_ctor_set(v___x_1675_, 2, v___x_1674_);
lean_ctor_set(v___x_1675_, 3, v_options_1672_);
v___x_1676_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1676_, 0, v___x_1675_);
lean_ctor_set(v___x_1676_, 1, v_msgData_1665_);
v___x_1677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1677_, 0, v___x_1676_);
return v___x_1677_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_msgData_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_){
_start:
{
lean_object* v_res_1682_; 
v_res_1682_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0(v_msgData_1678_, v___y_1679_, v___y_1680_);
lean_dec(v___y_1680_);
lean_dec_ref(v___y_1679_);
return v_res_1682_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5(lean_object* v_ref_1683_, lean_object* v_msgData_1684_, uint8_t v_severity_1685_, uint8_t v_isSilent_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_){
_start:
{
lean_object* v___y_1691_; lean_object* v___y_1692_; lean_object* v___y_1693_; lean_object* v___y_1694_; uint8_t v___y_1695_; uint8_t v___y_1696_; lean_object* v___y_1697_; lean_object* v_currNamespace_1698_; lean_object* v_openDecls_1699_; lean_object* v___y_1700_; lean_object* v___y_1726_; lean_object* v___y_1727_; lean_object* v___y_1728_; lean_object* v___y_1729_; uint8_t v___y_1730_; lean_object* v___y_1731_; lean_object* v___y_1732_; uint8_t v___y_1733_; uint8_t v___y_1734_; lean_object* v___y_1735_; lean_object* v___y_1753_; lean_object* v___y_1754_; lean_object* v___y_1755_; lean_object* v___y_1756_; uint8_t v___y_1757_; lean_object* v___y_1758_; lean_object* v___y_1759_; uint8_t v___y_1760_; uint8_t v___y_1761_; lean_object* v___y_1762_; lean_object* v___y_1766_; lean_object* v___y_1767_; lean_object* v___y_1768_; lean_object* v___y_1769_; uint8_t v___y_1770_; lean_object* v___y_1771_; lean_object* v___y_1772_; uint8_t v___y_1773_; uint8_t v___y_1774_; uint8_t v___x_1779_; lean_object* v___y_1781_; lean_object* v___y_1782_; lean_object* v___y_1783_; lean_object* v___y_1784_; lean_object* v___y_1785_; uint8_t v___y_1786_; lean_object* v___y_1787_; uint8_t v___y_1788_; uint8_t v___y_1789_; uint8_t v___y_1791_; uint8_t v___x_1809_; 
v___x_1779_ = 2;
v___x_1809_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1685_, v___x_1779_);
if (v___x_1809_ == 0)
{
v___y_1791_ = v___x_1809_;
goto v___jp_1790_;
}
else
{
uint8_t v___x_1810_; 
lean_inc_ref(v_msgData_1684_);
v___x_1810_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1684_);
v___y_1791_ = v___x_1810_;
goto v___jp_1790_;
}
v___jp_1690_:
{
lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v_env_1705_; lean_object* v_nextMacroScope_1706_; lean_object* v_ngen_1707_; lean_object* v_auxDeclNGen_1708_; lean_object* v_traceState_1709_; lean_object* v_cache_1710_; lean_object* v_messages_1711_; lean_object* v_infoState_1712_; lean_object* v_snapshotTasks_1713_; lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1724_; 
lean_inc(v_openDecls_1699_);
lean_inc(v_currNamespace_1698_);
v___x_1701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1701_, 0, v_currNamespace_1698_);
lean_ctor_set(v___x_1701_, 1, v_openDecls_1699_);
v___x_1702_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1702_, 0, v___x_1701_);
lean_ctor_set(v___x_1702_, 1, v___y_1694_);
lean_inc_ref(v___y_1691_);
lean_inc_ref(v___y_1693_);
v___x_1703_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1703_, 0, v___y_1693_);
lean_ctor_set(v___x_1703_, 1, v___y_1697_);
lean_ctor_set(v___x_1703_, 2, v___y_1692_);
lean_ctor_set(v___x_1703_, 3, v___y_1691_);
lean_ctor_set(v___x_1703_, 4, v___x_1702_);
lean_ctor_set_uint8(v___x_1703_, sizeof(void*)*5, v___y_1696_);
lean_ctor_set_uint8(v___x_1703_, sizeof(void*)*5 + 1, v___y_1695_);
lean_ctor_set_uint8(v___x_1703_, sizeof(void*)*5 + 2, v_isSilent_1686_);
v___x_1704_ = lean_st_ref_take(v___y_1700_);
v_env_1705_ = lean_ctor_get(v___x_1704_, 0);
v_nextMacroScope_1706_ = lean_ctor_get(v___x_1704_, 1);
v_ngen_1707_ = lean_ctor_get(v___x_1704_, 2);
v_auxDeclNGen_1708_ = lean_ctor_get(v___x_1704_, 3);
v_traceState_1709_ = lean_ctor_get(v___x_1704_, 4);
v_cache_1710_ = lean_ctor_get(v___x_1704_, 5);
v_messages_1711_ = lean_ctor_get(v___x_1704_, 6);
v_infoState_1712_ = lean_ctor_get(v___x_1704_, 7);
v_snapshotTasks_1713_ = lean_ctor_get(v___x_1704_, 8);
v_isSharedCheck_1724_ = !lean_is_exclusive(v___x_1704_);
if (v_isSharedCheck_1724_ == 0)
{
v___x_1715_ = v___x_1704_;
v_isShared_1716_ = v_isSharedCheck_1724_;
goto v_resetjp_1714_;
}
else
{
lean_inc(v_snapshotTasks_1713_);
lean_inc(v_infoState_1712_);
lean_inc(v_messages_1711_);
lean_inc(v_cache_1710_);
lean_inc(v_traceState_1709_);
lean_inc(v_auxDeclNGen_1708_);
lean_inc(v_ngen_1707_);
lean_inc(v_nextMacroScope_1706_);
lean_inc(v_env_1705_);
lean_dec(v___x_1704_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1724_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1720_; 
v___x_1717_ = lean_box(0);
v___x_1718_ = l_Lean_MessageLog_add(v___x_1703_, v_messages_1711_);
if (v_isShared_1716_ == 0)
{
lean_ctor_set(v___x_1715_, 6, v___x_1718_);
v___x_1720_ = v___x_1715_;
goto v_reusejp_1719_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v_env_1705_);
lean_ctor_set(v_reuseFailAlloc_1723_, 1, v_nextMacroScope_1706_);
lean_ctor_set(v_reuseFailAlloc_1723_, 2, v_ngen_1707_);
lean_ctor_set(v_reuseFailAlloc_1723_, 3, v_auxDeclNGen_1708_);
lean_ctor_set(v_reuseFailAlloc_1723_, 4, v_traceState_1709_);
lean_ctor_set(v_reuseFailAlloc_1723_, 5, v_cache_1710_);
lean_ctor_set(v_reuseFailAlloc_1723_, 6, v___x_1718_);
lean_ctor_set(v_reuseFailAlloc_1723_, 7, v_infoState_1712_);
lean_ctor_set(v_reuseFailAlloc_1723_, 8, v_snapshotTasks_1713_);
v___x_1720_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1719_;
}
v_reusejp_1719_:
{
lean_object* v___x_1721_; lean_object* v___x_1722_; 
v___x_1721_ = lean_st_ref_put(v___y_1700_, v___x_1720_);
v___x_1722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1722_, 0, v___x_1717_);
return v___x_1722_;
}
}
}
v___jp_1725_:
{
lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v_a_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1751_; 
v___x_1736_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1684_);
v___x_1737_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0(v___x_1736_, v___y_1687_, v___y_1688_);
v_a_1738_ = lean_ctor_get(v___x_1737_, 0);
v_isSharedCheck_1751_ = !lean_is_exclusive(v___x_1737_);
if (v_isSharedCheck_1751_ == 0)
{
v___x_1740_ = v___x_1737_;
v_isShared_1741_ = v_isSharedCheck_1751_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_a_1738_);
lean_dec(v___x_1737_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1751_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; 
lean_inc_ref_n(v___y_1729_, 2);
v___x_1742_ = l_Lean_FileMap_toPosition(v___y_1729_, v___y_1732_);
lean_dec(v___y_1732_);
v___x_1743_ = l_Lean_FileMap_toPosition(v___y_1729_, v___y_1735_);
lean_dec(v___y_1735_);
v___x_1744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1744_, 0, v___x_1743_);
v___x_1745_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41_spec__43___closed__0));
if (v___y_1730_ == 0)
{
lean_del_object(v___x_1740_);
lean_dec_ref(v___y_1726_);
v___y_1691_ = v___x_1745_;
v___y_1692_ = v___x_1744_;
v___y_1693_ = v___y_1731_;
v___y_1694_ = v_a_1738_;
v___y_1695_ = v___y_1733_;
v___y_1696_ = v___y_1734_;
v___y_1697_ = v___x_1742_;
v_currNamespace_1698_ = v___y_1728_;
v_openDecls_1699_ = v___y_1727_;
v___y_1700_ = v___y_1688_;
goto v___jp_1690_;
}
else
{
uint8_t v___x_1746_; 
lean_inc(v_a_1738_);
v___x_1746_ = l_Lean_MessageData_hasTag(v___y_1726_, v_a_1738_);
if (v___x_1746_ == 0)
{
lean_object* v___x_1747_; lean_object* v___x_1749_; 
lean_dec_ref_known(v___x_1744_, 1);
lean_dec_ref(v___x_1742_);
lean_dec(v_a_1738_);
v___x_1747_ = lean_box(0);
if (v_isShared_1741_ == 0)
{
lean_ctor_set(v___x_1740_, 0, v___x_1747_);
v___x_1749_ = v___x_1740_;
goto v_reusejp_1748_;
}
else
{
lean_object* v_reuseFailAlloc_1750_; 
v_reuseFailAlloc_1750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1750_, 0, v___x_1747_);
v___x_1749_ = v_reuseFailAlloc_1750_;
goto v_reusejp_1748_;
}
v_reusejp_1748_:
{
return v___x_1749_;
}
}
else
{
lean_del_object(v___x_1740_);
v___y_1691_ = v___x_1745_;
v___y_1692_ = v___x_1744_;
v___y_1693_ = v___y_1731_;
v___y_1694_ = v_a_1738_;
v___y_1695_ = v___y_1733_;
v___y_1696_ = v___y_1734_;
v___y_1697_ = v___x_1742_;
v_currNamespace_1698_ = v___y_1728_;
v_openDecls_1699_ = v___y_1727_;
v___y_1700_ = v___y_1688_;
goto v___jp_1690_;
}
}
}
}
v___jp_1752_:
{
lean_object* v___x_1763_; 
v___x_1763_ = l_Lean_Syntax_getTailPos_x3f(v___y_1759_, v___y_1761_);
lean_dec(v___y_1759_);
if (lean_obj_tag(v___x_1763_) == 0)
{
lean_inc(v___y_1762_);
v___y_1726_ = v___y_1753_;
v___y_1727_ = v___y_1754_;
v___y_1728_ = v___y_1755_;
v___y_1729_ = v___y_1756_;
v___y_1730_ = v___y_1757_;
v___y_1731_ = v___y_1758_;
v___y_1732_ = v___y_1762_;
v___y_1733_ = v___y_1760_;
v___y_1734_ = v___y_1761_;
v___y_1735_ = v___y_1762_;
goto v___jp_1725_;
}
else
{
lean_object* v_val_1764_; 
v_val_1764_ = lean_ctor_get(v___x_1763_, 0);
lean_inc(v_val_1764_);
lean_dec_ref_known(v___x_1763_, 1);
v___y_1726_ = v___y_1753_;
v___y_1727_ = v___y_1754_;
v___y_1728_ = v___y_1755_;
v___y_1729_ = v___y_1756_;
v___y_1730_ = v___y_1757_;
v___y_1731_ = v___y_1758_;
v___y_1732_ = v___y_1762_;
v___y_1733_ = v___y_1760_;
v___y_1734_ = v___y_1761_;
v___y_1735_ = v_val_1764_;
goto v___jp_1725_;
}
}
v___jp_1765_:
{
lean_object* v_ref_1775_; lean_object* v___x_1776_; 
v_ref_1775_ = l_Lean_replaceRef(v_ref_1683_, v___y_1772_);
v___x_1776_ = l_Lean_Syntax_getPos_x3f(v_ref_1775_, v___y_1773_);
if (lean_obj_tag(v___x_1776_) == 0)
{
lean_object* v___x_1777_; 
v___x_1777_ = lean_unsigned_to_nat(0u);
v___y_1753_ = v___y_1766_;
v___y_1754_ = v___y_1767_;
v___y_1755_ = v___y_1768_;
v___y_1756_ = v___y_1769_;
v___y_1757_ = v___y_1770_;
v___y_1758_ = v___y_1771_;
v___y_1759_ = v_ref_1775_;
v___y_1760_ = v___y_1774_;
v___y_1761_ = v___y_1773_;
v___y_1762_ = v___x_1777_;
goto v___jp_1752_;
}
else
{
lean_object* v_val_1778_; 
v_val_1778_ = lean_ctor_get(v___x_1776_, 0);
lean_inc(v_val_1778_);
lean_dec_ref_known(v___x_1776_, 1);
v___y_1753_ = v___y_1766_;
v___y_1754_ = v___y_1767_;
v___y_1755_ = v___y_1768_;
v___y_1756_ = v___y_1769_;
v___y_1757_ = v___y_1770_;
v___y_1758_ = v___y_1771_;
v___y_1759_ = v_ref_1775_;
v___y_1760_ = v___y_1774_;
v___y_1761_ = v___y_1773_;
v___y_1762_ = v_val_1778_;
goto v___jp_1752_;
}
}
v___jp_1780_:
{
if (v___y_1789_ == 0)
{
v___y_1766_ = v___y_1782_;
v___y_1767_ = v___y_1784_;
v___y_1768_ = v___y_1785_;
v___y_1769_ = v___y_1781_;
v___y_1770_ = v___y_1786_;
v___y_1771_ = v___y_1783_;
v___y_1772_ = v___y_1787_;
v___y_1773_ = v___y_1788_;
v___y_1774_ = v_severity_1685_;
goto v___jp_1765_;
}
else
{
v___y_1766_ = v___y_1782_;
v___y_1767_ = v___y_1784_;
v___y_1768_ = v___y_1785_;
v___y_1769_ = v___y_1781_;
v___y_1770_ = v___y_1786_;
v___y_1771_ = v___y_1783_;
v___y_1772_ = v___y_1787_;
v___y_1773_ = v___y_1788_;
v___y_1774_ = v___x_1779_;
goto v___jp_1765_;
}
}
v___jp_1790_:
{
if (v___y_1791_ == 0)
{
lean_object* v_toCold_1792_; lean_object* v_ref_1793_; uint8_t v_suppressElabErrors_1794_; lean_object* v_fileName_1795_; lean_object* v_fileMap_1796_; lean_object* v_options_1797_; lean_object* v_currNamespace_1798_; lean_object* v_openDecls_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___f_1802_; uint8_t v___x_1803_; uint8_t v___x_1804_; 
v_toCold_1792_ = lean_ctor_get(v___y_1687_, 0);
v_ref_1793_ = lean_ctor_get(v___y_1687_, 2);
v_suppressElabErrors_1794_ = lean_ctor_get_uint8(v___y_1687_, sizeof(void*)*3 + 1);
v_fileName_1795_ = lean_ctor_get(v_toCold_1792_, 0);
v_fileMap_1796_ = lean_ctor_get(v_toCold_1792_, 1);
v_options_1797_ = lean_ctor_get(v_toCold_1792_, 2);
v_currNamespace_1798_ = lean_ctor_get(v_toCold_1792_, 4);
v_openDecls_1799_ = lean_ctor_get(v_toCold_1792_, 5);
v___x_1800_ = lean_box(v_suppressElabErrors_1794_);
v___x_1801_ = lean_box(v___y_1791_);
v___f_1802_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1802_, 0, v___x_1800_);
lean_closure_set(v___f_1802_, 1, v___x_1801_);
v___x_1803_ = 1;
v___x_1804_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1685_, v___x_1803_);
if (v___x_1804_ == 0)
{
v___y_1781_ = v_fileMap_1796_;
v___y_1782_ = v___f_1802_;
v___y_1783_ = v_fileName_1795_;
v___y_1784_ = v_openDecls_1799_;
v___y_1785_ = v_currNamespace_1798_;
v___y_1786_ = v_suppressElabErrors_1794_;
v___y_1787_ = v_ref_1793_;
v___y_1788_ = v___y_1791_;
v___y_1789_ = v___x_1804_;
goto v___jp_1780_;
}
else
{
lean_object* v___x_1805_; uint8_t v___x_1806_; 
v___x_1805_ = l_Lean_warningAsError;
v___x_1806_ = l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__4(v_options_1797_, v___x_1805_);
v___y_1781_ = v_fileMap_1796_;
v___y_1782_ = v___f_1802_;
v___y_1783_ = v_fileName_1795_;
v___y_1784_ = v_openDecls_1799_;
v___y_1785_ = v_currNamespace_1798_;
v___y_1786_ = v_suppressElabErrors_1794_;
v___y_1787_ = v_ref_1793_;
v___y_1788_ = v___y_1791_;
v___y_1789_ = v___x_1806_;
goto v___jp_1780_;
}
}
else
{
lean_object* v___x_1807_; lean_object* v___x_1808_; 
lean_dec_ref(v_msgData_1684_);
v___x_1807_ = lean_box(0);
v___x_1808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1808_, 0, v___x_1807_);
return v___x_1808_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5___boxed(lean_object* v_ref_1811_, lean_object* v_msgData_1812_, lean_object* v_severity_1813_, lean_object* v_isSilent_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_){
_start:
{
uint8_t v_severity_boxed_1818_; uint8_t v_isSilent_boxed_1819_; lean_object* v_res_1820_; 
v_severity_boxed_1818_ = lean_unbox(v_severity_1813_);
v_isSilent_boxed_1819_ = lean_unbox(v_isSilent_1814_);
v_res_1820_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5(v_ref_1811_, v_msgData_1812_, v_severity_boxed_1818_, v_isSilent_boxed_1819_, v___y_1815_, v___y_1816_);
lean_dec(v___y_1816_);
lean_dec_ref(v___y_1815_);
lean_dec(v_ref_1811_);
return v_res_1820_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_msgData_1821_, uint8_t v_severity_1822_, uint8_t v_isSilent_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_){
_start:
{
lean_object* v_ref_1827_; lean_object* v___x_1828_; 
v_ref_1827_ = lean_ctor_get(v___y_1824_, 2);
v___x_1828_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2_spec__5(v_ref_1827_, v_msgData_1821_, v_severity_1822_, v_isSilent_1823_, v___y_1824_, v___y_1825_);
return v___x_1828_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_msgData_1829_, lean_object* v_severity_1830_, lean_object* v_isSilent_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_){
_start:
{
uint8_t v_severity_boxed_1835_; uint8_t v_isSilent_boxed_1836_; lean_object* v_res_1837_; 
v_severity_boxed_1835_ = lean_unbox(v_severity_1830_);
v_isSilent_boxed_1836_ = lean_unbox(v_isSilent_1831_);
v_res_1837_ = l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2(v_msgData_1829_, v_severity_boxed_1835_, v_isSilent_boxed_1836_, v___y_1832_, v___y_1833_);
lean_dec(v___y_1833_);
lean_dec_ref(v___y_1832_);
return v_res_1837_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1(lean_object* v_msgData_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_){
_start:
{
uint8_t v___x_1842_; uint8_t v___x_1843_; lean_object* v___x_1844_; 
v___x_1842_ = 1;
v___x_1843_ = 0;
v___x_1844_ = l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1_spec__2(v_msgData_1838_, v___x_1842_, v___x_1843_, v___y_1839_, v___y_1840_);
return v___x_1844_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1___boxed(lean_object* v_msgData_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_){
_start:
{
lean_object* v_res_1849_; 
v_res_1849_ = l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1(v_msgData_1845_, v___y_1846_, v___y_1847_);
lean_dec(v___y_1847_);
lean_dec_ref(v___y_1846_);
return v_res_1849_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__3_spec__8___redArg(lean_object* v_o_1850_, lean_object* v___y_1851_){
_start:
{
lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v_env_1855_; lean_object* v___x_1856_; lean_object* v_toEnvExtension_1857_; lean_object* v_asyncMode_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v_merged_1861_; lean_object* v___x_1863_; uint8_t v_isShared_1864_; uint8_t v_isSharedCheck_1869_; 
v___x_1853_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_1854_ = lean_st_ref_get(v___y_1851_);
v_env_1855_ = lean_ctor_get(v___x_1854_, 0);
lean_inc_ref(v_env_1855_);
lean_dec(v___x_1854_);
v___x_1856_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_1857_ = lean_ctor_get(v___x_1856_, 0);
v_asyncMode_1858_ = lean_ctor_get(v_toEnvExtension_1857_, 2);
v___x_1859_ = lean_box(0);
v___x_1860_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1853_, v___x_1856_, v_env_1855_, v_asyncMode_1858_, v___x_1859_);
v_merged_1861_ = lean_ctor_get(v___x_1860_, 0);
v_isSharedCheck_1869_ = !lean_is_exclusive(v___x_1860_);
if (v_isSharedCheck_1869_ == 0)
{
lean_object* v_unused_1870_; 
v_unused_1870_ = lean_ctor_get(v___x_1860_, 1);
lean_dec(v_unused_1870_);
v___x_1863_ = v___x_1860_;
v_isShared_1864_ = v_isSharedCheck_1869_;
goto v_resetjp_1862_;
}
else
{
lean_inc(v_merged_1861_);
lean_dec(v___x_1860_);
v___x_1863_ = lean_box(0);
v_isShared_1864_ = v_isSharedCheck_1869_;
goto v_resetjp_1862_;
}
v_resetjp_1862_:
{
lean_object* v___x_1866_; 
if (v_isShared_1864_ == 0)
{
lean_ctor_set(v___x_1863_, 1, v_merged_1861_);
lean_ctor_set(v___x_1863_, 0, v_o_1850_);
v___x_1866_ = v___x_1863_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1868_; 
v_reuseFailAlloc_1868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1868_, 0, v_o_1850_);
lean_ctor_set(v_reuseFailAlloc_1868_, 1, v_merged_1861_);
v___x_1866_ = v_reuseFailAlloc_1868_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
lean_object* v___x_1867_; 
v___x_1867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1867_, 0, v___x_1866_);
return v___x_1867_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__3_spec__8___redArg___boxed(lean_object* v_o_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_){
_start:
{
lean_object* v_res_1874_; 
v_res_1874_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__3_spec__8___redArg(v_o_1871_, v___y_1872_);
lean_dec(v___y_1872_);
return v_res_1874_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__3(lean_object* v___y_1875_, lean_object* v___y_1876_){
_start:
{
lean_object* v_toCold_1878_; lean_object* v_options_1879_; lean_object* v___x_1880_; 
v_toCold_1878_ = lean_ctor_get(v___y_1875_, 0);
v_options_1879_ = lean_ctor_get(v_toCold_1878_, 2);
lean_inc_ref(v_options_1879_);
v___x_1880_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__3_spec__8___redArg(v_options_1879_, v___y_1876_);
return v___x_1880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__3___boxed(lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_){
_start:
{
lean_object* v_res_1884_; 
v_res_1884_ = l_Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__3(v___y_1881_, v___y_1882_);
lean_dec(v___y_1882_);
lean_dec_ref(v___y_1881_);
return v_res_1884_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0___redArg(lean_object* v_msg_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_){
_start:
{
lean_object* v_ref_1889_; lean_object* v___x_1890_; lean_object* v_a_1891_; lean_object* v___x_1893_; uint8_t v_isShared_1894_; uint8_t v_isSharedCheck_1899_; 
v_ref_1889_ = lean_ctor_get(v___y_1886_, 2);
v___x_1890_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0(v_msg_1885_, v___y_1886_, v___y_1887_);
v_a_1891_ = lean_ctor_get(v___x_1890_, 0);
v_isSharedCheck_1899_ = !lean_is_exclusive(v___x_1890_);
if (v_isSharedCheck_1899_ == 0)
{
v___x_1893_ = v___x_1890_;
v_isShared_1894_ = v_isSharedCheck_1899_;
goto v_resetjp_1892_;
}
else
{
lean_inc(v_a_1891_);
lean_dec(v___x_1890_);
v___x_1893_ = lean_box(0);
v_isShared_1894_ = v_isSharedCheck_1899_;
goto v_resetjp_1892_;
}
v_resetjp_1892_:
{
lean_object* v___x_1895_; lean_object* v___x_1897_; 
lean_inc(v_ref_1889_);
v___x_1895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1895_, 0, v_ref_1889_);
lean_ctor_set(v___x_1895_, 1, v_a_1891_);
if (v_isShared_1894_ == 0)
{
lean_ctor_set_tag(v___x_1893_, 1);
lean_ctor_set(v___x_1893_, 0, v___x_1895_);
v___x_1897_ = v___x_1893_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1898_; 
v_reuseFailAlloc_1898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1898_, 0, v___x_1895_);
v___x_1897_ = v_reuseFailAlloc_1898_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
return v___x_1897_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_msg_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_){
_start:
{
lean_object* v_res_1904_; 
v_res_1904_ = l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0___redArg(v_msg_1900_, v___y_1901_, v___y_1902_);
lean_dec(v___y_1902_);
lean_dec_ref(v___y_1901_);
return v_res_1904_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12_spec__17___redArg(lean_object* v_keys_1905_, lean_object* v_i_1906_, lean_object* v_k_1907_){
_start:
{
lean_object* v___x_1908_; uint8_t v___x_1909_; 
v___x_1908_ = lean_array_get_size(v_keys_1905_);
v___x_1909_ = lean_nat_dec_lt(v_i_1906_, v___x_1908_);
if (v___x_1909_ == 0)
{
lean_dec(v_i_1906_);
return v___x_1909_;
}
else
{
lean_object* v_k_x27_1910_; uint8_t v___x_1911_; 
v_k_x27_1910_ = lean_array_fget_borrowed(v_keys_1905_, v_i_1906_);
v___x_1911_ = l_Lean_instBEqExtraModUse_beq(v_k_1907_, v_k_x27_1910_);
if (v___x_1911_ == 0)
{
lean_object* v___x_1912_; lean_object* v___x_1913_; 
v___x_1912_ = lean_unsigned_to_nat(1u);
v___x_1913_ = lean_nat_add(v_i_1906_, v___x_1912_);
lean_dec(v_i_1906_);
v_i_1906_ = v___x_1913_;
goto _start;
}
else
{
lean_dec(v_i_1906_);
return v___x_1909_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12_spec__17___redArg___boxed(lean_object* v_keys_1915_, lean_object* v_i_1916_, lean_object* v_k_1917_){
_start:
{
uint8_t v_res_1918_; lean_object* v_r_1919_; 
v_res_1918_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12_spec__17___redArg(v_keys_1915_, v_i_1916_, v_k_1917_);
lean_dec_ref(v_k_1917_);
lean_dec_ref(v_keys_1915_);
v_r_1919_ = lean_box(v_res_1918_);
return v_r_1919_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12___redArg(lean_object* v_x_1920_, size_t v_x_1921_, lean_object* v_x_1922_){
_start:
{
if (lean_obj_tag(v_x_1920_) == 0)
{
lean_object* v_es_1923_; lean_object* v___x_1924_; size_t v___x_1925_; size_t v___x_1926_; lean_object* v_j_1927_; lean_object* v___x_1928_; 
v_es_1923_ = lean_ctor_get(v_x_1920_, 0);
v___x_1924_ = lean_box(2);
v___x_1925_ = ((size_t)31ULL);
v___x_1926_ = lean_usize_land(v_x_1921_, v___x_1925_);
v_j_1927_ = lean_usize_to_nat(v___x_1926_);
v___x_1928_ = lean_array_get_borrowed(v___x_1924_, v_es_1923_, v_j_1927_);
lean_dec(v_j_1927_);
switch(lean_obj_tag(v___x_1928_))
{
case 0:
{
lean_object* v_key_1929_; uint8_t v___x_1930_; 
v_key_1929_ = lean_ctor_get(v___x_1928_, 0);
v___x_1930_ = l_Lean_instBEqExtraModUse_beq(v_x_1922_, v_key_1929_);
return v___x_1930_;
}
case 1:
{
lean_object* v_node_1931_; size_t v___x_1932_; size_t v___x_1933_; 
v_node_1931_ = lean_ctor_get(v___x_1928_, 0);
v___x_1932_ = ((size_t)5ULL);
v___x_1933_ = lean_usize_shift_right(v_x_1921_, v___x_1932_);
v_x_1920_ = v_node_1931_;
v_x_1921_ = v___x_1933_;
goto _start;
}
default: 
{
uint8_t v___x_1935_; 
v___x_1935_ = 0;
return v___x_1935_;
}
}
}
else
{
lean_object* v_ks_1936_; lean_object* v___x_1937_; uint8_t v___x_1938_; 
v_ks_1936_ = lean_ctor_get(v_x_1920_, 0);
v___x_1937_ = lean_unsigned_to_nat(0u);
v___x_1938_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12_spec__17___redArg(v_ks_1936_, v___x_1937_, v_x_1922_);
return v___x_1938_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12___redArg___boxed(lean_object* v_x_1939_, lean_object* v_x_1940_, lean_object* v_x_1941_){
_start:
{
size_t v_x_46064__boxed_1942_; uint8_t v_res_1943_; lean_object* v_r_1944_; 
v_x_46064__boxed_1942_ = lean_unbox_usize(v_x_1940_);
lean_dec(v_x_1940_);
v_res_1943_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12___redArg(v_x_1939_, v_x_46064__boxed_1942_, v_x_1941_);
lean_dec_ref(v_x_1941_);
lean_dec_ref(v_x_1939_);
v_r_1944_ = lean_box(v_res_1943_);
return v_r_1944_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8___redArg(lean_object* v_x_1945_, lean_object* v_x_1946_){
_start:
{
uint64_t v___x_1947_; size_t v___x_1948_; uint8_t v___x_1949_; 
v___x_1947_ = l_Lean_instHashableExtraModUse_hash(v_x_1946_);
v___x_1948_ = lean_uint64_to_usize(v___x_1947_);
v___x_1949_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12___redArg(v_x_1945_, v___x_1948_, v_x_1946_);
return v___x_1949_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8___redArg___boxed(lean_object* v_x_1950_, lean_object* v_x_1951_){
_start:
{
uint8_t v_res_1952_; lean_object* v_r_1953_; 
v_res_1952_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8___redArg(v_x_1950_, v_x_1951_);
lean_dec_ref(v_x_1951_);
lean_dec_ref(v_x_1950_);
v_r_1953_ = lean_box(v_res_1952_);
return v_r_1953_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__9___closed__0(void){
_start:
{
lean_object* v___x_1954_; double v___x_1955_; 
v___x_1954_ = lean_unsigned_to_nat(0u);
v___x_1955_ = lean_float_of_nat(v___x_1954_);
return v___x_1955_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__9(lean_object* v_cls_1958_, lean_object* v_msg_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_){
_start:
{
lean_object* v_ref_1963_; lean_object* v___x_1964_; lean_object* v_a_1965_; lean_object* v___x_1967_; uint8_t v_isShared_1968_; uint8_t v_isSharedCheck_2009_; 
v_ref_1963_ = lean_ctor_get(v___y_1960_, 2);
v___x_1964_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0(v_msg_1959_, v___y_1960_, v___y_1961_);
v_a_1965_ = lean_ctor_get(v___x_1964_, 0);
v_isSharedCheck_2009_ = !lean_is_exclusive(v___x_1964_);
if (v_isSharedCheck_2009_ == 0)
{
v___x_1967_ = v___x_1964_;
v_isShared_1968_ = v_isSharedCheck_2009_;
goto v_resetjp_1966_;
}
else
{
lean_inc(v_a_1965_);
lean_dec(v___x_1964_);
v___x_1967_ = lean_box(0);
v_isShared_1968_ = v_isSharedCheck_2009_;
goto v_resetjp_1966_;
}
v_resetjp_1966_:
{
lean_object* v___x_1969_; lean_object* v_traceState_1970_; lean_object* v_env_1971_; lean_object* v_nextMacroScope_1972_; lean_object* v_ngen_1973_; lean_object* v_auxDeclNGen_1974_; lean_object* v_cache_1975_; lean_object* v_messages_1976_; lean_object* v_infoState_1977_; lean_object* v_snapshotTasks_1978_; lean_object* v___x_1980_; uint8_t v_isShared_1981_; uint8_t v_isSharedCheck_2008_; 
v___x_1969_ = lean_st_ref_take(v___y_1961_);
v_traceState_1970_ = lean_ctor_get(v___x_1969_, 4);
v_env_1971_ = lean_ctor_get(v___x_1969_, 0);
v_nextMacroScope_1972_ = lean_ctor_get(v___x_1969_, 1);
v_ngen_1973_ = lean_ctor_get(v___x_1969_, 2);
v_auxDeclNGen_1974_ = lean_ctor_get(v___x_1969_, 3);
v_cache_1975_ = lean_ctor_get(v___x_1969_, 5);
v_messages_1976_ = lean_ctor_get(v___x_1969_, 6);
v_infoState_1977_ = lean_ctor_get(v___x_1969_, 7);
v_snapshotTasks_1978_ = lean_ctor_get(v___x_1969_, 8);
v_isSharedCheck_2008_ = !lean_is_exclusive(v___x_1969_);
if (v_isSharedCheck_2008_ == 0)
{
v___x_1980_ = v___x_1969_;
v_isShared_1981_ = v_isSharedCheck_2008_;
goto v_resetjp_1979_;
}
else
{
lean_inc(v_snapshotTasks_1978_);
lean_inc(v_infoState_1977_);
lean_inc(v_messages_1976_);
lean_inc(v_cache_1975_);
lean_inc(v_traceState_1970_);
lean_inc(v_auxDeclNGen_1974_);
lean_inc(v_ngen_1973_);
lean_inc(v_nextMacroScope_1972_);
lean_inc(v_env_1971_);
lean_dec(v___x_1969_);
v___x_1980_ = lean_box(0);
v_isShared_1981_ = v_isSharedCheck_2008_;
goto v_resetjp_1979_;
}
v_resetjp_1979_:
{
uint64_t v_tid_1982_; lean_object* v_traces_1983_; lean_object* v___x_1985_; uint8_t v_isShared_1986_; uint8_t v_isSharedCheck_2007_; 
v_tid_1982_ = lean_ctor_get_uint64(v_traceState_1970_, sizeof(void*)*1);
v_traces_1983_ = lean_ctor_get(v_traceState_1970_, 0);
v_isSharedCheck_2007_ = !lean_is_exclusive(v_traceState_1970_);
if (v_isSharedCheck_2007_ == 0)
{
v___x_1985_ = v_traceState_1970_;
v_isShared_1986_ = v_isSharedCheck_2007_;
goto v_resetjp_1984_;
}
else
{
lean_inc(v_traces_1983_);
lean_dec(v_traceState_1970_);
v___x_1985_ = lean_box(0);
v_isShared_1986_ = v_isSharedCheck_2007_;
goto v_resetjp_1984_;
}
v_resetjp_1984_:
{
lean_object* v___x_1987_; lean_object* v___x_1988_; double v___x_1989_; uint8_t v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1998_; 
v___x_1987_ = lean_box(0);
v___x_1988_ = lean_box(0);
v___x_1989_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__9___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__9___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__9___closed__0);
v___x_1990_ = 0;
v___x_1991_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41_spec__43___closed__0));
v___x_1992_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1992_, 0, v_cls_1958_);
lean_ctor_set(v___x_1992_, 1, v___x_1988_);
lean_ctor_set(v___x_1992_, 2, v___x_1991_);
lean_ctor_set_float(v___x_1992_, sizeof(void*)*3, v___x_1989_);
lean_ctor_set_float(v___x_1992_, sizeof(void*)*3 + 8, v___x_1989_);
lean_ctor_set_uint8(v___x_1992_, sizeof(void*)*3 + 16, v___x_1990_);
v___x_1993_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__9___closed__1));
v___x_1994_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1994_, 0, v___x_1992_);
lean_ctor_set(v___x_1994_, 1, v_a_1965_);
lean_ctor_set(v___x_1994_, 2, v___x_1993_);
lean_inc(v_ref_1963_);
v___x_1995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1995_, 0, v_ref_1963_);
lean_ctor_set(v___x_1995_, 1, v___x_1994_);
v___x_1996_ = l_Lean_PersistentArray_push___redArg(v_traces_1983_, v___x_1995_);
if (v_isShared_1986_ == 0)
{
lean_ctor_set(v___x_1985_, 0, v___x_1996_);
v___x_1998_ = v___x_1985_;
goto v_reusejp_1997_;
}
else
{
lean_object* v_reuseFailAlloc_2006_; 
v_reuseFailAlloc_2006_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2006_, 0, v___x_1996_);
lean_ctor_set_uint64(v_reuseFailAlloc_2006_, sizeof(void*)*1, v_tid_1982_);
v___x_1998_ = v_reuseFailAlloc_2006_;
goto v_reusejp_1997_;
}
v_reusejp_1997_:
{
lean_object* v___x_2000_; 
if (v_isShared_1981_ == 0)
{
lean_ctor_set(v___x_1980_, 4, v___x_1998_);
v___x_2000_ = v___x_1980_;
goto v_reusejp_1999_;
}
else
{
lean_object* v_reuseFailAlloc_2005_; 
v_reuseFailAlloc_2005_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2005_, 0, v_env_1971_);
lean_ctor_set(v_reuseFailAlloc_2005_, 1, v_nextMacroScope_1972_);
lean_ctor_set(v_reuseFailAlloc_2005_, 2, v_ngen_1973_);
lean_ctor_set(v_reuseFailAlloc_2005_, 3, v_auxDeclNGen_1974_);
lean_ctor_set(v_reuseFailAlloc_2005_, 4, v___x_1998_);
lean_ctor_set(v_reuseFailAlloc_2005_, 5, v_cache_1975_);
lean_ctor_set(v_reuseFailAlloc_2005_, 6, v_messages_1976_);
lean_ctor_set(v_reuseFailAlloc_2005_, 7, v_infoState_1977_);
lean_ctor_set(v_reuseFailAlloc_2005_, 8, v_snapshotTasks_1978_);
v___x_2000_ = v_reuseFailAlloc_2005_;
goto v_reusejp_1999_;
}
v_reusejp_1999_:
{
lean_object* v___x_2001_; lean_object* v___x_2003_; 
v___x_2001_ = lean_st_ref_put(v___y_1961_, v___x_2000_);
if (v_isShared_1968_ == 0)
{
lean_ctor_set(v___x_1967_, 0, v___x_1987_);
v___x_2003_ = v___x_1967_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2004_; 
v_reuseFailAlloc_2004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2004_, 0, v___x_1987_);
v___x_2003_ = v_reuseFailAlloc_2004_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
return v___x_2003_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__9___boxed(lean_object* v_cls_2010_, lean_object* v_msg_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_){
_start:
{
lean_object* v_res_2015_; 
v_res_2015_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__9(v_cls_2010_, v_msg_2011_, v___y_2012_, v___y_2013_);
lean_dec(v___y_2013_);
lean_dec_ref(v___y_2012_);
return v_res_2015_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__0(void){
_start:
{
lean_object* v___x_2016_; 
v___x_2016_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_2016_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__1(void){
_start:
{
lean_object* v___x_2017_; lean_object* v___x_2018_; 
v___x_2017_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_2018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2018_, 0, v___x_2017_);
return v___x_2018_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__2(void){
_start:
{
lean_object* v___x_2019_; lean_object* v___x_2020_; 
v___x_2019_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__1);
v___x_2020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2020_, 0, v___x_2019_);
lean_ctor_set(v___x_2020_, 1, v___x_2019_);
return v___x_2020_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__6(void){
_start:
{
lean_object* v___x_2025_; lean_object* v___x_2026_; 
v___x_2025_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__5));
v___x_2026_ = l_Lean_stringToMessageData(v___x_2025_);
return v___x_2026_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__8(void){
_start:
{
lean_object* v___x_2028_; lean_object* v___x_2029_; 
v___x_2028_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__7));
v___x_2029_ = l_Lean_stringToMessageData(v___x_2028_);
return v___x_2029_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__9(void){
_start:
{
lean_object* v___x_2030_; lean_object* v___x_2031_; 
v___x_2030_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37_spec__41_spec__43___closed__0));
v___x_2031_ = l_Lean_stringToMessageData(v___x_2030_);
return v___x_2031_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__11(void){
_start:
{
lean_object* v_cls_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; 
v_cls_2034_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__4));
v___x_2035_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__10));
v___x_2036_ = l_Lean_Name_append(v___x_2035_, v_cls_2034_);
return v___x_2036_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__13(void){
_start:
{
lean_object* v___x_2038_; lean_object* v___x_2039_; 
v___x_2038_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__12));
v___x_2039_ = l_Lean_stringToMessageData(v___x_2038_);
return v___x_2039_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__15(void){
_start:
{
lean_object* v___x_2041_; lean_object* v___x_2042_; 
v___x_2041_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__14));
v___x_2042_ = l_Lean_stringToMessageData(v___x_2041_);
return v___x_2042_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4(lean_object* v_mod_2047_, uint8_t v_isMeta_2048_, lean_object* v_hint_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_){
_start:
{
lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v_env_2055_; uint8_t v_isExporting_2056_; lean_object* v_entry_2057_; lean_object* v___x_2058_; lean_object* v_env_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___y_2064_; lean_object* v___x_2089_; uint8_t v___x_2090_; 
v___x_2053_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__0);
v___x_2054_ = lean_st_ref_get(v___y_2051_);
v_env_2055_ = lean_ctor_get(v___x_2054_, 0);
lean_inc_ref(v_env_2055_);
lean_dec(v___x_2054_);
v_isExporting_2056_ = lean_ctor_get_uint8(v_env_2055_, sizeof(void*)*8);
lean_dec_ref(v_env_2055_);
lean_inc(v_mod_2047_);
v_entry_2057_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_2057_, 0, v_mod_2047_);
lean_ctor_set_uint8(v_entry_2057_, sizeof(void*)*1, v_isExporting_2056_);
lean_ctor_set_uint8(v_entry_2057_, sizeof(void*)*1 + 1, v_isMeta_2048_);
v___x_2058_ = lean_st_ref_get(v___y_2051_);
v_env_2059_ = lean_ctor_get(v___x_2058_, 0);
lean_inc_ref(v_env_2059_);
lean_dec(v___x_2058_);
v___x_2060_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_2061_ = lean_box(1);
v___x_2062_ = lean_box(0);
v___x_2089_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2053_, v___x_2060_, v_env_2059_, v___x_2061_, v___x_2062_);
v___x_2090_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8___redArg(v___x_2089_, v_entry_2057_);
lean_dec(v___x_2089_);
if (v___x_2090_ == 0)
{
lean_object* v_toCold_2091_; lean_object* v_options_2092_; uint8_t v_hasTrace_2093_; 
v_toCold_2091_ = lean_ctor_get(v___y_2050_, 0);
v_options_2092_ = lean_ctor_get(v_toCold_2091_, 2);
v_hasTrace_2093_ = lean_ctor_get_uint8(v_options_2092_, sizeof(void*)*1);
if (v_hasTrace_2093_ == 0)
{
lean_dec(v_hint_2049_);
lean_dec(v_mod_2047_);
v___y_2064_ = v___y_2051_;
goto v___jp_2063_;
}
else
{
lean_object* v_inheritedTraceOptions_2094_; lean_object* v_cls_2095_; lean_object* v___y_2097_; lean_object* v___y_2098_; lean_object* v___y_2102_; lean_object* v___y_2103_; lean_object* v___x_2115_; uint8_t v___x_2116_; 
v_inheritedTraceOptions_2094_ = lean_ctor_get(v_toCold_2091_, 11);
v_cls_2095_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__4));
v___x_2115_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__11);
v___x_2116_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2094_, v_options_2092_, v___x_2115_);
if (v___x_2116_ == 0)
{
lean_dec(v_hint_2049_);
lean_dec(v_mod_2047_);
v___y_2064_ = v___y_2051_;
goto v___jp_2063_;
}
else
{
lean_object* v___x_2117_; lean_object* v___y_2119_; 
v___x_2117_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__13);
if (v_isExporting_2056_ == 0)
{
lean_object* v___x_2126_; 
v___x_2126_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__18));
v___y_2119_ = v___x_2126_;
goto v___jp_2118_;
}
else
{
lean_object* v___x_2127_; 
v___x_2127_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__19));
v___y_2119_ = v___x_2127_;
goto v___jp_2118_;
}
v___jp_2118_:
{
lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; 
lean_inc_ref(v___y_2119_);
v___x_2120_ = l_Lean_stringToMessageData(v___y_2119_);
v___x_2121_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2121_, 0, v___x_2117_);
lean_ctor_set(v___x_2121_, 1, v___x_2120_);
v___x_2122_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__15, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__15_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__15);
v___x_2123_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2123_, 0, v___x_2121_);
lean_ctor_set(v___x_2123_, 1, v___x_2122_);
if (v_isMeta_2048_ == 0)
{
lean_object* v___x_2124_; 
v___x_2124_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__16));
v___y_2102_ = v___x_2123_;
v___y_2103_ = v___x_2124_;
goto v___jp_2101_;
}
else
{
lean_object* v___x_2125_; 
v___x_2125_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__17));
v___y_2102_ = v___x_2123_;
v___y_2103_ = v___x_2125_;
goto v___jp_2101_;
}
}
}
v___jp_2096_:
{
lean_object* v___x_2099_; lean_object* v___x_2100_; 
v___x_2099_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2099_, 0, v___y_2097_);
lean_ctor_set(v___x_2099_, 1, v___y_2098_);
v___x_2100_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__9(v_cls_2095_, v___x_2099_, v___y_2050_, v___y_2051_);
if (lean_obj_tag(v___x_2100_) == 0)
{
lean_dec_ref_known(v___x_2100_, 1);
v___y_2064_ = v___y_2051_;
goto v___jp_2063_;
}
else
{
lean_dec_ref_known(v_entry_2057_, 1);
return v___x_2100_;
}
}
v___jp_2101_:
{
lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; uint8_t v___x_2110_; 
lean_inc_ref(v___y_2103_);
v___x_2104_ = l_Lean_stringToMessageData(v___y_2103_);
v___x_2105_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2105_, 0, v___y_2102_);
lean_ctor_set(v___x_2105_, 1, v___x_2104_);
v___x_2106_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__6);
v___x_2107_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2107_, 0, v___x_2105_);
lean_ctor_set(v___x_2107_, 1, v___x_2106_);
v___x_2108_ = l_Lean_MessageData_ofName(v_mod_2047_);
v___x_2109_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2109_, 0, v___x_2107_);
lean_ctor_set(v___x_2109_, 1, v___x_2108_);
v___x_2110_ = l_Lean_Name_isAnonymous(v_hint_2049_);
if (v___x_2110_ == 0)
{
lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; 
v___x_2111_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__8);
v___x_2112_ = l_Lean_MessageData_ofName(v_hint_2049_);
v___x_2113_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2111_);
lean_ctor_set(v___x_2113_, 1, v___x_2112_);
v___y_2097_ = v___x_2109_;
v___y_2098_ = v___x_2113_;
goto v___jp_2096_;
}
else
{
lean_object* v___x_2114_; 
lean_dec(v_hint_2049_);
v___x_2114_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__9);
v___y_2097_ = v___x_2109_;
v___y_2098_ = v___x_2114_;
goto v___jp_2096_;
}
}
}
}
else
{
lean_object* v___x_2128_; lean_object* v___x_2129_; 
lean_dec_ref_known(v_entry_2057_, 1);
lean_dec(v_hint_2049_);
lean_dec(v_mod_2047_);
v___x_2128_ = lean_box(0);
v___x_2129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2129_, 0, v___x_2128_);
return v___x_2129_;
}
v___jp_2063_:
{
lean_object* v___x_2065_; lean_object* v_toEnvExtension_2066_; lean_object* v_env_2067_; lean_object* v_nextMacroScope_2068_; lean_object* v_ngen_2069_; lean_object* v_auxDeclNGen_2070_; lean_object* v_traceState_2071_; lean_object* v_messages_2072_; lean_object* v_infoState_2073_; lean_object* v_snapshotTasks_2074_; lean_object* v___x_2076_; uint8_t v_isShared_2077_; uint8_t v_isSharedCheck_2087_; 
v___x_2065_ = lean_st_ref_take(v___y_2064_);
v_toEnvExtension_2066_ = lean_ctor_get(v___x_2060_, 0);
v_env_2067_ = lean_ctor_get(v___x_2065_, 0);
v_nextMacroScope_2068_ = lean_ctor_get(v___x_2065_, 1);
v_ngen_2069_ = lean_ctor_get(v___x_2065_, 2);
v_auxDeclNGen_2070_ = lean_ctor_get(v___x_2065_, 3);
v_traceState_2071_ = lean_ctor_get(v___x_2065_, 4);
v_messages_2072_ = lean_ctor_get(v___x_2065_, 6);
v_infoState_2073_ = lean_ctor_get(v___x_2065_, 7);
v_snapshotTasks_2074_ = lean_ctor_get(v___x_2065_, 8);
v_isSharedCheck_2087_ = !lean_is_exclusive(v___x_2065_);
if (v_isSharedCheck_2087_ == 0)
{
lean_object* v_unused_2088_; 
v_unused_2088_ = lean_ctor_get(v___x_2065_, 5);
lean_dec(v_unused_2088_);
v___x_2076_ = v___x_2065_;
v_isShared_2077_ = v_isSharedCheck_2087_;
goto v_resetjp_2075_;
}
else
{
lean_inc(v_snapshotTasks_2074_);
lean_inc(v_infoState_2073_);
lean_inc(v_messages_2072_);
lean_inc(v_traceState_2071_);
lean_inc(v_auxDeclNGen_2070_);
lean_inc(v_ngen_2069_);
lean_inc(v_nextMacroScope_2068_);
lean_inc(v_env_2067_);
lean_dec(v___x_2065_);
v___x_2076_ = lean_box(0);
v_isShared_2077_ = v_isSharedCheck_2087_;
goto v_resetjp_2075_;
}
v_resetjp_2075_:
{
lean_object* v_asyncMode_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2083_; 
v_asyncMode_2078_ = lean_ctor_get(v_toEnvExtension_2066_, 2);
v___x_2079_ = lean_box(0);
v___x_2080_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_2060_, v_env_2067_, v_entry_2057_, v_asyncMode_2078_, v___x_2062_);
v___x_2081_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__2);
if (v_isShared_2077_ == 0)
{
lean_ctor_set(v___x_2076_, 5, v___x_2081_);
lean_ctor_set(v___x_2076_, 0, v___x_2080_);
v___x_2083_ = v___x_2076_;
goto v_reusejp_2082_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v___x_2080_);
lean_ctor_set(v_reuseFailAlloc_2086_, 1, v_nextMacroScope_2068_);
lean_ctor_set(v_reuseFailAlloc_2086_, 2, v_ngen_2069_);
lean_ctor_set(v_reuseFailAlloc_2086_, 3, v_auxDeclNGen_2070_);
lean_ctor_set(v_reuseFailAlloc_2086_, 4, v_traceState_2071_);
lean_ctor_set(v_reuseFailAlloc_2086_, 5, v___x_2081_);
lean_ctor_set(v_reuseFailAlloc_2086_, 6, v_messages_2072_);
lean_ctor_set(v_reuseFailAlloc_2086_, 7, v_infoState_2073_);
lean_ctor_set(v_reuseFailAlloc_2086_, 8, v_snapshotTasks_2074_);
v___x_2083_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2082_;
}
v_reusejp_2082_:
{
lean_object* v___x_2084_; lean_object* v___x_2085_; 
v___x_2084_ = lean_st_ref_put(v___y_2064_, v___x_2083_);
v___x_2085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2085_, 0, v___x_2079_);
return v___x_2085_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___boxed(lean_object* v_mod_2130_, lean_object* v_isMeta_2131_, lean_object* v_hint_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_){
_start:
{
uint8_t v_isMeta_boxed_2136_; lean_object* v_res_2137_; 
v_isMeta_boxed_2136_ = lean_unbox(v_isMeta_2131_);
v_res_2137_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4(v_mod_2130_, v_isMeta_boxed_2136_, v_hint_2132_, v___y_2133_, v___y_2134_);
lean_dec(v___y_2134_);
lean_dec_ref(v___y_2133_);
return v_res_2137_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__5(lean_object* v___x_2138_, lean_object* v_declName_2139_, lean_object* v_as_2140_, size_t v_sz_2141_, size_t v_i_2142_, lean_object* v_b_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_){
_start:
{
uint8_t v___x_2147_; 
v___x_2147_ = lean_usize_dec_lt(v_i_2142_, v_sz_2141_);
if (v___x_2147_ == 0)
{
lean_object* v___x_2148_; 
lean_dec(v_declName_2139_);
v___x_2148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2148_, 0, v_b_2143_);
return v___x_2148_;
}
else
{
lean_object* v___x_2149_; lean_object* v_modules_2150_; lean_object* v___x_2151_; lean_object* v_a_2152_; lean_object* v___x_2153_; lean_object* v_toImport_2154_; lean_object* v_module_2155_; lean_object* v___x_2156_; uint8_t v___x_2157_; lean_object* v___x_2158_; 
v___x_2149_ = l_Lean_Environment_header(v___x_2138_);
v_modules_2150_ = lean_ctor_get(v___x_2149_, 3);
lean_inc_ref(v_modules_2150_);
lean_dec_ref(v___x_2149_);
v___x_2151_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_2152_ = lean_array_uget_borrowed(v_as_2140_, v_i_2142_);
v___x_2153_ = lean_array_get(v___x_2151_, v_modules_2150_, v_a_2152_);
lean_dec_ref(v_modules_2150_);
v_toImport_2154_ = lean_ctor_get(v___x_2153_, 0);
lean_inc_ref(v_toImport_2154_);
lean_dec(v___x_2153_);
v_module_2155_ = lean_ctor_get(v_toImport_2154_, 0);
lean_inc(v_module_2155_);
lean_dec_ref(v_toImport_2154_);
v___x_2156_ = lean_box(0);
v___x_2157_ = 0;
lean_inc(v_declName_2139_);
v___x_2158_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4(v_module_2155_, v___x_2157_, v_declName_2139_, v___y_2144_, v___y_2145_);
if (lean_obj_tag(v___x_2158_) == 0)
{
size_t v___x_2159_; size_t v___x_2160_; 
lean_dec_ref_known(v___x_2158_, 1);
v___x_2159_ = ((size_t)1ULL);
v___x_2160_ = lean_usize_add(v_i_2142_, v___x_2159_);
v_i_2142_ = v___x_2160_;
v_b_2143_ = v___x_2156_;
goto _start;
}
else
{
lean_dec(v_declName_2139_);
return v___x_2158_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__5___boxed(lean_object* v___x_2162_, lean_object* v_declName_2163_, lean_object* v_as_2164_, lean_object* v_sz_2165_, lean_object* v_i_2166_, lean_object* v_b_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_){
_start:
{
size_t v_sz_boxed_2171_; size_t v_i_boxed_2172_; lean_object* v_res_2173_; 
v_sz_boxed_2171_ = lean_unbox_usize(v_sz_2165_);
lean_dec(v_sz_2165_);
v_i_boxed_2172_ = lean_unbox_usize(v_i_2166_);
lean_dec(v_i_2166_);
v_res_2173_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__5(v___x_2162_, v_declName_2163_, v_as_2164_, v_sz_boxed_2171_, v_i_boxed_2172_, v_b_2167_, v___y_2168_, v___y_2169_);
lean_dec(v___y_2169_);
lean_dec_ref(v___y_2168_);
lean_dec_ref(v_as_2164_);
lean_dec_ref(v___x_2162_);
return v_res_2173_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__6_spec__12___redArg(lean_object* v_a_2174_, lean_object* v_x_2175_){
_start:
{
if (lean_obj_tag(v_x_2175_) == 0)
{
lean_object* v___x_2176_; 
v___x_2176_ = lean_box(0);
return v___x_2176_;
}
else
{
lean_object* v_key_2177_; lean_object* v_value_2178_; lean_object* v_tail_2179_; uint8_t v___x_2180_; 
v_key_2177_ = lean_ctor_get(v_x_2175_, 0);
v_value_2178_ = lean_ctor_get(v_x_2175_, 1);
v_tail_2179_ = lean_ctor_get(v_x_2175_, 2);
v___x_2180_ = lean_name_eq(v_key_2177_, v_a_2174_);
if (v___x_2180_ == 0)
{
v_x_2175_ = v_tail_2179_;
goto _start;
}
else
{
lean_object* v___x_2182_; 
lean_inc(v_value_2178_);
v___x_2182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2182_, 0, v_value_2178_);
return v___x_2182_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__6_spec__12___redArg___boxed(lean_object* v_a_2183_, lean_object* v_x_2184_){
_start:
{
lean_object* v_res_2185_; 
v_res_2185_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__6_spec__12___redArg(v_a_2183_, v_x_2184_);
lean_dec(v_x_2184_);
lean_dec(v_a_2183_);
return v_res_2185_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__6___redArg(lean_object* v_m_2186_, lean_object* v_a_2187_){
_start:
{
lean_object* v_buckets_2188_; lean_object* v___x_2189_; uint64_t v___y_2191_; 
v_buckets_2188_ = lean_ctor_get(v_m_2186_, 1);
v___x_2189_ = lean_array_get_size(v_buckets_2188_);
if (lean_obj_tag(v_a_2187_) == 0)
{
uint64_t v___x_2205_; 
v___x_2205_ = 1723ULL;
v___y_2191_ = v___x_2205_;
goto v___jp_2190_;
}
else
{
uint64_t v_hash_2206_; 
v_hash_2206_ = lean_ctor_get_uint64(v_a_2187_, sizeof(void*)*2);
v___y_2191_ = v_hash_2206_;
goto v___jp_2190_;
}
v___jp_2190_:
{
uint64_t v___x_2192_; uint64_t v___x_2193_; uint64_t v_fold_2194_; uint64_t v___x_2195_; uint64_t v___x_2196_; uint64_t v___x_2197_; size_t v___x_2198_; size_t v___x_2199_; size_t v___x_2200_; size_t v___x_2201_; size_t v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; 
v___x_2192_ = 32ULL;
v___x_2193_ = lean_uint64_shift_right(v___y_2191_, v___x_2192_);
v_fold_2194_ = lean_uint64_xor(v___y_2191_, v___x_2193_);
v___x_2195_ = 16ULL;
v___x_2196_ = lean_uint64_shift_right(v_fold_2194_, v___x_2195_);
v___x_2197_ = lean_uint64_xor(v_fold_2194_, v___x_2196_);
v___x_2198_ = lean_uint64_to_usize(v___x_2197_);
v___x_2199_ = lean_usize_of_nat(v___x_2189_);
v___x_2200_ = ((size_t)1ULL);
v___x_2201_ = lean_usize_sub(v___x_2199_, v___x_2200_);
v___x_2202_ = lean_usize_land(v___x_2198_, v___x_2201_);
v___x_2203_ = lean_array_uget_borrowed(v_buckets_2188_, v___x_2202_);
v___x_2204_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__6_spec__12___redArg(v_a_2187_, v___x_2203_);
return v___x_2204_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__6___redArg___boxed(lean_object* v_m_2207_, lean_object* v_a_2208_){
_start:
{
lean_object* v_res_2209_; 
v_res_2209_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__6___redArg(v_m_2207_, v_a_2208_);
lean_dec(v_a_2208_);
lean_dec_ref(v_m_2207_);
return v_res_2209_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2___closed__0(void){
_start:
{
lean_object* v___x_2210_; 
v___x_2210_ = l_Std_HashMap_instInhabited___redArg();
return v___x_2210_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2(lean_object* v_declName_2213_, uint8_t v_isMeta_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_){
_start:
{
lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v_env_2223_; lean_object* v___y_2225_; lean_object* v___x_2238_; 
v___x_2218_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2___closed__0);
v___x_2219_ = lean_st_ref_get(v___y_2216_);
v_env_2223_ = lean_ctor_get(v___x_2219_, 0);
lean_inc_ref(v_env_2223_);
lean_dec(v___x_2219_);
v___x_2238_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2223_, v_declName_2213_);
if (lean_obj_tag(v___x_2238_) == 0)
{
lean_dec_ref(v_env_2223_);
lean_dec(v_declName_2213_);
goto v___jp_2220_;
}
else
{
lean_object* v_val_2239_; lean_object* v___x_2240_; lean_object* v_modules_2241_; lean_object* v___x_2242_; uint8_t v___x_2243_; 
v_val_2239_ = lean_ctor_get(v___x_2238_, 0);
lean_inc(v_val_2239_);
lean_dec_ref_known(v___x_2238_, 1);
v___x_2240_ = l_Lean_Environment_header(v_env_2223_);
v_modules_2241_ = lean_ctor_get(v___x_2240_, 3);
lean_inc_ref(v_modules_2241_);
lean_dec_ref(v___x_2240_);
v___x_2242_ = lean_array_get_size(v_modules_2241_);
v___x_2243_ = lean_nat_dec_lt(v_val_2239_, v___x_2242_);
if (v___x_2243_ == 0)
{
lean_dec_ref(v_modules_2241_);
lean_dec(v_val_2239_);
lean_dec_ref(v_env_2223_);
lean_dec(v_declName_2213_);
goto v___jp_2220_;
}
else
{
lean_object* v___x_2244_; lean_object* v___x_2245_; uint8_t v___y_2247_; 
v___x_2244_ = lean_array_fget(v_modules_2241_, v_val_2239_);
lean_dec(v_val_2239_);
lean_dec_ref(v_modules_2241_);
v___x_2245_ = lean_st_ref_get(v___y_2216_);
if (v_isMeta_2214_ == 0)
{
lean_dec(v___x_2245_);
v___y_2247_ = v_isMeta_2214_;
goto v___jp_2246_;
}
else
{
lean_object* v_env_2258_; uint8_t v___x_2259_; 
v_env_2258_ = lean_ctor_get(v___x_2245_, 0);
lean_inc_ref(v_env_2258_);
lean_dec(v___x_2245_);
lean_inc(v_declName_2213_);
v___x_2259_ = l_Lean_isMarkedMeta(v_env_2258_, v_declName_2213_);
if (v___x_2259_ == 0)
{
v___y_2247_ = v_isMeta_2214_;
goto v___jp_2246_;
}
else
{
uint8_t v___x_2260_; 
v___x_2260_ = 0;
v___y_2247_ = v___x_2260_;
goto v___jp_2246_;
}
}
v___jp_2246_:
{
lean_object* v_toImport_2248_; lean_object* v_module_2249_; lean_object* v___x_2250_; 
v_toImport_2248_ = lean_ctor_get(v___x_2244_, 0);
lean_inc_ref(v_toImport_2248_);
lean_dec(v___x_2244_);
v_module_2249_ = lean_ctor_get(v_toImport_2248_, 0);
lean_inc(v_module_2249_);
lean_dec_ref(v_toImport_2248_);
lean_inc(v_declName_2213_);
v___x_2250_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4(v_module_2249_, v___y_2247_, v_declName_2213_, v___y_2215_, v___y_2216_);
if (lean_obj_tag(v___x_2250_) == 0)
{
lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; 
lean_dec_ref_known(v___x_2250_, 1);
v___x_2251_ = l_Lean_indirectModUseExt;
v___x_2252_ = lean_box(1);
v___x_2253_ = lean_box(0);
lean_inc_ref(v_env_2223_);
v___x_2254_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2218_, v___x_2251_, v_env_2223_, v___x_2252_, v___x_2253_);
v___x_2255_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__6___redArg(v___x_2254_, v_declName_2213_);
lean_dec(v___x_2254_);
if (lean_obj_tag(v___x_2255_) == 0)
{
lean_object* v___x_2256_; 
v___x_2256_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2___closed__1));
v___y_2225_ = v___x_2256_;
goto v___jp_2224_;
}
else
{
lean_object* v_val_2257_; 
v_val_2257_ = lean_ctor_get(v___x_2255_, 0);
lean_inc(v_val_2257_);
lean_dec_ref_known(v___x_2255_, 1);
v___y_2225_ = v_val_2257_;
goto v___jp_2224_;
}
}
else
{
lean_dec_ref(v_env_2223_);
lean_dec(v_declName_2213_);
return v___x_2250_;
}
}
}
}
v___jp_2220_:
{
lean_object* v___x_2221_; lean_object* v___x_2222_; 
v___x_2221_ = lean_box(0);
v___x_2222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2222_, 0, v___x_2221_);
return v___x_2222_;
}
v___jp_2224_:
{
lean_object* v___x_2226_; size_t v_sz_2227_; size_t v___x_2228_; lean_object* v___x_2229_; 
v___x_2226_ = lean_box(0);
v_sz_2227_ = lean_array_size(v___y_2225_);
v___x_2228_ = ((size_t)0ULL);
v___x_2229_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__5(v_env_2223_, v_declName_2213_, v___y_2225_, v_sz_2227_, v___x_2228_, v___x_2226_, v___y_2215_, v___y_2216_);
lean_dec_ref(v___y_2225_);
lean_dec_ref(v_env_2223_);
if (lean_obj_tag(v___x_2229_) == 0)
{
lean_object* v___x_2231_; uint8_t v_isShared_2232_; uint8_t v_isSharedCheck_2236_; 
v_isSharedCheck_2236_ = !lean_is_exclusive(v___x_2229_);
if (v_isSharedCheck_2236_ == 0)
{
lean_object* v_unused_2237_; 
v_unused_2237_ = lean_ctor_get(v___x_2229_, 0);
lean_dec(v_unused_2237_);
v___x_2231_ = v___x_2229_;
v_isShared_2232_ = v_isSharedCheck_2236_;
goto v_resetjp_2230_;
}
else
{
lean_dec(v___x_2229_);
v___x_2231_ = lean_box(0);
v_isShared_2232_ = v_isSharedCheck_2236_;
goto v_resetjp_2230_;
}
v_resetjp_2230_:
{
lean_object* v___x_2234_; 
if (v_isShared_2232_ == 0)
{
lean_ctor_set(v___x_2231_, 0, v___x_2226_);
v___x_2234_ = v___x_2231_;
goto v_reusejp_2233_;
}
else
{
lean_object* v_reuseFailAlloc_2235_; 
v_reuseFailAlloc_2235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2235_, 0, v___x_2226_);
v___x_2234_ = v_reuseFailAlloc_2235_;
goto v_reusejp_2233_;
}
v_reusejp_2233_:
{
return v___x_2234_;
}
}
}
else
{
return v___x_2229_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2___boxed(lean_object* v_declName_2261_, lean_object* v_isMeta_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_){
_start:
{
uint8_t v_isMeta_boxed_2266_; lean_object* v_res_2267_; 
v_isMeta_boxed_2266_ = lean_unbox(v_isMeta_2262_);
v_res_2267_ = l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2(v_declName_2261_, v_isMeta_boxed_2266_, v___y_2263_, v___y_2264_);
lean_dec(v___y_2264_);
lean_dec_ref(v___y_2263_);
return v_res_2267_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__2_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2271_; lean_object* v___x_2272_; 
v___x_2271_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__1_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2272_ = l_Lean_MessageData_ofFormat(v___x_2271_);
return v___x_2272_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__5_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2276_; lean_object* v___x_2277_; 
v___x_2276_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__4_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2277_ = l_Lean_MessageData_ofFormat(v___x_2276_);
return v___x_2277_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__7_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2279_; lean_object* v___x_2280_; 
v___x_2279_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__6_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2280_ = l_Lean_stringToMessageData(v___x_2279_);
return v___x_2280_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__9_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2282_; lean_object* v___x_2283_; 
v___x_2282_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__8_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2283_ = l_Lean_stringToMessageData(v___x_2282_);
return v___x_2283_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__11_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2285_; lean_object* v___x_2286_; 
v___x_2285_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__10_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2286_ = l_Lean_stringToMessageData(v___x_2285_);
return v___x_2286_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__14_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2290_; lean_object* v___x_2291_; 
v___x_2290_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__13_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2291_ = l_Lean_MessageData_ofFormat(v___x_2290_);
return v___x_2291_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__15_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2292_; lean_object* v___x_2293_; 
v___x_2292_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__14_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__14_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__14_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2293_ = l_Lean_MessageData_hint_x27(v___x_2292_);
return v___x_2293_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__17_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2295_; lean_object* v___x_2296_; 
v___x_2295_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2296_ = l_Lean_stringToMessageData(v___x_2295_);
return v___x_2296_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__20_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2300_; lean_object* v___x_2301_; 
v___x_2300_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__19_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2301_ = l_Lean_MessageData_ofFormat(v___x_2300_);
return v___x_2301_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__25_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2308_; lean_object* v___x_2309_; 
v___x_2308_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__24_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2309_ = l_Lean_MessageData_ofFormat(v___x_2308_);
return v___x_2309_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2310_; lean_object* v___x_2311_; 
v___x_2310_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__25_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__25_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__25_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2311_, 0, v___x_2310_);
return v___x_2311_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__29_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2315_; lean_object* v___x_2316_; 
v___x_2315_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__28_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2316_ = l_Lean_MessageData_ofFormat(v___x_2315_);
return v___x_2316_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2317_; lean_object* v___x_2318_; 
v___x_2317_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_2318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2318_, 0, v___x_2317_);
return v___x_2318_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__31_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; 
v___x_2319_ = lean_box(1);
v___x_2320_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__4);
v___x_2321_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2322_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2322_, 0, v___x_2321_);
lean_ctor_set(v___x_2322_, 1, v___x_2320_);
lean_ctor_set(v___x_2322_, 2, v___x_2319_);
return v___x_2322_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__33_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; 
v___x_2325_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2326_ = lean_unsigned_to_nat(0u);
v___x_2327_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2327_, 0, v___x_2326_);
lean_ctor_set(v___x_2327_, 1, v___x_2326_);
lean_ctor_set(v___x_2327_, 2, v___x_2326_);
lean_ctor_set(v___x_2327_, 3, v___x_2326_);
lean_ctor_set(v___x_2327_, 4, v___x_2325_);
lean_ctor_set(v___x_2327_, 5, v___x_2325_);
lean_ctor_set(v___x_2327_, 6, v___x_2325_);
lean_ctor_set(v___x_2327_, 7, v___x_2325_);
lean_ctor_set(v___x_2327_, 8, v___x_2325_);
lean_ctor_set(v___x_2327_, 9, v___x_2325_);
lean_ctor_set(v___x_2327_, 10, v___x_2325_);
return v___x_2327_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__34_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2328_; lean_object* v___x_2329_; 
v___x_2328_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2329_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2329_, 0, v___x_2328_);
lean_ctor_set(v___x_2329_, 1, v___x_2328_);
lean_ctor_set(v___x_2329_, 2, v___x_2328_);
lean_ctor_set(v___x_2329_, 3, v___x_2328_);
lean_ctor_set(v___x_2329_, 4, v___x_2328_);
lean_ctor_set(v___x_2329_, 5, v___x_2328_);
return v___x_2329_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__35_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2330_; lean_object* v___x_2331_; 
v___x_2330_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2331_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2331_, 0, v___x_2330_);
lean_ctor_set(v___x_2331_, 1, v___x_2330_);
lean_ctor_set(v___x_2331_, 2, v___x_2330_);
lean_ctor_set(v___x_2331_, 3, v___x_2330_);
lean_ctor_set(v___x_2331_, 4, v___x_2330_);
return v___x_2331_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__36_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; 
v___x_2332_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__35_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__35_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__35_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2333_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0_spec__0___closed__4);
v___x_2334_ = lean_box(1);
v___x_2335_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__34_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__34_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__34_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2336_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__33_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__33_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__33_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2337_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2337_, 0, v___x_2336_);
lean_ctor_set(v___x_2337_, 1, v___x_2335_);
lean_ctor_set(v___x_2337_, 2, v___x_2334_);
lean_ctor_set(v___x_2337_, 3, v___x_2333_);
lean_ctor_set(v___x_2337_, 4, v___x_2332_);
return v___x_2337_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__38_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2339_; lean_object* v___x_2340_; 
v___x_2339_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__37_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2340_ = l_Lean_stringToMessageData(v___x_2339_);
return v___x_2340_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__40_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2342_; lean_object* v___x_2343_; 
v___x_2342_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__39_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2343_ = l_Lean_stringToMessageData(v___x_2342_);
return v___x_2343_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__42_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2345_; lean_object* v___x_2346_; 
v___x_2345_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__41_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2346_ = l_Lean_stringToMessageData(v___x_2345_);
return v___x_2346_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__44_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2348_; lean_object* v___x_2349_; 
v___x_2348_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__43_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2349_ = l_Lean_stringToMessageData(v___x_2348_);
return v___x_2349_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__46_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2351_; lean_object* v___x_2352_; 
v___x_2351_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__45_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2352_ = l_Lean_stringToMessageData(v___x_2351_);
return v___x_2352_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__48_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2354_; lean_object* v___x_2355_; 
v___x_2354_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__47_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2355_ = l_Lean_stringToMessageData(v___x_2354_);
return v___x_2355_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__50_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2357_; lean_object* v___x_2358_; 
v___x_2357_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__49_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2358_ = l_Lean_stringToMessageData(v___x_2357_);
return v___x_2358_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__52_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2360_; lean_object* v___x_2361_; 
v___x_2360_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__51_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2361_ = l_Lean_stringToMessageData(v___x_2360_);
return v___x_2361_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__54_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2363_; lean_object* v___x_2364_; 
v___x_2363_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__53_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2364_ = l_Lean_stringToMessageData(v___x_2363_);
return v___x_2364_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__56_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2366_; lean_object* v___x_2367_; 
v___x_2366_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__55_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2367_ = l_Lean_stringToMessageData(v___x_2366_);
return v___x_2367_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__58_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2369_; lean_object* v___x_2370_; 
v___x_2369_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__57_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2370_ = l_Lean_stringToMessageData(v___x_2369_);
return v___x_2370_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__60_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2372_; lean_object* v___x_2373_; 
v___x_2372_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__59_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2373_ = l_Lean_stringToMessageData(v___x_2372_);
return v___x_2373_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__62_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2375_; lean_object* v___x_2376_; 
v___x_2375_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__61_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2376_ = l_Lean_stringToMessageData(v___x_2375_);
return v___x_2376_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(lean_object* v___x_2377_, lean_object* v___x_2378_, lean_object* v___f_2379_, uint8_t v___x_2380_, lean_object* v___x_2381_, lean_object* v_a_2382_, lean_object* v_declName_2383_, lean_object* v_stx_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_){
_start:
{
lean_object* v___y_2389_; lean_object* v___y_2390_; lean_object* v___y_2391_; lean_object* v___x_2394_; uint8_t v___x_2395_; lean_object* v___y_2397_; lean_object* v___y_2398_; lean_object* v___y_2399_; lean_object* v___y_2400_; lean_object* v___y_2401_; lean_object* v___y_2413_; lean_object* v___y_2414_; lean_object* v___y_2415_; lean_object* v___y_2416_; lean_object* v___y_2417_; lean_object* v___y_2418_; lean_object* v___y_2430_; lean_object* v___y_2431_; lean_object* v___y_2432_; lean_object* v___y_2433_; lean_object* v___y_2434_; lean_object* v___y_2435_; lean_object* v___y_2447_; lean_object* v___y_2448_; lean_object* v___y_2449_; lean_object* v___y_2450_; lean_object* v___y_2451_; lean_object* v___y_2452_; lean_object* v___y_2464_; lean_object* v___y_2465_; lean_object* v___y_2466_; lean_object* v___y_2467_; lean_object* v___y_2468_; lean_object* v___y_2469_; lean_object* v_hint_2470_; lean_object* v___y_2471_; lean_object* v___y_2472_; lean_object* v___y_2495_; lean_object* v___y_2496_; lean_object* v___y_2497_; lean_object* v___y_2498_; lean_object* v___y_2499_; lean_object* v___y_2500_; lean_object* v___y_2501_; lean_object* v___y_2502_; 
v___x_2394_ = l_Lean_Name_mkStr2(v___x_2377_, v___x_2378_);
lean_inc(v_stx_2384_);
v___x_2395_ = l_Lean_Syntax_isOfKind(v_stx_2384_, v___x_2394_);
lean_dec(v___x_2394_);
if (v___x_2395_ == 0)
{
lean_object* v___x_2504_; lean_object* v___x_2505_; 
lean_dec(v_stx_2384_);
lean_dec(v_declName_2383_);
lean_dec_ref(v___x_2381_);
lean_dec_ref(v___f_2379_);
v___x_2504_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__17_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__17_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__17_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2505_ = l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0___redArg(v___x_2504_, v___y_2385_, v___y_2386_);
return v___x_2505_;
}
else
{
lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___y_2509_; lean_object* v___y_2510_; lean_object* v___y_2511_; lean_object* v___y_2512_; lean_object* v___y_2513_; lean_object* v___y_2514_; lean_object* v___y_2515_; lean_object* v___y_2516_; lean_object* v_val_2517_; lean_object* v___y_2542_; lean_object* v___y_2543_; lean_object* v___y_2544_; lean_object* v___y_2545_; lean_object* v___y_2546_; lean_object* v___y_2547_; lean_object* v___y_2548_; lean_object* v___y_2549_; lean_object* v___y_2554_; lean_object* v___y_2555_; lean_object* v___y_2556_; lean_object* v___y_2557_; lean_object* v___y_2558_; lean_object* v___y_2559_; lean_object* v___y_2560_; uint8_t v___y_2561_; lean_object* v___y_2562_; lean_object* v___y_2563_; uint8_t v_a_2564_; lean_object* v___y_2579_; lean_object* v___y_2580_; lean_object* v___y_2581_; lean_object* v___y_2582_; lean_object* v___y_2583_; uint8_t v___y_2584_; lean_object* v___y_2585_; lean_object* v___y_2586_; lean_object* v___y_2587_; lean_object* v___y_2588_; lean_object* v___y_2621_; lean_object* v___y_2622_; lean_object* v___y_2623_; lean_object* v___y_2624_; lean_object* v___y_2625_; uint8_t v___y_2626_; lean_object* v___y_2627_; lean_object* v___y_2628_; lean_object* v_msg_2629_; lean_object* v___y_2630_; lean_object* v___y_2631_; lean_object* v___y_2642_; lean_object* v___y_2643_; lean_object* v___y_2644_; lean_object* v___y_2645_; uint8_t v___y_2646_; lean_object* v___y_2647_; lean_object* v___y_2648_; lean_object* v___y_2649_; lean_object* v___y_2650_; lean_object* v___y_2651_; lean_object* v___y_2652_; lean_object* v___y_2653_; lean_object* v___y_2654_; lean_object* v_a_2655_; lean_object* v___y_2688_; lean_object* v___y_2689_; lean_object* v___y_2690_; lean_object* v___y_2691_; lean_object* v___y_2692_; lean_object* v___y_2693_; lean_object* v___y_2694_; lean_object* v___y_2791_; lean_object* v___y_2792_; lean_object* v___y_2793_; lean_object* v___y_2794_; lean_object* v___y_2795_; lean_object* v___y_2796_; lean_object* v_a_2797_; lean_object* v___y_2815_; lean_object* v___y_2816_; lean_object* v___y_2817_; lean_object* v_since_x3f_2818_; lean_object* v___y_2819_; lean_object* v___y_2820_; lean_object* v___y_2836_; lean_object* v___y_2837_; lean_object* v___y_2838_; lean_object* v_typeChanged_x3f_2839_; lean_object* v___y_2840_; lean_object* v___y_2841_; lean_object* v___y_2853_; lean_object* v_text_x3f_2854_; lean_object* v___y_2855_; lean_object* v___y_2856_; lean_object* v_id_x3f_2867_; lean_object* v___y_2868_; lean_object* v___y_2869_; lean_object* v___x_2879_; uint8_t v___x_2880_; 
v___x_2506_ = lean_unsigned_to_nat(0u);
v___x_2507_ = lean_unsigned_to_nat(1u);
v___x_2879_ = l_Lean_Syntax_getArg(v_stx_2384_, v___x_2507_);
v___x_2880_ = l_Lean_Syntax_isNone(v___x_2879_);
if (v___x_2880_ == 0)
{
uint8_t v___x_2881_; 
lean_inc(v___x_2879_);
v___x_2881_ = l_Lean_Syntax_matchesNull(v___x_2879_, v___x_2507_);
if (v___x_2881_ == 0)
{
lean_object* v___x_2882_; lean_object* v___x_2883_; 
lean_dec(v___x_2879_);
lean_dec(v_stx_2384_);
lean_dec(v_declName_2383_);
lean_dec_ref(v___x_2381_);
lean_dec_ref(v___f_2379_);
v___x_2882_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__17_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__17_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__17_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2883_ = l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0___redArg(v___x_2882_, v___y_2385_, v___y_2386_);
return v___x_2883_;
}
else
{
lean_object* v___x_2884_; lean_object* v___x_2885_; 
v___x_2884_ = l_Lean_Syntax_getArg(v___x_2879_, v___x_2506_);
lean_dec(v___x_2879_);
v___x_2885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2885_, 0, v___x_2884_);
v_id_x3f_2867_ = v___x_2885_;
v___y_2868_ = v___y_2385_;
v___y_2869_ = v___y_2386_;
goto v___jp_2866_;
}
}
else
{
lean_object* v___x_2886_; 
lean_dec(v___x_2879_);
v___x_2886_ = lean_box(0);
v_id_x3f_2867_ = v___x_2886_;
v___y_2868_ = v___y_2385_;
v___y_2869_ = v___y_2386_;
goto v___jp_2866_;
}
v___jp_2508_:
{
lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; uint8_t v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; 
v___x_2518_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__20_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__20_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__20_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2519_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__22_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2520_ = lean_box(0);
v___x_2521_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2522_, 0, v___f_2379_);
v___x_2523_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2523_, 0, v___x_2519_);
lean_ctor_set(v___x_2523_, 1, v___x_2520_);
lean_ctor_set(v___x_2523_, 2, v___x_2520_);
lean_ctor_set(v___x_2523_, 3, v___x_2520_);
lean_ctor_set(v___x_2523_, 4, v___x_2521_);
lean_ctor_set(v___x_2523_, 5, v___x_2522_);
lean_inc(v_val_2517_);
v___x_2524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2524_, 0, v_val_2517_);
lean_ctor_set(v___x_2524_, 1, v_val_2517_);
v___x_2525_ = l_Lean_Syntax_ofRange(v___x_2524_, v___x_2395_);
v___x_2526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2526_, 0, v___x_2525_);
v___x_2527_ = 4;
v___x_2528_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2528_, 0, v___x_2523_);
lean_ctor_set(v___x_2528_, 1, v___x_2526_);
lean_ctor_set(v___x_2528_, 2, v___x_2520_);
lean_ctor_set_uint8(v___x_2528_, sizeof(void*)*3, v___x_2527_);
v___x_2529_ = lean_mk_empty_array_with_capacity(v___x_2507_);
v___x_2530_ = lean_array_push(v___x_2529_, v___x_2528_);
v___x_2531_ = l_Lean_MessageData_hint(v___x_2518_, v___x_2530_, v___x_2520_, v___x_2520_, v___x_2380_, v___y_2509_, v___y_2511_);
lean_dec_ref(v___x_2530_);
if (lean_obj_tag(v___x_2531_) == 0)
{
lean_object* v_a_2532_; 
v_a_2532_ = lean_ctor_get(v___x_2531_, 0);
lean_inc(v_a_2532_);
lean_dec_ref_known(v___x_2531_, 1);
v___y_2464_ = v___y_2510_;
v___y_2465_ = v___y_2512_;
v___y_2466_ = v___y_2513_;
v___y_2467_ = v___y_2515_;
v___y_2468_ = v___y_2514_;
v___y_2469_ = v___y_2516_;
v_hint_2470_ = v_a_2532_;
v___y_2471_ = v___y_2509_;
v___y_2472_ = v___y_2511_;
goto v___jp_2463_;
}
else
{
lean_object* v_a_2533_; lean_object* v___x_2535_; uint8_t v_isShared_2536_; uint8_t v_isSharedCheck_2540_; 
lean_dec_ref(v___y_2516_);
lean_dec(v___y_2515_);
lean_dec_ref(v___y_2514_);
lean_dec(v___y_2513_);
lean_dec(v___y_2512_);
lean_dec(v___y_2510_);
v_a_2533_ = lean_ctor_get(v___x_2531_, 0);
v_isSharedCheck_2540_ = !lean_is_exclusive(v___x_2531_);
if (v_isSharedCheck_2540_ == 0)
{
v___x_2535_ = v___x_2531_;
v_isShared_2536_ = v_isSharedCheck_2540_;
goto v_resetjp_2534_;
}
else
{
lean_inc(v_a_2533_);
lean_dec(v___x_2531_);
v___x_2535_ = lean_box(0);
v_isShared_2536_ = v_isSharedCheck_2540_;
goto v_resetjp_2534_;
}
v_resetjp_2534_:
{
lean_object* v___x_2538_; 
if (v_isShared_2536_ == 0)
{
v___x_2538_ = v___x_2535_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v_a_2533_);
v___x_2538_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
return v___x_2538_;
}
}
}
}
v___jp_2541_:
{
if (lean_obj_tag(v___y_2545_) == 0)
{
lean_dec_ref(v___f_2379_);
v___y_2495_ = v___y_2542_;
v___y_2496_ = v___y_2543_;
v___y_2497_ = v___y_2544_;
v___y_2498_ = v___y_2545_;
v___y_2499_ = v___y_2546_;
v___y_2500_ = v___y_2548_;
v___y_2501_ = v___y_2547_;
v___y_2502_ = v___y_2549_;
goto v___jp_2494_;
}
else
{
lean_object* v_val_2550_; lean_object* v___x_2551_; 
v_val_2550_ = lean_ctor_get(v___y_2545_, 0);
v___x_2551_ = l_Lean_Syntax_getTailPos_x3f(v_val_2550_, v___x_2395_);
if (lean_obj_tag(v___x_2551_) == 1)
{
lean_object* v_val_2552_; 
v_val_2552_ = lean_ctor_get(v___x_2551_, 0);
lean_inc(v_val_2552_);
lean_dec_ref_known(v___x_2551_, 1);
v___y_2509_ = v___y_2542_;
v___y_2510_ = v___y_2543_;
v___y_2511_ = v___y_2544_;
v___y_2512_ = v___y_2545_;
v___y_2513_ = v___y_2546_;
v___y_2514_ = v___y_2548_;
v___y_2515_ = v___y_2547_;
v___y_2516_ = v___y_2549_;
v_val_2517_ = v_val_2552_;
goto v___jp_2508_;
}
else
{
lean_dec(v___x_2551_);
lean_dec_ref(v___f_2379_);
v___y_2495_ = v___y_2542_;
v___y_2496_ = v___y_2543_;
v___y_2497_ = v___y_2544_;
v___y_2498_ = v___y_2545_;
v___y_2499_ = v___y_2546_;
v___y_2500_ = v___y_2548_;
v___y_2501_ = v___y_2547_;
v___y_2502_ = v___y_2549_;
goto v___jp_2494_;
}
}
}
v___jp_2553_:
{
if (v_a_2564_ == 0)
{
if (lean_obj_tag(v___y_2562_) == 0)
{
if (v___y_2561_ == 0)
{
lean_dec_ref(v___y_2563_);
lean_dec_ref(v___y_2560_);
lean_dec_ref(v___f_2379_);
v___y_2447_ = v___y_2555_;
v___y_2448_ = v___y_2557_;
v___y_2449_ = v___y_2558_;
v___y_2450_ = v___y_2559_;
v___y_2451_ = v___y_2554_;
v___y_2452_ = v___y_2556_;
goto v___jp_2446_;
}
else
{
if (lean_obj_tag(v___y_2555_) == 0)
{
v___y_2542_ = v___y_2554_;
v___y_2543_ = v___y_2555_;
v___y_2544_ = v___y_2556_;
v___y_2545_ = v___y_2557_;
v___y_2546_ = v___y_2558_;
v___y_2547_ = v___y_2559_;
v___y_2548_ = v___y_2560_;
v___y_2549_ = v___y_2563_;
goto v___jp_2541_;
}
else
{
lean_object* v_val_2565_; lean_object* v___x_2566_; 
v_val_2565_ = lean_ctor_get(v___y_2555_, 0);
v___x_2566_ = l_Lean_Syntax_getTailPos_x3f(v_val_2565_, v___x_2395_);
if (lean_obj_tag(v___x_2566_) == 0)
{
v___y_2542_ = v___y_2554_;
v___y_2543_ = v___y_2555_;
v___y_2544_ = v___y_2556_;
v___y_2545_ = v___y_2557_;
v___y_2546_ = v___y_2558_;
v___y_2547_ = v___y_2559_;
v___y_2548_ = v___y_2560_;
v___y_2549_ = v___y_2563_;
goto v___jp_2541_;
}
else
{
lean_object* v_val_2567_; 
v_val_2567_ = lean_ctor_get(v___x_2566_, 0);
lean_inc(v_val_2567_);
lean_dec_ref_known(v___x_2566_, 1);
v___y_2509_ = v___y_2554_;
v___y_2510_ = v___y_2555_;
v___y_2511_ = v___y_2556_;
v___y_2512_ = v___y_2557_;
v___y_2513_ = v___y_2558_;
v___y_2514_ = v___y_2560_;
v___y_2515_ = v___y_2559_;
v___y_2516_ = v___y_2563_;
v_val_2517_ = v_val_2567_;
goto v___jp_2508_;
}
}
}
}
else
{
lean_dec_ref_known(v___y_2562_, 1);
lean_dec_ref(v___y_2563_);
lean_dec_ref(v___y_2560_);
lean_dec_ref(v___f_2379_);
v___y_2447_ = v___y_2555_;
v___y_2448_ = v___y_2557_;
v___y_2449_ = v___y_2558_;
v___y_2450_ = v___y_2559_;
v___y_2451_ = v___y_2554_;
v___y_2452_ = v___y_2556_;
goto v___jp_2446_;
}
}
else
{
lean_dec_ref(v___y_2563_);
lean_dec_ref(v___y_2560_);
lean_dec_ref(v___f_2379_);
if (lean_obj_tag(v___y_2562_) == 0)
{
v___y_2447_ = v___y_2555_;
v___y_2448_ = v___y_2557_;
v___y_2449_ = v___y_2558_;
v___y_2450_ = v___y_2559_;
v___y_2451_ = v___y_2554_;
v___y_2452_ = v___y_2556_;
goto v___jp_2446_;
}
else
{
lean_object* v___x_2568_; lean_object* v___x_2569_; 
lean_dec_ref_known(v___y_2562_, 1);
v___x_2568_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__29_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__29_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__29_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2569_ = l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1(v___x_2568_, v___y_2554_, v___y_2556_);
if (lean_obj_tag(v___x_2569_) == 0)
{
lean_dec_ref_known(v___x_2569_, 1);
v___y_2447_ = v___y_2555_;
v___y_2448_ = v___y_2557_;
v___y_2449_ = v___y_2558_;
v___y_2450_ = v___y_2559_;
v___y_2451_ = v___y_2554_;
v___y_2452_ = v___y_2556_;
goto v___jp_2446_;
}
else
{
lean_object* v_a_2570_; lean_object* v___x_2572_; uint8_t v_isShared_2573_; uint8_t v_isSharedCheck_2577_; 
lean_dec(v___y_2559_);
lean_dec(v___y_2558_);
lean_dec(v___y_2557_);
lean_dec(v___y_2555_);
v_a_2570_ = lean_ctor_get(v___x_2569_, 0);
v_isSharedCheck_2577_ = !lean_is_exclusive(v___x_2569_);
if (v_isSharedCheck_2577_ == 0)
{
v___x_2572_ = v___x_2569_;
v_isShared_2573_ = v_isSharedCheck_2577_;
goto v_resetjp_2571_;
}
else
{
lean_inc(v_a_2570_);
lean_dec(v___x_2569_);
v___x_2572_ = lean_box(0);
v_isShared_2573_ = v_isSharedCheck_2577_;
goto v_resetjp_2571_;
}
v_resetjp_2571_:
{
lean_object* v___x_2575_; 
if (v_isShared_2573_ == 0)
{
v___x_2575_ = v___x_2572_;
goto v_reusejp_2574_;
}
else
{
lean_object* v_reuseFailAlloc_2576_; 
v_reuseFailAlloc_2576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2576_, 0, v_a_2570_);
v___x_2575_ = v_reuseFailAlloc_2576_;
goto v_reusejp_2574_;
}
v_reusejp_2574_:
{
return v___x_2575_;
}
}
}
}
}
}
v___jp_2578_:
{
lean_object* v___x_2589_; 
lean_inc_ref(v___y_2586_);
v___x_2589_ = l_Lean_Environment_find_x3f(v___y_2586_, v_declName_2383_, v___x_2380_);
if (lean_obj_tag(v___x_2589_) == 1)
{
lean_object* v_val_2590_; lean_object* v___x_2591_; 
v_val_2590_ = lean_ctor_get(v___x_2589_, 0);
lean_inc(v_val_2590_);
lean_dec_ref_known(v___x_2589_, 1);
v___x_2591_ = l_Lean_Environment_find_x3f(v___y_2586_, v___y_2579_, v___x_2380_);
if (lean_obj_tag(v___x_2591_) == 1)
{
lean_object* v_val_2592_; uint8_t v___x_2593_; uint8_t v___x_2594_; uint8_t v___x_2595_; lean_object* v___x_2596_; uint64_t v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; 
v_val_2592_ = lean_ctor_get(v___x_2591_, 0);
lean_inc(v_val_2592_);
lean_dec_ref_known(v___x_2591_, 1);
v___x_2593_ = 1;
v___x_2594_ = 0;
v___x_2595_ = 2;
v___x_2596_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_2596_, 0, v___x_2380_);
lean_ctor_set_uint8(v___x_2596_, 1, v___x_2380_);
lean_ctor_set_uint8(v___x_2596_, 2, v___x_2380_);
lean_ctor_set_uint8(v___x_2596_, 3, v___x_2380_);
lean_ctor_set_uint8(v___x_2596_, 4, v___x_2380_);
lean_ctor_set_uint8(v___x_2596_, 5, v___y_2584_);
lean_ctor_set_uint8(v___x_2596_, 6, v___y_2584_);
lean_ctor_set_uint8(v___x_2596_, 7, v___x_2380_);
lean_ctor_set_uint8(v___x_2596_, 8, v___y_2584_);
lean_ctor_set_uint8(v___x_2596_, 9, v___x_2593_);
lean_ctor_set_uint8(v___x_2596_, 10, v___x_2594_);
lean_ctor_set_uint8(v___x_2596_, 11, v___y_2584_);
lean_ctor_set_uint8(v___x_2596_, 12, v___y_2584_);
lean_ctor_set_uint8(v___x_2596_, 13, v___y_2584_);
lean_ctor_set_uint8(v___x_2596_, 14, v___x_2595_);
lean_ctor_set_uint8(v___x_2596_, 15, v___y_2584_);
lean_ctor_set_uint8(v___x_2596_, 16, v___y_2584_);
lean_ctor_set_uint8(v___x_2596_, 17, v___y_2584_);
lean_ctor_set_uint8(v___x_2596_, 18, v___y_2584_);
lean_ctor_set_uint8(v___x_2596_, 19, v___x_2380_);
v___x_2597_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2596_);
v___x_2598_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2598_, 0, v___x_2596_);
lean_ctor_set_uint64(v___x_2598_, sizeof(void*)*1, v___x_2597_);
v___x_2599_ = lean_box(1);
v___x_2600_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__31_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__31_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__31_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2601_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__32_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2602_ = lean_box(0);
v___x_2603_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2603_, 0, v___x_2598_);
lean_ctor_set(v___x_2603_, 1, v___x_2599_);
lean_ctor_set(v___x_2603_, 2, v___x_2600_);
lean_ctor_set(v___x_2603_, 3, v___x_2601_);
lean_ctor_set(v___x_2603_, 4, v___x_2602_);
lean_ctor_set(v___x_2603_, 5, v___x_2506_);
lean_ctor_set(v___x_2603_, 6, v___x_2602_);
lean_ctor_set_uint8(v___x_2603_, sizeof(void*)*7, v___x_2380_);
lean_ctor_set_uint8(v___x_2603_, sizeof(void*)*7 + 1, v___x_2380_);
lean_ctor_set_uint8(v___x_2603_, sizeof(void*)*7 + 2, v___x_2380_);
lean_ctor_set_uint8(v___x_2603_, sizeof(void*)*7 + 3, v___x_2395_);
v___x_2604_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__36_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__36_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__36_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2605_ = lean_st_mk_ref(v___x_2604_);
v___x_2606_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq(v_val_2590_, v_val_2592_, v___x_2603_, v___x_2605_, v___y_2587_, v___y_2588_);
lean_dec_ref_known(v___x_2603_, 7);
if (lean_obj_tag(v___x_2606_) == 0)
{
lean_object* v_a_2607_; lean_object* v___x_2608_; uint8_t v___x_2609_; 
v_a_2607_ = lean_ctor_get(v___x_2606_, 0);
lean_inc(v_a_2607_);
lean_dec_ref_known(v___x_2606_, 1);
v___x_2608_ = lean_st_ref_get(v___x_2605_);
lean_dec(v___x_2605_);
lean_dec(v___x_2608_);
v___x_2609_ = lean_unbox(v_a_2607_);
lean_dec(v_a_2607_);
v___y_2554_ = v___y_2587_;
v___y_2555_ = v___y_2580_;
v___y_2556_ = v___y_2588_;
v___y_2557_ = v___y_2581_;
v___y_2558_ = v___y_2582_;
v___y_2559_ = v___y_2583_;
v___y_2560_ = v_val_2592_;
v___y_2561_ = v___y_2584_;
v___y_2562_ = v___y_2585_;
v___y_2563_ = v_val_2590_;
v_a_2564_ = v___x_2609_;
goto v___jp_2553_;
}
else
{
lean_dec(v___x_2605_);
if (lean_obj_tag(v___x_2606_) == 0)
{
lean_object* v_a_2610_; uint8_t v___x_2611_; 
v_a_2610_ = lean_ctor_get(v___x_2606_, 0);
lean_inc(v_a_2610_);
lean_dec_ref_known(v___x_2606_, 1);
v___x_2611_ = lean_unbox(v_a_2610_);
lean_dec(v_a_2610_);
v___y_2554_ = v___y_2587_;
v___y_2555_ = v___y_2580_;
v___y_2556_ = v___y_2588_;
v___y_2557_ = v___y_2581_;
v___y_2558_ = v___y_2582_;
v___y_2559_ = v___y_2583_;
v___y_2560_ = v_val_2592_;
v___y_2561_ = v___y_2584_;
v___y_2562_ = v___y_2585_;
v___y_2563_ = v_val_2590_;
v_a_2564_ = v___x_2611_;
goto v___jp_2553_;
}
else
{
lean_object* v_a_2612_; lean_object* v___x_2614_; uint8_t v_isShared_2615_; uint8_t v_isSharedCheck_2619_; 
lean_dec(v_val_2592_);
lean_dec(v_val_2590_);
lean_dec(v___y_2585_);
lean_dec(v___y_2583_);
lean_dec(v___y_2582_);
lean_dec(v___y_2581_);
lean_dec(v___y_2580_);
lean_dec_ref(v___f_2379_);
v_a_2612_ = lean_ctor_get(v___x_2606_, 0);
v_isSharedCheck_2619_ = !lean_is_exclusive(v___x_2606_);
if (v_isSharedCheck_2619_ == 0)
{
v___x_2614_ = v___x_2606_;
v_isShared_2615_ = v_isSharedCheck_2619_;
goto v_resetjp_2613_;
}
else
{
lean_inc(v_a_2612_);
lean_dec(v___x_2606_);
v___x_2614_ = lean_box(0);
v_isShared_2615_ = v_isSharedCheck_2619_;
goto v_resetjp_2613_;
}
v_resetjp_2613_:
{
lean_object* v___x_2617_; 
if (v_isShared_2615_ == 0)
{
v___x_2617_ = v___x_2614_;
goto v_reusejp_2616_;
}
else
{
lean_object* v_reuseFailAlloc_2618_; 
v_reuseFailAlloc_2618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2618_, 0, v_a_2612_);
v___x_2617_ = v_reuseFailAlloc_2618_;
goto v_reusejp_2616_;
}
v_reusejp_2616_:
{
return v___x_2617_;
}
}
}
}
}
else
{
lean_dec(v___x_2591_);
lean_dec(v_val_2590_);
lean_dec(v___y_2585_);
lean_dec_ref(v___f_2379_);
v___y_2447_ = v___y_2580_;
v___y_2448_ = v___y_2581_;
v___y_2449_ = v___y_2582_;
v___y_2450_ = v___y_2583_;
v___y_2451_ = v___y_2587_;
v___y_2452_ = v___y_2588_;
goto v___jp_2446_;
}
}
else
{
lean_dec(v___x_2589_);
lean_dec_ref(v___y_2586_);
lean_dec(v___y_2585_);
lean_dec(v___y_2579_);
lean_dec_ref(v___f_2379_);
v___y_2447_ = v___y_2580_;
v___y_2448_ = v___y_2581_;
v___y_2449_ = v___y_2582_;
v___y_2450_ = v___y_2583_;
v___y_2451_ = v___y_2587_;
v___y_2452_ = v___y_2588_;
goto v___jp_2446_;
}
}
v___jp_2620_:
{
lean_object* v___x_2632_; 
v___x_2632_ = l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1(v_msg_2629_, v___y_2630_, v___y_2631_);
if (lean_obj_tag(v___x_2632_) == 0)
{
lean_dec_ref_known(v___x_2632_, 1);
v___y_2579_ = v___y_2621_;
v___y_2580_ = v___y_2622_;
v___y_2581_ = v___y_2623_;
v___y_2582_ = v___y_2624_;
v___y_2583_ = v___y_2625_;
v___y_2584_ = v___y_2626_;
v___y_2585_ = v___y_2628_;
v___y_2586_ = v___y_2627_;
v___y_2587_ = v___y_2630_;
v___y_2588_ = v___y_2631_;
goto v___jp_2578_;
}
else
{
lean_object* v_a_2633_; lean_object* v___x_2635_; uint8_t v_isShared_2636_; uint8_t v_isSharedCheck_2640_; 
lean_dec(v___y_2628_);
lean_dec_ref(v___y_2627_);
lean_dec(v___y_2625_);
lean_dec(v___y_2624_);
lean_dec(v___y_2623_);
lean_dec(v___y_2622_);
lean_dec(v___y_2621_);
lean_dec(v_declName_2383_);
lean_dec_ref(v___f_2379_);
v_a_2633_ = lean_ctor_get(v___x_2632_, 0);
v_isSharedCheck_2640_ = !lean_is_exclusive(v___x_2632_);
if (v_isSharedCheck_2640_ == 0)
{
v___x_2635_ = v___x_2632_;
v_isShared_2636_ = v_isSharedCheck_2640_;
goto v_resetjp_2634_;
}
else
{
lean_inc(v_a_2633_);
lean_dec(v___x_2632_);
v___x_2635_ = lean_box(0);
v_isShared_2636_ = v_isSharedCheck_2640_;
goto v_resetjp_2634_;
}
v_resetjp_2634_:
{
lean_object* v___x_2638_; 
if (v_isShared_2636_ == 0)
{
v___x_2638_ = v___x_2635_;
goto v_reusejp_2637_;
}
else
{
lean_object* v_reuseFailAlloc_2639_; 
v_reuseFailAlloc_2639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2639_, 0, v_a_2633_);
v___x_2638_ = v_reuseFailAlloc_2639_;
goto v_reusejp_2637_;
}
v_reusejp_2637_:
{
return v___x_2638_;
}
}
}
}
v___jp_2641_:
{
if (lean_obj_tag(v_a_2655_) == 1)
{
lean_object* v_val_2656_; lean_object* v___x_2658_; uint8_t v_isShared_2659_; uint8_t v_isSharedCheck_2686_; 
v_val_2656_ = lean_ctor_get(v_a_2655_, 0);
v_isSharedCheck_2686_ = !lean_is_exclusive(v_a_2655_);
if (v_isSharedCheck_2686_ == 0)
{
v___x_2658_ = v_a_2655_;
v_isShared_2659_ = v_isSharedCheck_2686_;
goto v_resetjp_2657_;
}
else
{
lean_inc(v_val_2656_);
lean_dec(v_a_2655_);
v___x_2658_ = lean_box(0);
v_isShared_2659_ = v_isSharedCheck_2686_;
goto v_resetjp_2657_;
}
v_resetjp_2657_:
{
lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; uint8_t v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2673_; 
v___x_2660_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__38_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__38_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__38_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2661_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2661_, 0, v___x_2660_);
lean_ctor_set(v___x_2661_, 1, v___y_2643_);
v___x_2662_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__40_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__40_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__40_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2663_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2663_, 0, v___x_2661_);
lean_ctor_set(v___x_2663_, 1, v___x_2662_);
v___x_2664_ = l_Lean_Name_toString(v_val_2656_, v___x_2395_);
v___x_2665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2665_, 0, v___x_2664_);
v___x_2666_ = lean_box(0);
v___x_2667_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2667_, 0, v___x_2665_);
lean_ctor_set(v___x_2667_, 1, v___x_2666_);
lean_ctor_set(v___x_2667_, 2, v___x_2666_);
lean_ctor_set(v___x_2667_, 3, v___x_2666_);
lean_ctor_set(v___x_2667_, 4, v___x_2666_);
lean_ctor_set(v___x_2667_, 5, v___x_2666_);
v___x_2668_ = 0;
v___x_2669_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2669_, 0, v___x_2667_);
lean_ctor_set(v___x_2669_, 1, v___x_2666_);
lean_ctor_set(v___x_2669_, 2, v___x_2666_);
lean_ctor_set_uint8(v___x_2669_, sizeof(void*)*3, v___x_2668_);
v___x_2670_ = lean_mk_empty_array_with_capacity(v___x_2507_);
v___x_2671_ = lean_array_push(v___x_2670_, v___x_2669_);
if (v_isShared_2659_ == 0)
{
lean_ctor_set(v___x_2658_, 0, v___y_2644_);
v___x_2673_ = v___x_2658_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2685_; 
v_reuseFailAlloc_2685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2685_, 0, v___y_2644_);
v___x_2673_ = v_reuseFailAlloc_2685_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
lean_object* v___x_2674_; 
v___x_2674_ = l_Lean_MessageData_hint(v___x_2663_, v___x_2671_, v___x_2673_, v___x_2666_, v___x_2380_, v___y_2651_, v___y_2649_);
lean_dec_ref(v___x_2671_);
if (lean_obj_tag(v___x_2674_) == 0)
{
lean_object* v_a_2675_; lean_object* v___x_2676_; 
v_a_2675_ = lean_ctor_get(v___x_2674_, 0);
lean_inc(v_a_2675_);
lean_dec_ref_known(v___x_2674_, 1);
v___x_2676_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2676_, 0, v___y_2653_);
lean_ctor_set(v___x_2676_, 1, v_a_2675_);
v___y_2621_ = v___y_2650_;
v___y_2622_ = v___y_2642_;
v___y_2623_ = v___y_2645_;
v___y_2624_ = v___y_2652_;
v___y_2625_ = v___y_2654_;
v___y_2626_ = v___y_2646_;
v___y_2627_ = v___y_2647_;
v___y_2628_ = v___y_2648_;
v_msg_2629_ = v___x_2676_;
v___y_2630_ = v___y_2651_;
v___y_2631_ = v___y_2649_;
goto v___jp_2620_;
}
else
{
lean_object* v_a_2677_; lean_object* v___x_2679_; uint8_t v_isShared_2680_; uint8_t v_isSharedCheck_2684_; 
lean_dec(v___y_2654_);
lean_dec_ref(v___y_2653_);
lean_dec(v___y_2652_);
lean_dec(v___y_2650_);
lean_dec(v___y_2648_);
lean_dec_ref(v___y_2647_);
lean_dec(v___y_2645_);
lean_dec(v___y_2642_);
lean_dec(v_declName_2383_);
lean_dec_ref(v___f_2379_);
v_a_2677_ = lean_ctor_get(v___x_2674_, 0);
v_isSharedCheck_2684_ = !lean_is_exclusive(v___x_2674_);
if (v_isSharedCheck_2684_ == 0)
{
v___x_2679_ = v___x_2674_;
v_isShared_2680_ = v_isSharedCheck_2684_;
goto v_resetjp_2678_;
}
else
{
lean_inc(v_a_2677_);
lean_dec(v___x_2674_);
v___x_2679_ = lean_box(0);
v_isShared_2680_ = v_isSharedCheck_2684_;
goto v_resetjp_2678_;
}
v_resetjp_2678_:
{
lean_object* v___x_2682_; 
if (v_isShared_2680_ == 0)
{
v___x_2682_ = v___x_2679_;
goto v_reusejp_2681_;
}
else
{
lean_object* v_reuseFailAlloc_2683_; 
v_reuseFailAlloc_2683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2683_, 0, v_a_2677_);
v___x_2682_ = v_reuseFailAlloc_2683_;
goto v_reusejp_2681_;
}
v_reusejp_2681_:
{
return v___x_2682_;
}
}
}
}
}
}
else
{
lean_dec(v_a_2655_);
lean_dec(v___y_2644_);
lean_dec_ref(v___y_2643_);
v___y_2621_ = v___y_2650_;
v___y_2622_ = v___y_2642_;
v___y_2623_ = v___y_2645_;
v___y_2624_ = v___y_2652_;
v___y_2625_ = v___y_2654_;
v___y_2626_ = v___y_2646_;
v___y_2627_ = v___y_2647_;
v___y_2628_ = v___y_2648_;
v_msg_2629_ = v___y_2653_;
v___y_2630_ = v___y_2651_;
v___y_2631_ = v___y_2649_;
goto v___jp_2620_;
}
}
v___jp_2687_:
{
if (lean_obj_tag(v___y_2690_) == 1)
{
lean_object* v_val_2695_; lean_object* v___x_2696_; 
v_val_2695_ = lean_ctor_get(v___y_2690_, 0);
lean_inc(v_val_2695_);
v___x_2696_ = l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2(v_val_2695_, v___x_2380_, v___y_2693_, v___y_2694_);
if (lean_obj_tag(v___x_2696_) == 0)
{
lean_object* v___x_2697_; lean_object* v_a_2698_; lean_object* v___x_2699_; uint8_t v___x_2700_; 
lean_dec_ref_known(v___x_2696_, 1);
v___x_2697_ = l_Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__3(v___y_2693_, v___y_2694_);
v_a_2698_ = lean_ctor_get(v___x_2697_, 0);
lean_inc(v_a_2698_);
lean_dec_ref(v___x_2697_);
v___x_2699_ = l_Lean_Linter_linter_deprecated;
v___x_2700_ = l_Lean_Linter_getLinterValue(v___x_2699_, v_a_2698_);
lean_dec(v_a_2698_);
if (v___x_2700_ == 0)
{
lean_dec(v___y_2692_);
lean_dec(v_declName_2383_);
lean_dec_ref(v___x_2381_);
lean_dec_ref(v___f_2379_);
v___y_2447_ = v___y_2688_;
v___y_2448_ = v___y_2689_;
v___y_2449_ = v___y_2690_;
v___y_2450_ = v___y_2691_;
v___y_2451_ = v___y_2693_;
v___y_2452_ = v___y_2694_;
goto v___jp_2446_;
}
else
{
lean_object* v___x_2701_; lean_object* v_toCold_2702_; lean_object* v_env_2703_; lean_object* v_options_2704_; lean_object* v___x_2705_; uint8_t v___x_2706_; 
lean_inc(v_val_2695_);
v___x_2701_ = lean_st_ref_get(v___y_2694_);
v_toCold_2702_ = lean_ctor_get(v___y_2693_, 0);
v_env_2703_ = lean_ctor_get(v___x_2701_, 0);
lean_inc_ref(v_env_2703_);
lean_dec(v___x_2701_);
v_options_2704_ = lean_ctor_get(v_toCold_2702_, 2);
v___x_2705_ = l_Lean_Linter_linter_deprecated_deprecatedTarget;
v___x_2706_ = l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__4(v_options_2704_, v___x_2705_);
if (v___x_2706_ == 0)
{
lean_dec_ref(v___x_2381_);
v___y_2579_ = v_val_2695_;
v___y_2580_ = v___y_2688_;
v___y_2581_ = v___y_2689_;
v___y_2582_ = v___y_2690_;
v___y_2583_ = v___y_2691_;
v___y_2584_ = v___x_2700_;
v___y_2585_ = v___y_2692_;
v___y_2586_ = v_env_2703_;
v___y_2587_ = v___y_2693_;
v___y_2588_ = v___y_2694_;
goto v___jp_2578_;
}
else
{
lean_object* v___x_2707_; 
lean_inc(v_val_2695_);
lean_inc_ref(v_env_2703_);
v___x_2707_ = l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg(v___x_2381_, v_a_2382_, v___x_2380_, v_env_2703_, v_val_2695_);
if (lean_obj_tag(v___x_2707_) == 1)
{
lean_object* v_val_2708_; lean_object* v_name_2709_; lean_object* v_newName_x3f_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; 
v_val_2708_ = lean_ctor_get(v___x_2707_, 0);
lean_inc(v_val_2708_);
lean_dec_ref_known(v___x_2707_, 1);
v_name_2709_ = lean_ctor_get(v___x_2705_, 0);
v_newName_x3f_2710_ = lean_ctor_get(v_val_2708_, 0);
lean_inc(v_newName_x3f_2710_);
lean_dec(v_val_2708_);
v___x_2711_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__42_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__42_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__42_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
lean_inc(v_name_2709_);
v___x_2712_ = l_Lean_MessageData_ofName(v_name_2709_);
v___x_2713_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2713_, 0, v___x_2711_);
lean_ctor_set(v___x_2713_, 1, v___x_2712_);
v___x_2714_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__44_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__44_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__44_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2715_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2715_, 0, v___x_2713_);
lean_ctor_set(v___x_2715_, 1, v___x_2714_);
v___x_2716_ = l_Lean_MessageData_note(v___x_2715_);
if (lean_obj_tag(v_newName_x3f_2710_) == 0)
{
lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; 
v___x_2717_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__46_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__46_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__46_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
lean_inc(v_val_2695_);
v___x_2718_ = l_Lean_MessageData_ofConstName(v_val_2695_, v___x_2395_);
v___x_2719_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2719_, 0, v___x_2717_);
lean_ctor_set(v___x_2719_, 1, v___x_2718_);
v___x_2720_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__48_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__48_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__48_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2721_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2721_, 0, v___x_2719_);
lean_ctor_set(v___x_2721_, 1, v___x_2720_);
lean_inc(v_declName_2383_);
v___x_2722_ = l_Lean_MessageData_ofConstName(v_declName_2383_, v___x_2395_);
v___x_2723_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2723_, 0, v___x_2721_);
lean_ctor_set(v___x_2723_, 1, v___x_2722_);
v___x_2724_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__50_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__50_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__50_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2725_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2725_, 0, v___x_2723_);
lean_ctor_set(v___x_2725_, 1, v___x_2724_);
v___x_2726_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2726_, 0, v___x_2725_);
lean_ctor_set(v___x_2726_, 1, v___x_2716_);
v___x_2727_ = l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1(v___x_2726_, v___y_2693_, v___y_2694_);
if (lean_obj_tag(v___x_2727_) == 0)
{
lean_dec_ref_known(v___x_2727_, 1);
v___y_2579_ = v_val_2695_;
v___y_2580_ = v___y_2688_;
v___y_2581_ = v___y_2689_;
v___y_2582_ = v___y_2690_;
v___y_2583_ = v___y_2691_;
v___y_2584_ = v___x_2700_;
v___y_2585_ = v___y_2692_;
v___y_2586_ = v_env_2703_;
v___y_2587_ = v___y_2693_;
v___y_2588_ = v___y_2694_;
goto v___jp_2578_;
}
else
{
lean_object* v_a_2728_; lean_object* v___x_2730_; uint8_t v_isShared_2731_; uint8_t v_isSharedCheck_2735_; 
lean_dec_ref(v_env_2703_);
lean_dec_ref_known(v___y_2690_, 1);
lean_dec(v_val_2695_);
lean_dec(v___y_2692_);
lean_dec(v___y_2691_);
lean_dec(v___y_2689_);
lean_dec(v___y_2688_);
lean_dec(v_declName_2383_);
lean_dec_ref(v___f_2379_);
v_a_2728_ = lean_ctor_get(v___x_2727_, 0);
v_isSharedCheck_2735_ = !lean_is_exclusive(v___x_2727_);
if (v_isSharedCheck_2735_ == 0)
{
v___x_2730_ = v___x_2727_;
v_isShared_2731_ = v_isSharedCheck_2735_;
goto v_resetjp_2729_;
}
else
{
lean_inc(v_a_2728_);
lean_dec(v___x_2727_);
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
else
{
lean_object* v_val_2736_; uint8_t v___x_2737_; 
v_val_2736_ = lean_ctor_get(v_newName_x3f_2710_, 0);
lean_inc(v_val_2736_);
lean_dec_ref_known(v_newName_x3f_2710_, 1);
v___x_2737_ = lean_name_eq(v_val_2736_, v_val_2695_);
if (v___x_2737_ == 0)
{
if (v___x_2706_ == 0)
{
lean_dec(v_val_2736_);
lean_dec_ref(v___x_2716_);
v___y_2579_ = v_val_2695_;
v___y_2580_ = v___y_2688_;
v___y_2581_ = v___y_2689_;
v___y_2582_ = v___y_2690_;
v___y_2583_ = v___y_2691_;
v___y_2584_ = v___x_2700_;
v___y_2585_ = v___y_2692_;
v___y_2586_ = v_env_2703_;
v___y_2587_ = v___y_2693_;
v___y_2588_ = v___y_2694_;
goto v___jp_2578_;
}
else
{
lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; 
v___x_2738_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__46_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__46_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__46_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
lean_inc(v_val_2695_);
v___x_2739_ = l_Lean_MessageData_ofConstName(v_val_2695_, v___x_2395_);
v___x_2740_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2740_, 0, v___x_2738_);
lean_ctor_set(v___x_2740_, 1, v___x_2739_);
v___x_2741_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__52_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__52_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__52_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2742_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2742_, 0, v___x_2740_);
lean_ctor_set(v___x_2742_, 1, v___x_2741_);
lean_inc(v_val_2736_);
v___x_2743_ = l_Lean_MessageData_ofConstName(v_val_2736_, v___x_2395_);
lean_inc_ref_n(v___x_2743_, 2);
v___x_2744_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2744_, 0, v___x_2742_);
lean_ctor_set(v___x_2744_, 1, v___x_2743_);
v___x_2745_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__54_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__54_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__54_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2746_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2746_, 0, v___x_2744_);
lean_ctor_set(v___x_2746_, 1, v___x_2745_);
lean_inc(v_declName_2383_);
v___x_2747_ = l_Lean_MessageData_ofConstName(v_declName_2383_, v___x_2395_);
v___x_2748_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2748_, 0, v___x_2746_);
lean_ctor_set(v___x_2748_, 1, v___x_2747_);
v___x_2749_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__56_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__56_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__56_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2750_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2750_, 0, v___x_2748_);
lean_ctor_set(v___x_2750_, 1, v___x_2749_);
v___x_2751_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2751_, 0, v___x_2750_);
lean_ctor_set(v___x_2751_, 1, v___x_2743_);
v___x_2752_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__58_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__58_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__58_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2753_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2753_, 0, v___x_2751_);
lean_ctor_set(v___x_2753_, 1, v___x_2752_);
v___x_2754_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2754_, 0, v___x_2753_);
lean_ctor_set(v___x_2754_, 1, v___x_2716_);
if (lean_obj_tag(v___y_2689_) == 1)
{
lean_object* v_val_2755_; lean_object* v___x_2756_; 
v_val_2755_ = lean_ctor_get(v___y_2689_, 0);
v___x_2756_ = l_Lean_Syntax_getRange_x3f(v_val_2755_, v___x_2395_);
if (lean_obj_tag(v___x_2756_) == 0)
{
lean_dec_ref(v___x_2743_);
lean_dec(v_val_2736_);
v___y_2621_ = v_val_2695_;
v___y_2622_ = v___y_2688_;
v___y_2623_ = v___y_2689_;
v___y_2624_ = v___y_2690_;
v___y_2625_ = v___y_2691_;
v___y_2626_ = v___x_2700_;
v___y_2627_ = v_env_2703_;
v___y_2628_ = v___y_2692_;
v_msg_2629_ = v___x_2754_;
v___y_2630_ = v___y_2693_;
v___y_2631_ = v___y_2694_;
goto v___jp_2620_;
}
else
{
uint8_t v___x_2757_; uint8_t v___x_2758_; uint8_t v___x_2759_; lean_object* v___x_2760_; uint64_t v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; 
lean_inc(v_val_2755_);
lean_dec_ref_known(v___x_2756_, 1);
v___x_2757_ = 1;
v___x_2758_ = 0;
v___x_2759_ = 2;
v___x_2760_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_2760_, 0, v___x_2737_);
lean_ctor_set_uint8(v___x_2760_, 1, v___x_2737_);
lean_ctor_set_uint8(v___x_2760_, 2, v___x_2737_);
lean_ctor_set_uint8(v___x_2760_, 3, v___x_2737_);
lean_ctor_set_uint8(v___x_2760_, 4, v___x_2737_);
lean_ctor_set_uint8(v___x_2760_, 5, v___x_2706_);
lean_ctor_set_uint8(v___x_2760_, 6, v___x_2706_);
lean_ctor_set_uint8(v___x_2760_, 7, v___x_2737_);
lean_ctor_set_uint8(v___x_2760_, 8, v___x_2706_);
lean_ctor_set_uint8(v___x_2760_, 9, v___x_2757_);
lean_ctor_set_uint8(v___x_2760_, 10, v___x_2758_);
lean_ctor_set_uint8(v___x_2760_, 11, v___x_2706_);
lean_ctor_set_uint8(v___x_2760_, 12, v___x_2706_);
lean_ctor_set_uint8(v___x_2760_, 13, v___x_2706_);
lean_ctor_set_uint8(v___x_2760_, 14, v___x_2759_);
lean_ctor_set_uint8(v___x_2760_, 15, v___x_2706_);
lean_ctor_set_uint8(v___x_2760_, 16, v___x_2706_);
lean_ctor_set_uint8(v___x_2760_, 17, v___x_2706_);
lean_ctor_set_uint8(v___x_2760_, 18, v___x_2706_);
lean_ctor_set_uint8(v___x_2760_, 19, v___x_2737_);
v___x_2761_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2760_);
v___x_2762_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2762_, 0, v___x_2760_);
lean_ctor_set_uint64(v___x_2762_, sizeof(void*)*1, v___x_2761_);
v___x_2763_ = lean_box(1);
v___x_2764_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__31_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__31_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__31_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2765_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__32_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2766_ = lean_box(0);
v___x_2767_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2767_, 0, v___x_2762_);
lean_ctor_set(v___x_2767_, 1, v___x_2763_);
lean_ctor_set(v___x_2767_, 2, v___x_2764_);
lean_ctor_set(v___x_2767_, 3, v___x_2765_);
lean_ctor_set(v___x_2767_, 4, v___x_2766_);
lean_ctor_set(v___x_2767_, 5, v___x_2506_);
lean_ctor_set(v___x_2767_, 6, v___x_2766_);
lean_ctor_set_uint8(v___x_2767_, sizeof(void*)*7, v___x_2380_);
lean_ctor_set_uint8(v___x_2767_, sizeof(void*)*7 + 1, v___x_2380_);
lean_ctor_set_uint8(v___x_2767_, sizeof(void*)*7 + 2, v___x_2380_);
lean_ctor_set_uint8(v___x_2767_, sizeof(void*)*7 + 3, v___x_2395_);
v___x_2768_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__36_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__36_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__36_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2769_ = lean_st_mk_ref(v___x_2768_);
v___x_2770_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5(v_val_2736_, v___x_2380_, v___x_2767_, v___x_2769_, v___y_2693_, v___y_2694_);
lean_dec_ref_known(v___x_2767_, 7);
if (lean_obj_tag(v___x_2770_) == 0)
{
lean_object* v_a_2771_; lean_object* v___x_2772_; 
v_a_2771_ = lean_ctor_get(v___x_2770_, 0);
lean_inc(v_a_2771_);
lean_dec_ref_known(v___x_2770_, 1);
v___x_2772_ = lean_st_ref_get(v___x_2769_);
lean_dec(v___x_2769_);
lean_dec(v___x_2772_);
v___y_2642_ = v___y_2688_;
v___y_2643_ = v___x_2743_;
v___y_2644_ = v_val_2755_;
v___y_2645_ = v___y_2689_;
v___y_2646_ = v___x_2700_;
v___y_2647_ = v_env_2703_;
v___y_2648_ = v___y_2692_;
v___y_2649_ = v___y_2694_;
v___y_2650_ = v_val_2695_;
v___y_2651_ = v___y_2693_;
v___y_2652_ = v___y_2690_;
v___y_2653_ = v___x_2754_;
v___y_2654_ = v___y_2691_;
v_a_2655_ = v_a_2771_;
goto v___jp_2641_;
}
else
{
lean_dec(v___x_2769_);
if (lean_obj_tag(v___x_2770_) == 0)
{
lean_object* v_a_2773_; 
v_a_2773_ = lean_ctor_get(v___x_2770_, 0);
lean_inc(v_a_2773_);
lean_dec_ref_known(v___x_2770_, 1);
v___y_2642_ = v___y_2688_;
v___y_2643_ = v___x_2743_;
v___y_2644_ = v_val_2755_;
v___y_2645_ = v___y_2689_;
v___y_2646_ = v___x_2700_;
v___y_2647_ = v_env_2703_;
v___y_2648_ = v___y_2692_;
v___y_2649_ = v___y_2694_;
v___y_2650_ = v_val_2695_;
v___y_2651_ = v___y_2693_;
v___y_2652_ = v___y_2690_;
v___y_2653_ = v___x_2754_;
v___y_2654_ = v___y_2691_;
v_a_2655_ = v_a_2773_;
goto v___jp_2641_;
}
else
{
lean_object* v_a_2774_; lean_object* v___x_2776_; uint8_t v_isShared_2777_; uint8_t v_isSharedCheck_2781_; 
lean_dec_ref_known(v___y_2689_, 1);
lean_dec(v_val_2755_);
lean_dec_ref_known(v___x_2754_, 2);
lean_dec_ref(v___x_2743_);
lean_dec_ref(v_env_2703_);
lean_dec(v_val_2695_);
lean_dec_ref_known(v___y_2690_, 1);
lean_dec(v___y_2692_);
lean_dec(v___y_2691_);
lean_dec(v___y_2688_);
lean_dec(v_declName_2383_);
lean_dec_ref(v___f_2379_);
v_a_2774_ = lean_ctor_get(v___x_2770_, 0);
v_isSharedCheck_2781_ = !lean_is_exclusive(v___x_2770_);
if (v_isSharedCheck_2781_ == 0)
{
v___x_2776_ = v___x_2770_;
v_isShared_2777_ = v_isSharedCheck_2781_;
goto v_resetjp_2775_;
}
else
{
lean_inc(v_a_2774_);
lean_dec(v___x_2770_);
v___x_2776_ = lean_box(0);
v_isShared_2777_ = v_isSharedCheck_2781_;
goto v_resetjp_2775_;
}
v_resetjp_2775_:
{
lean_object* v___x_2779_; 
if (v_isShared_2777_ == 0)
{
v___x_2779_ = v___x_2776_;
goto v_reusejp_2778_;
}
else
{
lean_object* v_reuseFailAlloc_2780_; 
v_reuseFailAlloc_2780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2780_, 0, v_a_2774_);
v___x_2779_ = v_reuseFailAlloc_2780_;
goto v_reusejp_2778_;
}
v_reusejp_2778_:
{
return v___x_2779_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_2743_);
lean_dec(v_val_2736_);
v___y_2621_ = v_val_2695_;
v___y_2622_ = v___y_2688_;
v___y_2623_ = v___y_2689_;
v___y_2624_ = v___y_2690_;
v___y_2625_ = v___y_2691_;
v___y_2626_ = v___x_2700_;
v___y_2627_ = v_env_2703_;
v___y_2628_ = v___y_2692_;
v_msg_2629_ = v___x_2754_;
v___y_2630_ = v___y_2693_;
v___y_2631_ = v___y_2694_;
goto v___jp_2620_;
}
}
}
else
{
lean_dec(v_val_2736_);
lean_dec_ref(v___x_2716_);
v___y_2579_ = v_val_2695_;
v___y_2580_ = v___y_2688_;
v___y_2581_ = v___y_2689_;
v___y_2582_ = v___y_2690_;
v___y_2583_ = v___y_2691_;
v___y_2584_ = v___x_2700_;
v___y_2585_ = v___y_2692_;
v___y_2586_ = v_env_2703_;
v___y_2587_ = v___y_2693_;
v___y_2588_ = v___y_2694_;
goto v___jp_2578_;
}
}
}
else
{
lean_dec(v___x_2707_);
v___y_2579_ = v_val_2695_;
v___y_2580_ = v___y_2688_;
v___y_2581_ = v___y_2689_;
v___y_2582_ = v___y_2690_;
v___y_2583_ = v___y_2691_;
v___y_2584_ = v___x_2700_;
v___y_2585_ = v___y_2692_;
v___y_2586_ = v_env_2703_;
v___y_2587_ = v___y_2693_;
v___y_2588_ = v___y_2694_;
goto v___jp_2578_;
}
}
}
}
else
{
lean_object* v_a_2782_; lean_object* v___x_2784_; uint8_t v_isShared_2785_; uint8_t v_isSharedCheck_2789_; 
lean_dec_ref_known(v___y_2690_, 1);
lean_dec(v___y_2692_);
lean_dec(v___y_2691_);
lean_dec(v___y_2689_);
lean_dec(v___y_2688_);
lean_dec(v_declName_2383_);
lean_dec_ref(v___x_2381_);
lean_dec_ref(v___f_2379_);
v_a_2782_ = lean_ctor_get(v___x_2696_, 0);
v_isSharedCheck_2789_ = !lean_is_exclusive(v___x_2696_);
if (v_isSharedCheck_2789_ == 0)
{
v___x_2784_ = v___x_2696_;
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
else
{
lean_inc(v_a_2782_);
lean_dec(v___x_2696_);
v___x_2784_ = lean_box(0);
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
v_resetjp_2783_:
{
lean_object* v___x_2787_; 
if (v_isShared_2785_ == 0)
{
v___x_2787_ = v___x_2784_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2788_; 
v_reuseFailAlloc_2788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2788_, 0, v_a_2782_);
v___x_2787_ = v_reuseFailAlloc_2788_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
return v___x_2787_;
}
}
}
}
else
{
lean_dec(v___y_2692_);
lean_dec(v_declName_2383_);
lean_dec_ref(v___x_2381_);
lean_dec_ref(v___f_2379_);
v___y_2447_ = v___y_2688_;
v___y_2448_ = v___y_2689_;
v___y_2449_ = v___y_2690_;
v___y_2450_ = v___y_2691_;
v___y_2451_ = v___y_2693_;
v___y_2452_ = v___y_2694_;
goto v___jp_2446_;
}
}
v___jp_2790_:
{
lean_object* v___x_2798_; uint8_t v___x_2799_; 
lean_inc(v_declName_2383_);
v___x_2798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2798_, 0, v_declName_2383_);
v___x_2799_ = l_Option_instBEq_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__6(v_a_2797_, v___x_2798_);
lean_dec_ref_known(v___x_2798_, 1);
if (v___x_2799_ == 0)
{
v___y_2688_ = v___y_2791_;
v___y_2689_ = v___y_2793_;
v___y_2690_ = v_a_2797_;
v___y_2691_ = v___y_2794_;
v___y_2692_ = v___y_2796_;
v___y_2693_ = v___y_2792_;
v___y_2694_ = v___y_2795_;
goto v___jp_2687_;
}
else
{
lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v_a_2806_; lean_object* v___x_2808_; uint8_t v_isShared_2809_; uint8_t v_isSharedCheck_2813_; 
lean_dec(v_a_2797_);
lean_dec(v___y_2796_);
lean_dec(v___y_2794_);
lean_dec(v___y_2793_);
lean_dec(v___y_2791_);
lean_dec_ref(v___x_2381_);
lean_dec_ref(v___f_2379_);
v___x_2800_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__60_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__60_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__60_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2801_ = l_Lean_MessageData_ofConstName(v_declName_2383_, v___x_2395_);
v___x_2802_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2802_, 0, v___x_2800_);
lean_ctor_set(v___x_2802_, 1, v___x_2801_);
v___x_2803_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__62_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__62_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__62_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2804_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2804_, 0, v___x_2802_);
lean_ctor_set(v___x_2804_, 1, v___x_2803_);
v___x_2805_ = l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0___redArg(v___x_2804_, v___y_2792_, v___y_2795_);
v_a_2806_ = lean_ctor_get(v___x_2805_, 0);
v_isSharedCheck_2813_ = !lean_is_exclusive(v___x_2805_);
if (v_isSharedCheck_2813_ == 0)
{
v___x_2808_ = v___x_2805_;
v_isShared_2809_ = v_isSharedCheck_2813_;
goto v_resetjp_2807_;
}
else
{
lean_inc(v_a_2806_);
lean_dec(v___x_2805_);
v___x_2808_ = lean_box(0);
v_isShared_2809_ = v_isSharedCheck_2813_;
goto v_resetjp_2807_;
}
v_resetjp_2807_:
{
lean_object* v___x_2811_; 
if (v_isShared_2809_ == 0)
{
v___x_2811_ = v___x_2808_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2812_; 
v_reuseFailAlloc_2812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2812_, 0, v_a_2806_);
v___x_2811_ = v_reuseFailAlloc_2812_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
return v___x_2811_;
}
}
}
}
v___jp_2814_:
{
if (lean_obj_tag(v___y_2816_) == 0)
{
lean_object* v___x_2821_; 
v___x_2821_ = lean_box(0);
v___y_2791_ = v___y_2815_;
v___y_2792_ = v___y_2819_;
v___y_2793_ = v___y_2816_;
v___y_2794_ = v_since_x3f_2818_;
v___y_2795_ = v___y_2820_;
v___y_2796_ = v___y_2817_;
v_a_2797_ = v___x_2821_;
goto v___jp_2790_;
}
else
{
lean_object* v_val_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; 
v_val_2822_ = lean_ctor_get(v___y_2816_, 0);
v___x_2823_ = lean_box(0);
lean_inc(v_val_2822_);
v___x_2824_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v_val_2822_, v___x_2823_, v___y_2819_, v___y_2820_);
if (lean_obj_tag(v___x_2824_) == 0)
{
lean_object* v_a_2825_; lean_object* v___x_2826_; 
v_a_2825_ = lean_ctor_get(v___x_2824_, 0);
lean_inc(v_a_2825_);
lean_dec_ref_known(v___x_2824_, 1);
v___x_2826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2826_, 0, v_a_2825_);
v___y_2791_ = v___y_2815_;
v___y_2792_ = v___y_2819_;
v___y_2793_ = v___y_2816_;
v___y_2794_ = v_since_x3f_2818_;
v___y_2795_ = v___y_2820_;
v___y_2796_ = v___y_2817_;
v_a_2797_ = v___x_2826_;
goto v___jp_2790_;
}
else
{
lean_object* v_a_2827_; lean_object* v___x_2829_; uint8_t v_isShared_2830_; uint8_t v_isSharedCheck_2834_; 
lean_dec_ref_known(v___y_2816_, 1);
lean_dec(v_since_x3f_2818_);
lean_dec(v___y_2817_);
lean_dec(v___y_2815_);
lean_dec(v_declName_2383_);
lean_dec_ref(v___x_2381_);
lean_dec_ref(v___f_2379_);
v_a_2827_ = lean_ctor_get(v___x_2824_, 0);
v_isSharedCheck_2834_ = !lean_is_exclusive(v___x_2824_);
if (v_isSharedCheck_2834_ == 0)
{
v___x_2829_ = v___x_2824_;
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
else
{
lean_inc(v_a_2827_);
lean_dec(v___x_2824_);
v___x_2829_ = lean_box(0);
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
v_resetjp_2828_:
{
lean_object* v___x_2832_; 
if (v_isShared_2830_ == 0)
{
v___x_2832_ = v___x_2829_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2833_; 
v_reuseFailAlloc_2833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2833_, 0, v_a_2827_);
v___x_2832_ = v_reuseFailAlloc_2833_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
return v___x_2832_;
}
}
}
}
}
v___jp_2835_:
{
lean_object* v___x_2842_; lean_object* v___x_2843_; uint8_t v___x_2844_; 
v___x_2842_ = lean_unsigned_to_nat(4u);
v___x_2843_ = l_Lean_Syntax_getArg(v_stx_2384_, v___x_2842_);
lean_dec(v_stx_2384_);
v___x_2844_ = l_Lean_Syntax_isNone(v___x_2843_);
if (v___x_2844_ == 0)
{
lean_object* v___x_2845_; uint8_t v___x_2846_; 
v___x_2845_ = lean_unsigned_to_nat(5u);
lean_inc(v___x_2843_);
v___x_2846_ = l_Lean_Syntax_matchesNull(v___x_2843_, v___x_2845_);
if (v___x_2846_ == 0)
{
lean_object* v___x_2847_; lean_object* v___x_2848_; 
lean_dec(v___x_2843_);
lean_dec(v_typeChanged_x3f_2839_);
lean_dec(v___y_2837_);
lean_dec(v___y_2836_);
lean_dec(v_declName_2383_);
lean_dec_ref(v___x_2381_);
lean_dec_ref(v___f_2379_);
v___x_2847_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__17_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__17_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__17_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2848_ = l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0___redArg(v___x_2847_, v___y_2840_, v___y_2841_);
return v___x_2848_;
}
else
{
lean_object* v___x_2849_; lean_object* v___x_2850_; 
v___x_2849_ = l_Lean_Syntax_getArg(v___x_2843_, v___y_2838_);
lean_dec(v___x_2843_);
v___x_2850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2850_, 0, v___x_2849_);
v___y_2815_ = v___y_2836_;
v___y_2816_ = v___y_2837_;
v___y_2817_ = v_typeChanged_x3f_2839_;
v_since_x3f_2818_ = v___x_2850_;
v___y_2819_ = v___y_2840_;
v___y_2820_ = v___y_2841_;
goto v___jp_2814_;
}
}
else
{
lean_object* v___x_2851_; 
lean_dec(v___x_2843_);
v___x_2851_ = lean_box(0);
v___y_2815_ = v___y_2836_;
v___y_2816_ = v___y_2837_;
v___y_2817_ = v_typeChanged_x3f_2839_;
v_since_x3f_2818_ = v___x_2851_;
v___y_2819_ = v___y_2840_;
v___y_2820_ = v___y_2841_;
goto v___jp_2814_;
}
}
v___jp_2852_:
{
lean_object* v___x_2857_; lean_object* v___x_2858_; uint8_t v___x_2859_; 
v___x_2857_ = lean_unsigned_to_nat(3u);
v___x_2858_ = l_Lean_Syntax_getArg(v_stx_2384_, v___x_2857_);
v___x_2859_ = l_Lean_Syntax_isNone(v___x_2858_);
if (v___x_2859_ == 0)
{
uint8_t v___x_2860_; 
lean_inc(v___x_2858_);
v___x_2860_ = l_Lean_Syntax_matchesNull(v___x_2858_, v___x_2507_);
if (v___x_2860_ == 0)
{
lean_object* v___x_2861_; lean_object* v___x_2862_; 
lean_dec(v___x_2858_);
lean_dec(v_text_x3f_2854_);
lean_dec(v___y_2853_);
lean_dec(v_stx_2384_);
lean_dec(v_declName_2383_);
lean_dec_ref(v___x_2381_);
lean_dec_ref(v___f_2379_);
v___x_2861_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__17_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__17_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__17_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2862_ = l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0___redArg(v___x_2861_, v___y_2855_, v___y_2856_);
return v___x_2862_;
}
else
{
lean_object* v___x_2863_; lean_object* v___x_2864_; 
v___x_2863_ = l_Lean_Syntax_getArg(v___x_2858_, v___x_2506_);
lean_dec(v___x_2858_);
v___x_2864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2864_, 0, v___x_2863_);
v___y_2836_ = v_text_x3f_2854_;
v___y_2837_ = v___y_2853_;
v___y_2838_ = v___x_2857_;
v_typeChanged_x3f_2839_ = v___x_2864_;
v___y_2840_ = v___y_2855_;
v___y_2841_ = v___y_2856_;
goto v___jp_2835_;
}
}
else
{
lean_object* v___x_2865_; 
lean_dec(v___x_2858_);
v___x_2865_ = lean_box(0);
v___y_2836_ = v_text_x3f_2854_;
v___y_2837_ = v___y_2853_;
v___y_2838_ = v___x_2857_;
v_typeChanged_x3f_2839_ = v___x_2865_;
v___y_2840_ = v___y_2855_;
v___y_2841_ = v___y_2856_;
goto v___jp_2835_;
}
}
v___jp_2866_:
{
lean_object* v___x_2870_; lean_object* v___x_2871_; uint8_t v___x_2872_; 
v___x_2870_ = lean_unsigned_to_nat(2u);
v___x_2871_ = l_Lean_Syntax_getArg(v_stx_2384_, v___x_2870_);
v___x_2872_ = l_Lean_Syntax_isNone(v___x_2871_);
if (v___x_2872_ == 0)
{
uint8_t v___x_2873_; 
lean_inc(v___x_2871_);
v___x_2873_ = l_Lean_Syntax_matchesNull(v___x_2871_, v___x_2507_);
if (v___x_2873_ == 0)
{
lean_object* v___x_2874_; lean_object* v___x_2875_; 
lean_dec(v___x_2871_);
lean_dec(v_id_x3f_2867_);
lean_dec(v_stx_2384_);
lean_dec(v_declName_2383_);
lean_dec_ref(v___x_2381_);
lean_dec_ref(v___f_2379_);
v___x_2874_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__17_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__17_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__17_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2875_ = l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0___redArg(v___x_2874_, v___y_2868_, v___y_2869_);
return v___x_2875_;
}
else
{
lean_object* v___x_2876_; lean_object* v___x_2877_; 
v___x_2876_ = l_Lean_Syntax_getArg(v___x_2871_, v___x_2506_);
lean_dec(v___x_2871_);
v___x_2877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2877_, 0, v___x_2876_);
v___y_2853_ = v_id_x3f_2867_;
v_text_x3f_2854_ = v___x_2877_;
v___y_2855_ = v___y_2868_;
v___y_2856_ = v___y_2869_;
goto v___jp_2852_;
}
}
else
{
lean_object* v___x_2878_; 
lean_dec(v___x_2871_);
v___x_2878_ = lean_box(0);
v___y_2853_ = v_id_x3f_2867_;
v_text_x3f_2854_ = v___x_2878_;
v___y_2855_ = v___y_2868_;
v___y_2856_ = v___y_2869_;
goto v___jp_2852_;
}
}
}
v___jp_2388_:
{
lean_object* v___x_2392_; lean_object* v___x_2393_; 
v___x_2392_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2392_, 0, v___y_2390_);
lean_ctor_set(v___x_2392_, 1, v___y_2391_);
lean_ctor_set(v___x_2392_, 2, v___y_2389_);
v___x_2393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2393_, 0, v___x_2392_);
return v___x_2393_;
}
v___jp_2396_:
{
if (lean_obj_tag(v___y_2397_) == 0)
{
if (v___x_2395_ == 0)
{
v___y_2389_ = v___y_2397_;
v___y_2390_ = v___y_2398_;
v___y_2391_ = v___y_2399_;
goto v___jp_2388_;
}
else
{
lean_object* v___x_2402_; lean_object* v___x_2403_; 
v___x_2402_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__2_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__2_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__2_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2403_ = l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1(v___x_2402_, v___y_2400_, v___y_2401_);
if (lean_obj_tag(v___x_2403_) == 0)
{
lean_dec_ref_known(v___x_2403_, 1);
v___y_2389_ = v___y_2397_;
v___y_2390_ = v___y_2398_;
v___y_2391_ = v___y_2399_;
goto v___jp_2388_;
}
else
{
lean_object* v_a_2404_; lean_object* v___x_2406_; uint8_t v_isShared_2407_; uint8_t v_isSharedCheck_2411_; 
lean_dec(v___y_2399_);
lean_dec(v___y_2398_);
v_a_2404_ = lean_ctor_get(v___x_2403_, 0);
v_isSharedCheck_2411_ = !lean_is_exclusive(v___x_2403_);
if (v_isSharedCheck_2411_ == 0)
{
v___x_2406_ = v___x_2403_;
v_isShared_2407_ = v_isSharedCheck_2411_;
goto v_resetjp_2405_;
}
else
{
lean_inc(v_a_2404_);
lean_dec(v___x_2403_);
v___x_2406_ = lean_box(0);
v_isShared_2407_ = v_isSharedCheck_2411_;
goto v_resetjp_2405_;
}
v_resetjp_2405_:
{
lean_object* v___x_2409_; 
if (v_isShared_2407_ == 0)
{
v___x_2409_ = v___x_2406_;
goto v_reusejp_2408_;
}
else
{
lean_object* v_reuseFailAlloc_2410_; 
v_reuseFailAlloc_2410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2410_, 0, v_a_2404_);
v___x_2409_ = v_reuseFailAlloc_2410_;
goto v_reusejp_2408_;
}
v_reusejp_2408_:
{
return v___x_2409_;
}
}
}
}
}
else
{
v___y_2389_ = v___y_2397_;
v___y_2390_ = v___y_2398_;
v___y_2391_ = v___y_2399_;
goto v___jp_2388_;
}
}
v___jp_2412_:
{
if (lean_obj_tag(v___y_2415_) == 0)
{
if (v___x_2395_ == 0)
{
v___y_2397_ = v___y_2418_;
v___y_2398_ = v___y_2416_;
v___y_2399_ = v___y_2417_;
v___y_2400_ = v___y_2413_;
v___y_2401_ = v___y_2414_;
goto v___jp_2396_;
}
else
{
if (lean_obj_tag(v___y_2417_) == 0)
{
if (v___x_2395_ == 0)
{
v___y_2397_ = v___y_2418_;
v___y_2398_ = v___y_2416_;
v___y_2399_ = v___y_2417_;
v___y_2400_ = v___y_2413_;
v___y_2401_ = v___y_2414_;
goto v___jp_2396_;
}
else
{
lean_object* v___x_2419_; lean_object* v___x_2420_; 
v___x_2419_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__5_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__5_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__5_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2420_ = l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1(v___x_2419_, v___y_2413_, v___y_2414_);
if (lean_obj_tag(v___x_2420_) == 0)
{
lean_dec_ref_known(v___x_2420_, 1);
v___y_2397_ = v___y_2418_;
v___y_2398_ = v___y_2416_;
v___y_2399_ = v___y_2417_;
v___y_2400_ = v___y_2413_;
v___y_2401_ = v___y_2414_;
goto v___jp_2396_;
}
else
{
lean_object* v_a_2421_; lean_object* v___x_2423_; uint8_t v_isShared_2424_; uint8_t v_isSharedCheck_2428_; 
lean_dec(v___y_2418_);
lean_dec(v___y_2416_);
v_a_2421_ = lean_ctor_get(v___x_2420_, 0);
v_isSharedCheck_2428_ = !lean_is_exclusive(v___x_2420_);
if (v_isSharedCheck_2428_ == 0)
{
v___x_2423_ = v___x_2420_;
v_isShared_2424_ = v_isSharedCheck_2428_;
goto v_resetjp_2422_;
}
else
{
lean_inc(v_a_2421_);
lean_dec(v___x_2420_);
v___x_2423_ = lean_box(0);
v_isShared_2424_ = v_isSharedCheck_2428_;
goto v_resetjp_2422_;
}
v_resetjp_2422_:
{
lean_object* v___x_2426_; 
if (v_isShared_2424_ == 0)
{
v___x_2426_ = v___x_2423_;
goto v_reusejp_2425_;
}
else
{
lean_object* v_reuseFailAlloc_2427_; 
v_reuseFailAlloc_2427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2427_, 0, v_a_2421_);
v___x_2426_ = v_reuseFailAlloc_2427_;
goto v_reusejp_2425_;
}
v_reusejp_2425_:
{
return v___x_2426_;
}
}
}
}
}
else
{
v___y_2397_ = v___y_2418_;
v___y_2398_ = v___y_2416_;
v___y_2399_ = v___y_2417_;
v___y_2400_ = v___y_2413_;
v___y_2401_ = v___y_2414_;
goto v___jp_2396_;
}
}
}
else
{
lean_dec_ref_known(v___y_2415_, 1);
v___y_2397_ = v___y_2418_;
v___y_2398_ = v___y_2416_;
v___y_2399_ = v___y_2417_;
v___y_2400_ = v___y_2413_;
v___y_2401_ = v___y_2414_;
goto v___jp_2396_;
}
}
v___jp_2429_:
{
if (lean_obj_tag(v___y_2434_) == 0)
{
lean_object* v___x_2436_; 
v___x_2436_ = lean_box(0);
v___y_2413_ = v___y_2430_;
v___y_2414_ = v___y_2431_;
v___y_2415_ = v___y_2432_;
v___y_2416_ = v___y_2433_;
v___y_2417_ = v___y_2435_;
v___y_2418_ = v___x_2436_;
goto v___jp_2412_;
}
else
{
lean_object* v_val_2437_; lean_object* v___x_2439_; uint8_t v_isShared_2440_; uint8_t v_isSharedCheck_2445_; 
v_val_2437_ = lean_ctor_get(v___y_2434_, 0);
v_isSharedCheck_2445_ = !lean_is_exclusive(v___y_2434_);
if (v_isSharedCheck_2445_ == 0)
{
v___x_2439_ = v___y_2434_;
v_isShared_2440_ = v_isSharedCheck_2445_;
goto v_resetjp_2438_;
}
else
{
lean_inc(v_val_2437_);
lean_dec(v___y_2434_);
v___x_2439_ = lean_box(0);
v_isShared_2440_ = v_isSharedCheck_2445_;
goto v_resetjp_2438_;
}
v_resetjp_2438_:
{
lean_object* v___x_2441_; lean_object* v___x_2443_; 
v___x_2441_ = l_Lean_TSyntax_getString(v_val_2437_);
lean_dec(v_val_2437_);
if (v_isShared_2440_ == 0)
{
lean_ctor_set(v___x_2439_, 0, v___x_2441_);
v___x_2443_ = v___x_2439_;
goto v_reusejp_2442_;
}
else
{
lean_object* v_reuseFailAlloc_2444_; 
v_reuseFailAlloc_2444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2444_, 0, v___x_2441_);
v___x_2443_ = v_reuseFailAlloc_2444_;
goto v_reusejp_2442_;
}
v_reusejp_2442_:
{
v___y_2413_ = v___y_2430_;
v___y_2414_ = v___y_2431_;
v___y_2415_ = v___y_2432_;
v___y_2416_ = v___y_2433_;
v___y_2417_ = v___y_2435_;
v___y_2418_ = v___x_2443_;
goto v___jp_2412_;
}
}
}
}
v___jp_2446_:
{
if (lean_obj_tag(v___y_2447_) == 0)
{
lean_object* v___x_2453_; 
v___x_2453_ = lean_box(0);
v___y_2430_ = v___y_2451_;
v___y_2431_ = v___y_2452_;
v___y_2432_ = v___y_2448_;
v___y_2433_ = v___y_2449_;
v___y_2434_ = v___y_2450_;
v___y_2435_ = v___x_2453_;
goto v___jp_2429_;
}
else
{
lean_object* v_val_2454_; lean_object* v___x_2456_; uint8_t v_isShared_2457_; uint8_t v_isSharedCheck_2462_; 
v_val_2454_ = lean_ctor_get(v___y_2447_, 0);
v_isSharedCheck_2462_ = !lean_is_exclusive(v___y_2447_);
if (v_isSharedCheck_2462_ == 0)
{
v___x_2456_ = v___y_2447_;
v_isShared_2457_ = v_isSharedCheck_2462_;
goto v_resetjp_2455_;
}
else
{
lean_inc(v_val_2454_);
lean_dec(v___y_2447_);
v___x_2456_ = lean_box(0);
v_isShared_2457_ = v_isSharedCheck_2462_;
goto v_resetjp_2455_;
}
v_resetjp_2455_:
{
lean_object* v___x_2458_; lean_object* v___x_2460_; 
v___x_2458_ = l_Lean_TSyntax_getString(v_val_2454_);
lean_dec(v_val_2454_);
if (v_isShared_2457_ == 0)
{
lean_ctor_set(v___x_2456_, 0, v___x_2458_);
v___x_2460_ = v___x_2456_;
goto v_reusejp_2459_;
}
else
{
lean_object* v_reuseFailAlloc_2461_; 
v_reuseFailAlloc_2461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2461_, 0, v___x_2458_);
v___x_2460_ = v_reuseFailAlloc_2461_;
goto v_reusejp_2459_;
}
v_reusejp_2459_:
{
v___y_2430_ = v___y_2451_;
v___y_2431_ = v___y_2452_;
v___y_2432_ = v___y_2448_;
v___y_2433_ = v___y_2449_;
v___y_2434_ = v___y_2450_;
v___y_2435_ = v___x_2460_;
goto v___jp_2429_;
}
}
}
}
v___jp_2463_:
{
lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; 
v___x_2473_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__7_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__7_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__7_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2474_ = l_Lean_ConstantInfo_type(v___y_2468_);
lean_dec_ref(v___y_2468_);
v___x_2475_ = l_Lean_indentExpr(v___x_2474_);
v___x_2476_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2476_, 0, v___x_2473_);
lean_ctor_set(v___x_2476_, 1, v___x_2475_);
v___x_2477_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__9_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__9_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__9_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2478_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2478_, 0, v___x_2476_);
lean_ctor_set(v___x_2478_, 1, v___x_2477_);
v___x_2479_ = l_Lean_ConstantInfo_type(v___y_2469_);
lean_dec_ref(v___y_2469_);
v___x_2480_ = l_Lean_indentExpr(v___x_2479_);
v___x_2481_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2481_, 0, v___x_2478_);
lean_ctor_set(v___x_2481_, 1, v___x_2480_);
v___x_2482_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__11_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__11_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__11_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_2483_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2483_, 0, v___x_2481_);
lean_ctor_set(v___x_2483_, 1, v___x_2482_);
v___x_2484_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2484_, 0, v___x_2483_);
lean_ctor_set(v___x_2484_, 1, v_hint_2470_);
v___x_2485_ = l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__1(v___x_2484_, v___y_2471_, v___y_2472_);
if (lean_obj_tag(v___x_2485_) == 0)
{
lean_dec_ref_known(v___x_2485_, 1);
v___y_2447_ = v___y_2464_;
v___y_2448_ = v___y_2465_;
v___y_2449_ = v___y_2466_;
v___y_2450_ = v___y_2467_;
v___y_2451_ = v___y_2471_;
v___y_2452_ = v___y_2472_;
goto v___jp_2446_;
}
else
{
lean_object* v_a_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2493_; 
lean_dec(v___y_2467_);
lean_dec(v___y_2466_);
lean_dec(v___y_2465_);
lean_dec(v___y_2464_);
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
lean_object* v___x_2503_; 
v___x_2503_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__15_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__15_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__15_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___y_2464_ = v___y_2496_;
v___y_2465_ = v___y_2498_;
v___y_2466_ = v___y_2499_;
v___y_2467_ = v___y_2501_;
v___y_2468_ = v___y_2500_;
v___y_2469_ = v___y_2502_;
v_hint_2470_ = v___x_2503_;
v___y_2471_ = v___y_2495_;
v___y_2472_ = v___y_2497_;
goto v___jp_2463_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2____boxed(lean_object* v___x_2887_, lean_object* v___x_2888_, lean_object* v___f_2889_, lean_object* v___x_2890_, lean_object* v___x_2891_, lean_object* v_a_2892_, lean_object* v_declName_2893_, lean_object* v_stx_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_, lean_object* v___y_2897_){
_start:
{
uint8_t v___x_46953__boxed_2898_; lean_object* v_res_2899_; 
v___x_46953__boxed_2898_ = lean_unbox(v___x_2890_);
v_res_2899_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(v___x_2887_, v___x_2888_, v___f_2889_, v___x_46953__boxed_2898_, v___x_2891_, v_a_2892_, v_declName_2893_, v_stx_2894_, v___y_2895_, v___y_2896_);
lean_dec(v___y_2896_);
lean_dec_ref(v___y_2895_);
lean_dec_ref(v_a_2892_);
return v_res_2899_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_2919_; lean_object* v___f_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; uint8_t v___x_2924_; lean_object* v___f_2925_; lean_object* v___x_2926_; 
v___f_2919_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___f_2920_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2921_ = ((lean_object*)(l_Lean_Linter_instInhabitedDeprecationEntry_default));
v___x_2922_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_));
v___x_2923_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2924_ = 0;
v___f_2925_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2926_ = l_Lean_registerParametricAttributeExt___redArg(v___x_2923_, v___x_2924_, v___f_2925_);
if (lean_obj_tag(v___x_2926_) == 0)
{
lean_object* v_a_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___f_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; 
v_a_2927_ = lean_ctor_get(v___x_2926_, 0);
lean_inc_n(v_a_2927_, 2);
lean_dec_ref_known(v___x_2926_, 1);
v___x_2928_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_));
v___x_2929_ = lean_box(v___x_2924_);
v___f_2930_ = lean_alloc_closure((void*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2____boxed), 11, 6);
lean_closure_set(v___f_2930_, 0, v___x_2922_);
lean_closure_set(v___f_2930_, 1, v___x_2928_);
lean_closure_set(v___f_2930_, 2, v___f_2919_);
lean_closure_set(v___f_2930_, 3, v___x_2929_);
lean_closure_set(v___f_2930_, 4, v___x_2921_);
lean_closure_set(v___f_2930_, 5, v_a_2927_);
v___x_2931_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_2932_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2932_, 0, v___x_2931_);
lean_ctor_set(v___x_2932_, 1, v___f_2930_);
lean_ctor_set(v___x_2932_, 2, v___f_2920_);
lean_ctor_set(v___x_2932_, 3, v___f_2925_);
lean_ctor_set_uint8(v___x_2932_, sizeof(void*)*4, v___x_2924_);
v___x_2933_ = l_Lean_registerParametricAttributeForExt___redArg(v___x_2932_, v_a_2927_);
return v___x_2933_;
}
else
{
lean_object* v_a_2934_; lean_object* v___x_2936_; uint8_t v_isShared_2937_; uint8_t v_isSharedCheck_2941_; 
v_a_2934_ = lean_ctor_get(v___x_2926_, 0);
v_isSharedCheck_2941_ = !lean_is_exclusive(v___x_2926_);
if (v_isSharedCheck_2941_ == 0)
{
v___x_2936_ = v___x_2926_;
v_isShared_2937_ = v_isSharedCheck_2941_;
goto v_resetjp_2935_;
}
else
{
lean_inc(v_a_2934_);
lean_dec(v___x_2926_);
v___x_2936_ = lean_box(0);
v_isShared_2937_ = v_isSharedCheck_2941_;
goto v_resetjp_2935_;
}
v_resetjp_2935_:
{
lean_object* v___x_2939_; 
if (v_isShared_2937_ == 0)
{
v___x_2939_ = v___x_2936_;
goto v_reusejp_2938_;
}
else
{
lean_object* v_reuseFailAlloc_2940_; 
v_reuseFailAlloc_2940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2940_, 0, v_a_2934_);
v___x_2939_ = v_reuseFailAlloc_2940_;
goto v_reusejp_2938_;
}
v_reusejp_2938_:
{
return v___x_2939_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2____boxed(lean_object* v___y_2942_){
_start:
{
lean_object* v_res_2943_; 
v_res_2943_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_();
return v_res_2943_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_2944_, lean_object* v_msg_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_){
_start:
{
lean_object* v___x_2949_; 
v___x_2949_ = l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0___redArg(v_msg_2945_, v___y_2946_, v___y_2947_);
return v___x_2949_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_2950_, lean_object* v_msg_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_){
_start:
{
lean_object* v_res_2955_; 
v_res_2955_ = l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__0(v_00_u03b1_2950_, v_msg_2951_, v___y_2952_, v___y_2953_);
lean_dec(v___y_2953_);
lean_dec_ref(v___y_2952_);
return v_res_2955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__3_spec__8(lean_object* v_o_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_){
_start:
{
lean_object* v___x_2960_; 
v___x_2960_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__3_spec__8___redArg(v_o_2956_, v___y_2958_);
return v___x_2960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__3_spec__8___boxed(lean_object* v_o_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_){
_start:
{
lean_object* v_res_2965_; 
v_res_2965_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__3_spec__8(v_o_2961_, v___y_2962_, v___y_2963_);
lean_dec(v___y_2963_);
lean_dec_ref(v___y_2962_);
return v_res_2965_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__6(lean_object* v_00_u03b2_2966_, lean_object* v_m_2967_, lean_object* v_a_2968_){
_start:
{
lean_object* v___x_2969_; 
v___x_2969_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__6___redArg(v_m_2967_, v_a_2968_);
return v___x_2969_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__6___boxed(lean_object* v_00_u03b2_2970_, lean_object* v_m_2971_, lean_object* v_a_2972_){
_start:
{
lean_object* v_res_2973_; 
v_res_2973_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__6(v_00_u03b2_2970_, v_m_2971_, v_a_2972_);
lean_dec(v_a_2972_);
lean_dec_ref(v_m_2971_);
return v_res_2973_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8(lean_object* v_00_u03b2_2974_, lean_object* v_x_2975_, lean_object* v_x_2976_){
_start:
{
uint8_t v___x_2977_; 
v___x_2977_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8___redArg(v_x_2975_, v_x_2976_);
return v___x_2977_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8___boxed(lean_object* v_00_u03b2_2978_, lean_object* v_x_2979_, lean_object* v_x_2980_){
_start:
{
uint8_t v_res_2981_; lean_object* v_r_2982_; 
v_res_2981_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8(v_00_u03b2_2978_, v_x_2979_, v_x_2980_);
lean_dec_ref(v_x_2980_);
lean_dec_ref(v_x_2979_);
v_r_2982_ = lean_box(v_res_2981_);
return v_r_2982_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__6_spec__12(lean_object* v_00_u03b2_2983_, lean_object* v_a_2984_, lean_object* v_x_2985_){
_start:
{
lean_object* v___x_2986_; 
v___x_2986_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__6_spec__12___redArg(v_a_2984_, v_x_2985_);
return v___x_2986_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__6_spec__12___boxed(lean_object* v_00_u03b2_2987_, lean_object* v_a_2988_, lean_object* v_x_2989_){
_start:
{
lean_object* v_res_2990_; 
v_res_2990_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__6_spec__12(v_00_u03b2_2987_, v_a_2988_, v_x_2989_);
lean_dec(v_x_2989_);
lean_dec(v_a_2988_);
return v_res_2990_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12(lean_object* v_00_u03b2_2991_, lean_object* v_x_2992_, size_t v_x_2993_, lean_object* v_x_2994_){
_start:
{
uint8_t v___x_2995_; 
v___x_2995_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12___redArg(v_x_2992_, v_x_2993_, v_x_2994_);
return v___x_2995_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12___boxed(lean_object* v_00_u03b2_2996_, lean_object* v_x_2997_, lean_object* v_x_2998_, lean_object* v_x_2999_){
_start:
{
size_t v_x_48220__boxed_3000_; uint8_t v_res_3001_; lean_object* v_r_3002_; 
v_x_48220__boxed_3000_ = lean_unbox_usize(v_x_2998_);
lean_dec(v_x_2998_);
v_res_3001_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12(v_00_u03b2_2996_, v_x_2997_, v_x_48220__boxed_3000_, v_x_2999_);
lean_dec_ref(v_x_2999_);
lean_dec_ref(v_x_2997_);
v_r_3002_ = lean_box(v_res_3001_);
return v_r_3002_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__19(lean_object* v_givenName_3003_, uint8_t v_skipAuxDecl_3004_, lean_object* v_auxDeclToFullName_3005_, lean_object* v___x_3006_, lean_object* v_givenNameView_3007_, lean_object* v_as_3008_, lean_object* v_i_3009_, lean_object* v_a_3010_){
_start:
{
lean_object* v___x_3011_; 
v___x_3011_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__19___redArg(v_givenName_3003_, v_skipAuxDecl_3004_, v_auxDeclToFullName_3005_, v___x_3006_, v_givenNameView_3007_, v_as_3008_, v_i_3009_);
return v___x_3011_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__19___boxed(lean_object* v_givenName_3012_, lean_object* v_skipAuxDecl_3013_, lean_object* v_auxDeclToFullName_3014_, lean_object* v___x_3015_, lean_object* v_givenNameView_3016_, lean_object* v_as_3017_, lean_object* v_i_3018_, lean_object* v_a_3019_){
_start:
{
uint8_t v_skipAuxDecl_boxed_3020_; lean_object* v_res_3021_; 
v_skipAuxDecl_boxed_3020_ = lean_unbox(v_skipAuxDecl_3013_);
v_res_3021_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__19(v_givenName_3012_, v_skipAuxDecl_boxed_3020_, v_auxDeclToFullName_3014_, v___x_3015_, v_givenNameView_3016_, v_as_3017_, v_i_3018_, v_a_3019_);
lean_dec_ref(v_as_3017_);
lean_dec(v_auxDeclToFullName_3014_);
lean_dec(v_givenName_3012_);
return v_res_3021_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__22(lean_object* v_localDecl_x3f_3022_, lean_object* v_givenName_3023_, lean_object* v_as_3024_, lean_object* v_i_3025_, lean_object* v_a_3026_){
_start:
{
lean_object* v___x_3027_; 
v___x_3027_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__22___redArg(v_localDecl_x3f_3022_, v_givenName_3023_, v_as_3024_, v_i_3025_);
return v___x_3027_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__22___boxed(lean_object* v_localDecl_x3f_3028_, lean_object* v_givenName_3029_, lean_object* v_as_3030_, lean_object* v_i_3031_, lean_object* v_a_3032_){
_start:
{
lean_object* v_res_3033_; 
v_res_3033_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__22(v_localDecl_x3f_3028_, v_givenName_3029_, v_as_3030_, v_i_3031_, v_a_3032_);
lean_dec_ref(v_as_3030_);
lean_dec(v_givenName_3029_);
lean_dec(v_localDecl_x3f_3028_);
return v_res_3033_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21_spec__29(lean_object* v_n_u2080_3034_, lean_object* v_filter_3035_, lean_object* v_view_x3f_3036_, lean_object* v_as_3037_, lean_object* v_as_x27_3038_, lean_object* v_b_3039_, lean_object* v_a_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_){
_start:
{
lean_object* v___x_3046_; 
v___x_3046_ = l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21_spec__29___redArg(v_n_u2080_3034_, v_filter_3035_, v_view_x3f_3036_, v_as_x27_3038_, v_b_3039_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_);
return v___x_3046_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21_spec__29___boxed(lean_object* v_n_u2080_3047_, lean_object* v_filter_3048_, lean_object* v_view_x3f_3049_, lean_object* v_as_3050_, lean_object* v_as_x27_3051_, lean_object* v_b_3052_, lean_object* v_a_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_){
_start:
{
lean_object* v_res_3059_; 
v_res_3059_ = l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__21_spec__29(v_n_u2080_3047_, v_filter_3048_, v_view_x3f_3049_, v_as_3050_, v_as_x27_3051_, v_b_3052_, v_a_3053_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_);
lean_dec(v___y_3057_);
lean_dec_ref(v___y_3056_);
lean_dec(v___y_3055_);
lean_dec_ref(v___y_3054_);
lean_dec(v_as_x27_3051_);
lean_dec(v_as_3050_);
lean_dec(v_n_u2080_3047_);
return v_res_3059_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12_spec__17(lean_object* v_00_u03b2_3060_, lean_object* v_keys_3061_, lean_object* v_vals_3062_, lean_object* v_heq_3063_, lean_object* v_i_3064_, lean_object* v_k_3065_){
_start:
{
uint8_t v___x_3066_; 
v___x_3066_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12_spec__17___redArg(v_keys_3061_, v_i_3064_, v_k_3065_);
return v___x_3066_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12_spec__17___boxed(lean_object* v_00_u03b2_3067_, lean_object* v_keys_3068_, lean_object* v_vals_3069_, lean_object* v_heq_3070_, lean_object* v_i_3071_, lean_object* v_k_3072_){
_start:
{
uint8_t v_res_3073_; lean_object* v_r_3074_; 
v_res_3073_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12_spec__17(v_00_u03b2_3067_, v_keys_3068_, v_vals_3069_, v_heq_3070_, v_i_3071_, v_k_3072_);
lean_dec_ref(v_k_3072_);
lean_dec_ref(v_vals_3069_);
lean_dec_ref(v_keys_3068_);
v_r_3074_ = lean_box(v_res_3073_);
return v_r_3074_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__20_spec__23(lean_object* v_givenName_3075_, uint8_t v_skipAuxDecl_3076_, lean_object* v_auxDeclToFullName_3077_, lean_object* v___x_3078_, lean_object* v_givenNameView_3079_, lean_object* v_as_3080_, lean_object* v_i_3081_, lean_object* v_a_3082_){
_start:
{
lean_object* v___x_3083_; 
v___x_3083_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__20_spec__23___redArg(v_givenName_3075_, v_skipAuxDecl_3076_, v_auxDeclToFullName_3077_, v___x_3078_, v_givenNameView_3079_, v_as_3080_, v_i_3081_);
return v___x_3083_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__20_spec__23___boxed(lean_object* v_givenName_3084_, lean_object* v_skipAuxDecl_3085_, lean_object* v_auxDeclToFullName_3086_, lean_object* v___x_3087_, lean_object* v_givenNameView_3088_, lean_object* v_as_3089_, lean_object* v_i_3090_, lean_object* v_a_3091_){
_start:
{
uint8_t v_skipAuxDecl_boxed_3092_; lean_object* v_res_3093_; 
v_skipAuxDecl_boxed_3092_ = lean_unbox(v_skipAuxDecl_3085_);
v_res_3093_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__17_spec__20_spec__23(v_givenName_3084_, v_skipAuxDecl_boxed_3092_, v_auxDeclToFullName_3086_, v___x_3087_, v_givenNameView_3088_, v_as_3089_, v_i_3090_, v_a_3091_);
lean_dec_ref(v_as_3089_);
lean_dec(v_auxDeclToFullName_3086_);
lean_dec(v_givenName_3084_);
return v_res_3093_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__23_spec__27(lean_object* v_localDecl_x3f_3094_, lean_object* v_givenName_3095_, lean_object* v_as_3096_, lean_object* v_i_3097_, lean_object* v_a_3098_){
_start:
{
lean_object* v___x_3099_; 
v___x_3099_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__23_spec__27___redArg(v_localDecl_x3f_3094_, v_givenName_3095_, v_as_3096_, v_i_3097_);
return v___x_3099_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__23_spec__27___boxed(lean_object* v_localDecl_x3f_3100_, lean_object* v_givenName_3101_, lean_object* v_as_3102_, lean_object* v_i_3103_, lean_object* v_a_3104_){
_start:
{
lean_object* v_res_3105_; 
v_res_3105_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__18_spec__23_spec__27(v_localDecl_x3f_3100_, v_givenName_3101_, v_as_3102_, v_i_3103_, v_a_3104_);
lean_dec_ref(v_as_3102_);
lean_dec(v_givenName_3101_);
lean_dec(v_localDecl_x3f_3100_);
return v_res_3105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__36(lean_object* v_opt_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_){
_start:
{
lean_object* v___x_3112_; 
v___x_3112_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__36___redArg(v_opt_3106_, v___y_3109_);
return v___x_3112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__36___boxed(lean_object* v_opt_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_, lean_object* v___y_3117_, lean_object* v___y_3118_){
_start:
{
lean_object* v_res_3119_; 
v_res_3119_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__36(v_opt_3113_, v___y_3114_, v___y_3115_, v___y_3116_, v___y_3117_);
lean_dec(v___y_3117_);
lean_dec_ref(v___y_3116_);
lean_dec(v___y_3115_);
lean_dec_ref(v___y_3114_);
lean_dec_ref(v_opt_3113_);
return v_res_3119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__42(lean_object* v_opt_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_){
_start:
{
lean_object* v___x_3126_; 
v___x_3126_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__42___redArg(v_opt_3120_, v___y_3123_);
return v___x_3126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__42___boxed(lean_object* v_opt_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_, lean_object* v___y_3130_, lean_object* v___y_3131_, lean_object* v___y_3132_){
_start:
{
lean_object* v_res_3133_; 
v_res_3133_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__12_spec__24_spec__33_spec__39_spec__42(v_opt_3127_, v___y_3128_, v___y_3129_, v___y_3130_, v___y_3131_);
lean_dec(v___y_3131_);
lean_dec_ref(v___y_3130_);
lean_dec(v___y_3129_);
lean_dec_ref(v___y_3128_);
lean_dec_ref(v_opt_3127_);
return v_res_3133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_setDeprecated___redArg___lam__0(lean_object* v_declName_3134_, lean_object* v_entry_3135_, lean_object* v_inst_3136_, lean_object* v_inst_3137_, lean_object* v_inst_3138_, lean_object* v_env_3139_){
_start:
{
lean_object* v___x_3140_; lean_object* v___x_3141_; 
v___x_3140_ = l_Lean_Linter_deprecatedAttr;
v___x_3141_ = l_Lean_ParametricAttribute_setParam___redArg(v___x_3140_, v_env_3139_, v_declName_3134_, v_entry_3135_);
if (lean_obj_tag(v___x_3141_) == 0)
{
lean_object* v_a_3142_; lean_object* v___x_3144_; uint8_t v_isShared_3145_; uint8_t v_isSharedCheck_3151_; 
lean_dec_ref(v_inst_3138_);
v_a_3142_ = lean_ctor_get(v___x_3141_, 0);
v_isSharedCheck_3151_ = !lean_is_exclusive(v___x_3141_);
if (v_isSharedCheck_3151_ == 0)
{
v___x_3144_ = v___x_3141_;
v_isShared_3145_ = v_isSharedCheck_3151_;
goto v_resetjp_3143_;
}
else
{
lean_inc(v_a_3142_);
lean_dec(v___x_3141_);
v___x_3144_ = lean_box(0);
v_isShared_3145_ = v_isSharedCheck_3151_;
goto v_resetjp_3143_;
}
v_resetjp_3143_:
{
lean_object* v___x_3147_; 
if (v_isShared_3145_ == 0)
{
lean_ctor_set_tag(v___x_3144_, 3);
v___x_3147_ = v___x_3144_;
goto v_reusejp_3146_;
}
else
{
lean_object* v_reuseFailAlloc_3150_; 
v_reuseFailAlloc_3150_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3150_, 0, v_a_3142_);
v___x_3147_ = v_reuseFailAlloc_3150_;
goto v_reusejp_3146_;
}
v_reusejp_3146_:
{
lean_object* v___x_3148_; lean_object* v___x_3149_; 
v___x_3148_ = l_Lean_MessageData_ofFormat(v___x_3147_);
v___x_3149_ = l_Lean_throwError___redArg(v_inst_3136_, v_inst_3137_, v___x_3148_);
return v___x_3149_;
}
}
}
else
{
lean_object* v_a_3152_; lean_object* v___x_3153_; 
lean_dec_ref(v_inst_3137_);
lean_dec_ref(v_inst_3136_);
v_a_3152_ = lean_ctor_get(v___x_3141_, 0);
lean_inc(v_a_3152_);
lean_dec_ref_known(v___x_3141_, 1);
v___x_3153_ = l_Lean_setEnv___redArg(v_inst_3138_, v_a_3152_);
return v___x_3153_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_setDeprecated___redArg(lean_object* v_inst_3154_, lean_object* v_inst_3155_, lean_object* v_inst_3156_, lean_object* v_declName_3157_, lean_object* v_entry_3158_){
_start:
{
lean_object* v_toBind_3159_; lean_object* v_getEnv_3160_; lean_object* v___f_3161_; lean_object* v___x_3162_; 
v_toBind_3159_ = lean_ctor_get(v_inst_3154_, 1);
lean_inc(v_toBind_3159_);
v_getEnv_3160_ = lean_ctor_get(v_inst_3155_, 0);
lean_inc(v_getEnv_3160_);
v___f_3161_ = lean_alloc_closure((void*)(l_Lean_Linter_setDeprecated___redArg___lam__0), 6, 5);
lean_closure_set(v___f_3161_, 0, v_declName_3157_);
lean_closure_set(v___f_3161_, 1, v_entry_3158_);
lean_closure_set(v___f_3161_, 2, v_inst_3154_);
lean_closure_set(v___f_3161_, 3, v_inst_3156_);
lean_closure_set(v___f_3161_, 4, v_inst_3155_);
v___x_3162_ = lean_apply_4(v_toBind_3159_, lean_box(0), lean_box(0), v_getEnv_3160_, v___f_3161_);
return v___x_3162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_setDeprecated(lean_object* v_m_3163_, lean_object* v_inst_3164_, lean_object* v_inst_3165_, lean_object* v_inst_3166_, lean_object* v_declName_3167_, lean_object* v_entry_3168_){
_start:
{
lean_object* v___x_3169_; 
v___x_3169_ = l_Lean_Linter_setDeprecated___redArg(v_inst_3164_, v_inst_3165_, v_inst_3166_, v_declName_3167_, v_entry_3168_);
return v___x_3169_;
}
}
LEAN_EXPORT uint8_t l_Lean_Linter_isDeprecated(lean_object* v_env_3170_, lean_object* v_declName_3171_){
_start:
{
lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; 
v___x_3172_ = ((lean_object*)(l_Lean_Linter_instInhabitedDeprecationEntry_default));
v___x_3173_ = l_Lean_Linter_deprecatedAttr;
v___x_3174_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v___x_3172_, v___x_3173_, v_env_3170_, v_declName_3171_);
if (lean_obj_tag(v___x_3174_) == 0)
{
uint8_t v___x_3175_; 
v___x_3175_ = 0;
return v___x_3175_;
}
else
{
uint8_t v___x_3176_; 
lean_dec_ref_known(v___x_3174_, 1);
v___x_3176_ = 1;
return v___x_3176_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_isDeprecated___boxed(lean_object* v_env_3177_, lean_object* v_declName_3178_){
_start:
{
uint8_t v_res_3179_; lean_object* v_r_3180_; 
v_res_3179_ = l_Lean_Linter_isDeprecated(v_env_3177_, v_declName_3178_);
v_r_3180_ = lean_box(v_res_3179_);
return v_r_3180_;
}
}
LEAN_EXPORT uint8_t l_Lean_MessageData_isDeprecationWarning___lam__0(lean_object* v_x_3181_){
_start:
{
lean_object* v___x_3182_; uint8_t v___x_3183_; 
v___x_3182_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_3183_ = lean_name_eq(v_x_3181_, v___x_3182_);
return v___x_3183_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_isDeprecationWarning___lam__0___boxed(lean_object* v_x_3184_){
_start:
{
uint8_t v_res_3185_; lean_object* v_r_3186_; 
v_res_3185_ = l_Lean_MessageData_isDeprecationWarning___lam__0(v_x_3184_);
lean_dec(v_x_3184_);
v_r_3186_ = lean_box(v_res_3185_);
return v_r_3186_;
}
}
LEAN_EXPORT uint8_t l_Lean_MessageData_isDeprecationWarning(lean_object* v_msg_3188_){
_start:
{
lean_object* v___f_3189_; uint8_t v___x_3190_; 
v___f_3189_ = ((lean_object*)(l_Lean_MessageData_isDeprecationWarning___closed__0));
v___x_3190_ = l_Lean_MessageData_hasTag(v___f_3189_, v_msg_3188_);
return v___x_3190_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_isDeprecationWarning___boxed(lean_object* v_msg_3191_){
_start:
{
uint8_t v_res_3192_; lean_object* v_r_3193_; 
v_res_3192_ = l_Lean_MessageData_isDeprecationWarning(v_msg_3191_);
v_r_3193_ = lean_box(v_res_3192_);
return v_r_3193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getDeprecatedNewName(lean_object* v_env_3194_, lean_object* v_declName_3195_){
_start:
{
lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; 
v___x_3196_ = ((lean_object*)(l_Lean_Linter_instInhabitedDeprecationEntry_default));
v___x_3197_ = l_Lean_Linter_deprecatedAttr;
v___x_3198_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v___x_3196_, v___x_3197_, v_env_3194_, v_declName_3195_);
if (lean_obj_tag(v___x_3198_) == 0)
{
lean_object* v___x_3199_; 
v___x_3199_ = lean_box(0);
return v___x_3199_;
}
else
{
lean_object* v_val_3200_; lean_object* v_newName_x3f_3201_; 
v_val_3200_ = lean_ctor_get(v___x_3198_, 0);
lean_inc(v_val_3200_);
lean_dec_ref_known(v___x_3198_, 1);
v_newName_x3f_3201_ = lean_ctor_get(v_val_3200_, 0);
lean_inc(v_newName_x3f_3201_);
lean_dec(v_val_3200_);
return v_newName_x3f_3201_;
}
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0_spec__0(lean_object* v_x_3202_, lean_object* v_x_3203_){
_start:
{
if (lean_obj_tag(v_x_3202_) == 0)
{
if (lean_obj_tag(v_x_3203_) == 0)
{
uint8_t v___x_3204_; 
v___x_3204_ = 1;
return v___x_3204_;
}
else
{
uint8_t v___x_3205_; 
v___x_3205_ = 0;
return v___x_3205_;
}
}
else
{
if (lean_obj_tag(v_x_3203_) == 0)
{
uint8_t v___x_3206_; 
v___x_3206_ = 0;
return v___x_3206_;
}
else
{
lean_object* v_head_3207_; lean_object* v_tail_3208_; lean_object* v_head_3209_; lean_object* v_tail_3210_; uint8_t v___x_3211_; 
v_head_3207_ = lean_ctor_get(v_x_3202_, 0);
v_tail_3208_ = lean_ctor_get(v_x_3202_, 1);
v_head_3209_ = lean_ctor_get(v_x_3203_, 0);
v_tail_3210_ = lean_ctor_get(v_x_3203_, 1);
v___x_3211_ = lean_string_dec_eq(v_head_3207_, v_head_3209_);
if (v___x_3211_ == 0)
{
return v___x_3211_;
}
else
{
v_x_3202_ = v_tail_3208_;
v_x_3203_ = v_tail_3210_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0_spec__0___boxed(lean_object* v_x_3213_, lean_object* v_x_3214_){
_start:
{
uint8_t v_res_3215_; lean_object* v_r_3216_; 
v_res_3215_ = l_List_beq___at___00List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0_spec__0(v_x_3213_, v_x_3214_);
lean_dec(v_x_3214_);
lean_dec(v_x_3213_);
v_r_3216_ = lean_box(v_res_3215_);
return v_r_3216_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0(lean_object* v_x_3217_, lean_object* v_x_3218_){
_start:
{
if (lean_obj_tag(v_x_3217_) == 0)
{
if (lean_obj_tag(v_x_3218_) == 0)
{
uint8_t v___x_3219_; 
v___x_3219_ = 1;
return v___x_3219_;
}
else
{
uint8_t v___x_3220_; 
v___x_3220_ = 0;
return v___x_3220_;
}
}
else
{
if (lean_obj_tag(v_x_3218_) == 0)
{
uint8_t v___x_3221_; 
v___x_3221_ = 0;
return v___x_3221_;
}
else
{
lean_object* v_head_3222_; lean_object* v_tail_3223_; lean_object* v_head_3224_; lean_object* v_tail_3225_; uint8_t v___y_3227_; lean_object* v_fst_3229_; lean_object* v_snd_3230_; lean_object* v_fst_3231_; lean_object* v_snd_3232_; uint8_t v___x_3233_; 
v_head_3222_ = lean_ctor_get(v_x_3217_, 0);
v_tail_3223_ = lean_ctor_get(v_x_3217_, 1);
v_head_3224_ = lean_ctor_get(v_x_3218_, 0);
v_tail_3225_ = lean_ctor_get(v_x_3218_, 1);
v_fst_3229_ = lean_ctor_get(v_head_3222_, 0);
v_snd_3230_ = lean_ctor_get(v_head_3222_, 1);
v_fst_3231_ = lean_ctor_get(v_head_3224_, 0);
v_snd_3232_ = lean_ctor_get(v_head_3224_, 1);
v___x_3233_ = lean_name_eq(v_fst_3229_, v_fst_3231_);
if (v___x_3233_ == 0)
{
v___y_3227_ = v___x_3233_;
goto v___jp_3226_;
}
else
{
uint8_t v___x_3234_; 
v___x_3234_ = l_List_beq___at___00List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0_spec__0(v_snd_3230_, v_snd_3232_);
v___y_3227_ = v___x_3234_;
goto v___jp_3226_;
}
v___jp_3226_:
{
if (v___y_3227_ == 0)
{
return v___y_3227_;
}
else
{
v_x_3217_ = v_tail_3223_;
v_x_3218_ = v_tail_3225_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0___boxed(lean_object* v_x_3235_, lean_object* v_x_3236_){
_start:
{
uint8_t v_res_3237_; lean_object* v_r_3238_; 
v_res_3237_ = l_List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0(v_x_3235_, v_x_3236_);
lean_dec(v_x_3236_);
lean_dec(v_x_3235_);
v_r_3238_ = lean_box(v_res_3237_);
return v_r_3238_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__1(void){
_start:
{
lean_object* v___x_3240_; lean_object* v___x_3241_; 
v___x_3240_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__0));
v___x_3241_ = l_Lean_stringToMessageData(v___x_3240_);
return v___x_3241_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f(lean_object* v_declName_3242_, lean_object* v_newName_3243_, lean_object* v_a_3244_, lean_object* v_a_3245_, lean_object* v_a_3246_, lean_object* v_a_3247_){
_start:
{
lean_object* v_ref_3249_; 
v_ref_3249_ = lean_ctor_get(v_a_3246_, 2);
if (lean_obj_tag(v_ref_3249_) == 3)
{
lean_object* v_val_3250_; uint8_t v___x_3251_; 
v_val_3250_ = lean_ctor_get(v_ref_3249_, 2);
v___x_3251_ = l_Lean_Name_hasMacroScopes(v_val_3250_);
if (v___x_3251_ == 0)
{
uint8_t v___x_3252_; lean_object* v___x_3330_; 
v___x_3252_ = 1;
v___x_3330_ = l_Lean_Syntax_getRange_x3f(v_ref_3249_, v___x_3252_);
if (lean_obj_tag(v___x_3330_) == 0)
{
if (v___x_3251_ == 0)
{
lean_object* v___x_3331_; lean_object* v___x_3332_; 
lean_dec(v_newName_3243_);
lean_dec(v_declName_3242_);
v___x_3331_ = lean_box(0);
v___x_3332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3332_, 0, v___x_3331_);
return v___x_3332_;
}
else
{
goto v___jp_3253_;
}
}
else
{
lean_dec_ref_known(v___x_3330_, 1);
goto v___jp_3253_;
}
v___jp_3253_:
{
lean_object* v___x_3254_; 
lean_inc(v_val_3250_);
v___x_3254_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25(v_val_3250_, v___x_3252_, v_a_3244_, v_a_3245_, v_a_3246_, v_a_3247_);
if (lean_obj_tag(v___x_3254_) == 0)
{
lean_object* v_a_3255_; lean_object* v___x_3257_; uint8_t v_isShared_3258_; uint8_t v_isSharedCheck_3321_; 
v_a_3255_ = lean_ctor_get(v___x_3254_, 0);
v_isSharedCheck_3321_ = !lean_is_exclusive(v___x_3254_);
if (v_isSharedCheck_3321_ == 0)
{
v___x_3257_ = v___x_3254_;
v_isShared_3258_ = v_isSharedCheck_3321_;
goto v_resetjp_3256_;
}
else
{
lean_inc(v_a_3255_);
lean_dec(v___x_3254_);
v___x_3257_ = lean_box(0);
v_isShared_3258_ = v_isSharedCheck_3321_;
goto v_resetjp_3256_;
}
v_resetjp_3256_:
{
lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; uint8_t v___x_3262_; 
v___x_3259_ = lean_box(0);
v___x_3260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3260_, 0, v_declName_3242_);
lean_ctor_set(v___x_3260_, 1, v___x_3259_);
v___x_3261_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3261_, 0, v___x_3260_);
lean_ctor_set(v___x_3261_, 1, v___x_3259_);
v___x_3262_ = l_List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0(v_a_3255_, v___x_3261_);
lean_dec_ref_known(v___x_3261_, 2);
lean_dec(v_a_3255_);
if (v___x_3262_ == 0)
{
lean_object* v___x_3263_; lean_object* v___x_3265_; 
lean_dec(v_newName_3243_);
v___x_3263_ = lean_box(0);
if (v_isShared_3258_ == 0)
{
lean_ctor_set(v___x_3257_, 0, v___x_3263_);
v___x_3265_ = v___x_3257_;
goto v_reusejp_3264_;
}
else
{
lean_object* v_reuseFailAlloc_3266_; 
v_reuseFailAlloc_3266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3266_, 0, v___x_3263_);
v___x_3265_ = v_reuseFailAlloc_3266_;
goto v_reusejp_3264_;
}
v_reusejp_3264_:
{
return v___x_3265_;
}
}
else
{
lean_object* v___x_3267_; 
lean_del_object(v___x_3257_);
v___x_3267_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5(v_newName_3243_, v___x_3251_, v_a_3244_, v_a_3245_, v_a_3246_, v_a_3247_);
if (lean_obj_tag(v___x_3267_) == 0)
{
lean_object* v_a_3268_; lean_object* v___x_3270_; uint8_t v_isShared_3271_; uint8_t v_isSharedCheck_3312_; 
v_a_3268_ = lean_ctor_get(v___x_3267_, 0);
v_isSharedCheck_3312_ = !lean_is_exclusive(v___x_3267_);
if (v_isSharedCheck_3312_ == 0)
{
v___x_3270_ = v___x_3267_;
v_isShared_3271_ = v_isSharedCheck_3312_;
goto v_resetjp_3269_;
}
else
{
lean_inc(v_a_3268_);
lean_dec(v___x_3267_);
v___x_3270_ = lean_box(0);
v_isShared_3271_ = v_isSharedCheck_3312_;
goto v_resetjp_3269_;
}
v_resetjp_3269_:
{
if (lean_obj_tag(v_a_3268_) == 1)
{
lean_object* v_val_3272_; lean_object* v___x_3274_; uint8_t v_isShared_3275_; uint8_t v_isSharedCheck_3307_; 
lean_del_object(v___x_3270_);
v_val_3272_ = lean_ctor_get(v_a_3268_, 0);
v_isSharedCheck_3307_ = !lean_is_exclusive(v_a_3268_);
if (v_isSharedCheck_3307_ == 0)
{
v___x_3274_ = v_a_3268_;
v_isShared_3275_ = v_isSharedCheck_3307_;
goto v_resetjp_3273_;
}
else
{
lean_inc(v_val_3272_);
lean_dec(v_a_3268_);
v___x_3274_ = lean_box(0);
v_isShared_3275_ = v_isSharedCheck_3307_;
goto v_resetjp_3273_;
}
v_resetjp_3273_:
{
lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; uint8_t v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3287_; 
v___x_3276_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__1, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__1_once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__1);
v___x_3277_ = l_Lean_Name_toString(v_val_3272_, v___x_3252_);
v___x_3278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3278_, 0, v___x_3277_);
v___x_3279_ = lean_box(0);
v___x_3280_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3280_, 0, v___x_3278_);
lean_ctor_set(v___x_3280_, 1, v___x_3279_);
lean_ctor_set(v___x_3280_, 2, v___x_3279_);
lean_ctor_set(v___x_3280_, 3, v___x_3279_);
lean_ctor_set(v___x_3280_, 4, v___x_3279_);
lean_ctor_set(v___x_3280_, 5, v___x_3279_);
v___x_3281_ = 0;
v___x_3282_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_3282_, 0, v___x_3280_);
lean_ctor_set(v___x_3282_, 1, v___x_3279_);
lean_ctor_set(v___x_3282_, 2, v___x_3279_);
lean_ctor_set_uint8(v___x_3282_, sizeof(void*)*3, v___x_3281_);
v___x_3283_ = lean_unsigned_to_nat(1u);
v___x_3284_ = lean_mk_empty_array_with_capacity(v___x_3283_);
v___x_3285_ = lean_array_push(v___x_3284_, v___x_3282_);
lean_inc_ref(v_ref_3249_);
if (v_isShared_3275_ == 0)
{
lean_ctor_set(v___x_3274_, 0, v_ref_3249_);
v___x_3287_ = v___x_3274_;
goto v_reusejp_3286_;
}
else
{
lean_object* v_reuseFailAlloc_3306_; 
v_reuseFailAlloc_3306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3306_, 0, v_ref_3249_);
v___x_3287_ = v_reuseFailAlloc_3306_;
goto v_reusejp_3286_;
}
v_reusejp_3286_:
{
lean_object* v___x_3288_; 
v___x_3288_ = l_Lean_MessageData_hint(v___x_3276_, v___x_3285_, v___x_3287_, v___x_3279_, v___x_3251_, v_a_3246_, v_a_3247_);
lean_dec_ref(v___x_3285_);
if (lean_obj_tag(v___x_3288_) == 0)
{
lean_object* v_a_3289_; lean_object* v___x_3291_; uint8_t v_isShared_3292_; uint8_t v_isSharedCheck_3297_; 
v_a_3289_ = lean_ctor_get(v___x_3288_, 0);
v_isSharedCheck_3297_ = !lean_is_exclusive(v___x_3288_);
if (v_isSharedCheck_3297_ == 0)
{
v___x_3291_ = v___x_3288_;
v_isShared_3292_ = v_isSharedCheck_3297_;
goto v_resetjp_3290_;
}
else
{
lean_inc(v_a_3289_);
lean_dec(v___x_3288_);
v___x_3291_ = lean_box(0);
v_isShared_3292_ = v_isSharedCheck_3297_;
goto v_resetjp_3290_;
}
v_resetjp_3290_:
{
lean_object* v___x_3293_; lean_object* v___x_3295_; 
v___x_3293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3293_, 0, v_a_3289_);
if (v_isShared_3292_ == 0)
{
lean_ctor_set(v___x_3291_, 0, v___x_3293_);
v___x_3295_ = v___x_3291_;
goto v_reusejp_3294_;
}
else
{
lean_object* v_reuseFailAlloc_3296_; 
v_reuseFailAlloc_3296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3296_, 0, v___x_3293_);
v___x_3295_ = v_reuseFailAlloc_3296_;
goto v_reusejp_3294_;
}
v_reusejp_3294_:
{
return v___x_3295_;
}
}
}
else
{
lean_object* v_a_3298_; lean_object* v___x_3300_; uint8_t v_isShared_3301_; uint8_t v_isSharedCheck_3305_; 
v_a_3298_ = lean_ctor_get(v___x_3288_, 0);
v_isSharedCheck_3305_ = !lean_is_exclusive(v___x_3288_);
if (v_isSharedCheck_3305_ == 0)
{
v___x_3300_ = v___x_3288_;
v_isShared_3301_ = v_isSharedCheck_3305_;
goto v_resetjp_3299_;
}
else
{
lean_inc(v_a_3298_);
lean_dec(v___x_3288_);
v___x_3300_ = lean_box(0);
v_isShared_3301_ = v_isSharedCheck_3305_;
goto v_resetjp_3299_;
}
v_resetjp_3299_:
{
lean_object* v___x_3303_; 
if (v_isShared_3301_ == 0)
{
v___x_3303_ = v___x_3300_;
goto v_reusejp_3302_;
}
else
{
lean_object* v_reuseFailAlloc_3304_; 
v_reuseFailAlloc_3304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3304_, 0, v_a_3298_);
v___x_3303_ = v_reuseFailAlloc_3304_;
goto v_reusejp_3302_;
}
v_reusejp_3302_:
{
return v___x_3303_;
}
}
}
}
}
}
else
{
lean_object* v___x_3308_; lean_object* v___x_3310_; 
lean_dec(v_a_3268_);
v___x_3308_ = lean_box(0);
if (v_isShared_3271_ == 0)
{
lean_ctor_set(v___x_3270_, 0, v___x_3308_);
v___x_3310_ = v___x_3270_;
goto v_reusejp_3309_;
}
else
{
lean_object* v_reuseFailAlloc_3311_; 
v_reuseFailAlloc_3311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3311_, 0, v___x_3308_);
v___x_3310_ = v_reuseFailAlloc_3311_;
goto v_reusejp_3309_;
}
v_reusejp_3309_:
{
return v___x_3310_;
}
}
}
}
else
{
lean_object* v_a_3313_; lean_object* v___x_3315_; uint8_t v_isShared_3316_; uint8_t v_isSharedCheck_3320_; 
v_a_3313_ = lean_ctor_get(v___x_3267_, 0);
v_isSharedCheck_3320_ = !lean_is_exclusive(v___x_3267_);
if (v_isSharedCheck_3320_ == 0)
{
v___x_3315_ = v___x_3267_;
v_isShared_3316_ = v_isSharedCheck_3320_;
goto v_resetjp_3314_;
}
else
{
lean_inc(v_a_3313_);
lean_dec(v___x_3267_);
v___x_3315_ = lean_box(0);
v_isShared_3316_ = v_isSharedCheck_3320_;
goto v_resetjp_3314_;
}
v_resetjp_3314_:
{
lean_object* v___x_3318_; 
if (v_isShared_3316_ == 0)
{
v___x_3318_ = v___x_3315_;
goto v_reusejp_3317_;
}
else
{
lean_object* v_reuseFailAlloc_3319_; 
v_reuseFailAlloc_3319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3319_, 0, v_a_3313_);
v___x_3318_ = v_reuseFailAlloc_3319_;
goto v_reusejp_3317_;
}
v_reusejp_3317_:
{
return v___x_3318_;
}
}
}
}
}
}
else
{
lean_object* v_a_3322_; lean_object* v___x_3324_; uint8_t v_isShared_3325_; uint8_t v_isSharedCheck_3329_; 
lean_dec(v_newName_3243_);
lean_dec(v_declName_3242_);
v_a_3322_ = lean_ctor_get(v___x_3254_, 0);
v_isSharedCheck_3329_ = !lean_is_exclusive(v___x_3254_);
if (v_isSharedCheck_3329_ == 0)
{
v___x_3324_ = v___x_3254_;
v_isShared_3325_ = v_isSharedCheck_3329_;
goto v_resetjp_3323_;
}
else
{
lean_inc(v_a_3322_);
lean_dec(v___x_3254_);
v___x_3324_ = lean_box(0);
v_isShared_3325_ = v_isSharedCheck_3329_;
goto v_resetjp_3323_;
}
v_resetjp_3323_:
{
lean_object* v___x_3327_; 
if (v_isShared_3325_ == 0)
{
v___x_3327_ = v___x_3324_;
goto v_reusejp_3326_;
}
else
{
lean_object* v_reuseFailAlloc_3328_; 
v_reuseFailAlloc_3328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3328_, 0, v_a_3322_);
v___x_3327_ = v_reuseFailAlloc_3328_;
goto v_reusejp_3326_;
}
v_reusejp_3326_:
{
return v___x_3327_;
}
}
}
}
}
else
{
lean_object* v___x_3333_; lean_object* v___x_3334_; 
lean_dec(v_newName_3243_);
lean_dec(v_declName_3242_);
v___x_3333_ = lean_box(0);
v___x_3334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3334_, 0, v___x_3333_);
return v___x_3334_;
}
}
else
{
lean_object* v___x_3335_; lean_object* v___x_3336_; 
lean_dec(v_newName_3243_);
lean_dec(v_declName_3242_);
v___x_3335_ = lean_box(0);
v___x_3336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3336_, 0, v___x_3335_);
return v___x_3336_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___boxed(lean_object* v_declName_3337_, lean_object* v_newName_3338_, lean_object* v_a_3339_, lean_object* v_a_3340_, lean_object* v_a_3341_, lean_object* v_a_3342_, lean_object* v___y_3343_){
_start:
{
lean_object* v_res_3344_; 
v_res_3344_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f(v_declName_3337_, v_newName_3338_, v_a_3339_, v_a_3340_, v_a_3341_, v_a_3342_);
lean_dec(v_a_3342_);
lean_dec_ref(v_a_3341_);
lean_dec(v_a_3340_);
lean_dec_ref(v_a_3339_);
return v_res_3344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0___redArg(lean_object* v_o_3345_, lean_object* v___y_3346_){
_start:
{
lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v_env_3350_; lean_object* v___x_3351_; lean_object* v_toEnvExtension_3352_; lean_object* v_asyncMode_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v_merged_3356_; lean_object* v___x_3358_; uint8_t v_isShared_3359_; uint8_t v_isSharedCheck_3364_; 
v___x_3348_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_3349_ = lean_st_ref_get(v___y_3346_);
v_env_3350_ = lean_ctor_get(v___x_3349_, 0);
lean_inc_ref(v_env_3350_);
lean_dec(v___x_3349_);
v___x_3351_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_3352_ = lean_ctor_get(v___x_3351_, 0);
v_asyncMode_3353_ = lean_ctor_get(v_toEnvExtension_3352_, 2);
v___x_3354_ = lean_box(0);
v___x_3355_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3348_, v___x_3351_, v_env_3350_, v_asyncMode_3353_, v___x_3354_);
v_merged_3356_ = lean_ctor_get(v___x_3355_, 0);
v_isSharedCheck_3364_ = !lean_is_exclusive(v___x_3355_);
if (v_isSharedCheck_3364_ == 0)
{
lean_object* v_unused_3365_; 
v_unused_3365_ = lean_ctor_get(v___x_3355_, 1);
lean_dec(v_unused_3365_);
v___x_3358_ = v___x_3355_;
v_isShared_3359_ = v_isSharedCheck_3364_;
goto v_resetjp_3357_;
}
else
{
lean_inc(v_merged_3356_);
lean_dec(v___x_3355_);
v___x_3358_ = lean_box(0);
v_isShared_3359_ = v_isSharedCheck_3364_;
goto v_resetjp_3357_;
}
v_resetjp_3357_:
{
lean_object* v___x_3361_; 
if (v_isShared_3359_ == 0)
{
lean_ctor_set(v___x_3358_, 1, v_merged_3356_);
lean_ctor_set(v___x_3358_, 0, v_o_3345_);
v___x_3361_ = v___x_3358_;
goto v_reusejp_3360_;
}
else
{
lean_object* v_reuseFailAlloc_3363_; 
v_reuseFailAlloc_3363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3363_, 0, v_o_3345_);
lean_ctor_set(v_reuseFailAlloc_3363_, 1, v_merged_3356_);
v___x_3361_ = v_reuseFailAlloc_3363_;
goto v_reusejp_3360_;
}
v_reusejp_3360_:
{
lean_object* v___x_3362_; 
v___x_3362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3362_, 0, v___x_3361_);
return v___x_3362_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0___redArg___boxed(lean_object* v_o_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_){
_start:
{
lean_object* v_res_3369_; 
v_res_3369_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0___redArg(v_o_3366_, v___y_3367_);
lean_dec(v___y_3367_);
return v_res_3369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0(lean_object* v___y_3370_, lean_object* v___y_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_){
_start:
{
lean_object* v_toCold_3375_; lean_object* v_options_3376_; lean_object* v___x_3377_; 
v_toCold_3375_ = lean_ctor_get(v___y_3372_, 0);
v_options_3376_ = lean_ctor_get(v_toCold_3375_, 2);
lean_inc_ref(v_options_3376_);
v___x_3377_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0___redArg(v_options_3376_, v___y_3373_);
return v___x_3377_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0___boxed(lean_object* v___y_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_){
_start:
{
lean_object* v_res_3383_; 
v_res_3383_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0(v___y_3378_, v___y_3379_, v___y_3380_, v___y_3381_);
lean_dec(v___y_3381_);
lean_dec_ref(v___y_3380_);
lean_dec(v___y_3379_);
lean_dec_ref(v___y_3378_);
return v_res_3383_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__1(void){
_start:
{
lean_object* v___x_3385_; lean_object* v___x_3386_; 
v___x_3385_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__0));
v___x_3386_ = l_Lean_stringToMessageData(v___x_3385_);
return v___x_3386_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__3(void){
_start:
{
lean_object* v___x_3388_; lean_object* v___x_3389_; 
v___x_3388_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__2));
v___x_3389_ = l_Lean_stringToMessageData(v___x_3388_);
return v___x_3389_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__5(void){
_start:
{
lean_object* v___x_3391_; lean_object* v___x_3392_; 
v___x_3391_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__4));
v___x_3392_ = l_Lean_stringToMessageData(v___x_3391_);
return v___x_3392_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__7(void){
_start:
{
lean_object* v___x_3394_; lean_object* v___x_3395_; 
v___x_3394_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__6));
v___x_3395_ = l_Lean_stringToMessageData(v___x_3394_);
return v___x_3395_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__9(void){
_start:
{
lean_object* v___x_3397_; lean_object* v___x_3398_; 
v___x_3397_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__8));
v___x_3398_ = l_Lean_stringToMessageData(v___x_3397_);
return v___x_3398_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__11(void){
_start:
{
lean_object* v___x_3400_; lean_object* v___x_3401_; 
v___x_3400_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__10));
v___x_3401_ = l_Lean_stringToMessageData(v___x_3400_);
return v___x_3401_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__13(void){
_start:
{
lean_object* v___x_3403_; lean_object* v___x_3404_; 
v___x_3403_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__12));
v___x_3404_ = l_Lean_stringToMessageData(v___x_3403_);
return v___x_3404_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__15(void){
_start:
{
lean_object* v___x_3407_; lean_object* v___x_3408_; 
v___x_3407_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__14));
v___x_3408_ = l_Lean_MessageData_ofFormat(v___x_3407_);
return v___x_3408_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__17(void){
_start:
{
lean_object* v___x_3410_; lean_object* v___x_3411_; 
v___x_3410_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__16));
v___x_3411_ = l_Lean_stringToMessageData(v___x_3410_);
return v___x_3411_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__19(void){
_start:
{
lean_object* v___x_3413_; lean_object* v___x_3414_; 
v___x_3413_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__18));
v___x_3414_ = l_Lean_stringToMessageData(v___x_3413_);
return v___x_3414_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__21(void){
_start:
{
lean_object* v___x_3416_; lean_object* v___x_3417_; 
v___x_3416_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__20));
v___x_3417_ = l_Lean_stringToMessageData(v___x_3416_);
return v___x_3417_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__23(void){
_start:
{
lean_object* v___x_3419_; lean_object* v___x_3420_; 
v___x_3419_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__22));
v___x_3420_ = l_Lean_stringToMessageData(v___x_3419_);
return v___x_3420_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__25(void){
_start:
{
lean_object* v___x_3422_; lean_object* v___x_3423_; 
v___x_3422_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__24));
v___x_3423_ = l_Lean_stringToMessageData(v___x_3422_);
return v___x_3423_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__27(void){
_start:
{
lean_object* v___x_3425_; lean_object* v___x_3426_; 
v___x_3425_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__26));
v___x_3426_ = l_Lean_stringToMessageData(v___x_3425_);
return v___x_3426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_checkDeprecated(lean_object* v_declName_3427_, uint8_t v_allowSuggestion_3428_, lean_object* v_a_3429_, lean_object* v_a_3430_, lean_object* v_a_3431_, lean_object* v_a_3432_){
_start:
{
lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v_a_3436_; lean_object* v___x_3438_; uint8_t v_isShared_3439_; uint8_t v_isSharedCheck_3607_; 
v___x_3434_ = ((lean_object*)(l_Lean_Linter_instInhabitedDeprecationEntry_default));
v___x_3435_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0(v_a_3429_, v_a_3430_, v_a_3431_, v_a_3432_);
v_a_3436_ = lean_ctor_get(v___x_3435_, 0);
v_isSharedCheck_3607_ = !lean_is_exclusive(v___x_3435_);
if (v_isSharedCheck_3607_ == 0)
{
v___x_3438_ = v___x_3435_;
v_isShared_3439_ = v_isSharedCheck_3607_;
goto v_resetjp_3437_;
}
else
{
lean_inc(v_a_3436_);
lean_dec(v___x_3435_);
v___x_3438_ = lean_box(0);
v_isShared_3439_ = v_isSharedCheck_3607_;
goto v_resetjp_3437_;
}
v_resetjp_3437_:
{
lean_object* v___x_3440_; uint8_t v___x_3441_; lean_object* v_extraMsg_3443_; lean_object* v___y_3444_; lean_object* v___y_3445_; lean_object* v___y_3446_; lean_object* v___y_3447_; 
v___x_3440_ = l_Lean_Linter_linter_deprecated;
v___x_3441_ = l_Lean_Linter_getLinterValue(v___x_3440_, v_a_3436_);
lean_dec(v_a_3436_);
if (v___x_3441_ == 0)
{
lean_object* v___x_3457_; lean_object* v___x_3459_; 
lean_dec(v_declName_3427_);
v___x_3457_ = lean_box(0);
if (v_isShared_3439_ == 0)
{
lean_ctor_set(v___x_3438_, 0, v___x_3457_);
v___x_3459_ = v___x_3438_;
goto v_reusejp_3458_;
}
else
{
lean_object* v_reuseFailAlloc_3460_; 
v_reuseFailAlloc_3460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3460_, 0, v___x_3457_);
v___x_3459_ = v_reuseFailAlloc_3460_;
goto v_reusejp_3458_;
}
v_reusejp_3458_:
{
return v___x_3459_;
}
}
else
{
lean_object* v___x_3461_; lean_object* v_env_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; 
v___x_3461_ = lean_st_ref_get(v_a_3432_);
v_env_3462_ = lean_ctor_get(v___x_3461_, 0);
lean_inc_ref(v_env_3462_);
lean_dec(v___x_3461_);
v___x_3463_ = l_Lean_Linter_deprecatedAttr;
lean_inc(v_declName_3427_);
v___x_3464_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v___x_3434_, v___x_3463_, v_env_3462_, v_declName_3427_);
if (lean_obj_tag(v___x_3464_) == 1)
{
lean_object* v_val_3465_; lean_object* v_text_x3f_3466_; 
lean_del_object(v___x_3438_);
v_val_3465_ = lean_ctor_get(v___x_3464_, 0);
lean_inc(v_val_3465_);
lean_dec_ref_known(v___x_3464_, 1);
v_text_x3f_3466_ = lean_ctor_get(v_val_3465_, 1);
if (lean_obj_tag(v_text_x3f_3466_) == 0)
{
lean_object* v_newName_x3f_3467_; 
v_newName_x3f_3467_ = lean_ctor_get(v_val_3465_, 0);
lean_inc(v_newName_x3f_3467_);
lean_dec(v_val_3465_);
if (lean_obj_tag(v_newName_x3f_3467_) == 0)
{
lean_object* v___x_3468_; 
v___x_3468_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__2_spec__4___closed__9);
v_extraMsg_3443_ = v___x_3468_;
v___y_3444_ = v_a_3429_;
v___y_3445_ = v_a_3430_;
v___y_3446_ = v_a_3431_;
v___y_3447_ = v_a_3432_;
goto v___jp_3442_;
}
else
{
lean_object* v_val_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v_env_3476_; lean_object* v___x_3477_; uint8_t v___x_3478_; lean_object* v___x_3479_; 
v_val_3469_ = lean_ctor_get(v_newName_x3f_3467_, 0);
lean_inc_n(v_val_3469_, 2);
lean_dec_ref_known(v_newName_x3f_3467_, 1);
v___x_3470_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__3, &l_Lean_Linter_checkDeprecated___closed__3_once, _init_l_Lean_Linter_checkDeprecated___closed__3);
v___x_3471_ = l_Lean_MessageData_ofConstName(v_val_3469_, v___x_3441_);
lean_inc_ref(v___x_3471_);
v___x_3472_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3472_, 0, v___x_3470_);
lean_ctor_set(v___x_3472_, 1, v___x_3471_);
v___x_3473_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__58_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__58_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__58_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_3474_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3474_, 0, v___x_3472_);
lean_ctor_set(v___x_3474_, 1, v___x_3473_);
v___x_3475_ = lean_st_ref_get(v_a_3432_);
v_env_3476_ = lean_ctor_get(v___x_3475_, 0);
lean_inc_ref_n(v_env_3476_, 2);
lean_dec(v___x_3475_);
v___x_3477_ = l_Lean_Name_getPrefix(v_declName_3427_);
v___x_3478_ = 0;
lean_inc(v_declName_3427_);
v___x_3479_ = l_Lean_Environment_find_x3f(v_env_3476_, v_declName_3427_, v___x_3478_);
if (lean_obj_tag(v___x_3479_) == 1)
{
lean_object* v_val_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; 
v_val_3480_ = lean_ctor_get(v___x_3479_, 0);
lean_inc(v_val_3480_);
lean_dec_ref_known(v___x_3479_, 1);
v___x_3481_ = l_Lean_Name_getPrefix(v_val_3469_);
lean_inc(v_val_3469_);
lean_inc_ref(v_env_3476_);
v___x_3482_ = l_Lean_Environment_find_x3f(v_env_3476_, v_val_3469_, v___x_3478_);
if (lean_obj_tag(v___x_3482_) == 1)
{
lean_object* v_val_3483_; lean_object* v___x_3484_; 
v_val_3483_ = lean_ctor_get(v___x_3482_, 0);
lean_inc(v_val_3483_);
lean_dec_ref_known(v___x_3482_, 1);
v___x_3484_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq(v_val_3480_, v_val_3483_, v_a_3429_, v_a_3430_, v_a_3431_, v_a_3432_);
if (lean_obj_tag(v___x_3484_) == 0)
{
lean_object* v_a_3485_; lean_object* v_msg_3487_; lean_object* v___y_3488_; lean_object* v___y_3489_; lean_object* v___y_3490_; lean_object* v___y_3491_; lean_object* v___y_3506_; lean_object* v___y_3507_; lean_object* v___y_3508_; lean_object* v___y_3509_; lean_object* v___y_3510_; lean_object* v___y_3511_; lean_object* v___y_3526_; lean_object* v___y_3527_; lean_object* v___y_3528_; lean_object* v___y_3529_; lean_object* v___y_3530_; lean_object* v___y_3531_; lean_object* v___y_3539_; lean_object* v___y_3540_; lean_object* v___y_3541_; lean_object* v___y_3542_; lean_object* v___y_3543_; uint8_t v___y_3544_; uint8_t v___y_3545_; lean_object* v_msg_3572_; lean_object* v___y_3573_; lean_object* v___y_3574_; lean_object* v___y_3575_; lean_object* v___y_3576_; uint8_t v___x_3579_; 
v_a_3485_ = lean_ctor_get(v___x_3484_, 0);
lean_inc(v_a_3485_);
lean_dec_ref_known(v___x_3484_, 1);
v___x_3579_ = lean_unbox(v_a_3485_);
if (v___x_3579_ == 0)
{
if (v___x_3441_ == 0)
{
lean_dec(v_val_3483_);
lean_dec(v_val_3480_);
v_msg_3572_ = v___x_3474_;
v___y_3573_ = v_a_3429_;
v___y_3574_ = v_a_3430_;
v___y_3575_ = v_a_3431_;
v___y_3576_ = v_a_3432_;
goto v___jp_3571_;
}
else
{
lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; 
v___x_3580_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__7_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__7_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__7_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_3581_ = l_Lean_ConstantInfo_type(v_val_3483_);
lean_dec(v_val_3483_);
v___x_3582_ = l_Lean_indentExpr(v___x_3581_);
v___x_3583_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3583_, 0, v___x_3580_);
lean_ctor_set(v___x_3583_, 1, v___x_3582_);
v___x_3584_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__9_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__9_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__9_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_3585_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3585_, 0, v___x_3583_);
lean_ctor_set(v___x_3585_, 1, v___x_3584_);
v___x_3586_ = l_Lean_ConstantInfo_type(v_val_3480_);
lean_dec(v_val_3480_);
v___x_3587_ = l_Lean_indentExpr(v___x_3586_);
v___x_3588_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3588_, 0, v___x_3585_);
lean_ctor_set(v___x_3588_, 1, v___x_3587_);
v___x_3589_ = l_Lean_MessageData_note(v___x_3588_);
v___x_3590_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3590_, 0, v___x_3474_);
lean_ctor_set(v___x_3590_, 1, v___x_3589_);
v_msg_3572_ = v___x_3590_;
v___y_3573_ = v_a_3429_;
v___y_3574_ = v_a_3430_;
v___y_3575_ = v_a_3431_;
v___y_3576_ = v_a_3432_;
goto v___jp_3571_;
}
}
else
{
lean_dec(v_val_3483_);
lean_dec(v_val_3480_);
v_msg_3572_ = v___x_3474_;
v___y_3573_ = v_a_3429_;
v___y_3574_ = v_a_3430_;
v___y_3575_ = v_a_3431_;
v___y_3576_ = v_a_3432_;
goto v___jp_3571_;
}
v___jp_3486_:
{
if (v_allowSuggestion_3428_ == 0)
{
lean_dec(v_a_3485_);
lean_dec(v_val_3469_);
v_extraMsg_3443_ = v_msg_3487_;
v___y_3444_ = v___y_3488_;
v___y_3445_ = v___y_3489_;
v___y_3446_ = v___y_3490_;
v___y_3447_ = v___y_3491_;
goto v___jp_3442_;
}
else
{
uint8_t v___x_3492_; 
v___x_3492_ = lean_unbox(v_a_3485_);
lean_dec(v_a_3485_);
if (v___x_3492_ == 0)
{
lean_dec(v_val_3469_);
v_extraMsg_3443_ = v_msg_3487_;
v___y_3444_ = v___y_3488_;
v___y_3445_ = v___y_3489_;
v___y_3446_ = v___y_3490_;
v___y_3447_ = v___y_3491_;
goto v___jp_3442_;
}
else
{
lean_object* v___x_3493_; 
lean_inc(v_declName_3427_);
v___x_3493_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f(v_declName_3427_, v_val_3469_, v___y_3488_, v___y_3489_, v___y_3490_, v___y_3491_);
if (lean_obj_tag(v___x_3493_) == 0)
{
lean_object* v_a_3494_; 
v_a_3494_ = lean_ctor_get(v___x_3493_, 0);
lean_inc(v_a_3494_);
lean_dec_ref_known(v___x_3493_, 1);
if (lean_obj_tag(v_a_3494_) == 1)
{
lean_object* v_val_3495_; lean_object* v___x_3496_; 
v_val_3495_ = lean_ctor_get(v_a_3494_, 0);
lean_inc(v_val_3495_);
lean_dec_ref_known(v_a_3494_, 1);
v___x_3496_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3496_, 0, v_msg_3487_);
lean_ctor_set(v___x_3496_, 1, v_val_3495_);
v_extraMsg_3443_ = v___x_3496_;
v___y_3444_ = v___y_3488_;
v___y_3445_ = v___y_3489_;
v___y_3446_ = v___y_3490_;
v___y_3447_ = v___y_3491_;
goto v___jp_3442_;
}
else
{
lean_dec(v_a_3494_);
v_extraMsg_3443_ = v_msg_3487_;
v___y_3444_ = v___y_3488_;
v___y_3445_ = v___y_3489_;
v___y_3446_ = v___y_3490_;
v___y_3447_ = v___y_3491_;
goto v___jp_3442_;
}
}
else
{
lean_object* v_a_3497_; lean_object* v___x_3499_; uint8_t v_isShared_3500_; uint8_t v_isSharedCheck_3504_; 
lean_dec_ref(v_msg_3487_);
lean_dec(v_declName_3427_);
v_a_3497_ = lean_ctor_get(v___x_3493_, 0);
v_isSharedCheck_3504_ = !lean_is_exclusive(v___x_3493_);
if (v_isSharedCheck_3504_ == 0)
{
v___x_3499_ = v___x_3493_;
v_isShared_3500_ = v_isSharedCheck_3504_;
goto v_resetjp_3498_;
}
else
{
lean_inc(v_a_3497_);
lean_dec(v___x_3493_);
v___x_3499_ = lean_box(0);
v_isShared_3500_ = v_isSharedCheck_3504_;
goto v_resetjp_3498_;
}
v_resetjp_3498_:
{
lean_object* v___x_3502_; 
if (v_isShared_3500_ == 0)
{
v___x_3502_ = v___x_3499_;
goto v_reusejp_3501_;
}
else
{
lean_object* v_reuseFailAlloc_3503_; 
v_reuseFailAlloc_3503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3503_, 0, v_a_3497_);
v___x_3502_ = v_reuseFailAlloc_3503_;
goto v_reusejp_3501_;
}
v_reusejp_3501_:
{
return v___x_3502_;
}
}
}
}
}
}
v___jp_3505_:
{
lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; 
v___x_3512_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__46_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__46_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__46_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_3513_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3513_, 0, v___x_3512_);
lean_ctor_set(v___x_3513_, 1, v___x_3471_);
v___x_3514_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__5, &l_Lean_Linter_checkDeprecated___closed__5_once, _init_l_Lean_Linter_checkDeprecated___closed__5);
v___x_3515_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3515_, 0, v___x_3513_);
lean_ctor_set(v___x_3515_, 1, v___x_3514_);
v___x_3516_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3516_, 0, v___x_3515_);
lean_ctor_set(v___x_3516_, 1, v___y_3511_);
v___x_3517_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__7, &l_Lean_Linter_checkDeprecated___closed__7_once, _init_l_Lean_Linter_checkDeprecated___closed__7);
v___x_3518_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3518_, 0, v___x_3516_);
lean_ctor_set(v___x_3518_, 1, v___x_3517_);
v___x_3519_ = l_Lean_MessageData_ofName(v___x_3481_);
v___x_3520_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3520_, 0, v___x_3518_);
lean_ctor_set(v___x_3520_, 1, v___x_3519_);
v___x_3521_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__9, &l_Lean_Linter_checkDeprecated___closed__9_once, _init_l_Lean_Linter_checkDeprecated___closed__9);
v___x_3522_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3522_, 0, v___x_3520_);
lean_ctor_set(v___x_3522_, 1, v___x_3521_);
v___x_3523_ = l_Lean_MessageData_note(v___x_3522_);
v___x_3524_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3524_, 0, v___y_3510_);
lean_ctor_set(v___x_3524_, 1, v___x_3523_);
v_msg_3487_ = v___x_3524_;
v___y_3488_ = v___y_3508_;
v___y_3489_ = v___y_3506_;
v___y_3490_ = v___y_3509_;
v___y_3491_ = v___y_3507_;
goto v___jp_3486_;
}
v___jp_3525_:
{
lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; 
v___x_3532_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__11, &l_Lean_Linter_checkDeprecated___closed__11_once, _init_l_Lean_Linter_checkDeprecated___closed__11);
v___x_3533_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3533_, 0, v___x_3532_);
lean_ctor_set(v___x_3533_, 1, v___y_3531_);
v___x_3534_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__13, &l_Lean_Linter_checkDeprecated___closed__13_once, _init_l_Lean_Linter_checkDeprecated___closed__13);
v___x_3535_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3535_, 0, v___x_3533_);
lean_ctor_set(v___x_3535_, 1, v___x_3534_);
v___x_3536_ = l_Lean_MessageData_note(v___x_3535_);
v___x_3537_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3537_, 0, v___y_3530_);
lean_ctor_set(v___x_3537_, 1, v___x_3536_);
v_msg_3487_ = v___x_3537_;
v___y_3488_ = v___y_3528_;
v___y_3489_ = v___y_3526_;
v___y_3490_ = v___y_3529_;
v___y_3491_ = v___y_3527_;
goto v___jp_3486_;
}
v___jp_3538_:
{
if (v___y_3545_ == 0)
{
uint8_t v___x_3546_; 
lean_inc(v_declName_3427_);
lean_inc_ref(v_env_3476_);
v___x_3546_ = l_Lean_isProtected(v_env_3476_, v_declName_3427_);
if (v___x_3546_ == 0)
{
if (v___x_3441_ == 0)
{
lean_dec(v___x_3481_);
lean_dec_ref(v_env_3476_);
lean_dec_ref(v___x_3471_);
v_msg_3487_ = v___y_3543_;
v___y_3488_ = v___y_3541_;
v___y_3489_ = v___y_3539_;
v___y_3490_ = v___y_3542_;
v___y_3491_ = v___y_3540_;
goto v___jp_3486_;
}
else
{
uint8_t v___x_3547_; 
lean_inc(v_val_3469_);
v___x_3547_ = l_Lean_isProtected(v_env_3476_, v_val_3469_);
if (v___x_3547_ == 0)
{
lean_dec(v___x_3481_);
lean_dec_ref(v___x_3471_);
v_msg_3487_ = v___y_3543_;
v___y_3488_ = v___y_3541_;
v___y_3489_ = v___y_3539_;
v___y_3490_ = v___y_3542_;
v___y_3491_ = v___y_3540_;
goto v___jp_3486_;
}
else
{
lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; uint8_t v___x_3551_; 
lean_inc(v___x_3481_);
v___x_3548_ = l_Lean_Name_componentsRev(v___x_3481_);
v___x_3549_ = lean_unsigned_to_nat(1u);
v___x_3550_ = l_List_lengthTR___redArg(v___x_3548_);
v___x_3551_ = lean_nat_dec_lt(v___x_3549_, v___x_3550_);
lean_dec(v___x_3550_);
if (v___x_3551_ == 0)
{
lean_object* v___x_3552_; 
lean_dec(v___x_3548_);
v___x_3552_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__15, &l_Lean_Linter_checkDeprecated___closed__15_once, _init_l_Lean_Linter_checkDeprecated___closed__15);
v___y_3506_ = v___y_3539_;
v___y_3507_ = v___y_3540_;
v___y_3508_ = v___y_3541_;
v___y_3509_ = v___y_3542_;
v___y_3510_ = v___y_3543_;
v___y_3511_ = v___x_3552_;
goto v___jp_3505_;
}
else
{
lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; 
v___x_3553_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__17, &l_Lean_Linter_checkDeprecated___closed__17_once, _init_l_Lean_Linter_checkDeprecated___closed__17);
v___x_3554_ = lean_unsigned_to_nat(0u);
v___x_3555_ = l_List_get___redArg(v___x_3548_, v___x_3554_);
lean_dec(v___x_3548_);
v___x_3556_ = l_Lean_MessageData_ofName(v___x_3555_);
v___x_3557_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3557_, 0, v___x_3553_);
lean_ctor_set(v___x_3557_, 1, v___x_3556_);
v___x_3558_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__19, &l_Lean_Linter_checkDeprecated___closed__19_once, _init_l_Lean_Linter_checkDeprecated___closed__19);
v___x_3559_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3559_, 0, v___x_3557_);
lean_ctor_set(v___x_3559_, 1, v___x_3558_);
v___y_3506_ = v___y_3539_;
v___y_3507_ = v___y_3540_;
v___y_3508_ = v___y_3541_;
v___y_3509_ = v___y_3542_;
v___y_3510_ = v___y_3543_;
v___y_3511_ = v___x_3559_;
goto v___jp_3505_;
}
}
}
}
else
{
lean_dec(v___x_3481_);
lean_dec_ref(v_env_3476_);
lean_dec_ref(v___x_3471_);
v_msg_3487_ = v___y_3543_;
v___y_3488_ = v___y_3541_;
v___y_3489_ = v___y_3539_;
v___y_3490_ = v___y_3542_;
v___y_3491_ = v___y_3540_;
goto v___jp_3486_;
}
}
else
{
lean_dec(v___x_3481_);
lean_dec_ref(v_env_3476_);
lean_dec_ref(v___x_3471_);
if (lean_obj_tag(v_declName_3427_) == 1)
{
lean_object* v_str_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; 
v_str_3560_ = lean_ctor_get(v_declName_3427_, 1);
v___x_3561_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__21, &l_Lean_Linter_checkDeprecated___closed__21_once, _init_l_Lean_Linter_checkDeprecated___closed__21);
lean_inc_ref(v_str_3560_);
v___x_3562_ = l_Lean_stringToMessageData(v_str_3560_);
v___x_3563_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3563_, 0, v___x_3561_);
lean_ctor_set(v___x_3563_, 1, v___x_3562_);
v___x_3564_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__23, &l_Lean_Linter_checkDeprecated___closed__23_once, _init_l_Lean_Linter_checkDeprecated___closed__23);
v___x_3565_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3565_, 0, v___x_3563_);
lean_ctor_set(v___x_3565_, 1, v___x_3564_);
lean_inc(v_val_3469_);
v___x_3566_ = l_Lean_MessageData_ofConstName(v_val_3469_, v___y_3544_);
v___x_3567_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3567_, 0, v___x_3565_);
lean_ctor_set(v___x_3567_, 1, v___x_3566_);
v___x_3568_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__25, &l_Lean_Linter_checkDeprecated___closed__25_once, _init_l_Lean_Linter_checkDeprecated___closed__25);
v___x_3569_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3569_, 0, v___x_3567_);
lean_ctor_set(v___x_3569_, 1, v___x_3568_);
v___y_3526_ = v___y_3539_;
v___y_3527_ = v___y_3540_;
v___y_3528_ = v___y_3541_;
v___y_3529_ = v___y_3542_;
v___y_3530_ = v___y_3543_;
v___y_3531_ = v___x_3569_;
goto v___jp_3525_;
}
else
{
lean_object* v___x_3570_; 
v___x_3570_ = l_Lean_MessageData_nil;
v___y_3526_ = v___y_3539_;
v___y_3527_ = v___y_3540_;
v___y_3528_ = v___y_3541_;
v___y_3529_ = v___y_3542_;
v___y_3530_ = v___y_3543_;
v___y_3531_ = v___x_3570_;
goto v___jp_3525_;
}
}
}
v___jp_3571_:
{
uint8_t v___x_3577_; 
v___x_3577_ = l_Lean_Name_isAnonymous(v___x_3477_);
if (v___x_3577_ == 0)
{
uint8_t v___x_3578_; 
v___x_3578_ = lean_name_eq(v___x_3477_, v___x_3481_);
lean_dec(v___x_3477_);
if (v___x_3578_ == 0)
{
v___y_3539_ = v___y_3574_;
v___y_3540_ = v___y_3576_;
v___y_3541_ = v___y_3573_;
v___y_3542_ = v___y_3575_;
v___y_3543_ = v_msg_3572_;
v___y_3544_ = v___x_3577_;
v___y_3545_ = v___x_3441_;
goto v___jp_3538_;
}
else
{
v___y_3539_ = v___y_3574_;
v___y_3540_ = v___y_3576_;
v___y_3541_ = v___y_3573_;
v___y_3542_ = v___y_3575_;
v___y_3543_ = v_msg_3572_;
v___y_3544_ = v___x_3577_;
v___y_3545_ = v___x_3577_;
goto v___jp_3538_;
}
}
else
{
lean_dec(v___x_3481_);
lean_dec(v___x_3477_);
lean_dec_ref(v_env_3476_);
lean_dec_ref(v___x_3471_);
v_msg_3487_ = v_msg_3572_;
v___y_3488_ = v___y_3573_;
v___y_3489_ = v___y_3574_;
v___y_3490_ = v___y_3575_;
v___y_3491_ = v___y_3576_;
goto v___jp_3486_;
}
}
}
else
{
lean_object* v_a_3591_; lean_object* v___x_3593_; uint8_t v_isShared_3594_; uint8_t v_isSharedCheck_3598_; 
lean_dec(v_val_3483_);
lean_dec(v___x_3481_);
lean_dec(v_val_3480_);
lean_dec(v___x_3477_);
lean_dec_ref(v_env_3476_);
lean_dec_ref_known(v___x_3474_, 2);
lean_dec_ref(v___x_3471_);
lean_dec(v_val_3469_);
lean_dec(v_declName_3427_);
v_a_3591_ = lean_ctor_get(v___x_3484_, 0);
v_isSharedCheck_3598_ = !lean_is_exclusive(v___x_3484_);
if (v_isSharedCheck_3598_ == 0)
{
v___x_3593_ = v___x_3484_;
v_isShared_3594_ = v_isSharedCheck_3598_;
goto v_resetjp_3592_;
}
else
{
lean_inc(v_a_3591_);
lean_dec(v___x_3484_);
v___x_3593_ = lean_box(0);
v_isShared_3594_ = v_isSharedCheck_3598_;
goto v_resetjp_3592_;
}
v_resetjp_3592_:
{
lean_object* v___x_3596_; 
if (v_isShared_3594_ == 0)
{
v___x_3596_ = v___x_3593_;
goto v_reusejp_3595_;
}
else
{
lean_object* v_reuseFailAlloc_3597_; 
v_reuseFailAlloc_3597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3597_, 0, v_a_3591_);
v___x_3596_ = v_reuseFailAlloc_3597_;
goto v_reusejp_3595_;
}
v_reusejp_3595_:
{
return v___x_3596_;
}
}
}
}
else
{
lean_dec(v___x_3482_);
lean_dec(v___x_3481_);
lean_dec(v_val_3480_);
lean_dec(v___x_3477_);
lean_dec_ref(v_env_3476_);
lean_dec_ref(v___x_3471_);
lean_dec(v_val_3469_);
v_extraMsg_3443_ = v___x_3474_;
v___y_3444_ = v_a_3429_;
v___y_3445_ = v_a_3430_;
v___y_3446_ = v_a_3431_;
v___y_3447_ = v_a_3432_;
goto v___jp_3442_;
}
}
else
{
lean_dec(v___x_3479_);
lean_dec(v___x_3477_);
lean_dec_ref(v_env_3476_);
lean_dec_ref(v___x_3471_);
lean_dec(v_val_3469_);
v_extraMsg_3443_ = v___x_3474_;
v___y_3444_ = v_a_3429_;
v___y_3445_ = v_a_3430_;
v___y_3446_ = v_a_3431_;
v___y_3447_ = v_a_3432_;
goto v___jp_3442_;
}
}
}
else
{
lean_object* v_val_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; 
lean_inc_ref(v_text_x3f_3466_);
lean_dec(v_val_3465_);
v_val_3599_ = lean_ctor_get(v_text_x3f_3466_, 0);
lean_inc(v_val_3599_);
lean_dec_ref_known(v_text_x3f_3466_, 1);
v___x_3600_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__27, &l_Lean_Linter_checkDeprecated___closed__27_once, _init_l_Lean_Linter_checkDeprecated___closed__27);
v___x_3601_ = l_Lean_stringToMessageData(v_val_3599_);
v___x_3602_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3602_, 0, v___x_3600_);
lean_ctor_set(v___x_3602_, 1, v___x_3601_);
v_extraMsg_3443_ = v___x_3602_;
v___y_3444_ = v_a_3429_;
v___y_3445_ = v_a_3430_;
v___y_3446_ = v_a_3431_;
v___y_3447_ = v_a_3432_;
goto v___jp_3442_;
}
}
else
{
lean_object* v___x_3603_; lean_object* v___x_3605_; 
lean_dec(v___x_3464_);
lean_dec(v_declName_3427_);
v___x_3603_ = lean_box(0);
if (v_isShared_3439_ == 0)
{
lean_ctor_set(v___x_3438_, 0, v___x_3603_);
v___x_3605_ = v___x_3438_;
goto v_reusejp_3604_;
}
else
{
lean_object* v_reuseFailAlloc_3606_; 
v_reuseFailAlloc_3606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3606_, 0, v___x_3603_);
v___x_3605_ = v_reuseFailAlloc_3606_;
goto v_reusejp_3604_;
}
v_reusejp_3604_:
{
return v___x_3605_;
}
}
}
v___jp_3442_:
{
lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; 
v___x_3448_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_));
v___x_3449_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__46_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__46_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__46_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_);
v___x_3450_ = l_Lean_MessageData_ofConstName(v_declName_3427_, v___x_3441_);
v___x_3451_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3451_, 0, v___x_3449_);
lean_ctor_set(v___x_3451_, 1, v___x_3450_);
v___x_3452_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__1, &l_Lean_Linter_checkDeprecated___closed__1_once, _init_l_Lean_Linter_checkDeprecated___closed__1);
v___x_3453_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3453_, 0, v___x_3451_);
lean_ctor_set(v___x_3453_, 1, v___x_3452_);
v___x_3454_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3454_, 0, v___x_3453_);
lean_ctor_set(v___x_3454_, 1, v_extraMsg_3443_);
v___x_3455_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3455_, 0, v___x_3448_);
lean_ctor_set(v___x_3455_, 1, v___x_3454_);
v___x_3456_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__25_spec__31_spec__37(v___x_3455_, v___y_3444_, v___y_3445_, v___y_3446_, v___y_3447_);
return v___x_3456_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_checkDeprecated___boxed(lean_object* v_declName_3608_, lean_object* v_allowSuggestion_3609_, lean_object* v_a_3610_, lean_object* v_a_3611_, lean_object* v_a_3612_, lean_object* v_a_3613_, lean_object* v___y_3614_){
_start:
{
uint8_t v_allowSuggestion_boxed_3615_; lean_object* v_res_3616_; 
v_allowSuggestion_boxed_3615_ = lean_unbox(v_allowSuggestion_3609_);
v_res_3616_ = l_Lean_Linter_checkDeprecated(v_declName_3608_, v_allowSuggestion_boxed_3615_, v_a_3610_, v_a_3611_, v_a_3612_, v_a_3613_);
lean_dec(v_a_3613_);
lean_dec_ref(v_a_3612_);
lean_dec(v_a_3611_);
lean_dec_ref(v_a_3610_);
return v_res_3616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0(lean_object* v_o_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_){
_start:
{
lean_object* v___x_3623_; 
v___x_3623_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0___redArg(v_o_3617_, v___y_3621_);
return v___x_3623_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0___boxed(lean_object* v_o_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_, lean_object* v___y_3629_){
_start:
{
lean_object* v_res_3630_; 
v_res_3630_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0(v_o_3624_, v___y_3625_, v___y_3626_, v___y_3627_, v___y_3628_);
lean_dec(v___y_3628_);
lean_dec_ref(v___y_3627_);
lean_dec(v___y_3626_);
lean_dec_ref(v___y_3625_);
return v_res_3630_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_Init(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_InfoTree_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_ExtraModUses(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Hint(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_MapIdx(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Linter_Deprecated(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_InfoTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Hint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_MapIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_linter_deprecated = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_linter_deprecated);
lean_dec_ref(res);
res = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_linter_deprecated_deprecatedTarget = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_linter_deprecated_deprecatedTarget);
lean_dec_ref(res);
res = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1425340232____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_deprecatedAttr = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_deprecatedAttr);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Linter_Deprecated(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Linter_Init(uint8_t builtin);
lean_object* initialize_Lean_Elab_InfoTree_Main(uint8_t builtin);
lean_object* initialize_Lean_ExtraModUses(uint8_t builtin);
lean_object* initialize_Lean_Meta_Hint(uint8_t builtin);
lean_object* initialize_Init_Data_List_MapIdx(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Linter_Deprecated(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_InfoTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Hint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_MapIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Deprecated(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Linter_Deprecated(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Linter_Deprecated(builtin);
}
#ifdef __cplusplus
}
#endif
