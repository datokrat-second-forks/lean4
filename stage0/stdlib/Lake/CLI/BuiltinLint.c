// Lean compiler output
// Module: Lake.CLI.BuiltinLint
// Imports: public import Lean.Linter.EnvLinter public import Lean.Linter.PersistentLintLog import Lean.Elab.DocString.Builtin.Postponed import Lean.Linter.CodeQuality
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
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Name_getRoot(lean_object*);
extern lean_object* l_Lean_instInhabitedFileMap_default;
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_io_get_num_heartbeats();
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Linter_EnvLinter_formatLinterResults(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Environment_mainModule(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
extern lean_object* l_Lean_builtinDeclRanges;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_isRecCore(lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
extern lean_object* l_Lean_instInhabitedDeclarationRanges_default;
extern lean_object* l_Lean_declRangeExt;
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_isAuxRecursor(lean_object*, lean_object*);
uint8_t l_Lean_isNoConfusion(lean_object*, lean_object*);
lean_object* lean_get_stderr();
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Environment_allImportedModuleNames(lean_object*);
lean_object* l_Lean_SearchPath_findWithExt(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lean_Linter_EnvLinter_lintCore(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Linter_EnvLinter_getEnvLinters(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_inheritedTraceOptions;
extern lean_object* l_Lean_diagnostics;
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_Linter_EnvLinter_getDeclsInPackage___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* l_Lean_Linter_CodeQuality_getPackageChecks(lean_object*, lean_object*);
lean_object* l_Lean_Linter_CodeQuality_runPackageChecks(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_format(lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedPosition_default;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Linter_instInhabitedLinterSetsState_default;
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
extern lean_object* l_Lean_Linter_linterSetsExt;
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_linter_doc_deferred;
uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
lean_object* l_Lean_Doc_DeferredCheck_run(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_getVersoModuleDoc_x3f(lean_object*, lean_object*);
uint8_t l_Lean_Linter_isLinterEnabledByOptions(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Linter_getAllCodeQualityEntries(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_SerialMessage_toString(lean_object*, uint8_t);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_NameMap_getD_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Linter_getAllLints(lean_object*);
lean_object* lean_enable_initializer_execution();
lean_object* l_Lean_findOLean(lean_object*);
lean_object* l_Lean_readModuleData(lean_object*);
lean_object* lean_compacted_region_free(lean_object*);
lean_object* l_Lean_importModules(lean_object*, lean_object*, uint32_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_NameMap_toArray___redArg(lean_object*);
lean_object* l_Lean_LeanOptions_ofArray(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t lean_string_hash(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
lean_object* l_IO_FS_readFile(lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Linter_CodeQuality_instToJsonEntry_toJson(lean_object*);
lean_object* l_Lean_getSrcSearchPath();
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_report_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_report_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_report_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_report_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_recordExceptions_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_recordExceptions_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_recordExceptions_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_recordExceptions_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_codeQuality_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_codeQuality_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_codeQuality_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_codeQuality_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_BuiltinLint_instBEqMode_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_instBEqMode_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_BuiltinLint_instBEqMode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_BuiltinLint_instBEqMode_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_BuiltinLint_instBEqMode___closed__0 = (const lean_object*)&l_Lake_BuiltinLint_instBEqMode___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_BuiltinLint_instBEqMode = (const lean_object*)&l_Lake_BuiltinLint_instBEqMode___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_leanOptOverrides_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_leanOptOverrides_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "weak"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(63, 5, 49, 232, 223, 147, 119, 138)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_BuiltinLint_leanOptOverrides___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "internal"};
static const lean_object* l_Lake_BuiltinLint_leanOptOverrides___closed__0 = (const lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__0_value;
static const lean_string_object l_Lake_BuiltinLint_leanOptOverrides___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "cmdlineSnapshots"};
static const lean_object* l_Lake_BuiltinLint_leanOptOverrides___closed__1 = (const lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__1_value;
static const lean_ctor_object l_Lake_BuiltinLint_leanOptOverrides___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__0_value),LEAN_SCALAR_PTR_LITERAL(177, 49, 45, 44, 152, 148, 209, 41)}};
static const lean_ctor_object l_Lake_BuiltinLint_leanOptOverrides___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__2_value_aux_0),((lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__1_value),LEAN_SCALAR_PTR_LITERAL(129, 168, 39, 157, 17, 55, 119, 69)}};
static const lean_object* l_Lake_BuiltinLint_leanOptOverrides___closed__2 = (const lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__2_value;
static const lean_ctor_object l_Lake_BuiltinLint_leanOptOverrides___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_BuiltinLint_leanOptOverrides___closed__3 = (const lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__3_value;
static const lean_ctor_object l_Lake_BuiltinLint_leanOptOverrides___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__2_value),((lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__3_value)}};
static const lean_object* l_Lake_BuiltinLint_leanOptOverrides___closed__4 = (const lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_leanOptOverrides(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_leanOptOverrides___boxed(lean_object*);
static const lean_string_object l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__0 = (const lean_object*)&l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__0_value;
static lean_once_cell_t l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1;
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_instInhabitedExceptionRecord_default;
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_instInhabitedExceptionRecord;
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_reported_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_reported_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_recorded_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_recorded_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_codeQualityChecks_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_codeQualityChecks_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_reported_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_reported_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_recorded_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_recorded_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints___closed__0 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality___closed__0 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_getIsModule(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_getIsModule___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordedMarker___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "-- recorded by `lake lint --record-exceptions`"};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordedMarker___closed__0 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordedMarker___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordedMarker = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordedMarker___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_isIndentChar(uint32_t);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_isIndentChar___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace___boxed(lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__19(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__19___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__20(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17_spec__29(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17_spec__29___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__15___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__16(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__9(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15_spec__33___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4_spec__9(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13_spec__23(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13_spec__23___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "set_option "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " false in "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__12(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " in "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__3;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " exception"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "warning: could not read `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "`; skipping its "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " exception(s)"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__10_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5_spec__26___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__0;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__1;
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5_spec__26(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15_spec__33(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "the docstring of `"};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__0 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__0_value;
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__1 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__1_value;
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "module docstring #"};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__2 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__1(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "warning: could not determine the position of "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " in `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "`; cannot record a `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "` exception"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "warning: could not locate source file for `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "` to record a `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__6_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "error: in module `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "`, in "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = ": error: in "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__5_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "internal exception "};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__0 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__0_value;
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception #"};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__1 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__1_value;
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " (unknown)"};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__2 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__2_value;
static const lean_closure_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__3 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__3_value;
static const lean_array_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__4 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__4_value;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6;
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__7 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__7_value;
static const lean_ctor_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__7_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__8 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__8_value;
static const lean_ctor_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__8_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__9 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__9_value;
static const lean_ctor_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__10 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__10_value;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__11;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__15;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18;
static const lean_array_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__19 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__19_value;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20;
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "-- Text linter diagnostics in "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__5___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__5___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__5___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8_spec__8___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8_spec__8___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8_spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__7(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "warning: could not determine the command position of a `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` text-linter warning in `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "`; skipping its exception"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters___closed__0 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___lam__0(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__1;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "warning: no declaration range for `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__10(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__9(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "-- Environment linting passed for "};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__0 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__0_value;
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__1 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__1_value;
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "in "};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__2 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__2_value;
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "-- No environment linters were run for "};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__3 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__3_value;
static const lean_ctor_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__4 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__4_value;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__5;
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__1();
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__4(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__4___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00Lake_BuiltinLint_run_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00Lake_BuiltinLint_run_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_run_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_run_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_run_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_run_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Linter"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "EnvLinter"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(251, 76, 236, 169, 217, 120, 18, 80)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__3_value;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__4_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_BuiltinLint_run___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuiltinLint_run___closed__0;
static lean_once_cell_t l_Lake_BuiltinLint_run___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuiltinLint_run___closed__1;
static lean_once_cell_t l_Lake_BuiltinLint_run___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuiltinLint_run___closed__2;
static const lean_string_object l_Lake_BuiltinLint_run___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "lake lint: no modules specified for builtin linting"};
static const lean_object* l_Lake_BuiltinLint_run___closed__3 = (const lean_object*)&l_Lake_BuiltinLint_run___closed__3_value;
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_run___boxed__const__1;
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_run___boxed__const__2;
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_run(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_run___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorIdx(uint8_t v_x_1_){
_start:
{
switch(v_x_1_)
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
uint8_t v_x_boxed_6_; lean_object* v_res_7_; 
v_x_boxed_6_ = lean_unbox(v_x_5_);
v_res_7_ = l_Lake_BuiltinLint_Mode_ctorIdx(v_x_boxed_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorElim___redArg(lean_object* v_k_8_){
_start:
{
lean_inc(v_k_8_);
return v_k_8_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorElim___redArg___boxed(lean_object* v_k_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lake_BuiltinLint_Mode_ctorElim___redArg(v_k_9_);
lean_dec(v_k_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, uint8_t v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_inc(v_k_15_);
return v_k_15_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorElim___boxed(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
uint8_t v_t_boxed_21_; lean_object* v_res_22_; 
v_t_boxed_21_ = lean_unbox(v_t_18_);
v_res_22_ = l_Lake_BuiltinLint_Mode_ctorElim(v_motive_16_, v_ctorIdx_17_, v_t_boxed_21_, v_h_19_, v_k_20_);
lean_dec(v_k_20_);
lean_dec(v_ctorIdx_17_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_report_elim___redArg(lean_object* v_report_23_){
_start:
{
lean_inc(v_report_23_);
return v_report_23_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_report_elim___redArg___boxed(lean_object* v_report_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lake_BuiltinLint_Mode_report_elim___redArg(v_report_24_);
lean_dec(v_report_24_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_report_elim(lean_object* v_motive_26_, uint8_t v_t_27_, lean_object* v_h_28_, lean_object* v_report_29_){
_start:
{
lean_inc(v_report_29_);
return v_report_29_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_report_elim___boxed(lean_object* v_motive_30_, lean_object* v_t_31_, lean_object* v_h_32_, lean_object* v_report_33_){
_start:
{
uint8_t v_t_boxed_34_; lean_object* v_res_35_; 
v_t_boxed_34_ = lean_unbox(v_t_31_);
v_res_35_ = l_Lake_BuiltinLint_Mode_report_elim(v_motive_30_, v_t_boxed_34_, v_h_32_, v_report_33_);
lean_dec(v_report_33_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_recordExceptions_elim___redArg(lean_object* v_recordExceptions_36_){
_start:
{
lean_inc(v_recordExceptions_36_);
return v_recordExceptions_36_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_recordExceptions_elim___redArg___boxed(lean_object* v_recordExceptions_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lake_BuiltinLint_Mode_recordExceptions_elim___redArg(v_recordExceptions_37_);
lean_dec(v_recordExceptions_37_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_recordExceptions_elim(lean_object* v_motive_39_, uint8_t v_t_40_, lean_object* v_h_41_, lean_object* v_recordExceptions_42_){
_start:
{
lean_inc(v_recordExceptions_42_);
return v_recordExceptions_42_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_recordExceptions_elim___boxed(lean_object* v_motive_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_recordExceptions_46_){
_start:
{
uint8_t v_t_boxed_47_; lean_object* v_res_48_; 
v_t_boxed_47_ = lean_unbox(v_t_44_);
v_res_48_ = l_Lake_BuiltinLint_Mode_recordExceptions_elim(v_motive_43_, v_t_boxed_47_, v_h_45_, v_recordExceptions_46_);
lean_dec(v_recordExceptions_46_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_codeQuality_elim___redArg(lean_object* v_codeQuality_49_){
_start:
{
lean_inc(v_codeQuality_49_);
return v_codeQuality_49_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_codeQuality_elim___redArg___boxed(lean_object* v_codeQuality_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lake_BuiltinLint_Mode_codeQuality_elim___redArg(v_codeQuality_50_);
lean_dec(v_codeQuality_50_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_codeQuality_elim(lean_object* v_motive_52_, uint8_t v_t_53_, lean_object* v_h_54_, lean_object* v_codeQuality_55_){
_start:
{
lean_inc(v_codeQuality_55_);
return v_codeQuality_55_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_codeQuality_elim___boxed(lean_object* v_motive_56_, lean_object* v_t_57_, lean_object* v_h_58_, lean_object* v_codeQuality_59_){
_start:
{
uint8_t v_t_boxed_60_; lean_object* v_res_61_; 
v_t_boxed_60_ = lean_unbox(v_t_57_);
v_res_61_ = l_Lake_BuiltinLint_Mode_codeQuality_elim(v_motive_56_, v_t_boxed_60_, v_h_58_, v_codeQuality_59_);
lean_dec(v_codeQuality_59_);
return v_res_61_;
}
}
LEAN_EXPORT uint8_t l_Lake_BuiltinLint_instBEqMode_beq(uint8_t v_x_62_, uint8_t v_y_63_){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; uint8_t v___x_66_; 
v___x_64_ = l_Lake_BuiltinLint_Mode_ctorIdx(v_x_62_);
v___x_65_ = l_Lake_BuiltinLint_Mode_ctorIdx(v_y_63_);
v___x_66_ = lean_nat_dec_eq(v___x_64_, v___x_65_);
lean_dec(v___x_65_);
lean_dec(v___x_64_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_instBEqMode_beq___boxed(lean_object* v_x_67_, lean_object* v_y_68_){
_start:
{
uint8_t v_x_21__boxed_69_; uint8_t v_y_22__boxed_70_; uint8_t v_res_71_; lean_object* v_r_72_; 
v_x_21__boxed_69_ = lean_unbox(v_x_67_);
v_y_22__boxed_70_ = lean_unbox(v_y_68_);
v_res_71_ = l_Lake_BuiltinLint_instBEqMode_beq(v_x_21__boxed_69_, v_y_22__boxed_70_);
v_r_72_ = lean_box(v_res_71_);
return v_r_72_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_leanOptOverrides_spec__1(lean_object* v_as_75_, size_t v_i_76_, size_t v_stop_77_, lean_object* v_b_78_){
_start:
{
uint8_t v___x_79_; 
v___x_79_ = lean_usize_dec_eq(v_i_76_, v_stop_77_);
if (v___x_79_ == 0)
{
lean_object* v___x_80_; lean_object* v_fst_81_; lean_object* v_snd_82_; lean_object* v___x_83_; size_t v___x_84_; size_t v___x_85_; 
v___x_80_ = lean_array_uget_borrowed(v_as_75_, v_i_76_);
v_fst_81_ = lean_ctor_get(v___x_80_, 0);
v_snd_82_ = lean_ctor_get(v___x_80_, 1);
lean_inc(v_snd_82_);
lean_inc(v_fst_81_);
v___x_83_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_81_, v_snd_82_, v_b_78_);
v___x_84_ = ((size_t)1ULL);
v___x_85_ = lean_usize_add(v_i_76_, v___x_84_);
v_i_76_ = v___x_85_;
v_b_78_ = v___x_83_;
goto _start;
}
else
{
return v_b_78_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_leanOptOverrides_spec__1___boxed(lean_object* v_as_87_, lean_object* v_i_88_, lean_object* v_stop_89_, lean_object* v_b_90_){
_start:
{
size_t v_i_boxed_91_; size_t v_stop_boxed_92_; lean_object* v_res_93_; 
v_i_boxed_91_ = lean_unbox_usize(v_i_88_);
lean_dec(v_i_88_);
v_stop_boxed_92_ = lean_unbox_usize(v_stop_89_);
lean_dec(v_stop_89_);
v_res_93_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_leanOptOverrides_spec__1(v_as_87_, v_i_boxed_91_, v_stop_boxed_92_, v_b_90_);
lean_dec_ref(v_as_87_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__0(size_t v_sz_97_, size_t v_i_98_, lean_object* v_bs_99_){
_start:
{
uint8_t v___x_100_; 
v___x_100_ = lean_usize_dec_lt(v_i_98_, v_sz_97_);
if (v___x_100_ == 0)
{
return v_bs_99_;
}
else
{
lean_object* v_v_101_; lean_object* v_fst_102_; lean_object* v_snd_103_; lean_object* v___x_105_; uint8_t v_isShared_106_; uint8_t v_isSharedCheck_120_; 
v_v_101_ = lean_array_uget(v_bs_99_, v_i_98_);
v_fst_102_ = lean_ctor_get(v_v_101_, 0);
v_snd_103_ = lean_ctor_get(v_v_101_, 1);
v_isSharedCheck_120_ = !lean_is_exclusive(v_v_101_);
if (v_isSharedCheck_120_ == 0)
{
v___x_105_ = v_v_101_;
v_isShared_106_ = v_isSharedCheck_120_;
goto v_resetjp_104_;
}
else
{
lean_inc(v_snd_103_);
lean_inc(v_fst_102_);
lean_dec(v_v_101_);
v___x_105_ = lean_box(0);
v_isShared_106_ = v_isSharedCheck_120_;
goto v_resetjp_104_;
}
v_resetjp_104_:
{
lean_object* v___x_107_; lean_object* v_bs_x27_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; uint8_t v___x_112_; lean_object* v___x_114_; 
v___x_107_ = lean_unsigned_to_nat(0u);
v_bs_x27_108_ = lean_array_uset(v_bs_99_, v_i_98_, v___x_107_);
v___x_109_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__0___closed__1));
v___x_110_ = l_Lean_Name_append(v___x_109_, v_fst_102_);
v___x_111_ = lean_alloc_ctor(1, 0, 1);
v___x_112_ = lean_unbox(v_snd_103_);
lean_dec(v_snd_103_);
lean_ctor_set_uint8(v___x_111_, 0, v___x_112_);
if (v_isShared_106_ == 0)
{
lean_ctor_set(v___x_105_, 1, v___x_111_);
lean_ctor_set(v___x_105_, 0, v___x_110_);
v___x_114_ = v___x_105_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v___x_110_);
lean_ctor_set(v_reuseFailAlloc_119_, 1, v___x_111_);
v___x_114_ = v_reuseFailAlloc_119_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
size_t v___x_115_; size_t v___x_116_; lean_object* v___x_117_; 
v___x_115_ = ((size_t)1ULL);
v___x_116_ = lean_usize_add(v_i_98_, v___x_115_);
v___x_117_ = lean_array_uset(v_bs_x27_108_, v_i_98_, v___x_114_);
v_i_98_ = v___x_116_;
v_bs_99_ = v___x_117_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__0___boxed(lean_object* v_sz_121_, lean_object* v_i_122_, lean_object* v_bs_123_){
_start:
{
size_t v_sz_boxed_124_; size_t v_i_boxed_125_; lean_object* v_res_126_; 
v_sz_boxed_124_ = lean_unbox_usize(v_sz_121_);
lean_dec(v_sz_121_);
v_i_boxed_125_ = lean_unbox_usize(v_i_122_);
lean_dec(v_i_122_);
v_res_126_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__0(v_sz_boxed_124_, v_i_boxed_125_, v_bs_123_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_leanOptOverrides(lean_object* v_args_137_){
_start:
{
lean_object* v_linterOverrides_138_; uint8_t v_mode_139_; lean_object* v___y_141_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; uint8_t v___x_155_; 
v_linterOverrides_138_ = lean_ctor_get(v_args_137_, 0);
v_mode_139_ = lean_ctor_get_uint8(v_args_137_, sizeof(void*)*4 + 1);
v___x_152_ = lean_box(1);
v___x_153_ = lean_unsigned_to_nat(0u);
v___x_154_ = lean_array_get_size(v_linterOverrides_138_);
v___x_155_ = lean_nat_dec_lt(v___x_153_, v___x_154_);
if (v___x_155_ == 0)
{
v___y_141_ = v___x_152_;
goto v___jp_140_;
}
else
{
uint8_t v___x_156_; 
v___x_156_ = lean_nat_dec_le(v___x_154_, v___x_154_);
if (v___x_156_ == 0)
{
if (v___x_155_ == 0)
{
v___y_141_ = v___x_152_;
goto v___jp_140_;
}
else
{
size_t v___x_157_; size_t v___x_158_; lean_object* v___x_159_; 
v___x_157_ = ((size_t)0ULL);
v___x_158_ = lean_usize_of_nat(v___x_154_);
v___x_159_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_leanOptOverrides_spec__1(v_linterOverrides_138_, v___x_157_, v___x_158_, v___x_152_);
v___y_141_ = v___x_159_;
goto v___jp_140_;
}
}
else
{
size_t v___x_160_; size_t v___x_161_; lean_object* v___x_162_; 
v___x_160_ = ((size_t)0ULL);
v___x_161_ = lean_usize_of_nat(v___x_154_);
v___x_162_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_leanOptOverrides_spec__1(v_linterOverrides_138_, v___x_160_, v___x_161_, v___x_152_);
v___y_141_ = v___x_162_;
goto v___jp_140_;
}
}
v___jp_140_:
{
lean_object* v___x_142_; size_t v_sz_143_; size_t v___x_144_; lean_object* v_base_145_; uint8_t v___x_146_; uint8_t v___x_147_; 
v___x_142_ = l_Lean_NameMap_toArray___redArg(v___y_141_);
lean_dec(v___y_141_);
v_sz_143_ = lean_array_size(v___x_142_);
v___x_144_ = ((size_t)0ULL);
v_base_145_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__0(v_sz_143_, v___x_144_, v___x_142_);
v___x_146_ = 1;
v___x_147_ = l_Lake_BuiltinLint_instBEqMode_beq(v_mode_139_, v___x_146_);
if (v___x_147_ == 0)
{
lean_object* v___x_148_; 
v___x_148_ = l_Lean_LeanOptions_ofArray(v_base_145_);
lean_dec_ref(v_base_145_);
return v___x_148_;
}
else
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_149_ = ((lean_object*)(l_Lake_BuiltinLint_leanOptOverrides___closed__4));
v___x_150_ = lean_array_push(v_base_145_, v___x_149_);
v___x_151_ = l_Lean_LeanOptions_ofArray(v___x_150_);
lean_dec_ref(v___x_150_);
return v___x_151_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_leanOptOverrides___boxed(lean_object* v_args_163_){
_start:
{
lean_object* v_res_164_; 
v_res_164_ = l_Lake_BuiltinLint_leanOptOverrides(v_args_163_);
lean_dec_ref(v_args_163_);
return v_res_164_;
}
}
static lean_object* _init_l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1(void){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_166_ = lean_box(0);
v___x_167_ = l_Lean_instInhabitedPosition_default;
v___x_168_ = ((lean_object*)(l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__0));
v___x_169_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_169_, 0, v___x_168_);
lean_ctor_set(v___x_169_, 1, v___x_167_);
lean_ctor_set(v___x_169_, 2, v___x_166_);
return v___x_169_;
}
}
static lean_object* _init_l_Lake_BuiltinLint_instInhabitedExceptionRecord_default(void){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = lean_obj_once(&l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1, &l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1_once, _init_l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1);
return v___x_170_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_instInhabitedExceptionRecord(void){
_start:
{
lean_object* v___x_171_; 
v___x_171_ = l_Lake_BuiltinLint_instInhabitedExceptionRecord_default;
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorIdx(lean_object* v_x_172_){
_start:
{
switch(lean_obj_tag(v_x_172_))
{
case 0:
{
lean_object* v___x_173_; 
v___x_173_ = lean_unsigned_to_nat(0u);
return v___x_173_;
}
case 1:
{
lean_object* v___x_174_; 
v___x_174_ = lean_unsigned_to_nat(1u);
return v___x_174_;
}
default: 
{
lean_object* v___x_175_; 
v___x_175_ = lean_unsigned_to_nat(2u);
return v___x_175_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorIdx___boxed(lean_object* v_x_176_){
_start:
{
lean_object* v_res_177_; 
v_res_177_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorIdx(v_x_176_);
lean_dec_ref(v_x_176_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___redArg(lean_object* v_t_178_, lean_object* v_k_179_){
_start:
{
switch(lean_obj_tag(v_t_178_))
{
case 0:
{
uint8_t v_failed_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v_failed_180_ = lean_ctor_get_uint8(v_t_178_, 0);
lean_dec_ref_known(v_t_178_, 0);
v___x_181_ = lean_box(v_failed_180_);
v___x_182_ = lean_apply_1(v_k_179_, v___x_181_);
return v___x_182_;
}
case 1:
{
lean_object* v_records_183_; uint8_t v_unlocated_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v_records_183_ = lean_ctor_get(v_t_178_, 0);
lean_inc_ref(v_records_183_);
v_unlocated_184_ = lean_ctor_get_uint8(v_t_178_, sizeof(void*)*1);
lean_dec_ref_known(v_t_178_, 1);
v___x_185_ = lean_box(v_unlocated_184_);
v___x_186_ = lean_apply_2(v_k_179_, v_records_183_, v___x_185_);
return v___x_186_;
}
default: 
{
lean_object* v_entries_187_; lean_object* v___x_188_; 
v_entries_187_ = lean_ctor_get(v_t_178_, 0);
lean_inc_ref(v_entries_187_);
lean_dec_ref_known(v_t_178_, 1);
v___x_188_ = lean_apply_1(v_k_179_, v_entries_187_);
return v___x_188_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim(lean_object* v_motive_189_, lean_object* v_ctorIdx_190_, lean_object* v_t_191_, lean_object* v_h_192_, lean_object* v_k_193_){
_start:
{
lean_object* v___x_194_; 
v___x_194_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___redArg(v_t_191_, v_k_193_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___boxed(lean_object* v_motive_195_, lean_object* v_ctorIdx_196_, lean_object* v_t_197_, lean_object* v_h_198_, lean_object* v_k_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim(v_motive_195_, v_ctorIdx_196_, v_t_197_, v_h_198_, v_k_199_);
lean_dec(v_ctorIdx_196_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_reported_elim___redArg(lean_object* v_t_201_, lean_object* v_reported_202_){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___redArg(v_t_201_, v_reported_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_reported_elim(lean_object* v_motive_204_, lean_object* v_t_205_, lean_object* v_h_206_, lean_object* v_reported_207_){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___redArg(v_t_205_, v_reported_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_recorded_elim___redArg(lean_object* v_t_209_, lean_object* v_recorded_210_){
_start:
{
lean_object* v___x_211_; 
v___x_211_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___redArg(v_t_209_, v_recorded_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_recorded_elim(lean_object* v_motive_212_, lean_object* v_t_213_, lean_object* v_h_214_, lean_object* v_recorded_215_){
_start:
{
lean_object* v___x_216_; 
v___x_216_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___redArg(v_t_213_, v_recorded_215_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_codeQualityChecks_elim___redArg(lean_object* v_t_217_, lean_object* v_codeQualityChecks_218_){
_start:
{
lean_object* v___x_219_; 
v___x_219_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___redArg(v_t_217_, v_codeQualityChecks_218_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_codeQualityChecks_elim(lean_object* v_motive_220_, lean_object* v_t_221_, lean_object* v_h_222_, lean_object* v_codeQualityChecks_223_){
_start:
{
lean_object* v___x_224_; 
v___x_224_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___redArg(v_t_221_, v_codeQualityChecks_223_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorIdx(lean_object* v_x_225_){
_start:
{
if (lean_obj_tag(v_x_225_) == 0)
{
lean_object* v___x_226_; 
v___x_226_ = lean_unsigned_to_nat(0u);
return v___x_226_;
}
else
{
lean_object* v___x_227_; 
v___x_227_ = lean_unsigned_to_nat(1u);
return v___x_227_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorIdx___boxed(lean_object* v_x_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorIdx(v_x_228_);
lean_dec_ref(v_x_228_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim___redArg(lean_object* v_t_230_, lean_object* v_k_231_){
_start:
{
if (lean_obj_tag(v_t_230_) == 0)
{
uint8_t v_failed_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v_failed_232_ = lean_ctor_get_uint8(v_t_230_, 0);
lean_dec_ref_known(v_t_230_, 0);
v___x_233_ = lean_box(v_failed_232_);
v___x_234_ = lean_apply_1(v_k_231_, v___x_233_);
return v___x_234_;
}
else
{
lean_object* v_records_235_; uint8_t v_unlocated_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
v_records_235_ = lean_ctor_get(v_t_230_, 0);
lean_inc_ref(v_records_235_);
v_unlocated_236_ = lean_ctor_get_uint8(v_t_230_, sizeof(void*)*1);
lean_dec_ref_known(v_t_230_, 1);
v___x_237_ = lean_box(v_unlocated_236_);
v___x_238_ = lean_apply_2(v_k_231_, v_records_235_, v___x_237_);
return v___x_238_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim(lean_object* v_motive_239_, lean_object* v_ctorIdx_240_, lean_object* v_t_241_, lean_object* v_h_242_, lean_object* v_k_243_){
_start:
{
lean_object* v___x_244_; 
v___x_244_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim___redArg(v_t_241_, v_k_243_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim___boxed(lean_object* v_motive_245_, lean_object* v_ctorIdx_246_, lean_object* v_t_247_, lean_object* v_h_248_, lean_object* v_k_249_){
_start:
{
lean_object* v_res_250_; 
v_res_250_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim(v_motive_245_, v_ctorIdx_246_, v_t_247_, v_h_248_, v_k_249_);
lean_dec(v_ctorIdx_246_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_reported_elim___redArg(lean_object* v_t_251_, lean_object* v_reported_252_){
_start:
{
lean_object* v___x_253_; 
v___x_253_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim___redArg(v_t_251_, v_reported_252_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_reported_elim(lean_object* v_motive_254_, lean_object* v_t_255_, lean_object* v_h_256_, lean_object* v_reported_257_){
_start:
{
lean_object* v___x_258_; 
v___x_258_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim___redArg(v_t_255_, v_reported_257_);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_recorded_elim___redArg(lean_object* v_t_259_, lean_object* v_recorded_260_){
_start:
{
lean_object* v___x_261_; 
v___x_261_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim___redArg(v_t_259_, v_recorded_260_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_recorded_elim(lean_object* v_motive_262_, lean_object* v_t_263_, lean_object* v_h_264_, lean_object* v_recorded_265_){
_start:
{
lean_object* v___x_266_; 
v___x_266_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim___redArg(v_t_263_, v_recorded_265_);
return v___x_266_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints_spec__0(lean_object* v_pkgRoot_267_, lean_object* v_as_268_, size_t v_i_269_, size_t v_stop_270_, lean_object* v_b_271_){
_start:
{
lean_object* v___y_273_; uint8_t v___x_277_; 
v___x_277_ = lean_usize_dec_eq(v_i_269_, v_stop_270_);
if (v___x_277_ == 0)
{
lean_object* v___x_278_; uint8_t v___y_280_; lean_object* v_fst_282_; lean_object* v_snd_283_; uint8_t v___x_284_; 
v___x_278_ = lean_array_uget_borrowed(v_as_268_, v_i_269_);
v_fst_282_ = lean_ctor_get(v___x_278_, 0);
v_snd_283_ = lean_ctor_get(v___x_278_, 1);
v___x_284_ = l_Lean_Name_isPrefixOf(v_pkgRoot_267_, v_fst_282_);
if (v___x_284_ == 0)
{
v___y_280_ = v___x_284_;
goto v___jp_279_;
}
else
{
lean_object* v___x_285_; lean_object* v___x_286_; uint8_t v___x_287_; 
v___x_285_ = lean_array_get_size(v_snd_283_);
v___x_286_ = lean_unsigned_to_nat(0u);
v___x_287_ = lean_nat_dec_eq(v___x_285_, v___x_286_);
if (v___x_287_ == 0)
{
v___y_280_ = v___x_284_;
goto v___jp_279_;
}
else
{
v___y_273_ = v_b_271_;
goto v___jp_272_;
}
}
v___jp_279_:
{
if (v___y_280_ == 0)
{
v___y_273_ = v_b_271_;
goto v___jp_272_;
}
else
{
lean_object* v___x_281_; 
lean_inc(v___x_278_);
v___x_281_ = lean_array_push(v_b_271_, v___x_278_);
v___y_273_ = v___x_281_;
goto v___jp_272_;
}
}
}
else
{
return v_b_271_;
}
v___jp_272_:
{
size_t v___x_274_; size_t v___x_275_; 
v___x_274_ = ((size_t)1ULL);
v___x_275_ = lean_usize_add(v_i_269_, v___x_274_);
v_i_269_ = v___x_275_;
v_b_271_ = v___y_273_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints_spec__0___boxed(lean_object* v_pkgRoot_288_, lean_object* v_as_289_, lean_object* v_i_290_, lean_object* v_stop_291_, lean_object* v_b_292_){
_start:
{
size_t v_i_boxed_293_; size_t v_stop_boxed_294_; lean_object* v_res_295_; 
v_i_boxed_293_ = lean_unbox_usize(v_i_290_);
lean_dec(v_i_290_);
v_stop_boxed_294_ = lean_unbox_usize(v_stop_291_);
lean_dec(v_stop_291_);
v_res_295_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints_spec__0(v_pkgRoot_288_, v_as_289_, v_i_boxed_293_, v_stop_boxed_294_, v_b_292_);
lean_dec_ref(v_as_289_);
lean_dec(v_pkgRoot_288_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints(lean_object* v_env_298_, lean_object* v_pkgRoot_299_){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; uint8_t v___x_304_; 
v___x_300_ = lean_unsigned_to_nat(0u);
v___x_301_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints___closed__0));
v___x_302_ = l_Lean_Linter_getAllLints(v_env_298_);
v___x_303_ = lean_array_get_size(v___x_302_);
v___x_304_ = lean_nat_dec_lt(v___x_300_, v___x_303_);
if (v___x_304_ == 0)
{
lean_dec_ref(v___x_302_);
return v___x_301_;
}
else
{
uint8_t v___x_305_; 
v___x_305_ = lean_nat_dec_le(v___x_303_, v___x_303_);
if (v___x_305_ == 0)
{
if (v___x_304_ == 0)
{
lean_dec_ref(v___x_302_);
return v___x_301_;
}
else
{
size_t v___x_306_; size_t v___x_307_; lean_object* v___x_308_; 
v___x_306_ = ((size_t)0ULL);
v___x_307_ = lean_usize_of_nat(v___x_303_);
v___x_308_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints_spec__0(v_pkgRoot_299_, v___x_302_, v___x_306_, v___x_307_, v___x_301_);
lean_dec_ref(v___x_302_);
return v___x_308_;
}
}
else
{
size_t v___x_309_; size_t v___x_310_; lean_object* v___x_311_; 
v___x_309_ = ((size_t)0ULL);
v___x_310_ = lean_usize_of_nat(v___x_303_);
v___x_311_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints_spec__0(v_pkgRoot_299_, v___x_302_, v___x_309_, v___x_310_, v___x_301_);
lean_dec_ref(v___x_302_);
return v___x_311_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints___boxed(lean_object* v_env_312_, lean_object* v_pkgRoot_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints(v_env_312_, v_pkgRoot_313_);
lean_dec(v_pkgRoot_313_);
lean_dec_ref(v_env_312_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__0(size_t v_sz_315_, size_t v_i_316_, lean_object* v_bs_317_){
_start:
{
uint8_t v___x_318_; 
v___x_318_ = lean_usize_dec_lt(v_i_316_, v_sz_315_);
if (v___x_318_ == 0)
{
return v_bs_317_;
}
else
{
lean_object* v_v_319_; lean_object* v_entry_320_; lean_object* v___x_321_; lean_object* v_bs_x27_322_; size_t v___x_323_; size_t v___x_324_; lean_object* v___x_325_; 
v_v_319_ = lean_array_uget_borrowed(v_bs_317_, v_i_316_);
v_entry_320_ = lean_ctor_get(v_v_319_, 1);
lean_inc_ref(v_entry_320_);
v___x_321_ = lean_unsigned_to_nat(0u);
v_bs_x27_322_ = lean_array_uset(v_bs_317_, v_i_316_, v___x_321_);
v___x_323_ = ((size_t)1ULL);
v___x_324_ = lean_usize_add(v_i_316_, v___x_323_);
v___x_325_ = lean_array_uset(v_bs_x27_322_, v_i_316_, v_entry_320_);
v_i_316_ = v___x_324_;
v_bs_317_ = v___x_325_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__0___boxed(lean_object* v_sz_327_, lean_object* v_i_328_, lean_object* v_bs_329_){
_start:
{
size_t v_sz_boxed_330_; size_t v_i_boxed_331_; lean_object* v_res_332_; 
v_sz_boxed_330_ = lean_unbox_usize(v_sz_327_);
lean_dec(v_sz_327_);
v_i_boxed_331_ = lean_unbox_usize(v_i_328_);
lean_dec(v_i_328_);
v_res_332_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__0(v_sz_boxed_330_, v_i_boxed_331_, v_bs_329_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__1(lean_object* v_linterOpts_333_, lean_object* v_as_334_, size_t v_i_335_, size_t v_stop_336_, lean_object* v_b_337_){
_start:
{
lean_object* v___y_339_; uint8_t v___x_343_; 
v___x_343_ = lean_usize_dec_eq(v_i_335_, v_stop_336_);
if (v___x_343_ == 0)
{
lean_object* v___x_344_; lean_object* v_linter_x3f_345_; 
v___x_344_ = lean_array_uget_borrowed(v_as_334_, v_i_335_);
v_linter_x3f_345_ = lean_ctor_get(v___x_344_, 0);
if (lean_obj_tag(v_linter_x3f_345_) == 0)
{
lean_object* v___x_346_; 
lean_inc(v___x_344_);
v___x_346_ = lean_array_push(v_b_337_, v___x_344_);
v___y_339_ = v___x_346_;
goto v___jp_338_;
}
else
{
lean_object* v_val_347_; uint8_t v___x_348_; 
v_val_347_ = lean_ctor_get(v_linter_x3f_345_, 0);
v___x_348_ = l_Lean_Linter_isLinterEnabledByOptions(v_val_347_, v_linterOpts_333_);
if (v___x_348_ == 0)
{
v___y_339_ = v_b_337_;
goto v___jp_338_;
}
else
{
lean_object* v___x_349_; 
lean_inc(v___x_344_);
v___x_349_ = lean_array_push(v_b_337_, v___x_344_);
v___y_339_ = v___x_349_;
goto v___jp_338_;
}
}
}
else
{
return v_b_337_;
}
v___jp_338_:
{
size_t v___x_340_; size_t v___x_341_; 
v___x_340_ = ((size_t)1ULL);
v___x_341_ = lean_usize_add(v_i_335_, v___x_340_);
v_i_335_ = v___x_341_;
v_b_337_ = v___y_339_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__1___boxed(lean_object* v_linterOpts_350_, lean_object* v_as_351_, lean_object* v_i_352_, lean_object* v_stop_353_, lean_object* v_b_354_){
_start:
{
size_t v_i_boxed_355_; size_t v_stop_boxed_356_; lean_object* v_res_357_; 
v_i_boxed_355_ = lean_unbox_usize(v_i_352_);
lean_dec(v_i_352_);
v_stop_boxed_356_ = lean_unbox_usize(v_stop_353_);
lean_dec(v_stop_353_);
v_res_357_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__1(v_linterOpts_350_, v_as_351_, v_i_boxed_355_, v_stop_boxed_356_, v_b_354_);
lean_dec_ref(v_as_351_);
lean_dec_ref(v_linterOpts_350_);
return v_res_357_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2(lean_object* v_args_360_, lean_object* v_linterOpts_361_, lean_object* v_mod_362_, lean_object* v_as_363_, size_t v_sz_364_, size_t v_i_365_, lean_object* v_b_366_){
_start:
{
lean_object* v_a_368_; uint8_t v___x_372_; 
v___x_372_ = lean_usize_dec_lt(v_i_365_, v_sz_364_);
if (v___x_372_ == 0)
{
return v_b_366_;
}
else
{
lean_object* v_a_373_; lean_object* v_fst_374_; lean_object* v_snd_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_417_; 
v_a_373_ = lean_array_uget(v_as_363_, v_i_365_);
v_fst_374_ = lean_ctor_get(v_a_373_, 0);
v_snd_375_ = lean_ctor_get(v_a_373_, 1);
v_isSharedCheck_417_ = !lean_is_exclusive(v_a_373_);
if (v_isSharedCheck_417_ == 0)
{
v___x_377_ = v_a_373_;
v_isShared_378_ = v_isSharedCheck_417_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_snd_375_);
lean_inc(v_fst_374_);
lean_dec(v_a_373_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_417_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
lean_object* v_fst_379_; lean_object* v_snd_380_; lean_object* v___x_382_; uint8_t v_isShared_383_; uint8_t v_isSharedCheck_416_; 
v_fst_379_ = lean_ctor_get(v_b_366_, 0);
v_snd_380_ = lean_ctor_get(v_b_366_, 1);
v_isSharedCheck_416_ = !lean_is_exclusive(v_b_366_);
if (v_isSharedCheck_416_ == 0)
{
v___x_382_ = v_b_366_;
v_isShared_383_ = v_isSharedCheck_416_;
goto v_resetjp_381_;
}
else
{
lean_inc(v_snd_380_);
lean_inc(v_fst_379_);
lean_dec(v_b_366_);
v___x_382_ = lean_box(0);
v_isShared_383_ = v_isSharedCheck_416_;
goto v_resetjp_381_;
}
v_resetjp_381_:
{
lean_object* v___y_385_; lean_object* v___y_386_; uint8_t v___y_399_; lean_object* v___x_413_; uint8_t v___x_414_; 
v___x_413_ = l_Lean_Name_getRoot(v_mod_362_);
v___x_414_ = l_Lean_Name_isPrefixOf(v___x_413_, v_fst_374_);
lean_dec(v___x_413_);
if (v___x_414_ == 0)
{
v___y_399_ = v___x_414_;
goto v___jp_398_;
}
else
{
uint8_t v___x_415_; 
v___x_415_ = l_Lean_NameSet_contains(v_fst_379_, v_fst_374_);
if (v___x_415_ == 0)
{
v___y_399_ = v___x_414_;
goto v___jp_398_;
}
else
{
lean_del_object(v___x_382_);
lean_dec(v_snd_375_);
lean_dec(v_fst_374_);
goto v___jp_394_;
}
}
v___jp_384_:
{
size_t v_sz_387_; size_t v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_392_; 
v_sz_387_ = lean_array_size(v___y_386_);
v___x_388_ = ((size_t)0ULL);
v___x_389_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__0(v_sz_387_, v___x_388_, v___y_386_);
v___x_390_ = l_Array_append___redArg(v_snd_380_, v___x_389_);
lean_dec_ref(v___x_389_);
if (v_isShared_383_ == 0)
{
lean_ctor_set(v___x_382_, 1, v___x_390_);
lean_ctor_set(v___x_382_, 0, v___y_385_);
v___x_392_ = v___x_382_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_393_; 
v_reuseFailAlloc_393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_393_, 0, v___y_385_);
lean_ctor_set(v_reuseFailAlloc_393_, 1, v___x_390_);
v___x_392_ = v_reuseFailAlloc_393_;
goto v_reusejp_391_;
}
v_reusejp_391_:
{
v_a_368_ = v___x_392_;
goto v___jp_367_;
}
}
v___jp_394_:
{
lean_object* v___x_396_; 
if (v_isShared_378_ == 0)
{
lean_ctor_set(v___x_377_, 1, v_snd_380_);
lean_ctor_set(v___x_377_, 0, v_fst_379_);
v___x_396_ = v___x_377_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v_fst_379_);
lean_ctor_set(v_reuseFailAlloc_397_, 1, v_snd_380_);
v___x_396_ = v_reuseFailAlloc_397_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
v_a_368_ = v___x_396_;
goto v___jp_367_;
}
}
v___jp_398_:
{
if (v___y_399_ == 0)
{
lean_del_object(v___x_382_);
lean_dec(v_snd_375_);
lean_dec(v_fst_374_);
goto v___jp_394_;
}
else
{
uint8_t v_lintOnly_400_; lean_object* v___x_401_; 
lean_del_object(v___x_377_);
v_lintOnly_400_ = lean_ctor_get_uint8(v_args_360_, sizeof(void*)*4);
v___x_401_ = l_Lean_NameSet_insert(v_fst_379_, v_fst_374_);
if (v_lintOnly_400_ == 0)
{
v___y_385_ = v___x_401_;
v___y_386_ = v_snd_375_;
goto v___jp_384_;
}
else
{
lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; uint8_t v___x_405_; 
v___x_402_ = lean_unsigned_to_nat(0u);
v___x_403_ = lean_array_get_size(v_snd_375_);
v___x_404_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2___closed__0));
v___x_405_ = lean_nat_dec_lt(v___x_402_, v___x_403_);
if (v___x_405_ == 0)
{
lean_dec(v_snd_375_);
v___y_385_ = v___x_401_;
v___y_386_ = v___x_404_;
goto v___jp_384_;
}
else
{
uint8_t v___x_406_; 
v___x_406_ = lean_nat_dec_le(v___x_403_, v___x_403_);
if (v___x_406_ == 0)
{
if (v___x_405_ == 0)
{
lean_dec(v_snd_375_);
v___y_385_ = v___x_401_;
v___y_386_ = v___x_404_;
goto v___jp_384_;
}
else
{
size_t v___x_407_; size_t v___x_408_; lean_object* v___x_409_; 
v___x_407_ = ((size_t)0ULL);
v___x_408_ = lean_usize_of_nat(v___x_403_);
v___x_409_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__1(v_linterOpts_361_, v_snd_375_, v___x_407_, v___x_408_, v___x_404_);
lean_dec(v_snd_375_);
v___y_385_ = v___x_401_;
v___y_386_ = v___x_409_;
goto v___jp_384_;
}
}
else
{
size_t v___x_410_; size_t v___x_411_; lean_object* v___x_412_; 
v___x_410_ = ((size_t)0ULL);
v___x_411_ = lean_usize_of_nat(v___x_403_);
v___x_412_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__1(v_linterOpts_361_, v_snd_375_, v___x_410_, v___x_411_, v___x_404_);
lean_dec(v_snd_375_);
v___y_385_ = v___x_401_;
v___y_386_ = v___x_412_;
goto v___jp_384_;
}
}
}
}
}
}
}
}
v___jp_367_:
{
size_t v___x_369_; size_t v___x_370_; 
v___x_369_ = ((size_t)1ULL);
v___x_370_ = lean_usize_add(v_i_365_, v___x_369_);
v_i_365_ = v___x_370_;
v_b_366_ = v_a_368_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2___boxed(lean_object* v_args_418_, lean_object* v_linterOpts_419_, lean_object* v_mod_420_, lean_object* v_as_421_, lean_object* v_sz_422_, lean_object* v_i_423_, lean_object* v_b_424_){
_start:
{
size_t v_sz_boxed_425_; size_t v_i_boxed_426_; lean_object* v_res_427_; 
v_sz_boxed_425_ = lean_unbox_usize(v_sz_422_);
lean_dec(v_sz_422_);
v_i_boxed_426_ = lean_unbox_usize(v_i_423_);
lean_dec(v_i_423_);
v_res_427_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2(v_args_418_, v_linterOpts_419_, v_mod_420_, v_as_421_, v_sz_boxed_425_, v_i_boxed_426_, v_b_424_);
lean_dec_ref(v_as_421_);
lean_dec(v_mod_420_);
lean_dec_ref(v_linterOpts_419_);
lean_dec_ref(v_args_418_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality(lean_object* v_args_430_, lean_object* v_linterOpts_431_, lean_object* v_env_432_, lean_object* v_mod_433_, lean_object* v_collectedModules_434_){
_start:
{
lean_object* v_acc_435_; lean_object* v___x_436_; lean_object* v___x_437_; size_t v_sz_438_; size_t v___x_439_; lean_object* v___x_440_; lean_object* v_fst_441_; lean_object* v_snd_442_; lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_449_; 
v_acc_435_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality___closed__0));
v___x_436_ = l_Lean_Linter_getAllCodeQualityEntries(v_env_432_);
v___x_437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_437_, 0, v_collectedModules_434_);
lean_ctor_set(v___x_437_, 1, v_acc_435_);
v_sz_438_ = lean_array_size(v___x_436_);
v___x_439_ = ((size_t)0ULL);
v___x_440_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2(v_args_430_, v_linterOpts_431_, v_mod_433_, v___x_436_, v_sz_438_, v___x_439_, v___x_437_);
lean_dec_ref(v___x_436_);
v_fst_441_ = lean_ctor_get(v___x_440_, 0);
v_snd_442_ = lean_ctor_get(v___x_440_, 1);
v_isSharedCheck_449_ = !lean_is_exclusive(v___x_440_);
if (v_isSharedCheck_449_ == 0)
{
v___x_444_ = v___x_440_;
v_isShared_445_ = v_isSharedCheck_449_;
goto v_resetjp_443_;
}
else
{
lean_inc(v_snd_442_);
lean_inc(v_fst_441_);
lean_dec(v___x_440_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_449_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
lean_object* v___x_447_; 
if (v_isShared_445_ == 0)
{
lean_ctor_set(v___x_444_, 1, v_fst_441_);
lean_ctor_set(v___x_444_, 0, v_snd_442_);
v___x_447_ = v___x_444_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v_snd_442_);
lean_ctor_set(v_reuseFailAlloc_448_, 1, v_fst_441_);
v___x_447_ = v_reuseFailAlloc_448_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
return v___x_447_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality___boxed(lean_object* v_args_450_, lean_object* v_linterOpts_451_, lean_object* v_env_452_, lean_object* v_mod_453_, lean_object* v_collectedModules_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality(v_args_450_, v_linterOpts_451_, v_env_452_, v_mod_453_, v_collectedModules_454_);
lean_dec(v_mod_453_);
lean_dec_ref(v_env_452_);
lean_dec_ref(v_linterOpts_451_);
lean_dec_ref(v_args_450_);
return v_res_455_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_getIsModule(lean_object* v_modData_456_){
_start:
{
uint8_t v_isModule_458_; 
v_isModule_458_ = lean_ctor_get_uint8(v_modData_456_, sizeof(void*)*5);
return v_isModule_458_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_getIsModule___boxed(lean_object* v_modData_459_, lean_object* v___y_460_){
_start:
{
uint8_t v_res_461_; lean_object* v_r_462_; 
v_res_461_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_getIsModule(v_modData_459_);
lean_dec_ref(v_modData_459_);
v_r_462_ = lean_box(v_res_461_);
return v_r_462_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_isIndentChar(uint32_t v_c_465_){
_start:
{
uint32_t v___x_466_; uint8_t v___x_467_; 
v___x_466_ = 32;
v___x_467_ = lean_uint32_dec_eq(v_c_465_, v___x_466_);
if (v___x_467_ == 0)
{
uint32_t v___x_468_; uint8_t v___x_469_; 
v___x_468_ = 9;
v___x_469_ = lean_uint32_dec_eq(v_c_465_, v___x_468_);
return v___x_469_;
}
else
{
return v___x_467_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_isIndentChar___boxed(lean_object* v_c_470_){
_start:
{
uint32_t v_c_boxed_471_; uint8_t v_res_472_; lean_object* v_r_473_; 
v_c_boxed_471_ = lean_unbox_uint32(v_c_470_);
lean_dec(v_c_470_);
v_res_472_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_isIndentChar(v_c_boxed_471_);
v_r_473_ = lean_box(v_res_472_);
return v_r_473_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace_spec__0(lean_object* v_s_474_, lean_object* v_stopPos_475_, lean_object* v_i_476_){
_start:
{
uint8_t v___y_478_; lean_object* v___x_481_; lean_object* v___x_482_; uint8_t v___x_483_; 
v___x_481_ = lean_unsigned_to_nat(1u);
v___x_482_ = lean_nat_add(v_i_476_, v___x_481_);
v___x_483_ = lean_nat_dec_le(v___x_482_, v_stopPos_475_);
lean_dec(v___x_482_);
if (v___x_483_ == 0)
{
return v_i_476_;
}
else
{
if (v___x_483_ == 0)
{
v___y_478_ = v___x_483_;
goto v___jp_477_;
}
else
{
uint32_t v___x_484_; uint8_t v___x_485_; 
v___x_484_ = lean_string_utf8_get(v_s_474_, v_i_476_);
v___x_485_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_isIndentChar(v___x_484_);
v___y_478_ = v___x_485_;
goto v___jp_477_;
}
}
v___jp_477_:
{
if (v___y_478_ == 0)
{
return v_i_476_;
}
else
{
lean_object* v___x_479_; 
v___x_479_ = lean_string_utf8_next(v_s_474_, v_i_476_);
lean_dec(v_i_476_);
v_i_476_ = v___x_479_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace_spec__0___boxed(lean_object* v_s_486_, lean_object* v_stopPos_487_, lean_object* v_i_488_){
_start:
{
lean_object* v_res_489_; 
v_res_489_ = l_Substring_Raw_takeWhileAux___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace_spec__0(v_s_486_, v_stopPos_487_, v_i_488_);
lean_dec(v_stopPos_487_);
lean_dec_ref(v_s_486_);
return v_res_489_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace(lean_object* v_line_490_){
_start:
{
lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v_e_493_; lean_object* v___x_494_; 
v___x_491_ = lean_unsigned_to_nat(0u);
v___x_492_ = lean_string_utf8_byte_size(v_line_490_);
v_e_493_ = l_Substring_Raw_takeWhileAux___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace_spec__0(v_line_490_, v___x_492_, v___x_491_);
v___x_494_ = lean_string_utf8_extract(v_line_490_, v___x_491_, v_e_493_);
lean_dec(v_e_493_);
return v___x_494_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace___boxed(lean_object* v_line_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace(v_line_495_);
lean_dec_ref(v_line_495_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg(){
_start:
{
lean_object* v___x_500_; 
v___x_500_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg___closed__0));
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg___boxed(lean_object* v___dummy_501_){
_start:
{
lean_object* v_res_502_; 
v_res_502_ = l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg();
return v_res_502_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___closed__0(void){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg();
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7(lean_object* v_s_504_){
_start:
{
lean_object* v___x_505_; 
v___x_505_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___closed__0);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___boxed(lean_object* v_s_506_){
_start:
{
lean_object* v_res_507_; 
v_res_507_ = l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7(v_s_506_);
lean_dec_ref(v_s_506_);
return v_res_507_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__19(lean_object* v_x_508_, lean_object* v_x_509_){
_start:
{
if (lean_obj_tag(v_x_509_) == 0)
{
return v_x_508_;
}
else
{
lean_object* v_key_510_; lean_object* v_value_511_; lean_object* v_tail_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v_key_510_ = lean_ctor_get(v_x_509_, 0);
v_value_511_ = lean_ctor_get(v_x_509_, 1);
v_tail_512_ = lean_ctor_get(v_x_509_, 2);
lean_inc(v_value_511_);
lean_inc(v_key_510_);
v___x_513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_513_, 0, v_key_510_);
lean_ctor_set(v___x_513_, 1, v_value_511_);
v___x_514_ = lean_array_push(v_x_508_, v___x_513_);
v_x_508_ = v___x_514_;
v_x_509_ = v_tail_512_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__19___boxed(lean_object* v_x_516_, lean_object* v_x_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__19(v_x_516_, v_x_517_);
lean_dec(v_x_517_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__20(lean_object* v_as_519_, size_t v_i_520_, size_t v_stop_521_, lean_object* v_b_522_){
_start:
{
uint8_t v___x_523_; 
v___x_523_ = lean_usize_dec_eq(v_i_520_, v_stop_521_);
if (v___x_523_ == 0)
{
lean_object* v___x_524_; lean_object* v___x_525_; size_t v___x_526_; size_t v___x_527_; 
v___x_524_ = lean_array_uget_borrowed(v_as_519_, v_i_520_);
v___x_525_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__19(v_b_522_, v___x_524_);
v___x_526_ = ((size_t)1ULL);
v___x_527_ = lean_usize_add(v_i_520_, v___x_526_);
v_i_520_ = v___x_527_;
v_b_522_ = v___x_525_;
goto _start;
}
else
{
return v_b_522_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__20___boxed(lean_object* v_as_529_, lean_object* v_i_530_, lean_object* v_stop_531_, lean_object* v_b_532_){
_start:
{
size_t v_i_boxed_533_; size_t v_stop_boxed_534_; lean_object* v_res_535_; 
v_i_boxed_533_ = lean_unbox_usize(v_i_530_);
lean_dec(v_i_530_);
v_stop_boxed_534_ = lean_unbox_usize(v_stop_531_);
lean_dec(v_stop_531_);
v_res_535_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__20(v_as_529_, v_i_boxed_533_, v_stop_boxed_534_, v_b_532_);
lean_dec_ref(v_as_529_);
return v_res_535_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17_spec__29(lean_object* v_s_536_){
_start:
{
lean_object* v___x_538_; lean_object* v_putStr_539_; lean_object* v___x_540_; 
v___x_538_ = lean_get_stderr();
v_putStr_539_ = lean_ctor_get(v___x_538_, 4);
lean_inc_ref(v_putStr_539_);
lean_dec_ref(v___x_538_);
v___x_540_ = lean_apply_2(v_putStr_539_, v_s_536_, lean_box(0));
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17_spec__29___boxed(lean_object* v_s_541_, lean_object* v___y_542_){
_start:
{
lean_object* v_res_543_; 
v_res_543_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17_spec__29(v_s_541_);
return v_res_543_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(lean_object* v_s_544_){
_start:
{
uint32_t v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_546_ = 10;
v___x_547_ = lean_string_push(v_s_544_, v___x_546_);
v___x_548_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17_spec__29(v___x_547_);
return v___x_548_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17___boxed(lean_object* v_s_549_, lean_object* v___y_550_){
_start:
{
lean_object* v_res_551_; 
v_res_551_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v_s_549_);
return v_res_551_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__15(lean_object* v_x_552_, lean_object* v_x_553_){
_start:
{
if (lean_obj_tag(v_x_553_) == 0)
{
return v_x_552_;
}
else
{
lean_object* v_key_554_; lean_object* v_value_555_; lean_object* v_tail_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
v_key_554_ = lean_ctor_get(v_x_553_, 0);
v_value_555_ = lean_ctor_get(v_x_553_, 1);
v_tail_556_ = lean_ctor_get(v_x_553_, 2);
lean_inc(v_value_555_);
lean_inc(v_key_554_);
v___x_557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_557_, 0, v_key_554_);
lean_ctor_set(v___x_557_, 1, v_value_555_);
v___x_558_ = lean_array_push(v_x_552_, v___x_557_);
v_x_552_ = v___x_558_;
v_x_553_ = v_tail_556_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__15___boxed(lean_object* v_x_560_, lean_object* v_x_561_){
_start:
{
lean_object* v_res_562_; 
v_res_562_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__15(v_x_560_, v_x_561_);
lean_dec(v_x_561_);
return v_res_562_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__16(lean_object* v_as_563_, size_t v_i_564_, size_t v_stop_565_, lean_object* v_b_566_){
_start:
{
uint8_t v___x_567_; 
v___x_567_ = lean_usize_dec_eq(v_i_564_, v_stop_565_);
if (v___x_567_ == 0)
{
lean_object* v___x_568_; lean_object* v___x_569_; size_t v___x_570_; size_t v___x_571_; 
v___x_568_ = lean_array_uget_borrowed(v_as_563_, v_i_564_);
v___x_569_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__15(v_b_566_, v___x_568_);
v___x_570_ = ((size_t)1ULL);
v___x_571_ = lean_usize_add(v_i_564_, v___x_570_);
v_i_564_ = v___x_571_;
v_b_566_ = v___x_569_;
goto _start;
}
else
{
return v_b_566_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__16___boxed(lean_object* v_as_573_, lean_object* v_i_574_, lean_object* v_stop_575_, lean_object* v_b_576_){
_start:
{
size_t v_i_boxed_577_; size_t v_stop_boxed_578_; lean_object* v_res_579_; 
v_i_boxed_577_ = lean_unbox_usize(v_i_574_);
lean_dec(v_i_574_);
v_stop_boxed_578_ = lean_unbox_usize(v_stop_575_);
lean_dec(v_stop_575_);
v_res_579_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__16(v_as_573_, v_i_boxed_577_, v_stop_boxed_578_, v_b_576_);
lean_dec_ref(v_as_573_);
return v_res_579_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___lam__0(lean_object* v_a_580_, lean_object* v_b_581_){
_start:
{
lean_object* v_fst_582_; lean_object* v_fst_583_; uint8_t v___x_584_; 
v_fst_582_ = lean_ctor_get(v_b_581_, 0);
v_fst_583_ = lean_ctor_get(v_a_580_, 0);
v___x_584_ = lean_nat_dec_lt(v_fst_582_, v_fst_583_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___lam__0___boxed(lean_object* v_a_585_, lean_object* v_b_586_){
_start:
{
uint8_t v_res_587_; lean_object* v_r_588_; 
v_res_587_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___lam__0(v_a_585_, v_b_586_);
lean_dec_ref(v_b_586_);
lean_dec_ref(v_a_585_);
v_r_588_ = lean_box(v_res_587_);
return v_r_588_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25___redArg(lean_object* v_hi_589_, lean_object* v_pivot_590_, lean_object* v_as_591_, lean_object* v_i_592_, lean_object* v_k_593_){
_start:
{
uint8_t v___x_594_; 
v___x_594_ = lean_nat_dec_lt(v_k_593_, v_hi_589_);
if (v___x_594_ == 0)
{
lean_object* v___x_595_; lean_object* v___x_596_; 
lean_dec(v_k_593_);
v___x_595_ = lean_array_fswap(v_as_591_, v_i_592_, v_hi_589_);
v___x_596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_596_, 0, v_i_592_);
lean_ctor_set(v___x_596_, 1, v___x_595_);
return v___x_596_;
}
else
{
lean_object* v_fst_597_; lean_object* v___x_598_; lean_object* v_fst_599_; uint8_t v___x_600_; 
v_fst_597_ = lean_ctor_get(v_pivot_590_, 0);
v___x_598_ = lean_array_fget_borrowed(v_as_591_, v_k_593_);
v_fst_599_ = lean_ctor_get(v___x_598_, 0);
v___x_600_ = lean_nat_dec_lt(v_fst_597_, v_fst_599_);
if (v___x_600_ == 0)
{
lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_601_ = lean_unsigned_to_nat(1u);
v___x_602_ = lean_nat_add(v_k_593_, v___x_601_);
lean_dec(v_k_593_);
v_k_593_ = v___x_602_;
goto _start;
}
else
{
lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_604_ = lean_array_fswap(v_as_591_, v_i_592_, v_k_593_);
v___x_605_ = lean_unsigned_to_nat(1u);
v___x_606_ = lean_nat_add(v_i_592_, v___x_605_);
lean_dec(v_i_592_);
v___x_607_ = lean_nat_add(v_k_593_, v___x_605_);
lean_dec(v_k_593_);
v_as_591_ = v___x_604_;
v_i_592_ = v___x_606_;
v_k_593_ = v___x_607_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25___redArg___boxed(lean_object* v_hi_609_, lean_object* v_pivot_610_, lean_object* v_as_611_, lean_object* v_i_612_, lean_object* v_k_613_){
_start:
{
lean_object* v_res_614_; 
v_res_614_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25___redArg(v_hi_609_, v_pivot_610_, v_as_611_, v_i_612_, v_k_613_);
lean_dec_ref(v_pivot_610_);
lean_dec(v_hi_609_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg(lean_object* v_n_615_, lean_object* v_as_616_, lean_object* v_lo_617_, lean_object* v_hi_618_){
_start:
{
lean_object* v___y_620_; uint8_t v___x_630_; 
v___x_630_ = lean_nat_dec_lt(v_lo_617_, v_hi_618_);
if (v___x_630_ == 0)
{
lean_dec(v_lo_617_);
return v_as_616_;
}
else
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v_mid_633_; lean_object* v___y_635_; lean_object* v___y_641_; lean_object* v___x_646_; lean_object* v___x_647_; uint8_t v___x_648_; 
v___x_631_ = lean_nat_add(v_lo_617_, v_hi_618_);
v___x_632_ = lean_unsigned_to_nat(1u);
v_mid_633_ = lean_nat_shiftr(v___x_631_, v___x_632_);
lean_dec(v___x_631_);
v___x_646_ = lean_array_fget_borrowed(v_as_616_, v_mid_633_);
v___x_647_ = lean_array_fget_borrowed(v_as_616_, v_lo_617_);
v___x_648_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___lam__0(v___x_646_, v___x_647_);
if (v___x_648_ == 0)
{
v___y_641_ = v_as_616_;
goto v___jp_640_;
}
else
{
lean_object* v___x_649_; 
v___x_649_ = lean_array_fswap(v_as_616_, v_lo_617_, v_mid_633_);
v___y_641_ = v___x_649_;
goto v___jp_640_;
}
v___jp_634_:
{
lean_object* v___x_636_; lean_object* v___x_637_; uint8_t v___x_638_; 
v___x_636_ = lean_array_fget_borrowed(v___y_635_, v_mid_633_);
v___x_637_ = lean_array_fget_borrowed(v___y_635_, v_hi_618_);
v___x_638_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___lam__0(v___x_636_, v___x_637_);
if (v___x_638_ == 0)
{
lean_dec(v_mid_633_);
v___y_620_ = v___y_635_;
goto v___jp_619_;
}
else
{
lean_object* v___x_639_; 
v___x_639_ = lean_array_fswap(v___y_635_, v_mid_633_, v_hi_618_);
lean_dec(v_mid_633_);
v___y_620_ = v___x_639_;
goto v___jp_619_;
}
}
v___jp_640_:
{
lean_object* v___x_642_; lean_object* v___x_643_; uint8_t v___x_644_; 
v___x_642_ = lean_array_fget_borrowed(v___y_641_, v_hi_618_);
v___x_643_ = lean_array_fget_borrowed(v___y_641_, v_lo_617_);
v___x_644_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___lam__0(v___x_642_, v___x_643_);
if (v___x_644_ == 0)
{
v___y_635_ = v___y_641_;
goto v___jp_634_;
}
else
{
lean_object* v___x_645_; 
v___x_645_ = lean_array_fswap(v___y_641_, v_lo_617_, v_hi_618_);
v___y_635_ = v___x_645_;
goto v___jp_634_;
}
}
}
v___jp_619_:
{
lean_object* v_pivot_621_; lean_object* v___x_622_; lean_object* v_fst_623_; lean_object* v_snd_624_; uint8_t v___x_625_; 
v_pivot_621_ = lean_array_fget(v___y_620_, v_hi_618_);
lean_inc_n(v_lo_617_, 2);
v___x_622_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25___redArg(v_hi_618_, v_pivot_621_, v___y_620_, v_lo_617_, v_lo_617_);
lean_dec(v_pivot_621_);
v_fst_623_ = lean_ctor_get(v___x_622_, 0);
lean_inc(v_fst_623_);
v_snd_624_ = lean_ctor_get(v___x_622_, 1);
lean_inc(v_snd_624_);
lean_dec_ref(v___x_622_);
v___x_625_ = lean_nat_dec_le(v_hi_618_, v_fst_623_);
if (v___x_625_ == 0)
{
lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_626_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg(v_n_615_, v_snd_624_, v_lo_617_, v_fst_623_);
v___x_627_ = lean_unsigned_to_nat(1u);
v___x_628_ = lean_nat_add(v_fst_623_, v___x_627_);
lean_dec(v_fst_623_);
v_as_616_ = v___x_626_;
v_lo_617_ = v___x_628_;
goto _start;
}
else
{
lean_dec(v_fst_623_);
lean_dec(v_lo_617_);
return v_snd_624_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___boxed(lean_object* v_n_650_, lean_object* v_as_651_, lean_object* v_lo_652_, lean_object* v_hi_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg(v_n_650_, v_as_651_, v_lo_652_, v_hi_653_);
lean_dec(v_hi_653_);
lean_dec(v_n_650_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8___redArg(lean_object* v_a_655_, lean_object* v___x_656_, lean_object* v___x_657_, lean_object* v_a_658_, lean_object* v_b_659_){
_start:
{
lean_object* v_it_661_; lean_object* v_startInclusive_662_; lean_object* v_endExclusive_663_; 
if (lean_obj_tag(v_a_658_) == 0)
{
lean_object* v_currPos_667_; lean_object* v_searcher_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_691_; 
v_currPos_667_ = lean_ctor_get(v_a_658_, 0);
v_searcher_668_ = lean_ctor_get(v_a_658_, 1);
v_isSharedCheck_691_ = !lean_is_exclusive(v_a_658_);
if (v_isSharedCheck_691_ == 0)
{
v___x_670_ = v_a_658_;
v_isShared_671_ = v_isSharedCheck_691_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_searcher_668_);
lean_inc(v_currPos_667_);
lean_dec(v_a_658_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_691_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
uint8_t v_decide_672_; 
v_decide_672_ = lean_nat_dec_eq(v_searcher_668_, v___x_657_);
if (v_decide_672_ == 0)
{
uint32_t v___x_673_; uint32_t v___x_674_; uint8_t v___x_675_; 
v___x_673_ = 10;
v___x_674_ = lean_string_utf8_get_fast(v_a_655_, v_searcher_668_);
v___x_675_ = lean_uint32_dec_eq(v___x_674_, v___x_673_);
if (v___x_675_ == 0)
{
lean_object* v___x_676_; lean_object* v___x_678_; 
v___x_676_ = lean_string_utf8_next_fast(v_a_655_, v_searcher_668_);
lean_dec(v_searcher_668_);
if (v_isShared_671_ == 0)
{
lean_ctor_set(v___x_670_, 1, v___x_676_);
v___x_678_ = v___x_670_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v_currPos_667_);
lean_ctor_set(v_reuseFailAlloc_680_, 1, v___x_676_);
v___x_678_ = v_reuseFailAlloc_680_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
v_a_658_ = v___x_678_;
goto _start;
}
}
else
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v_slice_684_; lean_object* v_nextIt_686_; 
v___x_681_ = lean_string_utf8_next_fast(v_a_655_, v_searcher_668_);
v___x_682_ = lean_nat_sub(v___x_681_, v_searcher_668_);
v___x_683_ = lean_nat_add(v_searcher_668_, v___x_682_);
lean_dec(v___x_682_);
v_slice_684_ = l_String_Slice_subslice_x21(v___x_656_, v_currPos_667_, v_searcher_668_);
lean_inc(v___x_683_);
if (v_isShared_671_ == 0)
{
lean_ctor_set(v___x_670_, 1, v___x_683_);
lean_ctor_set(v___x_670_, 0, v___x_683_);
v_nextIt_686_ = v___x_670_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v___x_683_);
lean_ctor_set(v_reuseFailAlloc_689_, 1, v___x_683_);
v_nextIt_686_ = v_reuseFailAlloc_689_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
lean_object* v_startInclusive_687_; lean_object* v_endExclusive_688_; 
v_startInclusive_687_ = lean_ctor_get(v_slice_684_, 0);
lean_inc(v_startInclusive_687_);
v_endExclusive_688_ = lean_ctor_get(v_slice_684_, 1);
lean_inc(v_endExclusive_688_);
lean_dec_ref(v_slice_684_);
v_it_661_ = v_nextIt_686_;
v_startInclusive_662_ = v_startInclusive_687_;
v_endExclusive_663_ = v_endExclusive_688_;
goto v___jp_660_;
}
}
}
else
{
lean_object* v___x_690_; 
lean_del_object(v___x_670_);
lean_dec(v_searcher_668_);
v___x_690_ = lean_box(1);
lean_inc(v___x_657_);
v_it_661_ = v___x_690_;
v_startInclusive_662_ = v_currPos_667_;
v_endExclusive_663_ = v___x_657_;
goto v___jp_660_;
}
}
}
else
{
lean_dec(v___x_657_);
lean_dec_ref(v_a_655_);
return v_b_659_;
}
v___jp_660_:
{
lean_object* v___x_664_; lean_object* v___x_665_; 
lean_inc_ref(v_a_655_);
v___x_664_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_664_, 0, v_a_655_);
lean_ctor_set(v___x_664_, 1, v_startInclusive_662_);
lean_ctor_set(v___x_664_, 2, v_endExclusive_663_);
v___x_665_ = lean_array_push(v_b_659_, v___x_664_);
v_a_658_ = v_it_661_;
v_b_659_ = v___x_665_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8___redArg___boxed(lean_object* v_a_692_, lean_object* v___x_693_, lean_object* v___x_694_, lean_object* v_a_695_, lean_object* v_b_696_){
_start:
{
lean_object* v_res_697_; 
v_res_697_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8___redArg(v_a_692_, v___x_693_, v___x_694_, v_a_695_, v_b_696_);
lean_dec_ref(v___x_693_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__9(size_t v_sz_698_, size_t v_i_699_, lean_object* v_bs_700_){
_start:
{
uint8_t v___x_701_; 
v___x_701_ = lean_usize_dec_lt(v_i_699_, v_sz_698_);
if (v___x_701_ == 0)
{
return v_bs_700_;
}
else
{
lean_object* v_v_702_; lean_object* v___x_703_; lean_object* v_bs_x27_704_; lean_object* v___x_705_; size_t v___x_706_; size_t v___x_707_; lean_object* v___x_708_; 
v_v_702_ = lean_array_uget(v_bs_700_, v_i_699_);
v___x_703_ = lean_unsigned_to_nat(0u);
v_bs_x27_704_ = lean_array_uset(v_bs_700_, v_i_699_, v___x_703_);
v___x_705_ = l_String_Slice_toString(v_v_702_);
lean_dec(v_v_702_);
v___x_706_ = ((size_t)1ULL);
v___x_707_ = lean_usize_add(v_i_699_, v___x_706_);
v___x_708_ = lean_array_uset(v_bs_x27_704_, v_i_699_, v___x_705_);
v_i_699_ = v___x_707_;
v_bs_700_ = v___x_708_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__9___boxed(lean_object* v_sz_710_, lean_object* v_i_711_, lean_object* v_bs_712_){
_start:
{
size_t v_sz_boxed_713_; size_t v_i_boxed_714_; lean_object* v_res_715_; 
v_sz_boxed_713_ = lean_unbox_usize(v_sz_710_);
lean_dec(v_sz_710_);
v_i_boxed_714_ = lean_unbox_usize(v_i_711_);
lean_dec(v_i_711_);
v_res_715_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__9(v_sz_boxed_713_, v_i_boxed_714_, v_bs_712_);
return v_res_715_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15_spec__33___redArg(lean_object* v_x_716_, lean_object* v_x_717_){
_start:
{
if (lean_obj_tag(v_x_717_) == 0)
{
return v_x_716_;
}
else
{
lean_object* v_key_718_; lean_object* v_value_719_; lean_object* v_tail_720_; lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_743_; 
v_key_718_ = lean_ctor_get(v_x_717_, 0);
v_value_719_ = lean_ctor_get(v_x_717_, 1);
v_tail_720_ = lean_ctor_get(v_x_717_, 2);
v_isSharedCheck_743_ = !lean_is_exclusive(v_x_717_);
if (v_isSharedCheck_743_ == 0)
{
v___x_722_ = v_x_717_;
v_isShared_723_ = v_isSharedCheck_743_;
goto v_resetjp_721_;
}
else
{
lean_inc(v_tail_720_);
lean_inc(v_value_719_);
lean_inc(v_key_718_);
lean_dec(v_x_717_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_743_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
lean_object* v___x_724_; uint64_t v___x_725_; uint64_t v___x_726_; uint64_t v___x_727_; uint64_t v_fold_728_; uint64_t v___x_729_; uint64_t v___x_730_; uint64_t v___x_731_; size_t v___x_732_; size_t v___x_733_; size_t v___x_734_; size_t v___x_735_; size_t v___x_736_; lean_object* v___x_737_; lean_object* v___x_739_; 
v___x_724_ = lean_array_get_size(v_x_716_);
v___x_725_ = lean_uint64_of_nat(v_key_718_);
v___x_726_ = 32ULL;
v___x_727_ = lean_uint64_shift_right(v___x_725_, v___x_726_);
v_fold_728_ = lean_uint64_xor(v___x_725_, v___x_727_);
v___x_729_ = 16ULL;
v___x_730_ = lean_uint64_shift_right(v_fold_728_, v___x_729_);
v___x_731_ = lean_uint64_xor(v_fold_728_, v___x_730_);
v___x_732_ = lean_uint64_to_usize(v___x_731_);
v___x_733_ = lean_usize_of_nat(v___x_724_);
v___x_734_ = ((size_t)1ULL);
v___x_735_ = lean_usize_sub(v___x_733_, v___x_734_);
v___x_736_ = lean_usize_land(v___x_732_, v___x_735_);
v___x_737_ = lean_array_uget_borrowed(v_x_716_, v___x_736_);
lean_inc(v___x_737_);
if (v_isShared_723_ == 0)
{
lean_ctor_set(v___x_722_, 2, v___x_737_);
v___x_739_ = v___x_722_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v_key_718_);
lean_ctor_set(v_reuseFailAlloc_742_, 1, v_value_719_);
lean_ctor_set(v_reuseFailAlloc_742_, 2, v___x_737_);
v___x_739_ = v_reuseFailAlloc_742_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
lean_object* v___x_740_; 
v___x_740_ = lean_array_uset(v_x_716_, v___x_736_, v___x_739_);
v_x_716_ = v___x_740_;
v_x_717_ = v_tail_720_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15___redArg(lean_object* v_i_744_, lean_object* v_source_745_, lean_object* v_target_746_){
_start:
{
lean_object* v___x_747_; uint8_t v___x_748_; 
v___x_747_ = lean_array_get_size(v_source_745_);
v___x_748_ = lean_nat_dec_lt(v_i_744_, v___x_747_);
if (v___x_748_ == 0)
{
lean_dec_ref(v_source_745_);
lean_dec(v_i_744_);
return v_target_746_;
}
else
{
lean_object* v_es_749_; lean_object* v___x_750_; lean_object* v_source_751_; lean_object* v_target_752_; lean_object* v___x_753_; lean_object* v___x_754_; 
v_es_749_ = lean_array_fget(v_source_745_, v_i_744_);
v___x_750_ = lean_box(0);
v_source_751_ = lean_array_fset(v_source_745_, v_i_744_, v___x_750_);
v_target_752_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15_spec__33___redArg(v_target_746_, v_es_749_);
v___x_753_ = lean_unsigned_to_nat(1u);
v___x_754_ = lean_nat_add(v_i_744_, v___x_753_);
lean_dec(v_i_744_);
v_i_744_ = v___x_754_;
v_source_745_ = v_source_751_;
v_target_746_ = v_target_752_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12___redArg(lean_object* v_data_756_){
_start:
{
lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v_nbuckets_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; 
v___x_757_ = lean_array_get_size(v_data_756_);
v___x_758_ = lean_unsigned_to_nat(2u);
v_nbuckets_759_ = lean_nat_mul(v___x_757_, v___x_758_);
v___x_760_ = lean_unsigned_to_nat(0u);
v___x_761_ = lean_box(0);
v___x_762_ = lean_mk_array(v_nbuckets_759_, v___x_761_);
v___x_763_ = lean_array_propagate_mark(v_data_756_, v___x_762_);
v___x_764_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15___redArg(v___x_760_, v_data_756_, v___x_763_);
return v___x_764_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11___redArg(lean_object* v_a_765_, lean_object* v_x_766_){
_start:
{
if (lean_obj_tag(v_x_766_) == 0)
{
uint8_t v___x_767_; 
v___x_767_ = 0;
return v___x_767_;
}
else
{
lean_object* v_key_768_; lean_object* v_tail_769_; uint8_t v___x_770_; 
v_key_768_ = lean_ctor_get(v_x_766_, 0);
v_tail_769_ = lean_ctor_get(v_x_766_, 2);
v___x_770_ = lean_nat_dec_eq(v_key_768_, v_a_765_);
if (v___x_770_ == 0)
{
v_x_766_ = v_tail_769_;
goto _start;
}
else
{
return v___x_770_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11___redArg___boxed(lean_object* v_a_772_, lean_object* v_x_773_){
_start:
{
uint8_t v_res_774_; lean_object* v_r_775_; 
v_res_774_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11___redArg(v_a_772_, v_x_773_);
lean_dec(v_x_773_);
lean_dec(v_a_772_);
v_r_775_ = lean_box(v_res_774_);
return v_r_775_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__13___redArg(lean_object* v_a_776_, lean_object* v_b_777_, lean_object* v_x_778_){
_start:
{
if (lean_obj_tag(v_x_778_) == 0)
{
lean_dec(v_b_777_);
lean_dec(v_a_776_);
return v_x_778_;
}
else
{
lean_object* v_key_779_; lean_object* v_value_780_; lean_object* v_tail_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_793_; 
v_key_779_ = lean_ctor_get(v_x_778_, 0);
v_value_780_ = lean_ctor_get(v_x_778_, 1);
v_tail_781_ = lean_ctor_get(v_x_778_, 2);
v_isSharedCheck_793_ = !lean_is_exclusive(v_x_778_);
if (v_isSharedCheck_793_ == 0)
{
v___x_783_ = v_x_778_;
v_isShared_784_ = v_isSharedCheck_793_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_tail_781_);
lean_inc(v_value_780_);
lean_inc(v_key_779_);
lean_dec(v_x_778_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_793_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
uint8_t v___x_785_; 
v___x_785_ = lean_nat_dec_eq(v_key_779_, v_a_776_);
if (v___x_785_ == 0)
{
lean_object* v___x_786_; lean_object* v___x_788_; 
v___x_786_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__13___redArg(v_a_776_, v_b_777_, v_tail_781_);
if (v_isShared_784_ == 0)
{
lean_ctor_set(v___x_783_, 2, v___x_786_);
v___x_788_ = v___x_783_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v_key_779_);
lean_ctor_set(v_reuseFailAlloc_789_, 1, v_value_780_);
lean_ctor_set(v_reuseFailAlloc_789_, 2, v___x_786_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
}
}
else
{
lean_object* v___x_791_; 
lean_dec(v_value_780_);
lean_dec(v_key_779_);
if (v_isShared_784_ == 0)
{
lean_ctor_set(v___x_783_, 1, v_b_777_);
lean_ctor_set(v___x_783_, 0, v_a_776_);
v___x_791_ = v___x_783_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_a_776_);
lean_ctor_set(v_reuseFailAlloc_792_, 1, v_b_777_);
lean_ctor_set(v_reuseFailAlloc_792_, 2, v_tail_781_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5___redArg(lean_object* v_m_794_, lean_object* v_a_795_, lean_object* v_b_796_){
_start:
{
lean_object* v_size_797_; lean_object* v_buckets_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_841_; 
v_size_797_ = lean_ctor_get(v_m_794_, 0);
v_buckets_798_ = lean_ctor_get(v_m_794_, 1);
v_isSharedCheck_841_ = !lean_is_exclusive(v_m_794_);
if (v_isSharedCheck_841_ == 0)
{
v___x_800_ = v_m_794_;
v_isShared_801_ = v_isSharedCheck_841_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_buckets_798_);
lean_inc(v_size_797_);
lean_dec(v_m_794_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_841_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_802_; uint64_t v___x_803_; uint64_t v___x_804_; uint64_t v___x_805_; uint64_t v_fold_806_; uint64_t v___x_807_; uint64_t v___x_808_; uint64_t v___x_809_; size_t v___x_810_; size_t v___x_811_; size_t v___x_812_; size_t v___x_813_; size_t v___x_814_; lean_object* v_bkt_815_; uint8_t v___x_816_; 
v___x_802_ = lean_array_get_size(v_buckets_798_);
v___x_803_ = lean_uint64_of_nat(v_a_795_);
v___x_804_ = 32ULL;
v___x_805_ = lean_uint64_shift_right(v___x_803_, v___x_804_);
v_fold_806_ = lean_uint64_xor(v___x_803_, v___x_805_);
v___x_807_ = 16ULL;
v___x_808_ = lean_uint64_shift_right(v_fold_806_, v___x_807_);
v___x_809_ = lean_uint64_xor(v_fold_806_, v___x_808_);
v___x_810_ = lean_uint64_to_usize(v___x_809_);
v___x_811_ = lean_usize_of_nat(v___x_802_);
v___x_812_ = ((size_t)1ULL);
v___x_813_ = lean_usize_sub(v___x_811_, v___x_812_);
v___x_814_ = lean_usize_land(v___x_810_, v___x_813_);
v_bkt_815_ = lean_array_uget_borrowed(v_buckets_798_, v___x_814_);
v___x_816_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11___redArg(v_a_795_, v_bkt_815_);
if (v___x_816_ == 0)
{
lean_object* v___x_817_; lean_object* v_size_x27_818_; lean_object* v___x_819_; lean_object* v_buckets_x27_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; uint8_t v___x_826_; 
v___x_817_ = lean_unsigned_to_nat(1u);
v_size_x27_818_ = lean_nat_add(v_size_797_, v___x_817_);
lean_dec(v_size_797_);
lean_inc(v_bkt_815_);
v___x_819_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_819_, 0, v_a_795_);
lean_ctor_set(v___x_819_, 1, v_b_796_);
lean_ctor_set(v___x_819_, 2, v_bkt_815_);
v_buckets_x27_820_ = lean_array_uset(v_buckets_798_, v___x_814_, v___x_819_);
v___x_821_ = lean_unsigned_to_nat(4u);
v___x_822_ = lean_nat_mul(v_size_x27_818_, v___x_821_);
v___x_823_ = lean_unsigned_to_nat(3u);
v___x_824_ = lean_nat_div(v___x_822_, v___x_823_);
lean_dec(v___x_822_);
v___x_825_ = lean_array_get_size(v_buckets_x27_820_);
v___x_826_ = lean_nat_dec_le(v___x_824_, v___x_825_);
lean_dec(v___x_824_);
if (v___x_826_ == 0)
{
lean_object* v_val_827_; lean_object* v___x_829_; 
v_val_827_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12___redArg(v_buckets_x27_820_);
if (v_isShared_801_ == 0)
{
lean_ctor_set(v___x_800_, 1, v_val_827_);
lean_ctor_set(v___x_800_, 0, v_size_x27_818_);
v___x_829_ = v___x_800_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v_size_x27_818_);
lean_ctor_set(v_reuseFailAlloc_830_, 1, v_val_827_);
v___x_829_ = v_reuseFailAlloc_830_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
return v___x_829_;
}
}
else
{
lean_object* v___x_832_; 
if (v_isShared_801_ == 0)
{
lean_ctor_set(v___x_800_, 1, v_buckets_x27_820_);
lean_ctor_set(v___x_800_, 0, v_size_x27_818_);
v___x_832_ = v___x_800_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v_size_x27_818_);
lean_ctor_set(v_reuseFailAlloc_833_, 1, v_buckets_x27_820_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
return v___x_832_;
}
}
}
else
{
lean_object* v___x_834_; lean_object* v_buckets_x27_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_839_; 
lean_inc(v_bkt_815_);
v___x_834_ = lean_box(0);
v_buckets_x27_835_ = lean_array_uset(v_buckets_798_, v___x_814_, v___x_834_);
v___x_836_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__13___redArg(v_a_795_, v_b_796_, v_bkt_815_);
v___x_837_ = lean_array_uset(v_buckets_x27_835_, v___x_814_, v___x_836_);
if (v_isShared_801_ == 0)
{
lean_ctor_set(v___x_800_, 1, v___x_837_);
v___x_839_ = v___x_800_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v_size_797_);
lean_ctor_set(v_reuseFailAlloc_840_, 1, v___x_837_);
v___x_839_ = v_reuseFailAlloc_840_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
return v___x_839_;
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4_spec__9(lean_object* v_a_842_, lean_object* v_as_843_, size_t v_i_844_, size_t v_stop_845_){
_start:
{
uint8_t v___x_846_; 
v___x_846_ = lean_usize_dec_eq(v_i_844_, v_stop_845_);
if (v___x_846_ == 0)
{
lean_object* v___x_847_; uint8_t v___x_848_; 
v___x_847_ = lean_array_uget_borrowed(v_as_843_, v_i_844_);
v___x_848_ = lean_name_eq(v_a_842_, v___x_847_);
if (v___x_848_ == 0)
{
size_t v___x_849_; size_t v___x_850_; 
v___x_849_ = ((size_t)1ULL);
v___x_850_ = lean_usize_add(v_i_844_, v___x_849_);
v_i_844_ = v___x_850_;
goto _start;
}
else
{
return v___x_848_;
}
}
else
{
uint8_t v___x_852_; 
v___x_852_ = 0;
return v___x_852_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4_spec__9___boxed(lean_object* v_a_853_, lean_object* v_as_854_, lean_object* v_i_855_, lean_object* v_stop_856_){
_start:
{
size_t v_i_boxed_857_; size_t v_stop_boxed_858_; uint8_t v_res_859_; lean_object* v_r_860_; 
v_i_boxed_857_ = lean_unbox_usize(v_i_855_);
lean_dec(v_i_855_);
v_stop_boxed_858_ = lean_unbox_usize(v_stop_856_);
lean_dec(v_stop_856_);
v_res_859_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4_spec__9(v_a_853_, v_as_854_, v_i_boxed_857_, v_stop_boxed_858_);
lean_dec_ref(v_as_854_);
lean_dec(v_a_853_);
v_r_860_ = lean_box(v_res_859_);
return v_r_860_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4(lean_object* v_as_861_, lean_object* v_a_862_){
_start:
{
lean_object* v___x_863_; lean_object* v___x_864_; uint8_t v___x_865_; 
v___x_863_ = lean_unsigned_to_nat(0u);
v___x_864_ = lean_array_get_size(v_as_861_);
v___x_865_ = lean_nat_dec_lt(v___x_863_, v___x_864_);
if (v___x_865_ == 0)
{
return v___x_865_;
}
else
{
if (v___x_865_ == 0)
{
return v___x_865_;
}
else
{
size_t v___x_866_; size_t v___x_867_; uint8_t v___x_868_; 
v___x_866_ = ((size_t)0ULL);
v___x_867_ = lean_usize_of_nat(v___x_864_);
v___x_868_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4_spec__9(v_a_862_, v_as_861_, v___x_866_, v___x_867_);
return v___x_868_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4___boxed(lean_object* v_as_869_, lean_object* v_a_870_){
_start:
{
uint8_t v_res_871_; lean_object* v_r_872_; 
v_res_871_ = l_Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4(v_as_869_, v_a_870_);
lean_dec(v_a_870_);
lean_dec_ref(v_as_869_);
v_r_872_ = lean_box(v_res_871_);
return v_r_872_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7___redArg(lean_object* v_a_873_, lean_object* v_fallback_874_, lean_object* v_x_875_){
_start:
{
if (lean_obj_tag(v_x_875_) == 0)
{
lean_inc(v_fallback_874_);
return v_fallback_874_;
}
else
{
lean_object* v_key_876_; lean_object* v_value_877_; lean_object* v_tail_878_; uint8_t v___x_879_; 
v_key_876_ = lean_ctor_get(v_x_875_, 0);
v_value_877_ = lean_ctor_get(v_x_875_, 1);
v_tail_878_ = lean_ctor_get(v_x_875_, 2);
v___x_879_ = lean_nat_dec_eq(v_key_876_, v_a_873_);
if (v___x_879_ == 0)
{
v_x_875_ = v_tail_878_;
goto _start;
}
else
{
lean_inc(v_value_877_);
return v_value_877_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7___redArg___boxed(lean_object* v_a_881_, lean_object* v_fallback_882_, lean_object* v_x_883_){
_start:
{
lean_object* v_res_884_; 
v_res_884_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7___redArg(v_a_881_, v_fallback_882_, v_x_883_);
lean_dec(v_x_883_);
lean_dec(v_fallback_882_);
lean_dec(v_a_881_);
return v_res_884_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3___redArg(lean_object* v_m_885_, lean_object* v_a_886_, lean_object* v_fallback_887_){
_start:
{
lean_object* v_buckets_888_; lean_object* v___x_889_; uint64_t v___x_890_; uint64_t v___x_891_; uint64_t v___x_892_; uint64_t v_fold_893_; uint64_t v___x_894_; uint64_t v___x_895_; uint64_t v___x_896_; size_t v___x_897_; size_t v___x_898_; size_t v___x_899_; size_t v___x_900_; size_t v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
v_buckets_888_ = lean_ctor_get(v_m_885_, 1);
v___x_889_ = lean_array_get_size(v_buckets_888_);
v___x_890_ = lean_uint64_of_nat(v_a_886_);
v___x_891_ = 32ULL;
v___x_892_ = lean_uint64_shift_right(v___x_890_, v___x_891_);
v_fold_893_ = lean_uint64_xor(v___x_890_, v___x_892_);
v___x_894_ = 16ULL;
v___x_895_ = lean_uint64_shift_right(v_fold_893_, v___x_894_);
v___x_896_ = lean_uint64_xor(v_fold_893_, v___x_895_);
v___x_897_ = lean_uint64_to_usize(v___x_896_);
v___x_898_ = lean_usize_of_nat(v___x_889_);
v___x_899_ = ((size_t)1ULL);
v___x_900_ = lean_usize_sub(v___x_898_, v___x_899_);
v___x_901_ = lean_usize_land(v___x_897_, v___x_900_);
v___x_902_ = lean_array_uget_borrowed(v_buckets_888_, v___x_901_);
v___x_903_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7___redArg(v_a_886_, v_fallback_887_, v___x_902_);
return v___x_903_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3___redArg___boxed(lean_object* v_m_904_, lean_object* v_a_905_, lean_object* v_fallback_906_){
_start:
{
lean_object* v_res_907_; 
v_res_907_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3___redArg(v_m_904_, v_a_905_, v_fallback_906_);
lean_dec(v_fallback_906_);
lean_dec(v_a_905_);
lean_dec_ref(v_m_904_);
return v_res_907_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6(lean_object* v_as_910_, size_t v_sz_911_, size_t v_i_912_, lean_object* v_b_913_){
_start:
{
lean_object* v_a_916_; uint8_t v___x_920_; 
v___x_920_ = lean_usize_dec_lt(v_i_912_, v_sz_911_);
if (v___x_920_ == 0)
{
lean_object* v___x_921_; 
v___x_921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_921_, 0, v_b_913_);
return v___x_921_;
}
else
{
lean_object* v_a_922_; lean_object* v_fst_923_; lean_object* v_snd_924_; lean_object* v___x_925_; lean_object* v___x_926_; uint8_t v___x_927_; 
v_a_922_ = lean_array_uget_borrowed(v_as_910_, v_i_912_);
v_fst_923_ = lean_ctor_get(v_a_922_, 0);
v_snd_924_ = lean_ctor_get(v_a_922_, 1);
v___x_925_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6___closed__0));
v___x_926_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3___redArg(v_b_913_, v_fst_923_, v___x_925_);
v___x_927_ = l_Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4(v___x_926_, v_snd_924_);
if (v___x_927_ == 0)
{
lean_object* v___x_928_; lean_object* v___x_929_; 
lean_inc(v_snd_924_);
v___x_928_ = lean_array_push(v___x_926_, v_snd_924_);
lean_inc(v_fst_923_);
v___x_929_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5___redArg(v_b_913_, v_fst_923_, v___x_928_);
v_a_916_ = v___x_929_;
goto v___jp_915_;
}
else
{
lean_dec(v___x_926_);
v_a_916_ = v_b_913_;
goto v___jp_915_;
}
}
v___jp_915_:
{
size_t v___x_917_; size_t v___x_918_; 
v___x_917_ = ((size_t)1ULL);
v___x_918_ = lean_usize_add(v_i_912_, v___x_917_);
v_i_912_ = v___x_918_;
v_b_913_ = v_a_916_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6___boxed(lean_object* v_as_930_, lean_object* v_sz_931_, lean_object* v_i_932_, lean_object* v_b_933_, lean_object* v___y_934_){
_start:
{
size_t v_sz_boxed_935_; size_t v_i_boxed_936_; lean_object* v_res_937_; 
v_sz_boxed_935_ = lean_unbox_usize(v_sz_931_);
lean_dec(v_sz_931_);
v_i_boxed_936_ = lean_unbox_usize(v_i_932_);
lean_dec(v_i_932_);
v_res_937_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6(v_as_930_, v_sz_boxed_935_, v_i_boxed_936_, v_b_933_);
lean_dec_ref(v_as_930_);
return v_res_937_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13_spec__23(lean_object* v_s_938_){
_start:
{
lean_object* v___x_940_; lean_object* v_putStr_941_; lean_object* v___x_942_; 
v___x_940_ = lean_get_stdout();
v_putStr_941_ = lean_ctor_get(v___x_940_, 4);
lean_inc_ref(v_putStr_941_);
lean_dec_ref(v___x_940_);
v___x_942_ = lean_apply_2(v_putStr_941_, v_s_938_, lean_box(0));
return v___x_942_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13_spec__23___boxed(lean_object* v_s_943_, lean_object* v___y_944_){
_start:
{
lean_object* v_res_945_; 
v_res_945_ = l_IO_print___at___00IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13_spec__23(v_s_943_);
return v_res_945_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13(lean_object* v_s_946_){
_start:
{
uint32_t v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_948_ = 10;
v___x_949_ = lean_string_push(v_s_946_, v___x_948_);
v___x_950_ = l_IO_print___at___00IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13_spec__23(v___x_949_);
return v___x_950_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13___boxed(lean_object* v_s_951_, lean_object* v___y_952_){
_start:
{
lean_object* v_res_953_; 
v_res_953_ = l_IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13(v_s_951_);
return v_res_953_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___lam__0(uint8_t v___x_954_, lean_object* v_a_955_, lean_object* v_b_956_){
_start:
{
lean_object* v___x_957_; lean_object* v___x_958_; uint8_t v___x_959_; 
v___x_957_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_955_, v___x_954_);
v___x_958_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_b_956_, v___x_954_);
v___x_959_ = lean_string_dec_lt(v___x_957_, v___x_958_);
lean_dec_ref(v___x_958_);
lean_dec_ref(v___x_957_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___lam__0___boxed(lean_object* v___x_960_, lean_object* v_a_961_, lean_object* v_b_962_){
_start:
{
uint8_t v___x_11514__boxed_963_; uint8_t v_res_964_; lean_object* v_r_965_; 
v___x_11514__boxed_963_ = lean_unbox(v___x_960_);
v_res_964_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___lam__0(v___x_11514__boxed_963_, v_a_961_, v_b_962_);
v_r_965_ = lean_box(v_res_964_);
return v_r_965_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20___redArg(lean_object* v___x_966_, lean_object* v___x_967_, lean_object* v_hi_968_, lean_object* v_pivot_969_, lean_object* v_as_970_, lean_object* v_i_971_, lean_object* v_k_972_){
_start:
{
uint8_t v___x_973_; 
v___x_973_ = lean_nat_dec_lt(v_k_972_, v_hi_968_);
if (v___x_973_ == 0)
{
lean_object* v___x_974_; lean_object* v___x_975_; 
lean_dec(v_k_972_);
lean_dec(v_pivot_969_);
v___x_974_ = lean_array_fswap(v_as_970_, v_i_971_, v_hi_968_);
v___x_975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_975_, 0, v_i_971_);
lean_ctor_set(v___x_975_, 1, v___x_974_);
return v___x_975_;
}
else
{
uint8_t v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; uint8_t v___x_980_; 
v___x_976_ = lean_nat_dec_lt(v___x_966_, v___x_967_);
v___x_977_ = lean_array_fget_borrowed(v_as_970_, v_k_972_);
lean_inc(v___x_977_);
v___x_978_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_977_, v___x_976_);
lean_inc(v_pivot_969_);
v___x_979_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_pivot_969_, v___x_976_);
v___x_980_ = lean_string_dec_lt(v___x_978_, v___x_979_);
lean_dec_ref(v___x_979_);
lean_dec_ref(v___x_978_);
if (v___x_980_ == 0)
{
lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_981_ = lean_unsigned_to_nat(1u);
v___x_982_ = lean_nat_add(v_k_972_, v___x_981_);
lean_dec(v_k_972_);
v_k_972_ = v___x_982_;
goto _start;
}
else
{
lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; 
v___x_984_ = lean_array_fswap(v_as_970_, v_i_971_, v_k_972_);
v___x_985_ = lean_unsigned_to_nat(1u);
v___x_986_ = lean_nat_add(v_i_971_, v___x_985_);
lean_dec(v_i_971_);
v___x_987_ = lean_nat_add(v_k_972_, v___x_985_);
lean_dec(v_k_972_);
v_as_970_ = v___x_984_;
v_i_971_ = v___x_986_;
v_k_972_ = v___x_987_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20___redArg___boxed(lean_object* v___x_989_, lean_object* v___x_990_, lean_object* v_hi_991_, lean_object* v_pivot_992_, lean_object* v_as_993_, lean_object* v_i_994_, lean_object* v_k_995_){
_start:
{
lean_object* v_res_996_; 
v_res_996_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20___redArg(v___x_989_, v___x_990_, v_hi_991_, v_pivot_992_, v_as_993_, v_i_994_, v_k_995_);
lean_dec(v_hi_991_);
lean_dec(v___x_990_);
lean_dec(v___x_989_);
return v_res_996_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg(lean_object* v___x_997_, lean_object* v___x_998_, lean_object* v_n_999_, lean_object* v_as_1000_, lean_object* v_lo_1001_, lean_object* v_hi_1002_){
_start:
{
lean_object* v___y_1004_; uint8_t v___x_1014_; 
v___x_1014_ = lean_nat_dec_lt(v_lo_1001_, v_hi_1002_);
if (v___x_1014_ == 0)
{
lean_dec(v_lo_1001_);
return v_as_1000_;
}
else
{
uint8_t v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v_mid_1018_; lean_object* v___y_1020_; lean_object* v___y_1026_; lean_object* v___x_1031_; lean_object* v___x_1032_; uint8_t v___x_1033_; 
v___x_1015_ = lean_nat_dec_lt(v___x_997_, v___x_998_);
v___x_1016_ = lean_nat_add(v_lo_1001_, v_hi_1002_);
v___x_1017_ = lean_unsigned_to_nat(1u);
v_mid_1018_ = lean_nat_shiftr(v___x_1016_, v___x_1017_);
lean_dec(v___x_1016_);
v___x_1031_ = lean_array_fget_borrowed(v_as_1000_, v_mid_1018_);
v___x_1032_ = lean_array_fget_borrowed(v_as_1000_, v_lo_1001_);
lean_inc(v___x_1032_);
lean_inc(v___x_1031_);
v___x_1033_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___lam__0(v___x_1015_, v___x_1031_, v___x_1032_);
if (v___x_1033_ == 0)
{
v___y_1026_ = v_as_1000_;
goto v___jp_1025_;
}
else
{
lean_object* v___x_1034_; 
v___x_1034_ = lean_array_fswap(v_as_1000_, v_lo_1001_, v_mid_1018_);
v___y_1026_ = v___x_1034_;
goto v___jp_1025_;
}
v___jp_1019_:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; uint8_t v___x_1023_; 
v___x_1021_ = lean_array_fget_borrowed(v___y_1020_, v_mid_1018_);
v___x_1022_ = lean_array_fget_borrowed(v___y_1020_, v_hi_1002_);
lean_inc(v___x_1022_);
lean_inc(v___x_1021_);
v___x_1023_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___lam__0(v___x_1015_, v___x_1021_, v___x_1022_);
if (v___x_1023_ == 0)
{
lean_dec(v_mid_1018_);
v___y_1004_ = v___y_1020_;
goto v___jp_1003_;
}
else
{
lean_object* v___x_1024_; 
v___x_1024_ = lean_array_fswap(v___y_1020_, v_mid_1018_, v_hi_1002_);
lean_dec(v_mid_1018_);
v___y_1004_ = v___x_1024_;
goto v___jp_1003_;
}
}
v___jp_1025_:
{
lean_object* v___x_1027_; lean_object* v___x_1028_; uint8_t v___x_1029_; 
v___x_1027_ = lean_array_fget_borrowed(v___y_1026_, v_hi_1002_);
v___x_1028_ = lean_array_fget_borrowed(v___y_1026_, v_lo_1001_);
lean_inc(v___x_1028_);
lean_inc(v___x_1027_);
v___x_1029_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___lam__0(v___x_1015_, v___x_1027_, v___x_1028_);
if (v___x_1029_ == 0)
{
v___y_1020_ = v___y_1026_;
goto v___jp_1019_;
}
else
{
lean_object* v___x_1030_; 
v___x_1030_ = lean_array_fswap(v___y_1026_, v_lo_1001_, v_hi_1002_);
v___y_1020_ = v___x_1030_;
goto v___jp_1019_;
}
}
}
v___jp_1003_:
{
lean_object* v_pivot_1005_; lean_object* v___x_1006_; lean_object* v_fst_1007_; lean_object* v_snd_1008_; uint8_t v___x_1009_; 
v_pivot_1005_ = lean_array_fget(v___y_1004_, v_hi_1002_);
lean_inc_n(v_lo_1001_, 2);
v___x_1006_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20___redArg(v___x_997_, v___x_998_, v_hi_1002_, v_pivot_1005_, v___y_1004_, v_lo_1001_, v_lo_1001_);
v_fst_1007_ = lean_ctor_get(v___x_1006_, 0);
lean_inc(v_fst_1007_);
v_snd_1008_ = lean_ctor_get(v___x_1006_, 1);
lean_inc(v_snd_1008_);
lean_dec_ref(v___x_1006_);
v___x_1009_ = lean_nat_dec_le(v_hi_1002_, v_fst_1007_);
if (v___x_1009_ == 0)
{
lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; 
v___x_1010_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg(v___x_997_, v___x_998_, v_n_999_, v_snd_1008_, v_lo_1001_, v_fst_1007_);
v___x_1011_ = lean_unsigned_to_nat(1u);
v___x_1012_ = lean_nat_add(v_fst_1007_, v___x_1011_);
lean_dec(v_fst_1007_);
v_as_1000_ = v___x_1010_;
v_lo_1001_ = v___x_1012_;
goto _start;
}
else
{
lean_dec(v_fst_1007_);
lean_dec(v_lo_1001_);
return v_snd_1008_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___boxed(lean_object* v___x_1035_, lean_object* v___x_1036_, lean_object* v_n_1037_, lean_object* v_as_1038_, lean_object* v_lo_1039_, lean_object* v_hi_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg(v___x_1035_, v___x_1036_, v_n_1037_, v_as_1038_, v_lo_1039_, v_hi_1040_);
lean_dec(v_hi_1040_);
lean_dec(v_n_1037_);
lean_dec(v___x_1036_);
lean_dec(v___x_1035_);
return v_res_1041_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10(lean_object* v___x_1044_, lean_object* v___x_1045_, lean_object* v___x_1046_, size_t v_sz_1047_, size_t v_i_1048_, lean_object* v_bs_1049_){
_start:
{
uint8_t v___x_1050_; 
v___x_1050_ = lean_usize_dec_lt(v_i_1048_, v_sz_1047_);
if (v___x_1050_ == 0)
{
lean_dec_ref(v___x_1044_);
return v_bs_1049_;
}
else
{
uint8_t v___x_1051_; lean_object* v_v_1052_; lean_object* v___x_1053_; lean_object* v_bs_x27_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; size_t v___x_1063_; size_t v___x_1064_; lean_object* v___x_1065_; 
v___x_1051_ = lean_nat_dec_lt(v___x_1045_, v___x_1046_);
v_v_1052_ = lean_array_uget(v_bs_1049_, v_i_1048_);
v___x_1053_ = lean_unsigned_to_nat(0u);
v_bs_x27_1054_ = lean_array_uset(v_bs_1049_, v_i_1048_, v___x_1053_);
v___x_1055_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___closed__0));
lean_inc_ref(v___x_1044_);
v___x_1056_ = lean_string_append(v___x_1044_, v___x_1055_);
v___x_1057_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_v_1052_, v___x_1051_);
v___x_1058_ = lean_string_append(v___x_1056_, v___x_1057_);
lean_dec_ref(v___x_1057_);
v___x_1059_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___closed__1));
v___x_1060_ = lean_string_append(v___x_1058_, v___x_1059_);
v___x_1061_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordedMarker___closed__0));
v___x_1062_ = lean_string_append(v___x_1060_, v___x_1061_);
v___x_1063_ = ((size_t)1ULL);
v___x_1064_ = lean_usize_add(v_i_1048_, v___x_1063_);
v___x_1065_ = lean_array_uset(v_bs_x27_1054_, v_i_1048_, v___x_1062_);
v_i_1048_ = v___x_1064_;
v_bs_1049_ = v___x_1065_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___boxed(lean_object* v___x_1067_, lean_object* v___x_1068_, lean_object* v___x_1069_, lean_object* v_sz_1070_, lean_object* v_i_1071_, lean_object* v_bs_1072_){
_start:
{
size_t v_sz_boxed_1073_; size_t v_i_boxed_1074_; lean_object* v_res_1075_; 
v_sz_boxed_1073_ = lean_unbox_usize(v_sz_1070_);
lean_dec(v_sz_1070_);
v_i_boxed_1074_ = lean_unbox_usize(v_i_1071_);
lean_dec(v_i_1071_);
v_res_1075_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10(v___x_1067_, v___x_1068_, v___x_1069_, v_sz_boxed_1073_, v_i_boxed_1074_, v_bs_1072_);
lean_dec(v___x_1069_);
lean_dec(v___x_1068_);
return v_res_1075_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__12(lean_object* v_as_1076_, size_t v_sz_1077_, size_t v_i_1078_, lean_object* v_b_1079_){
_start:
{
lean_object* v_a_1082_; uint8_t v___x_1086_; 
v___x_1086_ = lean_usize_dec_lt(v_i_1078_, v_sz_1077_);
if (v___x_1086_ == 0)
{
lean_object* v___x_1087_; 
v___x_1087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1087_, 0, v_b_1079_);
return v___x_1087_;
}
else
{
lean_object* v_a_1088_; lean_object* v_fst_1089_; lean_object* v_snd_1090_; lean_object* v_fst_1091_; lean_object* v_snd_1092_; lean_object* v___x_1094_; uint8_t v_isShared_1095_; uint8_t v_isSharedCheck_1131_; 
v_a_1088_ = lean_array_uget_borrowed(v_as_1076_, v_i_1078_);
v_fst_1089_ = lean_ctor_get(v_a_1088_, 0);
v_snd_1090_ = lean_ctor_get(v_a_1088_, 1);
v_fst_1091_ = lean_ctor_get(v_b_1079_, 0);
v_snd_1092_ = lean_ctor_get(v_b_1079_, 1);
v_isSharedCheck_1131_ = !lean_is_exclusive(v_b_1079_);
if (v_isSharedCheck_1131_ == 0)
{
v___x_1094_ = v_b_1079_;
v_isShared_1095_ = v_isSharedCheck_1131_;
goto v_resetjp_1093_;
}
else
{
lean_inc(v_snd_1092_);
lean_inc(v_fst_1091_);
lean_dec(v_b_1079_);
v___x_1094_ = lean_box(0);
v_isShared_1095_ = v_isSharedCheck_1131_;
goto v_resetjp_1093_;
}
v_resetjp_1093_:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; uint8_t v___x_1099_; 
v___x_1096_ = lean_unsigned_to_nat(1u);
v___x_1097_ = lean_nat_sub(v_fst_1089_, v___x_1096_);
v___x_1098_ = lean_array_get_size(v_fst_1091_);
v___x_1099_ = lean_nat_dec_lt(v___x_1097_, v___x_1098_);
if (v___x_1099_ == 0)
{
lean_object* v___x_1101_; 
lean_dec(v___x_1097_);
if (v_isShared_1095_ == 0)
{
v___x_1101_ = v___x_1094_;
goto v_reusejp_1100_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v_fst_1091_);
lean_ctor_set(v_reuseFailAlloc_1102_, 1, v_snd_1092_);
v___x_1101_ = v_reuseFailAlloc_1102_;
goto v_reusejp_1100_;
}
v_reusejp_1100_:
{
v_a_1082_ = v___x_1101_;
goto v___jp_1081_;
}
}
else
{
lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___y_1107_; lean_object* v___x_1120_; lean_object* v___y_1122_; lean_object* v___y_1123_; uint8_t v___x_1125_; 
v___x_1103_ = lean_unsigned_to_nat(0u);
v___x_1104_ = lean_array_fget_borrowed(v_fst_1091_, v___x_1097_);
v___x_1105_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace(v___x_1104_);
v___x_1120_ = lean_array_get_size(v_snd_1090_);
v___x_1125_ = lean_nat_dec_eq(v___x_1120_, v___x_1103_);
if (v___x_1125_ == 0)
{
lean_object* v___x_1126_; lean_object* v___y_1128_; uint8_t v___x_1130_; 
v___x_1126_ = lean_nat_sub(v___x_1120_, v___x_1096_);
v___x_1130_ = lean_nat_dec_le(v___x_1103_, v___x_1126_);
if (v___x_1130_ == 0)
{
lean_inc(v___x_1126_);
v___y_1128_ = v___x_1126_;
goto v___jp_1127_;
}
else
{
v___y_1128_ = v___x_1103_;
goto v___jp_1127_;
}
v___jp_1127_:
{
uint8_t v___x_1129_; 
v___x_1129_ = lean_nat_dec_le(v___y_1128_, v___x_1126_);
if (v___x_1129_ == 0)
{
lean_dec(v___x_1126_);
lean_inc(v___y_1128_);
v___y_1122_ = v___y_1128_;
v___y_1123_ = v___y_1128_;
goto v___jp_1121_;
}
else
{
v___y_1122_ = v___y_1128_;
v___y_1123_ = v___x_1126_;
goto v___jp_1121_;
}
}
}
else
{
lean_inc(v_snd_1090_);
v___y_1107_ = v_snd_1090_;
goto v___jp_1106_;
}
v___jp_1106_:
{
size_t v_sz_1108_; size_t v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1118_; 
v_sz_1108_ = lean_array_size(v___y_1107_);
v___x_1109_ = ((size_t)0ULL);
v___x_1110_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10(v___x_1105_, v___x_1097_, v___x_1098_, v_sz_1108_, v___x_1109_, v___y_1107_);
lean_inc(v___x_1097_);
v___x_1111_ = l_Array_extract___redArg(v_fst_1091_, v___x_1103_, v___x_1097_);
v___x_1112_ = l_Array_append___redArg(v___x_1111_, v___x_1110_);
v___x_1113_ = l_Array_extract___redArg(v_fst_1091_, v___x_1097_, v___x_1098_);
lean_dec(v_fst_1091_);
v___x_1114_ = l_Array_append___redArg(v___x_1112_, v___x_1113_);
lean_dec_ref(v___x_1113_);
v___x_1115_ = lean_array_get_size(v___x_1110_);
lean_dec_ref(v___x_1110_);
v___x_1116_ = lean_nat_add(v_snd_1092_, v___x_1115_);
lean_dec(v_snd_1092_);
if (v_isShared_1095_ == 0)
{
lean_ctor_set(v___x_1094_, 1, v___x_1116_);
lean_ctor_set(v___x_1094_, 0, v___x_1114_);
v___x_1118_ = v___x_1094_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v___x_1114_);
lean_ctor_set(v_reuseFailAlloc_1119_, 1, v___x_1116_);
v___x_1118_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
v_a_1082_ = v___x_1118_;
goto v___jp_1081_;
}
}
v___jp_1121_:
{
lean_object* v___x_1124_; 
lean_inc(v_snd_1090_);
v___x_1124_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg(v___x_1097_, v___x_1098_, v___x_1120_, v_snd_1090_, v___y_1122_, v___y_1123_);
lean_dec(v___y_1123_);
v___y_1107_ = v___x_1124_;
goto v___jp_1106_;
}
}
}
}
v___jp_1081_:
{
size_t v___x_1083_; size_t v___x_1084_; 
v___x_1083_ = ((size_t)1ULL);
v___x_1084_ = lean_usize_add(v_i_1078_, v___x_1083_);
v_i_1078_ = v___x_1084_;
v_b_1079_ = v_a_1082_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__12___boxed(lean_object* v_as_1132_, lean_object* v_sz_1133_, lean_object* v_i_1134_, lean_object* v_b_1135_, lean_object* v___y_1136_){
_start:
{
size_t v_sz_boxed_1137_; size_t v_i_boxed_1138_; lean_object* v_res_1139_; 
v_sz_boxed_1137_ = lean_unbox_usize(v_sz_1133_);
lean_dec(v_sz_1133_);
v_i_boxed_1138_ = lean_unbox_usize(v_i_1134_);
lean_dec(v_i_1134_);
v_res_1139_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__12(v_as_1132_, v_sz_boxed_1137_, v_i_boxed_1138_, v_b_1135_);
lean_dec_ref(v_as_1132_);
return v_res_1139_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__2(void){
_start:
{
lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; 
v___x_1142_ = lean_box(0);
v___x_1143_ = lean_unsigned_to_nat(16u);
v___x_1144_ = lean_mk_array(v___x_1143_, v___x_1142_);
return v___x_1144_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__3(void){
_start:
{
lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; 
v___x_1145_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__2);
v___x_1146_ = lean_unsigned_to_nat(0u);
v___x_1147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1146_);
lean_ctor_set(v___x_1147_, 1, v___x_1145_);
return v___x_1147_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18(lean_object* v_as_1156_, size_t v_sz_1157_, size_t v_i_1158_, lean_object* v_b_1159_){
_start:
{
lean_object* v_a_1162_; uint8_t v___x_1166_; 
v___x_1166_ = lean_usize_dec_lt(v_i_1158_, v_sz_1157_);
if (v___x_1166_ == 0)
{
lean_object* v___x_1167_; 
v___x_1167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1167_, 0, v_b_1159_);
return v___x_1167_;
}
else
{
lean_object* v_a_1168_; lean_object* v_snd_1169_; lean_object* v_fst_1170_; lean_object* v_snd_1171_; lean_object* v___x_1173_; uint8_t v_isShared_1174_; uint8_t v_isSharedCheck_1278_; 
v_a_1168_ = lean_array_uget_borrowed(v_as_1156_, v_i_1158_);
v_snd_1169_ = lean_ctor_get(v_a_1168_, 1);
lean_inc(v_snd_1169_);
v_fst_1170_ = lean_ctor_get(v_snd_1169_, 0);
v_snd_1171_ = lean_ctor_get(v_snd_1169_, 1);
v_isSharedCheck_1278_ = !lean_is_exclusive(v_snd_1169_);
if (v_isSharedCheck_1278_ == 0)
{
v___x_1173_ = v_snd_1169_;
v_isShared_1174_ = v_isSharedCheck_1278_;
goto v_resetjp_1172_;
}
else
{
lean_inc(v_snd_1171_);
lean_inc(v_fst_1170_);
lean_dec(v_snd_1169_);
v___x_1173_ = lean_box(0);
v_isShared_1174_ = v_isSharedCheck_1278_;
goto v_resetjp_1172_;
}
v_resetjp_1172_:
{
lean_object* v___x_1175_; lean_object* v___y_1177_; lean_object* v___y_1178_; lean_object* v___y_1179_; lean_object* v___x_1189_; lean_object* v___x_1190_; size_t v_sz_1191_; size_t v___x_1192_; lean_object* v___x_1193_; 
v___x_1175_ = lean_box(0);
v___x_1189_ = lean_unsigned_to_nat(0u);
v___x_1190_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__3);
v_sz_1191_ = lean_array_size(v_snd_1171_);
v___x_1192_ = ((size_t)0ULL);
v___x_1193_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6(v_snd_1171_, v_sz_1191_, v___x_1192_, v___x_1190_);
if (lean_obj_tag(v___x_1193_) == 0)
{
lean_object* v_a_1194_; lean_object* v___x_1195_; 
v_a_1194_ = lean_ctor_get(v___x_1193_, 0);
lean_inc(v_a_1194_);
lean_dec_ref_known(v___x_1193_, 1);
v___x_1195_ = l_IO_FS_readFile(v_fst_1170_);
if (lean_obj_tag(v___x_1195_) == 0)
{
lean_object* v_a_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v_size_1199_; lean_object* v_buckets_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; size_t v_sz_1204_; lean_object* v___x_1205_; lean_object* v___y_1207_; lean_object* v___y_1208_; lean_object* v___y_1235_; lean_object* v___y_1236_; lean_object* v___y_1237_; lean_object* v___y_1238_; lean_object* v___y_1239_; lean_object* v___y_1242_; lean_object* v___y_1243_; lean_object* v___y_1244_; lean_object* v___y_1245_; lean_object* v___y_1246_; lean_object* v___y_1249_; lean_object* v___x_1255_; lean_object* v___x_1256_; uint8_t v___x_1257_; 
lean_dec(v_snd_1171_);
v_a_1196_ = lean_ctor_get(v___x_1195_, 0);
lean_inc_n(v_a_1196_, 2);
lean_dec_ref_known(v___x_1195_, 1);
v___x_1197_ = lean_string_utf8_byte_size(v_a_1196_);
v___x_1198_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1198_, 0, v_a_1196_);
lean_ctor_set(v___x_1198_, 1, v___x_1189_);
lean_ctor_set(v___x_1198_, 2, v___x_1197_);
v_size_1199_ = lean_ctor_get(v_a_1194_, 0);
lean_inc(v_size_1199_);
v_buckets_1200_ = lean_ctor_get(v_a_1194_, 1);
lean_inc_ref(v_buckets_1200_);
lean_dec(v_a_1194_);
v___x_1201_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___closed__0);
v___x_1202_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__4));
v___x_1203_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8___redArg(v_a_1196_, v___x_1198_, v___x_1197_, v___x_1201_, v___x_1202_);
lean_dec_ref_known(v___x_1198_, 3);
v_sz_1204_ = lean_array_size(v___x_1203_);
v___x_1205_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__9(v_sz_1204_, v___x_1192_, v___x_1203_);
v___x_1255_ = lean_mk_empty_array_with_capacity(v_size_1199_);
lean_dec(v_size_1199_);
v___x_1256_ = lean_array_get_size(v_buckets_1200_);
v___x_1257_ = lean_nat_dec_lt(v___x_1189_, v___x_1256_);
if (v___x_1257_ == 0)
{
lean_dec_ref(v_buckets_1200_);
v___y_1249_ = v___x_1255_;
goto v___jp_1248_;
}
else
{
size_t v___x_1258_; lean_object* v___x_1259_; 
v___x_1258_ = lean_usize_of_nat(v___x_1256_);
v___x_1259_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__16(v_buckets_1200_, v___x_1192_, v___x_1258_, v___x_1255_);
lean_dec_ref(v_buckets_1200_);
v___y_1249_ = v___x_1259_;
goto v___jp_1248_;
}
v___jp_1206_:
{
lean_object* v___x_1210_; 
if (v_isShared_1174_ == 0)
{
lean_ctor_set(v___x_1173_, 1, v___x_1189_);
lean_ctor_set(v___x_1173_, 0, v___x_1205_);
v___x_1210_ = v___x_1173_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v___x_1205_);
lean_ctor_set(v_reuseFailAlloc_1233_, 1, v___x_1189_);
v___x_1210_ = v_reuseFailAlloc_1233_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
size_t v_sz_1211_; lean_object* v___x_1212_; 
v_sz_1211_ = lean_array_size(v___y_1208_);
v___x_1212_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__12(v___y_1208_, v_sz_1211_, v___x_1192_, v___x_1210_);
lean_dec_ref(v___y_1208_);
if (lean_obj_tag(v___x_1212_) == 0)
{
lean_object* v_a_1213_; lean_object* v_fst_1214_; lean_object* v_snd_1215_; uint8_t v___x_1216_; 
v_a_1213_ = lean_ctor_get(v___x_1212_, 0);
lean_inc(v_a_1213_);
lean_dec_ref_known(v___x_1212_, 1);
v_fst_1214_ = lean_ctor_get(v_a_1213_, 0);
lean_inc(v_fst_1214_);
v_snd_1215_ = lean_ctor_get(v_a_1213_, 1);
lean_inc(v_snd_1215_);
lean_dec(v_a_1213_);
v___x_1216_ = lean_nat_dec_lt(v___x_1189_, v_snd_1215_);
if (v___x_1216_ == 0)
{
lean_dec(v_snd_1215_);
lean_dec(v_fst_1214_);
lean_dec(v_fst_1170_);
v_a_1162_ = v___x_1175_;
goto v___jp_1161_;
}
else
{
lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; uint8_t v___x_1222_; 
v___x_1217_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__5));
lean_inc(v_snd_1215_);
v___x_1218_ = l_Nat_reprFast(v_snd_1215_);
v___x_1219_ = lean_string_append(v___x_1217_, v___x_1218_);
lean_dec_ref(v___x_1218_);
v___x_1220_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__6));
v___x_1221_ = lean_string_append(v___x_1219_, v___x_1220_);
v___x_1222_ = lean_nat_dec_eq(v_snd_1215_, v___y_1207_);
lean_dec(v_snd_1215_);
if (v___x_1222_ == 0)
{
lean_object* v___x_1223_; 
v___x_1223_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__7));
v___y_1177_ = v_fst_1214_;
v___y_1178_ = v___x_1221_;
v___y_1179_ = v___x_1223_;
goto v___jp_1176_;
}
else
{
lean_object* v___x_1224_; 
v___x_1224_ = ((lean_object*)(l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__0));
v___y_1177_ = v_fst_1214_;
v___y_1178_ = v___x_1221_;
v___y_1179_ = v___x_1224_;
goto v___jp_1176_;
}
}
}
else
{
lean_object* v_a_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1232_; 
lean_dec(v_fst_1170_);
v_a_1225_ = lean_ctor_get(v___x_1212_, 0);
v_isSharedCheck_1232_ = !lean_is_exclusive(v___x_1212_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1227_ = v___x_1212_;
v_isShared_1228_ = v_isSharedCheck_1232_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_a_1225_);
lean_dec(v___x_1212_);
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
v___jp_1234_:
{
lean_object* v___x_1240_; 
v___x_1240_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg(v___y_1238_, v___y_1235_, v___y_1237_, v___y_1239_);
lean_dec(v___y_1239_);
lean_dec(v___y_1238_);
v___y_1207_ = v___y_1236_;
v___y_1208_ = v___x_1240_;
goto v___jp_1206_;
}
v___jp_1241_:
{
uint8_t v___x_1247_; 
v___x_1247_ = lean_nat_dec_le(v___y_1246_, v___y_1242_);
if (v___x_1247_ == 0)
{
lean_dec(v___y_1242_);
lean_inc(v___y_1246_);
v___y_1235_ = v___y_1243_;
v___y_1236_ = v___y_1244_;
v___y_1237_ = v___y_1246_;
v___y_1238_ = v___y_1245_;
v___y_1239_ = v___y_1246_;
goto v___jp_1234_;
}
else
{
v___y_1235_ = v___y_1243_;
v___y_1236_ = v___y_1244_;
v___y_1237_ = v___y_1246_;
v___y_1238_ = v___y_1245_;
v___y_1239_ = v___y_1242_;
goto v___jp_1234_;
}
}
v___jp_1248_:
{
lean_object* v___x_1250_; lean_object* v___x_1251_; uint8_t v___x_1252_; 
v___x_1250_ = lean_unsigned_to_nat(1u);
v___x_1251_ = lean_array_get_size(v___y_1249_);
v___x_1252_ = lean_nat_dec_eq(v___x_1251_, v___x_1189_);
if (v___x_1252_ == 0)
{
lean_object* v___x_1253_; uint8_t v___x_1254_; 
v___x_1253_ = lean_nat_sub(v___x_1251_, v___x_1250_);
v___x_1254_ = lean_nat_dec_le(v___x_1189_, v___x_1253_);
if (v___x_1254_ == 0)
{
lean_inc(v___x_1253_);
v___y_1242_ = v___x_1253_;
v___y_1243_ = v___y_1249_;
v___y_1244_ = v___x_1250_;
v___y_1245_ = v___x_1251_;
v___y_1246_ = v___x_1253_;
goto v___jp_1241_;
}
else
{
v___y_1242_ = v___x_1253_;
v___y_1243_ = v___y_1249_;
v___y_1244_ = v___x_1250_;
v___y_1245_ = v___x_1251_;
v___y_1246_ = v___x_1189_;
goto v___jp_1241_;
}
}
else
{
v___y_1207_ = v___x_1250_;
v___y_1208_ = v___y_1249_;
goto v___jp_1206_;
}
}
}
else
{
lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; 
lean_dec_ref_known(v___x_1195_, 1);
lean_dec(v_a_1194_);
lean_del_object(v___x_1173_);
v___x_1260_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__8));
v___x_1261_ = lean_string_append(v___x_1260_, v_fst_1170_);
lean_dec(v_fst_1170_);
v___x_1262_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__9));
v___x_1263_ = lean_string_append(v___x_1261_, v___x_1262_);
v___x_1264_ = lean_array_get_size(v_snd_1171_);
lean_dec(v_snd_1171_);
v___x_1265_ = l_Nat_reprFast(v___x_1264_);
v___x_1266_ = lean_string_append(v___x_1263_, v___x_1265_);
lean_dec_ref(v___x_1265_);
v___x_1267_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__10));
v___x_1268_ = lean_string_append(v___x_1266_, v___x_1267_);
v___x_1269_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v___x_1268_);
if (lean_obj_tag(v___x_1269_) == 0)
{
lean_dec_ref_known(v___x_1269_, 1);
v_a_1162_ = v___x_1175_;
goto v___jp_1161_;
}
else
{
return v___x_1269_;
}
}
}
else
{
lean_object* v_a_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1277_; 
lean_del_object(v___x_1173_);
lean_dec(v_snd_1171_);
lean_dec(v_fst_1170_);
v_a_1270_ = lean_ctor_get(v___x_1193_, 0);
v_isSharedCheck_1277_ = !lean_is_exclusive(v___x_1193_);
if (v_isSharedCheck_1277_ == 0)
{
v___x_1272_ = v___x_1193_;
v_isShared_1273_ = v_isSharedCheck_1277_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_a_1270_);
lean_dec(v___x_1193_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1277_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
lean_object* v___x_1275_; 
if (v_isShared_1273_ == 0)
{
v___x_1275_ = v___x_1272_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v_a_1270_);
v___x_1275_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
return v___x_1275_;
}
}
}
v___jp_1176_:
{
lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; 
v___x_1180_ = lean_string_append(v___y_1178_, v___y_1179_);
v___x_1181_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__0));
v___x_1182_ = lean_string_append(v___x_1180_, v___x_1181_);
v___x_1183_ = lean_string_append(v___x_1182_, v_fst_1170_);
v___x_1184_ = l_IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13(v___x_1183_);
if (lean_obj_tag(v___x_1184_) == 0)
{
lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; 
lean_dec_ref_known(v___x_1184_, 1);
v___x_1185_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__1));
v___x_1186_ = lean_array_to_list(v___y_1177_);
v___x_1187_ = l_String_intercalate(v___x_1185_, v___x_1186_);
v___x_1188_ = l_IO_FS_writeFile(v_fst_1170_, v___x_1187_);
lean_dec_ref(v___x_1187_);
lean_dec(v_fst_1170_);
if (lean_obj_tag(v___x_1188_) == 0)
{
lean_dec_ref_known(v___x_1188_, 1);
v_a_1162_ = v___x_1175_;
goto v___jp_1161_;
}
else
{
return v___x_1188_;
}
}
else
{
lean_dec(v___y_1177_);
lean_dec(v_fst_1170_);
return v___x_1184_;
}
}
}
}
v___jp_1161_:
{
size_t v___x_1163_; size_t v___x_1164_; 
v___x_1163_ = ((size_t)1ULL);
v___x_1164_ = lean_usize_add(v_i_1158_, v___x_1163_);
v_i_1158_ = v___x_1164_;
v_b_1159_ = v_a_1162_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___boxed(lean_object* v_as_1279_, lean_object* v_sz_1280_, lean_object* v_i_1281_, lean_object* v_b_1282_, lean_object* v___y_1283_){
_start:
{
size_t v_sz_boxed_1284_; size_t v_i_boxed_1285_; lean_object* v_res_1286_; 
v_sz_boxed_1284_ = lean_unbox_usize(v_sz_1280_);
lean_dec(v_sz_1280_);
v_i_boxed_1285_ = lean_unbox_usize(v_i_1281_);
lean_dec(v_i_1281_);
v_res_1286_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18(v_as_1279_, v_sz_boxed_1284_, v_i_boxed_1285_, v_b_1282_);
lean_dec_ref(v_as_1279_);
return v_res_1286_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2___redArg(lean_object* v_a_1287_, lean_object* v_x_1288_){
_start:
{
if (lean_obj_tag(v_x_1288_) == 0)
{
uint8_t v___x_1289_; 
v___x_1289_ = 0;
return v___x_1289_;
}
else
{
lean_object* v_key_1290_; lean_object* v_tail_1291_; uint8_t v___x_1292_; 
v_key_1290_ = lean_ctor_get(v_x_1288_, 0);
v_tail_1291_ = lean_ctor_get(v_x_1288_, 2);
v___x_1292_ = lean_string_dec_eq(v_key_1290_, v_a_1287_);
if (v___x_1292_ == 0)
{
v_x_1288_ = v_tail_1291_;
goto _start;
}
else
{
return v___x_1292_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2___redArg___boxed(lean_object* v_a_1294_, lean_object* v_x_1295_){
_start:
{
uint8_t v_res_1296_; lean_object* v_r_1297_; 
v_res_1296_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2___redArg(v_a_1294_, v_x_1295_);
lean_dec(v_x_1295_);
lean_dec_ref(v_a_1294_);
v_r_1297_ = lean_box(v_res_1296_);
return v_r_1297_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__4___redArg(lean_object* v_a_1298_, lean_object* v_b_1299_, lean_object* v_x_1300_){
_start:
{
if (lean_obj_tag(v_x_1300_) == 0)
{
lean_dec(v_b_1299_);
lean_dec_ref(v_a_1298_);
return v_x_1300_;
}
else
{
lean_object* v_key_1301_; lean_object* v_value_1302_; lean_object* v_tail_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1315_; 
v_key_1301_ = lean_ctor_get(v_x_1300_, 0);
v_value_1302_ = lean_ctor_get(v_x_1300_, 1);
v_tail_1303_ = lean_ctor_get(v_x_1300_, 2);
v_isSharedCheck_1315_ = !lean_is_exclusive(v_x_1300_);
if (v_isSharedCheck_1315_ == 0)
{
v___x_1305_ = v_x_1300_;
v_isShared_1306_ = v_isSharedCheck_1315_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_tail_1303_);
lean_inc(v_value_1302_);
lean_inc(v_key_1301_);
lean_dec(v_x_1300_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1315_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
uint8_t v___x_1307_; 
v___x_1307_ = lean_string_dec_eq(v_key_1301_, v_a_1298_);
if (v___x_1307_ == 0)
{
lean_object* v___x_1308_; lean_object* v___x_1310_; 
v___x_1308_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__4___redArg(v_a_1298_, v_b_1299_, v_tail_1303_);
if (v_isShared_1306_ == 0)
{
lean_ctor_set(v___x_1305_, 2, v___x_1308_);
v___x_1310_ = v___x_1305_;
goto v_reusejp_1309_;
}
else
{
lean_object* v_reuseFailAlloc_1311_; 
v_reuseFailAlloc_1311_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1311_, 0, v_key_1301_);
lean_ctor_set(v_reuseFailAlloc_1311_, 1, v_value_1302_);
lean_ctor_set(v_reuseFailAlloc_1311_, 2, v___x_1308_);
v___x_1310_ = v_reuseFailAlloc_1311_;
goto v_reusejp_1309_;
}
v_reusejp_1309_:
{
return v___x_1310_;
}
}
else
{
lean_object* v___x_1313_; 
lean_dec(v_value_1302_);
lean_dec(v_key_1301_);
if (v_isShared_1306_ == 0)
{
lean_ctor_set(v___x_1305_, 1, v_b_1299_);
lean_ctor_set(v___x_1305_, 0, v_a_1298_);
v___x_1313_ = v___x_1305_;
goto v_reusejp_1312_;
}
else
{
lean_object* v_reuseFailAlloc_1314_; 
v_reuseFailAlloc_1314_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1314_, 0, v_a_1298_);
lean_ctor_set(v_reuseFailAlloc_1314_, 1, v_b_1299_);
lean_ctor_set(v_reuseFailAlloc_1314_, 2, v_tail_1303_);
v___x_1313_ = v_reuseFailAlloc_1314_;
goto v_reusejp_1312_;
}
v_reusejp_1312_:
{
return v___x_1313_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5_spec__26___redArg(lean_object* v_x_1316_, lean_object* v_x_1317_){
_start:
{
if (lean_obj_tag(v_x_1317_) == 0)
{
return v_x_1316_;
}
else
{
lean_object* v_key_1318_; lean_object* v_value_1319_; lean_object* v_tail_1320_; lean_object* v___x_1322_; uint8_t v_isShared_1323_; uint8_t v_isSharedCheck_1343_; 
v_key_1318_ = lean_ctor_get(v_x_1317_, 0);
v_value_1319_ = lean_ctor_get(v_x_1317_, 1);
v_tail_1320_ = lean_ctor_get(v_x_1317_, 2);
v_isSharedCheck_1343_ = !lean_is_exclusive(v_x_1317_);
if (v_isSharedCheck_1343_ == 0)
{
v___x_1322_ = v_x_1317_;
v_isShared_1323_ = v_isSharedCheck_1343_;
goto v_resetjp_1321_;
}
else
{
lean_inc(v_tail_1320_);
lean_inc(v_value_1319_);
lean_inc(v_key_1318_);
lean_dec(v_x_1317_);
v___x_1322_ = lean_box(0);
v_isShared_1323_ = v_isSharedCheck_1343_;
goto v_resetjp_1321_;
}
v_resetjp_1321_:
{
lean_object* v___x_1324_; uint64_t v___x_1325_; uint64_t v___x_1326_; uint64_t v___x_1327_; uint64_t v_fold_1328_; uint64_t v___x_1329_; uint64_t v___x_1330_; uint64_t v___x_1331_; size_t v___x_1332_; size_t v___x_1333_; size_t v___x_1334_; size_t v___x_1335_; size_t v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1339_; 
v___x_1324_ = lean_array_get_size(v_x_1316_);
v___x_1325_ = lean_string_hash(v_key_1318_);
v___x_1326_ = 32ULL;
v___x_1327_ = lean_uint64_shift_right(v___x_1325_, v___x_1326_);
v_fold_1328_ = lean_uint64_xor(v___x_1325_, v___x_1327_);
v___x_1329_ = 16ULL;
v___x_1330_ = lean_uint64_shift_right(v_fold_1328_, v___x_1329_);
v___x_1331_ = lean_uint64_xor(v_fold_1328_, v___x_1330_);
v___x_1332_ = lean_uint64_to_usize(v___x_1331_);
v___x_1333_ = lean_usize_of_nat(v___x_1324_);
v___x_1334_ = ((size_t)1ULL);
v___x_1335_ = lean_usize_sub(v___x_1333_, v___x_1334_);
v___x_1336_ = lean_usize_land(v___x_1332_, v___x_1335_);
v___x_1337_ = lean_array_uget_borrowed(v_x_1316_, v___x_1336_);
lean_inc(v___x_1337_);
if (v_isShared_1323_ == 0)
{
lean_ctor_set(v___x_1322_, 2, v___x_1337_);
v___x_1339_ = v___x_1322_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1342_; 
v_reuseFailAlloc_1342_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1342_, 0, v_key_1318_);
lean_ctor_set(v_reuseFailAlloc_1342_, 1, v_value_1319_);
lean_ctor_set(v_reuseFailAlloc_1342_, 2, v___x_1337_);
v___x_1339_ = v_reuseFailAlloc_1342_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
lean_object* v___x_1340_; 
v___x_1340_ = lean_array_uset(v_x_1316_, v___x_1336_, v___x_1339_);
v_x_1316_ = v___x_1340_;
v_x_1317_ = v_tail_1320_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5___redArg(lean_object* v_i_1344_, lean_object* v_source_1345_, lean_object* v_target_1346_){
_start:
{
lean_object* v___x_1347_; uint8_t v___x_1348_; 
v___x_1347_ = lean_array_get_size(v_source_1345_);
v___x_1348_ = lean_nat_dec_lt(v_i_1344_, v___x_1347_);
if (v___x_1348_ == 0)
{
lean_dec_ref(v_source_1345_);
lean_dec(v_i_1344_);
return v_target_1346_;
}
else
{
lean_object* v_es_1349_; lean_object* v___x_1350_; lean_object* v_source_1351_; lean_object* v_target_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; 
v_es_1349_ = lean_array_fget(v_source_1345_, v_i_1344_);
v___x_1350_ = lean_box(0);
v_source_1351_ = lean_array_fset(v_source_1345_, v_i_1344_, v___x_1350_);
v_target_1352_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5_spec__26___redArg(v_target_1346_, v_es_1349_);
v___x_1353_ = lean_unsigned_to_nat(1u);
v___x_1354_ = lean_nat_add(v_i_1344_, v___x_1353_);
lean_dec(v_i_1344_);
v_i_1344_ = v___x_1354_;
v_source_1345_ = v_source_1351_;
v_target_1346_ = v_target_1352_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3___redArg(lean_object* v_data_1356_){
_start:
{
lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v_nbuckets_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; 
v___x_1357_ = lean_array_get_size(v_data_1356_);
v___x_1358_ = lean_unsigned_to_nat(2u);
v_nbuckets_1359_ = lean_nat_mul(v___x_1357_, v___x_1358_);
v___x_1360_ = lean_unsigned_to_nat(0u);
v___x_1361_ = lean_box(0);
v___x_1362_ = lean_mk_array(v_nbuckets_1359_, v___x_1361_);
v___x_1363_ = lean_array_propagate_mark(v_data_1356_, v___x_1362_);
v___x_1364_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5___redArg(v___x_1360_, v_data_1356_, v___x_1363_);
return v___x_1364_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1___redArg(lean_object* v_m_1365_, lean_object* v_a_1366_, lean_object* v_b_1367_){
_start:
{
lean_object* v_size_1368_; lean_object* v_buckets_1369_; lean_object* v___x_1371_; uint8_t v_isShared_1372_; uint8_t v_isSharedCheck_1412_; 
v_size_1368_ = lean_ctor_get(v_m_1365_, 0);
v_buckets_1369_ = lean_ctor_get(v_m_1365_, 1);
v_isSharedCheck_1412_ = !lean_is_exclusive(v_m_1365_);
if (v_isSharedCheck_1412_ == 0)
{
v___x_1371_ = v_m_1365_;
v_isShared_1372_ = v_isSharedCheck_1412_;
goto v_resetjp_1370_;
}
else
{
lean_inc(v_buckets_1369_);
lean_inc(v_size_1368_);
lean_dec(v_m_1365_);
v___x_1371_ = lean_box(0);
v_isShared_1372_ = v_isSharedCheck_1412_;
goto v_resetjp_1370_;
}
v_resetjp_1370_:
{
lean_object* v___x_1373_; uint64_t v___x_1374_; uint64_t v___x_1375_; uint64_t v___x_1376_; uint64_t v_fold_1377_; uint64_t v___x_1378_; uint64_t v___x_1379_; uint64_t v___x_1380_; size_t v___x_1381_; size_t v___x_1382_; size_t v___x_1383_; size_t v___x_1384_; size_t v___x_1385_; lean_object* v_bkt_1386_; uint8_t v___x_1387_; 
v___x_1373_ = lean_array_get_size(v_buckets_1369_);
v___x_1374_ = lean_string_hash(v_a_1366_);
v___x_1375_ = 32ULL;
v___x_1376_ = lean_uint64_shift_right(v___x_1374_, v___x_1375_);
v_fold_1377_ = lean_uint64_xor(v___x_1374_, v___x_1376_);
v___x_1378_ = 16ULL;
v___x_1379_ = lean_uint64_shift_right(v_fold_1377_, v___x_1378_);
v___x_1380_ = lean_uint64_xor(v_fold_1377_, v___x_1379_);
v___x_1381_ = lean_uint64_to_usize(v___x_1380_);
v___x_1382_ = lean_usize_of_nat(v___x_1373_);
v___x_1383_ = ((size_t)1ULL);
v___x_1384_ = lean_usize_sub(v___x_1382_, v___x_1383_);
v___x_1385_ = lean_usize_land(v___x_1381_, v___x_1384_);
v_bkt_1386_ = lean_array_uget_borrowed(v_buckets_1369_, v___x_1385_);
v___x_1387_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2___redArg(v_a_1366_, v_bkt_1386_);
if (v___x_1387_ == 0)
{
lean_object* v___x_1388_; lean_object* v_size_x27_1389_; lean_object* v___x_1390_; lean_object* v_buckets_x27_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; uint8_t v___x_1397_; 
v___x_1388_ = lean_unsigned_to_nat(1u);
v_size_x27_1389_ = lean_nat_add(v_size_1368_, v___x_1388_);
lean_dec(v_size_1368_);
lean_inc(v_bkt_1386_);
v___x_1390_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1390_, 0, v_a_1366_);
lean_ctor_set(v___x_1390_, 1, v_b_1367_);
lean_ctor_set(v___x_1390_, 2, v_bkt_1386_);
v_buckets_x27_1391_ = lean_array_uset(v_buckets_1369_, v___x_1385_, v___x_1390_);
v___x_1392_ = lean_unsigned_to_nat(4u);
v___x_1393_ = lean_nat_mul(v_size_x27_1389_, v___x_1392_);
v___x_1394_ = lean_unsigned_to_nat(3u);
v___x_1395_ = lean_nat_div(v___x_1393_, v___x_1394_);
lean_dec(v___x_1393_);
v___x_1396_ = lean_array_get_size(v_buckets_x27_1391_);
v___x_1397_ = lean_nat_dec_le(v___x_1395_, v___x_1396_);
lean_dec(v___x_1395_);
if (v___x_1397_ == 0)
{
lean_object* v_val_1398_; lean_object* v___x_1400_; 
v_val_1398_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3___redArg(v_buckets_x27_1391_);
if (v_isShared_1372_ == 0)
{
lean_ctor_set(v___x_1371_, 1, v_val_1398_);
lean_ctor_set(v___x_1371_, 0, v_size_x27_1389_);
v___x_1400_ = v___x_1371_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1401_; 
v_reuseFailAlloc_1401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1401_, 0, v_size_x27_1389_);
lean_ctor_set(v_reuseFailAlloc_1401_, 1, v_val_1398_);
v___x_1400_ = v_reuseFailAlloc_1401_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
return v___x_1400_;
}
}
else
{
lean_object* v___x_1403_; 
if (v_isShared_1372_ == 0)
{
lean_ctor_set(v___x_1371_, 1, v_buckets_x27_1391_);
lean_ctor_set(v___x_1371_, 0, v_size_x27_1389_);
v___x_1403_ = v___x_1371_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v_size_x27_1389_);
lean_ctor_set(v_reuseFailAlloc_1404_, 1, v_buckets_x27_1391_);
v___x_1403_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
return v___x_1403_;
}
}
}
else
{
lean_object* v___x_1405_; lean_object* v_buckets_x27_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1410_; 
lean_inc(v_bkt_1386_);
v___x_1405_ = lean_box(0);
v_buckets_x27_1406_ = lean_array_uset(v_buckets_1369_, v___x_1385_, v___x_1405_);
v___x_1407_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__4___redArg(v_a_1366_, v_b_1367_, v_bkt_1386_);
v___x_1408_ = lean_array_uset(v_buckets_x27_1406_, v___x_1385_, v___x_1407_);
if (v_isShared_1372_ == 0)
{
lean_ctor_set(v___x_1371_, 1, v___x_1408_);
v___x_1410_ = v___x_1371_;
goto v_reusejp_1409_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v_size_1368_);
lean_ctor_set(v_reuseFailAlloc_1411_, 1, v___x_1408_);
v___x_1410_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1409_;
}
v_reusejp_1409_:
{
return v___x_1410_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0___redArg(lean_object* v_a_1413_, lean_object* v_fallback_1414_, lean_object* v_x_1415_){
_start:
{
if (lean_obj_tag(v_x_1415_) == 0)
{
lean_inc(v_fallback_1414_);
return v_fallback_1414_;
}
else
{
lean_object* v_key_1416_; lean_object* v_value_1417_; lean_object* v_tail_1418_; uint8_t v___x_1419_; 
v_key_1416_ = lean_ctor_get(v_x_1415_, 0);
v_value_1417_ = lean_ctor_get(v_x_1415_, 1);
v_tail_1418_ = lean_ctor_get(v_x_1415_, 2);
v___x_1419_ = lean_string_dec_eq(v_key_1416_, v_a_1413_);
if (v___x_1419_ == 0)
{
v_x_1415_ = v_tail_1418_;
goto _start;
}
else
{
lean_inc(v_value_1417_);
return v_value_1417_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0___redArg___boxed(lean_object* v_a_1421_, lean_object* v_fallback_1422_, lean_object* v_x_1423_){
_start:
{
lean_object* v_res_1424_; 
v_res_1424_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0___redArg(v_a_1421_, v_fallback_1422_, v_x_1423_);
lean_dec(v_x_1423_);
lean_dec(v_fallback_1422_);
lean_dec_ref(v_a_1421_);
return v_res_1424_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0___redArg(lean_object* v_m_1425_, lean_object* v_a_1426_, lean_object* v_fallback_1427_){
_start:
{
lean_object* v_buckets_1428_; lean_object* v___x_1429_; uint64_t v___x_1430_; uint64_t v___x_1431_; uint64_t v___x_1432_; uint64_t v_fold_1433_; uint64_t v___x_1434_; uint64_t v___x_1435_; uint64_t v___x_1436_; size_t v___x_1437_; size_t v___x_1438_; size_t v___x_1439_; size_t v___x_1440_; size_t v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; 
v_buckets_1428_ = lean_ctor_get(v_m_1425_, 1);
v___x_1429_ = lean_array_get_size(v_buckets_1428_);
v___x_1430_ = lean_string_hash(v_a_1426_);
v___x_1431_ = 32ULL;
v___x_1432_ = lean_uint64_shift_right(v___x_1430_, v___x_1431_);
v_fold_1433_ = lean_uint64_xor(v___x_1430_, v___x_1432_);
v___x_1434_ = 16ULL;
v___x_1435_ = lean_uint64_shift_right(v_fold_1433_, v___x_1434_);
v___x_1436_ = lean_uint64_xor(v_fold_1433_, v___x_1435_);
v___x_1437_ = lean_uint64_to_usize(v___x_1436_);
v___x_1438_ = lean_usize_of_nat(v___x_1429_);
v___x_1439_ = ((size_t)1ULL);
v___x_1440_ = lean_usize_sub(v___x_1438_, v___x_1439_);
v___x_1441_ = lean_usize_land(v___x_1437_, v___x_1440_);
v___x_1442_ = lean_array_uget_borrowed(v_buckets_1428_, v___x_1441_);
v___x_1443_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0___redArg(v_a_1426_, v_fallback_1427_, v___x_1442_);
return v___x_1443_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0___redArg___boxed(lean_object* v_m_1444_, lean_object* v_a_1445_, lean_object* v_fallback_1446_){
_start:
{
lean_object* v_res_1447_; 
v_res_1447_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0___redArg(v_m_1444_, v_a_1445_, v_fallback_1446_);
lean_dec(v_fallback_1446_);
lean_dec_ref(v_a_1445_);
lean_dec_ref(v_m_1444_);
return v_res_1447_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2(lean_object* v_as_1450_, size_t v_sz_1451_, size_t v_i_1452_, lean_object* v_b_1453_){
_start:
{
uint8_t v___x_1455_; 
v___x_1455_ = lean_usize_dec_lt(v_i_1452_, v_sz_1451_);
if (v___x_1455_ == 0)
{
lean_object* v___x_1456_; 
v___x_1456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1456_, 0, v_b_1453_);
return v___x_1456_;
}
else
{
lean_object* v_a_1457_; lean_object* v_file_1458_; lean_object* v_pos_1459_; lean_object* v_option_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v_fst_1464_; lean_object* v_snd_1465_; lean_object* v___x_1467_; uint8_t v_isShared_1468_; uint8_t v_isSharedCheck_1486_; 
v_a_1457_ = lean_array_uget_borrowed(v_as_1450_, v_i_1452_);
v_file_1458_ = lean_ctor_get(v_a_1457_, 0);
v_pos_1459_ = lean_ctor_get(v_a_1457_, 1);
lean_inc_ref(v_pos_1459_);
v_option_1460_ = lean_ctor_get(v_a_1457_, 2);
v___x_1461_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2___closed__0));
lean_inc_ref(v_file_1458_);
v___x_1462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1462_, 0, v_file_1458_);
lean_ctor_set(v___x_1462_, 1, v___x_1461_);
v___x_1463_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0___redArg(v_b_1453_, v_file_1458_, v___x_1462_);
lean_dec_ref_known(v___x_1462_, 2);
v_fst_1464_ = lean_ctor_get(v___x_1463_, 0);
v_snd_1465_ = lean_ctor_get(v___x_1463_, 1);
v_isSharedCheck_1486_ = !lean_is_exclusive(v___x_1463_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1467_ = v___x_1463_;
v_isShared_1468_ = v_isSharedCheck_1486_;
goto v_resetjp_1466_;
}
else
{
lean_inc(v_snd_1465_);
lean_inc(v_fst_1464_);
lean_dec(v___x_1463_);
v___x_1467_ = lean_box(0);
v_isShared_1468_ = v_isSharedCheck_1486_;
goto v_resetjp_1466_;
}
v_resetjp_1466_:
{
lean_object* v_line_1469_; lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1484_; 
v_line_1469_ = lean_ctor_get(v_pos_1459_, 0);
v_isSharedCheck_1484_ = !lean_is_exclusive(v_pos_1459_);
if (v_isSharedCheck_1484_ == 0)
{
lean_object* v_unused_1485_; 
v_unused_1485_ = lean_ctor_get(v_pos_1459_, 1);
lean_dec(v_unused_1485_);
v___x_1471_ = v_pos_1459_;
v_isShared_1472_ = v_isSharedCheck_1484_;
goto v_resetjp_1470_;
}
else
{
lean_inc(v_line_1469_);
lean_dec(v_pos_1459_);
v___x_1471_ = lean_box(0);
v_isShared_1472_ = v_isSharedCheck_1484_;
goto v_resetjp_1470_;
}
v_resetjp_1470_:
{
lean_object* v___x_1474_; 
lean_inc(v_option_1460_);
if (v_isShared_1468_ == 0)
{
lean_ctor_set(v___x_1467_, 1, v_option_1460_);
lean_ctor_set(v___x_1467_, 0, v_line_1469_);
v___x_1474_ = v___x_1467_;
goto v_reusejp_1473_;
}
else
{
lean_object* v_reuseFailAlloc_1483_; 
v_reuseFailAlloc_1483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1483_, 0, v_line_1469_);
lean_ctor_set(v_reuseFailAlloc_1483_, 1, v_option_1460_);
v___x_1474_ = v_reuseFailAlloc_1483_;
goto v_reusejp_1473_;
}
v_reusejp_1473_:
{
lean_object* v___x_1475_; lean_object* v___x_1477_; 
v___x_1475_ = lean_array_push(v_snd_1465_, v___x_1474_);
if (v_isShared_1472_ == 0)
{
lean_ctor_set(v___x_1471_, 1, v___x_1475_);
lean_ctor_set(v___x_1471_, 0, v_fst_1464_);
v___x_1477_ = v___x_1471_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v_fst_1464_);
lean_ctor_set(v_reuseFailAlloc_1482_, 1, v___x_1475_);
v___x_1477_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
lean_object* v___x_1478_; size_t v___x_1479_; size_t v___x_1480_; 
lean_inc_ref(v_file_1458_);
v___x_1478_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1___redArg(v_b_1453_, v_file_1458_, v___x_1477_);
v___x_1479_ = ((size_t)1ULL);
v___x_1480_ = lean_usize_add(v_i_1452_, v___x_1479_);
v_i_1452_ = v___x_1480_;
v_b_1453_ = v___x_1478_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2___boxed(lean_object* v_as_1487_, lean_object* v_sz_1488_, lean_object* v_i_1489_, lean_object* v_b_1490_, lean_object* v___y_1491_){
_start:
{
size_t v_sz_boxed_1492_; size_t v_i_boxed_1493_; lean_object* v_res_1494_; 
v_sz_boxed_1492_ = lean_unbox_usize(v_sz_1488_);
lean_dec(v_sz_1488_);
v_i_boxed_1493_ = lean_unbox_usize(v_i_1489_);
lean_dec(v_i_1489_);
v_res_1494_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2(v_as_1487_, v_sz_boxed_1492_, v_i_boxed_1493_, v_b_1490_);
lean_dec_ref(v_as_1487_);
return v_res_1494_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__0(void){
_start:
{
lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; 
v___x_1495_ = lean_box(0);
v___x_1496_ = lean_unsigned_to_nat(16u);
v___x_1497_ = lean_mk_array(v___x_1496_, v___x_1495_);
return v___x_1497_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__1(void){
_start:
{
lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v_byFile_1500_; 
v___x_1498_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__0, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__0_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__0);
v___x_1499_ = lean_unsigned_to_nat(0u);
v_byFile_1500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_byFile_1500_, 0, v___x_1499_);
lean_ctor_set(v_byFile_1500_, 1, v___x_1498_);
return v_byFile_1500_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles(lean_object* v_records_1501_){
_start:
{
lean_object* v___x_1503_; lean_object* v_byFile_1504_; size_t v_sz_1505_; size_t v___x_1506_; lean_object* v___x_1507_; 
v___x_1503_ = lean_unsigned_to_nat(0u);
v_byFile_1504_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__1, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__1_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__1);
v_sz_1505_ = lean_array_size(v_records_1501_);
v___x_1506_ = ((size_t)0ULL);
v___x_1507_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2(v_records_1501_, v_sz_1505_, v___x_1506_, v_byFile_1504_);
if (lean_obj_tag(v___x_1507_) == 0)
{
lean_object* v_a_1508_; lean_object* v___y_1510_; lean_object* v_size_1522_; lean_object* v_buckets_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; uint8_t v___x_1526_; 
v_a_1508_ = lean_ctor_get(v___x_1507_, 0);
lean_inc(v_a_1508_);
lean_dec_ref_known(v___x_1507_, 1);
v_size_1522_ = lean_ctor_get(v_a_1508_, 0);
lean_inc(v_size_1522_);
v_buckets_1523_ = lean_ctor_get(v_a_1508_, 1);
lean_inc_ref(v_buckets_1523_);
lean_dec(v_a_1508_);
v___x_1524_ = lean_mk_empty_array_with_capacity(v_size_1522_);
lean_dec(v_size_1522_);
v___x_1525_ = lean_array_get_size(v_buckets_1523_);
v___x_1526_ = lean_nat_dec_lt(v___x_1503_, v___x_1525_);
if (v___x_1526_ == 0)
{
lean_dec_ref(v_buckets_1523_);
v___y_1510_ = v___x_1524_;
goto v___jp_1509_;
}
else
{
size_t v___x_1527_; lean_object* v___x_1528_; 
v___x_1527_ = lean_usize_of_nat(v___x_1525_);
v___x_1528_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__20(v_buckets_1523_, v___x_1506_, v___x_1527_, v___x_1524_);
lean_dec_ref(v_buckets_1523_);
v___y_1510_ = v___x_1528_;
goto v___jp_1509_;
}
v___jp_1509_:
{
lean_object* v___x_1511_; size_t v_sz_1512_; lean_object* v___x_1513_; 
v___x_1511_ = lean_box(0);
v_sz_1512_ = lean_array_size(v___y_1510_);
v___x_1513_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18(v___y_1510_, v_sz_1512_, v___x_1506_, v___x_1511_);
lean_dec_ref(v___y_1510_);
if (lean_obj_tag(v___x_1513_) == 0)
{
lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1520_; 
v_isSharedCheck_1520_ = !lean_is_exclusive(v___x_1513_);
if (v_isSharedCheck_1520_ == 0)
{
lean_object* v_unused_1521_; 
v_unused_1521_ = lean_ctor_get(v___x_1513_, 0);
lean_dec(v_unused_1521_);
v___x_1515_ = v___x_1513_;
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
else
{
lean_dec(v___x_1513_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1518_; 
if (v_isShared_1516_ == 0)
{
lean_ctor_set(v___x_1515_, 0, v___x_1511_);
v___x_1518_ = v___x_1515_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v___x_1511_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
return v___x_1518_;
}
}
}
else
{
return v___x_1513_;
}
}
}
else
{
lean_object* v_a_1529_; lean_object* v___x_1531_; uint8_t v_isShared_1532_; uint8_t v_isSharedCheck_1536_; 
v_a_1529_ = lean_ctor_get(v___x_1507_, 0);
v_isSharedCheck_1536_ = !lean_is_exclusive(v___x_1507_);
if (v_isSharedCheck_1536_ == 0)
{
v___x_1531_ = v___x_1507_;
v_isShared_1532_ = v_isSharedCheck_1536_;
goto v_resetjp_1530_;
}
else
{
lean_inc(v_a_1529_);
lean_dec(v___x_1507_);
v___x_1531_ = lean_box(0);
v_isShared_1532_ = v_isSharedCheck_1536_;
goto v_resetjp_1530_;
}
v_resetjp_1530_:
{
lean_object* v___x_1534_; 
if (v_isShared_1532_ == 0)
{
v___x_1534_ = v___x_1531_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v_a_1529_);
v___x_1534_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
return v___x_1534_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___boxed(lean_object* v_records_1537_, lean_object* v___y_1538_){
_start:
{
lean_object* v_res_1539_; 
v_res_1539_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles(v_records_1537_);
lean_dec_ref(v_records_1537_);
return v_res_1539_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0(lean_object* v_00_u03b2_1540_, lean_object* v_m_1541_, lean_object* v_a_1542_, lean_object* v_fallback_1543_){
_start:
{
lean_object* v___x_1544_; 
v___x_1544_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0___redArg(v_m_1541_, v_a_1542_, v_fallback_1543_);
return v___x_1544_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0___boxed(lean_object* v_00_u03b2_1545_, lean_object* v_m_1546_, lean_object* v_a_1547_, lean_object* v_fallback_1548_){
_start:
{
lean_object* v_res_1549_; 
v_res_1549_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0(v_00_u03b2_1545_, v_m_1546_, v_a_1547_, v_fallback_1548_);
lean_dec(v_fallback_1548_);
lean_dec_ref(v_a_1547_);
lean_dec_ref(v_m_1546_);
return v_res_1549_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1(lean_object* v_00_u03b2_1550_, lean_object* v_m_1551_, lean_object* v_a_1552_, lean_object* v_b_1553_){
_start:
{
lean_object* v___x_1554_; 
v___x_1554_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1___redArg(v_m_1551_, v_a_1552_, v_b_1553_);
return v___x_1554_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3(lean_object* v_00_u03b2_1555_, lean_object* v_m_1556_, lean_object* v_a_1557_, lean_object* v_fallback_1558_){
_start:
{
lean_object* v___x_1559_; 
v___x_1559_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3___redArg(v_m_1556_, v_a_1557_, v_fallback_1558_);
return v___x_1559_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3___boxed(lean_object* v_00_u03b2_1560_, lean_object* v_m_1561_, lean_object* v_a_1562_, lean_object* v_fallback_1563_){
_start:
{
lean_object* v_res_1564_; 
v_res_1564_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3(v_00_u03b2_1560_, v_m_1561_, v_a_1562_, v_fallback_1563_);
lean_dec(v_fallback_1563_);
lean_dec(v_a_1562_);
lean_dec_ref(v_m_1561_);
return v_res_1564_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5(lean_object* v_00_u03b2_1565_, lean_object* v_m_1566_, lean_object* v_a_1567_, lean_object* v_b_1568_){
_start:
{
lean_object* v___x_1569_; 
v___x_1569_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5___redArg(v_m_1566_, v_a_1567_, v_b_1568_);
return v___x_1569_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8(lean_object* v_a_1570_, lean_object* v___x_1571_, lean_object* v___x_1572_, lean_object* v_inst_1573_, lean_object* v_R_1574_, lean_object* v_a_1575_, lean_object* v_b_1576_){
_start:
{
lean_object* v___x_1577_; 
v___x_1577_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8___redArg(v_a_1570_, v___x_1571_, v___x_1572_, v_a_1575_, v_b_1576_);
return v___x_1577_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8___boxed(lean_object* v_a_1578_, lean_object* v___x_1579_, lean_object* v___x_1580_, lean_object* v_inst_1581_, lean_object* v_R_1582_, lean_object* v_a_1583_, lean_object* v_b_1584_){
_start:
{
lean_object* v_res_1585_; 
v_res_1585_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8(v_a_1578_, v___x_1579_, v___x_1580_, v_inst_1581_, v_R_1582_, v_a_1583_, v_b_1584_);
lean_dec_ref(v___x_1579_);
return v_res_1585_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11(lean_object* v___x_1586_, lean_object* v___x_1587_, lean_object* v_n_1588_, lean_object* v_as_1589_, lean_object* v_lo_1590_, lean_object* v_hi_1591_, lean_object* v_w_1592_, lean_object* v_hlo_1593_, lean_object* v_hhi_1594_){
_start:
{
lean_object* v___x_1595_; 
v___x_1595_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg(v___x_1586_, v___x_1587_, v_n_1588_, v_as_1589_, v_lo_1590_, v_hi_1591_);
return v___x_1595_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___boxed(lean_object* v___x_1596_, lean_object* v___x_1597_, lean_object* v_n_1598_, lean_object* v_as_1599_, lean_object* v_lo_1600_, lean_object* v_hi_1601_, lean_object* v_w_1602_, lean_object* v_hlo_1603_, lean_object* v_hhi_1604_){
_start:
{
lean_object* v_res_1605_; 
v_res_1605_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11(v___x_1596_, v___x_1597_, v_n_1598_, v_as_1599_, v_lo_1600_, v_hi_1601_, v_w_1602_, v_hlo_1603_, v_hhi_1604_);
lean_dec(v_hi_1601_);
lean_dec(v_n_1598_);
lean_dec(v___x_1597_);
lean_dec(v___x_1596_);
return v_res_1605_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14(lean_object* v_n_1606_, lean_object* v_as_1607_, lean_object* v_lo_1608_, lean_object* v_hi_1609_, lean_object* v_w_1610_, lean_object* v_hlo_1611_, lean_object* v_hhi_1612_){
_start:
{
lean_object* v___x_1613_; 
v___x_1613_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg(v_n_1606_, v_as_1607_, v_lo_1608_, v_hi_1609_);
return v___x_1613_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___boxed(lean_object* v_n_1614_, lean_object* v_as_1615_, lean_object* v_lo_1616_, lean_object* v_hi_1617_, lean_object* v_w_1618_, lean_object* v_hlo_1619_, lean_object* v_hhi_1620_){
_start:
{
lean_object* v_res_1621_; 
v_res_1621_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14(v_n_1614_, v_as_1615_, v_lo_1616_, v_hi_1617_, v_w_1618_, v_hlo_1619_, v_hhi_1620_);
lean_dec(v_hi_1617_);
lean_dec(v_n_1614_);
return v_res_1621_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0(lean_object* v_00_u03b2_1622_, lean_object* v_a_1623_, lean_object* v_fallback_1624_, lean_object* v_x_1625_){
_start:
{
lean_object* v___x_1626_; 
v___x_1626_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0___redArg(v_a_1623_, v_fallback_1624_, v_x_1625_);
return v___x_1626_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1627_, lean_object* v_a_1628_, lean_object* v_fallback_1629_, lean_object* v_x_1630_){
_start:
{
lean_object* v_res_1631_; 
v_res_1631_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0(v_00_u03b2_1627_, v_a_1628_, v_fallback_1629_, v_x_1630_);
lean_dec(v_x_1630_);
lean_dec(v_fallback_1629_);
lean_dec_ref(v_a_1628_);
return v_res_1631_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2(lean_object* v_00_u03b2_1632_, lean_object* v_a_1633_, lean_object* v_x_1634_){
_start:
{
uint8_t v___x_1635_; 
v___x_1635_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2___redArg(v_a_1633_, v_x_1634_);
return v___x_1635_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1636_, lean_object* v_a_1637_, lean_object* v_x_1638_){
_start:
{
uint8_t v_res_1639_; lean_object* v_r_1640_; 
v_res_1639_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2(v_00_u03b2_1636_, v_a_1637_, v_x_1638_);
lean_dec(v_x_1638_);
lean_dec_ref(v_a_1637_);
v_r_1640_ = lean_box(v_res_1639_);
return v_r_1640_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3(lean_object* v_00_u03b2_1641_, lean_object* v_data_1642_){
_start:
{
lean_object* v___x_1643_; 
v___x_1643_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3___redArg(v_data_1642_);
return v___x_1643_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__4(lean_object* v_00_u03b2_1644_, lean_object* v_a_1645_, lean_object* v_b_1646_, lean_object* v_x_1647_){
_start:
{
lean_object* v___x_1648_; 
v___x_1648_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__4___redArg(v_a_1645_, v_b_1646_, v_x_1647_);
return v___x_1648_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7(lean_object* v_00_u03b2_1649_, lean_object* v_a_1650_, lean_object* v_fallback_1651_, lean_object* v_x_1652_){
_start:
{
lean_object* v___x_1653_; 
v___x_1653_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7___redArg(v_a_1650_, v_fallback_1651_, v_x_1652_);
return v___x_1653_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7___boxed(lean_object* v_00_u03b2_1654_, lean_object* v_a_1655_, lean_object* v_fallback_1656_, lean_object* v_x_1657_){
_start:
{
lean_object* v_res_1658_; 
v_res_1658_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7(v_00_u03b2_1654_, v_a_1655_, v_fallback_1656_, v_x_1657_);
lean_dec(v_x_1657_);
lean_dec(v_fallback_1656_);
lean_dec(v_a_1655_);
return v_res_1658_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11(lean_object* v_00_u03b2_1659_, lean_object* v_a_1660_, lean_object* v_x_1661_){
_start:
{
uint8_t v___x_1662_; 
v___x_1662_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11___redArg(v_a_1660_, v_x_1661_);
return v___x_1662_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11___boxed(lean_object* v_00_u03b2_1663_, lean_object* v_a_1664_, lean_object* v_x_1665_){
_start:
{
uint8_t v_res_1666_; lean_object* v_r_1667_; 
v_res_1666_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11(v_00_u03b2_1663_, v_a_1664_, v_x_1665_);
lean_dec(v_x_1665_);
lean_dec(v_a_1664_);
v_r_1667_ = lean_box(v_res_1666_);
return v_r_1667_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12(lean_object* v_00_u03b2_1668_, lean_object* v_data_1669_){
_start:
{
lean_object* v___x_1670_; 
v___x_1670_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12___redArg(v_data_1669_);
return v___x_1670_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__13(lean_object* v_00_u03b2_1671_, lean_object* v_a_1672_, lean_object* v_b_1673_, lean_object* v_x_1674_){
_start:
{
lean_object* v___x_1675_; 
v___x_1675_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__13___redArg(v_a_1672_, v_b_1673_, v_x_1674_);
return v___x_1675_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20(lean_object* v___x_1676_, lean_object* v___x_1677_, lean_object* v_n_1678_, lean_object* v_lo_1679_, lean_object* v_hi_1680_, lean_object* v_hhi_1681_, lean_object* v_pivot_1682_, lean_object* v_as_1683_, lean_object* v_i_1684_, lean_object* v_k_1685_, lean_object* v_ilo_1686_, lean_object* v_ik_1687_, lean_object* v_w_1688_){
_start:
{
lean_object* v___x_1689_; 
v___x_1689_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20___redArg(v___x_1676_, v___x_1677_, v_hi_1680_, v_pivot_1682_, v_as_1683_, v_i_1684_, v_k_1685_);
return v___x_1689_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20___boxed(lean_object* v___x_1690_, lean_object* v___x_1691_, lean_object* v_n_1692_, lean_object* v_lo_1693_, lean_object* v_hi_1694_, lean_object* v_hhi_1695_, lean_object* v_pivot_1696_, lean_object* v_as_1697_, lean_object* v_i_1698_, lean_object* v_k_1699_, lean_object* v_ilo_1700_, lean_object* v_ik_1701_, lean_object* v_w_1702_){
_start:
{
lean_object* v_res_1703_; 
v_res_1703_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20(v___x_1690_, v___x_1691_, v_n_1692_, v_lo_1693_, v_hi_1694_, v_hhi_1695_, v_pivot_1696_, v_as_1697_, v_i_1698_, v_k_1699_, v_ilo_1700_, v_ik_1701_, v_w_1702_);
lean_dec(v_hi_1694_);
lean_dec(v_lo_1693_);
lean_dec(v_n_1692_);
lean_dec(v___x_1691_);
lean_dec(v___x_1690_);
return v_res_1703_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25(lean_object* v_n_1704_, lean_object* v_lo_1705_, lean_object* v_hi_1706_, lean_object* v_hhi_1707_, lean_object* v_pivot_1708_, lean_object* v_as_1709_, lean_object* v_i_1710_, lean_object* v_k_1711_, lean_object* v_ilo_1712_, lean_object* v_ik_1713_, lean_object* v_w_1714_){
_start:
{
lean_object* v___x_1715_; 
v___x_1715_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25___redArg(v_hi_1706_, v_pivot_1708_, v_as_1709_, v_i_1710_, v_k_1711_);
return v___x_1715_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25___boxed(lean_object* v_n_1716_, lean_object* v_lo_1717_, lean_object* v_hi_1718_, lean_object* v_hhi_1719_, lean_object* v_pivot_1720_, lean_object* v_as_1721_, lean_object* v_i_1722_, lean_object* v_k_1723_, lean_object* v_ilo_1724_, lean_object* v_ik_1725_, lean_object* v_w_1726_){
_start:
{
lean_object* v_res_1727_; 
v_res_1727_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25(v_n_1716_, v_lo_1717_, v_hi_1718_, v_hhi_1719_, v_pivot_1720_, v_as_1721_, v_i_1722_, v_k_1723_, v_ilo_1724_, v_ik_1725_, v_w_1726_);
lean_dec_ref(v_pivot_1720_);
lean_dec(v_hi_1718_);
lean_dec(v_lo_1717_);
lean_dec(v_n_1716_);
return v_res_1727_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5(lean_object* v_00_u03b2_1728_, lean_object* v_i_1729_, lean_object* v_source_1730_, lean_object* v_target_1731_){
_start:
{
lean_object* v___x_1732_; 
v___x_1732_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5___redArg(v_i_1729_, v_source_1730_, v_target_1731_);
return v___x_1732_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15(lean_object* v_00_u03b2_1733_, lean_object* v_i_1734_, lean_object* v_source_1735_, lean_object* v_target_1736_){
_start:
{
lean_object* v___x_1737_; 
v___x_1737_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15___redArg(v_i_1734_, v_source_1735_, v_target_1736_);
return v___x_1737_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5_spec__26(lean_object* v_00_u03b2_1738_, lean_object* v_x_1739_, lean_object* v_x_1740_){
_start:
{
lean_object* v___x_1741_; 
v___x_1741_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5_spec__26___redArg(v_x_1739_, v_x_1740_);
return v___x_1741_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15_spec__33(lean_object* v_00_u03b2_1742_, lean_object* v_x_1743_, lean_object* v_x_1744_){
_start:
{
lean_object* v___x_1745_; 
v___x_1745_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15_spec__33___redArg(v_x_1743_, v_x_1744_);
return v___x_1745_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___redArg(lean_object* v_declName_1746_, lean_object* v___y_1747_){
_start:
{
lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v_env_1751_; lean_object* v___x_1752_; lean_object* v_env_1753_; lean_object* v___x_1754_; lean_object* v_toEnvExtension_1755_; lean_object* v_asyncMode_1756_; uint8_t v___x_1757_; lean_object* v___x_1758_; 
v___x_1749_ = l_Lean_instInhabitedDeclarationRanges_default;
v___x_1750_ = lean_st_ref_get(v___y_1747_);
v_env_1751_ = lean_ctor_get(v___x_1750_, 0);
lean_inc_ref(v_env_1751_);
lean_dec(v___x_1750_);
v___x_1752_ = lean_st_ref_get(v___y_1747_);
v_env_1753_ = lean_ctor_get(v___x_1752_, 0);
lean_inc_ref(v_env_1753_);
lean_dec(v___x_1752_);
v___x_1754_ = l_Lean_declRangeExt;
v_toEnvExtension_1755_ = lean_ctor_get(v___x_1754_, 0);
v_asyncMode_1756_ = lean_ctor_get(v_toEnvExtension_1755_, 2);
v___x_1757_ = 0;
lean_inc(v_declName_1746_);
v___x_1758_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_1749_, v___x_1754_, v_env_1751_, v_declName_1746_, v_asyncMode_1756_, v___x_1757_);
if (lean_obj_tag(v___x_1758_) == 0)
{
uint8_t v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; 
v___x_1759_ = 1;
v___x_1760_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_1749_, v___x_1754_, v_env_1753_, v_declName_1746_, v_asyncMode_1756_, v___x_1759_);
v___x_1761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1761_, 0, v___x_1760_);
return v___x_1761_;
}
else
{
lean_object* v___x_1762_; 
lean_dec_ref(v_env_1753_);
lean_dec(v_declName_1746_);
v___x_1762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1762_, 0, v___x_1758_);
return v___x_1762_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___redArg___boxed(lean_object* v_declName_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_){
_start:
{
lean_object* v_res_1766_; 
v_res_1766_ = l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___redArg(v_declName_1763_, v___y_1764_);
lean_dec(v___y_1764_);
return v_res_1766_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0___redArg(lean_object* v_declName_1767_, lean_object* v___y_1768_){
_start:
{
lean_object* v___x_1770_; lean_object* v_env_1771_; uint8_t v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; 
v___x_1770_ = lean_st_ref_get(v___y_1768_);
v_env_1771_ = lean_ctor_get(v___x_1770_, 0);
lean_inc_ref(v_env_1771_);
lean_dec(v___x_1770_);
v___x_1772_ = l_Lean_isRecCore(v_env_1771_, v_declName_1767_);
v___x_1773_ = lean_box(v___x_1772_);
v___x_1774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1774_, 0, v___x_1773_);
return v___x_1774_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_declName_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_){
_start:
{
lean_object* v_res_1778_; 
v_res_1778_ = l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0___redArg(v_declName_1775_, v___y_1776_);
lean_dec(v___y_1776_);
return v_res_1778_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0(lean_object* v_declName_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_){
_start:
{
lean_object* v_ranges_1784_; lean_object* v___x_1790_; lean_object* v_env_1791_; lean_object* v___x_1792_; lean_object* v_a_1793_; uint8_t v___y_1799_; uint8_t v___x_1803_; 
v___x_1790_ = lean_st_ref_get(v___y_1781_);
v_env_1791_ = lean_ctor_get(v___x_1790_, 0);
lean_inc_ref_n(v_env_1791_, 2);
lean_dec(v___x_1790_);
lean_inc_n(v_declName_1779_, 2);
v___x_1792_ = l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0___redArg(v_declName_1779_, v___y_1781_);
v_a_1793_ = lean_ctor_get(v___x_1792_, 0);
lean_inc(v_a_1793_);
lean_dec_ref(v___x_1792_);
v___x_1803_ = l_Lean_isAuxRecursor(v_env_1791_, v_declName_1779_);
if (v___x_1803_ == 0)
{
uint8_t v___x_1804_; 
lean_inc(v_declName_1779_);
v___x_1804_ = l_Lean_isNoConfusion(v_env_1791_, v_declName_1779_);
v___y_1799_ = v___x_1804_;
goto v___jp_1798_;
}
else
{
lean_dec_ref(v_env_1791_);
v___y_1799_ = v___x_1803_;
goto v___jp_1798_;
}
v___jp_1783_:
{
if (lean_obj_tag(v_ranges_1784_) == 0)
{
lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; 
v___x_1785_ = l_Lean_builtinDeclRanges;
v___x_1786_ = lean_st_ref_get(v___x_1785_);
v___x_1787_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1786_, v_declName_1779_);
lean_dec(v_declName_1779_);
lean_dec(v___x_1786_);
v___x_1788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1788_, 0, v___x_1787_);
return v___x_1788_;
}
else
{
lean_object* v___x_1789_; 
lean_dec(v_declName_1779_);
v___x_1789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1789_, 0, v_ranges_1784_);
return v___x_1789_;
}
}
v___jp_1794_:
{
lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v_a_1797_; 
v___x_1795_ = l_Lean_Name_getPrefix(v_declName_1779_);
v___x_1796_ = l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___redArg(v___x_1795_, v___y_1781_);
v_a_1797_ = lean_ctor_get(v___x_1796_, 0);
lean_inc(v_a_1797_);
lean_dec_ref(v___x_1796_);
v_ranges_1784_ = v_a_1797_;
goto v___jp_1783_;
}
v___jp_1798_:
{
if (v___y_1799_ == 0)
{
uint8_t v___x_1800_; 
v___x_1800_ = lean_unbox(v_a_1793_);
lean_dec(v_a_1793_);
if (v___x_1800_ == 0)
{
lean_object* v___x_1801_; lean_object* v_a_1802_; 
lean_inc(v_declName_1779_);
v___x_1801_ = l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___redArg(v_declName_1779_, v___y_1781_);
v_a_1802_ = lean_ctor_get(v___x_1801_, 0);
lean_inc(v_a_1802_);
lean_dec_ref(v___x_1801_);
v_ranges_1784_ = v_a_1802_;
goto v___jp_1783_;
}
else
{
goto v___jp_1794_;
}
}
else
{
lean_dec(v_a_1793_);
goto v___jp_1794_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0___boxed(lean_object* v_declName_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_){
_start:
{
lean_object* v_res_1809_; 
v_res_1809_ = l_Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0(v_declName_1805_, v___y_1806_, v___y_1807_);
lean_dec(v___y_1807_);
lean_dec_ref(v___y_1806_);
return v_res_1809_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f(lean_object* v_failMod_1810_, lean_object* v_site_1811_, lean_object* v_a_1812_, lean_object* v_a_1813_){
_start:
{
if (lean_obj_tag(v_site_1811_) == 0)
{
lean_object* v_name_1815_; lean_object* v___x_1816_; 
v_name_1815_ = lean_ctor_get(v_site_1811_, 0);
lean_inc(v_name_1815_);
lean_dec_ref_known(v_site_1811_, 1);
v___x_1816_ = l_Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0(v_name_1815_, v_a_1812_, v_a_1813_);
if (lean_obj_tag(v___x_1816_) == 0)
{
lean_object* v_a_1817_; lean_object* v___x_1819_; uint8_t v_isShared_1820_; uint8_t v_isSharedCheck_1838_; 
v_a_1817_ = lean_ctor_get(v___x_1816_, 0);
v_isSharedCheck_1838_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1838_ == 0)
{
v___x_1819_ = v___x_1816_;
v_isShared_1820_ = v_isSharedCheck_1838_;
goto v_resetjp_1818_;
}
else
{
lean_inc(v_a_1817_);
lean_dec(v___x_1816_);
v___x_1819_ = lean_box(0);
v_isShared_1820_ = v_isSharedCheck_1838_;
goto v_resetjp_1818_;
}
v_resetjp_1818_:
{
if (lean_obj_tag(v_a_1817_) == 0)
{
lean_object* v___x_1821_; lean_object* v___x_1823_; 
v___x_1821_ = lean_box(0);
if (v_isShared_1820_ == 0)
{
lean_ctor_set(v___x_1819_, 0, v___x_1821_);
v___x_1823_ = v___x_1819_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v___x_1821_);
v___x_1823_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
return v___x_1823_;
}
}
else
{
lean_object* v_val_1825_; lean_object* v___x_1827_; uint8_t v_isShared_1828_; uint8_t v_isSharedCheck_1837_; 
v_val_1825_ = lean_ctor_get(v_a_1817_, 0);
v_isSharedCheck_1837_ = !lean_is_exclusive(v_a_1817_);
if (v_isSharedCheck_1837_ == 0)
{
v___x_1827_ = v_a_1817_;
v_isShared_1828_ = v_isSharedCheck_1837_;
goto v_resetjp_1826_;
}
else
{
lean_inc(v_val_1825_);
lean_dec(v_a_1817_);
v___x_1827_ = lean_box(0);
v_isShared_1828_ = v_isSharedCheck_1837_;
goto v_resetjp_1826_;
}
v_resetjp_1826_:
{
lean_object* v_range_1829_; lean_object* v_pos_1830_; lean_object* v___x_1832_; 
v_range_1829_ = lean_ctor_get(v_val_1825_, 0);
lean_inc_ref(v_range_1829_);
lean_dec(v_val_1825_);
v_pos_1830_ = lean_ctor_get(v_range_1829_, 0);
lean_inc_ref(v_pos_1830_);
lean_dec_ref(v_range_1829_);
if (v_isShared_1828_ == 0)
{
lean_ctor_set(v___x_1827_, 0, v_pos_1830_);
v___x_1832_ = v___x_1827_;
goto v_reusejp_1831_;
}
else
{
lean_object* v_reuseFailAlloc_1836_; 
v_reuseFailAlloc_1836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1836_, 0, v_pos_1830_);
v___x_1832_ = v_reuseFailAlloc_1836_;
goto v_reusejp_1831_;
}
v_reusejp_1831_:
{
lean_object* v___x_1834_; 
if (v_isShared_1820_ == 0)
{
lean_ctor_set(v___x_1819_, 0, v___x_1832_);
v___x_1834_ = v___x_1819_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v___x_1832_);
v___x_1834_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
return v___x_1834_;
}
}
}
}
}
}
else
{
lean_object* v_a_1839_; lean_object* v___x_1841_; uint8_t v_isShared_1842_; uint8_t v_isSharedCheck_1846_; 
v_a_1839_ = lean_ctor_get(v___x_1816_, 0);
v_isSharedCheck_1846_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1846_ == 0)
{
v___x_1841_ = v___x_1816_;
v_isShared_1842_ = v_isSharedCheck_1846_;
goto v_resetjp_1840_;
}
else
{
lean_inc(v_a_1839_);
lean_dec(v___x_1816_);
v___x_1841_ = lean_box(0);
v_isShared_1842_ = v_isSharedCheck_1846_;
goto v_resetjp_1840_;
}
v_resetjp_1840_:
{
lean_object* v___x_1844_; 
if (v_isShared_1842_ == 0)
{
v___x_1844_ = v___x_1841_;
goto v_reusejp_1843_;
}
else
{
lean_object* v_reuseFailAlloc_1845_; 
v_reuseFailAlloc_1845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1845_, 0, v_a_1839_);
v___x_1844_ = v_reuseFailAlloc_1845_;
goto v_reusejp_1843_;
}
v_reusejp_1843_:
{
return v___x_1844_;
}
}
}
}
else
{
lean_object* v_n_1847_; lean_object* v___x_1849_; uint8_t v_isShared_1850_; uint8_t v_isSharedCheck_1878_; 
v_n_1847_ = lean_ctor_get(v_site_1811_, 0);
v_isSharedCheck_1878_ = !lean_is_exclusive(v_site_1811_);
if (v_isSharedCheck_1878_ == 0)
{
v___x_1849_ = v_site_1811_;
v_isShared_1850_ = v_isSharedCheck_1878_;
goto v_resetjp_1848_;
}
else
{
lean_inc(v_n_1847_);
lean_dec(v_site_1811_);
v___x_1849_ = lean_box(0);
v_isShared_1850_ = v_isSharedCheck_1878_;
goto v_resetjp_1848_;
}
v_resetjp_1848_:
{
lean_object* v___x_1851_; lean_object* v_env_1852_; lean_object* v___x_1853_; 
v___x_1851_ = lean_st_ref_get(v_a_1813_);
v_env_1852_ = lean_ctor_get(v___x_1851_, 0);
lean_inc_ref(v_env_1852_);
lean_dec(v___x_1851_);
v___x_1853_ = l_Lean_getVersoModuleDoc_x3f(v_env_1852_, v_failMod_1810_);
lean_dec_ref(v_env_1852_);
if (lean_obj_tag(v___x_1853_) == 1)
{
lean_object* v_val_1854_; lean_object* v___x_1856_; uint8_t v_isShared_1857_; uint8_t v_isSharedCheck_1873_; 
v_val_1854_ = lean_ctor_get(v___x_1853_, 0);
v_isSharedCheck_1873_ = !lean_is_exclusive(v___x_1853_);
if (v_isSharedCheck_1873_ == 0)
{
v___x_1856_ = v___x_1853_;
v_isShared_1857_ = v_isSharedCheck_1873_;
goto v_resetjp_1855_;
}
else
{
lean_inc(v_val_1854_);
lean_dec(v___x_1853_);
v___x_1856_ = lean_box(0);
v_isShared_1857_ = v_isSharedCheck_1873_;
goto v_resetjp_1855_;
}
v_resetjp_1855_:
{
lean_object* v___x_1858_; uint8_t v___x_1859_; 
v___x_1858_ = lean_array_get_size(v_val_1854_);
v___x_1859_ = lean_nat_dec_lt(v_n_1847_, v___x_1858_);
if (v___x_1859_ == 0)
{
lean_object* v___x_1860_; lean_object* v___x_1862_; 
lean_del_object(v___x_1856_);
lean_dec(v_val_1854_);
lean_dec(v_n_1847_);
v___x_1860_ = lean_box(0);
if (v_isShared_1850_ == 0)
{
lean_ctor_set_tag(v___x_1849_, 0);
lean_ctor_set(v___x_1849_, 0, v___x_1860_);
v___x_1862_ = v___x_1849_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v___x_1860_);
v___x_1862_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
return v___x_1862_;
}
}
else
{
lean_object* v___x_1864_; lean_object* v_declarationRange_1865_; lean_object* v_pos_1866_; lean_object* v___x_1868_; 
v___x_1864_ = lean_array_fget(v_val_1854_, v_n_1847_);
lean_dec(v_n_1847_);
lean_dec(v_val_1854_);
v_declarationRange_1865_ = lean_ctor_get(v___x_1864_, 2);
lean_inc_ref(v_declarationRange_1865_);
lean_dec(v___x_1864_);
v_pos_1866_ = lean_ctor_get(v_declarationRange_1865_, 0);
lean_inc_ref(v_pos_1866_);
lean_dec_ref(v_declarationRange_1865_);
if (v_isShared_1857_ == 0)
{
lean_ctor_set(v___x_1856_, 0, v_pos_1866_);
v___x_1868_ = v___x_1856_;
goto v_reusejp_1867_;
}
else
{
lean_object* v_reuseFailAlloc_1872_; 
v_reuseFailAlloc_1872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1872_, 0, v_pos_1866_);
v___x_1868_ = v_reuseFailAlloc_1872_;
goto v_reusejp_1867_;
}
v_reusejp_1867_:
{
lean_object* v___x_1870_; 
if (v_isShared_1850_ == 0)
{
lean_ctor_set_tag(v___x_1849_, 0);
lean_ctor_set(v___x_1849_, 0, v___x_1868_);
v___x_1870_ = v___x_1849_;
goto v_reusejp_1869_;
}
else
{
lean_object* v_reuseFailAlloc_1871_; 
v_reuseFailAlloc_1871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1871_, 0, v___x_1868_);
v___x_1870_ = v_reuseFailAlloc_1871_;
goto v_reusejp_1869_;
}
v_reusejp_1869_:
{
return v___x_1870_;
}
}
}
}
}
else
{
lean_object* v___x_1874_; lean_object* v___x_1876_; 
lean_dec(v___x_1853_);
lean_dec(v_n_1847_);
v___x_1874_ = lean_box(0);
if (v_isShared_1850_ == 0)
{
lean_ctor_set_tag(v___x_1849_, 0);
lean_ctor_set(v___x_1849_, 0, v___x_1874_);
v___x_1876_ = v___x_1849_;
goto v_reusejp_1875_;
}
else
{
lean_object* v_reuseFailAlloc_1877_; 
v_reuseFailAlloc_1877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1877_, 0, v___x_1874_);
v___x_1876_ = v_reuseFailAlloc_1877_;
goto v_reusejp_1875_;
}
v_reusejp_1875_:
{
return v___x_1876_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f___boxed(lean_object* v_failMod_1879_, lean_object* v_site_1880_, lean_object* v_a_1881_, lean_object* v_a_1882_, lean_object* v___y_1883_){
_start:
{
lean_object* v_res_1884_; 
v_res_1884_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f(v_failMod_1879_, v_site_1880_, v_a_1881_, v_a_1882_);
lean_dec(v_a_1882_);
lean_dec_ref(v_a_1881_);
lean_dec(v_failMod_1879_);
return v_res_1884_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0(lean_object* v_declName_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_){
_start:
{
lean_object* v___x_1889_; 
v___x_1889_ = l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0___redArg(v_declName_1885_, v___y_1887_);
return v___x_1889_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0___boxed(lean_object* v_declName_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_){
_start:
{
lean_object* v_res_1894_; 
v_res_1894_ = l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0(v_declName_1890_, v___y_1891_, v___y_1892_);
lean_dec(v___y_1892_);
lean_dec_ref(v___y_1891_);
return v_res_1894_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1(lean_object* v_declName_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_){
_start:
{
lean_object* v___x_1899_; 
v___x_1899_ = l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___redArg(v_declName_1895_, v___y_1897_);
return v___x_1899_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___boxed(lean_object* v_declName_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_){
_start:
{
lean_object* v_res_1904_; 
v_res_1904_ = l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1(v_declName_1900_, v___y_1901_, v___y_1902_);
lean_dec(v___y_1902_);
lean_dec_ref(v___y_1901_);
return v_res_1904_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite(lean_object* v_x_1908_){
_start:
{
if (lean_obj_tag(v_x_1908_) == 0)
{
lean_object* v_name_1909_; lean_object* v___x_1910_; uint8_t v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; 
v_name_1909_ = lean_ctor_get(v_x_1908_, 0);
lean_inc(v_name_1909_);
lean_dec_ref_known(v_x_1908_, 1);
v___x_1910_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__0));
v___x_1911_ = 1;
v___x_1912_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_1909_, v___x_1911_);
v___x_1913_ = lean_string_append(v___x_1910_, v___x_1912_);
lean_dec_ref(v___x_1912_);
v___x_1914_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__1));
v___x_1915_ = lean_string_append(v___x_1913_, v___x_1914_);
return v___x_1915_;
}
else
{
lean_object* v_n_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; 
v_n_1916_ = lean_ctor_get(v_x_1908_, 0);
lean_inc(v_n_1916_);
lean_dec_ref_known(v_x_1908_, 1);
v___x_1917_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__2));
v___x_1918_ = lean_unsigned_to_nat(1u);
v___x_1919_ = lean_nat_add(v_n_1916_, v___x_1918_);
lean_dec(v_n_1916_);
v___x_1920_ = l_Nat_reprFast(v___x_1919_);
v___x_1921_ = lean_string_append(v___x_1917_, v___x_1920_);
lean_dec_ref(v___x_1920_);
return v___x_1921_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0___redArg(lean_object* v_o_1922_, lean_object* v___y_1923_){
_start:
{
lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v_env_1927_; lean_object* v___x_1928_; lean_object* v_toEnvExtension_1929_; lean_object* v_asyncMode_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v_merged_1933_; lean_object* v___x_1935_; uint8_t v_isShared_1936_; uint8_t v_isSharedCheck_1941_; 
v___x_1925_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_1926_ = lean_st_ref_get(v___y_1923_);
v_env_1927_ = lean_ctor_get(v___x_1926_, 0);
lean_inc_ref(v_env_1927_);
lean_dec(v___x_1926_);
v___x_1928_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_1929_ = lean_ctor_get(v___x_1928_, 0);
v_asyncMode_1930_ = lean_ctor_get(v_toEnvExtension_1929_, 2);
v___x_1931_ = lean_box(0);
v___x_1932_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1925_, v___x_1928_, v_env_1927_, v_asyncMode_1930_, v___x_1931_);
v_merged_1933_ = lean_ctor_get(v___x_1932_, 0);
v_isSharedCheck_1941_ = !lean_is_exclusive(v___x_1932_);
if (v_isSharedCheck_1941_ == 0)
{
lean_object* v_unused_1942_; 
v_unused_1942_ = lean_ctor_get(v___x_1932_, 1);
lean_dec(v_unused_1942_);
v___x_1935_ = v___x_1932_;
v_isShared_1936_ = v_isSharedCheck_1941_;
goto v_resetjp_1934_;
}
else
{
lean_inc(v_merged_1933_);
lean_dec(v___x_1932_);
v___x_1935_ = lean_box(0);
v_isShared_1936_ = v_isSharedCheck_1941_;
goto v_resetjp_1934_;
}
v_resetjp_1934_:
{
lean_object* v___x_1938_; 
if (v_isShared_1936_ == 0)
{
lean_ctor_set(v___x_1935_, 1, v_merged_1933_);
lean_ctor_set(v___x_1935_, 0, v_o_1922_);
v___x_1938_ = v___x_1935_;
goto v_reusejp_1937_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v_o_1922_);
lean_ctor_set(v_reuseFailAlloc_1940_, 1, v_merged_1933_);
v___x_1938_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1937_;
}
v_reusejp_1937_:
{
lean_object* v___x_1939_; 
v___x_1939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1939_, 0, v___x_1938_);
return v___x_1939_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0___redArg___boxed(lean_object* v_o_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_){
_start:
{
lean_object* v_res_1946_; 
v_res_1946_ = l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0___redArg(v_o_1943_, v___y_1944_);
lean_dec(v___y_1944_);
return v_res_1946_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0(lean_object* v_o_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_){
_start:
{
lean_object* v___x_1951_; 
v___x_1951_ = l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0___redArg(v_o_1947_, v___y_1949_);
return v___x_1951_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0___boxed(lean_object* v_o_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_){
_start:
{
lean_object* v_res_1956_; 
v_res_1956_ = l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0(v_o_1952_, v___y_1953_, v___y_1954_);
lean_dec(v___y_1954_);
lean_dec_ref(v___y_1953_);
return v_res_1956_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__2(lean_object* v_opts_1957_, lean_object* v_opt_1958_){
_start:
{
lean_object* v_name_1959_; lean_object* v_defValue_1960_; lean_object* v_map_1961_; lean_object* v___x_1962_; 
v_name_1959_ = lean_ctor_get(v_opt_1958_, 0);
v_defValue_1960_ = lean_ctor_get(v_opt_1958_, 1);
v_map_1961_ = lean_ctor_get(v_opts_1957_, 0);
v___x_1962_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1961_, v_name_1959_);
if (lean_obj_tag(v___x_1962_) == 0)
{
uint8_t v___x_1963_; 
v___x_1963_ = lean_unbox(v_defValue_1960_);
return v___x_1963_;
}
else
{
lean_object* v_val_1964_; 
v_val_1964_ = lean_ctor_get(v___x_1962_, 0);
lean_inc(v_val_1964_);
lean_dec_ref_known(v___x_1962_, 1);
if (lean_obj_tag(v_val_1964_) == 1)
{
uint8_t v_v_1965_; 
v_v_1965_ = lean_ctor_get_uint8(v_val_1964_, 0);
lean_dec_ref_known(v_val_1964_, 0);
return v_v_1965_;
}
else
{
uint8_t v___x_1966_; 
lean_dec(v_val_1964_);
v___x_1966_ = lean_unbox(v_defValue_1960_);
return v___x_1966_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__2___boxed(lean_object* v_opts_1967_, lean_object* v_opt_1968_){
_start:
{
uint8_t v_res_1969_; lean_object* v_r_1970_; 
v_res_1969_ = l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__2(v_opts_1967_, v_opt_1968_);
lean_dec_ref(v_opt_1968_);
lean_dec_ref(v_opts_1967_);
v_r_1970_ = lean_box(v_res_1969_);
return v_r_1970_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3(lean_object* v_opts_1971_, lean_object* v_opt_1972_){
_start:
{
lean_object* v_name_1973_; lean_object* v_defValue_1974_; lean_object* v_map_1975_; lean_object* v___x_1976_; 
v_name_1973_ = lean_ctor_get(v_opt_1972_, 0);
v_defValue_1974_ = lean_ctor_get(v_opt_1972_, 1);
v_map_1975_ = lean_ctor_get(v_opts_1971_, 0);
v___x_1976_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1975_, v_name_1973_);
if (lean_obj_tag(v___x_1976_) == 0)
{
lean_inc(v_defValue_1974_);
return v_defValue_1974_;
}
else
{
lean_object* v_val_1977_; 
v_val_1977_ = lean_ctor_get(v___x_1976_, 0);
lean_inc(v_val_1977_);
lean_dec_ref_known(v___x_1976_, 1);
if (lean_obj_tag(v_val_1977_) == 3)
{
lean_object* v_v_1978_; 
v_v_1978_ = lean_ctor_get(v_val_1977_, 0);
lean_inc(v_v_1978_);
lean_dec_ref_known(v_val_1977_, 1);
return v_v_1978_;
}
else
{
lean_dec(v_val_1977_);
lean_inc(v_defValue_1974_);
return v_defValue_1974_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___boxed(lean_object* v_opts_1979_, lean_object* v_opt_1980_){
_start:
{
lean_object* v_res_1981_; 
v_res_1981_ = l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3(v_opts_1979_, v_opt_1980_);
lean_dec_ref(v_opt_1980_);
lean_dec_ref(v_opts_1979_);
return v_res_1981_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__0(lean_object* v_c_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_){
_start:
{
lean_object* v_options_1986_; lean_object* v___x_1987_; lean_object* v_a_1988_; lean_object* v___x_1990_; uint8_t v_isShared_1991_; uint8_t v_isSharedCheck_1998_; 
v_options_1986_ = lean_ctor_get(v_c_1982_, 6);
lean_inc_ref(v_options_1986_);
lean_dec_ref(v_c_1982_);
v___x_1987_ = l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0___redArg(v_options_1986_, v___y_1984_);
v_a_1988_ = lean_ctor_get(v___x_1987_, 0);
v_isSharedCheck_1998_ = !lean_is_exclusive(v___x_1987_);
if (v_isSharedCheck_1998_ == 0)
{
v___x_1990_ = v___x_1987_;
v_isShared_1991_ = v_isSharedCheck_1998_;
goto v_resetjp_1989_;
}
else
{
lean_inc(v_a_1988_);
lean_dec(v___x_1987_);
v___x_1990_ = lean_box(0);
v_isShared_1991_ = v_isSharedCheck_1998_;
goto v_resetjp_1989_;
}
v_resetjp_1989_:
{
lean_object* v___x_1992_; uint8_t v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1996_; 
v___x_1992_ = l_Lean_linter_doc_deferred;
v___x_1993_ = l_Lean_Linter_getLinterValue(v___x_1992_, v_a_1988_);
lean_dec(v_a_1988_);
v___x_1994_ = lean_box(v___x_1993_);
if (v_isShared_1991_ == 0)
{
lean_ctor_set(v___x_1990_, 0, v___x_1994_);
v___x_1996_ = v___x_1990_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v___x_1994_);
v___x_1996_ = v_reuseFailAlloc_1997_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
return v___x_1996_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__0___boxed(lean_object* v_c_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_){
_start:
{
lean_object* v_res_2003_; 
v_res_2003_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__0(v_c_1999_, v___y_2000_, v___y_2001_);
lean_dec(v___y_2001_);
lean_dec_ref(v___y_2000_);
return v_res_2003_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__1(lean_object* v_pkgRoot_2004_, lean_object* v_docCheckedModules_2005_, uint8_t v___y_2006_, lean_object* v_m_2007_){
_start:
{
uint8_t v___x_2008_; 
v___x_2008_ = l_Lean_Name_isPrefixOf(v_pkgRoot_2004_, v_m_2007_);
if (v___x_2008_ == 0)
{
return v___x_2008_;
}
else
{
uint8_t v___x_2009_; 
v___x_2009_ = l_Lean_NameSet_contains(v_docCheckedModules_2005_, v_m_2007_);
if (v___x_2009_ == 0)
{
return v___y_2006_;
}
else
{
uint8_t v___x_2010_; 
v___x_2010_ = 0;
return v___x_2010_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__1___boxed(lean_object* v_pkgRoot_2011_, lean_object* v_docCheckedModules_2012_, lean_object* v___y_2013_, lean_object* v_m_2014_){
_start:
{
uint8_t v___y_6681__boxed_2015_; uint8_t v_res_2016_; lean_object* v_r_2017_; 
v___y_6681__boxed_2015_ = lean_unbox(v___y_2013_);
v_res_2016_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__1(v_pkgRoot_2011_, v_docCheckedModules_2012_, v___y_6681__boxed_2015_, v_m_2014_);
lean_dec(v_m_2014_);
lean_dec(v_docCheckedModules_2012_);
lean_dec(v_pkgRoot_2011_);
v_r_2017_ = lean_box(v_res_2016_);
return v_r_2017_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5(uint8_t v___x_2025_, lean_object* v_sp_2026_, lean_object* v_as_2027_, size_t v_sz_2028_, size_t v_i_2029_, lean_object* v_b_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_){
_start:
{
lean_object* v_a_2035_; uint8_t v_unlocated_2039_; 
v_unlocated_2039_ = lean_usize_dec_lt(v_i_2029_, v_sz_2028_);
if (v_unlocated_2039_ == 0)
{
lean_object* v___x_2040_; 
lean_dec(v_sp_2026_);
v___x_2040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2040_, 0, v_b_2030_);
return v___x_2040_;
}
else
{
lean_object* v_a_2041_; lean_object* v_snd_2042_; lean_object* v_fst_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2165_; 
v_a_2041_ = lean_array_uget_borrowed(v_as_2027_, v_i_2029_);
v_snd_2042_ = lean_ctor_get(v_a_2041_, 1);
lean_inc(v_snd_2042_);
v_fst_2043_ = lean_ctor_get(v_snd_2042_, 0);
v_isSharedCheck_2165_ = !lean_is_exclusive(v_snd_2042_);
if (v_isSharedCheck_2165_ == 0)
{
lean_object* v_unused_2166_; 
v_unused_2166_ = lean_ctor_get(v_snd_2042_, 1);
lean_dec(v_unused_2166_);
v___x_2045_ = v_snd_2042_;
v_isShared_2046_ = v_isSharedCheck_2165_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_fst_2043_);
lean_dec(v_snd_2042_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2165_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v_fst_2047_; lean_object* v_fst_2048_; lean_object* v_snd_2049_; lean_object* v___x_2051_; uint8_t v_isShared_2052_; uint8_t v_isSharedCheck_2164_; 
v_fst_2047_ = lean_ctor_get(v_a_2041_, 0);
v_fst_2048_ = lean_ctor_get(v_b_2030_, 0);
v_snd_2049_ = lean_ctor_get(v_b_2030_, 1);
v_isSharedCheck_2164_ = !lean_is_exclusive(v_b_2030_);
if (v_isSharedCheck_2164_ == 0)
{
v___x_2051_ = v_b_2030_;
v_isShared_2052_ = v_isSharedCheck_2164_;
goto v_resetjp_2050_;
}
else
{
lean_inc(v_snd_2049_);
lean_inc(v_fst_2048_);
lean_dec(v_b_2030_);
v___x_2051_ = lean_box(0);
v_isShared_2052_ = v_isSharedCheck_2164_;
goto v_resetjp_2050_;
}
v_resetjp_2050_:
{
lean_object* v_site_2053_; lean_object* v___x_2054_; 
v_site_2053_ = lean_ctor_get(v_fst_2043_, 0);
lean_inc_ref_n(v_site_2053_, 2);
lean_dec(v_fst_2043_);
v___x_2054_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f(v_fst_2047_, v_site_2053_, v___y_2031_, v___y_2032_);
if (lean_obj_tag(v___x_2054_) == 0)
{
lean_object* v_a_2055_; 
v_a_2055_ = lean_ctor_get(v___x_2054_, 0);
lean_inc(v_a_2055_);
lean_dec_ref_known(v___x_2054_, 1);
if (lean_obj_tag(v_a_2055_) == 0)
{
lean_object* v___x_2056_; lean_object* v_name_2057_; lean_object* v_ref_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; 
lean_dec(v_snd_2049_);
v___x_2056_ = l_Lean_linter_doc_deferred;
v_name_2057_ = lean_ctor_get(v___x_2056_, 0);
v_ref_2058_ = lean_ctor_get(v___y_2031_, 2);
lean_inc(v_fst_2047_);
v___x_2059_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_2047_, v___x_2025_);
v___x_2060_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__0));
v___x_2061_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite(v_site_2053_);
v___x_2062_ = lean_string_append(v___x_2060_, v___x_2061_);
lean_dec_ref(v___x_2061_);
v___x_2063_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__1));
v___x_2064_ = lean_string_append(v___x_2062_, v___x_2063_);
v___x_2065_ = lean_string_append(v___x_2064_, v___x_2059_);
lean_dec_ref(v___x_2059_);
v___x_2066_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__2));
v___x_2067_ = lean_string_append(v___x_2065_, v___x_2066_);
lean_inc(v_name_2057_);
v___x_2068_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_2057_, v___x_2025_);
v___x_2069_ = lean_string_append(v___x_2067_, v___x_2068_);
lean_dec_ref(v___x_2068_);
v___x_2070_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__3));
v___x_2071_ = lean_string_append(v___x_2069_, v___x_2070_);
v___x_2072_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v___x_2071_);
if (lean_obj_tag(v___x_2072_) == 0)
{
lean_object* v___x_2073_; lean_object* v___x_2075_; 
lean_dec_ref_known(v___x_2072_, 1);
lean_del_object(v___x_2045_);
v___x_2073_ = lean_box(v_unlocated_2039_);
if (v_isShared_2052_ == 0)
{
lean_ctor_set(v___x_2051_, 1, v___x_2073_);
v___x_2075_ = v___x_2051_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v_fst_2048_);
lean_ctor_set(v_reuseFailAlloc_2076_, 1, v___x_2073_);
v___x_2075_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
v_a_2035_ = v___x_2075_;
goto v___jp_2034_;
}
}
else
{
lean_object* v_a_2077_; lean_object* v___x_2079_; uint8_t v_isShared_2080_; uint8_t v_isSharedCheck_2090_; 
lean_del_object(v___x_2051_);
lean_dec(v_fst_2048_);
lean_dec(v_sp_2026_);
v_a_2077_ = lean_ctor_get(v___x_2072_, 0);
v_isSharedCheck_2090_ = !lean_is_exclusive(v___x_2072_);
if (v_isSharedCheck_2090_ == 0)
{
v___x_2079_ = v___x_2072_;
v_isShared_2080_ = v_isSharedCheck_2090_;
goto v_resetjp_2078_;
}
else
{
lean_inc(v_a_2077_);
lean_dec(v___x_2072_);
v___x_2079_ = lean_box(0);
v_isShared_2080_ = v_isSharedCheck_2090_;
goto v_resetjp_2078_;
}
v_resetjp_2078_:
{
lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2085_; 
v___x_2081_ = lean_io_error_to_string(v_a_2077_);
v___x_2082_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2082_, 0, v___x_2081_);
v___x_2083_ = l_Lean_MessageData_ofFormat(v___x_2082_);
lean_inc(v_ref_2058_);
if (v_isShared_2046_ == 0)
{
lean_ctor_set(v___x_2045_, 1, v___x_2083_);
lean_ctor_set(v___x_2045_, 0, v_ref_2058_);
v___x_2085_ = v___x_2045_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2089_; 
v_reuseFailAlloc_2089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2089_, 0, v_ref_2058_);
lean_ctor_set(v_reuseFailAlloc_2089_, 1, v___x_2083_);
v___x_2085_ = v_reuseFailAlloc_2089_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
lean_object* v___x_2087_; 
if (v_isShared_2080_ == 0)
{
lean_ctor_set(v___x_2079_, 0, v___x_2085_);
v___x_2087_ = v___x_2079_;
goto v_reusejp_2086_;
}
else
{
lean_object* v_reuseFailAlloc_2088_; 
v_reuseFailAlloc_2088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2088_, 0, v___x_2085_);
v___x_2087_ = v_reuseFailAlloc_2088_;
goto v_reusejp_2086_;
}
v_reusejp_2086_:
{
return v___x_2087_;
}
}
}
}
}
else
{
lean_object* v_val_2091_; lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2155_; 
lean_dec_ref(v_site_2053_);
v_val_2091_ = lean_ctor_get(v_a_2055_, 0);
v_isSharedCheck_2155_ = !lean_is_exclusive(v_a_2055_);
if (v_isSharedCheck_2155_ == 0)
{
v___x_2093_ = v_a_2055_;
v_isShared_2094_ = v_isSharedCheck_2155_;
goto v_resetjp_2092_;
}
else
{
lean_inc(v_val_2091_);
lean_dec(v_a_2055_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2155_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
lean_object* v_ref_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; 
v_ref_2095_ = lean_ctor_get(v___y_2031_, 2);
v___x_2096_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__4));
lean_inc(v_fst_2047_);
lean_inc(v_sp_2026_);
v___x_2097_ = l_Lean_SearchPath_findWithExt(v_sp_2026_, v___x_2096_, v_fst_2047_);
if (lean_obj_tag(v___x_2097_) == 0)
{
lean_object* v_a_2098_; 
v_a_2098_ = lean_ctor_get(v___x_2097_, 0);
lean_inc(v_a_2098_);
lean_dec_ref_known(v___x_2097_, 1);
if (lean_obj_tag(v_a_2098_) == 0)
{
lean_object* v___x_2099_; lean_object* v_name_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; 
lean_dec(v_val_2091_);
lean_dec(v_snd_2049_);
v___x_2099_ = l_Lean_linter_doc_deferred;
v_name_2100_ = lean_ctor_get(v___x_2099_, 0);
v___x_2101_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__5));
lean_inc(v_fst_2047_);
v___x_2102_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_2047_, v___x_2025_);
v___x_2103_ = lean_string_append(v___x_2101_, v___x_2102_);
lean_dec_ref(v___x_2102_);
v___x_2104_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__6));
v___x_2105_ = lean_string_append(v___x_2103_, v___x_2104_);
lean_inc(v_name_2100_);
v___x_2106_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_2100_, v___x_2025_);
v___x_2107_ = lean_string_append(v___x_2105_, v___x_2106_);
lean_dec_ref(v___x_2106_);
v___x_2108_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__3));
v___x_2109_ = lean_string_append(v___x_2107_, v___x_2108_);
v___x_2110_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v___x_2109_);
if (lean_obj_tag(v___x_2110_) == 0)
{
lean_object* v___x_2111_; lean_object* v___x_2113_; 
lean_dec_ref_known(v___x_2110_, 1);
lean_del_object(v___x_2093_);
lean_del_object(v___x_2045_);
v___x_2111_ = lean_box(v_unlocated_2039_);
if (v_isShared_2052_ == 0)
{
lean_ctor_set(v___x_2051_, 1, v___x_2111_);
v___x_2113_ = v___x_2051_;
goto v_reusejp_2112_;
}
else
{
lean_object* v_reuseFailAlloc_2114_; 
v_reuseFailAlloc_2114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2114_, 0, v_fst_2048_);
lean_ctor_set(v_reuseFailAlloc_2114_, 1, v___x_2111_);
v___x_2113_ = v_reuseFailAlloc_2114_;
goto v_reusejp_2112_;
}
v_reusejp_2112_:
{
v_a_2035_ = v___x_2113_;
goto v___jp_2034_;
}
}
else
{
lean_object* v_a_2115_; lean_object* v___x_2117_; uint8_t v_isShared_2118_; uint8_t v_isSharedCheck_2130_; 
lean_del_object(v___x_2051_);
lean_dec(v_fst_2048_);
lean_dec(v_sp_2026_);
v_a_2115_ = lean_ctor_get(v___x_2110_, 0);
v_isSharedCheck_2130_ = !lean_is_exclusive(v___x_2110_);
if (v_isSharedCheck_2130_ == 0)
{
v___x_2117_ = v___x_2110_;
v_isShared_2118_ = v_isSharedCheck_2130_;
goto v_resetjp_2116_;
}
else
{
lean_inc(v_a_2115_);
lean_dec(v___x_2110_);
v___x_2117_ = lean_box(0);
v_isShared_2118_ = v_isSharedCheck_2130_;
goto v_resetjp_2116_;
}
v_resetjp_2116_:
{
lean_object* v___x_2119_; lean_object* v___x_2121_; 
v___x_2119_ = lean_io_error_to_string(v_a_2115_);
if (v_isShared_2094_ == 0)
{
lean_ctor_set_tag(v___x_2093_, 3);
lean_ctor_set(v___x_2093_, 0, v___x_2119_);
v___x_2121_ = v___x_2093_;
goto v_reusejp_2120_;
}
else
{
lean_object* v_reuseFailAlloc_2129_; 
v_reuseFailAlloc_2129_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2129_, 0, v___x_2119_);
v___x_2121_ = v_reuseFailAlloc_2129_;
goto v_reusejp_2120_;
}
v_reusejp_2120_:
{
lean_object* v___x_2122_; lean_object* v___x_2124_; 
v___x_2122_ = l_Lean_MessageData_ofFormat(v___x_2121_);
lean_inc(v_ref_2095_);
if (v_isShared_2046_ == 0)
{
lean_ctor_set(v___x_2045_, 1, v___x_2122_);
lean_ctor_set(v___x_2045_, 0, v_ref_2095_);
v___x_2124_ = v___x_2045_;
goto v_reusejp_2123_;
}
else
{
lean_object* v_reuseFailAlloc_2128_; 
v_reuseFailAlloc_2128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2128_, 0, v_ref_2095_);
lean_ctor_set(v_reuseFailAlloc_2128_, 1, v___x_2122_);
v___x_2124_ = v_reuseFailAlloc_2128_;
goto v_reusejp_2123_;
}
v_reusejp_2123_:
{
lean_object* v___x_2126_; 
if (v_isShared_2118_ == 0)
{
lean_ctor_set(v___x_2117_, 0, v___x_2124_);
v___x_2126_ = v___x_2117_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v___x_2124_);
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
}
else
{
lean_object* v_val_2131_; lean_object* v___x_2132_; lean_object* v_name_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2137_; 
lean_del_object(v___x_2093_);
lean_del_object(v___x_2045_);
v_val_2131_ = lean_ctor_get(v_a_2098_, 0);
lean_inc(v_val_2131_);
lean_dec_ref_known(v_a_2098_, 1);
v___x_2132_ = l_Lean_linter_doc_deferred;
v_name_2133_ = lean_ctor_get(v___x_2132_, 0);
lean_inc(v_name_2133_);
v___x_2134_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2134_, 0, v_val_2131_);
lean_ctor_set(v___x_2134_, 1, v_val_2091_);
lean_ctor_set(v___x_2134_, 2, v_name_2133_);
v___x_2135_ = lean_array_push(v_fst_2048_, v___x_2134_);
if (v_isShared_2052_ == 0)
{
lean_ctor_set(v___x_2051_, 0, v___x_2135_);
v___x_2137_ = v___x_2051_;
goto v_reusejp_2136_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v___x_2135_);
lean_ctor_set(v_reuseFailAlloc_2138_, 1, v_snd_2049_);
v___x_2137_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2136_;
}
v_reusejp_2136_:
{
v_a_2035_ = v___x_2137_;
goto v___jp_2034_;
}
}
}
else
{
lean_object* v_a_2139_; lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2154_; 
lean_dec(v_val_2091_);
lean_del_object(v___x_2051_);
lean_dec(v_snd_2049_);
lean_dec(v_fst_2048_);
lean_dec(v_sp_2026_);
v_a_2139_ = lean_ctor_get(v___x_2097_, 0);
v_isSharedCheck_2154_ = !lean_is_exclusive(v___x_2097_);
if (v_isSharedCheck_2154_ == 0)
{
v___x_2141_ = v___x_2097_;
v_isShared_2142_ = v_isSharedCheck_2154_;
goto v_resetjp_2140_;
}
else
{
lean_inc(v_a_2139_);
lean_dec(v___x_2097_);
v___x_2141_ = lean_box(0);
v_isShared_2142_ = v_isSharedCheck_2154_;
goto v_resetjp_2140_;
}
v_resetjp_2140_:
{
lean_object* v___x_2143_; lean_object* v___x_2145_; 
v___x_2143_ = lean_io_error_to_string(v_a_2139_);
if (v_isShared_2094_ == 0)
{
lean_ctor_set_tag(v___x_2093_, 3);
lean_ctor_set(v___x_2093_, 0, v___x_2143_);
v___x_2145_ = v___x_2093_;
goto v_reusejp_2144_;
}
else
{
lean_object* v_reuseFailAlloc_2153_; 
v_reuseFailAlloc_2153_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2153_, 0, v___x_2143_);
v___x_2145_ = v_reuseFailAlloc_2153_;
goto v_reusejp_2144_;
}
v_reusejp_2144_:
{
lean_object* v___x_2146_; lean_object* v___x_2148_; 
v___x_2146_ = l_Lean_MessageData_ofFormat(v___x_2145_);
lean_inc(v_ref_2095_);
if (v_isShared_2046_ == 0)
{
lean_ctor_set(v___x_2045_, 1, v___x_2146_);
lean_ctor_set(v___x_2045_, 0, v_ref_2095_);
v___x_2148_ = v___x_2045_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2152_; 
v_reuseFailAlloc_2152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2152_, 0, v_ref_2095_);
lean_ctor_set(v_reuseFailAlloc_2152_, 1, v___x_2146_);
v___x_2148_ = v_reuseFailAlloc_2152_;
goto v_reusejp_2147_;
}
v_reusejp_2147_:
{
lean_object* v___x_2150_; 
if (v_isShared_2142_ == 0)
{
lean_ctor_set(v___x_2141_, 0, v___x_2148_);
v___x_2150_ = v___x_2141_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v___x_2148_);
v___x_2150_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
return v___x_2150_;
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
lean_object* v_a_2156_; lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2163_; 
lean_dec_ref(v_site_2053_);
lean_del_object(v___x_2051_);
lean_dec(v_snd_2049_);
lean_dec(v_fst_2048_);
lean_del_object(v___x_2045_);
lean_dec(v_sp_2026_);
v_a_2156_ = lean_ctor_get(v___x_2054_, 0);
v_isSharedCheck_2163_ = !lean_is_exclusive(v___x_2054_);
if (v_isSharedCheck_2163_ == 0)
{
v___x_2158_ = v___x_2054_;
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
else
{
lean_inc(v_a_2156_);
lean_dec(v___x_2054_);
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
}
}
v___jp_2034_:
{
size_t v___x_2036_; size_t v___x_2037_; 
v___x_2036_ = ((size_t)1ULL);
v___x_2037_ = lean_usize_add(v_i_2029_, v___x_2036_);
v_i_2029_ = v___x_2037_;
v_b_2030_ = v_a_2035_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___boxed(lean_object* v___x_2167_, lean_object* v_sp_2168_, lean_object* v_as_2169_, lean_object* v_sz_2170_, lean_object* v_i_2171_, lean_object* v_b_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_){
_start:
{
uint8_t v___x_6705__boxed_2176_; size_t v_sz_boxed_2177_; size_t v_i_boxed_2178_; lean_object* v_res_2179_; 
v___x_6705__boxed_2176_ = lean_unbox(v___x_2167_);
v_sz_boxed_2177_ = lean_unbox_usize(v_sz_2170_);
lean_dec(v_sz_2170_);
v_i_boxed_2178_ = lean_unbox_usize(v_i_2171_);
lean_dec(v_i_2171_);
v_res_2179_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5(v___x_6705__boxed_2176_, v_sp_2168_, v_as_2169_, v_sz_boxed_2177_, v_i_boxed_2178_, v_b_2172_, v___y_2173_, v___y_2174_);
lean_dec(v___y_2174_);
lean_dec_ref(v___y_2173_);
lean_dec_ref(v_as_2169_);
return v_res_2179_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg(lean_object* v_sp_2186_, uint8_t v___y_2187_, lean_object* v_as_2188_, size_t v_sz_2189_, size_t v_i_2190_, lean_object* v_b_2191_, lean_object* v___y_2192_){
_start:
{
lean_object* v_a_2195_; uint8_t v___x_2199_; 
v___x_2199_ = lean_usize_dec_lt(v_i_2190_, v_sz_2189_);
if (v___x_2199_ == 0)
{
lean_object* v___x_2200_; 
lean_dec(v_sp_2186_);
v___x_2200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2200_, 0, v_b_2191_);
return v___x_2200_;
}
else
{
lean_object* v_a_2201_; lean_object* v_snd_2202_; lean_object* v_fst_2203_; lean_object* v_fst_2204_; lean_object* v_snd_2205_; lean_object* v___x_2207_; uint8_t v_isShared_2208_; uint8_t v_isSharedCheck_2298_; 
v_a_2201_ = lean_array_uget_borrowed(v_as_2188_, v_i_2190_);
v_snd_2202_ = lean_ctor_get(v_a_2201_, 1);
lean_inc(v_snd_2202_);
v_fst_2203_ = lean_ctor_get(v_snd_2202_, 0);
lean_inc(v_fst_2203_);
v_fst_2204_ = lean_ctor_get(v_a_2201_, 0);
v_snd_2205_ = lean_ctor_get(v_snd_2202_, 1);
v_isSharedCheck_2298_ = !lean_is_exclusive(v_snd_2202_);
if (v_isSharedCheck_2298_ == 0)
{
lean_object* v_unused_2299_; 
v_unused_2299_ = lean_ctor_get(v_snd_2202_, 0);
lean_dec(v_unused_2299_);
v___x_2207_ = v_snd_2202_;
v_isShared_2208_ = v_isSharedCheck_2298_;
goto v_resetjp_2206_;
}
else
{
lean_inc(v_snd_2205_);
lean_dec(v_snd_2202_);
v___x_2207_ = lean_box(0);
v_isShared_2208_ = v_isSharedCheck_2298_;
goto v_resetjp_2206_;
}
v_resetjp_2206_:
{
lean_object* v_site_2209_; lean_object* v_sourceString_2210_; lean_object* v___x_2211_; lean_object* v___y_2213_; lean_object* v___x_2290_; lean_object* v___x_2291_; uint8_t v___x_2292_; 
v_site_2209_ = lean_ctor_get(v_fst_2203_, 0);
lean_inc_ref(v_site_2209_);
v_sourceString_2210_ = lean_ctor_get(v_fst_2203_, 2);
lean_inc_ref(v_sourceString_2210_);
lean_dec(v_fst_2203_);
v___x_2211_ = lean_box(0);
v___x_2290_ = lean_string_utf8_byte_size(v_sourceString_2210_);
v___x_2291_ = lean_unsigned_to_nat(0u);
v___x_2292_ = lean_nat_dec_eq(v___x_2290_, v___x_2291_);
if (v___x_2292_ == 0)
{
lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; 
v___x_2293_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__4));
v___x_2294_ = lean_string_append(v___x_2293_, v_sourceString_2210_);
lean_dec_ref(v_sourceString_2210_);
v___x_2295_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__5));
v___x_2296_ = lean_string_append(v___x_2294_, v___x_2295_);
v___y_2213_ = v___x_2296_;
goto v___jp_2212_;
}
else
{
lean_object* v___x_2297_; 
lean_dec_ref(v_sourceString_2210_);
v___x_2297_ = ((lean_object*)(l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__0));
v___y_2213_ = v___x_2297_;
goto v___jp_2212_;
}
v___jp_2212_:
{
lean_object* v_ref_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; 
v_ref_2214_ = lean_ctor_get(v___y_2192_, 2);
v___x_2215_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__4));
lean_inc(v_fst_2204_);
lean_inc(v_sp_2186_);
v___x_2216_ = l_Lean_SearchPath_findWithExt(v_sp_2186_, v___x_2215_, v_fst_2204_);
if (lean_obj_tag(v___x_2216_) == 0)
{
lean_object* v_a_2217_; 
v_a_2217_ = lean_ctor_get(v___x_2216_, 0);
lean_inc(v_a_2217_);
lean_dec_ref_known(v___x_2216_, 1);
if (lean_obj_tag(v_a_2217_) == 0)
{
lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; 
v___x_2218_ = l_Lean_MessageData_toString(v_snd_2205_);
v___x_2219_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__0));
lean_inc(v_fst_2204_);
v___x_2220_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_2204_, v___y_2187_);
v___x_2221_ = lean_string_append(v___x_2219_, v___x_2220_);
lean_dec_ref(v___x_2220_);
v___x_2222_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__1));
v___x_2223_ = lean_string_append(v___x_2221_, v___x_2222_);
v___x_2224_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite(v_site_2209_);
v___x_2225_ = lean_string_append(v___x_2223_, v___x_2224_);
lean_dec_ref(v___x_2224_);
v___x_2226_ = lean_string_append(v___x_2225_, v___y_2213_);
lean_dec_ref(v___y_2213_);
v___x_2227_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__2));
v___x_2228_ = lean_string_append(v___x_2226_, v___x_2227_);
v___x_2229_ = lean_string_append(v___x_2228_, v___x_2218_);
lean_dec_ref(v___x_2218_);
v___x_2230_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v___x_2229_);
if (lean_obj_tag(v___x_2230_) == 0)
{
lean_dec_ref_known(v___x_2230_, 1);
lean_del_object(v___x_2207_);
v_a_2195_ = v___x_2211_;
goto v___jp_2194_;
}
else
{
lean_object* v_a_2231_; lean_object* v___x_2233_; uint8_t v_isShared_2234_; uint8_t v_isSharedCheck_2244_; 
lean_dec(v_sp_2186_);
v_a_2231_ = lean_ctor_get(v___x_2230_, 0);
v_isSharedCheck_2244_ = !lean_is_exclusive(v___x_2230_);
if (v_isSharedCheck_2244_ == 0)
{
v___x_2233_ = v___x_2230_;
v_isShared_2234_ = v_isSharedCheck_2244_;
goto v_resetjp_2232_;
}
else
{
lean_inc(v_a_2231_);
lean_dec(v___x_2230_);
v___x_2233_ = lean_box(0);
v_isShared_2234_ = v_isSharedCheck_2244_;
goto v_resetjp_2232_;
}
v_resetjp_2232_:
{
lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2239_; 
v___x_2235_ = lean_io_error_to_string(v_a_2231_);
v___x_2236_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2236_, 0, v___x_2235_);
v___x_2237_ = l_Lean_MessageData_ofFormat(v___x_2236_);
lean_inc(v_ref_2214_);
if (v_isShared_2208_ == 0)
{
lean_ctor_set(v___x_2207_, 1, v___x_2237_);
lean_ctor_set(v___x_2207_, 0, v_ref_2214_);
v___x_2239_ = v___x_2207_;
goto v_reusejp_2238_;
}
else
{
lean_object* v_reuseFailAlloc_2243_; 
v_reuseFailAlloc_2243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2243_, 0, v_ref_2214_);
lean_ctor_set(v_reuseFailAlloc_2243_, 1, v___x_2237_);
v___x_2239_ = v_reuseFailAlloc_2243_;
goto v_reusejp_2238_;
}
v_reusejp_2238_:
{
lean_object* v___x_2241_; 
if (v_isShared_2234_ == 0)
{
lean_ctor_set(v___x_2233_, 0, v___x_2239_);
v___x_2241_ = v___x_2233_;
goto v_reusejp_2240_;
}
else
{
lean_object* v_reuseFailAlloc_2242_; 
v_reuseFailAlloc_2242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2242_, 0, v___x_2239_);
v___x_2241_ = v_reuseFailAlloc_2242_;
goto v_reusejp_2240_;
}
v_reusejp_2240_:
{
return v___x_2241_;
}
}
}
}
}
else
{
lean_object* v_val_2245_; lean_object* v___x_2247_; uint8_t v_isShared_2248_; uint8_t v_isSharedCheck_2275_; 
v_val_2245_ = lean_ctor_get(v_a_2217_, 0);
v_isSharedCheck_2275_ = !lean_is_exclusive(v_a_2217_);
if (v_isSharedCheck_2275_ == 0)
{
v___x_2247_ = v_a_2217_;
v_isShared_2248_ = v_isSharedCheck_2275_;
goto v_resetjp_2246_;
}
else
{
lean_inc(v_val_2245_);
lean_dec(v_a_2217_);
v___x_2247_ = lean_box(0);
v_isShared_2248_ = v_isSharedCheck_2275_;
goto v_resetjp_2246_;
}
v_resetjp_2246_:
{
lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; 
v___x_2249_ = l_Lean_MessageData_toString(v_snd_2205_);
v___x_2250_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__3));
v___x_2251_ = lean_string_append(v_val_2245_, v___x_2250_);
v___x_2252_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite(v_site_2209_);
v___x_2253_ = lean_string_append(v___x_2251_, v___x_2252_);
lean_dec_ref(v___x_2252_);
v___x_2254_ = lean_string_append(v___x_2253_, v___y_2213_);
lean_dec_ref(v___y_2213_);
v___x_2255_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__2));
v___x_2256_ = lean_string_append(v___x_2254_, v___x_2255_);
v___x_2257_ = lean_string_append(v___x_2256_, v___x_2249_);
lean_dec_ref(v___x_2249_);
v___x_2258_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v___x_2257_);
if (lean_obj_tag(v___x_2258_) == 0)
{
lean_dec_ref_known(v___x_2258_, 1);
lean_del_object(v___x_2247_);
lean_del_object(v___x_2207_);
v_a_2195_ = v___x_2211_;
goto v___jp_2194_;
}
else
{
lean_object* v_a_2259_; lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2274_; 
lean_dec(v_sp_2186_);
v_a_2259_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2274_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2274_ == 0)
{
v___x_2261_ = v___x_2258_;
v_isShared_2262_ = v_isSharedCheck_2274_;
goto v_resetjp_2260_;
}
else
{
lean_inc(v_a_2259_);
lean_dec(v___x_2258_);
v___x_2261_ = lean_box(0);
v_isShared_2262_ = v_isSharedCheck_2274_;
goto v_resetjp_2260_;
}
v_resetjp_2260_:
{
lean_object* v___x_2263_; lean_object* v___x_2265_; 
v___x_2263_ = lean_io_error_to_string(v_a_2259_);
if (v_isShared_2248_ == 0)
{
lean_ctor_set_tag(v___x_2247_, 3);
lean_ctor_set(v___x_2247_, 0, v___x_2263_);
v___x_2265_ = v___x_2247_;
goto v_reusejp_2264_;
}
else
{
lean_object* v_reuseFailAlloc_2273_; 
v_reuseFailAlloc_2273_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2273_, 0, v___x_2263_);
v___x_2265_ = v_reuseFailAlloc_2273_;
goto v_reusejp_2264_;
}
v_reusejp_2264_:
{
lean_object* v___x_2266_; lean_object* v___x_2268_; 
v___x_2266_ = l_Lean_MessageData_ofFormat(v___x_2265_);
lean_inc(v_ref_2214_);
if (v_isShared_2208_ == 0)
{
lean_ctor_set(v___x_2207_, 1, v___x_2266_);
lean_ctor_set(v___x_2207_, 0, v_ref_2214_);
v___x_2268_ = v___x_2207_;
goto v_reusejp_2267_;
}
else
{
lean_object* v_reuseFailAlloc_2272_; 
v_reuseFailAlloc_2272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2272_, 0, v_ref_2214_);
lean_ctor_set(v_reuseFailAlloc_2272_, 1, v___x_2266_);
v___x_2268_ = v_reuseFailAlloc_2272_;
goto v_reusejp_2267_;
}
v_reusejp_2267_:
{
lean_object* v___x_2270_; 
if (v_isShared_2262_ == 0)
{
lean_ctor_set(v___x_2261_, 0, v___x_2268_);
v___x_2270_ = v___x_2261_;
goto v_reusejp_2269_;
}
else
{
lean_object* v_reuseFailAlloc_2271_; 
v_reuseFailAlloc_2271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2271_, 0, v___x_2268_);
v___x_2270_ = v_reuseFailAlloc_2271_;
goto v_reusejp_2269_;
}
v_reusejp_2269_:
{
return v___x_2270_;
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
lean_object* v_a_2276_; lean_object* v___x_2278_; uint8_t v_isShared_2279_; uint8_t v_isSharedCheck_2289_; 
lean_dec_ref(v___y_2213_);
lean_dec_ref(v_site_2209_);
lean_dec(v_snd_2205_);
lean_dec(v_sp_2186_);
v_a_2276_ = lean_ctor_get(v___x_2216_, 0);
v_isSharedCheck_2289_ = !lean_is_exclusive(v___x_2216_);
if (v_isSharedCheck_2289_ == 0)
{
v___x_2278_ = v___x_2216_;
v_isShared_2279_ = v_isSharedCheck_2289_;
goto v_resetjp_2277_;
}
else
{
lean_inc(v_a_2276_);
lean_dec(v___x_2216_);
v___x_2278_ = lean_box(0);
v_isShared_2279_ = v_isSharedCheck_2289_;
goto v_resetjp_2277_;
}
v_resetjp_2277_:
{
lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2284_; 
v___x_2280_ = lean_io_error_to_string(v_a_2276_);
v___x_2281_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2281_, 0, v___x_2280_);
v___x_2282_ = l_Lean_MessageData_ofFormat(v___x_2281_);
lean_inc(v_ref_2214_);
if (v_isShared_2208_ == 0)
{
lean_ctor_set(v___x_2207_, 1, v___x_2282_);
lean_ctor_set(v___x_2207_, 0, v_ref_2214_);
v___x_2284_ = v___x_2207_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v_ref_2214_);
lean_ctor_set(v_reuseFailAlloc_2288_, 1, v___x_2282_);
v___x_2284_ = v_reuseFailAlloc_2288_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
lean_object* v___x_2286_; 
if (v_isShared_2279_ == 0)
{
lean_ctor_set(v___x_2278_, 0, v___x_2284_);
v___x_2286_ = v___x_2278_;
goto v_reusejp_2285_;
}
else
{
lean_object* v_reuseFailAlloc_2287_; 
v_reuseFailAlloc_2287_ = lean_alloc_ctor(1, 1, 0);
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
}
}
}
}
v___jp_2194_:
{
size_t v___x_2196_; size_t v___x_2197_; 
v___x_2196_ = ((size_t)1ULL);
v___x_2197_ = lean_usize_add(v_i_2190_, v___x_2196_);
v_i_2190_ = v___x_2197_;
v_b_2191_ = v_a_2195_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___boxed(lean_object* v_sp_2300_, lean_object* v___y_2301_, lean_object* v_as_2302_, lean_object* v_sz_2303_, lean_object* v_i_2304_, lean_object* v_b_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_){
_start:
{
uint8_t v___y_6987__boxed_2308_; size_t v_sz_boxed_2309_; size_t v_i_boxed_2310_; lean_object* v_res_2311_; 
v___y_6987__boxed_2308_ = lean_unbox(v___y_2301_);
v_sz_boxed_2309_ = lean_unbox_usize(v_sz_2303_);
lean_dec(v_sz_2303_);
v_i_boxed_2310_ = lean_unbox_usize(v_i_2304_);
lean_dec(v_i_2304_);
v_res_2311_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg(v_sp_2300_, v___y_6987__boxed_2308_, v_as_2302_, v_sz_boxed_2309_, v_i_boxed_2310_, v_b_2305_, v___y_2306_);
lean_dec_ref(v___y_2306_);
lean_dec_ref(v_as_2302_);
return v_res_2311_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__1(lean_object* v_pkgRoot_2312_, lean_object* v_as_2313_, size_t v_sz_2314_, size_t v_i_2315_, lean_object* v_b_2316_){
_start:
{
lean_object* v_a_2319_; uint8_t v___x_2323_; 
v___x_2323_ = lean_usize_dec_lt(v_i_2315_, v_sz_2314_);
if (v___x_2323_ == 0)
{
lean_object* v___x_2324_; 
v___x_2324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2324_, 0, v_b_2316_);
return v___x_2324_;
}
else
{
lean_object* v_a_2325_; uint8_t v___x_2326_; 
v_a_2325_ = lean_array_uget_borrowed(v_as_2313_, v_i_2315_);
v___x_2326_ = l_Lean_Name_isPrefixOf(v_pkgRoot_2312_, v_a_2325_);
if (v___x_2326_ == 0)
{
v_a_2319_ = v_b_2316_;
goto v___jp_2318_;
}
else
{
lean_object* v___x_2327_; 
lean_inc(v_a_2325_);
v___x_2327_ = l_Lean_NameSet_insert(v_b_2316_, v_a_2325_);
v_a_2319_ = v___x_2327_;
goto v___jp_2318_;
}
}
v___jp_2318_:
{
size_t v___x_2320_; size_t v___x_2321_; 
v___x_2320_ = ((size_t)1ULL);
v___x_2321_ = lean_usize_add(v_i_2315_, v___x_2320_);
v_i_2315_ = v___x_2321_;
v_b_2316_ = v_a_2319_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__1___boxed(lean_object* v_pkgRoot_2328_, lean_object* v_as_2329_, lean_object* v_sz_2330_, lean_object* v_i_2331_, lean_object* v_b_2332_, lean_object* v___y_2333_){
_start:
{
size_t v_sz_boxed_2334_; size_t v_i_boxed_2335_; lean_object* v_res_2336_; 
v_sz_boxed_2334_ = lean_unbox_usize(v_sz_2330_);
lean_dec(v_sz_2330_);
v_i_boxed_2335_ = lean_unbox_usize(v_i_2331_);
lean_dec(v_i_2331_);
v_res_2336_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__1(v_pkgRoot_2328_, v_as_2329_, v_sz_boxed_2334_, v_i_boxed_2335_, v_b_2332_);
lean_dec_ref(v_as_2329_);
lean_dec(v_pkgRoot_2328_);
return v_res_2336_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5(void){
_start:
{
lean_object* v___x_2343_; lean_object* v___x_2344_; 
v___x_2343_ = l_Lean_Options_empty;
v___x_2344_ = l_Lean_Core_getMaxHeartbeats(v___x_2343_);
return v___x_2344_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6(void){
_start:
{
lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; 
v___x_2345_ = lean_unsigned_to_nat(1u);
v___x_2346_ = l_Lean_firstFrontendMacroScope;
v___x_2347_ = lean_nat_add(v___x_2346_, v___x_2345_);
return v___x_2347_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__11(void){
_start:
{
lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; 
v___x_2358_ = lean_unsigned_to_nat(32u);
v___x_2359_ = lean_mk_empty_array_with_capacity(v___x_2358_);
v___x_2360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2360_, 0, v___x_2359_);
return v___x_2360_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12(void){
_start:
{
size_t v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; 
v___x_2361_ = ((size_t)5ULL);
v___x_2362_ = lean_unsigned_to_nat(0u);
v___x_2363_ = lean_unsigned_to_nat(32u);
v___x_2364_ = lean_mk_empty_array_with_capacity(v___x_2363_);
v___x_2365_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__11, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__11_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__11);
v___x_2366_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2366_, 0, v___x_2365_);
lean_ctor_set(v___x_2366_, 1, v___x_2364_);
lean_ctor_set(v___x_2366_, 2, v___x_2362_);
lean_ctor_set(v___x_2366_, 3, v___x_2362_);
lean_ctor_set_usize(v___x_2366_, 4, v___x_2361_);
return v___x_2366_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13(void){
_start:
{
lean_object* v___x_2367_; uint64_t v___x_2368_; lean_object* v___x_2369_; 
v___x_2367_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12);
v___x_2368_ = 0ULL;
v___x_2369_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2369_, 0, v___x_2367_);
lean_ctor_set_uint64(v___x_2369_, sizeof(void*)*1, v___x_2368_);
return v___x_2369_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14(void){
_start:
{
lean_object* v___x_2370_; 
v___x_2370_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2370_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__15(void){
_start:
{
lean_object* v___x_2371_; lean_object* v___x_2372_; 
v___x_2371_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14);
v___x_2372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2372_, 0, v___x_2371_);
return v___x_2372_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16(void){
_start:
{
lean_object* v___x_2373_; lean_object* v___x_2374_; 
v___x_2373_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__15, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__15_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__15);
v___x_2374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2374_, 0, v___x_2373_);
lean_ctor_set(v___x_2374_, 1, v___x_2373_);
return v___x_2374_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17(void){
_start:
{
lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; 
v___x_2375_ = l_Lean_NameSet_empty;
v___x_2376_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12);
v___x_2377_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2377_, 0, v___x_2376_);
lean_ctor_set(v___x_2377_, 1, v___x_2376_);
lean_ctor_set(v___x_2377_, 2, v___x_2375_);
return v___x_2377_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18(void){
_start:
{
lean_object* v___x_2378_; lean_object* v___x_2379_; uint8_t v_unlocated_2380_; lean_object* v___x_2381_; 
v___x_2378_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12);
v___x_2379_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__15, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__15_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__15);
v_unlocated_2380_ = 1;
v___x_2381_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2381_, 0, v___x_2379_);
lean_ctor_set(v___x_2381_, 1, v___x_2379_);
lean_ctor_set(v___x_2381_, 2, v___x_2378_);
lean_ctor_set_uint8(v___x_2381_, sizeof(void*)*3, v_unlocated_2380_);
return v___x_2381_;
}
}
static uint8_t _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20(void){
_start:
{
lean_object* v___x_2384_; lean_object* v___x_2385_; uint8_t v___x_2386_; 
v___x_2384_ = l_Lean_diagnostics;
v___x_2385_ = l_Lean_Options_empty;
v___x_2386_ = l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__2(v___x_2385_, v___x_2384_);
return v___x_2386_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks(lean_object* v_args_2387_, lean_object* v_linterOpts_2388_, lean_object* v_sp_2389_, lean_object* v_env_2390_, lean_object* v_pkgRoot_2391_, lean_object* v_docCheckedModules_2392_){
_start:
{
lean_object* v___y_2395_; lean_object* v_a_2396_; lean_object* v___y_2421_; uint8_t v___y_2422_; lean_object* v_a_2425_; uint8_t v___y_2429_; lean_object* v_a_2430_; lean_object* v___y_2447_; uint8_t v_lintOnly_2450_; uint8_t v_mode_2451_; lean_object* v___f_2452_; lean_object* v___y_2454_; uint8_t v___y_2455_; lean_object* v___y_2456_; uint8_t v___y_2457_; uint8_t v___y_2458_; lean_object* v___y_2459_; lean_object* v___y_2460_; lean_object* v_fileName_2461_; lean_object* v_fileMap_2462_; lean_object* v_currNamespace_2463_; lean_object* v_openDecls_2464_; lean_object* v_initHeartbeats_2465_; lean_object* v_maxHeartbeats_2466_; lean_object* v_quotContext_2467_; lean_object* v_currMacroScope_2468_; lean_object* v_cancelTk_x3f_2469_; lean_object* v_inheritedTraceOptions_2470_; lean_object* v_currRecDepth_2471_; lean_object* v_ref_2472_; uint8_t v_suppressElabErrors_2473_; lean_object* v___y_2474_; lean_object* v___y_2504_; uint8_t v___y_2505_; lean_object* v___y_2506_; uint8_t v___y_2507_; uint8_t v___y_2508_; lean_object* v___y_2509_; lean_object* v___y_2510_; lean_object* v___y_2511_; lean_object* v___y_2512_; lean_object* v___y_2528_; uint8_t v___y_2529_; lean_object* v___y_2530_; uint8_t v___y_2531_; lean_object* v___y_2532_; uint8_t v___y_2533_; lean_object* v___y_2534_; lean_object* v___y_2535_; lean_object* v___y_2536_; uint8_t v___y_2537_; uint8_t v___y_2558_; 
v_lintOnly_2450_ = lean_ctor_get_uint8(v_args_2387_, sizeof(void*)*4);
v_mode_2451_ = lean_ctor_get_uint8(v_args_2387_, sizeof(void*)*4 + 1);
v___f_2452_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__3));
if (v_lintOnly_2450_ == 0)
{
lean_object* v___x_2597_; uint8_t v___x_2598_; 
v___x_2597_ = l_Lean_linter_doc_deferred;
v___x_2598_ = l_Lean_Linter_getLinterValue(v___x_2597_, v_linterOpts_2388_);
v___y_2558_ = v___x_2598_;
goto v___jp_2557_;
}
else
{
lean_object* v___x_2599_; lean_object* v_name_2600_; uint8_t v___x_2601_; 
v___x_2599_ = l_Lean_linter_doc_deferred;
v_name_2600_ = lean_ctor_get(v___x_2599_, 0);
v___x_2601_ = l_Lean_Linter_isLinterEnabledByOptions(v_name_2600_, v_linterOpts_2388_);
v___y_2558_ = v___x_2601_;
goto v___jp_2557_;
}
v___jp_2394_:
{
lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; size_t v_sz_2400_; size_t v___x_2401_; lean_object* v___x_2402_; 
v___x_2397_ = lean_st_ref_get(v___y_2395_);
lean_dec(v___y_2395_);
lean_dec(v___x_2397_);
v___x_2398_ = l_Lean_Environment_header(v_env_2390_);
lean_dec_ref(v_env_2390_);
v___x_2399_ = l_Lean_EnvironmentHeader_moduleNames(v___x_2398_);
v_sz_2400_ = lean_array_size(v___x_2399_);
v___x_2401_ = ((size_t)0ULL);
v___x_2402_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__1(v_pkgRoot_2391_, v___x_2399_, v_sz_2400_, v___x_2401_, v_docCheckedModules_2392_);
lean_dec_ref(v___x_2399_);
lean_dec(v_pkgRoot_2391_);
if (lean_obj_tag(v___x_2402_) == 0)
{
lean_object* v_a_2403_; lean_object* v___x_2405_; uint8_t v_isShared_2406_; uint8_t v_isSharedCheck_2411_; 
v_a_2403_ = lean_ctor_get(v___x_2402_, 0);
v_isSharedCheck_2411_ = !lean_is_exclusive(v___x_2402_);
if (v_isSharedCheck_2411_ == 0)
{
v___x_2405_ = v___x_2402_;
v_isShared_2406_ = v_isSharedCheck_2411_;
goto v_resetjp_2404_;
}
else
{
lean_inc(v_a_2403_);
lean_dec(v___x_2402_);
v___x_2405_ = lean_box(0);
v_isShared_2406_ = v_isSharedCheck_2411_;
goto v_resetjp_2404_;
}
v_resetjp_2404_:
{
lean_object* v___x_2407_; lean_object* v___x_2409_; 
v___x_2407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2407_, 0, v_a_2396_);
lean_ctor_set(v___x_2407_, 1, v_a_2403_);
if (v_isShared_2406_ == 0)
{
lean_ctor_set(v___x_2405_, 0, v___x_2407_);
v___x_2409_ = v___x_2405_;
goto v_reusejp_2408_;
}
else
{
lean_object* v_reuseFailAlloc_2410_; 
v_reuseFailAlloc_2410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2410_, 0, v___x_2407_);
v___x_2409_ = v_reuseFailAlloc_2410_;
goto v_reusejp_2408_;
}
v_reusejp_2408_:
{
return v___x_2409_;
}
}
}
else
{
lean_object* v_a_2412_; lean_object* v___x_2414_; uint8_t v_isShared_2415_; uint8_t v_isSharedCheck_2419_; 
lean_dec_ref(v_a_2396_);
v_a_2412_ = lean_ctor_get(v___x_2402_, 0);
v_isSharedCheck_2419_ = !lean_is_exclusive(v___x_2402_);
if (v_isSharedCheck_2419_ == 0)
{
v___x_2414_ = v___x_2402_;
v_isShared_2415_ = v_isSharedCheck_2419_;
goto v_resetjp_2413_;
}
else
{
lean_inc(v_a_2412_);
lean_dec(v___x_2402_);
v___x_2414_ = lean_box(0);
v_isShared_2415_ = v_isSharedCheck_2419_;
goto v_resetjp_2413_;
}
v_resetjp_2413_:
{
lean_object* v___x_2417_; 
if (v_isShared_2415_ == 0)
{
v___x_2417_ = v___x_2414_;
goto v_reusejp_2416_;
}
else
{
lean_object* v_reuseFailAlloc_2418_; 
v_reuseFailAlloc_2418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2418_, 0, v_a_2412_);
v___x_2417_ = v_reuseFailAlloc_2418_;
goto v_reusejp_2416_;
}
v_reusejp_2416_:
{
return v___x_2417_;
}
}
}
}
v___jp_2420_:
{
lean_object* v___x_2423_; 
v___x_2423_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_2423_, 0, v___y_2422_);
v___y_2395_ = v___y_2421_;
v_a_2396_ = v___x_2423_;
goto v___jp_2394_;
}
v___jp_2424_:
{
lean_object* v___x_2426_; lean_object* v___x_2427_; 
v___x_2426_ = lean_mk_io_user_error(v_a_2425_);
v___x_2427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2427_, 0, v___x_2426_);
return v___x_2427_;
}
v___jp_2428_:
{
if (lean_obj_tag(v_a_2430_) == 0)
{
lean_object* v_msg_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; 
v_msg_2431_ = lean_ctor_get(v_a_2430_, 1);
lean_inc_ref(v_msg_2431_);
lean_dec_ref_known(v_a_2430_, 2);
v___x_2432_ = l_Lean_MessageData_toString(v_msg_2431_);
v___x_2433_ = lean_mk_io_user_error(v___x_2432_);
v___x_2434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2434_, 0, v___x_2433_);
return v___x_2434_;
}
else
{
lean_object* v_id_2435_; lean_object* v___x_2436_; 
v_id_2435_ = lean_ctor_get(v_a_2430_, 0);
lean_inc(v_id_2435_);
lean_dec_ref_known(v_a_2430_, 2);
v___x_2436_ = l_Lean_InternalExceptionId_getName(v_id_2435_);
if (lean_obj_tag(v___x_2436_) == 0)
{
lean_object* v_a_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; 
lean_dec(v_id_2435_);
v_a_2437_ = lean_ctor_get(v___x_2436_, 0);
lean_inc(v_a_2437_);
lean_dec_ref_known(v___x_2436_, 1);
v___x_2438_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__0));
v___x_2439_ = l_Lean_Name_toString(v_a_2437_, v___y_2429_);
v___x_2440_ = lean_string_append(v___x_2438_, v___x_2439_);
lean_dec_ref(v___x_2439_);
v_a_2425_ = v___x_2440_;
goto v___jp_2424_;
}
else
{
lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; 
lean_dec_ref_known(v___x_2436_, 1);
v___x_2441_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__1));
v___x_2442_ = l_Nat_reprFast(v_id_2435_);
v___x_2443_ = lean_string_append(v___x_2441_, v___x_2442_);
lean_dec_ref(v___x_2442_);
v___x_2444_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__2));
v___x_2445_ = lean_string_append(v___x_2443_, v___x_2444_);
v_a_2425_ = v___x_2445_;
goto v___jp_2424_;
}
}
}
v___jp_2446_:
{
lean_object* v___x_2448_; lean_object* v___x_2449_; 
v___x_2448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2448_, 0, v___y_2447_);
lean_ctor_set(v___x_2448_, 1, v_docCheckedModules_2392_);
v___x_2449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2449_, 0, v___x_2448_);
return v___x_2449_;
}
v___jp_2453_:
{
lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; 
v___x_2475_ = l_Lean_maxRecDepth;
v___x_2476_ = l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3(v___y_2456_, v___x_2475_);
lean_inc_ref(v___y_2456_);
v___x_2477_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_2477_, 0, v_fileName_2461_);
lean_ctor_set(v___x_2477_, 1, v_fileMap_2462_);
lean_ctor_set(v___x_2477_, 2, v___y_2456_);
lean_ctor_set(v___x_2477_, 3, v___x_2476_);
lean_ctor_set(v___x_2477_, 4, v_currNamespace_2463_);
lean_ctor_set(v___x_2477_, 5, v_openDecls_2464_);
lean_ctor_set(v___x_2477_, 6, v_initHeartbeats_2465_);
lean_ctor_set(v___x_2477_, 7, v_maxHeartbeats_2466_);
lean_ctor_set(v___x_2477_, 8, v_quotContext_2467_);
lean_ctor_set(v___x_2477_, 9, v_currMacroScope_2468_);
lean_ctor_set(v___x_2477_, 10, v_cancelTk_x3f_2469_);
lean_ctor_set(v___x_2477_, 11, v_inheritedTraceOptions_2470_);
v___x_2478_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2478_, 0, v___x_2477_);
lean_ctor_set(v___x_2478_, 1, v_currRecDepth_2471_);
lean_ctor_set(v___x_2478_, 2, v_ref_2472_);
lean_ctor_set_uint8(v___x_2478_, sizeof(void*)*3, v___y_2457_);
lean_ctor_set_uint8(v___x_2478_, sizeof(void*)*3 + 1, v_suppressElabErrors_2473_);
v___x_2479_ = l_Lean_Doc_DeferredCheck_run(v___y_2459_, v___f_2452_, v___x_2478_, v___y_2474_);
if (lean_obj_tag(v___x_2479_) == 0)
{
lean_object* v_a_2480_; uint8_t v___x_2481_; uint8_t v___x_2482_; 
v_a_2480_ = lean_ctor_get(v___x_2479_, 0);
lean_inc(v_a_2480_);
lean_dec_ref_known(v___x_2479_, 1);
v___x_2481_ = 1;
v___x_2482_ = l_Lake_BuiltinLint_instBEqMode_beq(v_mode_2451_, v___x_2481_);
if (v___x_2482_ == 0)
{
lean_object* v___x_2483_; size_t v_sz_2484_; size_t v___x_2485_; lean_object* v___x_2486_; 
lean_dec(v___y_2474_);
v___x_2483_ = lean_box(0);
v_sz_2484_ = lean_array_size(v_a_2480_);
v___x_2485_ = ((size_t)0ULL);
v___x_2486_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg(v_sp_2389_, v___y_2455_, v_a_2480_, v_sz_2484_, v___x_2485_, v___x_2483_, v___x_2478_);
lean_dec_ref_known(v___x_2478_, 3);
if (lean_obj_tag(v___x_2486_) == 0)
{
lean_object* v___x_2487_; uint8_t v___x_2488_; 
lean_dec_ref_known(v___x_2486_, 1);
v___x_2487_ = lean_array_get_size(v_a_2480_);
lean_dec(v_a_2480_);
v___x_2488_ = lean_nat_dec_eq(v___x_2487_, v___y_2460_);
lean_dec(v___y_2460_);
if (v___x_2488_ == 0)
{
v___y_2421_ = v___y_2454_;
v___y_2422_ = v___y_2455_;
goto v___jp_2420_;
}
else
{
v___y_2421_ = v___y_2454_;
v___y_2422_ = v___x_2482_;
goto v___jp_2420_;
}
}
else
{
lean_object* v_a_2489_; 
lean_dec(v_a_2480_);
lean_dec(v___y_2460_);
lean_dec(v___y_2454_);
lean_dec(v_docCheckedModules_2392_);
lean_dec(v_pkgRoot_2391_);
lean_dec_ref(v_env_2390_);
v_a_2489_ = lean_ctor_get(v___x_2486_, 0);
lean_inc(v_a_2489_);
lean_dec_ref_known(v___x_2486_, 1);
v___y_2429_ = v___y_2455_;
v_a_2430_ = v_a_2489_;
goto v___jp_2428_;
}
}
else
{
lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; size_t v_sz_2493_; size_t v___x_2494_; lean_object* v___x_2495_; 
v___x_2490_ = lean_mk_empty_array_with_capacity(v___y_2460_);
lean_dec(v___y_2460_);
v___x_2491_ = lean_box(v___y_2458_);
v___x_2492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2492_, 0, v___x_2490_);
lean_ctor_set(v___x_2492_, 1, v___x_2491_);
v_sz_2493_ = lean_array_size(v_a_2480_);
v___x_2494_ = ((size_t)0ULL);
v___x_2495_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5(v___x_2482_, v_sp_2389_, v_a_2480_, v_sz_2493_, v___x_2494_, v___x_2492_, v___x_2478_, v___y_2474_);
lean_dec(v___y_2474_);
lean_dec_ref_known(v___x_2478_, 3);
lean_dec(v_a_2480_);
if (lean_obj_tag(v___x_2495_) == 0)
{
lean_object* v_a_2496_; lean_object* v_fst_2497_; lean_object* v_snd_2498_; lean_object* v___x_2499_; uint8_t v___x_2500_; 
v_a_2496_ = lean_ctor_get(v___x_2495_, 0);
lean_inc(v_a_2496_);
lean_dec_ref_known(v___x_2495_, 1);
v_fst_2497_ = lean_ctor_get(v_a_2496_, 0);
lean_inc(v_fst_2497_);
v_snd_2498_ = lean_ctor_get(v_a_2496_, 1);
lean_inc(v_snd_2498_);
lean_dec(v_a_2496_);
v___x_2499_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_2499_, 0, v_fst_2497_);
v___x_2500_ = lean_unbox(v_snd_2498_);
lean_dec(v_snd_2498_);
lean_ctor_set_uint8(v___x_2499_, sizeof(void*)*1, v___x_2500_);
v___y_2395_ = v___y_2454_;
v_a_2396_ = v___x_2499_;
goto v___jp_2394_;
}
else
{
lean_object* v_a_2501_; 
lean_dec(v___y_2454_);
lean_dec(v_docCheckedModules_2392_);
lean_dec(v_pkgRoot_2391_);
lean_dec_ref(v_env_2390_);
v_a_2501_ = lean_ctor_get(v___x_2495_, 0);
lean_inc(v_a_2501_);
lean_dec_ref_known(v___x_2495_, 1);
v___y_2429_ = v___y_2455_;
v_a_2430_ = v_a_2501_;
goto v___jp_2428_;
}
}
}
else
{
lean_object* v_a_2502_; 
lean_dec_ref_known(v___x_2478_, 3);
lean_dec(v___y_2474_);
lean_dec(v___y_2460_);
lean_dec(v___y_2454_);
lean_dec(v_docCheckedModules_2392_);
lean_dec(v_pkgRoot_2391_);
lean_dec_ref(v_env_2390_);
lean_dec(v_sp_2389_);
v_a_2502_ = lean_ctor_get(v___x_2479_, 0);
lean_inc(v_a_2502_);
lean_dec_ref_known(v___x_2479_, 1);
v___y_2429_ = v___y_2455_;
v_a_2430_ = v_a_2502_;
goto v___jp_2428_;
}
}
v___jp_2503_:
{
lean_object* v_toCold_2513_; lean_object* v_currRecDepth_2514_; lean_object* v_ref_2515_; uint8_t v_suppressElabErrors_2516_; lean_object* v_fileName_2517_; lean_object* v_fileMap_2518_; lean_object* v_currNamespace_2519_; lean_object* v_openDecls_2520_; lean_object* v_initHeartbeats_2521_; lean_object* v_maxHeartbeats_2522_; lean_object* v_quotContext_2523_; lean_object* v_currMacroScope_2524_; lean_object* v_cancelTk_x3f_2525_; lean_object* v_inheritedTraceOptions_2526_; 
v_toCold_2513_ = lean_ctor_get(v___y_2511_, 0);
lean_inc_ref(v_toCold_2513_);
v_currRecDepth_2514_ = lean_ctor_get(v___y_2511_, 1);
lean_inc(v_currRecDepth_2514_);
v_ref_2515_ = lean_ctor_get(v___y_2511_, 2);
lean_inc(v_ref_2515_);
v_suppressElabErrors_2516_ = lean_ctor_get_uint8(v___y_2511_, sizeof(void*)*3 + 1);
lean_dec_ref(v___y_2511_);
v_fileName_2517_ = lean_ctor_get(v_toCold_2513_, 0);
lean_inc_ref(v_fileName_2517_);
v_fileMap_2518_ = lean_ctor_get(v_toCold_2513_, 1);
lean_inc_ref(v_fileMap_2518_);
v_currNamespace_2519_ = lean_ctor_get(v_toCold_2513_, 4);
lean_inc(v_currNamespace_2519_);
v_openDecls_2520_ = lean_ctor_get(v_toCold_2513_, 5);
lean_inc(v_openDecls_2520_);
v_initHeartbeats_2521_ = lean_ctor_get(v_toCold_2513_, 6);
lean_inc(v_initHeartbeats_2521_);
v_maxHeartbeats_2522_ = lean_ctor_get(v_toCold_2513_, 7);
lean_inc(v_maxHeartbeats_2522_);
v_quotContext_2523_ = lean_ctor_get(v_toCold_2513_, 8);
lean_inc(v_quotContext_2523_);
v_currMacroScope_2524_ = lean_ctor_get(v_toCold_2513_, 9);
lean_inc(v_currMacroScope_2524_);
v_cancelTk_x3f_2525_ = lean_ctor_get(v_toCold_2513_, 10);
lean_inc(v_cancelTk_x3f_2525_);
v_inheritedTraceOptions_2526_ = lean_ctor_get(v_toCold_2513_, 11);
lean_inc_ref(v_inheritedTraceOptions_2526_);
lean_dec_ref(v_toCold_2513_);
v___y_2454_ = v___y_2504_;
v___y_2455_ = v___y_2505_;
v___y_2456_ = v___y_2506_;
v___y_2457_ = v___y_2507_;
v___y_2458_ = v___y_2508_;
v___y_2459_ = v___y_2509_;
v___y_2460_ = v___y_2510_;
v_fileName_2461_ = v_fileName_2517_;
v_fileMap_2462_ = v_fileMap_2518_;
v_currNamespace_2463_ = v_currNamespace_2519_;
v_openDecls_2464_ = v_openDecls_2520_;
v_initHeartbeats_2465_ = v_initHeartbeats_2521_;
v_maxHeartbeats_2466_ = v_maxHeartbeats_2522_;
v_quotContext_2467_ = v_quotContext_2523_;
v_currMacroScope_2468_ = v_currMacroScope_2524_;
v_cancelTk_x3f_2469_ = v_cancelTk_x3f_2525_;
v_inheritedTraceOptions_2470_ = v_inheritedTraceOptions_2526_;
v_currRecDepth_2471_ = v_currRecDepth_2514_;
v_ref_2472_ = v_ref_2515_;
v_suppressElabErrors_2473_ = v_suppressElabErrors_2516_;
v___y_2474_ = v___y_2512_;
goto v___jp_2453_;
}
v___jp_2527_:
{
if (v___y_2537_ == 0)
{
lean_object* v___x_2538_; lean_object* v_env_2539_; lean_object* v_nextMacroScope_2540_; lean_object* v_ngen_2541_; lean_object* v_auxDeclNGen_2542_; lean_object* v_traceState_2543_; lean_object* v_messages_2544_; lean_object* v_infoState_2545_; lean_object* v_snapshotTasks_2546_; lean_object* v___x_2548_; uint8_t v_isShared_2549_; uint8_t v_isSharedCheck_2555_; 
v___x_2538_ = lean_st_ref_take(v___y_2528_);
v_env_2539_ = lean_ctor_get(v___x_2538_, 0);
v_nextMacroScope_2540_ = lean_ctor_get(v___x_2538_, 1);
v_ngen_2541_ = lean_ctor_get(v___x_2538_, 2);
v_auxDeclNGen_2542_ = lean_ctor_get(v___x_2538_, 3);
v_traceState_2543_ = lean_ctor_get(v___x_2538_, 4);
v_messages_2544_ = lean_ctor_get(v___x_2538_, 6);
v_infoState_2545_ = lean_ctor_get(v___x_2538_, 7);
v_snapshotTasks_2546_ = lean_ctor_get(v___x_2538_, 8);
v_isSharedCheck_2555_ = !lean_is_exclusive(v___x_2538_);
if (v_isSharedCheck_2555_ == 0)
{
lean_object* v_unused_2556_; 
v_unused_2556_ = lean_ctor_get(v___x_2538_, 5);
lean_dec(v_unused_2556_);
v___x_2548_ = v___x_2538_;
v_isShared_2549_ = v_isSharedCheck_2555_;
goto v_resetjp_2547_;
}
else
{
lean_inc(v_snapshotTasks_2546_);
lean_inc(v_infoState_2545_);
lean_inc(v_messages_2544_);
lean_inc(v_traceState_2543_);
lean_inc(v_auxDeclNGen_2542_);
lean_inc(v_ngen_2541_);
lean_inc(v_nextMacroScope_2540_);
lean_inc(v_env_2539_);
lean_dec(v___x_2538_);
v___x_2548_ = lean_box(0);
v_isShared_2549_ = v_isSharedCheck_2555_;
goto v_resetjp_2547_;
}
v_resetjp_2547_:
{
lean_object* v___x_2550_; lean_object* v___x_2552_; 
v___x_2550_ = l_Lean_Kernel_enableDiag(v_env_2539_, v___y_2531_);
lean_inc_ref(v___y_2536_);
if (v_isShared_2549_ == 0)
{
lean_ctor_set(v___x_2548_, 5, v___y_2536_);
lean_ctor_set(v___x_2548_, 0, v___x_2550_);
v___x_2552_ = v___x_2548_;
goto v_reusejp_2551_;
}
else
{
lean_object* v_reuseFailAlloc_2554_; 
v_reuseFailAlloc_2554_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2554_, 0, v___x_2550_);
lean_ctor_set(v_reuseFailAlloc_2554_, 1, v_nextMacroScope_2540_);
lean_ctor_set(v_reuseFailAlloc_2554_, 2, v_ngen_2541_);
lean_ctor_set(v_reuseFailAlloc_2554_, 3, v_auxDeclNGen_2542_);
lean_ctor_set(v_reuseFailAlloc_2554_, 4, v_traceState_2543_);
lean_ctor_set(v_reuseFailAlloc_2554_, 5, v___y_2536_);
lean_ctor_set(v_reuseFailAlloc_2554_, 6, v_messages_2544_);
lean_ctor_set(v_reuseFailAlloc_2554_, 7, v_infoState_2545_);
lean_ctor_set(v_reuseFailAlloc_2554_, 8, v_snapshotTasks_2546_);
v___x_2552_ = v_reuseFailAlloc_2554_;
goto v_reusejp_2551_;
}
v_reusejp_2551_:
{
lean_object* v___x_2553_; 
v___x_2553_ = lean_st_ref_put(v___y_2528_, v___x_2552_);
lean_inc(v___y_2528_);
v___y_2504_ = v___y_2528_;
v___y_2505_ = v___y_2529_;
v___y_2506_ = v___y_2530_;
v___y_2507_ = v___y_2531_;
v___y_2508_ = v___y_2533_;
v___y_2509_ = v___y_2532_;
v___y_2510_ = v___y_2534_;
v___y_2511_ = v___y_2535_;
v___y_2512_ = v___y_2528_;
goto v___jp_2503_;
}
}
}
else
{
lean_inc(v___y_2528_);
v___y_2504_ = v___y_2528_;
v___y_2505_ = v___y_2529_;
v___y_2506_ = v___y_2530_;
v___y_2507_ = v___y_2531_;
v___y_2508_ = v___y_2533_;
v___y_2509_ = v___y_2532_;
v___y_2510_ = v___y_2534_;
v___y_2511_ = v___y_2535_;
v___y_2512_ = v___y_2528_;
goto v___jp_2503_;
}
}
v___jp_2557_:
{
if (v___y_2558_ == 0)
{
uint8_t v___x_2559_; uint8_t v___x_2560_; 
lean_dec(v_pkgRoot_2391_);
lean_dec_ref(v_env_2390_);
lean_dec(v_sp_2389_);
v___x_2559_ = 1;
v___x_2560_ = l_Lake_BuiltinLint_instBEqMode_beq(v_mode_2451_, v___x_2559_);
if (v___x_2560_ == 0)
{
lean_object* v___x_2561_; 
v___x_2561_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_2561_, 0, v___x_2560_);
v___y_2447_ = v___x_2561_;
goto v___jp_2446_;
}
else
{
lean_object* v___x_2562_; lean_object* v___x_2563_; 
v___x_2562_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__4));
v___x_2563_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_2563_, 0, v___x_2562_);
lean_ctor_set_uint8(v___x_2563_, sizeof(void*)*1, v___y_2558_);
v___y_2447_ = v___x_2563_;
goto v___jp_2446_;
}
}
else
{
lean_object* v___x_2564_; lean_object* v___f_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; uint8_t v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; uint8_t v___x_2593_; lean_object* v___x_2594_; lean_object* v_env_2595_; uint8_t v___x_2596_; 
v___x_2564_ = lean_box(v___y_2558_);
lean_inc(v_docCheckedModules_2392_);
lean_inc(v_pkgRoot_2391_);
v___f_2565_ = lean_alloc_closure((void*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2565_, 0, v_pkgRoot_2391_);
lean_closure_set(v___f_2565_, 1, v_docCheckedModules_2392_);
lean_closure_set(v___f_2565_, 2, v___x_2564_);
v___x_2566_ = ((lean_object*)(l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__0));
v___x_2567_ = l_Lean_instInhabitedFileMap_default;
v___x_2568_ = l_Lean_Options_empty;
v___x_2569_ = lean_unsigned_to_nat(1000u);
v___x_2570_ = lean_box(0);
v___x_2571_ = lean_box(0);
v___x_2572_ = lean_unsigned_to_nat(0u);
v___x_2573_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5);
v___x_2574_ = l_Lean_firstFrontendMacroScope;
v___x_2575_ = lean_box(0);
v___x_2576_ = lean_box(0);
v___x_2577_ = 0;
v___x_2578_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6);
v___x_2579_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__9));
v___x_2580_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__10));
v___x_2581_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13);
v___x_2582_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16);
v___x_2583_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17);
v___x_2584_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18);
v___x_2585_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__19));
lean_inc_ref(v_env_2390_);
v___x_2586_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_2586_, 0, v_env_2390_);
lean_ctor_set(v___x_2586_, 1, v___x_2578_);
lean_ctor_set(v___x_2586_, 2, v___x_2579_);
lean_ctor_set(v___x_2586_, 3, v___x_2580_);
lean_ctor_set(v___x_2586_, 4, v___x_2581_);
lean_ctor_set(v___x_2586_, 5, v___x_2582_);
lean_ctor_set(v___x_2586_, 6, v___x_2583_);
lean_ctor_set(v___x_2586_, 7, v___x_2584_);
lean_ctor_set(v___x_2586_, 8, v___x_2585_);
v___x_2587_ = lean_io_get_num_heartbeats();
v___x_2588_ = lean_st_mk_ref(v___x_2586_);
v___x_2589_ = l_Lean_inheritedTraceOptions;
v___x_2590_ = lean_st_ref_get(v___x_2589_);
lean_inc(v___x_2590_);
lean_inc(v___x_2587_);
v___x_2591_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_2591_, 0, v___x_2566_);
lean_ctor_set(v___x_2591_, 1, v___x_2567_);
lean_ctor_set(v___x_2591_, 2, v___x_2568_);
lean_ctor_set(v___x_2591_, 3, v___x_2569_);
lean_ctor_set(v___x_2591_, 4, v___x_2570_);
lean_ctor_set(v___x_2591_, 5, v___x_2571_);
lean_ctor_set(v___x_2591_, 6, v___x_2587_);
lean_ctor_set(v___x_2591_, 7, v___x_2573_);
lean_ctor_set(v___x_2591_, 8, v___x_2570_);
lean_ctor_set(v___x_2591_, 9, v___x_2574_);
lean_ctor_set(v___x_2591_, 10, v___x_2575_);
lean_ctor_set(v___x_2591_, 11, v___x_2590_);
v___x_2592_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2592_, 0, v___x_2591_);
lean_ctor_set(v___x_2592_, 1, v___x_2572_);
lean_ctor_set(v___x_2592_, 2, v___x_2576_);
lean_ctor_set_uint8(v___x_2592_, sizeof(void*)*3, v___x_2577_);
lean_ctor_set_uint8(v___x_2592_, sizeof(void*)*3 + 1, v___x_2577_);
v___x_2593_ = lean_uint8_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20);
v___x_2594_ = lean_st_ref_get(v___x_2588_);
v_env_2595_ = lean_ctor_get(v___x_2594_, 0);
lean_inc_ref(v_env_2595_);
lean_dec(v___x_2594_);
v___x_2596_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_2595_);
lean_dec_ref(v_env_2595_);
if (v___x_2593_ == 0)
{
if (v___x_2596_ == 0)
{
lean_dec_ref_known(v___x_2592_, 3);
lean_inc(v___x_2588_);
v___y_2454_ = v___x_2588_;
v___y_2455_ = v___y_2558_;
v___y_2456_ = v___x_2568_;
v___y_2457_ = v___x_2593_;
v___y_2458_ = v___x_2577_;
v___y_2459_ = v___f_2565_;
v___y_2460_ = v___x_2572_;
v_fileName_2461_ = v___x_2566_;
v_fileMap_2462_ = v___x_2567_;
v_currNamespace_2463_ = v___x_2570_;
v_openDecls_2464_ = v___x_2571_;
v_initHeartbeats_2465_ = v___x_2587_;
v_maxHeartbeats_2466_ = v___x_2573_;
v_quotContext_2467_ = v___x_2570_;
v_currMacroScope_2468_ = v___x_2574_;
v_cancelTk_x3f_2469_ = v___x_2575_;
v_inheritedTraceOptions_2470_ = v___x_2590_;
v_currRecDepth_2471_ = v___x_2572_;
v_ref_2472_ = v___x_2576_;
v_suppressElabErrors_2473_ = v___x_2577_;
v___y_2474_ = v___x_2588_;
goto v___jp_2453_;
}
else
{
lean_dec(v___x_2590_);
lean_dec(v___x_2587_);
v___y_2528_ = v___x_2588_;
v___y_2529_ = v___y_2558_;
v___y_2530_ = v___x_2568_;
v___y_2531_ = v___x_2593_;
v___y_2532_ = v___f_2565_;
v___y_2533_ = v___x_2577_;
v___y_2534_ = v___x_2572_;
v___y_2535_ = v___x_2592_;
v___y_2536_ = v___x_2582_;
v___y_2537_ = v___x_2593_;
goto v___jp_2527_;
}
}
else
{
lean_dec(v___x_2590_);
lean_dec(v___x_2587_);
v___y_2528_ = v___x_2588_;
v___y_2529_ = v___y_2558_;
v___y_2530_ = v___x_2568_;
v___y_2531_ = v___x_2593_;
v___y_2532_ = v___f_2565_;
v___y_2533_ = v___x_2577_;
v___y_2534_ = v___x_2572_;
v___y_2535_ = v___x_2592_;
v___y_2536_ = v___x_2582_;
v___y_2537_ = v___x_2596_;
goto v___jp_2527_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___boxed(lean_object* v_args_2602_, lean_object* v_linterOpts_2603_, lean_object* v_sp_2604_, lean_object* v_env_2605_, lean_object* v_pkgRoot_2606_, lean_object* v_docCheckedModules_2607_, lean_object* v___y_2608_){
_start:
{
lean_object* v_res_2609_; 
v_res_2609_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks(v_args_2602_, v_linterOpts_2603_, v_sp_2604_, v_env_2605_, v_pkgRoot_2606_, v_docCheckedModules_2607_);
lean_dec_ref(v_linterOpts_2603_);
lean_dec_ref(v_args_2602_);
return v_res_2609_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4(lean_object* v_sp_2610_, uint8_t v___y_2611_, lean_object* v_as_2612_, size_t v_sz_2613_, size_t v_i_2614_, lean_object* v_b_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_){
_start:
{
lean_object* v___x_2619_; 
v___x_2619_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg(v_sp_2610_, v___y_2611_, v_as_2612_, v_sz_2613_, v_i_2614_, v_b_2615_, v___y_2616_);
return v___x_2619_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___boxed(lean_object* v_sp_2620_, lean_object* v___y_2621_, lean_object* v_as_2622_, lean_object* v_sz_2623_, lean_object* v_i_2624_, lean_object* v_b_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_){
_start:
{
uint8_t v___y_7720__boxed_2629_; size_t v_sz_boxed_2630_; size_t v_i_boxed_2631_; lean_object* v_res_2632_; 
v___y_7720__boxed_2629_ = lean_unbox(v___y_2621_);
v_sz_boxed_2630_ = lean_unbox_usize(v_sz_2623_);
lean_dec(v_sz_2623_);
v_i_boxed_2631_ = lean_unbox_usize(v_i_2624_);
lean_dec(v_i_2624_);
v_res_2632_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4(v_sp_2620_, v___y_7720__boxed_2629_, v_as_2622_, v_sz_boxed_2630_, v_i_boxed_2631_, v_b_2625_, v___y_2626_, v___y_2627_);
lean_dec(v___y_2627_);
lean_dec_ref(v___y_2626_);
lean_dec_ref(v_as_2622_);
return v_res_2632_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__4(lean_object* v_as_2633_, size_t v_sz_2634_, size_t v_i_2635_, lean_object* v_b_2636_){
_start:
{
uint8_t v___x_2638_; 
v___x_2638_ = lean_usize_dec_lt(v_i_2635_, v_sz_2634_);
if (v___x_2638_ == 0)
{
lean_object* v___x_2639_; 
v___x_2639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2639_, 0, v_b_2636_);
return v___x_2639_;
}
else
{
lean_object* v_a_2640_; lean_object* v_message_2641_; lean_object* v___x_2642_; uint8_t v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; 
v_a_2640_ = lean_array_uget_borrowed(v_as_2633_, v_i_2635_);
v_message_2641_ = lean_ctor_get(v_a_2640_, 1);
v___x_2642_ = lean_box(0);
v___x_2643_ = 0;
lean_inc_ref(v_message_2641_);
v___x_2644_ = l_Lean_SerialMessage_toString(v_message_2641_, v___x_2643_);
v___x_2645_ = l_IO_print___at___00IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13_spec__23(v___x_2644_);
if (lean_obj_tag(v___x_2645_) == 0)
{
size_t v___x_2646_; size_t v___x_2647_; 
lean_dec_ref_known(v___x_2645_, 1);
v___x_2646_ = ((size_t)1ULL);
v___x_2647_ = lean_usize_add(v_i_2635_, v___x_2646_);
v_i_2635_ = v___x_2647_;
v_b_2636_ = v___x_2642_;
goto _start;
}
else
{
return v___x_2645_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__4___boxed(lean_object* v_as_2649_, lean_object* v_sz_2650_, lean_object* v_i_2651_, lean_object* v_b_2652_, lean_object* v___y_2653_){
_start:
{
size_t v_sz_boxed_2654_; size_t v_i_boxed_2655_; lean_object* v_res_2656_; 
v_sz_boxed_2654_ = lean_unbox_usize(v_sz_2650_);
lean_dec(v_sz_2650_);
v_i_boxed_2655_ = lean_unbox_usize(v_i_2651_);
lean_dec(v_i_2651_);
v_res_2656_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__4(v_as_2649_, v_sz_boxed_2654_, v_i_boxed_2655_, v_b_2652_);
lean_dec_ref(v_as_2649_);
return v_res_2656_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__5(lean_object* v_as_2659_, size_t v_sz_2660_, size_t v_i_2661_, lean_object* v_b_2662_){
_start:
{
uint8_t v___x_2664_; 
v___x_2664_ = lean_usize_dec_lt(v_i_2661_, v_sz_2660_);
if (v___x_2664_ == 0)
{
lean_object* v___x_2665_; 
v___x_2665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2665_, 0, v_b_2662_);
return v___x_2665_;
}
else
{
lean_object* v_a_2666_; lean_object* v_fst_2667_; lean_object* v_snd_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; 
v_a_2666_ = lean_array_uget_borrowed(v_as_2659_, v_i_2661_);
v_fst_2667_ = lean_ctor_get(v_a_2666_, 0);
v_snd_2668_ = lean_ctor_get(v_a_2666_, 1);
v___x_2669_ = lean_box(0);
v___x_2670_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__5___closed__0));
lean_inc(v_fst_2667_);
v___x_2671_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_2667_, v___x_2664_);
v___x_2672_ = lean_string_append(v___x_2670_, v___x_2671_);
lean_dec_ref(v___x_2671_);
v___x_2673_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__5___closed__1));
v___x_2674_ = lean_string_append(v___x_2672_, v___x_2673_);
v___x_2675_ = l_IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13(v___x_2674_);
if (lean_obj_tag(v___x_2675_) == 0)
{
size_t v_sz_2676_; size_t v___x_2677_; lean_object* v___x_2678_; 
lean_dec_ref_known(v___x_2675_, 1);
v_sz_2676_ = lean_array_size(v_snd_2668_);
v___x_2677_ = ((size_t)0ULL);
v___x_2678_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__4(v_snd_2668_, v_sz_2676_, v___x_2677_, v___x_2669_);
if (lean_obj_tag(v___x_2678_) == 0)
{
size_t v___x_2679_; size_t v___x_2680_; 
lean_dec_ref_known(v___x_2678_, 1);
v___x_2679_ = ((size_t)1ULL);
v___x_2680_ = lean_usize_add(v_i_2661_, v___x_2679_);
v_i_2661_ = v___x_2680_;
v_b_2662_ = v___x_2669_;
goto _start;
}
else
{
return v___x_2678_;
}
}
else
{
return v___x_2675_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__5___boxed(lean_object* v_as_2682_, lean_object* v_sz_2683_, lean_object* v_i_2684_, lean_object* v_b_2685_, lean_object* v___y_2686_){
_start:
{
size_t v_sz_boxed_2687_; size_t v_i_boxed_2688_; lean_object* v_res_2689_; 
v_sz_boxed_2687_ = lean_unbox_usize(v_sz_2683_);
lean_dec(v_sz_2683_);
v_i_boxed_2688_ = lean_unbox_usize(v_i_2684_);
lean_dec(v_i_2684_);
v_res_2689_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__5(v_as_2682_, v_sz_boxed_2687_, v_i_boxed_2688_, v_b_2685_);
lean_dec_ref(v_as_2682_);
return v_res_2689_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0(lean_object* v_linterOpts_2690_, lean_object* v_as_2691_, size_t v_i_2692_, size_t v_stop_2693_, lean_object* v_b_2694_){
_start:
{
lean_object* v___y_2696_; uint8_t v___x_2700_; 
v___x_2700_ = lean_usize_dec_eq(v_i_2692_, v_stop_2693_);
if (v___x_2700_ == 0)
{
lean_object* v___x_2701_; lean_object* v_linter_2702_; uint8_t v___x_2703_; 
v___x_2701_ = lean_array_uget_borrowed(v_as_2691_, v_i_2692_);
v_linter_2702_ = lean_ctor_get(v___x_2701_, 0);
v___x_2703_ = l_Lean_Linter_isLinterEnabledByOptions(v_linter_2702_, v_linterOpts_2690_);
if (v___x_2703_ == 0)
{
v___y_2696_ = v_b_2694_;
goto v___jp_2695_;
}
else
{
lean_object* v___x_2704_; 
lean_inc(v___x_2701_);
v___x_2704_ = lean_array_push(v_b_2694_, v___x_2701_);
v___y_2696_ = v___x_2704_;
goto v___jp_2695_;
}
}
else
{
return v_b_2694_;
}
v___jp_2695_:
{
size_t v___x_2697_; size_t v___x_2698_; 
v___x_2697_ = ((size_t)1ULL);
v___x_2698_ = lean_usize_add(v_i_2692_, v___x_2697_);
v_i_2692_ = v___x_2698_;
v_b_2694_ = v___y_2696_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0___boxed(lean_object* v_linterOpts_2705_, lean_object* v_as_2706_, lean_object* v_i_2707_, lean_object* v_stop_2708_, lean_object* v_b_2709_){
_start:
{
size_t v_i_boxed_2710_; size_t v_stop_boxed_2711_; lean_object* v_res_2712_; 
v_i_boxed_2710_ = lean_unbox_usize(v_i_2707_);
lean_dec(v_i_2707_);
v_stop_boxed_2711_ = lean_unbox_usize(v_stop_2708_);
lean_dec(v_stop_2708_);
v_res_2712_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0(v_linterOpts_2705_, v_as_2706_, v_i_boxed_2710_, v_stop_boxed_2711_, v_b_2709_);
lean_dec_ref(v_as_2706_);
lean_dec_ref(v_linterOpts_2705_);
return v_res_2712_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8_spec__8(lean_object* v_linterOpts_2715_, lean_object* v_as_2716_, size_t v_i_2717_, size_t v_stop_2718_, lean_object* v_b_2719_){
_start:
{
lean_object* v___y_2721_; uint8_t v___x_2725_; 
v___x_2725_ = lean_usize_dec_eq(v_i_2717_, v_stop_2718_);
if (v___x_2725_ == 0)
{
lean_object* v___x_2726_; lean_object* v_fst_2727_; lean_object* v_snd_2728_; lean_object* v___x_2730_; uint8_t v_isShared_2731_; uint8_t v_isSharedCheck_2752_; 
v___x_2726_ = lean_array_uget(v_as_2716_, v_i_2717_);
v_fst_2727_ = lean_ctor_get(v___x_2726_, 0);
v_snd_2728_ = lean_ctor_get(v___x_2726_, 1);
v_isSharedCheck_2752_ = !lean_is_exclusive(v___x_2726_);
if (v_isSharedCheck_2752_ == 0)
{
v___x_2730_ = v___x_2726_;
v_isShared_2731_ = v_isSharedCheck_2752_;
goto v_resetjp_2729_;
}
else
{
lean_inc(v_snd_2728_);
lean_inc(v_fst_2727_);
lean_dec(v___x_2726_);
v___x_2730_ = lean_box(0);
v_isShared_2731_ = v_isSharedCheck_2752_;
goto v_resetjp_2729_;
}
v_resetjp_2729_:
{
lean_object* v___y_2733_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; uint8_t v___x_2744_; 
v___x_2741_ = lean_unsigned_to_nat(0u);
v___x_2742_ = lean_array_get_size(v_snd_2728_);
v___x_2743_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8_spec__8___closed__0));
v___x_2744_ = lean_nat_dec_lt(v___x_2741_, v___x_2742_);
if (v___x_2744_ == 0)
{
lean_dec(v_snd_2728_);
v___y_2733_ = v___x_2743_;
goto v___jp_2732_;
}
else
{
uint8_t v___x_2745_; 
v___x_2745_ = lean_nat_dec_le(v___x_2742_, v___x_2742_);
if (v___x_2745_ == 0)
{
if (v___x_2744_ == 0)
{
lean_dec(v_snd_2728_);
v___y_2733_ = v___x_2743_;
goto v___jp_2732_;
}
else
{
size_t v___x_2746_; size_t v___x_2747_; lean_object* v___x_2748_; 
v___x_2746_ = ((size_t)0ULL);
v___x_2747_ = lean_usize_of_nat(v___x_2742_);
v___x_2748_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0(v_linterOpts_2715_, v_snd_2728_, v___x_2746_, v___x_2747_, v___x_2743_);
lean_dec(v_snd_2728_);
v___y_2733_ = v___x_2748_;
goto v___jp_2732_;
}
}
else
{
size_t v___x_2749_; size_t v___x_2750_; lean_object* v___x_2751_; 
v___x_2749_ = ((size_t)0ULL);
v___x_2750_ = lean_usize_of_nat(v___x_2742_);
v___x_2751_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0(v_linterOpts_2715_, v_snd_2728_, v___x_2749_, v___x_2750_, v___x_2743_);
lean_dec(v_snd_2728_);
v___y_2733_ = v___x_2751_;
goto v___jp_2732_;
}
}
v___jp_2732_:
{
lean_object* v___x_2734_; lean_object* v___x_2735_; uint8_t v___x_2736_; 
v___x_2734_ = lean_array_get_size(v___y_2733_);
v___x_2735_ = lean_unsigned_to_nat(0u);
v___x_2736_ = lean_nat_dec_eq(v___x_2734_, v___x_2735_);
if (v___x_2736_ == 0)
{
lean_object* v___x_2738_; 
if (v_isShared_2731_ == 0)
{
lean_ctor_set(v___x_2730_, 1, v___y_2733_);
v___x_2738_ = v___x_2730_;
goto v_reusejp_2737_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v_fst_2727_);
lean_ctor_set(v_reuseFailAlloc_2740_, 1, v___y_2733_);
v___x_2738_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2737_;
}
v_reusejp_2737_:
{
lean_object* v___x_2739_; 
v___x_2739_ = lean_array_push(v_b_2719_, v___x_2738_);
v___y_2721_ = v___x_2739_;
goto v___jp_2720_;
}
}
else
{
lean_dec_ref(v___y_2733_);
lean_del_object(v___x_2730_);
lean_dec(v_fst_2727_);
v___y_2721_ = v_b_2719_;
goto v___jp_2720_;
}
}
}
}
else
{
return v_b_2719_;
}
v___jp_2720_:
{
size_t v___x_2722_; size_t v___x_2723_; 
v___x_2722_ = ((size_t)1ULL);
v___x_2723_ = lean_usize_add(v_i_2717_, v___x_2722_);
v_i_2717_ = v___x_2723_;
v_b_2719_ = v___y_2721_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8_spec__8___boxed(lean_object* v_linterOpts_2753_, lean_object* v_as_2754_, lean_object* v_i_2755_, lean_object* v_stop_2756_, lean_object* v_b_2757_){
_start:
{
size_t v_i_boxed_2758_; size_t v_stop_boxed_2759_; lean_object* v_res_2760_; 
v_i_boxed_2758_ = lean_unbox_usize(v_i_2755_);
lean_dec(v_i_2755_);
v_stop_boxed_2759_ = lean_unbox_usize(v_stop_2756_);
lean_dec(v_stop_2756_);
v_res_2760_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8_spec__8(v_linterOpts_2753_, v_as_2754_, v_i_boxed_2758_, v_stop_boxed_2759_, v_b_2757_);
lean_dec_ref(v_as_2754_);
lean_dec_ref(v_linterOpts_2753_);
return v_res_2760_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8(lean_object* v_linterOpts_2761_, lean_object* v_as_2762_, lean_object* v_start_2763_, lean_object* v_stop_2764_){
_start:
{
lean_object* v___x_2765_; uint8_t v___x_2766_; 
v___x_2765_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints___closed__0));
v___x_2766_ = lean_nat_dec_lt(v_start_2763_, v_stop_2764_);
if (v___x_2766_ == 0)
{
return v___x_2765_;
}
else
{
lean_object* v___x_2767_; uint8_t v___x_2768_; 
v___x_2767_ = lean_array_get_size(v_as_2762_);
v___x_2768_ = lean_nat_dec_le(v_stop_2764_, v___x_2767_);
if (v___x_2768_ == 0)
{
uint8_t v___x_2769_; 
v___x_2769_ = lean_nat_dec_lt(v_start_2763_, v___x_2767_);
if (v___x_2769_ == 0)
{
return v___x_2765_;
}
else
{
size_t v___x_2770_; size_t v___x_2771_; lean_object* v___x_2772_; 
v___x_2770_ = lean_usize_of_nat(v_start_2763_);
v___x_2771_ = lean_usize_of_nat(v___x_2767_);
v___x_2772_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8_spec__8(v_linterOpts_2761_, v_as_2762_, v___x_2770_, v___x_2771_, v___x_2765_);
return v___x_2772_;
}
}
else
{
size_t v___x_2773_; size_t v___x_2774_; lean_object* v___x_2775_; 
v___x_2773_ = lean_usize_of_nat(v_start_2763_);
v___x_2774_ = lean_usize_of_nat(v_stop_2764_);
v___x_2775_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8_spec__8(v_linterOpts_2761_, v_as_2762_, v___x_2773_, v___x_2774_, v___x_2765_);
return v___x_2775_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8___boxed(lean_object* v_linterOpts_2776_, lean_object* v_as_2777_, lean_object* v_start_2778_, lean_object* v_stop_2779_){
_start:
{
lean_object* v_res_2780_; 
v_res_2780_ = l_Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8(v_linterOpts_2776_, v_as_2777_, v_start_2778_, v_stop_2779_);
lean_dec(v_stop_2779_);
lean_dec(v_start_2778_);
lean_dec_ref(v_as_2777_);
lean_dec_ref(v_linterOpts_2776_);
return v_res_2780_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2(lean_object* v_fst_2781_, lean_object* v_init_2782_, lean_object* v_x_2783_){
_start:
{
if (lean_obj_tag(v_x_2783_) == 0)
{
lean_object* v_k_2785_; lean_object* v_v_2786_; lean_object* v_l_2787_; lean_object* v_r_2788_; uint8_t v_anyUnlocated_2789_; lean_object* v___x_2790_; lean_object* v_a_2791_; lean_object* v_a_2792_; lean_object* v___x_2794_; uint8_t v_isShared_2795_; uint8_t v_isSharedCheck_2805_; 
v_k_2785_ = lean_ctor_get(v_x_2783_, 1);
lean_inc(v_k_2785_);
v_v_2786_ = lean_ctor_get(v_x_2783_, 2);
lean_inc(v_v_2786_);
v_l_2787_ = lean_ctor_get(v_x_2783_, 3);
lean_inc(v_l_2787_);
v_r_2788_ = lean_ctor_get(v_x_2783_, 4);
lean_inc(v_r_2788_);
lean_dec_ref_known(v_x_2783_, 5);
v_anyUnlocated_2789_ = 1;
lean_inc(v_fst_2781_);
v___x_2790_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2(v_fst_2781_, v_init_2782_, v_l_2787_);
v_a_2791_ = lean_ctor_get(v___x_2790_, 0);
lean_inc(v_a_2791_);
lean_dec_ref(v___x_2790_);
v_a_2792_ = lean_ctor_get(v_a_2791_, 0);
v_isSharedCheck_2805_ = !lean_is_exclusive(v_a_2791_);
if (v_isSharedCheck_2805_ == 0)
{
v___x_2794_ = v_a_2791_;
v_isShared_2795_ = v_isSharedCheck_2805_;
goto v_resetjp_2793_;
}
else
{
lean_inc(v_a_2792_);
lean_dec(v_a_2791_);
v___x_2794_ = lean_box(0);
v_isShared_2795_ = v_isSharedCheck_2805_;
goto v_resetjp_2793_;
}
v_resetjp_2793_:
{
lean_object* v___x_2796_; lean_object* v___x_2798_; 
v___x_2796_ = l_Lean_Name_toString(v_k_2785_, v_anyUnlocated_2789_);
lean_inc(v_fst_2781_);
if (v_isShared_2795_ == 0)
{
lean_ctor_set_tag(v___x_2794_, 0);
lean_ctor_set(v___x_2794_, 0, v_fst_2781_);
v___x_2798_ = v___x_2794_;
goto v_reusejp_2797_;
}
else
{
lean_object* v_reuseFailAlloc_2804_; 
v_reuseFailAlloc_2804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2804_, 0, v_fst_2781_);
v___x_2798_ = v_reuseFailAlloc_2804_;
goto v_reusejp_2797_;
}
v_reusejp_2797_:
{
double v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; 
v___x_2799_ = lean_float_of_nat(v_v_2786_);
v___x_2800_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v___x_2800_, 0, v___x_2799_);
v___x_2801_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2801_, 0, v___x_2796_);
lean_ctor_set(v___x_2801_, 1, v___x_2798_);
lean_ctor_set(v___x_2801_, 2, v___x_2800_);
v___x_2802_ = lean_array_push(v_a_2792_, v___x_2801_);
v_init_2782_ = v___x_2802_;
v_x_2783_ = v_r_2788_;
goto _start;
}
}
}
else
{
lean_object* v___x_2806_; lean_object* v___x_2807_; 
lean_dec(v_fst_2781_);
v___x_2806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2806_, 0, v_init_2782_);
v___x_2807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2807_, 0, v___x_2806_);
return v___x_2807_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___boxed(lean_object* v_fst_2808_, lean_object* v_init_2809_, lean_object* v_x_2810_, lean_object* v___y_2811_){
_start:
{
lean_object* v_res_2812_; 
v_res_2812_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2(v_fst_2808_, v_init_2809_, v_x_2810_);
return v_res_2812_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__3(lean_object* v_as_2813_, size_t v_i_2814_, size_t v_stop_2815_, lean_object* v_b_2816_){
_start:
{
uint8_t v___x_2817_; 
v___x_2817_ = lean_usize_dec_eq(v_i_2814_, v_stop_2815_);
if (v___x_2817_ == 0)
{
lean_object* v___x_2818_; lean_object* v_linter_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; size_t v___x_2825_; size_t v___x_2826_; 
v___x_2818_ = lean_array_uget_borrowed(v_as_2813_, v_i_2814_);
v_linter_2819_ = lean_ctor_get(v___x_2818_, 0);
v___x_2820_ = lean_unsigned_to_nat(0u);
v___x_2821_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_NameMap_getD_spec__0___redArg(v_b_2816_, v_linter_2819_, v___x_2820_);
v___x_2822_ = lean_unsigned_to_nat(1u);
v___x_2823_ = lean_nat_add(v___x_2821_, v___x_2822_);
lean_dec(v___x_2821_);
lean_inc(v_linter_2819_);
v___x_2824_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_linter_2819_, v___x_2823_, v_b_2816_);
v___x_2825_ = ((size_t)1ULL);
v___x_2826_ = lean_usize_add(v_i_2814_, v___x_2825_);
v_i_2814_ = v___x_2826_;
v_b_2816_ = v___x_2824_;
goto _start;
}
else
{
return v_b_2816_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__3___boxed(lean_object* v_as_2828_, lean_object* v_i_2829_, lean_object* v_stop_2830_, lean_object* v_b_2831_){
_start:
{
size_t v_i_boxed_2832_; size_t v_stop_boxed_2833_; lean_object* v_res_2834_; 
v_i_boxed_2832_ = lean_unbox_usize(v_i_2829_);
lean_dec(v_i_2829_);
v_stop_boxed_2833_ = lean_unbox_usize(v_stop_2830_);
lean_dec(v_stop_2830_);
v_res_2834_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__3(v_as_2828_, v_i_boxed_2832_, v_stop_boxed_2833_, v_b_2831_);
lean_dec_ref(v_as_2828_);
return v_res_2834_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__7(lean_object* v_as_2835_, size_t v_sz_2836_, size_t v_i_2837_, lean_object* v_b_2838_){
_start:
{
lean_object* v_a_2841_; uint8_t v___x_2845_; 
v___x_2845_ = lean_usize_dec_lt(v_i_2837_, v_sz_2836_);
if (v___x_2845_ == 0)
{
lean_object* v___x_2846_; 
v___x_2846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2846_, 0, v_b_2838_);
return v___x_2846_;
}
else
{
lean_object* v_a_2847_; lean_object* v_fst_2848_; lean_object* v_snd_2849_; lean_object* v___y_2851_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; uint8_t v___x_2876_; 
v_a_2847_ = lean_array_uget_borrowed(v_as_2835_, v_i_2837_);
v_fst_2848_ = lean_ctor_get(v_a_2847_, 0);
v_snd_2849_ = lean_ctor_get(v_a_2847_, 1);
v___x_2873_ = lean_box(1);
v___x_2874_ = lean_unsigned_to_nat(0u);
v___x_2875_ = lean_array_get_size(v_snd_2849_);
v___x_2876_ = lean_nat_dec_lt(v___x_2874_, v___x_2875_);
if (v___x_2876_ == 0)
{
v___y_2851_ = v___x_2873_;
goto v___jp_2850_;
}
else
{
uint8_t v___x_2877_; 
v___x_2877_ = lean_nat_dec_le(v___x_2875_, v___x_2875_);
if (v___x_2877_ == 0)
{
if (v___x_2876_ == 0)
{
v___y_2851_ = v___x_2873_;
goto v___jp_2850_;
}
else
{
size_t v___x_2878_; size_t v___x_2879_; lean_object* v___x_2880_; 
v___x_2878_ = ((size_t)0ULL);
v___x_2879_ = lean_usize_of_nat(v___x_2875_);
v___x_2880_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__3(v_snd_2849_, v___x_2878_, v___x_2879_, v___x_2873_);
v___y_2851_ = v___x_2880_;
goto v___jp_2850_;
}
}
else
{
size_t v___x_2881_; size_t v___x_2882_; lean_object* v___x_2883_; 
v___x_2881_ = ((size_t)0ULL);
v___x_2882_ = lean_usize_of_nat(v___x_2875_);
v___x_2883_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__3(v_snd_2849_, v___x_2881_, v___x_2882_, v___x_2873_);
v___y_2851_ = v___x_2883_;
goto v___jp_2850_;
}
}
v___jp_2850_:
{
lean_object* v___x_2852_; 
lean_inc(v_fst_2848_);
v___x_2852_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2(v_fst_2848_, v_b_2838_, v___y_2851_);
if (lean_obj_tag(v___x_2852_) == 0)
{
lean_object* v_a_2853_; lean_object* v_a_2854_; 
v_a_2853_ = lean_ctor_get(v___x_2852_, 0);
lean_inc(v_a_2853_);
lean_dec_ref_known(v___x_2852_, 1);
v_a_2854_ = lean_ctor_get(v_a_2853_, 0);
lean_inc(v_a_2854_);
lean_dec(v_a_2853_);
v_a_2841_ = v_a_2854_;
goto v___jp_2840_;
}
else
{
if (lean_obj_tag(v___x_2852_) == 0)
{
lean_object* v_a_2855_; lean_object* v___x_2857_; uint8_t v_isShared_2858_; uint8_t v_isSharedCheck_2864_; 
v_a_2855_ = lean_ctor_get(v___x_2852_, 0);
v_isSharedCheck_2864_ = !lean_is_exclusive(v___x_2852_);
if (v_isSharedCheck_2864_ == 0)
{
v___x_2857_ = v___x_2852_;
v_isShared_2858_ = v_isSharedCheck_2864_;
goto v_resetjp_2856_;
}
else
{
lean_inc(v_a_2855_);
lean_dec(v___x_2852_);
v___x_2857_ = lean_box(0);
v_isShared_2858_ = v_isSharedCheck_2864_;
goto v_resetjp_2856_;
}
v_resetjp_2856_:
{
if (lean_obj_tag(v_a_2855_) == 0)
{
lean_object* v_a_2859_; lean_object* v___x_2861_; 
v_a_2859_ = lean_ctor_get(v_a_2855_, 0);
lean_inc(v_a_2859_);
lean_dec_ref_known(v_a_2855_, 1);
if (v_isShared_2858_ == 0)
{
lean_ctor_set_tag(v___x_2857_, 0);
lean_ctor_set(v___x_2857_, 0, v_a_2859_);
v___x_2861_ = v___x_2857_;
goto v_reusejp_2860_;
}
else
{
lean_object* v_reuseFailAlloc_2862_; 
v_reuseFailAlloc_2862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2862_, 0, v_a_2859_);
v___x_2861_ = v_reuseFailAlloc_2862_;
goto v_reusejp_2860_;
}
v_reusejp_2860_:
{
return v___x_2861_;
}
}
else
{
lean_object* v_a_2863_; 
lean_del_object(v___x_2857_);
v_a_2863_ = lean_ctor_get(v_a_2855_, 0);
lean_inc(v_a_2863_);
lean_dec_ref_known(v_a_2855_, 1);
v_a_2841_ = v_a_2863_;
goto v___jp_2840_;
}
}
}
else
{
lean_object* v_a_2865_; lean_object* v___x_2867_; uint8_t v_isShared_2868_; uint8_t v_isSharedCheck_2872_; 
v_a_2865_ = lean_ctor_get(v___x_2852_, 0);
v_isSharedCheck_2872_ = !lean_is_exclusive(v___x_2852_);
if (v_isSharedCheck_2872_ == 0)
{
v___x_2867_ = v___x_2852_;
v_isShared_2868_ = v_isSharedCheck_2872_;
goto v_resetjp_2866_;
}
else
{
lean_inc(v_a_2865_);
lean_dec(v___x_2852_);
v___x_2867_ = lean_box(0);
v_isShared_2868_ = v_isSharedCheck_2872_;
goto v_resetjp_2866_;
}
v_resetjp_2866_:
{
lean_object* v___x_2870_; 
if (v_isShared_2868_ == 0)
{
v___x_2870_ = v___x_2867_;
goto v_reusejp_2869_;
}
else
{
lean_object* v_reuseFailAlloc_2871_; 
v_reuseFailAlloc_2871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2871_, 0, v_a_2865_);
v___x_2870_ = v_reuseFailAlloc_2871_;
goto v_reusejp_2869_;
}
v_reusejp_2869_:
{
return v___x_2870_;
}
}
}
}
}
}
v___jp_2840_:
{
size_t v___x_2842_; size_t v___x_2843_; 
v___x_2842_ = ((size_t)1ULL);
v___x_2843_ = lean_usize_add(v_i_2837_, v___x_2842_);
v_i_2837_ = v___x_2843_;
v_b_2838_ = v_a_2841_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__7___boxed(lean_object* v_as_2884_, lean_object* v_sz_2885_, lean_object* v_i_2886_, lean_object* v_b_2887_, lean_object* v___y_2888_){
_start:
{
size_t v_sz_boxed_2889_; size_t v_i_boxed_2890_; lean_object* v_res_2891_; 
v_sz_boxed_2889_ = lean_unbox_usize(v_sz_2885_);
lean_dec(v_sz_2885_);
v_i_boxed_2890_ = lean_unbox_usize(v_i_2886_);
lean_dec(v_i_2886_);
v_res_2891_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__7(v_as_2884_, v_sz_boxed_2889_, v_i_boxed_2890_, v_b_2887_);
lean_dec_ref(v_as_2884_);
return v_res_2891_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1(lean_object* v_fst_2895_, lean_object* v_as_2896_, size_t v_sz_2897_, size_t v_i_2898_, lean_object* v_b_2899_){
_start:
{
lean_object* v_a_2902_; uint8_t v_anyUnlocated_2906_; 
v_anyUnlocated_2906_ = lean_usize_dec_lt(v_i_2898_, v_sz_2897_);
if (v_anyUnlocated_2906_ == 0)
{
lean_object* v___x_2907_; 
lean_dec(v_fst_2895_);
v___x_2907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2907_, 0, v_b_2899_);
return v___x_2907_;
}
else
{
lean_object* v_fst_2908_; lean_object* v_snd_2909_; lean_object* v___x_2911_; uint8_t v_isShared_2912_; uint8_t v_isSharedCheck_2946_; 
v_fst_2908_ = lean_ctor_get(v_b_2899_, 0);
v_snd_2909_ = lean_ctor_get(v_b_2899_, 1);
v_isSharedCheck_2946_ = !lean_is_exclusive(v_b_2899_);
if (v_isSharedCheck_2946_ == 0)
{
v___x_2911_ = v_b_2899_;
v_isShared_2912_ = v_isSharedCheck_2946_;
goto v_resetjp_2910_;
}
else
{
lean_inc(v_snd_2909_);
lean_inc(v_fst_2908_);
lean_dec(v_b_2899_);
v___x_2911_ = lean_box(0);
v_isShared_2912_ = v_isSharedCheck_2946_;
goto v_resetjp_2910_;
}
v_resetjp_2910_:
{
lean_object* v_a_2913_; lean_object* v_position_x3f_2914_; 
v_a_2913_ = lean_array_uget_borrowed(v_as_2896_, v_i_2898_);
v_position_x3f_2914_ = lean_ctor_get(v_a_2913_, 2);
if (lean_obj_tag(v_position_x3f_2914_) == 0)
{
lean_object* v_linter_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; 
lean_dec(v_snd_2909_);
v_linter_2915_ = lean_ctor_get(v_a_2913_, 0);
v___x_2916_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1___closed__0));
lean_inc(v_linter_2915_);
v___x_2917_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_linter_2915_, v_anyUnlocated_2906_);
v___x_2918_ = lean_string_append(v___x_2916_, v___x_2917_);
lean_dec_ref(v___x_2917_);
v___x_2919_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1___closed__1));
v___x_2920_ = lean_string_append(v___x_2918_, v___x_2919_);
lean_inc(v_fst_2895_);
v___x_2921_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_2895_, v_anyUnlocated_2906_);
v___x_2922_ = lean_string_append(v___x_2920_, v___x_2921_);
lean_dec_ref(v___x_2921_);
v___x_2923_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1___closed__2));
v___x_2924_ = lean_string_append(v___x_2922_, v___x_2923_);
v___x_2925_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v___x_2924_);
if (lean_obj_tag(v___x_2925_) == 0)
{
lean_object* v___x_2926_; lean_object* v___x_2928_; 
lean_dec_ref_known(v___x_2925_, 1);
v___x_2926_ = lean_box(v_anyUnlocated_2906_);
if (v_isShared_2912_ == 0)
{
lean_ctor_set(v___x_2911_, 1, v___x_2926_);
v___x_2928_ = v___x_2911_;
goto v_reusejp_2927_;
}
else
{
lean_object* v_reuseFailAlloc_2929_; 
v_reuseFailAlloc_2929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2929_, 0, v_fst_2908_);
lean_ctor_set(v_reuseFailAlloc_2929_, 1, v___x_2926_);
v___x_2928_ = v_reuseFailAlloc_2929_;
goto v_reusejp_2927_;
}
v_reusejp_2927_:
{
v_a_2902_ = v___x_2928_;
goto v___jp_2901_;
}
}
else
{
lean_object* v_a_2930_; lean_object* v___x_2932_; uint8_t v_isShared_2933_; uint8_t v_isSharedCheck_2937_; 
lean_del_object(v___x_2911_);
lean_dec(v_fst_2908_);
lean_dec(v_fst_2895_);
v_a_2930_ = lean_ctor_get(v___x_2925_, 0);
v_isSharedCheck_2937_ = !lean_is_exclusive(v___x_2925_);
if (v_isSharedCheck_2937_ == 0)
{
v___x_2932_ = v___x_2925_;
v_isShared_2933_ = v_isSharedCheck_2937_;
goto v_resetjp_2931_;
}
else
{
lean_inc(v_a_2930_);
lean_dec(v___x_2925_);
v___x_2932_ = lean_box(0);
v_isShared_2933_ = v_isSharedCheck_2937_;
goto v_resetjp_2931_;
}
v_resetjp_2931_:
{
lean_object* v___x_2935_; 
if (v_isShared_2933_ == 0)
{
v___x_2935_ = v___x_2932_;
goto v_reusejp_2934_;
}
else
{
lean_object* v_reuseFailAlloc_2936_; 
v_reuseFailAlloc_2936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2936_, 0, v_a_2930_);
v___x_2935_ = v_reuseFailAlloc_2936_;
goto v_reusejp_2934_;
}
v_reusejp_2934_:
{
return v___x_2935_;
}
}
}
}
else
{
lean_object* v_linter_2938_; lean_object* v_file_2939_; lean_object* v_val_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2944_; 
v_linter_2938_ = lean_ctor_get(v_a_2913_, 0);
v_file_2939_ = lean_ctor_get(v_a_2913_, 3);
v_val_2940_ = lean_ctor_get(v_position_x3f_2914_, 0);
lean_inc(v_linter_2938_);
lean_inc(v_val_2940_);
lean_inc_ref(v_file_2939_);
v___x_2941_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2941_, 0, v_file_2939_);
lean_ctor_set(v___x_2941_, 1, v_val_2940_);
lean_ctor_set(v___x_2941_, 2, v_linter_2938_);
v___x_2942_ = lean_array_push(v_fst_2908_, v___x_2941_);
if (v_isShared_2912_ == 0)
{
lean_ctor_set(v___x_2911_, 0, v___x_2942_);
v___x_2944_ = v___x_2911_;
goto v_reusejp_2943_;
}
else
{
lean_object* v_reuseFailAlloc_2945_; 
v_reuseFailAlloc_2945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2945_, 0, v___x_2942_);
lean_ctor_set(v_reuseFailAlloc_2945_, 1, v_snd_2909_);
v___x_2944_ = v_reuseFailAlloc_2945_;
goto v_reusejp_2943_;
}
v_reusejp_2943_:
{
v_a_2902_ = v___x_2944_;
goto v___jp_2901_;
}
}
}
}
v___jp_2901_:
{
size_t v___x_2903_; size_t v___x_2904_; 
v___x_2903_ = ((size_t)1ULL);
v___x_2904_ = lean_usize_add(v_i_2898_, v___x_2903_);
v_i_2898_ = v___x_2904_;
v_b_2899_ = v_a_2902_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1___boxed(lean_object* v_fst_2947_, lean_object* v_as_2948_, lean_object* v_sz_2949_, lean_object* v_i_2950_, lean_object* v_b_2951_, lean_object* v___y_2952_){
_start:
{
size_t v_sz_boxed_2953_; size_t v_i_boxed_2954_; lean_object* v_res_2955_; 
v_sz_boxed_2953_ = lean_unbox_usize(v_sz_2949_);
lean_dec(v_sz_2949_);
v_i_boxed_2954_ = lean_unbox_usize(v_i_2950_);
lean_dec(v_i_2950_);
v_res_2955_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1(v_fst_2947_, v_as_2948_, v_sz_boxed_2953_, v_i_boxed_2954_, v_b_2951_);
lean_dec_ref(v_as_2948_);
return v_res_2955_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6(lean_object* v_as_2956_, size_t v_sz_2957_, size_t v_i_2958_, lean_object* v_b_2959_){
_start:
{
uint8_t v___x_2961_; 
v___x_2961_ = lean_usize_dec_lt(v_i_2958_, v_sz_2957_);
if (v___x_2961_ == 0)
{
lean_object* v___x_2962_; 
v___x_2962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2962_, 0, v_b_2959_);
return v___x_2962_;
}
else
{
lean_object* v_a_2963_; lean_object* v_fst_2964_; lean_object* v_snd_2965_; lean_object* v_fst_2966_; lean_object* v_snd_2967_; lean_object* v___x_2969_; uint8_t v_isShared_2970_; uint8_t v_isSharedCheck_2990_; 
v_a_2963_ = lean_array_uget_borrowed(v_as_2956_, v_i_2958_);
v_fst_2964_ = lean_ctor_get(v_a_2963_, 0);
v_snd_2965_ = lean_ctor_get(v_a_2963_, 1);
v_fst_2966_ = lean_ctor_get(v_b_2959_, 0);
v_snd_2967_ = lean_ctor_get(v_b_2959_, 1);
v_isSharedCheck_2990_ = !lean_is_exclusive(v_b_2959_);
if (v_isSharedCheck_2990_ == 0)
{
v___x_2969_ = v_b_2959_;
v_isShared_2970_ = v_isSharedCheck_2990_;
goto v_resetjp_2968_;
}
else
{
lean_inc(v_snd_2967_);
lean_inc(v_fst_2966_);
lean_dec(v_b_2959_);
v___x_2969_ = lean_box(0);
v_isShared_2970_ = v_isSharedCheck_2990_;
goto v_resetjp_2968_;
}
v_resetjp_2968_:
{
lean_object* v___x_2972_; 
if (v_isShared_2970_ == 0)
{
v___x_2972_ = v___x_2969_;
goto v_reusejp_2971_;
}
else
{
lean_object* v_reuseFailAlloc_2989_; 
v_reuseFailAlloc_2989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2989_, 0, v_fst_2966_);
lean_ctor_set(v_reuseFailAlloc_2989_, 1, v_snd_2967_);
v___x_2972_ = v_reuseFailAlloc_2989_;
goto v_reusejp_2971_;
}
v_reusejp_2971_:
{
size_t v_sz_2973_; size_t v___x_2974_; lean_object* v___x_2975_; 
v_sz_2973_ = lean_array_size(v_snd_2965_);
v___x_2974_ = ((size_t)0ULL);
lean_inc(v_fst_2964_);
v___x_2975_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1(v_fst_2964_, v_snd_2965_, v_sz_2973_, v___x_2974_, v___x_2972_);
if (lean_obj_tag(v___x_2975_) == 0)
{
lean_object* v_a_2976_; lean_object* v_fst_2977_; lean_object* v_snd_2978_; lean_object* v___x_2980_; uint8_t v_isShared_2981_; uint8_t v_isSharedCheck_2988_; 
v_a_2976_ = lean_ctor_get(v___x_2975_, 0);
lean_inc(v_a_2976_);
lean_dec_ref_known(v___x_2975_, 1);
v_fst_2977_ = lean_ctor_get(v_a_2976_, 0);
v_snd_2978_ = lean_ctor_get(v_a_2976_, 1);
v_isSharedCheck_2988_ = !lean_is_exclusive(v_a_2976_);
if (v_isSharedCheck_2988_ == 0)
{
v___x_2980_ = v_a_2976_;
v_isShared_2981_ = v_isSharedCheck_2988_;
goto v_resetjp_2979_;
}
else
{
lean_inc(v_snd_2978_);
lean_inc(v_fst_2977_);
lean_dec(v_a_2976_);
v___x_2980_ = lean_box(0);
v_isShared_2981_ = v_isSharedCheck_2988_;
goto v_resetjp_2979_;
}
v_resetjp_2979_:
{
lean_object* v___x_2983_; 
if (v_isShared_2981_ == 0)
{
v___x_2983_ = v___x_2980_;
goto v_reusejp_2982_;
}
else
{
lean_object* v_reuseFailAlloc_2987_; 
v_reuseFailAlloc_2987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2987_, 0, v_fst_2977_);
lean_ctor_set(v_reuseFailAlloc_2987_, 1, v_snd_2978_);
v___x_2983_ = v_reuseFailAlloc_2987_;
goto v_reusejp_2982_;
}
v_reusejp_2982_:
{
size_t v___x_2984_; size_t v___x_2985_; 
v___x_2984_ = ((size_t)1ULL);
v___x_2985_ = lean_usize_add(v_i_2958_, v___x_2984_);
v_i_2958_ = v___x_2985_;
v_b_2959_ = v___x_2983_;
goto _start;
}
}
}
else
{
return v___x_2975_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6___boxed(lean_object* v_as_2991_, lean_object* v_sz_2992_, lean_object* v_i_2993_, lean_object* v_b_2994_, lean_object* v___y_2995_){
_start:
{
size_t v_sz_boxed_2996_; size_t v_i_boxed_2997_; lean_object* v_res_2998_; 
v_sz_boxed_2996_ = lean_unbox_usize(v_sz_2992_);
lean_dec(v_sz_2992_);
v_i_boxed_2997_ = lean_unbox_usize(v_i_2993_);
lean_dec(v_i_2993_);
v_res_2998_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6(v_as_2991_, v_sz_boxed_2996_, v_i_boxed_2997_, v_b_2994_);
lean_dec_ref(v_as_2991_);
return v_res_2998_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters(lean_object* v_args_3003_, lean_object* v_linterOpts_3004_, lean_object* v_env_3005_, lean_object* v_mod_3006_){
_start:
{
uint8_t v_lintOnly_3008_; uint8_t v_mode_3009_; lean_object* v___y_3011_; uint8_t v___y_3012_; lean_object* v___y_3080_; lean_object* v___x_3086_; lean_object* v_textGroups_3087_; 
v_lintOnly_3008_ = lean_ctor_get_uint8(v_args_3003_, sizeof(void*)*4);
v_mode_3009_ = lean_ctor_get_uint8(v_args_3003_, sizeof(void*)*4 + 1);
v___x_3086_ = l_Lean_Name_getRoot(v_mod_3006_);
v_textGroups_3087_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints(v_env_3005_, v___x_3086_);
lean_dec(v___x_3086_);
if (v_lintOnly_3008_ == 0)
{
v___y_3080_ = v_textGroups_3087_;
goto v___jp_3079_;
}
else
{
lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; 
v___x_3088_ = lean_unsigned_to_nat(0u);
v___x_3089_ = lean_array_get_size(v_textGroups_3087_);
v___x_3090_ = l_Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8(v_linterOpts_3004_, v_textGroups_3087_, v___x_3088_, v___x_3089_);
lean_dec_ref(v_textGroups_3087_);
v___y_3080_ = v___x_3090_;
goto v___jp_3079_;
}
v___jp_3010_:
{
switch(v_mode_3009_)
{
case 0:
{
lean_object* v___x_3013_; size_t v_sz_3014_; size_t v___x_3015_; lean_object* v___x_3016_; 
v___x_3013_ = lean_box(0);
v_sz_3014_ = lean_array_size(v___y_3011_);
v___x_3015_ = ((size_t)0ULL);
v___x_3016_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__5(v___y_3011_, v_sz_3014_, v___x_3015_, v___x_3013_);
lean_dec_ref(v___y_3011_);
if (lean_obj_tag(v___x_3016_) == 0)
{
lean_object* v___x_3018_; uint8_t v_isShared_3019_; uint8_t v_isSharedCheck_3024_; 
v_isSharedCheck_3024_ = !lean_is_exclusive(v___x_3016_);
if (v_isSharedCheck_3024_ == 0)
{
lean_object* v_unused_3025_; 
v_unused_3025_ = lean_ctor_get(v___x_3016_, 0);
lean_dec(v_unused_3025_);
v___x_3018_ = v___x_3016_;
v_isShared_3019_ = v_isSharedCheck_3024_;
goto v_resetjp_3017_;
}
else
{
lean_dec(v___x_3016_);
v___x_3018_ = lean_box(0);
v_isShared_3019_ = v_isSharedCheck_3024_;
goto v_resetjp_3017_;
}
v_resetjp_3017_:
{
lean_object* v___x_3020_; lean_object* v___x_3022_; 
v___x_3020_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_3020_, 0, v___y_3012_);
if (v_isShared_3019_ == 0)
{
lean_ctor_set(v___x_3018_, 0, v___x_3020_);
v___x_3022_ = v___x_3018_;
goto v_reusejp_3021_;
}
else
{
lean_object* v_reuseFailAlloc_3023_; 
v_reuseFailAlloc_3023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3023_, 0, v___x_3020_);
v___x_3022_ = v_reuseFailAlloc_3023_;
goto v_reusejp_3021_;
}
v_reusejp_3021_:
{
return v___x_3022_;
}
}
}
else
{
lean_object* v_a_3026_; lean_object* v___x_3028_; uint8_t v_isShared_3029_; uint8_t v_isSharedCheck_3033_; 
v_a_3026_ = lean_ctor_get(v___x_3016_, 0);
v_isSharedCheck_3033_ = !lean_is_exclusive(v___x_3016_);
if (v_isSharedCheck_3033_ == 0)
{
v___x_3028_ = v___x_3016_;
v_isShared_3029_ = v_isSharedCheck_3033_;
goto v_resetjp_3027_;
}
else
{
lean_inc(v_a_3026_);
lean_dec(v___x_3016_);
v___x_3028_ = lean_box(0);
v_isShared_3029_ = v_isSharedCheck_3033_;
goto v_resetjp_3027_;
}
v_resetjp_3027_:
{
lean_object* v___x_3031_; 
if (v_isShared_3029_ == 0)
{
v___x_3031_ = v___x_3028_;
goto v_reusejp_3030_;
}
else
{
lean_object* v_reuseFailAlloc_3032_; 
v_reuseFailAlloc_3032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3032_, 0, v_a_3026_);
v___x_3031_ = v_reuseFailAlloc_3032_;
goto v_reusejp_3030_;
}
v_reusejp_3030_:
{
return v___x_3031_;
}
}
}
}
case 1:
{
lean_object* v___x_3034_; size_t v_sz_3035_; size_t v___x_3036_; lean_object* v___x_3037_; 
v___x_3034_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters___closed__0));
v_sz_3035_ = lean_array_size(v___y_3011_);
v___x_3036_ = ((size_t)0ULL);
v___x_3037_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6(v___y_3011_, v_sz_3035_, v___x_3036_, v___x_3034_);
lean_dec_ref(v___y_3011_);
if (lean_obj_tag(v___x_3037_) == 0)
{
lean_object* v_a_3038_; lean_object* v___x_3040_; uint8_t v_isShared_3041_; uint8_t v_isSharedCheck_3049_; 
v_a_3038_ = lean_ctor_get(v___x_3037_, 0);
v_isSharedCheck_3049_ = !lean_is_exclusive(v___x_3037_);
if (v_isSharedCheck_3049_ == 0)
{
v___x_3040_ = v___x_3037_;
v_isShared_3041_ = v_isSharedCheck_3049_;
goto v_resetjp_3039_;
}
else
{
lean_inc(v_a_3038_);
lean_dec(v___x_3037_);
v___x_3040_ = lean_box(0);
v_isShared_3041_ = v_isSharedCheck_3049_;
goto v_resetjp_3039_;
}
v_resetjp_3039_:
{
lean_object* v_fst_3042_; lean_object* v_snd_3043_; lean_object* v___x_3044_; uint8_t v___x_3045_; lean_object* v___x_3047_; 
v_fst_3042_ = lean_ctor_get(v_a_3038_, 0);
lean_inc(v_fst_3042_);
v_snd_3043_ = lean_ctor_get(v_a_3038_, 1);
lean_inc(v_snd_3043_);
lean_dec(v_a_3038_);
v___x_3044_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_3044_, 0, v_fst_3042_);
v___x_3045_ = lean_unbox(v_snd_3043_);
lean_dec(v_snd_3043_);
lean_ctor_set_uint8(v___x_3044_, sizeof(void*)*1, v___x_3045_);
if (v_isShared_3041_ == 0)
{
lean_ctor_set(v___x_3040_, 0, v___x_3044_);
v___x_3047_ = v___x_3040_;
goto v_reusejp_3046_;
}
else
{
lean_object* v_reuseFailAlloc_3048_; 
v_reuseFailAlloc_3048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3048_, 0, v___x_3044_);
v___x_3047_ = v_reuseFailAlloc_3048_;
goto v_reusejp_3046_;
}
v_reusejp_3046_:
{
return v___x_3047_;
}
}
}
else
{
lean_object* v_a_3050_; lean_object* v___x_3052_; uint8_t v_isShared_3053_; uint8_t v_isSharedCheck_3057_; 
v_a_3050_ = lean_ctor_get(v___x_3037_, 0);
v_isSharedCheck_3057_ = !lean_is_exclusive(v___x_3037_);
if (v_isSharedCheck_3057_ == 0)
{
v___x_3052_ = v___x_3037_;
v_isShared_3053_ = v_isSharedCheck_3057_;
goto v_resetjp_3051_;
}
else
{
lean_inc(v_a_3050_);
lean_dec(v___x_3037_);
v___x_3052_ = lean_box(0);
v_isShared_3053_ = v_isSharedCheck_3057_;
goto v_resetjp_3051_;
}
v_resetjp_3051_:
{
lean_object* v___x_3055_; 
if (v_isShared_3053_ == 0)
{
v___x_3055_ = v___x_3052_;
goto v_reusejp_3054_;
}
else
{
lean_object* v_reuseFailAlloc_3056_; 
v_reuseFailAlloc_3056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3056_, 0, v_a_3050_);
v___x_3055_ = v_reuseFailAlloc_3056_;
goto v_reusejp_3054_;
}
v_reusejp_3054_:
{
return v___x_3055_;
}
}
}
}
default: 
{
lean_object* v_codeQualityEntries_3058_; size_t v_sz_3059_; size_t v___x_3060_; lean_object* v___x_3061_; 
v_codeQualityEntries_3058_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality___closed__0));
v_sz_3059_ = lean_array_size(v___y_3011_);
v___x_3060_ = ((size_t)0ULL);
v___x_3061_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__7(v___y_3011_, v_sz_3059_, v___x_3060_, v_codeQualityEntries_3058_);
lean_dec_ref(v___y_3011_);
if (lean_obj_tag(v___x_3061_) == 0)
{
lean_object* v_a_3062_; lean_object* v___x_3064_; uint8_t v_isShared_3065_; uint8_t v_isSharedCheck_3070_; 
v_a_3062_ = lean_ctor_get(v___x_3061_, 0);
v_isSharedCheck_3070_ = !lean_is_exclusive(v___x_3061_);
if (v_isSharedCheck_3070_ == 0)
{
v___x_3064_ = v___x_3061_;
v_isShared_3065_ = v_isSharedCheck_3070_;
goto v_resetjp_3063_;
}
else
{
lean_inc(v_a_3062_);
lean_dec(v___x_3061_);
v___x_3064_ = lean_box(0);
v_isShared_3065_ = v_isSharedCheck_3070_;
goto v_resetjp_3063_;
}
v_resetjp_3063_:
{
lean_object* v___x_3066_; lean_object* v___x_3068_; 
v___x_3066_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3066_, 0, v_a_3062_);
if (v_isShared_3065_ == 0)
{
lean_ctor_set(v___x_3064_, 0, v___x_3066_);
v___x_3068_ = v___x_3064_;
goto v_reusejp_3067_;
}
else
{
lean_object* v_reuseFailAlloc_3069_; 
v_reuseFailAlloc_3069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3069_, 0, v___x_3066_);
v___x_3068_ = v_reuseFailAlloc_3069_;
goto v_reusejp_3067_;
}
v_reusejp_3067_:
{
return v___x_3068_;
}
}
}
else
{
lean_object* v_a_3071_; lean_object* v___x_3073_; uint8_t v_isShared_3074_; uint8_t v_isSharedCheck_3078_; 
v_a_3071_ = lean_ctor_get(v___x_3061_, 0);
v_isSharedCheck_3078_ = !lean_is_exclusive(v___x_3061_);
if (v_isSharedCheck_3078_ == 0)
{
v___x_3073_ = v___x_3061_;
v_isShared_3074_ = v_isSharedCheck_3078_;
goto v_resetjp_3072_;
}
else
{
lean_inc(v_a_3071_);
lean_dec(v___x_3061_);
v___x_3073_ = lean_box(0);
v_isShared_3074_ = v_isSharedCheck_3078_;
goto v_resetjp_3072_;
}
v_resetjp_3072_:
{
lean_object* v___x_3076_; 
if (v_isShared_3074_ == 0)
{
v___x_3076_ = v___x_3073_;
goto v_reusejp_3075_;
}
else
{
lean_object* v_reuseFailAlloc_3077_; 
v_reuseFailAlloc_3077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3077_, 0, v_a_3071_);
v___x_3076_ = v_reuseFailAlloc_3077_;
goto v_reusejp_3075_;
}
v_reusejp_3075_:
{
return v___x_3076_;
}
}
}
}
}
}
v___jp_3079_:
{
lean_object* v___x_3081_; lean_object* v___x_3082_; uint8_t v___x_3083_; 
v___x_3081_ = lean_array_get_size(v___y_3080_);
v___x_3082_ = lean_unsigned_to_nat(0u);
v___x_3083_ = lean_nat_dec_eq(v___x_3081_, v___x_3082_);
if (v___x_3083_ == 0)
{
uint8_t v___x_3084_; 
v___x_3084_ = 1;
v___y_3011_ = v___y_3080_;
v___y_3012_ = v___x_3084_;
goto v___jp_3010_;
}
else
{
uint8_t v___x_3085_; 
v___x_3085_ = 0;
v___y_3011_ = v___y_3080_;
v___y_3012_ = v___x_3085_;
goto v___jp_3010_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters___boxed(lean_object* v_args_3091_, lean_object* v_linterOpts_3092_, lean_object* v_env_3093_, lean_object* v_mod_3094_, lean_object* v___y_3095_){
_start:
{
lean_object* v_res_3096_; 
v_res_3096_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters(v_args_3091_, v_linterOpts_3092_, v_env_3093_, v_mod_3094_);
lean_dec(v_mod_3094_);
lean_dec_ref(v_env_3093_);
lean_dec_ref(v_linterOpts_3092_);
lean_dec_ref(v_args_3091_);
return v_res_3096_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___lam__0(uint8_t v___y_3097_, lean_object* v_____r_3098_, lean_object* v___y_3099_, lean_object* v___y_3100_){
_start:
{
lean_object* v___x_3102_; lean_object* v___x_3103_; 
v___x_3102_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_3102_, 0, v___y_3097_);
v___x_3103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3103_, 0, v___x_3102_);
return v___x_3103_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___lam__0___boxed(lean_object* v___y_3104_, lean_object* v_____r_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_){
_start:
{
uint8_t v___y_15669__boxed_3109_; lean_object* v_res_3110_; 
v___y_15669__boxed_3109_ = lean_unbox(v___y_3104_);
v_res_3110_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___lam__0(v___y_15669__boxed_3109_, v_____r_3105_, v___y_3106_, v___y_3107_);
lean_dec(v___y_3107_);
lean_dec_ref(v___y_3106_);
return v_res_3110_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__0(void){
_start:
{
lean_object* v___x_3111_; lean_object* v___x_3112_; 
v___x_3111_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14);
v___x_3112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3112_, 0, v___x_3111_);
return v___x_3112_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__1(void){
_start:
{
lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; 
v___x_3113_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__0);
v___x_3114_ = lean_unsigned_to_nat(0u);
v___x_3115_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_3115_, 0, v___x_3114_);
lean_ctor_set(v___x_3115_, 1, v___x_3114_);
lean_ctor_set(v___x_3115_, 2, v___x_3114_);
lean_ctor_set(v___x_3115_, 3, v___x_3114_);
lean_ctor_set(v___x_3115_, 4, v___x_3113_);
lean_ctor_set(v___x_3115_, 5, v___x_3113_);
lean_ctor_set(v___x_3115_, 6, v___x_3113_);
lean_ctor_set(v___x_3115_, 7, v___x_3113_);
lean_ctor_set(v___x_3115_, 8, v___x_3113_);
lean_ctor_set(v___x_3115_, 9, v___x_3113_);
lean_ctor_set(v___x_3115_, 10, v___x_3113_);
return v___x_3115_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__2(void){
_start:
{
lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; 
v___x_3116_ = lean_unsigned_to_nat(32u);
v___x_3117_ = lean_mk_empty_array_with_capacity(v___x_3116_);
v___x_3118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3118_, 0, v___x_3117_);
return v___x_3118_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__3(void){
_start:
{
size_t v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; 
v___x_3119_ = ((size_t)5ULL);
v___x_3120_ = lean_unsigned_to_nat(0u);
v___x_3121_ = lean_unsigned_to_nat(32u);
v___x_3122_ = lean_mk_empty_array_with_capacity(v___x_3121_);
v___x_3123_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__2);
v___x_3124_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3124_, 0, v___x_3123_);
lean_ctor_set(v___x_3124_, 1, v___x_3122_);
lean_ctor_set(v___x_3124_, 2, v___x_3120_);
lean_ctor_set(v___x_3124_, 3, v___x_3120_);
lean_ctor_set_usize(v___x_3124_, 4, v___x_3119_);
return v___x_3124_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__4(void){
_start:
{
lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; 
v___x_3125_ = lean_box(1);
v___x_3126_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__3);
v___x_3127_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__0);
v___x_3128_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3128_, 0, v___x_3127_);
lean_ctor_set(v___x_3128_, 1, v___x_3126_);
lean_ctor_set(v___x_3128_, 2, v___x_3125_);
return v___x_3128_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18(lean_object* v_msgData_3129_, lean_object* v___y_3130_, lean_object* v___y_3131_){
_start:
{
lean_object* v___x_3133_; lean_object* v_toCold_3134_; lean_object* v_env_3135_; lean_object* v_options_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; 
v___x_3133_ = lean_st_ref_get(v___y_3131_);
v_toCold_3134_ = lean_ctor_get(v___y_3130_, 0);
v_env_3135_ = lean_ctor_get(v___x_3133_, 0);
lean_inc_ref(v_env_3135_);
lean_dec(v___x_3133_);
v_options_3136_ = lean_ctor_get(v_toCold_3134_, 2);
v___x_3137_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__1);
v___x_3138_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__4);
lean_inc_ref(v_options_3136_);
v___x_3139_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3139_, 0, v_env_3135_);
lean_ctor_set(v___x_3139_, 1, v___x_3137_);
lean_ctor_set(v___x_3139_, 2, v___x_3138_);
lean_ctor_set(v___x_3139_, 3, v_options_3136_);
v___x_3140_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3140_, 0, v___x_3139_);
lean_ctor_set(v___x_3140_, 1, v_msgData_3129_);
v___x_3141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3141_, 0, v___x_3140_);
return v___x_3141_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___boxed(lean_object* v_msgData_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_){
_start:
{
lean_object* v_res_3146_; 
v_res_3146_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18(v_msgData_3142_, v___y_3143_, v___y_3144_);
lean_dec(v___y_3144_);
lean_dec_ref(v___y_3143_);
return v_res_3146_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17___redArg(lean_object* v_msg_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_){
_start:
{
lean_object* v_ref_3151_; lean_object* v___x_3152_; lean_object* v_a_3153_; lean_object* v___x_3155_; uint8_t v_isShared_3156_; uint8_t v_isSharedCheck_3161_; 
v_ref_3151_ = lean_ctor_get(v___y_3148_, 2);
v___x_3152_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18(v_msg_3147_, v___y_3148_, v___y_3149_);
v_a_3153_ = lean_ctor_get(v___x_3152_, 0);
v_isSharedCheck_3161_ = !lean_is_exclusive(v___x_3152_);
if (v_isSharedCheck_3161_ == 0)
{
v___x_3155_ = v___x_3152_;
v_isShared_3156_ = v_isSharedCheck_3161_;
goto v_resetjp_3154_;
}
else
{
lean_inc(v_a_3153_);
lean_dec(v___x_3152_);
v___x_3155_ = lean_box(0);
v_isShared_3156_ = v_isSharedCheck_3161_;
goto v_resetjp_3154_;
}
v_resetjp_3154_:
{
lean_object* v___x_3157_; lean_object* v___x_3159_; 
lean_inc(v_ref_3151_);
v___x_3157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3157_, 0, v_ref_3151_);
lean_ctor_set(v___x_3157_, 1, v_a_3153_);
if (v_isShared_3156_ == 0)
{
lean_ctor_set_tag(v___x_3155_, 1);
lean_ctor_set(v___x_3155_, 0, v___x_3157_);
v___x_3159_ = v___x_3155_;
goto v_reusejp_3158_;
}
else
{
lean_object* v_reuseFailAlloc_3160_; 
v_reuseFailAlloc_3160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3160_, 0, v___x_3157_);
v___x_3159_ = v_reuseFailAlloc_3160_;
goto v_reusejp_3158_;
}
v_reusejp_3158_:
{
return v___x_3159_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17___redArg___boxed(lean_object* v_msg_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_){
_start:
{
lean_object* v_res_3166_; 
v_res_3166_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17___redArg(v_msg_3162_, v___y_3163_, v___y_3164_);
lean_dec(v___y_3164_);
lean_dec_ref(v___y_3163_);
return v_res_3166_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15___redArg(lean_object* v_ref_3167_, lean_object* v_msg_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_){
_start:
{
lean_object* v_toCold_3172_; lean_object* v_currRecDepth_3173_; lean_object* v_ref_3174_; uint8_t v_diag_3175_; uint8_t v_suppressElabErrors_3176_; lean_object* v_ref_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; 
v_toCold_3172_ = lean_ctor_get(v___y_3169_, 0);
v_currRecDepth_3173_ = lean_ctor_get(v___y_3169_, 1);
v_ref_3174_ = lean_ctor_get(v___y_3169_, 2);
v_diag_3175_ = lean_ctor_get_uint8(v___y_3169_, sizeof(void*)*3);
v_suppressElabErrors_3176_ = lean_ctor_get_uint8(v___y_3169_, sizeof(void*)*3 + 1);
v_ref_3177_ = l_Lean_replaceRef(v_ref_3167_, v_ref_3174_);
lean_inc(v_currRecDepth_3173_);
lean_inc_ref(v_toCold_3172_);
v___x_3178_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3178_, 0, v_toCold_3172_);
lean_ctor_set(v___x_3178_, 1, v_currRecDepth_3173_);
lean_ctor_set(v___x_3178_, 2, v_ref_3177_);
lean_ctor_set_uint8(v___x_3178_, sizeof(void*)*3, v_diag_3175_);
lean_ctor_set_uint8(v___x_3178_, sizeof(void*)*3 + 1, v_suppressElabErrors_3176_);
v___x_3179_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17___redArg(v_msg_3168_, v___x_3178_, v___y_3170_);
lean_dec_ref_known(v___x_3178_, 3);
return v___x_3179_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15___redArg___boxed(lean_object* v_ref_3180_, lean_object* v_msg_3181_, lean_object* v___y_3182_, lean_object* v___y_3183_, lean_object* v___y_3184_){
_start:
{
lean_object* v_res_3185_; 
v_res_3185_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15___redArg(v_ref_3180_, v_msg_3181_, v___y_3182_, v___y_3183_);
lean_dec(v___y_3183_);
lean_dec_ref(v___y_3182_);
lean_dec(v_ref_3180_);
return v_res_3185_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__1(void){
_start:
{
lean_object* v___x_3187_; lean_object* v___x_3188_; 
v___x_3187_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__0));
v___x_3188_ = l_Lean_stringToMessageData(v___x_3187_);
return v___x_3188_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__3(void){
_start:
{
lean_object* v___x_3190_; lean_object* v___x_3191_; 
v___x_3190_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__2));
v___x_3191_ = l_Lean_stringToMessageData(v___x_3190_);
return v___x_3191_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__5(void){
_start:
{
lean_object* v___x_3193_; lean_object* v___x_3194_; 
v___x_3193_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__4));
v___x_3194_ = l_Lean_stringToMessageData(v___x_3193_);
return v___x_3194_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__7(void){
_start:
{
lean_object* v___x_3196_; lean_object* v___x_3197_; 
v___x_3196_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__6));
v___x_3197_ = l_Lean_stringToMessageData(v___x_3196_);
return v___x_3197_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__9(void){
_start:
{
lean_object* v___x_3199_; lean_object* v___x_3200_; 
v___x_3199_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__8));
v___x_3200_ = l_Lean_stringToMessageData(v___x_3199_);
return v___x_3200_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__11(void){
_start:
{
lean_object* v___x_3202_; lean_object* v___x_3203_; 
v___x_3202_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__10));
v___x_3203_ = l_Lean_stringToMessageData(v___x_3202_);
return v___x_3203_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__13(void){
_start:
{
lean_object* v___x_3205_; lean_object* v___x_3206_; 
v___x_3205_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__12));
v___x_3206_ = l_Lean_stringToMessageData(v___x_3205_);
return v___x_3206_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg(lean_object* v_msg_3207_, lean_object* v_declHint_3208_, lean_object* v___y_3209_){
_start:
{
lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v_env_3213_; uint8_t v___x_3214_; 
v___x_3211_ = lean_box(0);
v___x_3212_ = lean_st_ref_get(v___y_3209_);
v_env_3213_ = lean_ctor_get(v___x_3212_, 0);
lean_inc_ref(v_env_3213_);
lean_dec(v___x_3212_);
v___x_3214_ = l_Lean_Name_isAnonymous(v_declHint_3208_);
if (v___x_3214_ == 0)
{
uint8_t v_isExporting_3215_; 
v_isExporting_3215_ = lean_ctor_get_uint8(v_env_3213_, sizeof(void*)*8);
if (v_isExporting_3215_ == 0)
{
lean_object* v___x_3216_; 
lean_dec_ref(v_env_3213_);
lean_dec(v_declHint_3208_);
v___x_3216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3216_, 0, v_msg_3207_);
return v___x_3216_;
}
else
{
lean_object* v___x_3217_; uint8_t v___x_3218_; 
lean_inc_ref(v_env_3213_);
v___x_3217_ = l_Lean_Environment_setExporting(v_env_3213_, v___x_3214_);
lean_inc(v_declHint_3208_);
lean_inc_ref(v___x_3217_);
v___x_3218_ = l_Lean_Environment_contains(v___x_3217_, v_declHint_3208_, v_isExporting_3215_);
if (v___x_3218_ == 0)
{
lean_object* v___x_3219_; 
lean_dec_ref(v___x_3217_);
lean_dec_ref(v_env_3213_);
lean_dec(v_declHint_3208_);
v___x_3219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3219_, 0, v_msg_3207_);
return v___x_3219_;
}
else
{
lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v_c_3225_; lean_object* v___x_3226_; 
v___x_3220_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__1);
v___x_3221_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__4);
v___x_3222_ = l_Lean_Options_empty;
v___x_3223_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3223_, 0, v___x_3217_);
lean_ctor_set(v___x_3223_, 1, v___x_3220_);
lean_ctor_set(v___x_3223_, 2, v___x_3221_);
lean_ctor_set(v___x_3223_, 3, v___x_3222_);
lean_inc(v_declHint_3208_);
v___x_3224_ = l_Lean_MessageData_ofConstName(v_declHint_3208_, v___x_3214_);
v_c_3225_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_3225_, 0, v___x_3223_);
lean_ctor_set(v_c_3225_, 1, v___x_3224_);
v___x_3226_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3213_, v_declHint_3208_);
if (lean_obj_tag(v___x_3226_) == 0)
{
lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; 
lean_dec_ref(v_env_3213_);
lean_dec(v_declHint_3208_);
v___x_3227_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__1);
v___x_3228_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3228_, 0, v___x_3227_);
lean_ctor_set(v___x_3228_, 1, v_c_3225_);
v___x_3229_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__3);
v___x_3230_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3230_, 0, v___x_3228_);
lean_ctor_set(v___x_3230_, 1, v___x_3229_);
v___x_3231_ = l_Lean_MessageData_note(v___x_3230_);
v___x_3232_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3232_, 0, v_msg_3207_);
lean_ctor_set(v___x_3232_, 1, v___x_3231_);
v___x_3233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3233_, 0, v___x_3232_);
return v___x_3233_;
}
else
{
lean_object* v_val_3234_; lean_object* v___x_3236_; uint8_t v_isShared_3237_; uint8_t v_isSharedCheck_3268_; 
v_val_3234_ = lean_ctor_get(v___x_3226_, 0);
v_isSharedCheck_3268_ = !lean_is_exclusive(v___x_3226_);
if (v_isSharedCheck_3268_ == 0)
{
v___x_3236_ = v___x_3226_;
v_isShared_3237_ = v_isSharedCheck_3268_;
goto v_resetjp_3235_;
}
else
{
lean_inc(v_val_3234_);
lean_dec(v___x_3226_);
v___x_3236_ = lean_box(0);
v_isShared_3237_ = v_isSharedCheck_3268_;
goto v_resetjp_3235_;
}
v_resetjp_3235_:
{
lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v_mod_3240_; uint8_t v___x_3241_; 
v___x_3238_ = l_Lean_Environment_header(v_env_3213_);
lean_dec_ref(v_env_3213_);
v___x_3239_ = l_Lean_EnvironmentHeader_moduleNames(v___x_3238_);
v_mod_3240_ = lean_array_get(v___x_3211_, v___x_3239_, v_val_3234_);
lean_dec(v_val_3234_);
lean_dec_ref(v___x_3239_);
v___x_3241_ = l_Lean_isPrivateName(v_declHint_3208_);
lean_dec(v_declHint_3208_);
if (v___x_3241_ == 0)
{
lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3253_; 
v___x_3242_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__5);
v___x_3243_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3243_, 0, v___x_3242_);
lean_ctor_set(v___x_3243_, 1, v_c_3225_);
v___x_3244_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__7);
v___x_3245_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3245_, 0, v___x_3243_);
lean_ctor_set(v___x_3245_, 1, v___x_3244_);
v___x_3246_ = l_Lean_MessageData_ofName(v_mod_3240_);
v___x_3247_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3247_, 0, v___x_3245_);
lean_ctor_set(v___x_3247_, 1, v___x_3246_);
v___x_3248_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__9);
v___x_3249_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3249_, 0, v___x_3247_);
lean_ctor_set(v___x_3249_, 1, v___x_3248_);
v___x_3250_ = l_Lean_MessageData_note(v___x_3249_);
v___x_3251_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3251_, 0, v_msg_3207_);
lean_ctor_set(v___x_3251_, 1, v___x_3250_);
if (v_isShared_3237_ == 0)
{
lean_ctor_set_tag(v___x_3236_, 0);
lean_ctor_set(v___x_3236_, 0, v___x_3251_);
v___x_3253_ = v___x_3236_;
goto v_reusejp_3252_;
}
else
{
lean_object* v_reuseFailAlloc_3254_; 
v_reuseFailAlloc_3254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3254_, 0, v___x_3251_);
v___x_3253_ = v_reuseFailAlloc_3254_;
goto v_reusejp_3252_;
}
v_reusejp_3252_:
{
return v___x_3253_;
}
}
else
{
lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3266_; 
v___x_3255_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__1);
v___x_3256_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3256_, 0, v___x_3255_);
lean_ctor_set(v___x_3256_, 1, v_c_3225_);
v___x_3257_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__11);
v___x_3258_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3258_, 0, v___x_3256_);
lean_ctor_set(v___x_3258_, 1, v___x_3257_);
v___x_3259_ = l_Lean_MessageData_ofName(v_mod_3240_);
v___x_3260_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3260_, 0, v___x_3258_);
lean_ctor_set(v___x_3260_, 1, v___x_3259_);
v___x_3261_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__13);
v___x_3262_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3262_, 0, v___x_3260_);
lean_ctor_set(v___x_3262_, 1, v___x_3261_);
v___x_3263_ = l_Lean_MessageData_note(v___x_3262_);
v___x_3264_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3264_, 0, v_msg_3207_);
lean_ctor_set(v___x_3264_, 1, v___x_3263_);
if (v_isShared_3237_ == 0)
{
lean_ctor_set_tag(v___x_3236_, 0);
lean_ctor_set(v___x_3236_, 0, v___x_3264_);
v___x_3266_ = v___x_3236_;
goto v_reusejp_3265_;
}
else
{
lean_object* v_reuseFailAlloc_3267_; 
v_reuseFailAlloc_3267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3267_, 0, v___x_3264_);
v___x_3266_ = v_reuseFailAlloc_3267_;
goto v_reusejp_3265_;
}
v_reusejp_3265_:
{
return v___x_3266_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3269_; 
lean_dec_ref(v_env_3213_);
lean_dec(v_declHint_3208_);
v___x_3269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3269_, 0, v_msg_3207_);
return v___x_3269_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___boxed(lean_object* v_msg_3270_, lean_object* v_declHint_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_){
_start:
{
lean_object* v_res_3274_; 
v_res_3274_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg(v_msg_3270_, v_declHint_3271_, v___y_3272_);
lean_dec(v___y_3272_);
return v_res_3274_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14(lean_object* v_msg_3275_, lean_object* v_declHint_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_){
_start:
{
lean_object* v___x_3280_; lean_object* v_a_3281_; lean_object* v___x_3283_; uint8_t v_isShared_3284_; uint8_t v_isSharedCheck_3290_; 
v___x_3280_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg(v_msg_3275_, v_declHint_3276_, v___y_3278_);
v_a_3281_ = lean_ctor_get(v___x_3280_, 0);
v_isSharedCheck_3290_ = !lean_is_exclusive(v___x_3280_);
if (v_isSharedCheck_3290_ == 0)
{
v___x_3283_ = v___x_3280_;
v_isShared_3284_ = v_isSharedCheck_3290_;
goto v_resetjp_3282_;
}
else
{
lean_inc(v_a_3281_);
lean_dec(v___x_3280_);
v___x_3283_ = lean_box(0);
v_isShared_3284_ = v_isSharedCheck_3290_;
goto v_resetjp_3282_;
}
v_resetjp_3282_:
{
lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3288_; 
v___x_3285_ = l_Lean_unknownIdentifierMessageTag;
v___x_3286_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3286_, 0, v___x_3285_);
lean_ctor_set(v___x_3286_, 1, v_a_3281_);
if (v_isShared_3284_ == 0)
{
lean_ctor_set(v___x_3283_, 0, v___x_3286_);
v___x_3288_ = v___x_3283_;
goto v_reusejp_3287_;
}
else
{
lean_object* v_reuseFailAlloc_3289_; 
v_reuseFailAlloc_3289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3289_, 0, v___x_3286_);
v___x_3288_ = v_reuseFailAlloc_3289_;
goto v_reusejp_3287_;
}
v_reusejp_3287_:
{
return v___x_3288_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14___boxed(lean_object* v_msg_3291_, lean_object* v_declHint_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_, lean_object* v___y_3295_){
_start:
{
lean_object* v_res_3296_; 
v_res_3296_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14(v_msg_3291_, v_declHint_3292_, v___y_3293_, v___y_3294_);
lean_dec(v___y_3294_);
lean_dec_ref(v___y_3293_);
return v_res_3296_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13___redArg(lean_object* v_ref_3297_, lean_object* v_msg_3298_, lean_object* v_declHint_3299_, lean_object* v___y_3300_, lean_object* v___y_3301_){
_start:
{
lean_object* v___x_3303_; lean_object* v_a_3304_; lean_object* v___x_3305_; 
v___x_3303_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14(v_msg_3298_, v_declHint_3299_, v___y_3300_, v___y_3301_);
v_a_3304_ = lean_ctor_get(v___x_3303_, 0);
lean_inc(v_a_3304_);
lean_dec_ref(v___x_3303_);
v___x_3305_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15___redArg(v_ref_3297_, v_a_3304_, v___y_3300_, v___y_3301_);
return v___x_3305_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13___redArg___boxed(lean_object* v_ref_3306_, lean_object* v_msg_3307_, lean_object* v_declHint_3308_, lean_object* v___y_3309_, lean_object* v___y_3310_, lean_object* v___y_3311_){
_start:
{
lean_object* v_res_3312_; 
v_res_3312_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13___redArg(v_ref_3306_, v_msg_3307_, v_declHint_3308_, v___y_3309_, v___y_3310_);
lean_dec(v___y_3310_);
lean_dec_ref(v___y_3309_);
lean_dec(v_ref_3306_);
return v_res_3312_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__1(void){
_start:
{
lean_object* v___x_3314_; lean_object* v___x_3315_; 
v___x_3314_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__0));
v___x_3315_ = l_Lean_stringToMessageData(v___x_3314_);
return v___x_3315_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__2(void){
_start:
{
lean_object* v___x_3316_; lean_object* v___x_3317_; 
v___x_3316_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__1));
v___x_3317_ = l_Lean_stringToMessageData(v___x_3316_);
return v___x_3317_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg(lean_object* v_ref_3318_, lean_object* v_constName_3319_, lean_object* v___y_3320_, lean_object* v___y_3321_){
_start:
{
lean_object* v___x_3323_; uint8_t v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; 
v___x_3323_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__1);
v___x_3324_ = 0;
lean_inc(v_constName_3319_);
v___x_3325_ = l_Lean_MessageData_ofConstName(v_constName_3319_, v___x_3324_);
v___x_3326_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3326_, 0, v___x_3323_);
lean_ctor_set(v___x_3326_, 1, v___x_3325_);
v___x_3327_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__2, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__2_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__2);
v___x_3328_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3328_, 0, v___x_3326_);
lean_ctor_set(v___x_3328_, 1, v___x_3327_);
v___x_3329_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13___redArg(v_ref_3318_, v___x_3328_, v_constName_3319_, v___y_3320_, v___y_3321_);
return v___x_3329_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___boxed(lean_object* v_ref_3330_, lean_object* v_constName_3331_, lean_object* v___y_3332_, lean_object* v___y_3333_, lean_object* v___y_3334_){
_start:
{
lean_object* v_res_3335_; 
v_res_3335_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg(v_ref_3330_, v_constName_3331_, v___y_3332_, v___y_3333_);
lean_dec(v___y_3333_);
lean_dec_ref(v___y_3332_);
lean_dec(v_ref_3330_);
return v_res_3335_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1___redArg(lean_object* v_constName_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_){
_start:
{
lean_object* v_ref_3340_; lean_object* v___x_3341_; 
v_ref_3340_ = lean_ctor_get(v___y_3337_, 2);
v___x_3341_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg(v_ref_3340_, v_constName_3336_, v___y_3337_, v___y_3338_);
return v___x_3341_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_constName_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_){
_start:
{
lean_object* v_res_3346_; 
v_res_3346_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1___redArg(v_constName_3342_, v___y_3343_, v___y_3344_);
lean_dec(v___y_3344_);
lean_dec_ref(v___y_3343_);
return v_res_3346_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0(lean_object* v_constName_3347_, lean_object* v___y_3348_, lean_object* v___y_3349_){
_start:
{
lean_object* v___x_3351_; lean_object* v_env_3352_; uint8_t v___x_3353_; lean_object* v___x_3354_; 
v___x_3351_ = lean_st_ref_get(v___y_3349_);
v_env_3352_ = lean_ctor_get(v___x_3351_, 0);
lean_inc_ref(v_env_3352_);
lean_dec(v___x_3351_);
v___x_3353_ = 0;
lean_inc(v_constName_3347_);
v___x_3354_ = l_Lean_Environment_find_x3f(v_env_3352_, v_constName_3347_, v___x_3353_);
if (lean_obj_tag(v___x_3354_) == 0)
{
lean_object* v___x_3355_; 
v___x_3355_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1___redArg(v_constName_3347_, v___y_3348_, v___y_3349_);
return v___x_3355_;
}
else
{
lean_object* v_val_3356_; lean_object* v___x_3358_; uint8_t v_isShared_3359_; uint8_t v_isSharedCheck_3363_; 
lean_dec(v_constName_3347_);
v_val_3356_ = lean_ctor_get(v___x_3354_, 0);
v_isSharedCheck_3363_ = !lean_is_exclusive(v___x_3354_);
if (v_isSharedCheck_3363_ == 0)
{
v___x_3358_ = v___x_3354_;
v_isShared_3359_ = v_isSharedCheck_3363_;
goto v_resetjp_3357_;
}
else
{
lean_inc(v_val_3356_);
lean_dec(v___x_3354_);
v___x_3358_ = lean_box(0);
v_isShared_3359_ = v_isSharedCheck_3363_;
goto v_resetjp_3357_;
}
v_resetjp_3357_:
{
lean_object* v___x_3361_; 
if (v_isShared_3359_ == 0)
{
lean_ctor_set_tag(v___x_3358_, 0);
v___x_3361_ = v___x_3358_;
goto v_reusejp_3360_;
}
else
{
lean_object* v_reuseFailAlloc_3362_; 
v_reuseFailAlloc_3362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3362_, 0, v_val_3356_);
v___x_3361_ = v_reuseFailAlloc_3362_;
goto v_reusejp_3360_;
}
v_reusejp_3360_:
{
return v___x_3361_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0___boxed(lean_object* v_constName_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_){
_start:
{
lean_object* v_res_3368_; 
v_res_3368_ = l_Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0(v_constName_3364_, v___y_3365_, v___y_3366_);
lean_dec(v___y_3366_);
lean_dec_ref(v___y_3365_);
return v_res_3368_;
}
}
LEAN_EXPORT lean_object* l_Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0(lean_object* v_declName_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_){
_start:
{
lean_object* v___x_3373_; lean_object* v___x_3374_; 
v___x_3373_ = lean_box(0);
lean_inc(v_declName_3369_);
v___x_3374_ = l_Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0(v_declName_3369_, v___y_3370_, v___y_3371_);
if (lean_obj_tag(v___x_3374_) == 0)
{
lean_object* v___x_3376_; uint8_t v_isShared_3377_; uint8_t v_isSharedCheck_3400_; 
v_isSharedCheck_3400_ = !lean_is_exclusive(v___x_3374_);
if (v_isSharedCheck_3400_ == 0)
{
lean_object* v_unused_3401_; 
v_unused_3401_ = lean_ctor_get(v___x_3374_, 0);
lean_dec(v_unused_3401_);
v___x_3376_ = v___x_3374_;
v_isShared_3377_ = v_isSharedCheck_3400_;
goto v_resetjp_3375_;
}
else
{
lean_dec(v___x_3374_);
v___x_3376_ = lean_box(0);
v_isShared_3377_ = v_isSharedCheck_3400_;
goto v_resetjp_3375_;
}
v_resetjp_3375_:
{
lean_object* v___x_3378_; lean_object* v_env_3379_; lean_object* v___x_3380_; 
v___x_3378_ = lean_st_ref_get(v___y_3371_);
v_env_3379_ = lean_ctor_get(v___x_3378_, 0);
lean_inc_ref(v_env_3379_);
lean_dec(v___x_3378_);
v___x_3380_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3379_, v_declName_3369_);
lean_dec(v_declName_3369_);
lean_dec_ref(v_env_3379_);
if (lean_obj_tag(v___x_3380_) == 0)
{
lean_object* v___x_3381_; lean_object* v___x_3383_; 
v___x_3381_ = lean_box(0);
if (v_isShared_3377_ == 0)
{
lean_ctor_set(v___x_3376_, 0, v___x_3381_);
v___x_3383_ = v___x_3376_;
goto v_reusejp_3382_;
}
else
{
lean_object* v_reuseFailAlloc_3384_; 
v_reuseFailAlloc_3384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3384_, 0, v___x_3381_);
v___x_3383_ = v_reuseFailAlloc_3384_;
goto v_reusejp_3382_;
}
v_reusejp_3382_:
{
return v___x_3383_;
}
}
else
{
lean_object* v_val_3385_; lean_object* v___x_3387_; uint8_t v_isShared_3388_; uint8_t v_isSharedCheck_3399_; 
v_val_3385_ = lean_ctor_get(v___x_3380_, 0);
v_isSharedCheck_3399_ = !lean_is_exclusive(v___x_3380_);
if (v_isSharedCheck_3399_ == 0)
{
v___x_3387_ = v___x_3380_;
v_isShared_3388_ = v_isSharedCheck_3399_;
goto v_resetjp_3386_;
}
else
{
lean_inc(v_val_3385_);
lean_dec(v___x_3380_);
v___x_3387_ = lean_box(0);
v_isShared_3388_ = v_isSharedCheck_3399_;
goto v_resetjp_3386_;
}
v_resetjp_3386_:
{
lean_object* v___x_3389_; lean_object* v_env_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3394_; 
v___x_3389_ = lean_st_ref_get(v___y_3371_);
v_env_3390_ = lean_ctor_get(v___x_3389_, 0);
lean_inc_ref(v_env_3390_);
lean_dec(v___x_3389_);
v___x_3391_ = l_Lean_Environment_allImportedModuleNames(v_env_3390_);
lean_dec_ref(v_env_3390_);
v___x_3392_ = lean_array_get(v___x_3373_, v___x_3391_, v_val_3385_);
lean_dec(v_val_3385_);
lean_dec_ref(v___x_3391_);
if (v_isShared_3388_ == 0)
{
lean_ctor_set(v___x_3387_, 0, v___x_3392_);
v___x_3394_ = v___x_3387_;
goto v_reusejp_3393_;
}
else
{
lean_object* v_reuseFailAlloc_3398_; 
v_reuseFailAlloc_3398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3398_, 0, v___x_3392_);
v___x_3394_ = v_reuseFailAlloc_3398_;
goto v_reusejp_3393_;
}
v_reusejp_3393_:
{
lean_object* v___x_3396_; 
if (v_isShared_3377_ == 0)
{
lean_ctor_set(v___x_3376_, 0, v___x_3394_);
v___x_3396_ = v___x_3376_;
goto v_reusejp_3395_;
}
else
{
lean_object* v_reuseFailAlloc_3397_; 
v_reuseFailAlloc_3397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3397_, 0, v___x_3394_);
v___x_3396_ = v_reuseFailAlloc_3397_;
goto v_reusejp_3395_;
}
v_reusejp_3395_:
{
return v___x_3396_;
}
}
}
}
}
}
else
{
lean_object* v_a_3402_; lean_object* v___x_3404_; uint8_t v_isShared_3405_; uint8_t v_isSharedCheck_3409_; 
lean_dec(v_declName_3369_);
v_a_3402_ = lean_ctor_get(v___x_3374_, 0);
v_isSharedCheck_3409_ = !lean_is_exclusive(v___x_3374_);
if (v_isSharedCheck_3409_ == 0)
{
v___x_3404_ = v___x_3374_;
v_isShared_3405_ = v_isSharedCheck_3409_;
goto v_resetjp_3403_;
}
else
{
lean_inc(v_a_3402_);
lean_dec(v___x_3374_);
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
LEAN_EXPORT lean_object* l_Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0___boxed(lean_object* v_declName_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_){
_start:
{
lean_object* v_res_3414_; 
v_res_3414_ = l_Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0(v_declName_3410_, v___y_3411_, v___y_3412_);
lean_dec(v___y_3412_);
lean_dec_ref(v___y_3411_);
return v_res_3414_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1(lean_object* v_fst_3416_, lean_object* v_sp_3417_, lean_object* v___x_3418_, lean_object* v_as_3419_, size_t v_sz_3420_, size_t v_i_3421_, lean_object* v_b_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_){
_start:
{
lean_object* v_a_3427_; uint8_t v___x_3431_; 
v___x_3431_ = lean_usize_dec_lt(v_i_3421_, v_sz_3420_);
if (v___x_3431_ == 0)
{
lean_object* v___x_3432_; 
lean_dec(v___x_3418_);
lean_dec(v_sp_3417_);
lean_dec_ref(v_fst_3416_);
v___x_3432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3432_, 0, v_b_3422_);
return v___x_3432_;
}
else
{
lean_object* v_a_3433_; lean_object* v_fst_3434_; lean_object* v___x_3436_; uint8_t v_isShared_3437_; uint8_t v_isSharedCheck_3562_; 
v_a_3433_ = lean_array_uget(v_as_3419_, v_i_3421_);
v_fst_3434_ = lean_ctor_get(v_a_3433_, 0);
v_isSharedCheck_3562_ = !lean_is_exclusive(v_a_3433_);
if (v_isSharedCheck_3562_ == 0)
{
lean_object* v_unused_3563_; 
v_unused_3563_ = lean_ctor_get(v_a_3433_, 1);
lean_dec(v_unused_3563_);
v___x_3436_ = v_a_3433_;
v_isShared_3437_ = v_isSharedCheck_3562_;
goto v_resetjp_3435_;
}
else
{
lean_inc(v_fst_3434_);
lean_dec(v_a_3433_);
v___x_3436_ = lean_box(0);
v_isShared_3437_ = v_isSharedCheck_3562_;
goto v_resetjp_3435_;
}
v_resetjp_3435_:
{
lean_object* v_fst_3438_; lean_object* v_snd_3439_; lean_object* v___x_3441_; uint8_t v_isShared_3442_; uint8_t v_isSharedCheck_3561_; 
v_fst_3438_ = lean_ctor_get(v_b_3422_, 0);
v_snd_3439_ = lean_ctor_get(v_b_3422_, 1);
v_isSharedCheck_3561_ = !lean_is_exclusive(v_b_3422_);
if (v_isSharedCheck_3561_ == 0)
{
v___x_3441_ = v_b_3422_;
v_isShared_3442_ = v_isSharedCheck_3561_;
goto v_resetjp_3440_;
}
else
{
lean_inc(v_snd_3439_);
lean_inc(v_fst_3438_);
lean_dec(v_b_3422_);
v___x_3441_ = lean_box(0);
v_isShared_3442_ = v_isSharedCheck_3561_;
goto v_resetjp_3440_;
}
v_resetjp_3440_:
{
lean_object* v___x_3443_; 
lean_inc(v_fst_3434_);
v___x_3443_ = l_Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0(v_fst_3434_, v___y_3423_, v___y_3424_);
if (lean_obj_tag(v___x_3443_) == 0)
{
lean_object* v_a_3444_; 
v_a_3444_ = lean_ctor_get(v___x_3443_, 0);
lean_inc(v_a_3444_);
lean_dec_ref_known(v___x_3443_, 1);
if (lean_obj_tag(v_a_3444_) == 0)
{
lean_object* v_optName_3445_; lean_object* v_ref_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; 
lean_dec(v_snd_3439_);
v_optName_3445_ = lean_ctor_get(v_fst_3416_, 1);
v_ref_3446_ = lean_ctor_get(v___y_3423_, 2);
v___x_3447_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_3434_, v___x_3431_);
v___x_3448_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1___closed__0));
v___x_3449_ = lean_string_append(v___x_3448_, v___x_3447_);
lean_dec_ref(v___x_3447_);
v___x_3450_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__2));
v___x_3451_ = lean_string_append(v___x_3449_, v___x_3450_);
lean_inc(v_optName_3445_);
v___x_3452_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_optName_3445_, v___x_3431_);
v___x_3453_ = lean_string_append(v___x_3451_, v___x_3452_);
lean_dec_ref(v___x_3452_);
v___x_3454_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__3));
v___x_3455_ = lean_string_append(v___x_3453_, v___x_3454_);
v___x_3456_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v___x_3455_);
if (lean_obj_tag(v___x_3456_) == 0)
{
lean_object* v___x_3457_; lean_object* v___x_3459_; 
lean_dec_ref_known(v___x_3456_, 1);
lean_del_object(v___x_3436_);
v___x_3457_ = lean_box(v___x_3431_);
if (v_isShared_3442_ == 0)
{
lean_ctor_set(v___x_3441_, 1, v___x_3457_);
v___x_3459_ = v___x_3441_;
goto v_reusejp_3458_;
}
else
{
lean_object* v_reuseFailAlloc_3460_; 
v_reuseFailAlloc_3460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3460_, 0, v_fst_3438_);
lean_ctor_set(v_reuseFailAlloc_3460_, 1, v___x_3457_);
v___x_3459_ = v_reuseFailAlloc_3460_;
goto v_reusejp_3458_;
}
v_reusejp_3458_:
{
v_a_3427_ = v___x_3459_;
goto v___jp_3426_;
}
}
else
{
lean_object* v_a_3461_; lean_object* v___x_3463_; uint8_t v_isShared_3464_; uint8_t v_isSharedCheck_3474_; 
lean_del_object(v___x_3441_);
lean_dec(v_fst_3438_);
lean_dec(v___x_3418_);
lean_dec(v_sp_3417_);
lean_dec_ref(v_fst_3416_);
v_a_3461_ = lean_ctor_get(v___x_3456_, 0);
v_isSharedCheck_3474_ = !lean_is_exclusive(v___x_3456_);
if (v_isSharedCheck_3474_ == 0)
{
v___x_3463_ = v___x_3456_;
v_isShared_3464_ = v_isSharedCheck_3474_;
goto v_resetjp_3462_;
}
else
{
lean_inc(v_a_3461_);
lean_dec(v___x_3456_);
v___x_3463_ = lean_box(0);
v_isShared_3464_ = v_isSharedCheck_3474_;
goto v_resetjp_3462_;
}
v_resetjp_3462_:
{
lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3469_; 
v___x_3465_ = lean_io_error_to_string(v_a_3461_);
v___x_3466_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3466_, 0, v___x_3465_);
v___x_3467_ = l_Lean_MessageData_ofFormat(v___x_3466_);
lean_inc(v_ref_3446_);
if (v_isShared_3437_ == 0)
{
lean_ctor_set(v___x_3436_, 1, v___x_3467_);
lean_ctor_set(v___x_3436_, 0, v_ref_3446_);
v___x_3469_ = v___x_3436_;
goto v_reusejp_3468_;
}
else
{
lean_object* v_reuseFailAlloc_3473_; 
v_reuseFailAlloc_3473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3473_, 0, v_ref_3446_);
lean_ctor_set(v_reuseFailAlloc_3473_, 1, v___x_3467_);
v___x_3469_ = v_reuseFailAlloc_3473_;
goto v_reusejp_3468_;
}
v_reusejp_3468_:
{
lean_object* v___x_3471_; 
if (v_isShared_3464_ == 0)
{
lean_ctor_set(v___x_3463_, 0, v___x_3469_);
v___x_3471_ = v___x_3463_;
goto v_reusejp_3470_;
}
else
{
lean_object* v_reuseFailAlloc_3472_; 
v_reuseFailAlloc_3472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3472_, 0, v___x_3469_);
v___x_3471_ = v_reuseFailAlloc_3472_;
goto v_reusejp_3470_;
}
v_reusejp_3470_:
{
return v___x_3471_;
}
}
}
}
}
else
{
lean_object* v_val_3475_; lean_object* v___x_3477_; uint8_t v_isShared_3478_; uint8_t v_isSharedCheck_3552_; 
v_val_3475_ = lean_ctor_get(v_a_3444_, 0);
v_isSharedCheck_3552_ = !lean_is_exclusive(v_a_3444_);
if (v_isSharedCheck_3552_ == 0)
{
v___x_3477_ = v_a_3444_;
v_isShared_3478_ = v_isSharedCheck_3552_;
goto v_resetjp_3476_;
}
else
{
lean_inc(v_val_3475_);
lean_dec(v_a_3444_);
v___x_3477_ = lean_box(0);
v_isShared_3478_ = v_isSharedCheck_3552_;
goto v_resetjp_3476_;
}
v_resetjp_3476_:
{
lean_object* v___x_3479_; 
v___x_3479_ = l_Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0(v_fst_3434_, v___y_3423_, v___y_3424_);
if (lean_obj_tag(v___x_3479_) == 0)
{
lean_object* v_a_3480_; lean_object* v___y_3482_; 
v_a_3480_ = lean_ctor_get(v___x_3479_, 0);
lean_inc(v_a_3480_);
lean_dec_ref_known(v___x_3479_, 1);
if (lean_obj_tag(v_a_3480_) == 0)
{
lean_inc(v___x_3418_);
v___y_3482_ = v___x_3418_;
goto v___jp_3481_;
}
else
{
lean_object* v_val_3543_; 
v_val_3543_ = lean_ctor_get(v_a_3480_, 0);
lean_inc(v_val_3543_);
lean_dec_ref_known(v_a_3480_, 1);
v___y_3482_ = v_val_3543_;
goto v___jp_3481_;
}
v___jp_3481_:
{
lean_object* v_ref_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; 
v_ref_3483_ = lean_ctor_get(v___y_3423_, 2);
v___x_3484_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__4));
lean_inc(v___y_3482_);
lean_inc(v_sp_3417_);
v___x_3485_ = l_Lean_SearchPath_findWithExt(v_sp_3417_, v___x_3484_, v___y_3482_);
if (lean_obj_tag(v___x_3485_) == 0)
{
lean_object* v_a_3486_; 
v_a_3486_ = lean_ctor_get(v___x_3485_, 0);
lean_inc(v_a_3486_);
lean_dec_ref_known(v___x_3485_, 1);
if (lean_obj_tag(v_a_3486_) == 0)
{
lean_object* v_optName_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; 
lean_dec(v_val_3475_);
lean_dec(v_snd_3439_);
v_optName_3487_ = lean_ctor_get(v_fst_3416_, 1);
v___x_3488_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__5));
v___x_3489_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___y_3482_, v___x_3431_);
v___x_3490_ = lean_string_append(v___x_3488_, v___x_3489_);
lean_dec_ref(v___x_3489_);
v___x_3491_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__6));
v___x_3492_ = lean_string_append(v___x_3490_, v___x_3491_);
lean_inc(v_optName_3487_);
v___x_3493_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_optName_3487_, v___x_3431_);
v___x_3494_ = lean_string_append(v___x_3492_, v___x_3493_);
lean_dec_ref(v___x_3493_);
v___x_3495_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__3));
v___x_3496_ = lean_string_append(v___x_3494_, v___x_3495_);
v___x_3497_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v___x_3496_);
if (lean_obj_tag(v___x_3497_) == 0)
{
lean_object* v___x_3498_; lean_object* v___x_3500_; 
lean_dec_ref_known(v___x_3497_, 1);
lean_del_object(v___x_3477_);
lean_del_object(v___x_3436_);
v___x_3498_ = lean_box(v___x_3431_);
if (v_isShared_3442_ == 0)
{
lean_ctor_set(v___x_3441_, 1, v___x_3498_);
v___x_3500_ = v___x_3441_;
goto v_reusejp_3499_;
}
else
{
lean_object* v_reuseFailAlloc_3501_; 
v_reuseFailAlloc_3501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3501_, 0, v_fst_3438_);
lean_ctor_set(v_reuseFailAlloc_3501_, 1, v___x_3498_);
v___x_3500_ = v_reuseFailAlloc_3501_;
goto v_reusejp_3499_;
}
v_reusejp_3499_:
{
v_a_3427_ = v___x_3500_;
goto v___jp_3426_;
}
}
else
{
lean_object* v_a_3502_; lean_object* v___x_3504_; uint8_t v_isShared_3505_; uint8_t v_isSharedCheck_3517_; 
lean_del_object(v___x_3441_);
lean_dec(v_fst_3438_);
lean_dec(v___x_3418_);
lean_dec(v_sp_3417_);
lean_dec_ref(v_fst_3416_);
v_a_3502_ = lean_ctor_get(v___x_3497_, 0);
v_isSharedCheck_3517_ = !lean_is_exclusive(v___x_3497_);
if (v_isSharedCheck_3517_ == 0)
{
v___x_3504_ = v___x_3497_;
v_isShared_3505_ = v_isSharedCheck_3517_;
goto v_resetjp_3503_;
}
else
{
lean_inc(v_a_3502_);
lean_dec(v___x_3497_);
v___x_3504_ = lean_box(0);
v_isShared_3505_ = v_isSharedCheck_3517_;
goto v_resetjp_3503_;
}
v_resetjp_3503_:
{
lean_object* v___x_3506_; lean_object* v___x_3508_; 
v___x_3506_ = lean_io_error_to_string(v_a_3502_);
if (v_isShared_3478_ == 0)
{
lean_ctor_set_tag(v___x_3477_, 3);
lean_ctor_set(v___x_3477_, 0, v___x_3506_);
v___x_3508_ = v___x_3477_;
goto v_reusejp_3507_;
}
else
{
lean_object* v_reuseFailAlloc_3516_; 
v_reuseFailAlloc_3516_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3516_, 0, v___x_3506_);
v___x_3508_ = v_reuseFailAlloc_3516_;
goto v_reusejp_3507_;
}
v_reusejp_3507_:
{
lean_object* v___x_3509_; lean_object* v___x_3511_; 
v___x_3509_ = l_Lean_MessageData_ofFormat(v___x_3508_);
lean_inc(v_ref_3483_);
if (v_isShared_3437_ == 0)
{
lean_ctor_set(v___x_3436_, 1, v___x_3509_);
lean_ctor_set(v___x_3436_, 0, v_ref_3483_);
v___x_3511_ = v___x_3436_;
goto v_reusejp_3510_;
}
else
{
lean_object* v_reuseFailAlloc_3515_; 
v_reuseFailAlloc_3515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3515_, 0, v_ref_3483_);
lean_ctor_set(v_reuseFailAlloc_3515_, 1, v___x_3509_);
v___x_3511_ = v_reuseFailAlloc_3515_;
goto v_reusejp_3510_;
}
v_reusejp_3510_:
{
lean_object* v___x_3513_; 
if (v_isShared_3505_ == 0)
{
lean_ctor_set(v___x_3504_, 0, v___x_3511_);
v___x_3513_ = v___x_3504_;
goto v_reusejp_3512_;
}
else
{
lean_object* v_reuseFailAlloc_3514_; 
v_reuseFailAlloc_3514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3514_, 0, v___x_3511_);
v___x_3513_ = v_reuseFailAlloc_3514_;
goto v_reusejp_3512_;
}
v_reusejp_3512_:
{
return v___x_3513_;
}
}
}
}
}
}
else
{
lean_object* v_range_3518_; lean_object* v_val_3519_; lean_object* v_pos_3520_; lean_object* v_optName_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3525_; 
lean_dec(v___y_3482_);
lean_del_object(v___x_3477_);
lean_del_object(v___x_3436_);
v_range_3518_ = lean_ctor_get(v_val_3475_, 0);
lean_inc_ref(v_range_3518_);
lean_dec(v_val_3475_);
v_val_3519_ = lean_ctor_get(v_a_3486_, 0);
lean_inc(v_val_3519_);
lean_dec_ref_known(v_a_3486_, 1);
v_pos_3520_ = lean_ctor_get(v_range_3518_, 0);
lean_inc_ref(v_pos_3520_);
lean_dec_ref(v_range_3518_);
v_optName_3521_ = lean_ctor_get(v_fst_3416_, 1);
lean_inc(v_optName_3521_);
v___x_3522_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3522_, 0, v_val_3519_);
lean_ctor_set(v___x_3522_, 1, v_pos_3520_);
lean_ctor_set(v___x_3522_, 2, v_optName_3521_);
v___x_3523_ = lean_array_push(v_fst_3438_, v___x_3522_);
if (v_isShared_3442_ == 0)
{
lean_ctor_set(v___x_3441_, 0, v___x_3523_);
v___x_3525_ = v___x_3441_;
goto v_reusejp_3524_;
}
else
{
lean_object* v_reuseFailAlloc_3526_; 
v_reuseFailAlloc_3526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3526_, 0, v___x_3523_);
lean_ctor_set(v_reuseFailAlloc_3526_, 1, v_snd_3439_);
v___x_3525_ = v_reuseFailAlloc_3526_;
goto v_reusejp_3524_;
}
v_reusejp_3524_:
{
v_a_3427_ = v___x_3525_;
goto v___jp_3426_;
}
}
}
else
{
lean_object* v_a_3527_; lean_object* v___x_3529_; uint8_t v_isShared_3530_; uint8_t v_isSharedCheck_3542_; 
lean_dec(v___y_3482_);
lean_dec(v_val_3475_);
lean_del_object(v___x_3441_);
lean_dec(v_snd_3439_);
lean_dec(v_fst_3438_);
lean_dec(v___x_3418_);
lean_dec(v_sp_3417_);
lean_dec_ref(v_fst_3416_);
v_a_3527_ = lean_ctor_get(v___x_3485_, 0);
v_isSharedCheck_3542_ = !lean_is_exclusive(v___x_3485_);
if (v_isSharedCheck_3542_ == 0)
{
v___x_3529_ = v___x_3485_;
v_isShared_3530_ = v_isSharedCheck_3542_;
goto v_resetjp_3528_;
}
else
{
lean_inc(v_a_3527_);
lean_dec(v___x_3485_);
v___x_3529_ = lean_box(0);
v_isShared_3530_ = v_isSharedCheck_3542_;
goto v_resetjp_3528_;
}
v_resetjp_3528_:
{
lean_object* v___x_3531_; lean_object* v___x_3533_; 
v___x_3531_ = lean_io_error_to_string(v_a_3527_);
if (v_isShared_3478_ == 0)
{
lean_ctor_set_tag(v___x_3477_, 3);
lean_ctor_set(v___x_3477_, 0, v___x_3531_);
v___x_3533_ = v___x_3477_;
goto v_reusejp_3532_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v___x_3531_);
v___x_3533_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3532_;
}
v_reusejp_3532_:
{
lean_object* v___x_3534_; lean_object* v___x_3536_; 
v___x_3534_ = l_Lean_MessageData_ofFormat(v___x_3533_);
lean_inc(v_ref_3483_);
if (v_isShared_3437_ == 0)
{
lean_ctor_set(v___x_3436_, 1, v___x_3534_);
lean_ctor_set(v___x_3436_, 0, v_ref_3483_);
v___x_3536_ = v___x_3436_;
goto v_reusejp_3535_;
}
else
{
lean_object* v_reuseFailAlloc_3540_; 
v_reuseFailAlloc_3540_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3540_, 0, v_ref_3483_);
lean_ctor_set(v_reuseFailAlloc_3540_, 1, v___x_3534_);
v___x_3536_ = v_reuseFailAlloc_3540_;
goto v_reusejp_3535_;
}
v_reusejp_3535_:
{
lean_object* v___x_3538_; 
if (v_isShared_3530_ == 0)
{
lean_ctor_set(v___x_3529_, 0, v___x_3536_);
v___x_3538_ = v___x_3529_;
goto v_reusejp_3537_;
}
else
{
lean_object* v_reuseFailAlloc_3539_; 
v_reuseFailAlloc_3539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3539_, 0, v___x_3536_);
v___x_3538_ = v_reuseFailAlloc_3539_;
goto v_reusejp_3537_;
}
v_reusejp_3537_:
{
return v___x_3538_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3544_; lean_object* v___x_3546_; uint8_t v_isShared_3547_; uint8_t v_isSharedCheck_3551_; 
lean_del_object(v___x_3477_);
lean_dec(v_val_3475_);
lean_del_object(v___x_3441_);
lean_dec(v_snd_3439_);
lean_dec(v_fst_3438_);
lean_del_object(v___x_3436_);
lean_dec(v___x_3418_);
lean_dec(v_sp_3417_);
lean_dec_ref(v_fst_3416_);
v_a_3544_ = lean_ctor_get(v___x_3479_, 0);
v_isSharedCheck_3551_ = !lean_is_exclusive(v___x_3479_);
if (v_isSharedCheck_3551_ == 0)
{
v___x_3546_ = v___x_3479_;
v_isShared_3547_ = v_isSharedCheck_3551_;
goto v_resetjp_3545_;
}
else
{
lean_inc(v_a_3544_);
lean_dec(v___x_3479_);
v___x_3546_ = lean_box(0);
v_isShared_3547_ = v_isSharedCheck_3551_;
goto v_resetjp_3545_;
}
v_resetjp_3545_:
{
lean_object* v___x_3549_; 
if (v_isShared_3547_ == 0)
{
v___x_3549_ = v___x_3546_;
goto v_reusejp_3548_;
}
else
{
lean_object* v_reuseFailAlloc_3550_; 
v_reuseFailAlloc_3550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3550_, 0, v_a_3544_);
v___x_3549_ = v_reuseFailAlloc_3550_;
goto v_reusejp_3548_;
}
v_reusejp_3548_:
{
return v___x_3549_;
}
}
}
}
}
}
else
{
lean_object* v_a_3553_; lean_object* v___x_3555_; uint8_t v_isShared_3556_; uint8_t v_isSharedCheck_3560_; 
lean_del_object(v___x_3441_);
lean_dec(v_snd_3439_);
lean_dec(v_fst_3438_);
lean_del_object(v___x_3436_);
lean_dec(v_fst_3434_);
lean_dec(v___x_3418_);
lean_dec(v_sp_3417_);
lean_dec_ref(v_fst_3416_);
v_a_3553_ = lean_ctor_get(v___x_3443_, 0);
v_isSharedCheck_3560_ = !lean_is_exclusive(v___x_3443_);
if (v_isSharedCheck_3560_ == 0)
{
v___x_3555_ = v___x_3443_;
v_isShared_3556_ = v_isSharedCheck_3560_;
goto v_resetjp_3554_;
}
else
{
lean_inc(v_a_3553_);
lean_dec(v___x_3443_);
v___x_3555_ = lean_box(0);
v_isShared_3556_ = v_isSharedCheck_3560_;
goto v_resetjp_3554_;
}
v_resetjp_3554_:
{
lean_object* v___x_3558_; 
if (v_isShared_3556_ == 0)
{
v___x_3558_ = v___x_3555_;
goto v_reusejp_3557_;
}
else
{
lean_object* v_reuseFailAlloc_3559_; 
v_reuseFailAlloc_3559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3559_, 0, v_a_3553_);
v___x_3558_ = v_reuseFailAlloc_3559_;
goto v_reusejp_3557_;
}
v_reusejp_3557_:
{
return v___x_3558_;
}
}
}
}
}
}
v___jp_3426_:
{
size_t v___x_3428_; size_t v___x_3429_; 
v___x_3428_ = ((size_t)1ULL);
v___x_3429_ = lean_usize_add(v_i_3421_, v___x_3428_);
v_i_3421_ = v___x_3429_;
v_b_3422_ = v_a_3427_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1___boxed(lean_object* v_fst_3564_, lean_object* v_sp_3565_, lean_object* v___x_3566_, lean_object* v_as_3567_, lean_object* v_sz_3568_, lean_object* v_i_3569_, lean_object* v_b_3570_, lean_object* v___y_3571_, lean_object* v___y_3572_, lean_object* v___y_3573_){
_start:
{
size_t v_sz_boxed_3574_; size_t v_i_boxed_3575_; lean_object* v_res_3576_; 
v_sz_boxed_3574_ = lean_unbox_usize(v_sz_3568_);
lean_dec(v_sz_3568_);
v_i_boxed_3575_ = lean_unbox_usize(v_i_3569_);
lean_dec(v_i_3569_);
v_res_3576_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1(v_fst_3564_, v_sp_3565_, v___x_3566_, v_as_3567_, v_sz_boxed_3574_, v_i_boxed_3575_, v_b_3570_, v___y_3571_, v___y_3572_);
lean_dec(v___y_3572_);
lean_dec_ref(v___y_3571_);
lean_dec_ref(v_as_3567_);
return v_res_3576_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__2(lean_object* v_x_3577_, lean_object* v_x_3578_){
_start:
{
if (lean_obj_tag(v_x_3578_) == 0)
{
return v_x_3577_;
}
else
{
lean_object* v_key_3579_; lean_object* v_value_3580_; lean_object* v_tail_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; 
v_key_3579_ = lean_ctor_get(v_x_3578_, 0);
v_value_3580_ = lean_ctor_get(v_x_3578_, 1);
v_tail_3581_ = lean_ctor_get(v_x_3578_, 2);
lean_inc(v_value_3580_);
lean_inc(v_key_3579_);
v___x_3582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3582_, 0, v_key_3579_);
lean_ctor_set(v___x_3582_, 1, v_value_3580_);
v___x_3583_ = lean_array_push(v_x_3577_, v___x_3582_);
v_x_3577_ = v___x_3583_;
v_x_3578_ = v_tail_3581_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__2___boxed(lean_object* v_x_3585_, lean_object* v_x_3586_){
_start:
{
lean_object* v_res_3587_; 
v_res_3587_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__2(v_x_3585_, v_x_3586_);
lean_dec(v_x_3586_);
return v_res_3587_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__3(lean_object* v_as_3588_, size_t v_i_3589_, size_t v_stop_3590_, lean_object* v_b_3591_){
_start:
{
uint8_t v___x_3592_; 
v___x_3592_ = lean_usize_dec_eq(v_i_3589_, v_stop_3590_);
if (v___x_3592_ == 0)
{
lean_object* v___x_3593_; lean_object* v___x_3594_; size_t v___x_3595_; size_t v___x_3596_; 
v___x_3593_ = lean_array_uget_borrowed(v_as_3588_, v_i_3589_);
v___x_3594_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__2(v_b_3591_, v___x_3593_);
v___x_3595_ = ((size_t)1ULL);
v___x_3596_ = lean_usize_add(v_i_3589_, v___x_3595_);
v_i_3589_ = v___x_3596_;
v_b_3591_ = v___x_3594_;
goto _start;
}
else
{
return v_b_3591_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__3___boxed(lean_object* v_as_3598_, lean_object* v_i_3599_, lean_object* v_stop_3600_, lean_object* v_b_3601_){
_start:
{
size_t v_i_boxed_3602_; size_t v_stop_boxed_3603_; lean_object* v_res_3604_; 
v_i_boxed_3602_ = lean_unbox_usize(v_i_3599_);
lean_dec(v_i_3599_);
v_stop_boxed_3603_ = lean_unbox_usize(v_stop_3600_);
lean_dec(v_stop_3600_);
v_res_3604_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__3(v_as_3598_, v_i_boxed_3602_, v_stop_boxed_3603_, v_b_3601_);
lean_dec_ref(v_as_3598_);
return v_res_3604_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__4(lean_object* v_sp_3605_, lean_object* v___x_3606_, lean_object* v_as_3607_, size_t v_sz_3608_, size_t v_i_3609_, lean_object* v_b_3610_, lean_object* v___y_3611_, lean_object* v___y_3612_){
_start:
{
uint8_t v___x_3614_; 
v___x_3614_ = lean_usize_dec_lt(v_i_3609_, v_sz_3608_);
if (v___x_3614_ == 0)
{
lean_object* v___x_3615_; 
lean_dec(v___x_3606_);
lean_dec(v_sp_3605_);
v___x_3615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3615_, 0, v_b_3610_);
return v___x_3615_;
}
else
{
lean_object* v_a_3616_; lean_object* v_fst_3617_; lean_object* v_snd_3618_; lean_object* v_fst_3619_; lean_object* v_snd_3620_; lean_object* v___x_3622_; uint8_t v_isShared_3623_; uint8_t v_isSharedCheck_3654_; 
v_a_3616_ = lean_array_uget_borrowed(v_as_3607_, v_i_3609_);
v_fst_3617_ = lean_ctor_get(v_a_3616_, 0);
v_snd_3618_ = lean_ctor_get(v_a_3616_, 1);
v_fst_3619_ = lean_ctor_get(v_b_3610_, 0);
v_snd_3620_ = lean_ctor_get(v_b_3610_, 1);
v_isSharedCheck_3654_ = !lean_is_exclusive(v_b_3610_);
if (v_isSharedCheck_3654_ == 0)
{
v___x_3622_ = v_b_3610_;
v_isShared_3623_ = v_isSharedCheck_3654_;
goto v_resetjp_3621_;
}
else
{
lean_inc(v_snd_3620_);
lean_inc(v_fst_3619_);
lean_dec(v_b_3610_);
v___x_3622_ = lean_box(0);
v_isShared_3623_ = v_isSharedCheck_3654_;
goto v_resetjp_3621_;
}
v_resetjp_3621_:
{
lean_object* v___y_3625_; lean_object* v_size_3645_; lean_object* v_buckets_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; uint8_t v___x_3650_; 
v_size_3645_ = lean_ctor_get(v_snd_3618_, 0);
v_buckets_3646_ = lean_ctor_get(v_snd_3618_, 1);
v___x_3647_ = lean_mk_empty_array_with_capacity(v_size_3645_);
v___x_3648_ = lean_unsigned_to_nat(0u);
v___x_3649_ = lean_array_get_size(v_buckets_3646_);
v___x_3650_ = lean_nat_dec_lt(v___x_3648_, v___x_3649_);
if (v___x_3650_ == 0)
{
v___y_3625_ = v___x_3647_;
goto v___jp_3624_;
}
else
{
size_t v___x_3651_; size_t v___x_3652_; lean_object* v___x_3653_; 
v___x_3651_ = ((size_t)0ULL);
v___x_3652_ = lean_usize_of_nat(v___x_3649_);
v___x_3653_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__3(v_buckets_3646_, v___x_3651_, v___x_3652_, v___x_3647_);
v___y_3625_ = v___x_3653_;
goto v___jp_3624_;
}
v___jp_3624_:
{
lean_object* v___x_3627_; 
if (v_isShared_3623_ == 0)
{
v___x_3627_ = v___x_3622_;
goto v_reusejp_3626_;
}
else
{
lean_object* v_reuseFailAlloc_3644_; 
v_reuseFailAlloc_3644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3644_, 0, v_fst_3619_);
lean_ctor_set(v_reuseFailAlloc_3644_, 1, v_snd_3620_);
v___x_3627_ = v_reuseFailAlloc_3644_;
goto v_reusejp_3626_;
}
v_reusejp_3626_:
{
size_t v_sz_3628_; size_t v___x_3629_; lean_object* v___x_3630_; 
v_sz_3628_ = lean_array_size(v___y_3625_);
v___x_3629_ = ((size_t)0ULL);
lean_inc(v___x_3606_);
lean_inc(v_sp_3605_);
lean_inc(v_fst_3617_);
v___x_3630_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1(v_fst_3617_, v_sp_3605_, v___x_3606_, v___y_3625_, v_sz_3628_, v___x_3629_, v___x_3627_, v___y_3611_, v___y_3612_);
lean_dec_ref(v___y_3625_);
if (lean_obj_tag(v___x_3630_) == 0)
{
lean_object* v_a_3631_; lean_object* v_fst_3632_; lean_object* v_snd_3633_; lean_object* v___x_3635_; uint8_t v_isShared_3636_; uint8_t v_isSharedCheck_3643_; 
v_a_3631_ = lean_ctor_get(v___x_3630_, 0);
lean_inc(v_a_3631_);
lean_dec_ref_known(v___x_3630_, 1);
v_fst_3632_ = lean_ctor_get(v_a_3631_, 0);
v_snd_3633_ = lean_ctor_get(v_a_3631_, 1);
v_isSharedCheck_3643_ = !lean_is_exclusive(v_a_3631_);
if (v_isSharedCheck_3643_ == 0)
{
v___x_3635_ = v_a_3631_;
v_isShared_3636_ = v_isSharedCheck_3643_;
goto v_resetjp_3634_;
}
else
{
lean_inc(v_snd_3633_);
lean_inc(v_fst_3632_);
lean_dec(v_a_3631_);
v___x_3635_ = lean_box(0);
v_isShared_3636_ = v_isSharedCheck_3643_;
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
lean_object* v_reuseFailAlloc_3642_; 
v_reuseFailAlloc_3642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3642_, 0, v_fst_3632_);
lean_ctor_set(v_reuseFailAlloc_3642_, 1, v_snd_3633_);
v___x_3638_ = v_reuseFailAlloc_3642_;
goto v_reusejp_3637_;
}
v_reusejp_3637_:
{
size_t v___x_3639_; size_t v___x_3640_; 
v___x_3639_ = ((size_t)1ULL);
v___x_3640_ = lean_usize_add(v_i_3609_, v___x_3639_);
v_i_3609_ = v___x_3640_;
v_b_3610_ = v___x_3638_;
goto _start;
}
}
}
else
{
lean_dec(v___x_3606_);
lean_dec(v_sp_3605_);
return v___x_3630_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__4___boxed(lean_object* v_sp_3655_, lean_object* v___x_3656_, lean_object* v_as_3657_, lean_object* v_sz_3658_, lean_object* v_i_3659_, lean_object* v_b_3660_, lean_object* v___y_3661_, lean_object* v___y_3662_, lean_object* v___y_3663_){
_start:
{
size_t v_sz_boxed_3664_; size_t v_i_boxed_3665_; lean_object* v_res_3666_; 
v_sz_boxed_3664_ = lean_unbox_usize(v_sz_3658_);
lean_dec(v_sz_3658_);
v_i_boxed_3665_ = lean_unbox_usize(v_i_3659_);
lean_dec(v_i_3659_);
v_res_3666_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__4(v_sp_3655_, v___x_3656_, v_as_3657_, v_sz_boxed_3664_, v_i_boxed_3665_, v_b_3660_, v___y_3661_, v___y_3662_);
lean_dec(v___y_3662_);
lean_dec_ref(v___y_3661_);
lean_dec_ref(v_as_3657_);
return v_res_3666_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__10(uint8_t v___y_3667_, lean_object* v_as_3668_, size_t v_i_3669_, size_t v_stop_3670_){
_start:
{
uint8_t v___x_3671_; 
v___x_3671_ = lean_usize_dec_eq(v_i_3669_, v_stop_3670_);
if (v___x_3671_ == 0)
{
lean_object* v___x_3672_; lean_object* v_snd_3673_; lean_object* v_size_3674_; uint8_t v___x_3675_; lean_object* v___x_3676_; uint8_t v___x_3677_; 
v___x_3672_ = lean_array_uget_borrowed(v_as_3668_, v_i_3669_);
v_snd_3673_ = lean_ctor_get(v___x_3672_, 1);
v_size_3674_ = lean_ctor_get(v_snd_3673_, 0);
v___x_3675_ = 1;
v___x_3676_ = lean_unsigned_to_nat(0u);
v___x_3677_ = lean_nat_dec_eq(v_size_3674_, v___x_3676_);
if (v___x_3677_ == 0)
{
return v___x_3675_;
}
else
{
if (v___y_3667_ == 0)
{
size_t v___x_3678_; size_t v___x_3679_; 
v___x_3678_ = ((size_t)1ULL);
v___x_3679_ = lean_usize_add(v_i_3669_, v___x_3678_);
v_i_3669_ = v___x_3679_;
goto _start;
}
else
{
return v___x_3675_;
}
}
}
else
{
uint8_t v___x_3681_; 
v___x_3681_ = 0;
return v___x_3681_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__10___boxed(lean_object* v___y_3682_, lean_object* v_as_3683_, lean_object* v_i_3684_, lean_object* v_stop_3685_){
_start:
{
uint8_t v___y_16640__boxed_3686_; size_t v_i_boxed_3687_; size_t v_stop_boxed_3688_; uint8_t v_res_3689_; lean_object* v_r_3690_; 
v___y_16640__boxed_3686_ = lean_unbox(v___y_3682_);
v_i_boxed_3687_ = lean_unbox_usize(v_i_3684_);
lean_dec(v_i_3684_);
v_stop_boxed_3688_ = lean_unbox_usize(v_stop_3685_);
lean_dec(v_stop_3685_);
v_res_3689_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__10(v___y_16640__boxed_3686_, v_as_3683_, v_i_boxed_3687_, v_stop_boxed_3688_);
lean_dec_ref(v_as_3683_);
v_r_3690_ = lean_box(v_res_3689_);
return v_r_3690_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__6___redArg(lean_object* v_k_3691_, lean_object* v_v_3692_, lean_object* v_t_3693_){
_start:
{
lean_object* v___y_3695_; lean_object* v___y_3696_; lean_object* v___y_3697_; lean_object* v___y_3698_; lean_object* v___y_3699_; lean_object* v___y_3700_; lean_object* v___y_3701_; lean_object* v___y_3702_; lean_object* v___y_3703_; lean_object* v___y_3704_; 
if (lean_obj_tag(v_t_3693_) == 0)
{
lean_object* v_size_3708_; lean_object* v_k_3709_; lean_object* v_v_3710_; lean_object* v_l_3711_; lean_object* v_r_3712_; lean_object* v___x_3714_; uint8_t v_isShared_3715_; uint8_t v_isSharedCheck_3972_; 
v_size_3708_ = lean_ctor_get(v_t_3693_, 0);
v_k_3709_ = lean_ctor_get(v_t_3693_, 1);
v_v_3710_ = lean_ctor_get(v_t_3693_, 2);
v_l_3711_ = lean_ctor_get(v_t_3693_, 3);
v_r_3712_ = lean_ctor_get(v_t_3693_, 4);
v_isSharedCheck_3972_ = !lean_is_exclusive(v_t_3693_);
if (v_isSharedCheck_3972_ == 0)
{
v___x_3714_ = v_t_3693_;
v_isShared_3715_ = v_isSharedCheck_3972_;
goto v_resetjp_3713_;
}
else
{
lean_inc(v_r_3712_);
lean_inc(v_l_3711_);
lean_inc(v_v_3710_);
lean_inc(v_k_3709_);
lean_inc(v_size_3708_);
lean_dec(v_t_3693_);
v___x_3714_ = lean_box(0);
v_isShared_3715_ = v_isSharedCheck_3972_;
goto v_resetjp_3713_;
}
v_resetjp_3713_:
{
lean_object* v___y_3717_; lean_object* v___y_3718_; lean_object* v___y_3719_; lean_object* v___y_3720_; lean_object* v___y_3721_; lean_object* v___y_3722_; lean_object* v___y_3723_; lean_object* v___y_3730_; lean_object* v___y_3731_; lean_object* v___y_3732_; lean_object* v___y_3733_; lean_object* v___y_3734_; lean_object* v___y_3735_; lean_object* v___y_3736_; lean_object* v___y_3737_; lean_object* v___y_3738_; lean_object* v___y_3739_; lean_object* v___y_3740_; lean_object* v___y_3741_; lean_object* v___y_3748_; lean_object* v___y_3749_; lean_object* v___y_3750_; lean_object* v___y_3751_; lean_object* v___y_3752_; lean_object* v___y_3753_; lean_object* v___y_3754_; lean_object* v___y_3755_; lean_object* v___y_3756_; lean_object* v___y_3757_; lean_object* v___y_3758_; lean_object* v___y_3759_; uint8_t v___y_3766_; lean_object* v_fst_3966_; lean_object* v_snd_3967_; lean_object* v_fst_3968_; lean_object* v_snd_3969_; uint8_t v___x_3970_; 
v_fst_3966_ = lean_ctor_get(v_k_3691_, 0);
v_snd_3967_ = lean_ctor_get(v_k_3691_, 1);
v_fst_3968_ = lean_ctor_get(v_k_3709_, 0);
v_snd_3969_ = lean_ctor_get(v_k_3709_, 1);
v___x_3970_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_fst_3966_, v_fst_3968_);
if (v___x_3970_ == 1)
{
uint8_t v___x_3971_; 
v___x_3971_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_snd_3967_, v_snd_3969_);
v___y_3766_ = v___x_3971_;
goto v___jp_3765_;
}
else
{
v___y_3766_ = v___x_3970_;
goto v___jp_3765_;
}
v___jp_3716_:
{
lean_object* v___x_3724_; lean_object* v___x_3726_; 
v___x_3724_ = lean_nat_add(v___y_3719_, v___y_3723_);
lean_dec(v___y_3723_);
lean_dec(v___y_3719_);
if (v_isShared_3715_ == 0)
{
lean_ctor_set(v___x_3714_, 3, v___y_3721_);
lean_ctor_set(v___x_3714_, 0, v___x_3724_);
v___x_3726_ = v___x_3714_;
goto v_reusejp_3725_;
}
else
{
lean_object* v_reuseFailAlloc_3728_; 
v_reuseFailAlloc_3728_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3728_, 0, v___x_3724_);
lean_ctor_set(v_reuseFailAlloc_3728_, 1, v_k_3709_);
lean_ctor_set(v_reuseFailAlloc_3728_, 2, v_v_3710_);
lean_ctor_set(v_reuseFailAlloc_3728_, 3, v___y_3721_);
lean_ctor_set(v_reuseFailAlloc_3728_, 4, v_r_3712_);
v___x_3726_ = v_reuseFailAlloc_3728_;
goto v_reusejp_3725_;
}
v_reusejp_3725_:
{
lean_object* v___x_3727_; 
v___x_3727_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3727_, 0, v___y_3720_);
lean_ctor_set(v___x_3727_, 1, v___y_3718_);
lean_ctor_set(v___x_3727_, 2, v___y_3717_);
lean_ctor_set(v___x_3727_, 3, v___y_3722_);
lean_ctor_set(v___x_3727_, 4, v___x_3726_);
return v___x_3727_;
}
}
v___jp_3729_:
{
lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; 
v___x_3742_ = lean_nat_add(v___y_3733_, v___y_3741_);
lean_dec(v___y_3741_);
lean_dec(v___y_3733_);
v___x_3743_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3743_, 0, v___x_3742_);
lean_ctor_set(v___x_3743_, 1, v___y_3740_);
lean_ctor_set(v___x_3743_, 2, v___y_3737_);
lean_ctor_set(v___x_3743_, 3, v___y_3736_);
lean_ctor_set(v___x_3743_, 4, v___y_3732_);
v___x_3744_ = lean_nat_add(v___y_3738_, v___y_3739_);
lean_dec(v___y_3739_);
if (lean_obj_tag(v___y_3734_) == 0)
{
lean_object* v_size_3745_; 
v_size_3745_ = lean_ctor_get(v___y_3734_, 0);
lean_inc(v_size_3745_);
v___y_3717_ = v___y_3730_;
v___y_3718_ = v___y_3731_;
v___y_3719_ = v___x_3744_;
v___y_3720_ = v___y_3735_;
v___y_3721_ = v___y_3734_;
v___y_3722_ = v___x_3743_;
v___y_3723_ = v_size_3745_;
goto v___jp_3716_;
}
else
{
lean_object* v___x_3746_; 
v___x_3746_ = lean_unsigned_to_nat(0u);
v___y_3717_ = v___y_3730_;
v___y_3718_ = v___y_3731_;
v___y_3719_ = v___x_3744_;
v___y_3720_ = v___y_3735_;
v___y_3721_ = v___y_3734_;
v___y_3722_ = v___x_3743_;
v___y_3723_ = v___x_3746_;
goto v___jp_3716_;
}
}
v___jp_3747_:
{
lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; 
v___x_3760_ = lean_nat_add(v___y_3748_, v___y_3759_);
lean_dec(v___y_3759_);
lean_dec(v___y_3748_);
v___x_3761_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3761_, 0, v___x_3760_);
lean_ctor_set(v___x_3761_, 1, v_k_3709_);
lean_ctor_set(v___x_3761_, 2, v_v_3710_);
lean_ctor_set(v___x_3761_, 3, v_l_3711_);
lean_ctor_set(v___x_3761_, 4, v___y_3752_);
v___x_3762_ = lean_nat_add(v___y_3756_, v___y_3749_);
lean_dec(v___y_3749_);
if (lean_obj_tag(v___y_3754_) == 0)
{
lean_object* v_size_3763_; 
v_size_3763_ = lean_ctor_get(v___y_3754_, 0);
lean_inc(v_size_3763_);
v___y_3695_ = v___y_3750_;
v___y_3696_ = v___y_3751_;
v___y_3697_ = v___y_3755_;
v___y_3698_ = v___y_3754_;
v___y_3699_ = v___y_3753_;
v___y_3700_ = v___x_3761_;
v___y_3701_ = v___x_3762_;
v___y_3702_ = v___y_3757_;
v___y_3703_ = v___y_3758_;
v___y_3704_ = v_size_3763_;
goto v___jp_3694_;
}
else
{
lean_object* v___x_3764_; 
v___x_3764_ = lean_unsigned_to_nat(0u);
v___y_3695_ = v___y_3750_;
v___y_3696_ = v___y_3751_;
v___y_3697_ = v___y_3755_;
v___y_3698_ = v___y_3754_;
v___y_3699_ = v___y_3753_;
v___y_3700_ = v___x_3761_;
v___y_3701_ = v___x_3762_;
v___y_3702_ = v___y_3757_;
v___y_3703_ = v___y_3758_;
v___y_3704_ = v___x_3764_;
goto v___jp_3694_;
}
}
v___jp_3765_:
{
switch(v___y_3766_)
{
case 0:
{
lean_object* v_impl_3767_; lean_object* v___x_3768_; 
lean_dec(v_size_3708_);
v_impl_3767_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__6___redArg(v_k_3691_, v_v_3692_, v_l_3711_);
v___x_3768_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_3712_) == 0)
{
lean_object* v_size_3769_; lean_object* v_size_3770_; lean_object* v_k_3771_; lean_object* v_v_3772_; lean_object* v_l_3773_; lean_object* v_r_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; uint8_t v___x_3777_; 
v_size_3769_ = lean_ctor_get(v_r_3712_, 0);
v_size_3770_ = lean_ctor_get(v_impl_3767_, 0);
lean_inc(v_size_3770_);
v_k_3771_ = lean_ctor_get(v_impl_3767_, 1);
lean_inc(v_k_3771_);
v_v_3772_ = lean_ctor_get(v_impl_3767_, 2);
lean_inc(v_v_3772_);
v_l_3773_ = lean_ctor_get(v_impl_3767_, 3);
lean_inc(v_l_3773_);
v_r_3774_ = lean_ctor_get(v_impl_3767_, 4);
lean_inc(v_r_3774_);
v___x_3775_ = lean_unsigned_to_nat(3u);
v___x_3776_ = lean_nat_mul(v___x_3775_, v_size_3769_);
v___x_3777_ = lean_nat_dec_lt(v___x_3776_, v_size_3770_);
lean_dec(v___x_3776_);
if (v___x_3777_ == 0)
{
lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; 
lean_dec(v_r_3774_);
lean_dec(v_l_3773_);
lean_dec(v_v_3772_);
lean_dec(v_k_3771_);
lean_del_object(v___x_3714_);
v___x_3778_ = lean_nat_add(v___x_3768_, v_size_3770_);
lean_dec(v_size_3770_);
v___x_3779_ = lean_nat_add(v___x_3778_, v_size_3769_);
lean_dec(v___x_3778_);
v___x_3780_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3780_, 0, v___x_3779_);
lean_ctor_set(v___x_3780_, 1, v_k_3709_);
lean_ctor_set(v___x_3780_, 2, v_v_3710_);
lean_ctor_set(v___x_3780_, 3, v_impl_3767_);
lean_ctor_set(v___x_3780_, 4, v_r_3712_);
return v___x_3780_;
}
else
{
lean_object* v___x_3782_; uint8_t v_isShared_3783_; uint8_t v_isSharedCheck_3817_; 
v_isSharedCheck_3817_ = !lean_is_exclusive(v_impl_3767_);
if (v_isSharedCheck_3817_ == 0)
{
lean_object* v_unused_3818_; lean_object* v_unused_3819_; lean_object* v_unused_3820_; lean_object* v_unused_3821_; lean_object* v_unused_3822_; 
v_unused_3818_ = lean_ctor_get(v_impl_3767_, 4);
lean_dec(v_unused_3818_);
v_unused_3819_ = lean_ctor_get(v_impl_3767_, 3);
lean_dec(v_unused_3819_);
v_unused_3820_ = lean_ctor_get(v_impl_3767_, 2);
lean_dec(v_unused_3820_);
v_unused_3821_ = lean_ctor_get(v_impl_3767_, 1);
lean_dec(v_unused_3821_);
v_unused_3822_ = lean_ctor_get(v_impl_3767_, 0);
lean_dec(v_unused_3822_);
v___x_3782_ = v_impl_3767_;
v_isShared_3783_ = v_isSharedCheck_3817_;
goto v_resetjp_3781_;
}
else
{
lean_dec(v_impl_3767_);
v___x_3782_ = lean_box(0);
v_isShared_3783_ = v_isSharedCheck_3817_;
goto v_resetjp_3781_;
}
v_resetjp_3781_:
{
lean_object* v_size_3784_; lean_object* v_size_3785_; lean_object* v_k_3786_; lean_object* v_v_3787_; lean_object* v_l_3788_; lean_object* v_r_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; uint8_t v___x_3792_; 
v_size_3784_ = lean_ctor_get(v_l_3773_, 0);
v_size_3785_ = lean_ctor_get(v_r_3774_, 0);
v_k_3786_ = lean_ctor_get(v_r_3774_, 1);
v_v_3787_ = lean_ctor_get(v_r_3774_, 2);
v_l_3788_ = lean_ctor_get(v_r_3774_, 3);
v_r_3789_ = lean_ctor_get(v_r_3774_, 4);
v___x_3790_ = lean_unsigned_to_nat(2u);
v___x_3791_ = lean_nat_mul(v___x_3790_, v_size_3784_);
v___x_3792_ = lean_nat_dec_lt(v_size_3785_, v___x_3791_);
lean_dec(v___x_3791_);
if (v___x_3792_ == 0)
{
lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; 
lean_inc(v_r_3789_);
lean_inc(v_l_3788_);
lean_inc(v_v_3787_);
lean_inc(v_k_3786_);
lean_del_object(v___x_3782_);
lean_dec(v_r_3774_);
v___x_3793_ = lean_nat_add(v___x_3768_, v_size_3770_);
lean_dec(v_size_3770_);
v___x_3794_ = lean_nat_add(v___x_3793_, v_size_3769_);
lean_dec(v___x_3793_);
v___x_3795_ = lean_nat_add(v___x_3768_, v_size_3784_);
if (lean_obj_tag(v_l_3788_) == 0)
{
lean_object* v_size_3796_; 
v_size_3796_ = lean_ctor_get(v_l_3788_, 0);
lean_inc(v_size_3796_);
lean_inc(v_size_3769_);
v___y_3730_ = v_v_3787_;
v___y_3731_ = v_k_3786_;
v___y_3732_ = v_l_3788_;
v___y_3733_ = v___x_3795_;
v___y_3734_ = v_r_3789_;
v___y_3735_ = v___x_3794_;
v___y_3736_ = v_l_3773_;
v___y_3737_ = v_v_3772_;
v___y_3738_ = v___x_3768_;
v___y_3739_ = v_size_3769_;
v___y_3740_ = v_k_3771_;
v___y_3741_ = v_size_3796_;
goto v___jp_3729_;
}
else
{
lean_object* v___x_3797_; 
v___x_3797_ = lean_unsigned_to_nat(0u);
lean_inc(v_size_3769_);
v___y_3730_ = v_v_3787_;
v___y_3731_ = v_k_3786_;
v___y_3732_ = v_l_3788_;
v___y_3733_ = v___x_3795_;
v___y_3734_ = v_r_3789_;
v___y_3735_ = v___x_3794_;
v___y_3736_ = v_l_3773_;
v___y_3737_ = v_v_3772_;
v___y_3738_ = v___x_3768_;
v___y_3739_ = v_size_3769_;
v___y_3740_ = v_k_3771_;
v___y_3741_ = v___x_3797_;
goto v___jp_3729_;
}
}
else
{
lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3803_; 
lean_del_object(v___x_3714_);
v___x_3798_ = lean_nat_add(v___x_3768_, v_size_3770_);
lean_dec(v_size_3770_);
v___x_3799_ = lean_nat_add(v___x_3798_, v_size_3769_);
lean_dec(v___x_3798_);
v___x_3800_ = lean_nat_add(v___x_3768_, v_size_3769_);
v___x_3801_ = lean_nat_add(v___x_3800_, v_size_3785_);
lean_dec(v___x_3800_);
lean_inc_ref(v_r_3712_);
if (v_isShared_3783_ == 0)
{
lean_ctor_set(v___x_3782_, 4, v_r_3712_);
lean_ctor_set(v___x_3782_, 3, v_r_3774_);
lean_ctor_set(v___x_3782_, 2, v_v_3710_);
lean_ctor_set(v___x_3782_, 1, v_k_3709_);
lean_ctor_set(v___x_3782_, 0, v___x_3801_);
v___x_3803_ = v___x_3782_;
goto v_reusejp_3802_;
}
else
{
lean_object* v_reuseFailAlloc_3816_; 
v_reuseFailAlloc_3816_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3816_, 0, v___x_3801_);
lean_ctor_set(v_reuseFailAlloc_3816_, 1, v_k_3709_);
lean_ctor_set(v_reuseFailAlloc_3816_, 2, v_v_3710_);
lean_ctor_set(v_reuseFailAlloc_3816_, 3, v_r_3774_);
lean_ctor_set(v_reuseFailAlloc_3816_, 4, v_r_3712_);
v___x_3803_ = v_reuseFailAlloc_3816_;
goto v_reusejp_3802_;
}
v_reusejp_3802_:
{
lean_object* v___x_3805_; uint8_t v_isShared_3806_; uint8_t v_isSharedCheck_3810_; 
v_isSharedCheck_3810_ = !lean_is_exclusive(v_r_3712_);
if (v_isSharedCheck_3810_ == 0)
{
lean_object* v_unused_3811_; lean_object* v_unused_3812_; lean_object* v_unused_3813_; lean_object* v_unused_3814_; lean_object* v_unused_3815_; 
v_unused_3811_ = lean_ctor_get(v_r_3712_, 4);
lean_dec(v_unused_3811_);
v_unused_3812_ = lean_ctor_get(v_r_3712_, 3);
lean_dec(v_unused_3812_);
v_unused_3813_ = lean_ctor_get(v_r_3712_, 2);
lean_dec(v_unused_3813_);
v_unused_3814_ = lean_ctor_get(v_r_3712_, 1);
lean_dec(v_unused_3814_);
v_unused_3815_ = lean_ctor_get(v_r_3712_, 0);
lean_dec(v_unused_3815_);
v___x_3805_ = v_r_3712_;
v_isShared_3806_ = v_isSharedCheck_3810_;
goto v_resetjp_3804_;
}
else
{
lean_dec(v_r_3712_);
v___x_3805_ = lean_box(0);
v_isShared_3806_ = v_isSharedCheck_3810_;
goto v_resetjp_3804_;
}
v_resetjp_3804_:
{
lean_object* v___x_3808_; 
if (v_isShared_3806_ == 0)
{
lean_ctor_set(v___x_3805_, 4, v___x_3803_);
lean_ctor_set(v___x_3805_, 3, v_l_3773_);
lean_ctor_set(v___x_3805_, 2, v_v_3772_);
lean_ctor_set(v___x_3805_, 1, v_k_3771_);
lean_ctor_set(v___x_3805_, 0, v___x_3799_);
v___x_3808_ = v___x_3805_;
goto v_reusejp_3807_;
}
else
{
lean_object* v_reuseFailAlloc_3809_; 
v_reuseFailAlloc_3809_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3809_, 0, v___x_3799_);
lean_ctor_set(v_reuseFailAlloc_3809_, 1, v_k_3771_);
lean_ctor_set(v_reuseFailAlloc_3809_, 2, v_v_3772_);
lean_ctor_set(v_reuseFailAlloc_3809_, 3, v_l_3773_);
lean_ctor_set(v_reuseFailAlloc_3809_, 4, v___x_3803_);
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
lean_object* v_l_3823_; 
lean_del_object(v___x_3714_);
v_l_3823_ = lean_ctor_get(v_impl_3767_, 3);
lean_inc(v_l_3823_);
if (lean_obj_tag(v_l_3823_) == 0)
{
lean_object* v_r_3824_; lean_object* v_k_3825_; lean_object* v_v_3826_; lean_object* v___x_3828_; uint8_t v_isShared_3829_; uint8_t v_isSharedCheck_3835_; 
v_r_3824_ = lean_ctor_get(v_impl_3767_, 4);
v_k_3825_ = lean_ctor_get(v_impl_3767_, 1);
v_v_3826_ = lean_ctor_get(v_impl_3767_, 2);
v_isSharedCheck_3835_ = !lean_is_exclusive(v_impl_3767_);
if (v_isSharedCheck_3835_ == 0)
{
lean_object* v_unused_3836_; lean_object* v_unused_3837_; 
v_unused_3836_ = lean_ctor_get(v_impl_3767_, 3);
lean_dec(v_unused_3836_);
v_unused_3837_ = lean_ctor_get(v_impl_3767_, 0);
lean_dec(v_unused_3837_);
v___x_3828_ = v_impl_3767_;
v_isShared_3829_ = v_isSharedCheck_3835_;
goto v_resetjp_3827_;
}
else
{
lean_inc(v_r_3824_);
lean_inc(v_v_3826_);
lean_inc(v_k_3825_);
lean_dec(v_impl_3767_);
v___x_3828_ = lean_box(0);
v_isShared_3829_ = v_isSharedCheck_3835_;
goto v_resetjp_3827_;
}
v_resetjp_3827_:
{
lean_object* v___x_3830_; lean_object* v___x_3832_; 
v___x_3830_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_3824_);
if (v_isShared_3829_ == 0)
{
lean_ctor_set(v___x_3828_, 3, v_r_3824_);
lean_ctor_set(v___x_3828_, 2, v_v_3710_);
lean_ctor_set(v___x_3828_, 1, v_k_3709_);
lean_ctor_set(v___x_3828_, 0, v___x_3768_);
v___x_3832_ = v___x_3828_;
goto v_reusejp_3831_;
}
else
{
lean_object* v_reuseFailAlloc_3834_; 
v_reuseFailAlloc_3834_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3834_, 0, v___x_3768_);
lean_ctor_set(v_reuseFailAlloc_3834_, 1, v_k_3709_);
lean_ctor_set(v_reuseFailAlloc_3834_, 2, v_v_3710_);
lean_ctor_set(v_reuseFailAlloc_3834_, 3, v_r_3824_);
lean_ctor_set(v_reuseFailAlloc_3834_, 4, v_r_3824_);
v___x_3832_ = v_reuseFailAlloc_3834_;
goto v_reusejp_3831_;
}
v_reusejp_3831_:
{
lean_object* v___x_3833_; 
v___x_3833_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3833_, 0, v___x_3830_);
lean_ctor_set(v___x_3833_, 1, v_k_3825_);
lean_ctor_set(v___x_3833_, 2, v_v_3826_);
lean_ctor_set(v___x_3833_, 3, v_l_3823_);
lean_ctor_set(v___x_3833_, 4, v___x_3832_);
return v___x_3833_;
}
}
}
else
{
lean_object* v_r_3838_; 
v_r_3838_ = lean_ctor_get(v_impl_3767_, 4);
lean_inc(v_r_3838_);
if (lean_obj_tag(v_r_3838_) == 0)
{
lean_object* v_k_3839_; lean_object* v_v_3840_; lean_object* v___x_3842_; uint8_t v_isShared_3843_; uint8_t v_isSharedCheck_3861_; 
v_k_3839_ = lean_ctor_get(v_impl_3767_, 1);
v_v_3840_ = lean_ctor_get(v_impl_3767_, 2);
v_isSharedCheck_3861_ = !lean_is_exclusive(v_impl_3767_);
if (v_isSharedCheck_3861_ == 0)
{
lean_object* v_unused_3862_; lean_object* v_unused_3863_; lean_object* v_unused_3864_; 
v_unused_3862_ = lean_ctor_get(v_impl_3767_, 4);
lean_dec(v_unused_3862_);
v_unused_3863_ = lean_ctor_get(v_impl_3767_, 3);
lean_dec(v_unused_3863_);
v_unused_3864_ = lean_ctor_get(v_impl_3767_, 0);
lean_dec(v_unused_3864_);
v___x_3842_ = v_impl_3767_;
v_isShared_3843_ = v_isSharedCheck_3861_;
goto v_resetjp_3841_;
}
else
{
lean_inc(v_v_3840_);
lean_inc(v_k_3839_);
lean_dec(v_impl_3767_);
v___x_3842_ = lean_box(0);
v_isShared_3843_ = v_isSharedCheck_3861_;
goto v_resetjp_3841_;
}
v_resetjp_3841_:
{
lean_object* v_k_3844_; lean_object* v_v_3845_; lean_object* v___x_3847_; uint8_t v_isShared_3848_; uint8_t v_isSharedCheck_3857_; 
v_k_3844_ = lean_ctor_get(v_r_3838_, 1);
v_v_3845_ = lean_ctor_get(v_r_3838_, 2);
v_isSharedCheck_3857_ = !lean_is_exclusive(v_r_3838_);
if (v_isSharedCheck_3857_ == 0)
{
lean_object* v_unused_3858_; lean_object* v_unused_3859_; lean_object* v_unused_3860_; 
v_unused_3858_ = lean_ctor_get(v_r_3838_, 4);
lean_dec(v_unused_3858_);
v_unused_3859_ = lean_ctor_get(v_r_3838_, 3);
lean_dec(v_unused_3859_);
v_unused_3860_ = lean_ctor_get(v_r_3838_, 0);
lean_dec(v_unused_3860_);
v___x_3847_ = v_r_3838_;
v_isShared_3848_ = v_isSharedCheck_3857_;
goto v_resetjp_3846_;
}
else
{
lean_inc(v_v_3845_);
lean_inc(v_k_3844_);
lean_dec(v_r_3838_);
v___x_3847_ = lean_box(0);
v_isShared_3848_ = v_isSharedCheck_3857_;
goto v_resetjp_3846_;
}
v_resetjp_3846_:
{
lean_object* v___x_3849_; lean_object* v___x_3851_; 
v___x_3849_ = lean_unsigned_to_nat(3u);
if (v_isShared_3848_ == 0)
{
lean_ctor_set(v___x_3847_, 4, v_l_3823_);
lean_ctor_set(v___x_3847_, 3, v_l_3823_);
lean_ctor_set(v___x_3847_, 2, v_v_3840_);
lean_ctor_set(v___x_3847_, 1, v_k_3839_);
lean_ctor_set(v___x_3847_, 0, v___x_3768_);
v___x_3851_ = v___x_3847_;
goto v_reusejp_3850_;
}
else
{
lean_object* v_reuseFailAlloc_3856_; 
v_reuseFailAlloc_3856_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3856_, 0, v___x_3768_);
lean_ctor_set(v_reuseFailAlloc_3856_, 1, v_k_3839_);
lean_ctor_set(v_reuseFailAlloc_3856_, 2, v_v_3840_);
lean_ctor_set(v_reuseFailAlloc_3856_, 3, v_l_3823_);
lean_ctor_set(v_reuseFailAlloc_3856_, 4, v_l_3823_);
v___x_3851_ = v_reuseFailAlloc_3856_;
goto v_reusejp_3850_;
}
v_reusejp_3850_:
{
lean_object* v___x_3853_; 
if (v_isShared_3843_ == 0)
{
lean_ctor_set(v___x_3842_, 4, v_l_3823_);
lean_ctor_set(v___x_3842_, 2, v_v_3710_);
lean_ctor_set(v___x_3842_, 1, v_k_3709_);
lean_ctor_set(v___x_3842_, 0, v___x_3768_);
v___x_3853_ = v___x_3842_;
goto v_reusejp_3852_;
}
else
{
lean_object* v_reuseFailAlloc_3855_; 
v_reuseFailAlloc_3855_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3855_, 0, v___x_3768_);
lean_ctor_set(v_reuseFailAlloc_3855_, 1, v_k_3709_);
lean_ctor_set(v_reuseFailAlloc_3855_, 2, v_v_3710_);
lean_ctor_set(v_reuseFailAlloc_3855_, 3, v_l_3823_);
lean_ctor_set(v_reuseFailAlloc_3855_, 4, v_l_3823_);
v___x_3853_ = v_reuseFailAlloc_3855_;
goto v_reusejp_3852_;
}
v_reusejp_3852_:
{
lean_object* v___x_3854_; 
v___x_3854_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3854_, 0, v___x_3849_);
lean_ctor_set(v___x_3854_, 1, v_k_3844_);
lean_ctor_set(v___x_3854_, 2, v_v_3845_);
lean_ctor_set(v___x_3854_, 3, v___x_3851_);
lean_ctor_set(v___x_3854_, 4, v___x_3853_);
return v___x_3854_;
}
}
}
}
}
else
{
lean_object* v___x_3865_; lean_object* v___x_3866_; 
v___x_3865_ = lean_unsigned_to_nat(2u);
v___x_3866_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3866_, 0, v___x_3865_);
lean_ctor_set(v___x_3866_, 1, v_k_3709_);
lean_ctor_set(v___x_3866_, 2, v_v_3710_);
lean_ctor_set(v___x_3866_, 3, v_impl_3767_);
lean_ctor_set(v___x_3866_, 4, v_r_3838_);
return v___x_3866_;
}
}
}
}
case 1:
{
lean_object* v___x_3867_; 
lean_del_object(v___x_3714_);
lean_dec(v_v_3710_);
lean_dec(v_k_3709_);
v___x_3867_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3867_, 0, v_size_3708_);
lean_ctor_set(v___x_3867_, 1, v_k_3691_);
lean_ctor_set(v___x_3867_, 2, v_v_3692_);
lean_ctor_set(v___x_3867_, 3, v_l_3711_);
lean_ctor_set(v___x_3867_, 4, v_r_3712_);
return v___x_3867_;
}
default: 
{
lean_object* v_impl_3868_; lean_object* v___x_3869_; 
lean_del_object(v___x_3714_);
lean_dec(v_size_3708_);
v_impl_3868_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__6___redArg(v_k_3691_, v_v_3692_, v_r_3712_);
v___x_3869_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_3711_) == 0)
{
lean_object* v_size_3870_; lean_object* v_size_3871_; lean_object* v_k_3872_; lean_object* v_v_3873_; lean_object* v_l_3874_; lean_object* v_r_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; uint8_t v___x_3878_; 
v_size_3870_ = lean_ctor_get(v_l_3711_, 0);
v_size_3871_ = lean_ctor_get(v_impl_3868_, 0);
lean_inc(v_size_3871_);
v_k_3872_ = lean_ctor_get(v_impl_3868_, 1);
lean_inc(v_k_3872_);
v_v_3873_ = lean_ctor_get(v_impl_3868_, 2);
lean_inc(v_v_3873_);
v_l_3874_ = lean_ctor_get(v_impl_3868_, 3);
lean_inc(v_l_3874_);
v_r_3875_ = lean_ctor_get(v_impl_3868_, 4);
lean_inc(v_r_3875_);
v___x_3876_ = lean_unsigned_to_nat(3u);
v___x_3877_ = lean_nat_mul(v___x_3876_, v_size_3870_);
v___x_3878_ = lean_nat_dec_lt(v___x_3877_, v_size_3871_);
lean_dec(v___x_3877_);
if (v___x_3878_ == 0)
{
lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; 
lean_dec(v_r_3875_);
lean_dec(v_l_3874_);
lean_dec(v_v_3873_);
lean_dec(v_k_3872_);
v___x_3879_ = lean_nat_add(v___x_3869_, v_size_3870_);
v___x_3880_ = lean_nat_add(v___x_3879_, v_size_3871_);
lean_dec(v_size_3871_);
lean_dec(v___x_3879_);
v___x_3881_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3881_, 0, v___x_3880_);
lean_ctor_set(v___x_3881_, 1, v_k_3709_);
lean_ctor_set(v___x_3881_, 2, v_v_3710_);
lean_ctor_set(v___x_3881_, 3, v_l_3711_);
lean_ctor_set(v___x_3881_, 4, v_impl_3868_);
return v___x_3881_;
}
else
{
lean_object* v___x_3883_; uint8_t v_isShared_3884_; uint8_t v_isSharedCheck_3916_; 
v_isSharedCheck_3916_ = !lean_is_exclusive(v_impl_3868_);
if (v_isSharedCheck_3916_ == 0)
{
lean_object* v_unused_3917_; lean_object* v_unused_3918_; lean_object* v_unused_3919_; lean_object* v_unused_3920_; lean_object* v_unused_3921_; 
v_unused_3917_ = lean_ctor_get(v_impl_3868_, 4);
lean_dec(v_unused_3917_);
v_unused_3918_ = lean_ctor_get(v_impl_3868_, 3);
lean_dec(v_unused_3918_);
v_unused_3919_ = lean_ctor_get(v_impl_3868_, 2);
lean_dec(v_unused_3919_);
v_unused_3920_ = lean_ctor_get(v_impl_3868_, 1);
lean_dec(v_unused_3920_);
v_unused_3921_ = lean_ctor_get(v_impl_3868_, 0);
lean_dec(v_unused_3921_);
v___x_3883_ = v_impl_3868_;
v_isShared_3884_ = v_isSharedCheck_3916_;
goto v_resetjp_3882_;
}
else
{
lean_dec(v_impl_3868_);
v___x_3883_ = lean_box(0);
v_isShared_3884_ = v_isSharedCheck_3916_;
goto v_resetjp_3882_;
}
v_resetjp_3882_:
{
lean_object* v_size_3885_; lean_object* v_k_3886_; lean_object* v_v_3887_; lean_object* v_l_3888_; lean_object* v_r_3889_; lean_object* v_size_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; uint8_t v___x_3893_; 
v_size_3885_ = lean_ctor_get(v_l_3874_, 0);
v_k_3886_ = lean_ctor_get(v_l_3874_, 1);
v_v_3887_ = lean_ctor_get(v_l_3874_, 2);
v_l_3888_ = lean_ctor_get(v_l_3874_, 3);
v_r_3889_ = lean_ctor_get(v_l_3874_, 4);
v_size_3890_ = lean_ctor_get(v_r_3875_, 0);
v___x_3891_ = lean_unsigned_to_nat(2u);
v___x_3892_ = lean_nat_mul(v___x_3891_, v_size_3890_);
v___x_3893_ = lean_nat_dec_lt(v_size_3885_, v___x_3892_);
lean_dec(v___x_3892_);
if (v___x_3893_ == 0)
{
lean_object* v___x_3894_; lean_object* v___x_3895_; 
lean_inc(v_size_3890_);
lean_inc(v_r_3889_);
lean_inc(v_l_3888_);
lean_inc(v_v_3887_);
lean_inc(v_k_3886_);
lean_del_object(v___x_3883_);
lean_dec(v_l_3874_);
v___x_3894_ = lean_nat_add(v___x_3869_, v_size_3870_);
v___x_3895_ = lean_nat_add(v___x_3894_, v_size_3871_);
lean_dec(v_size_3871_);
if (lean_obj_tag(v_l_3888_) == 0)
{
lean_object* v_size_3896_; 
v_size_3896_ = lean_ctor_get(v_l_3888_, 0);
lean_inc(v_size_3896_);
v___y_3748_ = v___x_3894_;
v___y_3749_ = v_size_3890_;
v___y_3750_ = v_v_3873_;
v___y_3751_ = v___x_3895_;
v___y_3752_ = v_l_3888_;
v___y_3753_ = v_k_3872_;
v___y_3754_ = v_r_3889_;
v___y_3755_ = v_k_3886_;
v___y_3756_ = v___x_3869_;
v___y_3757_ = v_r_3875_;
v___y_3758_ = v_v_3887_;
v___y_3759_ = v_size_3896_;
goto v___jp_3747_;
}
else
{
lean_object* v___x_3897_; 
v___x_3897_ = lean_unsigned_to_nat(0u);
v___y_3748_ = v___x_3894_;
v___y_3749_ = v_size_3890_;
v___y_3750_ = v_v_3873_;
v___y_3751_ = v___x_3895_;
v___y_3752_ = v_l_3888_;
v___y_3753_ = v_k_3872_;
v___y_3754_ = v_r_3889_;
v___y_3755_ = v_k_3886_;
v___y_3756_ = v___x_3869_;
v___y_3757_ = v_r_3875_;
v___y_3758_ = v_v_3887_;
v___y_3759_ = v___x_3897_;
goto v___jp_3747_;
}
}
else
{
lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3902_; 
v___x_3898_ = lean_nat_add(v___x_3869_, v_size_3870_);
v___x_3899_ = lean_nat_add(v___x_3898_, v_size_3871_);
lean_dec(v_size_3871_);
v___x_3900_ = lean_nat_add(v___x_3898_, v_size_3885_);
lean_dec(v___x_3898_);
lean_inc_ref(v_l_3711_);
if (v_isShared_3884_ == 0)
{
lean_ctor_set(v___x_3883_, 4, v_l_3874_);
lean_ctor_set(v___x_3883_, 3, v_l_3711_);
lean_ctor_set(v___x_3883_, 2, v_v_3710_);
lean_ctor_set(v___x_3883_, 1, v_k_3709_);
lean_ctor_set(v___x_3883_, 0, v___x_3900_);
v___x_3902_ = v___x_3883_;
goto v_reusejp_3901_;
}
else
{
lean_object* v_reuseFailAlloc_3915_; 
v_reuseFailAlloc_3915_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3915_, 0, v___x_3900_);
lean_ctor_set(v_reuseFailAlloc_3915_, 1, v_k_3709_);
lean_ctor_set(v_reuseFailAlloc_3915_, 2, v_v_3710_);
lean_ctor_set(v_reuseFailAlloc_3915_, 3, v_l_3711_);
lean_ctor_set(v_reuseFailAlloc_3915_, 4, v_l_3874_);
v___x_3902_ = v_reuseFailAlloc_3915_;
goto v_reusejp_3901_;
}
v_reusejp_3901_:
{
lean_object* v___x_3904_; uint8_t v_isShared_3905_; uint8_t v_isSharedCheck_3909_; 
v_isSharedCheck_3909_ = !lean_is_exclusive(v_l_3711_);
if (v_isSharedCheck_3909_ == 0)
{
lean_object* v_unused_3910_; lean_object* v_unused_3911_; lean_object* v_unused_3912_; lean_object* v_unused_3913_; lean_object* v_unused_3914_; 
v_unused_3910_ = lean_ctor_get(v_l_3711_, 4);
lean_dec(v_unused_3910_);
v_unused_3911_ = lean_ctor_get(v_l_3711_, 3);
lean_dec(v_unused_3911_);
v_unused_3912_ = lean_ctor_get(v_l_3711_, 2);
lean_dec(v_unused_3912_);
v_unused_3913_ = lean_ctor_get(v_l_3711_, 1);
lean_dec(v_unused_3913_);
v_unused_3914_ = lean_ctor_get(v_l_3711_, 0);
lean_dec(v_unused_3914_);
v___x_3904_ = v_l_3711_;
v_isShared_3905_ = v_isSharedCheck_3909_;
goto v_resetjp_3903_;
}
else
{
lean_dec(v_l_3711_);
v___x_3904_ = lean_box(0);
v_isShared_3905_ = v_isSharedCheck_3909_;
goto v_resetjp_3903_;
}
v_resetjp_3903_:
{
lean_object* v___x_3907_; 
if (v_isShared_3905_ == 0)
{
lean_ctor_set(v___x_3904_, 4, v_r_3875_);
lean_ctor_set(v___x_3904_, 3, v___x_3902_);
lean_ctor_set(v___x_3904_, 2, v_v_3873_);
lean_ctor_set(v___x_3904_, 1, v_k_3872_);
lean_ctor_set(v___x_3904_, 0, v___x_3899_);
v___x_3907_ = v___x_3904_;
goto v_reusejp_3906_;
}
else
{
lean_object* v_reuseFailAlloc_3908_; 
v_reuseFailAlloc_3908_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3908_, 0, v___x_3899_);
lean_ctor_set(v_reuseFailAlloc_3908_, 1, v_k_3872_);
lean_ctor_set(v_reuseFailAlloc_3908_, 2, v_v_3873_);
lean_ctor_set(v_reuseFailAlloc_3908_, 3, v___x_3902_);
lean_ctor_set(v_reuseFailAlloc_3908_, 4, v_r_3875_);
v___x_3907_ = v_reuseFailAlloc_3908_;
goto v_reusejp_3906_;
}
v_reusejp_3906_:
{
return v___x_3907_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_3922_; 
v_l_3922_ = lean_ctor_get(v_impl_3868_, 3);
lean_inc(v_l_3922_);
if (lean_obj_tag(v_l_3922_) == 0)
{
lean_object* v_r_3923_; lean_object* v_k_3924_; lean_object* v_v_3925_; lean_object* v___x_3927_; uint8_t v_isShared_3928_; uint8_t v_isSharedCheck_3946_; 
v_r_3923_ = lean_ctor_get(v_impl_3868_, 4);
v_k_3924_ = lean_ctor_get(v_impl_3868_, 1);
v_v_3925_ = lean_ctor_get(v_impl_3868_, 2);
v_isSharedCheck_3946_ = !lean_is_exclusive(v_impl_3868_);
if (v_isSharedCheck_3946_ == 0)
{
lean_object* v_unused_3947_; lean_object* v_unused_3948_; 
v_unused_3947_ = lean_ctor_get(v_impl_3868_, 3);
lean_dec(v_unused_3947_);
v_unused_3948_ = lean_ctor_get(v_impl_3868_, 0);
lean_dec(v_unused_3948_);
v___x_3927_ = v_impl_3868_;
v_isShared_3928_ = v_isSharedCheck_3946_;
goto v_resetjp_3926_;
}
else
{
lean_inc(v_r_3923_);
lean_inc(v_v_3925_);
lean_inc(v_k_3924_);
lean_dec(v_impl_3868_);
v___x_3927_ = lean_box(0);
v_isShared_3928_ = v_isSharedCheck_3946_;
goto v_resetjp_3926_;
}
v_resetjp_3926_:
{
lean_object* v_k_3929_; lean_object* v_v_3930_; lean_object* v___x_3932_; uint8_t v_isShared_3933_; uint8_t v_isSharedCheck_3942_; 
v_k_3929_ = lean_ctor_get(v_l_3922_, 1);
v_v_3930_ = lean_ctor_get(v_l_3922_, 2);
v_isSharedCheck_3942_ = !lean_is_exclusive(v_l_3922_);
if (v_isSharedCheck_3942_ == 0)
{
lean_object* v_unused_3943_; lean_object* v_unused_3944_; lean_object* v_unused_3945_; 
v_unused_3943_ = lean_ctor_get(v_l_3922_, 4);
lean_dec(v_unused_3943_);
v_unused_3944_ = lean_ctor_get(v_l_3922_, 3);
lean_dec(v_unused_3944_);
v_unused_3945_ = lean_ctor_get(v_l_3922_, 0);
lean_dec(v_unused_3945_);
v___x_3932_ = v_l_3922_;
v_isShared_3933_ = v_isSharedCheck_3942_;
goto v_resetjp_3931_;
}
else
{
lean_inc(v_v_3930_);
lean_inc(v_k_3929_);
lean_dec(v_l_3922_);
v___x_3932_ = lean_box(0);
v_isShared_3933_ = v_isSharedCheck_3942_;
goto v_resetjp_3931_;
}
v_resetjp_3931_:
{
lean_object* v___x_3934_; lean_object* v___x_3936_; 
v___x_3934_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_3923_, 2);
if (v_isShared_3933_ == 0)
{
lean_ctor_set(v___x_3932_, 4, v_r_3923_);
lean_ctor_set(v___x_3932_, 3, v_r_3923_);
lean_ctor_set(v___x_3932_, 2, v_v_3710_);
lean_ctor_set(v___x_3932_, 1, v_k_3709_);
lean_ctor_set(v___x_3932_, 0, v___x_3869_);
v___x_3936_ = v___x_3932_;
goto v_reusejp_3935_;
}
else
{
lean_object* v_reuseFailAlloc_3941_; 
v_reuseFailAlloc_3941_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3941_, 0, v___x_3869_);
lean_ctor_set(v_reuseFailAlloc_3941_, 1, v_k_3709_);
lean_ctor_set(v_reuseFailAlloc_3941_, 2, v_v_3710_);
lean_ctor_set(v_reuseFailAlloc_3941_, 3, v_r_3923_);
lean_ctor_set(v_reuseFailAlloc_3941_, 4, v_r_3923_);
v___x_3936_ = v_reuseFailAlloc_3941_;
goto v_reusejp_3935_;
}
v_reusejp_3935_:
{
lean_object* v___x_3938_; 
lean_inc(v_r_3923_);
if (v_isShared_3928_ == 0)
{
lean_ctor_set(v___x_3927_, 3, v_r_3923_);
lean_ctor_set(v___x_3927_, 0, v___x_3869_);
v___x_3938_ = v___x_3927_;
goto v_reusejp_3937_;
}
else
{
lean_object* v_reuseFailAlloc_3940_; 
v_reuseFailAlloc_3940_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3940_, 0, v___x_3869_);
lean_ctor_set(v_reuseFailAlloc_3940_, 1, v_k_3924_);
lean_ctor_set(v_reuseFailAlloc_3940_, 2, v_v_3925_);
lean_ctor_set(v_reuseFailAlloc_3940_, 3, v_r_3923_);
lean_ctor_set(v_reuseFailAlloc_3940_, 4, v_r_3923_);
v___x_3938_ = v_reuseFailAlloc_3940_;
goto v_reusejp_3937_;
}
v_reusejp_3937_:
{
lean_object* v___x_3939_; 
v___x_3939_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3939_, 0, v___x_3934_);
lean_ctor_set(v___x_3939_, 1, v_k_3929_);
lean_ctor_set(v___x_3939_, 2, v_v_3930_);
lean_ctor_set(v___x_3939_, 3, v___x_3936_);
lean_ctor_set(v___x_3939_, 4, v___x_3938_);
return v___x_3939_;
}
}
}
}
}
else
{
lean_object* v_r_3949_; 
v_r_3949_ = lean_ctor_get(v_impl_3868_, 4);
lean_inc(v_r_3949_);
if (lean_obj_tag(v_r_3949_) == 0)
{
lean_object* v_k_3950_; lean_object* v_v_3951_; lean_object* v___x_3953_; uint8_t v_isShared_3954_; uint8_t v_isSharedCheck_3960_; 
v_k_3950_ = lean_ctor_get(v_impl_3868_, 1);
v_v_3951_ = lean_ctor_get(v_impl_3868_, 2);
v_isSharedCheck_3960_ = !lean_is_exclusive(v_impl_3868_);
if (v_isSharedCheck_3960_ == 0)
{
lean_object* v_unused_3961_; lean_object* v_unused_3962_; lean_object* v_unused_3963_; 
v_unused_3961_ = lean_ctor_get(v_impl_3868_, 4);
lean_dec(v_unused_3961_);
v_unused_3962_ = lean_ctor_get(v_impl_3868_, 3);
lean_dec(v_unused_3962_);
v_unused_3963_ = lean_ctor_get(v_impl_3868_, 0);
lean_dec(v_unused_3963_);
v___x_3953_ = v_impl_3868_;
v_isShared_3954_ = v_isSharedCheck_3960_;
goto v_resetjp_3952_;
}
else
{
lean_inc(v_v_3951_);
lean_inc(v_k_3950_);
lean_dec(v_impl_3868_);
v___x_3953_ = lean_box(0);
v_isShared_3954_ = v_isSharedCheck_3960_;
goto v_resetjp_3952_;
}
v_resetjp_3952_:
{
lean_object* v___x_3955_; lean_object* v___x_3957_; 
v___x_3955_ = lean_unsigned_to_nat(3u);
if (v_isShared_3954_ == 0)
{
lean_ctor_set(v___x_3953_, 4, v_l_3922_);
lean_ctor_set(v___x_3953_, 2, v_v_3710_);
lean_ctor_set(v___x_3953_, 1, v_k_3709_);
lean_ctor_set(v___x_3953_, 0, v___x_3869_);
v___x_3957_ = v___x_3953_;
goto v_reusejp_3956_;
}
else
{
lean_object* v_reuseFailAlloc_3959_; 
v_reuseFailAlloc_3959_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3959_, 0, v___x_3869_);
lean_ctor_set(v_reuseFailAlloc_3959_, 1, v_k_3709_);
lean_ctor_set(v_reuseFailAlloc_3959_, 2, v_v_3710_);
lean_ctor_set(v_reuseFailAlloc_3959_, 3, v_l_3922_);
lean_ctor_set(v_reuseFailAlloc_3959_, 4, v_l_3922_);
v___x_3957_ = v_reuseFailAlloc_3959_;
goto v_reusejp_3956_;
}
v_reusejp_3956_:
{
lean_object* v___x_3958_; 
v___x_3958_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3958_, 0, v___x_3955_);
lean_ctor_set(v___x_3958_, 1, v_k_3950_);
lean_ctor_set(v___x_3958_, 2, v_v_3951_);
lean_ctor_set(v___x_3958_, 3, v___x_3957_);
lean_ctor_set(v___x_3958_, 4, v_r_3949_);
return v___x_3958_;
}
}
}
else
{
lean_object* v___x_3964_; lean_object* v___x_3965_; 
v___x_3964_ = lean_unsigned_to_nat(2u);
v___x_3965_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3965_, 0, v___x_3964_);
lean_ctor_set(v___x_3965_, 1, v_k_3709_);
lean_ctor_set(v___x_3965_, 2, v_v_3710_);
lean_ctor_set(v___x_3965_, 3, v_r_3949_);
lean_ctor_set(v___x_3965_, 4, v_impl_3868_);
return v___x_3965_;
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
lean_object* v___x_3973_; lean_object* v___x_3974_; 
v___x_3973_ = lean_unsigned_to_nat(1u);
v___x_3974_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3974_, 0, v___x_3973_);
lean_ctor_set(v___x_3974_, 1, v_k_3691_);
lean_ctor_set(v___x_3974_, 2, v_v_3692_);
lean_ctor_set(v___x_3974_, 3, v_t_3693_);
lean_ctor_set(v___x_3974_, 4, v_t_3693_);
return v___x_3974_;
}
v___jp_3694_:
{
lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; 
v___x_3705_ = lean_nat_add(v___y_3701_, v___y_3704_);
lean_dec(v___y_3704_);
lean_dec(v___y_3701_);
v___x_3706_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3706_, 0, v___x_3705_);
lean_ctor_set(v___x_3706_, 1, v___y_3699_);
lean_ctor_set(v___x_3706_, 2, v___y_3695_);
lean_ctor_set(v___x_3706_, 3, v___y_3698_);
lean_ctor_set(v___x_3706_, 4, v___y_3702_);
v___x_3707_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3707_, 0, v___y_3696_);
lean_ctor_set(v___x_3707_, 1, v___y_3697_);
lean_ctor_set(v___x_3707_, 2, v___y_3703_);
lean_ctor_set(v___x_3707_, 3, v___y_3700_);
lean_ctor_set(v___x_3707_, 4, v___x_3706_);
return v___x_3707_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5___redArg(lean_object* v_t_3975_, lean_object* v_k_3976_, lean_object* v_fallback_3977_){
_start:
{
if (lean_obj_tag(v_t_3975_) == 0)
{
lean_object* v_k_3978_; lean_object* v_v_3979_; lean_object* v_l_3980_; lean_object* v_r_3981_; uint8_t v___y_3983_; lean_object* v_fst_3986_; lean_object* v_snd_3987_; lean_object* v_fst_3988_; lean_object* v_snd_3989_; uint8_t v___x_3990_; 
v_k_3978_ = lean_ctor_get(v_t_3975_, 1);
v_v_3979_ = lean_ctor_get(v_t_3975_, 2);
v_l_3980_ = lean_ctor_get(v_t_3975_, 3);
v_r_3981_ = lean_ctor_get(v_t_3975_, 4);
v_fst_3986_ = lean_ctor_get(v_k_3976_, 0);
v_snd_3987_ = lean_ctor_get(v_k_3976_, 1);
v_fst_3988_ = lean_ctor_get(v_k_3978_, 0);
v_snd_3989_ = lean_ctor_get(v_k_3978_, 1);
v___x_3990_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_fst_3986_, v_fst_3988_);
if (v___x_3990_ == 1)
{
uint8_t v___x_3991_; 
v___x_3991_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_snd_3987_, v_snd_3989_);
v___y_3983_ = v___x_3991_;
goto v___jp_3982_;
}
else
{
v___y_3983_ = v___x_3990_;
goto v___jp_3982_;
}
v___jp_3982_:
{
switch(v___y_3983_)
{
case 0:
{
v_t_3975_ = v_l_3980_;
goto _start;
}
case 1:
{
lean_inc(v_v_3979_);
return v_v_3979_;
}
default: 
{
v_t_3975_ = v_r_3981_;
goto _start;
}
}
}
}
else
{
lean_inc(v_fallback_3977_);
return v_fallback_3977_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5___redArg___boxed(lean_object* v_t_3992_, lean_object* v_k_3993_, lean_object* v_fallback_3994_){
_start:
{
lean_object* v_res_3995_; 
v_res_3995_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5___redArg(v_t_3992_, v_k_3993_, v_fallback_3994_);
lean_dec(v_fallback_3994_);
lean_dec_ref(v_k_3993_);
lean_dec(v_t_3992_);
return v_res_3995_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__7(lean_object* v___x_3996_, lean_object* v_as_3997_, size_t v_sz_3998_, size_t v_i_3999_, lean_object* v_b_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_){
_start:
{
uint8_t v___x_4004_; 
v___x_4004_ = lean_usize_dec_lt(v_i_3999_, v_sz_3998_);
if (v___x_4004_ == 0)
{
lean_object* v___x_4005_; 
lean_dec(v___x_3996_);
v___x_4005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4005_, 0, v_b_4000_);
return v___x_4005_;
}
else
{
lean_object* v_a_4006_; lean_object* v_fst_4007_; lean_object* v___x_4009_; uint8_t v_isShared_4010_; uint8_t v_isSharedCheck_4035_; 
v_a_4006_ = lean_array_uget(v_as_3997_, v_i_3999_);
v_fst_4007_ = lean_ctor_get(v_a_4006_, 0);
v_isSharedCheck_4035_ = !lean_is_exclusive(v_a_4006_);
if (v_isSharedCheck_4035_ == 0)
{
lean_object* v_unused_4036_; 
v_unused_4036_ = lean_ctor_get(v_a_4006_, 1);
lean_dec(v_unused_4036_);
v___x_4009_ = v_a_4006_;
v_isShared_4010_ = v_isSharedCheck_4035_;
goto v_resetjp_4008_;
}
else
{
lean_inc(v_fst_4007_);
lean_dec(v_a_4006_);
v___x_4009_ = lean_box(0);
v_isShared_4010_ = v_isSharedCheck_4035_;
goto v_resetjp_4008_;
}
v_resetjp_4008_:
{
lean_object* v___x_4011_; lean_object* v___x_4012_; 
v___x_4011_ = lean_unsigned_to_nat(0u);
lean_inc(v_fst_4007_);
v___x_4012_ = l_Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0(v_fst_4007_, v___y_4001_, v___y_4002_);
if (lean_obj_tag(v___x_4012_) == 0)
{
lean_object* v_a_4013_; lean_object* v___y_4015_; 
v_a_4013_ = lean_ctor_get(v___x_4012_, 0);
lean_inc(v_a_4013_);
lean_dec_ref_known(v___x_4012_, 1);
if (lean_obj_tag(v_a_4013_) == 0)
{
lean_inc(v___x_3996_);
v___y_4015_ = v___x_3996_;
goto v___jp_4014_;
}
else
{
lean_object* v_val_4026_; 
v_val_4026_ = lean_ctor_get(v_a_4013_, 0);
lean_inc(v_val_4026_);
lean_dec_ref_known(v_a_4013_, 1);
v___y_4015_ = v_val_4026_;
goto v___jp_4014_;
}
v___jp_4014_:
{
lean_object* v___x_4017_; 
if (v_isShared_4010_ == 0)
{
lean_ctor_set(v___x_4009_, 1, v_fst_4007_);
lean_ctor_set(v___x_4009_, 0, v___y_4015_);
v___x_4017_ = v___x_4009_;
goto v_reusejp_4016_;
}
else
{
lean_object* v_reuseFailAlloc_4025_; 
v_reuseFailAlloc_4025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4025_, 0, v___y_4015_);
lean_ctor_set(v_reuseFailAlloc_4025_, 1, v_fst_4007_);
v___x_4017_ = v_reuseFailAlloc_4025_;
goto v_reusejp_4016_;
}
v_reusejp_4016_:
{
lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; size_t v___x_4022_; size_t v___x_4023_; 
v___x_4018_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5___redArg(v_b_4000_, v___x_4017_, v___x_4011_);
v___x_4019_ = lean_unsigned_to_nat(1u);
v___x_4020_ = lean_nat_add(v___x_4018_, v___x_4019_);
lean_dec(v___x_4018_);
v___x_4021_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__6___redArg(v___x_4017_, v___x_4020_, v_b_4000_);
v___x_4022_ = ((size_t)1ULL);
v___x_4023_ = lean_usize_add(v_i_3999_, v___x_4022_);
v_i_3999_ = v___x_4023_;
v_b_4000_ = v___x_4021_;
goto _start;
}
}
}
else
{
lean_object* v_a_4027_; lean_object* v___x_4029_; uint8_t v_isShared_4030_; uint8_t v_isSharedCheck_4034_; 
lean_del_object(v___x_4009_);
lean_dec(v_fst_4007_);
lean_dec(v_b_4000_);
lean_dec(v___x_3996_);
v_a_4027_ = lean_ctor_get(v___x_4012_, 0);
v_isSharedCheck_4034_ = !lean_is_exclusive(v___x_4012_);
if (v_isSharedCheck_4034_ == 0)
{
v___x_4029_ = v___x_4012_;
v_isShared_4030_ = v_isSharedCheck_4034_;
goto v_resetjp_4028_;
}
else
{
lean_inc(v_a_4027_);
lean_dec(v___x_4012_);
v___x_4029_ = lean_box(0);
v_isShared_4030_ = v_isSharedCheck_4034_;
goto v_resetjp_4028_;
}
v_resetjp_4028_:
{
lean_object* v___x_4032_; 
if (v_isShared_4030_ == 0)
{
v___x_4032_ = v___x_4029_;
goto v_reusejp_4031_;
}
else
{
lean_object* v_reuseFailAlloc_4033_; 
v_reuseFailAlloc_4033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4033_, 0, v_a_4027_);
v___x_4032_ = v_reuseFailAlloc_4033_;
goto v_reusejp_4031_;
}
v_reusejp_4031_:
{
return v___x_4032_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__7___boxed(lean_object* v___x_4037_, lean_object* v_as_4038_, lean_object* v_sz_4039_, lean_object* v_i_4040_, lean_object* v_b_4041_, lean_object* v___y_4042_, lean_object* v___y_4043_, lean_object* v___y_4044_){
_start:
{
size_t v_sz_boxed_4045_; size_t v_i_boxed_4046_; lean_object* v_res_4047_; 
v_sz_boxed_4045_ = lean_unbox_usize(v_sz_4039_);
lean_dec(v_sz_4039_);
v_i_boxed_4046_ = lean_unbox_usize(v_i_4040_);
lean_dec(v_i_4040_);
v_res_4047_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__7(v___x_4037_, v_as_4038_, v_sz_boxed_4045_, v_i_boxed_4046_, v_b_4041_, v___y_4042_, v___y_4043_);
lean_dec(v___y_4043_);
lean_dec_ref(v___y_4042_);
lean_dec_ref(v_as_4038_);
return v_res_4047_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___redArg(lean_object* v_fst_4048_, lean_object* v_init_4049_, lean_object* v_x_4050_){
_start:
{
if (lean_obj_tag(v_x_4050_) == 0)
{
lean_object* v_k_4052_; lean_object* v_v_4053_; lean_object* v_l_4054_; lean_object* v_r_4055_; uint8_t v___x_4056_; lean_object* v___x_4057_; lean_object* v_a_4058_; lean_object* v_a_4059_; lean_object* v_fst_4060_; lean_object* v_snd_4061_; lean_object* v___x_4063_; uint8_t v_isShared_4064_; uint8_t v_isSharedCheck_4075_; 
v_k_4052_ = lean_ctor_get(v_x_4050_, 1);
lean_inc(v_k_4052_);
v_v_4053_ = lean_ctor_get(v_x_4050_, 2);
lean_inc(v_v_4053_);
v_l_4054_ = lean_ctor_get(v_x_4050_, 3);
lean_inc(v_l_4054_);
v_r_4055_ = lean_ctor_get(v_x_4050_, 4);
lean_inc(v_r_4055_);
lean_dec_ref_known(v_x_4050_, 5);
v___x_4056_ = 1;
lean_inc_ref(v_fst_4048_);
v___x_4057_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___redArg(v_fst_4048_, v_init_4049_, v_l_4054_);
v_a_4058_ = lean_ctor_get(v___x_4057_, 0);
lean_inc(v_a_4058_);
lean_dec_ref(v___x_4057_);
v_a_4059_ = lean_ctor_get(v_a_4058_, 0);
lean_inc(v_a_4059_);
lean_dec(v_a_4058_);
v_fst_4060_ = lean_ctor_get(v_k_4052_, 0);
v_snd_4061_ = lean_ctor_get(v_k_4052_, 1);
v_isSharedCheck_4075_ = !lean_is_exclusive(v_k_4052_);
if (v_isSharedCheck_4075_ == 0)
{
v___x_4063_ = v_k_4052_;
v_isShared_4064_ = v_isSharedCheck_4075_;
goto v_resetjp_4062_;
}
else
{
lean_inc(v_snd_4061_);
lean_inc(v_fst_4060_);
lean_dec(v_k_4052_);
v___x_4063_ = lean_box(0);
v_isShared_4064_ = v_isSharedCheck_4075_;
goto v_resetjp_4062_;
}
v_resetjp_4062_:
{
lean_object* v_optName_4065_; lean_object* v___x_4066_; lean_object* v___x_4068_; 
v_optName_4065_ = lean_ctor_get(v_fst_4048_, 1);
lean_inc(v_optName_4065_);
v___x_4066_ = l_Lean_Name_toString(v_optName_4065_, v___x_4056_);
if (v_isShared_4064_ == 0)
{
lean_ctor_set_tag(v___x_4063_, 1);
v___x_4068_ = v___x_4063_;
goto v_reusejp_4067_;
}
else
{
lean_object* v_reuseFailAlloc_4074_; 
v_reuseFailAlloc_4074_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4074_, 0, v_fst_4060_);
lean_ctor_set(v_reuseFailAlloc_4074_, 1, v_snd_4061_);
v___x_4068_ = v_reuseFailAlloc_4074_;
goto v_reusejp_4067_;
}
v_reusejp_4067_:
{
double v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; 
v___x_4069_ = lean_float_of_nat(v_v_4053_);
v___x_4070_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v___x_4070_, 0, v___x_4069_);
v___x_4071_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4071_, 0, v___x_4066_);
lean_ctor_set(v___x_4071_, 1, v___x_4068_);
lean_ctor_set(v___x_4071_, 2, v___x_4070_);
v___x_4072_ = lean_array_push(v_a_4059_, v___x_4071_);
v_init_4049_ = v___x_4072_;
v_x_4050_ = v_r_4055_;
goto _start;
}
}
}
else
{
lean_object* v___x_4076_; lean_object* v___x_4077_; 
lean_dec_ref(v_fst_4048_);
v___x_4076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4076_, 0, v_init_4049_);
v___x_4077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4077_, 0, v___x_4076_);
return v___x_4077_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___redArg___boxed(lean_object* v_fst_4078_, lean_object* v_init_4079_, lean_object* v_x_4080_, lean_object* v___y_4081_){
_start:
{
lean_object* v_res_4082_; 
v_res_4082_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___redArg(v_fst_4078_, v_init_4079_, v_x_4080_);
return v_res_4082_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__9(lean_object* v___x_4083_, lean_object* v_as_4084_, size_t v_sz_4085_, size_t v_i_4086_, lean_object* v_b_4087_, lean_object* v___y_4088_, lean_object* v___y_4089_){
_start:
{
lean_object* v_a_4092_; uint8_t v___x_4096_; 
v___x_4096_ = lean_usize_dec_lt(v_i_4086_, v_sz_4085_);
if (v___x_4096_ == 0)
{
lean_object* v___x_4097_; 
lean_dec(v___x_4083_);
v___x_4097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4097_, 0, v_b_4087_);
return v___x_4097_;
}
else
{
lean_object* v_a_4098_; lean_object* v_snd_4099_; lean_object* v_fst_4100_; lean_object* v_size_4101_; lean_object* v_buckets_4102_; lean_object* v___x_4103_; lean_object* v___y_4105_; lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; uint8_t v___x_4142_; 
v_a_4098_ = lean_array_uget_borrowed(v_as_4084_, v_i_4086_);
v_snd_4099_ = lean_ctor_get(v_a_4098_, 1);
v_fst_4100_ = lean_ctor_get(v_a_4098_, 0);
v_size_4101_ = lean_ctor_get(v_snd_4099_, 0);
v_buckets_4102_ = lean_ctor_get(v_snd_4099_, 1);
v___x_4103_ = lean_box(1);
v___x_4139_ = lean_mk_empty_array_with_capacity(v_size_4101_);
v___x_4140_ = lean_unsigned_to_nat(0u);
v___x_4141_ = lean_array_get_size(v_buckets_4102_);
v___x_4142_ = lean_nat_dec_lt(v___x_4140_, v___x_4141_);
if (v___x_4142_ == 0)
{
v___y_4105_ = v___x_4139_;
goto v___jp_4104_;
}
else
{
size_t v___x_4143_; size_t v___x_4144_; lean_object* v___x_4145_; 
v___x_4143_ = ((size_t)0ULL);
v___x_4144_ = lean_usize_of_nat(v___x_4141_);
v___x_4145_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__3(v_buckets_4102_, v___x_4143_, v___x_4144_, v___x_4139_);
v___y_4105_ = v___x_4145_;
goto v___jp_4104_;
}
v___jp_4104_:
{
size_t v_sz_4106_; size_t v___x_4107_; lean_object* v___x_4108_; 
v_sz_4106_ = lean_array_size(v___y_4105_);
v___x_4107_ = ((size_t)0ULL);
lean_inc(v___x_4083_);
v___x_4108_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__7(v___x_4083_, v___y_4105_, v_sz_4106_, v___x_4107_, v___x_4103_, v___y_4088_, v___y_4089_);
lean_dec_ref(v___y_4105_);
if (lean_obj_tag(v___x_4108_) == 0)
{
lean_object* v_a_4109_; lean_object* v___x_4110_; 
v_a_4109_ = lean_ctor_get(v___x_4108_, 0);
lean_inc(v_a_4109_);
lean_dec_ref_known(v___x_4108_, 1);
lean_inc(v_fst_4100_);
v___x_4110_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___redArg(v_fst_4100_, v_b_4087_, v_a_4109_);
if (lean_obj_tag(v___x_4110_) == 0)
{
lean_object* v_a_4111_; lean_object* v_a_4112_; 
v_a_4111_ = lean_ctor_get(v___x_4110_, 0);
lean_inc(v_a_4111_);
lean_dec_ref_known(v___x_4110_, 1);
v_a_4112_ = lean_ctor_get(v_a_4111_, 0);
lean_inc(v_a_4112_);
lean_dec(v_a_4111_);
v_a_4092_ = v_a_4112_;
goto v___jp_4091_;
}
else
{
if (lean_obj_tag(v___x_4110_) == 0)
{
lean_object* v_a_4113_; lean_object* v___x_4115_; uint8_t v_isShared_4116_; uint8_t v_isSharedCheck_4122_; 
v_a_4113_ = lean_ctor_get(v___x_4110_, 0);
v_isSharedCheck_4122_ = !lean_is_exclusive(v___x_4110_);
if (v_isSharedCheck_4122_ == 0)
{
v___x_4115_ = v___x_4110_;
v_isShared_4116_ = v_isSharedCheck_4122_;
goto v_resetjp_4114_;
}
else
{
lean_inc(v_a_4113_);
lean_dec(v___x_4110_);
v___x_4115_ = lean_box(0);
v_isShared_4116_ = v_isSharedCheck_4122_;
goto v_resetjp_4114_;
}
v_resetjp_4114_:
{
if (lean_obj_tag(v_a_4113_) == 0)
{
lean_object* v_a_4117_; lean_object* v___x_4119_; 
lean_dec(v___x_4083_);
v_a_4117_ = lean_ctor_get(v_a_4113_, 0);
lean_inc(v_a_4117_);
lean_dec_ref_known(v_a_4113_, 1);
if (v_isShared_4116_ == 0)
{
lean_ctor_set_tag(v___x_4115_, 0);
lean_ctor_set(v___x_4115_, 0, v_a_4117_);
v___x_4119_ = v___x_4115_;
goto v_reusejp_4118_;
}
else
{
lean_object* v_reuseFailAlloc_4120_; 
v_reuseFailAlloc_4120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4120_, 0, v_a_4117_);
v___x_4119_ = v_reuseFailAlloc_4120_;
goto v_reusejp_4118_;
}
v_reusejp_4118_:
{
return v___x_4119_;
}
}
else
{
lean_object* v_a_4121_; 
lean_del_object(v___x_4115_);
v_a_4121_ = lean_ctor_get(v_a_4113_, 0);
lean_inc(v_a_4121_);
lean_dec_ref_known(v_a_4113_, 1);
v_a_4092_ = v_a_4121_;
goto v___jp_4091_;
}
}
}
else
{
lean_object* v_a_4123_; lean_object* v___x_4125_; uint8_t v_isShared_4126_; uint8_t v_isSharedCheck_4130_; 
lean_dec(v___x_4083_);
v_a_4123_ = lean_ctor_get(v___x_4110_, 0);
v_isSharedCheck_4130_ = !lean_is_exclusive(v___x_4110_);
if (v_isSharedCheck_4130_ == 0)
{
v___x_4125_ = v___x_4110_;
v_isShared_4126_ = v_isSharedCheck_4130_;
goto v_resetjp_4124_;
}
else
{
lean_inc(v_a_4123_);
lean_dec(v___x_4110_);
v___x_4125_ = lean_box(0);
v_isShared_4126_ = v_isSharedCheck_4130_;
goto v_resetjp_4124_;
}
v_resetjp_4124_:
{
lean_object* v___x_4128_; 
if (v_isShared_4126_ == 0)
{
v___x_4128_ = v___x_4125_;
goto v_reusejp_4127_;
}
else
{
lean_object* v_reuseFailAlloc_4129_; 
v_reuseFailAlloc_4129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4129_, 0, v_a_4123_);
v___x_4128_ = v_reuseFailAlloc_4129_;
goto v_reusejp_4127_;
}
v_reusejp_4127_:
{
return v___x_4128_;
}
}
}
}
}
else
{
lean_object* v_a_4131_; lean_object* v___x_4133_; uint8_t v_isShared_4134_; uint8_t v_isSharedCheck_4138_; 
lean_dec_ref(v_b_4087_);
lean_dec(v___x_4083_);
v_a_4131_ = lean_ctor_get(v___x_4108_, 0);
v_isSharedCheck_4138_ = !lean_is_exclusive(v___x_4108_);
if (v_isSharedCheck_4138_ == 0)
{
v___x_4133_ = v___x_4108_;
v_isShared_4134_ = v_isSharedCheck_4138_;
goto v_resetjp_4132_;
}
else
{
lean_inc(v_a_4131_);
lean_dec(v___x_4108_);
v___x_4133_ = lean_box(0);
v_isShared_4134_ = v_isSharedCheck_4138_;
goto v_resetjp_4132_;
}
v_resetjp_4132_:
{
lean_object* v___x_4136_; 
if (v_isShared_4134_ == 0)
{
v___x_4136_ = v___x_4133_;
goto v_reusejp_4135_;
}
else
{
lean_object* v_reuseFailAlloc_4137_; 
v_reuseFailAlloc_4137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4137_, 0, v_a_4131_);
v___x_4136_ = v_reuseFailAlloc_4137_;
goto v_reusejp_4135_;
}
v_reusejp_4135_:
{
return v___x_4136_;
}
}
}
}
}
v___jp_4091_:
{
size_t v___x_4093_; size_t v___x_4094_; 
v___x_4093_ = ((size_t)1ULL);
v___x_4094_ = lean_usize_add(v_i_4086_, v___x_4093_);
v_i_4086_ = v___x_4094_;
v_b_4087_ = v_a_4092_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__9___boxed(lean_object* v___x_4146_, lean_object* v_as_4147_, lean_object* v_sz_4148_, lean_object* v_i_4149_, lean_object* v_b_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_){
_start:
{
size_t v_sz_boxed_4154_; size_t v_i_boxed_4155_; lean_object* v_res_4156_; 
v_sz_boxed_4154_ = lean_unbox_usize(v_sz_4148_);
lean_dec(v_sz_4148_);
v_i_boxed_4155_ = lean_unbox_usize(v_i_4149_);
lean_dec(v_i_4149_);
v_res_4156_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__9(v___x_4146_, v_as_4147_, v_sz_boxed_4154_, v_i_boxed_4155_, v_b_4150_, v___y_4151_, v___y_4152_);
lean_dec(v___y_4152_);
lean_dec_ref(v___y_4151_);
lean_dec_ref(v_as_4147_);
return v_res_4156_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__5(void){
_start:
{
lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4165_; 
v___x_4163_ = l_Lean_maxRecDepth;
v___x_4164_ = l_Lean_Options_empty;
v___x_4165_ = l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3(v___x_4164_, v___x_4163_);
return v___x_4165_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters(lean_object* v_args_4166_, lean_object* v_linterOpts_4167_, lean_object* v_sp_4168_, lean_object* v_env_4169_, lean_object* v_mod_4170_){
_start:
{
lean_object* v_a_4173_; lean_object* v_msg_4177_; lean_object* v_a_4182_; lean_object* v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; lean_object* v___x_4199_; lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; uint8_t v___x_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; lean_object* v___x_4213_; uint8_t v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v_a_4221_; lean_object* v___y_4225_; lean_object* v___y_4228_; lean_object* v___y_4229_; uint8_t v___y_4230_; uint8_t v___y_4231_; lean_object* v___y_4232_; lean_object* v___y_4233_; lean_object* v___y_4234_; uint8_t v___y_4235_; lean_object* v___y_4305_; lean_object* v___y_4306_; uint8_t v___y_4307_; lean_object* v___y_4308_; lean_object* v___y_4309_; uint8_t v___y_4310_; lean_object* v___y_4320_; lean_object* v___y_4321_; uint8_t v___y_4322_; lean_object* v___y_4323_; lean_object* v___y_4324_; lean_object* v___x_4349_; lean_object* v___x_4350_; uint8_t v___x_4351_; lean_object* v___y_4353_; lean_object* v___x_4371_; uint8_t v___y_4373_; lean_object* v_env_4393_; uint8_t v___x_4394_; 
v___x_4196_ = l_Lean_Name_getRoot(v_mod_4170_);
v___x_4197_ = ((lean_object*)(l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__0));
v___x_4198_ = l_Lean_instInhabitedFileMap_default;
v___x_4199_ = l_Lean_Options_empty;
v___x_4200_ = lean_box(0);
v___x_4201_ = lean_box(0);
v___x_4202_ = lean_unsigned_to_nat(0u);
v___x_4203_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5);
v___x_4204_ = l_Lean_firstFrontendMacroScope;
v___x_4205_ = lean_box(0);
v___x_4206_ = lean_box(0);
v___x_4207_ = 0;
v___x_4208_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6);
v___x_4209_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__9));
v___x_4210_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__10));
v___x_4211_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13);
v___x_4212_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16);
v___x_4213_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17);
v___x_4214_ = 1;
v___x_4215_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18);
v___x_4216_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__19));
v___x_4217_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_4217_, 0, v_env_4169_);
lean_ctor_set(v___x_4217_, 1, v___x_4208_);
lean_ctor_set(v___x_4217_, 2, v___x_4209_);
lean_ctor_set(v___x_4217_, 3, v___x_4210_);
lean_ctor_set(v___x_4217_, 4, v___x_4211_);
lean_ctor_set(v___x_4217_, 5, v___x_4212_);
lean_ctor_set(v___x_4217_, 6, v___x_4213_);
lean_ctor_set(v___x_4217_, 7, v___x_4215_);
lean_ctor_set(v___x_4217_, 8, v___x_4216_);
v___x_4218_ = lean_io_get_num_heartbeats();
v___x_4219_ = lean_st_mk_ref(v___x_4217_);
v___x_4349_ = l_Lean_inheritedTraceOptions;
v___x_4350_ = lean_st_ref_get(v___x_4349_);
v___x_4351_ = lean_uint8_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20);
v___x_4371_ = lean_st_ref_get(v___x_4219_);
v_env_4393_ = lean_ctor_get(v___x_4371_, 0);
lean_inc_ref(v_env_4393_);
lean_dec(v___x_4371_);
v___x_4394_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_4393_);
lean_dec_ref(v_env_4393_);
if (v___x_4351_ == 0)
{
if (v___x_4394_ == 0)
{
lean_inc(v___x_4219_);
v___y_4353_ = v___x_4219_;
goto v___jp_4352_;
}
else
{
v___y_4373_ = v___x_4351_;
goto v___jp_4372_;
}
}
else
{
v___y_4373_ = v___x_4394_;
goto v___jp_4372_;
}
v___jp_4172_:
{
lean_object* v___x_4174_; lean_object* v___x_4175_; 
v___x_4174_ = lean_mk_io_user_error(v_a_4173_);
v___x_4175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4175_, 0, v___x_4174_);
return v___x_4175_;
}
v___jp_4176_:
{
lean_object* v___x_4178_; lean_object* v___x_4179_; lean_object* v___x_4180_; 
v___x_4178_ = l_Lean_MessageData_toString(v_msg_4177_);
v___x_4179_ = lean_mk_io_user_error(v___x_4178_);
v___x_4180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4180_, 0, v___x_4179_);
return v___x_4180_;
}
v___jp_4181_:
{
if (lean_obj_tag(v_a_4182_) == 0)
{
lean_object* v_msg_4183_; 
v_msg_4183_ = lean_ctor_get(v_a_4182_, 1);
lean_inc_ref(v_msg_4183_);
lean_dec_ref_known(v_a_4182_, 2);
v_msg_4177_ = v_msg_4183_;
goto v___jp_4176_;
}
else
{
lean_object* v_id_4184_; lean_object* v___x_4185_; 
v_id_4184_ = lean_ctor_get(v_a_4182_, 0);
lean_inc(v_id_4184_);
lean_dec_ref_known(v_a_4182_, 2);
v___x_4185_ = l_Lean_InternalExceptionId_getName(v_id_4184_);
if (lean_obj_tag(v___x_4185_) == 0)
{
lean_object* v_a_4186_; lean_object* v___x_4187_; uint8_t v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; 
lean_dec(v_id_4184_);
v_a_4186_ = lean_ctor_get(v___x_4185_, 0);
lean_inc(v_a_4186_);
lean_dec_ref_known(v___x_4185_, 1);
v___x_4187_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__0));
v___x_4188_ = 1;
v___x_4189_ = l_Lean_Name_toString(v_a_4186_, v___x_4188_);
v___x_4190_ = lean_string_append(v___x_4187_, v___x_4189_);
lean_dec_ref(v___x_4189_);
v_a_4173_ = v___x_4190_;
goto v___jp_4172_;
}
else
{
lean_object* v___x_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; lean_object* v___x_4194_; lean_object* v___x_4195_; 
lean_dec_ref_known(v___x_4185_, 1);
v___x_4191_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__1));
v___x_4192_ = l_Nat_reprFast(v_id_4184_);
v___x_4193_ = lean_string_append(v___x_4191_, v___x_4192_);
lean_dec_ref(v___x_4192_);
v___x_4194_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__2));
v___x_4195_ = lean_string_append(v___x_4193_, v___x_4194_);
v_a_4173_ = v___x_4195_;
goto v___jp_4172_;
}
}
}
v___jp_4220_:
{
lean_object* v___x_4222_; lean_object* v___x_4223_; 
v___x_4222_ = lean_st_ref_get(v___x_4219_);
lean_dec(v___x_4219_);
lean_dec(v___x_4222_);
v___x_4223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4223_, 0, v_a_4221_);
return v___x_4223_;
}
v___jp_4224_:
{
lean_object* v_a_4226_; 
v_a_4226_ = lean_ctor_get(v___y_4225_, 0);
lean_inc(v_a_4226_);
lean_dec_ref(v___y_4225_);
v_a_4221_ = v_a_4226_;
goto v___jp_4220_;
}
v___jp_4227_:
{
switch(v___y_4230_)
{
case 0:
{
lean_dec(v_sp_4168_);
if (v___y_4235_ == 0)
{
lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; 
lean_dec_ref(v___y_4233_);
lean_dec_ref(v___y_4232_);
lean_dec_ref(v___y_4229_);
v___x_4236_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__0));
v___x_4237_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_mod_4170_, v___x_4214_);
v___x_4238_ = lean_string_append(v___x_4236_, v___x_4237_);
lean_dec_ref(v___x_4237_);
v___x_4239_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__1));
v___x_4240_ = lean_string_append(v___x_4238_, v___x_4239_);
v___x_4241_ = l_IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13(v___x_4240_);
if (lean_obj_tag(v___x_4241_) == 0)
{
lean_object* v_a_4242_; lean_object* v___x_4243_; 
v_a_4242_ = lean_ctor_get(v___x_4241_, 0);
lean_inc(v_a_4242_);
lean_dec_ref_known(v___x_4241_, 1);
v___x_4243_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___lam__0(v___y_4235_, v_a_4242_, v___y_4228_, v___y_4234_);
lean_dec(v___y_4234_);
lean_dec_ref(v___y_4228_);
v___y_4225_ = v___x_4243_;
goto v___jp_4224_;
}
else
{
lean_object* v_a_4244_; lean_object* v___x_4246_; uint8_t v_isShared_4247_; uint8_t v_isSharedCheck_4253_; 
lean_dec(v___y_4234_);
lean_dec_ref(v___y_4228_);
lean_dec(v___x_4219_);
v_a_4244_ = lean_ctor_get(v___x_4241_, 0);
v_isSharedCheck_4253_ = !lean_is_exclusive(v___x_4241_);
if (v_isSharedCheck_4253_ == 0)
{
v___x_4246_ = v___x_4241_;
v_isShared_4247_ = v_isSharedCheck_4253_;
goto v_resetjp_4245_;
}
else
{
lean_inc(v_a_4244_);
lean_dec(v___x_4241_);
v___x_4246_ = lean_box(0);
v_isShared_4247_ = v_isSharedCheck_4253_;
goto v_resetjp_4245_;
}
v_resetjp_4245_:
{
lean_object* v___x_4248_; lean_object* v___x_4250_; 
v___x_4248_ = lean_io_error_to_string(v_a_4244_);
if (v_isShared_4247_ == 0)
{
lean_ctor_set_tag(v___x_4246_, 3);
lean_ctor_set(v___x_4246_, 0, v___x_4248_);
v___x_4250_ = v___x_4246_;
goto v_reusejp_4249_;
}
else
{
lean_object* v_reuseFailAlloc_4252_; 
v_reuseFailAlloc_4252_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4252_, 0, v___x_4248_);
v___x_4250_ = v_reuseFailAlloc_4252_;
goto v_reusejp_4249_;
}
v_reusejp_4249_:
{
lean_object* v___x_4251_; 
v___x_4251_ = l_Lean_MessageData_ofFormat(v___x_4250_);
v_msg_4177_ = v___x_4251_;
goto v___jp_4176_;
}
}
}
}
else
{
lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; 
v___x_4254_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__2));
v___x_4255_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_mod_4170_, v___y_4235_);
v___x_4256_ = lean_string_append(v___x_4254_, v___x_4255_);
lean_dec_ref(v___x_4255_);
v___x_4257_ = lean_array_get_size(v___y_4232_);
lean_dec_ref(v___y_4232_);
v___x_4258_ = l_Lean_Linter_EnvLinter_formatLinterResults(v___y_4233_, v___y_4229_, v___x_4214_, v___x_4256_, v___x_4257_, v___x_4214_, v___y_4228_, v___y_4234_);
lean_dec_ref(v___y_4229_);
if (lean_obj_tag(v___x_4258_) == 0)
{
lean_object* v_a_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; 
v_a_4259_ = lean_ctor_get(v___x_4258_, 0);
lean_inc(v_a_4259_);
lean_dec_ref_known(v___x_4258_, 1);
v___x_4260_ = l_Lean_MessageData_toString(v_a_4259_);
v___x_4261_ = l_IO_print___at___00IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13_spec__23(v___x_4260_);
if (lean_obj_tag(v___x_4261_) == 0)
{
lean_object* v_a_4262_; lean_object* v___x_4263_; 
v_a_4262_ = lean_ctor_get(v___x_4261_, 0);
lean_inc(v_a_4262_);
lean_dec_ref_known(v___x_4261_, 1);
v___x_4263_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___lam__0(v___y_4235_, v_a_4262_, v___y_4228_, v___y_4234_);
lean_dec(v___y_4234_);
lean_dec_ref(v___y_4228_);
v___y_4225_ = v___x_4263_;
goto v___jp_4224_;
}
else
{
lean_object* v_a_4264_; lean_object* v___x_4266_; uint8_t v_isShared_4267_; uint8_t v_isSharedCheck_4273_; 
lean_dec(v___y_4234_);
lean_dec_ref(v___y_4228_);
lean_dec(v___x_4219_);
v_a_4264_ = lean_ctor_get(v___x_4261_, 0);
v_isSharedCheck_4273_ = !lean_is_exclusive(v___x_4261_);
if (v_isSharedCheck_4273_ == 0)
{
v___x_4266_ = v___x_4261_;
v_isShared_4267_ = v_isSharedCheck_4273_;
goto v_resetjp_4265_;
}
else
{
lean_inc(v_a_4264_);
lean_dec(v___x_4261_);
v___x_4266_ = lean_box(0);
v_isShared_4267_ = v_isSharedCheck_4273_;
goto v_resetjp_4265_;
}
v_resetjp_4265_:
{
lean_object* v___x_4268_; lean_object* v___x_4270_; 
v___x_4268_ = lean_io_error_to_string(v_a_4264_);
if (v_isShared_4267_ == 0)
{
lean_ctor_set_tag(v___x_4266_, 3);
lean_ctor_set(v___x_4266_, 0, v___x_4268_);
v___x_4270_ = v___x_4266_;
goto v_reusejp_4269_;
}
else
{
lean_object* v_reuseFailAlloc_4272_; 
v_reuseFailAlloc_4272_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4272_, 0, v___x_4268_);
v___x_4270_ = v_reuseFailAlloc_4272_;
goto v_reusejp_4269_;
}
v_reusejp_4269_:
{
lean_object* v___x_4271_; 
v___x_4271_ = l_Lean_MessageData_ofFormat(v___x_4270_);
v_msg_4177_ = v___x_4271_;
goto v___jp_4176_;
}
}
}
}
else
{
lean_object* v_a_4274_; 
lean_dec(v___y_4234_);
lean_dec_ref(v___y_4228_);
lean_dec(v___x_4219_);
v_a_4274_ = lean_ctor_get(v___x_4258_, 0);
lean_inc(v_a_4274_);
lean_dec_ref_known(v___x_4258_, 1);
v_a_4182_ = v_a_4274_;
goto v___jp_4181_;
}
}
}
case 1:
{
lean_object* v___x_4275_; lean_object* v_env_4276_; lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v___x_4279_; size_t v_sz_4280_; size_t v___x_4281_; lean_object* v___x_4282_; 
lean_dec_ref(v___y_4232_);
lean_dec_ref(v___y_4229_);
lean_dec(v_mod_4170_);
v___x_4275_ = lean_st_ref_get(v___y_4234_);
v_env_4276_ = lean_ctor_get(v___x_4275_, 0);
lean_inc_ref(v_env_4276_);
lean_dec(v___x_4275_);
v___x_4277_ = l_Lean_Environment_mainModule(v_env_4276_);
lean_dec_ref(v_env_4276_);
v___x_4278_ = lean_box(v___y_4231_);
v___x_4279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4279_, 0, v___x_4216_);
lean_ctor_set(v___x_4279_, 1, v___x_4278_);
v_sz_4280_ = lean_array_size(v___y_4233_);
v___x_4281_ = ((size_t)0ULL);
v___x_4282_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__4(v_sp_4168_, v___x_4277_, v___y_4233_, v_sz_4280_, v___x_4281_, v___x_4279_, v___y_4228_, v___y_4234_);
lean_dec(v___y_4234_);
lean_dec_ref(v___y_4228_);
lean_dec_ref(v___y_4233_);
if (lean_obj_tag(v___x_4282_) == 0)
{
lean_object* v_a_4283_; lean_object* v_fst_4284_; lean_object* v_snd_4285_; lean_object* v___x_4286_; uint8_t v___x_4287_; 
v_a_4283_ = lean_ctor_get(v___x_4282_, 0);
lean_inc(v_a_4283_);
lean_dec_ref_known(v___x_4282_, 1);
v_fst_4284_ = lean_ctor_get(v_a_4283_, 0);
lean_inc(v_fst_4284_);
v_snd_4285_ = lean_ctor_get(v_a_4283_, 1);
lean_inc(v_snd_4285_);
lean_dec(v_a_4283_);
v___x_4286_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_4286_, 0, v_fst_4284_);
v___x_4287_ = lean_unbox(v_snd_4285_);
lean_dec(v_snd_4285_);
lean_ctor_set_uint8(v___x_4286_, sizeof(void*)*1, v___x_4287_);
v_a_4221_ = v___x_4286_;
goto v___jp_4220_;
}
else
{
lean_object* v_a_4288_; 
lean_dec(v___x_4219_);
v_a_4288_ = lean_ctor_get(v___x_4282_, 0);
lean_inc(v_a_4288_);
lean_dec_ref_known(v___x_4282_, 1);
v_a_4182_ = v_a_4288_;
goto v___jp_4181_;
}
}
default: 
{
lean_object* v___x_4289_; lean_object* v_env_4290_; lean_object* v___x_4291_; size_t v_sz_4292_; size_t v___x_4293_; lean_object* v___x_4294_; 
lean_dec_ref(v___y_4232_);
lean_dec_ref(v___y_4229_);
lean_dec(v_mod_4170_);
lean_dec(v_sp_4168_);
v___x_4289_ = lean_st_ref_get(v___y_4234_);
v_env_4290_ = lean_ctor_get(v___x_4289_, 0);
lean_inc_ref(v_env_4290_);
lean_dec(v___x_4289_);
v___x_4291_ = l_Lean_Environment_mainModule(v_env_4290_);
lean_dec_ref(v_env_4290_);
v_sz_4292_ = lean_array_size(v___y_4233_);
v___x_4293_ = ((size_t)0ULL);
v___x_4294_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__9(v___x_4291_, v___y_4233_, v_sz_4292_, v___x_4293_, v___x_4216_, v___y_4228_, v___y_4234_);
lean_dec(v___y_4234_);
lean_dec_ref(v___y_4228_);
lean_dec_ref(v___y_4233_);
if (lean_obj_tag(v___x_4294_) == 0)
{
lean_object* v_a_4295_; lean_object* v___x_4297_; uint8_t v_isShared_4298_; uint8_t v_isSharedCheck_4302_; 
v_a_4295_ = lean_ctor_get(v___x_4294_, 0);
v_isSharedCheck_4302_ = !lean_is_exclusive(v___x_4294_);
if (v_isSharedCheck_4302_ == 0)
{
v___x_4297_ = v___x_4294_;
v_isShared_4298_ = v_isSharedCheck_4302_;
goto v_resetjp_4296_;
}
else
{
lean_inc(v_a_4295_);
lean_dec(v___x_4294_);
v___x_4297_ = lean_box(0);
v_isShared_4298_ = v_isSharedCheck_4302_;
goto v_resetjp_4296_;
}
v_resetjp_4296_:
{
lean_object* v___x_4300_; 
if (v_isShared_4298_ == 0)
{
lean_ctor_set_tag(v___x_4297_, 2);
v___x_4300_ = v___x_4297_;
goto v_reusejp_4299_;
}
else
{
lean_object* v_reuseFailAlloc_4301_; 
v_reuseFailAlloc_4301_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4301_, 0, v_a_4295_);
v___x_4300_ = v_reuseFailAlloc_4301_;
goto v_reusejp_4299_;
}
v_reusejp_4299_:
{
v_a_4221_ = v___x_4300_;
goto v___jp_4220_;
}
}
}
else
{
lean_object* v_a_4303_; 
lean_dec(v___x_4219_);
v_a_4303_ = lean_ctor_get(v___x_4294_, 0);
lean_inc(v_a_4303_);
lean_dec_ref_known(v___x_4294_, 1);
v_a_4182_ = v_a_4303_;
goto v___jp_4181_;
}
}
}
}
v___jp_4304_:
{
lean_object* v___x_4311_; 
lean_inc_ref(v___y_4308_);
v___x_4311_ = l_Lean_Linter_EnvLinter_lintCore(v___y_4306_, v___y_4308_, v___y_4305_, v___y_4309_);
if (lean_obj_tag(v___x_4311_) == 0)
{
lean_object* v_a_4312_; lean_object* v___x_4313_; uint8_t v___x_4314_; 
v_a_4312_ = lean_ctor_get(v___x_4311_, 0);
lean_inc(v_a_4312_);
lean_dec_ref_known(v___x_4311_, 1);
v___x_4313_ = lean_array_get_size(v_a_4312_);
v___x_4314_ = lean_nat_dec_lt(v___x_4202_, v___x_4313_);
if (v___x_4314_ == 0)
{
v___y_4228_ = v___y_4305_;
v___y_4229_ = v___y_4306_;
v___y_4230_ = v___y_4307_;
v___y_4231_ = v___y_4310_;
v___y_4232_ = v___y_4308_;
v___y_4233_ = v_a_4312_;
v___y_4234_ = v___y_4309_;
v___y_4235_ = v___x_4314_;
goto v___jp_4227_;
}
else
{
if (v___x_4314_ == 0)
{
v___y_4228_ = v___y_4305_;
v___y_4229_ = v___y_4306_;
v___y_4230_ = v___y_4307_;
v___y_4231_ = v___y_4310_;
v___y_4232_ = v___y_4308_;
v___y_4233_ = v_a_4312_;
v___y_4234_ = v___y_4309_;
v___y_4235_ = v___x_4314_;
goto v___jp_4227_;
}
else
{
size_t v___x_4315_; size_t v___x_4316_; uint8_t v___x_4317_; 
v___x_4315_ = ((size_t)0ULL);
v___x_4316_ = lean_usize_of_nat(v___x_4313_);
v___x_4317_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__10(v___y_4310_, v_a_4312_, v___x_4315_, v___x_4316_);
v___y_4228_ = v___y_4305_;
v___y_4229_ = v___y_4306_;
v___y_4230_ = v___y_4307_;
v___y_4231_ = v___y_4310_;
v___y_4232_ = v___y_4308_;
v___y_4233_ = v_a_4312_;
v___y_4234_ = v___y_4309_;
v___y_4235_ = v___x_4317_;
goto v___jp_4227_;
}
}
}
else
{
lean_object* v_a_4318_; 
lean_dec(v___y_4309_);
lean_dec_ref(v___y_4308_);
lean_dec_ref(v___y_4306_);
lean_dec_ref(v___y_4305_);
lean_dec(v___x_4219_);
lean_dec(v_mod_4170_);
lean_dec(v_sp_4168_);
v_a_4318_ = lean_ctor_get(v___x_4311_, 0);
lean_inc(v_a_4318_);
lean_dec_ref_known(v___x_4311_, 1);
v_a_4182_ = v_a_4318_;
goto v___jp_4181_;
}
}
v___jp_4319_:
{
lean_object* v___x_4325_; 
v___x_4325_ = l_Lean_Linter_EnvLinter_getEnvLinters(v___y_4324_, v___y_4320_, v___y_4323_);
lean_dec(v___y_4324_);
if (lean_obj_tag(v___x_4325_) == 0)
{
lean_object* v_a_4326_; lean_object* v___x_4327_; uint8_t v___x_4328_; 
v_a_4326_ = lean_ctor_get(v___x_4325_, 0);
lean_inc(v_a_4326_);
lean_dec_ref_known(v___x_4325_, 1);
v___x_4327_ = lean_array_get_size(v_a_4326_);
v___x_4328_ = lean_nat_dec_eq(v___x_4327_, v___x_4202_);
if (v___x_4328_ == 0)
{
v___y_4305_ = v___y_4320_;
v___y_4306_ = v___y_4321_;
v___y_4307_ = v___y_4322_;
v___y_4308_ = v_a_4326_;
v___y_4309_ = v___y_4323_;
v___y_4310_ = v___x_4328_;
goto v___jp_4304_;
}
else
{
uint8_t v___x_4329_; uint8_t v___x_4330_; 
v___x_4329_ = 0;
v___x_4330_ = l_Lake_BuiltinLint_instBEqMode_beq(v___y_4322_, v___x_4329_);
if (v___x_4330_ == 0)
{
v___y_4305_ = v___y_4320_;
v___y_4306_ = v___y_4321_;
v___y_4307_ = v___y_4322_;
v___y_4308_ = v_a_4326_;
v___y_4309_ = v___y_4323_;
v___y_4310_ = v___x_4330_;
goto v___jp_4304_;
}
else
{
lean_object* v___x_4331_; lean_object* v___x_4332_; lean_object* v___x_4333_; lean_object* v___x_4334_; lean_object* v___x_4335_; lean_object* v___x_4336_; 
lean_dec(v_a_4326_);
lean_dec(v___y_4323_);
lean_dec_ref(v___y_4321_);
lean_dec_ref(v___y_4320_);
lean_dec(v_sp_4168_);
v___x_4331_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__3));
v___x_4332_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_mod_4170_, v___x_4330_);
v___x_4333_ = lean_string_append(v___x_4331_, v___x_4332_);
lean_dec_ref(v___x_4332_);
v___x_4334_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__1));
v___x_4335_ = lean_string_append(v___x_4333_, v___x_4334_);
v___x_4336_ = l_IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13(v___x_4335_);
if (lean_obj_tag(v___x_4336_) == 0)
{
lean_object* v___x_4337_; 
lean_dec_ref_known(v___x_4336_, 1);
v___x_4337_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__4));
v_a_4221_ = v___x_4337_;
goto v___jp_4220_;
}
else
{
lean_object* v_a_4338_; lean_object* v___x_4340_; uint8_t v_isShared_4341_; uint8_t v_isSharedCheck_4347_; 
lean_dec(v___x_4219_);
v_a_4338_ = lean_ctor_get(v___x_4336_, 0);
v_isSharedCheck_4347_ = !lean_is_exclusive(v___x_4336_);
if (v_isSharedCheck_4347_ == 0)
{
v___x_4340_ = v___x_4336_;
v_isShared_4341_ = v_isSharedCheck_4347_;
goto v_resetjp_4339_;
}
else
{
lean_inc(v_a_4338_);
lean_dec(v___x_4336_);
v___x_4340_ = lean_box(0);
v_isShared_4341_ = v_isSharedCheck_4347_;
goto v_resetjp_4339_;
}
v_resetjp_4339_:
{
lean_object* v___x_4342_; lean_object* v___x_4344_; 
v___x_4342_ = lean_io_error_to_string(v_a_4338_);
if (v_isShared_4341_ == 0)
{
lean_ctor_set_tag(v___x_4340_, 3);
lean_ctor_set(v___x_4340_, 0, v___x_4342_);
v___x_4344_ = v___x_4340_;
goto v_reusejp_4343_;
}
else
{
lean_object* v_reuseFailAlloc_4346_; 
v_reuseFailAlloc_4346_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4346_, 0, v___x_4342_);
v___x_4344_ = v_reuseFailAlloc_4346_;
goto v_reusejp_4343_;
}
v_reusejp_4343_:
{
lean_object* v___x_4345_; 
v___x_4345_ = l_Lean_MessageData_ofFormat(v___x_4344_);
v_msg_4177_ = v___x_4345_;
goto v___jp_4176_;
}
}
}
}
}
}
else
{
lean_object* v_a_4348_; 
lean_dec(v___y_4323_);
lean_dec_ref(v___y_4321_);
lean_dec_ref(v___y_4320_);
lean_dec(v___x_4219_);
lean_dec(v_mod_4170_);
lean_dec(v_sp_4168_);
v_a_4348_ = lean_ctor_get(v___x_4325_, 0);
lean_inc(v_a_4348_);
lean_dec_ref_known(v___x_4325_, 1);
v_a_4182_ = v_a_4348_;
goto v___jp_4181_;
}
}
v___jp_4352_:
{
lean_object* v___x_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; 
v___x_4354_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__5, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__5_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__5);
v___x_4355_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_4355_, 0, v___x_4197_);
lean_ctor_set(v___x_4355_, 1, v___x_4198_);
lean_ctor_set(v___x_4355_, 2, v___x_4199_);
lean_ctor_set(v___x_4355_, 3, v___x_4354_);
lean_ctor_set(v___x_4355_, 4, v___x_4200_);
lean_ctor_set(v___x_4355_, 5, v___x_4201_);
lean_ctor_set(v___x_4355_, 6, v___x_4218_);
lean_ctor_set(v___x_4355_, 7, v___x_4203_);
lean_ctor_set(v___x_4355_, 8, v___x_4200_);
lean_ctor_set(v___x_4355_, 9, v___x_4204_);
lean_ctor_set(v___x_4355_, 10, v___x_4205_);
lean_ctor_set(v___x_4355_, 11, v___x_4350_);
v___x_4356_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_4356_, 0, v___x_4355_);
lean_ctor_set(v___x_4356_, 1, v___x_4202_);
lean_ctor_set(v___x_4356_, 2, v___x_4206_);
lean_ctor_set_uint8(v___x_4356_, sizeof(void*)*3, v___x_4351_);
lean_ctor_set_uint8(v___x_4356_, sizeof(void*)*3 + 1, v___x_4207_);
v___x_4357_ = l_Lean_Linter_EnvLinter_getDeclsInPackage___redArg(v___x_4196_, v___y_4353_);
lean_dec(v___x_4196_);
if (lean_obj_tag(v___x_4357_) == 0)
{
uint8_t v_lintOnly_4358_; 
v_lintOnly_4358_ = lean_ctor_get_uint8(v_args_4166_, sizeof(void*)*4);
if (v_lintOnly_4358_ == 0)
{
lean_object* v_a_4359_; uint8_t v_mode_4360_; 
lean_dec_ref(v_linterOpts_4167_);
v_a_4359_ = lean_ctor_get(v___x_4357_, 0);
lean_inc(v_a_4359_);
lean_dec_ref_known(v___x_4357_, 1);
v_mode_4360_ = lean_ctor_get_uint8(v_args_4166_, sizeof(void*)*4 + 1);
v___y_4320_ = v___x_4356_;
v___y_4321_ = v_a_4359_;
v___y_4322_ = v_mode_4360_;
v___y_4323_ = v___y_4353_;
v___y_4324_ = v___x_4205_;
goto v___jp_4319_;
}
else
{
lean_object* v_a_4361_; lean_object* v___x_4363_; uint8_t v_isShared_4364_; uint8_t v_isSharedCheck_4369_; 
v_a_4361_ = lean_ctor_get(v___x_4357_, 0);
v_isSharedCheck_4369_ = !lean_is_exclusive(v___x_4357_);
if (v_isSharedCheck_4369_ == 0)
{
v___x_4363_ = v___x_4357_;
v_isShared_4364_ = v_isSharedCheck_4369_;
goto v_resetjp_4362_;
}
else
{
lean_inc(v_a_4361_);
lean_dec(v___x_4357_);
v___x_4363_ = lean_box(0);
v_isShared_4364_ = v_isSharedCheck_4369_;
goto v_resetjp_4362_;
}
v_resetjp_4362_:
{
uint8_t v_mode_4365_; lean_object* v___x_4367_; 
v_mode_4365_ = lean_ctor_get_uint8(v_args_4166_, sizeof(void*)*4 + 1);
if (v_isShared_4364_ == 0)
{
lean_ctor_set_tag(v___x_4363_, 1);
lean_ctor_set(v___x_4363_, 0, v_linterOpts_4167_);
v___x_4367_ = v___x_4363_;
goto v_reusejp_4366_;
}
else
{
lean_object* v_reuseFailAlloc_4368_; 
v_reuseFailAlloc_4368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4368_, 0, v_linterOpts_4167_);
v___x_4367_ = v_reuseFailAlloc_4368_;
goto v_reusejp_4366_;
}
v_reusejp_4366_:
{
v___y_4320_ = v___x_4356_;
v___y_4321_ = v_a_4361_;
v___y_4322_ = v_mode_4365_;
v___y_4323_ = v___y_4353_;
v___y_4324_ = v___x_4367_;
goto v___jp_4319_;
}
}
}
}
else
{
lean_object* v_a_4370_; 
lean_dec_ref_known(v___x_4356_, 3);
lean_dec(v___y_4353_);
lean_dec(v___x_4219_);
lean_dec(v_mod_4170_);
lean_dec(v_sp_4168_);
lean_dec_ref(v_linterOpts_4167_);
v_a_4370_ = lean_ctor_get(v___x_4357_, 0);
lean_inc(v_a_4370_);
lean_dec_ref_known(v___x_4357_, 1);
v_a_4182_ = v_a_4370_;
goto v___jp_4181_;
}
}
v___jp_4372_:
{
if (v___y_4373_ == 0)
{
lean_object* v___x_4374_; lean_object* v_env_4375_; lean_object* v_nextMacroScope_4376_; lean_object* v_ngen_4377_; lean_object* v_auxDeclNGen_4378_; lean_object* v_traceState_4379_; lean_object* v_messages_4380_; lean_object* v_infoState_4381_; lean_object* v_snapshotTasks_4382_; lean_object* v___x_4384_; uint8_t v_isShared_4385_; uint8_t v_isSharedCheck_4391_; 
v___x_4374_ = lean_st_ref_take(v___x_4219_);
v_env_4375_ = lean_ctor_get(v___x_4374_, 0);
v_nextMacroScope_4376_ = lean_ctor_get(v___x_4374_, 1);
v_ngen_4377_ = lean_ctor_get(v___x_4374_, 2);
v_auxDeclNGen_4378_ = lean_ctor_get(v___x_4374_, 3);
v_traceState_4379_ = lean_ctor_get(v___x_4374_, 4);
v_messages_4380_ = lean_ctor_get(v___x_4374_, 6);
v_infoState_4381_ = lean_ctor_get(v___x_4374_, 7);
v_snapshotTasks_4382_ = lean_ctor_get(v___x_4374_, 8);
v_isSharedCheck_4391_ = !lean_is_exclusive(v___x_4374_);
if (v_isSharedCheck_4391_ == 0)
{
lean_object* v_unused_4392_; 
v_unused_4392_ = lean_ctor_get(v___x_4374_, 5);
lean_dec(v_unused_4392_);
v___x_4384_ = v___x_4374_;
v_isShared_4385_ = v_isSharedCheck_4391_;
goto v_resetjp_4383_;
}
else
{
lean_inc(v_snapshotTasks_4382_);
lean_inc(v_infoState_4381_);
lean_inc(v_messages_4380_);
lean_inc(v_traceState_4379_);
lean_inc(v_auxDeclNGen_4378_);
lean_inc(v_ngen_4377_);
lean_inc(v_nextMacroScope_4376_);
lean_inc(v_env_4375_);
lean_dec(v___x_4374_);
v___x_4384_ = lean_box(0);
v_isShared_4385_ = v_isSharedCheck_4391_;
goto v_resetjp_4383_;
}
v_resetjp_4383_:
{
lean_object* v___x_4386_; lean_object* v___x_4388_; 
v___x_4386_ = l_Lean_Kernel_enableDiag(v_env_4375_, v___x_4351_);
if (v_isShared_4385_ == 0)
{
lean_ctor_set(v___x_4384_, 5, v___x_4212_);
lean_ctor_set(v___x_4384_, 0, v___x_4386_);
v___x_4388_ = v___x_4384_;
goto v_reusejp_4387_;
}
else
{
lean_object* v_reuseFailAlloc_4390_; 
v_reuseFailAlloc_4390_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4390_, 0, v___x_4386_);
lean_ctor_set(v_reuseFailAlloc_4390_, 1, v_nextMacroScope_4376_);
lean_ctor_set(v_reuseFailAlloc_4390_, 2, v_ngen_4377_);
lean_ctor_set(v_reuseFailAlloc_4390_, 3, v_auxDeclNGen_4378_);
lean_ctor_set(v_reuseFailAlloc_4390_, 4, v_traceState_4379_);
lean_ctor_set(v_reuseFailAlloc_4390_, 5, v___x_4212_);
lean_ctor_set(v_reuseFailAlloc_4390_, 6, v_messages_4380_);
lean_ctor_set(v_reuseFailAlloc_4390_, 7, v_infoState_4381_);
lean_ctor_set(v_reuseFailAlloc_4390_, 8, v_snapshotTasks_4382_);
v___x_4388_ = v_reuseFailAlloc_4390_;
goto v_reusejp_4387_;
}
v_reusejp_4387_:
{
lean_object* v___x_4389_; 
v___x_4389_ = lean_st_ref_put(v___x_4219_, v___x_4388_);
lean_inc(v___x_4219_);
v___y_4353_ = v___x_4219_;
goto v___jp_4352_;
}
}
}
else
{
lean_inc(v___x_4219_);
v___y_4353_ = v___x_4219_;
goto v___jp_4352_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___boxed(lean_object* v_args_4395_, lean_object* v_linterOpts_4396_, lean_object* v_sp_4397_, lean_object* v_env_4398_, lean_object* v_mod_4399_, lean_object* v___y_4400_){
_start:
{
lean_object* v_res_4401_; 
v_res_4401_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters(v_args_4395_, v_linterOpts_4396_, v_sp_4397_, v_env_4398_, v_mod_4399_);
lean_dec_ref(v_args_4395_);
return v_res_4401_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5(lean_object* v_00_u03b4_4402_, lean_object* v_t_4403_, lean_object* v_k_4404_, lean_object* v_fallback_4405_){
_start:
{
lean_object* v___x_4406_; 
v___x_4406_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5___redArg(v_t_4403_, v_k_4404_, v_fallback_4405_);
return v___x_4406_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5___boxed(lean_object* v_00_u03b4_4407_, lean_object* v_t_4408_, lean_object* v_k_4409_, lean_object* v_fallback_4410_){
_start:
{
lean_object* v_res_4411_; 
v_res_4411_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5(v_00_u03b4_4407_, v_t_4408_, v_k_4409_, v_fallback_4410_);
lean_dec(v_fallback_4410_);
lean_dec_ref(v_k_4409_);
lean_dec(v_t_4408_);
return v_res_4411_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__6(lean_object* v_00_u03b2_4412_, lean_object* v_k_4413_, lean_object* v_v_4414_, lean_object* v_t_4415_, lean_object* v_hl_4416_){
_start:
{
lean_object* v___x_4417_; 
v___x_4417_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__6___redArg(v_k_4413_, v_v_4414_, v_t_4415_);
return v___x_4417_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8(lean_object* v_fst_4418_, lean_object* v_init_4419_, lean_object* v_x_4420_, lean_object* v___y_4421_, lean_object* v___y_4422_){
_start:
{
lean_object* v___x_4424_; 
v___x_4424_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___redArg(v_fst_4418_, v_init_4419_, v_x_4420_);
return v___x_4424_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___boxed(lean_object* v_fst_4425_, lean_object* v_init_4426_, lean_object* v_x_4427_, lean_object* v___y_4428_, lean_object* v___y_4429_, lean_object* v___y_4430_){
_start:
{
lean_object* v_res_4431_; 
v_res_4431_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8(v_fst_4425_, v_init_4426_, v_x_4427_, v___y_4428_, v___y_4429_);
lean_dec(v___y_4429_);
lean_dec_ref(v___y_4428_);
return v_res_4431_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_4432_, lean_object* v_constName_4433_, lean_object* v___y_4434_, lean_object* v___y_4435_){
_start:
{
lean_object* v___x_4437_; 
v___x_4437_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1___redArg(v_constName_4433_, v___y_4434_, v___y_4435_);
return v___x_4437_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_4438_, lean_object* v_constName_4439_, lean_object* v___y_4440_, lean_object* v___y_4441_, lean_object* v___y_4442_){
_start:
{
lean_object* v_res_4443_; 
v_res_4443_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1(v_00_u03b1_4438_, v_constName_4439_, v___y_4440_, v___y_4441_);
lean_dec(v___y_4441_);
lean_dec_ref(v___y_4440_);
return v_res_4443_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12(lean_object* v_00_u03b1_4444_, lean_object* v_ref_4445_, lean_object* v_constName_4446_, lean_object* v___y_4447_, lean_object* v___y_4448_){
_start:
{
lean_object* v___x_4450_; 
v___x_4450_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg(v_ref_4445_, v_constName_4446_, v___y_4447_, v___y_4448_);
return v___x_4450_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___boxed(lean_object* v_00_u03b1_4451_, lean_object* v_ref_4452_, lean_object* v_constName_4453_, lean_object* v___y_4454_, lean_object* v___y_4455_, lean_object* v___y_4456_){
_start:
{
lean_object* v_res_4457_; 
v_res_4457_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12(v_00_u03b1_4451_, v_ref_4452_, v_constName_4453_, v___y_4454_, v___y_4455_);
lean_dec(v___y_4455_);
lean_dec_ref(v___y_4454_);
lean_dec(v_ref_4452_);
return v_res_4457_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13(lean_object* v_00_u03b1_4458_, lean_object* v_ref_4459_, lean_object* v_msg_4460_, lean_object* v_declHint_4461_, lean_object* v___y_4462_, lean_object* v___y_4463_){
_start:
{
lean_object* v___x_4465_; 
v___x_4465_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13___redArg(v_ref_4459_, v_msg_4460_, v_declHint_4461_, v___y_4462_, v___y_4463_);
return v___x_4465_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13___boxed(lean_object* v_00_u03b1_4466_, lean_object* v_ref_4467_, lean_object* v_msg_4468_, lean_object* v_declHint_4469_, lean_object* v___y_4470_, lean_object* v___y_4471_, lean_object* v___y_4472_){
_start:
{
lean_object* v_res_4473_; 
v_res_4473_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13(v_00_u03b1_4466_, v_ref_4467_, v_msg_4468_, v_declHint_4469_, v___y_4470_, v___y_4471_);
lean_dec(v___y_4471_);
lean_dec_ref(v___y_4470_);
lean_dec(v_ref_4467_);
return v_res_4473_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15(lean_object* v_msg_4474_, lean_object* v_declHint_4475_, lean_object* v___y_4476_, lean_object* v___y_4477_){
_start:
{
lean_object* v___x_4479_; 
v___x_4479_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg(v_msg_4474_, v_declHint_4475_, v___y_4477_);
return v___x_4479_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___boxed(lean_object* v_msg_4480_, lean_object* v_declHint_4481_, lean_object* v___y_4482_, lean_object* v___y_4483_, lean_object* v___y_4484_){
_start:
{
lean_object* v_res_4485_; 
v_res_4485_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15(v_msg_4480_, v_declHint_4481_, v___y_4482_, v___y_4483_);
lean_dec(v___y_4483_);
lean_dec_ref(v___y_4482_);
return v_res_4485_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15(lean_object* v_00_u03b1_4486_, lean_object* v_ref_4487_, lean_object* v_msg_4488_, lean_object* v___y_4489_, lean_object* v___y_4490_){
_start:
{
lean_object* v___x_4492_; 
v___x_4492_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15___redArg(v_ref_4487_, v_msg_4488_, v___y_4489_, v___y_4490_);
return v___x_4492_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15___boxed(lean_object* v_00_u03b1_4493_, lean_object* v_ref_4494_, lean_object* v_msg_4495_, lean_object* v___y_4496_, lean_object* v___y_4497_, lean_object* v___y_4498_){
_start:
{
lean_object* v_res_4499_; 
v_res_4499_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15(v_00_u03b1_4493_, v_ref_4494_, v_msg_4495_, v___y_4496_, v___y_4497_);
lean_dec(v___y_4497_);
lean_dec_ref(v___y_4496_);
lean_dec(v_ref_4494_);
return v_res_4499_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17(lean_object* v_00_u03b1_4500_, lean_object* v_msg_4501_, lean_object* v___y_4502_, lean_object* v___y_4503_){
_start:
{
lean_object* v___x_4505_; 
v___x_4505_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17___redArg(v_msg_4501_, v___y_4502_, v___y_4503_);
return v___x_4505_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17___boxed(lean_object* v_00_u03b1_4506_, lean_object* v_msg_4507_, lean_object* v___y_4508_, lean_object* v___y_4509_, lean_object* v___y_4510_){
_start:
{
lean_object* v_res_4511_; 
v_res_4511_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17(v_00_u03b1_4506_, v_msg_4507_, v___y_4508_, v___y_4509_);
lean_dec(v___y_4509_);
lean_dec_ref(v___y_4508_);
return v_res_4511_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__0(lean_object* v_s_4512_){
_start:
{
lean_object* v___x_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; uint32_t v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; 
v___x_4514_ = l_Std_Format_defWidth;
v___x_4515_ = lean_unsigned_to_nat(0u);
v___x_4516_ = l_Std_Format_pretty(v_s_4512_, v___x_4514_, v___x_4515_, v___x_4515_);
v___x_4517_ = 10;
v___x_4518_ = lean_string_push(v___x_4516_, v___x_4517_);
v___x_4519_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17_spec__29(v___x_4518_);
return v___x_4519_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__0___boxed(lean_object* v_s_4520_, lean_object* v___y_4521_){
_start:
{
lean_object* v_res_4522_; 
v_res_4522_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__0(v_s_4520_);
return v_res_4522_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1___redArg(lean_object* v_as_4523_, size_t v_sz_4524_, size_t v_i_4525_, lean_object* v_b_4526_, lean_object* v___y_4527_){
_start:
{
uint8_t v___x_4529_; 
v___x_4529_ = lean_usize_dec_lt(v_i_4525_, v_sz_4524_);
if (v___x_4529_ == 0)
{
lean_object* v___x_4530_; 
v___x_4530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4530_, 0, v_b_4526_);
return v___x_4530_;
}
else
{
lean_object* v___x_4531_; lean_object* v_a_4532_; lean_object* v___x_4533_; lean_object* v___x_4534_; lean_object* v_ref_4535_; lean_object* v___x_4536_; 
v___x_4531_ = lean_box(0);
v_a_4532_ = lean_array_uget_borrowed(v_as_4523_, v_i_4525_);
v___x_4533_ = lean_box(0);
lean_inc(v_a_4532_);
v___x_4534_ = l_Lean_MessageData_format(v_a_4532_, v___x_4533_);
v_ref_4535_ = lean_ctor_get(v___y_4527_, 2);
v___x_4536_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__0(v___x_4534_);
if (lean_obj_tag(v___x_4536_) == 0)
{
size_t v___x_4537_; size_t v___x_4538_; 
lean_dec_ref_known(v___x_4536_, 1);
v___x_4537_ = ((size_t)1ULL);
v___x_4538_ = lean_usize_add(v_i_4525_, v___x_4537_);
v_i_4525_ = v___x_4538_;
v_b_4526_ = v___x_4531_;
goto _start;
}
else
{
lean_object* v_a_4540_; lean_object* v___x_4542_; uint8_t v_isShared_4543_; uint8_t v_isSharedCheck_4551_; 
v_a_4540_ = lean_ctor_get(v___x_4536_, 0);
v_isSharedCheck_4551_ = !lean_is_exclusive(v___x_4536_);
if (v_isSharedCheck_4551_ == 0)
{
v___x_4542_ = v___x_4536_;
v_isShared_4543_ = v_isSharedCheck_4551_;
goto v_resetjp_4541_;
}
else
{
lean_inc(v_a_4540_);
lean_dec(v___x_4536_);
v___x_4542_ = lean_box(0);
v_isShared_4543_ = v_isSharedCheck_4551_;
goto v_resetjp_4541_;
}
v_resetjp_4541_:
{
lean_object* v___x_4544_; lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4549_; 
v___x_4544_ = lean_io_error_to_string(v_a_4540_);
v___x_4545_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4545_, 0, v___x_4544_);
v___x_4546_ = l_Lean_MessageData_ofFormat(v___x_4545_);
lean_inc(v_ref_4535_);
v___x_4547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4547_, 0, v_ref_4535_);
lean_ctor_set(v___x_4547_, 1, v___x_4546_);
if (v_isShared_4543_ == 0)
{
lean_ctor_set(v___x_4542_, 0, v___x_4547_);
v___x_4549_ = v___x_4542_;
goto v_reusejp_4548_;
}
else
{
lean_object* v_reuseFailAlloc_4550_; 
v_reuseFailAlloc_4550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4550_, 0, v___x_4547_);
v___x_4549_ = v_reuseFailAlloc_4550_;
goto v_reusejp_4548_;
}
v_reusejp_4548_:
{
return v___x_4549_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1___redArg___boxed(lean_object* v_as_4552_, lean_object* v_sz_4553_, lean_object* v_i_4554_, lean_object* v_b_4555_, lean_object* v___y_4556_, lean_object* v___y_4557_){
_start:
{
size_t v_sz_boxed_4558_; size_t v_i_boxed_4559_; lean_object* v_res_4560_; 
v_sz_boxed_4558_ = lean_unbox_usize(v_sz_4553_);
lean_dec(v_sz_4553_);
v_i_boxed_4559_ = lean_unbox_usize(v_i_4554_);
lean_dec(v_i_4554_);
v_res_4560_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1___redArg(v_as_4552_, v_sz_boxed_4558_, v_i_boxed_4559_, v_b_4555_, v___y_4556_);
lean_dec_ref(v___y_4556_);
lean_dec_ref(v_as_4552_);
return v_res_4560_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks___lam__0(lean_object* v_errors_4561_, lean_object* v_entries_4562_, lean_object* v_____r_4563_, uint8_t v_anyFailed_4564_, lean_object* v___y_4565_, lean_object* v___y_4566_){
_start:
{
lean_object* v___x_4568_; size_t v_sz_4569_; size_t v___x_4570_; lean_object* v___x_4571_; 
v___x_4568_ = lean_box(0);
v_sz_4569_ = lean_array_size(v_errors_4561_);
v___x_4570_ = ((size_t)0ULL);
v___x_4571_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1___redArg(v_errors_4561_, v_sz_4569_, v___x_4570_, v___x_4568_, v___y_4565_);
if (lean_obj_tag(v___x_4571_) == 0)
{
lean_object* v___x_4573_; uint8_t v_isShared_4574_; uint8_t v_isSharedCheck_4580_; 
v_isSharedCheck_4580_ = !lean_is_exclusive(v___x_4571_);
if (v_isSharedCheck_4580_ == 0)
{
lean_object* v_unused_4581_; 
v_unused_4581_ = lean_ctor_get(v___x_4571_, 0);
lean_dec(v_unused_4581_);
v___x_4573_ = v___x_4571_;
v_isShared_4574_ = v_isSharedCheck_4580_;
goto v_resetjp_4572_;
}
else
{
lean_dec(v___x_4571_);
v___x_4573_ = lean_box(0);
v_isShared_4574_ = v_isSharedCheck_4580_;
goto v_resetjp_4572_;
}
v_resetjp_4572_:
{
lean_object* v___x_4575_; lean_object* v___x_4576_; lean_object* v___x_4578_; 
v___x_4575_ = lean_box(v_anyFailed_4564_);
v___x_4576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4576_, 0, v_entries_4562_);
lean_ctor_set(v___x_4576_, 1, v___x_4575_);
if (v_isShared_4574_ == 0)
{
lean_ctor_set(v___x_4573_, 0, v___x_4576_);
v___x_4578_ = v___x_4573_;
goto v_reusejp_4577_;
}
else
{
lean_object* v_reuseFailAlloc_4579_; 
v_reuseFailAlloc_4579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4579_, 0, v___x_4576_);
v___x_4578_ = v_reuseFailAlloc_4579_;
goto v_reusejp_4577_;
}
v_reusejp_4577_:
{
return v___x_4578_;
}
}
}
else
{
lean_object* v_a_4582_; lean_object* v___x_4584_; uint8_t v_isShared_4585_; uint8_t v_isSharedCheck_4589_; 
lean_dec_ref(v_entries_4562_);
v_a_4582_ = lean_ctor_get(v___x_4571_, 0);
v_isSharedCheck_4589_ = !lean_is_exclusive(v___x_4571_);
if (v_isSharedCheck_4589_ == 0)
{
v___x_4584_ = v___x_4571_;
v_isShared_4585_ = v_isSharedCheck_4589_;
goto v_resetjp_4583_;
}
else
{
lean_inc(v_a_4582_);
lean_dec(v___x_4571_);
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
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks___lam__0___boxed(lean_object* v_errors_4590_, lean_object* v_entries_4591_, lean_object* v_____r_4592_, lean_object* v_anyFailed_4593_, lean_object* v___y_4594_, lean_object* v___y_4595_, lean_object* v___y_4596_){
_start:
{
uint8_t v_anyFailed_boxed_4597_; lean_object* v_res_4598_; 
v_anyFailed_boxed_4597_ = lean_unbox(v_anyFailed_4593_);
v_res_4598_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks___lam__0(v_errors_4590_, v_entries_4591_, v_____r_4592_, v_anyFailed_boxed_4597_, v___y_4594_, v___y_4595_);
lean_dec(v___y_4595_);
lean_dec_ref(v___y_4594_);
lean_dec_ref(v_errors_4590_);
return v_res_4598_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks(lean_object* v_sp_4599_, lean_object* v_env_4600_, lean_object* v_mod_4601_){
_start:
{
lean_object* v_a_4604_; lean_object* v_a_4608_; uint8_t v_anyFailed_4625_; lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; lean_object* v___x_4634_; lean_object* v___x_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; lean_object* v___x_4640_; lean_object* v___x_4641_; lean_object* v___x_4642_; lean_object* v___x_4643_; uint8_t v___x_4644_; lean_object* v___x_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; lean_object* v___x_4648_; lean_object* v___x_4649_; lean_object* v___y_4651_; lean_object* v___x_4666_; lean_object* v___x_4667_; uint8_t v___x_4668_; lean_object* v___y_4670_; lean_object* v___x_4689_; uint8_t v___y_4691_; lean_object* v_env_4711_; uint8_t v___x_4712_; 
v_anyFailed_4625_ = 0;
v___x_4626_ = ((lean_object*)(l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__0));
v___x_4627_ = l_Lean_instInhabitedFileMap_default;
v___x_4628_ = l_Lean_Options_empty;
v___x_4629_ = lean_box(0);
v___x_4630_ = lean_box(0);
v___x_4631_ = lean_unsigned_to_nat(0u);
v___x_4632_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5);
v___x_4633_ = l_Lean_firstFrontendMacroScope;
v___x_4634_ = lean_box(0);
v___x_4635_ = lean_box(0);
v___x_4636_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6);
v___x_4637_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__9));
v___x_4638_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__10));
v___x_4639_ = lean_unsigned_to_nat(32u);
v___x_4640_ = lean_mk_empty_array_with_capacity(v___x_4639_);
lean_dec_ref(v___x_4640_);
v___x_4641_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13);
v___x_4642_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16);
v___x_4643_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17);
v___x_4644_ = 1;
v___x_4645_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18);
v___x_4646_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__19));
v___x_4647_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_4647_, 0, v_env_4600_);
lean_ctor_set(v___x_4647_, 1, v___x_4636_);
lean_ctor_set(v___x_4647_, 2, v___x_4637_);
lean_ctor_set(v___x_4647_, 3, v___x_4638_);
lean_ctor_set(v___x_4647_, 4, v___x_4641_);
lean_ctor_set(v___x_4647_, 5, v___x_4642_);
lean_ctor_set(v___x_4647_, 6, v___x_4643_);
lean_ctor_set(v___x_4647_, 7, v___x_4645_);
lean_ctor_set(v___x_4647_, 8, v___x_4646_);
v___x_4648_ = lean_io_get_num_heartbeats();
v___x_4649_ = lean_st_mk_ref(v___x_4647_);
v___x_4666_ = l_Lean_inheritedTraceOptions;
v___x_4667_ = lean_st_ref_get(v___x_4666_);
v___x_4668_ = lean_uint8_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20);
v___x_4689_ = lean_st_ref_get(v___x_4649_);
v_env_4711_ = lean_ctor_get(v___x_4689_, 0);
lean_inc_ref(v_env_4711_);
lean_dec(v___x_4689_);
v___x_4712_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_4711_);
lean_dec_ref(v_env_4711_);
if (v___x_4668_ == 0)
{
if (v___x_4712_ == 0)
{
lean_inc(v___x_4649_);
v___y_4670_ = v___x_4649_;
goto v___jp_4669_;
}
else
{
v___y_4691_ = v___x_4668_;
goto v___jp_4690_;
}
}
else
{
v___y_4691_ = v___x_4712_;
goto v___jp_4690_;
}
v___jp_4603_:
{
lean_object* v___x_4605_; lean_object* v___x_4606_; 
v___x_4605_ = lean_mk_io_user_error(v_a_4604_);
v___x_4606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4606_, 0, v___x_4605_);
return v___x_4606_;
}
v___jp_4607_:
{
if (lean_obj_tag(v_a_4608_) == 0)
{
lean_object* v_msg_4609_; lean_object* v___x_4610_; lean_object* v___x_4611_; lean_object* v___x_4612_; 
v_msg_4609_ = lean_ctor_get(v_a_4608_, 1);
lean_inc_ref(v_msg_4609_);
lean_dec_ref_known(v_a_4608_, 2);
v___x_4610_ = l_Lean_MessageData_toString(v_msg_4609_);
v___x_4611_ = lean_mk_io_user_error(v___x_4610_);
v___x_4612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4612_, 0, v___x_4611_);
return v___x_4612_;
}
else
{
lean_object* v_id_4613_; lean_object* v___x_4614_; 
v_id_4613_ = lean_ctor_get(v_a_4608_, 0);
lean_inc(v_id_4613_);
lean_dec_ref_known(v_a_4608_, 2);
v___x_4614_ = l_Lean_InternalExceptionId_getName(v_id_4613_);
if (lean_obj_tag(v___x_4614_) == 0)
{
lean_object* v_a_4615_; lean_object* v___x_4616_; uint8_t v___x_4617_; lean_object* v___x_4618_; lean_object* v___x_4619_; 
lean_dec(v_id_4613_);
v_a_4615_ = lean_ctor_get(v___x_4614_, 0);
lean_inc(v_a_4615_);
lean_dec_ref_known(v___x_4614_, 1);
v___x_4616_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__0));
v___x_4617_ = 1;
v___x_4618_ = l_Lean_Name_toString(v_a_4615_, v___x_4617_);
v___x_4619_ = lean_string_append(v___x_4616_, v___x_4618_);
lean_dec_ref(v___x_4618_);
v_a_4604_ = v___x_4619_;
goto v___jp_4603_;
}
else
{
lean_object* v___x_4620_; lean_object* v___x_4621_; lean_object* v___x_4622_; lean_object* v___x_4623_; lean_object* v___x_4624_; 
lean_dec_ref_known(v___x_4614_, 1);
v___x_4620_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__1));
v___x_4621_ = l_Nat_reprFast(v_id_4613_);
v___x_4622_ = lean_string_append(v___x_4620_, v___x_4621_);
lean_dec_ref(v___x_4621_);
v___x_4623_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__2));
v___x_4624_ = lean_string_append(v___x_4622_, v___x_4623_);
v_a_4604_ = v___x_4624_;
goto v___jp_4603_;
}
}
}
v___jp_4650_:
{
if (lean_obj_tag(v___y_4651_) == 0)
{
lean_object* v_a_4652_; lean_object* v___x_4654_; uint8_t v_isShared_4655_; uint8_t v_isSharedCheck_4664_; 
v_a_4652_ = lean_ctor_get(v___y_4651_, 0);
v_isSharedCheck_4664_ = !lean_is_exclusive(v___y_4651_);
if (v_isSharedCheck_4664_ == 0)
{
v___x_4654_ = v___y_4651_;
v_isShared_4655_ = v_isSharedCheck_4664_;
goto v_resetjp_4653_;
}
else
{
lean_inc(v_a_4652_);
lean_dec(v___y_4651_);
v___x_4654_ = lean_box(0);
v_isShared_4655_ = v_isSharedCheck_4664_;
goto v_resetjp_4653_;
}
v_resetjp_4653_:
{
lean_object* v___x_4656_; lean_object* v_fst_4657_; lean_object* v_snd_4658_; lean_object* v___x_4659_; uint8_t v___x_4660_; lean_object* v___x_4662_; 
v___x_4656_ = lean_st_ref_get(v___x_4649_);
lean_dec(v___x_4649_);
lean_dec(v___x_4656_);
v_fst_4657_ = lean_ctor_get(v_a_4652_, 0);
lean_inc(v_fst_4657_);
v_snd_4658_ = lean_ctor_get(v_a_4652_, 1);
lean_inc(v_snd_4658_);
lean_dec(v_a_4652_);
v___x_4659_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4659_, 0, v_fst_4657_);
v___x_4660_ = lean_unbox(v_snd_4658_);
lean_dec(v_snd_4658_);
lean_ctor_set_uint8(v___x_4659_, sizeof(void*)*1, v___x_4660_);
if (v_isShared_4655_ == 0)
{
lean_ctor_set(v___x_4654_, 0, v___x_4659_);
v___x_4662_ = v___x_4654_;
goto v_reusejp_4661_;
}
else
{
lean_object* v_reuseFailAlloc_4663_; 
v_reuseFailAlloc_4663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4663_, 0, v___x_4659_);
v___x_4662_ = v_reuseFailAlloc_4663_;
goto v_reusejp_4661_;
}
v_reusejp_4661_:
{
return v___x_4662_;
}
}
}
else
{
lean_object* v_a_4665_; 
lean_dec(v___x_4649_);
v_a_4665_ = lean_ctor_get(v___y_4651_, 0);
lean_inc(v_a_4665_);
lean_dec_ref_known(v___y_4651_, 1);
v_a_4608_ = v_a_4665_;
goto v___jp_4607_;
}
}
v___jp_4669_:
{
lean_object* v___x_4671_; lean_object* v___x_4672_; lean_object* v___x_4673_; lean_object* v___x_4674_; 
v___x_4671_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__5, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__5_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__5);
v___x_4672_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_4672_, 0, v___x_4626_);
lean_ctor_set(v___x_4672_, 1, v___x_4627_);
lean_ctor_set(v___x_4672_, 2, v___x_4628_);
lean_ctor_set(v___x_4672_, 3, v___x_4671_);
lean_ctor_set(v___x_4672_, 4, v___x_4629_);
lean_ctor_set(v___x_4672_, 5, v___x_4630_);
lean_ctor_set(v___x_4672_, 6, v___x_4648_);
lean_ctor_set(v___x_4672_, 7, v___x_4632_);
lean_ctor_set(v___x_4672_, 8, v___x_4629_);
lean_ctor_set(v___x_4672_, 9, v___x_4633_);
lean_ctor_set(v___x_4672_, 10, v___x_4634_);
lean_ctor_set(v___x_4672_, 11, v___x_4667_);
v___x_4673_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_4673_, 0, v___x_4672_);
lean_ctor_set(v___x_4673_, 1, v___x_4631_);
lean_ctor_set(v___x_4673_, 2, v___x_4635_);
lean_ctor_set_uint8(v___x_4673_, sizeof(void*)*3, v___x_4668_);
lean_ctor_set_uint8(v___x_4673_, sizeof(void*)*3 + 1, v_anyFailed_4625_);
v___x_4674_ = l_Lean_Linter_CodeQuality_getPackageChecks(v___x_4673_, v___y_4670_);
if (lean_obj_tag(v___x_4674_) == 0)
{
lean_object* v_a_4675_; lean_object* v___x_4676_; lean_object* v___x_4677_; 
v_a_4675_ = lean_ctor_get(v___x_4674_, 0);
lean_inc(v_a_4675_);
lean_dec_ref_known(v___x_4674_, 1);
v___x_4676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4676_, 0, v_sp_4599_);
lean_ctor_set(v___x_4676_, 1, v_mod_4601_);
v___x_4677_ = l_Lean_Linter_CodeQuality_runPackageChecks(v_a_4675_, v___x_4676_, v___x_4673_, v___y_4670_);
if (lean_obj_tag(v___x_4677_) == 0)
{
lean_object* v_a_4678_; lean_object* v_entries_4679_; lean_object* v_errors_4680_; lean_object* v___x_4681_; uint8_t v___x_4682_; 
v_a_4678_ = lean_ctor_get(v___x_4677_, 0);
lean_inc(v_a_4678_);
lean_dec_ref_known(v___x_4677_, 1);
v_entries_4679_ = lean_ctor_get(v_a_4678_, 0);
lean_inc_ref(v_entries_4679_);
v_errors_4680_ = lean_ctor_get(v_a_4678_, 1);
lean_inc_ref(v_errors_4680_);
lean_dec(v_a_4678_);
v___x_4681_ = lean_array_get_size(v_errors_4680_);
v___x_4682_ = lean_nat_dec_eq(v___x_4681_, v___x_4631_);
if (v___x_4682_ == 0)
{
lean_object* v___x_4683_; lean_object* v___x_4684_; 
v___x_4683_ = lean_box(0);
v___x_4684_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks___lam__0(v_errors_4680_, v_entries_4679_, v___x_4683_, v___x_4644_, v___x_4673_, v___y_4670_);
lean_dec(v___y_4670_);
lean_dec_ref_known(v___x_4673_, 3);
lean_dec_ref(v_errors_4680_);
v___y_4651_ = v___x_4684_;
goto v___jp_4650_;
}
else
{
lean_object* v___x_4685_; lean_object* v___x_4686_; 
v___x_4685_ = lean_box(0);
v___x_4686_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks___lam__0(v_errors_4680_, v_entries_4679_, v___x_4685_, v_anyFailed_4625_, v___x_4673_, v___y_4670_);
lean_dec(v___y_4670_);
lean_dec_ref_known(v___x_4673_, 3);
lean_dec_ref(v_errors_4680_);
v___y_4651_ = v___x_4686_;
goto v___jp_4650_;
}
}
else
{
lean_object* v_a_4687_; 
lean_dec_ref_known(v___x_4673_, 3);
lean_dec(v___y_4670_);
lean_dec(v___x_4649_);
v_a_4687_ = lean_ctor_get(v___x_4677_, 0);
lean_inc(v_a_4687_);
lean_dec_ref_known(v___x_4677_, 1);
v_a_4608_ = v_a_4687_;
goto v___jp_4607_;
}
}
else
{
lean_object* v_a_4688_; 
lean_dec_ref_known(v___x_4673_, 3);
lean_dec(v___y_4670_);
lean_dec(v___x_4649_);
lean_dec(v_mod_4601_);
lean_dec(v_sp_4599_);
v_a_4688_ = lean_ctor_get(v___x_4674_, 0);
lean_inc(v_a_4688_);
lean_dec_ref_known(v___x_4674_, 1);
v_a_4608_ = v_a_4688_;
goto v___jp_4607_;
}
}
v___jp_4690_:
{
if (v___y_4691_ == 0)
{
lean_object* v___x_4692_; lean_object* v_env_4693_; lean_object* v_nextMacroScope_4694_; lean_object* v_ngen_4695_; lean_object* v_auxDeclNGen_4696_; lean_object* v_traceState_4697_; lean_object* v_messages_4698_; lean_object* v_infoState_4699_; lean_object* v_snapshotTasks_4700_; lean_object* v___x_4702_; uint8_t v_isShared_4703_; uint8_t v_isSharedCheck_4709_; 
v___x_4692_ = lean_st_ref_take(v___x_4649_);
v_env_4693_ = lean_ctor_get(v___x_4692_, 0);
v_nextMacroScope_4694_ = lean_ctor_get(v___x_4692_, 1);
v_ngen_4695_ = lean_ctor_get(v___x_4692_, 2);
v_auxDeclNGen_4696_ = lean_ctor_get(v___x_4692_, 3);
v_traceState_4697_ = lean_ctor_get(v___x_4692_, 4);
v_messages_4698_ = lean_ctor_get(v___x_4692_, 6);
v_infoState_4699_ = lean_ctor_get(v___x_4692_, 7);
v_snapshotTasks_4700_ = lean_ctor_get(v___x_4692_, 8);
v_isSharedCheck_4709_ = !lean_is_exclusive(v___x_4692_);
if (v_isSharedCheck_4709_ == 0)
{
lean_object* v_unused_4710_; 
v_unused_4710_ = lean_ctor_get(v___x_4692_, 5);
lean_dec(v_unused_4710_);
v___x_4702_ = v___x_4692_;
v_isShared_4703_ = v_isSharedCheck_4709_;
goto v_resetjp_4701_;
}
else
{
lean_inc(v_snapshotTasks_4700_);
lean_inc(v_infoState_4699_);
lean_inc(v_messages_4698_);
lean_inc(v_traceState_4697_);
lean_inc(v_auxDeclNGen_4696_);
lean_inc(v_ngen_4695_);
lean_inc(v_nextMacroScope_4694_);
lean_inc(v_env_4693_);
lean_dec(v___x_4692_);
v___x_4702_ = lean_box(0);
v_isShared_4703_ = v_isSharedCheck_4709_;
goto v_resetjp_4701_;
}
v_resetjp_4701_:
{
lean_object* v___x_4704_; lean_object* v___x_4706_; 
v___x_4704_ = l_Lean_Kernel_enableDiag(v_env_4693_, v___x_4668_);
if (v_isShared_4703_ == 0)
{
lean_ctor_set(v___x_4702_, 5, v___x_4642_);
lean_ctor_set(v___x_4702_, 0, v___x_4704_);
v___x_4706_ = v___x_4702_;
goto v_reusejp_4705_;
}
else
{
lean_object* v_reuseFailAlloc_4708_; 
v_reuseFailAlloc_4708_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4708_, 0, v___x_4704_);
lean_ctor_set(v_reuseFailAlloc_4708_, 1, v_nextMacroScope_4694_);
lean_ctor_set(v_reuseFailAlloc_4708_, 2, v_ngen_4695_);
lean_ctor_set(v_reuseFailAlloc_4708_, 3, v_auxDeclNGen_4696_);
lean_ctor_set(v_reuseFailAlloc_4708_, 4, v_traceState_4697_);
lean_ctor_set(v_reuseFailAlloc_4708_, 5, v___x_4642_);
lean_ctor_set(v_reuseFailAlloc_4708_, 6, v_messages_4698_);
lean_ctor_set(v_reuseFailAlloc_4708_, 7, v_infoState_4699_);
lean_ctor_set(v_reuseFailAlloc_4708_, 8, v_snapshotTasks_4700_);
v___x_4706_ = v_reuseFailAlloc_4708_;
goto v_reusejp_4705_;
}
v_reusejp_4705_:
{
lean_object* v___x_4707_; 
v___x_4707_ = lean_st_ref_put(v___x_4649_, v___x_4706_);
lean_inc(v___x_4649_);
v___y_4670_ = v___x_4649_;
goto v___jp_4669_;
}
}
}
else
{
lean_inc(v___x_4649_);
v___y_4670_ = v___x_4649_;
goto v___jp_4669_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks___boxed(lean_object* v_sp_4713_, lean_object* v_env_4714_, lean_object* v_mod_4715_, lean_object* v___y_4716_){
_start:
{
lean_object* v_res_4717_; 
v_res_4717_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks(v_sp_4713_, v_env_4714_, v_mod_4715_);
return v_res_4717_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1(lean_object* v_as_4718_, size_t v_sz_4719_, size_t v_i_4720_, lean_object* v_b_4721_, lean_object* v___y_4722_, lean_object* v___y_4723_){
_start:
{
lean_object* v___x_4725_; 
v___x_4725_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1___redArg(v_as_4718_, v_sz_4719_, v_i_4720_, v_b_4721_, v___y_4722_);
return v___x_4725_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1___boxed(lean_object* v_as_4726_, lean_object* v_sz_4727_, lean_object* v_i_4728_, lean_object* v_b_4729_, lean_object* v___y_4730_, lean_object* v___y_4731_, lean_object* v___y_4732_){
_start:
{
size_t v_sz_boxed_4733_; size_t v_i_boxed_4734_; lean_object* v_res_4735_; 
v_sz_boxed_4733_ = lean_unbox_usize(v_sz_4727_);
lean_dec(v_sz_4727_);
v_i_boxed_4734_ = lean_unbox_usize(v_i_4728_);
lean_dec(v_i_4728_);
v_res_4735_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1(v_as_4726_, v_sz_boxed_4733_, v_i_boxed_4734_, v_b_4729_, v___y_4730_, v___y_4731_);
lean_dec(v___y_4731_);
lean_dec_ref(v___y_4730_);
lean_dec_ref(v_as_4726_);
return v_res_4735_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__1(){
_start:
{
lean_object* v___x_4737_; 
v___x_4737_ = lean_enable_initializer_execution();
return v___x_4737_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__1___boxed(lean_object* v___y_4738_){
_start:
{
lean_object* v_res_4739_; 
v_res_4739_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__1();
return v_res_4739_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__4(lean_object* v_region_4740_){
_start:
{
lean_object* v___x_4742_; 
v___x_4742_ = lean_compacted_region_free(v_region_4740_);
return v___x_4742_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__4___boxed(lean_object* v_region_4743_, lean_object* v___y_4744_){
_start:
{
lean_object* v_res_4745_; 
v_res_4745_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__4(v_region_4743_);
return v_res_4745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0(lean_object* v_o_4749_, lean_object* v_k_4750_, uint8_t v_v_4751_){
_start:
{
lean_object* v_map_4752_; uint8_t v_hasTrace_4753_; lean_object* v___x_4755_; uint8_t v_isShared_4756_; uint8_t v_isSharedCheck_4767_; 
v_map_4752_ = lean_ctor_get(v_o_4749_, 0);
v_hasTrace_4753_ = lean_ctor_get_uint8(v_o_4749_, sizeof(void*)*1);
v_isSharedCheck_4767_ = !lean_is_exclusive(v_o_4749_);
if (v_isSharedCheck_4767_ == 0)
{
v___x_4755_ = v_o_4749_;
v_isShared_4756_ = v_isSharedCheck_4767_;
goto v_resetjp_4754_;
}
else
{
lean_inc(v_map_4752_);
lean_dec(v_o_4749_);
v___x_4755_ = lean_box(0);
v_isShared_4756_ = v_isSharedCheck_4767_;
goto v_resetjp_4754_;
}
v_resetjp_4754_:
{
lean_object* v___x_4757_; lean_object* v___x_4758_; 
v___x_4757_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4757_, 0, v_v_4751_);
lean_inc(v_k_4750_);
v___x_4758_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_4750_, v___x_4757_, v_map_4752_);
if (v_hasTrace_4753_ == 0)
{
lean_object* v___x_4759_; uint8_t v___x_4760_; lean_object* v___x_4762_; 
v___x_4759_ = ((lean_object*)(l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___closed__1));
v___x_4760_ = l_Lean_Name_isPrefixOf(v___x_4759_, v_k_4750_);
lean_dec(v_k_4750_);
if (v_isShared_4756_ == 0)
{
lean_ctor_set(v___x_4755_, 0, v___x_4758_);
v___x_4762_ = v___x_4755_;
goto v_reusejp_4761_;
}
else
{
lean_object* v_reuseFailAlloc_4763_; 
v_reuseFailAlloc_4763_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4763_, 0, v___x_4758_);
v___x_4762_ = v_reuseFailAlloc_4763_;
goto v_reusejp_4761_;
}
v_reusejp_4761_:
{
lean_ctor_set_uint8(v___x_4762_, sizeof(void*)*1, v___x_4760_);
return v___x_4762_;
}
}
else
{
lean_object* v___x_4765_; 
lean_dec(v_k_4750_);
if (v_isShared_4756_ == 0)
{
lean_ctor_set(v___x_4755_, 0, v___x_4758_);
v___x_4765_ = v___x_4755_;
goto v_reusejp_4764_;
}
else
{
lean_object* v_reuseFailAlloc_4766_; 
v_reuseFailAlloc_4766_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4766_, 0, v___x_4758_);
lean_ctor_set_uint8(v_reuseFailAlloc_4766_, sizeof(void*)*1, v_hasTrace_4753_);
v___x_4765_ = v_reuseFailAlloc_4766_;
goto v_reusejp_4764_;
}
v_reusejp_4764_:
{
return v___x_4765_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___boxed(lean_object* v_o_4768_, lean_object* v_k_4769_, lean_object* v_v_4770_){
_start:
{
uint8_t v_v_boxed_4771_; lean_object* v_res_4772_; 
v_v_boxed_4771_ = lean_unbox(v_v_4770_);
v_res_4772_ = l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0(v_o_4768_, v_k_4769_, v_v_boxed_4771_);
return v_res_4772_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lake_BuiltinLint_run_spec__4(lean_object* v_s_4773_){
_start:
{
lean_object* v___x_4775_; lean_object* v___x_4776_; uint32_t v___x_4777_; lean_object* v___x_4778_; lean_object* v___x_4779_; 
v___x_4775_ = lean_unsigned_to_nat(80u);
v___x_4776_ = l_Lean_Json_pretty(v_s_4773_, v___x_4775_);
v___x_4777_ = 10;
v___x_4778_ = lean_string_push(v___x_4776_, v___x_4777_);
v___x_4779_ = l_IO_print___at___00IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13_spec__23(v___x_4778_);
return v___x_4779_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lake_BuiltinLint_run_spec__4___boxed(lean_object* v_s_4780_, lean_object* v___y_4781_){
_start:
{
lean_object* v_res_4782_; 
v_res_4782_ = l_IO_println___at___00Lake_BuiltinLint_run_spec__4(v_s_4780_);
return v_res_4782_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5(lean_object* v_as_4783_, size_t v_sz_4784_, size_t v_i_4785_, lean_object* v_b_4786_){
_start:
{
uint8_t v___x_4788_; 
v___x_4788_ = lean_usize_dec_lt(v_i_4785_, v_sz_4784_);
if (v___x_4788_ == 0)
{
lean_object* v___x_4789_; 
v___x_4789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4789_, 0, v_b_4786_);
return v___x_4789_;
}
else
{
lean_object* v___x_4790_; lean_object* v_a_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; 
v___x_4790_ = lean_box(0);
v_a_4791_ = lean_array_uget_borrowed(v_as_4783_, v_i_4785_);
lean_inc(v_a_4791_);
v___x_4792_ = l_Lean_Linter_CodeQuality_instToJsonEntry_toJson(v_a_4791_);
v___x_4793_ = l_IO_println___at___00Lake_BuiltinLint_run_spec__4(v___x_4792_);
if (lean_obj_tag(v___x_4793_) == 0)
{
size_t v___x_4794_; size_t v___x_4795_; 
lean_dec_ref_known(v___x_4793_, 1);
v___x_4794_ = ((size_t)1ULL);
v___x_4795_ = lean_usize_add(v_i_4785_, v___x_4794_);
v_i_4785_ = v___x_4795_;
v_b_4786_ = v___x_4790_;
goto _start;
}
else
{
return v___x_4793_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___boxed(lean_object* v_as_4797_, lean_object* v_sz_4798_, lean_object* v_i_4799_, lean_object* v_b_4800_, lean_object* v___y_4801_){
_start:
{
size_t v_sz_boxed_4802_; size_t v_i_boxed_4803_; lean_object* v_res_4804_; 
v_sz_boxed_4802_ = lean_unbox_usize(v_sz_4798_);
lean_dec(v_sz_4798_);
v_i_boxed_4803_ = lean_unbox_usize(v_i_4799_);
lean_dec(v_i_4799_);
v_res_4804_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5(v_as_4797_, v_sz_boxed_4802_, v_i_boxed_4803_, v_b_4800_);
lean_dec_ref(v_as_4797_);
return v_res_4804_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_run_spec__1(lean_object* v___x_4805_, size_t v_sz_4806_, size_t v_i_4807_, lean_object* v_bs_4808_){
_start:
{
uint8_t v_anyUnlocated_4809_; 
v_anyUnlocated_4809_ = lean_usize_dec_lt(v_i_4807_, v_sz_4806_);
if (v_anyUnlocated_4809_ == 0)
{
return v_bs_4808_;
}
else
{
lean_object* v___x_4810_; uint8_t v_anyFailed_4811_; lean_object* v_v_4812_; lean_object* v_bs_x27_4813_; lean_object* v___x_4814_; size_t v___x_4815_; size_t v___x_4816_; lean_object* v___x_4817_; 
v___x_4810_ = lean_unsigned_to_nat(0u);
v_anyFailed_4811_ = lean_nat_dec_eq(v___x_4805_, v___x_4810_);
v_v_4812_ = lean_array_uget(v_bs_4808_, v_i_4807_);
v_bs_x27_4813_ = lean_array_uset(v_bs_4808_, v_i_4807_, v___x_4810_);
v___x_4814_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_4814_, 0, v_v_4812_);
lean_ctor_set_uint8(v___x_4814_, sizeof(void*)*1, v_anyFailed_4811_);
lean_ctor_set_uint8(v___x_4814_, sizeof(void*)*1 + 1, v_anyUnlocated_4809_);
lean_ctor_set_uint8(v___x_4814_, sizeof(void*)*1 + 2, v_anyFailed_4811_);
v___x_4815_ = ((size_t)1ULL);
v___x_4816_ = lean_usize_add(v_i_4807_, v___x_4815_);
v___x_4817_ = lean_array_uset(v_bs_x27_4813_, v_i_4807_, v___x_4814_);
v_i_4807_ = v___x_4816_;
v_bs_4808_ = v___x_4817_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_run_spec__1___boxed(lean_object* v___x_4819_, lean_object* v_sz_4820_, lean_object* v_i_4821_, lean_object* v_bs_4822_){
_start:
{
size_t v_sz_boxed_4823_; size_t v_i_boxed_4824_; lean_object* v_res_4825_; 
v_sz_boxed_4823_ = lean_unbox_usize(v_sz_4820_);
lean_dec(v_sz_4820_);
v_i_boxed_4824_ = lean_unbox_usize(v_i_4821_);
lean_dec(v_i_4821_);
v_res_4825_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_run_spec__1(v___x_4819_, v_sz_boxed_4823_, v_i_boxed_4824_, v_bs_4822_);
lean_dec(v___x_4819_);
return v_res_4825_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_run_spec__2(lean_object* v_as_4826_, size_t v_i_4827_, size_t v_stop_4828_, lean_object* v_b_4829_){
_start:
{
uint8_t v___x_4830_; 
v___x_4830_ = lean_usize_dec_eq(v_i_4827_, v_stop_4828_);
if (v___x_4830_ == 0)
{
lean_object* v___x_4831_; lean_object* v_fst_4832_; lean_object* v_snd_4833_; uint8_t v___x_4834_; lean_object* v___x_4835_; size_t v___x_4836_; size_t v___x_4837_; 
v___x_4831_ = lean_array_uget_borrowed(v_as_4826_, v_i_4827_);
v_fst_4832_ = lean_ctor_get(v___x_4831_, 0);
v_snd_4833_ = lean_ctor_get(v___x_4831_, 1);
v___x_4834_ = lean_unbox(v_snd_4833_);
lean_inc(v_fst_4832_);
v___x_4835_ = l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0(v_b_4829_, v_fst_4832_, v___x_4834_);
v___x_4836_ = ((size_t)1ULL);
v___x_4837_ = lean_usize_add(v_i_4827_, v___x_4836_);
v_i_4827_ = v___x_4837_;
v_b_4829_ = v___x_4835_;
goto _start;
}
else
{
return v_b_4829_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_run_spec__2___boxed(lean_object* v_as_4839_, lean_object* v_i_4840_, lean_object* v_stop_4841_, lean_object* v_b_4842_){
_start:
{
size_t v_i_boxed_4843_; size_t v_stop_boxed_4844_; lean_object* v_res_4845_; 
v_i_boxed_4843_ = lean_unbox_usize(v_i_4840_);
lean_dec(v_i_4840_);
v_stop_boxed_4844_ = lean_unbox_usize(v_stop_4841_);
lean_dec(v_stop_4841_);
v_res_4845_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_run_spec__2(v_as_4839_, v_i_boxed_4843_, v_stop_boxed_4844_, v_b_4842_);
lean_dec_ref(v_as_4839_);
return v_res_4845_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3(lean_object* v___x_4855_, lean_object* v_checkImports_4856_, lean_object* v_args_4857_, lean_object* v___x_4858_, lean_object* v_as_4859_, size_t v_sz_4860_, size_t v_i_4861_, lean_object* v_b_4862_){
_start:
{
lean_object* v_a_4865_; lean_object* v___x_4869_; uint8_t v_anyFailed_4870_; uint8_t v_anyUnlocated_4871_; lean_object* v___x_4872_; lean_object* v_envLinterModule_4873_; uint8_t v___x_4874_; 
v___x_4869_ = lean_unsigned_to_nat(0u);
v_anyFailed_4870_ = lean_nat_dec_eq(v___x_4855_, v___x_4869_);
v_anyUnlocated_4871_ = 1;
v___x_4872_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__3));
v_envLinterModule_4873_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v_envLinterModule_4873_, 0, v___x_4872_);
lean_ctor_set_uint8(v_envLinterModule_4873_, sizeof(void*)*1, v_anyFailed_4870_);
lean_ctor_set_uint8(v_envLinterModule_4873_, sizeof(void*)*1 + 1, v_anyUnlocated_4871_);
lean_ctor_set_uint8(v_envLinterModule_4873_, sizeof(void*)*1 + 2, v_anyFailed_4870_);
v___x_4874_ = lean_usize_dec_lt(v_i_4861_, v_sz_4860_);
if (v___x_4874_ == 0)
{
lean_object* v___x_4875_; 
lean_dec_ref_known(v_envLinterModule_4873_, 1);
lean_dec(v___x_4858_);
v___x_4875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4875_, 0, v_b_4862_);
return v___x_4875_;
}
else
{
lean_object* v_snd_4876_; lean_object* v_snd_4877_; lean_object* v_snd_4878_; lean_object* v_snd_4879_; lean_object* v_fst_4880_; lean_object* v___x_4882_; uint8_t v_isShared_4883_; uint8_t v_isSharedCheck_5193_; 
v_snd_4876_ = lean_ctor_get(v_b_4862_, 1);
lean_inc(v_snd_4876_);
v_snd_4877_ = lean_ctor_get(v_snd_4876_, 1);
lean_inc(v_snd_4877_);
v_snd_4878_ = lean_ctor_get(v_snd_4877_, 1);
lean_inc(v_snd_4878_);
v_snd_4879_ = lean_ctor_get(v_snd_4878_, 1);
lean_inc(v_snd_4879_);
v_fst_4880_ = lean_ctor_get(v_b_4862_, 0);
v_isSharedCheck_5193_ = !lean_is_exclusive(v_b_4862_);
if (v_isSharedCheck_5193_ == 0)
{
lean_object* v_unused_5194_; 
v_unused_5194_ = lean_ctor_get(v_b_4862_, 1);
lean_dec(v_unused_5194_);
v___x_4882_ = v_b_4862_;
v_isShared_4883_ = v_isSharedCheck_5193_;
goto v_resetjp_4881_;
}
else
{
lean_inc(v_fst_4880_);
lean_dec(v_b_4862_);
v___x_4882_ = lean_box(0);
v_isShared_4883_ = v_isSharedCheck_5193_;
goto v_resetjp_4881_;
}
v_resetjp_4881_:
{
lean_object* v_fst_4884_; lean_object* v___x_4886_; uint8_t v_isShared_4887_; uint8_t v_isSharedCheck_5191_; 
v_fst_4884_ = lean_ctor_get(v_snd_4876_, 0);
v_isSharedCheck_5191_ = !lean_is_exclusive(v_snd_4876_);
if (v_isSharedCheck_5191_ == 0)
{
lean_object* v_unused_5192_; 
v_unused_5192_ = lean_ctor_get(v_snd_4876_, 1);
lean_dec(v_unused_5192_);
v___x_4886_ = v_snd_4876_;
v_isShared_4887_ = v_isSharedCheck_5191_;
goto v_resetjp_4885_;
}
else
{
lean_inc(v_fst_4884_);
lean_dec(v_snd_4876_);
v___x_4886_ = lean_box(0);
v_isShared_4887_ = v_isSharedCheck_5191_;
goto v_resetjp_4885_;
}
v_resetjp_4885_:
{
lean_object* v_fst_4888_; lean_object* v___x_4890_; uint8_t v_isShared_4891_; uint8_t v_isSharedCheck_5189_; 
v_fst_4888_ = lean_ctor_get(v_snd_4877_, 0);
v_isSharedCheck_5189_ = !lean_is_exclusive(v_snd_4877_);
if (v_isSharedCheck_5189_ == 0)
{
lean_object* v_unused_5190_; 
v_unused_5190_ = lean_ctor_get(v_snd_4877_, 1);
lean_dec(v_unused_5190_);
v___x_4890_ = v_snd_4877_;
v_isShared_4891_ = v_isSharedCheck_5189_;
goto v_resetjp_4889_;
}
else
{
lean_inc(v_fst_4888_);
lean_dec(v_snd_4877_);
v___x_4890_ = lean_box(0);
v_isShared_4891_ = v_isSharedCheck_5189_;
goto v_resetjp_4889_;
}
v_resetjp_4889_:
{
lean_object* v_fst_4892_; lean_object* v___x_4894_; uint8_t v_isShared_4895_; uint8_t v_isSharedCheck_5187_; 
v_fst_4892_ = lean_ctor_get(v_snd_4878_, 0);
v_isSharedCheck_5187_ = !lean_is_exclusive(v_snd_4878_);
if (v_isSharedCheck_5187_ == 0)
{
lean_object* v_unused_5188_; 
v_unused_5188_ = lean_ctor_get(v_snd_4878_, 1);
lean_dec(v_unused_5188_);
v___x_4894_ = v_snd_4878_;
v_isShared_4895_ = v_isSharedCheck_5187_;
goto v_resetjp_4893_;
}
else
{
lean_inc(v_fst_4892_);
lean_dec(v_snd_4878_);
v___x_4894_ = lean_box(0);
v_isShared_4895_ = v_isSharedCheck_5187_;
goto v_resetjp_4893_;
}
v_resetjp_4893_:
{
lean_object* v_fst_4896_; lean_object* v_snd_4897_; lean_object* v___x_4899_; uint8_t v_isShared_4900_; uint8_t v_isSharedCheck_5186_; 
v_fst_4896_ = lean_ctor_get(v_snd_4879_, 0);
v_snd_4897_ = lean_ctor_get(v_snd_4879_, 1);
v_isSharedCheck_5186_ = !lean_is_exclusive(v_snd_4879_);
if (v_isSharedCheck_5186_ == 0)
{
v___x_4899_ = v_snd_4879_;
v_isShared_4900_ = v_isSharedCheck_5186_;
goto v_resetjp_4898_;
}
else
{
lean_inc(v_snd_4897_);
lean_inc(v_fst_4896_);
lean_dec(v_snd_4879_);
v___x_4899_ = lean_box(0);
v_isShared_4900_ = v_isSharedCheck_5186_;
goto v_resetjp_4898_;
}
v_resetjp_4898_:
{
lean_object* v___x_4901_; lean_object* v_a_4902_; lean_object* v___y_4904_; lean_object* v___y_4905_; uint8_t v_anyFailed_4906_; uint8_t v_anyUnlocated_4907_; lean_object* v_records_4908_; lean_object* v_codeQualityEntries_4909_; lean_object* v___y_5056_; lean_object* v___y_5057_; uint8_t v_anyFailed_5058_; uint8_t v_anyUnlocated_5059_; lean_object* v_records_5060_; lean_object* v_codeQualityEntries_5061_; lean_object* v___y_5079_; lean_object* v___y_5080_; lean_object* v___x_5119_; lean_object* v___x_5120_; 
v___x_4901_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v_a_4902_ = lean_array_uget_borrowed(v_as_4859_, v_i_4861_);
v___x_5119_ = lean_enable_initializer_execution();
lean_inc(v_a_4902_);
v___x_5120_ = l_Lean_findOLean(v_a_4902_);
if (lean_obj_tag(v___x_5120_) == 0)
{
lean_object* v_a_5121_; lean_object* v___x_5122_; 
v_a_5121_ = lean_ctor_get(v___x_5120_, 0);
lean_inc(v_a_5121_);
lean_dec_ref_known(v___x_5120_, 1);
v___x_5122_ = l_Lean_readModuleData(v_a_5121_);
lean_dec(v_a_5121_);
if (lean_obj_tag(v___x_5122_) == 0)
{
lean_object* v_a_5123_; lean_object* v_fst_5124_; lean_object* v_snd_5125_; uint8_t v___x_5126_; uint8_t v___y_5128_; 
v_a_5123_ = lean_ctor_get(v___x_5122_, 0);
lean_inc(v_a_5123_);
lean_dec_ref_known(v___x_5122_, 1);
v_fst_5124_ = lean_ctor_get(v_a_5123_, 0);
lean_inc(v_fst_5124_);
v_snd_5125_ = lean_ctor_get(v_a_5123_, 1);
lean_inc(v_snd_5125_);
lean_dec(v_a_5123_);
v___x_5126_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_getIsModule(v_fst_5124_);
lean_dec(v_fst_5124_);
if (v___x_5126_ == 0)
{
uint8_t v___x_5168_; 
v___x_5168_ = 2;
v___y_5128_ = v___x_5168_;
goto v___jp_5127_;
}
else
{
uint8_t v___x_5169_; 
v___x_5169_ = 1;
v___y_5128_ = v___x_5169_;
goto v___jp_5127_;
}
v___jp_5127_:
{
lean_object* v___x_5129_; 
v___x_5129_ = lean_compacted_region_free(v_snd_5125_);
if (lean_obj_tag(v___x_5129_) == 0)
{
lean_object* v___x_5130_; lean_object* v___x_5131_; lean_object* v___x_5132_; lean_object* v___x_5133_; lean_object* v___x_5134_; lean_object* v___x_5135_; lean_object* v___x_5136_; uint32_t v___x_5137_; lean_object* v___x_5138_; lean_object* v___x_5139_; lean_object* v___x_5140_; 
lean_dec_ref_known(v___x_5129_, 1);
lean_inc(v_a_4902_);
v___x_5130_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_5130_, 0, v_a_4902_);
lean_ctor_set_uint8(v___x_5130_, sizeof(void*)*1, v_anyFailed_4870_);
lean_ctor_set_uint8(v___x_5130_, sizeof(void*)*1 + 1, v_anyUnlocated_4871_);
lean_ctor_set_uint8(v___x_5130_, sizeof(void*)*1 + 2, v_anyFailed_4870_);
v___x_5131_ = lean_unsigned_to_nat(2u);
v___x_5132_ = lean_mk_empty_array_with_capacity(v___x_5131_);
v___x_5133_ = lean_array_push(v___x_5132_, v___x_5130_);
v___x_5134_ = lean_array_push(v___x_5133_, v_envLinterModule_4873_);
v___x_5135_ = l_Array_append___redArg(v___x_5134_, v_checkImports_4856_);
v___x_5136_ = l_Lean_Options_empty;
v___x_5137_ = 1024;
v___x_5138_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__4));
v___x_5139_ = lean_box(1);
v___x_5140_ = l_Lean_importModules(v___x_5135_, v___x_5136_, v___x_5137_, v___x_5138_, v_anyFailed_4870_, v_anyUnlocated_4871_, v___y_5128_, v___x_5139_);
if (lean_obj_tag(v___x_5140_) == 0)
{
lean_object* v_a_5141_; lean_object* v_linterOverrides_5142_; lean_object* v___x_5143_; uint8_t v___x_5144_; 
v_a_5141_ = lean_ctor_get(v___x_5140_, 0);
lean_inc(v_a_5141_);
lean_dec_ref_known(v___x_5140_, 1);
v_linterOverrides_5142_ = lean_ctor_get(v_args_4857_, 0);
v___x_5143_ = lean_array_get_size(v_linterOverrides_5142_);
v___x_5144_ = lean_nat_dec_lt(v___x_4869_, v___x_5143_);
if (v___x_5144_ == 0)
{
v___y_5079_ = v_a_5141_;
v___y_5080_ = v___x_5136_;
goto v___jp_5078_;
}
else
{
uint8_t v___x_5145_; 
v___x_5145_ = lean_nat_dec_le(v___x_5143_, v___x_5143_);
if (v___x_5145_ == 0)
{
if (v___x_5144_ == 0)
{
v___y_5079_ = v_a_5141_;
v___y_5080_ = v___x_5136_;
goto v___jp_5078_;
}
else
{
size_t v___x_5146_; size_t v___x_5147_; lean_object* v___x_5148_; 
v___x_5146_ = ((size_t)0ULL);
v___x_5147_ = lean_usize_of_nat(v___x_5143_);
v___x_5148_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_run_spec__2(v_linterOverrides_5142_, v___x_5146_, v___x_5147_, v___x_5136_);
v___y_5079_ = v_a_5141_;
v___y_5080_ = v___x_5148_;
goto v___jp_5078_;
}
}
else
{
size_t v___x_5149_; size_t v___x_5150_; lean_object* v___x_5151_; 
v___x_5149_ = ((size_t)0ULL);
v___x_5150_ = lean_usize_of_nat(v___x_5143_);
v___x_5151_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_run_spec__2(v_linterOverrides_5142_, v___x_5149_, v___x_5150_, v___x_5136_);
v___y_5079_ = v_a_5141_;
v___y_5080_ = v___x_5151_;
goto v___jp_5078_;
}
}
}
else
{
lean_object* v_a_5152_; lean_object* v___x_5154_; uint8_t v_isShared_5155_; uint8_t v_isSharedCheck_5159_; 
lean_del_object(v___x_4899_);
lean_dec(v_snd_4897_);
lean_dec(v_fst_4896_);
lean_del_object(v___x_4894_);
lean_dec(v_fst_4892_);
lean_del_object(v___x_4890_);
lean_dec(v_fst_4888_);
lean_del_object(v___x_4886_);
lean_dec(v_fst_4884_);
lean_del_object(v___x_4882_);
lean_dec(v_fst_4880_);
lean_dec(v___x_4858_);
v_a_5152_ = lean_ctor_get(v___x_5140_, 0);
v_isSharedCheck_5159_ = !lean_is_exclusive(v___x_5140_);
if (v_isSharedCheck_5159_ == 0)
{
v___x_5154_ = v___x_5140_;
v_isShared_5155_ = v_isSharedCheck_5159_;
goto v_resetjp_5153_;
}
else
{
lean_inc(v_a_5152_);
lean_dec(v___x_5140_);
v___x_5154_ = lean_box(0);
v_isShared_5155_ = v_isSharedCheck_5159_;
goto v_resetjp_5153_;
}
v_resetjp_5153_:
{
lean_object* v___x_5157_; 
if (v_isShared_5155_ == 0)
{
v___x_5157_ = v___x_5154_;
goto v_reusejp_5156_;
}
else
{
lean_object* v_reuseFailAlloc_5158_; 
v_reuseFailAlloc_5158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5158_, 0, v_a_5152_);
v___x_5157_ = v_reuseFailAlloc_5158_;
goto v_reusejp_5156_;
}
v_reusejp_5156_:
{
return v___x_5157_;
}
}
}
}
else
{
lean_object* v_a_5160_; lean_object* v___x_5162_; uint8_t v_isShared_5163_; uint8_t v_isSharedCheck_5167_; 
lean_del_object(v___x_4899_);
lean_dec(v_snd_4897_);
lean_dec(v_fst_4896_);
lean_del_object(v___x_4894_);
lean_dec(v_fst_4892_);
lean_del_object(v___x_4890_);
lean_dec(v_fst_4888_);
lean_del_object(v___x_4886_);
lean_dec(v_fst_4884_);
lean_del_object(v___x_4882_);
lean_dec(v_fst_4880_);
lean_dec_ref_known(v_envLinterModule_4873_, 1);
lean_dec(v___x_4858_);
v_a_5160_ = lean_ctor_get(v___x_5129_, 0);
v_isSharedCheck_5167_ = !lean_is_exclusive(v___x_5129_);
if (v_isSharedCheck_5167_ == 0)
{
v___x_5162_ = v___x_5129_;
v_isShared_5163_ = v_isSharedCheck_5167_;
goto v_resetjp_5161_;
}
else
{
lean_inc(v_a_5160_);
lean_dec(v___x_5129_);
v___x_5162_ = lean_box(0);
v_isShared_5163_ = v_isSharedCheck_5167_;
goto v_resetjp_5161_;
}
v_resetjp_5161_:
{
lean_object* v___x_5165_; 
if (v_isShared_5163_ == 0)
{
v___x_5165_ = v___x_5162_;
goto v_reusejp_5164_;
}
else
{
lean_object* v_reuseFailAlloc_5166_; 
v_reuseFailAlloc_5166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5166_, 0, v_a_5160_);
v___x_5165_ = v_reuseFailAlloc_5166_;
goto v_reusejp_5164_;
}
v_reusejp_5164_:
{
return v___x_5165_;
}
}
}
}
}
else
{
lean_object* v_a_5170_; lean_object* v___x_5172_; uint8_t v_isShared_5173_; uint8_t v_isSharedCheck_5177_; 
lean_del_object(v___x_4899_);
lean_dec(v_snd_4897_);
lean_dec(v_fst_4896_);
lean_del_object(v___x_4894_);
lean_dec(v_fst_4892_);
lean_del_object(v___x_4890_);
lean_dec(v_fst_4888_);
lean_del_object(v___x_4886_);
lean_dec(v_fst_4884_);
lean_del_object(v___x_4882_);
lean_dec(v_fst_4880_);
lean_dec_ref_known(v_envLinterModule_4873_, 1);
lean_dec(v___x_4858_);
v_a_5170_ = lean_ctor_get(v___x_5122_, 0);
v_isSharedCheck_5177_ = !lean_is_exclusive(v___x_5122_);
if (v_isSharedCheck_5177_ == 0)
{
v___x_5172_ = v___x_5122_;
v_isShared_5173_ = v_isSharedCheck_5177_;
goto v_resetjp_5171_;
}
else
{
lean_inc(v_a_5170_);
lean_dec(v___x_5122_);
v___x_5172_ = lean_box(0);
v_isShared_5173_ = v_isSharedCheck_5177_;
goto v_resetjp_5171_;
}
v_resetjp_5171_:
{
lean_object* v___x_5175_; 
if (v_isShared_5173_ == 0)
{
v___x_5175_ = v___x_5172_;
goto v_reusejp_5174_;
}
else
{
lean_object* v_reuseFailAlloc_5176_; 
v_reuseFailAlloc_5176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5176_, 0, v_a_5170_);
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
lean_del_object(v___x_4899_);
lean_dec(v_snd_4897_);
lean_dec(v_fst_4896_);
lean_del_object(v___x_4894_);
lean_dec(v_fst_4892_);
lean_del_object(v___x_4890_);
lean_dec(v_fst_4888_);
lean_del_object(v___x_4886_);
lean_dec(v_fst_4884_);
lean_del_object(v___x_4882_);
lean_dec(v_fst_4880_);
lean_dec_ref_known(v_envLinterModule_4873_, 1);
lean_dec(v___x_4858_);
v_a_5178_ = lean_ctor_get(v___x_5120_, 0);
v_isSharedCheck_5185_ = !lean_is_exclusive(v___x_5120_);
if (v_isSharedCheck_5185_ == 0)
{
v___x_5180_ = v___x_5120_;
v_isShared_5181_ = v_isSharedCheck_5185_;
goto v_resetjp_5179_;
}
else
{
lean_inc(v_a_5178_);
lean_dec(v___x_5120_);
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
v___jp_4903_:
{
uint8_t v_mode_4910_; uint8_t v___x_4911_; uint8_t v___x_4912_; 
v_mode_4910_ = lean_ctor_get_uint8(v_args_4857_, sizeof(void*)*4 + 1);
v___x_4911_ = 2;
v___x_4912_ = l_Lake_BuiltinLint_instBEqMode_beq(v_mode_4910_, v___x_4911_);
if (v___x_4912_ == 0)
{
lean_object* v___x_4913_; lean_object* v___x_4914_; 
v___x_4913_ = l_Lean_Name_getRoot(v_a_4902_);
lean_inc(v___x_4858_);
v___x_4914_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks(v_args_4857_, v___y_4905_, v___x_4858_, v___y_4904_, v___x_4913_, v_fst_4896_);
lean_dec_ref(v___y_4905_);
if (lean_obj_tag(v___x_4914_) == 0)
{
lean_object* v_a_4915_; lean_object* v_outcome_4916_; 
v_a_4915_ = lean_ctor_get(v___x_4914_, 0);
lean_inc(v_a_4915_);
lean_dec_ref_known(v___x_4914_, 1);
v_outcome_4916_ = lean_ctor_get(v_a_4915_, 0);
if (lean_obj_tag(v_outcome_4916_) == 0)
{
uint8_t v_failed_4917_; 
v_failed_4917_ = lean_ctor_get_uint8(v_outcome_4916_, 0);
if (v_failed_4917_ == 0)
{
lean_object* v_checkedModules_4918_; lean_object* v___x_4920_; 
v_checkedModules_4918_ = lean_ctor_get(v_a_4915_, 1);
lean_inc(v_checkedModules_4918_);
lean_dec(v_a_4915_);
if (v_isShared_4900_ == 0)
{
lean_ctor_set(v___x_4899_, 0, v_checkedModules_4918_);
v___x_4920_ = v___x_4899_;
goto v_reusejp_4919_;
}
else
{
lean_object* v_reuseFailAlloc_4935_; 
v_reuseFailAlloc_4935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4935_, 0, v_checkedModules_4918_);
lean_ctor_set(v_reuseFailAlloc_4935_, 1, v_snd_4897_);
v___x_4920_ = v_reuseFailAlloc_4935_;
goto v_reusejp_4919_;
}
v_reusejp_4919_:
{
lean_object* v___x_4922_; 
if (v_isShared_4895_ == 0)
{
lean_ctor_set(v___x_4894_, 1, v___x_4920_);
lean_ctor_set(v___x_4894_, 0, v_codeQualityEntries_4909_);
v___x_4922_ = v___x_4894_;
goto v_reusejp_4921_;
}
else
{
lean_object* v_reuseFailAlloc_4934_; 
v_reuseFailAlloc_4934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4934_, 0, v_codeQualityEntries_4909_);
lean_ctor_set(v_reuseFailAlloc_4934_, 1, v___x_4920_);
v___x_4922_ = v_reuseFailAlloc_4934_;
goto v_reusejp_4921_;
}
v_reusejp_4921_:
{
lean_object* v___x_4924_; 
if (v_isShared_4891_ == 0)
{
lean_ctor_set(v___x_4890_, 1, v___x_4922_);
lean_ctor_set(v___x_4890_, 0, v_records_4908_);
v___x_4924_ = v___x_4890_;
goto v_reusejp_4923_;
}
else
{
lean_object* v_reuseFailAlloc_4933_; 
v_reuseFailAlloc_4933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4933_, 0, v_records_4908_);
lean_ctor_set(v_reuseFailAlloc_4933_, 1, v___x_4922_);
v___x_4924_ = v_reuseFailAlloc_4933_;
goto v_reusejp_4923_;
}
v_reusejp_4923_:
{
lean_object* v___x_4925_; lean_object* v___x_4927_; 
v___x_4925_ = lean_box(v_anyUnlocated_4907_);
if (v_isShared_4887_ == 0)
{
lean_ctor_set(v___x_4886_, 1, v___x_4924_);
lean_ctor_set(v___x_4886_, 0, v___x_4925_);
v___x_4927_ = v___x_4886_;
goto v_reusejp_4926_;
}
else
{
lean_object* v_reuseFailAlloc_4932_; 
v_reuseFailAlloc_4932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4932_, 0, v___x_4925_);
lean_ctor_set(v_reuseFailAlloc_4932_, 1, v___x_4924_);
v___x_4927_ = v_reuseFailAlloc_4932_;
goto v_reusejp_4926_;
}
v_reusejp_4926_:
{
lean_object* v___x_4928_; lean_object* v___x_4930_; 
v___x_4928_ = lean_box(v_anyFailed_4906_);
if (v_isShared_4883_ == 0)
{
lean_ctor_set(v___x_4882_, 1, v___x_4927_);
lean_ctor_set(v___x_4882_, 0, v___x_4928_);
v___x_4930_ = v___x_4882_;
goto v_reusejp_4929_;
}
else
{
lean_object* v_reuseFailAlloc_4931_; 
v_reuseFailAlloc_4931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4931_, 0, v___x_4928_);
lean_ctor_set(v_reuseFailAlloc_4931_, 1, v___x_4927_);
v___x_4930_ = v_reuseFailAlloc_4931_;
goto v_reusejp_4929_;
}
v_reusejp_4929_:
{
v_a_4865_ = v___x_4930_;
goto v___jp_4864_;
}
}
}
}
}
}
else
{
lean_object* v_checkedModules_4936_; lean_object* v___x_4938_; 
v_checkedModules_4936_ = lean_ctor_get(v_a_4915_, 1);
lean_inc(v_checkedModules_4936_);
lean_dec(v_a_4915_);
if (v_isShared_4900_ == 0)
{
lean_ctor_set(v___x_4899_, 0, v_checkedModules_4936_);
v___x_4938_ = v___x_4899_;
goto v_reusejp_4937_;
}
else
{
lean_object* v_reuseFailAlloc_4953_; 
v_reuseFailAlloc_4953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4953_, 0, v_checkedModules_4936_);
lean_ctor_set(v_reuseFailAlloc_4953_, 1, v_snd_4897_);
v___x_4938_ = v_reuseFailAlloc_4953_;
goto v_reusejp_4937_;
}
v_reusejp_4937_:
{
lean_object* v___x_4940_; 
if (v_isShared_4895_ == 0)
{
lean_ctor_set(v___x_4894_, 1, v___x_4938_);
lean_ctor_set(v___x_4894_, 0, v_codeQualityEntries_4909_);
v___x_4940_ = v___x_4894_;
goto v_reusejp_4939_;
}
else
{
lean_object* v_reuseFailAlloc_4952_; 
v_reuseFailAlloc_4952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4952_, 0, v_codeQualityEntries_4909_);
lean_ctor_set(v_reuseFailAlloc_4952_, 1, v___x_4938_);
v___x_4940_ = v_reuseFailAlloc_4952_;
goto v_reusejp_4939_;
}
v_reusejp_4939_:
{
lean_object* v___x_4942_; 
if (v_isShared_4891_ == 0)
{
lean_ctor_set(v___x_4890_, 1, v___x_4940_);
lean_ctor_set(v___x_4890_, 0, v_records_4908_);
v___x_4942_ = v___x_4890_;
goto v_reusejp_4941_;
}
else
{
lean_object* v_reuseFailAlloc_4951_; 
v_reuseFailAlloc_4951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4951_, 0, v_records_4908_);
lean_ctor_set(v_reuseFailAlloc_4951_, 1, v___x_4940_);
v___x_4942_ = v_reuseFailAlloc_4951_;
goto v_reusejp_4941_;
}
v_reusejp_4941_:
{
lean_object* v___x_4943_; lean_object* v___x_4945_; 
v___x_4943_ = lean_box(v_anyUnlocated_4907_);
if (v_isShared_4887_ == 0)
{
lean_ctor_set(v___x_4886_, 1, v___x_4942_);
lean_ctor_set(v___x_4886_, 0, v___x_4943_);
v___x_4945_ = v___x_4886_;
goto v_reusejp_4944_;
}
else
{
lean_object* v_reuseFailAlloc_4950_; 
v_reuseFailAlloc_4950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4950_, 0, v___x_4943_);
lean_ctor_set(v_reuseFailAlloc_4950_, 1, v___x_4942_);
v___x_4945_ = v_reuseFailAlloc_4950_;
goto v_reusejp_4944_;
}
v_reusejp_4944_:
{
lean_object* v___x_4946_; lean_object* v___x_4948_; 
v___x_4946_ = lean_box(v_anyUnlocated_4871_);
if (v_isShared_4883_ == 0)
{
lean_ctor_set(v___x_4882_, 1, v___x_4945_);
lean_ctor_set(v___x_4882_, 0, v___x_4946_);
v___x_4948_ = v___x_4882_;
goto v_reusejp_4947_;
}
else
{
lean_object* v_reuseFailAlloc_4949_; 
v_reuseFailAlloc_4949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4949_, 0, v___x_4946_);
lean_ctor_set(v_reuseFailAlloc_4949_, 1, v___x_4945_);
v___x_4948_ = v_reuseFailAlloc_4949_;
goto v_reusejp_4947_;
}
v_reusejp_4947_:
{
v_a_4865_ = v___x_4948_;
goto v___jp_4864_;
}
}
}
}
}
}
}
else
{
lean_object* v_checkedModules_4954_; lean_object* v_records_4955_; uint8_t v_unlocated_4956_; lean_object* v___x_4957_; 
lean_inc_ref(v_outcome_4916_);
v_checkedModules_4954_ = lean_ctor_get(v_a_4915_, 1);
lean_inc(v_checkedModules_4954_);
lean_dec(v_a_4915_);
v_records_4955_ = lean_ctor_get(v_outcome_4916_, 0);
lean_inc_ref(v_records_4955_);
v_unlocated_4956_ = lean_ctor_get_uint8(v_outcome_4916_, sizeof(void*)*1);
lean_dec_ref_known(v_outcome_4916_, 1);
v___x_4957_ = l_Array_append___redArg(v_records_4908_, v_records_4955_);
lean_dec_ref(v_records_4955_);
if (v_unlocated_4956_ == 0)
{
lean_object* v___x_4959_; 
if (v_isShared_4900_ == 0)
{
lean_ctor_set(v___x_4899_, 0, v_checkedModules_4954_);
v___x_4959_ = v___x_4899_;
goto v_reusejp_4958_;
}
else
{
lean_object* v_reuseFailAlloc_4974_; 
v_reuseFailAlloc_4974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4974_, 0, v_checkedModules_4954_);
lean_ctor_set(v_reuseFailAlloc_4974_, 1, v_snd_4897_);
v___x_4959_ = v_reuseFailAlloc_4974_;
goto v_reusejp_4958_;
}
v_reusejp_4958_:
{
lean_object* v___x_4961_; 
if (v_isShared_4895_ == 0)
{
lean_ctor_set(v___x_4894_, 1, v___x_4959_);
lean_ctor_set(v___x_4894_, 0, v_codeQualityEntries_4909_);
v___x_4961_ = v___x_4894_;
goto v_reusejp_4960_;
}
else
{
lean_object* v_reuseFailAlloc_4973_; 
v_reuseFailAlloc_4973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4973_, 0, v_codeQualityEntries_4909_);
lean_ctor_set(v_reuseFailAlloc_4973_, 1, v___x_4959_);
v___x_4961_ = v_reuseFailAlloc_4973_;
goto v_reusejp_4960_;
}
v_reusejp_4960_:
{
lean_object* v___x_4963_; 
if (v_isShared_4891_ == 0)
{
lean_ctor_set(v___x_4890_, 1, v___x_4961_);
lean_ctor_set(v___x_4890_, 0, v___x_4957_);
v___x_4963_ = v___x_4890_;
goto v_reusejp_4962_;
}
else
{
lean_object* v_reuseFailAlloc_4972_; 
v_reuseFailAlloc_4972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4972_, 0, v___x_4957_);
lean_ctor_set(v_reuseFailAlloc_4972_, 1, v___x_4961_);
v___x_4963_ = v_reuseFailAlloc_4972_;
goto v_reusejp_4962_;
}
v_reusejp_4962_:
{
lean_object* v___x_4964_; lean_object* v___x_4966_; 
v___x_4964_ = lean_box(v_anyUnlocated_4907_);
if (v_isShared_4887_ == 0)
{
lean_ctor_set(v___x_4886_, 1, v___x_4963_);
lean_ctor_set(v___x_4886_, 0, v___x_4964_);
v___x_4966_ = v___x_4886_;
goto v_reusejp_4965_;
}
else
{
lean_object* v_reuseFailAlloc_4971_; 
v_reuseFailAlloc_4971_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4971_, 0, v___x_4964_);
lean_ctor_set(v_reuseFailAlloc_4971_, 1, v___x_4963_);
v___x_4966_ = v_reuseFailAlloc_4971_;
goto v_reusejp_4965_;
}
v_reusejp_4965_:
{
lean_object* v___x_4967_; lean_object* v___x_4969_; 
v___x_4967_ = lean_box(v_anyFailed_4906_);
if (v_isShared_4883_ == 0)
{
lean_ctor_set(v___x_4882_, 1, v___x_4966_);
lean_ctor_set(v___x_4882_, 0, v___x_4967_);
v___x_4969_ = v___x_4882_;
goto v_reusejp_4968_;
}
else
{
lean_object* v_reuseFailAlloc_4970_; 
v_reuseFailAlloc_4970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4970_, 0, v___x_4967_);
lean_ctor_set(v_reuseFailAlloc_4970_, 1, v___x_4966_);
v___x_4969_ = v_reuseFailAlloc_4970_;
goto v_reusejp_4968_;
}
v_reusejp_4968_:
{
v_a_4865_ = v___x_4969_;
goto v___jp_4864_;
}
}
}
}
}
}
else
{
lean_object* v___x_4976_; 
if (v_isShared_4900_ == 0)
{
lean_ctor_set(v___x_4899_, 0, v_checkedModules_4954_);
v___x_4976_ = v___x_4899_;
goto v_reusejp_4975_;
}
else
{
lean_object* v_reuseFailAlloc_4991_; 
v_reuseFailAlloc_4991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4991_, 0, v_checkedModules_4954_);
lean_ctor_set(v_reuseFailAlloc_4991_, 1, v_snd_4897_);
v___x_4976_ = v_reuseFailAlloc_4991_;
goto v_reusejp_4975_;
}
v_reusejp_4975_:
{
lean_object* v___x_4978_; 
if (v_isShared_4895_ == 0)
{
lean_ctor_set(v___x_4894_, 1, v___x_4976_);
lean_ctor_set(v___x_4894_, 0, v_codeQualityEntries_4909_);
v___x_4978_ = v___x_4894_;
goto v_reusejp_4977_;
}
else
{
lean_object* v_reuseFailAlloc_4990_; 
v_reuseFailAlloc_4990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4990_, 0, v_codeQualityEntries_4909_);
lean_ctor_set(v_reuseFailAlloc_4990_, 1, v___x_4976_);
v___x_4978_ = v_reuseFailAlloc_4990_;
goto v_reusejp_4977_;
}
v_reusejp_4977_:
{
lean_object* v___x_4980_; 
if (v_isShared_4891_ == 0)
{
lean_ctor_set(v___x_4890_, 1, v___x_4978_);
lean_ctor_set(v___x_4890_, 0, v___x_4957_);
v___x_4980_ = v___x_4890_;
goto v_reusejp_4979_;
}
else
{
lean_object* v_reuseFailAlloc_4989_; 
v_reuseFailAlloc_4989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4989_, 0, v___x_4957_);
lean_ctor_set(v_reuseFailAlloc_4989_, 1, v___x_4978_);
v___x_4980_ = v_reuseFailAlloc_4989_;
goto v_reusejp_4979_;
}
v_reusejp_4979_:
{
lean_object* v___x_4981_; lean_object* v___x_4983_; 
v___x_4981_ = lean_box(v_anyUnlocated_4871_);
if (v_isShared_4887_ == 0)
{
lean_ctor_set(v___x_4886_, 1, v___x_4980_);
lean_ctor_set(v___x_4886_, 0, v___x_4981_);
v___x_4983_ = v___x_4886_;
goto v_reusejp_4982_;
}
else
{
lean_object* v_reuseFailAlloc_4988_; 
v_reuseFailAlloc_4988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4988_, 0, v___x_4981_);
lean_ctor_set(v_reuseFailAlloc_4988_, 1, v___x_4980_);
v___x_4983_ = v_reuseFailAlloc_4988_;
goto v_reusejp_4982_;
}
v_reusejp_4982_:
{
lean_object* v___x_4984_; lean_object* v___x_4986_; 
v___x_4984_ = lean_box(v_anyFailed_4906_);
if (v_isShared_4883_ == 0)
{
lean_ctor_set(v___x_4882_, 1, v___x_4983_);
lean_ctor_set(v___x_4882_, 0, v___x_4984_);
v___x_4986_ = v___x_4882_;
goto v_reusejp_4985_;
}
else
{
lean_object* v_reuseFailAlloc_4987_; 
v_reuseFailAlloc_4987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4987_, 0, v___x_4984_);
lean_ctor_set(v_reuseFailAlloc_4987_, 1, v___x_4983_);
v___x_4986_ = v_reuseFailAlloc_4987_;
goto v_reusejp_4985_;
}
v_reusejp_4985_:
{
v_a_4865_ = v___x_4986_;
goto v___jp_4864_;
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
lean_object* v_a_4992_; lean_object* v___x_4994_; uint8_t v_isShared_4995_; uint8_t v_isSharedCheck_4999_; 
lean_dec_ref(v_codeQualityEntries_4909_);
lean_dec_ref(v_records_4908_);
lean_del_object(v___x_4899_);
lean_dec(v_snd_4897_);
lean_del_object(v___x_4894_);
lean_del_object(v___x_4890_);
lean_del_object(v___x_4886_);
lean_del_object(v___x_4882_);
lean_dec(v___x_4858_);
v_a_4992_ = lean_ctor_get(v___x_4914_, 0);
v_isSharedCheck_4999_ = !lean_is_exclusive(v___x_4914_);
if (v_isSharedCheck_4999_ == 0)
{
v___x_4994_ = v___x_4914_;
v_isShared_4995_ = v_isSharedCheck_4999_;
goto v_resetjp_4993_;
}
else
{
lean_inc(v_a_4992_);
lean_dec(v___x_4914_);
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
else
{
lean_object* v___x_5000_; lean_object* v_fst_5001_; lean_object* v_snd_5002_; lean_object* v___x_5004_; uint8_t v_isShared_5005_; uint8_t v_isSharedCheck_5054_; 
lean_del_object(v___x_4882_);
v___x_5000_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality(v_args_4857_, v___y_4905_, v___y_4904_, v_a_4902_, v_snd_4897_);
lean_dec_ref(v___y_4905_);
v_fst_5001_ = lean_ctor_get(v___x_5000_, 0);
v_snd_5002_ = lean_ctor_get(v___x_5000_, 1);
v_isSharedCheck_5054_ = !lean_is_exclusive(v___x_5000_);
if (v_isSharedCheck_5054_ == 0)
{
v___x_5004_ = v___x_5000_;
v_isShared_5005_ = v_isSharedCheck_5054_;
goto v_resetjp_5003_;
}
else
{
lean_inc(v_snd_5002_);
lean_inc(v_fst_5001_);
lean_dec(v___x_5000_);
v___x_5004_ = lean_box(0);
v_isShared_5005_ = v_isSharedCheck_5054_;
goto v_resetjp_5003_;
}
v_resetjp_5003_:
{
lean_object* v___x_5006_; lean_object* v___x_5007_; 
v___x_5006_ = l_Array_append___redArg(v_codeQualityEntries_4909_, v_fst_5001_);
lean_dec(v_fst_5001_);
lean_inc(v_a_4902_);
lean_inc(v___x_4858_);
v___x_5007_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks(v___x_4858_, v___y_4904_, v_a_4902_);
if (lean_obj_tag(v___x_5007_) == 0)
{
lean_object* v_a_5008_; lean_object* v_entries_5009_; uint8_t v_failed_5010_; lean_object* v___x_5011_; 
v_a_5008_ = lean_ctor_get(v___x_5007_, 0);
lean_inc(v_a_5008_);
lean_dec_ref_known(v___x_5007_, 1);
v_entries_5009_ = lean_ctor_get(v_a_5008_, 0);
lean_inc_ref(v_entries_5009_);
v_failed_5010_ = lean_ctor_get_uint8(v_a_5008_, sizeof(void*)*1);
lean_dec(v_a_5008_);
v___x_5011_ = l_Array_append___redArg(v___x_5006_, v_entries_5009_);
lean_dec_ref(v_entries_5009_);
if (v_failed_5010_ == 0)
{
lean_object* v___x_5013_; 
if (v_isShared_5005_ == 0)
{
lean_ctor_set(v___x_5004_, 0, v_fst_4896_);
v___x_5013_ = v___x_5004_;
goto v_reusejp_5012_;
}
else
{
lean_object* v_reuseFailAlloc_5028_; 
v_reuseFailAlloc_5028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5028_, 0, v_fst_4896_);
lean_ctor_set(v_reuseFailAlloc_5028_, 1, v_snd_5002_);
v___x_5013_ = v_reuseFailAlloc_5028_;
goto v_reusejp_5012_;
}
v_reusejp_5012_:
{
lean_object* v___x_5015_; 
if (v_isShared_4900_ == 0)
{
lean_ctor_set(v___x_4899_, 1, v___x_5013_);
lean_ctor_set(v___x_4899_, 0, v___x_5011_);
v___x_5015_ = v___x_4899_;
goto v_reusejp_5014_;
}
else
{
lean_object* v_reuseFailAlloc_5027_; 
v_reuseFailAlloc_5027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5027_, 0, v___x_5011_);
lean_ctor_set(v_reuseFailAlloc_5027_, 1, v___x_5013_);
v___x_5015_ = v_reuseFailAlloc_5027_;
goto v_reusejp_5014_;
}
v_reusejp_5014_:
{
lean_object* v___x_5017_; 
if (v_isShared_4895_ == 0)
{
lean_ctor_set(v___x_4894_, 1, v___x_5015_);
lean_ctor_set(v___x_4894_, 0, v_records_4908_);
v___x_5017_ = v___x_4894_;
goto v_reusejp_5016_;
}
else
{
lean_object* v_reuseFailAlloc_5026_; 
v_reuseFailAlloc_5026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5026_, 0, v_records_4908_);
lean_ctor_set(v_reuseFailAlloc_5026_, 1, v___x_5015_);
v___x_5017_ = v_reuseFailAlloc_5026_;
goto v_reusejp_5016_;
}
v_reusejp_5016_:
{
lean_object* v___x_5018_; lean_object* v___x_5020_; 
v___x_5018_ = lean_box(v_anyUnlocated_4907_);
if (v_isShared_4891_ == 0)
{
lean_ctor_set(v___x_4890_, 1, v___x_5017_);
lean_ctor_set(v___x_4890_, 0, v___x_5018_);
v___x_5020_ = v___x_4890_;
goto v_reusejp_5019_;
}
else
{
lean_object* v_reuseFailAlloc_5025_; 
v_reuseFailAlloc_5025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5025_, 0, v___x_5018_);
lean_ctor_set(v_reuseFailAlloc_5025_, 1, v___x_5017_);
v___x_5020_ = v_reuseFailAlloc_5025_;
goto v_reusejp_5019_;
}
v_reusejp_5019_:
{
lean_object* v___x_5021_; lean_object* v___x_5023_; 
v___x_5021_ = lean_box(v_anyFailed_4906_);
if (v_isShared_4887_ == 0)
{
lean_ctor_set(v___x_4886_, 1, v___x_5020_);
lean_ctor_set(v___x_4886_, 0, v___x_5021_);
v___x_5023_ = v___x_4886_;
goto v_reusejp_5022_;
}
else
{
lean_object* v_reuseFailAlloc_5024_; 
v_reuseFailAlloc_5024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5024_, 0, v___x_5021_);
lean_ctor_set(v_reuseFailAlloc_5024_, 1, v___x_5020_);
v___x_5023_ = v_reuseFailAlloc_5024_;
goto v_reusejp_5022_;
}
v_reusejp_5022_:
{
v_a_4865_ = v___x_5023_;
goto v___jp_4864_;
}
}
}
}
}
}
else
{
lean_object* v___x_5030_; 
if (v_isShared_5005_ == 0)
{
lean_ctor_set(v___x_5004_, 0, v_fst_4896_);
v___x_5030_ = v___x_5004_;
goto v_reusejp_5029_;
}
else
{
lean_object* v_reuseFailAlloc_5045_; 
v_reuseFailAlloc_5045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5045_, 0, v_fst_4896_);
lean_ctor_set(v_reuseFailAlloc_5045_, 1, v_snd_5002_);
v___x_5030_ = v_reuseFailAlloc_5045_;
goto v_reusejp_5029_;
}
v_reusejp_5029_:
{
lean_object* v___x_5032_; 
if (v_isShared_4900_ == 0)
{
lean_ctor_set(v___x_4899_, 1, v___x_5030_);
lean_ctor_set(v___x_4899_, 0, v___x_5011_);
v___x_5032_ = v___x_4899_;
goto v_reusejp_5031_;
}
else
{
lean_object* v_reuseFailAlloc_5044_; 
v_reuseFailAlloc_5044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5044_, 0, v___x_5011_);
lean_ctor_set(v_reuseFailAlloc_5044_, 1, v___x_5030_);
v___x_5032_ = v_reuseFailAlloc_5044_;
goto v_reusejp_5031_;
}
v_reusejp_5031_:
{
lean_object* v___x_5034_; 
if (v_isShared_4895_ == 0)
{
lean_ctor_set(v___x_4894_, 1, v___x_5032_);
lean_ctor_set(v___x_4894_, 0, v_records_4908_);
v___x_5034_ = v___x_4894_;
goto v_reusejp_5033_;
}
else
{
lean_object* v_reuseFailAlloc_5043_; 
v_reuseFailAlloc_5043_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5043_, 0, v_records_4908_);
lean_ctor_set(v_reuseFailAlloc_5043_, 1, v___x_5032_);
v___x_5034_ = v_reuseFailAlloc_5043_;
goto v_reusejp_5033_;
}
v_reusejp_5033_:
{
lean_object* v___x_5035_; lean_object* v___x_5037_; 
v___x_5035_ = lean_box(v_anyUnlocated_4907_);
if (v_isShared_4891_ == 0)
{
lean_ctor_set(v___x_4890_, 1, v___x_5034_);
lean_ctor_set(v___x_4890_, 0, v___x_5035_);
v___x_5037_ = v___x_4890_;
goto v_reusejp_5036_;
}
else
{
lean_object* v_reuseFailAlloc_5042_; 
v_reuseFailAlloc_5042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5042_, 0, v___x_5035_);
lean_ctor_set(v_reuseFailAlloc_5042_, 1, v___x_5034_);
v___x_5037_ = v_reuseFailAlloc_5042_;
goto v_reusejp_5036_;
}
v_reusejp_5036_:
{
lean_object* v___x_5038_; lean_object* v___x_5040_; 
v___x_5038_ = lean_box(v_anyUnlocated_4871_);
if (v_isShared_4887_ == 0)
{
lean_ctor_set(v___x_4886_, 1, v___x_5037_);
lean_ctor_set(v___x_4886_, 0, v___x_5038_);
v___x_5040_ = v___x_4886_;
goto v_reusejp_5039_;
}
else
{
lean_object* v_reuseFailAlloc_5041_; 
v_reuseFailAlloc_5041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5041_, 0, v___x_5038_);
lean_ctor_set(v_reuseFailAlloc_5041_, 1, v___x_5037_);
v___x_5040_ = v_reuseFailAlloc_5041_;
goto v_reusejp_5039_;
}
v_reusejp_5039_:
{
v_a_4865_ = v___x_5040_;
goto v___jp_4864_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5046_; lean_object* v___x_5048_; uint8_t v_isShared_5049_; uint8_t v_isSharedCheck_5053_; 
lean_dec_ref(v___x_5006_);
lean_del_object(v___x_5004_);
lean_dec(v_snd_5002_);
lean_dec_ref(v_records_4908_);
lean_del_object(v___x_4899_);
lean_dec(v_fst_4896_);
lean_del_object(v___x_4894_);
lean_del_object(v___x_4890_);
lean_del_object(v___x_4886_);
lean_dec(v___x_4858_);
v_a_5046_ = lean_ctor_get(v___x_5007_, 0);
v_isSharedCheck_5053_ = !lean_is_exclusive(v___x_5007_);
if (v_isSharedCheck_5053_ == 0)
{
v___x_5048_ = v___x_5007_;
v_isShared_5049_ = v_isSharedCheck_5053_;
goto v_resetjp_5047_;
}
else
{
lean_inc(v_a_5046_);
lean_dec(v___x_5007_);
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
lean_ctor_set(v_reuseFailAlloc_5052_, 0, v_a_5046_);
v___x_5051_ = v_reuseFailAlloc_5052_;
goto v_reusejp_5050_;
}
v_reusejp_5050_:
{
return v___x_5051_;
}
}
}
}
}
}
v___jp_5055_:
{
lean_object* v___x_5062_; 
lean_inc(v_a_4902_);
lean_inc_ref(v___y_5056_);
lean_inc(v___x_4858_);
lean_inc_ref(v___y_5057_);
v___x_5062_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters(v_args_4857_, v___y_5057_, v___x_4858_, v___y_5056_, v_a_4902_);
if (lean_obj_tag(v___x_5062_) == 0)
{
lean_object* v_a_5063_; 
v_a_5063_ = lean_ctor_get(v___x_5062_, 0);
lean_inc(v_a_5063_);
lean_dec_ref_known(v___x_5062_, 1);
switch(lean_obj_tag(v_a_5063_))
{
case 0:
{
uint8_t v_failed_5064_; 
v_failed_5064_ = lean_ctor_get_uint8(v_a_5063_, 0);
lean_dec_ref_known(v_a_5063_, 0);
if (v_failed_5064_ == 0)
{
v___y_4904_ = v___y_5056_;
v___y_4905_ = v___y_5057_;
v_anyFailed_4906_ = v_anyFailed_5058_;
v_anyUnlocated_4907_ = v_anyUnlocated_5059_;
v_records_4908_ = v_records_5060_;
v_codeQualityEntries_4909_ = v_codeQualityEntries_5061_;
goto v___jp_4903_;
}
else
{
v___y_4904_ = v___y_5056_;
v___y_4905_ = v___y_5057_;
v_anyFailed_4906_ = v_anyUnlocated_4871_;
v_anyUnlocated_4907_ = v_anyUnlocated_5059_;
v_records_4908_ = v_records_5060_;
v_codeQualityEntries_4909_ = v_codeQualityEntries_5061_;
goto v___jp_4903_;
}
}
case 1:
{
lean_object* v_records_5065_; uint8_t v_unlocated_5066_; lean_object* v___x_5067_; 
v_records_5065_ = lean_ctor_get(v_a_5063_, 0);
lean_inc_ref(v_records_5065_);
v_unlocated_5066_ = lean_ctor_get_uint8(v_a_5063_, sizeof(void*)*1);
lean_dec_ref_known(v_a_5063_, 1);
v___x_5067_ = l_Array_append___redArg(v_records_5060_, v_records_5065_);
lean_dec_ref(v_records_5065_);
if (v_unlocated_5066_ == 0)
{
v___y_4904_ = v___y_5056_;
v___y_4905_ = v___y_5057_;
v_anyFailed_4906_ = v_anyFailed_5058_;
v_anyUnlocated_4907_ = v_anyUnlocated_5059_;
v_records_4908_ = v___x_5067_;
v_codeQualityEntries_4909_ = v_codeQualityEntries_5061_;
goto v___jp_4903_;
}
else
{
v___y_4904_ = v___y_5056_;
v___y_4905_ = v___y_5057_;
v_anyFailed_4906_ = v_anyFailed_5058_;
v_anyUnlocated_4907_ = v_anyUnlocated_4871_;
v_records_4908_ = v___x_5067_;
v_codeQualityEntries_4909_ = v_codeQualityEntries_5061_;
goto v___jp_4903_;
}
}
default: 
{
lean_object* v_entries_5068_; lean_object* v___x_5069_; 
v_entries_5068_ = lean_ctor_get(v_a_5063_, 0);
lean_inc_ref(v_entries_5068_);
lean_dec_ref_known(v_a_5063_, 1);
v___x_5069_ = l_Array_append___redArg(v_codeQualityEntries_5061_, v_entries_5068_);
lean_dec_ref(v_entries_5068_);
v___y_4904_ = v___y_5056_;
v___y_4905_ = v___y_5057_;
v_anyFailed_4906_ = v_anyFailed_5058_;
v_anyUnlocated_4907_ = v_anyUnlocated_5059_;
v_records_4908_ = v_records_5060_;
v_codeQualityEntries_4909_ = v___x_5069_;
goto v___jp_4903_;
}
}
}
else
{
lean_object* v_a_5070_; lean_object* v___x_5072_; uint8_t v_isShared_5073_; uint8_t v_isSharedCheck_5077_; 
lean_dec_ref(v_codeQualityEntries_5061_);
lean_dec_ref(v_records_5060_);
lean_dec_ref(v___y_5057_);
lean_dec_ref(v___y_5056_);
lean_del_object(v___x_4899_);
lean_dec(v_snd_4897_);
lean_dec(v_fst_4896_);
lean_del_object(v___x_4894_);
lean_del_object(v___x_4890_);
lean_del_object(v___x_4886_);
lean_del_object(v___x_4882_);
lean_dec(v___x_4858_);
v_a_5070_ = lean_ctor_get(v___x_5062_, 0);
v_isSharedCheck_5077_ = !lean_is_exclusive(v___x_5062_);
if (v_isSharedCheck_5077_ == 0)
{
v___x_5072_ = v___x_5062_;
v_isShared_5073_ = v_isSharedCheck_5077_;
goto v_resetjp_5071_;
}
else
{
lean_inc(v_a_5070_);
lean_dec(v___x_5062_);
v___x_5072_ = lean_box(0);
v_isShared_5073_ = v_isSharedCheck_5077_;
goto v_resetjp_5071_;
}
v_resetjp_5071_:
{
lean_object* v___x_5075_; 
if (v_isShared_5073_ == 0)
{
v___x_5075_ = v___x_5072_;
goto v_reusejp_5074_;
}
else
{
lean_object* v_reuseFailAlloc_5076_; 
v_reuseFailAlloc_5076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5076_, 0, v_a_5070_);
v___x_5075_ = v_reuseFailAlloc_5076_;
goto v_reusejp_5074_;
}
v_reusejp_5074_:
{
return v___x_5075_;
}
}
}
}
v___jp_5078_:
{
lean_object* v___x_5081_; lean_object* v_toEnvExtension_5082_; lean_object* v_asyncMode_5083_; lean_object* v___x_5084_; lean_object* v___x_5085_; lean_object* v_merged_5086_; lean_object* v___x_5088_; uint8_t v_isShared_5089_; uint8_t v_isSharedCheck_5117_; 
v___x_5081_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_5082_ = lean_ctor_get(v___x_5081_, 0);
v_asyncMode_5083_ = lean_ctor_get(v_toEnvExtension_5082_, 2);
v___x_5084_ = lean_box(0);
lean_inc_ref(v___y_5079_);
v___x_5085_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4901_, v___x_5081_, v___y_5079_, v_asyncMode_5083_, v___x_5084_);
v_merged_5086_ = lean_ctor_get(v___x_5085_, 0);
v_isSharedCheck_5117_ = !lean_is_exclusive(v___x_5085_);
if (v_isSharedCheck_5117_ == 0)
{
lean_object* v_unused_5118_; 
v_unused_5118_ = lean_ctor_get(v___x_5085_, 1);
lean_dec(v_unused_5118_);
v___x_5088_ = v___x_5085_;
v_isShared_5089_ = v_isSharedCheck_5117_;
goto v_resetjp_5087_;
}
else
{
lean_inc(v_merged_5086_);
lean_dec(v___x_5085_);
v___x_5088_ = lean_box(0);
v_isShared_5089_ = v_isSharedCheck_5117_;
goto v_resetjp_5087_;
}
v_resetjp_5087_:
{
lean_object* v___x_5091_; 
if (v_isShared_5089_ == 0)
{
lean_ctor_set(v___x_5088_, 1, v_merged_5086_);
lean_ctor_set(v___x_5088_, 0, v___y_5080_);
v___x_5091_ = v___x_5088_;
goto v_reusejp_5090_;
}
else
{
lean_object* v_reuseFailAlloc_5116_; 
v_reuseFailAlloc_5116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5116_, 0, v___y_5080_);
lean_ctor_set(v_reuseFailAlloc_5116_, 1, v_merged_5086_);
v___x_5091_ = v_reuseFailAlloc_5116_;
goto v_reusejp_5090_;
}
v_reusejp_5090_:
{
lean_object* v___x_5092_; 
v___x_5092_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters(v_args_4857_, v___x_5091_, v___y_5079_, v_a_4902_);
if (lean_obj_tag(v___x_5092_) == 0)
{
lean_object* v_a_5093_; 
v_a_5093_ = lean_ctor_get(v___x_5092_, 0);
lean_inc(v_a_5093_);
lean_dec_ref_known(v___x_5092_, 1);
switch(lean_obj_tag(v_a_5093_))
{
case 0:
{
uint8_t v___x_5094_; 
v___x_5094_ = lean_unbox(v_fst_4880_);
lean_dec(v_fst_4880_);
if (v___x_5094_ == 0)
{
uint8_t v_failed_5095_; uint8_t v___x_5096_; 
v_failed_5095_ = lean_ctor_get_uint8(v_a_5093_, 0);
lean_dec_ref_known(v_a_5093_, 0);
v___x_5096_ = lean_unbox(v_fst_4884_);
lean_dec(v_fst_4884_);
v___y_5056_ = v___y_5079_;
v___y_5057_ = v___x_5091_;
v_anyFailed_5058_ = v_failed_5095_;
v_anyUnlocated_5059_ = v___x_5096_;
v_records_5060_ = v_fst_4888_;
v_codeQualityEntries_5061_ = v_fst_4892_;
goto v___jp_5055_;
}
else
{
uint8_t v___x_5097_; 
lean_dec_ref_known(v_a_5093_, 0);
v___x_5097_ = lean_unbox(v_fst_4884_);
lean_dec(v_fst_4884_);
v___y_5056_ = v___y_5079_;
v___y_5057_ = v___x_5091_;
v_anyFailed_5058_ = v_anyUnlocated_4871_;
v_anyUnlocated_5059_ = v___x_5097_;
v_records_5060_ = v_fst_4888_;
v_codeQualityEntries_5061_ = v_fst_4892_;
goto v___jp_5055_;
}
}
case 1:
{
lean_object* v_records_5098_; uint8_t v_unlocated_5099_; lean_object* v___x_5100_; 
v_records_5098_ = lean_ctor_get(v_a_5093_, 0);
lean_inc_ref(v_records_5098_);
v_unlocated_5099_ = lean_ctor_get_uint8(v_a_5093_, sizeof(void*)*1);
lean_dec_ref_known(v_a_5093_, 1);
v___x_5100_ = l_Array_append___redArg(v_fst_4888_, v_records_5098_);
lean_dec_ref(v_records_5098_);
if (v_unlocated_5099_ == 0)
{
uint8_t v___x_5101_; uint8_t v___x_5102_; 
v___x_5101_ = lean_unbox(v_fst_4880_);
lean_dec(v_fst_4880_);
v___x_5102_ = lean_unbox(v_fst_4884_);
lean_dec(v_fst_4884_);
v___y_5056_ = v___y_5079_;
v___y_5057_ = v___x_5091_;
v_anyFailed_5058_ = v___x_5101_;
v_anyUnlocated_5059_ = v___x_5102_;
v_records_5060_ = v___x_5100_;
v_codeQualityEntries_5061_ = v_fst_4892_;
goto v___jp_5055_;
}
else
{
uint8_t v___x_5103_; 
lean_dec(v_fst_4884_);
v___x_5103_ = lean_unbox(v_fst_4880_);
lean_dec(v_fst_4880_);
v___y_5056_ = v___y_5079_;
v___y_5057_ = v___x_5091_;
v_anyFailed_5058_ = v___x_5103_;
v_anyUnlocated_5059_ = v_anyUnlocated_4871_;
v_records_5060_ = v___x_5100_;
v_codeQualityEntries_5061_ = v_fst_4892_;
goto v___jp_5055_;
}
}
default: 
{
lean_object* v_entries_5104_; lean_object* v___x_5105_; uint8_t v___x_5106_; uint8_t v___x_5107_; 
v_entries_5104_ = lean_ctor_get(v_a_5093_, 0);
lean_inc_ref(v_entries_5104_);
lean_dec_ref_known(v_a_5093_, 1);
v___x_5105_ = l_Array_append___redArg(v_fst_4892_, v_entries_5104_);
lean_dec_ref(v_entries_5104_);
v___x_5106_ = lean_unbox(v_fst_4880_);
lean_dec(v_fst_4880_);
v___x_5107_ = lean_unbox(v_fst_4884_);
lean_dec(v_fst_4884_);
v___y_5056_ = v___y_5079_;
v___y_5057_ = v___x_5091_;
v_anyFailed_5058_ = v___x_5106_;
v_anyUnlocated_5059_ = v___x_5107_;
v_records_5060_ = v_fst_4888_;
v_codeQualityEntries_5061_ = v___x_5105_;
goto v___jp_5055_;
}
}
}
else
{
lean_object* v_a_5108_; lean_object* v___x_5110_; uint8_t v_isShared_5111_; uint8_t v_isSharedCheck_5115_; 
lean_dec_ref(v___x_5091_);
lean_dec_ref(v___y_5079_);
lean_del_object(v___x_4899_);
lean_dec(v_snd_4897_);
lean_dec(v_fst_4896_);
lean_del_object(v___x_4894_);
lean_dec(v_fst_4892_);
lean_del_object(v___x_4890_);
lean_dec(v_fst_4888_);
lean_del_object(v___x_4886_);
lean_dec(v_fst_4884_);
lean_del_object(v___x_4882_);
lean_dec(v_fst_4880_);
lean_dec(v___x_4858_);
v_a_5108_ = lean_ctor_get(v___x_5092_, 0);
v_isSharedCheck_5115_ = !lean_is_exclusive(v___x_5092_);
if (v_isSharedCheck_5115_ == 0)
{
v___x_5110_ = v___x_5092_;
v_isShared_5111_ = v_isSharedCheck_5115_;
goto v_resetjp_5109_;
}
else
{
lean_inc(v_a_5108_);
lean_dec(v___x_5092_);
v___x_5110_ = lean_box(0);
v_isShared_5111_ = v_isSharedCheck_5115_;
goto v_resetjp_5109_;
}
v_resetjp_5109_:
{
lean_object* v___x_5113_; 
if (v_isShared_5111_ == 0)
{
v___x_5113_ = v___x_5110_;
goto v_reusejp_5112_;
}
else
{
lean_object* v_reuseFailAlloc_5114_; 
v_reuseFailAlloc_5114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5114_, 0, v_a_5108_);
v___x_5113_ = v_reuseFailAlloc_5114_;
goto v_reusejp_5112_;
}
v_reusejp_5112_:
{
return v___x_5113_;
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
v___jp_4864_:
{
size_t v___x_4866_; size_t v___x_4867_; 
v___x_4866_ = ((size_t)1ULL);
v___x_4867_ = lean_usize_add(v_i_4861_, v___x_4866_);
v_i_4861_ = v___x_4867_;
v_b_4862_ = v_a_4865_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___boxed(lean_object* v___x_5195_, lean_object* v_checkImports_5196_, lean_object* v_args_5197_, lean_object* v___x_5198_, lean_object* v_as_5199_, lean_object* v_sz_5200_, lean_object* v_i_5201_, lean_object* v_b_5202_, lean_object* v___y_5203_){
_start:
{
size_t v_sz_boxed_5204_; size_t v_i_boxed_5205_; lean_object* v_res_5206_; 
v_sz_boxed_5204_ = lean_unbox_usize(v_sz_5200_);
lean_dec(v_sz_5200_);
v_i_boxed_5205_ = lean_unbox_usize(v_i_5201_);
lean_dec(v_i_5201_);
v_res_5206_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3(v___x_5195_, v_checkImports_5196_, v_args_5197_, v___x_5198_, v_as_5199_, v_sz_boxed_5204_, v_i_boxed_5205_, v_b_5202_);
lean_dec_ref(v_as_5199_);
lean_dec_ref(v_args_5197_);
lean_dec_ref(v_checkImports_5196_);
lean_dec(v___x_5195_);
return v_res_5206_;
}
}
static lean_object* _init_l_Lake_BuiltinLint_run___closed__0(void){
_start:
{
lean_object* v___x_5207_; lean_object* v___x_5208_; 
v___x_5207_ = l_Lean_NameSet_empty;
v___x_5208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5208_, 0, v___x_5207_);
lean_ctor_set(v___x_5208_, 1, v___x_5207_);
return v___x_5208_;
}
}
static lean_object* _init_l_Lake_BuiltinLint_run___closed__1(void){
_start:
{
lean_object* v___x_5209_; lean_object* v___x_5210_; lean_object* v___x_5211_; 
v___x_5209_ = lean_obj_once(&l_Lake_BuiltinLint_run___closed__0, &l_Lake_BuiltinLint_run___closed__0_once, _init_l_Lake_BuiltinLint_run___closed__0);
v___x_5210_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__4));
v___x_5211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5211_, 0, v___x_5210_);
lean_ctor_set(v___x_5211_, 1, v___x_5209_);
return v___x_5211_;
}
}
static lean_object* _init_l_Lake_BuiltinLint_run___closed__2(void){
_start:
{
lean_object* v___x_5212_; lean_object* v___x_5213_; lean_object* v___x_5214_; 
v___x_5212_ = lean_obj_once(&l_Lake_BuiltinLint_run___closed__1, &l_Lake_BuiltinLint_run___closed__1_once, _init_l_Lake_BuiltinLint_run___closed__1);
v___x_5213_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__4));
v___x_5214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5214_, 0, v___x_5213_);
lean_ctor_set(v___x_5214_, 1, v___x_5212_);
return v___x_5214_;
}
}
static lean_object* _init_l_Lake_BuiltinLint_run___boxed__const__1(void){
_start:
{
uint32_t v___x_5216_; lean_object* v___x_5217_; 
v___x_5216_ = 0;
v___x_5217_ = lean_box_uint32(v___x_5216_);
return v___x_5217_;
}
}
static lean_object* _init_l_Lake_BuiltinLint_run___boxed__const__2(void){
_start:
{
uint32_t v___x_5218_; lean_object* v___x_5219_; 
v___x_5218_ = 1;
v___x_5219_ = lean_box_uint32(v___x_5218_);
return v___x_5219_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_run(lean_object* v_args_5220_){
_start:
{
lean_object* v_mods_5222_; uint8_t v_mode_5223_; lean_object* v_checks_5224_; lean_object* v_srcSearchPath_5225_; lean_object* v___x_5226_; lean_object* v___x_5227_; uint8_t v_anyFailed_5228_; 
v_mods_5222_ = lean_ctor_get(v_args_5220_, 1);
lean_inc_ref(v_mods_5222_);
v_mode_5223_ = lean_ctor_get_uint8(v_args_5220_, sizeof(void*)*4 + 1);
v_checks_5224_ = lean_ctor_get(v_args_5220_, 2);
v_srcSearchPath_5225_ = lean_ctor_get(v_args_5220_, 3);
v___x_5226_ = lean_array_get_size(v_mods_5222_);
v___x_5227_ = lean_unsigned_to_nat(0u);
v_anyFailed_5228_ = lean_nat_dec_eq(v___x_5226_, v___x_5227_);
if (v_anyFailed_5228_ == 0)
{
size_t v_sz_5229_; size_t v___x_5230_; lean_object* v_checkImports_5231_; lean_object* v___x_5232_; 
v_sz_5229_ = lean_array_size(v_checks_5224_);
v___x_5230_ = ((size_t)0ULL);
lean_inc_ref(v_checks_5224_);
v_checkImports_5231_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_run_spec__1(v___x_5226_, v_sz_5229_, v___x_5230_, v_checks_5224_);
v___x_5232_ = l_Lean_getSrcSearchPath();
if (lean_obj_tag(v___x_5232_) == 0)
{
lean_object* v_a_5233_; lean_object* v___x_5234_; lean_object* v___x_5235_; lean_object* v___x_5236_; lean_object* v___x_5237_; lean_object* v___x_5238_; lean_object* v___x_5239_; size_t v_sz_5240_; lean_object* v___x_5241_; 
v_a_5233_ = lean_ctor_get(v___x_5232_, 0);
lean_inc(v_a_5233_);
lean_dec_ref_known(v___x_5232_, 1);
lean_inc(v_srcSearchPath_5225_);
v___x_5234_ = l_List_appendTR___redArg(v_srcSearchPath_5225_, v_a_5233_);
v___x_5235_ = lean_obj_once(&l_Lake_BuiltinLint_run___closed__2, &l_Lake_BuiltinLint_run___closed__2_once, _init_l_Lake_BuiltinLint_run___closed__2);
v___x_5236_ = lean_box(v_anyFailed_5228_);
v___x_5237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5237_, 0, v___x_5236_);
lean_ctor_set(v___x_5237_, 1, v___x_5235_);
v___x_5238_ = lean_box(v_anyFailed_5228_);
v___x_5239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5239_, 0, v___x_5238_);
lean_ctor_set(v___x_5239_, 1, v___x_5237_);
v_sz_5240_ = lean_array_size(v_mods_5222_);
v___x_5241_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3(v___x_5226_, v_checkImports_5231_, v_args_5220_, v___x_5234_, v_mods_5222_, v_sz_5240_, v___x_5230_, v___x_5239_);
lean_dec_ref(v_mods_5222_);
lean_dec_ref(v_args_5220_);
lean_dec_ref(v_checkImports_5231_);
if (lean_obj_tag(v___x_5241_) == 0)
{
lean_object* v_a_5242_; lean_object* v___x_5244_; uint8_t v_isShared_5245_; uint8_t v_isSharedCheck_5313_; 
v_a_5242_ = lean_ctor_get(v___x_5241_, 0);
v_isSharedCheck_5313_ = !lean_is_exclusive(v___x_5241_);
if (v_isSharedCheck_5313_ == 0)
{
v___x_5244_ = v___x_5241_;
v_isShared_5245_ = v_isSharedCheck_5313_;
goto v_resetjp_5243_;
}
else
{
lean_inc(v_a_5242_);
lean_dec(v___x_5241_);
v___x_5244_ = lean_box(0);
v_isShared_5245_ = v_isSharedCheck_5313_;
goto v_resetjp_5243_;
}
v_resetjp_5243_:
{
switch(v_mode_5223_)
{
case 0:
{
lean_object* v_fst_5246_; uint8_t v___x_5247_; 
v_fst_5246_ = lean_ctor_get(v_a_5242_, 0);
lean_inc(v_fst_5246_);
lean_dec(v_a_5242_);
v___x_5247_ = lean_unbox(v_fst_5246_);
lean_dec(v_fst_5246_);
if (v___x_5247_ == 0)
{
lean_object* v___x_5248_; lean_object* v___x_5250_; 
v___x_5248_ = l_Lake_BuiltinLint_run___boxed__const__1;
if (v_isShared_5245_ == 0)
{
lean_ctor_set(v___x_5244_, 0, v___x_5248_);
v___x_5250_ = v___x_5244_;
goto v_reusejp_5249_;
}
else
{
lean_object* v_reuseFailAlloc_5251_; 
v_reuseFailAlloc_5251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5251_, 0, v___x_5248_);
v___x_5250_ = v_reuseFailAlloc_5251_;
goto v_reusejp_5249_;
}
v_reusejp_5249_:
{
return v___x_5250_;
}
}
else
{
lean_object* v___x_5252_; lean_object* v___x_5254_; 
v___x_5252_ = l_Lake_BuiltinLint_run___boxed__const__2;
if (v_isShared_5245_ == 0)
{
lean_ctor_set(v___x_5244_, 0, v___x_5252_);
v___x_5254_ = v___x_5244_;
goto v_reusejp_5253_;
}
else
{
lean_object* v_reuseFailAlloc_5255_; 
v_reuseFailAlloc_5255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5255_, 0, v___x_5252_);
v___x_5254_ = v_reuseFailAlloc_5255_;
goto v_reusejp_5253_;
}
v_reusejp_5253_:
{
return v___x_5254_;
}
}
}
case 1:
{
lean_object* v_snd_5256_; lean_object* v_snd_5257_; lean_object* v_fst_5258_; lean_object* v_fst_5259_; lean_object* v___x_5260_; 
v_snd_5256_ = lean_ctor_get(v_a_5242_, 1);
lean_inc(v_snd_5256_);
lean_del_object(v___x_5244_);
lean_dec(v_a_5242_);
v_snd_5257_ = lean_ctor_get(v_snd_5256_, 1);
lean_inc(v_snd_5257_);
v_fst_5258_ = lean_ctor_get(v_snd_5256_, 0);
lean_inc(v_fst_5258_);
lean_dec(v_snd_5256_);
v_fst_5259_ = lean_ctor_get(v_snd_5257_, 0);
lean_inc(v_fst_5259_);
lean_dec(v_snd_5257_);
v___x_5260_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles(v_fst_5259_);
lean_dec(v_fst_5259_);
if (lean_obj_tag(v___x_5260_) == 0)
{
lean_object* v___x_5262_; uint8_t v_isShared_5263_; uint8_t v_isSharedCheck_5273_; 
v_isSharedCheck_5273_ = !lean_is_exclusive(v___x_5260_);
if (v_isSharedCheck_5273_ == 0)
{
lean_object* v_unused_5274_; 
v_unused_5274_ = lean_ctor_get(v___x_5260_, 0);
lean_dec(v_unused_5274_);
v___x_5262_ = v___x_5260_;
v_isShared_5263_ = v_isSharedCheck_5273_;
goto v_resetjp_5261_;
}
else
{
lean_dec(v___x_5260_);
v___x_5262_ = lean_box(0);
v_isShared_5263_ = v_isSharedCheck_5273_;
goto v_resetjp_5261_;
}
v_resetjp_5261_:
{
uint8_t v___x_5264_; 
v___x_5264_ = lean_unbox(v_fst_5258_);
lean_dec(v_fst_5258_);
if (v___x_5264_ == 0)
{
lean_object* v___x_5265_; lean_object* v___x_5267_; 
v___x_5265_ = l_Lake_BuiltinLint_run___boxed__const__1;
if (v_isShared_5263_ == 0)
{
lean_ctor_set(v___x_5262_, 0, v___x_5265_);
v___x_5267_ = v___x_5262_;
goto v_reusejp_5266_;
}
else
{
lean_object* v_reuseFailAlloc_5268_; 
v_reuseFailAlloc_5268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5268_, 0, v___x_5265_);
v___x_5267_ = v_reuseFailAlloc_5268_;
goto v_reusejp_5266_;
}
v_reusejp_5266_:
{
return v___x_5267_;
}
}
else
{
lean_object* v___x_5269_; lean_object* v___x_5271_; 
v___x_5269_ = l_Lake_BuiltinLint_run___boxed__const__2;
if (v_isShared_5263_ == 0)
{
lean_ctor_set(v___x_5262_, 0, v___x_5269_);
v___x_5271_ = v___x_5262_;
goto v_reusejp_5270_;
}
else
{
lean_object* v_reuseFailAlloc_5272_; 
v_reuseFailAlloc_5272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5272_, 0, v___x_5269_);
v___x_5271_ = v_reuseFailAlloc_5272_;
goto v_reusejp_5270_;
}
v_reusejp_5270_:
{
return v___x_5271_;
}
}
}
}
else
{
lean_object* v_a_5275_; lean_object* v___x_5277_; uint8_t v_isShared_5278_; uint8_t v_isSharedCheck_5282_; 
lean_dec(v_fst_5258_);
v_a_5275_ = lean_ctor_get(v___x_5260_, 0);
v_isSharedCheck_5282_ = !lean_is_exclusive(v___x_5260_);
if (v_isSharedCheck_5282_ == 0)
{
v___x_5277_ = v___x_5260_;
v_isShared_5278_ = v_isSharedCheck_5282_;
goto v_resetjp_5276_;
}
else
{
lean_inc(v_a_5275_);
lean_dec(v___x_5260_);
v___x_5277_ = lean_box(0);
v_isShared_5278_ = v_isSharedCheck_5282_;
goto v_resetjp_5276_;
}
v_resetjp_5276_:
{
lean_object* v___x_5280_; 
if (v_isShared_5278_ == 0)
{
v___x_5280_ = v___x_5277_;
goto v_reusejp_5279_;
}
else
{
lean_object* v_reuseFailAlloc_5281_; 
v_reuseFailAlloc_5281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5281_, 0, v_a_5275_);
v___x_5280_ = v_reuseFailAlloc_5281_;
goto v_reusejp_5279_;
}
v_reusejp_5279_:
{
return v___x_5280_;
}
}
}
}
default: 
{
lean_object* v_snd_5283_; lean_object* v_snd_5284_; lean_object* v_snd_5285_; lean_object* v_fst_5286_; lean_object* v_fst_5287_; lean_object* v___x_5288_; size_t v_sz_5289_; lean_object* v___x_5290_; 
v_snd_5283_ = lean_ctor_get(v_a_5242_, 1);
lean_del_object(v___x_5244_);
v_snd_5284_ = lean_ctor_get(v_snd_5283_, 1);
v_snd_5285_ = lean_ctor_get(v_snd_5284_, 1);
lean_inc(v_snd_5285_);
v_fst_5286_ = lean_ctor_get(v_a_5242_, 0);
lean_inc(v_fst_5286_);
lean_dec(v_a_5242_);
v_fst_5287_ = lean_ctor_get(v_snd_5285_, 0);
lean_inc(v_fst_5287_);
lean_dec(v_snd_5285_);
v___x_5288_ = lean_box(0);
v_sz_5289_ = lean_array_size(v_fst_5287_);
v___x_5290_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5(v_fst_5287_, v_sz_5289_, v___x_5230_, v___x_5288_);
lean_dec(v_fst_5287_);
if (lean_obj_tag(v___x_5290_) == 0)
{
lean_object* v___x_5292_; uint8_t v_isShared_5293_; uint8_t v_isSharedCheck_5303_; 
v_isSharedCheck_5303_ = !lean_is_exclusive(v___x_5290_);
if (v_isSharedCheck_5303_ == 0)
{
lean_object* v_unused_5304_; 
v_unused_5304_ = lean_ctor_get(v___x_5290_, 0);
lean_dec(v_unused_5304_);
v___x_5292_ = v___x_5290_;
v_isShared_5293_ = v_isSharedCheck_5303_;
goto v_resetjp_5291_;
}
else
{
lean_dec(v___x_5290_);
v___x_5292_ = lean_box(0);
v_isShared_5293_ = v_isSharedCheck_5303_;
goto v_resetjp_5291_;
}
v_resetjp_5291_:
{
uint8_t v___x_5294_; 
v___x_5294_ = lean_unbox(v_fst_5286_);
lean_dec(v_fst_5286_);
if (v___x_5294_ == 0)
{
lean_object* v___x_5295_; lean_object* v___x_5297_; 
v___x_5295_ = l_Lake_BuiltinLint_run___boxed__const__1;
if (v_isShared_5293_ == 0)
{
lean_ctor_set(v___x_5292_, 0, v___x_5295_);
v___x_5297_ = v___x_5292_;
goto v_reusejp_5296_;
}
else
{
lean_object* v_reuseFailAlloc_5298_; 
v_reuseFailAlloc_5298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5298_, 0, v___x_5295_);
v___x_5297_ = v_reuseFailAlloc_5298_;
goto v_reusejp_5296_;
}
v_reusejp_5296_:
{
return v___x_5297_;
}
}
else
{
lean_object* v___x_5299_; lean_object* v___x_5301_; 
v___x_5299_ = l_Lake_BuiltinLint_run___boxed__const__2;
if (v_isShared_5293_ == 0)
{
lean_ctor_set(v___x_5292_, 0, v___x_5299_);
v___x_5301_ = v___x_5292_;
goto v_reusejp_5300_;
}
else
{
lean_object* v_reuseFailAlloc_5302_; 
v_reuseFailAlloc_5302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5302_, 0, v___x_5299_);
v___x_5301_ = v_reuseFailAlloc_5302_;
goto v_reusejp_5300_;
}
v_reusejp_5300_:
{
return v___x_5301_;
}
}
}
}
else
{
lean_object* v_a_5305_; lean_object* v___x_5307_; uint8_t v_isShared_5308_; uint8_t v_isSharedCheck_5312_; 
lean_dec(v_fst_5286_);
v_a_5305_ = lean_ctor_get(v___x_5290_, 0);
v_isSharedCheck_5312_ = !lean_is_exclusive(v___x_5290_);
if (v_isSharedCheck_5312_ == 0)
{
v___x_5307_ = v___x_5290_;
v_isShared_5308_ = v_isSharedCheck_5312_;
goto v_resetjp_5306_;
}
else
{
lean_inc(v_a_5305_);
lean_dec(v___x_5290_);
v___x_5307_ = lean_box(0);
v_isShared_5308_ = v_isSharedCheck_5312_;
goto v_resetjp_5306_;
}
v_resetjp_5306_:
{
lean_object* v___x_5310_; 
if (v_isShared_5308_ == 0)
{
v___x_5310_ = v___x_5307_;
goto v_reusejp_5309_;
}
else
{
lean_object* v_reuseFailAlloc_5311_; 
v_reuseFailAlloc_5311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5311_, 0, v_a_5305_);
v___x_5310_ = v_reuseFailAlloc_5311_;
goto v_reusejp_5309_;
}
v_reusejp_5309_:
{
return v___x_5310_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5314_; lean_object* v___x_5316_; uint8_t v_isShared_5317_; uint8_t v_isSharedCheck_5321_; 
v_a_5314_ = lean_ctor_get(v___x_5241_, 0);
v_isSharedCheck_5321_ = !lean_is_exclusive(v___x_5241_);
if (v_isSharedCheck_5321_ == 0)
{
v___x_5316_ = v___x_5241_;
v_isShared_5317_ = v_isSharedCheck_5321_;
goto v_resetjp_5315_;
}
else
{
lean_inc(v_a_5314_);
lean_dec(v___x_5241_);
v___x_5316_ = lean_box(0);
v_isShared_5317_ = v_isSharedCheck_5321_;
goto v_resetjp_5315_;
}
v_resetjp_5315_:
{
lean_object* v___x_5319_; 
if (v_isShared_5317_ == 0)
{
v___x_5319_ = v___x_5316_;
goto v_reusejp_5318_;
}
else
{
lean_object* v_reuseFailAlloc_5320_; 
v_reuseFailAlloc_5320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5320_, 0, v_a_5314_);
v___x_5319_ = v_reuseFailAlloc_5320_;
goto v_reusejp_5318_;
}
v_reusejp_5318_:
{
return v___x_5319_;
}
}
}
}
else
{
lean_object* v_a_5322_; lean_object* v___x_5324_; uint8_t v_isShared_5325_; uint8_t v_isSharedCheck_5329_; 
lean_dec_ref(v_checkImports_5231_);
lean_dec_ref(v_mods_5222_);
lean_dec_ref(v_args_5220_);
v_a_5322_ = lean_ctor_get(v___x_5232_, 0);
v_isSharedCheck_5329_ = !lean_is_exclusive(v___x_5232_);
if (v_isSharedCheck_5329_ == 0)
{
v___x_5324_ = v___x_5232_;
v_isShared_5325_ = v_isSharedCheck_5329_;
goto v_resetjp_5323_;
}
else
{
lean_inc(v_a_5322_);
lean_dec(v___x_5232_);
v___x_5324_ = lean_box(0);
v_isShared_5325_ = v_isSharedCheck_5329_;
goto v_resetjp_5323_;
}
v_resetjp_5323_:
{
lean_object* v___x_5327_; 
if (v_isShared_5325_ == 0)
{
v___x_5327_ = v___x_5324_;
goto v_reusejp_5326_;
}
else
{
lean_object* v_reuseFailAlloc_5328_; 
v_reuseFailAlloc_5328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5328_, 0, v_a_5322_);
v___x_5327_ = v_reuseFailAlloc_5328_;
goto v_reusejp_5326_;
}
v_reusejp_5326_:
{
return v___x_5327_;
}
}
}
}
else
{
lean_object* v___x_5330_; lean_object* v___x_5331_; 
lean_dec_ref(v_mods_5222_);
lean_dec_ref(v_args_5220_);
v___x_5330_ = ((lean_object*)(l_Lake_BuiltinLint_run___closed__3));
v___x_5331_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v___x_5330_);
if (lean_obj_tag(v___x_5331_) == 0)
{
lean_object* v___x_5333_; uint8_t v_isShared_5334_; uint8_t v_isSharedCheck_5339_; 
v_isSharedCheck_5339_ = !lean_is_exclusive(v___x_5331_);
if (v_isSharedCheck_5339_ == 0)
{
lean_object* v_unused_5340_; 
v_unused_5340_ = lean_ctor_get(v___x_5331_, 0);
lean_dec(v_unused_5340_);
v___x_5333_ = v___x_5331_;
v_isShared_5334_ = v_isSharedCheck_5339_;
goto v_resetjp_5332_;
}
else
{
lean_dec(v___x_5331_);
v___x_5333_ = lean_box(0);
v_isShared_5334_ = v_isSharedCheck_5339_;
goto v_resetjp_5332_;
}
v_resetjp_5332_:
{
lean_object* v___x_5335_; lean_object* v___x_5337_; 
v___x_5335_ = l_Lake_BuiltinLint_run___boxed__const__2;
if (v_isShared_5334_ == 0)
{
lean_ctor_set(v___x_5333_, 0, v___x_5335_);
v___x_5337_ = v___x_5333_;
goto v_reusejp_5336_;
}
else
{
lean_object* v_reuseFailAlloc_5338_; 
v_reuseFailAlloc_5338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5338_, 0, v___x_5335_);
v___x_5337_ = v_reuseFailAlloc_5338_;
goto v_reusejp_5336_;
}
v_reusejp_5336_:
{
return v___x_5337_;
}
}
}
else
{
lean_object* v_a_5341_; lean_object* v___x_5343_; uint8_t v_isShared_5344_; uint8_t v_isSharedCheck_5348_; 
v_a_5341_ = lean_ctor_get(v___x_5331_, 0);
v_isSharedCheck_5348_ = !lean_is_exclusive(v___x_5331_);
if (v_isSharedCheck_5348_ == 0)
{
v___x_5343_ = v___x_5331_;
v_isShared_5344_ = v_isSharedCheck_5348_;
goto v_resetjp_5342_;
}
else
{
lean_inc(v_a_5341_);
lean_dec(v___x_5331_);
v___x_5343_ = lean_box(0);
v_isShared_5344_ = v_isSharedCheck_5348_;
goto v_resetjp_5342_;
}
v_resetjp_5342_:
{
lean_object* v___x_5346_; 
if (v_isShared_5344_ == 0)
{
v___x_5346_ = v___x_5343_;
goto v_reusejp_5345_;
}
else
{
lean_object* v_reuseFailAlloc_5347_; 
v_reuseFailAlloc_5347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5347_, 0, v_a_5341_);
v___x_5346_ = v_reuseFailAlloc_5347_;
goto v_reusejp_5345_;
}
v_reusejp_5345_:
{
return v___x_5346_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_run___boxed(lean_object* v_args_5349_, lean_object* v___y_5350_){
_start:
{
lean_object* v_res_5351_; 
v_res_5351_ = l_Lake_BuiltinLint_run(v_args_5349_);
return v_res_5351_;
}
}
lean_object* runtime_initialize_Lean_Linter_EnvLinter(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_PersistentLintLog(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_DocString_Builtin_Postponed(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_CodeQuality(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_CLI_BuiltinLint(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lean_Linter_EnvLinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_PersistentLintLog(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DocString_Builtin_Postponed(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_CodeQuality(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_BuiltinLint_instInhabitedExceptionRecord_default = _init_l_Lake_BuiltinLint_instInhabitedExceptionRecord_default();
lean_mark_persistent(l_Lake_BuiltinLint_instInhabitedExceptionRecord_default);
l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_instInhabitedExceptionRecord = _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_instInhabitedExceptionRecord();
lean_mark_persistent(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_instInhabitedExceptionRecord);
l_Lake_BuiltinLint_run___boxed__const__1 = _init_l_Lake_BuiltinLint_run___boxed__const__1();
lean_mark_persistent(l_Lake_BuiltinLint_run___boxed__const__1);
l_Lake_BuiltinLint_run___boxed__const__2 = _init_l_Lake_BuiltinLint_run___boxed__const__2();
lean_mark_persistent(l_Lake_BuiltinLint_run___boxed__const__2);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_CLI_BuiltinLint(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Linter_EnvLinter(uint8_t builtin);
lean_object* initialize_Lean_Linter_PersistentLintLog(uint8_t builtin);
lean_object* initialize_Lean_Elab_DocString_Builtin_Postponed(uint8_t builtin);
lean_object* initialize_Lean_Linter_CodeQuality(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_CLI_BuiltinLint(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Linter_EnvLinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_PersistentLintLog(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DocString_Builtin_Postponed(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_CodeQuality(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_CLI_BuiltinLint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_CLI_BuiltinLint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_CLI_BuiltinLint(builtin);
}
#ifdef __cplusplus
}
#endif
