// Lean compiler output
// Module: Lean.Language.Lean
// Imports: public import Lean.Language.Util public import Lean.Language.Lean.Types public import Lean.Elab.Import
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lean_io_promise_new();
lean_object* l_IO_CancelToken_new();
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_BaseIO_chainTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_IO_Promise_result_x21___redArg(lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* l_Lean_Language_Snapshot_transform(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
extern lean_object* l_Lean_Elab_instInhabitedInfoTree_default;
lean_object* l_Lean_Language_SnapshotTask_ReportingRange_ofOptionInheriting(lean_object*);
uint8_t l_Lean_Parser_isTerminalCommand(lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(lean_object*);
lean_object* l_Lean_Elab_InfoState_substituteLazy(lean_object*);
extern lean_object* l_Lean_inheritedTraceOptions;
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_st_mk_ref(lean_object*);
extern lean_object* l_Lean_diagnostics;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_Language_SnapshotTree_trace(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_MessageLog_empty;
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* l_Lean_Language_SnapshotTree_waitAll(lean_object*);
lean_object* lean_io_bind_task(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_elabCommandTopLevel(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Language_instImpl_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8_;
extern lean_object* l_Lean_internal_cmdlineSnapshots;
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
extern lean_object* l_Lean_Language_Snapshot_Diagnostics_empty;
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t l_Lean_Elab_isAbortExceptionId(lean_object*);
extern lean_object* l_Lean_Core_stderrAsMessages;
extern lean_object* l_ByteArray_empty;
lean_object* l_IO_FS_Stream_ofBuffer(lean_object*);
lean_object* lean_get_set_stdout(lean_object*);
lean_object* lean_get_set_stdin(lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_get_set_stderr(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_format(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
extern lean_object* l_Lean_MessageData_nil;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_DeclNameGenerator_ofPrefix(lean_object*);
lean_object* l_Lean_Language_SnapshotTask_defaultReportingRange(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Language_instInhabitedDynamicSnapshot;
lean_object* l_Lean_Language_instInhabitedSnapshotTask_default___redArg(lean_object*);
lean_object* l_Lean_Language_SnapshotTask_finished___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Language_instInhabitedSnapshotTree_default;
uint8_t l_IO_CancelToken_isSet(lean_object*);
extern lean_object* l_Lean_Parser_instInhabitedModuleParserState_default;
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* l_Lean_Language_Lean_instToSnapshotTreeCommandParsedSnapshot_go(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Language_SnapshotTree_transform___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTask_cancelRec___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Language_Lean_instToSnapshotTreeCommandParsedSnapshot_go___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_parseCommand(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_profileit(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_eqWithInfo(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTask_get_x3f___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Language_diagnosticsOfHeaderError(lean_object*, lean_object*);
extern lean_object* l_Lean_Language_instInhabitedSnapshotLeaf;
extern lean_object* l_Lean_Language_Lean_instToSnapshotTreeHeaderProcessedSnapshot;
lean_object* l_Lean_Language_SnapshotTask_bindIO___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_parseHeader(lean_object*);
uint8_t l_Lean_MessageLog_hasErrors(lean_object*);
lean_object* l_Lean_Syntax_unsetTrailing(lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_div(double, double);
lean_object* l_Lean_Elab_HeaderSyntax_startPos(lean_object*);
lean_object* l_Lean_Elab_processHeaderCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getOptionDecls();
lean_object* l_Lean_Name_getRoot(lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_OptionDecls_find_x3f(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_mkState(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Array_toPArray_x27___redArg(lean_object*);
lean_object* l_Lean_List_toPArray_x27___redArg(lean_object*);
extern lean_object* l_Lean_trace_profiler_output;
extern lean_object* l_Lean_trace_profiler_serve;
extern lean_object* l_Lean_instInhabitedTraceState_default;
lean_object* l_Lean_Language_SnapshotTask_ofIO___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Language_Lean_HeaderParsedSnapshot_processedResult(lean_object*);
lean_object* l_String_firstDiffPos(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTask_get___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___closed__0 = (const lean_object*)&l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO = (const lean_object*)&l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___closed__0 = (const lean_object*)&l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg();
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Language_Lean_isBeforeEditPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_isBeforeEditPos___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__1 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__1_value),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__3 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__3_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Language"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__3_value),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(175, 210, 78, 119, 167, 98, 198, 170)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__5 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__5_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__5_value),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(66, 112, 34, 50, 214, 162, 204, 53)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__6 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__6_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(35, 57, 84, 103, 218, 237, 164, 234)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__7 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__7_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__7_value),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(110, 242, 18, 140, 130, 32, 167, 175)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__8 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__8_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__8_value),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(19, 205, 238, 85, 202, 45, 193, 251)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__9 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__9_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__9_value),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(126, 74, 26, 188, 17, 43, 130, 1)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__10 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__10_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "withHeaderExceptions"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__11 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__11_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__10_value),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(96, 234, 52, 36, 242, 101, 86, 247)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__12 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__12_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__13;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__2(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Language_Lean_setOption___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Language_Lean_setOption___closed__0 = (const lean_object*)&l_Lean_Language_Lean_setOption___closed__0_value;
static const lean_string_object l_Lean_Language_Lean_setOption___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Language_Lean_setOption___closed__1 = (const lean_object*)&l_Lean_Language_Lean_setOption___closed__1_value;
static const lean_string_object l_Lean_Language_Lean_setOption___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "invalid -D parameter, invalid configuration option '"};
static const lean_object* l_Lean_Language_Lean_setOption___closed__2 = (const lean_object*)&l_Lean_Language_Lean_setOption___closed__2_value;
static const lean_string_object l_Lean_Language_Lean_setOption___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "' value, it must be true/false"};
static const lean_object* l_Lean_Language_Lean_setOption___closed__3 = (const lean_object*)&l_Lean_Language_Lean_setOption___closed__3_value;
static const lean_string_object l_Lean_Language_Lean_setOption___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "' value, it must be a natural number"};
static const lean_object* l_Lean_Language_Lean_setOption___closed__4 = (const lean_object*)&l_Lean_Language_Lean_setOption___closed__4_value;
static const lean_string_object l_Lean_Language_Lean_setOption___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "invalid -D parameter, configuration option '"};
static const lean_object* l_Lean_Language_Lean_setOption___closed__5 = (const lean_object*)&l_Lean_Language_Lean_setOption___closed__5_value;
static const lean_string_object l_Lean_Language_Lean_setOption___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "' cannot be set in the command line, use set_option command"};
static const lean_object* l_Lean_Language_Lean_setOption___closed__6 = (const lean_object*)&l_Lean_Language_Lean_setOption___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Language_Lean_setOption(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_setOption___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_reparseOptions_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "weak"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__0_value;
static const lean_ctor_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(63, 5, 49, 232, 223, 147, 119, 138)}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__1_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "invalid -D parameter, unknown configuration option '"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__2_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "'\n\nIf the option is defined in a library, use '-D"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__3 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__3_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "' to set it conditionally"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__4 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__4_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_reparseOptions(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_reparseOptions___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__0 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__1 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__2 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__2_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__0_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "experimental"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__0_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__0_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__1_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "module"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__1_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__1_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__2_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__0_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(201, 138, 38, 81, 136, 39, 83, 32)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__2_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__2_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__1_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(93, 242, 21, 84, 145, 94, 84, 207)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__2_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__2_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__3_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "no-op, deprecated"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__3_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__3_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__4_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__3_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__4_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__4_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(91, 167, 200, 3, 29, 231, 56, 85)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(102, 222, 85, 59, 197, 113, 89, 237)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__0_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(24, 94, 31, 95, 17, 215, 109, 107)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__1_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(216, 160, 244, 111, 154, 6, 107, 146)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_experimental_module;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0 = (const lean_object*)&l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5_spec__12(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception: "};
static const lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__0 = (const lean_object*)&l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__0_value;
static lean_once_cell_t l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__0;
static const lean_string_object l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__1 = (const lean_object*)&l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__1_value;
static const lean_string_object l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__2 = (const lean_object*)&l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__2_value;
static const lean_string_object l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__3 = (const lean_object*)&l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__3_value;
static lean_once_cell_t l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__4;
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "process"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__10_value),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0_value),LEAN_SCALAR_PTR_LITERAL(9, 7, 72, 70, 238, 145, 97, 14)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__1 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__1_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doElab"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__2 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__2_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__1_value),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__2_value),LEAN_SCALAR_PTR_LITERAL(184, 73, 34, 28, 214, 248, 188, 54)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__3 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__3_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__5(lean_object*);
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__0 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__0_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "info"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__1 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__1_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__1_value),LEAN_SCALAR_PTR_LITERAL(237, 108, 214, 181, 226, 69, 54, 12)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__2 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__2_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7_spec__9(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5_spec__9(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__1 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__2 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__3 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__3_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_SnapshotTree_transform___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__0 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__0_value;
static const lean_closure_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__1 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__1_value;
static const lean_closure_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__2 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__2_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "snapshotTree"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__0 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__0_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(11, 136, 72, 78, 187, 126, 217, 153)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__1 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__1_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "parseCmd"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__4 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__8(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__8___boxed(lean_object**);
static const lean_closure_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_Lean_instToSnapshotTreeCommandParsedSnapshot_go___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__5 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__5_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "parsing"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__0(lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "import"};
static const lean_object* l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(237, 201, 190, 222, 246, 15, 232, 234)}};
static const lean_object* l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__1_value;
static const lean_array_object l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__2 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__2_value;
static lean_once_cell_t l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__3;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__0;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_import"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(225, 157, 171, 65, 170, 18, 92, 252)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__3 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__3_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "header"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__4 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__4_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(12, 104, 192, 143, 94, 68, 237, 67)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__5_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "processHeader"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__6 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__6_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Import"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__7 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__7_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(36, 108, 229, 135, 237, 231, 134, 26)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__8 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__8_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "importing"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__9 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__9_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__9_value)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__10 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__10_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__11;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__1;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "parseHeader"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__1_value),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(152, 110, 119, 15, 255, 246, 245, 53)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_process(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_process___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_processCommands(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_processCommands___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_waitForFinalCmdState_x3f_goCmd(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_waitForFinalCmdState_x3f(lean_object*);
static const lean_string_object l_Lean_Language_Lean_truncateToHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "truncateToHeader"};
static const lean_object* l_Lean_Language_Lean_truncateToHeader___closed__0 = (const lean_object*)&l_Lean_Language_Lean_truncateToHeader___closed__0_value;
static const lean_ctor_object l_Lean_Language_Lean_truncateToHeader___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Language_Lean_truncateToHeader___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_Lean_truncateToHeader___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(91, 167, 200, 3, 29, 231, 56, 85)}};
static const lean_ctor_object l_Lean_Language_Lean_truncateToHeader___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_Lean_truncateToHeader___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(102, 222, 85, 59, 197, 113, 89, 237)}};
static const lean_ctor_object l_Lean_Language_Lean_truncateToHeader___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_Lean_truncateToHeader___closed__1_value_aux_2),((lean_object*)&l_Lean_Language_Lean_truncateToHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(71, 193, 8, 11, 35, 111, 210, 68)}};
static const lean_object* l_Lean_Language_Lean_truncateToHeader___closed__1 = (const lean_object*)&l_Lean_Language_Lean_truncateToHeader___closed__1_value;
static lean_once_cell_t l_Lean_Language_Lean_truncateToHeader___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Lean_truncateToHeader___closed__2;
static lean_once_cell_t l_Lean_Language_Lean_truncateToHeader___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Lean_truncateToHeader___closed__3;
static lean_once_cell_t l_Lean_Language_Lean_truncateToHeader___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Lean_truncateToHeader___closed__4;
LEAN_EXPORT lean_object* l_Lean_Language_Lean_truncateToHeader(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___lam__0(lean_object* v_00_u03b1_1_, lean_object* v_act_2_, lean_object* v___y_3_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
lean_inc_ref(v___y_3_);
v___x_5_ = lean_apply_2(v_act_2_, v___y_3_, lean_box(0));
v___x_6_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___lam__0___boxed(lean_object* v_00_u03b1_7_, lean_object* v_act_8_, lean_object* v___y_9_, lean_object* v___y_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___lam__0(v_00_u03b1_7_, v_act_8_, v___y_9_);
lean_dec_ref(v___y_9_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___lam__0(lean_object* v_00_u03b1_14_, lean_object* v_act_15_, lean_object* v___y_16_){
_start:
{
lean_object* v_toProcessingContext_17_; lean_object* v___x_18_; 
v_toProcessingContext_17_ = lean_ctor_get(v___y_16_, 0);
lean_inc_ref(v_toProcessingContext_17_);
v___x_18_ = lean_apply_1(v_act_15_, v_toProcessingContext_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___lam__0___boxed(lean_object* v_00_u03b1_19_, lean_object* v_act_20_, lean_object* v___y_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___lam__0(v_00_u03b1_19_, v_act_20_, v___y_21_);
lean_dec_ref(v___y_21_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg(){
_start:
{
lean_object* v___f_25_; 
v___f_25_ = ((lean_object*)(l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___closed__0));
return v___f_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___boxed(lean_object* v___dummy_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg();
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT(lean_object* v_m_28_){
_start:
{
lean_object* v___f_29_; 
v___f_29_ = ((lean_object*)(l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___closed__0));
return v___f_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run___redArg(lean_object* v_act_30_, lean_object* v_oldInputCtx_x3f_31_, lean_object* v___y_32_){
_start:
{
lean_object* v___y_35_; 
if (lean_obj_tag(v_oldInputCtx_x3f_31_) == 0)
{
lean_object* v___x_38_; 
v___x_38_ = lean_box(0);
v___y_35_ = v___x_38_;
goto v___jp_34_;
}
else
{
lean_object* v_val_39_; lean_object* v___x_41_; uint8_t v_isShared_42_; uint8_t v_isSharedCheck_49_; 
v_val_39_ = lean_ctor_get(v_oldInputCtx_x3f_31_, 0);
v_isSharedCheck_49_ = !lean_is_exclusive(v_oldInputCtx_x3f_31_);
if (v_isSharedCheck_49_ == 0)
{
v___x_41_ = v_oldInputCtx_x3f_31_;
v_isShared_42_ = v_isSharedCheck_49_;
goto v_resetjp_40_;
}
else
{
lean_inc(v_val_39_);
lean_dec(v_oldInputCtx_x3f_31_);
v___x_41_ = lean_box(0);
v_isShared_42_ = v_isSharedCheck_49_;
goto v_resetjp_40_;
}
v_resetjp_40_:
{
lean_object* v_inputString_43_; lean_object* v_inputString_44_; lean_object* v___x_45_; lean_object* v___x_47_; 
v_inputString_43_ = lean_ctor_get(v_val_39_, 0);
lean_inc_ref(v_inputString_43_);
lean_dec(v_val_39_);
v_inputString_44_ = lean_ctor_get(v___y_32_, 0);
v___x_45_ = l_String_firstDiffPos(v_inputString_43_, v_inputString_44_);
lean_dec_ref(v_inputString_43_);
if (v_isShared_42_ == 0)
{
lean_ctor_set(v___x_41_, 0, v___x_45_);
v___x_47_ = v___x_41_;
goto v_reusejp_46_;
}
else
{
lean_object* v_reuseFailAlloc_48_; 
v_reuseFailAlloc_48_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_48_, 0, v___x_45_);
v___x_47_ = v_reuseFailAlloc_48_;
goto v_reusejp_46_;
}
v_reusejp_46_:
{
v___y_35_ = v___x_47_;
goto v___jp_34_;
}
}
}
v___jp_34_:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
lean_inc_ref(v___y_32_);
v___x_36_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_36_, 0, v___y_32_);
lean_ctor_set(v___x_36_, 1, v___y_35_);
v___x_37_ = lean_apply_2(v_act_30_, v___x_36_, lean_box(0));
return v___x_37_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run___redArg___boxed(lean_object* v_act_50_, lean_object* v_oldInputCtx_x3f_51_, lean_object* v___y_52_, lean_object* v___y_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l_Lean_Language_Lean_LeanProcessingM_run___redArg(v_act_50_, v_oldInputCtx_x3f_51_, v___y_52_);
lean_dec_ref(v___y_52_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run(lean_object* v_00_u03b1_55_, lean_object* v_act_56_, lean_object* v_oldInputCtx_x3f_57_, lean_object* v___y_58_){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = l_Lean_Language_Lean_LeanProcessingM_run___redArg(v_act_56_, v_oldInputCtx_x3f_57_, v___y_58_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run___boxed(lean_object* v_00_u03b1_61_, lean_object* v_act_62_, lean_object* v_oldInputCtx_x3f_63_, lean_object* v___y_64_, lean_object* v___y_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Lean_Language_Lean_LeanProcessingM_run(v_00_u03b1_61_, v_act_62_, v_oldInputCtx_x3f_63_, v___y_64_);
lean_dec_ref(v___y_64_);
return v_res_66_;
}
}
LEAN_EXPORT uint8_t l_Lean_Language_Lean_isBeforeEditPos(lean_object* v_pos_67_, lean_object* v___y_68_){
_start:
{
lean_object* v_firstDiffPos_x3f_70_; 
v_firstDiffPos_x3f_70_ = lean_ctor_get(v___y_68_, 1);
if (lean_obj_tag(v_firstDiffPos_x3f_70_) == 0)
{
uint8_t v___x_71_; 
v___x_71_ = 0;
return v___x_71_;
}
else
{
lean_object* v_val_72_; lean_object* v___x_73_; lean_object* v___x_74_; uint8_t v___x_75_; 
v_val_72_ = lean_ctor_get(v_firstDiffPos_x3f_70_, 0);
v___x_73_ = lean_unsigned_to_nat(1u);
v___x_74_ = lean_nat_add(v_pos_67_, v___x_73_);
v___x_75_ = lean_nat_dec_le(v___x_74_, v_val_72_);
lean_dec(v___x_74_);
return v___x_75_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_isBeforeEditPos___boxed(lean_object* v_pos_76_, lean_object* v___y_77_, lean_object* v___y_78_){
_start:
{
uint8_t v_res_79_; lean_object* v_r_80_; 
v_res_79_ = l_Lean_Language_Lean_isBeforeEditPos(v_pos_76_, v___y_77_);
lean_dec_ref(v___y_77_);
lean_dec(v_pos_76_);
v_r_80_ = lean_box(v_res_79_);
return v_r_80_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__13(void){
_start:
{
uint8_t v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_112_ = 1;
v___x_113_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__12));
v___x_114_ = l_Lean_Name_toString(v___x_113_, v___x_112_);
return v___x_114_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14(void){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_115_ = lean_unsigned_to_nat(32u);
v___x_116_ = lean_mk_empty_array_with_capacity(v___x_115_);
v___x_117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
return v___x_117_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15(void){
_start:
{
size_t v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_118_ = ((size_t)5ULL);
v___x_119_ = lean_unsigned_to_nat(0u);
v___x_120_ = lean_unsigned_to_nat(32u);
v___x_121_ = lean_mk_empty_array_with_capacity(v___x_120_);
v___x_122_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14);
v___x_123_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_123_, 0, v___x_122_);
lean_ctor_set(v___x_123_, 1, v___x_121_);
lean_ctor_set(v___x_123_, 2, v___x_119_);
lean_ctor_set(v___x_123_, 3, v___x_119_);
lean_ctor_set_usize(v___x_123_, 4, v___x_118_);
return v___x_123_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16(void){
_start:
{
lean_object* v___x_124_; uint64_t v___x_125_; lean_object* v___x_126_; 
v___x_124_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15);
v___x_125_ = 0ULL;
v___x_126_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_126_, 0, v___x_124_);
lean_ctor_set_uint64(v___x_126_, sizeof(void*)*1, v___x_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(lean_object* v_ex_127_, lean_object* v_act_128_, lean_object* v___y_129_){
_start:
{
lean_object* v___x_131_; 
lean_inc_ref(v___y_129_);
v___x_131_ = lean_apply_2(v_act_128_, v___y_129_, lean_box(0));
if (lean_obj_tag(v___x_131_) == 0)
{
lean_object* v_a_132_; 
lean_dec(v_ex_127_);
v_a_132_ = lean_ctor_get(v___x_131_, 0);
lean_inc(v_a_132_);
lean_dec_ref_known(v___x_131_, 1);
return v_a_132_;
}
else
{
lean_object* v_a_133_; lean_object* v_toProcessingContext_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; uint8_t v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v_a_133_ = lean_ctor_get(v___x_131_, 0);
lean_inc(v_a_133_);
lean_dec_ref_known(v___x_131_, 1);
v_toProcessingContext_134_ = lean_ctor_get(v___y_129_, 0);
v___x_135_ = lean_io_error_to_string(v_a_133_);
v___x_136_ = l_Lean_Language_diagnosticsOfHeaderError(v___x_135_, v_toProcessingContext_134_);
v___x_137_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__13, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__13_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__13);
v___x_138_ = lean_box(0);
v___x_139_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_140_ = 0;
v___x_141_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_141_, 0, v___x_137_);
lean_ctor_set(v___x_141_, 1, v___x_136_);
lean_ctor_set(v___x_141_, 2, v___x_138_);
lean_ctor_set(v___x_141_, 3, v___x_139_);
lean_ctor_set_uint8(v___x_141_, sizeof(void*)*4, v___x_140_);
v___x_142_ = lean_apply_1(v_ex_127_, v___x_141_);
return v___x_142_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___boxed(lean_object* v_ex_143_, lean_object* v_act_144_, lean_object* v___y_145_, lean_object* v___y_146_){
_start:
{
lean_object* v_res_147_; 
v_res_147_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v_ex_143_, v_act_144_, v___y_145_);
lean_dec_ref(v___y_145_);
return v_res_147_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions(lean_object* v_00_u03b1_148_, lean_object* v_ex_149_, lean_object* v_act_150_, lean_object* v___y_151_){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v_ex_149_, v_act_150_, v___y_151_);
return v___x_153_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___boxed(lean_object* v_00_u03b1_154_, lean_object* v_ex_155_, lean_object* v_act_156_, lean_object* v___y_157_, lean_object* v___y_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions(v_00_u03b1_154_, v_ex_155_, v_act_156_, v___y_157_);
lean_dec_ref(v___y_157_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0(lean_object* v_o_163_, lean_object* v_k_164_, uint8_t v_v_165_){
_start:
{
lean_object* v_map_166_; uint8_t v_hasTrace_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_181_; 
v_map_166_ = lean_ctor_get(v_o_163_, 0);
v_hasTrace_167_ = lean_ctor_get_uint8(v_o_163_, sizeof(void*)*1);
v_isSharedCheck_181_ = !lean_is_exclusive(v_o_163_);
if (v_isSharedCheck_181_ == 0)
{
v___x_169_ = v_o_163_;
v_isShared_170_ = v_isSharedCheck_181_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_map_166_);
lean_dec(v_o_163_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_181_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_171_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_171_, 0, v_v_165_);
lean_inc(v_k_164_);
v___x_172_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_164_, v___x_171_, v_map_166_);
if (v_hasTrace_167_ == 0)
{
lean_object* v___x_173_; uint8_t v___x_174_; lean_object* v___x_176_; 
v___x_173_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_174_ = l_Lean_Name_isPrefixOf(v___x_173_, v_k_164_);
lean_dec(v_k_164_);
if (v_isShared_170_ == 0)
{
lean_ctor_set(v___x_169_, 0, v___x_172_);
v___x_176_ = v___x_169_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v___x_172_);
v___x_176_ = v_reuseFailAlloc_177_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
lean_ctor_set_uint8(v___x_176_, sizeof(void*)*1, v___x_174_);
return v___x_176_;
}
}
else
{
lean_object* v___x_179_; 
lean_dec(v_k_164_);
if (v_isShared_170_ == 0)
{
lean_ctor_set(v___x_169_, 0, v___x_172_);
v___x_179_ = v___x_169_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v___x_172_);
lean_ctor_set_uint8(v_reuseFailAlloc_180_, sizeof(void*)*1, v_hasTrace_167_);
v___x_179_ = v_reuseFailAlloc_180_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
return v___x_179_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___boxed(lean_object* v_o_182_, lean_object* v_k_183_, lean_object* v_v_184_){
_start:
{
uint8_t v_v_boxed_185_; lean_object* v_res_186_; 
v_v_boxed_185_ = lean_unbox(v_v_184_);
v_res_186_ = l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0(v_o_182_, v_k_183_, v_v_boxed_185_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__1(lean_object* v_o_187_, lean_object* v_k_188_, lean_object* v_v_189_){
_start:
{
lean_object* v_map_190_; uint8_t v_hasTrace_191_; lean_object* v___x_193_; uint8_t v_isShared_194_; uint8_t v_isSharedCheck_205_; 
v_map_190_ = lean_ctor_get(v_o_187_, 0);
v_hasTrace_191_ = lean_ctor_get_uint8(v_o_187_, sizeof(void*)*1);
v_isSharedCheck_205_ = !lean_is_exclusive(v_o_187_);
if (v_isSharedCheck_205_ == 0)
{
v___x_193_ = v_o_187_;
v_isShared_194_ = v_isSharedCheck_205_;
goto v_resetjp_192_;
}
else
{
lean_inc(v_map_190_);
lean_dec(v_o_187_);
v___x_193_ = lean_box(0);
v_isShared_194_ = v_isSharedCheck_205_;
goto v_resetjp_192_;
}
v_resetjp_192_:
{
lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_195_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_195_, 0, v_v_189_);
lean_inc(v_k_188_);
v___x_196_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_188_, v___x_195_, v_map_190_);
if (v_hasTrace_191_ == 0)
{
lean_object* v___x_197_; uint8_t v___x_198_; lean_object* v___x_200_; 
v___x_197_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_198_ = l_Lean_Name_isPrefixOf(v___x_197_, v_k_188_);
lean_dec(v_k_188_);
if (v_isShared_194_ == 0)
{
lean_ctor_set(v___x_193_, 0, v___x_196_);
v___x_200_ = v___x_193_;
goto v_reusejp_199_;
}
else
{
lean_object* v_reuseFailAlloc_201_; 
v_reuseFailAlloc_201_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_201_, 0, v___x_196_);
v___x_200_ = v_reuseFailAlloc_201_;
goto v_reusejp_199_;
}
v_reusejp_199_:
{
lean_ctor_set_uint8(v___x_200_, sizeof(void*)*1, v___x_198_);
return v___x_200_;
}
}
else
{
lean_object* v___x_203_; 
lean_dec(v_k_188_);
if (v_isShared_194_ == 0)
{
lean_ctor_set(v___x_193_, 0, v___x_196_);
v___x_203_ = v___x_193_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v___x_196_);
lean_ctor_set_uint8(v_reuseFailAlloc_204_, sizeof(void*)*1, v_hasTrace_191_);
v___x_203_ = v_reuseFailAlloc_204_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
return v___x_203_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__2(lean_object* v_o_206_, lean_object* v_k_207_, lean_object* v_v_208_){
_start:
{
lean_object* v_map_209_; uint8_t v_hasTrace_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_224_; 
v_map_209_ = lean_ctor_get(v_o_206_, 0);
v_hasTrace_210_ = lean_ctor_get_uint8(v_o_206_, sizeof(void*)*1);
v_isSharedCheck_224_ = !lean_is_exclusive(v_o_206_);
if (v_isSharedCheck_224_ == 0)
{
v___x_212_ = v_o_206_;
v_isShared_213_ = v_isSharedCheck_224_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_map_209_);
lean_dec(v_o_206_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_224_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_214_, 0, v_v_208_);
lean_inc(v_k_207_);
v___x_215_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_207_, v___x_214_, v_map_209_);
if (v_hasTrace_210_ == 0)
{
lean_object* v___x_216_; uint8_t v___x_217_; lean_object* v___x_219_; 
v___x_216_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_217_ = l_Lean_Name_isPrefixOf(v___x_216_, v_k_207_);
lean_dec(v_k_207_);
if (v_isShared_213_ == 0)
{
lean_ctor_set(v___x_212_, 0, v___x_215_);
v___x_219_ = v___x_212_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v___x_215_);
v___x_219_ = v_reuseFailAlloc_220_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
lean_ctor_set_uint8(v___x_219_, sizeof(void*)*1, v___x_217_);
return v___x_219_;
}
}
else
{
lean_object* v___x_222_; 
lean_dec(v_k_207_);
if (v_isShared_213_ == 0)
{
lean_ctor_set(v___x_212_, 0, v___x_215_);
v___x_222_ = v___x_212_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v___x_215_);
lean_ctor_set_uint8(v_reuseFailAlloc_223_, sizeof(void*)*1, v_hasTrace_210_);
v___x_222_ = v_reuseFailAlloc_223_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
return v___x_222_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_setOption(lean_object* v_opts_232_, lean_object* v_decl_233_, lean_object* v_name_234_, lean_object* v_val_235_){
_start:
{
lean_object* v_defValue_237_; 
v_defValue_237_ = lean_ctor_get(v_decl_233_, 2);
lean_inc_ref(v_defValue_237_);
lean_dec_ref(v_decl_233_);
switch(lean_obj_tag(v_defValue_237_))
{
case 1:
{
lean_object* v___x_238_; uint8_t v___x_239_; 
lean_dec_ref_known(v_defValue_237_, 0);
v___x_238_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__0));
v___x_239_ = lean_string_dec_eq(v_val_235_, v___x_238_);
if (v___x_239_ == 0)
{
lean_object* v___x_240_; uint8_t v___x_241_; 
v___x_240_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__1));
v___x_241_ = lean_string_dec_eq(v_val_235_, v___x_240_);
if (v___x_241_ == 0)
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
lean_dec(v_name_234_);
lean_dec_ref(v_opts_232_);
v___x_242_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__2));
v___x_243_ = lean_string_append(v___x_242_, v_val_235_);
lean_dec_ref(v_val_235_);
v___x_244_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__3));
v___x_245_ = lean_string_append(v___x_243_, v___x_244_);
v___x_246_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_246_, 0, v___x_245_);
v___x_247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_247_, 0, v___x_246_);
return v___x_247_;
}
else
{
lean_object* v___x_248_; lean_object* v___x_249_; 
lean_dec_ref(v_val_235_);
v___x_248_ = l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0(v_opts_232_, v_name_234_, v___x_239_);
v___x_249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_249_, 0, v___x_248_);
return v___x_249_;
}
}
else
{
lean_object* v___x_250_; lean_object* v___x_251_; 
lean_dec_ref(v_val_235_);
v___x_250_ = l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0(v_opts_232_, v_name_234_, v___x_239_);
v___x_251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_251_, 0, v___x_250_);
return v___x_251_;
}
}
case 3:
{
lean_object* v___x_253_; uint8_t v_isShared_254_; uint8_t v_isSharedCheck_276_; 
v_isSharedCheck_276_ = !lean_is_exclusive(v_defValue_237_);
if (v_isSharedCheck_276_ == 0)
{
lean_object* v_unused_277_; 
v_unused_277_ = lean_ctor_get(v_defValue_237_, 0);
lean_dec(v_unused_277_);
v___x_253_ = v_defValue_237_;
v_isShared_254_ = v_isSharedCheck_276_;
goto v_resetjp_252_;
}
else
{
lean_dec(v_defValue_237_);
v___x_253_ = lean_box(0);
v_isShared_254_ = v_isSharedCheck_276_;
goto v_resetjp_252_;
}
v_resetjp_252_:
{
lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_255_ = lean_unsigned_to_nat(0u);
v___x_256_ = lean_string_utf8_byte_size(v_val_235_);
lean_inc_ref(v_val_235_);
v___x_257_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_257_, 0, v_val_235_);
lean_ctor_set(v___x_257_, 1, v___x_255_);
lean_ctor_set(v___x_257_, 2, v___x_256_);
v___x_258_ = l_String_Slice_toNat_x3f(v___x_257_);
lean_dec_ref_known(v___x_257_, 3);
if (lean_obj_tag(v___x_258_) == 1)
{
lean_object* v_val_259_; lean_object* v___x_261_; uint8_t v_isShared_262_; uint8_t v_isSharedCheck_267_; 
lean_del_object(v___x_253_);
lean_dec_ref(v_val_235_);
v_val_259_ = lean_ctor_get(v___x_258_, 0);
v_isSharedCheck_267_ = !lean_is_exclusive(v___x_258_);
if (v_isSharedCheck_267_ == 0)
{
v___x_261_ = v___x_258_;
v_isShared_262_ = v_isSharedCheck_267_;
goto v_resetjp_260_;
}
else
{
lean_inc(v_val_259_);
lean_dec(v___x_258_);
v___x_261_ = lean_box(0);
v_isShared_262_ = v_isSharedCheck_267_;
goto v_resetjp_260_;
}
v_resetjp_260_:
{
lean_object* v___x_263_; lean_object* v___x_265_; 
v___x_263_ = l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__1(v_opts_232_, v_name_234_, v_val_259_);
if (v_isShared_262_ == 0)
{
lean_ctor_set_tag(v___x_261_, 0);
lean_ctor_set(v___x_261_, 0, v___x_263_);
v___x_265_ = v___x_261_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v___x_263_);
v___x_265_ = v_reuseFailAlloc_266_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
return v___x_265_;
}
}
}
else
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_273_; 
lean_dec(v___x_258_);
lean_dec(v_name_234_);
lean_dec_ref(v_opts_232_);
v___x_268_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__2));
v___x_269_ = lean_string_append(v___x_268_, v_val_235_);
lean_dec_ref(v_val_235_);
v___x_270_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__4));
v___x_271_ = lean_string_append(v___x_269_, v___x_270_);
if (v_isShared_254_ == 0)
{
lean_ctor_set_tag(v___x_253_, 18);
lean_ctor_set(v___x_253_, 0, v___x_271_);
v___x_273_ = v___x_253_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v___x_271_);
v___x_273_ = v_reuseFailAlloc_275_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
lean_object* v___x_274_; 
v___x_274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_274_, 0, v___x_273_);
return v___x_274_;
}
}
}
}
case 0:
{
lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_285_; 
v_isSharedCheck_285_ = !lean_is_exclusive(v_defValue_237_);
if (v_isSharedCheck_285_ == 0)
{
lean_object* v_unused_286_; 
v_unused_286_ = lean_ctor_get(v_defValue_237_, 0);
lean_dec(v_unused_286_);
v___x_279_ = v_defValue_237_;
v_isShared_280_ = v_isSharedCheck_285_;
goto v_resetjp_278_;
}
else
{
lean_dec(v_defValue_237_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_285_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_281_; lean_object* v___x_283_; 
v___x_281_ = l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__2(v_opts_232_, v_name_234_, v_val_235_);
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 0, v___x_281_);
v___x_283_ = v___x_279_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v___x_281_);
v___x_283_ = v_reuseFailAlloc_284_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
return v___x_283_;
}
}
}
default: 
{
lean_object* v___x_287_; uint8_t v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
lean_dec_ref(v_defValue_237_);
lean_dec_ref(v_val_235_);
lean_dec_ref(v_opts_232_);
v___x_287_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__5));
v___x_288_ = 1;
v___x_289_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_234_, v___x_288_);
v___x_290_ = lean_string_append(v___x_287_, v___x_289_);
lean_dec_ref(v___x_289_);
v___x_291_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__6));
v___x_292_ = lean_string_append(v___x_290_, v___x_291_);
v___x_293_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
v___x_294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_294_, 0, v___x_293_);
return v___x_294_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_setOption___boxed(lean_object* v_opts_295_, lean_object* v_decl_296_, lean_object* v_name_297_, lean_object* v_val_298_, lean_object* v___y_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = l_Lean_Language_Lean_setOption(v_opts_295_, v_decl_296_, v_name_297_, v_val_298_);
return v_res_300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_reparseOptions_spec__0(lean_object* v_o_301_, lean_object* v_k_302_, lean_object* v_v_303_){
_start:
{
lean_object* v_map_304_; uint8_t v_hasTrace_305_; lean_object* v___x_307_; uint8_t v_isShared_308_; uint8_t v_isSharedCheck_318_; 
v_map_304_ = lean_ctor_get(v_o_301_, 0);
v_hasTrace_305_ = lean_ctor_get_uint8(v_o_301_, sizeof(void*)*1);
v_isSharedCheck_318_ = !lean_is_exclusive(v_o_301_);
if (v_isSharedCheck_318_ == 0)
{
v___x_307_ = v_o_301_;
v_isShared_308_ = v_isSharedCheck_318_;
goto v_resetjp_306_;
}
else
{
lean_inc(v_map_304_);
lean_dec(v_o_301_);
v___x_307_ = lean_box(0);
v_isShared_308_ = v_isSharedCheck_318_;
goto v_resetjp_306_;
}
v_resetjp_306_:
{
lean_object* v___x_309_; 
lean_inc(v_k_302_);
v___x_309_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_302_, v_v_303_, v_map_304_);
if (v_hasTrace_305_ == 0)
{
lean_object* v___x_310_; uint8_t v___x_311_; lean_object* v___x_313_; 
v___x_310_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_311_ = l_Lean_Name_isPrefixOf(v___x_310_, v_k_302_);
lean_dec(v_k_302_);
if (v_isShared_308_ == 0)
{
lean_ctor_set(v___x_307_, 0, v___x_309_);
v___x_313_ = v___x_307_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v___x_309_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
lean_ctor_set_uint8(v___x_313_, sizeof(void*)*1, v___x_311_);
return v___x_313_;
}
}
else
{
lean_object* v___x_316_; 
lean_dec(v_k_302_);
if (v_isShared_308_ == 0)
{
lean_ctor_set(v___x_307_, 0, v___x_309_);
v___x_316_ = v___x_307_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v___x_309_);
lean_ctor_set_uint8(v_reuseFailAlloc_317_, sizeof(void*)*1, v_hasTrace_305_);
v___x_316_ = v_reuseFailAlloc_317_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
return v___x_316_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1(lean_object* v_a_325_, lean_object* v_init_326_, lean_object* v_x_327_){
_start:
{
lean_object* v_d_330_; 
if (lean_obj_tag(v_x_327_) == 0)
{
lean_object* v_k_333_; lean_object* v_v_334_; lean_object* v_l_335_; lean_object* v_r_336_; lean_object* v___x_337_; 
v_k_333_ = lean_ctor_get(v_x_327_, 1);
lean_inc(v_k_333_);
v_v_334_ = lean_ctor_get(v_x_327_, 2);
lean_inc(v_v_334_);
v_l_335_ = lean_ctor_get(v_x_327_, 3);
lean_inc(v_l_335_);
v_r_336_ = lean_ctor_get(v_x_327_, 4);
lean_inc(v_r_336_);
lean_dec_ref_known(v_x_327_, 5);
v___x_337_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1(v_a_325_, v_init_326_, v_l_335_);
if (lean_obj_tag(v___x_337_) == 0)
{
lean_object* v_a_338_; 
v_a_338_ = lean_ctor_get(v___x_337_, 0);
lean_inc(v_a_338_);
if (lean_obj_tag(v_a_338_) == 0)
{
lean_object* v_a_339_; 
lean_dec_ref_known(v___x_337_, 1);
lean_dec(v_r_336_);
lean_dec(v_v_334_);
lean_dec(v_k_333_);
v_a_339_ = lean_ctor_get(v_a_338_, 0);
lean_inc(v_a_339_);
lean_dec_ref_known(v_a_338_, 1);
v_d_330_ = v_a_339_;
goto v___jp_329_;
}
else
{
lean_object* v_a_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_391_; 
v_a_340_ = lean_ctor_get(v_a_338_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v_a_338_);
if (v_isSharedCheck_391_ == 0)
{
v___x_342_ = v_a_338_;
v_isShared_343_ = v_isSharedCheck_391_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_a_340_);
lean_dec(v_a_338_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_391_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_344_ = l_Lean_Name_getRoot(v_k_333_);
v___x_345_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__1));
v___x_346_ = lean_box(0);
v___x_347_ = l_Lean_Name_replacePrefix(v_k_333_, v___x_345_, v___x_346_);
v___x_348_ = l_Lean_OptionDecls_find_x3f(v_a_325_, v___x_347_);
if (lean_obj_tag(v___x_348_) == 1)
{
lean_dec(v___x_344_);
lean_del_object(v___x_342_);
lean_dec_ref_known(v___x_337_, 1);
if (lean_obj_tag(v_v_334_) == 0)
{
lean_object* v_val_349_; lean_object* v_v_350_; lean_object* v___x_351_; 
v_val_349_ = lean_ctor_get(v___x_348_, 0);
lean_inc(v_val_349_);
lean_dec_ref_known(v___x_348_, 1);
v_v_350_ = lean_ctor_get(v_v_334_, 0);
lean_inc_ref(v_v_350_);
lean_dec_ref_known(v_v_334_, 1);
v___x_351_ = l_Lean_Language_Lean_setOption(v_a_340_, v_val_349_, v___x_347_, v_v_350_);
if (lean_obj_tag(v___x_351_) == 0)
{
lean_object* v_a_352_; 
v_a_352_ = lean_ctor_get(v___x_351_, 0);
lean_inc(v_a_352_);
lean_dec_ref_known(v___x_351_, 1);
v_init_326_ = v_a_352_;
v_x_327_ = v_r_336_;
goto _start;
}
else
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_361_; 
lean_dec(v_r_336_);
v_a_354_ = lean_ctor_get(v___x_351_, 0);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_351_);
if (v_isSharedCheck_361_ == 0)
{
v___x_356_ = v___x_351_;
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v___x_351_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_359_; 
if (v_isShared_357_ == 0)
{
v___x_359_ = v___x_356_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_a_354_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
}
else
{
lean_object* v___x_362_; 
lean_dec_ref_known(v___x_348_, 1);
v___x_362_ = l_Lean_Options_set___at___00Lean_Language_Lean_reparseOptions_spec__0(v_a_340_, v___x_347_, v_v_334_);
v_init_326_ = v___x_362_;
v_x_327_ = v_r_336_;
goto _start;
}
}
else
{
uint8_t v___x_364_; 
lean_dec(v___x_348_);
lean_dec(v_a_340_);
lean_dec(v_v_334_);
v___x_364_ = lean_name_eq(v___x_344_, v___x_345_);
lean_dec(v___x_344_);
if (v___x_364_ == 0)
{
lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_385_; 
lean_dec(v_r_336_);
v_isSharedCheck_385_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_385_ == 0)
{
lean_object* v_unused_386_; 
v_unused_386_ = lean_ctor_get(v___x_337_, 0);
lean_dec(v_unused_386_);
v___x_366_ = v___x_337_;
v_isShared_367_ = v_isSharedCheck_385_;
goto v_resetjp_365_;
}
else
{
lean_dec(v___x_337_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_385_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_368_; uint8_t v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_380_; 
v___x_368_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__2));
v___x_369_ = 1;
lean_inc(v___x_347_);
v___x_370_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_347_, v___x_369_);
v___x_371_ = lean_string_append(v___x_368_, v___x_370_);
lean_dec_ref(v___x_370_);
v___x_372_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__3));
v___x_373_ = lean_string_append(v___x_371_, v___x_372_);
v___x_374_ = l_Lean_Name_append(v___x_345_, v___x_347_);
v___x_375_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_374_, v___x_369_);
v___x_376_ = lean_string_append(v___x_373_, v___x_375_);
lean_dec_ref(v___x_375_);
v___x_377_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__4));
v___x_378_ = lean_string_append(v___x_376_, v___x_377_);
if (v_isShared_343_ == 0)
{
lean_ctor_set_tag(v___x_342_, 18);
lean_ctor_set(v___x_342_, 0, v___x_378_);
v___x_380_ = v___x_342_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v___x_378_);
v___x_380_ = v_reuseFailAlloc_384_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
lean_object* v___x_382_; 
if (v_isShared_367_ == 0)
{
lean_ctor_set_tag(v___x_366_, 1);
lean_ctor_set(v___x_366_, 0, v___x_380_);
v___x_382_ = v___x_366_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v___x_380_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
}
}
else
{
lean_dec(v___x_347_);
lean_del_object(v___x_342_);
if (lean_obj_tag(v___x_337_) == 0)
{
lean_object* v_a_387_; 
v_a_387_ = lean_ctor_get(v___x_337_, 0);
lean_inc(v_a_387_);
lean_dec_ref_known(v___x_337_, 1);
if (lean_obj_tag(v_a_387_) == 0)
{
lean_object* v_a_388_; 
lean_dec(v_r_336_);
v_a_388_ = lean_ctor_get(v_a_387_, 0);
lean_inc(v_a_388_);
lean_dec_ref_known(v_a_387_, 1);
v_d_330_ = v_a_388_;
goto v___jp_329_;
}
else
{
lean_object* v_a_389_; 
v_a_389_ = lean_ctor_get(v_a_387_, 0);
lean_inc(v_a_389_);
lean_dec_ref_known(v_a_387_, 1);
v_init_326_ = v_a_389_;
v_x_327_ = v_r_336_;
goto _start;
}
}
else
{
lean_dec(v_r_336_);
return v___x_337_;
}
}
}
}
}
}
else
{
lean_dec(v_r_336_);
lean_dec(v_v_334_);
lean_dec(v_k_333_);
return v___x_337_;
}
}
else
{
lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_392_, 0, v_init_326_);
v___x_393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_393_, 0, v___x_392_);
return v___x_393_;
}
v___jp_329_:
{
lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_331_, 0, v_d_330_);
v___x_332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_332_, 0, v___x_331_);
return v___x_332_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___boxed(lean_object* v_a_394_, lean_object* v_init_395_, lean_object* v_x_396_, lean_object* v___y_397_){
_start:
{
lean_object* v_res_398_; 
v_res_398_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1(v_a_394_, v_init_395_, v_x_396_);
lean_dec(v_a_394_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_reparseOptions(lean_object* v_opts_399_){
_start:
{
lean_object* v_opts_x27_401_; lean_object* v___x_402_; 
v_opts_x27_401_ = l_Lean_Options_empty;
v___x_402_ = l_Lean_getOptionDecls();
if (lean_obj_tag(v___x_402_) == 0)
{
lean_object* v_a_403_; lean_object* v_map_404_; lean_object* v___x_405_; 
v_a_403_ = lean_ctor_get(v___x_402_, 0);
lean_inc(v_a_403_);
lean_dec_ref_known(v___x_402_, 1);
v_map_404_ = lean_ctor_get(v_opts_399_, 0);
lean_inc(v_map_404_);
lean_dec_ref(v_opts_399_);
v___x_405_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1(v_a_403_, v_opts_x27_401_, v_map_404_);
lean_dec(v_a_403_);
if (lean_obj_tag(v___x_405_) == 0)
{
lean_object* v_a_406_; lean_object* v___x_408_; uint8_t v_isShared_409_; uint8_t v_isSharedCheck_414_; 
v_a_406_ = lean_ctor_get(v___x_405_, 0);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_405_);
if (v_isSharedCheck_414_ == 0)
{
v___x_408_ = v___x_405_;
v_isShared_409_ = v_isSharedCheck_414_;
goto v_resetjp_407_;
}
else
{
lean_inc(v_a_406_);
lean_dec(v___x_405_);
v___x_408_ = lean_box(0);
v_isShared_409_ = v_isSharedCheck_414_;
goto v_resetjp_407_;
}
v_resetjp_407_:
{
lean_object* v_a_410_; lean_object* v___x_412_; 
v_a_410_ = lean_ctor_get(v_a_406_, 0);
lean_inc(v_a_410_);
lean_dec(v_a_406_);
if (v_isShared_409_ == 0)
{
lean_ctor_set(v___x_408_, 0, v_a_410_);
v___x_412_ = v___x_408_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v_a_410_);
v___x_412_ = v_reuseFailAlloc_413_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
return v___x_412_;
}
}
}
else
{
lean_object* v_a_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_422_; 
v_a_415_ = lean_ctor_get(v___x_405_, 0);
v_isSharedCheck_422_ = !lean_is_exclusive(v___x_405_);
if (v_isSharedCheck_422_ == 0)
{
v___x_417_ = v___x_405_;
v_isShared_418_ = v_isSharedCheck_422_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_a_415_);
lean_dec(v___x_405_);
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
lean_object* v_a_423_; lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_430_; 
lean_dec_ref(v_opts_399_);
v_a_423_ = lean_ctor_get(v___x_402_, 0);
v_isSharedCheck_430_ = !lean_is_exclusive(v___x_402_);
if (v_isSharedCheck_430_ == 0)
{
v___x_425_ = v___x_402_;
v_isShared_426_ = v_isSharedCheck_430_;
goto v_resetjp_424_;
}
else
{
lean_inc(v_a_423_);
lean_dec(v___x_402_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_430_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
lean_object* v___x_428_; 
if (v_isShared_426_ == 0)
{
v___x_428_ = v___x_425_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v_a_423_);
v___x_428_ = v_reuseFailAlloc_429_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
return v___x_428_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_reparseOptions___boxed(lean_object* v_opts_431_, lean_object* v___y_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_Lean_Language_Lean_reparseOptions(v_opts_431_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f(lean_object* v_stx_442_){
_start:
{
lean_object* v_stx_444_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; uint8_t v___x_450_; 
v___x_447_ = lean_unsigned_to_nat(0u);
v___x_448_ = l_Lean_Syntax_getArg(v_stx_442_, v___x_447_);
v___x_449_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3));
v___x_450_ = l_Lean_Syntax_isOfKind(v___x_448_, v___x_449_);
if (v___x_450_ == 0)
{
v_stx_444_ = v_stx_442_;
goto v___jp_443_;
}
else
{
lean_object* v___x_451_; lean_object* v_stx_452_; 
v___x_451_ = lean_unsigned_to_nat(1u);
v_stx_452_ = l_Lean_Syntax_getArg(v_stx_442_, v___x_451_);
lean_dec(v_stx_442_);
v_stx_444_ = v_stx_452_;
goto v___jp_443_;
}
v___jp_443_:
{
uint8_t v___x_445_; lean_object* v___x_446_; 
v___x_445_ = 0;
v___x_446_ = l_Lean_Syntax_getPos_x3f(v_stx_444_, v___x_445_);
lean_dec(v_stx_444_);
return v___x_446_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__spec__0(lean_object* v_name_453_, lean_object* v_decl_454_, lean_object* v_ref_455_){
_start:
{
lean_object* v_defValue_457_; lean_object* v_descr_458_; lean_object* v_deprecation_x3f_459_; lean_object* v___x_460_; uint8_t v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
v_defValue_457_ = lean_ctor_get(v_decl_454_, 0);
v_descr_458_ = lean_ctor_get(v_decl_454_, 1);
v_deprecation_x3f_459_ = lean_ctor_get(v_decl_454_, 2);
v___x_460_ = lean_alloc_ctor(1, 0, 1);
v___x_461_ = lean_unbox(v_defValue_457_);
lean_ctor_set_uint8(v___x_460_, 0, v___x_461_);
lean_inc(v_deprecation_x3f_459_);
lean_inc_ref(v_descr_458_);
lean_inc_n(v_name_453_, 2);
v___x_462_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_462_, 0, v_name_453_);
lean_ctor_set(v___x_462_, 1, v_ref_455_);
lean_ctor_set(v___x_462_, 2, v___x_460_);
lean_ctor_set(v___x_462_, 3, v_descr_458_);
lean_ctor_set(v___x_462_, 4, v_deprecation_x3f_459_);
v___x_463_ = lean_register_option(v_name_453_, v___x_462_);
if (lean_obj_tag(v___x_463_) == 0)
{
lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_471_; 
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_471_ == 0)
{
lean_object* v_unused_472_; 
v_unused_472_ = lean_ctor_get(v___x_463_, 0);
lean_dec(v_unused_472_);
v___x_465_ = v___x_463_;
v_isShared_466_ = v_isSharedCheck_471_;
goto v_resetjp_464_;
}
else
{
lean_dec(v___x_463_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_471_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
lean_object* v___x_467_; lean_object* v___x_469_; 
lean_inc(v_defValue_457_);
v___x_467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_467_, 0, v_name_453_);
lean_ctor_set(v___x_467_, 1, v_defValue_457_);
if (v_isShared_466_ == 0)
{
lean_ctor_set(v___x_465_, 0, v___x_467_);
v___x_469_ = v___x_465_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v___x_467_);
v___x_469_ = v_reuseFailAlloc_470_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
return v___x_469_;
}
}
}
else
{
lean_object* v_a_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_480_; 
lean_dec(v_name_453_);
v_a_473_ = lean_ctor_get(v___x_463_, 0);
v_isSharedCheck_480_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_480_ == 0)
{
v___x_475_ = v___x_463_;
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_a_473_);
lean_dec(v___x_463_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_478_; 
if (v_isShared_476_ == 0)
{
v___x_478_ = v___x_475_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v_a_473_);
v___x_478_ = v_reuseFailAlloc_479_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
return v___x_478_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_481_, lean_object* v_decl_482_, lean_object* v_ref_483_, lean_object* v___y_484_){
_start:
{
lean_object* v_res_485_; 
v_res_485_ = l_Lean_Option_register___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__spec__0(v_name_481_, v_decl_482_, v_ref_483_);
lean_dec_ref(v_decl_482_);
return v_res_485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_503_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__2_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_));
v___x_504_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__4_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_));
v___x_505_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_));
v___x_506_ = l_Lean_Option_register___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__spec__0(v___x_503_, v___x_504_, v___x_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4____boxed(lean_object* v___y_507_){
_start:
{
lean_object* v_res_508_; 
v_res_508_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_();
return v_res_508_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_509_ = lean_unsigned_to_nat(32u);
v___x_510_ = lean_mk_empty_array_with_capacity(v___x_509_);
v___x_511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_511_, 0, v___x_510_);
return v___x_511_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_512_ = ((size_t)5ULL);
v___x_513_ = lean_unsigned_to_nat(0u);
v___x_514_ = lean_unsigned_to_nat(32u);
v___x_515_ = lean_mk_empty_array_with_capacity(v___x_514_);
v___x_516_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__0, &l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__0);
v___x_517_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_517_, 0, v___x_516_);
lean_ctor_set(v___x_517_, 1, v___x_515_);
lean_ctor_set(v___x_517_, 2, v___x_513_);
lean_ctor_set(v___x_517_, 3, v___x_513_);
lean_ctor_set_usize(v___x_517_, 4, v___x_512_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg(lean_object* v___y_518_){
_start:
{
lean_object* v___x_520_; lean_object* v_infoState_521_; lean_object* v_trees_522_; lean_object* v___x_523_; lean_object* v_infoState_524_; lean_object* v_env_525_; lean_object* v_messages_526_; lean_object* v_scopes_527_; lean_object* v_usedQuotCtxts_528_; lean_object* v_nextMacroScope_529_; lean_object* v_maxRecDepth_530_; lean_object* v_ngen_531_; lean_object* v_auxDeclNGen_532_; lean_object* v_traceState_533_; lean_object* v_snapshotTasks_534_; lean_object* v_prevLinterStates_535_; lean_object* v_codeQualityEntryTasks_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_557_; 
v___x_520_ = lean_st_ref_get(v___y_518_);
v_infoState_521_ = lean_ctor_get(v___x_520_, 8);
lean_inc_ref(v_infoState_521_);
lean_dec(v___x_520_);
v_trees_522_ = lean_ctor_get(v_infoState_521_, 2);
lean_inc_ref(v_trees_522_);
lean_dec_ref(v_infoState_521_);
v___x_523_ = lean_st_ref_take(v___y_518_);
v_infoState_524_ = lean_ctor_get(v___x_523_, 8);
v_env_525_ = lean_ctor_get(v___x_523_, 0);
v_messages_526_ = lean_ctor_get(v___x_523_, 1);
v_scopes_527_ = lean_ctor_get(v___x_523_, 2);
v_usedQuotCtxts_528_ = lean_ctor_get(v___x_523_, 3);
v_nextMacroScope_529_ = lean_ctor_get(v___x_523_, 4);
v_maxRecDepth_530_ = lean_ctor_get(v___x_523_, 5);
v_ngen_531_ = lean_ctor_get(v___x_523_, 6);
v_auxDeclNGen_532_ = lean_ctor_get(v___x_523_, 7);
v_traceState_533_ = lean_ctor_get(v___x_523_, 9);
v_snapshotTasks_534_ = lean_ctor_get(v___x_523_, 10);
v_prevLinterStates_535_ = lean_ctor_get(v___x_523_, 11);
v_codeQualityEntryTasks_536_ = lean_ctor_get(v___x_523_, 12);
v_isSharedCheck_557_ = !lean_is_exclusive(v___x_523_);
if (v_isSharedCheck_557_ == 0)
{
v___x_538_ = v___x_523_;
v_isShared_539_ = v_isSharedCheck_557_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_codeQualityEntryTasks_536_);
lean_inc(v_prevLinterStates_535_);
lean_inc(v_snapshotTasks_534_);
lean_inc(v_traceState_533_);
lean_inc(v_infoState_524_);
lean_inc(v_auxDeclNGen_532_);
lean_inc(v_ngen_531_);
lean_inc(v_maxRecDepth_530_);
lean_inc(v_nextMacroScope_529_);
lean_inc(v_usedQuotCtxts_528_);
lean_inc(v_scopes_527_);
lean_inc(v_messages_526_);
lean_inc(v_env_525_);
lean_dec(v___x_523_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_557_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
uint8_t v_enabled_540_; lean_object* v_assignment_541_; lean_object* v_lazyAssignment_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_555_; 
v_enabled_540_ = lean_ctor_get_uint8(v_infoState_524_, sizeof(void*)*3);
v_assignment_541_ = lean_ctor_get(v_infoState_524_, 0);
v_lazyAssignment_542_ = lean_ctor_get(v_infoState_524_, 1);
v_isSharedCheck_555_ = !lean_is_exclusive(v_infoState_524_);
if (v_isSharedCheck_555_ == 0)
{
lean_object* v_unused_556_; 
v_unused_556_ = lean_ctor_get(v_infoState_524_, 2);
lean_dec(v_unused_556_);
v___x_544_ = v_infoState_524_;
v_isShared_545_ = v_isSharedCheck_555_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_lazyAssignment_542_);
lean_inc(v_assignment_541_);
lean_dec(v_infoState_524_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_555_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_546_; lean_object* v___x_548_; 
v___x_546_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__1, &l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__1);
if (v_isShared_545_ == 0)
{
lean_ctor_set(v___x_544_, 2, v___x_546_);
v___x_548_ = v___x_544_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v_assignment_541_);
lean_ctor_set(v_reuseFailAlloc_554_, 1, v_lazyAssignment_542_);
lean_ctor_set(v_reuseFailAlloc_554_, 2, v___x_546_);
lean_ctor_set_uint8(v_reuseFailAlloc_554_, sizeof(void*)*3, v_enabled_540_);
v___x_548_ = v_reuseFailAlloc_554_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
lean_object* v___x_550_; 
if (v_isShared_539_ == 0)
{
lean_ctor_set(v___x_538_, 8, v___x_548_);
v___x_550_ = v___x_538_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v_env_525_);
lean_ctor_set(v_reuseFailAlloc_553_, 1, v_messages_526_);
lean_ctor_set(v_reuseFailAlloc_553_, 2, v_scopes_527_);
lean_ctor_set(v_reuseFailAlloc_553_, 3, v_usedQuotCtxts_528_);
lean_ctor_set(v_reuseFailAlloc_553_, 4, v_nextMacroScope_529_);
lean_ctor_set(v_reuseFailAlloc_553_, 5, v_maxRecDepth_530_);
lean_ctor_set(v_reuseFailAlloc_553_, 6, v_ngen_531_);
lean_ctor_set(v_reuseFailAlloc_553_, 7, v_auxDeclNGen_532_);
lean_ctor_set(v_reuseFailAlloc_553_, 8, v___x_548_);
lean_ctor_set(v_reuseFailAlloc_553_, 9, v_traceState_533_);
lean_ctor_set(v_reuseFailAlloc_553_, 10, v_snapshotTasks_534_);
lean_ctor_set(v_reuseFailAlloc_553_, 11, v_prevLinterStates_535_);
lean_ctor_set(v_reuseFailAlloc_553_, 12, v_codeQualityEntryTasks_536_);
v___x_550_ = v_reuseFailAlloc_553_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_551_ = lean_st_ref_put(v___y_518_, v___x_550_);
v___x_552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_552_, 0, v_trees_522_);
return v___x_552_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___boxed(lean_object* v___y_558_, lean_object* v___y_559_){
_start:
{
lean_object* v_res_560_; 
v_res_560_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg(v___y_558_);
lean_dec(v___y_558_);
return v_res_560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0(lean_object* v___y_561_, lean_object* v___y_562_){
_start:
{
lean_object* v___x_564_; 
v___x_564_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg(v___y_562_);
return v___x_564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___boxed(lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_){
_start:
{
lean_object* v_res_568_; 
v_res_568_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0(v___y_565_, v___y_566_);
lean_dec(v___y_566_);
lean_dec_ref(v___y_565_);
return v_res_568_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(lean_object* v_opts_569_, lean_object* v_opt_570_){
_start:
{
lean_object* v_name_571_; lean_object* v_defValue_572_; lean_object* v_map_573_; lean_object* v___x_574_; 
v_name_571_ = lean_ctor_get(v_opt_570_, 0);
v_defValue_572_ = lean_ctor_get(v_opt_570_, 1);
v_map_573_ = lean_ctor_get(v_opts_569_, 0);
v___x_574_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_573_, v_name_571_);
if (lean_obj_tag(v___x_574_) == 0)
{
uint8_t v___x_575_; 
v___x_575_ = lean_unbox(v_defValue_572_);
return v___x_575_;
}
else
{
lean_object* v_val_576_; 
v_val_576_ = lean_ctor_get(v___x_574_, 0);
lean_inc(v_val_576_);
lean_dec_ref_known(v___x_574_, 1);
if (lean_obj_tag(v_val_576_) == 1)
{
uint8_t v_v_577_; 
v_v_577_ = lean_ctor_get_uint8(v_val_576_, 0);
lean_dec_ref_known(v_val_576_, 0);
return v_v_577_;
}
else
{
uint8_t v___x_578_; 
lean_dec(v_val_576_);
v___x_578_ = lean_unbox(v_defValue_572_);
return v___x_578_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1___boxed(lean_object* v_opts_579_, lean_object* v_opt_580_){
_start:
{
uint8_t v_res_581_; lean_object* v_r_582_; 
v_res_581_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_579_, v_opt_580_);
lean_dec_ref(v_opt_580_);
lean_dec_ref(v_opts_579_);
v_r_582_ = lean_box(v_res_581_);
return v_r_582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0(lean_object* v_val_585_, lean_object* v___y_586_){
_start:
{
lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_587_ = l_Lean_Language_Snapshot_transform(v_val_585_, v___y_586_);
v___x_588_ = ((lean_object*)(l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0));
v___x_589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_589_, 0, v___x_587_);
lean_ctor_set(v___x_589_, 1, v___x_588_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___boxed(lean_object* v_val_590_, lean_object* v___y_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0(v_val_590_, v___y_591_);
lean_dec_ref(v___y_591_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4(lean_object* v_inst_593_, lean_object* v_val_594_){
_start:
{
lean_object* v___f_595_; lean_object* v___x_596_; lean_object* v___x_597_; 
lean_inc_ref(v_val_594_);
v___f_595_ = lean_alloc_closure((void*)(l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___boxed), 2, 1);
lean_closure_set(v___f_595_, 0, v_val_594_);
v___x_596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_596_, 0, v_inst_593_);
lean_ctor_set(v___x_596_, 1, v_val_594_);
v___x_597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_597_, 0, v___x_596_);
lean_ctor_set(v___x_597_, 1, v___f_595_);
return v___x_597_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__0(lean_object* v_stx_598_, lean_object* v_cmds_599_, lean_object* v___y_600_, lean_object* v___y_601_){
_start:
{
lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_603_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg(v___y_601_);
lean_dec_ref(v___x_603_);
v___x_604_ = l_Lean_Elab_Command_elabCommandTopLevel(v_stx_598_, v_cmds_599_, v___y_600_, v___y_601_);
return v___x_604_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__0___boxed(lean_object* v_stx_605_, lean_object* v_cmds_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__0(v_stx_605_, v_cmds_606_, v___y_607_, v___y_608_);
lean_dec(v___y_608_);
lean_dec_ref(v___y_607_);
return v_res_610_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0(void){
_start:
{
lean_object* v___x_611_; 
v___x_611_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_611_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1(void){
_start:
{
lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_612_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0);
v___x_613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_613_, 0, v___x_612_);
return v___x_613_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__2(void){
_start:
{
lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_614_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1);
v___x_615_ = lean_unsigned_to_nat(0u);
v___x_616_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_616_, 0, v___x_615_);
lean_ctor_set(v___x_616_, 1, v___x_615_);
lean_ctor_set(v___x_616_, 2, v___x_615_);
lean_ctor_set(v___x_616_, 3, v___x_615_);
lean_ctor_set(v___x_616_, 4, v___x_614_);
lean_ctor_set(v___x_616_, 5, v___x_614_);
lean_ctor_set(v___x_616_, 6, v___x_614_);
lean_ctor_set(v___x_616_, 7, v___x_614_);
lean_ctor_set(v___x_616_, 8, v___x_614_);
lean_ctor_set(v___x_616_, 9, v___x_614_);
lean_ctor_set(v___x_616_, 10, v___x_614_);
return v___x_616_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__3(void){
_start:
{
lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; 
v___x_617_ = lean_unsigned_to_nat(32u);
v___x_618_ = lean_mk_empty_array_with_capacity(v___x_617_);
v___x_619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_619_, 0, v___x_618_);
return v___x_619_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__4(void){
_start:
{
size_t v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_620_ = ((size_t)5ULL);
v___x_621_ = lean_unsigned_to_nat(0u);
v___x_622_ = lean_unsigned_to_nat(32u);
v___x_623_ = lean_mk_empty_array_with_capacity(v___x_622_);
v___x_624_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__3);
v___x_625_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_625_, 0, v___x_624_);
lean_ctor_set(v___x_625_, 1, v___x_623_);
lean_ctor_set(v___x_625_, 2, v___x_621_);
lean_ctor_set(v___x_625_, 3, v___x_621_);
lean_ctor_set_usize(v___x_625_, 4, v___x_620_);
return v___x_625_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__5(void){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_626_ = lean_box(1);
v___x_627_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__4);
v___x_628_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1);
v___x_629_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_629_, 0, v___x_628_);
lean_ctor_set(v___x_629_, 1, v___x_627_);
lean_ctor_set(v___x_629_, 2, v___x_626_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg(lean_object* v_msgData_630_, lean_object* v___y_631_){
_start:
{
lean_object* v___x_633_; lean_object* v_env_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v_scopes_637_; lean_object* v___x_638_; lean_object* v_opts_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_633_ = lean_st_ref_get(v___y_631_);
v_env_634_ = lean_ctor_get(v___x_633_, 0);
lean_inc_ref(v_env_634_);
lean_dec(v___x_633_);
v___x_635_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_636_ = lean_st_ref_get(v___y_631_);
v_scopes_637_ = lean_ctor_get(v___x_636_, 2);
lean_inc(v_scopes_637_);
lean_dec(v___x_636_);
v___x_638_ = l_List_head_x21___redArg(v___x_635_, v_scopes_637_);
lean_dec(v_scopes_637_);
v_opts_639_ = lean_ctor_get(v___x_638_, 1);
lean_inc_ref(v_opts_639_);
lean_dec(v___x_638_);
v___x_640_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__2);
v___x_641_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__5);
v___x_642_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_642_, 0, v_env_634_);
lean_ctor_set(v___x_642_, 1, v___x_640_);
lean_ctor_set(v___x_642_, 2, v___x_641_);
lean_ctor_set(v___x_642_, 3, v_opts_639_);
v___x_643_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_643_, 0, v___x_642_);
lean_ctor_set(v___x_643_, 1, v_msgData_630_);
v___x_644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_644_, 0, v___x_643_);
return v___x_644_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___boxed(lean_object* v_msgData_645_, lean_object* v___y_646_, lean_object* v___y_647_){
_start:
{
lean_object* v_res_648_; 
v_res_648_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg(v_msgData_645_, v___y_646_);
lean_dec(v___y_646_);
return v_res_648_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___lam__0(uint8_t v_suppressElabErrors_649_, uint8_t v___y_650_, lean_object* v_x_651_){
_start:
{
if (lean_obj_tag(v_x_651_) == 1)
{
lean_object* v_pre_652_; 
v_pre_652_ = lean_ctor_get(v_x_651_, 0);
if (lean_obj_tag(v_pre_652_) == 0)
{
lean_object* v_str_653_; lean_object* v___x_654_; uint8_t v___x_655_; 
v_str_653_ = lean_ctor_get(v_x_651_, 1);
v___x_654_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__0));
v___x_655_ = lean_string_dec_eq(v_str_653_, v___x_654_);
if (v___x_655_ == 0)
{
return v___x_655_;
}
else
{
return v_suppressElabErrors_649_;
}
}
else
{
return v___y_650_;
}
}
else
{
return v___y_650_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___lam__0___boxed(lean_object* v_suppressElabErrors_656_, lean_object* v___y_657_, lean_object* v_x_658_){
_start:
{
uint8_t v_suppressElabErrors_boxed_659_; uint8_t v___y_9269__boxed_660_; uint8_t v_res_661_; lean_object* v_r_662_; 
v_suppressElabErrors_boxed_659_ = lean_unbox(v_suppressElabErrors_656_);
v___y_9269__boxed_660_ = lean_unbox(v___y_657_);
v_res_661_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___lam__0(v_suppressElabErrors_boxed_659_, v___y_9269__boxed_660_, v_x_658_);
lean_dec(v_x_658_);
v_r_662_ = lean_box(v_res_661_);
return v_r_662_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10(lean_object* v_ref_664_, lean_object* v_msgData_665_, uint8_t v_severity_666_, uint8_t v_isSilent_667_, lean_object* v___y_668_, lean_object* v___y_669_){
_start:
{
lean_object* v___y_672_; lean_object* v___y_673_; lean_object* v___y_674_; lean_object* v___y_675_; uint8_t v___y_676_; uint8_t v___y_677_; lean_object* v___y_678_; lean_object* v___y_679_; uint8_t v___y_737_; uint8_t v___y_738_; uint8_t v___y_739_; lean_object* v___y_740_; lean_object* v___y_741_; uint8_t v___y_765_; lean_object* v___y_766_; uint8_t v___y_767_; uint8_t v___y_768_; lean_object* v___y_769_; uint8_t v___y_773_; uint8_t v___y_774_; uint8_t v___y_775_; uint8_t v___x_790_; uint8_t v___y_792_; uint8_t v___y_793_; uint8_t v___y_794_; uint8_t v___y_796_; uint8_t v___x_808_; 
v___x_790_ = 2;
v___x_808_ = l_Lean_instBEqMessageSeverity_beq(v_severity_666_, v___x_790_);
if (v___x_808_ == 0)
{
v___y_796_ = v___x_808_;
goto v___jp_795_;
}
else
{
uint8_t v___x_809_; 
lean_inc_ref(v_msgData_665_);
v___x_809_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_665_);
v___y_796_ = v___x_809_;
goto v___jp_795_;
}
v___jp_671_:
{
lean_object* v___x_680_; 
v___x_680_ = l_Lean_Elab_Command_getScope___redArg(v___y_679_);
if (lean_obj_tag(v___x_680_) == 0)
{
lean_object* v_a_681_; lean_object* v_currNamespace_682_; lean_object* v___x_683_; 
v_a_681_ = lean_ctor_get(v___x_680_, 0);
lean_inc(v_a_681_);
lean_dec_ref_known(v___x_680_, 1);
v_currNamespace_682_ = lean_ctor_get(v_a_681_, 2);
lean_inc(v_currNamespace_682_);
lean_dec(v_a_681_);
v___x_683_ = l_Lean_Elab_Command_getScope___redArg(v___y_679_);
if (lean_obj_tag(v___x_683_) == 0)
{
lean_object* v_a_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_719_; 
v_a_684_ = lean_ctor_get(v___x_683_, 0);
v_isSharedCheck_719_ = !lean_is_exclusive(v___x_683_);
if (v_isSharedCheck_719_ == 0)
{
v___x_686_ = v___x_683_;
v_isShared_687_ = v_isSharedCheck_719_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_a_684_);
lean_dec(v___x_683_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_719_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v_openDecls_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v_env_693_; lean_object* v_messages_694_; lean_object* v_scopes_695_; lean_object* v_usedQuotCtxts_696_; lean_object* v_nextMacroScope_697_; lean_object* v_maxRecDepth_698_; lean_object* v_ngen_699_; lean_object* v_auxDeclNGen_700_; lean_object* v_infoState_701_; lean_object* v_traceState_702_; lean_object* v_snapshotTasks_703_; lean_object* v_prevLinterStates_704_; lean_object* v_codeQualityEntryTasks_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_718_; 
v_openDecls_688_ = lean_ctor_get(v_a_684_, 3);
lean_inc(v_openDecls_688_);
lean_dec(v_a_684_);
v___x_689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_689_, 0, v_currNamespace_682_);
lean_ctor_set(v___x_689_, 1, v_openDecls_688_);
v___x_690_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_690_, 0, v___x_689_);
lean_ctor_set(v___x_690_, 1, v___y_673_);
lean_inc_ref(v___y_678_);
lean_inc_ref(v___y_672_);
v___x_691_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_691_, 0, v___y_672_);
lean_ctor_set(v___x_691_, 1, v___y_674_);
lean_ctor_set(v___x_691_, 2, v___y_675_);
lean_ctor_set(v___x_691_, 3, v___y_678_);
lean_ctor_set(v___x_691_, 4, v___x_690_);
lean_ctor_set_uint8(v___x_691_, sizeof(void*)*5, v___y_677_);
lean_ctor_set_uint8(v___x_691_, sizeof(void*)*5 + 1, v___y_676_);
lean_ctor_set_uint8(v___x_691_, sizeof(void*)*5 + 2, v_isSilent_667_);
v___x_692_ = lean_st_ref_take(v___y_679_);
v_env_693_ = lean_ctor_get(v___x_692_, 0);
v_messages_694_ = lean_ctor_get(v___x_692_, 1);
v_scopes_695_ = lean_ctor_get(v___x_692_, 2);
v_usedQuotCtxts_696_ = lean_ctor_get(v___x_692_, 3);
v_nextMacroScope_697_ = lean_ctor_get(v___x_692_, 4);
v_maxRecDepth_698_ = lean_ctor_get(v___x_692_, 5);
v_ngen_699_ = lean_ctor_get(v___x_692_, 6);
v_auxDeclNGen_700_ = lean_ctor_get(v___x_692_, 7);
v_infoState_701_ = lean_ctor_get(v___x_692_, 8);
v_traceState_702_ = lean_ctor_get(v___x_692_, 9);
v_snapshotTasks_703_ = lean_ctor_get(v___x_692_, 10);
v_prevLinterStates_704_ = lean_ctor_get(v___x_692_, 11);
v_codeQualityEntryTasks_705_ = lean_ctor_get(v___x_692_, 12);
v_isSharedCheck_718_ = !lean_is_exclusive(v___x_692_);
if (v_isSharedCheck_718_ == 0)
{
v___x_707_ = v___x_692_;
v_isShared_708_ = v_isSharedCheck_718_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_codeQualityEntryTasks_705_);
lean_inc(v_prevLinterStates_704_);
lean_inc(v_snapshotTasks_703_);
lean_inc(v_traceState_702_);
lean_inc(v_infoState_701_);
lean_inc(v_auxDeclNGen_700_);
lean_inc(v_ngen_699_);
lean_inc(v_maxRecDepth_698_);
lean_inc(v_nextMacroScope_697_);
lean_inc(v_usedQuotCtxts_696_);
lean_inc(v_scopes_695_);
lean_inc(v_messages_694_);
lean_inc(v_env_693_);
lean_dec(v___x_692_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_718_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_712_; 
v___x_709_ = lean_box(0);
v___x_710_ = l_Lean_MessageLog_add(v___x_691_, v_messages_694_);
if (v_isShared_708_ == 0)
{
lean_ctor_set(v___x_707_, 1, v___x_710_);
v___x_712_ = v___x_707_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v_env_693_);
lean_ctor_set(v_reuseFailAlloc_717_, 1, v___x_710_);
lean_ctor_set(v_reuseFailAlloc_717_, 2, v_scopes_695_);
lean_ctor_set(v_reuseFailAlloc_717_, 3, v_usedQuotCtxts_696_);
lean_ctor_set(v_reuseFailAlloc_717_, 4, v_nextMacroScope_697_);
lean_ctor_set(v_reuseFailAlloc_717_, 5, v_maxRecDepth_698_);
lean_ctor_set(v_reuseFailAlloc_717_, 6, v_ngen_699_);
lean_ctor_set(v_reuseFailAlloc_717_, 7, v_auxDeclNGen_700_);
lean_ctor_set(v_reuseFailAlloc_717_, 8, v_infoState_701_);
lean_ctor_set(v_reuseFailAlloc_717_, 9, v_traceState_702_);
lean_ctor_set(v_reuseFailAlloc_717_, 10, v_snapshotTasks_703_);
lean_ctor_set(v_reuseFailAlloc_717_, 11, v_prevLinterStates_704_);
lean_ctor_set(v_reuseFailAlloc_717_, 12, v_codeQualityEntryTasks_705_);
v___x_712_ = v_reuseFailAlloc_717_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
lean_object* v___x_713_; lean_object* v___x_715_; 
v___x_713_ = lean_st_ref_put(v___y_679_, v___x_712_);
if (v_isShared_687_ == 0)
{
lean_ctor_set(v___x_686_, 0, v___x_709_);
v___x_715_ = v___x_686_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v___x_709_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
return v___x_715_;
}
}
}
}
}
else
{
lean_object* v_a_720_; lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_727_; 
lean_dec(v_currNamespace_682_);
lean_dec(v___y_675_);
lean_dec_ref(v___y_674_);
lean_dec_ref(v___y_673_);
v_a_720_ = lean_ctor_get(v___x_683_, 0);
v_isSharedCheck_727_ = !lean_is_exclusive(v___x_683_);
if (v_isSharedCheck_727_ == 0)
{
v___x_722_ = v___x_683_;
v_isShared_723_ = v_isSharedCheck_727_;
goto v_resetjp_721_;
}
else
{
lean_inc(v_a_720_);
lean_dec(v___x_683_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_727_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
lean_object* v___x_725_; 
if (v_isShared_723_ == 0)
{
v___x_725_ = v___x_722_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v_a_720_);
v___x_725_ = v_reuseFailAlloc_726_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
return v___x_725_;
}
}
}
}
else
{
lean_object* v_a_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_735_; 
lean_dec(v___y_675_);
lean_dec_ref(v___y_674_);
lean_dec_ref(v___y_673_);
v_a_728_ = lean_ctor_get(v___x_680_, 0);
v_isSharedCheck_735_ = !lean_is_exclusive(v___x_680_);
if (v_isSharedCheck_735_ == 0)
{
v___x_730_ = v___x_680_;
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_a_728_);
lean_dec(v___x_680_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_733_; 
if (v_isShared_731_ == 0)
{
v___x_733_ = v___x_730_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v_a_728_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
return v___x_733_;
}
}
}
}
v___jp_736_:
{
lean_object* v_fileName_742_; lean_object* v_fileMap_743_; uint8_t v_suppressElabErrors_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___f_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v_a_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_763_; 
v_fileName_742_ = lean_ctor_get(v___y_668_, 0);
v_fileMap_743_ = lean_ctor_get(v___y_668_, 1);
v_suppressElabErrors_744_ = lean_ctor_get_uint8(v___y_668_, sizeof(void*)*10);
v___x_745_ = lean_box(v_suppressElabErrors_744_);
v___x_746_ = lean_box(v___y_737_);
v___f_747_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___lam__0___boxed), 3, 2);
lean_closure_set(v___f_747_, 0, v___x_745_);
lean_closure_set(v___f_747_, 1, v___x_746_);
v___x_748_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_665_);
v___x_749_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg(v___x_748_, v___y_669_);
v_a_750_ = lean_ctor_get(v___x_749_, 0);
v_isSharedCheck_763_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_763_ == 0)
{
v___x_752_ = v___x_749_;
v_isShared_753_ = v_isSharedCheck_763_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_a_750_);
lean_dec(v___x_749_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_763_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; 
lean_inc_ref_n(v_fileMap_743_, 2);
v___x_754_ = l_Lean_FileMap_toPosition(v_fileMap_743_, v___y_740_);
lean_dec(v___y_740_);
v___x_755_ = l_Lean_FileMap_toPosition(v_fileMap_743_, v___y_741_);
lean_dec(v___y_741_);
v___x_756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_756_, 0, v___x_755_);
v___x_757_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
if (v_suppressElabErrors_744_ == 0)
{
lean_del_object(v___x_752_);
lean_dec_ref(v___f_747_);
v___y_672_ = v_fileName_742_;
v___y_673_ = v_a_750_;
v___y_674_ = v___x_754_;
v___y_675_ = v___x_756_;
v___y_676_ = v___y_738_;
v___y_677_ = v___y_739_;
v___y_678_ = v___x_757_;
v___y_679_ = v___y_669_;
goto v___jp_671_;
}
else
{
uint8_t v___x_758_; 
lean_inc(v_a_750_);
v___x_758_ = l_Lean_MessageData_hasTag(v___f_747_, v_a_750_);
if (v___x_758_ == 0)
{
lean_object* v___x_759_; lean_object* v___x_761_; 
lean_dec_ref_known(v___x_756_, 1);
lean_dec_ref(v___x_754_);
lean_dec(v_a_750_);
v___x_759_ = lean_box(0);
if (v_isShared_753_ == 0)
{
lean_ctor_set(v___x_752_, 0, v___x_759_);
v___x_761_ = v___x_752_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v___x_759_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
else
{
lean_del_object(v___x_752_);
v___y_672_ = v_fileName_742_;
v___y_673_ = v_a_750_;
v___y_674_ = v___x_754_;
v___y_675_ = v___x_756_;
v___y_676_ = v___y_738_;
v___y_677_ = v___y_739_;
v___y_678_ = v___x_757_;
v___y_679_ = v___y_669_;
goto v___jp_671_;
}
}
}
}
v___jp_764_:
{
lean_object* v___x_770_; 
v___x_770_ = l_Lean_Syntax_getTailPos_x3f(v___y_766_, v___y_768_);
lean_dec(v___y_766_);
if (lean_obj_tag(v___x_770_) == 0)
{
lean_inc(v___y_769_);
v___y_737_ = v___y_765_;
v___y_738_ = v___y_767_;
v___y_739_ = v___y_768_;
v___y_740_ = v___y_769_;
v___y_741_ = v___y_769_;
goto v___jp_736_;
}
else
{
lean_object* v_val_771_; 
v_val_771_ = lean_ctor_get(v___x_770_, 0);
lean_inc(v_val_771_);
lean_dec_ref_known(v___x_770_, 1);
v___y_737_ = v___y_765_;
v___y_738_ = v___y_767_;
v___y_739_ = v___y_768_;
v___y_740_ = v___y_769_;
v___y_741_ = v_val_771_;
goto v___jp_736_;
}
}
v___jp_772_:
{
lean_object* v___x_776_; 
v___x_776_ = l_Lean_Elab_Command_getRef___redArg(v___y_668_);
if (lean_obj_tag(v___x_776_) == 0)
{
lean_object* v_a_777_; lean_object* v_ref_778_; lean_object* v___x_779_; 
v_a_777_ = lean_ctor_get(v___x_776_, 0);
lean_inc(v_a_777_);
lean_dec_ref_known(v___x_776_, 1);
v_ref_778_ = l_Lean_replaceRef(v_ref_664_, v_a_777_);
lean_dec(v_a_777_);
v___x_779_ = l_Lean_Syntax_getPos_x3f(v_ref_778_, v___y_774_);
if (lean_obj_tag(v___x_779_) == 0)
{
lean_object* v___x_780_; 
v___x_780_ = lean_unsigned_to_nat(0u);
v___y_765_ = v___y_773_;
v___y_766_ = v_ref_778_;
v___y_767_ = v___y_775_;
v___y_768_ = v___y_774_;
v___y_769_ = v___x_780_;
goto v___jp_764_;
}
else
{
lean_object* v_val_781_; 
v_val_781_ = lean_ctor_get(v___x_779_, 0);
lean_inc(v_val_781_);
lean_dec_ref_known(v___x_779_, 1);
v___y_765_ = v___y_773_;
v___y_766_ = v_ref_778_;
v___y_767_ = v___y_775_;
v___y_768_ = v___y_774_;
v___y_769_ = v_val_781_;
goto v___jp_764_;
}
}
else
{
lean_object* v_a_782_; lean_object* v___x_784_; uint8_t v_isShared_785_; uint8_t v_isSharedCheck_789_; 
lean_dec_ref(v_msgData_665_);
v_a_782_ = lean_ctor_get(v___x_776_, 0);
v_isSharedCheck_789_ = !lean_is_exclusive(v___x_776_);
if (v_isSharedCheck_789_ == 0)
{
v___x_784_ = v___x_776_;
v_isShared_785_ = v_isSharedCheck_789_;
goto v_resetjp_783_;
}
else
{
lean_inc(v_a_782_);
lean_dec(v___x_776_);
v___x_784_ = lean_box(0);
v_isShared_785_ = v_isSharedCheck_789_;
goto v_resetjp_783_;
}
v_resetjp_783_:
{
lean_object* v___x_787_; 
if (v_isShared_785_ == 0)
{
v___x_787_ = v___x_784_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v_a_782_);
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
v___jp_791_:
{
if (v___y_794_ == 0)
{
v___y_773_ = v___y_792_;
v___y_774_ = v___y_793_;
v___y_775_ = v_severity_666_;
goto v___jp_772_;
}
else
{
v___y_773_ = v___y_792_;
v___y_774_ = v___y_793_;
v___y_775_ = v___x_790_;
goto v___jp_772_;
}
}
v___jp_795_:
{
if (v___y_796_ == 0)
{
lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v_scopes_799_; lean_object* v___x_800_; lean_object* v_opts_801_; uint8_t v___x_802_; uint8_t v___x_803_; 
v___x_797_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_798_ = lean_st_ref_get(v___y_669_);
v_scopes_799_ = lean_ctor_get(v___x_798_, 2);
lean_inc(v_scopes_799_);
lean_dec(v___x_798_);
v___x_800_ = l_List_head_x21___redArg(v___x_797_, v_scopes_799_);
lean_dec(v_scopes_799_);
v_opts_801_ = lean_ctor_get(v___x_800_, 1);
lean_inc_ref(v_opts_801_);
lean_dec(v___x_800_);
v___x_802_ = 1;
v___x_803_ = l_Lean_instBEqMessageSeverity_beq(v_severity_666_, v___x_802_);
if (v___x_803_ == 0)
{
lean_dec_ref(v_opts_801_);
v___y_792_ = v___y_796_;
v___y_793_ = v___y_796_;
v___y_794_ = v___x_803_;
goto v___jp_791_;
}
else
{
lean_object* v___x_804_; uint8_t v___x_805_; 
v___x_804_ = l_Lean_warningAsError;
v___x_805_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_801_, v___x_804_);
lean_dec_ref(v_opts_801_);
v___y_792_ = v___y_796_;
v___y_793_ = v___y_796_;
v___y_794_ = v___x_805_;
goto v___jp_791_;
}
}
else
{
lean_object* v___x_806_; lean_object* v___x_807_; 
lean_dec_ref(v_msgData_665_);
v___x_806_ = lean_box(0);
v___x_807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_807_, 0, v___x_806_);
return v___x_807_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___boxed(lean_object* v_ref_810_, lean_object* v_msgData_811_, lean_object* v_severity_812_, lean_object* v_isSilent_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_){
_start:
{
uint8_t v_severity_boxed_817_; uint8_t v_isSilent_boxed_818_; lean_object* v_res_819_; 
v_severity_boxed_817_ = lean_unbox(v_severity_812_);
v_isSilent_boxed_818_ = lean_unbox(v_isSilent_813_);
v_res_819_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10(v_ref_810_, v_msgData_811_, v_severity_boxed_817_, v_isSilent_boxed_818_, v___y_814_, v___y_815_);
lean_dec(v___y_815_);
lean_dec_ref(v___y_814_);
lean_dec(v_ref_810_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5_spec__12(lean_object* v_msgData_820_, uint8_t v_severity_821_, uint8_t v_isSilent_822_, lean_object* v___y_823_, lean_object* v___y_824_){
_start:
{
lean_object* v___x_826_; 
v___x_826_ = l_Lean_Elab_Command_getRef___redArg(v___y_823_);
if (lean_obj_tag(v___x_826_) == 0)
{
lean_object* v_a_827_; lean_object* v___x_828_; 
v_a_827_ = lean_ctor_get(v___x_826_, 0);
lean_inc(v_a_827_);
lean_dec_ref_known(v___x_826_, 1);
v___x_828_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10(v_a_827_, v_msgData_820_, v_severity_821_, v_isSilent_822_, v___y_823_, v___y_824_);
lean_dec(v_a_827_);
return v___x_828_;
}
else
{
lean_object* v_a_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_836_; 
lean_dec_ref(v_msgData_820_);
v_a_829_ = lean_ctor_get(v___x_826_, 0);
v_isSharedCheck_836_ = !lean_is_exclusive(v___x_826_);
if (v_isSharedCheck_836_ == 0)
{
v___x_831_ = v___x_826_;
v_isShared_832_ = v_isSharedCheck_836_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_a_829_);
lean_dec(v___x_826_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_836_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
lean_object* v___x_834_; 
if (v_isShared_832_ == 0)
{
v___x_834_ = v___x_831_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v_a_829_);
v___x_834_ = v_reuseFailAlloc_835_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
return v___x_834_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5_spec__12___boxed(lean_object* v_msgData_837_, lean_object* v_severity_838_, lean_object* v_isSilent_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_){
_start:
{
uint8_t v_severity_boxed_843_; uint8_t v_isSilent_boxed_844_; lean_object* v_res_845_; 
v_severity_boxed_843_ = lean_unbox(v_severity_838_);
v_isSilent_boxed_844_ = lean_unbox(v_isSilent_839_);
v_res_845_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5_spec__12(v_msgData_837_, v_severity_boxed_843_, v_isSilent_boxed_844_, v___y_840_, v___y_841_);
lean_dec(v___y_841_);
lean_dec_ref(v___y_840_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5(lean_object* v_msgData_846_, lean_object* v___y_847_, lean_object* v___y_848_){
_start:
{
uint8_t v___x_850_; uint8_t v___x_851_; lean_object* v___x_852_; 
v___x_850_ = 2;
v___x_851_ = 0;
v___x_852_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5_spec__12(v_msgData_846_, v___x_850_, v___x_851_, v___y_847_, v___y_848_);
return v___x_852_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5___boxed(lean_object* v_msgData_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_){
_start:
{
lean_object* v_res_857_; 
v_res_857_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5(v_msgData_853_, v___y_854_, v___y_855_);
lean_dec(v___y_855_);
lean_dec_ref(v___y_854_);
return v_res_857_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4(lean_object* v_ref_858_, lean_object* v_msgData_859_, lean_object* v___y_860_, lean_object* v___y_861_){
_start:
{
uint8_t v___x_863_; uint8_t v___x_864_; lean_object* v___x_865_; 
v___x_863_ = 2;
v___x_864_ = 0;
v___x_865_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10(v_ref_858_, v_msgData_859_, v___x_863_, v___x_864_, v___y_860_, v___y_861_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4___boxed(lean_object* v_ref_866_, lean_object* v_msgData_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_){
_start:
{
lean_object* v_res_871_; 
v_res_871_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4(v_ref_866_, v_msgData_867_, v___y_868_, v___y_869_);
lean_dec(v___y_869_);
lean_dec_ref(v___y_868_);
lean_dec(v_ref_866_);
return v_res_871_;
}
}
static lean_object* _init_l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__1(void){
_start:
{
lean_object* v___x_873_; lean_object* v___x_874_; 
v___x_873_ = ((lean_object*)(l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__0));
v___x_874_ = l_Lean_stringToMessageData(v___x_873_);
return v___x_874_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2(lean_object* v_ex_875_, lean_object* v___y_876_, lean_object* v___y_877_){
_start:
{
if (lean_obj_tag(v_ex_875_) == 0)
{
lean_object* v_ref_879_; lean_object* v_msg_880_; lean_object* v___x_881_; 
v_ref_879_ = lean_ctor_get(v_ex_875_, 0);
lean_inc(v_ref_879_);
v_msg_880_ = lean_ctor_get(v_ex_875_, 1);
lean_inc_ref(v_msg_880_);
lean_dec_ref_known(v_ex_875_, 2);
v___x_881_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4(v_ref_879_, v_msg_880_, v___y_876_, v___y_877_);
lean_dec(v_ref_879_);
return v___x_881_;
}
else
{
lean_object* v_id_882_; uint8_t v___y_884_; uint8_t v___x_906_; 
v_id_882_ = lean_ctor_get(v_ex_875_, 0);
lean_inc(v_id_882_);
v___x_906_ = l_Lean_Elab_isAbortExceptionId(v_id_882_);
if (v___x_906_ == 0)
{
uint8_t v___x_907_; 
v___x_907_ = l_Lean_Exception_isInterrupt(v_ex_875_);
lean_dec_ref_known(v_ex_875_, 2);
v___y_884_ = v___x_907_;
goto v___jp_883_;
}
else
{
lean_dec_ref_known(v_ex_875_, 2);
v___y_884_ = v___x_906_;
goto v___jp_883_;
}
v___jp_883_:
{
if (v___y_884_ == 0)
{
lean_object* v___x_885_; 
v___x_885_ = l_Lean_InternalExceptionId_getName(v_id_882_);
lean_dec(v_id_882_);
if (lean_obj_tag(v___x_885_) == 0)
{
lean_object* v_a_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; 
v_a_886_ = lean_ctor_get(v___x_885_, 0);
lean_inc(v_a_886_);
lean_dec_ref_known(v___x_885_, 1);
v___x_887_ = lean_obj_once(&l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__1, &l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__1_once, _init_l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__1);
v___x_888_ = l_Lean_MessageData_ofName(v_a_886_);
v___x_889_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_889_, 0, v___x_887_);
lean_ctor_set(v___x_889_, 1, v___x_888_);
v___x_890_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5(v___x_889_, v___y_876_, v___y_877_);
return v___x_890_;
}
else
{
lean_object* v_a_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_903_; 
v_a_891_ = lean_ctor_get(v___x_885_, 0);
v_isSharedCheck_903_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_903_ == 0)
{
v___x_893_ = v___x_885_;
v_isShared_894_ = v_isSharedCheck_903_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_a_891_);
lean_dec(v___x_885_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_903_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
lean_object* v_ref_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_901_; 
v_ref_895_ = lean_ctor_get(v___y_876_, 7);
v___x_896_ = lean_io_error_to_string(v_a_891_);
v___x_897_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_897_, 0, v___x_896_);
v___x_898_ = l_Lean_MessageData_ofFormat(v___x_897_);
lean_inc(v_ref_895_);
v___x_899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_899_, 0, v_ref_895_);
lean_ctor_set(v___x_899_, 1, v___x_898_);
if (v_isShared_894_ == 0)
{
lean_ctor_set(v___x_893_, 0, v___x_899_);
v___x_901_ = v___x_893_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v___x_899_);
v___x_901_ = v_reuseFailAlloc_902_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
return v___x_901_;
}
}
}
}
else
{
lean_object* v___x_904_; lean_object* v___x_905_; 
lean_dec(v_id_882_);
v___x_904_ = lean_box(0);
v___x_905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_905_, 0, v___x_904_);
return v___x_905_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___boxed(lean_object* v_ex_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_){
_start:
{
lean_object* v_res_912_; 
v_res_912_ = l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2(v_ex_908_, v___y_909_, v___y_910_);
lean_dec(v___y_910_);
lean_dec_ref(v___y_909_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2(lean_object* v_x_913_, lean_object* v___y_914_, lean_object* v___y_915_){
_start:
{
lean_object* v___x_917_; 
lean_inc(v___y_915_);
lean_inc_ref(v___y_914_);
v___x_917_ = lean_apply_3(v_x_913_, v___y_914_, v___y_915_, lean_box(0));
if (lean_obj_tag(v___x_917_) == 0)
{
return v___x_917_;
}
else
{
lean_object* v_a_918_; uint8_t v___x_919_; 
v_a_918_ = lean_ctor_get(v___x_917_, 0);
lean_inc(v_a_918_);
v___x_919_ = l_Lean_Exception_isInterrupt(v_a_918_);
if (v___x_919_ == 0)
{
lean_object* v___x_920_; 
lean_dec_ref_known(v___x_917_, 1);
v___x_920_ = l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2(v_a_918_, v___y_914_, v___y_915_);
return v___x_920_;
}
else
{
lean_dec(v_a_918_);
return v___x_917_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2___boxed(lean_object* v_x_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_){
_start:
{
lean_object* v_res_925_; 
v_res_925_ = l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2(v_x_921_, v___y_922_, v___y_923_);
lean_dec(v___y_923_);
lean_dec_ref(v___y_922_);
return v_res_925_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__1(lean_object* v___f_926_, lean_object* v___x_927_, lean_object* v_val_928_, lean_object* v___y_929_){
_start:
{
lean_object* v_a_932_; lean_object* v___x_934_; 
v___x_934_ = l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2(v___f_926_, v___x_927_, v_val_928_);
if (lean_obj_tag(v___x_934_) == 0)
{
if (lean_obj_tag(v___x_934_) == 0)
{
lean_object* v_a_935_; 
v_a_935_ = lean_ctor_get(v___x_934_, 0);
lean_inc(v_a_935_);
lean_dec_ref_known(v___x_934_, 1);
v_a_932_ = v_a_935_;
goto v___jp_931_;
}
else
{
lean_object* v_a_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_943_; 
v_a_936_ = lean_ctor_get(v___x_934_, 0);
v_isSharedCheck_943_ = !lean_is_exclusive(v___x_934_);
if (v_isSharedCheck_943_ == 0)
{
v___x_938_ = v___x_934_;
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_a_936_);
lean_dec(v___x_934_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_941_; 
if (v_isShared_939_ == 0)
{
v___x_941_ = v___x_938_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v_a_936_);
v___x_941_ = v_reuseFailAlloc_942_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
return v___x_941_;
}
}
}
}
else
{
lean_object* v___x_944_; 
lean_dec_ref_known(v___x_934_, 1);
v___x_944_ = lean_box(0);
v_a_932_ = v___x_944_;
goto v___jp_931_;
}
v___jp_931_:
{
lean_object* v___x_933_; 
v___x_933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_933_, 0, v_a_932_);
return v___x_933_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__1___boxed(lean_object* v___f_945_, lean_object* v___x_946_, lean_object* v_val_947_, lean_object* v___y_948_, lean_object* v___y_949_){
_start:
{
lean_object* v_res_950_; 
v_res_950_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__1(v___f_945_, v___x_946_, v_val_947_, v___y_948_);
lean_dec_ref(v___y_948_);
lean_dec(v_val_947_);
lean_dec_ref(v___x_946_);
return v_res_950_;
}
}
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___redArg(lean_object* v_h_951_, lean_object* v_x_952_, lean_object* v___y_953_){
_start:
{
lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; 
v___x_955_ = lean_get_set_stderr(v_h_951_);
lean_inc_ref(v___y_953_);
v___x_956_ = lean_apply_2(v_x_952_, v___y_953_, lean_box(0));
v___x_957_ = lean_get_set_stderr(v___x_955_);
lean_dec_ref(v___x_957_);
return v___x_956_;
}
}
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___redArg___boxed(lean_object* v_h_958_, lean_object* v_x_959_, lean_object* v___y_960_, lean_object* v___y_961_){
_start:
{
lean_object* v_res_962_; 
v_res_962_ = l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___redArg(v_h_958_, v_x_959_, v___y_960_);
lean_dec_ref(v___y_960_);
return v_res_962_;
}
}
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7(lean_object* v_00_u03b1_963_, lean_object* v_h_964_, lean_object* v_x_965_, lean_object* v___y_966_){
_start:
{
lean_object* v___x_968_; 
v___x_968_ = l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___redArg(v_h_964_, v_x_965_, v___y_966_);
return v___x_968_;
}
}
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___boxed(lean_object* v_00_u03b1_969_, lean_object* v_h_970_, lean_object* v_x_971_, lean_object* v___y_972_, lean_object* v___y_973_){
_start:
{
lean_object* v_res_974_; 
v_res_974_ = l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7(v_00_u03b1_969_, v_h_970_, v_x_971_, v___y_972_);
lean_dec_ref(v___y_972_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___redArg(lean_object* v_h_975_, lean_object* v_x_976_, lean_object* v___y_977_){
_start:
{
lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; 
v___x_979_ = lean_get_set_stdin(v_h_975_);
lean_inc_ref(v___y_977_);
v___x_980_ = lean_apply_2(v_x_976_, v___y_977_, lean_box(0));
v___x_981_ = lean_get_set_stdin(v___x_979_);
lean_dec_ref(v___x_981_);
return v___x_980_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___redArg___boxed(lean_object* v_h_982_, lean_object* v_x_983_, lean_object* v___y_984_, lean_object* v___y_985_){
_start:
{
lean_object* v_res_986_; 
v_res_986_ = l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___redArg(v_h_982_, v_x_983_, v___y_984_);
lean_dec_ref(v___y_984_);
return v_res_986_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__6(lean_object* v_msg_987_){
_start:
{
lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_988_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
v___x_989_ = lean_panic_fn_borrowed(v___x_988_, v_msg_987_);
return v___x_989_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___redArg(lean_object* v_h_990_, lean_object* v_x_991_, lean_object* v___y_992_){
_start:
{
lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_994_ = lean_get_set_stdout(v_h_990_);
lean_inc_ref(v___y_992_);
v___x_995_ = lean_apply_2(v_x_991_, v___y_992_, lean_box(0));
v___x_996_ = lean_get_set_stdout(v___x_994_);
lean_dec_ref(v___x_996_);
return v___x_995_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___redArg___boxed(lean_object* v_h_997_, lean_object* v_x_998_, lean_object* v___y_999_, lean_object* v___y_1000_){
_start:
{
lean_object* v_res_1001_; 
v_res_1001_ = l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___redArg(v_h_997_, v_x_998_, v___y_999_);
lean_dec_ref(v___y_999_);
return v_res_1001_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4(lean_object* v_00_u03b1_1002_, lean_object* v_h_1003_, lean_object* v_x_1004_, lean_object* v___y_1005_){
_start:
{
lean_object* v___x_1007_; 
v___x_1007_ = l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___redArg(v_h_1003_, v_x_1004_, v___y_1005_);
return v___x_1007_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___boxed(lean_object* v_00_u03b1_1008_, lean_object* v_h_1009_, lean_object* v_x_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_){
_start:
{
lean_object* v_res_1013_; 
v_res_1013_ = l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4(v_00_u03b1_1008_, v_h_1009_, v_x_1010_, v___y_1011_);
lean_dec_ref(v___y_1011_);
return v_res_1013_;
}
}
static lean_object* _init_l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___x_1014_ = lean_unsigned_to_nat(0u);
v___x_1015_ = l_ByteArray_empty;
v___x_1016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1015_);
lean_ctor_set(v___x_1016_, 1, v___x_1014_);
return v___x_1016_;
}
}
static lean_object* _init_l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__4(void){
_start:
{
lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1020_ = ((lean_object*)(l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__3));
v___x_1021_ = lean_unsigned_to_nat(46u);
v___x_1022_ = lean_unsigned_to_nat(193u);
v___x_1023_ = ((lean_object*)(l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__2));
v___x_1024_ = ((lean_object*)(l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__1));
v___x_1025_ = l_mkPanicMessageWithDecl(v___x_1024_, v___x_1023_, v___x_1022_, v___x_1021_, v___x_1020_);
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg(lean_object* v_x_1026_, uint8_t v_isolateStderr_1027_, lean_object* v___y_1028_){
_start:
{
lean_object* v___y_1031_; lean_object* v___y_1032_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___y_1040_; 
v___x_1034_ = lean_obj_once(&l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__0, &l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__0_once, _init_l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__0);
v___x_1035_ = lean_st_mk_ref(v___x_1034_);
v___x_1036_ = lean_st_mk_ref(v___x_1034_);
v___x_1037_ = l_IO_FS_Stream_ofBuffer(v___x_1035_);
lean_inc(v___x_1036_);
v___x_1038_ = l_IO_FS_Stream_ofBuffer(v___x_1036_);
if (v_isolateStderr_1027_ == 0)
{
v___y_1040_ = v_x_1026_;
goto v___jp_1039_;
}
else
{
lean_object* v___x_1049_; 
lean_inc_ref(v___x_1038_);
v___x_1049_ = lean_alloc_closure((void*)(l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___boxed), 5, 3);
lean_closure_set(v___x_1049_, 0, lean_box(0));
lean_closure_set(v___x_1049_, 1, v___x_1038_);
lean_closure_set(v___x_1049_, 2, v_x_1026_);
v___y_1040_ = v___x_1049_;
goto v___jp_1039_;
}
v___jp_1030_:
{
lean_object* v___x_1033_; 
v___x_1033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1033_, 0, v___y_1032_);
lean_ctor_set(v___x_1033_, 1, v___y_1031_);
return v___x_1033_;
}
v___jp_1039_:
{
lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v_data_1044_; uint8_t v___x_1045_; 
v___x_1041_ = lean_alloc_closure((void*)(l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___boxed), 5, 3);
lean_closure_set(v___x_1041_, 0, lean_box(0));
lean_closure_set(v___x_1041_, 1, v___x_1038_);
lean_closure_set(v___x_1041_, 2, v___y_1040_);
v___x_1042_ = l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___redArg(v___x_1037_, v___x_1041_, v___y_1028_);
v___x_1043_ = lean_st_ref_get(v___x_1036_);
lean_dec(v___x_1036_);
v_data_1044_ = lean_ctor_get(v___x_1043_, 0);
lean_inc_ref(v_data_1044_);
lean_dec(v___x_1043_);
v___x_1045_ = lean_string_validate_utf8(v_data_1044_);
if (v___x_1045_ == 0)
{
lean_object* v___x_1046_; lean_object* v___x_1047_; 
lean_dec_ref(v_data_1044_);
v___x_1046_ = lean_obj_once(&l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__4, &l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__4_once, _init_l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__4);
v___x_1047_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__6(v___x_1046_);
v___y_1031_ = v___x_1042_;
v___y_1032_ = v___x_1047_;
goto v___jp_1030_;
}
else
{
lean_object* v___x_1048_; 
v___x_1048_ = lean_string_from_utf8_unchecked(v_data_1044_);
v___y_1031_ = v___x_1042_;
v___y_1032_ = v___x_1048_;
goto v___jp_1030_;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___boxed(lean_object* v_x_1050_, lean_object* v_isolateStderr_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_){
_start:
{
uint8_t v_isolateStderr_boxed_1054_; lean_object* v_res_1055_; 
v_isolateStderr_boxed_1054_ = lean_unbox(v_isolateStderr_1051_);
v_res_1055_ = l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg(v_x_1050_, v_isolateStderr_boxed_1054_, v___y_1052_);
lean_dec_ref(v___y_1052_);
return v_res_1055_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__4(void){
_start:
{
uint8_t v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___x_1064_ = 1;
v___x_1065_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__3));
v___x_1066_ = l_Lean_Name_toString(v___x_1065_, v___x_1064_);
return v___x_1066_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab(lean_object* v_stx_1067_, lean_object* v_cmds_1068_, lean_object* v_cmdState_1069_, lean_object* v_beginPos_1070_, lean_object* v_snap_1071_, lean_object* v_cancelTk_1072_, lean_object* v___y_1073_){
_start:
{
lean_object* v_env_1075_; lean_object* v_scopes_1076_; lean_object* v_usedQuotCtxts_1077_; lean_object* v_nextMacroScope_1078_; lean_object* v_maxRecDepth_1079_; lean_object* v_ngen_1080_; lean_object* v_auxDeclNGen_1081_; lean_object* v_infoState_1082_; lean_object* v_prevLinterStates_1083_; lean_object* v_codeQualityEntryTasks_1084_; lean_object* v___x_1086_; uint8_t v_isShared_1087_; uint8_t v_isSharedCheck_1166_; 
v_env_1075_ = lean_ctor_get(v_cmdState_1069_, 0);
v_scopes_1076_ = lean_ctor_get(v_cmdState_1069_, 2);
v_usedQuotCtxts_1077_ = lean_ctor_get(v_cmdState_1069_, 3);
v_nextMacroScope_1078_ = lean_ctor_get(v_cmdState_1069_, 4);
v_maxRecDepth_1079_ = lean_ctor_get(v_cmdState_1069_, 5);
v_ngen_1080_ = lean_ctor_get(v_cmdState_1069_, 6);
v_auxDeclNGen_1081_ = lean_ctor_get(v_cmdState_1069_, 7);
v_infoState_1082_ = lean_ctor_get(v_cmdState_1069_, 8);
v_prevLinterStates_1083_ = lean_ctor_get(v_cmdState_1069_, 11);
v_codeQualityEntryTasks_1084_ = lean_ctor_get(v_cmdState_1069_, 12);
v_isSharedCheck_1166_ = !lean_is_exclusive(v_cmdState_1069_);
if (v_isSharedCheck_1166_ == 0)
{
lean_object* v_unused_1167_; lean_object* v_unused_1168_; lean_object* v_unused_1169_; 
v_unused_1167_ = lean_ctor_get(v_cmdState_1069_, 10);
lean_dec(v_unused_1167_);
v_unused_1168_ = lean_ctor_get(v_cmdState_1069_, 9);
lean_dec(v_unused_1168_);
v_unused_1169_ = lean_ctor_get(v_cmdState_1069_, 1);
lean_dec(v_unused_1169_);
v___x_1086_ = v_cmdState_1069_;
v_isShared_1087_ = v_isSharedCheck_1166_;
goto v_resetjp_1085_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1084_);
lean_inc(v_prevLinterStates_1083_);
lean_inc(v_infoState_1082_);
lean_inc(v_auxDeclNGen_1081_);
lean_inc(v_ngen_1080_);
lean_inc(v_maxRecDepth_1079_);
lean_inc(v_nextMacroScope_1078_);
lean_inc(v_usedQuotCtxts_1077_);
lean_inc(v_scopes_1076_);
lean_inc(v_env_1075_);
lean_dec(v_cmdState_1069_);
v___x_1086_ = lean_box(0);
v_isShared_1087_ = v_isSharedCheck_1166_;
goto v_resetjp_1085_;
}
v_resetjp_1085_:
{
lean_object* v___f_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1097_; 
v___f_1088_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__0___boxed), 5, 2);
lean_closure_set(v___f_1088_, 0, v_stx_1067_);
lean_closure_set(v___f_1088_, 1, v_cmds_1068_);
v___x_1089_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1090_ = l_Lean_Language_instImpl_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8_;
v___x_1091_ = l_List_head_x21___redArg(v___x_1089_, v_scopes_1076_);
v___x_1092_ = l_Lean_MessageLog_empty;
v___x_1093_ = lean_unsigned_to_nat(0u);
v___x_1094_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_1095_ = ((lean_object*)(l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0));
if (v_isShared_1087_ == 0)
{
lean_ctor_set(v___x_1086_, 10, v___x_1095_);
lean_ctor_set(v___x_1086_, 9, v___x_1094_);
lean_ctor_set(v___x_1086_, 1, v___x_1092_);
v___x_1097_ = v___x_1086_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v_env_1075_);
lean_ctor_set(v_reuseFailAlloc_1165_, 1, v___x_1092_);
lean_ctor_set(v_reuseFailAlloc_1165_, 2, v_scopes_1076_);
lean_ctor_set(v_reuseFailAlloc_1165_, 3, v_usedQuotCtxts_1077_);
lean_ctor_set(v_reuseFailAlloc_1165_, 4, v_nextMacroScope_1078_);
lean_ctor_set(v_reuseFailAlloc_1165_, 5, v_maxRecDepth_1079_);
lean_ctor_set(v_reuseFailAlloc_1165_, 6, v_ngen_1080_);
lean_ctor_set(v_reuseFailAlloc_1165_, 7, v_auxDeclNGen_1081_);
lean_ctor_set(v_reuseFailAlloc_1165_, 8, v_infoState_1082_);
lean_ctor_set(v_reuseFailAlloc_1165_, 9, v___x_1094_);
lean_ctor_set(v_reuseFailAlloc_1165_, 10, v___x_1095_);
lean_ctor_set(v_reuseFailAlloc_1165_, 11, v_prevLinterStates_1083_);
lean_ctor_set(v_reuseFailAlloc_1165_, 12, v_codeQualityEntryTasks_1084_);
v___x_1097_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1096_;
}
v_reusejp_1096_:
{
lean_object* v___x_1098_; lean_object* v_toProcessingContext_1099_; lean_object* v_fileName_1100_; lean_object* v_fileMap_1101_; lean_object* v_opts_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; uint8_t v___x_1108_; lean_object* v_env_1110_; lean_object* v_scopes_1111_; lean_object* v_usedQuotCtxts_1112_; lean_object* v_nextMacroScope_1113_; lean_object* v_maxRecDepth_1114_; lean_object* v_ngen_1115_; lean_object* v_auxDeclNGen_1116_; lean_object* v_infoState_1117_; lean_object* v_traceState_1118_; lean_object* v_snapshotTasks_1119_; lean_object* v_prevLinterStates_1120_; lean_object* v_codeQualityEntryTasks_1121_; uint8_t v___y_1122_; lean_object* v_messages_1123_; lean_object* v___y_1132_; 
v___x_1098_ = lean_st_mk_ref(v___x_1097_);
v_toProcessingContext_1099_ = lean_ctor_get(v___y_1073_, 0);
v_fileName_1100_ = lean_ctor_get(v_toProcessingContext_1099_, 1);
v_fileMap_1101_ = lean_ctor_get(v_toProcessingContext_1099_, 2);
v_opts_1102_ = lean_ctor_get(v___x_1091_, 1);
lean_inc_ref(v_opts_1102_);
lean_dec(v___x_1091_);
v___x_1103_ = lean_box(0);
v___x_1104_ = lean_box(0);
v___x_1105_ = l_Lean_firstFrontendMacroScope;
v___x_1106_ = lean_box(0);
v___x_1107_ = l_Lean_internal_cmdlineSnapshots;
v___x_1108_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_1102_, v___x_1107_);
if (v___x_1108_ == 0)
{
lean_object* v___x_1164_; 
lean_inc_ref(v_snap_1071_);
v___x_1164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1164_, 0, v_snap_1071_);
v___y_1132_ = v___x_1164_;
goto v___jp_1131_;
}
else
{
v___y_1132_ = v___x_1104_;
goto v___jp_1131_;
}
v___jp_1109_:
{
lean_object* v_new_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; 
v_new_1124_ = lean_ctor_get(v_snap_1071_, 1);
lean_inc(v_new_1124_);
lean_dec_ref(v_snap_1071_);
v___x_1125_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_1125_, 0, v_env_1110_);
lean_ctor_set(v___x_1125_, 1, v_messages_1123_);
lean_ctor_set(v___x_1125_, 2, v_scopes_1111_);
lean_ctor_set(v___x_1125_, 3, v_usedQuotCtxts_1112_);
lean_ctor_set(v___x_1125_, 4, v_nextMacroScope_1113_);
lean_ctor_set(v___x_1125_, 5, v_maxRecDepth_1114_);
lean_ctor_set(v___x_1125_, 6, v_ngen_1115_);
lean_ctor_set(v___x_1125_, 7, v_auxDeclNGen_1116_);
lean_ctor_set(v___x_1125_, 8, v_infoState_1117_);
lean_ctor_set(v___x_1125_, 9, v_traceState_1118_);
lean_ctor_set(v___x_1125_, 10, v_snapshotTasks_1119_);
lean_ctor_set(v___x_1125_, 11, v_prevLinterStates_1120_);
lean_ctor_set(v___x_1125_, 12, v_codeQualityEntryTasks_1121_);
v___x_1126_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__4);
v___x_1127_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_1128_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1128_, 0, v___x_1126_);
lean_ctor_set(v___x_1128_, 1, v___x_1127_);
lean_ctor_set(v___x_1128_, 2, v___x_1104_);
lean_ctor_set(v___x_1128_, 3, v___x_1094_);
lean_ctor_set_uint8(v___x_1128_, sizeof(void*)*4, v___y_1122_);
v___x_1129_ = l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4(v___x_1090_, v___x_1128_);
v___x_1130_ = lean_io_promise_resolve(v___x_1129_, v_new_1124_);
lean_dec(v_new_1124_);
return v___x_1125_;
}
v___jp_1131_:
{
lean_object* v___x_1133_; uint8_t v___x_1134_; lean_object* v___x_1135_; lean_object* v___f_1136_; lean_object* v___x_1137_; uint8_t v___x_1138_; lean_object* v___x_1139_; lean_object* v_fst_1140_; lean_object* v___x_1141_; lean_object* v_env_1142_; lean_object* v_messages_1143_; lean_object* v_scopes_1144_; lean_object* v_usedQuotCtxts_1145_; lean_object* v_nextMacroScope_1146_; lean_object* v_maxRecDepth_1147_; lean_object* v_ngen_1148_; lean_object* v_auxDeclNGen_1149_; lean_object* v_infoState_1150_; lean_object* v_traceState_1151_; lean_object* v_snapshotTasks_1152_; lean_object* v_prevLinterStates_1153_; lean_object* v_codeQualityEntryTasks_1154_; lean_object* v___x_1155_; uint8_t v___x_1156_; 
v___x_1133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1133_, 0, v_cancelTk_1072_);
v___x_1134_ = 0;
lean_inc(v_beginPos_1070_);
lean_inc_ref(v_fileMap_1101_);
lean_inc_ref(v_fileName_1100_);
v___x_1135_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_1135_, 0, v_fileName_1100_);
lean_ctor_set(v___x_1135_, 1, v_fileMap_1101_);
lean_ctor_set(v___x_1135_, 2, v___x_1093_);
lean_ctor_set(v___x_1135_, 3, v_beginPos_1070_);
lean_ctor_set(v___x_1135_, 4, v___x_1103_);
lean_ctor_set(v___x_1135_, 5, v___x_1104_);
lean_ctor_set(v___x_1135_, 6, v___x_1105_);
lean_ctor_set(v___x_1135_, 7, v___x_1106_);
lean_ctor_set(v___x_1135_, 8, v___y_1132_);
lean_ctor_set(v___x_1135_, 9, v___x_1133_);
lean_ctor_set_uint8(v___x_1135_, sizeof(void*)*10, v___x_1134_);
lean_inc(v___x_1098_);
v___f_1136_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1136_, 0, v___f_1088_);
lean_closure_set(v___f_1136_, 1, v___x_1135_);
lean_closure_set(v___f_1136_, 2, v___x_1098_);
v___x_1137_ = l_Lean_Core_stderrAsMessages;
v___x_1138_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_1102_, v___x_1137_);
lean_dec_ref(v_opts_1102_);
v___x_1139_ = l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg(v___f_1136_, v___x_1138_, v___y_1073_);
v_fst_1140_ = lean_ctor_get(v___x_1139_, 0);
lean_inc(v_fst_1140_);
lean_dec_ref(v___x_1139_);
v___x_1141_ = lean_st_ref_get(v___x_1098_);
lean_dec(v___x_1098_);
v_env_1142_ = lean_ctor_get(v___x_1141_, 0);
lean_inc_ref(v_env_1142_);
v_messages_1143_ = lean_ctor_get(v___x_1141_, 1);
lean_inc_ref(v_messages_1143_);
v_scopes_1144_ = lean_ctor_get(v___x_1141_, 2);
lean_inc(v_scopes_1144_);
v_usedQuotCtxts_1145_ = lean_ctor_get(v___x_1141_, 3);
lean_inc(v_usedQuotCtxts_1145_);
v_nextMacroScope_1146_ = lean_ctor_get(v___x_1141_, 4);
lean_inc(v_nextMacroScope_1146_);
v_maxRecDepth_1147_ = lean_ctor_get(v___x_1141_, 5);
lean_inc(v_maxRecDepth_1147_);
v_ngen_1148_ = lean_ctor_get(v___x_1141_, 6);
lean_inc_ref(v_ngen_1148_);
v_auxDeclNGen_1149_ = lean_ctor_get(v___x_1141_, 7);
lean_inc_ref(v_auxDeclNGen_1149_);
v_infoState_1150_ = lean_ctor_get(v___x_1141_, 8);
lean_inc_ref(v_infoState_1150_);
v_traceState_1151_ = lean_ctor_get(v___x_1141_, 9);
lean_inc_ref(v_traceState_1151_);
v_snapshotTasks_1152_ = lean_ctor_get(v___x_1141_, 10);
lean_inc_ref(v_snapshotTasks_1152_);
v_prevLinterStates_1153_ = lean_ctor_get(v___x_1141_, 11);
lean_inc(v_prevLinterStates_1153_);
v_codeQualityEntryTasks_1154_ = lean_ctor_get(v___x_1141_, 12);
lean_inc_ref(v_codeQualityEntryTasks_1154_);
lean_dec(v___x_1141_);
v___x_1155_ = lean_string_utf8_byte_size(v_fst_1140_);
v___x_1156_ = lean_nat_dec_eq(v___x_1155_, v___x_1093_);
if (v___x_1156_ == 0)
{
lean_object* v___x_1157_; uint8_t v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; 
lean_inc_ref(v_fileMap_1101_);
v___x_1157_ = l_Lean_FileMap_toPosition(v_fileMap_1101_, v_beginPos_1070_);
lean_dec(v_beginPos_1070_);
v___x_1158_ = 0;
v___x_1159_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
v___x_1160_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1160_, 0, v_fst_1140_);
v___x_1161_ = l_Lean_MessageData_ofFormat(v___x_1160_);
lean_inc_ref(v_fileName_1100_);
v___x_1162_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1162_, 0, v_fileName_1100_);
lean_ctor_set(v___x_1162_, 1, v___x_1157_);
lean_ctor_set(v___x_1162_, 2, v___x_1104_);
lean_ctor_set(v___x_1162_, 3, v___x_1159_);
lean_ctor_set(v___x_1162_, 4, v___x_1161_);
lean_ctor_set_uint8(v___x_1162_, sizeof(void*)*5, v___x_1134_);
lean_ctor_set_uint8(v___x_1162_, sizeof(void*)*5 + 1, v___x_1158_);
lean_ctor_set_uint8(v___x_1162_, sizeof(void*)*5 + 2, v___x_1134_);
v___x_1163_ = l_Lean_MessageLog_add(v___x_1162_, v_messages_1143_);
v_env_1110_ = v_env_1142_;
v_scopes_1111_ = v_scopes_1144_;
v_usedQuotCtxts_1112_ = v_usedQuotCtxts_1145_;
v_nextMacroScope_1113_ = v_nextMacroScope_1146_;
v_maxRecDepth_1114_ = v_maxRecDepth_1147_;
v_ngen_1115_ = v_ngen_1148_;
v_auxDeclNGen_1116_ = v_auxDeclNGen_1149_;
v_infoState_1117_ = v_infoState_1150_;
v_traceState_1118_ = v_traceState_1151_;
v_snapshotTasks_1119_ = v_snapshotTasks_1152_;
v_prevLinterStates_1120_ = v_prevLinterStates_1153_;
v_codeQualityEntryTasks_1121_ = v_codeQualityEntryTasks_1154_;
v___y_1122_ = v___x_1134_;
v_messages_1123_ = v___x_1163_;
goto v___jp_1109_;
}
else
{
lean_dec(v_fst_1140_);
lean_dec(v_beginPos_1070_);
v_env_1110_ = v_env_1142_;
v_scopes_1111_ = v_scopes_1144_;
v_usedQuotCtxts_1112_ = v_usedQuotCtxts_1145_;
v_nextMacroScope_1113_ = v_nextMacroScope_1146_;
v_maxRecDepth_1114_ = v_maxRecDepth_1147_;
v_ngen_1115_ = v_ngen_1148_;
v_auxDeclNGen_1116_ = v_auxDeclNGen_1149_;
v_infoState_1117_ = v_infoState_1150_;
v_traceState_1118_ = v_traceState_1151_;
v_snapshotTasks_1119_ = v_snapshotTasks_1152_;
v_prevLinterStates_1120_ = v_prevLinterStates_1153_;
v_codeQualityEntryTasks_1121_ = v_codeQualityEntryTasks_1154_;
v___y_1122_ = v___x_1134_;
v_messages_1123_ = v_messages_1143_;
goto v___jp_1109_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___boxed(lean_object* v_stx_1170_, lean_object* v_cmds_1171_, lean_object* v_cmdState_1172_, lean_object* v_beginPos_1173_, lean_object* v_snap_1174_, lean_object* v_cancelTk_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_){
_start:
{
lean_object* v_res_1178_; 
v_res_1178_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab(v_stx_1170_, v_cmds_1171_, v_cmdState_1172_, v_beginPos_1173_, v_snap_1174_, v_cancelTk_1175_, v___y_1176_);
lean_dec_ref(v___y_1176_);
return v_res_1178_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5(lean_object* v_00_u03b1_1179_, lean_object* v_h_1180_, lean_object* v_x_1181_, lean_object* v___y_1182_){
_start:
{
lean_object* v___x_1184_; 
v___x_1184_ = l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___redArg(v_h_1180_, v_x_1181_, v___y_1182_);
return v___x_1184_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___boxed(lean_object* v_00_u03b1_1185_, lean_object* v_h_1186_, lean_object* v_x_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_){
_start:
{
lean_object* v_res_1190_; 
v_res_1190_ = l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5(v_00_u03b1_1185_, v_h_1186_, v_x_1187_, v___y_1188_);
lean_dec_ref(v___y_1188_);
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3(lean_object* v_00_u03b1_1191_, lean_object* v_x_1192_, uint8_t v_isolateStderr_1193_, lean_object* v___y_1194_){
_start:
{
lean_object* v___x_1196_; 
v___x_1196_ = l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg(v_x_1192_, v_isolateStderr_1193_, v___y_1194_);
return v___x_1196_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___boxed(lean_object* v_00_u03b1_1197_, lean_object* v_x_1198_, lean_object* v_isolateStderr_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_){
_start:
{
uint8_t v_isolateStderr_boxed_1202_; lean_object* v_res_1203_; 
v_isolateStderr_boxed_1202_ = lean_unbox(v_isolateStderr_1199_);
v_res_1203_ = l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3(v_00_u03b1_1197_, v_x_1198_, v_isolateStderr_boxed_1202_, v___y_1200_);
lean_dec_ref(v___y_1200_);
return v_res_1203_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11(lean_object* v_msgData_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_){
_start:
{
lean_object* v___x_1208_; 
v___x_1208_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg(v_msgData_1204_, v___y_1206_);
return v___x_1208_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___boxed(lean_object* v_msgData_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_){
_start:
{
lean_object* v_res_1213_; 
v_res_1213_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11(v_msgData_1209_, v___y_1210_, v___y_1211_);
lean_dec(v___y_1211_);
lean_dec_ref(v___y_1210_);
return v_res_1213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__0(lean_object* v_a_1214_){
_start:
{
lean_object* v_toSnapshotTreeM_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; 
v_toSnapshotTreeM_1215_ = lean_ctor_get(v_a_1214_, 1);
lean_inc_ref(v_toSnapshotTreeM_1215_);
lean_dec_ref(v_a_1214_);
v___x_1216_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_1217_ = lean_apply_1(v_toSnapshotTreeM_1215_, v___x_1216_);
return v___x_1217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__1(lean_object* v_a_1218_){
_start:
{
lean_object* v_toSnapshot_1219_; lean_object* v___x_1221_; uint8_t v_isShared_1222_; uint8_t v_isSharedCheck_1229_; 
v_toSnapshot_1219_ = lean_ctor_get(v_a_1218_, 0);
v_isSharedCheck_1229_ = !lean_is_exclusive(v_a_1218_);
if (v_isSharedCheck_1229_ == 0)
{
lean_object* v_unused_1230_; 
v_unused_1230_ = lean_ctor_get(v_a_1218_, 1);
lean_dec(v_unused_1230_);
v___x_1221_ = v_a_1218_;
v_isShared_1222_ = v_isSharedCheck_1229_;
goto v_resetjp_1220_;
}
else
{
lean_inc(v_toSnapshot_1219_);
lean_dec(v_a_1218_);
v___x_1221_ = lean_box(0);
v_isShared_1222_ = v_isSharedCheck_1229_;
goto v_resetjp_1220_;
}
v_resetjp_1220_:
{
lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1227_; 
v___x_1223_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_1224_ = l_Lean_Language_Snapshot_transform(v_toSnapshot_1219_, v___x_1223_);
v___x_1225_ = ((lean_object*)(l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0));
if (v_isShared_1222_ == 0)
{
lean_ctor_set(v___x_1221_, 1, v___x_1225_);
lean_ctor_set(v___x_1221_, 0, v___x_1224_);
v___x_1227_ = v___x_1221_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v___x_1224_);
lean_ctor_set(v_reuseFailAlloc_1228_, 1, v___x_1225_);
v___x_1227_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
return v___x_1227_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__2(lean_object* v_a_1231_){
_start:
{
lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; 
v___x_1232_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_1233_ = l_Lean_Language_Snapshot_transform(v_a_1231_, v___x_1232_);
v___x_1234_ = ((lean_object*)(l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0));
v___x_1235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1233_);
lean_ctor_set(v___x_1235_, 1, v___x_1234_);
return v___x_1235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__3(lean_object* v_opts_1236_, lean_object* v_opt_1237_){
_start:
{
lean_object* v_name_1238_; lean_object* v_defValue_1239_; lean_object* v_map_1240_; lean_object* v___x_1241_; 
v_name_1238_ = lean_ctor_get(v_opt_1237_, 0);
v_defValue_1239_ = lean_ctor_get(v_opt_1237_, 1);
v_map_1240_ = lean_ctor_get(v_opts_1236_, 0);
v___x_1241_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1240_, v_name_1238_);
if (lean_obj_tag(v___x_1241_) == 0)
{
lean_inc(v_defValue_1239_);
return v_defValue_1239_;
}
else
{
lean_object* v_val_1242_; 
v_val_1242_ = lean_ctor_get(v___x_1241_, 0);
lean_inc(v_val_1242_);
lean_dec_ref_known(v___x_1241_, 1);
if (lean_obj_tag(v_val_1242_) == 3)
{
lean_object* v_v_1243_; 
v_v_1243_ = lean_ctor_get(v_val_1242_, 0);
lean_inc(v_v_1243_);
lean_dec_ref_known(v_val_1242_, 1);
return v_v_1243_;
}
else
{
lean_dec(v_val_1242_);
lean_inc(v_defValue_1239_);
return v_defValue_1239_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__3___boxed(lean_object* v_opts_1244_, lean_object* v_opt_1245_){
_start:
{
lean_object* v_res_1246_; 
v_res_1246_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__3(v_opts_1244_, v_opt_1245_);
lean_dec_ref(v_opt_1245_);
lean_dec_ref(v_opts_1244_);
return v_res_1246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__5(lean_object* v_a_1247_){
_start:
{
lean_object* v___x_1248_; lean_object* v___x_1249_; 
v___x_1248_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_1249_ = l_Lean_Language_Lean_instToSnapshotTreeCommandParsedSnapshot_go(v_a_1247_, v___x_1248_);
return v___x_1249_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__3(void){
_start:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; 
v___x_1255_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__2));
v___x_1256_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_1257_ = l_Lean_Name_append(v___x_1256_, v___x_1255_);
return v___x_1257_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4(lean_object* v___x_1258_, lean_object* v___x_1259_, uint8_t v_val_1260_, lean_object* v_val_1261_, lean_object* v_val_1262_, lean_object* v___x_1263_, lean_object* v___x_1264_, uint8_t v___x_1265_, lean_object* v___y_1266_, lean_object* v_pos_1267_, lean_object* v___x_1268_, lean_object* v_infoSt_1269_){
_start:
{
lean_object* v___y_1272_; lean_object* v_msgLog_1273_; lean_object* v___y_1279_; lean_object* v_trees_1311_; lean_object* v_size_1312_; uint8_t v___x_1313_; 
v_trees_1311_ = lean_ctor_get(v_infoSt_1269_, 2);
v_size_1312_ = lean_ctor_get(v_trees_1311_, 2);
v___x_1313_ = lean_nat_dec_lt(v___x_1264_, v_size_1312_);
if (v___x_1313_ == 0)
{
lean_object* v___x_1314_; 
v___x_1314_ = l_outOfBounds___redArg(v___x_1268_);
v___y_1279_ = v___x_1314_;
goto v___jp_1278_;
}
else
{
lean_object* v___x_1315_; 
v___x_1315_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1268_, v_trees_1311_, v___x_1264_);
v___y_1279_ = v___x_1315_;
goto v___jp_1278_;
}
v___jp_1271_:
{
lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; 
v___x_1274_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_msgLog_1273_);
v___x_1275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1275_, 0, v___y_1272_);
v___x_1276_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1276_, 0, v___x_1258_);
lean_ctor_set(v___x_1276_, 1, v___x_1274_);
lean_ctor_set(v___x_1276_, 2, v___x_1275_);
lean_ctor_set(v___x_1276_, 3, v___x_1259_);
lean_ctor_set_uint8(v___x_1276_, sizeof(void*)*4, v_val_1260_);
v___x_1277_ = lean_io_promise_resolve(v___x_1276_, v_val_1261_);
return v___x_1277_;
}
v___jp_1278_:
{
lean_object* v_scopes_1280_; lean_object* v___x_1281_; lean_object* v_opts_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; uint8_t v_hasTrace_1286_; 
v_scopes_1280_ = lean_ctor_get(v_val_1262_, 2);
v___x_1281_ = l_List_head_x21___redArg(v___x_1263_, v_scopes_1280_);
v_opts_1282_ = lean_ctor_get(v___x_1281_, 1);
lean_inc_ref(v_opts_1282_);
lean_dec(v___x_1281_);
v___x_1283_ = l_Lean_MessageLog_empty;
v___x_1284_ = l_Lean_inheritedTraceOptions;
v___x_1285_ = lean_st_ref_get(v___x_1284_);
v_hasTrace_1286_ = lean_ctor_get_uint8(v_opts_1282_, sizeof(void*)*1);
if (v_hasTrace_1286_ == 0)
{
lean_dec(v___x_1285_);
lean_dec_ref(v_opts_1282_);
lean_dec(v___x_1264_);
v___y_1272_ = v___y_1279_;
v_msgLog_1273_ = v___x_1283_;
goto v___jp_1271_;
}
else
{
lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; uint8_t v___x_1290_; 
v___x_1287_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__2));
v___x_1288_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_1289_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__3);
v___x_1290_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1285_, v_opts_1282_, v___x_1289_);
lean_dec_ref(v_opts_1282_);
lean_dec(v___x_1285_);
if (v___x_1290_ == 0)
{
lean_dec(v___x_1264_);
v___y_1272_ = v___y_1279_;
v_msgLog_1273_ = v___x_1283_;
goto v___jp_1271_;
}
else
{
lean_object* v___x_1291_; lean_object* v___x_1292_; 
v___x_1291_ = lean_box(0);
lean_inc_ref(v___y_1279_);
v___x_1292_ = l_Lean_Elab_InfoTree_format(v___y_1279_, v___x_1291_);
if (lean_obj_tag(v___x_1292_) == 0)
{
lean_object* v_a_1293_; double v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v_toProcessingContext_1297_; lean_object* v_fileName_1298_; lean_object* v_fileMap_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; uint8_t v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; 
v_a_1293_ = lean_ctor_get(v___x_1292_, 0);
lean_inc(v_a_1293_);
lean_dec_ref_known(v___x_1292_, 1);
v___x_1294_ = lean_float_of_nat(v___x_1264_);
v___x_1295_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
v___x_1296_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1296_, 0, v___x_1287_);
lean_ctor_set(v___x_1296_, 1, v___x_1291_);
lean_ctor_set(v___x_1296_, 2, v___x_1295_);
lean_ctor_set_float(v___x_1296_, sizeof(void*)*3, v___x_1294_);
lean_ctor_set_float(v___x_1296_, sizeof(void*)*3 + 8, v___x_1294_);
lean_ctor_set_uint8(v___x_1296_, sizeof(void*)*3 + 16, v___x_1265_);
v_toProcessingContext_1297_ = lean_ctor_get(v___y_1266_, 0);
v_fileName_1298_ = lean_ctor_get(v_toProcessingContext_1297_, 1);
v_fileMap_1299_ = lean_ctor_get(v_toProcessingContext_1297_, 2);
v___x_1300_ = l_Lean_MessageData_nil;
v___x_1301_ = l_Lean_MessageData_ofFormat(v_a_1293_);
v___x_1302_ = lean_unsigned_to_nat(1u);
v___x_1303_ = lean_mk_empty_array_with_capacity(v___x_1302_);
v___x_1304_ = lean_array_push(v___x_1303_, v___x_1301_);
v___x_1305_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1296_);
lean_ctor_set(v___x_1305_, 1, v___x_1300_);
lean_ctor_set(v___x_1305_, 2, v___x_1304_);
v___x_1306_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1288_);
lean_ctor_set(v___x_1306_, 1, v___x_1305_);
lean_inc_ref(v_fileMap_1299_);
v___x_1307_ = l_Lean_FileMap_toPosition(v_fileMap_1299_, v_pos_1267_);
v___x_1308_ = 0;
lean_inc_ref(v_fileName_1298_);
v___x_1309_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1309_, 0, v_fileName_1298_);
lean_ctor_set(v___x_1309_, 1, v___x_1307_);
lean_ctor_set(v___x_1309_, 2, v___x_1291_);
lean_ctor_set(v___x_1309_, 3, v___x_1295_);
lean_ctor_set(v___x_1309_, 4, v___x_1306_);
lean_ctor_set_uint8(v___x_1309_, sizeof(void*)*5, v_val_1260_);
lean_ctor_set_uint8(v___x_1309_, sizeof(void*)*5 + 1, v___x_1308_);
lean_ctor_set_uint8(v___x_1309_, sizeof(void*)*5 + 2, v_val_1260_);
v___x_1310_ = l_Lean_MessageLog_add(v___x_1309_, v___x_1283_);
v___y_1272_ = v___y_1279_;
v_msgLog_1273_ = v___x_1310_;
goto v___jp_1271_;
}
else
{
lean_dec_ref_known(v___x_1292_, 1);
lean_dec(v___x_1264_);
v___y_1272_ = v___y_1279_;
v_msgLog_1273_ = v___x_1283_;
goto v___jp_1271_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___boxed(lean_object* v___x_1316_, lean_object* v___x_1317_, lean_object* v_val_1318_, lean_object* v_val_1319_, lean_object* v_val_1320_, lean_object* v___x_1321_, lean_object* v___x_1322_, lean_object* v___x_1323_, lean_object* v___y_1324_, lean_object* v_pos_1325_, lean_object* v___x_1326_, lean_object* v_infoSt_1327_, lean_object* v___y_1328_){
_start:
{
uint8_t v_val_35287__boxed_1329_; uint8_t v___x_35292__boxed_1330_; lean_object* v_res_1331_; 
v_val_35287__boxed_1329_ = lean_unbox(v_val_1318_);
v___x_35292__boxed_1330_ = lean_unbox(v___x_1323_);
v_res_1331_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4(v___x_1316_, v___x_1317_, v_val_35287__boxed_1329_, v_val_1319_, v_val_1320_, v___x_1321_, v___x_1322_, v___x_35292__boxed_1330_, v___y_1324_, v_pos_1325_, v___x_1326_, v_infoSt_1327_);
lean_dec_ref(v_infoSt_1327_);
lean_dec_ref(v___x_1326_);
lean_dec(v_pos_1325_);
lean_dec_ref(v___y_1324_);
lean_dec_ref(v___x_1321_);
lean_dec_ref(v_val_1320_);
lean_dec(v_val_1319_);
return v_res_1331_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7_spec__9(lean_object* v___x_1332_, lean_object* v___x_1333_, lean_object* v___x_1334_, uint8_t v_val_1335_, lean_object* v_as_1336_, size_t v_sz_1337_, size_t v_i_1338_, lean_object* v_b_1339_){
_start:
{
uint8_t v___x_1341_; 
v___x_1341_ = lean_usize_dec_lt(v_i_1338_, v_sz_1337_);
if (v___x_1341_ == 0)
{
lean_dec_ref(v___x_1334_);
lean_dec_ref(v___x_1332_);
return v_b_1339_;
}
else
{
lean_object* v_snd_1342_; lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1360_; 
v_snd_1342_ = lean_ctor_get(v_b_1339_, 1);
v_isSharedCheck_1360_ = !lean_is_exclusive(v_b_1339_);
if (v_isSharedCheck_1360_ == 0)
{
lean_object* v_unused_1361_; 
v_unused_1361_ = lean_ctor_get(v_b_1339_, 0);
lean_dec(v_unused_1361_);
v___x_1344_ = v_b_1339_;
v_isShared_1345_ = v_isSharedCheck_1360_;
goto v_resetjp_1343_;
}
else
{
lean_inc(v_snd_1342_);
lean_dec(v_b_1339_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1360_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
lean_object* v_a_1346_; lean_object* v_msg_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; uint8_t v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1355_; 
v_a_1346_ = lean_array_uget_borrowed(v_as_1336_, v_i_1338_);
v_msg_1347_ = lean_ctor_get(v_a_1346_, 1);
v___x_1348_ = lean_box(0);
lean_inc_ref(v___x_1332_);
v___x_1349_ = l_Lean_FileMap_toPosition(v___x_1332_, v___x_1333_);
v___x_1350_ = 0;
v___x_1351_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
lean_inc_ref(v_msg_1347_);
lean_inc_ref(v___x_1334_);
v___x_1352_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1352_, 0, v___x_1334_);
lean_ctor_set(v___x_1352_, 1, v___x_1349_);
lean_ctor_set(v___x_1352_, 2, v___x_1348_);
lean_ctor_set(v___x_1352_, 3, v___x_1351_);
lean_ctor_set(v___x_1352_, 4, v_msg_1347_);
lean_ctor_set_uint8(v___x_1352_, sizeof(void*)*5, v_val_1335_);
lean_ctor_set_uint8(v___x_1352_, sizeof(void*)*5 + 1, v___x_1350_);
lean_ctor_set_uint8(v___x_1352_, sizeof(void*)*5 + 2, v_val_1335_);
v___x_1353_ = l_Lean_MessageLog_add(v___x_1352_, v_snd_1342_);
if (v_isShared_1345_ == 0)
{
lean_ctor_set(v___x_1344_, 1, v___x_1353_);
lean_ctor_set(v___x_1344_, 0, v___x_1348_);
v___x_1355_ = v___x_1344_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v___x_1348_);
lean_ctor_set(v_reuseFailAlloc_1359_, 1, v___x_1353_);
v___x_1355_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
size_t v___x_1356_; size_t v___x_1357_; 
v___x_1356_ = ((size_t)1ULL);
v___x_1357_ = lean_usize_add(v_i_1338_, v___x_1356_);
v_i_1338_ = v___x_1357_;
v_b_1339_ = v___x_1355_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7_spec__9___boxed(lean_object* v___x_1362_, lean_object* v___x_1363_, lean_object* v___x_1364_, lean_object* v_val_1365_, lean_object* v_as_1366_, lean_object* v_sz_1367_, lean_object* v_i_1368_, lean_object* v_b_1369_, lean_object* v___y_1370_){
_start:
{
uint8_t v_val_35403__boxed_1371_; size_t v_sz_boxed_1372_; size_t v_i_boxed_1373_; lean_object* v_res_1374_; 
v_val_35403__boxed_1371_ = lean_unbox(v_val_1365_);
v_sz_boxed_1372_ = lean_unbox_usize(v_sz_1367_);
lean_dec(v_sz_1367_);
v_i_boxed_1373_ = lean_unbox_usize(v_i_1368_);
lean_dec(v_i_1368_);
v_res_1374_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7_spec__9(v___x_1362_, v___x_1363_, v___x_1364_, v_val_35403__boxed_1371_, v_as_1366_, v_sz_boxed_1372_, v_i_boxed_1373_, v_b_1369_);
lean_dec_ref(v_as_1366_);
lean_dec(v___x_1363_);
return v_res_1374_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7(lean_object* v___x_1375_, lean_object* v___x_1376_, lean_object* v___x_1377_, uint8_t v_val_1378_, lean_object* v_as_1379_, size_t v_sz_1380_, size_t v_i_1381_, lean_object* v_b_1382_){
_start:
{
uint8_t v___x_1384_; 
v___x_1384_ = lean_usize_dec_lt(v_i_1381_, v_sz_1380_);
if (v___x_1384_ == 0)
{
lean_dec_ref(v___x_1377_);
lean_dec_ref(v___x_1375_);
return v_b_1382_;
}
else
{
lean_object* v_snd_1385_; lean_object* v___x_1387_; uint8_t v_isShared_1388_; uint8_t v_isSharedCheck_1403_; 
v_snd_1385_ = lean_ctor_get(v_b_1382_, 1);
v_isSharedCheck_1403_ = !lean_is_exclusive(v_b_1382_);
if (v_isSharedCheck_1403_ == 0)
{
lean_object* v_unused_1404_; 
v_unused_1404_ = lean_ctor_get(v_b_1382_, 0);
lean_dec(v_unused_1404_);
v___x_1387_ = v_b_1382_;
v_isShared_1388_ = v_isSharedCheck_1403_;
goto v_resetjp_1386_;
}
else
{
lean_inc(v_snd_1385_);
lean_dec(v_b_1382_);
v___x_1387_ = lean_box(0);
v_isShared_1388_ = v_isSharedCheck_1403_;
goto v_resetjp_1386_;
}
v_resetjp_1386_:
{
lean_object* v_a_1389_; lean_object* v_msg_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; uint8_t v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1398_; 
v_a_1389_ = lean_array_uget_borrowed(v_as_1379_, v_i_1381_);
v_msg_1390_ = lean_ctor_get(v_a_1389_, 1);
v___x_1391_ = lean_box(0);
lean_inc_ref(v___x_1375_);
v___x_1392_ = l_Lean_FileMap_toPosition(v___x_1375_, v___x_1376_);
v___x_1393_ = 0;
v___x_1394_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
lean_inc_ref(v_msg_1390_);
lean_inc_ref(v___x_1377_);
v___x_1395_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1395_, 0, v___x_1377_);
lean_ctor_set(v___x_1395_, 1, v___x_1392_);
lean_ctor_set(v___x_1395_, 2, v___x_1391_);
lean_ctor_set(v___x_1395_, 3, v___x_1394_);
lean_ctor_set(v___x_1395_, 4, v_msg_1390_);
lean_ctor_set_uint8(v___x_1395_, sizeof(void*)*5, v_val_1378_);
lean_ctor_set_uint8(v___x_1395_, sizeof(void*)*5 + 1, v___x_1393_);
lean_ctor_set_uint8(v___x_1395_, sizeof(void*)*5 + 2, v_val_1378_);
v___x_1396_ = l_Lean_MessageLog_add(v___x_1395_, v_snd_1385_);
if (v_isShared_1388_ == 0)
{
lean_ctor_set(v___x_1387_, 1, v___x_1396_);
lean_ctor_set(v___x_1387_, 0, v___x_1391_);
v___x_1398_ = v___x_1387_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1402_; 
v_reuseFailAlloc_1402_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1402_, 0, v___x_1391_);
lean_ctor_set(v_reuseFailAlloc_1402_, 1, v___x_1396_);
v___x_1398_ = v_reuseFailAlloc_1402_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
size_t v___x_1399_; size_t v___x_1400_; lean_object* v___x_1401_; 
v___x_1399_ = ((size_t)1ULL);
v___x_1400_ = lean_usize_add(v_i_1381_, v___x_1399_);
v___x_1401_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7_spec__9(v___x_1375_, v___x_1376_, v___x_1377_, v_val_1378_, v_as_1379_, v_sz_1380_, v___x_1400_, v___x_1398_);
return v___x_1401_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7___boxed(lean_object* v___x_1405_, lean_object* v___x_1406_, lean_object* v___x_1407_, lean_object* v_val_1408_, lean_object* v_as_1409_, lean_object* v_sz_1410_, lean_object* v_i_1411_, lean_object* v_b_1412_, lean_object* v___y_1413_){
_start:
{
uint8_t v_val_35455__boxed_1414_; size_t v_sz_boxed_1415_; size_t v_i_boxed_1416_; lean_object* v_res_1417_; 
v_val_35455__boxed_1414_ = lean_unbox(v_val_1408_);
v_sz_boxed_1415_ = lean_unbox_usize(v_sz_1410_);
lean_dec(v_sz_1410_);
v_i_boxed_1416_ = lean_unbox_usize(v_i_1411_);
lean_dec(v_i_1411_);
v_res_1417_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7(v___x_1405_, v___x_1406_, v___x_1407_, v_val_35455__boxed_1414_, v_as_1409_, v_sz_boxed_1415_, v_i_boxed_1416_, v_b_1412_);
lean_dec_ref(v_as_1409_);
lean_dec(v___x_1406_);
return v_res_1417_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4(lean_object* v_init_1418_, lean_object* v___x_1419_, lean_object* v___x_1420_, lean_object* v___x_1421_, uint8_t v_val_1422_, lean_object* v_n_1423_, lean_object* v_b_1424_){
_start:
{
if (lean_obj_tag(v_n_1423_) == 0)
{
lean_object* v_cs_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; size_t v_sz_1429_; size_t v___x_1430_; lean_object* v___x_1431_; lean_object* v_fst_1432_; 
v_cs_1426_ = lean_ctor_get(v_n_1423_, 0);
v___x_1427_ = lean_box(0);
v___x_1428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1428_, 0, v___x_1427_);
lean_ctor_set(v___x_1428_, 1, v_b_1424_);
v_sz_1429_ = lean_array_size(v_cs_1426_);
v___x_1430_ = ((size_t)0ULL);
v___x_1431_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__6(v_init_1418_, v___x_1419_, v___x_1420_, v___x_1421_, v_val_1422_, v_cs_1426_, v_sz_1429_, v___x_1430_, v___x_1428_);
v_fst_1432_ = lean_ctor_get(v___x_1431_, 0);
lean_inc(v_fst_1432_);
if (lean_obj_tag(v_fst_1432_) == 0)
{
lean_object* v_snd_1433_; lean_object* v___x_1434_; 
v_snd_1433_ = lean_ctor_get(v___x_1431_, 1);
lean_inc(v_snd_1433_);
lean_dec_ref(v___x_1431_);
v___x_1434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1434_, 0, v_snd_1433_);
return v___x_1434_;
}
else
{
lean_object* v_val_1435_; 
lean_dec_ref(v___x_1431_);
v_val_1435_ = lean_ctor_get(v_fst_1432_, 0);
lean_inc(v_val_1435_);
lean_dec_ref_known(v_fst_1432_, 1);
return v_val_1435_;
}
}
else
{
lean_object* v_vs_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; size_t v_sz_1439_; size_t v___x_1440_; lean_object* v___x_1441_; lean_object* v_fst_1442_; 
v_vs_1436_ = lean_ctor_get(v_n_1423_, 0);
v___x_1437_ = lean_box(0);
v___x_1438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1438_, 0, v___x_1437_);
lean_ctor_set(v___x_1438_, 1, v_b_1424_);
v_sz_1439_ = lean_array_size(v_vs_1436_);
v___x_1440_ = ((size_t)0ULL);
v___x_1441_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7(v___x_1419_, v___x_1420_, v___x_1421_, v_val_1422_, v_vs_1436_, v_sz_1439_, v___x_1440_, v___x_1438_);
v_fst_1442_ = lean_ctor_get(v___x_1441_, 0);
lean_inc(v_fst_1442_);
if (lean_obj_tag(v_fst_1442_) == 0)
{
lean_object* v_snd_1443_; lean_object* v___x_1444_; 
v_snd_1443_ = lean_ctor_get(v___x_1441_, 1);
lean_inc(v_snd_1443_);
lean_dec_ref(v___x_1441_);
v___x_1444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1444_, 0, v_snd_1443_);
return v___x_1444_;
}
else
{
lean_object* v_val_1445_; 
lean_dec_ref(v___x_1441_);
v_val_1445_ = lean_ctor_get(v_fst_1442_, 0);
lean_inc(v_val_1445_);
lean_dec_ref_known(v_fst_1442_, 1);
return v_val_1445_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__6(lean_object* v_init_1446_, lean_object* v___x_1447_, lean_object* v___x_1448_, lean_object* v___x_1449_, uint8_t v_val_1450_, lean_object* v_as_1451_, size_t v_sz_1452_, size_t v_i_1453_, lean_object* v_b_1454_){
_start:
{
uint8_t v___x_1456_; 
v___x_1456_ = lean_usize_dec_lt(v_i_1453_, v_sz_1452_);
if (v___x_1456_ == 0)
{
lean_dec_ref(v___x_1449_);
lean_dec_ref(v___x_1447_);
return v_b_1454_;
}
else
{
lean_object* v_snd_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1475_; 
v_snd_1457_ = lean_ctor_get(v_b_1454_, 1);
v_isSharedCheck_1475_ = !lean_is_exclusive(v_b_1454_);
if (v_isSharedCheck_1475_ == 0)
{
lean_object* v_unused_1476_; 
v_unused_1476_ = lean_ctor_get(v_b_1454_, 0);
lean_dec(v_unused_1476_);
v___x_1459_ = v_b_1454_;
v_isShared_1460_ = v_isSharedCheck_1475_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_snd_1457_);
lean_dec(v_b_1454_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1475_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v___x_1461_; lean_object* v_a_1462_; lean_object* v___x_1463_; 
v___x_1461_ = lean_box(0);
v_a_1462_ = lean_array_uget_borrowed(v_as_1451_, v_i_1453_);
lean_inc(v_snd_1457_);
lean_inc_ref(v___x_1449_);
lean_inc_ref(v___x_1447_);
v___x_1463_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4(v_init_1446_, v___x_1447_, v___x_1448_, v___x_1449_, v_val_1450_, v_a_1462_, v_snd_1457_);
if (lean_obj_tag(v___x_1463_) == 0)
{
lean_object* v___x_1464_; lean_object* v___x_1466_; 
lean_dec_ref(v___x_1449_);
lean_dec_ref(v___x_1447_);
v___x_1464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1464_, 0, v___x_1463_);
if (v_isShared_1460_ == 0)
{
lean_ctor_set(v___x_1459_, 0, v___x_1464_);
v___x_1466_ = v___x_1459_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v___x_1464_);
lean_ctor_set(v_reuseFailAlloc_1467_, 1, v_snd_1457_);
v___x_1466_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
return v___x_1466_;
}
}
else
{
lean_object* v_a_1468_; lean_object* v___x_1470_; 
lean_dec(v_snd_1457_);
v_a_1468_ = lean_ctor_get(v___x_1463_, 0);
lean_inc(v_a_1468_);
lean_dec_ref_known(v___x_1463_, 1);
if (v_isShared_1460_ == 0)
{
lean_ctor_set(v___x_1459_, 1, v_a_1468_);
lean_ctor_set(v___x_1459_, 0, v___x_1461_);
v___x_1470_ = v___x_1459_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1474_; 
v_reuseFailAlloc_1474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1474_, 0, v___x_1461_);
lean_ctor_set(v_reuseFailAlloc_1474_, 1, v_a_1468_);
v___x_1470_ = v_reuseFailAlloc_1474_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
size_t v___x_1471_; size_t v___x_1472_; 
v___x_1471_ = ((size_t)1ULL);
v___x_1472_ = lean_usize_add(v_i_1453_, v___x_1471_);
v_i_1453_ = v___x_1472_;
v_b_1454_ = v___x_1470_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__6___boxed(lean_object* v_init_1477_, lean_object* v___x_1478_, lean_object* v___x_1479_, lean_object* v___x_1480_, lean_object* v_val_1481_, lean_object* v_as_1482_, lean_object* v_sz_1483_, lean_object* v_i_1484_, lean_object* v_b_1485_, lean_object* v___y_1486_){
_start:
{
uint8_t v_val_35506__boxed_1487_; size_t v_sz_boxed_1488_; size_t v_i_boxed_1489_; lean_object* v_res_1490_; 
v_val_35506__boxed_1487_ = lean_unbox(v_val_1481_);
v_sz_boxed_1488_ = lean_unbox_usize(v_sz_1483_);
lean_dec(v_sz_1483_);
v_i_boxed_1489_ = lean_unbox_usize(v_i_1484_);
lean_dec(v_i_1484_);
v_res_1490_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__6(v_init_1477_, v___x_1478_, v___x_1479_, v___x_1480_, v_val_35506__boxed_1487_, v_as_1482_, v_sz_boxed_1488_, v_i_boxed_1489_, v_b_1485_);
lean_dec_ref(v_as_1482_);
lean_dec(v___x_1479_);
lean_dec_ref(v_init_1477_);
return v_res_1490_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4___boxed(lean_object* v_init_1491_, lean_object* v___x_1492_, lean_object* v___x_1493_, lean_object* v___x_1494_, lean_object* v_val_1495_, lean_object* v_n_1496_, lean_object* v_b_1497_, lean_object* v___y_1498_){
_start:
{
uint8_t v_val_35522__boxed_1499_; lean_object* v_res_1500_; 
v_val_35522__boxed_1499_ = lean_unbox(v_val_1495_);
v_res_1500_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4(v_init_1491_, v___x_1492_, v___x_1493_, v___x_1494_, v_val_35522__boxed_1499_, v_n_1496_, v_b_1497_);
lean_dec_ref(v_n_1496_);
lean_dec(v___x_1493_);
lean_dec_ref(v_init_1491_);
return v_res_1500_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5_spec__9(lean_object* v___x_1501_, lean_object* v___x_1502_, lean_object* v___x_1503_, uint8_t v_val_1504_, lean_object* v_as_1505_, size_t v_sz_1506_, size_t v_i_1507_, lean_object* v_b_1508_){
_start:
{
uint8_t v___x_1510_; 
v___x_1510_ = lean_usize_dec_lt(v_i_1507_, v_sz_1506_);
if (v___x_1510_ == 0)
{
lean_dec_ref(v___x_1503_);
lean_dec_ref(v___x_1501_);
return v_b_1508_;
}
else
{
lean_object* v_snd_1511_; lean_object* v___x_1513_; uint8_t v_isShared_1514_; uint8_t v_isSharedCheck_1529_; 
v_snd_1511_ = lean_ctor_get(v_b_1508_, 1);
v_isSharedCheck_1529_ = !lean_is_exclusive(v_b_1508_);
if (v_isSharedCheck_1529_ == 0)
{
lean_object* v_unused_1530_; 
v_unused_1530_ = lean_ctor_get(v_b_1508_, 0);
lean_dec(v_unused_1530_);
v___x_1513_ = v_b_1508_;
v_isShared_1514_ = v_isSharedCheck_1529_;
goto v_resetjp_1512_;
}
else
{
lean_inc(v_snd_1511_);
lean_dec(v_b_1508_);
v___x_1513_ = lean_box(0);
v_isShared_1514_ = v_isSharedCheck_1529_;
goto v_resetjp_1512_;
}
v_resetjp_1512_:
{
lean_object* v_a_1515_; lean_object* v_msg_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; uint8_t v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1524_; 
v_a_1515_ = lean_array_uget_borrowed(v_as_1505_, v_i_1507_);
v_msg_1516_ = lean_ctor_get(v_a_1515_, 1);
v___x_1517_ = lean_box(0);
lean_inc_ref(v___x_1501_);
v___x_1518_ = l_Lean_FileMap_toPosition(v___x_1501_, v___x_1502_);
v___x_1519_ = 0;
v___x_1520_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
lean_inc_ref(v_msg_1516_);
lean_inc_ref(v___x_1503_);
v___x_1521_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1521_, 0, v___x_1503_);
lean_ctor_set(v___x_1521_, 1, v___x_1518_);
lean_ctor_set(v___x_1521_, 2, v___x_1517_);
lean_ctor_set(v___x_1521_, 3, v___x_1520_);
lean_ctor_set(v___x_1521_, 4, v_msg_1516_);
lean_ctor_set_uint8(v___x_1521_, sizeof(void*)*5, v_val_1504_);
lean_ctor_set_uint8(v___x_1521_, sizeof(void*)*5 + 1, v___x_1519_);
lean_ctor_set_uint8(v___x_1521_, sizeof(void*)*5 + 2, v_val_1504_);
v___x_1522_ = l_Lean_MessageLog_add(v___x_1521_, v_snd_1511_);
if (v_isShared_1514_ == 0)
{
lean_ctor_set(v___x_1513_, 1, v___x_1522_);
lean_ctor_set(v___x_1513_, 0, v___x_1517_);
v___x_1524_ = v___x_1513_;
goto v_reusejp_1523_;
}
else
{
lean_object* v_reuseFailAlloc_1528_; 
v_reuseFailAlloc_1528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1528_, 0, v___x_1517_);
lean_ctor_set(v_reuseFailAlloc_1528_, 1, v___x_1522_);
v___x_1524_ = v_reuseFailAlloc_1528_;
goto v_reusejp_1523_;
}
v_reusejp_1523_:
{
size_t v___x_1525_; size_t v___x_1526_; 
v___x_1525_ = ((size_t)1ULL);
v___x_1526_ = lean_usize_add(v_i_1507_, v___x_1525_);
v_i_1507_ = v___x_1526_;
v_b_1508_ = v___x_1524_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5_spec__9___boxed(lean_object* v___x_1531_, lean_object* v___x_1532_, lean_object* v___x_1533_, lean_object* v_val_1534_, lean_object* v_as_1535_, lean_object* v_sz_1536_, lean_object* v_i_1537_, lean_object* v_b_1538_, lean_object* v___y_1539_){
_start:
{
uint8_t v_val_35604__boxed_1540_; size_t v_sz_boxed_1541_; size_t v_i_boxed_1542_; lean_object* v_res_1543_; 
v_val_35604__boxed_1540_ = lean_unbox(v_val_1534_);
v_sz_boxed_1541_ = lean_unbox_usize(v_sz_1536_);
lean_dec(v_sz_1536_);
v_i_boxed_1542_ = lean_unbox_usize(v_i_1537_);
lean_dec(v_i_1537_);
v_res_1543_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5_spec__9(v___x_1531_, v___x_1532_, v___x_1533_, v_val_35604__boxed_1540_, v_as_1535_, v_sz_boxed_1541_, v_i_boxed_1542_, v_b_1538_);
lean_dec_ref(v_as_1535_);
lean_dec(v___x_1532_);
return v_res_1543_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5(lean_object* v___x_1544_, lean_object* v___x_1545_, lean_object* v___x_1546_, uint8_t v_val_1547_, lean_object* v_as_1548_, size_t v_sz_1549_, size_t v_i_1550_, lean_object* v_b_1551_){
_start:
{
uint8_t v___x_1553_; 
v___x_1553_ = lean_usize_dec_lt(v_i_1550_, v_sz_1549_);
if (v___x_1553_ == 0)
{
lean_dec_ref(v___x_1546_);
lean_dec_ref(v___x_1544_);
return v_b_1551_;
}
else
{
lean_object* v_snd_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1572_; 
v_snd_1554_ = lean_ctor_get(v_b_1551_, 1);
v_isSharedCheck_1572_ = !lean_is_exclusive(v_b_1551_);
if (v_isSharedCheck_1572_ == 0)
{
lean_object* v_unused_1573_; 
v_unused_1573_ = lean_ctor_get(v_b_1551_, 0);
lean_dec(v_unused_1573_);
v___x_1556_ = v_b_1551_;
v_isShared_1557_ = v_isSharedCheck_1572_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_snd_1554_);
lean_dec(v_b_1551_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1572_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v_a_1558_; lean_object* v_msg_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; uint8_t v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1567_; 
v_a_1558_ = lean_array_uget_borrowed(v_as_1548_, v_i_1550_);
v_msg_1559_ = lean_ctor_get(v_a_1558_, 1);
v___x_1560_ = lean_box(0);
lean_inc_ref(v___x_1544_);
v___x_1561_ = l_Lean_FileMap_toPosition(v___x_1544_, v___x_1545_);
v___x_1562_ = 0;
v___x_1563_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
lean_inc_ref(v_msg_1559_);
lean_inc_ref(v___x_1546_);
v___x_1564_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1564_, 0, v___x_1546_);
lean_ctor_set(v___x_1564_, 1, v___x_1561_);
lean_ctor_set(v___x_1564_, 2, v___x_1560_);
lean_ctor_set(v___x_1564_, 3, v___x_1563_);
lean_ctor_set(v___x_1564_, 4, v_msg_1559_);
lean_ctor_set_uint8(v___x_1564_, sizeof(void*)*5, v_val_1547_);
lean_ctor_set_uint8(v___x_1564_, sizeof(void*)*5 + 1, v___x_1562_);
lean_ctor_set_uint8(v___x_1564_, sizeof(void*)*5 + 2, v_val_1547_);
v___x_1565_ = l_Lean_MessageLog_add(v___x_1564_, v_snd_1554_);
if (v_isShared_1557_ == 0)
{
lean_ctor_set(v___x_1556_, 1, v___x_1565_);
lean_ctor_set(v___x_1556_, 0, v___x_1560_);
v___x_1567_ = v___x_1556_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v___x_1560_);
lean_ctor_set(v_reuseFailAlloc_1571_, 1, v___x_1565_);
v___x_1567_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
size_t v___x_1568_; size_t v___x_1569_; lean_object* v___x_1570_; 
v___x_1568_ = ((size_t)1ULL);
v___x_1569_ = lean_usize_add(v_i_1550_, v___x_1568_);
v___x_1570_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5_spec__9(v___x_1544_, v___x_1545_, v___x_1546_, v_val_1547_, v_as_1548_, v_sz_1549_, v___x_1569_, v___x_1567_);
return v___x_1570_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5___boxed(lean_object* v___x_1574_, lean_object* v___x_1575_, lean_object* v___x_1576_, lean_object* v_val_1577_, lean_object* v_as_1578_, lean_object* v_sz_1579_, lean_object* v_i_1580_, lean_object* v_b_1581_, lean_object* v___y_1582_){
_start:
{
uint8_t v_val_35656__boxed_1583_; size_t v_sz_boxed_1584_; size_t v_i_boxed_1585_; lean_object* v_res_1586_; 
v_val_35656__boxed_1583_ = lean_unbox(v_val_1577_);
v_sz_boxed_1584_ = lean_unbox_usize(v_sz_1579_);
lean_dec(v_sz_1579_);
v_i_boxed_1585_ = lean_unbox_usize(v_i_1580_);
lean_dec(v_i_1580_);
v_res_1586_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5(v___x_1574_, v___x_1575_, v___x_1576_, v_val_35656__boxed_1583_, v_as_1578_, v_sz_boxed_1584_, v_i_boxed_1585_, v_b_1581_);
lean_dec_ref(v_as_1578_);
lean_dec(v___x_1575_);
return v_res_1586_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4(lean_object* v___x_1587_, lean_object* v___x_1588_, lean_object* v___x_1589_, uint8_t v_val_1590_, lean_object* v_t_1591_, lean_object* v_init_1592_){
_start:
{
lean_object* v_root_1594_; lean_object* v_tail_1595_; lean_object* v___x_1596_; 
v_root_1594_ = lean_ctor_get(v_t_1591_, 0);
v_tail_1595_ = lean_ctor_get(v_t_1591_, 1);
lean_inc_ref(v___x_1589_);
lean_inc_ref(v___x_1587_);
lean_inc_ref(v_init_1592_);
v___x_1596_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4(v_init_1592_, v___x_1587_, v___x_1588_, v___x_1589_, v_val_1590_, v_root_1594_, v_init_1592_);
lean_dec_ref(v_init_1592_);
if (lean_obj_tag(v___x_1596_) == 0)
{
lean_object* v_a_1597_; 
lean_dec_ref(v___x_1589_);
lean_dec_ref(v___x_1587_);
v_a_1597_ = lean_ctor_get(v___x_1596_, 0);
lean_inc(v_a_1597_);
lean_dec_ref_known(v___x_1596_, 1);
return v_a_1597_;
}
else
{
lean_object* v_a_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; size_t v_sz_1601_; size_t v___x_1602_; lean_object* v___x_1603_; lean_object* v_fst_1604_; 
v_a_1598_ = lean_ctor_get(v___x_1596_, 0);
lean_inc(v_a_1598_);
lean_dec_ref_known(v___x_1596_, 1);
v___x_1599_ = lean_box(0);
v___x_1600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1600_, 0, v___x_1599_);
lean_ctor_set(v___x_1600_, 1, v_a_1598_);
v_sz_1601_ = lean_array_size(v_tail_1595_);
v___x_1602_ = ((size_t)0ULL);
v___x_1603_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5(v___x_1587_, v___x_1588_, v___x_1589_, v_val_1590_, v_tail_1595_, v_sz_1601_, v___x_1602_, v___x_1600_);
v_fst_1604_ = lean_ctor_get(v___x_1603_, 0);
lean_inc(v_fst_1604_);
if (lean_obj_tag(v_fst_1604_) == 0)
{
lean_object* v_snd_1605_; 
v_snd_1605_ = lean_ctor_get(v___x_1603_, 1);
lean_inc(v_snd_1605_);
lean_dec_ref(v___x_1603_);
return v_snd_1605_;
}
else
{
lean_object* v_val_1606_; 
lean_dec_ref(v___x_1603_);
v_val_1606_ = lean_ctor_get(v_fst_1604_, 0);
lean_inc(v_val_1606_);
lean_dec_ref_known(v_fst_1604_, 1);
return v_val_1606_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4___boxed(lean_object* v___x_1607_, lean_object* v___x_1608_, lean_object* v___x_1609_, lean_object* v_val_1610_, lean_object* v_t_1611_, lean_object* v_init_1612_, lean_object* v___y_1613_){
_start:
{
uint8_t v_val_35707__boxed_1614_; lean_object* v_res_1615_; 
v_val_35707__boxed_1614_ = lean_unbox(v_val_1610_);
v_res_1615_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4(v___x_1607_, v___x_1608_, v___x_1609_, v_val_35707__boxed_1614_, v_t_1611_, v_init_1612_);
lean_dec_ref(v_t_1611_);
lean_dec(v___x_1608_);
return v_res_1615_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0(void){
_start:
{
lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; 
v___x_1616_ = lean_unsigned_to_nat(1u);
v___x_1617_ = l_Lean_firstFrontendMacroScope;
v___x_1618_ = lean_nat_add(v___x_1617_, v___x_1616_);
return v___x_1618_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4(void){
_start:
{
lean_object* v___x_1625_; lean_object* v___x_1626_; 
v___x_1625_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0);
v___x_1626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1626_, 0, v___x_1625_);
return v___x_1626_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__5(void){
_start:
{
lean_object* v___x_1627_; lean_object* v___x_1628_; 
v___x_1627_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4);
v___x_1628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1628_, 0, v___x_1627_);
lean_ctor_set(v___x_1628_, 1, v___x_1627_);
return v___x_1628_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3(lean_object* v___y_1629_, lean_object* v_opts_1630_, lean_object* v___x_1631_, lean_object* v___x_1632_, lean_object* v___x_1633_, size_t v___x_1634_, uint8_t v___x_1635_, lean_object* v_env_1636_, lean_object* v___x_1637_, lean_object* v___x_1638_, lean_object* v___x_1639_, uint8_t v_val_1640_, lean_object* v___x_1641_, lean_object* v_pos_1642_, lean_object* v___x_1643_, lean_object* v___x_1644_, lean_object* v___x_1645_, uint8_t v___x_1646_, lean_object* v_x_1647_){
_start:
{
lean_object* v_toProcessingContext_1649_; lean_object* v_fileName_1650_; lean_object* v_fileMap_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; uint8_t v___x_1673_; lean_object* v___y_1675_; lean_object* v___x_1692_; uint8_t v___y_1694_; lean_object* v_env_1714_; uint8_t v___x_1715_; 
v_toProcessingContext_1649_ = lean_ctor_get(v___y_1629_, 0);
v_fileName_1650_ = lean_ctor_get(v_toProcessingContext_1649_, 1);
v_fileMap_1651_ = lean_ctor_get(v_toProcessingContext_1649_, 2);
v___x_1652_ = lean_box(0);
v___x_1653_ = l_Lean_Core_getMaxHeartbeats(v_opts_1630_);
v___x_1654_ = l_Lean_firstFrontendMacroScope;
v___x_1655_ = lean_box(0);
v___x_1656_ = lean_unsigned_to_nat(1u);
v___x_1657_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0);
v___x_1658_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__3));
lean_inc(v___x_1631_);
v___x_1659_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1659_, 0, v___x_1631_);
lean_ctor_set(v___x_1659_, 1, v___x_1656_);
lean_ctor_set(v___x_1659_, 2, v___x_1652_);
v___x_1660_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4);
v___x_1661_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__5, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__5_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__5);
v___x_1662_ = lean_mk_empty_array_with_capacity(v___x_1632_);
lean_inc_ref(v___x_1662_);
v___x_1663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1663_, 0, v___x_1662_);
lean_inc_n(v___x_1633_, 2);
v___x_1664_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1664_, 0, v___x_1663_);
lean_ctor_set(v___x_1664_, 1, v___x_1662_);
lean_ctor_set(v___x_1664_, 2, v___x_1633_);
lean_ctor_set(v___x_1664_, 3, v___x_1633_);
lean_ctor_set_usize(v___x_1664_, 4, v___x_1634_);
v___x_1665_ = l_Lean_NameSet_empty;
lean_inc_ref_n(v___x_1664_, 2);
v___x_1666_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1666_, 0, v___x_1664_);
lean_ctor_set(v___x_1666_, 1, v___x_1664_);
lean_ctor_set(v___x_1666_, 2, v___x_1665_);
v___x_1667_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1667_, 0, v___x_1660_);
lean_ctor_set(v___x_1667_, 1, v___x_1660_);
lean_ctor_set(v___x_1667_, 2, v___x_1664_);
lean_ctor_set_uint8(v___x_1667_, sizeof(void*)*3, v___x_1635_);
v___x_1668_ = lean_mk_empty_array_with_capacity(v___x_1633_);
lean_inc_ref(v___x_1668_);
lean_inc_ref(v___x_1637_);
v___x_1669_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_1669_, 0, v_env_1636_);
lean_ctor_set(v___x_1669_, 1, v___x_1657_);
lean_ctor_set(v___x_1669_, 2, v___x_1658_);
lean_ctor_set(v___x_1669_, 3, v___x_1659_);
lean_ctor_set(v___x_1669_, 4, v___x_1637_);
lean_ctor_set(v___x_1669_, 5, v___x_1661_);
lean_ctor_set(v___x_1669_, 6, v___x_1666_);
lean_ctor_set(v___x_1669_, 7, v___x_1667_);
lean_ctor_set(v___x_1669_, 8, v___x_1668_);
v___x_1670_ = lean_st_mk_ref(v___x_1669_);
v___x_1671_ = lean_st_ref_get(v___x_1638_);
v___x_1672_ = l_Lean_diagnostics;
v___x_1673_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_1630_, v___x_1672_);
v___x_1692_ = lean_st_ref_get(v___x_1670_);
v_env_1714_ = lean_ctor_get(v___x_1692_, 0);
lean_inc_ref(v_env_1714_);
lean_dec(v___x_1692_);
v___x_1715_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_1714_);
lean_dec_ref(v_env_1714_);
if (v___x_1673_ == 0)
{
if (v___x_1715_ == 0)
{
v___y_1694_ = v___x_1646_;
goto v___jp_1693_;
}
else
{
v___y_1694_ = v___x_1673_;
goto v___jp_1693_;
}
}
else
{
v___y_1694_ = v___x_1715_;
goto v___jp_1693_;
}
v___jp_1674_:
{
lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; 
v___x_1676_ = l_Lean_maxRecDepth;
v___x_1677_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__3(v_opts_1630_, v___x_1676_);
lean_inc(v___x_1633_);
lean_inc(v___x_1631_);
lean_inc_ref(v_fileMap_1651_);
lean_inc_ref(v_fileName_1650_);
v___x_1678_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_1678_, 0, v_fileName_1650_);
lean_ctor_set(v___x_1678_, 1, v_fileMap_1651_);
lean_ctor_set(v___x_1678_, 2, v_opts_1630_);
lean_ctor_set(v___x_1678_, 3, v___x_1677_);
lean_ctor_set(v___x_1678_, 4, v___x_1631_);
lean_ctor_set(v___x_1678_, 5, v___x_1652_);
lean_ctor_set(v___x_1678_, 6, v___x_1633_);
lean_ctor_set(v___x_1678_, 7, v___x_1653_);
lean_ctor_set(v___x_1678_, 8, v___x_1631_);
lean_ctor_set(v___x_1678_, 9, v___x_1654_);
lean_ctor_set(v___x_1678_, 10, v___x_1639_);
lean_ctor_set(v___x_1678_, 11, v___x_1671_);
v___x_1679_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1679_, 0, v___x_1678_);
lean_ctor_set(v___x_1679_, 1, v___x_1633_);
lean_ctor_set(v___x_1679_, 2, v___x_1655_);
lean_ctor_set_uint8(v___x_1679_, sizeof(void*)*3, v___x_1673_);
lean_ctor_set_uint8(v___x_1679_, sizeof(void*)*3 + 1, v_val_1640_);
v___x_1680_ = l_Lean_Language_SnapshotTree_trace(v___x_1641_, v___x_1679_, v___y_1675_);
lean_dec(v___y_1675_);
lean_dec_ref_known(v___x_1679_, 3);
if (lean_obj_tag(v___x_1680_) == 0)
{
lean_object* v___x_1681_; lean_object* v_traceState_1682_; lean_object* v_traces_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; 
lean_dec_ref_known(v___x_1680_, 1);
lean_dec_ref(v___x_1645_);
v___x_1681_ = lean_st_ref_get(v___x_1670_);
lean_dec(v___x_1670_);
v_traceState_1682_ = lean_ctor_get(v___x_1681_, 4);
lean_inc_ref(v_traceState_1682_);
lean_dec(v___x_1681_);
v_traces_1683_ = lean_ctor_get(v_traceState_1682_, 0);
lean_inc_ref(v_traces_1683_);
lean_dec_ref(v_traceState_1682_);
v___x_1684_ = l_Lean_MessageLog_empty;
lean_inc_ref(v_fileName_1650_);
lean_inc_ref(v_fileMap_1651_);
v___x_1685_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4(v_fileMap_1651_, v_pos_1642_, v_fileName_1650_, v_val_1640_, v_traces_1683_, v___x_1684_);
lean_dec_ref(v_traces_1683_);
v___x_1686_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v___x_1685_);
v___x_1687_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1687_, 0, v___x_1643_);
lean_ctor_set(v___x_1687_, 1, v___x_1686_);
lean_ctor_set(v___x_1687_, 2, v___x_1644_);
lean_ctor_set(v___x_1687_, 3, v___x_1637_);
lean_ctor_set_uint8(v___x_1687_, sizeof(void*)*4, v_val_1640_);
v___x_1688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1688_, 0, v___x_1687_);
lean_ctor_set(v___x_1688_, 1, v___x_1668_);
v___x_1689_ = lean_task_pure(v___x_1688_);
return v___x_1689_;
}
else
{
lean_object* v___x_1690_; lean_object* v___x_1691_; 
lean_dec_ref_known(v___x_1680_, 1);
lean_dec(v___x_1670_);
lean_dec(v___x_1644_);
lean_dec_ref(v___x_1643_);
lean_dec_ref(v___x_1637_);
v___x_1690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1690_, 0, v___x_1645_);
lean_ctor_set(v___x_1690_, 1, v___x_1668_);
v___x_1691_ = lean_task_pure(v___x_1690_);
return v___x_1691_;
}
}
v___jp_1693_:
{
if (v___y_1694_ == 0)
{
lean_object* v___x_1695_; lean_object* v_env_1696_; lean_object* v_nextMacroScope_1697_; lean_object* v_ngen_1698_; lean_object* v_auxDeclNGen_1699_; lean_object* v_traceState_1700_; lean_object* v_messages_1701_; lean_object* v_infoState_1702_; lean_object* v_snapshotTasks_1703_; lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1712_; 
v___x_1695_ = lean_st_ref_take(v___x_1670_);
v_env_1696_ = lean_ctor_get(v___x_1695_, 0);
v_nextMacroScope_1697_ = lean_ctor_get(v___x_1695_, 1);
v_ngen_1698_ = lean_ctor_get(v___x_1695_, 2);
v_auxDeclNGen_1699_ = lean_ctor_get(v___x_1695_, 3);
v_traceState_1700_ = lean_ctor_get(v___x_1695_, 4);
v_messages_1701_ = lean_ctor_get(v___x_1695_, 6);
v_infoState_1702_ = lean_ctor_get(v___x_1695_, 7);
v_snapshotTasks_1703_ = lean_ctor_get(v___x_1695_, 8);
v_isSharedCheck_1712_ = !lean_is_exclusive(v___x_1695_);
if (v_isSharedCheck_1712_ == 0)
{
lean_object* v_unused_1713_; 
v_unused_1713_ = lean_ctor_get(v___x_1695_, 5);
lean_dec(v_unused_1713_);
v___x_1705_ = v___x_1695_;
v_isShared_1706_ = v_isSharedCheck_1712_;
goto v_resetjp_1704_;
}
else
{
lean_inc(v_snapshotTasks_1703_);
lean_inc(v_infoState_1702_);
lean_inc(v_messages_1701_);
lean_inc(v_traceState_1700_);
lean_inc(v_auxDeclNGen_1699_);
lean_inc(v_ngen_1698_);
lean_inc(v_nextMacroScope_1697_);
lean_inc(v_env_1696_);
lean_dec(v___x_1695_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1712_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
lean_object* v___x_1707_; lean_object* v___x_1709_; 
v___x_1707_ = l_Lean_Kernel_enableDiag(v_env_1696_, v___x_1673_);
if (v_isShared_1706_ == 0)
{
lean_ctor_set(v___x_1705_, 5, v___x_1661_);
lean_ctor_set(v___x_1705_, 0, v___x_1707_);
v___x_1709_ = v___x_1705_;
goto v_reusejp_1708_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v___x_1707_);
lean_ctor_set(v_reuseFailAlloc_1711_, 1, v_nextMacroScope_1697_);
lean_ctor_set(v_reuseFailAlloc_1711_, 2, v_ngen_1698_);
lean_ctor_set(v_reuseFailAlloc_1711_, 3, v_auxDeclNGen_1699_);
lean_ctor_set(v_reuseFailAlloc_1711_, 4, v_traceState_1700_);
lean_ctor_set(v_reuseFailAlloc_1711_, 5, v___x_1661_);
lean_ctor_set(v_reuseFailAlloc_1711_, 6, v_messages_1701_);
lean_ctor_set(v_reuseFailAlloc_1711_, 7, v_infoState_1702_);
lean_ctor_set(v_reuseFailAlloc_1711_, 8, v_snapshotTasks_1703_);
v___x_1709_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1708_;
}
v_reusejp_1708_:
{
lean_object* v___x_1710_; 
v___x_1710_ = lean_st_ref_put(v___x_1670_, v___x_1709_);
lean_inc(v___x_1670_);
v___y_1675_ = v___x_1670_;
goto v___jp_1674_;
}
}
}
else
{
lean_inc(v___x_1670_);
v___y_1675_ = v___x_1670_;
goto v___jp_1674_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___boxed(lean_object** _args){
lean_object* v___y_1716_ = _args[0];
lean_object* v_opts_1717_ = _args[1];
lean_object* v___x_1718_ = _args[2];
lean_object* v___x_1719_ = _args[3];
lean_object* v___x_1720_ = _args[4];
lean_object* v___x_1721_ = _args[5];
lean_object* v___x_1722_ = _args[6];
lean_object* v_env_1723_ = _args[7];
lean_object* v___x_1724_ = _args[8];
lean_object* v___x_1725_ = _args[9];
lean_object* v___x_1726_ = _args[10];
lean_object* v_val_1727_ = _args[11];
lean_object* v___x_1728_ = _args[12];
lean_object* v_pos_1729_ = _args[13];
lean_object* v___x_1730_ = _args[14];
lean_object* v___x_1731_ = _args[15];
lean_object* v___x_1732_ = _args[16];
lean_object* v___x_1733_ = _args[17];
lean_object* v_x_1734_ = _args[18];
lean_object* v___y_1735_ = _args[19];
_start:
{
size_t v___x_35768__boxed_1736_; uint8_t v___x_35769__boxed_1737_; uint8_t v_val_35773__boxed_1738_; uint8_t v___x_35778__boxed_1739_; lean_object* v_res_1740_; 
v___x_35768__boxed_1736_ = lean_unbox_usize(v___x_1721_);
lean_dec(v___x_1721_);
v___x_35769__boxed_1737_ = lean_unbox(v___x_1722_);
v_val_35773__boxed_1738_ = lean_unbox(v_val_1727_);
v___x_35778__boxed_1739_ = lean_unbox(v___x_1733_);
v_res_1740_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3(v___y_1716_, v_opts_1717_, v___x_1718_, v___x_1719_, v___x_1720_, v___x_35768__boxed_1736_, v___x_35769__boxed_1737_, v_env_1723_, v___x_1724_, v___x_1725_, v___x_1726_, v_val_35773__boxed_1738_, v___x_1728_, v_pos_1729_, v___x_1730_, v___x_1731_, v___x_1732_, v___x_35778__boxed_1739_, v_x_1734_);
lean_dec(v_pos_1729_);
lean_dec(v___x_1725_);
lean_dec(v___x_1719_);
lean_dec_ref(v___y_1716_);
return v_res_1740_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__2(lean_object* v___y_1741_, lean_object* v___x_1742_, lean_object* v_parserState_1743_, lean_object* v_x_1744_){
_start:
{
lean_object* v_toProcessingContext_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; 
v_toProcessingContext_1745_ = lean_ctor_get(v___y_1741_, 0);
v___x_1746_ = l_Lean_MessageLog_empty;
lean_inc_ref(v_toProcessingContext_1745_);
v___x_1747_ = l_Lean_Parser_parseCommand(v_toProcessingContext_1745_, v___x_1742_, v_parserState_1743_, v___x_1746_);
return v___x_1747_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__2___boxed(lean_object* v___y_1748_, lean_object* v___x_1749_, lean_object* v_parserState_1750_, lean_object* v_x_1751_){
_start:
{
lean_object* v_res_1752_; 
v_res_1752_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__2(v___y_1748_, v___x_1749_, v_parserState_1750_, v_x_1751_);
lean_dec_ref(v___y_1748_);
return v_res_1752_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg(lean_object* v_as_1754_, size_t v_i_1755_, size_t v_stop_1756_, lean_object* v_b_1757_){
_start:
{
uint8_t v___x_1759_; 
v___x_1759_ = lean_usize_dec_eq(v_i_1755_, v_stop_1756_);
if (v___x_1759_ == 0)
{
lean_object* v___f_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; size_t v___x_1763_; size_t v___x_1764_; 
v___f_1760_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg___closed__0));
v___x_1761_ = lean_array_uget_borrowed(v_as_1754_, v_i_1755_);
lean_inc(v___x_1761_);
v___x_1762_ = l_Lean_Language_SnapshotTask_cancelRec___redArg(v___f_1760_, v___x_1761_);
v___x_1763_ = ((size_t)1ULL);
v___x_1764_ = lean_usize_add(v_i_1755_, v___x_1763_);
v_i_1755_ = v___x_1764_;
v_b_1757_ = v___x_1762_;
goto _start;
}
else
{
return v_b_1757_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg___boxed(lean_object* v_as_1766_, lean_object* v_i_1767_, lean_object* v_stop_1768_, lean_object* v_b_1769_, lean_object* v___y_1770_){
_start:
{
size_t v_i_boxed_1771_; size_t v_stop_boxed_1772_; lean_object* v_res_1773_; 
v_i_boxed_1771_ = lean_unbox_usize(v_i_1767_);
lean_dec(v_i_1767_);
v_stop_boxed_1772_ = lean_unbox_usize(v_stop_1768_);
lean_dec(v_stop_1768_);
v_res_1773_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg(v_as_1766_, v_i_boxed_1771_, v_stop_boxed_1772_, v_b_1769_);
lean_dec_ref(v_as_1766_);
return v_res_1773_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__0___boxed(lean_object* v_oldResult_1774_, lean_object* v_cmds_1775_, lean_object* v_stx_1776_, lean_object* v_newParserState_1777_, lean_object* v_val_1778_, lean_object* v_sync_1779_, lean_object* v_val_1780_, lean_object* v___y_1781_, lean_object* v_oldNext_1782_, lean_object* v___y_1783_){
_start:
{
uint8_t v_sync_boxed_1784_; lean_object* v_res_1785_; 
v_sync_boxed_1784_ = lean_unbox(v_sync_1779_);
v_res_1785_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__0(v_oldResult_1774_, v_cmds_1775_, v_stx_1776_, v_newParserState_1777_, v_val_1778_, v_sync_boxed_1784_, v_val_1780_, v___y_1781_, v_oldNext_1782_);
lean_dec_ref(v___y_1781_);
return v_res_1785_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__1(lean_object* v_val_1786_, lean_object* v_cmds_1787_, lean_object* v_stx_1788_, lean_object* v_newParserState_1789_, lean_object* v_val_1790_, uint8_t v_sync_1791_, lean_object* v_val_1792_, lean_object* v___y_1793_, lean_object* v_oldResult_1794_){
_start:
{
lean_object* v_task_1796_; lean_object* v___x_1797_; lean_object* v___f_1798_; lean_object* v___x_1799_; uint8_t v___x_1800_; lean_object* v___x_1801_; 
v_task_1796_ = lean_ctor_get(v_val_1786_, 3);
lean_inc_ref(v_task_1796_);
lean_dec_ref(v_val_1786_);
v___x_1797_ = lean_box(v_sync_1791_);
lean_inc_ref(v___y_1793_);
v___f_1798_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__0___boxed), 10, 8);
lean_closure_set(v___f_1798_, 0, v_oldResult_1794_);
lean_closure_set(v___f_1798_, 1, v_cmds_1787_);
lean_closure_set(v___f_1798_, 2, v_stx_1788_);
lean_closure_set(v___f_1798_, 3, v_newParserState_1789_);
lean_closure_set(v___f_1798_, 4, v_val_1790_);
lean_closure_set(v___f_1798_, 5, v___x_1797_);
lean_closure_set(v___f_1798_, 6, v_val_1792_);
lean_closure_set(v___f_1798_, 7, v___y_1793_);
v___x_1799_ = lean_unsigned_to_nat(0u);
v___x_1800_ = 1;
v___x_1801_ = l_BaseIO_chainTask___redArg(v_task_1796_, v___f_1798_, v___x_1799_, v___x_1800_);
return v___x_1801_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__1___boxed(lean_object* v_val_1802_, lean_object* v_cmds_1803_, lean_object* v_stx_1804_, lean_object* v_newParserState_1805_, lean_object* v_val_1806_, lean_object* v_sync_1807_, lean_object* v_val_1808_, lean_object* v___y_1809_, lean_object* v_oldResult_1810_, lean_object* v___y_1811_){
_start:
{
uint8_t v_sync_boxed_1812_; lean_object* v_res_1813_; 
v_sync_boxed_1812_ = lean_unbox(v_sync_1807_);
v_res_1813_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__1(v_val_1802_, v_cmds_1803_, v_stx_1804_, v_newParserState_1805_, v_val_1806_, v_sync_boxed_1812_, v_val_1808_, v___y_1809_, v_oldResult_1810_);
lean_dec_ref(v___y_1809_);
return v_res_1813_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2(void){
_start:
{
lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; 
v___x_1821_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__1));
v___x_1822_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_1823_ = l_Lean_Name_append(v___x_1822_, v___x_1821_);
return v___x_1823_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3(void){
_start:
{
lean_object* v___x_1824_; lean_object* v___x_1825_; 
v___x_1824_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0);
v___x_1825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1825_, 0, v___x_1824_);
return v___x_1825_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5(lean_object* v___x_1827_, lean_object* v_val_1828_, lean_object* v_cmds_1829_, lean_object* v_fst_1830_, lean_object* v_fst_1831_, uint8_t v_val_1832_, lean_object* v___y_1833_, lean_object* v_snd_1834_, lean_object* v___x_1835_, uint8_t v___x_1836_, lean_object* v_fst_1837_, lean_object* v_val_1838_, lean_object* v_val_1839_, lean_object* v___x_1840_, lean_object* v___f_1841_, lean_object* v___f_1842_, lean_object* v___f_1843_, lean_object* v_pos_1844_, lean_object* v_cmdState_1845_, lean_object* v_val_1846_, lean_object* v___x_1847_, lean_object* v_opts_1848_, lean_object* v___x_1849_, lean_object* v_snd_1850_, lean_object* v_prom_1851_, lean_object* v_old_x3f_1852_, lean_object* v_parseCancelTk_1853_, lean_object* v_next_x3f_1854_){
_start:
{
lean_object* v___y_1857_; lean_object* v___y_1858_; lean_object* v___y_1859_; lean_object* v_snapshotTasks_1860_; lean_object* v___y_1861_; lean_object* v___y_1862_; lean_object* v_traceTask_1863_; lean_object* v___y_1874_; lean_object* v___y_1875_; lean_object* v___y_1876_; lean_object* v___y_1877_; lean_object* v___y_1878_; lean_object* v___y_1879_; lean_object* v___y_1885_; lean_object* v___y_1886_; lean_object* v___y_1887_; lean_object* v___y_1888_; size_t v___y_1889_; lean_object* v___y_1890_; lean_object* v___y_1891_; lean_object* v___y_1892_; lean_object* v___y_1893_; lean_object* v___y_1894_; lean_object* v___y_1895_; lean_object* v___y_1896_; lean_object* v_env_1897_; lean_object* v_messages_1898_; lean_object* v_scopes_1899_; lean_object* v_infoState_1900_; lean_object* v_traceState_1901_; lean_object* v_snapshotTasks_1902_; lean_object* v___y_1903_; lean_object* v___y_1904_; lean_object* v___y_1905_; lean_object* v___y_1906_; lean_object* v___y_1907_; lean_object* v___y_1908_; lean_object* v___y_1909_; lean_object* v___y_1910_; lean_object* v___y_1911_; lean_object* v___y_1912_; lean_object* v_reportedCmdState_1913_; lean_object* v___y_1948_; lean_object* v___y_1949_; lean_object* v___y_1950_; lean_object* v___y_1951_; size_t v___y_1952_; lean_object* v___y_1953_; lean_object* v___y_1954_; lean_object* v___y_1955_; lean_object* v___y_1956_; lean_object* v___y_1957_; lean_object* v___y_1958_; lean_object* v___y_1959_; lean_object* v___y_1960_; lean_object* v___y_1961_; lean_object* v___y_1962_; lean_object* v___y_1963_; lean_object* v___y_1964_; lean_object* v___y_1965_; lean_object* v___y_1966_; lean_object* v___y_1967_; lean_object* v___y_1968_; lean_object* v___y_1969_; lean_object* v_reportedCmdState_1970_; lean_object* v___y_1978_; lean_object* v___y_1979_; lean_object* v___y_1980_; lean_object* v___y_1981_; lean_object* v___y_1982_; lean_object* v___y_1983_; lean_object* v___y_1984_; size_t v___y_1985_; lean_object* v___y_1986_; lean_object* v___y_1987_; lean_object* v___y_1988_; lean_object* v___y_1989_; lean_object* v___y_1990_; lean_object* v___y_1991_; lean_object* v___y_1992_; lean_object* v___y_1993_; lean_object* v___y_2026_; 
if (lean_obj_tag(v_next_x3f_1854_) == 0)
{
lean_object* v___x_2079_; 
lean_dec_ref(v_parseCancelTk_1853_);
v___x_2079_ = lean_box(0);
v___y_2026_ = v___x_2079_;
goto v___jp_2025_;
}
else
{
lean_object* v_toProcessingContext_2080_; lean_object* v_val_2081_; lean_object* v_pos_2082_; lean_object* v_endPos_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; 
v_toProcessingContext_2080_ = lean_ctor_get(v___y_1833_, 0);
v_val_2081_ = lean_ctor_get(v_next_x3f_1854_, 0);
v_pos_2082_ = lean_ctor_get(v_fst_1831_, 0);
v_endPos_2083_ = lean_ctor_get(v_toProcessingContext_2080_, 3);
v___x_2084_ = lean_box(0);
lean_inc(v_endPos_2083_);
lean_inc(v_pos_2082_);
v___x_2085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2085_, 0, v_pos_2082_);
lean_ctor_set(v___x_2085_, 1, v_endPos_2083_);
v___x_2086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2086_, 0, v___x_2085_);
v___x_2087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2087_, 0, v_parseCancelTk_1853_);
v___x_2088_ = l_IO_Promise_result_x21___redArg(v_val_2081_);
v___x_2089_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2089_, 0, v___x_2084_);
lean_ctor_set(v___x_2089_, 1, v___x_2086_);
lean_ctor_set(v___x_2089_, 2, v___x_2087_);
lean_ctor_set(v___x_2089_, 3, v___x_2088_);
v___x_2090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2090_, 0, v___x_2089_);
v___y_2026_ = v___x_2090_;
goto v___jp_2025_;
}
v___jp_1856_:
{
lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; 
v___x_1864_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1864_, 0, v___y_1858_);
lean_ctor_set(v___x_1864_, 1, v___x_1827_);
lean_ctor_set(v___x_1864_, 2, v___y_1862_);
lean_ctor_set(v___x_1864_, 3, v_traceTask_1863_);
v___x_1865_ = lean_array_push(v_snapshotTasks_1860_, v___x_1864_);
v___x_1866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1866_, 0, v___y_1857_);
lean_ctor_set(v___x_1866_, 1, v___x_1865_);
v___x_1867_ = lean_io_promise_resolve(v___x_1866_, v_val_1828_);
if (lean_obj_tag(v_next_x3f_1854_) == 1)
{
lean_object* v_val_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; 
v_val_1868_ = lean_ctor_get(v_next_x3f_1854_, 0);
lean_inc(v_val_1868_);
lean_dec_ref_known(v_next_x3f_1854_, 1);
v___x_1869_ = lean_box(0);
v___x_1870_ = lean_array_push(v_cmds_1829_, v_fst_1830_);
v___x_1871_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v___x_1869_, v_fst_1831_, v___y_1859_, v_val_1868_, v_val_1832_, v___y_1861_, v___x_1870_, v___y_1833_);
return v___x_1871_;
}
else
{
lean_object* v___x_1872_; 
lean_dec_ref(v___y_1861_);
lean_dec_ref(v___y_1859_);
lean_dec(v_next_x3f_1854_);
lean_dec_ref(v_fst_1831_);
lean_dec(v_fst_1830_);
lean_dec_ref(v_cmds_1829_);
v___x_1872_ = lean_box(0);
return v___x_1872_;
}
}
v___jp_1873_:
{
lean_object* v_snapshotTasks_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; 
v_snapshotTasks_1880_ = lean_ctor_get(v___y_1877_, 10);
lean_inc_ref(v_snapshotTasks_1880_);
v___x_1881_ = lean_mk_empty_array_with_capacity(v___y_1874_);
lean_dec(v___y_1874_);
lean_inc_ref(v___y_1876_);
v___x_1882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1882_, 0, v___y_1876_);
lean_ctor_set(v___x_1882_, 1, v___x_1881_);
v___x_1883_ = lean_task_pure(v___x_1882_);
v___y_1857_ = v___y_1876_;
v___y_1858_ = v___y_1875_;
v___y_1859_ = v___y_1877_;
v_snapshotTasks_1860_ = v_snapshotTasks_1880_;
v___y_1861_ = v___y_1878_;
v___y_1862_ = v___y_1879_;
v_traceTask_1863_ = v___x_1883_;
goto v___jp_1856_;
}
v___jp_1884_:
{
lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v_opts_1923_; uint8_t v_hasTrace_1924_; 
v___x_1914_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_messages_1898_);
v___x_1915_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1915_, 0, v___y_1909_);
lean_ctor_set(v___x_1915_, 1, v___x_1914_);
lean_ctor_set(v___x_1915_, 2, v___y_1911_);
lean_ctor_set(v___x_1915_, 3, v_traceState_1901_);
lean_ctor_set_uint8(v___x_1915_, sizeof(void*)*4, v_val_1832_);
v___x_1916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1916_, 0, v___x_1915_);
lean_ctor_set(v___x_1916_, 1, v_reportedCmdState_1913_);
v___x_1917_ = lean_io_promise_resolve(v___x_1916_, v_val_1839_);
v___x_1918_ = l_Lean_Elab_InfoState_substituteLazy(v_infoState_1900_);
lean_inc(v___y_1907_);
v___x_1919_ = l_BaseIO_chainTask___redArg(v___x_1918_, v___y_1893_, v___y_1907_, v___x_1836_);
v___x_1920_ = l_Lean_inheritedTraceOptions;
v___x_1921_ = lean_st_ref_get(v___x_1920_);
v___x_1922_ = l_List_head_x21___redArg(v___x_1840_, v_scopes_1899_);
lean_dec(v_scopes_1899_);
lean_dec_ref(v___x_1840_);
v_opts_1923_ = lean_ctor_get(v___x_1922_, 1);
lean_inc_ref(v_opts_1923_);
lean_dec(v___x_1922_);
v_hasTrace_1924_ = lean_ctor_get_uint8(v_opts_1923_, sizeof(void*)*1);
if (v_hasTrace_1924_ == 0)
{
lean_dec_ref(v_opts_1923_);
lean_dec(v___x_1921_);
lean_dec_ref(v___y_1912_);
lean_dec_ref(v___y_1910_);
lean_dec(v___y_1908_);
lean_dec_ref(v___y_1906_);
lean_dec(v___y_1905_);
lean_dec_ref(v_snapshotTasks_1902_);
lean_dec_ref(v_env_1897_);
lean_dec(v___y_1892_);
lean_dec(v___y_1890_);
lean_dec_ref(v___y_1888_);
lean_dec(v___y_1887_);
lean_dec_ref(v___y_1886_);
lean_dec(v___y_1885_);
lean_dec(v_pos_1844_);
lean_dec_ref(v___f_1843_);
lean_dec_ref(v___f_1842_);
lean_dec_ref(v___f_1841_);
lean_dec(v___x_1835_);
v___y_1874_ = v___y_1907_;
v___y_1875_ = v___y_1894_;
v___y_1876_ = v___y_1895_;
v___y_1877_ = v___y_1896_;
v___y_1878_ = v___y_1903_;
v___y_1879_ = v___y_1904_;
goto v___jp_1873_;
}
else
{
lean_object* v___x_1925_; uint8_t v___x_1926_; 
v___x_1925_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2);
v___x_1926_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1921_, v_opts_1923_, v___x_1925_);
lean_dec(v___x_1921_);
if (v___x_1926_ == 0)
{
lean_dec_ref(v_opts_1923_);
lean_dec_ref(v___y_1912_);
lean_dec_ref(v___y_1910_);
lean_dec(v___y_1908_);
lean_dec_ref(v___y_1906_);
lean_dec(v___y_1905_);
lean_dec_ref(v_snapshotTasks_1902_);
lean_dec_ref(v_env_1897_);
lean_dec(v___y_1892_);
lean_dec(v___y_1890_);
lean_dec_ref(v___y_1888_);
lean_dec(v___y_1887_);
lean_dec_ref(v___y_1886_);
lean_dec(v___y_1885_);
lean_dec(v_pos_1844_);
lean_dec_ref(v___f_1843_);
lean_dec_ref(v___f_1842_);
lean_dec_ref(v___f_1841_);
lean_dec(v___x_1835_);
v___y_1874_ = v___y_1907_;
v___y_1875_ = v___y_1894_;
v___y_1876_ = v___y_1895_;
v___y_1877_ = v___y_1896_;
v___y_1878_ = v___y_1903_;
v___y_1879_ = v___y_1904_;
goto v___jp_1873_;
}
else
{
lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___f_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; 
lean_inc_n(v___y_1907_, 3);
v___x_1927_ = lean_task_map(v___f_1841_, v___y_1906_, v___y_1907_, v___x_1836_);
lean_inc_n(v___y_1904_, 3);
lean_inc_n(v___y_1905_, 2);
lean_inc_n(v___y_1908_, 2);
v___x_1928_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1928_, 0, v___y_1908_);
lean_ctor_set(v___x_1928_, 1, v___y_1905_);
lean_ctor_set(v___x_1928_, 2, v___y_1904_);
lean_ctor_set(v___x_1928_, 3, v___x_1927_);
v___x_1929_ = lean_task_map(v___f_1842_, v___y_1910_, v___y_1907_, v___x_1836_);
v___x_1930_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1930_, 0, v___y_1908_);
lean_ctor_set(v___x_1930_, 1, v___y_1905_);
lean_ctor_set(v___x_1930_, 2, v___y_1904_);
lean_ctor_set(v___x_1930_, 3, v___x_1929_);
v___x_1931_ = lean_task_map(v___f_1843_, v___y_1912_, v___y_1907_, v___x_1836_);
v___x_1932_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1932_, 0, v___y_1908_);
lean_ctor_set(v___x_1932_, 1, v___y_1905_);
lean_ctor_set(v___x_1932_, 2, v___y_1904_);
lean_ctor_set(v___x_1932_, 3, v___x_1931_);
v___x_1933_ = lean_unsigned_to_nat(3u);
v___x_1934_ = lean_mk_empty_array_with_capacity(v___x_1933_);
v___x_1935_ = lean_array_push(v___x_1934_, v___x_1928_);
v___x_1936_ = lean_array_push(v___x_1935_, v___x_1930_);
v___x_1937_ = lean_array_push(v___x_1936_, v___x_1932_);
v___x_1938_ = l_Array_append___redArg(v___x_1937_, v_snapshotTasks_1902_);
lean_inc_ref(v___y_1895_);
v___x_1939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1939_, 0, v___y_1895_);
lean_ctor_set(v___x_1939_, 1, v___x_1938_);
v___x_1940_ = lean_box_usize(v___y_1889_);
v___x_1941_ = lean_box(v___x_1836_);
v___x_1942_ = lean_box(v_val_1832_);
v___x_1943_ = lean_box(v___x_1926_);
lean_inc_ref(v___x_1939_);
lean_inc_ref(v___y_1891_);
lean_inc_ref(v___y_1833_);
v___f_1944_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___boxed), 20, 18);
lean_closure_set(v___f_1944_, 0, v___y_1833_);
lean_closure_set(v___f_1944_, 1, v_opts_1923_);
lean_closure_set(v___f_1944_, 2, v___x_1835_);
lean_closure_set(v___f_1944_, 3, v___y_1892_);
lean_closure_set(v___f_1944_, 4, v___y_1887_);
lean_closure_set(v___f_1944_, 5, v___x_1940_);
lean_closure_set(v___f_1944_, 6, v___x_1941_);
lean_closure_set(v___f_1944_, 7, v_env_1897_);
lean_closure_set(v___f_1944_, 8, v___y_1891_);
lean_closure_set(v___f_1944_, 9, v___x_1920_);
lean_closure_set(v___f_1944_, 10, v___y_1885_);
lean_closure_set(v___f_1944_, 11, v___x_1942_);
lean_closure_set(v___f_1944_, 12, v___x_1939_);
lean_closure_set(v___f_1944_, 13, v_pos_1844_);
lean_closure_set(v___f_1944_, 14, v___y_1886_);
lean_closure_set(v___f_1944_, 15, v___y_1890_);
lean_closure_set(v___f_1944_, 16, v___y_1888_);
lean_closure_set(v___f_1944_, 17, v___x_1943_);
v___x_1945_ = l_Lean_Language_SnapshotTree_waitAll(v___x_1939_);
v___x_1946_ = lean_io_bind_task(v___x_1945_, v___f_1944_, v___y_1907_, v_val_1832_);
v___y_1857_ = v___y_1895_;
v___y_1858_ = v___y_1894_;
v___y_1859_ = v___y_1896_;
v_snapshotTasks_1860_ = v_snapshotTasks_1902_;
v___y_1861_ = v___y_1903_;
v___y_1862_ = v___y_1904_;
v_traceTask_1863_ = v___x_1946_;
goto v___jp_1856_;
}
}
}
v___jp_1947_:
{
lean_object* v_env_1971_; lean_object* v_messages_1972_; lean_object* v_scopes_1973_; lean_object* v_infoState_1974_; lean_object* v_traceState_1975_; lean_object* v_snapshotTasks_1976_; 
v_env_1971_ = lean_ctor_get(v___y_1959_, 0);
lean_inc_ref(v_env_1971_);
v_messages_1972_ = lean_ctor_get(v___y_1959_, 1);
lean_inc_ref(v_messages_1972_);
v_scopes_1973_ = lean_ctor_get(v___y_1959_, 2);
lean_inc(v_scopes_1973_);
v_infoState_1974_ = lean_ctor_get(v___y_1959_, 8);
lean_inc_ref(v_infoState_1974_);
v_traceState_1975_ = lean_ctor_get(v___y_1959_, 9);
lean_inc_ref(v_traceState_1975_);
v_snapshotTasks_1976_ = lean_ctor_get(v___y_1959_, 10);
lean_inc_ref(v_snapshotTasks_1976_);
v___y_1885_ = v___y_1948_;
v___y_1886_ = v___y_1949_;
v___y_1887_ = v___y_1950_;
v___y_1888_ = v___y_1951_;
v___y_1889_ = v___y_1952_;
v___y_1890_ = v___y_1954_;
v___y_1891_ = v___y_1953_;
v___y_1892_ = v___y_1955_;
v___y_1893_ = v___y_1956_;
v___y_1894_ = v___y_1957_;
v___y_1895_ = v___y_1958_;
v___y_1896_ = v___y_1959_;
v_env_1897_ = v_env_1971_;
v_messages_1898_ = v_messages_1972_;
v_scopes_1899_ = v_scopes_1973_;
v_infoState_1900_ = v_infoState_1974_;
v_traceState_1901_ = v_traceState_1975_;
v_snapshotTasks_1902_ = v_snapshotTasks_1976_;
v___y_1903_ = v___y_1960_;
v___y_1904_ = v___y_1961_;
v___y_1905_ = v___y_1962_;
v___y_1906_ = v___y_1963_;
v___y_1907_ = v___y_1964_;
v___y_1908_ = v___y_1965_;
v___y_1909_ = v___y_1966_;
v___y_1910_ = v___y_1967_;
v___y_1911_ = v___y_1968_;
v___y_1912_ = v___y_1969_;
v_reportedCmdState_1913_ = v_reportedCmdState_1970_;
goto v___jp_1884_;
}
v___jp_1977_:
{
lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___f_1998_; uint8_t v___x_1999_; 
v___x_1994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1994_, 0, v___y_1993_);
lean_ctor_set(v___x_1994_, 1, v_val_1838_);
lean_inc_ref(v___y_1982_);
lean_inc_n(v_pos_1844_, 2);
lean_inc_ref(v_cmds_1829_);
lean_inc(v_fst_1830_);
v___x_1995_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab(v_fst_1830_, v_cmds_1829_, v_cmdState_1845_, v_pos_1844_, v___x_1994_, v___y_1982_, v___y_1833_);
v___x_1996_ = lean_box(v_val_1832_);
v___x_1997_ = lean_box(v___x_1836_);
lean_inc_ref(v___y_1833_);
lean_inc(v___y_1981_);
lean_inc_ref(v___x_1840_);
lean_inc_ref(v___x_1995_);
lean_inc_ref(v___y_1988_);
lean_inc_ref(v___y_1980_);
v___f_1998_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___boxed), 13, 11);
lean_closure_set(v___f_1998_, 0, v___y_1980_);
lean_closure_set(v___f_1998_, 1, v___y_1988_);
lean_closure_set(v___f_1998_, 2, v___x_1996_);
lean_closure_set(v___f_1998_, 3, v_val_1846_);
lean_closure_set(v___f_1998_, 4, v___x_1995_);
lean_closure_set(v___f_1998_, 5, v___x_1840_);
lean_closure_set(v___f_1998_, 6, v___y_1981_);
lean_closure_set(v___f_1998_, 7, v___x_1997_);
lean_closure_set(v___f_1998_, 8, v___y_1833_);
lean_closure_set(v___f_1998_, 9, v_pos_1844_);
lean_closure_set(v___f_1998_, 10, v___x_1847_);
v___x_1999_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_1848_, v___x_1849_);
if (v___x_1999_ == 0)
{
lean_inc_ref(v___x_1995_);
lean_inc(v___y_1987_);
lean_inc_ref(v___y_1984_);
lean_inc(v___y_1981_);
lean_inc_ref(v___y_1980_);
lean_inc(v___y_1978_);
v___y_1948_ = v___y_1978_;
v___y_1949_ = v___y_1980_;
v___y_1950_ = v___y_1981_;
v___y_1951_ = v___y_1984_;
v___y_1952_ = v___y_1985_;
v___y_1953_ = v___y_1988_;
v___y_1954_ = v___y_1987_;
v___y_1955_ = v___y_1989_;
v___y_1956_ = v___f_1998_;
v___y_1957_ = v___y_1990_;
v___y_1958_ = v___y_1984_;
v___y_1959_ = v___x_1995_;
v___y_1960_ = v___y_1982_;
v___y_1961_ = v___y_1978_;
v___y_1962_ = v___y_1979_;
v___y_1963_ = v___y_1983_;
v___y_1964_ = v___y_1981_;
v___y_1965_ = v___y_1986_;
v___y_1966_ = v___y_1980_;
v___y_1967_ = v___y_1991_;
v___y_1968_ = v___y_1987_;
v___y_1969_ = v___y_1992_;
v_reportedCmdState_1970_ = v___x_1995_;
goto v___jp_1947_;
}
else
{
uint8_t v___x_2000_; 
lean_inc(v_fst_1830_);
v___x_2000_ = l_Lean_Parser_isTerminalCommand(v_fst_1830_);
if (v___x_2000_ == 0)
{
if (v___x_1999_ == 0)
{
lean_inc_ref(v___x_1995_);
lean_inc(v___y_1987_);
lean_inc_ref(v___y_1984_);
lean_inc(v___y_1981_);
lean_inc_ref(v___y_1980_);
lean_inc(v___y_1978_);
v___y_1948_ = v___y_1978_;
v___y_1949_ = v___y_1980_;
v___y_1950_ = v___y_1981_;
v___y_1951_ = v___y_1984_;
v___y_1952_ = v___y_1985_;
v___y_1953_ = v___y_1988_;
v___y_1954_ = v___y_1987_;
v___y_1955_ = v___y_1989_;
v___y_1956_ = v___f_1998_;
v___y_1957_ = v___y_1990_;
v___y_1958_ = v___y_1984_;
v___y_1959_ = v___x_1995_;
v___y_1960_ = v___y_1982_;
v___y_1961_ = v___y_1978_;
v___y_1962_ = v___y_1979_;
v___y_1963_ = v___y_1983_;
v___y_1964_ = v___y_1981_;
v___y_1965_ = v___y_1986_;
v___y_1966_ = v___y_1980_;
v___y_1967_ = v___y_1991_;
v___y_1968_ = v___y_1987_;
v___y_1969_ = v___y_1992_;
v_reportedCmdState_1970_ = v___x_1995_;
goto v___jp_1947_;
}
else
{
lean_object* v_env_2001_; lean_object* v_messages_2002_; lean_object* v_scopes_2003_; lean_object* v_infoState_2004_; lean_object* v_traceState_2005_; lean_object* v_snapshotTasks_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; 
v_env_2001_ = lean_ctor_get(v___x_1995_, 0);
lean_inc_ref_n(v_env_2001_, 2);
v_messages_2002_ = lean_ctor_get(v___x_1995_, 1);
lean_inc_ref(v_messages_2002_);
v_scopes_2003_ = lean_ctor_get(v___x_1995_, 2);
lean_inc(v_scopes_2003_);
v_infoState_2004_ = lean_ctor_get(v___x_1995_, 8);
lean_inc_ref(v_infoState_2004_);
v_traceState_2005_ = lean_ctor_get(v___x_1995_, 9);
lean_inc_ref(v_traceState_2005_);
v_snapshotTasks_2006_ = lean_ctor_get(v___x_1995_, 10);
lean_inc_ref(v_snapshotTasks_2006_);
v___x_2007_ = lean_mk_empty_array_with_capacity(v___y_1989_);
lean_inc_ref(v___x_2007_);
v___x_2008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2008_, 0, v___x_2007_);
lean_inc_n(v___y_1981_, 4);
v___x_2009_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2009_, 0, v___x_2008_);
lean_ctor_set(v___x_2009_, 1, v___x_2007_);
lean_ctor_set(v___x_2009_, 2, v___y_1981_);
lean_ctor_set(v___x_2009_, 3, v___y_1981_);
lean_ctor_set_usize(v___x_2009_, 4, v___y_1985_);
v___x_2010_ = l_Lean_NameSet_empty;
lean_inc_ref_n(v___x_2009_, 2);
v___x_2011_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2011_, 0, v___x_2009_);
lean_ctor_set(v___x_2011_, 1, v___x_2009_);
lean_ctor_set(v___x_2011_, 2, v___x_2010_);
v___x_2012_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
v___x_2013_ = l_Lean_Options_empty;
v___x_2014_ = lean_box(0);
v___x_2015_ = lean_mk_empty_array_with_capacity(v___y_1981_);
lean_inc_ref_n(v___x_2015_, 3);
lean_inc_n(v___x_1835_, 2);
v___x_2016_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v___x_2016_, 0, v___x_2012_);
lean_ctor_set(v___x_2016_, 1, v___x_2013_);
lean_ctor_set(v___x_2016_, 2, v___x_1835_);
lean_ctor_set(v___x_2016_, 3, v___x_2014_);
lean_ctor_set(v___x_2016_, 4, v___x_2014_);
lean_ctor_set(v___x_2016_, 5, v___x_2015_);
lean_ctor_set(v___x_2016_, 6, v___x_2015_);
lean_ctor_set(v___x_2016_, 7, v___x_2014_);
lean_ctor_set(v___x_2016_, 8, v___x_2014_);
lean_ctor_set(v___x_2016_, 9, v___x_2014_);
lean_ctor_set_uint8(v___x_2016_, sizeof(void*)*10, v_val_1832_);
lean_ctor_set_uint8(v___x_2016_, sizeof(void*)*10 + 1, v_val_1832_);
lean_ctor_set_uint8(v___x_2016_, sizeof(void*)*10 + 2, v_val_1832_);
v___x_2017_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2017_, 0, v___x_2016_);
lean_ctor_set(v___x_2017_, 1, v___x_2014_);
v___x_2018_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0);
v___x_2019_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__3));
v___x_2020_ = l_Lean_DeclNameGenerator_ofPrefix(v___x_1835_);
v___x_2021_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3);
v___x_2022_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2022_, 0, v___x_2021_);
lean_ctor_set(v___x_2022_, 1, v___x_2021_);
lean_ctor_set(v___x_2022_, 2, v___x_2009_);
lean_ctor_set_uint8(v___x_2022_, sizeof(void*)*3, v___x_1836_);
v___x_2023_ = lean_box(0);
lean_inc_ref(v___y_1988_);
v___x_2024_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_2024_, 0, v_env_2001_);
lean_ctor_set(v___x_2024_, 1, v___x_2011_);
lean_ctor_set(v___x_2024_, 2, v___x_2017_);
lean_ctor_set(v___x_2024_, 3, v___x_2010_);
lean_ctor_set(v___x_2024_, 4, v___x_2018_);
lean_ctor_set(v___x_2024_, 5, v___y_1981_);
lean_ctor_set(v___x_2024_, 6, v___x_2019_);
lean_ctor_set(v___x_2024_, 7, v___x_2020_);
lean_ctor_set(v___x_2024_, 8, v___x_2022_);
lean_ctor_set(v___x_2024_, 9, v___y_1988_);
lean_ctor_set(v___x_2024_, 10, v___x_2015_);
lean_ctor_set(v___x_2024_, 11, v___x_2023_);
lean_ctor_set(v___x_2024_, 12, v___x_2015_);
lean_inc(v___y_1987_);
lean_inc_ref(v___y_1984_);
lean_inc_ref(v___y_1980_);
lean_inc(v___y_1978_);
v___y_1885_ = v___y_1978_;
v___y_1886_ = v___y_1980_;
v___y_1887_ = v___y_1981_;
v___y_1888_ = v___y_1984_;
v___y_1889_ = v___y_1985_;
v___y_1890_ = v___y_1987_;
v___y_1891_ = v___y_1988_;
v___y_1892_ = v___y_1989_;
v___y_1893_ = v___f_1998_;
v___y_1894_ = v___y_1990_;
v___y_1895_ = v___y_1984_;
v___y_1896_ = v___x_1995_;
v_env_1897_ = v_env_2001_;
v_messages_1898_ = v_messages_2002_;
v_scopes_1899_ = v_scopes_2003_;
v_infoState_1900_ = v_infoState_2004_;
v_traceState_1901_ = v_traceState_2005_;
v_snapshotTasks_1902_ = v_snapshotTasks_2006_;
v___y_1903_ = v___y_1982_;
v___y_1904_ = v___y_1978_;
v___y_1905_ = v___y_1979_;
v___y_1906_ = v___y_1983_;
v___y_1907_ = v___y_1981_;
v___y_1908_ = v___y_1986_;
v___y_1909_ = v___y_1980_;
v___y_1910_ = v___y_1991_;
v___y_1911_ = v___y_1987_;
v___y_1912_ = v___y_1992_;
v_reportedCmdState_1913_ = v___x_2024_;
goto v___jp_1884_;
}
}
else
{
lean_inc_ref(v___x_1995_);
lean_inc(v___y_1987_);
lean_inc_ref(v___y_1984_);
lean_inc(v___y_1981_);
lean_inc_ref(v___y_1980_);
lean_inc(v___y_1978_);
v___y_1948_ = v___y_1978_;
v___y_1949_ = v___y_1980_;
v___y_1950_ = v___y_1981_;
v___y_1951_ = v___y_1984_;
v___y_1952_ = v___y_1985_;
v___y_1953_ = v___y_1988_;
v___y_1954_ = v___y_1987_;
v___y_1955_ = v___y_1989_;
v___y_1956_ = v___f_1998_;
v___y_1957_ = v___y_1990_;
v___y_1958_ = v___y_1984_;
v___y_1959_ = v___x_1995_;
v___y_1960_ = v___y_1982_;
v___y_1961_ = v___y_1978_;
v___y_1962_ = v___y_1979_;
v___y_1963_ = v___y_1983_;
v___y_1964_ = v___y_1981_;
v___y_1965_ = v___y_1986_;
v___y_1966_ = v___y_1980_;
v___y_1967_ = v___y_1991_;
v___y_1968_ = v___y_1987_;
v___y_1969_ = v___y_1992_;
v_reportedCmdState_1970_ = v___x_1995_;
goto v___jp_1947_;
}
}
}
v___jp_2025_:
{
lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; size_t v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; 
v___x_2027_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_snd_1834_);
v___x_2028_ = l_IO_CancelToken_new();
v___x_2029_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0));
lean_inc(v___x_1835_);
v___x_2030_ = l_Lean_Name_str___override(v___x_1835_, v___x_2029_);
v___x_2031_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2));
v___x_2032_ = l_Lean_Name_str___override(v___x_2030_, v___x_2031_);
v___x_2033_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4));
v___x_2034_ = l_Lean_Name_str___override(v___x_2032_, v___x_2033_);
v___x_2035_ = l_Lean_Name_str___override(v___x_2034_, v___x_2031_);
v___x_2036_ = lean_unsigned_to_nat(0u);
v___x_2037_ = l_Lean_Name_num___override(v___x_2035_, v___x_2036_);
v___x_2038_ = l_Lean_Name_str___override(v___x_2037_, v___x_2031_);
v___x_2039_ = l_Lean_Name_str___override(v___x_2038_, v___x_2033_);
v___x_2040_ = l_Lean_Name_str___override(v___x_2039_, v___x_2031_);
v___x_2041_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0));
v___x_2042_ = l_Lean_Name_str___override(v___x_2040_, v___x_2041_);
v___x_2043_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__4));
v___x_2044_ = l_Lean_Name_str___override(v___x_2042_, v___x_2043_);
v___x_2045_ = l_Lean_Name_toString(v___x_2044_, v___x_1836_);
v___x_2046_ = lean_box(0);
v___x_2047_ = lean_unsigned_to_nat(32u);
v___x_2048_ = ((size_t)5ULL);
v___x_2049_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
lean_inc_ref_n(v___x_2045_, 2);
v___x_2050_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2050_, 0, v___x_2045_);
lean_ctor_set(v___x_2050_, 1, v___x_2027_);
lean_ctor_set(v___x_2050_, 2, v___x_2046_);
lean_ctor_set(v___x_2050_, 3, v___x_2049_);
lean_ctor_set_uint8(v___x_2050_, sizeof(void*)*4, v_val_1832_);
v___x_2051_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_2052_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2052_, 0, v___x_2045_);
lean_ctor_set(v___x_2052_, 1, v___x_2051_);
lean_ctor_set(v___x_2052_, 2, v___x_2046_);
lean_ctor_set(v___x_2052_, 3, v___x_2049_);
lean_ctor_set_uint8(v___x_2052_, sizeof(void*)*4, v_val_1832_);
lean_inc(v_fst_1837_);
v___x_2053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2053_, 0, v_fst_1837_);
v___x_2054_ = l_Lean_Language_SnapshotTask_defaultReportingRange(v___x_2053_);
lean_inc_ref(v___x_2028_);
v___x_2055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2055_, 0, v___x_2028_);
v___x_2056_ = l_IO_Promise_result_x21___redArg(v_val_1838_);
lean_inc_ref(v___x_2056_);
lean_inc(v___x_2054_);
lean_inc_ref_n(v___x_2053_, 3);
v___x_2057_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2057_, 0, v___x_2053_);
lean_ctor_set(v___x_2057_, 1, v___x_2054_);
lean_ctor_set(v___x_2057_, 2, v___x_2055_);
lean_ctor_set(v___x_2057_, 3, v___x_2056_);
v___x_2058_ = l_IO_Promise_result_x21___redArg(v_val_1839_);
lean_inc_ref(v___x_2058_);
lean_inc_n(v___x_1827_, 3);
v___x_2059_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2059_, 0, v___x_2053_);
lean_ctor_set(v___x_2059_, 1, v___x_1827_);
lean_ctor_set(v___x_2059_, 2, v___x_2046_);
lean_ctor_set(v___x_2059_, 3, v___x_2058_);
v___x_2060_ = l_IO_Promise_result_x21___redArg(v_val_1846_);
lean_inc_ref(v___x_2060_);
v___x_2061_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2061_, 0, v___x_2053_);
lean_ctor_set(v___x_2061_, 1, v___x_1827_);
lean_ctor_set(v___x_2061_, 2, v___x_2046_);
lean_ctor_set(v___x_2061_, 3, v___x_2060_);
v___x_2062_ = l_IO_Promise_result_x21___redArg(v_val_1828_);
v___x_2063_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2063_, 0, v___x_2046_);
lean_ctor_set(v___x_2063_, 1, v___x_1827_);
lean_ctor_set(v___x_2063_, 2, v___x_2046_);
lean_ctor_set(v___x_2063_, 3, v___x_2062_);
lean_inc_ref(v___x_2052_);
v___x_2064_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2064_, 0, v___x_2052_);
lean_ctor_set(v___x_2064_, 1, v___x_2057_);
lean_ctor_set(v___x_2064_, 2, v___x_2059_);
lean_ctor_set(v___x_2064_, 3, v___x_2061_);
lean_ctor_set(v___x_2064_, 4, v___x_2063_);
v___x_2065_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2065_, 0, v___x_2050_);
lean_ctor_set(v___x_2065_, 1, v_fst_1837_);
lean_ctor_set(v___x_2065_, 2, v_snd_1850_);
lean_ctor_set(v___x_2065_, 3, v___x_2064_);
lean_ctor_set(v___x_2065_, 4, v___y_2026_);
v___x_2066_ = lean_io_promise_resolve(v___x_2065_, v_prom_1851_);
if (lean_obj_tag(v_old_x3f_1852_) == 0)
{
v___y_1978_ = v___x_2046_;
v___y_1979_ = v___x_2054_;
v___y_1980_ = v___x_2045_;
v___y_1981_ = v___x_2036_;
v___y_1982_ = v___x_2028_;
v___y_1983_ = v___x_2056_;
v___y_1984_ = v___x_2052_;
v___y_1985_ = v___x_2048_;
v___y_1986_ = v___x_2053_;
v___y_1987_ = v___x_2046_;
v___y_1988_ = v___x_2049_;
v___y_1989_ = v___x_2047_;
v___y_1990_ = v___x_2046_;
v___y_1991_ = v___x_2058_;
v___y_1992_ = v___x_2060_;
v___y_1993_ = v___x_2046_;
goto v___jp_1977_;
}
else
{
lean_object* v_val_2067_; lean_object* v___x_2069_; uint8_t v_isShared_2070_; uint8_t v_isSharedCheck_2078_; 
v_val_2067_ = lean_ctor_get(v_old_x3f_1852_, 0);
v_isSharedCheck_2078_ = !lean_is_exclusive(v_old_x3f_1852_);
if (v_isSharedCheck_2078_ == 0)
{
v___x_2069_ = v_old_x3f_1852_;
v_isShared_2070_ = v_isSharedCheck_2078_;
goto v_resetjp_2068_;
}
else
{
lean_inc(v_val_2067_);
lean_dec(v_old_x3f_1852_);
v___x_2069_ = lean_box(0);
v_isShared_2070_ = v_isSharedCheck_2078_;
goto v_resetjp_2068_;
}
v_resetjp_2068_:
{
lean_object* v_elabSnap_2071_; lean_object* v_stx_2072_; lean_object* v_elabSnap_2073_; lean_object* v___x_2074_; lean_object* v___x_2076_; 
v_elabSnap_2071_ = lean_ctor_get(v_val_2067_, 3);
lean_inc_ref(v_elabSnap_2071_);
v_stx_2072_ = lean_ctor_get(v_val_2067_, 1);
lean_inc(v_stx_2072_);
lean_dec(v_val_2067_);
v_elabSnap_2073_ = lean_ctor_get(v_elabSnap_2071_, 1);
lean_inc_ref(v_elabSnap_2073_);
lean_dec_ref(v_elabSnap_2071_);
v___x_2074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2074_, 0, v_stx_2072_);
lean_ctor_set(v___x_2074_, 1, v_elabSnap_2073_);
if (v_isShared_2070_ == 0)
{
lean_ctor_set(v___x_2069_, 0, v___x_2074_);
v___x_2076_ = v___x_2069_;
goto v_reusejp_2075_;
}
else
{
lean_object* v_reuseFailAlloc_2077_; 
v_reuseFailAlloc_2077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2077_, 0, v___x_2074_);
v___x_2076_ = v_reuseFailAlloc_2077_;
goto v_reusejp_2075_;
}
v_reusejp_2075_:
{
v___y_1978_ = v___x_2046_;
v___y_1979_ = v___x_2054_;
v___y_1980_ = v___x_2045_;
v___y_1981_ = v___x_2036_;
v___y_1982_ = v___x_2028_;
v___y_1983_ = v___x_2056_;
v___y_1984_ = v___x_2052_;
v___y_1985_ = v___x_2048_;
v___y_1986_ = v___x_2053_;
v___y_1987_ = v___x_2046_;
v___y_1988_ = v___x_2049_;
v___y_1989_ = v___x_2047_;
v___y_1990_ = v___x_2046_;
v___y_1991_ = v___x_2058_;
v___y_1992_ = v___x_2060_;
v___y_1993_ = v___x_2076_;
goto v___jp_1977_;
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3(void){
_start:
{
lean_object* v___x_2091_; lean_object* v___x_2092_; 
v___x_2091_ = l_Lean_Language_instInhabitedDynamicSnapshot;
v___x_2092_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v___x_2091_);
return v___x_2092_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4(void){
_start:
{
lean_object* v___x_2093_; lean_object* v___x_2094_; 
v___x_2093_ = l_Lean_Language_instInhabitedSnapshotTree_default;
v___x_2094_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v___x_2093_);
return v___x_2094_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__8(lean_object* v_cmds_2095_, lean_object* v_fst_2096_, lean_object* v_fst_2097_, uint8_t v_val_2098_, lean_object* v___y_2099_, lean_object* v_snd_2100_, lean_object* v___x_2101_, uint8_t v___x_2102_, lean_object* v___x_2103_, lean_object* v___f_2104_, lean_object* v___f_2105_, lean_object* v___f_2106_, lean_object* v_pos_2107_, lean_object* v_cmdState_2108_, lean_object* v___x_2109_, lean_object* v_opts_2110_, lean_object* v_prom_2111_, lean_object* v_old_x3f_2112_, lean_object* v_parseCancelTk_2113_){
_start:
{
lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___y_2120_; lean_object* v___y_2121_; lean_object* v___y_2122_; lean_object* v___y_2123_; lean_object* v___y_2124_; lean_object* v___y_2125_; lean_object* v___y_2126_; lean_object* v_snapshotTasks_2127_; lean_object* v_traceTask_2128_; lean_object* v___y_2139_; lean_object* v___y_2140_; lean_object* v___y_2141_; lean_object* v___y_2142_; lean_object* v___y_2143_; lean_object* v___y_2144_; lean_object* v___y_2145_; lean_object* v___y_2146_; size_t v___y_2152_; lean_object* v___y_2153_; lean_object* v___y_2154_; lean_object* v___y_2155_; lean_object* v___y_2156_; lean_object* v___y_2157_; lean_object* v___y_2158_; lean_object* v___y_2159_; lean_object* v___y_2160_; lean_object* v___y_2161_; lean_object* v___y_2162_; lean_object* v___y_2163_; lean_object* v___y_2164_; lean_object* v___y_2165_; lean_object* v___y_2166_; lean_object* v___y_2167_; lean_object* v___y_2168_; lean_object* v___y_2169_; lean_object* v___y_2170_; lean_object* v___y_2171_; lean_object* v___y_2172_; lean_object* v___y_2173_; lean_object* v___y_2174_; lean_object* v___y_2175_; lean_object* v_env_2176_; lean_object* v_messages_2177_; lean_object* v_scopes_2178_; lean_object* v_infoState_2179_; lean_object* v_traceState_2180_; lean_object* v_snapshotTasks_2181_; lean_object* v_reportedCmdState_2182_; lean_object* v___y_2217_; size_t v___y_2218_; lean_object* v___y_2219_; lean_object* v___y_2220_; lean_object* v___y_2221_; lean_object* v___y_2222_; lean_object* v___y_2223_; lean_object* v___y_2224_; lean_object* v___y_2225_; lean_object* v___y_2226_; lean_object* v___y_2227_; lean_object* v___y_2228_; lean_object* v___y_2229_; lean_object* v___y_2230_; lean_object* v___y_2231_; lean_object* v___y_2232_; lean_object* v___y_2233_; lean_object* v___y_2234_; lean_object* v___y_2235_; lean_object* v___y_2236_; lean_object* v___y_2237_; lean_object* v___y_2238_; lean_object* v___y_2239_; lean_object* v___y_2240_; lean_object* v_reportedCmdState_2241_; lean_object* v___x_2248_; lean_object* v___y_2250_; lean_object* v___y_2251_; size_t v___y_2252_; lean_object* v___y_2253_; lean_object* v___y_2254_; lean_object* v___y_2255_; lean_object* v___y_2256_; lean_object* v___y_2257_; lean_object* v___y_2258_; lean_object* v___y_2259_; lean_object* v___y_2260_; lean_object* v___y_2261_; lean_object* v___y_2262_; lean_object* v___y_2263_; lean_object* v___y_2264_; lean_object* v___y_2265_; lean_object* v___y_2266_; lean_object* v___y_2267_; lean_object* v___y_2300_; lean_object* v___y_2301_; lean_object* v___y_2302_; lean_object* v___y_2303_; lean_object* v___y_2304_; lean_object* v___y_2359_; lean_object* v___y_2360_; lean_object* v___y_2361_; lean_object* v_fst_2378_; lean_object* v_snd_2379_; uint8_t v___x_2391_; 
v___x_2115_ = lean_io_promise_new();
v___x_2116_ = lean_io_promise_new();
v___x_2117_ = lean_io_promise_new();
v___x_2118_ = lean_io_promise_new();
v___x_2248_ = l_Lean_internal_cmdlineSnapshots;
v___x_2391_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_2110_, v___x_2248_);
if (v___x_2391_ == 0)
{
lean_inc_ref(v_fst_2097_);
lean_inc(v_fst_2096_);
v_fst_2378_ = v_fst_2096_;
v_snd_2379_ = v_fst_2097_;
goto v___jp_2377_;
}
else
{
uint8_t v___x_2392_; 
lean_inc(v_fst_2096_);
v___x_2392_ = l_Lean_Parser_isTerminalCommand(v_fst_2096_);
if (v___x_2392_ == 0)
{
if (v___x_2391_ == 0)
{
lean_inc_ref(v_fst_2097_);
lean_inc(v_fst_2096_);
v_fst_2378_ = v_fst_2096_;
v_snd_2379_ = v_fst_2097_;
goto v___jp_2377_;
}
else
{
lean_object* v___x_2393_; lean_object* v___x_2394_; 
v___x_2393_ = lean_box(0);
v___x_2394_ = l_Lean_Parser_instInhabitedModuleParserState_default;
v_fst_2378_ = v___x_2393_;
v_snd_2379_ = v___x_2394_;
goto v___jp_2377_;
}
}
else
{
lean_inc_ref(v_fst_2097_);
lean_inc(v_fst_2096_);
v_fst_2378_ = v_fst_2096_;
v_snd_2379_ = v_fst_2097_;
goto v___jp_2377_;
}
}
v___jp_2119_:
{
lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; 
v___x_2129_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2129_, 0, v___y_2123_);
lean_ctor_set(v___x_2129_, 1, v___y_2122_);
lean_ctor_set(v___x_2129_, 2, v___y_2124_);
lean_ctor_set(v___x_2129_, 3, v_traceTask_2128_);
v___x_2130_ = lean_array_push(v_snapshotTasks_2127_, v___x_2129_);
v___x_2131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2131_, 0, v___y_2125_);
lean_ctor_set(v___x_2131_, 1, v___x_2130_);
v___x_2132_ = lean_io_promise_resolve(v___x_2131_, v___x_2118_);
lean_dec(v___x_2118_);
if (lean_obj_tag(v___y_2121_) == 1)
{
lean_object* v_val_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; 
v_val_2133_ = lean_ctor_get(v___y_2121_, 0);
lean_inc(v_val_2133_);
lean_dec_ref_known(v___y_2121_, 1);
v___x_2134_ = lean_box(0);
v___x_2135_ = lean_array_push(v_cmds_2095_, v_fst_2096_);
v___x_2136_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v___x_2134_, v_fst_2097_, v___y_2126_, v_val_2133_, v_val_2098_, v___y_2120_, v___x_2135_, v___y_2099_);
return v___x_2136_;
}
else
{
lean_object* v___x_2137_; 
lean_dec_ref(v___y_2126_);
lean_dec(v___y_2121_);
lean_dec_ref(v___y_2120_);
lean_dec_ref(v_fst_2097_);
lean_dec(v_fst_2096_);
lean_dec_ref(v_cmds_2095_);
v___x_2137_ = lean_box(0);
return v___x_2137_;
}
}
v___jp_2138_:
{
lean_object* v_snapshotTasks_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; 
v_snapshotTasks_2147_ = lean_ctor_get(v___y_2145_, 10);
lean_inc_ref(v_snapshotTasks_2147_);
v___x_2148_ = lean_mk_empty_array_with_capacity(v___y_2142_);
lean_dec(v___y_2142_);
lean_inc_ref(v___y_2146_);
v___x_2149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2149_, 0, v___y_2146_);
lean_ctor_set(v___x_2149_, 1, v___x_2148_);
v___x_2150_ = lean_task_pure(v___x_2149_);
v___y_2120_ = v___y_2139_;
v___y_2121_ = v___y_2140_;
v___y_2122_ = v___y_2141_;
v___y_2123_ = v___y_2143_;
v___y_2124_ = v___y_2144_;
v___y_2125_ = v___y_2146_;
v___y_2126_ = v___y_2145_;
v_snapshotTasks_2127_ = v_snapshotTasks_2147_;
v_traceTask_2128_ = v___x_2150_;
goto v___jp_2119_;
}
v___jp_2151_:
{
lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v_opts_2192_; uint8_t v_hasTrace_2193_; 
v___x_2183_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_messages_2177_);
v___x_2184_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2184_, 0, v___y_2170_);
lean_ctor_set(v___x_2184_, 1, v___x_2183_);
lean_ctor_set(v___x_2184_, 2, v___y_2161_);
lean_ctor_set(v___x_2184_, 3, v_traceState_2180_);
lean_ctor_set_uint8(v___x_2184_, sizeof(void*)*4, v_val_2098_);
v___x_2185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2185_, 0, v___x_2184_);
lean_ctor_set(v___x_2185_, 1, v_reportedCmdState_2182_);
v___x_2186_ = lean_io_promise_resolve(v___x_2185_, v___x_2116_);
lean_dec(v___x_2116_);
v___x_2187_ = l_Lean_Elab_InfoState_substituteLazy(v_infoState_2179_);
lean_inc(v___y_2163_);
v___x_2188_ = l_BaseIO_chainTask___redArg(v___x_2187_, v___y_2162_, v___y_2163_, v___x_2102_);
v___x_2189_ = l_Lean_inheritedTraceOptions;
v___x_2190_ = lean_st_ref_get(v___x_2189_);
v___x_2191_ = l_List_head_x21___redArg(v___x_2103_, v_scopes_2178_);
lean_dec(v_scopes_2178_);
lean_dec_ref(v___x_2103_);
v_opts_2192_ = lean_ctor_get(v___x_2191_, 1);
lean_inc_ref(v_opts_2192_);
lean_dec(v___x_2191_);
v_hasTrace_2193_ = lean_ctor_get_uint8(v_opts_2192_, sizeof(void*)*1);
if (v_hasTrace_2193_ == 0)
{
lean_dec_ref(v_opts_2192_);
lean_dec(v___x_2190_);
lean_dec_ref(v_snapshotTasks_2181_);
lean_dec_ref(v_env_2176_);
lean_dec(v___y_2173_);
lean_dec_ref(v___y_2172_);
lean_dec(v___y_2171_);
lean_dec_ref(v___y_2167_);
lean_dec_ref(v___y_2165_);
lean_dec_ref(v___y_2159_);
lean_dec_ref(v___y_2158_);
lean_dec(v___y_2157_);
lean_dec(v___y_2156_);
lean_dec(v___y_2155_);
lean_dec(v___y_2153_);
lean_dec(v_pos_2107_);
lean_dec_ref(v___f_2106_);
lean_dec_ref(v___f_2105_);
lean_dec_ref(v___f_2104_);
lean_dec(v___x_2101_);
v___y_2139_ = v___y_2160_;
v___y_2140_ = v___y_2168_;
v___y_2141_ = v___y_2169_;
v___y_2142_ = v___y_2163_;
v___y_2143_ = v___y_2164_;
v___y_2144_ = v___y_2174_;
v___y_2145_ = v___y_2175_;
v___y_2146_ = v___y_2166_;
goto v___jp_2138_;
}
else
{
lean_object* v___x_2194_; uint8_t v___x_2195_; 
v___x_2194_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2);
v___x_2195_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_2190_, v_opts_2192_, v___x_2194_);
lean_dec(v___x_2190_);
if (v___x_2195_ == 0)
{
lean_dec_ref(v_opts_2192_);
lean_dec_ref(v_snapshotTasks_2181_);
lean_dec_ref(v_env_2176_);
lean_dec(v___y_2173_);
lean_dec_ref(v___y_2172_);
lean_dec(v___y_2171_);
lean_dec_ref(v___y_2167_);
lean_dec_ref(v___y_2165_);
lean_dec_ref(v___y_2159_);
lean_dec_ref(v___y_2158_);
lean_dec(v___y_2157_);
lean_dec(v___y_2156_);
lean_dec(v___y_2155_);
lean_dec(v___y_2153_);
lean_dec(v_pos_2107_);
lean_dec_ref(v___f_2106_);
lean_dec_ref(v___f_2105_);
lean_dec_ref(v___f_2104_);
lean_dec(v___x_2101_);
v___y_2139_ = v___y_2160_;
v___y_2140_ = v___y_2168_;
v___y_2141_ = v___y_2169_;
v___y_2142_ = v___y_2163_;
v___y_2143_ = v___y_2164_;
v___y_2144_ = v___y_2174_;
v___y_2145_ = v___y_2175_;
v___y_2146_ = v___y_2166_;
goto v___jp_2138_;
}
else
{
lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___f_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; 
lean_inc_n(v___y_2163_, 3);
v___x_2196_ = lean_task_map(v___f_2104_, v___y_2172_, v___y_2163_, v___x_2102_);
lean_inc_n(v___y_2174_, 3);
lean_inc_n(v___y_2171_, 2);
lean_inc_n(v___y_2173_, 2);
v___x_2197_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2197_, 0, v___y_2173_);
lean_ctor_set(v___x_2197_, 1, v___y_2171_);
lean_ctor_set(v___x_2197_, 2, v___y_2174_);
lean_ctor_set(v___x_2197_, 3, v___x_2196_);
v___x_2198_ = lean_task_map(v___f_2105_, v___y_2165_, v___y_2163_, v___x_2102_);
v___x_2199_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2199_, 0, v___y_2173_);
lean_ctor_set(v___x_2199_, 1, v___y_2171_);
lean_ctor_set(v___x_2199_, 2, v___y_2174_);
lean_ctor_set(v___x_2199_, 3, v___x_2198_);
v___x_2200_ = lean_task_map(v___f_2106_, v___y_2167_, v___y_2163_, v___x_2102_);
v___x_2201_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2201_, 0, v___y_2173_);
lean_ctor_set(v___x_2201_, 1, v___y_2171_);
lean_ctor_set(v___x_2201_, 2, v___y_2174_);
lean_ctor_set(v___x_2201_, 3, v___x_2200_);
v___x_2202_ = lean_unsigned_to_nat(3u);
v___x_2203_ = lean_mk_empty_array_with_capacity(v___x_2202_);
v___x_2204_ = lean_array_push(v___x_2203_, v___x_2197_);
v___x_2205_ = lean_array_push(v___x_2204_, v___x_2199_);
v___x_2206_ = lean_array_push(v___x_2205_, v___x_2201_);
v___x_2207_ = l_Array_append___redArg(v___x_2206_, v_snapshotTasks_2181_);
lean_inc_ref(v___y_2166_);
v___x_2208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2208_, 0, v___y_2166_);
lean_ctor_set(v___x_2208_, 1, v___x_2207_);
v___x_2209_ = lean_box_usize(v___y_2152_);
v___x_2210_ = lean_box(v___x_2102_);
v___x_2211_ = lean_box(v_val_2098_);
v___x_2212_ = lean_box(v___x_2195_);
lean_inc_ref(v___x_2208_);
lean_inc_ref(v___y_2154_);
lean_inc_ref(v___y_2099_);
v___f_2213_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___boxed), 20, 18);
lean_closure_set(v___f_2213_, 0, v___y_2099_);
lean_closure_set(v___f_2213_, 1, v_opts_2192_);
lean_closure_set(v___f_2213_, 2, v___x_2101_);
lean_closure_set(v___f_2213_, 3, v___y_2157_);
lean_closure_set(v___f_2213_, 4, v___y_2153_);
lean_closure_set(v___f_2213_, 5, v___x_2209_);
lean_closure_set(v___f_2213_, 6, v___x_2210_);
lean_closure_set(v___f_2213_, 7, v_env_2176_);
lean_closure_set(v___f_2213_, 8, v___y_2154_);
lean_closure_set(v___f_2213_, 9, v___x_2189_);
lean_closure_set(v___f_2213_, 10, v___y_2155_);
lean_closure_set(v___f_2213_, 11, v___x_2211_);
lean_closure_set(v___f_2213_, 12, v___x_2208_);
lean_closure_set(v___f_2213_, 13, v_pos_2107_);
lean_closure_set(v___f_2213_, 14, v___y_2159_);
lean_closure_set(v___f_2213_, 15, v___y_2156_);
lean_closure_set(v___f_2213_, 16, v___y_2158_);
lean_closure_set(v___f_2213_, 17, v___x_2212_);
v___x_2214_ = l_Lean_Language_SnapshotTree_waitAll(v___x_2208_);
v___x_2215_ = lean_io_bind_task(v___x_2214_, v___f_2213_, v___y_2163_, v_val_2098_);
v___y_2120_ = v___y_2160_;
v___y_2121_ = v___y_2168_;
v___y_2122_ = v___y_2169_;
v___y_2123_ = v___y_2164_;
v___y_2124_ = v___y_2174_;
v___y_2125_ = v___y_2166_;
v___y_2126_ = v___y_2175_;
v_snapshotTasks_2127_ = v_snapshotTasks_2181_;
v_traceTask_2128_ = v___x_2215_;
goto v___jp_2119_;
}
}
}
v___jp_2216_:
{
lean_object* v_env_2242_; lean_object* v_messages_2243_; lean_object* v_scopes_2244_; lean_object* v_infoState_2245_; lean_object* v_traceState_2246_; lean_object* v_snapshotTasks_2247_; 
v_env_2242_ = lean_ctor_get(v___y_2240_, 0);
lean_inc_ref(v_env_2242_);
v_messages_2243_ = lean_ctor_get(v___y_2240_, 1);
lean_inc_ref(v_messages_2243_);
v_scopes_2244_ = lean_ctor_get(v___y_2240_, 2);
lean_inc(v_scopes_2244_);
v_infoState_2245_ = lean_ctor_get(v___y_2240_, 8);
lean_inc_ref(v_infoState_2245_);
v_traceState_2246_ = lean_ctor_get(v___y_2240_, 9);
lean_inc_ref(v_traceState_2246_);
v_snapshotTasks_2247_ = lean_ctor_get(v___y_2240_, 10);
lean_inc_ref(v_snapshotTasks_2247_);
v___y_2152_ = v___y_2218_;
v___y_2153_ = v___y_2217_;
v___y_2154_ = v___y_2219_;
v___y_2155_ = v___y_2220_;
v___y_2156_ = v___y_2222_;
v___y_2157_ = v___y_2221_;
v___y_2158_ = v___y_2223_;
v___y_2159_ = v___y_2224_;
v___y_2160_ = v___y_2225_;
v___y_2161_ = v___y_2226_;
v___y_2162_ = v___y_2227_;
v___y_2163_ = v___y_2228_;
v___y_2164_ = v___y_2229_;
v___y_2165_ = v___y_2230_;
v___y_2166_ = v___y_2231_;
v___y_2167_ = v___y_2232_;
v___y_2168_ = v___y_2233_;
v___y_2169_ = v___y_2234_;
v___y_2170_ = v___y_2235_;
v___y_2171_ = v___y_2236_;
v___y_2172_ = v___y_2237_;
v___y_2173_ = v___y_2238_;
v___y_2174_ = v___y_2239_;
v___y_2175_ = v___y_2240_;
v_env_2176_ = v_env_2242_;
v_messages_2177_ = v_messages_2243_;
v_scopes_2178_ = v_scopes_2244_;
v_infoState_2179_ = v_infoState_2245_;
v_traceState_2180_ = v_traceState_2246_;
v_snapshotTasks_2181_ = v_snapshotTasks_2247_;
v_reportedCmdState_2182_ = v_reportedCmdState_2241_;
goto v___jp_2151_;
}
v___jp_2249_:
{
lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___f_2272_; uint8_t v___x_2273_; 
v___x_2268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2268_, 0, v___y_2267_);
lean_ctor_set(v___x_2268_, 1, v___x_2115_);
lean_inc_ref(v___y_2250_);
lean_inc_n(v_pos_2107_, 2);
lean_inc_ref(v_cmds_2095_);
lean_inc(v_fst_2096_);
v___x_2269_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab(v_fst_2096_, v_cmds_2095_, v_cmdState_2108_, v_pos_2107_, v___x_2268_, v___y_2250_, v___y_2099_);
v___x_2270_ = lean_box(v_val_2098_);
v___x_2271_ = lean_box(v___x_2102_);
lean_inc_ref(v___y_2099_);
lean_inc(v___y_2253_);
lean_inc_ref(v___x_2103_);
lean_inc_ref(v___x_2269_);
lean_inc_ref(v___y_2254_);
lean_inc_ref(v___y_2261_);
v___f_2272_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___boxed), 13, 11);
lean_closure_set(v___f_2272_, 0, v___y_2261_);
lean_closure_set(v___f_2272_, 1, v___y_2254_);
lean_closure_set(v___f_2272_, 2, v___x_2270_);
lean_closure_set(v___f_2272_, 3, v___x_2117_);
lean_closure_set(v___f_2272_, 4, v___x_2269_);
lean_closure_set(v___f_2272_, 5, v___x_2103_);
lean_closure_set(v___f_2272_, 6, v___y_2253_);
lean_closure_set(v___f_2272_, 7, v___x_2271_);
lean_closure_set(v___f_2272_, 8, v___y_2099_);
lean_closure_set(v___f_2272_, 9, v_pos_2107_);
lean_closure_set(v___f_2272_, 10, v___x_2109_);
v___x_2273_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_2110_, v___x_2248_);
if (v___x_2273_ == 0)
{
lean_inc_ref(v___x_2269_);
lean_inc_ref(v___y_2261_);
lean_inc_ref(v___y_2260_);
lean_inc(v___y_2258_);
lean_inc(v___y_2255_);
lean_inc(v___y_2253_);
v___y_2217_ = v___y_2253_;
v___y_2218_ = v___y_2252_;
v___y_2219_ = v___y_2254_;
v___y_2220_ = v___y_2255_;
v___y_2221_ = v___y_2257_;
v___y_2222_ = v___y_2258_;
v___y_2223_ = v___y_2260_;
v___y_2224_ = v___y_2261_;
v___y_2225_ = v___y_2250_;
v___y_2226_ = v___y_2258_;
v___y_2227_ = v___f_2272_;
v___y_2228_ = v___y_2253_;
v___y_2229_ = v___y_2262_;
v___y_2230_ = v___y_2263_;
v___y_2231_ = v___y_2260_;
v___y_2232_ = v___y_2265_;
v___y_2233_ = v___y_2264_;
v___y_2234_ = v___y_2266_;
v___y_2235_ = v___y_2261_;
v___y_2236_ = v___y_2259_;
v___y_2237_ = v___y_2251_;
v___y_2238_ = v___y_2256_;
v___y_2239_ = v___y_2255_;
v___y_2240_ = v___x_2269_;
v_reportedCmdState_2241_ = v___x_2269_;
goto v___jp_2216_;
}
else
{
uint8_t v___x_2274_; 
lean_inc(v_fst_2096_);
v___x_2274_ = l_Lean_Parser_isTerminalCommand(v_fst_2096_);
if (v___x_2274_ == 0)
{
if (v___x_2273_ == 0)
{
lean_inc_ref(v___x_2269_);
lean_inc_ref(v___y_2261_);
lean_inc_ref(v___y_2260_);
lean_inc(v___y_2258_);
lean_inc(v___y_2255_);
lean_inc(v___y_2253_);
v___y_2217_ = v___y_2253_;
v___y_2218_ = v___y_2252_;
v___y_2219_ = v___y_2254_;
v___y_2220_ = v___y_2255_;
v___y_2221_ = v___y_2257_;
v___y_2222_ = v___y_2258_;
v___y_2223_ = v___y_2260_;
v___y_2224_ = v___y_2261_;
v___y_2225_ = v___y_2250_;
v___y_2226_ = v___y_2258_;
v___y_2227_ = v___f_2272_;
v___y_2228_ = v___y_2253_;
v___y_2229_ = v___y_2262_;
v___y_2230_ = v___y_2263_;
v___y_2231_ = v___y_2260_;
v___y_2232_ = v___y_2265_;
v___y_2233_ = v___y_2264_;
v___y_2234_ = v___y_2266_;
v___y_2235_ = v___y_2261_;
v___y_2236_ = v___y_2259_;
v___y_2237_ = v___y_2251_;
v___y_2238_ = v___y_2256_;
v___y_2239_ = v___y_2255_;
v___y_2240_ = v___x_2269_;
v_reportedCmdState_2241_ = v___x_2269_;
goto v___jp_2216_;
}
else
{
lean_object* v_env_2275_; lean_object* v_messages_2276_; lean_object* v_scopes_2277_; lean_object* v_infoState_2278_; lean_object* v_traceState_2279_; lean_object* v_snapshotTasks_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; 
v_env_2275_ = lean_ctor_get(v___x_2269_, 0);
lean_inc_ref_n(v_env_2275_, 2);
v_messages_2276_ = lean_ctor_get(v___x_2269_, 1);
lean_inc_ref(v_messages_2276_);
v_scopes_2277_ = lean_ctor_get(v___x_2269_, 2);
lean_inc(v_scopes_2277_);
v_infoState_2278_ = lean_ctor_get(v___x_2269_, 8);
lean_inc_ref(v_infoState_2278_);
v_traceState_2279_ = lean_ctor_get(v___x_2269_, 9);
lean_inc_ref(v_traceState_2279_);
v_snapshotTasks_2280_ = lean_ctor_get(v___x_2269_, 10);
lean_inc_ref(v_snapshotTasks_2280_);
v___x_2281_ = lean_mk_empty_array_with_capacity(v___y_2257_);
lean_inc_ref(v___x_2281_);
v___x_2282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2282_, 0, v___x_2281_);
lean_inc_n(v___y_2253_, 4);
v___x_2283_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2283_, 0, v___x_2282_);
lean_ctor_set(v___x_2283_, 1, v___x_2281_);
lean_ctor_set(v___x_2283_, 2, v___y_2253_);
lean_ctor_set(v___x_2283_, 3, v___y_2253_);
lean_ctor_set_usize(v___x_2283_, 4, v___y_2252_);
v___x_2284_ = l_Lean_NameSet_empty;
lean_inc_ref_n(v___x_2283_, 2);
v___x_2285_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2285_, 0, v___x_2283_);
lean_ctor_set(v___x_2285_, 1, v___x_2283_);
lean_ctor_set(v___x_2285_, 2, v___x_2284_);
v___x_2286_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
v___x_2287_ = l_Lean_Options_empty;
v___x_2288_ = lean_box(0);
v___x_2289_ = lean_mk_empty_array_with_capacity(v___y_2253_);
lean_inc_ref_n(v___x_2289_, 3);
lean_inc_n(v___x_2101_, 2);
v___x_2290_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v___x_2290_, 0, v___x_2286_);
lean_ctor_set(v___x_2290_, 1, v___x_2287_);
lean_ctor_set(v___x_2290_, 2, v___x_2101_);
lean_ctor_set(v___x_2290_, 3, v___x_2288_);
lean_ctor_set(v___x_2290_, 4, v___x_2288_);
lean_ctor_set(v___x_2290_, 5, v___x_2289_);
lean_ctor_set(v___x_2290_, 6, v___x_2289_);
lean_ctor_set(v___x_2290_, 7, v___x_2288_);
lean_ctor_set(v___x_2290_, 8, v___x_2288_);
lean_ctor_set(v___x_2290_, 9, v___x_2288_);
lean_ctor_set_uint8(v___x_2290_, sizeof(void*)*10, v_val_2098_);
lean_ctor_set_uint8(v___x_2290_, sizeof(void*)*10 + 1, v_val_2098_);
lean_ctor_set_uint8(v___x_2290_, sizeof(void*)*10 + 2, v_val_2098_);
v___x_2291_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2291_, 0, v___x_2290_);
lean_ctor_set(v___x_2291_, 1, v___x_2288_);
v___x_2292_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0);
v___x_2293_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__3));
v___x_2294_ = l_Lean_DeclNameGenerator_ofPrefix(v___x_2101_);
v___x_2295_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3);
v___x_2296_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2296_, 0, v___x_2295_);
lean_ctor_set(v___x_2296_, 1, v___x_2295_);
lean_ctor_set(v___x_2296_, 2, v___x_2283_);
lean_ctor_set_uint8(v___x_2296_, sizeof(void*)*3, v___x_2102_);
v___x_2297_ = lean_box(0);
lean_inc_ref(v___y_2254_);
v___x_2298_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_2298_, 0, v_env_2275_);
lean_ctor_set(v___x_2298_, 1, v___x_2285_);
lean_ctor_set(v___x_2298_, 2, v___x_2291_);
lean_ctor_set(v___x_2298_, 3, v___x_2284_);
lean_ctor_set(v___x_2298_, 4, v___x_2292_);
lean_ctor_set(v___x_2298_, 5, v___y_2253_);
lean_ctor_set(v___x_2298_, 6, v___x_2293_);
lean_ctor_set(v___x_2298_, 7, v___x_2294_);
lean_ctor_set(v___x_2298_, 8, v___x_2296_);
lean_ctor_set(v___x_2298_, 9, v___y_2254_);
lean_ctor_set(v___x_2298_, 10, v___x_2289_);
lean_ctor_set(v___x_2298_, 11, v___x_2297_);
lean_ctor_set(v___x_2298_, 12, v___x_2289_);
lean_inc_ref(v___y_2261_);
lean_inc_ref(v___y_2260_);
lean_inc(v___y_2258_);
lean_inc(v___y_2255_);
v___y_2152_ = v___y_2252_;
v___y_2153_ = v___y_2253_;
v___y_2154_ = v___y_2254_;
v___y_2155_ = v___y_2255_;
v___y_2156_ = v___y_2258_;
v___y_2157_ = v___y_2257_;
v___y_2158_ = v___y_2260_;
v___y_2159_ = v___y_2261_;
v___y_2160_ = v___y_2250_;
v___y_2161_ = v___y_2258_;
v___y_2162_ = v___f_2272_;
v___y_2163_ = v___y_2253_;
v___y_2164_ = v___y_2262_;
v___y_2165_ = v___y_2263_;
v___y_2166_ = v___y_2260_;
v___y_2167_ = v___y_2265_;
v___y_2168_ = v___y_2264_;
v___y_2169_ = v___y_2266_;
v___y_2170_ = v___y_2261_;
v___y_2171_ = v___y_2259_;
v___y_2172_ = v___y_2251_;
v___y_2173_ = v___y_2256_;
v___y_2174_ = v___y_2255_;
v___y_2175_ = v___x_2269_;
v_env_2176_ = v_env_2275_;
v_messages_2177_ = v_messages_2276_;
v_scopes_2178_ = v_scopes_2277_;
v_infoState_2179_ = v_infoState_2278_;
v_traceState_2180_ = v_traceState_2279_;
v_snapshotTasks_2181_ = v_snapshotTasks_2280_;
v_reportedCmdState_2182_ = v___x_2298_;
goto v___jp_2151_;
}
}
else
{
lean_inc_ref(v___x_2269_);
lean_inc_ref(v___y_2261_);
lean_inc_ref(v___y_2260_);
lean_inc(v___y_2258_);
lean_inc(v___y_2255_);
lean_inc(v___y_2253_);
v___y_2217_ = v___y_2253_;
v___y_2218_ = v___y_2252_;
v___y_2219_ = v___y_2254_;
v___y_2220_ = v___y_2255_;
v___y_2221_ = v___y_2257_;
v___y_2222_ = v___y_2258_;
v___y_2223_ = v___y_2260_;
v___y_2224_ = v___y_2261_;
v___y_2225_ = v___y_2250_;
v___y_2226_ = v___y_2258_;
v___y_2227_ = v___f_2272_;
v___y_2228_ = v___y_2253_;
v___y_2229_ = v___y_2262_;
v___y_2230_ = v___y_2263_;
v___y_2231_ = v___y_2260_;
v___y_2232_ = v___y_2265_;
v___y_2233_ = v___y_2264_;
v___y_2234_ = v___y_2266_;
v___y_2235_ = v___y_2261_;
v___y_2236_ = v___y_2259_;
v___y_2237_ = v___y_2251_;
v___y_2238_ = v___y_2256_;
v___y_2239_ = v___y_2255_;
v___y_2240_ = v___x_2269_;
v_reportedCmdState_2241_ = v___x_2269_;
goto v___jp_2216_;
}
}
}
v___jp_2299_:
{
lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; size_t v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; 
v___x_2305_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_snd_2100_);
v___x_2306_ = l_IO_CancelToken_new();
v___x_2307_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0));
lean_inc(v___x_2101_);
v___x_2308_ = l_Lean_Name_str___override(v___x_2101_, v___x_2307_);
v___x_2309_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2));
v___x_2310_ = l_Lean_Name_str___override(v___x_2308_, v___x_2309_);
v___x_2311_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4));
v___x_2312_ = l_Lean_Name_str___override(v___x_2310_, v___x_2311_);
v___x_2313_ = l_Lean_Name_str___override(v___x_2312_, v___x_2309_);
v___x_2314_ = lean_unsigned_to_nat(0u);
v___x_2315_ = l_Lean_Name_num___override(v___x_2313_, v___x_2314_);
v___x_2316_ = l_Lean_Name_str___override(v___x_2315_, v___x_2309_);
v___x_2317_ = l_Lean_Name_str___override(v___x_2316_, v___x_2311_);
v___x_2318_ = l_Lean_Name_str___override(v___x_2317_, v___x_2309_);
v___x_2319_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0));
v___x_2320_ = l_Lean_Name_str___override(v___x_2318_, v___x_2319_);
v___x_2321_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__4));
v___x_2322_ = l_Lean_Name_str___override(v___x_2320_, v___x_2321_);
v___x_2323_ = l_Lean_Name_toString(v___x_2322_, v___x_2102_);
v___x_2324_ = lean_box(0);
v___x_2325_ = lean_unsigned_to_nat(32u);
v___x_2326_ = lean_mk_empty_array_with_capacity(v___x_2325_);
lean_dec_ref(v___x_2326_);
v___x_2327_ = ((size_t)5ULL);
v___x_2328_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
lean_inc_ref_n(v___x_2323_, 2);
v___x_2329_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2329_, 0, v___x_2323_);
lean_ctor_set(v___x_2329_, 1, v___x_2305_);
lean_ctor_set(v___x_2329_, 2, v___x_2324_);
lean_ctor_set(v___x_2329_, 3, v___x_2328_);
lean_ctor_set_uint8(v___x_2329_, sizeof(void*)*4, v_val_2098_);
v___x_2330_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_2331_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2331_, 0, v___x_2323_);
lean_ctor_set(v___x_2331_, 1, v___x_2330_);
lean_ctor_set(v___x_2331_, 2, v___x_2324_);
lean_ctor_set(v___x_2331_, 3, v___x_2328_);
lean_ctor_set_uint8(v___x_2331_, sizeof(void*)*4, v_val_2098_);
lean_inc(v___y_2303_);
v___x_2332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2332_, 0, v___y_2303_);
v___x_2333_ = l_Lean_Language_SnapshotTask_defaultReportingRange(v___x_2332_);
lean_inc_ref(v___x_2306_);
v___x_2334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2334_, 0, v___x_2306_);
v___x_2335_ = l_IO_Promise_result_x21___redArg(v___x_2115_);
lean_inc_ref(v___x_2335_);
lean_inc(v___x_2333_);
lean_inc_ref_n(v___x_2332_, 3);
v___x_2336_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2336_, 0, v___x_2332_);
lean_ctor_set(v___x_2336_, 1, v___x_2333_);
lean_ctor_set(v___x_2336_, 2, v___x_2334_);
lean_ctor_set(v___x_2336_, 3, v___x_2335_);
v___x_2337_ = l_IO_Promise_result_x21___redArg(v___x_2116_);
lean_inc_ref(v___x_2337_);
lean_inc_n(v___y_2301_, 3);
v___x_2338_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2338_, 0, v___x_2332_);
lean_ctor_set(v___x_2338_, 1, v___y_2301_);
lean_ctor_set(v___x_2338_, 2, v___x_2324_);
lean_ctor_set(v___x_2338_, 3, v___x_2337_);
v___x_2339_ = l_IO_Promise_result_x21___redArg(v___x_2117_);
lean_inc_ref(v___x_2339_);
v___x_2340_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2340_, 0, v___x_2332_);
lean_ctor_set(v___x_2340_, 1, v___y_2301_);
lean_ctor_set(v___x_2340_, 2, v___x_2324_);
lean_ctor_set(v___x_2340_, 3, v___x_2339_);
v___x_2341_ = l_IO_Promise_result_x21___redArg(v___x_2118_);
v___x_2342_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2342_, 0, v___x_2324_);
lean_ctor_set(v___x_2342_, 1, v___y_2301_);
lean_ctor_set(v___x_2342_, 2, v___x_2324_);
lean_ctor_set(v___x_2342_, 3, v___x_2341_);
lean_inc_ref(v___x_2331_);
v___x_2343_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2343_, 0, v___x_2331_);
lean_ctor_set(v___x_2343_, 1, v___x_2336_);
lean_ctor_set(v___x_2343_, 2, v___x_2338_);
lean_ctor_set(v___x_2343_, 3, v___x_2340_);
lean_ctor_set(v___x_2343_, 4, v___x_2342_);
v___x_2344_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2344_, 0, v___x_2329_);
lean_ctor_set(v___x_2344_, 1, v___y_2303_);
lean_ctor_set(v___x_2344_, 2, v___y_2302_);
lean_ctor_set(v___x_2344_, 3, v___x_2343_);
lean_ctor_set(v___x_2344_, 4, v___y_2304_);
v___x_2345_ = lean_io_promise_resolve(v___x_2344_, v_prom_2111_);
if (lean_obj_tag(v_old_x3f_2112_) == 0)
{
v___y_2250_ = v___x_2306_;
v___y_2251_ = v___x_2335_;
v___y_2252_ = v___x_2327_;
v___y_2253_ = v___x_2314_;
v___y_2254_ = v___x_2328_;
v___y_2255_ = v___x_2324_;
v___y_2256_ = v___x_2332_;
v___y_2257_ = v___x_2325_;
v___y_2258_ = v___x_2324_;
v___y_2259_ = v___x_2333_;
v___y_2260_ = v___x_2331_;
v___y_2261_ = v___x_2323_;
v___y_2262_ = v___x_2324_;
v___y_2263_ = v___x_2337_;
v___y_2264_ = v___y_2300_;
v___y_2265_ = v___x_2339_;
v___y_2266_ = v___y_2301_;
v___y_2267_ = v___x_2324_;
goto v___jp_2249_;
}
else
{
lean_object* v_val_2346_; lean_object* v___x_2348_; uint8_t v_isShared_2349_; uint8_t v_isSharedCheck_2357_; 
v_val_2346_ = lean_ctor_get(v_old_x3f_2112_, 0);
v_isSharedCheck_2357_ = !lean_is_exclusive(v_old_x3f_2112_);
if (v_isSharedCheck_2357_ == 0)
{
v___x_2348_ = v_old_x3f_2112_;
v_isShared_2349_ = v_isSharedCheck_2357_;
goto v_resetjp_2347_;
}
else
{
lean_inc(v_val_2346_);
lean_dec(v_old_x3f_2112_);
v___x_2348_ = lean_box(0);
v_isShared_2349_ = v_isSharedCheck_2357_;
goto v_resetjp_2347_;
}
v_resetjp_2347_:
{
lean_object* v_elabSnap_2350_; lean_object* v_stx_2351_; lean_object* v_elabSnap_2352_; lean_object* v___x_2353_; lean_object* v___x_2355_; 
v_elabSnap_2350_ = lean_ctor_get(v_val_2346_, 3);
lean_inc_ref(v_elabSnap_2350_);
v_stx_2351_ = lean_ctor_get(v_val_2346_, 1);
lean_inc(v_stx_2351_);
lean_dec(v_val_2346_);
v_elabSnap_2352_ = lean_ctor_get(v_elabSnap_2350_, 1);
lean_inc_ref(v_elabSnap_2352_);
lean_dec_ref(v_elabSnap_2350_);
v___x_2353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2353_, 0, v_stx_2351_);
lean_ctor_set(v___x_2353_, 1, v_elabSnap_2352_);
if (v_isShared_2349_ == 0)
{
lean_ctor_set(v___x_2348_, 0, v___x_2353_);
v___x_2355_ = v___x_2348_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v___x_2353_);
v___x_2355_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2354_;
}
v_reusejp_2354_:
{
v___y_2250_ = v___x_2306_;
v___y_2251_ = v___x_2335_;
v___y_2252_ = v___x_2327_;
v___y_2253_ = v___x_2314_;
v___y_2254_ = v___x_2328_;
v___y_2255_ = v___x_2324_;
v___y_2256_ = v___x_2332_;
v___y_2257_ = v___x_2325_;
v___y_2258_ = v___x_2324_;
v___y_2259_ = v___x_2333_;
v___y_2260_ = v___x_2331_;
v___y_2261_ = v___x_2323_;
v___y_2262_ = v___x_2324_;
v___y_2263_ = v___x_2337_;
v___y_2264_ = v___y_2300_;
v___y_2265_ = v___x_2339_;
v___y_2266_ = v___y_2301_;
v___y_2267_ = v___x_2355_;
goto v___jp_2249_;
}
}
}
}
v___jp_2358_:
{
lean_object* v___x_2362_; uint8_t v___x_2363_; 
v___x_2362_ = l_Lean_Language_SnapshotTask_ReportingRange_ofOptionInheriting(v___y_2361_);
lean_inc(v_fst_2096_);
v___x_2363_ = l_Lean_Parser_isTerminalCommand(v_fst_2096_);
if (v___x_2363_ == 0)
{
lean_object* v___x_2364_; lean_object* v_toProcessingContext_2365_; lean_object* v_pos_2366_; lean_object* v_endPos_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; 
v___x_2364_ = lean_io_promise_new();
v_toProcessingContext_2365_ = lean_ctor_get(v___y_2099_, 0);
v_pos_2366_ = lean_ctor_get(v_fst_2097_, 0);
v_endPos_2367_ = lean_ctor_get(v_toProcessingContext_2365_, 3);
lean_inc(v___x_2364_);
v___x_2368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2368_, 0, v___x_2364_);
v___x_2369_ = lean_box(0);
lean_inc(v_endPos_2367_);
lean_inc(v_pos_2366_);
v___x_2370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2370_, 0, v_pos_2366_);
lean_ctor_set(v___x_2370_, 1, v_endPos_2367_);
v___x_2371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2371_, 0, v___x_2370_);
v___x_2372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2372_, 0, v_parseCancelTk_2113_);
v___x_2373_ = l_IO_Promise_result_x21___redArg(v___x_2364_);
lean_dec(v___x_2364_);
v___x_2374_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2374_, 0, v___x_2369_);
lean_ctor_set(v___x_2374_, 1, v___x_2371_);
lean_ctor_set(v___x_2374_, 2, v___x_2372_);
lean_ctor_set(v___x_2374_, 3, v___x_2373_);
v___x_2375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2375_, 0, v___x_2374_);
v___y_2300_ = v___x_2368_;
v___y_2301_ = v___x_2362_;
v___y_2302_ = v___y_2359_;
v___y_2303_ = v___y_2360_;
v___y_2304_ = v___x_2375_;
goto v___jp_2299_;
}
else
{
lean_object* v___x_2376_; 
lean_dec_ref(v_parseCancelTk_2113_);
v___x_2376_ = lean_box(0);
v___y_2300_ = v___x_2376_;
v___y_2301_ = v___x_2362_;
v___y_2302_ = v___y_2359_;
v___y_2303_ = v___y_2360_;
v___y_2304_ = v___x_2376_;
goto v___jp_2299_;
}
}
v___jp_2377_:
{
lean_object* v___x_2380_; 
lean_inc(v_fst_2096_);
v___x_2380_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f(v_fst_2096_);
if (lean_obj_tag(v___x_2380_) == 0)
{
lean_object* v___x_2381_; 
v___x_2381_ = lean_box(0);
v___y_2359_ = v_snd_2379_;
v___y_2360_ = v_fst_2378_;
v___y_2361_ = v___x_2381_;
goto v___jp_2358_;
}
else
{
lean_object* v_val_2382_; lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2390_; 
v_val_2382_ = lean_ctor_get(v___x_2380_, 0);
v_isSharedCheck_2390_ = !lean_is_exclusive(v___x_2380_);
if (v_isSharedCheck_2390_ == 0)
{
v___x_2384_ = v___x_2380_;
v_isShared_2385_ = v_isSharedCheck_2390_;
goto v_resetjp_2383_;
}
else
{
lean_inc(v_val_2382_);
lean_dec(v___x_2380_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2390_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
lean_object* v___x_2386_; lean_object* v___x_2388_; 
lean_inc(v_val_2382_);
v___x_2386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2386_, 0, v_val_2382_);
lean_ctor_set(v___x_2386_, 1, v_val_2382_);
if (v_isShared_2385_ == 0)
{
lean_ctor_set(v___x_2384_, 0, v___x_2386_);
v___x_2388_ = v___x_2384_;
goto v_reusejp_2387_;
}
else
{
lean_object* v_reuseFailAlloc_2389_; 
v_reuseFailAlloc_2389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2389_, 0, v___x_2386_);
v___x_2388_ = v_reuseFailAlloc_2389_;
goto v_reusejp_2387_;
}
v_reusejp_2387_:
{
v___y_2359_ = v_snd_2379_;
v___y_2360_ = v_fst_2378_;
v___y_2361_ = v___x_2388_;
goto v___jp_2358_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__8___boxed(lean_object** _args){
lean_object* v_cmds_2395_ = _args[0];
lean_object* v_fst_2396_ = _args[1];
lean_object* v_fst_2397_ = _args[2];
lean_object* v_val_2398_ = _args[3];
lean_object* v___y_2399_ = _args[4];
lean_object* v_snd_2400_ = _args[5];
lean_object* v___x_2401_ = _args[6];
lean_object* v___x_2402_ = _args[7];
lean_object* v___x_2403_ = _args[8];
lean_object* v___f_2404_ = _args[9];
lean_object* v___f_2405_ = _args[10];
lean_object* v___f_2406_ = _args[11];
lean_object* v_pos_2407_ = _args[12];
lean_object* v_cmdState_2408_ = _args[13];
lean_object* v___x_2409_ = _args[14];
lean_object* v_opts_2410_ = _args[15];
lean_object* v_prom_2411_ = _args[16];
lean_object* v_old_x3f_2412_ = _args[17];
lean_object* v_parseCancelTk_2413_ = _args[18];
lean_object* v___y_2414_ = _args[19];
_start:
{
uint8_t v_val_36414__boxed_2415_; uint8_t v___x_36418__boxed_2416_; lean_object* v_res_2417_; 
v_val_36414__boxed_2415_ = lean_unbox(v_val_2398_);
v___x_36418__boxed_2416_ = lean_unbox(v___x_2402_);
v_res_2417_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__8(v_cmds_2395_, v_fst_2396_, v_fst_2397_, v_val_36414__boxed_2415_, v___y_2399_, v_snd_2400_, v___x_2401_, v___x_36418__boxed_2416_, v___x_2403_, v___f_2404_, v___f_2405_, v___f_2406_, v_pos_2407_, v_cmdState_2408_, v___x_2409_, v_opts_2410_, v_prom_2411_, v_old_x3f_2412_, v_parseCancelTk_2413_);
lean_dec(v_prom_2411_);
lean_dec_ref(v_opts_2410_);
lean_dec_ref(v___y_2399_);
return v_res_2417_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(lean_object* v_old_x3f_2420_, lean_object* v_parserState_2421_, lean_object* v_cmdState_2422_, lean_object* v_prom_2423_, uint8_t v_sync_2424_, lean_object* v_parseCancelTk_2425_, lean_object* v_cmds_2426_, lean_object* v___y_2427_){
_start:
{
lean_object* v___y_2432_; lean_object* v_toSnapshot_2434_; lean_object* v_stx_2435_; lean_object* v_parserState_2436_; lean_object* v_elabSnap_2437_; lean_object* v_val_2438_; lean_object* v_newParserState_2439_; lean_object* v___f_2470_; lean_object* v___f_2471_; lean_object* v___f_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___y_2476_; lean_object* v___y_2477_; lean_object* v___y_2478_; lean_object* v___y_2479_; lean_object* v___y_2480_; lean_object* v___y_2481_; lean_object* v___y_2482_; uint8_t v___y_2483_; lean_object* v___y_2484_; lean_object* v___y_2485_; lean_object* v___y_2486_; lean_object* v___y_2487_; lean_object* v___y_2488_; uint8_t v___y_2489_; lean_object* v___y_2490_; lean_object* v___y_2491_; lean_object* v___y_2492_; lean_object* v___y_2501_; lean_object* v___y_2502_; lean_object* v___y_2503_; lean_object* v___y_2504_; lean_object* v___y_2505_; lean_object* v___y_2506_; uint8_t v___y_2507_; lean_object* v___y_2508_; lean_object* v___y_2509_; lean_object* v___y_2510_; lean_object* v___y_2511_; uint8_t v___y_2512_; lean_object* v___y_2513_; lean_object* v___y_2514_; lean_object* v_fst_2515_; lean_object* v_snd_2516_; lean_object* v___y_2529_; uint8_t v___y_2530_; lean_object* v___y_2531_; lean_object* v___y_2565_; uint8_t v___y_2566_; lean_object* v___y_2567_; lean_object* v___y_2568_; lean_object* v___y_2570_; lean_object* v___y_2571_; lean_object* v___y_2572_; lean_object* v___y_2573_; lean_object* v___y_2574_; lean_object* v___y_2575_; lean_object* v___y_2576_; lean_object* v___y_2577_; lean_object* v___y_2578_; lean_object* v___y_2579_; lean_object* v___x_2610_; 
v___f_2470_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__0));
v___f_2471_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__1));
v___f_2472_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__2));
v___x_2473_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2474_ = l_Lean_Elab_instInhabitedInfoTree_default;
v___x_2610_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__5));
if (lean_obj_tag(v_old_x3f_2420_) == 1)
{
lean_object* v_val_2643_; lean_object* v_nextCmdSnap_x3f_2644_; 
v_val_2643_ = lean_ctor_get(v_old_x3f_2420_, 0);
v_nextCmdSnap_x3f_2644_ = lean_ctor_get(v_val_2643_, 4);
if (lean_obj_tag(v_nextCmdSnap_x3f_2644_) == 0)
{
goto v___jp_2611_;
}
else
{
lean_object* v_toSnapshot_2645_; lean_object* v_stx_2646_; lean_object* v_parserState_2647_; lean_object* v_elabSnap_2648_; lean_object* v_val_2649_; lean_object* v___x_2650_; 
v_toSnapshot_2645_ = lean_ctor_get(v_val_2643_, 0);
v_stx_2646_ = lean_ctor_get(v_val_2643_, 1);
v_parserState_2647_ = lean_ctor_get(v_val_2643_, 2);
v_elabSnap_2648_ = lean_ctor_get(v_val_2643_, 3);
v_val_2649_ = lean_ctor_get(v_nextCmdSnap_x3f_2644_, 0);
lean_inc(v_val_2649_);
v___x_2650_ = l_Lean_Language_SnapshotTask_get_x3f___redArg(v_val_2649_);
if (lean_obj_tag(v___x_2650_) == 1)
{
lean_object* v_val_2651_; lean_object* v_nextCmdSnap_x3f_2652_; 
v_val_2651_ = lean_ctor_get(v___x_2650_, 0);
lean_inc(v_val_2651_);
lean_dec_ref_known(v___x_2650_, 1);
v_nextCmdSnap_x3f_2652_ = lean_ctor_get(v_val_2651_, 4);
lean_inc(v_nextCmdSnap_x3f_2652_);
lean_dec(v_val_2651_);
if (lean_obj_tag(v_nextCmdSnap_x3f_2652_) == 0)
{
goto v___jp_2611_;
}
else
{
lean_object* v_val_2653_; lean_object* v___x_2654_; 
v_val_2653_ = lean_ctor_get(v_nextCmdSnap_x3f_2652_, 0);
lean_inc(v_val_2653_);
lean_dec_ref_known(v_nextCmdSnap_x3f_2652_, 1);
v___x_2654_ = l_Lean_Language_SnapshotTask_get_x3f___redArg(v_val_2653_);
if (lean_obj_tag(v___x_2654_) == 1)
{
lean_object* v_val_2655_; lean_object* v_parserState_2656_; lean_object* v_pos_2657_; uint8_t v___x_2658_; 
v_val_2655_ = lean_ctor_get(v___x_2654_, 0);
lean_inc(v_val_2655_);
lean_dec_ref_known(v___x_2654_, 1);
v_parserState_2656_ = lean_ctor_get(v_val_2655_, 2);
lean_inc_ref(v_parserState_2656_);
lean_dec(v_val_2655_);
v_pos_2657_ = lean_ctor_get(v_parserState_2656_, 0);
lean_inc(v_pos_2657_);
lean_dec_ref(v_parserState_2656_);
v___x_2658_ = l_Lean_Language_Lean_isBeforeEditPos(v_pos_2657_, v___y_2427_);
lean_dec(v_pos_2657_);
if (v___x_2658_ == 0)
{
goto v___jp_2611_;
}
else
{
lean_inc(v_val_2649_);
lean_inc_ref(v_elabSnap_2648_);
lean_inc_ref_n(v_parserState_2647_, 2);
lean_inc(v_stx_2646_);
lean_inc_ref(v_toSnapshot_2645_);
lean_dec_ref_known(v_old_x3f_2420_, 1);
lean_dec_ref(v_parseCancelTk_2425_);
lean_dec_ref(v_cmdState_2422_);
lean_dec_ref(v_parserState_2421_);
v_toSnapshot_2434_ = v_toSnapshot_2645_;
v_stx_2435_ = v_stx_2646_;
v_parserState_2436_ = v_parserState_2647_;
v_elabSnap_2437_ = v_elabSnap_2648_;
v_val_2438_ = v_val_2649_;
v_newParserState_2439_ = v_parserState_2647_;
goto v___jp_2433_;
}
}
else
{
lean_dec(v___x_2654_);
goto v___jp_2611_;
}
}
}
else
{
lean_dec(v___x_2650_);
goto v___jp_2611_;
}
}
}
else
{
goto v___jp_2611_;
}
v___jp_2429_:
{
lean_object* v___x_2430_; 
v___x_2430_ = lean_box(0);
return v___x_2430_;
}
v___jp_2431_:
{
goto v___jp_2429_;
}
v___jp_2433_:
{
lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v_resultSnap_2442_; lean_object* v_task_2443_; lean_object* v___x_2445_; uint8_t v_isShared_2446_; uint8_t v_isSharedCheck_2466_; 
v___x_2440_ = lean_io_promise_new();
v___x_2441_ = l_IO_CancelToken_new();
v_resultSnap_2442_ = lean_ctor_get(v_elabSnap_2437_, 2);
lean_inc_ref(v_resultSnap_2442_);
v_task_2443_ = lean_ctor_get(v_resultSnap_2442_, 3);
v_isSharedCheck_2466_ = !lean_is_exclusive(v_resultSnap_2442_);
if (v_isSharedCheck_2466_ == 0)
{
lean_object* v_unused_2467_; lean_object* v_unused_2468_; lean_object* v_unused_2469_; 
v_unused_2467_ = lean_ctor_get(v_resultSnap_2442_, 2);
lean_dec(v_unused_2467_);
v_unused_2468_ = lean_ctor_get(v_resultSnap_2442_, 1);
lean_dec(v_unused_2468_);
v_unused_2469_ = lean_ctor_get(v_resultSnap_2442_, 0);
lean_dec(v_unused_2469_);
v___x_2445_ = v_resultSnap_2442_;
v_isShared_2446_ = v_isSharedCheck_2466_;
goto v_resetjp_2444_;
}
else
{
lean_inc(v_task_2443_);
lean_dec(v_resultSnap_2442_);
v___x_2445_ = lean_box(0);
v_isShared_2446_ = v_isSharedCheck_2466_;
goto v_resetjp_2444_;
}
v_resetjp_2444_:
{
lean_object* v___x_2447_; lean_object* v___f_2448_; lean_object* v___x_2449_; uint8_t v___x_2450_; lean_object* v___x_2451_; lean_object* v_toProcessingContext_2452_; lean_object* v_pos_2453_; lean_object* v_endPos_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2461_; 
v___x_2447_ = lean_box(v_sync_2424_);
lean_inc_ref(v___y_2427_);
lean_inc_ref(v___x_2441_);
lean_inc(v___x_2440_);
lean_inc_ref(v_newParserState_2439_);
lean_inc(v_stx_2435_);
v___f_2448_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__1___boxed), 10, 8);
lean_closure_set(v___f_2448_, 0, v_val_2438_);
lean_closure_set(v___f_2448_, 1, v_cmds_2426_);
lean_closure_set(v___f_2448_, 2, v_stx_2435_);
lean_closure_set(v___f_2448_, 3, v_newParserState_2439_);
lean_closure_set(v___f_2448_, 4, v___x_2440_);
lean_closure_set(v___f_2448_, 5, v___x_2447_);
lean_closure_set(v___f_2448_, 6, v___x_2441_);
lean_closure_set(v___f_2448_, 7, v___y_2427_);
v___x_2449_ = lean_unsigned_to_nat(0u);
v___x_2450_ = 1;
v___x_2451_ = l_BaseIO_chainTask___redArg(v_task_2443_, v___f_2448_, v___x_2449_, v___x_2450_);
v_toProcessingContext_2452_ = lean_ctor_get(v___y_2427_, 0);
v_pos_2453_ = lean_ctor_get(v_newParserState_2439_, 0);
lean_inc(v_pos_2453_);
lean_dec_ref(v_newParserState_2439_);
v_endPos_2454_ = lean_ctor_get(v_toProcessingContext_2452_, 3);
v___x_2455_ = lean_box(0);
lean_inc(v_endPos_2454_);
v___x_2456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2456_, 0, v_pos_2453_);
lean_ctor_set(v___x_2456_, 1, v_endPos_2454_);
v___x_2457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2457_, 0, v___x_2456_);
v___x_2458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2458_, 0, v___x_2441_);
v___x_2459_ = l_IO_Promise_result_x21___redArg(v___x_2440_);
lean_dec(v___x_2440_);
if (v_isShared_2446_ == 0)
{
lean_ctor_set(v___x_2445_, 3, v___x_2459_);
lean_ctor_set(v___x_2445_, 2, v___x_2458_);
lean_ctor_set(v___x_2445_, 1, v___x_2457_);
lean_ctor_set(v___x_2445_, 0, v___x_2455_);
v___x_2461_ = v___x_2445_;
goto v_reusejp_2460_;
}
else
{
lean_object* v_reuseFailAlloc_2465_; 
v_reuseFailAlloc_2465_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2465_, 0, v___x_2455_);
lean_ctor_set(v_reuseFailAlloc_2465_, 1, v___x_2457_);
lean_ctor_set(v_reuseFailAlloc_2465_, 2, v___x_2458_);
lean_ctor_set(v_reuseFailAlloc_2465_, 3, v___x_2459_);
v___x_2461_ = v_reuseFailAlloc_2465_;
goto v_reusejp_2460_;
}
v_reusejp_2460_:
{
lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; 
v___x_2462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2462_, 0, v___x_2461_);
v___x_2463_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2463_, 0, v_toSnapshot_2434_);
lean_ctor_set(v___x_2463_, 1, v_stx_2435_);
lean_ctor_set(v___x_2463_, 2, v_parserState_2436_);
lean_ctor_set(v___x_2463_, 3, v_elabSnap_2437_);
lean_ctor_set(v___x_2463_, 4, v___x_2462_);
v___x_2464_ = lean_io_promise_resolve(v___x_2463_, v_prom_2423_);
lean_dec(v_prom_2423_);
return v___x_2464_;
}
}
}
v___jp_2475_:
{
lean_object* v___x_2493_; uint8_t v___x_2494_; 
v___x_2493_ = l_Lean_Language_SnapshotTask_ReportingRange_ofOptionInheriting(v___y_2492_);
v___x_2494_ = l_Lean_Parser_isTerminalCommand(v___y_2490_);
if (v___x_2494_ == 0)
{
lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; 
v___x_2495_ = lean_io_promise_new();
v___x_2496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2496_, 0, v___x_2495_);
v___x_2497_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5(v___x_2493_, v___y_2487_, v_cmds_2426_, v___y_2488_, v___y_2482_, v___y_2483_, v___y_2427_, v___y_2481_, v___y_2491_, v___y_2489_, v___y_2484_, v___y_2478_, v___y_2479_, v___x_2473_, v___f_2472_, v___f_2471_, v___f_2470_, v___y_2486_, v_cmdState_2422_, v___y_2477_, v___x_2474_, v___y_2480_, v___y_2485_, v___y_2476_, v_prom_2423_, v_old_x3f_2420_, v_parseCancelTk_2425_, v___x_2496_);
lean_dec(v_prom_2423_);
lean_dec_ref(v___y_2480_);
lean_dec(v___y_2479_);
lean_dec(v___y_2487_);
v___y_2432_ = v___x_2497_;
goto v___jp_2431_;
}
else
{
lean_object* v___x_2498_; lean_object* v___x_2499_; 
v___x_2498_ = lean_box(0);
v___x_2499_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5(v___x_2493_, v___y_2487_, v_cmds_2426_, v___y_2488_, v___y_2482_, v___y_2483_, v___y_2427_, v___y_2481_, v___y_2491_, v___y_2489_, v___y_2484_, v___y_2478_, v___y_2479_, v___x_2473_, v___f_2472_, v___f_2471_, v___f_2470_, v___y_2486_, v_cmdState_2422_, v___y_2477_, v___x_2474_, v___y_2480_, v___y_2485_, v___y_2476_, v_prom_2423_, v_old_x3f_2420_, v_parseCancelTk_2425_, v___x_2498_);
lean_dec(v_prom_2423_);
lean_dec_ref(v___y_2480_);
lean_dec(v___y_2479_);
lean_dec(v___y_2487_);
v___y_2432_ = v___x_2499_;
goto v___jp_2431_;
}
}
v___jp_2500_:
{
lean_object* v___x_2517_; 
lean_inc(v___y_2514_);
v___x_2517_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f(v___y_2514_);
if (lean_obj_tag(v___x_2517_) == 0)
{
lean_object* v___x_2518_; 
v___x_2518_ = lean_box(0);
v___y_2476_ = v_snd_2516_;
v___y_2477_ = v___y_2501_;
v___y_2478_ = v___y_2502_;
v___y_2479_ = v___y_2503_;
v___y_2480_ = v___y_2504_;
v___y_2481_ = v___y_2505_;
v___y_2482_ = v___y_2506_;
v___y_2483_ = v___y_2507_;
v___y_2484_ = v_fst_2515_;
v___y_2485_ = v___y_2508_;
v___y_2486_ = v___y_2509_;
v___y_2487_ = v___y_2510_;
v___y_2488_ = v___y_2511_;
v___y_2489_ = v___y_2512_;
v___y_2490_ = v___y_2514_;
v___y_2491_ = v___y_2513_;
v___y_2492_ = v___x_2518_;
goto v___jp_2475_;
}
else
{
lean_object* v_val_2519_; lean_object* v___x_2521_; uint8_t v_isShared_2522_; uint8_t v_isSharedCheck_2527_; 
v_val_2519_ = lean_ctor_get(v___x_2517_, 0);
v_isSharedCheck_2527_ = !lean_is_exclusive(v___x_2517_);
if (v_isSharedCheck_2527_ == 0)
{
v___x_2521_ = v___x_2517_;
v_isShared_2522_ = v_isSharedCheck_2527_;
goto v_resetjp_2520_;
}
else
{
lean_inc(v_val_2519_);
lean_dec(v___x_2517_);
v___x_2521_ = lean_box(0);
v_isShared_2522_ = v_isSharedCheck_2527_;
goto v_resetjp_2520_;
}
v_resetjp_2520_:
{
lean_object* v___x_2523_; lean_object* v___x_2525_; 
lean_inc(v_val_2519_);
v___x_2523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2523_, 0, v_val_2519_);
lean_ctor_set(v___x_2523_, 1, v_val_2519_);
if (v_isShared_2522_ == 0)
{
lean_ctor_set(v___x_2521_, 0, v___x_2523_);
v___x_2525_ = v___x_2521_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v___x_2523_);
v___x_2525_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
v___y_2476_ = v_snd_2516_;
v___y_2477_ = v___y_2501_;
v___y_2478_ = v___y_2502_;
v___y_2479_ = v___y_2503_;
v___y_2480_ = v___y_2504_;
v___y_2481_ = v___y_2505_;
v___y_2482_ = v___y_2506_;
v___y_2483_ = v___y_2507_;
v___y_2484_ = v_fst_2515_;
v___y_2485_ = v___y_2508_;
v___y_2486_ = v___y_2509_;
v___y_2487_ = v___y_2510_;
v___y_2488_ = v___y_2511_;
v___y_2489_ = v___y_2512_;
v___y_2490_ = v___y_2514_;
v___y_2491_ = v___y_2513_;
v___y_2492_ = v___x_2525_;
goto v___jp_2475_;
}
}
}
}
v___jp_2528_:
{
lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; uint8_t v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; 
v___x_2532_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0));
v___x_2533_ = l_Lean_Name_str___override(v___y_2531_, v___x_2532_);
v___x_2534_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2));
v___x_2535_ = l_Lean_Name_str___override(v___x_2533_, v___x_2534_);
v___x_2536_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4));
v___x_2537_ = l_Lean_Name_str___override(v___x_2535_, v___x_2536_);
v___x_2538_ = l_Lean_Name_str___override(v___x_2537_, v___x_2534_);
v___x_2539_ = lean_unsigned_to_nat(0u);
v___x_2540_ = l_Lean_Name_num___override(v___x_2538_, v___x_2539_);
v___x_2541_ = l_Lean_Name_str___override(v___x_2540_, v___x_2534_);
v___x_2542_ = l_Lean_Name_str___override(v___x_2541_, v___x_2536_);
v___x_2543_ = l_Lean_Name_str___override(v___x_2542_, v___x_2534_);
v___x_2544_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0));
v___x_2545_ = l_Lean_Name_str___override(v___x_2543_, v___x_2544_);
v___x_2546_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__4));
v___x_2547_ = l_Lean_Name_str___override(v___x_2545_, v___x_2546_);
v___x_2548_ = l_Lean_Name_toString(v___x_2547_, v___y_2530_);
v___x_2549_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_2550_ = lean_box(0);
v___x_2551_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_2552_ = 0;
v___x_2553_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2553_, 0, v___x_2548_);
lean_ctor_set(v___x_2553_, 1, v___x_2549_);
lean_ctor_set(v___x_2553_, 2, v___x_2550_);
lean_ctor_set(v___x_2553_, 3, v___x_2551_);
lean_ctor_set_uint8(v___x_2553_, sizeof(void*)*4, v___x_2552_);
v___x_2554_ = lean_box(0);
v___x_2555_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3);
lean_inc_ref_n(v___x_2553_, 3);
v___x_2556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2556_, 0, v___x_2553_);
lean_ctor_set(v___x_2556_, 1, v_cmdState_2422_);
v___x_2557_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_2550_, v___x_2556_);
v___x_2558_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_2550_, v___x_2553_);
v___x_2559_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4);
v___x_2560_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2560_, 0, v___x_2553_);
lean_ctor_set(v___x_2560_, 1, v___x_2555_);
lean_ctor_set(v___x_2560_, 2, v___x_2557_);
lean_ctor_set(v___x_2560_, 3, v___x_2558_);
lean_ctor_set(v___x_2560_, 4, v___x_2559_);
v___x_2561_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2561_, 0, v___x_2553_);
lean_ctor_set(v___x_2561_, 1, v___x_2554_);
lean_ctor_set(v___x_2561_, 2, v___y_2529_);
lean_ctor_set(v___x_2561_, 3, v___x_2560_);
lean_ctor_set(v___x_2561_, 4, v___x_2550_);
v___x_2562_ = lean_io_promise_resolve(v___x_2561_, v_prom_2423_);
lean_dec(v_prom_2423_);
v___x_2563_ = lean_box(0);
return v___x_2563_;
}
v___jp_2564_:
{
v___y_2529_ = v___y_2565_;
v___y_2530_ = v___y_2566_;
v___y_2531_ = v___y_2567_;
goto v___jp_2528_;
}
v___jp_2569_:
{
uint8_t v___x_2580_; uint8_t v___x_2581_; 
v___x_2580_ = l_IO_CancelToken_isSet(v_parseCancelTk_2425_);
v___x_2581_ = 1;
if (v___x_2580_ == 0)
{
lean_dec(v___y_2579_);
if (v_sync_2424_ == 0)
{
lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; uint8_t v___x_2587_; 
v___x_2582_ = lean_io_promise_new();
v___x_2583_ = lean_io_promise_new();
v___x_2584_ = lean_io_promise_new();
v___x_2585_ = lean_io_promise_new();
v___x_2586_ = l_Lean_internal_cmdlineSnapshots;
v___x_2587_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v___y_2578_, v___x_2586_);
lean_dec_ref(v___y_2578_);
if (v___x_2587_ == 0)
{
lean_inc(v___y_2577_);
v___y_2501_ = v___x_2584_;
v___y_2502_ = v___x_2582_;
v___y_2503_ = v___x_2583_;
v___y_2504_ = v___y_2573_;
v___y_2505_ = v___y_2575_;
v___y_2506_ = v___y_2570_;
v___y_2507_ = v___x_2580_;
v___y_2508_ = v___x_2586_;
v___y_2509_ = v___y_2571_;
v___y_2510_ = v___x_2585_;
v___y_2511_ = v___y_2572_;
v___y_2512_ = v___x_2581_;
v___y_2513_ = v___y_2574_;
v___y_2514_ = v___y_2577_;
v_fst_2515_ = v___y_2577_;
v_snd_2516_ = v___y_2576_;
goto v___jp_2500_;
}
else
{
uint8_t v___x_2588_; 
lean_inc(v___y_2577_);
v___x_2588_ = l_Lean_Parser_isTerminalCommand(v___y_2577_);
if (v___x_2588_ == 0)
{
if (v___x_2587_ == 0)
{
lean_inc(v___y_2577_);
v___y_2501_ = v___x_2584_;
v___y_2502_ = v___x_2582_;
v___y_2503_ = v___x_2583_;
v___y_2504_ = v___y_2573_;
v___y_2505_ = v___y_2575_;
v___y_2506_ = v___y_2570_;
v___y_2507_ = v___x_2580_;
v___y_2508_ = v___x_2586_;
v___y_2509_ = v___y_2571_;
v___y_2510_ = v___x_2585_;
v___y_2511_ = v___y_2572_;
v___y_2512_ = v___x_2581_;
v___y_2513_ = v___y_2574_;
v___y_2514_ = v___y_2577_;
v_fst_2515_ = v___y_2577_;
v_snd_2516_ = v___y_2576_;
goto v___jp_2500_;
}
else
{
lean_object* v___x_2589_; lean_object* v___x_2590_; 
lean_dec_ref(v___y_2576_);
v___x_2589_ = lean_box(0);
v___x_2590_ = l_Lean_Parser_instInhabitedModuleParserState_default;
v___y_2501_ = v___x_2584_;
v___y_2502_ = v___x_2582_;
v___y_2503_ = v___x_2583_;
v___y_2504_ = v___y_2573_;
v___y_2505_ = v___y_2575_;
v___y_2506_ = v___y_2570_;
v___y_2507_ = v___x_2580_;
v___y_2508_ = v___x_2586_;
v___y_2509_ = v___y_2571_;
v___y_2510_ = v___x_2585_;
v___y_2511_ = v___y_2572_;
v___y_2512_ = v___x_2581_;
v___y_2513_ = v___y_2574_;
v___y_2514_ = v___y_2577_;
v_fst_2515_ = v___x_2589_;
v_snd_2516_ = v___x_2590_;
goto v___jp_2500_;
}
}
else
{
lean_inc(v___y_2577_);
v___y_2501_ = v___x_2584_;
v___y_2502_ = v___x_2582_;
v___y_2503_ = v___x_2583_;
v___y_2504_ = v___y_2573_;
v___y_2505_ = v___y_2575_;
v___y_2506_ = v___y_2570_;
v___y_2507_ = v___x_2580_;
v___y_2508_ = v___x_2586_;
v___y_2509_ = v___y_2571_;
v___y_2510_ = v___x_2585_;
v___y_2511_ = v___y_2572_;
v___y_2512_ = v___x_2581_;
v___y_2513_ = v___y_2574_;
v___y_2514_ = v___y_2577_;
v_fst_2515_ = v___y_2577_;
v_snd_2516_ = v___y_2576_;
goto v___jp_2500_;
}
}
}
else
{
lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___f_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; 
lean_dec_ref(v___y_2578_);
lean_dec(v___y_2577_);
lean_dec_ref(v___y_2576_);
v___x_2591_ = lean_box(v___x_2580_);
v___x_2592_ = lean_box(v___x_2581_);
lean_inc_ref(v___y_2427_);
v___f_2593_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__8___boxed), 20, 19);
lean_closure_set(v___f_2593_, 0, v_cmds_2426_);
lean_closure_set(v___f_2593_, 1, v___y_2572_);
lean_closure_set(v___f_2593_, 2, v___y_2570_);
lean_closure_set(v___f_2593_, 3, v___x_2591_);
lean_closure_set(v___f_2593_, 4, v___y_2427_);
lean_closure_set(v___f_2593_, 5, v___y_2575_);
lean_closure_set(v___f_2593_, 6, v___y_2574_);
lean_closure_set(v___f_2593_, 7, v___x_2592_);
lean_closure_set(v___f_2593_, 8, v___x_2473_);
lean_closure_set(v___f_2593_, 9, v___f_2472_);
lean_closure_set(v___f_2593_, 10, v___f_2471_);
lean_closure_set(v___f_2593_, 11, v___f_2470_);
lean_closure_set(v___f_2593_, 12, v___y_2571_);
lean_closure_set(v___f_2593_, 13, v_cmdState_2422_);
lean_closure_set(v___f_2593_, 14, v___x_2474_);
lean_closure_set(v___f_2593_, 15, v___y_2573_);
lean_closure_set(v___f_2593_, 16, v_prom_2423_);
lean_closure_set(v___f_2593_, 17, v_old_x3f_2420_);
lean_closure_set(v___f_2593_, 18, v_parseCancelTk_2425_);
v___x_2594_ = lean_unsigned_to_nat(0u);
v___x_2595_ = lean_io_as_task(v___f_2593_, v___x_2594_);
lean_dec_ref(v___x_2595_);
goto v___jp_2429_;
}
}
else
{
lean_dec_ref(v___y_2578_);
lean_dec(v___y_2577_);
lean_dec_ref(v___y_2575_);
lean_dec(v___y_2574_);
lean_dec_ref(v___y_2573_);
lean_dec(v___y_2572_);
lean_dec(v___y_2571_);
lean_dec_ref(v___y_2570_);
lean_dec_ref(v_cmds_2426_);
lean_dec_ref(v_parseCancelTk_2425_);
if (lean_obj_tag(v_old_x3f_2420_) == 1)
{
lean_object* v_val_2596_; lean_object* v___x_2597_; lean_object* v_children_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; uint8_t v___x_2601_; 
v_val_2596_ = lean_ctor_get(v_old_x3f_2420_, 0);
lean_inc(v_val_2596_);
lean_dec_ref_known(v_old_x3f_2420_, 1);
v___x_2597_ = l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__5(v_val_2596_);
v_children_2598_ = lean_ctor_get(v___x_2597_, 1);
lean_inc_ref(v_children_2598_);
lean_dec_ref(v___x_2597_);
v___x_2599_ = lean_unsigned_to_nat(0u);
v___x_2600_ = lean_array_get_size(v_children_2598_);
v___x_2601_ = lean_nat_dec_lt(v___x_2599_, v___x_2600_);
if (v___x_2601_ == 0)
{
lean_dec_ref(v_children_2598_);
v___y_2529_ = v___y_2576_;
v___y_2530_ = v___x_2581_;
v___y_2531_ = v___y_2579_;
goto v___jp_2528_;
}
else
{
lean_object* v___x_2602_; uint8_t v___x_2603_; 
v___x_2602_ = lean_box(0);
v___x_2603_ = lean_nat_dec_le(v___x_2600_, v___x_2600_);
if (v___x_2603_ == 0)
{
if (v___x_2601_ == 0)
{
lean_dec_ref(v_children_2598_);
v___y_2529_ = v___y_2576_;
v___y_2530_ = v___x_2581_;
v___y_2531_ = v___y_2579_;
goto v___jp_2528_;
}
else
{
size_t v___x_2604_; size_t v___x_2605_; lean_object* v___x_2606_; 
v___x_2604_ = ((size_t)0ULL);
v___x_2605_ = lean_usize_of_nat(v___x_2600_);
v___x_2606_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg(v_children_2598_, v___x_2604_, v___x_2605_, v___x_2602_);
lean_dec_ref(v_children_2598_);
v___y_2565_ = v___y_2576_;
v___y_2566_ = v___x_2581_;
v___y_2567_ = v___y_2579_;
v___y_2568_ = v___x_2606_;
goto v___jp_2564_;
}
}
else
{
size_t v___x_2607_; size_t v___x_2608_; lean_object* v___x_2609_; 
v___x_2607_ = ((size_t)0ULL);
v___x_2608_ = lean_usize_of_nat(v___x_2600_);
v___x_2609_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg(v_children_2598_, v___x_2607_, v___x_2608_, v___x_2602_);
lean_dec_ref(v_children_2598_);
v___y_2565_ = v___y_2576_;
v___y_2566_ = v___x_2581_;
v___y_2567_ = v___y_2579_;
v___y_2568_ = v___x_2609_;
goto v___jp_2564_;
}
}
}
else
{
lean_dec(v_old_x3f_2420_);
v___y_2529_ = v___y_2576_;
v___y_2530_ = v___x_2581_;
v___y_2531_ = v___y_2579_;
goto v___jp_2528_;
}
}
}
v___jp_2611_:
{
lean_object* v_env_2612_; lean_object* v_scopes_2613_; lean_object* v___x_2614_; lean_object* v_opts_2615_; lean_object* v_currNamespace_2616_; lean_object* v_openDecls_2617_; lean_object* v___x_2618_; lean_object* v___f_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v_snd_2623_; 
v_env_2612_ = lean_ctor_get(v_cmdState_2422_, 0);
v_scopes_2613_ = lean_ctor_get(v_cmdState_2422_, 2);
v___x_2614_ = l_List_head_x21___redArg(v___x_2473_, v_scopes_2613_);
v_opts_2615_ = lean_ctor_get(v___x_2614_, 1);
lean_inc_ref_n(v_opts_2615_, 2);
v_currNamespace_2616_ = lean_ctor_get(v___x_2614_, 2);
lean_inc(v_currNamespace_2616_);
v_openDecls_2617_ = lean_ctor_get(v___x_2614_, 3);
lean_inc(v_openDecls_2617_);
lean_dec(v___x_2614_);
lean_inc_ref(v_env_2612_);
v___x_2618_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2618_, 0, v_env_2612_);
lean_ctor_set(v___x_2618_, 1, v_opts_2615_);
lean_ctor_set(v___x_2618_, 2, v_currNamespace_2616_);
lean_ctor_set(v___x_2618_, 3, v_openDecls_2617_);
lean_inc_ref(v_parserState_2421_);
lean_inc_ref(v___y_2427_);
v___f_2619_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__2___boxed), 4, 3);
lean_closure_set(v___f_2619_, 0, v___y_2427_);
lean_closure_set(v___f_2619_, 1, v___x_2618_);
lean_closure_set(v___f_2619_, 2, v_parserState_2421_);
v___x_2620_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6));
v___x_2621_ = lean_box(0);
v___x_2622_ = lean_profileit(v___x_2620_, v_opts_2615_, v___f_2619_, v___x_2621_);
v_snd_2623_ = lean_ctor_get(v___x_2622_, 1);
lean_inc(v_snd_2623_);
if (lean_obj_tag(v_old_x3f_2420_) == 1)
{
lean_object* v_val_2624_; lean_object* v_fst_2625_; lean_object* v_fst_2626_; lean_object* v_snd_2627_; lean_object* v_pos_2628_; lean_object* v_toSnapshot_2629_; lean_object* v_stx_2630_; lean_object* v_parserState_2631_; lean_object* v_elabSnap_2632_; lean_object* v_nextCmdSnap_x3f_2633_; uint8_t v___x_2634_; 
v_val_2624_ = lean_ctor_get(v_old_x3f_2420_, 0);
v_fst_2625_ = lean_ctor_get(v___x_2622_, 0);
lean_inc_n(v_fst_2625_, 2);
lean_dec(v___x_2622_);
v_fst_2626_ = lean_ctor_get(v_snd_2623_, 0);
lean_inc(v_fst_2626_);
v_snd_2627_ = lean_ctor_get(v_snd_2623_, 1);
lean_inc(v_snd_2627_);
lean_dec(v_snd_2623_);
v_pos_2628_ = lean_ctor_get(v_parserState_2421_, 0);
lean_inc(v_pos_2628_);
lean_dec_ref(v_parserState_2421_);
v_toSnapshot_2629_ = lean_ctor_get(v_val_2624_, 0);
v_stx_2630_ = lean_ctor_get(v_val_2624_, 1);
v_parserState_2631_ = lean_ctor_get(v_val_2624_, 2);
v_elabSnap_2632_ = lean_ctor_get(v_val_2624_, 3);
v_nextCmdSnap_x3f_2633_ = lean_ctor_get(v_val_2624_, 4);
lean_inc(v_stx_2630_);
v___x_2634_ = l_Lean_Syntax_eqWithInfo(v_fst_2625_, v_stx_2630_);
if (v___x_2634_ == 0)
{
if (lean_obj_tag(v_nextCmdSnap_x3f_2633_) == 0)
{
lean_inc_ref(v_opts_2615_);
lean_inc(v_fst_2625_);
lean_inc(v_fst_2626_);
v___y_2570_ = v_fst_2626_;
v___y_2571_ = v_pos_2628_;
v___y_2572_ = v_fst_2625_;
v___y_2573_ = v_opts_2615_;
v___y_2574_ = v___x_2621_;
v___y_2575_ = v_snd_2627_;
v___y_2576_ = v_fst_2626_;
v___y_2577_ = v_fst_2625_;
v___y_2578_ = v_opts_2615_;
v___y_2579_ = v___x_2621_;
goto v___jp_2569_;
}
else
{
lean_object* v_val_2635_; lean_object* v___x_2636_; 
v_val_2635_ = lean_ctor_get(v_nextCmdSnap_x3f_2633_, 0);
lean_inc(v_val_2635_);
v___x_2636_ = l_Lean_Language_SnapshotTask_cancelRec___redArg(v___x_2610_, v_val_2635_);
lean_inc_ref(v_opts_2615_);
lean_inc(v_fst_2625_);
lean_inc(v_fst_2626_);
v___y_2570_ = v_fst_2626_;
v___y_2571_ = v_pos_2628_;
v___y_2572_ = v_fst_2625_;
v___y_2573_ = v_opts_2615_;
v___y_2574_ = v___x_2621_;
v___y_2575_ = v_snd_2627_;
v___y_2576_ = v_fst_2626_;
v___y_2577_ = v_fst_2625_;
v___y_2578_ = v_opts_2615_;
v___y_2579_ = v___x_2621_;
goto v___jp_2569_;
}
}
else
{
lean_inc(v_val_2624_);
lean_dec(v_pos_2628_);
lean_dec(v_snd_2627_);
lean_dec(v_fst_2625_);
lean_dec_ref_known(v_old_x3f_2420_, 1);
lean_dec_ref(v_opts_2615_);
lean_dec_ref(v_parseCancelTk_2425_);
lean_dec_ref(v_cmdState_2422_);
if (lean_obj_tag(v_nextCmdSnap_x3f_2633_) == 1)
{
lean_object* v_val_2637_; 
lean_inc_ref(v_nextCmdSnap_x3f_2633_);
lean_inc_ref(v_elabSnap_2632_);
lean_inc_ref(v_parserState_2631_);
lean_inc(v_stx_2630_);
lean_inc_ref(v_toSnapshot_2629_);
lean_dec(v_val_2624_);
v_val_2637_ = lean_ctor_get(v_nextCmdSnap_x3f_2633_, 0);
lean_inc(v_val_2637_);
lean_dec_ref_known(v_nextCmdSnap_x3f_2633_, 1);
v_toSnapshot_2434_ = v_toSnapshot_2629_;
v_stx_2435_ = v_stx_2630_;
v_parserState_2436_ = v_parserState_2631_;
v_elabSnap_2437_ = v_elabSnap_2632_;
v_val_2438_ = v_val_2637_;
v_newParserState_2439_ = v_fst_2626_;
goto v___jp_2433_;
}
else
{
lean_object* v___x_2638_; 
lean_dec(v_fst_2626_);
lean_dec_ref(v_cmds_2426_);
v___x_2638_ = lean_io_promise_resolve(v_val_2624_, v_prom_2423_);
lean_dec(v_prom_2423_);
return v___x_2638_;
}
}
}
else
{
lean_object* v_fst_2639_; lean_object* v_fst_2640_; lean_object* v_snd_2641_; lean_object* v_pos_2642_; 
v_fst_2639_ = lean_ctor_get(v___x_2622_, 0);
lean_inc_n(v_fst_2639_, 2);
lean_dec(v___x_2622_);
v_fst_2640_ = lean_ctor_get(v_snd_2623_, 0);
lean_inc_n(v_fst_2640_, 2);
v_snd_2641_ = lean_ctor_get(v_snd_2623_, 1);
lean_inc(v_snd_2641_);
lean_dec(v_snd_2623_);
v_pos_2642_ = lean_ctor_get(v_parserState_2421_, 0);
lean_inc(v_pos_2642_);
lean_dec_ref(v_parserState_2421_);
lean_inc_ref(v_opts_2615_);
v___y_2570_ = v_fst_2640_;
v___y_2571_ = v_pos_2642_;
v___y_2572_ = v_fst_2639_;
v___y_2573_ = v_opts_2615_;
v___y_2574_ = v___x_2621_;
v___y_2575_ = v_snd_2641_;
v___y_2576_ = v_fst_2640_;
v___y_2577_ = v_fst_2639_;
v___y_2578_ = v_opts_2615_;
v___y_2579_ = v___x_2621_;
goto v___jp_2569_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__0(lean_object* v_oldResult_2659_, lean_object* v_cmds_2660_, lean_object* v_stx_2661_, lean_object* v_newParserState_2662_, lean_object* v_val_2663_, uint8_t v_sync_2664_, lean_object* v_val_2665_, lean_object* v___y_2666_, lean_object* v_oldNext_2667_){
_start:
{
lean_object* v_cmdState_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; 
v_cmdState_2669_ = lean_ctor_get(v_oldResult_2659_, 1);
lean_inc_ref(v_cmdState_2669_);
lean_dec_ref(v_oldResult_2659_);
v___x_2670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2670_, 0, v_oldNext_2667_);
v___x_2671_ = lean_array_push(v_cmds_2660_, v_stx_2661_);
v___x_2672_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v___x_2670_, v_newParserState_2662_, v_cmdState_2669_, v_val_2663_, v_sync_2664_, v_val_2665_, v___x_2671_, v___y_2666_);
return v___x_2672_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___boxed(lean_object** _args){
lean_object* v___x_2673_ = _args[0];
lean_object* v_val_2674_ = _args[1];
lean_object* v_cmds_2675_ = _args[2];
lean_object* v_fst_2676_ = _args[3];
lean_object* v_fst_2677_ = _args[4];
lean_object* v_val_2678_ = _args[5];
lean_object* v___y_2679_ = _args[6];
lean_object* v_snd_2680_ = _args[7];
lean_object* v___x_2681_ = _args[8];
lean_object* v___x_2682_ = _args[9];
lean_object* v_fst_2683_ = _args[10];
lean_object* v_val_2684_ = _args[11];
lean_object* v_val_2685_ = _args[12];
lean_object* v___x_2686_ = _args[13];
lean_object* v___f_2687_ = _args[14];
lean_object* v___f_2688_ = _args[15];
lean_object* v___f_2689_ = _args[16];
lean_object* v_pos_2690_ = _args[17];
lean_object* v_cmdState_2691_ = _args[18];
lean_object* v_val_2692_ = _args[19];
lean_object* v___x_2693_ = _args[20];
lean_object* v_opts_2694_ = _args[21];
lean_object* v___x_2695_ = _args[22];
lean_object* v_snd_2696_ = _args[23];
lean_object* v_prom_2697_ = _args[24];
lean_object* v_old_x3f_2698_ = _args[25];
lean_object* v_parseCancelTk_2699_ = _args[26];
lean_object* v_next_x3f_2700_ = _args[27];
lean_object* v___y_2701_ = _args[28];
_start:
{
uint8_t v_val_36203__boxed_2702_; uint8_t v___x_36207__boxed_2703_; lean_object* v_res_2704_; 
v_val_36203__boxed_2702_ = lean_unbox(v_val_2678_);
v___x_36207__boxed_2703_ = lean_unbox(v___x_2682_);
v_res_2704_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5(v___x_2673_, v_val_2674_, v_cmds_2675_, v_fst_2676_, v_fst_2677_, v_val_36203__boxed_2702_, v___y_2679_, v_snd_2680_, v___x_2681_, v___x_36207__boxed_2703_, v_fst_2683_, v_val_2684_, v_val_2685_, v___x_2686_, v___f_2687_, v___f_2688_, v___f_2689_, v_pos_2690_, v_cmdState_2691_, v_val_2692_, v___x_2693_, v_opts_2694_, v___x_2695_, v_snd_2696_, v_prom_2697_, v_old_x3f_2698_, v_parseCancelTk_2699_, v_next_x3f_2700_);
lean_dec(v_prom_2697_);
lean_dec_ref(v___x_2695_);
lean_dec_ref(v_opts_2694_);
lean_dec(v_val_2685_);
lean_dec_ref(v___y_2679_);
lean_dec(v_val_2674_);
return v_res_2704_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___boxed(lean_object* v_old_x3f_2705_, lean_object* v_parserState_2706_, lean_object* v_cmdState_2707_, lean_object* v_prom_2708_, lean_object* v_sync_2709_, lean_object* v_parseCancelTk_2710_, lean_object* v_cmds_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_){
_start:
{
uint8_t v_sync_boxed_2714_; lean_object* v_res_2715_; 
v_sync_boxed_2714_ = lean_unbox(v_sync_2709_);
v_res_2715_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v_old_x3f_2705_, v_parserState_2706_, v_cmdState_2707_, v_prom_2708_, v_sync_boxed_2714_, v_parseCancelTk_2710_, v_cmds_2711_, v___y_2712_);
lean_dec_ref(v___y_2712_);
return v_res_2715_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6(lean_object* v_as_2716_, size_t v_i_2717_, size_t v_stop_2718_, lean_object* v_b_2719_, lean_object* v___y_2720_){
_start:
{
lean_object* v___x_2722_; 
v___x_2722_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg(v_as_2716_, v_i_2717_, v_stop_2718_, v_b_2719_);
return v___x_2722_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___boxed(lean_object* v_as_2723_, lean_object* v_i_2724_, lean_object* v_stop_2725_, lean_object* v_b_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_){
_start:
{
size_t v_i_boxed_2729_; size_t v_stop_boxed_2730_; lean_object* v_res_2731_; 
v_i_boxed_2729_ = lean_unbox_usize(v_i_2724_);
lean_dec(v_i_2724_);
v_stop_boxed_2730_ = lean_unbox_usize(v_stop_2725_);
lean_dec(v_stop_2725_);
v_res_2731_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6(v_as_2723_, v_i_boxed_2729_, v_stop_boxed_2730_, v_b_2726_, v___y_2727_);
lean_dec_ref(v___y_2727_);
lean_dec_ref(v_as_2723_);
return v_res_2731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__1(lean_object* v_opts_2732_, lean_object* v_opt_2733_){
_start:
{
lean_object* v_name_2734_; lean_object* v_map_2735_; lean_object* v___x_2736_; 
v_name_2734_ = lean_ctor_get(v_opt_2733_, 0);
v_map_2735_ = lean_ctor_get(v_opts_2732_, 0);
v___x_2736_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2735_, v_name_2734_);
if (lean_obj_tag(v___x_2736_) == 0)
{
lean_object* v___x_2737_; 
v___x_2737_ = lean_box(0);
return v___x_2737_;
}
else
{
lean_object* v_val_2738_; lean_object* v___x_2740_; uint8_t v_isShared_2741_; uint8_t v_isSharedCheck_2747_; 
v_val_2738_ = lean_ctor_get(v___x_2736_, 0);
v_isSharedCheck_2747_ = !lean_is_exclusive(v___x_2736_);
if (v_isSharedCheck_2747_ == 0)
{
v___x_2740_ = v___x_2736_;
v_isShared_2741_ = v_isSharedCheck_2747_;
goto v_resetjp_2739_;
}
else
{
lean_inc(v_val_2738_);
lean_dec(v___x_2736_);
v___x_2740_ = lean_box(0);
v_isShared_2741_ = v_isSharedCheck_2747_;
goto v_resetjp_2739_;
}
v_resetjp_2739_:
{
if (lean_obj_tag(v_val_2738_) == 0)
{
lean_object* v_v_2742_; lean_object* v___x_2744_; 
v_v_2742_ = lean_ctor_get(v_val_2738_, 0);
lean_inc_ref(v_v_2742_);
lean_dec_ref_known(v_val_2738_, 1);
if (v_isShared_2741_ == 0)
{
lean_ctor_set(v___x_2740_, 0, v_v_2742_);
v___x_2744_ = v___x_2740_;
goto v_reusejp_2743_;
}
else
{
lean_object* v_reuseFailAlloc_2745_; 
v_reuseFailAlloc_2745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2745_, 0, v_v_2742_);
v___x_2744_ = v_reuseFailAlloc_2745_;
goto v_reusejp_2743_;
}
v_reusejp_2743_:
{
return v___x_2744_;
}
}
else
{
lean_object* v___x_2746_; 
lean_del_object(v___x_2740_);
lean_dec(v_val_2738_);
v___x_2746_ = lean_box(0);
return v___x_2746_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__1___boxed(lean_object* v_opts_2748_, lean_object* v_opt_2749_){
_start:
{
lean_object* v_res_2750_; 
v_res_2750_ = l_Lean_Option_get_x3f___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__1(v_opts_2748_, v_opt_2749_);
lean_dec_ref(v_opt_2749_);
lean_dec_ref(v_opts_2748_);
return v_res_2750_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__0(lean_object* v___x_2751_, lean_object* v_x_2752_){
_start:
{
lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; 
v___x_2753_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v___x_2751_);
v___x_2754_ = lean_box(0);
v___x_2755_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2755_, 0, v_x_2752_);
lean_ctor_set(v___x_2755_, 1, v___x_2753_);
lean_ctor_set(v___x_2755_, 2, v___x_2754_);
return v___x_2755_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2761_; lean_object* v___x_2762_; 
v___x_2761_ = ((lean_object*)(l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__2));
v___x_2762_ = l_Lean_Array_toPArray_x27___redArg(v___x_2761_);
return v___x_2762_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0(lean_object* v_a_2763_, lean_object* v_a_2764_){
_start:
{
if (lean_obj_tag(v_a_2763_) == 0)
{
lean_object* v___x_2765_; 
v___x_2765_ = l_List_reverse___redArg(v_a_2764_);
return v___x_2765_;
}
else
{
lean_object* v_head_2766_; lean_object* v_tail_2767_; lean_object* v___x_2769_; uint8_t v_isShared_2770_; uint8_t v_isSharedCheck_2780_; 
v_head_2766_ = lean_ctor_get(v_a_2763_, 0);
v_tail_2767_ = lean_ctor_get(v_a_2763_, 1);
v_isSharedCheck_2780_ = !lean_is_exclusive(v_a_2763_);
if (v_isSharedCheck_2780_ == 0)
{
v___x_2769_ = v_a_2763_;
v_isShared_2770_ = v_isSharedCheck_2780_;
goto v_resetjp_2768_;
}
else
{
lean_inc(v_tail_2767_);
lean_inc(v_head_2766_);
lean_dec(v_a_2763_);
v___x_2769_ = lean_box(0);
v_isShared_2770_ = v_isSharedCheck_2780_;
goto v_resetjp_2768_;
}
v_resetjp_2768_:
{
lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2777_; 
v___x_2771_ = ((lean_object*)(l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__1));
v___x_2772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2772_, 0, v___x_2771_);
lean_ctor_set(v___x_2772_, 1, v_head_2766_);
v___x_2773_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2773_, 0, v___x_2772_);
v___x_2774_ = lean_obj_once(&l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__3, &l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__3_once, _init_l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__3);
v___x_2775_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2775_, 0, v___x_2773_);
lean_ctor_set(v___x_2775_, 1, v___x_2774_);
if (v_isShared_2770_ == 0)
{
lean_ctor_set(v___x_2769_, 1, v_a_2764_);
lean_ctor_set(v___x_2769_, 0, v___x_2775_);
v___x_2777_ = v___x_2769_;
goto v_reusejp_2776_;
}
else
{
lean_object* v_reuseFailAlloc_2779_; 
v_reuseFailAlloc_2779_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2779_, 0, v___x_2775_);
lean_ctor_set(v_reuseFailAlloc_2779_, 1, v_a_2764_);
v___x_2777_ = v_reuseFailAlloc_2779_;
goto v_reusejp_2776_;
}
v_reusejp_2776_:
{
v_a_2763_ = v_tail_2767_;
v_a_2764_ = v___x_2777_;
goto _start;
}
}
}
}
}
static double _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__0(void){
_start:
{
lean_object* v___x_2781_; double v___x_2782_; 
v___x_2781_ = lean_unsigned_to_nat(1000000000u);
v___x_2782_ = lean_float_of_nat(v___x_2781_);
return v___x_2782_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__11(void){
_start:
{
lean_object* v___x_2799_; lean_object* v___x_2800_; 
v___x_2799_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__10));
v___x_2800_ = l_Lean_MessageData_ofFormat(v___x_2799_);
return v___x_2800_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1(lean_object* v_setupImports_2801_, lean_object* v_stx_2802_, lean_object* v_origStx_2803_, lean_object* v_toProcessingContext_2804_, lean_object* v___x_2805_, lean_object* v_fileMap_2806_, lean_object* v_parserState_2807_, lean_object* v___x_2808_, lean_object* v___x_2809_, lean_object* v___x_2810_, lean_object* v___y_2811_){
_start:
{
lean_object* v_toProcessingContext_2813_; lean_object* v___x_2814_; 
v_toProcessingContext_2813_ = lean_ctor_get(v___y_2811_, 0);
lean_inc_ref(v_toProcessingContext_2813_);
lean_inc(v_stx_2802_);
v___x_2814_ = lean_apply_3(v_setupImports_2801_, v_stx_2802_, v_toProcessingContext_2813_, lean_box(0));
if (lean_obj_tag(v___x_2814_) == 0)
{
lean_object* v_a_2815_; lean_object* v___x_2817_; uint8_t v_isShared_2818_; uint8_t v_isSharedCheck_3029_; 
v_a_2815_ = lean_ctor_get(v___x_2814_, 0);
v_isSharedCheck_3029_ = !lean_is_exclusive(v___x_2814_);
if (v_isSharedCheck_3029_ == 0)
{
v___x_2817_ = v___x_2814_;
v_isShared_2818_ = v_isSharedCheck_3029_;
goto v_resetjp_2816_;
}
else
{
lean_inc(v_a_2815_);
lean_dec(v___x_2814_);
v___x_2817_ = lean_box(0);
v_isShared_2818_ = v_isSharedCheck_3029_;
goto v_resetjp_2816_;
}
v_resetjp_2816_:
{
if (lean_obj_tag(v_a_2815_) == 0)
{
lean_object* v_a_2819_; lean_object* v___x_2821_; 
lean_dec_ref(v___x_2810_);
lean_dec(v___x_2808_);
lean_dec_ref(v_parserState_2807_);
lean_dec_ref(v_fileMap_2806_);
lean_dec(v___x_2805_);
lean_dec_ref(v_toProcessingContext_2804_);
lean_dec(v_origStx_2803_);
lean_dec(v_stx_2802_);
v_a_2819_ = lean_ctor_get(v_a_2815_, 0);
lean_inc(v_a_2819_);
lean_dec_ref_known(v_a_2815_, 1);
if (v_isShared_2818_ == 0)
{
lean_ctor_set(v___x_2817_, 0, v_a_2819_);
v___x_2821_ = v___x_2817_;
goto v_reusejp_2820_;
}
else
{
lean_object* v_reuseFailAlloc_2822_; 
v_reuseFailAlloc_2822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2822_, 0, v_a_2819_);
v___x_2821_ = v_reuseFailAlloc_2822_;
goto v_reusejp_2820_;
}
v_reusejp_2820_:
{
return v___x_2821_;
}
}
else
{
lean_object* v_a_2823_; lean_object* v___x_2825_; uint8_t v_isShared_2826_; uint8_t v_isSharedCheck_3028_; 
v_a_2823_ = lean_ctor_get(v_a_2815_, 0);
v_isSharedCheck_3028_ = !lean_is_exclusive(v_a_2815_);
if (v_isSharedCheck_3028_ == 0)
{
v___x_2825_ = v_a_2815_;
v_isShared_2826_ = v_isSharedCheck_3028_;
goto v_resetjp_2824_;
}
else
{
lean_inc(v_a_2823_);
lean_dec(v_a_2815_);
v___x_2825_ = lean_box(0);
v_isShared_2826_ = v_isSharedCheck_3028_;
goto v_resetjp_2824_;
}
v_resetjp_2824_:
{
lean_object* v___x_2827_; lean_object* v_mainModuleName_2828_; lean_object* v_package_x3f_2829_; uint8_t v_isModule_2830_; lean_object* v_imports_2831_; lean_object* v_opts_2832_; uint32_t v_trustLevel_2833_; lean_object* v_importArts_2834_; lean_object* v_plugins_2835_; double v___x_2836_; double v___x_2837_; double v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; uint8_t v___x_2841_; lean_object* v___x_2843_; 
v___x_2827_ = lean_io_mono_nanos_now();
v_mainModuleName_2828_ = lean_ctor_get(v_a_2823_, 0);
lean_inc(v_mainModuleName_2828_);
v_package_x3f_2829_ = lean_ctor_get(v_a_2823_, 1);
lean_inc(v_package_x3f_2829_);
v_isModule_2830_ = lean_ctor_get_uint8(v_a_2823_, sizeof(void*)*6 + 4);
v_imports_2831_ = lean_ctor_get(v_a_2823_, 2);
lean_inc_ref(v_imports_2831_);
v_opts_2832_ = lean_ctor_get(v_a_2823_, 3);
lean_inc_ref(v_opts_2832_);
v_trustLevel_2833_ = lean_ctor_get_uint32(v_a_2823_, sizeof(void*)*6);
v_importArts_2834_ = lean_ctor_get(v_a_2823_, 4);
lean_inc(v_importArts_2834_);
v_plugins_2835_ = lean_ctor_get(v_a_2823_, 5);
lean_inc_ref(v_plugins_2835_);
lean_dec(v_a_2823_);
v___x_2836_ = lean_float_of_nat(v___x_2827_);
v___x_2837_ = lean_float_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__0);
v___x_2838_ = lean_float_div(v___x_2836_, v___x_2837_);
v___x_2839_ = l_Lean_Elab_HeaderSyntax_startPos(v_stx_2802_);
v___x_2840_ = l_Lean_MessageLog_empty;
v___x_2841_ = 1;
lean_inc(v_stx_2802_);
if (v_isShared_2826_ == 0)
{
lean_ctor_set(v___x_2825_, 0, v_stx_2802_);
v___x_2843_ = v___x_2825_;
goto v_reusejp_2842_;
}
else
{
lean_object* v_reuseFailAlloc_3027_; 
v_reuseFailAlloc_3027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3027_, 0, v_stx_2802_);
v___x_2843_ = v_reuseFailAlloc_3027_;
goto v_reusejp_2842_;
}
v_reusejp_2842_:
{
lean_object* v___x_2844_; lean_object* v___x_2845_; 
v___x_2844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2844_, 0, v_origStx_2803_);
lean_inc_ref(v___x_2843_);
lean_inc_ref(v_opts_2832_);
v___x_2845_ = l_Lean_Elab_processHeaderCore(v___x_2839_, v_imports_2831_, v_isModule_2830_, v_opts_2832_, v___x_2840_, v_toProcessingContext_2804_, v_trustLevel_2833_, v_plugins_2835_, v___x_2841_, v_mainModuleName_2828_, v_package_x3f_2829_, v_importArts_2834_, v___x_2843_, v___x_2844_);
if (lean_obj_tag(v___x_2845_) == 0)
{
lean_object* v_a_2846_; lean_object* v___x_2848_; uint8_t v_isShared_2849_; uint8_t v_isSharedCheck_3018_; 
v_a_2846_ = lean_ctor_get(v___x_2845_, 0);
v_isSharedCheck_3018_ = !lean_is_exclusive(v___x_2845_);
if (v_isSharedCheck_3018_ == 0)
{
v___x_2848_ = v___x_2845_;
v_isShared_2849_ = v_isSharedCheck_3018_;
goto v_resetjp_2847_;
}
else
{
lean_inc(v_a_2846_);
lean_dec(v___x_2845_);
v___x_2848_ = lean_box(0);
v_isShared_2849_ = v_isSharedCheck_3018_;
goto v_resetjp_2847_;
}
v_resetjp_2847_:
{
lean_object* v_fst_2850_; lean_object* v_snd_2851_; lean_object* v___x_2853_; uint8_t v_isShared_2854_; uint8_t v_isSharedCheck_3017_; 
v_fst_2850_ = lean_ctor_get(v_a_2846_, 0);
v_snd_2851_ = lean_ctor_get(v_a_2846_, 1);
v_isSharedCheck_3017_ = !lean_is_exclusive(v_a_2846_);
if (v_isSharedCheck_3017_ == 0)
{
v___x_2853_ = v_a_2846_;
v_isShared_2854_ = v_isSharedCheck_3017_;
goto v_resetjp_2852_;
}
else
{
lean_inc(v_snd_2851_);
lean_inc(v_fst_2850_);
lean_dec(v_a_2846_);
v___x_2853_ = lean_box(0);
v_isShared_2854_ = v_isSharedCheck_3017_;
goto v_resetjp_2852_;
}
v_resetjp_2852_:
{
lean_object* v___x_2855_; double v___x_2856_; double v___x_2857_; lean_object* v___x_2858_; uint8_t v___x_2859_; lean_object* v___y_2861_; lean_object* v___y_2862_; lean_object* v___y_2863_; lean_object* v___y_2864_; lean_object* v___y_2865_; lean_object* v___y_2866_; lean_object* v_traceState_2875_; lean_object* v___y_2876_; 
v___x_2855_ = lean_io_mono_nanos_now();
v___x_2856_ = lean_float_of_nat(v___x_2855_);
v___x_2857_ = lean_float_div(v___x_2856_, v___x_2837_);
lean_inc(v_snd_2851_);
v___x_2858_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_snd_2851_);
v___x_2859_ = l_Lean_MessageLog_hasErrors(v_snd_2851_);
if (v___x_2859_ == 0)
{
lean_object* v___x_2986_; lean_object* v___x_2987_; 
lean_del_object(v___x_2817_);
lean_dec_ref(v___x_2810_);
v___x_2986_ = l_Lean_trace_profiler_output;
v___x_2987_ = l_Lean_Option_get_x3f___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__1(v_opts_2832_, v___x_2986_);
if (lean_obj_tag(v___x_2987_) == 0)
{
lean_object* v___x_2988_; uint8_t v___x_2989_; 
v___x_2988_ = l_Lean_trace_profiler_serve;
v___x_2989_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_2832_, v___x_2988_);
if (v___x_2989_ == 0)
{
lean_object* v___x_2990_; 
v___x_2990_ = l_Lean_instInhabitedTraceState_default;
v_traceState_2875_ = v___x_2990_;
v___y_2876_ = v___y_2811_;
goto v___jp_2874_;
}
else
{
goto v___jp_2970_;
}
}
else
{
lean_dec_ref_known(v___x_2987_, 1);
goto v___jp_2970_;
}
}
else
{
lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; uint64_t v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; size_t v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3015_; 
lean_del_object(v___x_2853_);
lean_dec(v_snd_2851_);
lean_dec(v_fst_2850_);
lean_del_object(v___x_2848_);
lean_dec_ref(v___x_2843_);
lean_dec_ref(v_opts_2832_);
lean_dec(v___x_2808_);
lean_dec_ref(v_parserState_2807_);
lean_dec_ref(v_fileMap_2806_);
lean_dec(v_stx_2802_);
v___x_2991_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2));
v___x_2992_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4));
v___x_2993_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__6));
lean_inc_n(v___x_2805_, 2);
v___x_2994_ = l_Lean_Name_num___override(v___x_2993_, v___x_2805_);
v___x_2995_ = l_Lean_Name_str___override(v___x_2994_, v___x_2991_);
v___x_2996_ = l_Lean_Name_str___override(v___x_2995_, v___x_2992_);
v___x_2997_ = l_Lean_Name_str___override(v___x_2996_, v___x_2991_);
v___x_2998_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0));
v___x_2999_ = l_Lean_Name_str___override(v___x_2997_, v___x_2998_);
v___x_3000_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__6));
v___x_3001_ = l_Lean_Name_str___override(v___x_2999_, v___x_3000_);
v___x_3002_ = l_Lean_Name_toString(v___x_3001_, v___x_2841_);
v___x_3003_ = lean_box(0);
v___x_3004_ = 0ULL;
v___x_3005_ = lean_unsigned_to_nat(32u);
v___x_3006_ = lean_mk_empty_array_with_capacity(v___x_3005_);
v___x_3007_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14);
v___x_3008_ = ((size_t)5ULL);
v___x_3009_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3009_, 0, v___x_3007_);
lean_ctor_set(v___x_3009_, 1, v___x_3006_);
lean_ctor_set(v___x_3009_, 2, v___x_2805_);
lean_ctor_set(v___x_3009_, 3, v___x_2805_);
lean_ctor_set_usize(v___x_3009_, 4, v___x_3008_);
v___x_3010_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3010_, 0, v___x_3009_);
lean_ctor_set_uint64(v___x_3010_, sizeof(void*)*1, v___x_3004_);
v___x_3011_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3011_, 0, v___x_3002_);
lean_ctor_set(v___x_3011_, 1, v___x_2858_);
lean_ctor_set(v___x_3011_, 2, v___x_3003_);
lean_ctor_set(v___x_3011_, 3, v___x_3010_);
lean_ctor_set_uint8(v___x_3011_, sizeof(void*)*4, v___x_2859_);
v___x_3012_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v___x_2810_);
v___x_3013_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3013_, 0, v___x_3011_);
lean_ctor_set(v___x_3013_, 1, v___x_3012_);
lean_ctor_set(v___x_3013_, 2, v___x_3003_);
if (v_isShared_2818_ == 0)
{
lean_ctor_set(v___x_2817_, 0, v___x_3013_);
v___x_3015_ = v___x_2817_;
goto v_reusejp_3014_;
}
else
{
lean_object* v_reuseFailAlloc_3016_; 
v_reuseFailAlloc_3016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3016_, 0, v___x_3013_);
v___x_3015_ = v_reuseFailAlloc_3016_;
goto v_reusejp_3014_;
}
v_reusejp_3014_:
{
return v___x_3015_;
}
}
v___jp_2860_:
{
lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2872_; 
v___x_2867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2867_, 0, v___y_2866_);
v___x_2868_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2868_, 0, v___y_2863_);
lean_ctor_set(v___x_2868_, 1, v___x_2858_);
lean_ctor_set(v___x_2868_, 2, v___x_2867_);
lean_ctor_set(v___x_2868_, 3, v___y_2861_);
lean_ctor_set_uint8(v___x_2868_, sizeof(void*)*4, v___x_2859_);
v___x_2869_ = l_Lean_Language_SnapshotTask_finished___redArg(v___y_2864_, v___x_2868_);
v___x_2870_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2870_, 0, v___y_2862_);
lean_ctor_set(v___x_2870_, 1, v___x_2869_);
lean_ctor_set(v___x_2870_, 2, v___y_2865_);
if (v_isShared_2849_ == 0)
{
lean_ctor_set(v___x_2848_, 0, v___x_2870_);
v___x_2872_ = v___x_2848_;
goto v_reusejp_2871_;
}
else
{
lean_object* v_reuseFailAlloc_2873_; 
v_reuseFailAlloc_2873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2873_, 0, v___x_2870_);
v___x_2872_ = v_reuseFailAlloc_2873_;
goto v_reusejp_2871_;
}
v_reusejp_2871_:
{
return v___x_2872_;
}
}
v___jp_2874_:
{
lean_object* v___x_2877_; 
v___x_2877_ = l_Lean_Language_Lean_reparseOptions(v_opts_2832_);
if (lean_obj_tag(v___x_2877_) == 0)
{
lean_object* v_a_2878_; lean_object* v___x_2879_; lean_object* v_env_2880_; lean_object* v_messages_2881_; lean_object* v_scopes_2882_; lean_object* v_usedQuotCtxts_2883_; lean_object* v_nextMacroScope_2884_; lean_object* v_maxRecDepth_2885_; lean_object* v_ngen_2886_; lean_object* v_auxDeclNGen_2887_; lean_object* v_snapshotTasks_2888_; lean_object* v_prevLinterStates_2889_; lean_object* v_codeQualityEntryTasks_2890_; lean_object* v___x_2892_; uint8_t v_isShared_2893_; uint8_t v_isSharedCheck_2959_; 
v_a_2878_ = lean_ctor_get(v___x_2877_, 0);
lean_inc(v_a_2878_);
lean_dec_ref_known(v___x_2877_, 1);
lean_inc(v_fst_2850_);
v___x_2879_ = l_Lean_Elab_Command_mkState(v_fst_2850_, v_snd_2851_, v_a_2878_);
v_env_2880_ = lean_ctor_get(v___x_2879_, 0);
v_messages_2881_ = lean_ctor_get(v___x_2879_, 1);
v_scopes_2882_ = lean_ctor_get(v___x_2879_, 2);
v_usedQuotCtxts_2883_ = lean_ctor_get(v___x_2879_, 3);
v_nextMacroScope_2884_ = lean_ctor_get(v___x_2879_, 4);
v_maxRecDepth_2885_ = lean_ctor_get(v___x_2879_, 5);
v_ngen_2886_ = lean_ctor_get(v___x_2879_, 6);
v_auxDeclNGen_2887_ = lean_ctor_get(v___x_2879_, 7);
v_snapshotTasks_2888_ = lean_ctor_get(v___x_2879_, 10);
v_prevLinterStates_2889_ = lean_ctor_get(v___x_2879_, 11);
v_codeQualityEntryTasks_2890_ = lean_ctor_get(v___x_2879_, 12);
v_isSharedCheck_2959_ = !lean_is_exclusive(v___x_2879_);
if (v_isSharedCheck_2959_ == 0)
{
lean_object* v_unused_2960_; lean_object* v_unused_2961_; 
v_unused_2960_ = lean_ctor_get(v___x_2879_, 9);
lean_dec(v_unused_2960_);
v_unused_2961_ = lean_ctor_get(v___x_2879_, 8);
lean_dec(v_unused_2961_);
v___x_2892_ = v___x_2879_;
v_isShared_2893_ = v_isSharedCheck_2959_;
goto v_resetjp_2891_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2890_);
lean_inc(v_prevLinterStates_2889_);
lean_inc(v_snapshotTasks_2888_);
lean_inc(v_auxDeclNGen_2887_);
lean_inc(v_ngen_2886_);
lean_inc(v_maxRecDepth_2885_);
lean_inc(v_nextMacroScope_2884_);
lean_inc(v_usedQuotCtxts_2883_);
lean_inc(v_scopes_2882_);
lean_inc(v_messages_2881_);
lean_inc(v_env_2880_);
lean_dec(v___x_2879_);
v___x_2892_ = lean_box(0);
v_isShared_2893_ = v_isSharedCheck_2959_;
goto v_resetjp_2891_;
}
v_resetjp_2891_:
{
lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2906_; 
v___x_2894_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3);
v___x_2895_ = lean_box(0);
lean_inc_n(v___x_2805_, 4);
v___x_2896_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2896_, 0, v___x_2805_);
lean_ctor_set(v___x_2896_, 1, v___x_2805_);
lean_ctor_set(v___x_2896_, 2, v___x_2805_);
lean_ctor_set(v___x_2896_, 3, v___x_2805_);
lean_ctor_set(v___x_2896_, 4, v___x_2894_);
lean_ctor_set(v___x_2896_, 5, v___x_2894_);
lean_ctor_set(v___x_2896_, 6, v___x_2894_);
lean_ctor_set(v___x_2896_, 7, v___x_2894_);
lean_ctor_set(v___x_2896_, 8, v___x_2894_);
lean_ctor_set(v___x_2896_, 9, v___x_2894_);
lean_ctor_set(v___x_2896_, 10, v___x_2894_);
v___x_2897_ = l_Lean_Options_empty;
v___x_2898_ = lean_box(0);
v___x_2899_ = lean_box(0);
v___x_2900_ = lean_unsigned_to_nat(1u);
v___x_2901_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__3));
v___x_2902_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2902_, 0, v_fst_2850_);
lean_ctor_set(v___x_2902_, 1, v___x_2895_);
lean_ctor_set(v___x_2902_, 2, v_fileMap_2806_);
lean_ctor_set(v___x_2902_, 3, v___x_2896_);
lean_ctor_set(v___x_2902_, 4, v___x_2897_);
lean_ctor_set(v___x_2902_, 5, v___x_2898_);
lean_ctor_set(v___x_2902_, 6, v___x_2899_);
lean_ctor_set(v___x_2902_, 7, v___x_2901_);
v___x_2903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2903_, 0, v___x_2902_);
v___x_2904_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__5));
lean_inc(v_stx_2802_);
if (v_isShared_2854_ == 0)
{
lean_ctor_set(v___x_2853_, 1, v_stx_2802_);
lean_ctor_set(v___x_2853_, 0, v___x_2904_);
v___x_2906_ = v___x_2853_;
goto v_reusejp_2905_;
}
else
{
lean_object* v_reuseFailAlloc_2958_; 
v_reuseFailAlloc_2958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2958_, 0, v___x_2904_);
lean_ctor_set(v_reuseFailAlloc_2958_, 1, v_stx_2802_);
v___x_2906_ = v_reuseFailAlloc_2958_;
goto v_reusejp_2905_;
}
v_reusejp_2905_:
{
lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2921_; 
v___x_2907_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2907_, 0, v___x_2906_);
v___x_2908_ = lean_unsigned_to_nat(2u);
v___x_2909_ = l_Lean_Syntax_getArg(v_stx_2802_, v___x_2908_);
lean_dec(v_stx_2802_);
v___x_2910_ = l_Lean_Syntax_getArgs(v___x_2909_);
lean_dec(v___x_2909_);
v___x_2911_ = lean_array_to_list(v___x_2910_);
v___x_2912_ = l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0(v___x_2911_, v___x_2899_);
v___x_2913_ = l_Lean_List_toPArray_x27___redArg(v___x_2912_);
v___x_2914_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2914_, 0, v___x_2907_);
lean_ctor_set(v___x_2914_, 1, v___x_2913_);
v___x_2915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2915_, 0, v___x_2903_);
lean_ctor_set(v___x_2915_, 1, v___x_2914_);
v___x_2916_ = lean_mk_empty_array_with_capacity(v___x_2900_);
v___x_2917_ = lean_array_push(v___x_2916_, v___x_2915_);
v___x_2918_ = l_Lean_Array_toPArray_x27___redArg(v___x_2917_);
lean_dec_ref(v___x_2917_);
lean_inc_ref(v___x_2918_);
v___x_2919_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2919_, 0, v___x_2894_);
lean_ctor_set(v___x_2919_, 1, v___x_2894_);
lean_ctor_set(v___x_2919_, 2, v___x_2918_);
lean_ctor_set_uint8(v___x_2919_, sizeof(void*)*3, v___x_2841_);
if (v_isShared_2893_ == 0)
{
lean_ctor_set(v___x_2892_, 9, v_traceState_2875_);
lean_ctor_set(v___x_2892_, 8, v___x_2919_);
v___x_2921_ = v___x_2892_;
goto v_reusejp_2920_;
}
else
{
lean_object* v_reuseFailAlloc_2957_; 
v_reuseFailAlloc_2957_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2957_, 0, v_env_2880_);
lean_ctor_set(v_reuseFailAlloc_2957_, 1, v_messages_2881_);
lean_ctor_set(v_reuseFailAlloc_2957_, 2, v_scopes_2882_);
lean_ctor_set(v_reuseFailAlloc_2957_, 3, v_usedQuotCtxts_2883_);
lean_ctor_set(v_reuseFailAlloc_2957_, 4, v_nextMacroScope_2884_);
lean_ctor_set(v_reuseFailAlloc_2957_, 5, v_maxRecDepth_2885_);
lean_ctor_set(v_reuseFailAlloc_2957_, 6, v_ngen_2886_);
lean_ctor_set(v_reuseFailAlloc_2957_, 7, v_auxDeclNGen_2887_);
lean_ctor_set(v_reuseFailAlloc_2957_, 8, v___x_2919_);
lean_ctor_set(v_reuseFailAlloc_2957_, 9, v_traceState_2875_);
lean_ctor_set(v_reuseFailAlloc_2957_, 10, v_snapshotTasks_2888_);
lean_ctor_set(v_reuseFailAlloc_2957_, 11, v_prevLinterStates_2889_);
lean_ctor_set(v_reuseFailAlloc_2957_, 12, v_codeQualityEntryTasks_2890_);
v___x_2921_ = v_reuseFailAlloc_2957_;
goto v_reusejp_2920_;
}
v_reusejp_2920_:
{
lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; size_t v___x_2933_; lean_object* v___x_2934_; lean_object* v_size_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; uint64_t v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; uint8_t v___x_2954_; 
v___x_2922_ = lean_io_promise_new();
v___x_2923_ = l_IO_CancelToken_new();
v___x_2924_ = lean_mk_empty_array_with_capacity(v___x_2805_);
lean_inc_ref(v___x_2923_);
lean_inc(v___x_2922_);
lean_inc_ref(v___x_2921_);
v___x_2925_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v___x_2895_, v_parserState_2807_, v___x_2921_, v___x_2922_, v___x_2841_, v___x_2923_, v___x_2924_, v___y_2876_);
v___x_2926_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2));
v___x_2927_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4));
v___x_2928_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__6));
lean_inc_n(v___x_2805_, 3);
v___x_2929_ = l_Lean_Name_num___override(v___x_2928_, v___x_2805_);
v___x_2930_ = lean_unsigned_to_nat(32u);
v___x_2931_ = lean_mk_empty_array_with_capacity(v___x_2930_);
v___x_2932_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14);
v___x_2933_ = ((size_t)5ULL);
v___x_2934_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2934_, 0, v___x_2932_);
lean_ctor_set(v___x_2934_, 1, v___x_2931_);
lean_ctor_set(v___x_2934_, 2, v___x_2805_);
lean_ctor_set(v___x_2934_, 3, v___x_2805_);
lean_ctor_set_usize(v___x_2934_, 4, v___x_2933_);
v_size_2935_ = lean_ctor_get(v___x_2918_, 2);
lean_inc(v_size_2935_);
v___x_2936_ = l_Lean_Name_str___override(v___x_2929_, v___x_2926_);
v___x_2937_ = l_Lean_Language_SnapshotTask_defaultReportingRange(v___x_2808_);
v___x_2938_ = l_Lean_Name_str___override(v___x_2936_, v___x_2927_);
v___x_2939_ = l_Lean_Name_str___override(v___x_2938_, v___x_2926_);
v___x_2940_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0));
v___x_2941_ = l_Lean_Name_str___override(v___x_2939_, v___x_2940_);
v___x_2942_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__6));
v___x_2943_ = l_Lean_Name_str___override(v___x_2941_, v___x_2942_);
v___x_2944_ = l_Lean_Name_toString(v___x_2943_, v___x_2841_);
v___x_2945_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_2946_ = 0ULL;
v___x_2947_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2947_, 0, v___x_2934_);
lean_ctor_set_uint64(v___x_2947_, sizeof(void*)*1, v___x_2946_);
v___x_2948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2948_, 0, v___x_2923_);
v___x_2949_ = l_IO_Promise_result_x21___redArg(v___x_2922_);
lean_dec(v___x_2922_);
v___x_2950_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2950_, 0, v___x_2808_);
lean_ctor_set(v___x_2950_, 1, v___x_2937_);
lean_ctor_set(v___x_2950_, 2, v___x_2948_);
lean_ctor_set(v___x_2950_, 3, v___x_2949_);
v___x_2951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2951_, 0, v___x_2921_);
lean_ctor_set(v___x_2951_, 1, v___x_2950_);
v___x_2952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2952_, 0, v___x_2951_);
lean_inc_ref(v___x_2947_);
lean_inc_ref(v___x_2944_);
v___x_2953_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2953_, 0, v___x_2944_);
lean_ctor_set(v___x_2953_, 1, v___x_2945_);
lean_ctor_set(v___x_2953_, 2, v___x_2895_);
lean_ctor_set(v___x_2953_, 3, v___x_2947_);
lean_ctor_set_uint8(v___x_2953_, sizeof(void*)*4, v___x_2859_);
v___x_2954_ = lean_nat_dec_lt(v___x_2805_, v_size_2935_);
lean_dec(v_size_2935_);
if (v___x_2954_ == 0)
{
lean_object* v___x_2955_; 
lean_dec_ref(v___x_2918_);
lean_dec(v___x_2805_);
v___x_2955_ = l_outOfBounds___redArg(v___x_2809_);
v___y_2861_ = v___x_2947_;
v___y_2862_ = v___x_2953_;
v___y_2863_ = v___x_2944_;
v___y_2864_ = v___x_2843_;
v___y_2865_ = v___x_2952_;
v___y_2866_ = v___x_2955_;
goto v___jp_2860_;
}
else
{
lean_object* v___x_2956_; 
v___x_2956_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2809_, v___x_2918_, v___x_2805_);
lean_dec(v___x_2805_);
lean_dec_ref(v___x_2918_);
v___y_2861_ = v___x_2947_;
v___y_2862_ = v___x_2953_;
v___y_2863_ = v___x_2944_;
v___y_2864_ = v___x_2843_;
v___y_2865_ = v___x_2952_;
v___y_2866_ = v___x_2956_;
goto v___jp_2860_;
}
}
}
}
}
else
{
lean_object* v_a_2962_; lean_object* v___x_2964_; uint8_t v_isShared_2965_; uint8_t v_isSharedCheck_2969_; 
lean_dec_ref(v_traceState_2875_);
lean_dec_ref(v___x_2858_);
lean_del_object(v___x_2853_);
lean_dec(v_snd_2851_);
lean_dec(v_fst_2850_);
lean_del_object(v___x_2848_);
lean_dec_ref(v___x_2843_);
lean_dec(v___x_2808_);
lean_dec_ref(v_parserState_2807_);
lean_dec_ref(v_fileMap_2806_);
lean_dec(v___x_2805_);
lean_dec(v_stx_2802_);
v_a_2962_ = lean_ctor_get(v___x_2877_, 0);
v_isSharedCheck_2969_ = !lean_is_exclusive(v___x_2877_);
if (v_isSharedCheck_2969_ == 0)
{
v___x_2964_ = v___x_2877_;
v_isShared_2965_ = v_isSharedCheck_2969_;
goto v_resetjp_2963_;
}
else
{
lean_inc(v_a_2962_);
lean_dec(v___x_2877_);
v___x_2964_ = lean_box(0);
v_isShared_2965_ = v_isSharedCheck_2969_;
goto v_resetjp_2963_;
}
v_resetjp_2963_:
{
lean_object* v___x_2967_; 
if (v_isShared_2965_ == 0)
{
v___x_2967_ = v___x_2964_;
goto v_reusejp_2966_;
}
else
{
lean_object* v_reuseFailAlloc_2968_; 
v_reuseFailAlloc_2968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2968_, 0, v_a_2962_);
v___x_2967_ = v_reuseFailAlloc_2968_;
goto v_reusejp_2966_;
}
v_reusejp_2966_:
{
return v___x_2967_;
}
}
}
}
v___jp_2970_:
{
uint64_t v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; 
v___x_2971_ = 0ULL;
v___x_2972_ = lean_box(0);
v___x_2973_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__8));
v___x_2974_ = lean_box(0);
v___x_2975_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
v___x_2976_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2976_, 0, v___x_2973_);
lean_ctor_set(v___x_2976_, 1, v___x_2974_);
lean_ctor_set(v___x_2976_, 2, v___x_2975_);
lean_ctor_set_float(v___x_2976_, sizeof(void*)*3, v___x_2838_);
lean_ctor_set_float(v___x_2976_, sizeof(void*)*3 + 8, v___x_2857_);
lean_ctor_set_uint8(v___x_2976_, sizeof(void*)*3 + 16, v___x_2841_);
v___x_2977_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__11, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__11_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__11);
v___x_2978_ = lean_mk_empty_array_with_capacity(v___x_2805_);
v___x_2979_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2979_, 0, v___x_2976_);
lean_ctor_set(v___x_2979_, 1, v___x_2977_);
lean_ctor_set(v___x_2979_, 2, v___x_2978_);
v___x_2980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2980_, 0, v___x_2972_);
lean_ctor_set(v___x_2980_, 1, v___x_2979_);
v___x_2981_ = lean_unsigned_to_nat(1u);
v___x_2982_ = lean_mk_empty_array_with_capacity(v___x_2981_);
v___x_2983_ = lean_array_push(v___x_2982_, v___x_2980_);
v___x_2984_ = l_Lean_Array_toPArray_x27___redArg(v___x_2983_);
lean_dec_ref(v___x_2983_);
v___x_2985_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2985_, 0, v___x_2984_);
lean_ctor_set_uint64(v___x_2985_, sizeof(void*)*1, v___x_2971_);
v_traceState_2875_ = v___x_2985_;
v___y_2876_ = v___y_2811_;
goto v___jp_2874_;
}
}
}
}
else
{
lean_object* v_a_3019_; lean_object* v___x_3021_; uint8_t v_isShared_3022_; uint8_t v_isSharedCheck_3026_; 
lean_dec_ref(v___x_2843_);
lean_dec_ref(v_opts_2832_);
lean_del_object(v___x_2817_);
lean_dec_ref(v___x_2810_);
lean_dec(v___x_2808_);
lean_dec_ref(v_parserState_2807_);
lean_dec_ref(v_fileMap_2806_);
lean_dec(v___x_2805_);
lean_dec(v_stx_2802_);
v_a_3019_ = lean_ctor_get(v___x_2845_, 0);
v_isSharedCheck_3026_ = !lean_is_exclusive(v___x_2845_);
if (v_isSharedCheck_3026_ == 0)
{
v___x_3021_ = v___x_2845_;
v_isShared_3022_ = v_isSharedCheck_3026_;
goto v_resetjp_3020_;
}
else
{
lean_inc(v_a_3019_);
lean_dec(v___x_2845_);
v___x_3021_ = lean_box(0);
v_isShared_3022_ = v_isSharedCheck_3026_;
goto v_resetjp_3020_;
}
v_resetjp_3020_:
{
lean_object* v___x_3024_; 
if (v_isShared_3022_ == 0)
{
v___x_3024_ = v___x_3021_;
goto v_reusejp_3023_;
}
else
{
lean_object* v_reuseFailAlloc_3025_; 
v_reuseFailAlloc_3025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3025_, 0, v_a_3019_);
v___x_3024_ = v_reuseFailAlloc_3025_;
goto v_reusejp_3023_;
}
v_reusejp_3023_:
{
return v___x_3024_;
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
lean_object* v_a_3030_; lean_object* v___x_3032_; uint8_t v_isShared_3033_; uint8_t v_isSharedCheck_3037_; 
lean_dec_ref(v___x_2810_);
lean_dec(v___x_2808_);
lean_dec_ref(v_parserState_2807_);
lean_dec_ref(v_fileMap_2806_);
lean_dec(v___x_2805_);
lean_dec_ref(v_toProcessingContext_2804_);
lean_dec(v_origStx_2803_);
lean_dec(v_stx_2802_);
v_a_3030_ = lean_ctor_get(v___x_2814_, 0);
v_isSharedCheck_3037_ = !lean_is_exclusive(v___x_2814_);
if (v_isSharedCheck_3037_ == 0)
{
v___x_3032_ = v___x_2814_;
v_isShared_3033_ = v_isSharedCheck_3037_;
goto v_resetjp_3031_;
}
else
{
lean_inc(v_a_3030_);
lean_dec(v___x_2814_);
v___x_3032_ = lean_box(0);
v_isShared_3033_ = v_isSharedCheck_3037_;
goto v_resetjp_3031_;
}
v_resetjp_3031_:
{
lean_object* v___x_3035_; 
if (v_isShared_3033_ == 0)
{
v___x_3035_ = v___x_3032_;
goto v_reusejp_3034_;
}
else
{
lean_object* v_reuseFailAlloc_3036_; 
v_reuseFailAlloc_3036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3036_, 0, v_a_3030_);
v___x_3035_ = v_reuseFailAlloc_3036_;
goto v_reusejp_3034_;
}
v_reusejp_3034_:
{
return v___x_3035_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___boxed(lean_object* v_setupImports_3038_, lean_object* v_stx_3039_, lean_object* v_origStx_3040_, lean_object* v_toProcessingContext_3041_, lean_object* v___x_3042_, lean_object* v_fileMap_3043_, lean_object* v_parserState_3044_, lean_object* v___x_3045_, lean_object* v___x_3046_, lean_object* v___x_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_){
_start:
{
lean_object* v_res_3050_; 
v_res_3050_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1(v_setupImports_3038_, v_stx_3039_, v_origStx_3040_, v_toProcessingContext_3041_, v___x_3042_, v_fileMap_3043_, v_parserState_3044_, v___x_3045_, v___x_3046_, v___x_3047_, v___y_3048_);
lean_dec_ref(v___y_3048_);
lean_dec_ref(v___x_3046_);
return v_res_3050_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0(void){
_start:
{
lean_object* v___x_3051_; lean_object* v___f_3052_; 
v___x_3051_ = l_Lean_Language_instInhabitedSnapshotLeaf;
v___f_3052_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__0), 2, 1);
lean_closure_set(v___f_3052_, 0, v___x_3051_);
return v___f_3052_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader(lean_object* v_setupImports_3053_, lean_object* v_stx_3054_, lean_object* v_origStx_3055_, lean_object* v_parserState_3056_, lean_object* v___y_3057_){
_start:
{
lean_object* v_toProcessingContext_3059_; lean_object* v_fileMap_3060_; lean_object* v_endPos_3061_; lean_object* v___x_3062_; lean_object* v___f_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___f_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; 
v_toProcessingContext_3059_ = lean_ctor_get(v___y_3057_, 0);
v_fileMap_3060_ = lean_ctor_get(v_toProcessingContext_3059_, 2);
v_endPos_3061_ = lean_ctor_get(v_toProcessingContext_3059_, 3);
v___x_3062_ = l_Lean_Language_instInhabitedSnapshotLeaf;
v___f_3063_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0);
v___x_3064_ = l_Lean_Elab_instInhabitedInfoTree_default;
v___x_3065_ = lean_box(0);
v___x_3066_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_fileMap_3060_);
lean_inc_ref(v_toProcessingContext_3059_);
v___f_3067_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___boxed), 12, 10);
lean_closure_set(v___f_3067_, 0, v_setupImports_3053_);
lean_closure_set(v___f_3067_, 1, v_stx_3054_);
lean_closure_set(v___f_3067_, 2, v_origStx_3055_);
lean_closure_set(v___f_3067_, 3, v_toProcessingContext_3059_);
lean_closure_set(v___f_3067_, 4, v___x_3066_);
lean_closure_set(v___f_3067_, 5, v_fileMap_3060_);
lean_closure_set(v___f_3067_, 6, v_parserState_3056_);
lean_closure_set(v___f_3067_, 7, v___x_3065_);
lean_closure_set(v___f_3067_, 8, v___x_3064_);
lean_closure_set(v___f_3067_, 9, v___x_3062_);
lean_inc(v_endPos_3061_);
v___x_3068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3068_, 0, v___x_3066_);
lean_ctor_set(v___x_3068_, 1, v_endPos_3061_);
v___x_3069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3069_, 0, v___x_3068_);
lean_inc_ref(v___y_3057_);
v___x_3070_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___boxed), 5, 4);
lean_closure_set(v___x_3070_, 0, lean_box(0));
lean_closure_set(v___x_3070_, 1, v___f_3063_);
lean_closure_set(v___x_3070_, 2, v___f_3067_);
lean_closure_set(v___x_3070_, 3, v___y_3057_);
v___x_3071_ = l_Lean_Language_SnapshotTask_ofIO___redArg(v___x_3065_, v___x_3065_, v___x_3069_, v___x_3070_);
return v___x_3071_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___boxed(lean_object* v_setupImports_3072_, lean_object* v_stx_3073_, lean_object* v_origStx_3074_, lean_object* v_parserState_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_){
_start:
{
lean_object* v_res_3078_; 
v_res_3078_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader(v_setupImports_3072_, v_stx_3073_, v_origStx_3074_, v_parserState_3075_, v___y_3076_);
lean_dec_ref(v___y_3076_);
return v_res_3078_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3081_; lean_object* v___x_3082_; 
v___x_3081_ = lean_box(0);
v___x_3082_ = l_Lean_Language_SnapshotTask_defaultReportingRange(v___x_3081_);
return v___x_3082_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4(void){
_start:
{
uint8_t v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; 
v___x_3087_ = 1;
v___x_3088_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3));
v___x_3089_ = l_Lean_Name_toString(v___x_3088_, v___x_3087_);
return v___x_3089_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__5(void){
_start:
{
uint8_t v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; 
v___x_3090_ = 0;
v___x_3091_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_3092_ = lean_box(0);
v___x_3093_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_3094_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4);
v___x_3095_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3095_, 0, v___x_3094_);
lean_ctor_set(v___x_3095_, 1, v___x_3093_);
lean_ctor_set(v___x_3095_, 2, v___x_3092_);
lean_ctor_set(v___x_3095_, 3, v___x_3091_);
lean_ctor_set_uint8(v___x_3095_, sizeof(void*)*4, v___x_3090_);
return v___x_3095_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0(lean_object* v_newParserState_3096_, lean_object* v_cmdState_3097_, lean_object* v___y_3098_, lean_object* v_toSnapshot_3099_, lean_object* v_newStx_3100_, lean_object* v_oldCmd_3101_){
_start:
{
lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; uint8_t v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v_diagnostics_3109_; lean_object* v___x_3111_; uint8_t v_isShared_3112_; uint8_t v_isSharedCheck_3131_; 
v___x_3103_ = lean_io_promise_new();
v___x_3104_ = l_IO_CancelToken_new();
v___x_3105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3105_, 0, v_oldCmd_3101_);
v___x_3106_ = 1;
v___x_3107_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__0));
lean_inc_ref(v___x_3104_);
lean_inc(v___x_3103_);
lean_inc_ref(v_cmdState_3097_);
v___x_3108_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v___x_3105_, v_newParserState_3096_, v_cmdState_3097_, v___x_3103_, v___x_3106_, v___x_3104_, v___x_3107_, v___y_3098_);
v_diagnostics_3109_ = lean_ctor_get(v_toSnapshot_3099_, 1);
v_isSharedCheck_3131_ = !lean_is_exclusive(v_toSnapshot_3099_);
if (v_isSharedCheck_3131_ == 0)
{
lean_object* v_unused_3132_; lean_object* v_unused_3133_; lean_object* v_unused_3134_; 
v_unused_3132_ = lean_ctor_get(v_toSnapshot_3099_, 3);
lean_dec(v_unused_3132_);
v_unused_3133_ = lean_ctor_get(v_toSnapshot_3099_, 2);
lean_dec(v_unused_3133_);
v_unused_3134_ = lean_ctor_get(v_toSnapshot_3099_, 0);
lean_dec(v_unused_3134_);
v___x_3111_ = v_toSnapshot_3099_;
v_isShared_3112_ = v_isSharedCheck_3131_;
goto v_resetjp_3110_;
}
else
{
lean_inc(v_diagnostics_3109_);
lean_dec(v_toSnapshot_3099_);
v___x_3111_ = lean_box(0);
v_isShared_3112_ = v_isSharedCheck_3131_;
goto v_resetjp_3110_;
}
v_resetjp_3110_:
{
lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; uint8_t v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3126_; 
v___x_3113_ = lean_box(0);
v___x_3114_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__1, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__1_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__1);
v___x_3115_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4);
v___x_3116_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_3117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3117_, 0, v___x_3104_);
v___x_3118_ = l_IO_Promise_result_x21___redArg(v___x_3103_);
lean_dec(v___x_3103_);
v___x_3119_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3119_, 0, v___x_3113_);
lean_ctor_set(v___x_3119_, 1, v___x_3114_);
lean_ctor_set(v___x_3119_, 2, v___x_3117_);
lean_ctor_set(v___x_3119_, 3, v___x_3118_);
v___x_3120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3120_, 0, v_cmdState_3097_);
lean_ctor_set(v___x_3120_, 1, v___x_3119_);
v___x_3121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3121_, 0, v___x_3120_);
v___x_3122_ = 0;
v___x_3123_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__5, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__5_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__5);
v___x_3124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3124_, 0, v_newStx_3100_);
if (v_isShared_3112_ == 0)
{
lean_ctor_set(v___x_3111_, 3, v___x_3116_);
lean_ctor_set(v___x_3111_, 2, v___x_3113_);
lean_ctor_set(v___x_3111_, 0, v___x_3115_);
v___x_3126_ = v___x_3111_;
goto v_reusejp_3125_;
}
else
{
lean_object* v_reuseFailAlloc_3130_; 
v_reuseFailAlloc_3130_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_3130_, 0, v___x_3115_);
lean_ctor_set(v_reuseFailAlloc_3130_, 1, v_diagnostics_3109_);
lean_ctor_set(v_reuseFailAlloc_3130_, 2, v___x_3113_);
lean_ctor_set(v_reuseFailAlloc_3130_, 3, v___x_3116_);
v___x_3126_ = v_reuseFailAlloc_3130_;
goto v_reusejp_3125_;
}
v_reusejp_3125_:
{
lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; 
lean_ctor_set_uint8(v___x_3126_, sizeof(void*)*4, v___x_3122_);
v___x_3127_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3124_, v___x_3126_);
v___x_3128_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3128_, 0, v___x_3123_);
lean_ctor_set(v___x_3128_, 1, v___x_3127_);
lean_ctor_set(v___x_3128_, 2, v___x_3121_);
v___x_3129_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3113_, v___x_3128_);
return v___x_3129_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___boxed(lean_object* v_newParserState_3135_, lean_object* v_cmdState_3136_, lean_object* v___y_3137_, lean_object* v_toSnapshot_3138_, lean_object* v_newStx_3139_, lean_object* v_oldCmd_3140_, lean_object* v___y_3141_){
_start:
{
lean_object* v_res_3142_; 
v_res_3142_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0(v_newParserState_3135_, v_cmdState_3136_, v___y_3137_, v_toSnapshot_3138_, v_newStx_3139_, v_oldCmd_3140_);
lean_dec_ref(v___y_3137_);
return v_res_3142_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__1(lean_object* v_newParserState_3143_, lean_object* v___y_3144_, lean_object* v_newStx_3145_, lean_object* v___x_3146_, lean_object* v_oldProcessed_3147_){
_start:
{
lean_object* v_result_x3f_3149_; 
v_result_x3f_3149_ = lean_ctor_get(v_oldProcessed_3147_, 2);
if (lean_obj_tag(v_result_x3f_3149_) == 1)
{
lean_object* v_val_3150_; lean_object* v_firstCmdSnap_3151_; lean_object* v_toSnapshot_3152_; lean_object* v_cmdState_3153_; lean_object* v_stx_x3f_3154_; lean_object* v___f_3155_; lean_object* v___x_3156_; uint8_t v___x_3157_; lean_object* v___x_3158_; 
v_val_3150_ = lean_ctor_get(v_result_x3f_3149_, 0);
lean_inc(v_val_3150_);
v_firstCmdSnap_3151_ = lean_ctor_get(v_val_3150_, 1);
lean_inc_ref(v_firstCmdSnap_3151_);
v_toSnapshot_3152_ = lean_ctor_get(v_oldProcessed_3147_, 0);
lean_inc_ref(v_toSnapshot_3152_);
lean_dec_ref(v_oldProcessed_3147_);
v_cmdState_3153_ = lean_ctor_get(v_val_3150_, 0);
lean_inc_ref(v_cmdState_3153_);
lean_dec(v_val_3150_);
v_stx_x3f_3154_ = lean_ctor_get(v_firstCmdSnap_3151_, 0);
lean_inc(v_stx_x3f_3154_);
lean_inc_ref(v___y_3144_);
v___f_3155_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___boxed), 7, 5);
lean_closure_set(v___f_3155_, 0, v_newParserState_3143_);
lean_closure_set(v___f_3155_, 1, v_cmdState_3153_);
lean_closure_set(v___f_3155_, 2, v___y_3144_);
lean_closure_set(v___f_3155_, 3, v_toSnapshot_3152_);
lean_closure_set(v___f_3155_, 4, v_newStx_3145_);
v___x_3156_ = lean_box(0);
v___x_3157_ = 1;
v___x_3158_ = l_Lean_Language_SnapshotTask_bindIO___redArg(v_firstCmdSnap_3151_, v___f_3155_, v_stx_x3f_3154_, v___x_3146_, v___x_3156_, v___x_3157_);
return v___x_3158_;
}
else
{
lean_object* v___x_3159_; lean_object* v___x_3160_; 
lean_dec(v___x_3146_);
lean_dec_ref(v_newParserState_3143_);
v___x_3159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3159_, 0, v_newStx_3145_);
v___x_3160_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3159_, v_oldProcessed_3147_);
return v___x_3160_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__1___boxed(lean_object* v_newParserState_3161_, lean_object* v___y_3162_, lean_object* v_newStx_3163_, lean_object* v___x_3164_, lean_object* v_oldProcessed_3165_, lean_object* v___y_3166_){
_start:
{
lean_object* v_res_3167_; 
v_res_3167_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__1(v_newParserState_3161_, v___y_3162_, v_newStx_3163_, v___x_3164_, v_oldProcessed_3165_);
lean_dec_ref(v___y_3162_);
return v_res_3167_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___closed__0(void){
_start:
{
uint8_t v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; 
v___x_3168_ = 0;
v___x_3169_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_3170_ = lean_box(0);
v___x_3171_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_3172_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4);
v___x_3173_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3173_, 0, v___x_3172_);
lean_ctor_set(v___x_3173_, 1, v___x_3171_);
lean_ctor_set(v___x_3173_, 2, v___x_3170_);
lean_ctor_set(v___x_3173_, 3, v___x_3169_);
lean_ctor_set_uint8(v___x_3173_, sizeof(void*)*4, v___x_3168_);
return v___x_3173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2(lean_object* v_toProcessingContext_3174_, lean_object* v___y_3175_, lean_object* v_old_3176_, lean_object* v_newStx_3177_, lean_object* v_newParserState_3178_, lean_object* v___y_3179_){
_start:
{
lean_object* v_result_x3f_3181_; 
v_result_x3f_3181_ = lean_ctor_get(v_old_3176_, 4);
lean_inc(v_result_x3f_3181_);
if (lean_obj_tag(v_result_x3f_3181_) == 1)
{
lean_object* v_val_3182_; lean_object* v___x_3184_; uint8_t v_isShared_3185_; uint8_t v_isSharedCheck_3236_; 
v_val_3182_ = lean_ctor_get(v_result_x3f_3181_, 0);
v_isSharedCheck_3236_ = !lean_is_exclusive(v_result_x3f_3181_);
if (v_isSharedCheck_3236_ == 0)
{
v___x_3184_ = v_result_x3f_3181_;
v_isShared_3185_ = v_isSharedCheck_3236_;
goto v_resetjp_3183_;
}
else
{
lean_inc(v_val_3182_);
lean_dec(v_result_x3f_3181_);
v___x_3184_ = lean_box(0);
v_isShared_3185_ = v_isSharedCheck_3236_;
goto v_resetjp_3183_;
}
v_resetjp_3183_:
{
lean_object* v_processedSnap_3186_; lean_object* v___x_3188_; uint8_t v_isShared_3189_; uint8_t v_isSharedCheck_3234_; 
v_processedSnap_3186_ = lean_ctor_get(v_val_3182_, 1);
v_isSharedCheck_3234_ = !lean_is_exclusive(v_val_3182_);
if (v_isSharedCheck_3234_ == 0)
{
lean_object* v_unused_3235_; 
v_unused_3235_ = lean_ctor_get(v_val_3182_, 0);
lean_dec(v_unused_3235_);
v___x_3188_ = v_val_3182_;
v_isShared_3189_ = v_isSharedCheck_3234_;
goto v_resetjp_3187_;
}
else
{
lean_inc(v_processedSnap_3186_);
lean_dec(v_val_3182_);
v___x_3188_ = lean_box(0);
v_isShared_3189_ = v_isSharedCheck_3234_;
goto v_resetjp_3187_;
}
v_resetjp_3187_:
{
lean_object* v_toSnapshot_3190_; lean_object* v___x_3192_; uint8_t v_isShared_3193_; uint8_t v_isSharedCheck_3229_; 
v_toSnapshot_3190_ = lean_ctor_get(v_old_3176_, 0);
v_isSharedCheck_3229_ = !lean_is_exclusive(v_old_3176_);
if (v_isSharedCheck_3229_ == 0)
{
lean_object* v_unused_3230_; lean_object* v_unused_3231_; lean_object* v_unused_3232_; lean_object* v_unused_3233_; 
v_unused_3230_ = lean_ctor_get(v_old_3176_, 4);
lean_dec(v_unused_3230_);
v_unused_3231_ = lean_ctor_get(v_old_3176_, 3);
lean_dec(v_unused_3231_);
v_unused_3232_ = lean_ctor_get(v_old_3176_, 2);
lean_dec(v_unused_3232_);
v_unused_3233_ = lean_ctor_get(v_old_3176_, 1);
lean_dec(v_unused_3233_);
v___x_3192_ = v_old_3176_;
v_isShared_3193_ = v_isSharedCheck_3229_;
goto v_resetjp_3191_;
}
else
{
lean_inc(v_toSnapshot_3190_);
lean_dec(v_old_3176_);
v___x_3192_ = lean_box(0);
v_isShared_3193_ = v_isSharedCheck_3229_;
goto v_resetjp_3191_;
}
v_resetjp_3191_:
{
lean_object* v_pos_3194_; lean_object* v_endPos_3195_; lean_object* v_stx_x3f_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___f_3199_; lean_object* v___x_3200_; uint8_t v___x_3201_; lean_object* v___x_3202_; lean_object* v_diagnostics_3203_; lean_object* v___x_3205_; uint8_t v_isShared_3206_; uint8_t v_isSharedCheck_3225_; 
v_pos_3194_ = lean_ctor_get(v_newParserState_3178_, 0);
v_endPos_3195_ = lean_ctor_get(v_toProcessingContext_3174_, 3);
v_stx_x3f_3196_ = lean_ctor_get(v_processedSnap_3186_, 0);
lean_inc(v_stx_x3f_3196_);
lean_inc(v_endPos_3195_);
lean_inc(v_pos_3194_);
v___x_3197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3197_, 0, v_pos_3194_);
lean_ctor_set(v___x_3197_, 1, v_endPos_3195_);
v___x_3198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3198_, 0, v___x_3197_);
lean_inc_ref(v___x_3198_);
lean_inc(v_newStx_3177_);
lean_inc_ref(v___y_3175_);
lean_inc_ref(v_newParserState_3178_);
v___f_3199_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__1___boxed), 6, 4);
lean_closure_set(v___f_3199_, 0, v_newParserState_3178_);
lean_closure_set(v___f_3199_, 1, v___y_3175_);
lean_closure_set(v___f_3199_, 2, v_newStx_3177_);
lean_closure_set(v___f_3199_, 3, v___x_3198_);
v___x_3200_ = lean_box(0);
v___x_3201_ = 1;
v___x_3202_ = l_Lean_Language_SnapshotTask_bindIO___redArg(v_processedSnap_3186_, v___f_3199_, v_stx_x3f_3196_, v___x_3198_, v___x_3200_, v___x_3201_);
v_diagnostics_3203_ = lean_ctor_get(v_toSnapshot_3190_, 1);
v_isSharedCheck_3225_ = !lean_is_exclusive(v_toSnapshot_3190_);
if (v_isSharedCheck_3225_ == 0)
{
lean_object* v_unused_3226_; lean_object* v_unused_3227_; lean_object* v_unused_3228_; 
v_unused_3226_ = lean_ctor_get(v_toSnapshot_3190_, 3);
lean_dec(v_unused_3226_);
v_unused_3227_ = lean_ctor_get(v_toSnapshot_3190_, 2);
lean_dec(v_unused_3227_);
v_unused_3228_ = lean_ctor_get(v_toSnapshot_3190_, 0);
lean_dec(v_unused_3228_);
v___x_3205_ = v_toSnapshot_3190_;
v_isShared_3206_ = v_isSharedCheck_3225_;
goto v_resetjp_3204_;
}
else
{
lean_inc(v_diagnostics_3203_);
lean_dec(v_toSnapshot_3190_);
v___x_3205_ = lean_box(0);
v_isShared_3206_ = v_isSharedCheck_3225_;
goto v_resetjp_3204_;
}
v_resetjp_3204_:
{
lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3210_; 
v___x_3207_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4);
v___x_3208_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
if (v_isShared_3189_ == 0)
{
lean_ctor_set(v___x_3188_, 1, v___x_3202_);
lean_ctor_set(v___x_3188_, 0, v_newParserState_3178_);
v___x_3210_ = v___x_3188_;
goto v_reusejp_3209_;
}
else
{
lean_object* v_reuseFailAlloc_3224_; 
v_reuseFailAlloc_3224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3224_, 0, v_newParserState_3178_);
lean_ctor_set(v_reuseFailAlloc_3224_, 1, v___x_3202_);
v___x_3210_ = v_reuseFailAlloc_3224_;
goto v_reusejp_3209_;
}
v_reusejp_3209_:
{
lean_object* v___x_3212_; 
if (v_isShared_3185_ == 0)
{
lean_ctor_set(v___x_3184_, 0, v___x_3210_);
v___x_3212_ = v___x_3184_;
goto v_reusejp_3211_;
}
else
{
lean_object* v_reuseFailAlloc_3223_; 
v_reuseFailAlloc_3223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3223_, 0, v___x_3210_);
v___x_3212_ = v_reuseFailAlloc_3223_;
goto v_reusejp_3211_;
}
v_reusejp_3211_:
{
uint8_t v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3217_; 
v___x_3213_ = 0;
v___x_3214_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___closed__0);
lean_inc(v_newStx_3177_);
v___x_3215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3215_, 0, v_newStx_3177_);
if (v_isShared_3206_ == 0)
{
lean_ctor_set(v___x_3205_, 3, v___x_3208_);
lean_ctor_set(v___x_3205_, 2, v___x_3200_);
lean_ctor_set(v___x_3205_, 0, v___x_3207_);
v___x_3217_ = v___x_3205_;
goto v_reusejp_3216_;
}
else
{
lean_object* v_reuseFailAlloc_3222_; 
v_reuseFailAlloc_3222_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_3222_, 0, v___x_3207_);
lean_ctor_set(v_reuseFailAlloc_3222_, 1, v_diagnostics_3203_);
lean_ctor_set(v_reuseFailAlloc_3222_, 2, v___x_3200_);
lean_ctor_set(v_reuseFailAlloc_3222_, 3, v___x_3208_);
v___x_3217_ = v_reuseFailAlloc_3222_;
goto v_reusejp_3216_;
}
v_reusejp_3216_:
{
lean_object* v___x_3218_; lean_object* v___x_3220_; 
lean_ctor_set_uint8(v___x_3217_, sizeof(void*)*4, v___x_3213_);
v___x_3218_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3215_, v___x_3217_);
if (v_isShared_3193_ == 0)
{
lean_ctor_set(v___x_3192_, 4, v___x_3212_);
lean_ctor_set(v___x_3192_, 3, v_newStx_3177_);
lean_ctor_set(v___x_3192_, 2, v_toProcessingContext_3174_);
lean_ctor_set(v___x_3192_, 1, v___x_3218_);
lean_ctor_set(v___x_3192_, 0, v___x_3214_);
v___x_3220_ = v___x_3192_;
goto v_reusejp_3219_;
}
else
{
lean_object* v_reuseFailAlloc_3221_; 
v_reuseFailAlloc_3221_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3221_, 0, v___x_3214_);
lean_ctor_set(v_reuseFailAlloc_3221_, 1, v___x_3218_);
lean_ctor_set(v_reuseFailAlloc_3221_, 2, v_toProcessingContext_3174_);
lean_ctor_set(v_reuseFailAlloc_3221_, 3, v_newStx_3177_);
lean_ctor_set(v_reuseFailAlloc_3221_, 4, v___x_3212_);
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
}
}
else
{
lean_dec(v_result_x3f_3181_);
lean_dec_ref(v_newParserState_3178_);
lean_dec(v_newStx_3177_);
lean_dec_ref(v_toProcessingContext_3174_);
return v_old_3176_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___boxed(lean_object* v_toProcessingContext_3237_, lean_object* v___y_3238_, lean_object* v_old_3239_, lean_object* v_newStx_3240_, lean_object* v_newParserState_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_){
_start:
{
lean_object* v_res_3244_; 
v_res_3244_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2(v_toProcessingContext_3237_, v___y_3238_, v_old_3239_, v_newStx_3240_, v_newParserState_3241_, v___y_3242_);
lean_dec_ref(v___y_3242_);
lean_dec_ref(v___y_3238_);
return v_res_3244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__3(lean_object* v_toProcessingContext_3245_, lean_object* v_setupImports_3246_, lean_object* v_old_x3f_3247_, lean_object* v___x_3248_, lean_object* v___f_3249_, lean_object* v___y_3250_){
_start:
{
lean_object* v___x_3252_; 
lean_inc_ref(v_toProcessingContext_3245_);
v___x_3252_ = l_Lean_Parser_parseHeader(v_toProcessingContext_3245_);
if (lean_obj_tag(v___x_3252_) == 0)
{
lean_object* v_a_3253_; lean_object* v___x_3255_; uint8_t v_isShared_3256_; uint8_t v_isSharedCheck_3321_; 
v_a_3253_ = lean_ctor_get(v___x_3252_, 0);
v_isSharedCheck_3321_ = !lean_is_exclusive(v___x_3252_);
if (v_isSharedCheck_3321_ == 0)
{
v___x_3255_ = v___x_3252_;
v_isShared_3256_ = v_isSharedCheck_3321_;
goto v_resetjp_3254_;
}
else
{
lean_inc(v_a_3253_);
lean_dec(v___x_3252_);
v___x_3255_ = lean_box(0);
v_isShared_3256_ = v_isSharedCheck_3321_;
goto v_resetjp_3254_;
}
v_resetjp_3254_:
{
lean_object* v_snd_3257_; lean_object* v_fst_3258_; lean_object* v_fst_3259_; lean_object* v_snd_3260_; lean_object* v___x_3262_; uint8_t v_isShared_3263_; uint8_t v_isSharedCheck_3320_; 
v_snd_3257_ = lean_ctor_get(v_a_3253_, 1);
lean_inc(v_snd_3257_);
v_fst_3258_ = lean_ctor_get(v_a_3253_, 0);
lean_inc(v_fst_3258_);
lean_dec(v_a_3253_);
v_fst_3259_ = lean_ctor_get(v_snd_3257_, 0);
v_snd_3260_ = lean_ctor_get(v_snd_3257_, 1);
v_isSharedCheck_3320_ = !lean_is_exclusive(v_snd_3257_);
if (v_isSharedCheck_3320_ == 0)
{
v___x_3262_ = v_snd_3257_;
v_isShared_3263_ = v_isSharedCheck_3320_;
goto v_resetjp_3261_;
}
else
{
lean_inc(v_snd_3260_);
lean_inc(v_fst_3259_);
lean_dec(v_snd_3257_);
v___x_3262_ = lean_box(0);
v_isShared_3263_ = v_isSharedCheck_3320_;
goto v_resetjp_3261_;
}
v_resetjp_3261_:
{
uint8_t v___x_3264_; 
v___x_3264_ = l_Lean_MessageLog_hasErrors(v_snd_3260_);
if (v___x_3264_ == 0)
{
lean_object* v___x_3265_; lean_object* v___y_3267_; 
lean_inc(v_fst_3258_);
v___x_3265_ = l_Lean_Syntax_unsetTrailing(v_fst_3258_);
if (lean_obj_tag(v_old_x3f_3247_) == 1)
{
lean_object* v_val_3288_; lean_object* v___x_3290_; uint8_t v_isShared_3291_; uint8_t v_isSharedCheck_3303_; 
v_val_3288_ = lean_ctor_get(v_old_x3f_3247_, 0);
v_isSharedCheck_3303_ = !lean_is_exclusive(v_old_x3f_3247_);
if (v_isSharedCheck_3303_ == 0)
{
v___x_3290_ = v_old_x3f_3247_;
v_isShared_3291_ = v_isSharedCheck_3303_;
goto v_resetjp_3289_;
}
else
{
lean_inc(v_val_3288_);
lean_dec(v_old_x3f_3247_);
v___x_3290_ = lean_box(0);
v_isShared_3291_ = v_isSharedCheck_3303_;
goto v_resetjp_3289_;
}
v_resetjp_3289_:
{
lean_object* v_stx_3292_; lean_object* v_result_x3f_3293_; lean_object* v___x_3294_; uint8_t v___x_3295_; 
v_stx_3292_ = lean_ctor_get(v_val_3288_, 3);
v_result_x3f_3293_ = lean_ctor_get(v_val_3288_, 4);
lean_inc(v_stx_3292_);
v___x_3294_ = l_Lean_Syntax_unsetTrailing(v_stx_3292_);
lean_inc(v___x_3265_);
v___x_3295_ = l_Lean_Syntax_eqWithInfo(v___x_3265_, v___x_3294_);
if (v___x_3295_ == 0)
{
lean_inc(v_result_x3f_3293_);
lean_del_object(v___x_3290_);
lean_dec(v_val_3288_);
lean_dec_ref(v___f_3249_);
if (lean_obj_tag(v_result_x3f_3293_) == 0)
{
lean_dec_ref(v___x_3248_);
v___y_3267_ = v___y_3250_;
goto v___jp_3266_;
}
else
{
lean_object* v_val_3296_; lean_object* v_processedSnap_3297_; lean_object* v___x_3298_; 
v_val_3296_ = lean_ctor_get(v_result_x3f_3293_, 0);
lean_inc(v_val_3296_);
lean_dec_ref_known(v_result_x3f_3293_, 1);
v_processedSnap_3297_ = lean_ctor_get(v_val_3296_, 1);
lean_inc_ref(v_processedSnap_3297_);
lean_dec(v_val_3296_);
v___x_3298_ = l_Lean_Language_SnapshotTask_cancelRec___redArg(v___x_3248_, v_processedSnap_3297_);
v___y_3267_ = v___y_3250_;
goto v___jp_3266_;
}
}
else
{
lean_object* v___x_3299_; lean_object* v___x_3301_; 
lean_dec(v___x_3265_);
lean_del_object(v___x_3262_);
lean_dec(v_snd_3260_);
lean_del_object(v___x_3255_);
lean_dec_ref(v___x_3248_);
lean_dec_ref(v_setupImports_3246_);
lean_dec_ref(v_toProcessingContext_3245_);
lean_inc_ref(v___y_3250_);
v___x_3299_ = lean_apply_5(v___f_3249_, v_val_3288_, v_fst_3258_, v_fst_3259_, v___y_3250_, lean_box(0));
if (v_isShared_3291_ == 0)
{
lean_ctor_set_tag(v___x_3290_, 0);
lean_ctor_set(v___x_3290_, 0, v___x_3299_);
v___x_3301_ = v___x_3290_;
goto v_reusejp_3300_;
}
else
{
lean_object* v_reuseFailAlloc_3302_; 
v_reuseFailAlloc_3302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3302_, 0, v___x_3299_);
v___x_3301_ = v_reuseFailAlloc_3302_;
goto v_reusejp_3300_;
}
v_reusejp_3300_:
{
return v___x_3301_;
}
}
}
}
else
{
lean_dec_ref(v___f_3249_);
lean_dec_ref(v___x_3248_);
lean_dec(v_old_x3f_3247_);
v___y_3267_ = v___y_3250_;
goto v___jp_3266_;
}
v___jp_3266_:
{
lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3277_; 
v___x_3268_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_snd_3260_);
lean_inc(v_fst_3259_);
lean_inc(v_fst_3258_);
v___x_3269_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader(v_setupImports_3246_, v___x_3265_, v_fst_3258_, v_fst_3259_, v___y_3267_);
v___x_3270_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4);
v___x_3271_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_3272_ = lean_box(0);
v___x_3273_ = lean_unsigned_to_nat(32u);
v___x_3274_ = lean_mk_empty_array_with_capacity(v___x_3273_);
lean_dec_ref(v___x_3274_);
v___x_3275_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
if (v_isShared_3263_ == 0)
{
lean_ctor_set(v___x_3262_, 1, v___x_3269_);
v___x_3277_ = v___x_3262_;
goto v_reusejp_3276_;
}
else
{
lean_object* v_reuseFailAlloc_3287_; 
v_reuseFailAlloc_3287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3287_, 0, v_fst_3259_);
lean_ctor_set(v_reuseFailAlloc_3287_, 1, v___x_3269_);
v___x_3277_ = v_reuseFailAlloc_3287_;
goto v_reusejp_3276_;
}
v_reusejp_3276_:
{
lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3285_; 
v___x_3278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3278_, 0, v___x_3277_);
v___x_3279_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3279_, 0, v___x_3270_);
lean_ctor_set(v___x_3279_, 1, v___x_3271_);
lean_ctor_set(v___x_3279_, 2, v___x_3272_);
lean_ctor_set(v___x_3279_, 3, v___x_3275_);
lean_ctor_set_uint8(v___x_3279_, sizeof(void*)*4, v___x_3264_);
lean_inc(v_fst_3258_);
v___x_3280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3280_, 0, v_fst_3258_);
v___x_3281_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3281_, 0, v___x_3270_);
lean_ctor_set(v___x_3281_, 1, v___x_3268_);
lean_ctor_set(v___x_3281_, 2, v___x_3272_);
lean_ctor_set(v___x_3281_, 3, v___x_3275_);
lean_ctor_set_uint8(v___x_3281_, sizeof(void*)*4, v___x_3264_);
v___x_3282_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3280_, v___x_3281_);
v___x_3283_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3283_, 0, v___x_3279_);
lean_ctor_set(v___x_3283_, 1, v___x_3282_);
lean_ctor_set(v___x_3283_, 2, v_toProcessingContext_3245_);
lean_ctor_set(v___x_3283_, 3, v_fst_3258_);
lean_ctor_set(v___x_3283_, 4, v___x_3278_);
if (v_isShared_3256_ == 0)
{
lean_ctor_set(v___x_3255_, 0, v___x_3283_);
v___x_3285_ = v___x_3255_;
goto v_reusejp_3284_;
}
else
{
lean_object* v_reuseFailAlloc_3286_; 
v_reuseFailAlloc_3286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3286_, 0, v___x_3283_);
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
lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; uint8_t v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3318_; 
lean_del_object(v___x_3262_);
lean_dec(v_fst_3259_);
lean_dec_ref(v___f_3249_);
lean_dec_ref(v___x_3248_);
lean_dec(v_old_x3f_3247_);
lean_dec_ref(v_setupImports_3246_);
v___x_3304_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_snd_3260_);
v___x_3305_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4);
v___x_3306_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_3307_ = lean_box(0);
v___x_3308_ = lean_unsigned_to_nat(32u);
v___x_3309_ = lean_mk_empty_array_with_capacity(v___x_3308_);
lean_dec_ref(v___x_3309_);
v___x_3310_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_3311_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3311_, 0, v___x_3305_);
lean_ctor_set(v___x_3311_, 1, v___x_3306_);
lean_ctor_set(v___x_3311_, 2, v___x_3307_);
lean_ctor_set(v___x_3311_, 3, v___x_3310_);
lean_ctor_set_uint8(v___x_3311_, sizeof(void*)*4, v___x_3264_);
lean_inc(v_fst_3258_);
v___x_3312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3312_, 0, v_fst_3258_);
v___x_3313_ = 0;
v___x_3314_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3314_, 0, v___x_3305_);
lean_ctor_set(v___x_3314_, 1, v___x_3304_);
lean_ctor_set(v___x_3314_, 2, v___x_3307_);
lean_ctor_set(v___x_3314_, 3, v___x_3310_);
lean_ctor_set_uint8(v___x_3314_, sizeof(void*)*4, v___x_3313_);
v___x_3315_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3312_, v___x_3314_);
v___x_3316_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3316_, 0, v___x_3311_);
lean_ctor_set(v___x_3316_, 1, v___x_3315_);
lean_ctor_set(v___x_3316_, 2, v_toProcessingContext_3245_);
lean_ctor_set(v___x_3316_, 3, v_fst_3258_);
lean_ctor_set(v___x_3316_, 4, v___x_3307_);
if (v_isShared_3256_ == 0)
{
lean_ctor_set(v___x_3255_, 0, v___x_3316_);
v___x_3318_ = v___x_3255_;
goto v_reusejp_3317_;
}
else
{
lean_object* v_reuseFailAlloc_3319_; 
v_reuseFailAlloc_3319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3319_, 0, v___x_3316_);
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
else
{
lean_object* v_a_3322_; lean_object* v___x_3324_; uint8_t v_isShared_3325_; uint8_t v_isSharedCheck_3329_; 
lean_dec_ref(v___f_3249_);
lean_dec_ref(v___x_3248_);
lean_dec(v_old_x3f_3247_);
lean_dec_ref(v_setupImports_3246_);
lean_dec_ref(v_toProcessingContext_3245_);
v_a_3322_ = lean_ctor_get(v___x_3252_, 0);
v_isSharedCheck_3329_ = !lean_is_exclusive(v___x_3252_);
if (v_isSharedCheck_3329_ == 0)
{
v___x_3324_ = v___x_3252_;
v_isShared_3325_ = v_isSharedCheck_3329_;
goto v_resetjp_3323_;
}
else
{
lean_inc(v_a_3322_);
lean_dec(v___x_3252_);
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
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__3___boxed(lean_object* v_toProcessingContext_3330_, lean_object* v_setupImports_3331_, lean_object* v_old_x3f_3332_, lean_object* v___x_3333_, lean_object* v___f_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_){
_start:
{
lean_object* v_res_3337_; 
v_res_3337_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__3(v_toProcessingContext_3330_, v_setupImports_3331_, v_old_x3f_3332_, v___x_3333_, v___f_3334_, v___y_3335_);
lean_dec_ref(v___y_3335_);
return v_res_3337_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__4(lean_object* v___x_3338_, lean_object* v_toProcessingContext_3339_, lean_object* v_x_3340_){
_start:
{
lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; 
v___x_3341_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v___x_3338_);
v___x_3342_ = lean_box(0);
v___x_3343_ = lean_box(0);
v___x_3344_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3344_, 0, v_x_3340_);
lean_ctor_set(v___x_3344_, 1, v___x_3341_);
lean_ctor_set(v___x_3344_, 2, v_toProcessingContext_3339_);
lean_ctor_set(v___x_3344_, 3, v___x_3342_);
lean_ctor_set(v___x_3344_, 4, v___x_3343_);
return v___x_3344_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader(lean_object* v_setupImports_3345_, lean_object* v_old_x3f_3346_, lean_object* v___y_3347_){
_start:
{
lean_object* v_toProcessingContext_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___f_3352_; lean_object* v___f_3353_; lean_object* v___f_3354_; 
v_toProcessingContext_3349_ = lean_ctor_get(v___y_3347_, 0);
v___x_3350_ = l_Lean_Language_instInhabitedSnapshotLeaf;
v___x_3351_ = l_Lean_Language_Lean_instToSnapshotTreeHeaderProcessedSnapshot;
lean_inc_ref(v___y_3347_);
lean_inc_ref_n(v_toProcessingContext_3349_, 3);
v___f_3352_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___boxed), 7, 2);
lean_closure_set(v___f_3352_, 0, v_toProcessingContext_3349_);
lean_closure_set(v___f_3352_, 1, v___y_3347_);
lean_inc(v_old_x3f_3346_);
v___f_3353_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__3___boxed), 7, 5);
lean_closure_set(v___f_3353_, 0, v_toProcessingContext_3349_);
lean_closure_set(v___f_3353_, 1, v_setupImports_3345_);
lean_closure_set(v___f_3353_, 2, v_old_x3f_3346_);
lean_closure_set(v___f_3353_, 3, v___x_3351_);
lean_closure_set(v___f_3353_, 4, v___f_3352_);
v___f_3354_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__4), 3, 2);
lean_closure_set(v___f_3354_, 0, v___x_3350_);
lean_closure_set(v___f_3354_, 1, v_toProcessingContext_3349_);
if (lean_obj_tag(v_old_x3f_3346_) == 1)
{
lean_object* v_val_3355_; lean_object* v_result_x3f_3356_; 
v_val_3355_ = lean_ctor_get(v_old_x3f_3346_, 0);
lean_inc(v_val_3355_);
lean_dec_ref_known(v_old_x3f_3346_, 1);
v_result_x3f_3356_ = lean_ctor_get(v_val_3355_, 4);
if (lean_obj_tag(v_result_x3f_3356_) == 1)
{
lean_object* v_stx_3357_; lean_object* v_val_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; 
v_stx_3357_ = lean_ctor_get(v_val_3355_, 3);
lean_inc(v_stx_3357_);
v_val_3358_ = lean_ctor_get(v_result_x3f_3356_, 0);
lean_inc(v_val_3355_);
v___x_3359_ = l_Lean_Language_Lean_HeaderParsedSnapshot_processedResult(v_val_3355_);
v___x_3360_ = l_Lean_Language_SnapshotTask_get_x3f___redArg(v___x_3359_);
if (lean_obj_tag(v___x_3360_) == 1)
{
lean_object* v_val_3361_; 
v_val_3361_ = lean_ctor_get(v___x_3360_, 0);
lean_inc(v_val_3361_);
lean_dec_ref_known(v___x_3360_, 1);
if (lean_obj_tag(v_val_3361_) == 1)
{
lean_object* v_val_3362_; lean_object* v_firstCmdSnap_3363_; lean_object* v___x_3364_; 
v_val_3362_ = lean_ctor_get(v_val_3361_, 0);
lean_inc(v_val_3362_);
lean_dec_ref_known(v_val_3361_, 1);
v_firstCmdSnap_3363_ = lean_ctor_get(v_val_3362_, 1);
lean_inc_ref(v_firstCmdSnap_3363_);
lean_dec(v_val_3362_);
v___x_3364_ = l_Lean_Language_SnapshotTask_get_x3f___redArg(v_firstCmdSnap_3363_);
if (lean_obj_tag(v___x_3364_) == 1)
{
lean_object* v_val_3365_; lean_object* v_nextCmdSnap_x3f_3366_; 
v_val_3365_ = lean_ctor_get(v___x_3364_, 0);
lean_inc(v_val_3365_);
lean_dec_ref_known(v___x_3364_, 1);
v_nextCmdSnap_x3f_3366_ = lean_ctor_get(v_val_3365_, 4);
lean_inc(v_nextCmdSnap_x3f_3366_);
lean_dec(v_val_3365_);
if (lean_obj_tag(v_nextCmdSnap_x3f_3366_) == 0)
{
lean_object* v___x_3367_; 
lean_dec(v_stx_3357_);
lean_dec(v_val_3355_);
v___x_3367_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3354_, v___f_3353_, v___y_3347_);
return v___x_3367_;
}
else
{
lean_object* v_val_3368_; lean_object* v___x_3369_; 
v_val_3368_ = lean_ctor_get(v_nextCmdSnap_x3f_3366_, 0);
lean_inc(v_val_3368_);
lean_dec_ref_known(v_nextCmdSnap_x3f_3366_, 1);
v___x_3369_ = l_Lean_Language_SnapshotTask_get_x3f___redArg(v_val_3368_);
if (lean_obj_tag(v___x_3369_) == 1)
{
lean_object* v_val_3370_; lean_object* v_parserState_3371_; lean_object* v_pos_3372_; uint8_t v___x_3373_; 
v_val_3370_ = lean_ctor_get(v___x_3369_, 0);
lean_inc(v_val_3370_);
lean_dec_ref_known(v___x_3369_, 1);
v_parserState_3371_ = lean_ctor_get(v_val_3370_, 2);
lean_inc_ref(v_parserState_3371_);
lean_dec(v_val_3370_);
v_pos_3372_ = lean_ctor_get(v_parserState_3371_, 0);
lean_inc(v_pos_3372_);
lean_dec_ref(v_parserState_3371_);
v___x_3373_ = l_Lean_Language_Lean_isBeforeEditPos(v_pos_3372_, v___y_3347_);
lean_dec(v_pos_3372_);
if (v___x_3373_ == 0)
{
lean_object* v___x_3374_; 
lean_dec(v_stx_3357_);
lean_dec(v_val_3355_);
v___x_3374_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3354_, v___f_3353_, v___y_3347_);
return v___x_3374_;
}
else
{
lean_object* v_parserState_3375_; lean_object* v___x_3376_; 
lean_dec_ref(v___f_3354_);
lean_dec_ref(v___f_3353_);
v_parserState_3375_ = lean_ctor_get(v_val_3358_, 0);
lean_inc_ref(v_parserState_3375_);
lean_inc_ref(v_toProcessingContext_3349_);
v___x_3376_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2(v_toProcessingContext_3349_, v___y_3347_, v_val_3355_, v_stx_3357_, v_parserState_3375_, v___y_3347_);
return v___x_3376_;
}
}
else
{
lean_object* v___x_3377_; 
lean_dec(v___x_3369_);
lean_dec(v_stx_3357_);
lean_dec(v_val_3355_);
v___x_3377_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3354_, v___f_3353_, v___y_3347_);
return v___x_3377_;
}
}
}
else
{
lean_object* v___x_3378_; 
lean_dec(v___x_3364_);
lean_dec(v_stx_3357_);
lean_dec(v_val_3355_);
v___x_3378_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3354_, v___f_3353_, v___y_3347_);
return v___x_3378_;
}
}
else
{
lean_object* v___x_3379_; 
lean_dec(v_val_3361_);
lean_dec(v_stx_3357_);
lean_dec(v_val_3355_);
v___x_3379_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3354_, v___f_3353_, v___y_3347_);
return v___x_3379_;
}
}
else
{
lean_object* v___x_3380_; 
lean_dec(v___x_3360_);
lean_dec(v_stx_3357_);
lean_dec(v_val_3355_);
v___x_3380_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3354_, v___f_3353_, v___y_3347_);
return v___x_3380_;
}
}
else
{
lean_object* v___x_3381_; 
lean_dec(v_val_3355_);
v___x_3381_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3354_, v___f_3353_, v___y_3347_);
return v___x_3381_;
}
}
else
{
lean_object* v___x_3382_; 
lean_dec(v_old_x3f_3346_);
v___x_3382_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3354_, v___f_3353_, v___y_3347_);
return v___x_3382_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___boxed(lean_object* v_setupImports_3383_, lean_object* v_old_x3f_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_){
_start:
{
lean_object* v_res_3387_; 
v_res_3387_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader(v_setupImports_3383_, v_old_x3f_3384_, v___y_3385_);
lean_dec_ref(v___y_3385_);
return v_res_3387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_process(lean_object* v_setupImports_3388_, lean_object* v_old_x3f_3389_, lean_object* v___y_3390_){
_start:
{
lean_object* v___x_3392_; 
lean_inc(v_old_x3f_3389_);
v___x_3392_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___boxed), 4, 2);
lean_closure_set(v___x_3392_, 0, v_setupImports_3388_);
lean_closure_set(v___x_3392_, 1, v_old_x3f_3389_);
if (lean_obj_tag(v_old_x3f_3389_) == 0)
{
lean_object* v___x_3393_; lean_object* v___x_3394_; 
v___x_3393_ = lean_box(0);
v___x_3394_ = l_Lean_Language_Lean_LeanProcessingM_run___redArg(v___x_3392_, v___x_3393_, v___y_3390_);
return v___x_3394_;
}
else
{
lean_object* v_val_3395_; lean_object* v___x_3397_; uint8_t v_isShared_3398_; uint8_t v_isSharedCheck_3404_; 
v_val_3395_ = lean_ctor_get(v_old_x3f_3389_, 0);
v_isSharedCheck_3404_ = !lean_is_exclusive(v_old_x3f_3389_);
if (v_isSharedCheck_3404_ == 0)
{
v___x_3397_ = v_old_x3f_3389_;
v_isShared_3398_ = v_isSharedCheck_3404_;
goto v_resetjp_3396_;
}
else
{
lean_inc(v_val_3395_);
lean_dec(v_old_x3f_3389_);
v___x_3397_ = lean_box(0);
v_isShared_3398_ = v_isSharedCheck_3404_;
goto v_resetjp_3396_;
}
v_resetjp_3396_:
{
lean_object* v_ictx_3399_; lean_object* v___x_3401_; 
v_ictx_3399_ = lean_ctor_get(v_val_3395_, 2);
lean_inc_ref(v_ictx_3399_);
lean_dec(v_val_3395_);
if (v_isShared_3398_ == 0)
{
lean_ctor_set(v___x_3397_, 0, v_ictx_3399_);
v___x_3401_ = v___x_3397_;
goto v_reusejp_3400_;
}
else
{
lean_object* v_reuseFailAlloc_3403_; 
v_reuseFailAlloc_3403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3403_, 0, v_ictx_3399_);
v___x_3401_ = v_reuseFailAlloc_3403_;
goto v_reusejp_3400_;
}
v_reusejp_3400_:
{
lean_object* v___x_3402_; 
v___x_3402_ = l_Lean_Language_Lean_LeanProcessingM_run___redArg(v___x_3392_, v___x_3401_, v___y_3390_);
return v___x_3402_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_process___boxed(lean_object* v_setupImports_3405_, lean_object* v_old_x3f_3406_, lean_object* v___y_3407_, lean_object* v___y_3408_){
_start:
{
lean_object* v_res_3409_; 
v_res_3409_ = l_Lean_Language_Lean_process(v_setupImports_3405_, v_old_x3f_3406_, v___y_3407_);
lean_dec_ref(v___y_3407_);
return v_res_3409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_processCommands(lean_object* v_inputCtx_3410_, lean_object* v_parserState_3411_, lean_object* v_commandState_3412_, lean_object* v_old_x3f_3413_){
_start:
{
lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___y_3418_; lean_object* v___y_3419_; lean_object* v___y_3423_; 
v___x_3415_ = lean_io_promise_new();
v___x_3416_ = l_IO_CancelToken_new();
if (lean_obj_tag(v_old_x3f_3413_) == 0)
{
lean_object* v___x_3438_; 
v___x_3438_ = lean_box(0);
v___y_3423_ = v___x_3438_;
goto v___jp_3422_;
}
else
{
lean_object* v_val_3439_; lean_object* v_snd_3440_; lean_object* v___x_3441_; 
v_val_3439_ = lean_ctor_get(v_old_x3f_3413_, 0);
v_snd_3440_ = lean_ctor_get(v_val_3439_, 1);
lean_inc(v_snd_3440_);
v___x_3441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3441_, 0, v_snd_3440_);
v___y_3423_ = v___x_3441_;
goto v___jp_3422_;
}
v___jp_3417_:
{
lean_object* v___x_3420_; lean_object* v___x_3421_; 
v___x_3420_ = l_Lean_Language_Lean_LeanProcessingM_run___redArg(v___y_3418_, v___y_3419_, v_inputCtx_3410_);
lean_dec(v___x_3420_);
v___x_3421_ = l_IO_Promise_result_x21___redArg(v___x_3415_);
lean_dec(v___x_3415_);
return v___x_3421_;
}
v___jp_3422_:
{
uint8_t v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; 
v___x_3424_ = 1;
v___x_3425_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__0));
v___x_3426_ = lean_box(v___x_3424_);
lean_inc(v___x_3415_);
v___x_3427_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___boxed), 9, 7);
lean_closure_set(v___x_3427_, 0, v___y_3423_);
lean_closure_set(v___x_3427_, 1, v_parserState_3411_);
lean_closure_set(v___x_3427_, 2, v_commandState_3412_);
lean_closure_set(v___x_3427_, 3, v___x_3415_);
lean_closure_set(v___x_3427_, 4, v___x_3426_);
lean_closure_set(v___x_3427_, 5, v___x_3416_);
lean_closure_set(v___x_3427_, 6, v___x_3425_);
if (lean_obj_tag(v_old_x3f_3413_) == 0)
{
lean_object* v___x_3428_; 
v___x_3428_ = lean_box(0);
v___y_3418_ = v___x_3427_;
v___y_3419_ = v___x_3428_;
goto v___jp_3417_;
}
else
{
lean_object* v_val_3429_; lean_object* v___x_3431_; uint8_t v_isShared_3432_; uint8_t v_isSharedCheck_3437_; 
v_val_3429_ = lean_ctor_get(v_old_x3f_3413_, 0);
v_isSharedCheck_3437_ = !lean_is_exclusive(v_old_x3f_3413_);
if (v_isSharedCheck_3437_ == 0)
{
v___x_3431_ = v_old_x3f_3413_;
v_isShared_3432_ = v_isSharedCheck_3437_;
goto v_resetjp_3430_;
}
else
{
lean_inc(v_val_3429_);
lean_dec(v_old_x3f_3413_);
v___x_3431_ = lean_box(0);
v_isShared_3432_ = v_isSharedCheck_3437_;
goto v_resetjp_3430_;
}
v_resetjp_3430_:
{
lean_object* v_fst_3433_; lean_object* v___x_3435_; 
v_fst_3433_ = lean_ctor_get(v_val_3429_, 0);
lean_inc(v_fst_3433_);
lean_dec(v_val_3429_);
if (v_isShared_3432_ == 0)
{
lean_ctor_set(v___x_3431_, 0, v_fst_3433_);
v___x_3435_ = v___x_3431_;
goto v_reusejp_3434_;
}
else
{
lean_object* v_reuseFailAlloc_3436_; 
v_reuseFailAlloc_3436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3436_, 0, v_fst_3433_);
v___x_3435_ = v_reuseFailAlloc_3436_;
goto v_reusejp_3434_;
}
v_reusejp_3434_:
{
v___y_3418_ = v___x_3427_;
v___y_3419_ = v___x_3435_;
goto v___jp_3417_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_processCommands___boxed(lean_object* v_inputCtx_3442_, lean_object* v_parserState_3443_, lean_object* v_commandState_3444_, lean_object* v_old_x3f_3445_, lean_object* v___y_3446_){
_start:
{
lean_object* v_res_3447_; 
v_res_3447_ = l_Lean_Language_Lean_processCommands(v_inputCtx_3442_, v_parserState_3443_, v_commandState_3444_, v_old_x3f_3445_);
lean_dec_ref(v_inputCtx_3442_);
return v_res_3447_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_waitForFinalCmdState_x3f_goCmd(lean_object* v_snap_3448_){
_start:
{
lean_object* v_nextCmdSnap_x3f_3449_; 
v_nextCmdSnap_x3f_3449_ = lean_ctor_get(v_snap_3448_, 4);
if (lean_obj_tag(v_nextCmdSnap_x3f_3449_) == 1)
{
lean_object* v_val_3450_; lean_object* v___x_3451_; 
lean_inc_ref(v_nextCmdSnap_x3f_3449_);
lean_dec_ref(v_snap_3448_);
v_val_3450_ = lean_ctor_get(v_nextCmdSnap_x3f_3449_, 0);
lean_inc(v_val_3450_);
lean_dec_ref_known(v_nextCmdSnap_x3f_3449_, 1);
v___x_3451_ = l_Lean_Language_SnapshotTask_get___redArg(v_val_3450_);
v_snap_3448_ = v___x_3451_;
goto _start;
}
else
{
lean_object* v_elabSnap_3453_; lean_object* v_resultSnap_3454_; lean_object* v___x_3455_; lean_object* v_cmdState_3456_; lean_object* v___x_3457_; 
v_elabSnap_3453_ = lean_ctor_get(v_snap_3448_, 3);
lean_inc_ref(v_elabSnap_3453_);
lean_dec_ref(v_snap_3448_);
v_resultSnap_3454_ = lean_ctor_get(v_elabSnap_3453_, 2);
lean_inc_ref(v_resultSnap_3454_);
lean_dec_ref(v_elabSnap_3453_);
v___x_3455_ = l_Lean_Language_SnapshotTask_get___redArg(v_resultSnap_3454_);
v_cmdState_3456_ = lean_ctor_get(v___x_3455_, 1);
lean_inc_ref(v_cmdState_3456_);
lean_dec(v___x_3455_);
v___x_3457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3457_, 0, v_cmdState_3456_);
return v___x_3457_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_waitForFinalCmdState_x3f(lean_object* v_snap_3458_){
_start:
{
lean_object* v_result_x3f_3459_; 
v_result_x3f_3459_ = lean_ctor_get(v_snap_3458_, 4);
lean_inc(v_result_x3f_3459_);
lean_dec_ref(v_snap_3458_);
if (lean_obj_tag(v_result_x3f_3459_) == 0)
{
lean_object* v___x_3460_; 
v___x_3460_ = lean_box(0);
return v___x_3460_;
}
else
{
lean_object* v_val_3461_; lean_object* v_processedSnap_3462_; lean_object* v___x_3463_; lean_object* v_result_x3f_3464_; 
v_val_3461_ = lean_ctor_get(v_result_x3f_3459_, 0);
lean_inc(v_val_3461_);
lean_dec_ref_known(v_result_x3f_3459_, 1);
v_processedSnap_3462_ = lean_ctor_get(v_val_3461_, 1);
lean_inc_ref(v_processedSnap_3462_);
lean_dec(v_val_3461_);
v___x_3463_ = l_Lean_Language_SnapshotTask_get___redArg(v_processedSnap_3462_);
v_result_x3f_3464_ = lean_ctor_get(v___x_3463_, 2);
lean_inc(v_result_x3f_3464_);
lean_dec(v___x_3463_);
if (lean_obj_tag(v_result_x3f_3464_) == 0)
{
lean_object* v___x_3465_; 
v___x_3465_ = lean_box(0);
return v___x_3465_;
}
else
{
lean_object* v_val_3466_; lean_object* v_firstCmdSnap_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; 
v_val_3466_ = lean_ctor_get(v_result_x3f_3464_, 0);
lean_inc(v_val_3466_);
lean_dec_ref_known(v_result_x3f_3464_, 1);
v_firstCmdSnap_3467_ = lean_ctor_get(v_val_3466_, 1);
lean_inc_ref(v_firstCmdSnap_3467_);
lean_dec(v_val_3466_);
v___x_3468_ = l_Lean_Language_SnapshotTask_get___redArg(v_firstCmdSnap_3467_);
v___x_3469_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_waitForFinalCmdState_x3f_goCmd(v___x_3468_);
return v___x_3469_;
}
}
}
}
static lean_object* _init_l_Lean_Language_Lean_truncateToHeader___closed__2(void){
_start:
{
uint8_t v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; 
v___x_3475_ = 1;
v___x_3476_ = ((lean_object*)(l_Lean_Language_Lean_truncateToHeader___closed__1));
v___x_3477_ = l_Lean_Name_toString(v___x_3476_, v___x_3475_);
return v___x_3477_;
}
}
static lean_object* _init_l_Lean_Language_Lean_truncateToHeader___closed__3(void){
_start:
{
uint8_t v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; 
v___x_3478_ = 0;
v___x_3479_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_3480_ = lean_box(0);
v___x_3481_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_3482_ = lean_obj_once(&l_Lean_Language_Lean_truncateToHeader___closed__2, &l_Lean_Language_Lean_truncateToHeader___closed__2_once, _init_l_Lean_Language_Lean_truncateToHeader___closed__2);
v___x_3483_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3483_, 0, v___x_3482_);
lean_ctor_set(v___x_3483_, 1, v___x_3481_);
lean_ctor_set(v___x_3483_, 2, v___x_3480_);
lean_ctor_set(v___x_3483_, 3, v___x_3479_);
lean_ctor_set_uint8(v___x_3483_, sizeof(void*)*4, v___x_3478_);
return v___x_3483_;
}
}
static lean_object* _init_l_Lean_Language_Lean_truncateToHeader___closed__4(void){
_start:
{
lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; 
v___x_3484_ = lean_obj_once(&l_Lean_Language_Lean_truncateToHeader___closed__3, &l_Lean_Language_Lean_truncateToHeader___closed__3_once, _init_l_Lean_Language_Lean_truncateToHeader___closed__3);
v___x_3485_ = lean_box(0);
v___x_3486_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3485_, v___x_3484_);
return v___x_3486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_truncateToHeader(lean_object* v_snap_3487_){
_start:
{
lean_object* v_result_x3f_3488_; 
v_result_x3f_3488_ = lean_ctor_get(v_snap_3487_, 4);
lean_inc(v_result_x3f_3488_);
if (lean_obj_tag(v_result_x3f_3488_) == 1)
{
lean_object* v_val_3489_; lean_object* v___x_3491_; uint8_t v_isShared_3492_; uint8_t v_isSharedCheck_3563_; 
v_val_3489_ = lean_ctor_get(v_result_x3f_3488_, 0);
v_isSharedCheck_3563_ = !lean_is_exclusive(v_result_x3f_3488_);
if (v_isSharedCheck_3563_ == 0)
{
v___x_3491_ = v_result_x3f_3488_;
v_isShared_3492_ = v_isSharedCheck_3563_;
goto v_resetjp_3490_;
}
else
{
lean_inc(v_val_3489_);
lean_dec(v_result_x3f_3488_);
v___x_3491_ = lean_box(0);
v_isShared_3492_ = v_isSharedCheck_3563_;
goto v_resetjp_3490_;
}
v_resetjp_3490_:
{
lean_object* v_toSnapshot_3493_; lean_object* v_metaSnap_3494_; lean_object* v_ictx_3495_; lean_object* v_stx_3496_; lean_object* v_parserState_3497_; lean_object* v_processedSnap_3498_; lean_object* v___x_3500_; uint8_t v_isShared_3501_; uint8_t v_isSharedCheck_3562_; 
v_toSnapshot_3493_ = lean_ctor_get(v_snap_3487_, 0);
v_metaSnap_3494_ = lean_ctor_get(v_snap_3487_, 1);
v_ictx_3495_ = lean_ctor_get(v_snap_3487_, 2);
v_stx_3496_ = lean_ctor_get(v_snap_3487_, 3);
v_parserState_3497_ = lean_ctor_get(v_val_3489_, 0);
v_processedSnap_3498_ = lean_ctor_get(v_val_3489_, 1);
v_isSharedCheck_3562_ = !lean_is_exclusive(v_val_3489_);
if (v_isSharedCheck_3562_ == 0)
{
v___x_3500_ = v_val_3489_;
v_isShared_3501_ = v_isSharedCheck_3562_;
goto v_resetjp_3499_;
}
else
{
lean_inc(v_processedSnap_3498_);
lean_inc(v_parserState_3497_);
lean_dec(v_val_3489_);
v___x_3500_ = lean_box(0);
v_isShared_3501_ = v_isSharedCheck_3562_;
goto v_resetjp_3499_;
}
v_resetjp_3499_:
{
lean_object* v_processed_3502_; lean_object* v_result_x3f_3503_; 
v_processed_3502_ = l_Lean_Language_SnapshotTask_get___redArg(v_processedSnap_3498_);
v_result_x3f_3503_ = lean_ctor_get(v_processed_3502_, 2);
lean_inc(v_result_x3f_3503_);
if (lean_obj_tag(v_result_x3f_3503_) == 1)
{
lean_object* v___x_3505_; uint8_t v_isShared_3506_; uint8_t v_isSharedCheck_3556_; 
lean_inc(v_stx_3496_);
lean_inc_ref(v_ictx_3495_);
lean_inc_ref(v_metaSnap_3494_);
lean_inc_ref(v_toSnapshot_3493_);
v_isSharedCheck_3556_ = !lean_is_exclusive(v_snap_3487_);
if (v_isSharedCheck_3556_ == 0)
{
lean_object* v_unused_3557_; lean_object* v_unused_3558_; lean_object* v_unused_3559_; lean_object* v_unused_3560_; lean_object* v_unused_3561_; 
v_unused_3557_ = lean_ctor_get(v_snap_3487_, 4);
lean_dec(v_unused_3557_);
v_unused_3558_ = lean_ctor_get(v_snap_3487_, 3);
lean_dec(v_unused_3558_);
v_unused_3559_ = lean_ctor_get(v_snap_3487_, 2);
lean_dec(v_unused_3559_);
v_unused_3560_ = lean_ctor_get(v_snap_3487_, 1);
lean_dec(v_unused_3560_);
v_unused_3561_ = lean_ctor_get(v_snap_3487_, 0);
lean_dec(v_unused_3561_);
v___x_3505_ = v_snap_3487_;
v_isShared_3506_ = v_isSharedCheck_3556_;
goto v_resetjp_3504_;
}
else
{
lean_dec(v_snap_3487_);
v___x_3505_ = lean_box(0);
v_isShared_3506_ = v_isSharedCheck_3556_;
goto v_resetjp_3504_;
}
v_resetjp_3504_:
{
lean_object* v_val_3507_; lean_object* v___x_3509_; uint8_t v_isShared_3510_; uint8_t v_isSharedCheck_3555_; 
v_val_3507_ = lean_ctor_get(v_result_x3f_3503_, 0);
v_isSharedCheck_3555_ = !lean_is_exclusive(v_result_x3f_3503_);
if (v_isSharedCheck_3555_ == 0)
{
v___x_3509_ = v_result_x3f_3503_;
v_isShared_3510_ = v_isSharedCheck_3555_;
goto v_resetjp_3508_;
}
else
{
lean_inc(v_val_3507_);
lean_dec(v_result_x3f_3503_);
v___x_3509_ = lean_box(0);
v_isShared_3510_ = v_isSharedCheck_3555_;
goto v_resetjp_3508_;
}
v_resetjp_3508_:
{
lean_object* v_toSnapshot_3511_; lean_object* v_metaSnap_3512_; lean_object* v___x_3514_; uint8_t v_isShared_3515_; uint8_t v_isSharedCheck_3553_; 
v_toSnapshot_3511_ = lean_ctor_get(v_processed_3502_, 0);
v_metaSnap_3512_ = lean_ctor_get(v_processed_3502_, 1);
v_isSharedCheck_3553_ = !lean_is_exclusive(v_processed_3502_);
if (v_isSharedCheck_3553_ == 0)
{
lean_object* v_unused_3554_; 
v_unused_3554_ = lean_ctor_get(v_processed_3502_, 2);
lean_dec(v_unused_3554_);
v___x_3514_ = v_processed_3502_;
v_isShared_3515_ = v_isSharedCheck_3553_;
goto v_resetjp_3513_;
}
else
{
lean_inc(v_metaSnap_3512_);
lean_inc(v_toSnapshot_3511_);
lean_dec(v_processed_3502_);
v___x_3514_ = lean_box(0);
v_isShared_3515_ = v_isSharedCheck_3553_;
goto v_resetjp_3513_;
}
v_resetjp_3513_:
{
lean_object* v_cmdState_3516_; lean_object* v___x_3518_; uint8_t v_isShared_3519_; uint8_t v_isSharedCheck_3551_; 
v_cmdState_3516_ = lean_ctor_get(v_val_3507_, 0);
v_isSharedCheck_3551_ = !lean_is_exclusive(v_val_3507_);
if (v_isSharedCheck_3551_ == 0)
{
lean_object* v_unused_3552_; 
v_unused_3552_ = lean_ctor_get(v_val_3507_, 1);
lean_dec(v_unused_3552_);
v___x_3518_ = v_val_3507_;
v_isShared_3519_ = v_isSharedCheck_3551_;
goto v_resetjp_3517_;
}
else
{
lean_inc(v_cmdState_3516_);
lean_dec(v_val_3507_);
v___x_3518_ = lean_box(0);
v_isShared_3519_ = v_isSharedCheck_3551_;
goto v_resetjp_3517_;
}
v_resetjp_3517_:
{
lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v_resultSnap_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v_elabSnap_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v_termCmd_3530_; lean_object* v___x_3531_; lean_object* v___x_3533_; 
v___x_3520_ = lean_box(0);
v___x_3521_ = lean_obj_once(&l_Lean_Language_Lean_truncateToHeader___closed__3, &l_Lean_Language_Lean_truncateToHeader___closed__3_once, _init_l_Lean_Language_Lean_truncateToHeader___closed__3);
lean_inc_ref(v_cmdState_3516_);
v_resultSnap_3522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_resultSnap_3522_, 0, v___x_3521_);
lean_ctor_set(v_resultSnap_3522_, 1, v_cmdState_3516_);
v___x_3523_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3);
v___x_3524_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3520_, v_resultSnap_3522_);
v___x_3525_ = lean_obj_once(&l_Lean_Language_Lean_truncateToHeader___closed__4, &l_Lean_Language_Lean_truncateToHeader___closed__4_once, _init_l_Lean_Language_Lean_truncateToHeader___closed__4);
v___x_3526_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4);
v_elabSnap_3527_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_elabSnap_3527_, 0, v___x_3521_);
lean_ctor_set(v_elabSnap_3527_, 1, v___x_3523_);
lean_ctor_set(v_elabSnap_3527_, 2, v___x_3524_);
lean_ctor_set(v_elabSnap_3527_, 3, v___x_3525_);
lean_ctor_set(v_elabSnap_3527_, 4, v___x_3526_);
v___x_3528_ = lean_box(0);
v___x_3529_ = l_Lean_Parser_instInhabitedModuleParserState_default;
v_termCmd_3530_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_termCmd_3530_, 0, v___x_3521_);
lean_ctor_set(v_termCmd_3530_, 1, v___x_3528_);
lean_ctor_set(v_termCmd_3530_, 2, v___x_3529_);
lean_ctor_set(v_termCmd_3530_, 3, v_elabSnap_3527_);
lean_ctor_set(v_termCmd_3530_, 4, v___x_3520_);
v___x_3531_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3520_, v_termCmd_3530_);
if (v_isShared_3519_ == 0)
{
lean_ctor_set(v___x_3518_, 1, v___x_3531_);
v___x_3533_ = v___x_3518_;
goto v_reusejp_3532_;
}
else
{
lean_object* v_reuseFailAlloc_3550_; 
v_reuseFailAlloc_3550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3550_, 0, v_cmdState_3516_);
lean_ctor_set(v_reuseFailAlloc_3550_, 1, v___x_3531_);
v___x_3533_ = v_reuseFailAlloc_3550_;
goto v_reusejp_3532_;
}
v_reusejp_3532_:
{
lean_object* v___x_3535_; 
if (v_isShared_3510_ == 0)
{
lean_ctor_set(v___x_3509_, 0, v___x_3533_);
v___x_3535_ = v___x_3509_;
goto v_reusejp_3534_;
}
else
{
lean_object* v_reuseFailAlloc_3549_; 
v_reuseFailAlloc_3549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3549_, 0, v___x_3533_);
v___x_3535_ = v_reuseFailAlloc_3549_;
goto v_reusejp_3534_;
}
v_reusejp_3534_:
{
lean_object* v_newProcessed_3537_; 
if (v_isShared_3515_ == 0)
{
lean_ctor_set(v___x_3514_, 2, v___x_3535_);
v_newProcessed_3537_ = v___x_3514_;
goto v_reusejp_3536_;
}
else
{
lean_object* v_reuseFailAlloc_3548_; 
v_reuseFailAlloc_3548_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3548_, 0, v_toSnapshot_3511_);
lean_ctor_set(v_reuseFailAlloc_3548_, 1, v_metaSnap_3512_);
lean_ctor_set(v_reuseFailAlloc_3548_, 2, v___x_3535_);
v_newProcessed_3537_ = v_reuseFailAlloc_3548_;
goto v_reusejp_3536_;
}
v_reusejp_3536_:
{
lean_object* v___x_3538_; lean_object* v___x_3540_; 
v___x_3538_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3520_, v_newProcessed_3537_);
if (v_isShared_3501_ == 0)
{
lean_ctor_set(v___x_3500_, 1, v___x_3538_);
v___x_3540_ = v___x_3500_;
goto v_reusejp_3539_;
}
else
{
lean_object* v_reuseFailAlloc_3547_; 
v_reuseFailAlloc_3547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3547_, 0, v_parserState_3497_);
lean_ctor_set(v_reuseFailAlloc_3547_, 1, v___x_3538_);
v___x_3540_ = v_reuseFailAlloc_3547_;
goto v_reusejp_3539_;
}
v_reusejp_3539_:
{
lean_object* v___x_3542_; 
if (v_isShared_3492_ == 0)
{
lean_ctor_set(v___x_3491_, 0, v___x_3540_);
v___x_3542_ = v___x_3491_;
goto v_reusejp_3541_;
}
else
{
lean_object* v_reuseFailAlloc_3546_; 
v_reuseFailAlloc_3546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3546_, 0, v___x_3540_);
v___x_3542_ = v_reuseFailAlloc_3546_;
goto v_reusejp_3541_;
}
v_reusejp_3541_:
{
lean_object* v___x_3544_; 
if (v_isShared_3506_ == 0)
{
lean_ctor_set(v___x_3505_, 4, v___x_3542_);
v___x_3544_ = v___x_3505_;
goto v_reusejp_3543_;
}
else
{
lean_object* v_reuseFailAlloc_3545_; 
v_reuseFailAlloc_3545_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3545_, 0, v_toSnapshot_3493_);
lean_ctor_set(v_reuseFailAlloc_3545_, 1, v_metaSnap_3494_);
lean_ctor_set(v_reuseFailAlloc_3545_, 2, v_ictx_3495_);
lean_ctor_set(v_reuseFailAlloc_3545_, 3, v_stx_3496_);
lean_ctor_set(v_reuseFailAlloc_3545_, 4, v___x_3542_);
v___x_3544_ = v_reuseFailAlloc_3545_;
goto v_reusejp_3543_;
}
v_reusejp_3543_:
{
return v___x_3544_;
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
else
{
lean_dec(v_result_x3f_3503_);
lean_dec(v_processed_3502_);
lean_del_object(v___x_3500_);
lean_dec_ref(v_parserState_3497_);
lean_del_object(v___x_3491_);
return v_snap_3487_;
}
}
}
}
else
{
lean_dec(v_result_x3f_3488_);
return v_snap_3487_;
}
}
}
lean_object* runtime_initialize_Lean_Language_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Language_Lean_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Import(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Language_Lean(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Language_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Language_Lean_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Import(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Language_Lean_experimental_module = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Language_Lean_experimental_module);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Language_Lean(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Language_Util(uint8_t builtin);
lean_object* initialize_Lean_Language_Lean_Types(uint8_t builtin);
lean_object* initialize_Lean_Elab_Import(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Language_Lean(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Language_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Language_Lean_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Import(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Language_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Language_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Language_Lean(builtin);
}
#ifdef __cplusplus
}
#endif
