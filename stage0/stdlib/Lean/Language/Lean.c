// Lean compiler output
// Module: Lean.Language.Lean
// Imports: public import Lean.Language.Util public import Lean.Language.Lean.Types public import Lean.Language.Lean.Util public import Lean.Elab.Import
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
lean_object* l_BaseIO_chainTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_IO_Promise_result_x21___redArg(lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* l_Lean_Language_Snapshot_transform(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
extern lean_object* l_Lean_Elab_instInhabitedInfoTree_default;
lean_object* l_Lean_Language_SnapshotTask_ReportingRange_ofOptionInheriting(lean_object*);
uint8_t l_Lean_Parser_isTerminalCommand(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
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
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_Options_empty;
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_st_mk_ref(lean_object*);
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
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
uint16_t lean_uint16_land(uint16_t, uint16_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* l_Lean_Language_SnapshotTree_waitAll(lean_object*);
lean_object* lean_io_bind_task(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_elabCommandTopLevel(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_Elab_Command_runModuleLintersAsync(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Language_instImpl_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8_;
extern lean_object* l_Lean_internal_cmdlineSnapshots;
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
extern lean_object* l_Lean_Language_Snapshot_Diagnostics_empty;
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedSynthNormMemoSlot_default;
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
uint8_t l_Lean_Elab_isAbortExceptionId(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
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
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Language_SnapshotTree_transform___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTask_cancelRec___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Language_Lean_instToSnapshotTreeCommandParsedSnapshot_go___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_parseCommand(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_profileit(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_eqWithInfo(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTask_get_x3f___redArg(lean_object*);
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
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_mkState(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_array_to_list(lean_object*);
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
static const lean_closure_object l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
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
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___lam__0___boxed(lean_object*, lean_object*);
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
static const lean_array_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__8(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__8___boxed(lean_object**);
static const lean_closure_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_Lean_instToSnapshotTreeCommandParsedSnapshot_go___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "parsing"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__7 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__7_value;
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
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__0;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "parseHeader"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__1_value),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(152, 110, 119, 15, 255, 246, 245, 53)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4;
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
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_foldCmdSnaps_x3f_go___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_foldCmdSnaps_x3f_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_foldCmdSnaps_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_foldCmdSnaps_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___lam__0(lean_object* v_00_u03b1_1_, lean_object* v_act_2_, lean_object* v_ctx_3_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_apply_2(v_act_2_, v_ctx_3_, lean_box(0));
v___x_6_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___lam__0___boxed(lean_object* v_00_u03b1_7_, lean_object* v_act_8_, lean_object* v_ctx_9_, lean_object* v___y_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___lam__0(v_00_u03b1_7_, v_act_8_, v_ctx_9_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___lam__0(lean_object* v_00_u03b1_14_, lean_object* v_act_15_, lean_object* v_ctx_16_){
_start:
{
lean_object* v_toProcessingContext_17_; lean_object* v___x_18_; 
v_toProcessingContext_17_ = lean_ctor_get(v_ctx_16_, 0);
lean_inc_ref(v_toProcessingContext_17_);
lean_dec_ref(v_ctx_16_);
v___x_18_ = lean_apply_1(v_act_15_, v_toProcessingContext_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg(){
_start:
{
lean_object* v___f_21_; 
v___f_21_ = ((lean_object*)(l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___closed__0));
return v___f_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___boxed(lean_object* v___dummy_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg();
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT(lean_object* v_m_24_){
_start:
{
lean_object* v___f_25_; 
v___f_25_ = ((lean_object*)(l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___closed__0));
return v___f_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run___redArg(lean_object* v_act_26_, lean_object* v_oldInputCtx_x3f_27_, lean_object* v_a_28_){
_start:
{
lean_object* v___y_31_; 
if (lean_obj_tag(v_oldInputCtx_x3f_27_) == 0)
{
lean_object* v___x_34_; 
v___x_34_ = lean_box(0);
v___y_31_ = v___x_34_;
goto v___jp_30_;
}
else
{
lean_object* v_val_35_; lean_object* v___x_37_; uint8_t v_isShared_38_; uint8_t v_isSharedCheck_45_; 
v_val_35_ = lean_ctor_get(v_oldInputCtx_x3f_27_, 0);
v_isSharedCheck_45_ = !lean_is_exclusive(v_oldInputCtx_x3f_27_);
if (v_isSharedCheck_45_ == 0)
{
v___x_37_ = v_oldInputCtx_x3f_27_;
v_isShared_38_ = v_isSharedCheck_45_;
goto v_resetjp_36_;
}
else
{
lean_inc(v_val_35_);
lean_dec(v_oldInputCtx_x3f_27_);
v___x_37_ = lean_box(0);
v_isShared_38_ = v_isSharedCheck_45_;
goto v_resetjp_36_;
}
v_resetjp_36_:
{
lean_object* v_inputString_39_; lean_object* v_inputString_40_; lean_object* v___x_41_; lean_object* v___x_43_; 
v_inputString_39_ = lean_ctor_get(v_val_35_, 0);
lean_inc_ref(v_inputString_39_);
lean_dec(v_val_35_);
v_inputString_40_ = lean_ctor_get(v_a_28_, 0);
v___x_41_ = l_String_firstDiffPos(v_inputString_39_, v_inputString_40_);
lean_dec_ref(v_inputString_39_);
if (v_isShared_38_ == 0)
{
lean_ctor_set(v___x_37_, 0, v___x_41_);
v___x_43_ = v___x_37_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v___x_41_);
v___x_43_ = v_reuseFailAlloc_44_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
v___y_31_ = v___x_43_;
goto v___jp_30_;
}
}
}
v___jp_30_:
{
lean_object* v___x_32_; lean_object* v___x_33_; 
lean_inc_ref(v_a_28_);
v___x_32_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_32_, 0, v_a_28_);
lean_ctor_set(v___x_32_, 1, v___y_31_);
v___x_33_ = lean_apply_2(v_act_26_, v___x_32_, lean_box(0));
return v___x_33_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run___redArg___boxed(lean_object* v_act_46_, lean_object* v_oldInputCtx_x3f_47_, lean_object* v_a_48_, lean_object* v_a_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lean_Language_Lean_LeanProcessingM_run___redArg(v_act_46_, v_oldInputCtx_x3f_47_, v_a_48_);
lean_dec_ref(v_a_48_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run(lean_object* v_00_u03b1_51_, lean_object* v_act_52_, lean_object* v_oldInputCtx_x3f_53_, lean_object* v_a_54_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Lean_Language_Lean_LeanProcessingM_run___redArg(v_act_52_, v_oldInputCtx_x3f_53_, v_a_54_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run___boxed(lean_object* v_00_u03b1_57_, lean_object* v_act_58_, lean_object* v_oldInputCtx_x3f_59_, lean_object* v_a_60_, lean_object* v_a_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = l_Lean_Language_Lean_LeanProcessingM_run(v_00_u03b1_57_, v_act_58_, v_oldInputCtx_x3f_59_, v_a_60_);
lean_dec_ref(v_a_60_);
return v_res_62_;
}
}
LEAN_EXPORT uint8_t l_Lean_Language_Lean_isBeforeEditPos(lean_object* v_pos_63_, lean_object* v_a_64_){
_start:
{
lean_object* v_firstDiffPos_x3f_66_; 
v_firstDiffPos_x3f_66_ = lean_ctor_get(v_a_64_, 1);
if (lean_obj_tag(v_firstDiffPos_x3f_66_) == 0)
{
uint8_t v___x_67_; 
v___x_67_ = 0;
return v___x_67_;
}
else
{
lean_object* v_val_68_; uint8_t v___x_69_; 
v_val_68_ = lean_ctor_get(v_firstDiffPos_x3f_66_, 0);
v___x_69_ = lean_nat_dec_lt(v_pos_63_, v_val_68_);
return v___x_69_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_isBeforeEditPos___boxed(lean_object* v_pos_70_, lean_object* v_a_71_, lean_object* v_a_72_){
_start:
{
uint8_t v_res_73_; lean_object* v_r_74_; 
v_res_73_ = l_Lean_Language_Lean_isBeforeEditPos(v_pos_70_, v_a_71_);
lean_dec_ref(v_a_71_);
lean_dec(v_pos_70_);
v_r_74_ = lean_box(v_res_73_);
return v_r_74_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__13(void){
_start:
{
uint8_t v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_106_ = 1;
v___x_107_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__12));
v___x_108_ = l_Lean_Name_toString(v___x_107_, v___x_106_);
return v___x_108_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14(void){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_109_ = lean_unsigned_to_nat(32u);
v___x_110_ = lean_mk_empty_array_with_capacity(v___x_109_);
v___x_111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_111_, 0, v___x_110_);
return v___x_111_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15(void){
_start:
{
size_t v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_112_ = ((size_t)5ULL);
v___x_113_ = lean_unsigned_to_nat(0u);
v___x_114_ = lean_unsigned_to_nat(32u);
v___x_115_ = lean_mk_empty_array_with_capacity(v___x_114_);
v___x_116_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14);
v___x_117_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_117_, 0, v___x_116_);
lean_ctor_set(v___x_117_, 1, v___x_115_);
lean_ctor_set(v___x_117_, 2, v___x_113_);
lean_ctor_set(v___x_117_, 3, v___x_113_);
lean_ctor_set_usize(v___x_117_, 4, v___x_112_);
return v___x_117_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16(void){
_start:
{
lean_object* v___x_118_; uint64_t v___x_119_; lean_object* v___x_120_; 
v___x_118_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15);
v___x_119_ = 0ULL;
v___x_120_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_120_, 0, v___x_118_);
lean_ctor_set_uint64(v___x_120_, sizeof(void*)*1, v___x_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(lean_object* v_ex_121_, lean_object* v_act_122_, lean_object* v_a_123_){
_start:
{
lean_object* v___x_125_; 
lean_inc_ref(v_a_123_);
v___x_125_ = lean_apply_2(v_act_122_, v_a_123_, lean_box(0));
if (lean_obj_tag(v___x_125_) == 0)
{
lean_object* v_a_126_; 
lean_dec(v_ex_121_);
v_a_126_ = lean_ctor_get(v___x_125_, 0);
lean_inc(v_a_126_);
lean_dec_ref_known(v___x_125_, 1);
return v_a_126_;
}
else
{
lean_object* v_a_127_; lean_object* v_toProcessingContext_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; uint8_t v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
v_a_127_ = lean_ctor_get(v___x_125_, 0);
lean_inc(v_a_127_);
lean_dec_ref_known(v___x_125_, 1);
v_toProcessingContext_128_ = lean_ctor_get(v_a_123_, 0);
v___x_129_ = lean_io_error_to_string(v_a_127_);
v___x_130_ = l_Lean_Language_diagnosticsOfHeaderError(v___x_129_, v_toProcessingContext_128_);
v___x_131_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__13, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__13_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__13);
v___x_132_ = lean_box(0);
v___x_133_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_134_ = 0;
v___x_135_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_135_, 0, v___x_131_);
lean_ctor_set(v___x_135_, 1, v___x_130_);
lean_ctor_set(v___x_135_, 2, v___x_132_);
lean_ctor_set(v___x_135_, 3, v___x_133_);
lean_ctor_set_uint8(v___x_135_, sizeof(void*)*4, v___x_134_);
v___x_136_ = lean_apply_1(v_ex_121_, v___x_135_);
return v___x_136_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___boxed(lean_object* v_ex_137_, lean_object* v_act_138_, lean_object* v_a_139_, lean_object* v_a_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v_ex_137_, v_act_138_, v_a_139_);
lean_dec_ref(v_a_139_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions(lean_object* v_00_u03b1_142_, lean_object* v_ex_143_, lean_object* v_act_144_, lean_object* v_a_145_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v_ex_143_, v_act_144_, v_a_145_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___boxed(lean_object* v_00_u03b1_148_, lean_object* v_ex_149_, lean_object* v_act_150_, lean_object* v_a_151_, lean_object* v_a_152_){
_start:
{
lean_object* v_res_153_; 
v_res_153_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions(v_00_u03b1_148_, v_ex_149_, v_act_150_, v_a_151_);
lean_dec_ref(v_a_151_);
return v_res_153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0(lean_object* v_o_157_, lean_object* v_k_158_, uint8_t v_v_159_){
_start:
{
lean_object* v_map_160_; uint8_t v_hasTrace_161_; lean_object* v___x_163_; uint8_t v_isShared_164_; uint8_t v_isSharedCheck_175_; 
v_map_160_ = lean_ctor_get(v_o_157_, 0);
v_hasTrace_161_ = lean_ctor_get_uint8(v_o_157_, sizeof(void*)*1);
v_isSharedCheck_175_ = !lean_is_exclusive(v_o_157_);
if (v_isSharedCheck_175_ == 0)
{
v___x_163_ = v_o_157_;
v_isShared_164_ = v_isSharedCheck_175_;
goto v_resetjp_162_;
}
else
{
lean_inc(v_map_160_);
lean_dec(v_o_157_);
v___x_163_ = lean_box(0);
v_isShared_164_ = v_isSharedCheck_175_;
goto v_resetjp_162_;
}
v_resetjp_162_:
{
lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_165_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_165_, 0, v_v_159_);
lean_inc(v_k_158_);
v___x_166_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_158_, v___x_165_, v_map_160_);
if (v_hasTrace_161_ == 0)
{
lean_object* v___x_167_; uint8_t v___x_168_; lean_object* v___x_170_; 
v___x_167_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_168_ = l_Lean_Name_isPrefixOf(v___x_167_, v_k_158_);
lean_dec(v_k_158_);
if (v_isShared_164_ == 0)
{
lean_ctor_set(v___x_163_, 0, v___x_166_);
v___x_170_ = v___x_163_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v___x_166_);
v___x_170_ = v_reuseFailAlloc_171_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
lean_ctor_set_uint8(v___x_170_, sizeof(void*)*1, v___x_168_);
return v___x_170_;
}
}
else
{
lean_object* v___x_173_; 
lean_dec(v_k_158_);
if (v_isShared_164_ == 0)
{
lean_ctor_set(v___x_163_, 0, v___x_166_);
v___x_173_ = v___x_163_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v___x_166_);
lean_ctor_set_uint8(v_reuseFailAlloc_174_, sizeof(void*)*1, v_hasTrace_161_);
v___x_173_ = v_reuseFailAlloc_174_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
return v___x_173_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___boxed(lean_object* v_o_176_, lean_object* v_k_177_, lean_object* v_v_178_){
_start:
{
uint8_t v_v_boxed_179_; lean_object* v_res_180_; 
v_v_boxed_179_ = lean_unbox(v_v_178_);
v_res_180_ = l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0(v_o_176_, v_k_177_, v_v_boxed_179_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__1(lean_object* v_o_181_, lean_object* v_k_182_, lean_object* v_v_183_){
_start:
{
lean_object* v_map_184_; uint8_t v_hasTrace_185_; lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_199_; 
v_map_184_ = lean_ctor_get(v_o_181_, 0);
v_hasTrace_185_ = lean_ctor_get_uint8(v_o_181_, sizeof(void*)*1);
v_isSharedCheck_199_ = !lean_is_exclusive(v_o_181_);
if (v_isSharedCheck_199_ == 0)
{
v___x_187_ = v_o_181_;
v_isShared_188_ = v_isSharedCheck_199_;
goto v_resetjp_186_;
}
else
{
lean_inc(v_map_184_);
lean_dec(v_o_181_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_199_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_189_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_189_, 0, v_v_183_);
lean_inc(v_k_182_);
v___x_190_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_182_, v___x_189_, v_map_184_);
if (v_hasTrace_185_ == 0)
{
lean_object* v___x_191_; uint8_t v___x_192_; lean_object* v___x_194_; 
v___x_191_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_192_ = l_Lean_Name_isPrefixOf(v___x_191_, v_k_182_);
lean_dec(v_k_182_);
if (v_isShared_188_ == 0)
{
lean_ctor_set(v___x_187_, 0, v___x_190_);
v___x_194_ = v___x_187_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v___x_190_);
v___x_194_ = v_reuseFailAlloc_195_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
lean_ctor_set_uint8(v___x_194_, sizeof(void*)*1, v___x_192_);
return v___x_194_;
}
}
else
{
lean_object* v___x_197_; 
lean_dec(v_k_182_);
if (v_isShared_188_ == 0)
{
lean_ctor_set(v___x_187_, 0, v___x_190_);
v___x_197_ = v___x_187_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v___x_190_);
lean_ctor_set_uint8(v_reuseFailAlloc_198_, sizeof(void*)*1, v_hasTrace_185_);
v___x_197_ = v_reuseFailAlloc_198_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
return v___x_197_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__2(lean_object* v_o_200_, lean_object* v_k_201_, lean_object* v_v_202_){
_start:
{
lean_object* v_map_203_; uint8_t v_hasTrace_204_; lean_object* v___x_206_; uint8_t v_isShared_207_; uint8_t v_isSharedCheck_218_; 
v_map_203_ = lean_ctor_get(v_o_200_, 0);
v_hasTrace_204_ = lean_ctor_get_uint8(v_o_200_, sizeof(void*)*1);
v_isSharedCheck_218_ = !lean_is_exclusive(v_o_200_);
if (v_isSharedCheck_218_ == 0)
{
v___x_206_ = v_o_200_;
v_isShared_207_ = v_isSharedCheck_218_;
goto v_resetjp_205_;
}
else
{
lean_inc(v_map_203_);
lean_dec(v_o_200_);
v___x_206_ = lean_box(0);
v_isShared_207_ = v_isSharedCheck_218_;
goto v_resetjp_205_;
}
v_resetjp_205_:
{
lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_208_, 0, v_v_202_);
lean_inc(v_k_201_);
v___x_209_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_201_, v___x_208_, v_map_203_);
if (v_hasTrace_204_ == 0)
{
lean_object* v___x_210_; uint8_t v___x_211_; lean_object* v___x_213_; 
v___x_210_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_211_ = l_Lean_Name_isPrefixOf(v___x_210_, v_k_201_);
lean_dec(v_k_201_);
if (v_isShared_207_ == 0)
{
lean_ctor_set(v___x_206_, 0, v___x_209_);
v___x_213_ = v___x_206_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v___x_209_);
v___x_213_ = v_reuseFailAlloc_214_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
lean_ctor_set_uint8(v___x_213_, sizeof(void*)*1, v___x_211_);
return v___x_213_;
}
}
else
{
lean_object* v___x_216_; 
lean_dec(v_k_201_);
if (v_isShared_207_ == 0)
{
lean_ctor_set(v___x_206_, 0, v___x_209_);
v___x_216_ = v___x_206_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v___x_209_);
lean_ctor_set_uint8(v_reuseFailAlloc_217_, sizeof(void*)*1, v_hasTrace_204_);
v___x_216_ = v_reuseFailAlloc_217_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
return v___x_216_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_setOption(lean_object* v_opts_226_, lean_object* v_decl_227_, lean_object* v_name_228_, lean_object* v_val_229_){
_start:
{
lean_object* v_defValue_231_; 
v_defValue_231_ = lean_ctor_get(v_decl_227_, 2);
lean_inc_ref(v_defValue_231_);
lean_dec_ref(v_decl_227_);
switch(lean_obj_tag(v_defValue_231_))
{
case 1:
{
lean_object* v___x_232_; uint8_t v___x_233_; 
lean_dec_ref_known(v_defValue_231_, 0);
v___x_232_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__0));
v___x_233_ = lean_string_dec_eq(v_val_229_, v___x_232_);
if (v___x_233_ == 0)
{
lean_object* v___x_234_; uint8_t v___x_235_; 
v___x_234_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__1));
v___x_235_ = lean_string_dec_eq(v_val_229_, v___x_234_);
if (v___x_235_ == 0)
{
lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
lean_dec(v_name_228_);
lean_dec_ref(v_opts_226_);
v___x_236_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__2));
v___x_237_ = lean_string_append(v___x_236_, v_val_229_);
lean_dec_ref(v_val_229_);
v___x_238_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__3));
v___x_239_ = lean_string_append(v___x_237_, v___x_238_);
v___x_240_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
v___x_241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_241_, 0, v___x_240_);
return v___x_241_;
}
else
{
lean_object* v___x_242_; lean_object* v___x_243_; 
lean_dec_ref(v_val_229_);
v___x_242_ = l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0(v_opts_226_, v_name_228_, v___x_233_);
v___x_243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_243_, 0, v___x_242_);
return v___x_243_;
}
}
else
{
lean_object* v___x_244_; lean_object* v___x_245_; 
lean_dec_ref(v_val_229_);
v___x_244_ = l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0(v_opts_226_, v_name_228_, v___x_233_);
v___x_245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
return v___x_245_;
}
}
case 3:
{
lean_object* v___x_247_; uint8_t v_isShared_248_; uint8_t v_isSharedCheck_270_; 
v_isSharedCheck_270_ = !lean_is_exclusive(v_defValue_231_);
if (v_isSharedCheck_270_ == 0)
{
lean_object* v_unused_271_; 
v_unused_271_ = lean_ctor_get(v_defValue_231_, 0);
lean_dec(v_unused_271_);
v___x_247_ = v_defValue_231_;
v_isShared_248_ = v_isSharedCheck_270_;
goto v_resetjp_246_;
}
else
{
lean_dec(v_defValue_231_);
v___x_247_ = lean_box(0);
v_isShared_248_ = v_isSharedCheck_270_;
goto v_resetjp_246_;
}
v_resetjp_246_:
{
lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_249_ = lean_unsigned_to_nat(0u);
v___x_250_ = lean_string_utf8_byte_size(v_val_229_);
lean_inc_ref(v_val_229_);
v___x_251_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_251_, 0, v_val_229_);
lean_ctor_set(v___x_251_, 1, v___x_249_);
lean_ctor_set(v___x_251_, 2, v___x_250_);
v___x_252_ = l_String_Slice_toNat_x3f(v___x_251_);
lean_dec_ref_known(v___x_251_, 3);
if (lean_obj_tag(v___x_252_) == 1)
{
lean_object* v_val_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_261_; 
lean_del_object(v___x_247_);
lean_dec_ref(v_val_229_);
v_val_253_ = lean_ctor_get(v___x_252_, 0);
v_isSharedCheck_261_ = !lean_is_exclusive(v___x_252_);
if (v_isSharedCheck_261_ == 0)
{
v___x_255_ = v___x_252_;
v_isShared_256_ = v_isSharedCheck_261_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_val_253_);
lean_dec(v___x_252_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_261_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
lean_object* v___x_257_; lean_object* v___x_259_; 
v___x_257_ = l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__1(v_opts_226_, v_name_228_, v_val_253_);
if (v_isShared_256_ == 0)
{
lean_ctor_set_tag(v___x_255_, 0);
lean_ctor_set(v___x_255_, 0, v___x_257_);
v___x_259_ = v___x_255_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v___x_257_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
else
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_267_; 
lean_dec(v___x_252_);
lean_dec(v_name_228_);
lean_dec_ref(v_opts_226_);
v___x_262_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__2));
v___x_263_ = lean_string_append(v___x_262_, v_val_229_);
lean_dec_ref(v_val_229_);
v___x_264_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__4));
v___x_265_ = lean_string_append(v___x_263_, v___x_264_);
if (v_isShared_248_ == 0)
{
lean_ctor_set_tag(v___x_247_, 18);
lean_ctor_set(v___x_247_, 0, v___x_265_);
v___x_267_ = v___x_247_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v___x_265_);
v___x_267_ = v_reuseFailAlloc_269_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
lean_object* v___x_268_; 
v___x_268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_268_, 0, v___x_267_);
return v___x_268_;
}
}
}
}
case 0:
{
lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_279_; 
v_isSharedCheck_279_ = !lean_is_exclusive(v_defValue_231_);
if (v_isSharedCheck_279_ == 0)
{
lean_object* v_unused_280_; 
v_unused_280_ = lean_ctor_get(v_defValue_231_, 0);
lean_dec(v_unused_280_);
v___x_273_ = v_defValue_231_;
v_isShared_274_ = v_isSharedCheck_279_;
goto v_resetjp_272_;
}
else
{
lean_dec(v_defValue_231_);
v___x_273_ = lean_box(0);
v_isShared_274_ = v_isSharedCheck_279_;
goto v_resetjp_272_;
}
v_resetjp_272_:
{
lean_object* v___x_275_; lean_object* v___x_277_; 
v___x_275_ = l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__2(v_opts_226_, v_name_228_, v_val_229_);
if (v_isShared_274_ == 0)
{
lean_ctor_set(v___x_273_, 0, v___x_275_);
v___x_277_ = v___x_273_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v___x_275_);
v___x_277_ = v_reuseFailAlloc_278_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
return v___x_277_;
}
}
}
default: 
{
lean_object* v___x_281_; uint8_t v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
lean_dec_ref(v_defValue_231_);
lean_dec_ref(v_val_229_);
lean_dec_ref(v_opts_226_);
v___x_281_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__5));
v___x_282_ = 1;
v___x_283_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_228_, v___x_282_);
v___x_284_ = lean_string_append(v___x_281_, v___x_283_);
lean_dec_ref(v___x_283_);
v___x_285_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__6));
v___x_286_ = lean_string_append(v___x_284_, v___x_285_);
v___x_287_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
v___x_288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_288_, 0, v___x_287_);
return v___x_288_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_setOption___boxed(lean_object* v_opts_289_, lean_object* v_decl_290_, lean_object* v_name_291_, lean_object* v_val_292_, lean_object* v_a_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_Lean_Language_Lean_setOption(v_opts_289_, v_decl_290_, v_name_291_, v_val_292_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_reparseOptions_spec__0(lean_object* v_o_295_, lean_object* v_k_296_, lean_object* v_v_297_){
_start:
{
lean_object* v_map_298_; uint8_t v_hasTrace_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_312_; 
v_map_298_ = lean_ctor_get(v_o_295_, 0);
v_hasTrace_299_ = lean_ctor_get_uint8(v_o_295_, sizeof(void*)*1);
v_isSharedCheck_312_ = !lean_is_exclusive(v_o_295_);
if (v_isSharedCheck_312_ == 0)
{
v___x_301_ = v_o_295_;
v_isShared_302_ = v_isSharedCheck_312_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_map_298_);
lean_dec(v_o_295_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_312_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v___x_303_; 
lean_inc(v_k_296_);
v___x_303_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_296_, v_v_297_, v_map_298_);
if (v_hasTrace_299_ == 0)
{
lean_object* v___x_304_; uint8_t v___x_305_; lean_object* v___x_307_; 
v___x_304_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_305_ = l_Lean_Name_isPrefixOf(v___x_304_, v_k_296_);
lean_dec(v_k_296_);
if (v_isShared_302_ == 0)
{
lean_ctor_set(v___x_301_, 0, v___x_303_);
v___x_307_ = v___x_301_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v___x_303_);
v___x_307_ = v_reuseFailAlloc_308_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
lean_ctor_set_uint8(v___x_307_, sizeof(void*)*1, v___x_305_);
return v___x_307_;
}
}
else
{
lean_object* v___x_310_; 
lean_dec(v_k_296_);
if (v_isShared_302_ == 0)
{
lean_ctor_set(v___x_301_, 0, v___x_303_);
v___x_310_ = v___x_301_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v___x_303_);
lean_ctor_set_uint8(v_reuseFailAlloc_311_, sizeof(void*)*1, v_hasTrace_299_);
v___x_310_ = v_reuseFailAlloc_311_;
goto v_reusejp_309_;
}
v_reusejp_309_:
{
return v___x_310_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1(lean_object* v_a_319_, lean_object* v_init_320_, lean_object* v_x_321_){
_start:
{
if (lean_obj_tag(v_x_321_) == 0)
{
lean_object* v_k_323_; lean_object* v_v_324_; lean_object* v_l_325_; lean_object* v_r_326_; lean_object* v___x_327_; 
v_k_323_ = lean_ctor_get(v_x_321_, 1);
lean_inc(v_k_323_);
v_v_324_ = lean_ctor_get(v_x_321_, 2);
lean_inc(v_v_324_);
v_l_325_ = lean_ctor_get(v_x_321_, 3);
lean_inc(v_l_325_);
v_r_326_ = lean_ctor_get(v_x_321_, 4);
lean_inc(v_r_326_);
lean_dec_ref_known(v_x_321_, 5);
v___x_327_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1(v_a_319_, v_init_320_, v_l_325_);
if (lean_obj_tag(v___x_327_) == 0)
{
lean_object* v_a_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_376_; 
v_a_328_ = lean_ctor_get(v___x_327_, 0);
v_isSharedCheck_376_ = !lean_is_exclusive(v___x_327_);
if (v_isSharedCheck_376_ == 0)
{
v___x_330_ = v___x_327_;
v_isShared_331_ = v_isSharedCheck_376_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_a_328_);
lean_dec(v___x_327_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_376_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v_a_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_375_; 
v_a_332_ = lean_ctor_get(v_a_328_, 0);
v_isSharedCheck_375_ = !lean_is_exclusive(v_a_328_);
if (v_isSharedCheck_375_ == 0)
{
v___x_334_ = v_a_328_;
v_isShared_335_ = v_isSharedCheck_375_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_a_332_);
lean_dec(v_a_328_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_375_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_336_ = l_Lean_Name_getRoot(v_k_323_);
v___x_337_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__1));
v___x_338_ = lean_box(0);
v___x_339_ = l_Lean_Name_replacePrefix(v_k_323_, v___x_337_, v___x_338_);
v___x_340_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_a_319_, v___x_339_);
if (lean_obj_tag(v___x_340_) == 1)
{
lean_dec(v___x_336_);
lean_del_object(v___x_334_);
lean_del_object(v___x_330_);
if (lean_obj_tag(v_v_324_) == 0)
{
lean_object* v_val_341_; lean_object* v_v_342_; lean_object* v___x_343_; 
v_val_341_ = lean_ctor_get(v___x_340_, 0);
lean_inc(v_val_341_);
lean_dec_ref_known(v___x_340_, 1);
v_v_342_ = lean_ctor_get(v_v_324_, 0);
lean_inc_ref(v_v_342_);
lean_dec_ref_known(v_v_324_, 1);
v___x_343_ = l_Lean_Language_Lean_setOption(v_a_332_, v_val_341_, v___x_339_, v_v_342_);
if (lean_obj_tag(v___x_343_) == 0)
{
lean_object* v_a_344_; 
v_a_344_ = lean_ctor_get(v___x_343_, 0);
lean_inc(v_a_344_);
lean_dec_ref_known(v___x_343_, 1);
v_init_320_ = v_a_344_;
v_x_321_ = v_r_326_;
goto _start;
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_353_; 
lean_dec(v_r_326_);
v_a_346_ = lean_ctor_get(v___x_343_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_343_);
if (v_isSharedCheck_353_ == 0)
{
v___x_348_ = v___x_343_;
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_343_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_349_ == 0)
{
v___x_351_ = v___x_348_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_a_346_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
}
else
{
lean_object* v___x_354_; 
lean_dec_ref_known(v___x_340_, 1);
v___x_354_ = l_Lean_Options_set___at___00Lean_Language_Lean_reparseOptions_spec__0(v_a_332_, v___x_339_, v_v_324_);
v_init_320_ = v___x_354_;
v_x_321_ = v_r_326_;
goto _start;
}
}
else
{
uint8_t v___x_356_; 
lean_dec(v___x_340_);
lean_dec(v_v_324_);
v___x_356_ = lean_name_eq(v___x_336_, v___x_337_);
lean_dec(v___x_336_);
if (v___x_356_ == 0)
{
lean_object* v___x_357_; uint8_t v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_369_; 
lean_dec(v_a_332_);
lean_dec(v_r_326_);
v___x_357_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__2));
v___x_358_ = 1;
lean_inc(v___x_339_);
v___x_359_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_339_, v___x_358_);
v___x_360_ = lean_string_append(v___x_357_, v___x_359_);
lean_dec_ref(v___x_359_);
v___x_361_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__3));
v___x_362_ = lean_string_append(v___x_360_, v___x_361_);
v___x_363_ = l_Lean_Name_append(v___x_337_, v___x_339_);
v___x_364_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_363_, v___x_358_);
v___x_365_ = lean_string_append(v___x_362_, v___x_364_);
lean_dec_ref(v___x_364_);
v___x_366_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__4));
v___x_367_ = lean_string_append(v___x_365_, v___x_366_);
if (v_isShared_335_ == 0)
{
lean_ctor_set_tag(v___x_334_, 18);
lean_ctor_set(v___x_334_, 0, v___x_367_);
v___x_369_ = v___x_334_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v___x_367_);
v___x_369_ = v_reuseFailAlloc_373_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
lean_object* v___x_371_; 
if (v_isShared_331_ == 0)
{
lean_ctor_set_tag(v___x_330_, 1);
lean_ctor_set(v___x_330_, 0, v___x_369_);
v___x_371_ = v___x_330_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v___x_369_);
v___x_371_ = v_reuseFailAlloc_372_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
return v___x_371_;
}
}
}
else
{
lean_dec(v___x_339_);
lean_del_object(v___x_334_);
lean_del_object(v___x_330_);
v_init_320_ = v_a_332_;
v_x_321_ = v_r_326_;
goto _start;
}
}
}
}
}
else
{
lean_dec(v_r_326_);
lean_dec(v_v_324_);
lean_dec(v_k_323_);
return v___x_327_;
}
}
else
{
lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_377_, 0, v_init_320_);
v___x_378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_378_, 0, v___x_377_);
return v___x_378_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___boxed(lean_object* v_a_379_, lean_object* v_init_380_, lean_object* v_x_381_, lean_object* v___y_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1(v_a_379_, v_init_380_, v_x_381_);
lean_dec(v_a_379_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_reparseOptions(lean_object* v_opts_384_){
_start:
{
lean_object* v_opts_x27_386_; lean_object* v___x_387_; 
v_opts_x27_386_ = l_Lean_Options_empty;
v___x_387_ = l_Lean_getOptionDecls();
if (lean_obj_tag(v___x_387_) == 0)
{
lean_object* v_a_388_; lean_object* v_map_389_; lean_object* v___x_390_; 
v_a_388_ = lean_ctor_get(v___x_387_, 0);
lean_inc(v_a_388_);
lean_dec_ref_known(v___x_387_, 1);
v_map_389_ = lean_ctor_get(v_opts_384_, 0);
lean_inc(v_map_389_);
lean_dec_ref(v_opts_384_);
v___x_390_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1(v_a_388_, v_opts_x27_386_, v_map_389_);
lean_dec(v_a_388_);
if (lean_obj_tag(v___x_390_) == 0)
{
lean_object* v_a_391_; lean_object* v___x_393_; uint8_t v_isShared_394_; uint8_t v_isSharedCheck_399_; 
v_a_391_ = lean_ctor_get(v___x_390_, 0);
v_isSharedCheck_399_ = !lean_is_exclusive(v___x_390_);
if (v_isSharedCheck_399_ == 0)
{
v___x_393_ = v___x_390_;
v_isShared_394_ = v_isSharedCheck_399_;
goto v_resetjp_392_;
}
else
{
lean_inc(v_a_391_);
lean_dec(v___x_390_);
v___x_393_ = lean_box(0);
v_isShared_394_ = v_isSharedCheck_399_;
goto v_resetjp_392_;
}
v_resetjp_392_:
{
lean_object* v_a_395_; lean_object* v___x_397_; 
v_a_395_ = lean_ctor_get(v_a_391_, 0);
lean_inc(v_a_395_);
lean_dec(v_a_391_);
if (v_isShared_394_ == 0)
{
lean_ctor_set(v___x_393_, 0, v_a_395_);
v___x_397_ = v___x_393_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_a_395_);
v___x_397_ = v_reuseFailAlloc_398_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
return v___x_397_;
}
}
}
else
{
lean_object* v_a_400_; lean_object* v___x_402_; uint8_t v_isShared_403_; uint8_t v_isSharedCheck_407_; 
v_a_400_ = lean_ctor_get(v___x_390_, 0);
v_isSharedCheck_407_ = !lean_is_exclusive(v___x_390_);
if (v_isSharedCheck_407_ == 0)
{
v___x_402_ = v___x_390_;
v_isShared_403_ = v_isSharedCheck_407_;
goto v_resetjp_401_;
}
else
{
lean_inc(v_a_400_);
lean_dec(v___x_390_);
v___x_402_ = lean_box(0);
v_isShared_403_ = v_isSharedCheck_407_;
goto v_resetjp_401_;
}
v_resetjp_401_:
{
lean_object* v___x_405_; 
if (v_isShared_403_ == 0)
{
v___x_405_ = v___x_402_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v_a_400_);
v___x_405_ = v_reuseFailAlloc_406_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
return v___x_405_;
}
}
}
}
else
{
lean_object* v_a_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_415_; 
lean_dec_ref(v_opts_384_);
v_a_408_ = lean_ctor_get(v___x_387_, 0);
v_isSharedCheck_415_ = !lean_is_exclusive(v___x_387_);
if (v_isSharedCheck_415_ == 0)
{
v___x_410_ = v___x_387_;
v_isShared_411_ = v_isSharedCheck_415_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_a_408_);
lean_dec(v___x_387_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_415_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v___x_413_; 
if (v_isShared_411_ == 0)
{
v___x_413_ = v___x_410_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v_a_408_);
v___x_413_ = v_reuseFailAlloc_414_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
return v___x_413_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_reparseOptions___boxed(lean_object* v_opts_416_, lean_object* v_a_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = l_Lean_Language_Lean_reparseOptions(v_opts_416_);
return v_res_418_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f(lean_object* v_stx_427_){
_start:
{
lean_object* v_stx_429_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; uint8_t v___x_435_; 
v___x_432_ = lean_unsigned_to_nat(0u);
v___x_433_ = l_Lean_Syntax_getArg(v_stx_427_, v___x_432_);
v___x_434_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3));
v___x_435_ = l_Lean_Syntax_isOfKind(v___x_433_, v___x_434_);
if (v___x_435_ == 0)
{
v_stx_429_ = v_stx_427_;
goto v___jp_428_;
}
else
{
lean_object* v___x_436_; lean_object* v_stx_437_; 
v___x_436_ = lean_unsigned_to_nat(1u);
v_stx_437_ = l_Lean_Syntax_getArg(v_stx_427_, v___x_436_);
lean_dec(v_stx_427_);
v_stx_429_ = v_stx_437_;
goto v___jp_428_;
}
v___jp_428_:
{
uint8_t v___x_430_; lean_object* v___x_431_; 
v___x_430_ = 0;
v___x_431_ = l_Lean_Syntax_getPos_x3f(v_stx_429_, v___x_430_);
lean_dec(v_stx_429_);
return v___x_431_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__spec__0(lean_object* v_name_438_, lean_object* v_decl_439_, lean_object* v_ref_440_){
_start:
{
lean_object* v_defValue_442_; lean_object* v_descr_443_; lean_object* v_deprecation_x3f_444_; lean_object* v___x_445_; uint8_t v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v_defValue_442_ = lean_ctor_get(v_decl_439_, 0);
v_descr_443_ = lean_ctor_get(v_decl_439_, 1);
v_deprecation_x3f_444_ = lean_ctor_get(v_decl_439_, 2);
v___x_445_ = lean_alloc_ctor(1, 0, 1);
v___x_446_ = lean_unbox(v_defValue_442_);
lean_ctor_set_uint8(v___x_445_, 0, v___x_446_);
lean_inc(v_deprecation_x3f_444_);
lean_inc_ref(v_descr_443_);
lean_inc_n(v_name_438_, 2);
v___x_447_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_447_, 0, v_name_438_);
lean_ctor_set(v___x_447_, 1, v_ref_440_);
lean_ctor_set(v___x_447_, 2, v___x_445_);
lean_ctor_set(v___x_447_, 3, v_descr_443_);
lean_ctor_set(v___x_447_, 4, v_deprecation_x3f_444_);
v___x_448_ = lean_register_option(v_name_438_, v___x_447_);
if (lean_obj_tag(v___x_448_) == 0)
{
lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_456_; 
v_isSharedCheck_456_ = !lean_is_exclusive(v___x_448_);
if (v_isSharedCheck_456_ == 0)
{
lean_object* v_unused_457_; 
v_unused_457_ = lean_ctor_get(v___x_448_, 0);
lean_dec(v_unused_457_);
v___x_450_ = v___x_448_;
v_isShared_451_ = v_isSharedCheck_456_;
goto v_resetjp_449_;
}
else
{
lean_dec(v___x_448_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_456_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v___x_452_; lean_object* v___x_454_; 
lean_inc(v_defValue_442_);
v___x_452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_452_, 0, v_name_438_);
lean_ctor_set(v___x_452_, 1, v_defValue_442_);
if (v_isShared_451_ == 0)
{
lean_ctor_set(v___x_450_, 0, v___x_452_);
v___x_454_ = v___x_450_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v___x_452_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
}
else
{
lean_object* v_a_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_465_; 
lean_dec(v_name_438_);
v_a_458_ = lean_ctor_get(v___x_448_, 0);
v_isSharedCheck_465_ = !lean_is_exclusive(v___x_448_);
if (v_isSharedCheck_465_ == 0)
{
v___x_460_ = v___x_448_;
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_a_458_);
lean_dec(v___x_448_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_463_; 
if (v_isShared_461_ == 0)
{
v___x_463_ = v___x_460_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_a_458_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
return v___x_463_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_466_, lean_object* v_decl_467_, lean_object* v_ref_468_, lean_object* v_a_469_){
_start:
{
lean_object* v_res_470_; 
v_res_470_ = l_Lean_Option_register___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__spec__0(v_name_466_, v_decl_467_, v_ref_468_);
lean_dec_ref(v_decl_467_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_488_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__2_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_));
v___x_489_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__4_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_));
v___x_490_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_));
v___x_491_ = l_Lean_Option_register___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__spec__0(v___x_488_, v___x_489_, v___x_490_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4____boxed(lean_object* v_a_492_){
_start:
{
lean_object* v_res_493_; 
v_res_493_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_();
return v_res_493_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_494_ = lean_unsigned_to_nat(32u);
v___x_495_ = lean_mk_empty_array_with_capacity(v___x_494_);
v___x_496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_496_, 0, v___x_495_);
return v___x_496_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_497_ = ((size_t)5ULL);
v___x_498_ = lean_unsigned_to_nat(0u);
v___x_499_ = lean_unsigned_to_nat(32u);
v___x_500_ = lean_mk_empty_array_with_capacity(v___x_499_);
v___x_501_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__0, &l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__0);
v___x_502_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_502_, 0, v___x_501_);
lean_ctor_set(v___x_502_, 1, v___x_500_);
lean_ctor_set(v___x_502_, 2, v___x_498_);
lean_ctor_set(v___x_502_, 3, v___x_498_);
lean_ctor_set_usize(v___x_502_, 4, v___x_497_);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg(lean_object* v___y_503_){
_start:
{
lean_object* v___x_505_; lean_object* v_infoState_506_; lean_object* v_trees_507_; lean_object* v___x_508_; lean_object* v_infoState_509_; lean_object* v_env_510_; lean_object* v_messages_511_; lean_object* v_scopes_512_; lean_object* v_usedQuotCtxts_513_; lean_object* v_nextMacroScope_514_; lean_object* v_maxRecDepth_515_; lean_object* v_ngen_516_; lean_object* v_auxDeclNGen_517_; lean_object* v_traceState_518_; lean_object* v_snapshotTasks_519_; lean_object* v_prevLinterStates_520_; lean_object* v_codeQualityEntryTasks_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_542_; 
v___x_505_ = lean_st_ref_get(v___y_503_);
v_infoState_506_ = lean_ctor_get(v___x_505_, 8);
lean_inc_ref(v_infoState_506_);
lean_dec(v___x_505_);
v_trees_507_ = lean_ctor_get(v_infoState_506_, 2);
lean_inc_ref(v_trees_507_);
lean_dec_ref(v_infoState_506_);
v___x_508_ = lean_st_ref_take(v___y_503_);
v_infoState_509_ = lean_ctor_get(v___x_508_, 8);
v_env_510_ = lean_ctor_get(v___x_508_, 0);
v_messages_511_ = lean_ctor_get(v___x_508_, 1);
v_scopes_512_ = lean_ctor_get(v___x_508_, 2);
v_usedQuotCtxts_513_ = lean_ctor_get(v___x_508_, 3);
v_nextMacroScope_514_ = lean_ctor_get(v___x_508_, 4);
v_maxRecDepth_515_ = lean_ctor_get(v___x_508_, 5);
v_ngen_516_ = lean_ctor_get(v___x_508_, 6);
v_auxDeclNGen_517_ = lean_ctor_get(v___x_508_, 7);
v_traceState_518_ = lean_ctor_get(v___x_508_, 9);
v_snapshotTasks_519_ = lean_ctor_get(v___x_508_, 10);
v_prevLinterStates_520_ = lean_ctor_get(v___x_508_, 11);
v_codeQualityEntryTasks_521_ = lean_ctor_get(v___x_508_, 12);
v_isSharedCheck_542_ = !lean_is_exclusive(v___x_508_);
if (v_isSharedCheck_542_ == 0)
{
v___x_523_ = v___x_508_;
v_isShared_524_ = v_isSharedCheck_542_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_codeQualityEntryTasks_521_);
lean_inc(v_prevLinterStates_520_);
lean_inc(v_snapshotTasks_519_);
lean_inc(v_traceState_518_);
lean_inc(v_infoState_509_);
lean_inc(v_auxDeclNGen_517_);
lean_inc(v_ngen_516_);
lean_inc(v_maxRecDepth_515_);
lean_inc(v_nextMacroScope_514_);
lean_inc(v_usedQuotCtxts_513_);
lean_inc(v_scopes_512_);
lean_inc(v_messages_511_);
lean_inc(v_env_510_);
lean_dec(v___x_508_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_542_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
uint8_t v_enabled_525_; lean_object* v_assignment_526_; lean_object* v_lazyAssignment_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_540_; 
v_enabled_525_ = lean_ctor_get_uint8(v_infoState_509_, sizeof(void*)*3);
v_assignment_526_ = lean_ctor_get(v_infoState_509_, 0);
v_lazyAssignment_527_ = lean_ctor_get(v_infoState_509_, 1);
v_isSharedCheck_540_ = !lean_is_exclusive(v_infoState_509_);
if (v_isSharedCheck_540_ == 0)
{
lean_object* v_unused_541_; 
v_unused_541_ = lean_ctor_get(v_infoState_509_, 2);
lean_dec(v_unused_541_);
v___x_529_ = v_infoState_509_;
v_isShared_530_ = v_isSharedCheck_540_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_lazyAssignment_527_);
lean_inc(v_assignment_526_);
lean_dec(v_infoState_509_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_540_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___x_531_; lean_object* v___x_533_; 
v___x_531_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__1, &l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__1);
if (v_isShared_530_ == 0)
{
lean_ctor_set(v___x_529_, 2, v___x_531_);
v___x_533_ = v___x_529_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v_assignment_526_);
lean_ctor_set(v_reuseFailAlloc_539_, 1, v_lazyAssignment_527_);
lean_ctor_set(v_reuseFailAlloc_539_, 2, v___x_531_);
lean_ctor_set_uint8(v_reuseFailAlloc_539_, sizeof(void*)*3, v_enabled_525_);
v___x_533_ = v_reuseFailAlloc_539_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
lean_object* v___x_535_; 
if (v_isShared_524_ == 0)
{
lean_ctor_set(v___x_523_, 8, v___x_533_);
v___x_535_ = v___x_523_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v_env_510_);
lean_ctor_set(v_reuseFailAlloc_538_, 1, v_messages_511_);
lean_ctor_set(v_reuseFailAlloc_538_, 2, v_scopes_512_);
lean_ctor_set(v_reuseFailAlloc_538_, 3, v_usedQuotCtxts_513_);
lean_ctor_set(v_reuseFailAlloc_538_, 4, v_nextMacroScope_514_);
lean_ctor_set(v_reuseFailAlloc_538_, 5, v_maxRecDepth_515_);
lean_ctor_set(v_reuseFailAlloc_538_, 6, v_ngen_516_);
lean_ctor_set(v_reuseFailAlloc_538_, 7, v_auxDeclNGen_517_);
lean_ctor_set(v_reuseFailAlloc_538_, 8, v___x_533_);
lean_ctor_set(v_reuseFailAlloc_538_, 9, v_traceState_518_);
lean_ctor_set(v_reuseFailAlloc_538_, 10, v_snapshotTasks_519_);
lean_ctor_set(v_reuseFailAlloc_538_, 11, v_prevLinterStates_520_);
lean_ctor_set(v_reuseFailAlloc_538_, 12, v_codeQualityEntryTasks_521_);
v___x_535_ = v_reuseFailAlloc_538_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_536_ = lean_st_ref_put(v___y_503_, v___x_535_);
v___x_537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_537_, 0, v_trees_507_);
return v___x_537_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___boxed(lean_object* v___y_543_, lean_object* v___y_544_){
_start:
{
lean_object* v_res_545_; 
v_res_545_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg(v___y_543_);
lean_dec(v___y_543_);
return v_res_545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0(lean_object* v___y_546_, lean_object* v___y_547_){
_start:
{
lean_object* v___x_549_; 
v___x_549_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg(v___y_547_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___boxed(lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_){
_start:
{
lean_object* v_res_553_; 
v_res_553_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0(v___y_550_, v___y_551_);
lean_dec(v___y_551_);
lean_dec_ref(v___y_550_);
return v_res_553_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(lean_object* v_opts_554_, lean_object* v_opt_555_){
_start:
{
lean_object* v_name_556_; lean_object* v_defValue_557_; lean_object* v_map_558_; lean_object* v___x_559_; 
v_name_556_ = lean_ctor_get(v_opt_555_, 0);
v_defValue_557_ = lean_ctor_get(v_opt_555_, 1);
v_map_558_ = lean_ctor_get(v_opts_554_, 0);
v___x_559_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_558_, v_name_556_);
if (lean_obj_tag(v___x_559_) == 0)
{
uint8_t v___x_560_; 
v___x_560_ = lean_unbox(v_defValue_557_);
return v___x_560_;
}
else
{
lean_object* v_val_561_; 
v_val_561_ = lean_ctor_get(v___x_559_, 0);
lean_inc(v_val_561_);
lean_dec_ref_known(v___x_559_, 1);
if (lean_obj_tag(v_val_561_) == 1)
{
uint8_t v_v_562_; 
v_v_562_ = lean_ctor_get_uint8(v_val_561_, 0);
lean_dec_ref_known(v_val_561_, 0);
return v_v_562_;
}
else
{
uint8_t v___x_563_; 
lean_dec(v_val_561_);
v___x_563_ = lean_unbox(v_defValue_557_);
return v___x_563_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1___boxed(lean_object* v_opts_564_, lean_object* v_opt_565_){
_start:
{
uint8_t v_res_566_; lean_object* v_r_567_; 
v_res_566_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_564_, v_opt_565_);
lean_dec_ref(v_opt_565_);
lean_dec_ref(v_opts_564_);
v_r_567_ = lean_box(v_res_566_);
return v_r_567_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0(lean_object* v_val_570_, lean_object* v___y_571_){
_start:
{
lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_572_ = l_Lean_Language_Snapshot_transform(v_val_570_, v___y_571_);
v___x_573_ = ((lean_object*)(l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0));
v___x_574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_574_, 0, v___x_572_);
lean_ctor_set(v___x_574_, 1, v___x_573_);
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___boxed(lean_object* v_val_575_, lean_object* v___y_576_){
_start:
{
lean_object* v_res_577_; 
v_res_577_ = l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0(v_val_575_, v___y_576_);
lean_dec_ref(v___y_576_);
return v_res_577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4(lean_object* v_inst_578_, lean_object* v_val_579_){
_start:
{
lean_object* v___f_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
lean_inc_ref(v_val_579_);
v___f_580_ = lean_alloc_closure((void*)(l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___boxed), 2, 1);
lean_closure_set(v___f_580_, 0, v_val_579_);
v___x_581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_581_, 0, v_inst_578_);
lean_ctor_set(v___x_581_, 1, v_val_579_);
v___x_582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_582_, 0, v___x_581_);
lean_ctor_set(v___x_582_, 1, v___f_580_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__0(lean_object* v_stx_583_, lean_object* v_revCmds_584_, lean_object* v___y_585_, lean_object* v___y_586_){
_start:
{
lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_588_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg(v___y_586_);
lean_dec_ref(v___x_588_);
lean_inc(v_stx_583_);
v___x_589_ = l_Lean_Elab_Command_elabCommandTopLevel(v_stx_583_, v___y_585_, v___y_586_);
if (lean_obj_tag(v___x_589_) == 0)
{
lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_601_; 
v_isSharedCheck_601_ = !lean_is_exclusive(v___x_589_);
if (v_isSharedCheck_601_ == 0)
{
lean_object* v_unused_602_; 
v_unused_602_ = lean_ctor_get(v___x_589_, 0);
lean_dec(v_unused_602_);
v___x_591_ = v___x_589_;
v_isShared_592_ = v_isSharedCheck_601_;
goto v_resetjp_590_;
}
else
{
lean_dec(v___x_589_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_601_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
uint8_t v___x_593_; 
v___x_593_ = l_Lean_Parser_isTerminalCommand(v_stx_583_);
if (v___x_593_ == 0)
{
lean_object* v___x_594_; lean_object* v___x_596_; 
lean_dec(v_revCmds_584_);
v___x_594_ = lean_box(0);
if (v_isShared_592_ == 0)
{
lean_ctor_set(v___x_591_, 0, v___x_594_);
v___x_596_ = v___x_591_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v___x_594_);
v___x_596_ = v_reuseFailAlloc_597_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
return v___x_596_;
}
}
else
{
lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
lean_del_object(v___x_591_);
v___x_598_ = l_List_reverse___redArg(v_revCmds_584_);
v___x_599_ = lean_array_mk(v___x_598_);
v___x_600_ = l_Lean_Elab_Command_runModuleLintersAsync(v___x_599_, v___y_585_, v___y_586_);
return v___x_600_;
}
}
}
else
{
lean_dec(v_revCmds_584_);
lean_dec(v_stx_583_);
return v___x_589_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__0___boxed(lean_object* v_stx_603_, lean_object* v_revCmds_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_){
_start:
{
lean_object* v_res_608_; 
v_res_608_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__0(v_stx_603_, v_revCmds_604_, v___y_605_, v___y_606_);
lean_dec(v___y_606_);
lean_dec_ref(v___y_605_);
return v_res_608_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0(void){
_start:
{
lean_object* v___x_609_; 
v___x_609_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_609_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1(void){
_start:
{
lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_610_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0);
v___x_611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_611_, 0, v___x_610_);
return v___x_611_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__2(void){
_start:
{
lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_612_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_613_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1);
v___x_614_ = lean_unsigned_to_nat(0u);
v___x_615_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_615_, 0, v___x_614_);
lean_ctor_set(v___x_615_, 1, v___x_614_);
lean_ctor_set(v___x_615_, 2, v___x_614_);
lean_ctor_set(v___x_615_, 3, v___x_614_);
lean_ctor_set(v___x_615_, 4, v___x_613_);
lean_ctor_set(v___x_615_, 5, v___x_613_);
lean_ctor_set(v___x_615_, 6, v___x_613_);
lean_ctor_set(v___x_615_, 7, v___x_613_);
lean_ctor_set(v___x_615_, 8, v___x_613_);
lean_ctor_set(v___x_615_, 9, v___x_613_);
lean_ctor_set(v___x_615_, 10, v___x_613_);
lean_ctor_set(v___x_615_, 11, v___x_612_);
return v___x_615_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__3(void){
_start:
{
lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_616_ = lean_unsigned_to_nat(32u);
v___x_617_ = lean_mk_empty_array_with_capacity(v___x_616_);
v___x_618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_618_, 0, v___x_617_);
return v___x_618_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__4(void){
_start:
{
size_t v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_619_ = ((size_t)5ULL);
v___x_620_ = lean_unsigned_to_nat(0u);
v___x_621_ = lean_unsigned_to_nat(32u);
v___x_622_ = lean_mk_empty_array_with_capacity(v___x_621_);
v___x_623_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__3);
v___x_624_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_624_, 0, v___x_623_);
lean_ctor_set(v___x_624_, 1, v___x_622_);
lean_ctor_set(v___x_624_, 2, v___x_620_);
lean_ctor_set(v___x_624_, 3, v___x_620_);
lean_ctor_set_usize(v___x_624_, 4, v___x_619_);
return v___x_624_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__5(void){
_start:
{
lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_625_ = lean_box(1);
v___x_626_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__4);
v___x_627_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1);
v___x_628_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_628_, 0, v___x_627_);
lean_ctor_set(v___x_628_, 1, v___x_626_);
lean_ctor_set(v___x_628_, 2, v___x_625_);
return v___x_628_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg(lean_object* v_msgData_629_, lean_object* v___y_630_){
_start:
{
lean_object* v___x_632_; lean_object* v_env_633_; uint8_t v___x_634_; lean_object* v_env_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v_scopes_638_; lean_object* v___x_639_; lean_object* v_opts_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_632_ = lean_st_ref_get(v___y_630_);
v_env_633_ = lean_ctor_get(v___x_632_, 0);
lean_inc_ref(v_env_633_);
lean_dec(v___x_632_);
v___x_634_ = 0;
v_env_635_ = l_Lean_Environment_setRecordingDeps(v_env_633_, v___x_634_);
v___x_636_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_637_ = lean_st_ref_get(v___y_630_);
v_scopes_638_ = lean_ctor_get(v___x_637_, 2);
lean_inc(v_scopes_638_);
lean_dec(v___x_637_);
v___x_639_ = l_List_head_x21___redArg(v___x_636_, v_scopes_638_);
lean_dec(v_scopes_638_);
v_opts_640_ = lean_ctor_get(v___x_639_, 1);
lean_inc_ref(v_opts_640_);
lean_dec(v___x_639_);
v___x_641_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__2);
v___x_642_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__5);
v___x_643_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_643_, 0, v_env_635_);
lean_ctor_set(v___x_643_, 1, v___x_641_);
lean_ctor_set(v___x_643_, 2, v___x_642_);
lean_ctor_set(v___x_643_, 3, v_opts_640_);
v___x_644_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_644_, 0, v___x_643_);
lean_ctor_set(v___x_644_, 1, v_msgData_629_);
v___x_645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_645_, 0, v___x_644_);
return v___x_645_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___boxed(lean_object* v_msgData_646_, lean_object* v___y_647_, lean_object* v___y_648_){
_start:
{
lean_object* v_res_649_; 
v_res_649_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg(v_msgData_646_, v___y_647_);
lean_dec(v___y_647_);
return v_res_649_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___lam__0(uint8_t v_suppressElabErrors_650_, lean_object* v_x_651_){
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
return v_suppressElabErrors_650_;
}
}
else
{
uint8_t v___x_656_; 
v___x_656_ = 0;
return v___x_656_;
}
}
else
{
uint8_t v___x_657_; 
v___x_657_ = 0;
return v___x_657_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___lam__0___boxed(lean_object* v_suppressElabErrors_658_, lean_object* v_x_659_){
_start:
{
uint8_t v_suppressElabErrors_boxed_660_; uint8_t v_res_661_; lean_object* v_r_662_; 
v_suppressElabErrors_boxed_660_ = lean_unbox(v_suppressElabErrors_658_);
v_res_661_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___lam__0(v_suppressElabErrors_boxed_660_, v_x_659_);
lean_dec(v_x_659_);
v_r_662_ = lean_box(v_res_661_);
return v_r_662_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10(lean_object* v_ref_664_, lean_object* v_msgData_665_, uint8_t v_severity_666_, uint8_t v_isSilent_667_, lean_object* v___y_668_, lean_object* v___y_669_){
_start:
{
lean_object* v___y_672_; lean_object* v___y_673_; lean_object* v___y_674_; lean_object* v___y_675_; uint8_t v___y_676_; uint8_t v___y_677_; lean_object* v___y_678_; lean_object* v___y_679_; lean_object* v___y_737_; uint8_t v___y_738_; uint8_t v___y_739_; lean_object* v___y_740_; uint8_t v___y_763_; lean_object* v___y_764_; uint8_t v___y_765_; lean_object* v___y_766_; uint8_t v___y_770_; uint8_t v___y_771_; uint8_t v___x_786_; uint8_t v___y_788_; uint8_t v___x_798_; 
v___x_786_ = 2;
v___x_798_ = l_Lean_instBEqMessageSeverity_beq(v_severity_666_, v___x_786_);
if (v___x_798_ == 0)
{
v___y_788_ = v___x_798_;
goto v___jp_787_;
}
else
{
uint8_t v___x_799_; 
lean_inc_ref(v_msgData_665_);
v___x_799_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_665_);
if (v___x_799_ == 0)
{
v___y_788_ = v___x_799_;
goto v___jp_787_;
}
else
{
lean_object* v___x_800_; lean_object* v___x_801_; 
lean_dec_ref(v_msgData_665_);
v___x_800_ = lean_box(0);
v___x_801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_801_, 0, v___x_800_);
return v___x_801_;
}
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
lean_inc_ref(v___y_675_);
lean_inc_ref(v___y_674_);
v___x_691_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_691_, 0, v___y_674_);
lean_ctor_set(v___x_691_, 1, v___y_678_);
lean_ctor_set(v___x_691_, 2, v___y_672_);
lean_ctor_set(v___x_691_, 3, v___y_675_);
lean_ctor_set(v___x_691_, 4, v___x_690_);
lean_ctor_set_uint8(v___x_691_, sizeof(void*)*5, v___y_676_);
lean_ctor_set_uint8(v___x_691_, sizeof(void*)*5 + 1, v___y_677_);
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
lean_dec_ref(v___y_678_);
lean_dec_ref(v___y_673_);
lean_dec(v___y_672_);
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
lean_dec_ref(v___y_678_);
lean_dec_ref(v___y_673_);
lean_dec(v___y_672_);
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
lean_object* v_fileName_741_; lean_object* v_fileMap_742_; uint8_t v_suppressElabErrors_743_; lean_object* v___x_744_; lean_object* v___f_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v_a_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_761_; 
v_fileName_741_ = lean_ctor_get(v___y_668_, 0);
v_fileMap_742_ = lean_ctor_get(v___y_668_, 1);
v_suppressElabErrors_743_ = lean_ctor_get_uint8(v___y_668_, sizeof(void*)*10);
v___x_744_ = lean_box(v_suppressElabErrors_743_);
v___f_745_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___lam__0___boxed), 2, 1);
lean_closure_set(v___f_745_, 0, v___x_744_);
v___x_746_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_665_);
v___x_747_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg(v___x_746_, v___y_669_);
v_a_748_ = lean_ctor_get(v___x_747_, 0);
v_isSharedCheck_761_ = !lean_is_exclusive(v___x_747_);
if (v_isSharedCheck_761_ == 0)
{
v___x_750_ = v___x_747_;
v_isShared_751_ = v_isSharedCheck_761_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_a_748_);
lean_dec(v___x_747_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_761_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
lean_inc_ref_n(v_fileMap_742_, 2);
v___x_752_ = l_Lean_FileMap_toPosition(v_fileMap_742_, v___y_737_);
lean_dec(v___y_737_);
v___x_753_ = l_Lean_FileMap_toPosition(v_fileMap_742_, v___y_740_);
lean_dec(v___y_740_);
v___x_754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_754_, 0, v___x_753_);
v___x_755_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
if (v_suppressElabErrors_743_ == 0)
{
lean_del_object(v___x_750_);
lean_dec_ref(v___f_745_);
v___y_672_ = v___x_754_;
v___y_673_ = v_a_748_;
v___y_674_ = v_fileName_741_;
v___y_675_ = v___x_755_;
v___y_676_ = v___y_738_;
v___y_677_ = v___y_739_;
v___y_678_ = v___x_752_;
v___y_679_ = v___y_669_;
goto v___jp_671_;
}
else
{
uint8_t v___x_756_; 
lean_inc(v_a_748_);
v___x_756_ = l_Lean_MessageData_hasTag(v___f_745_, v_a_748_);
if (v___x_756_ == 0)
{
lean_object* v___x_757_; lean_object* v___x_759_; 
lean_dec_ref_known(v___x_754_, 1);
lean_dec_ref(v___x_752_);
lean_dec(v_a_748_);
v___x_757_ = lean_box(0);
if (v_isShared_751_ == 0)
{
lean_ctor_set(v___x_750_, 0, v___x_757_);
v___x_759_ = v___x_750_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v___x_757_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
else
{
lean_del_object(v___x_750_);
v___y_672_ = v___x_754_;
v___y_673_ = v_a_748_;
v___y_674_ = v_fileName_741_;
v___y_675_ = v___x_755_;
v___y_676_ = v___y_738_;
v___y_677_ = v___y_739_;
v___y_678_ = v___x_752_;
v___y_679_ = v___y_669_;
goto v___jp_671_;
}
}
}
}
v___jp_762_:
{
lean_object* v___x_767_; 
v___x_767_ = l_Lean_Syntax_getTailPos_x3f(v___y_764_, v___y_763_);
lean_dec(v___y_764_);
if (lean_obj_tag(v___x_767_) == 0)
{
lean_inc(v___y_766_);
v___y_737_ = v___y_766_;
v___y_738_ = v___y_763_;
v___y_739_ = v___y_765_;
v___y_740_ = v___y_766_;
goto v___jp_736_;
}
else
{
lean_object* v_val_768_; 
v_val_768_ = lean_ctor_get(v___x_767_, 0);
lean_inc(v_val_768_);
lean_dec_ref_known(v___x_767_, 1);
v___y_737_ = v___y_766_;
v___y_738_ = v___y_763_;
v___y_739_ = v___y_765_;
v___y_740_ = v_val_768_;
goto v___jp_736_;
}
}
v___jp_769_:
{
lean_object* v___x_772_; 
v___x_772_ = l_Lean_Elab_Command_getRef___redArg(v___y_668_);
if (lean_obj_tag(v___x_772_) == 0)
{
lean_object* v_a_773_; lean_object* v_ref_774_; lean_object* v___x_775_; 
v_a_773_ = lean_ctor_get(v___x_772_, 0);
lean_inc(v_a_773_);
lean_dec_ref_known(v___x_772_, 1);
v_ref_774_ = l_Lean_replaceRef(v_ref_664_, v_a_773_);
lean_dec(v_a_773_);
v___x_775_ = l_Lean_Syntax_getPos_x3f(v_ref_774_, v___y_770_);
if (lean_obj_tag(v___x_775_) == 0)
{
lean_object* v___x_776_; 
v___x_776_ = lean_unsigned_to_nat(0u);
v___y_763_ = v___y_770_;
v___y_764_ = v_ref_774_;
v___y_765_ = v___y_771_;
v___y_766_ = v___x_776_;
goto v___jp_762_;
}
else
{
lean_object* v_val_777_; 
v_val_777_ = lean_ctor_get(v___x_775_, 0);
lean_inc(v_val_777_);
lean_dec_ref_known(v___x_775_, 1);
v___y_763_ = v___y_770_;
v___y_764_ = v_ref_774_;
v___y_765_ = v___y_771_;
v___y_766_ = v_val_777_;
goto v___jp_762_;
}
}
else
{
lean_object* v_a_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_785_; 
lean_dec_ref(v_msgData_665_);
v_a_778_ = lean_ctor_get(v___x_772_, 0);
v_isSharedCheck_785_ = !lean_is_exclusive(v___x_772_);
if (v_isSharedCheck_785_ == 0)
{
v___x_780_ = v___x_772_;
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_a_778_);
lean_dec(v___x_772_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
lean_object* v___x_783_; 
if (v_isShared_781_ == 0)
{
v___x_783_ = v___x_780_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v_a_778_);
v___x_783_ = v_reuseFailAlloc_784_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
return v___x_783_;
}
}
}
}
v___jp_787_:
{
lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v_scopes_791_; lean_object* v___x_792_; lean_object* v_opts_793_; uint8_t v___x_794_; uint8_t v___x_795_; 
v___x_789_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_790_ = lean_st_ref_get(v___y_669_);
v_scopes_791_ = lean_ctor_get(v___x_790_, 2);
lean_inc(v_scopes_791_);
lean_dec(v___x_790_);
v___x_792_ = l_List_head_x21___redArg(v___x_789_, v_scopes_791_);
lean_dec(v_scopes_791_);
v_opts_793_ = lean_ctor_get(v___x_792_, 1);
lean_inc_ref(v_opts_793_);
lean_dec(v___x_792_);
v___x_794_ = 1;
v___x_795_ = l_Lean_instBEqMessageSeverity_beq(v_severity_666_, v___x_794_);
if (v___x_795_ == 0)
{
lean_dec_ref(v_opts_793_);
v___y_770_ = v___y_788_;
v___y_771_ = v_severity_666_;
goto v___jp_769_;
}
else
{
lean_object* v___x_796_; uint8_t v___x_797_; 
v___x_796_ = l_Lean_warningAsError;
v___x_797_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_793_, v___x_796_);
lean_dec_ref(v_opts_793_);
if (v___x_797_ == 0)
{
v___y_770_ = v___y_788_;
v___y_771_ = v_severity_666_;
goto v___jp_769_;
}
else
{
v___y_770_ = v___y_788_;
v___y_771_ = v___x_786_;
goto v___jp_769_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___boxed(lean_object* v_ref_802_, lean_object* v_msgData_803_, lean_object* v_severity_804_, lean_object* v_isSilent_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_){
_start:
{
uint8_t v_severity_boxed_809_; uint8_t v_isSilent_boxed_810_; lean_object* v_res_811_; 
v_severity_boxed_809_ = lean_unbox(v_severity_804_);
v_isSilent_boxed_810_ = lean_unbox(v_isSilent_805_);
v_res_811_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10(v_ref_802_, v_msgData_803_, v_severity_boxed_809_, v_isSilent_boxed_810_, v___y_806_, v___y_807_);
lean_dec(v___y_807_);
lean_dec_ref(v___y_806_);
lean_dec(v_ref_802_);
return v_res_811_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5_spec__12(lean_object* v_msgData_812_, uint8_t v_severity_813_, uint8_t v_isSilent_814_, lean_object* v___y_815_, lean_object* v___y_816_){
_start:
{
lean_object* v___x_818_; 
v___x_818_ = l_Lean_Elab_Command_getRef___redArg(v___y_815_);
if (lean_obj_tag(v___x_818_) == 0)
{
lean_object* v_a_819_; lean_object* v___x_820_; 
v_a_819_ = lean_ctor_get(v___x_818_, 0);
lean_inc(v_a_819_);
lean_dec_ref_known(v___x_818_, 1);
v___x_820_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10(v_a_819_, v_msgData_812_, v_severity_813_, v_isSilent_814_, v___y_815_, v___y_816_);
lean_dec(v_a_819_);
return v___x_820_;
}
else
{
lean_object* v_a_821_; lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_828_; 
lean_dec_ref(v_msgData_812_);
v_a_821_ = lean_ctor_get(v___x_818_, 0);
v_isSharedCheck_828_ = !lean_is_exclusive(v___x_818_);
if (v_isSharedCheck_828_ == 0)
{
v___x_823_ = v___x_818_;
v_isShared_824_ = v_isSharedCheck_828_;
goto v_resetjp_822_;
}
else
{
lean_inc(v_a_821_);
lean_dec(v___x_818_);
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
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5_spec__12___boxed(lean_object* v_msgData_829_, lean_object* v_severity_830_, lean_object* v_isSilent_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_){
_start:
{
uint8_t v_severity_boxed_835_; uint8_t v_isSilent_boxed_836_; lean_object* v_res_837_; 
v_severity_boxed_835_ = lean_unbox(v_severity_830_);
v_isSilent_boxed_836_ = lean_unbox(v_isSilent_831_);
v_res_837_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5_spec__12(v_msgData_829_, v_severity_boxed_835_, v_isSilent_boxed_836_, v___y_832_, v___y_833_);
lean_dec(v___y_833_);
lean_dec_ref(v___y_832_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5(lean_object* v_msgData_838_, lean_object* v___y_839_, lean_object* v___y_840_){
_start:
{
uint8_t v___x_842_; uint8_t v___x_843_; lean_object* v___x_844_; 
v___x_842_ = 2;
v___x_843_ = 0;
v___x_844_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5_spec__12(v_msgData_838_, v___x_842_, v___x_843_, v___y_839_, v___y_840_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5___boxed(lean_object* v_msgData_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_){
_start:
{
lean_object* v_res_849_; 
v_res_849_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5(v_msgData_845_, v___y_846_, v___y_847_);
lean_dec(v___y_847_);
lean_dec_ref(v___y_846_);
return v_res_849_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4(lean_object* v_ref_850_, lean_object* v_msgData_851_, lean_object* v___y_852_, lean_object* v___y_853_){
_start:
{
uint8_t v___x_855_; uint8_t v___x_856_; lean_object* v___x_857_; 
v___x_855_ = 2;
v___x_856_ = 0;
v___x_857_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10(v_ref_850_, v_msgData_851_, v___x_855_, v___x_856_, v___y_852_, v___y_853_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4___boxed(lean_object* v_ref_858_, lean_object* v_msgData_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_){
_start:
{
lean_object* v_res_863_; 
v_res_863_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4(v_ref_858_, v_msgData_859_, v___y_860_, v___y_861_);
lean_dec(v___y_861_);
lean_dec_ref(v___y_860_);
lean_dec(v_ref_858_);
return v_res_863_;
}
}
static lean_object* _init_l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__1(void){
_start:
{
lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_865_ = ((lean_object*)(l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__0));
v___x_866_ = l_Lean_stringToMessageData(v___x_865_);
return v___x_866_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2(lean_object* v_ex_867_, lean_object* v___y_868_, lean_object* v___y_869_){
_start:
{
if (lean_obj_tag(v_ex_867_) == 0)
{
lean_object* v_ref_874_; lean_object* v_msg_875_; lean_object* v___x_876_; 
v_ref_874_ = lean_ctor_get(v_ex_867_, 0);
lean_inc(v_ref_874_);
v_msg_875_ = lean_ctor_get(v_ex_867_, 1);
lean_inc_ref(v_msg_875_);
lean_dec_ref_known(v_ex_867_, 2);
v___x_876_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4(v_ref_874_, v_msg_875_, v___y_868_, v___y_869_);
lean_dec(v_ref_874_);
return v___x_876_;
}
else
{
lean_object* v_id_877_; uint8_t v___x_878_; 
v_id_877_ = lean_ctor_get(v_ex_867_, 0);
lean_inc(v_id_877_);
v___x_878_ = l_Lean_Elab_isAbortExceptionId(v_id_877_);
if (v___x_878_ == 0)
{
uint8_t v___x_879_; lean_object* v___x_881_; uint8_t v_isShared_882_; uint8_t v_isSharedCheck_904_; 
v___x_879_ = l_Lean_Exception_isInterrupt(v_ex_867_);
v_isSharedCheck_904_ = !lean_is_exclusive(v_ex_867_);
if (v_isSharedCheck_904_ == 0)
{
lean_object* v_unused_905_; lean_object* v_unused_906_; 
v_unused_905_ = lean_ctor_get(v_ex_867_, 1);
lean_dec(v_unused_905_);
v_unused_906_ = lean_ctor_get(v_ex_867_, 0);
lean_dec(v_unused_906_);
v___x_881_ = v_ex_867_;
v_isShared_882_ = v_isSharedCheck_904_;
goto v_resetjp_880_;
}
else
{
lean_dec(v_ex_867_);
v___x_881_ = lean_box(0);
v_isShared_882_ = v_isSharedCheck_904_;
goto v_resetjp_880_;
}
v_resetjp_880_:
{
if (v___x_879_ == 0)
{
lean_object* v___x_883_; 
v___x_883_ = l_Lean_InternalExceptionId_getName(v_id_877_);
lean_dec(v_id_877_);
if (lean_obj_tag(v___x_883_) == 0)
{
lean_object* v_a_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
lean_del_object(v___x_881_);
v_a_884_ = lean_ctor_get(v___x_883_, 0);
lean_inc(v_a_884_);
lean_dec_ref_known(v___x_883_, 1);
v___x_885_ = lean_obj_once(&l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__1, &l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__1_once, _init_l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__1);
v___x_886_ = l_Lean_MessageData_ofName(v_a_884_);
v___x_887_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_887_, 0, v___x_885_);
lean_ctor_set(v___x_887_, 1, v___x_886_);
v___x_888_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5(v___x_887_, v___y_868_, v___y_869_);
return v___x_888_;
}
else
{
lean_object* v_a_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_903_; 
v_a_889_ = lean_ctor_get(v___x_883_, 0);
v_isSharedCheck_903_ = !lean_is_exclusive(v___x_883_);
if (v_isSharedCheck_903_ == 0)
{
v___x_891_ = v___x_883_;
v_isShared_892_ = v_isSharedCheck_903_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_a_889_);
lean_dec(v___x_883_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_903_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v_ref_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_898_; 
v_ref_893_ = lean_ctor_get(v___y_868_, 7);
v___x_894_ = lean_io_error_to_string(v_a_889_);
v___x_895_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_895_, 0, v___x_894_);
v___x_896_ = l_Lean_MessageData_ofFormat(v___x_895_);
lean_inc(v_ref_893_);
if (v_isShared_882_ == 0)
{
lean_ctor_set_tag(v___x_881_, 0);
lean_ctor_set(v___x_881_, 1, v___x_896_);
lean_ctor_set(v___x_881_, 0, v_ref_893_);
v___x_898_ = v___x_881_;
goto v_reusejp_897_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v_ref_893_);
lean_ctor_set(v_reuseFailAlloc_902_, 1, v___x_896_);
v___x_898_ = v_reuseFailAlloc_902_;
goto v_reusejp_897_;
}
v_reusejp_897_:
{
lean_object* v___x_900_; 
if (v_isShared_892_ == 0)
{
lean_ctor_set(v___x_891_, 0, v___x_898_);
v___x_900_ = v___x_891_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v___x_898_);
v___x_900_ = v_reuseFailAlloc_901_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
return v___x_900_;
}
}
}
}
}
else
{
lean_del_object(v___x_881_);
lean_dec(v_id_877_);
goto v___jp_871_;
}
}
}
else
{
lean_dec_ref_known(v_ex_867_, 2);
lean_dec(v_id_877_);
goto v___jp_871_;
}
}
v___jp_871_:
{
lean_object* v___x_872_; lean_object* v___x_873_; 
v___x_872_ = lean_box(0);
v___x_873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_873_, 0, v___x_872_);
return v___x_873_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___boxed(lean_object* v_ex_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_){
_start:
{
lean_object* v_res_911_; 
v_res_911_ = l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2(v_ex_907_, v___y_908_, v___y_909_);
lean_dec(v___y_909_);
lean_dec_ref(v___y_908_);
return v_res_911_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2(lean_object* v_x_912_, lean_object* v___y_913_, lean_object* v___y_914_){
_start:
{
lean_object* v___x_916_; 
lean_inc(v___y_914_);
lean_inc_ref(v___y_913_);
v___x_916_ = lean_apply_3(v_x_912_, v___y_913_, v___y_914_, lean_box(0));
if (lean_obj_tag(v___x_916_) == 0)
{
return v___x_916_;
}
else
{
lean_object* v_a_917_; uint8_t v___x_918_; 
v_a_917_ = lean_ctor_get(v___x_916_, 0);
lean_inc(v_a_917_);
v___x_918_ = l_Lean_Exception_isInterrupt(v_a_917_);
if (v___x_918_ == 0)
{
lean_object* v___x_919_; 
lean_dec_ref_known(v___x_916_, 1);
v___x_919_ = l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2(v_a_917_, v___y_913_, v___y_914_);
return v___x_919_;
}
else
{
lean_dec(v_a_917_);
return v___x_916_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2___boxed(lean_object* v_x_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_){
_start:
{
lean_object* v_res_924_; 
v_res_924_ = l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2(v_x_920_, v___y_921_, v___y_922_);
lean_dec(v___y_922_);
lean_dec_ref(v___y_921_);
return v_res_924_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__1(lean_object* v___f_925_, lean_object* v___x_926_, lean_object* v_val_927_, lean_object* v___y_928_){
_start:
{
lean_object* v_a_931_; lean_object* v___x_933_; 
v___x_933_ = l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2(v___f_925_, v___x_926_, v_val_927_);
if (lean_obj_tag(v___x_933_) == 0)
{
lean_object* v_a_934_; 
v_a_934_ = lean_ctor_get(v___x_933_, 0);
lean_inc(v_a_934_);
lean_dec_ref_known(v___x_933_, 1);
v_a_931_ = v_a_934_;
goto v___jp_930_;
}
else
{
lean_object* v___x_935_; 
lean_dec_ref_known(v___x_933_, 1);
v___x_935_ = lean_box(0);
v_a_931_ = v___x_935_;
goto v___jp_930_;
}
v___jp_930_:
{
lean_object* v___x_932_; 
v___x_932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_932_, 0, v_a_931_);
return v___x_932_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__1___boxed(lean_object* v___f_936_, lean_object* v___x_937_, lean_object* v_val_938_, lean_object* v___y_939_, lean_object* v___y_940_){
_start:
{
lean_object* v_res_941_; 
v_res_941_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__1(v___f_936_, v___x_937_, v_val_938_, v___y_939_);
lean_dec_ref(v___y_939_);
lean_dec(v_val_938_);
lean_dec_ref(v___x_937_);
return v_res_941_;
}
}
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___redArg(lean_object* v_h_942_, lean_object* v_x_943_, lean_object* v___y_944_){
_start:
{
lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_946_ = lean_get_set_stderr(v_h_942_);
lean_inc_ref(v___y_944_);
v___x_947_ = lean_apply_2(v_x_943_, v___y_944_, lean_box(0));
v___x_948_ = lean_get_set_stderr(v___x_946_);
lean_dec_ref(v___x_948_);
return v___x_947_;
}
}
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___redArg___boxed(lean_object* v_h_949_, lean_object* v_x_950_, lean_object* v___y_951_, lean_object* v___y_952_){
_start:
{
lean_object* v_res_953_; 
v_res_953_ = l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___redArg(v_h_949_, v_x_950_, v___y_951_);
lean_dec_ref(v___y_951_);
return v_res_953_;
}
}
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7(lean_object* v_00_u03b1_954_, lean_object* v_h_955_, lean_object* v_x_956_, lean_object* v___y_957_){
_start:
{
lean_object* v___x_959_; 
v___x_959_ = l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___redArg(v_h_955_, v_x_956_, v___y_957_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___boxed(lean_object* v_00_u03b1_960_, lean_object* v_h_961_, lean_object* v_x_962_, lean_object* v___y_963_, lean_object* v___y_964_){
_start:
{
lean_object* v_res_965_; 
v_res_965_ = l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7(v_00_u03b1_960_, v_h_961_, v_x_962_, v___y_963_);
lean_dec_ref(v___y_963_);
return v_res_965_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___redArg(lean_object* v_h_966_, lean_object* v_x_967_, lean_object* v___y_968_){
_start:
{
lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; 
v___x_970_ = lean_get_set_stdin(v_h_966_);
lean_inc_ref(v___y_968_);
v___x_971_ = lean_apply_2(v_x_967_, v___y_968_, lean_box(0));
v___x_972_ = lean_get_set_stdin(v___x_970_);
lean_dec_ref(v___x_972_);
return v___x_971_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___redArg___boxed(lean_object* v_h_973_, lean_object* v_x_974_, lean_object* v___y_975_, lean_object* v___y_976_){
_start:
{
lean_object* v_res_977_; 
v_res_977_ = l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___redArg(v_h_973_, v_x_974_, v___y_975_);
lean_dec_ref(v___y_975_);
return v_res_977_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__6(lean_object* v_msg_978_){
_start:
{
lean_object* v___x_979_; lean_object* v___x_980_; 
v___x_979_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
v___x_980_ = lean_panic_fn_borrowed(v___x_979_, v_msg_978_);
return v___x_980_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___redArg(lean_object* v_h_981_, lean_object* v_x_982_, lean_object* v___y_983_){
_start:
{
lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; 
v___x_985_ = lean_get_set_stdout(v_h_981_);
lean_inc_ref(v___y_983_);
v___x_986_ = lean_apply_2(v_x_982_, v___y_983_, lean_box(0));
v___x_987_ = lean_get_set_stdout(v___x_985_);
lean_dec_ref(v___x_987_);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___redArg___boxed(lean_object* v_h_988_, lean_object* v_x_989_, lean_object* v___y_990_, lean_object* v___y_991_){
_start:
{
lean_object* v_res_992_; 
v_res_992_ = l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___redArg(v_h_988_, v_x_989_, v___y_990_);
lean_dec_ref(v___y_990_);
return v_res_992_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4(lean_object* v_00_u03b1_993_, lean_object* v_h_994_, lean_object* v_x_995_, lean_object* v___y_996_){
_start:
{
lean_object* v___x_998_; 
v___x_998_ = l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___redArg(v_h_994_, v_x_995_, v___y_996_);
return v___x_998_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___boxed(lean_object* v_00_u03b1_999_, lean_object* v_h_1000_, lean_object* v_x_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_){
_start:
{
lean_object* v_res_1004_; 
v_res_1004_ = l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4(v_00_u03b1_999_, v_h_1000_, v_x_1001_, v___y_1002_);
lean_dec_ref(v___y_1002_);
return v_res_1004_;
}
}
static lean_object* _init_l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; 
v___x_1005_ = lean_unsigned_to_nat(0u);
v___x_1006_ = l_ByteArray_empty;
v___x_1007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1007_, 0, v___x_1006_);
lean_ctor_set(v___x_1007_, 1, v___x_1005_);
return v___x_1007_;
}
}
static lean_object* _init_l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__4(void){
_start:
{
lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___x_1011_ = ((lean_object*)(l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__3));
v___x_1012_ = lean_unsigned_to_nat(46u);
v___x_1013_ = lean_unsigned_to_nat(193u);
v___x_1014_ = ((lean_object*)(l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__2));
v___x_1015_ = ((lean_object*)(l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__1));
v___x_1016_ = l_mkPanicMessageWithDecl(v___x_1015_, v___x_1014_, v___x_1013_, v___x_1012_, v___x_1011_);
return v___x_1016_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg(lean_object* v_x_1017_, uint8_t v_isolateStderr_1018_, lean_object* v___y_1019_){
_start:
{
lean_object* v___y_1022_; lean_object* v___y_1023_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___y_1031_; 
v___x_1025_ = lean_obj_once(&l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__0, &l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__0_once, _init_l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__0);
v___x_1026_ = lean_st_mk_ref(v___x_1025_);
v___x_1027_ = lean_st_mk_ref(v___x_1025_);
v___x_1028_ = l_IO_FS_Stream_ofBuffer(v___x_1026_);
lean_inc(v___x_1027_);
v___x_1029_ = l_IO_FS_Stream_ofBuffer(v___x_1027_);
if (v_isolateStderr_1018_ == 0)
{
v___y_1031_ = v_x_1017_;
goto v___jp_1030_;
}
else
{
lean_object* v___x_1040_; 
lean_inc_ref(v___x_1029_);
v___x_1040_ = lean_alloc_closure((void*)(l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___boxed), 5, 3);
lean_closure_set(v___x_1040_, 0, lean_box(0));
lean_closure_set(v___x_1040_, 1, v___x_1029_);
lean_closure_set(v___x_1040_, 2, v_x_1017_);
v___y_1031_ = v___x_1040_;
goto v___jp_1030_;
}
v___jp_1021_:
{
lean_object* v___x_1024_; 
v___x_1024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1024_, 0, v___y_1023_);
lean_ctor_set(v___x_1024_, 1, v___y_1022_);
return v___x_1024_;
}
v___jp_1030_:
{
lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v_data_1035_; uint8_t v___x_1036_; 
v___x_1032_ = lean_alloc_closure((void*)(l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___boxed), 5, 3);
lean_closure_set(v___x_1032_, 0, lean_box(0));
lean_closure_set(v___x_1032_, 1, v___x_1029_);
lean_closure_set(v___x_1032_, 2, v___y_1031_);
v___x_1033_ = l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___redArg(v___x_1028_, v___x_1032_, v___y_1019_);
v___x_1034_ = lean_st_ref_get(v___x_1027_);
lean_dec(v___x_1027_);
v_data_1035_ = lean_ctor_get(v___x_1034_, 0);
lean_inc_ref(v_data_1035_);
lean_dec(v___x_1034_);
v___x_1036_ = lean_string_validate_utf8(v_data_1035_);
if (v___x_1036_ == 0)
{
lean_object* v___x_1037_; lean_object* v___x_1038_; 
lean_dec_ref(v_data_1035_);
v___x_1037_ = lean_obj_once(&l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__4, &l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__4_once, _init_l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__4);
v___x_1038_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__6(v___x_1037_);
v___y_1022_ = v___x_1033_;
v___y_1023_ = v___x_1038_;
goto v___jp_1021_;
}
else
{
lean_object* v___x_1039_; 
v___x_1039_ = lean_string_from_utf8_unchecked(v_data_1035_);
v___y_1022_ = v___x_1033_;
v___y_1023_ = v___x_1039_;
goto v___jp_1021_;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___boxed(lean_object* v_x_1041_, lean_object* v_isolateStderr_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_){
_start:
{
uint8_t v_isolateStderr_boxed_1045_; lean_object* v_res_1046_; 
v_isolateStderr_boxed_1045_ = lean_unbox(v_isolateStderr_1042_);
v_res_1046_ = l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg(v_x_1041_, v_isolateStderr_boxed_1045_, v___y_1043_);
lean_dec_ref(v___y_1043_);
return v_res_1046_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__4(void){
_start:
{
uint8_t v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1055_ = 1;
v___x_1056_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__3));
v___x_1057_ = l_Lean_Name_toString(v___x_1056_, v___x_1055_);
return v___x_1057_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab(lean_object* v_stx_1058_, lean_object* v_revCmds_1059_, lean_object* v_cmdState_1060_, lean_object* v_beginPos_1061_, lean_object* v_snap_1062_, lean_object* v_cancelTk_1063_, lean_object* v_a_1064_){
_start:
{
lean_object* v_env_1066_; lean_object* v_scopes_1067_; lean_object* v_usedQuotCtxts_1068_; lean_object* v_nextMacroScope_1069_; lean_object* v_maxRecDepth_1070_; lean_object* v_ngen_1071_; lean_object* v_auxDeclNGen_1072_; lean_object* v_infoState_1073_; lean_object* v_prevLinterStates_1074_; lean_object* v___x_1076_; uint8_t v_isShared_1077_; uint8_t v_isSharedCheck_1157_; 
v_env_1066_ = lean_ctor_get(v_cmdState_1060_, 0);
v_scopes_1067_ = lean_ctor_get(v_cmdState_1060_, 2);
v_usedQuotCtxts_1068_ = lean_ctor_get(v_cmdState_1060_, 3);
v_nextMacroScope_1069_ = lean_ctor_get(v_cmdState_1060_, 4);
v_maxRecDepth_1070_ = lean_ctor_get(v_cmdState_1060_, 5);
v_ngen_1071_ = lean_ctor_get(v_cmdState_1060_, 6);
v_auxDeclNGen_1072_ = lean_ctor_get(v_cmdState_1060_, 7);
v_infoState_1073_ = lean_ctor_get(v_cmdState_1060_, 8);
v_prevLinterStates_1074_ = lean_ctor_get(v_cmdState_1060_, 11);
v_isSharedCheck_1157_ = !lean_is_exclusive(v_cmdState_1060_);
if (v_isSharedCheck_1157_ == 0)
{
lean_object* v_unused_1158_; lean_object* v_unused_1159_; lean_object* v_unused_1160_; lean_object* v_unused_1161_; 
v_unused_1158_ = lean_ctor_get(v_cmdState_1060_, 12);
lean_dec(v_unused_1158_);
v_unused_1159_ = lean_ctor_get(v_cmdState_1060_, 10);
lean_dec(v_unused_1159_);
v_unused_1160_ = lean_ctor_get(v_cmdState_1060_, 9);
lean_dec(v_unused_1160_);
v_unused_1161_ = lean_ctor_get(v_cmdState_1060_, 1);
lean_dec(v_unused_1161_);
v___x_1076_ = v_cmdState_1060_;
v_isShared_1077_ = v_isSharedCheck_1157_;
goto v_resetjp_1075_;
}
else
{
lean_inc(v_prevLinterStates_1074_);
lean_inc(v_infoState_1073_);
lean_inc(v_auxDeclNGen_1072_);
lean_inc(v_ngen_1071_);
lean_inc(v_maxRecDepth_1070_);
lean_inc(v_nextMacroScope_1069_);
lean_inc(v_usedQuotCtxts_1068_);
lean_inc(v_scopes_1067_);
lean_inc(v_env_1066_);
lean_dec(v_cmdState_1060_);
v___x_1076_ = lean_box(0);
v_isShared_1077_ = v_isSharedCheck_1157_;
goto v_resetjp_1075_;
}
v_resetjp_1075_:
{
lean_object* v___f_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1087_; 
v___f_1078_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__0___boxed), 5, 2);
lean_closure_set(v___f_1078_, 0, v_stx_1058_);
lean_closure_set(v___f_1078_, 1, v_revCmds_1059_);
v___x_1079_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1080_ = l_Lean_Language_instImpl_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8_;
v___x_1081_ = l_List_head_x21___redArg(v___x_1079_, v_scopes_1067_);
v___x_1082_ = l_Lean_MessageLog_empty;
v___x_1083_ = lean_unsigned_to_nat(0u);
v___x_1084_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_1085_ = ((lean_object*)(l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0));
if (v_isShared_1077_ == 0)
{
lean_ctor_set(v___x_1076_, 12, v___x_1085_);
lean_ctor_set(v___x_1076_, 10, v___x_1085_);
lean_ctor_set(v___x_1076_, 9, v___x_1084_);
lean_ctor_set(v___x_1076_, 1, v___x_1082_);
v___x_1087_ = v___x_1076_;
goto v_reusejp_1086_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v_env_1066_);
lean_ctor_set(v_reuseFailAlloc_1156_, 1, v___x_1082_);
lean_ctor_set(v_reuseFailAlloc_1156_, 2, v_scopes_1067_);
lean_ctor_set(v_reuseFailAlloc_1156_, 3, v_usedQuotCtxts_1068_);
lean_ctor_set(v_reuseFailAlloc_1156_, 4, v_nextMacroScope_1069_);
lean_ctor_set(v_reuseFailAlloc_1156_, 5, v_maxRecDepth_1070_);
lean_ctor_set(v_reuseFailAlloc_1156_, 6, v_ngen_1071_);
lean_ctor_set(v_reuseFailAlloc_1156_, 7, v_auxDeclNGen_1072_);
lean_ctor_set(v_reuseFailAlloc_1156_, 8, v_infoState_1073_);
lean_ctor_set(v_reuseFailAlloc_1156_, 9, v___x_1084_);
lean_ctor_set(v_reuseFailAlloc_1156_, 10, v___x_1085_);
lean_ctor_set(v_reuseFailAlloc_1156_, 11, v_prevLinterStates_1074_);
lean_ctor_set(v_reuseFailAlloc_1156_, 12, v___x_1085_);
v___x_1087_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
lean_object* v___x_1088_; lean_object* v_toProcessingContext_1089_; lean_object* v_fileName_1090_; lean_object* v_fileMap_1091_; lean_object* v_opts_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; uint8_t v___x_1098_; uint8_t v___y_1100_; lean_object* v_env_1101_; lean_object* v_scopes_1102_; lean_object* v_usedQuotCtxts_1103_; lean_object* v_nextMacroScope_1104_; lean_object* v_maxRecDepth_1105_; lean_object* v_ngen_1106_; lean_object* v_auxDeclNGen_1107_; lean_object* v_infoState_1108_; lean_object* v_traceState_1109_; lean_object* v_snapshotTasks_1110_; lean_object* v_prevLinterStates_1111_; lean_object* v_codeQualityEntryTasks_1112_; lean_object* v_messages_1113_; lean_object* v___y_1122_; 
v___x_1088_ = lean_st_mk_ref(v___x_1087_);
v_toProcessingContext_1089_ = lean_ctor_get(v_a_1064_, 0);
v_fileName_1090_ = lean_ctor_get(v_toProcessingContext_1089_, 1);
v_fileMap_1091_ = lean_ctor_get(v_toProcessingContext_1089_, 2);
v_opts_1092_ = lean_ctor_get(v___x_1081_, 1);
lean_inc_ref(v_opts_1092_);
lean_dec(v___x_1081_);
v___x_1093_ = lean_box(0);
v___x_1094_ = lean_box(0);
v___x_1095_ = l_Lean_firstFrontendMacroScope;
v___x_1096_ = lean_box(0);
v___x_1097_ = l_Lean_internal_cmdlineSnapshots;
v___x_1098_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_1092_, v___x_1097_);
if (v___x_1098_ == 0)
{
lean_object* v___x_1155_; 
lean_inc_ref(v_snap_1062_);
v___x_1155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1155_, 0, v_snap_1062_);
v___y_1122_ = v___x_1155_;
goto v___jp_1121_;
}
else
{
v___y_1122_ = v___x_1094_;
goto v___jp_1121_;
}
v___jp_1099_:
{
lean_object* v_new_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; 
v_new_1114_ = lean_ctor_get(v_snap_1062_, 1);
lean_inc(v_new_1114_);
lean_dec_ref(v_snap_1062_);
v___x_1115_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_1115_, 0, v_env_1101_);
lean_ctor_set(v___x_1115_, 1, v_messages_1113_);
lean_ctor_set(v___x_1115_, 2, v_scopes_1102_);
lean_ctor_set(v___x_1115_, 3, v_usedQuotCtxts_1103_);
lean_ctor_set(v___x_1115_, 4, v_nextMacroScope_1104_);
lean_ctor_set(v___x_1115_, 5, v_maxRecDepth_1105_);
lean_ctor_set(v___x_1115_, 6, v_ngen_1106_);
lean_ctor_set(v___x_1115_, 7, v_auxDeclNGen_1107_);
lean_ctor_set(v___x_1115_, 8, v_infoState_1108_);
lean_ctor_set(v___x_1115_, 9, v_traceState_1109_);
lean_ctor_set(v___x_1115_, 10, v_snapshotTasks_1110_);
lean_ctor_set(v___x_1115_, 11, v_prevLinterStates_1111_);
lean_ctor_set(v___x_1115_, 12, v_codeQualityEntryTasks_1112_);
v___x_1116_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__4);
v___x_1117_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_1118_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1118_, 0, v___x_1116_);
lean_ctor_set(v___x_1118_, 1, v___x_1117_);
lean_ctor_set(v___x_1118_, 2, v___x_1094_);
lean_ctor_set(v___x_1118_, 3, v___x_1084_);
lean_ctor_set_uint8(v___x_1118_, sizeof(void*)*4, v___y_1100_);
v___x_1119_ = l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4(v___x_1080_, v___x_1118_);
v___x_1120_ = lean_io_promise_resolve(v___x_1119_, v_new_1114_);
lean_dec(v_new_1114_);
return v___x_1115_;
}
v___jp_1121_:
{
lean_object* v___x_1123_; uint8_t v___x_1124_; uint8_t v___x_1125_; lean_object* v___x_1126_; lean_object* v___f_1127_; lean_object* v___x_1128_; uint8_t v___x_1129_; lean_object* v___x_1130_; lean_object* v_fst_1131_; lean_object* v___x_1132_; lean_object* v_env_1133_; lean_object* v_messages_1134_; lean_object* v_scopes_1135_; lean_object* v_usedQuotCtxts_1136_; lean_object* v_nextMacroScope_1137_; lean_object* v_maxRecDepth_1138_; lean_object* v_ngen_1139_; lean_object* v_auxDeclNGen_1140_; lean_object* v_infoState_1141_; lean_object* v_traceState_1142_; lean_object* v_snapshotTasks_1143_; lean_object* v_prevLinterStates_1144_; lean_object* v_codeQualityEntryTasks_1145_; lean_object* v___x_1146_; uint8_t v___x_1147_; 
v___x_1123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1123_, 0, v_cancelTk_1063_);
v___x_1124_ = 0;
v___x_1125_ = 0;
lean_inc(v_beginPos_1061_);
lean_inc_ref(v_fileMap_1091_);
lean_inc_ref(v_fileName_1090_);
v___x_1126_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v___x_1126_, 0, v_fileName_1090_);
lean_ctor_set(v___x_1126_, 1, v_fileMap_1091_);
lean_ctor_set(v___x_1126_, 2, v___x_1083_);
lean_ctor_set(v___x_1126_, 3, v_beginPos_1061_);
lean_ctor_set(v___x_1126_, 4, v___x_1093_);
lean_ctor_set(v___x_1126_, 5, v___x_1094_);
lean_ctor_set(v___x_1126_, 6, v___x_1095_);
lean_ctor_set(v___x_1126_, 7, v___x_1096_);
lean_ctor_set(v___x_1126_, 8, v___y_1122_);
lean_ctor_set(v___x_1126_, 9, v___x_1123_);
lean_ctor_set_uint8(v___x_1126_, sizeof(void*)*10, v___x_1124_);
lean_ctor_set_uint8(v___x_1126_, sizeof(void*)*10 + 1, v___x_1125_);
lean_inc(v___x_1088_);
v___f_1127_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1127_, 0, v___f_1078_);
lean_closure_set(v___f_1127_, 1, v___x_1126_);
lean_closure_set(v___f_1127_, 2, v___x_1088_);
v___x_1128_ = l_Lean_Core_stderrAsMessages;
v___x_1129_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_1092_, v___x_1128_);
lean_dec_ref(v_opts_1092_);
v___x_1130_ = l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg(v___f_1127_, v___x_1129_, v_a_1064_);
v_fst_1131_ = lean_ctor_get(v___x_1130_, 0);
lean_inc(v_fst_1131_);
lean_dec_ref(v___x_1130_);
v___x_1132_ = lean_st_ref_get(v___x_1088_);
lean_dec(v___x_1088_);
v_env_1133_ = lean_ctor_get(v___x_1132_, 0);
lean_inc_ref(v_env_1133_);
v_messages_1134_ = lean_ctor_get(v___x_1132_, 1);
lean_inc_ref(v_messages_1134_);
v_scopes_1135_ = lean_ctor_get(v___x_1132_, 2);
lean_inc(v_scopes_1135_);
v_usedQuotCtxts_1136_ = lean_ctor_get(v___x_1132_, 3);
lean_inc(v_usedQuotCtxts_1136_);
v_nextMacroScope_1137_ = lean_ctor_get(v___x_1132_, 4);
lean_inc(v_nextMacroScope_1137_);
v_maxRecDepth_1138_ = lean_ctor_get(v___x_1132_, 5);
lean_inc(v_maxRecDepth_1138_);
v_ngen_1139_ = lean_ctor_get(v___x_1132_, 6);
lean_inc_ref(v_ngen_1139_);
v_auxDeclNGen_1140_ = lean_ctor_get(v___x_1132_, 7);
lean_inc_ref(v_auxDeclNGen_1140_);
v_infoState_1141_ = lean_ctor_get(v___x_1132_, 8);
lean_inc_ref(v_infoState_1141_);
v_traceState_1142_ = lean_ctor_get(v___x_1132_, 9);
lean_inc_ref(v_traceState_1142_);
v_snapshotTasks_1143_ = lean_ctor_get(v___x_1132_, 10);
lean_inc_ref(v_snapshotTasks_1143_);
v_prevLinterStates_1144_ = lean_ctor_get(v___x_1132_, 11);
lean_inc(v_prevLinterStates_1144_);
v_codeQualityEntryTasks_1145_ = lean_ctor_get(v___x_1132_, 12);
lean_inc_ref(v_codeQualityEntryTasks_1145_);
lean_dec(v___x_1132_);
v___x_1146_ = lean_string_utf8_byte_size(v_fst_1131_);
v___x_1147_ = lean_nat_dec_eq(v___x_1146_, v___x_1083_);
if (v___x_1147_ == 0)
{
lean_object* v___x_1148_; uint8_t v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; 
lean_inc_ref(v_fileMap_1091_);
v___x_1148_ = l_Lean_FileMap_toPosition(v_fileMap_1091_, v_beginPos_1061_);
lean_dec(v_beginPos_1061_);
v___x_1149_ = 0;
v___x_1150_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
v___x_1151_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1151_, 0, v_fst_1131_);
v___x_1152_ = l_Lean_MessageData_ofFormat(v___x_1151_);
lean_inc_ref(v_fileName_1090_);
v___x_1153_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1153_, 0, v_fileName_1090_);
lean_ctor_set(v___x_1153_, 1, v___x_1148_);
lean_ctor_set(v___x_1153_, 2, v___x_1094_);
lean_ctor_set(v___x_1153_, 3, v___x_1150_);
lean_ctor_set(v___x_1153_, 4, v___x_1152_);
lean_ctor_set_uint8(v___x_1153_, sizeof(void*)*5, v___x_1124_);
lean_ctor_set_uint8(v___x_1153_, sizeof(void*)*5 + 1, v___x_1149_);
lean_ctor_set_uint8(v___x_1153_, sizeof(void*)*5 + 2, v___x_1124_);
v___x_1154_ = l_Lean_MessageLog_add(v___x_1153_, v_messages_1134_);
v___y_1100_ = v___x_1124_;
v_env_1101_ = v_env_1133_;
v_scopes_1102_ = v_scopes_1135_;
v_usedQuotCtxts_1103_ = v_usedQuotCtxts_1136_;
v_nextMacroScope_1104_ = v_nextMacroScope_1137_;
v_maxRecDepth_1105_ = v_maxRecDepth_1138_;
v_ngen_1106_ = v_ngen_1139_;
v_auxDeclNGen_1107_ = v_auxDeclNGen_1140_;
v_infoState_1108_ = v_infoState_1141_;
v_traceState_1109_ = v_traceState_1142_;
v_snapshotTasks_1110_ = v_snapshotTasks_1143_;
v_prevLinterStates_1111_ = v_prevLinterStates_1144_;
v_codeQualityEntryTasks_1112_ = v_codeQualityEntryTasks_1145_;
v_messages_1113_ = v___x_1154_;
goto v___jp_1099_;
}
else
{
lean_dec(v_fst_1131_);
lean_dec(v_beginPos_1061_);
v___y_1100_ = v___x_1124_;
v_env_1101_ = v_env_1133_;
v_scopes_1102_ = v_scopes_1135_;
v_usedQuotCtxts_1103_ = v_usedQuotCtxts_1136_;
v_nextMacroScope_1104_ = v_nextMacroScope_1137_;
v_maxRecDepth_1105_ = v_maxRecDepth_1138_;
v_ngen_1106_ = v_ngen_1139_;
v_auxDeclNGen_1107_ = v_auxDeclNGen_1140_;
v_infoState_1108_ = v_infoState_1141_;
v_traceState_1109_ = v_traceState_1142_;
v_snapshotTasks_1110_ = v_snapshotTasks_1143_;
v_prevLinterStates_1111_ = v_prevLinterStates_1144_;
v_codeQualityEntryTasks_1112_ = v_codeQualityEntryTasks_1145_;
v_messages_1113_ = v_messages_1134_;
goto v___jp_1099_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___boxed(lean_object* v_stx_1162_, lean_object* v_revCmds_1163_, lean_object* v_cmdState_1164_, lean_object* v_beginPos_1165_, lean_object* v_snap_1166_, lean_object* v_cancelTk_1167_, lean_object* v_a_1168_, lean_object* v_a_1169_){
_start:
{
lean_object* v_res_1170_; 
v_res_1170_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab(v_stx_1162_, v_revCmds_1163_, v_cmdState_1164_, v_beginPos_1165_, v_snap_1166_, v_cancelTk_1167_, v_a_1168_);
lean_dec_ref(v_a_1168_);
return v_res_1170_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5(lean_object* v_00_u03b1_1171_, lean_object* v_h_1172_, lean_object* v_x_1173_, lean_object* v___y_1174_){
_start:
{
lean_object* v___x_1176_; 
v___x_1176_ = l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___redArg(v_h_1172_, v_x_1173_, v___y_1174_);
return v___x_1176_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___boxed(lean_object* v_00_u03b1_1177_, lean_object* v_h_1178_, lean_object* v_x_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_){
_start:
{
lean_object* v_res_1182_; 
v_res_1182_ = l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5(v_00_u03b1_1177_, v_h_1178_, v_x_1179_, v___y_1180_);
lean_dec_ref(v___y_1180_);
return v_res_1182_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3(lean_object* v_00_u03b1_1183_, lean_object* v_x_1184_, uint8_t v_isolateStderr_1185_, lean_object* v___y_1186_){
_start:
{
lean_object* v___x_1188_; 
v___x_1188_ = l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg(v_x_1184_, v_isolateStderr_1185_, v___y_1186_);
return v___x_1188_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___boxed(lean_object* v_00_u03b1_1189_, lean_object* v_x_1190_, lean_object* v_isolateStderr_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_){
_start:
{
uint8_t v_isolateStderr_boxed_1194_; lean_object* v_res_1195_; 
v_isolateStderr_boxed_1194_ = lean_unbox(v_isolateStderr_1191_);
v_res_1195_ = l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3(v_00_u03b1_1189_, v_x_1190_, v_isolateStderr_boxed_1194_, v___y_1192_);
lean_dec_ref(v___y_1192_);
return v_res_1195_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11(lean_object* v_msgData_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_){
_start:
{
lean_object* v___x_1200_; 
v___x_1200_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg(v_msgData_1196_, v___y_1198_);
return v___x_1200_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___boxed(lean_object* v_msgData_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_){
_start:
{
lean_object* v_res_1205_; 
v_res_1205_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11(v_msgData_1201_, v___y_1202_, v___y_1203_);
lean_dec(v___y_1203_);
lean_dec_ref(v___y_1202_);
return v_res_1205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__0(lean_object* v_a_1206_){
_start:
{
lean_object* v_toSnapshotTreeM_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; 
v_toSnapshotTreeM_1207_ = lean_ctor_get(v_a_1206_, 1);
lean_inc_ref(v_toSnapshotTreeM_1207_);
lean_dec_ref(v_a_1206_);
v___x_1208_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_1209_ = lean_apply_1(v_toSnapshotTreeM_1207_, v___x_1208_);
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__1(lean_object* v_a_1210_){
_start:
{
lean_object* v_toSnapshot_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; 
v_toSnapshot_1211_ = lean_ctor_get(v_a_1210_, 0);
lean_inc_ref(v_toSnapshot_1211_);
lean_dec_ref(v_a_1210_);
v___x_1212_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_1213_ = l_Lean_Language_Snapshot_transform(v_toSnapshot_1211_, v___x_1212_);
v___x_1214_ = ((lean_object*)(l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0));
v___x_1215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1215_, 0, v___x_1213_);
lean_ctor_set(v___x_1215_, 1, v___x_1214_);
return v___x_1215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__2(lean_object* v_a_1216_){
_start:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; 
v___x_1217_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_1218_ = l_Lean_Language_Snapshot_transform(v_a_1216_, v___x_1217_);
v___x_1219_ = ((lean_object*)(l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0));
v___x_1220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1220_, 0, v___x_1218_);
lean_ctor_set(v___x_1220_, 1, v___x_1219_);
return v___x_1220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__3(lean_object* v_opts_1221_, lean_object* v_opt_1222_){
_start:
{
lean_object* v_name_1223_; lean_object* v_defValue_1224_; lean_object* v_map_1225_; lean_object* v___x_1226_; 
v_name_1223_ = lean_ctor_get(v_opt_1222_, 0);
v_defValue_1224_ = lean_ctor_get(v_opt_1222_, 1);
v_map_1225_ = lean_ctor_get(v_opts_1221_, 0);
v___x_1226_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1225_, v_name_1223_);
if (lean_obj_tag(v___x_1226_) == 0)
{
lean_inc(v_defValue_1224_);
return v_defValue_1224_;
}
else
{
lean_object* v_val_1227_; 
v_val_1227_ = lean_ctor_get(v___x_1226_, 0);
lean_inc(v_val_1227_);
lean_dec_ref_known(v___x_1226_, 1);
if (lean_obj_tag(v_val_1227_) == 3)
{
lean_object* v_v_1228_; 
v_v_1228_ = lean_ctor_get(v_val_1227_, 0);
lean_inc(v_v_1228_);
lean_dec_ref_known(v_val_1227_, 1);
return v_v_1228_;
}
else
{
lean_dec(v_val_1227_);
lean_inc(v_defValue_1224_);
return v_defValue_1224_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__3___boxed(lean_object* v_opts_1229_, lean_object* v_opt_1230_){
_start:
{
lean_object* v_res_1231_; 
v_res_1231_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__3(v_opts_1229_, v_opt_1230_);
lean_dec_ref(v_opt_1230_);
lean_dec_ref(v_opts_1229_);
return v_res_1231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__5(lean_object* v_a_1232_){
_start:
{
lean_object* v___x_1233_; lean_object* v___x_1234_; 
v___x_1233_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_1234_ = l_Lean_Language_Lean_instToSnapshotTreeCommandParsedSnapshot_go(v_a_1232_, v___x_1233_);
return v___x_1234_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__3(void){
_start:
{
lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; 
v___x_1240_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__2));
v___x_1241_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_1242_ = l_Lean_Name_append(v___x_1241_, v___x_1240_);
return v___x_1242_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4(lean_object* v___x_1243_, lean_object* v___x_1244_, uint8_t v_val_1245_, lean_object* v_val_1246_, lean_object* v_val_1247_, lean_object* v___x_1248_, lean_object* v___x_1249_, uint8_t v___x_1250_, lean_object* v_a_1251_, lean_object* v_pos_1252_, lean_object* v___x_1253_, lean_object* v_infoSt_1254_){
_start:
{
lean_object* v___y_1257_; lean_object* v_msgLog_1258_; lean_object* v___y_1264_; lean_object* v_trees_1296_; lean_object* v_size_1297_; uint8_t v___x_1298_; 
v_trees_1296_ = lean_ctor_get(v_infoSt_1254_, 2);
v_size_1297_ = lean_ctor_get(v_trees_1296_, 2);
v___x_1298_ = lean_nat_dec_lt(v___x_1249_, v_size_1297_);
if (v___x_1298_ == 0)
{
lean_object* v___x_1299_; 
v___x_1299_ = l_outOfBounds___redArg(v___x_1253_);
v___y_1264_ = v___x_1299_;
goto v___jp_1263_;
}
else
{
lean_object* v___x_1300_; 
v___x_1300_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1253_, v_trees_1296_, v___x_1249_);
v___y_1264_ = v___x_1300_;
goto v___jp_1263_;
}
v___jp_1256_:
{
lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; 
v___x_1259_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_msgLog_1258_);
v___x_1260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1260_, 0, v___y_1257_);
v___x_1261_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1261_, 0, v___x_1243_);
lean_ctor_set(v___x_1261_, 1, v___x_1259_);
lean_ctor_set(v___x_1261_, 2, v___x_1260_);
lean_ctor_set(v___x_1261_, 3, v___x_1244_);
lean_ctor_set_uint8(v___x_1261_, sizeof(void*)*4, v_val_1245_);
v___x_1262_ = lean_io_promise_resolve(v___x_1261_, v_val_1246_);
return v___x_1262_;
}
v___jp_1263_:
{
lean_object* v_scopes_1265_; lean_object* v___x_1266_; lean_object* v_opts_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; uint8_t v_hasTrace_1271_; 
v_scopes_1265_ = lean_ctor_get(v_val_1247_, 2);
v___x_1266_ = l_List_head_x21___redArg(v___x_1248_, v_scopes_1265_);
v_opts_1267_ = lean_ctor_get(v___x_1266_, 1);
lean_inc_ref(v_opts_1267_);
lean_dec(v___x_1266_);
v___x_1268_ = l_Lean_MessageLog_empty;
v___x_1269_ = l_Lean_inheritedTraceOptions;
v___x_1270_ = lean_st_ref_get(v___x_1269_);
v_hasTrace_1271_ = lean_ctor_get_uint8(v_opts_1267_, sizeof(void*)*1);
if (v_hasTrace_1271_ == 0)
{
lean_dec(v___x_1270_);
lean_dec_ref(v_opts_1267_);
lean_dec(v___x_1249_);
v___y_1257_ = v___y_1264_;
v_msgLog_1258_ = v___x_1268_;
goto v___jp_1256_;
}
else
{
lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; uint8_t v___x_1275_; 
v___x_1272_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__2));
v___x_1273_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_1274_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__3);
v___x_1275_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1270_, v_opts_1267_, v___x_1274_);
lean_dec_ref(v_opts_1267_);
lean_dec(v___x_1270_);
if (v___x_1275_ == 0)
{
lean_dec(v___x_1249_);
v___y_1257_ = v___y_1264_;
v_msgLog_1258_ = v___x_1268_;
goto v___jp_1256_;
}
else
{
lean_object* v___x_1276_; lean_object* v___x_1277_; 
v___x_1276_ = lean_box(0);
lean_inc_ref(v___y_1264_);
v___x_1277_ = l_Lean_Elab_InfoTree_format(v___y_1264_, v___x_1276_);
if (lean_obj_tag(v___x_1277_) == 0)
{
lean_object* v_a_1278_; double v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v_toProcessingContext_1282_; lean_object* v_fileName_1283_; lean_object* v_fileMap_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; uint8_t v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; 
v_a_1278_ = lean_ctor_get(v___x_1277_, 0);
lean_inc(v_a_1278_);
lean_dec_ref_known(v___x_1277_, 1);
v___x_1279_ = lean_float_of_nat(v___x_1249_);
v___x_1280_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
v___x_1281_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1281_, 0, v___x_1272_);
lean_ctor_set(v___x_1281_, 1, v___x_1276_);
lean_ctor_set(v___x_1281_, 2, v___x_1280_);
lean_ctor_set_float(v___x_1281_, sizeof(void*)*3, v___x_1279_);
lean_ctor_set_float(v___x_1281_, sizeof(void*)*3 + 8, v___x_1279_);
lean_ctor_set_uint8(v___x_1281_, sizeof(void*)*3 + 16, v___x_1250_);
v_toProcessingContext_1282_ = lean_ctor_get(v_a_1251_, 0);
v_fileName_1283_ = lean_ctor_get(v_toProcessingContext_1282_, 1);
v_fileMap_1284_ = lean_ctor_get(v_toProcessingContext_1282_, 2);
v___x_1285_ = l_Lean_MessageData_nil;
v___x_1286_ = l_Lean_MessageData_ofFormat(v_a_1278_);
v___x_1287_ = lean_unsigned_to_nat(1u);
v___x_1288_ = lean_mk_empty_array_with_capacity(v___x_1287_);
v___x_1289_ = lean_array_push(v___x_1288_, v___x_1286_);
v___x_1290_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1281_);
lean_ctor_set(v___x_1290_, 1, v___x_1285_);
lean_ctor_set(v___x_1290_, 2, v___x_1289_);
v___x_1291_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1291_, 0, v___x_1273_);
lean_ctor_set(v___x_1291_, 1, v___x_1290_);
lean_inc_ref(v_fileMap_1284_);
v___x_1292_ = l_Lean_FileMap_toPosition(v_fileMap_1284_, v_pos_1252_);
v___x_1293_ = 0;
lean_inc_ref(v_fileName_1283_);
v___x_1294_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1294_, 0, v_fileName_1283_);
lean_ctor_set(v___x_1294_, 1, v___x_1292_);
lean_ctor_set(v___x_1294_, 2, v___x_1276_);
lean_ctor_set(v___x_1294_, 3, v___x_1280_);
lean_ctor_set(v___x_1294_, 4, v___x_1291_);
lean_ctor_set_uint8(v___x_1294_, sizeof(void*)*5, v_val_1245_);
lean_ctor_set_uint8(v___x_1294_, sizeof(void*)*5 + 1, v___x_1293_);
lean_ctor_set_uint8(v___x_1294_, sizeof(void*)*5 + 2, v_val_1245_);
v___x_1295_ = l_Lean_MessageLog_add(v___x_1294_, v___x_1268_);
v___y_1257_ = v___y_1264_;
v_msgLog_1258_ = v___x_1295_;
goto v___jp_1256_;
}
else
{
lean_dec_ref_known(v___x_1277_, 1);
lean_dec(v___x_1249_);
v___y_1257_ = v___y_1264_;
v_msgLog_1258_ = v___x_1268_;
goto v___jp_1256_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___boxed(lean_object* v___x_1301_, lean_object* v___x_1302_, lean_object* v_val_1303_, lean_object* v_val_1304_, lean_object* v_val_1305_, lean_object* v___x_1306_, lean_object* v___x_1307_, lean_object* v___x_1308_, lean_object* v_a_1309_, lean_object* v_pos_1310_, lean_object* v___x_1311_, lean_object* v_infoSt_1312_, lean_object* v___y_1313_){
_start:
{
uint8_t v_val_36564__boxed_1314_; uint8_t v___x_36569__boxed_1315_; lean_object* v_res_1316_; 
v_val_36564__boxed_1314_ = lean_unbox(v_val_1303_);
v___x_36569__boxed_1315_ = lean_unbox(v___x_1308_);
v_res_1316_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4(v___x_1301_, v___x_1302_, v_val_36564__boxed_1314_, v_val_1304_, v_val_1305_, v___x_1306_, v___x_1307_, v___x_36569__boxed_1315_, v_a_1309_, v_pos_1310_, v___x_1311_, v_infoSt_1312_);
lean_dec_ref(v_infoSt_1312_);
lean_dec_ref(v___x_1311_);
lean_dec(v_pos_1310_);
lean_dec_ref(v_a_1309_);
lean_dec_ref(v___x_1306_);
lean_dec_ref(v_val_1305_);
lean_dec(v_val_1304_);
return v_res_1316_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7_spec__9(lean_object* v___x_1317_, lean_object* v___x_1318_, lean_object* v___x_1319_, uint8_t v_val_1320_, lean_object* v_as_1321_, size_t v_sz_1322_, size_t v_i_1323_, lean_object* v_b_1324_){
_start:
{
uint8_t v___x_1326_; 
v___x_1326_ = lean_usize_dec_lt(v_i_1323_, v_sz_1322_);
if (v___x_1326_ == 0)
{
lean_dec_ref(v___x_1319_);
lean_dec_ref(v___x_1317_);
return v_b_1324_;
}
else
{
lean_object* v_snd_1327_; lean_object* v___x_1329_; uint8_t v_isShared_1330_; uint8_t v_isSharedCheck_1345_; 
v_snd_1327_ = lean_ctor_get(v_b_1324_, 1);
v_isSharedCheck_1345_ = !lean_is_exclusive(v_b_1324_);
if (v_isSharedCheck_1345_ == 0)
{
lean_object* v_unused_1346_; 
v_unused_1346_ = lean_ctor_get(v_b_1324_, 0);
lean_dec(v_unused_1346_);
v___x_1329_ = v_b_1324_;
v_isShared_1330_ = v_isSharedCheck_1345_;
goto v_resetjp_1328_;
}
else
{
lean_inc(v_snd_1327_);
lean_dec(v_b_1324_);
v___x_1329_ = lean_box(0);
v_isShared_1330_ = v_isSharedCheck_1345_;
goto v_resetjp_1328_;
}
v_resetjp_1328_:
{
lean_object* v_a_1331_; lean_object* v_msg_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; uint8_t v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1340_; 
v_a_1331_ = lean_array_uget_borrowed(v_as_1321_, v_i_1323_);
v_msg_1332_ = lean_ctor_get(v_a_1331_, 1);
v___x_1333_ = lean_box(0);
lean_inc_ref(v___x_1317_);
v___x_1334_ = l_Lean_FileMap_toPosition(v___x_1317_, v___x_1318_);
v___x_1335_ = 0;
v___x_1336_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
lean_inc_ref(v_msg_1332_);
lean_inc_ref(v___x_1319_);
v___x_1337_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1337_, 0, v___x_1319_);
lean_ctor_set(v___x_1337_, 1, v___x_1334_);
lean_ctor_set(v___x_1337_, 2, v___x_1333_);
lean_ctor_set(v___x_1337_, 3, v___x_1336_);
lean_ctor_set(v___x_1337_, 4, v_msg_1332_);
lean_ctor_set_uint8(v___x_1337_, sizeof(void*)*5, v_val_1320_);
lean_ctor_set_uint8(v___x_1337_, sizeof(void*)*5 + 1, v___x_1335_);
lean_ctor_set_uint8(v___x_1337_, sizeof(void*)*5 + 2, v_val_1320_);
v___x_1338_ = l_Lean_MessageLog_add(v___x_1337_, v_snd_1327_);
if (v_isShared_1330_ == 0)
{
lean_ctor_set(v___x_1329_, 1, v___x_1338_);
lean_ctor_set(v___x_1329_, 0, v___x_1333_);
v___x_1340_ = v___x_1329_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v___x_1333_);
lean_ctor_set(v_reuseFailAlloc_1344_, 1, v___x_1338_);
v___x_1340_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
size_t v___x_1341_; size_t v___x_1342_; 
v___x_1341_ = ((size_t)1ULL);
v___x_1342_ = lean_usize_add(v_i_1323_, v___x_1341_);
v_i_1323_ = v___x_1342_;
v_b_1324_ = v___x_1340_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7_spec__9___boxed(lean_object* v___x_1347_, lean_object* v___x_1348_, lean_object* v___x_1349_, lean_object* v_val_1350_, lean_object* v_as_1351_, lean_object* v_sz_1352_, lean_object* v_i_1353_, lean_object* v_b_1354_, lean_object* v___y_1355_){
_start:
{
uint8_t v_val_36677__boxed_1356_; size_t v_sz_boxed_1357_; size_t v_i_boxed_1358_; lean_object* v_res_1359_; 
v_val_36677__boxed_1356_ = lean_unbox(v_val_1350_);
v_sz_boxed_1357_ = lean_unbox_usize(v_sz_1352_);
lean_dec(v_sz_1352_);
v_i_boxed_1358_ = lean_unbox_usize(v_i_1353_);
lean_dec(v_i_1353_);
v_res_1359_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7_spec__9(v___x_1347_, v___x_1348_, v___x_1349_, v_val_36677__boxed_1356_, v_as_1351_, v_sz_boxed_1357_, v_i_boxed_1358_, v_b_1354_);
lean_dec_ref(v_as_1351_);
lean_dec(v___x_1348_);
return v_res_1359_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7(lean_object* v___x_1360_, lean_object* v___x_1361_, lean_object* v___x_1362_, uint8_t v_val_1363_, lean_object* v_as_1364_, size_t v_sz_1365_, size_t v_i_1366_, lean_object* v_b_1367_){
_start:
{
uint8_t v___x_1369_; 
v___x_1369_ = lean_usize_dec_lt(v_i_1366_, v_sz_1365_);
if (v___x_1369_ == 0)
{
lean_dec_ref(v___x_1362_);
lean_dec_ref(v___x_1360_);
return v_b_1367_;
}
else
{
lean_object* v_snd_1370_; lean_object* v___x_1372_; uint8_t v_isShared_1373_; uint8_t v_isSharedCheck_1388_; 
v_snd_1370_ = lean_ctor_get(v_b_1367_, 1);
v_isSharedCheck_1388_ = !lean_is_exclusive(v_b_1367_);
if (v_isSharedCheck_1388_ == 0)
{
lean_object* v_unused_1389_; 
v_unused_1389_ = lean_ctor_get(v_b_1367_, 0);
lean_dec(v_unused_1389_);
v___x_1372_ = v_b_1367_;
v_isShared_1373_ = v_isSharedCheck_1388_;
goto v_resetjp_1371_;
}
else
{
lean_inc(v_snd_1370_);
lean_dec(v_b_1367_);
v___x_1372_ = lean_box(0);
v_isShared_1373_ = v_isSharedCheck_1388_;
goto v_resetjp_1371_;
}
v_resetjp_1371_:
{
lean_object* v_a_1374_; lean_object* v_msg_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; uint8_t v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1383_; 
v_a_1374_ = lean_array_uget_borrowed(v_as_1364_, v_i_1366_);
v_msg_1375_ = lean_ctor_get(v_a_1374_, 1);
v___x_1376_ = lean_box(0);
lean_inc_ref(v___x_1360_);
v___x_1377_ = l_Lean_FileMap_toPosition(v___x_1360_, v___x_1361_);
v___x_1378_ = 0;
v___x_1379_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
lean_inc_ref(v_msg_1375_);
lean_inc_ref(v___x_1362_);
v___x_1380_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1380_, 0, v___x_1362_);
lean_ctor_set(v___x_1380_, 1, v___x_1377_);
lean_ctor_set(v___x_1380_, 2, v___x_1376_);
lean_ctor_set(v___x_1380_, 3, v___x_1379_);
lean_ctor_set(v___x_1380_, 4, v_msg_1375_);
lean_ctor_set_uint8(v___x_1380_, sizeof(void*)*5, v_val_1363_);
lean_ctor_set_uint8(v___x_1380_, sizeof(void*)*5 + 1, v___x_1378_);
lean_ctor_set_uint8(v___x_1380_, sizeof(void*)*5 + 2, v_val_1363_);
v___x_1381_ = l_Lean_MessageLog_add(v___x_1380_, v_snd_1370_);
if (v_isShared_1373_ == 0)
{
lean_ctor_set(v___x_1372_, 1, v___x_1381_);
lean_ctor_set(v___x_1372_, 0, v___x_1376_);
v___x_1383_ = v___x_1372_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v___x_1376_);
lean_ctor_set(v_reuseFailAlloc_1387_, 1, v___x_1381_);
v___x_1383_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
size_t v___x_1384_; size_t v___x_1385_; lean_object* v___x_1386_; 
v___x_1384_ = ((size_t)1ULL);
v___x_1385_ = lean_usize_add(v_i_1366_, v___x_1384_);
v___x_1386_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7_spec__9(v___x_1360_, v___x_1361_, v___x_1362_, v_val_1363_, v_as_1364_, v_sz_1365_, v___x_1385_, v___x_1383_);
return v___x_1386_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7___boxed(lean_object* v___x_1390_, lean_object* v___x_1391_, lean_object* v___x_1392_, lean_object* v_val_1393_, lean_object* v_as_1394_, lean_object* v_sz_1395_, lean_object* v_i_1396_, lean_object* v_b_1397_, lean_object* v___y_1398_){
_start:
{
uint8_t v_val_36729__boxed_1399_; size_t v_sz_boxed_1400_; size_t v_i_boxed_1401_; lean_object* v_res_1402_; 
v_val_36729__boxed_1399_ = lean_unbox(v_val_1393_);
v_sz_boxed_1400_ = lean_unbox_usize(v_sz_1395_);
lean_dec(v_sz_1395_);
v_i_boxed_1401_ = lean_unbox_usize(v_i_1396_);
lean_dec(v_i_1396_);
v_res_1402_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7(v___x_1390_, v___x_1391_, v___x_1392_, v_val_36729__boxed_1399_, v_as_1394_, v_sz_boxed_1400_, v_i_boxed_1401_, v_b_1397_);
lean_dec_ref(v_as_1394_);
lean_dec(v___x_1391_);
return v_res_1402_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4(lean_object* v_init_1403_, lean_object* v___x_1404_, lean_object* v___x_1405_, lean_object* v___x_1406_, uint8_t v_val_1407_, lean_object* v_n_1408_, lean_object* v_b_1409_){
_start:
{
if (lean_obj_tag(v_n_1408_) == 0)
{
lean_object* v_cs_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; size_t v_sz_1414_; size_t v___x_1415_; lean_object* v___x_1416_; lean_object* v_fst_1417_; 
v_cs_1411_ = lean_ctor_get(v_n_1408_, 0);
v___x_1412_ = lean_box(0);
v___x_1413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1413_, 0, v___x_1412_);
lean_ctor_set(v___x_1413_, 1, v_b_1409_);
v_sz_1414_ = lean_array_size(v_cs_1411_);
v___x_1415_ = ((size_t)0ULL);
v___x_1416_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__6(v_init_1403_, v___x_1404_, v___x_1405_, v___x_1406_, v_val_1407_, v_cs_1411_, v_sz_1414_, v___x_1415_, v___x_1413_);
v_fst_1417_ = lean_ctor_get(v___x_1416_, 0);
if (lean_obj_tag(v_fst_1417_) == 0)
{
lean_object* v_snd_1418_; lean_object* v___x_1419_; 
v_snd_1418_ = lean_ctor_get(v___x_1416_, 1);
lean_inc(v_snd_1418_);
lean_dec_ref(v___x_1416_);
v___x_1419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1419_, 0, v_snd_1418_);
return v___x_1419_;
}
else
{
lean_object* v_val_1420_; 
lean_inc_ref(v_fst_1417_);
lean_dec_ref(v___x_1416_);
v_val_1420_ = lean_ctor_get(v_fst_1417_, 0);
lean_inc(v_val_1420_);
lean_dec_ref_known(v_fst_1417_, 1);
return v_val_1420_;
}
}
else
{
lean_object* v_vs_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; size_t v_sz_1424_; size_t v___x_1425_; lean_object* v___x_1426_; lean_object* v_fst_1427_; 
v_vs_1421_ = lean_ctor_get(v_n_1408_, 0);
v___x_1422_ = lean_box(0);
v___x_1423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1423_, 0, v___x_1422_);
lean_ctor_set(v___x_1423_, 1, v_b_1409_);
v_sz_1424_ = lean_array_size(v_vs_1421_);
v___x_1425_ = ((size_t)0ULL);
v___x_1426_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7(v___x_1404_, v___x_1405_, v___x_1406_, v_val_1407_, v_vs_1421_, v_sz_1424_, v___x_1425_, v___x_1423_);
v_fst_1427_ = lean_ctor_get(v___x_1426_, 0);
if (lean_obj_tag(v_fst_1427_) == 0)
{
lean_object* v_snd_1428_; lean_object* v___x_1429_; 
v_snd_1428_ = lean_ctor_get(v___x_1426_, 1);
lean_inc(v_snd_1428_);
lean_dec_ref(v___x_1426_);
v___x_1429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1429_, 0, v_snd_1428_);
return v___x_1429_;
}
else
{
lean_object* v_val_1430_; 
lean_inc_ref(v_fst_1427_);
lean_dec_ref(v___x_1426_);
v_val_1430_ = lean_ctor_get(v_fst_1427_, 0);
lean_inc(v_val_1430_);
lean_dec_ref_known(v_fst_1427_, 1);
return v_val_1430_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__6(lean_object* v_init_1431_, lean_object* v___x_1432_, lean_object* v___x_1433_, lean_object* v___x_1434_, uint8_t v_val_1435_, lean_object* v_as_1436_, size_t v_sz_1437_, size_t v_i_1438_, lean_object* v_b_1439_){
_start:
{
uint8_t v___x_1441_; 
v___x_1441_ = lean_usize_dec_lt(v_i_1438_, v_sz_1437_);
if (v___x_1441_ == 0)
{
lean_dec_ref(v___x_1434_);
lean_dec_ref(v___x_1432_);
return v_b_1439_;
}
else
{
lean_object* v_snd_1442_; lean_object* v___x_1444_; uint8_t v_isShared_1445_; uint8_t v_isSharedCheck_1460_; 
v_snd_1442_ = lean_ctor_get(v_b_1439_, 1);
v_isSharedCheck_1460_ = !lean_is_exclusive(v_b_1439_);
if (v_isSharedCheck_1460_ == 0)
{
lean_object* v_unused_1461_; 
v_unused_1461_ = lean_ctor_get(v_b_1439_, 0);
lean_dec(v_unused_1461_);
v___x_1444_ = v_b_1439_;
v_isShared_1445_ = v_isSharedCheck_1460_;
goto v_resetjp_1443_;
}
else
{
lean_inc(v_snd_1442_);
lean_dec(v_b_1439_);
v___x_1444_ = lean_box(0);
v_isShared_1445_ = v_isSharedCheck_1460_;
goto v_resetjp_1443_;
}
v_resetjp_1443_:
{
lean_object* v___x_1446_; lean_object* v_a_1447_; lean_object* v___x_1448_; 
v___x_1446_ = lean_box(0);
v_a_1447_ = lean_array_uget_borrowed(v_as_1436_, v_i_1438_);
lean_inc(v_snd_1442_);
lean_inc_ref(v___x_1434_);
lean_inc_ref(v___x_1432_);
v___x_1448_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4(v_init_1431_, v___x_1432_, v___x_1433_, v___x_1434_, v_val_1435_, v_a_1447_, v_snd_1442_);
if (lean_obj_tag(v___x_1448_) == 0)
{
lean_object* v___x_1449_; lean_object* v___x_1451_; 
lean_dec_ref(v___x_1434_);
lean_dec_ref(v___x_1432_);
v___x_1449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1449_, 0, v___x_1448_);
if (v_isShared_1445_ == 0)
{
lean_ctor_set(v___x_1444_, 0, v___x_1449_);
v___x_1451_ = v___x_1444_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1452_; 
v_reuseFailAlloc_1452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1452_, 0, v___x_1449_);
lean_ctor_set(v_reuseFailAlloc_1452_, 1, v_snd_1442_);
v___x_1451_ = v_reuseFailAlloc_1452_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
return v___x_1451_;
}
}
else
{
lean_object* v_a_1453_; lean_object* v___x_1455_; 
lean_dec(v_snd_1442_);
v_a_1453_ = lean_ctor_get(v___x_1448_, 0);
lean_inc(v_a_1453_);
lean_dec_ref_known(v___x_1448_, 1);
if (v_isShared_1445_ == 0)
{
lean_ctor_set(v___x_1444_, 1, v_a_1453_);
lean_ctor_set(v___x_1444_, 0, v___x_1446_);
v___x_1455_ = v___x_1444_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v___x_1446_);
lean_ctor_set(v_reuseFailAlloc_1459_, 1, v_a_1453_);
v___x_1455_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
size_t v___x_1456_; size_t v___x_1457_; 
v___x_1456_ = ((size_t)1ULL);
v___x_1457_ = lean_usize_add(v_i_1438_, v___x_1456_);
v_i_1438_ = v___x_1457_;
v_b_1439_ = v___x_1455_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__6___boxed(lean_object* v_init_1462_, lean_object* v___x_1463_, lean_object* v___x_1464_, lean_object* v___x_1465_, lean_object* v_val_1466_, lean_object* v_as_1467_, lean_object* v_sz_1468_, lean_object* v_i_1469_, lean_object* v_b_1470_, lean_object* v___y_1471_){
_start:
{
uint8_t v_val_36780__boxed_1472_; size_t v_sz_boxed_1473_; size_t v_i_boxed_1474_; lean_object* v_res_1475_; 
v_val_36780__boxed_1472_ = lean_unbox(v_val_1466_);
v_sz_boxed_1473_ = lean_unbox_usize(v_sz_1468_);
lean_dec(v_sz_1468_);
v_i_boxed_1474_ = lean_unbox_usize(v_i_1469_);
lean_dec(v_i_1469_);
v_res_1475_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__6(v_init_1462_, v___x_1463_, v___x_1464_, v___x_1465_, v_val_36780__boxed_1472_, v_as_1467_, v_sz_boxed_1473_, v_i_boxed_1474_, v_b_1470_);
lean_dec_ref(v_as_1467_);
lean_dec(v___x_1464_);
lean_dec_ref(v_init_1462_);
return v_res_1475_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4___boxed(lean_object* v_init_1476_, lean_object* v___x_1477_, lean_object* v___x_1478_, lean_object* v___x_1479_, lean_object* v_val_1480_, lean_object* v_n_1481_, lean_object* v_b_1482_, lean_object* v___y_1483_){
_start:
{
uint8_t v_val_36796__boxed_1484_; lean_object* v_res_1485_; 
v_val_36796__boxed_1484_ = lean_unbox(v_val_1480_);
v_res_1485_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4(v_init_1476_, v___x_1477_, v___x_1478_, v___x_1479_, v_val_36796__boxed_1484_, v_n_1481_, v_b_1482_);
lean_dec_ref(v_n_1481_);
lean_dec(v___x_1478_);
lean_dec_ref(v_init_1476_);
return v_res_1485_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5_spec__9(lean_object* v___x_1486_, lean_object* v___x_1487_, lean_object* v___x_1488_, uint8_t v_val_1489_, lean_object* v_as_1490_, size_t v_sz_1491_, size_t v_i_1492_, lean_object* v_b_1493_){
_start:
{
uint8_t v___x_1495_; 
v___x_1495_ = lean_usize_dec_lt(v_i_1492_, v_sz_1491_);
if (v___x_1495_ == 0)
{
lean_dec_ref(v___x_1488_);
lean_dec_ref(v___x_1486_);
return v_b_1493_;
}
else
{
lean_object* v_snd_1496_; lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1514_; 
v_snd_1496_ = lean_ctor_get(v_b_1493_, 1);
v_isSharedCheck_1514_ = !lean_is_exclusive(v_b_1493_);
if (v_isSharedCheck_1514_ == 0)
{
lean_object* v_unused_1515_; 
v_unused_1515_ = lean_ctor_get(v_b_1493_, 0);
lean_dec(v_unused_1515_);
v___x_1498_ = v_b_1493_;
v_isShared_1499_ = v_isSharedCheck_1514_;
goto v_resetjp_1497_;
}
else
{
lean_inc(v_snd_1496_);
lean_dec(v_b_1493_);
v___x_1498_ = lean_box(0);
v_isShared_1499_ = v_isSharedCheck_1514_;
goto v_resetjp_1497_;
}
v_resetjp_1497_:
{
lean_object* v_a_1500_; lean_object* v_msg_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; uint8_t v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1509_; 
v_a_1500_ = lean_array_uget_borrowed(v_as_1490_, v_i_1492_);
v_msg_1501_ = lean_ctor_get(v_a_1500_, 1);
v___x_1502_ = lean_box(0);
lean_inc_ref(v___x_1486_);
v___x_1503_ = l_Lean_FileMap_toPosition(v___x_1486_, v___x_1487_);
v___x_1504_ = 0;
v___x_1505_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
lean_inc_ref(v_msg_1501_);
lean_inc_ref(v___x_1488_);
v___x_1506_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1506_, 0, v___x_1488_);
lean_ctor_set(v___x_1506_, 1, v___x_1503_);
lean_ctor_set(v___x_1506_, 2, v___x_1502_);
lean_ctor_set(v___x_1506_, 3, v___x_1505_);
lean_ctor_set(v___x_1506_, 4, v_msg_1501_);
lean_ctor_set_uint8(v___x_1506_, sizeof(void*)*5, v_val_1489_);
lean_ctor_set_uint8(v___x_1506_, sizeof(void*)*5 + 1, v___x_1504_);
lean_ctor_set_uint8(v___x_1506_, sizeof(void*)*5 + 2, v_val_1489_);
v___x_1507_ = l_Lean_MessageLog_add(v___x_1506_, v_snd_1496_);
if (v_isShared_1499_ == 0)
{
lean_ctor_set(v___x_1498_, 1, v___x_1507_);
lean_ctor_set(v___x_1498_, 0, v___x_1502_);
v___x_1509_ = v___x_1498_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v___x_1502_);
lean_ctor_set(v_reuseFailAlloc_1513_, 1, v___x_1507_);
v___x_1509_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
size_t v___x_1510_; size_t v___x_1511_; 
v___x_1510_ = ((size_t)1ULL);
v___x_1511_ = lean_usize_add(v_i_1492_, v___x_1510_);
v_i_1492_ = v___x_1511_;
v_b_1493_ = v___x_1509_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5_spec__9___boxed(lean_object* v___x_1516_, lean_object* v___x_1517_, lean_object* v___x_1518_, lean_object* v_val_1519_, lean_object* v_as_1520_, lean_object* v_sz_1521_, lean_object* v_i_1522_, lean_object* v_b_1523_, lean_object* v___y_1524_){
_start:
{
uint8_t v_val_36878__boxed_1525_; size_t v_sz_boxed_1526_; size_t v_i_boxed_1527_; lean_object* v_res_1528_; 
v_val_36878__boxed_1525_ = lean_unbox(v_val_1519_);
v_sz_boxed_1526_ = lean_unbox_usize(v_sz_1521_);
lean_dec(v_sz_1521_);
v_i_boxed_1527_ = lean_unbox_usize(v_i_1522_);
lean_dec(v_i_1522_);
v_res_1528_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5_spec__9(v___x_1516_, v___x_1517_, v___x_1518_, v_val_36878__boxed_1525_, v_as_1520_, v_sz_boxed_1526_, v_i_boxed_1527_, v_b_1523_);
lean_dec_ref(v_as_1520_);
lean_dec(v___x_1517_);
return v_res_1528_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5(lean_object* v___x_1529_, lean_object* v___x_1530_, lean_object* v___x_1531_, uint8_t v_val_1532_, lean_object* v_as_1533_, size_t v_sz_1534_, size_t v_i_1535_, lean_object* v_b_1536_){
_start:
{
uint8_t v___x_1538_; 
v___x_1538_ = lean_usize_dec_lt(v_i_1535_, v_sz_1534_);
if (v___x_1538_ == 0)
{
lean_dec_ref(v___x_1531_);
lean_dec_ref(v___x_1529_);
return v_b_1536_;
}
else
{
lean_object* v_snd_1539_; lean_object* v___x_1541_; uint8_t v_isShared_1542_; uint8_t v_isSharedCheck_1557_; 
v_snd_1539_ = lean_ctor_get(v_b_1536_, 1);
v_isSharedCheck_1557_ = !lean_is_exclusive(v_b_1536_);
if (v_isSharedCheck_1557_ == 0)
{
lean_object* v_unused_1558_; 
v_unused_1558_ = lean_ctor_get(v_b_1536_, 0);
lean_dec(v_unused_1558_);
v___x_1541_ = v_b_1536_;
v_isShared_1542_ = v_isSharedCheck_1557_;
goto v_resetjp_1540_;
}
else
{
lean_inc(v_snd_1539_);
lean_dec(v_b_1536_);
v___x_1541_ = lean_box(0);
v_isShared_1542_ = v_isSharedCheck_1557_;
goto v_resetjp_1540_;
}
v_resetjp_1540_:
{
lean_object* v_a_1543_; lean_object* v_msg_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; uint8_t v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1552_; 
v_a_1543_ = lean_array_uget_borrowed(v_as_1533_, v_i_1535_);
v_msg_1544_ = lean_ctor_get(v_a_1543_, 1);
v___x_1545_ = lean_box(0);
lean_inc_ref(v___x_1529_);
v___x_1546_ = l_Lean_FileMap_toPosition(v___x_1529_, v___x_1530_);
v___x_1547_ = 0;
v___x_1548_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
lean_inc_ref(v_msg_1544_);
lean_inc_ref(v___x_1531_);
v___x_1549_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1549_, 0, v___x_1531_);
lean_ctor_set(v___x_1549_, 1, v___x_1546_);
lean_ctor_set(v___x_1549_, 2, v___x_1545_);
lean_ctor_set(v___x_1549_, 3, v___x_1548_);
lean_ctor_set(v___x_1549_, 4, v_msg_1544_);
lean_ctor_set_uint8(v___x_1549_, sizeof(void*)*5, v_val_1532_);
lean_ctor_set_uint8(v___x_1549_, sizeof(void*)*5 + 1, v___x_1547_);
lean_ctor_set_uint8(v___x_1549_, sizeof(void*)*5 + 2, v_val_1532_);
v___x_1550_ = l_Lean_MessageLog_add(v___x_1549_, v_snd_1539_);
if (v_isShared_1542_ == 0)
{
lean_ctor_set(v___x_1541_, 1, v___x_1550_);
lean_ctor_set(v___x_1541_, 0, v___x_1545_);
v___x_1552_ = v___x_1541_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1556_; 
v_reuseFailAlloc_1556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1556_, 0, v___x_1545_);
lean_ctor_set(v_reuseFailAlloc_1556_, 1, v___x_1550_);
v___x_1552_ = v_reuseFailAlloc_1556_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
size_t v___x_1553_; size_t v___x_1554_; lean_object* v___x_1555_; 
v___x_1553_ = ((size_t)1ULL);
v___x_1554_ = lean_usize_add(v_i_1535_, v___x_1553_);
v___x_1555_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5_spec__9(v___x_1529_, v___x_1530_, v___x_1531_, v_val_1532_, v_as_1533_, v_sz_1534_, v___x_1554_, v___x_1552_);
return v___x_1555_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5___boxed(lean_object* v___x_1559_, lean_object* v___x_1560_, lean_object* v___x_1561_, lean_object* v_val_1562_, lean_object* v_as_1563_, lean_object* v_sz_1564_, lean_object* v_i_1565_, lean_object* v_b_1566_, lean_object* v___y_1567_){
_start:
{
uint8_t v_val_36930__boxed_1568_; size_t v_sz_boxed_1569_; size_t v_i_boxed_1570_; lean_object* v_res_1571_; 
v_val_36930__boxed_1568_ = lean_unbox(v_val_1562_);
v_sz_boxed_1569_ = lean_unbox_usize(v_sz_1564_);
lean_dec(v_sz_1564_);
v_i_boxed_1570_ = lean_unbox_usize(v_i_1565_);
lean_dec(v_i_1565_);
v_res_1571_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5(v___x_1559_, v___x_1560_, v___x_1561_, v_val_36930__boxed_1568_, v_as_1563_, v_sz_boxed_1569_, v_i_boxed_1570_, v_b_1566_);
lean_dec_ref(v_as_1563_);
lean_dec(v___x_1560_);
return v_res_1571_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4(lean_object* v___x_1572_, lean_object* v___x_1573_, lean_object* v___x_1574_, uint8_t v_val_1575_, lean_object* v_t_1576_, lean_object* v_init_1577_){
_start:
{
lean_object* v_root_1579_; lean_object* v_tail_1580_; lean_object* v___x_1581_; 
v_root_1579_ = lean_ctor_get(v_t_1576_, 0);
v_tail_1580_ = lean_ctor_get(v_t_1576_, 1);
lean_inc_ref(v___x_1574_);
lean_inc_ref(v___x_1572_);
lean_inc_ref(v_init_1577_);
v___x_1581_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4(v_init_1577_, v___x_1572_, v___x_1573_, v___x_1574_, v_val_1575_, v_root_1579_, v_init_1577_);
lean_dec_ref(v_init_1577_);
if (lean_obj_tag(v___x_1581_) == 0)
{
lean_object* v_a_1582_; 
lean_dec_ref(v___x_1574_);
lean_dec_ref(v___x_1572_);
v_a_1582_ = lean_ctor_get(v___x_1581_, 0);
lean_inc(v_a_1582_);
lean_dec_ref_known(v___x_1581_, 1);
return v_a_1582_;
}
else
{
lean_object* v_a_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; size_t v_sz_1586_; size_t v___x_1587_; lean_object* v___x_1588_; lean_object* v_fst_1589_; 
v_a_1583_ = lean_ctor_get(v___x_1581_, 0);
lean_inc(v_a_1583_);
lean_dec_ref_known(v___x_1581_, 1);
v___x_1584_ = lean_box(0);
v___x_1585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1585_, 0, v___x_1584_);
lean_ctor_set(v___x_1585_, 1, v_a_1583_);
v_sz_1586_ = lean_array_size(v_tail_1580_);
v___x_1587_ = ((size_t)0ULL);
v___x_1588_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5(v___x_1572_, v___x_1573_, v___x_1574_, v_val_1575_, v_tail_1580_, v_sz_1586_, v___x_1587_, v___x_1585_);
v_fst_1589_ = lean_ctor_get(v___x_1588_, 0);
if (lean_obj_tag(v_fst_1589_) == 0)
{
lean_object* v_snd_1590_; 
v_snd_1590_ = lean_ctor_get(v___x_1588_, 1);
lean_inc(v_snd_1590_);
lean_dec_ref(v___x_1588_);
return v_snd_1590_;
}
else
{
lean_object* v_val_1591_; 
lean_inc_ref(v_fst_1589_);
lean_dec_ref(v___x_1588_);
v_val_1591_ = lean_ctor_get(v_fst_1589_, 0);
lean_inc(v_val_1591_);
lean_dec_ref_known(v_fst_1589_, 1);
return v_val_1591_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4___boxed(lean_object* v___x_1592_, lean_object* v___x_1593_, lean_object* v___x_1594_, lean_object* v_val_1595_, lean_object* v_t_1596_, lean_object* v_init_1597_, lean_object* v___y_1598_){
_start:
{
uint8_t v_val_36981__boxed_1599_; lean_object* v_res_1600_; 
v_val_36981__boxed_1599_ = lean_unbox(v_val_1595_);
v_res_1600_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4(v___x_1592_, v___x_1593_, v___x_1594_, v_val_36981__boxed_1599_, v_t_1596_, v_init_1597_);
lean_dec_ref(v_t_1596_);
lean_dec(v___x_1593_);
return v_res_1600_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0(void){
_start:
{
lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; 
v___x_1601_ = lean_unsigned_to_nat(1u);
v___x_1602_ = l_Lean_firstFrontendMacroScope;
v___x_1603_ = lean_nat_add(v___x_1602_, v___x_1601_);
return v___x_1603_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4(void){
_start:
{
lean_object* v___x_1610_; lean_object* v___x_1611_; 
v___x_1610_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0);
v___x_1611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1611_, 0, v___x_1610_);
return v___x_1611_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__5(void){
_start:
{
lean_object* v___x_1612_; lean_object* v___x_1613_; 
v___x_1612_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4);
v___x_1613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1613_, 0, v___x_1612_);
lean_ctor_set(v___x_1613_, 1, v___x_1612_);
return v___x_1613_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3(lean_object* v_a_1614_, lean_object* v_opts_1615_, lean_object* v___x_1616_, lean_object* v___x_1617_, lean_object* v___x_1618_, size_t v___x_1619_, uint8_t v___x_1620_, lean_object* v_env_1621_, lean_object* v___x_1622_, lean_object* v___x_1623_, lean_object* v_pos_1624_, uint8_t v_val_1625_, lean_object* v___x_1626_, lean_object* v___x_1627_, lean_object* v___x_1628_, lean_object* v___x_1629_, lean_object* v___x_1630_, uint8_t v___x_1631_, lean_object* v_x_1632_){
_start:
{
lean_object* v_toProcessingContext_1634_; lean_object* v_fileName_1635_; lean_object* v_fileMap_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; uint16_t v___x_1641_; uint8_t v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v_fileName_1661_; lean_object* v_fileMap_1662_; lean_object* v_currNamespace_1663_; lean_object* v_openDecls_1664_; lean_object* v_initHeartbeats_1665_; lean_object* v_maxHeartbeats_1666_; lean_object* v_quotContext_1667_; lean_object* v_currMacroScope_1668_; lean_object* v_cancelTk_x3f_1669_; lean_object* v_inheritedTraceOptions_1670_; lean_object* v_currRecDepth_1671_; lean_object* v_ref_1672_; uint8_t v_suppressElabErrors_1673_; uint8_t v_checkDeprecated_1674_; uint8_t v_isRecordingDeps_1675_; lean_object* v___x_1692_; lean_object* v___x_1693_; uint8_t v___y_1695_; lean_object* v_env_1716_; uint8_t v___x_1717_; uint16_t v___x_1718_; uint16_t v___x_1719_; uint16_t v___x_1720_; uint8_t v___x_1721_; 
v_toProcessingContext_1634_ = lean_ctor_get(v_a_1614_, 0);
v_fileName_1635_ = lean_ctor_get(v_toProcessingContext_1634_, 1);
v_fileMap_1636_ = lean_ctor_get(v_toProcessingContext_1634_, 2);
v___x_1637_ = lean_box(0);
v___x_1638_ = l_Lean_Core_getMaxHeartbeats(v_opts_1615_);
v___x_1639_ = l_Lean_firstFrontendMacroScope;
v___x_1640_ = lean_box(0);
v___x_1641_ = l_Lean_OptionFlags_ofOptions(v_opts_1615_);
v___x_1642_ = 0;
v___x_1643_ = lean_unsigned_to_nat(1u);
v___x_1644_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0);
v___x_1645_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__3));
lean_inc(v___x_1616_);
v___x_1646_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1646_, 0, v___x_1616_);
lean_ctor_set(v___x_1646_, 1, v___x_1643_);
lean_ctor_set(v___x_1646_, 2, v___x_1637_);
v___x_1647_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4);
v___x_1648_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__5, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__5_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__5);
v___x_1649_ = lean_mk_empty_array_with_capacity(v___x_1617_);
v___x_1650_ = l_Lean_Options_empty;
lean_inc_n(v___x_1617_, 5);
lean_inc_ref_n(v___x_1649_, 3);
v___x_1651_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1651_, 0, v___x_1649_);
lean_ctor_set(v___x_1651_, 1, v___x_1650_);
lean_ctor_set(v___x_1651_, 2, v___x_1649_);
lean_ctor_set(v___x_1651_, 3, v___x_1617_);
lean_ctor_set(v___x_1651_, 4, v___x_1617_);
lean_ctor_set(v___x_1651_, 5, v___x_1617_);
v___x_1652_ = lean_mk_empty_array_with_capacity(v___x_1618_);
lean_inc_ref(v___x_1652_);
v___x_1653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1653_, 0, v___x_1652_);
v___x_1654_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1654_, 0, v___x_1653_);
lean_ctor_set(v___x_1654_, 1, v___x_1652_);
lean_ctor_set(v___x_1654_, 2, v___x_1617_);
lean_ctor_set(v___x_1654_, 3, v___x_1617_);
lean_ctor_set_usize(v___x_1654_, 4, v___x_1619_);
v___x_1655_ = l_Lean_NameSet_empty;
lean_inc_ref_n(v___x_1654_, 2);
v___x_1656_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1656_, 0, v___x_1654_);
lean_ctor_set(v___x_1656_, 1, v___x_1654_);
lean_ctor_set(v___x_1656_, 2, v___x_1655_);
v___x_1657_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1657_, 0, v___x_1647_);
lean_ctor_set(v___x_1657_, 1, v___x_1647_);
lean_ctor_set(v___x_1657_, 2, v___x_1654_);
lean_ctor_set_uint8(v___x_1657_, sizeof(void*)*3, v___x_1620_);
lean_inc_ref(v___x_1622_);
v___x_1658_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1658_, 0, v_env_1621_);
lean_ctor_set(v___x_1658_, 1, v___x_1644_);
lean_ctor_set(v___x_1658_, 2, v___x_1645_);
lean_ctor_set(v___x_1658_, 3, v___x_1646_);
lean_ctor_set(v___x_1658_, 4, v___x_1622_);
lean_ctor_set(v___x_1658_, 5, v___x_1648_);
lean_ctor_set(v___x_1658_, 6, v___x_1651_);
lean_ctor_set(v___x_1658_, 7, v___x_1656_);
lean_ctor_set(v___x_1658_, 8, v___x_1657_);
lean_ctor_set(v___x_1658_, 9, v___x_1649_);
v___x_1659_ = lean_st_mk_ref(v___x_1658_);
v___x_1692_ = lean_st_ref_get(v___x_1629_);
v___x_1693_ = lean_st_ref_get(v___x_1659_);
v_env_1716_ = lean_ctor_get(v___x_1693_, 0);
lean_inc_ref(v_env_1716_);
lean_dec(v___x_1693_);
v___x_1717_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_1716_);
lean_dec_ref(v_env_1716_);
v___x_1718_ = 512;
v___x_1719_ = lean_uint16_land(v___x_1641_, v___x_1718_);
v___x_1720_ = 0;
v___x_1721_ = lean_uint16_dec_eq(v___x_1719_, v___x_1720_);
if (v___x_1721_ == 0)
{
if (v___x_1717_ == 0)
{
v___y_1695_ = v___x_1631_;
goto v___jp_1694_;
}
else
{
lean_inc(v___x_1617_);
lean_inc(v___x_1616_);
lean_inc_ref(v_fileMap_1636_);
lean_inc_ref(v_fileName_1635_);
v_fileName_1661_ = v_fileName_1635_;
v_fileMap_1662_ = v_fileMap_1636_;
v_currNamespace_1663_ = v___x_1616_;
v_openDecls_1664_ = v___x_1637_;
v_initHeartbeats_1665_ = v___x_1617_;
v_maxHeartbeats_1666_ = v___x_1638_;
v_quotContext_1667_ = v___x_1616_;
v_currMacroScope_1668_ = v___x_1639_;
v_cancelTk_x3f_1669_ = v___x_1630_;
v_inheritedTraceOptions_1670_ = v___x_1692_;
v_currRecDepth_1671_ = v___x_1617_;
v_ref_1672_ = v___x_1640_;
v_suppressElabErrors_1673_ = v_val_1625_;
v_checkDeprecated_1674_ = v___x_1642_;
v_isRecordingDeps_1675_ = v_val_1625_;
goto v___jp_1660_;
}
}
else
{
if (v___x_1717_ == 0)
{
lean_inc(v___x_1617_);
lean_inc(v___x_1616_);
lean_inc_ref(v_fileMap_1636_);
lean_inc_ref(v_fileName_1635_);
v_fileName_1661_ = v_fileName_1635_;
v_fileMap_1662_ = v_fileMap_1636_;
v_currNamespace_1663_ = v___x_1616_;
v_openDecls_1664_ = v___x_1637_;
v_initHeartbeats_1665_ = v___x_1617_;
v_maxHeartbeats_1666_ = v___x_1638_;
v_quotContext_1667_ = v___x_1616_;
v_currMacroScope_1668_ = v___x_1639_;
v_cancelTk_x3f_1669_ = v___x_1630_;
v_inheritedTraceOptions_1670_ = v___x_1692_;
v_currRecDepth_1671_ = v___x_1617_;
v_ref_1672_ = v___x_1640_;
v_suppressElabErrors_1673_ = v_val_1625_;
v_checkDeprecated_1674_ = v___x_1642_;
v_isRecordingDeps_1675_ = v_val_1625_;
goto v___jp_1660_;
}
else
{
v___y_1695_ = v_val_1625_;
goto v___jp_1694_;
}
}
v___jp_1660_:
{
lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; 
v___x_1676_ = l_Lean_maxRecDepth;
v___x_1677_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__3(v_opts_1615_, v___x_1676_);
lean_inc(v_currMacroScope_1668_);
lean_inc(v_openDecls_1664_);
v___x_1678_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_1678_, 0, v_fileName_1661_);
lean_ctor_set(v___x_1678_, 1, v_fileMap_1662_);
lean_ctor_set(v___x_1678_, 2, v_opts_1615_);
lean_ctor_set(v___x_1678_, 3, v___x_1677_);
lean_ctor_set(v___x_1678_, 4, v_currNamespace_1663_);
lean_ctor_set(v___x_1678_, 5, v_openDecls_1664_);
lean_ctor_set(v___x_1678_, 6, v_initHeartbeats_1665_);
lean_ctor_set(v___x_1678_, 7, v_maxHeartbeats_1666_);
lean_ctor_set(v___x_1678_, 8, v_quotContext_1667_);
lean_ctor_set(v___x_1678_, 9, v_currMacroScope_1668_);
lean_ctor_set(v___x_1678_, 10, v_cancelTk_x3f_1669_);
lean_ctor_set(v___x_1678_, 11, v_inheritedTraceOptions_1670_);
lean_inc(v_ref_1672_);
v___x_1679_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1679_, 0, v___x_1678_);
lean_ctor_set(v___x_1679_, 1, v_currRecDepth_1671_);
lean_ctor_set(v___x_1679_, 2, v_ref_1672_);
lean_ctor_set_uint16(v___x_1679_, sizeof(void*)*3, v___x_1641_);
lean_ctor_set_uint8(v___x_1679_, sizeof(void*)*3 + 2, v_suppressElabErrors_1673_);
lean_ctor_set_uint8(v___x_1679_, sizeof(void*)*3 + 3, v_checkDeprecated_1674_);
lean_ctor_set_uint8(v___x_1679_, sizeof(void*)*3 + 4, v_isRecordingDeps_1675_);
v___x_1680_ = l_Lean_Language_SnapshotTree_trace(v___x_1623_, v___x_1679_, v___x_1659_);
lean_dec_ref_known(v___x_1679_, 3);
if (lean_obj_tag(v___x_1680_) == 0)
{
lean_object* v___x_1681_; lean_object* v_traceState_1682_; lean_object* v_traces_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; 
lean_dec_ref_known(v___x_1680_, 1);
lean_dec_ref(v___x_1628_);
v___x_1681_ = lean_st_ref_get(v___x_1659_);
lean_dec(v___x_1659_);
v_traceState_1682_ = lean_ctor_get(v___x_1681_, 4);
lean_inc_ref(v_traceState_1682_);
lean_dec(v___x_1681_);
v_traces_1683_ = lean_ctor_get(v_traceState_1682_, 0);
lean_inc_ref(v_traces_1683_);
lean_dec_ref(v_traceState_1682_);
v___x_1684_ = l_Lean_MessageLog_empty;
lean_inc_ref(v_fileName_1635_);
lean_inc_ref(v_fileMap_1636_);
v___x_1685_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4(v_fileMap_1636_, v_pos_1624_, v_fileName_1635_, v_val_1625_, v_traces_1683_, v___x_1684_);
lean_dec_ref(v_traces_1683_);
v___x_1686_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v___x_1685_);
v___x_1687_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1687_, 0, v___x_1626_);
lean_ctor_set(v___x_1687_, 1, v___x_1686_);
lean_ctor_set(v___x_1687_, 2, v___x_1627_);
lean_ctor_set(v___x_1687_, 3, v___x_1622_);
lean_ctor_set_uint8(v___x_1687_, sizeof(void*)*4, v_val_1625_);
v___x_1688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1688_, 0, v___x_1687_);
lean_ctor_set(v___x_1688_, 1, v___x_1649_);
v___x_1689_ = lean_task_pure(v___x_1688_);
return v___x_1689_;
}
else
{
lean_object* v___x_1690_; lean_object* v___x_1691_; 
lean_dec_ref_known(v___x_1680_, 1);
lean_dec(v___x_1659_);
lean_dec(v___x_1627_);
lean_dec_ref(v___x_1626_);
lean_dec_ref(v___x_1622_);
v___x_1690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1690_, 0, v___x_1628_);
lean_ctor_set(v___x_1690_, 1, v___x_1649_);
v___x_1691_ = lean_task_pure(v___x_1690_);
return v___x_1691_;
}
}
v___jp_1694_:
{
lean_object* v___x_1696_; lean_object* v_env_1697_; lean_object* v_nextMacroScope_1698_; lean_object* v_ngen_1699_; lean_object* v_auxDeclNGen_1700_; lean_object* v_traceState_1701_; lean_object* v_recordedDeps_1702_; lean_object* v_messages_1703_; lean_object* v_infoState_1704_; lean_object* v_snapshotTasks_1705_; lean_object* v___x_1707_; uint8_t v_isShared_1708_; uint8_t v_isSharedCheck_1714_; 
v___x_1696_ = lean_st_ref_take(v___x_1659_);
v_env_1697_ = lean_ctor_get(v___x_1696_, 0);
v_nextMacroScope_1698_ = lean_ctor_get(v___x_1696_, 1);
v_ngen_1699_ = lean_ctor_get(v___x_1696_, 2);
v_auxDeclNGen_1700_ = lean_ctor_get(v___x_1696_, 3);
v_traceState_1701_ = lean_ctor_get(v___x_1696_, 4);
v_recordedDeps_1702_ = lean_ctor_get(v___x_1696_, 6);
v_messages_1703_ = lean_ctor_get(v___x_1696_, 7);
v_infoState_1704_ = lean_ctor_get(v___x_1696_, 8);
v_snapshotTasks_1705_ = lean_ctor_get(v___x_1696_, 9);
v_isSharedCheck_1714_ = !lean_is_exclusive(v___x_1696_);
if (v_isSharedCheck_1714_ == 0)
{
lean_object* v_unused_1715_; 
v_unused_1715_ = lean_ctor_get(v___x_1696_, 5);
lean_dec(v_unused_1715_);
v___x_1707_ = v___x_1696_;
v_isShared_1708_ = v_isSharedCheck_1714_;
goto v_resetjp_1706_;
}
else
{
lean_inc(v_snapshotTasks_1705_);
lean_inc(v_infoState_1704_);
lean_inc(v_messages_1703_);
lean_inc(v_recordedDeps_1702_);
lean_inc(v_traceState_1701_);
lean_inc(v_auxDeclNGen_1700_);
lean_inc(v_ngen_1699_);
lean_inc(v_nextMacroScope_1698_);
lean_inc(v_env_1697_);
lean_dec(v___x_1696_);
v___x_1707_ = lean_box(0);
v_isShared_1708_ = v_isSharedCheck_1714_;
goto v_resetjp_1706_;
}
v_resetjp_1706_:
{
lean_object* v___x_1709_; lean_object* v___x_1711_; 
v___x_1709_ = l_Lean_Kernel_enableDiag(v_env_1697_, v___y_1695_);
if (v_isShared_1708_ == 0)
{
lean_ctor_set(v___x_1707_, 5, v___x_1648_);
lean_ctor_set(v___x_1707_, 0, v___x_1709_);
v___x_1711_ = v___x_1707_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1713_; 
v_reuseFailAlloc_1713_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1713_, 0, v___x_1709_);
lean_ctor_set(v_reuseFailAlloc_1713_, 1, v_nextMacroScope_1698_);
lean_ctor_set(v_reuseFailAlloc_1713_, 2, v_ngen_1699_);
lean_ctor_set(v_reuseFailAlloc_1713_, 3, v_auxDeclNGen_1700_);
lean_ctor_set(v_reuseFailAlloc_1713_, 4, v_traceState_1701_);
lean_ctor_set(v_reuseFailAlloc_1713_, 5, v___x_1648_);
lean_ctor_set(v_reuseFailAlloc_1713_, 6, v_recordedDeps_1702_);
lean_ctor_set(v_reuseFailAlloc_1713_, 7, v_messages_1703_);
lean_ctor_set(v_reuseFailAlloc_1713_, 8, v_infoState_1704_);
lean_ctor_set(v_reuseFailAlloc_1713_, 9, v_snapshotTasks_1705_);
v___x_1711_ = v_reuseFailAlloc_1713_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
lean_object* v___x_1712_; 
v___x_1712_ = lean_st_ref_put(v___x_1659_, v___x_1711_);
lean_inc(v___x_1617_);
lean_inc(v___x_1616_);
lean_inc_ref(v_fileMap_1636_);
lean_inc_ref(v_fileName_1635_);
v_fileName_1661_ = v_fileName_1635_;
v_fileMap_1662_ = v_fileMap_1636_;
v_currNamespace_1663_ = v___x_1616_;
v_openDecls_1664_ = v___x_1637_;
v_initHeartbeats_1665_ = v___x_1617_;
v_maxHeartbeats_1666_ = v___x_1638_;
v_quotContext_1667_ = v___x_1616_;
v_currMacroScope_1668_ = v___x_1639_;
v_cancelTk_x3f_1669_ = v___x_1630_;
v_inheritedTraceOptions_1670_ = v___x_1692_;
v_currRecDepth_1671_ = v___x_1617_;
v_ref_1672_ = v___x_1640_;
v_suppressElabErrors_1673_ = v_val_1625_;
v_checkDeprecated_1674_ = v___x_1642_;
v_isRecordingDeps_1675_ = v_val_1625_;
goto v___jp_1660_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___boxed(lean_object** _args){
lean_object* v_a_1722_ = _args[0];
lean_object* v_opts_1723_ = _args[1];
lean_object* v___x_1724_ = _args[2];
lean_object* v___x_1725_ = _args[3];
lean_object* v___x_1726_ = _args[4];
lean_object* v___x_1727_ = _args[5];
lean_object* v___x_1728_ = _args[6];
lean_object* v_env_1729_ = _args[7];
lean_object* v___x_1730_ = _args[8];
lean_object* v___x_1731_ = _args[9];
lean_object* v_pos_1732_ = _args[10];
lean_object* v_val_1733_ = _args[11];
lean_object* v___x_1734_ = _args[12];
lean_object* v___x_1735_ = _args[13];
lean_object* v___x_1736_ = _args[14];
lean_object* v___x_1737_ = _args[15];
lean_object* v___x_1738_ = _args[16];
lean_object* v___x_1739_ = _args[17];
lean_object* v_x_1740_ = _args[18];
lean_object* v___y_1741_ = _args[19];
_start:
{
size_t v___x_37041__boxed_1742_; uint8_t v___x_37042__boxed_1743_; uint8_t v_val_37045__boxed_1744_; uint8_t v___x_37051__boxed_1745_; lean_object* v_res_1746_; 
v___x_37041__boxed_1742_ = lean_unbox_usize(v___x_1727_);
lean_dec(v___x_1727_);
v___x_37042__boxed_1743_ = lean_unbox(v___x_1728_);
v_val_37045__boxed_1744_ = lean_unbox(v_val_1733_);
v___x_37051__boxed_1745_ = lean_unbox(v___x_1739_);
v_res_1746_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3(v_a_1722_, v_opts_1723_, v___x_1724_, v___x_1725_, v___x_1726_, v___x_37041__boxed_1742_, v___x_37042__boxed_1743_, v_env_1729_, v___x_1730_, v___x_1731_, v_pos_1732_, v_val_37045__boxed_1744_, v___x_1734_, v___x_1735_, v___x_1736_, v___x_1737_, v___x_1738_, v___x_37051__boxed_1745_, v_x_1740_);
lean_dec(v___x_1737_);
lean_dec(v_pos_1732_);
lean_dec(v___x_1726_);
lean_dec_ref(v_a_1722_);
return v_res_1746_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__2(lean_object* v_a_1747_, lean_object* v___x_1748_, lean_object* v_parserState_1749_, lean_object* v_x_1750_){
_start:
{
lean_object* v_toProcessingContext_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; 
v_toProcessingContext_1751_ = lean_ctor_get(v_a_1747_, 0);
v___x_1752_ = l_Lean_MessageLog_empty;
lean_inc_ref(v_toProcessingContext_1751_);
v___x_1753_ = l_Lean_Parser_parseCommand(v_toProcessingContext_1751_, v___x_1748_, v_parserState_1749_, v___x_1752_);
return v___x_1753_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__2___boxed(lean_object* v_a_1754_, lean_object* v___x_1755_, lean_object* v_parserState_1756_, lean_object* v_x_1757_){
_start:
{
lean_object* v_res_1758_; 
v_res_1758_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__2(v_a_1754_, v___x_1755_, v_parserState_1756_, v_x_1757_);
lean_dec_ref(v_a_1754_);
return v_res_1758_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg(lean_object* v_as_1760_, size_t v_i_1761_, size_t v_stop_1762_, lean_object* v_b_1763_){
_start:
{
uint8_t v___x_1765_; 
v___x_1765_ = lean_usize_dec_eq(v_i_1761_, v_stop_1762_);
if (v___x_1765_ == 0)
{
lean_object* v___f_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; size_t v___x_1769_; size_t v___x_1770_; 
v___f_1766_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg___closed__0));
v___x_1767_ = lean_array_uget_borrowed(v_as_1760_, v_i_1761_);
lean_inc(v___x_1767_);
v___x_1768_ = l_Lean_Language_SnapshotTask_cancelRec___redArg(v___f_1766_, v___x_1767_);
v___x_1769_ = ((size_t)1ULL);
v___x_1770_ = lean_usize_add(v_i_1761_, v___x_1769_);
v_i_1761_ = v___x_1770_;
v_b_1763_ = v___x_1768_;
goto _start;
}
else
{
return v_b_1763_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg___boxed(lean_object* v_as_1772_, lean_object* v_i_1773_, lean_object* v_stop_1774_, lean_object* v_b_1775_, lean_object* v___y_1776_){
_start:
{
size_t v_i_boxed_1777_; size_t v_stop_boxed_1778_; lean_object* v_res_1779_; 
v_i_boxed_1777_ = lean_unbox_usize(v_i_1773_);
lean_dec(v_i_1773_);
v_stop_boxed_1778_ = lean_unbox_usize(v_stop_1774_);
lean_dec(v_stop_1774_);
v_res_1779_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg(v_as_1772_, v_i_boxed_1777_, v_stop_boxed_1778_, v_b_1775_);
lean_dec_ref(v_as_1772_);
return v_res_1779_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__0___boxed(lean_object* v_oldResult_1780_, lean_object* v_stx_1781_, lean_object* v_revCmds_1782_, lean_object* v_newParserState_1783_, lean_object* v_val_1784_, lean_object* v_sync_1785_, lean_object* v_val_1786_, lean_object* v_a_1787_, lean_object* v_oldNext_1788_, lean_object* v___y_1789_){
_start:
{
uint8_t v_sync_boxed_1790_; lean_object* v_res_1791_; 
v_sync_boxed_1790_ = lean_unbox(v_sync_1785_);
v_res_1791_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__0(v_oldResult_1780_, v_stx_1781_, v_revCmds_1782_, v_newParserState_1783_, v_val_1784_, v_sync_boxed_1790_, v_val_1786_, v_a_1787_, v_oldNext_1788_);
lean_dec_ref(v_a_1787_);
return v_res_1791_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__1(lean_object* v_val_1792_, lean_object* v_stx_1793_, lean_object* v_revCmds_1794_, lean_object* v_newParserState_1795_, lean_object* v_val_1796_, uint8_t v_sync_1797_, lean_object* v_val_1798_, lean_object* v_a_1799_, lean_object* v_oldResult_1800_){
_start:
{
lean_object* v_task_1802_; lean_object* v___x_1803_; lean_object* v___f_1804_; lean_object* v___x_1805_; uint8_t v___x_1806_; lean_object* v___x_1807_; 
v_task_1802_ = lean_ctor_get(v_val_1792_, 3);
lean_inc_ref(v_task_1802_);
lean_dec_ref(v_val_1792_);
v___x_1803_ = lean_box(v_sync_1797_);
lean_inc_ref(v_a_1799_);
v___f_1804_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__0___boxed), 10, 8);
lean_closure_set(v___f_1804_, 0, v_oldResult_1800_);
lean_closure_set(v___f_1804_, 1, v_stx_1793_);
lean_closure_set(v___f_1804_, 2, v_revCmds_1794_);
lean_closure_set(v___f_1804_, 3, v_newParserState_1795_);
lean_closure_set(v___f_1804_, 4, v_val_1796_);
lean_closure_set(v___f_1804_, 5, v___x_1803_);
lean_closure_set(v___f_1804_, 6, v_val_1798_);
lean_closure_set(v___f_1804_, 7, v_a_1799_);
v___x_1805_ = lean_unsigned_to_nat(0u);
v___x_1806_ = 1;
v___x_1807_ = l_BaseIO_chainTask___redArg(v_task_1802_, v___f_1804_, v___x_1805_, v___x_1806_);
return v___x_1807_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__1___boxed(lean_object* v_val_1808_, lean_object* v_stx_1809_, lean_object* v_revCmds_1810_, lean_object* v_newParserState_1811_, lean_object* v_val_1812_, lean_object* v_sync_1813_, lean_object* v_val_1814_, lean_object* v_a_1815_, lean_object* v_oldResult_1816_, lean_object* v___y_1817_){
_start:
{
uint8_t v_sync_boxed_1818_; lean_object* v_res_1819_; 
v_sync_boxed_1818_ = lean_unbox(v_sync_1813_);
v_res_1819_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__1(v_val_1808_, v_stx_1809_, v_revCmds_1810_, v_newParserState_1811_, v_val_1812_, v_sync_boxed_1818_, v_val_1814_, v_a_1815_, v_oldResult_1816_);
lean_dec_ref(v_a_1815_);
return v_res_1819_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2(void){
_start:
{
lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; 
v___x_1827_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__1));
v___x_1828_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_1829_ = l_Lean_Name_append(v___x_1828_, v___x_1827_);
return v___x_1829_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3(void){
_start:
{
lean_object* v___x_1830_; lean_object* v___x_1831_; 
v___x_1830_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0);
v___x_1831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1831_, 0, v___x_1830_);
return v___x_1831_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5(lean_object* v___x_1833_, lean_object* v_val_1834_, lean_object* v_fst_1835_, lean_object* v_revCmds_1836_, lean_object* v_fst_1837_, uint8_t v_val_1838_, lean_object* v_a_1839_, lean_object* v_snd_1840_, lean_object* v___x_1841_, uint8_t v___x_1842_, lean_object* v_fst_1843_, lean_object* v_val_1844_, lean_object* v_val_1845_, lean_object* v___x_1846_, lean_object* v___f_1847_, lean_object* v___f_1848_, lean_object* v___f_1849_, lean_object* v_pos_1850_, lean_object* v_cmdState_1851_, lean_object* v_val_1852_, lean_object* v___x_1853_, lean_object* v_opts_1854_, lean_object* v___x_1855_, lean_object* v_snd_1856_, lean_object* v_prom_1857_, lean_object* v_old_x3f_1858_, lean_object* v_parseCancelTk_1859_, lean_object* v_next_x3f_1860_){
_start:
{
lean_object* v___y_1863_; lean_object* v___y_1864_; lean_object* v___y_1865_; lean_object* v___y_1866_; lean_object* v_snapshotTasks_1867_; lean_object* v___y_1868_; lean_object* v_traceTask_1869_; lean_object* v___y_1880_; lean_object* v___y_1881_; lean_object* v___y_1882_; lean_object* v___y_1883_; lean_object* v___y_1884_; lean_object* v___y_1885_; lean_object* v___y_1891_; lean_object* v___y_1892_; lean_object* v___y_1893_; lean_object* v___y_1894_; lean_object* v___y_1895_; size_t v___y_1896_; lean_object* v___y_1897_; lean_object* v___y_1898_; lean_object* v___y_1899_; lean_object* v___y_1900_; lean_object* v___y_1901_; lean_object* v___y_1902_; lean_object* v___y_1903_; lean_object* v___y_1904_; lean_object* v_env_1905_; lean_object* v_messages_1906_; lean_object* v_scopes_1907_; lean_object* v_infoState_1908_; lean_object* v_traceState_1909_; lean_object* v_snapshotTasks_1910_; lean_object* v_codeQualityEntryTasks_1911_; lean_object* v___y_1912_; lean_object* v___y_1913_; lean_object* v___y_1914_; lean_object* v___y_1915_; lean_object* v___y_1916_; lean_object* v___y_1917_; lean_object* v___y_1918_; lean_object* v___y_1919_; lean_object* v_reportedCmdState_1920_; lean_object* v___y_1955_; lean_object* v___y_1956_; lean_object* v___y_1957_; lean_object* v___y_1958_; lean_object* v___y_1959_; size_t v___y_1960_; lean_object* v___y_1961_; lean_object* v___y_1962_; lean_object* v___y_1963_; lean_object* v___y_1964_; lean_object* v___y_1965_; lean_object* v___y_1966_; lean_object* v___y_1967_; lean_object* v___y_1968_; lean_object* v___y_1969_; lean_object* v___y_1970_; lean_object* v___y_1971_; lean_object* v___y_1972_; lean_object* v___y_1973_; lean_object* v___y_1974_; lean_object* v___y_1975_; lean_object* v___y_1976_; lean_object* v_reportedCmdState_1977_; lean_object* v___y_1986_; lean_object* v___y_1987_; lean_object* v___y_1988_; lean_object* v___y_1989_; lean_object* v___y_1990_; lean_object* v___y_1991_; lean_object* v___y_1992_; lean_object* v___y_1993_; size_t v___y_1994_; lean_object* v___y_1995_; lean_object* v___y_1996_; lean_object* v___y_1997_; lean_object* v___y_1998_; lean_object* v___y_1999_; lean_object* v___y_2000_; lean_object* v___y_2001_; lean_object* v___y_2035_; 
if (lean_obj_tag(v_next_x3f_1860_) == 0)
{
lean_object* v___x_2088_; 
lean_dec_ref(v_parseCancelTk_1859_);
v___x_2088_ = lean_box(0);
v___y_2035_ = v___x_2088_;
goto v___jp_2034_;
}
else
{
lean_object* v_toProcessingContext_2089_; lean_object* v_val_2090_; lean_object* v_pos_2091_; lean_object* v_endPos_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; 
v_toProcessingContext_2089_ = lean_ctor_get(v_a_1839_, 0);
v_val_2090_ = lean_ctor_get(v_next_x3f_1860_, 0);
v_pos_2091_ = lean_ctor_get(v_fst_1837_, 0);
v_endPos_2092_ = lean_ctor_get(v_toProcessingContext_2089_, 3);
v___x_2093_ = lean_box(0);
lean_inc(v_endPos_2092_);
lean_inc(v_pos_2091_);
v___x_2094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2094_, 0, v_pos_2091_);
lean_ctor_set(v___x_2094_, 1, v_endPos_2092_);
v___x_2095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2095_, 0, v___x_2094_);
v___x_2096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2096_, 0, v_parseCancelTk_1859_);
v___x_2097_ = l_IO_Promise_result_x21___redArg(v_val_2090_);
v___x_2098_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2098_, 0, v___x_2093_);
lean_ctor_set(v___x_2098_, 1, v___x_2095_);
lean_ctor_set(v___x_2098_, 2, v___x_2096_);
lean_ctor_set(v___x_2098_, 3, v___x_2097_);
v___x_2099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2099_, 0, v___x_2098_);
v___y_2035_ = v___x_2099_;
goto v___jp_2034_;
}
v___jp_1862_:
{
lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; 
v___x_1870_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1870_, 0, v___y_1865_);
lean_ctor_set(v___x_1870_, 1, v___x_1833_);
lean_ctor_set(v___x_1870_, 2, v___y_1864_);
lean_ctor_set(v___x_1870_, 3, v_traceTask_1869_);
v___x_1871_ = lean_array_push(v_snapshotTasks_1867_, v___x_1870_);
v___x_1872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1872_, 0, v___y_1863_);
lean_ctor_set(v___x_1872_, 1, v___x_1871_);
v___x_1873_ = lean_io_promise_resolve(v___x_1872_, v_val_1834_);
if (lean_obj_tag(v_next_x3f_1860_) == 1)
{
lean_object* v_val_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; 
v_val_1874_ = lean_ctor_get(v_next_x3f_1860_, 0);
lean_inc(v_val_1874_);
lean_dec_ref_known(v_next_x3f_1860_, 1);
v___x_1875_ = lean_box(0);
v___x_1876_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1876_, 0, v_fst_1835_);
lean_ctor_set(v___x_1876_, 1, v_revCmds_1836_);
v___x_1877_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v___x_1875_, v_fst_1837_, v___y_1866_, v_val_1874_, v_val_1838_, v___y_1868_, v___x_1876_, v_a_1839_);
return v___x_1877_;
}
else
{
lean_object* v___x_1878_; 
lean_dec_ref(v___y_1868_);
lean_dec_ref(v___y_1866_);
lean_dec(v_next_x3f_1860_);
lean_dec_ref(v_fst_1837_);
lean_dec(v_revCmds_1836_);
lean_dec(v_fst_1835_);
v___x_1878_ = lean_box(0);
return v___x_1878_;
}
}
v___jp_1879_:
{
lean_object* v_snapshotTasks_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; 
v_snapshotTasks_1886_ = lean_ctor_get(v___y_1883_, 10);
lean_inc_ref(v_snapshotTasks_1886_);
v___x_1887_ = lean_mk_empty_array_with_capacity(v___y_1884_);
lean_dec(v___y_1884_);
lean_inc_ref(v___y_1880_);
v___x_1888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1888_, 0, v___y_1880_);
lean_ctor_set(v___x_1888_, 1, v___x_1887_);
v___x_1889_ = lean_task_pure(v___x_1888_);
v___y_1863_ = v___y_1880_;
v___y_1864_ = v___y_1881_;
v___y_1865_ = v___y_1882_;
v___y_1866_ = v___y_1883_;
v_snapshotTasks_1867_ = v_snapshotTasks_1886_;
v___y_1868_ = v___y_1885_;
v_traceTask_1869_ = v___x_1889_;
goto v___jp_1862_;
}
v___jp_1890_:
{
lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v_opts_1930_; uint8_t v_hasTrace_1931_; 
v___x_1921_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_messages_1906_);
v___x_1922_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1922_, 0, v___y_1916_);
lean_ctor_set(v___x_1922_, 1, v___x_1921_);
lean_ctor_set(v___x_1922_, 2, v___y_1899_);
lean_ctor_set(v___x_1922_, 3, v_traceState_1909_);
lean_ctor_set_uint8(v___x_1922_, sizeof(void*)*4, v_val_1838_);
v___x_1923_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1923_, 0, v___x_1922_);
lean_ctor_set(v___x_1923_, 1, v_reportedCmdState_1920_);
lean_ctor_set(v___x_1923_, 2, v_codeQualityEntryTasks_1911_);
v___x_1924_ = lean_io_promise_resolve(v___x_1923_, v_val_1845_);
v___x_1925_ = l_Lean_Elab_InfoState_substituteLazy(v_infoState_1908_);
lean_inc(v___y_1912_);
v___x_1926_ = l_BaseIO_chainTask___redArg(v___x_1925_, v___y_1903_, v___y_1912_, v___x_1842_);
v___x_1927_ = l_Lean_inheritedTraceOptions;
v___x_1928_ = lean_st_ref_get(v___x_1927_);
v___x_1929_ = l_List_head_x21___redArg(v___x_1846_, v_scopes_1907_);
lean_dec(v_scopes_1907_);
lean_dec_ref(v___x_1846_);
v_opts_1930_ = lean_ctor_get(v___x_1929_, 1);
lean_inc_ref(v_opts_1930_);
lean_dec(v___x_1929_);
v_hasTrace_1931_ = lean_ctor_get_uint8(v_opts_1930_, sizeof(void*)*1);
if (v_hasTrace_1931_ == 0)
{
lean_dec_ref(v_opts_1930_);
lean_dec(v___x_1928_);
lean_dec_ref(v___y_1918_);
lean_dec_ref(v___y_1915_);
lean_dec(v___y_1914_);
lean_dec_ref(v_snapshotTasks_1910_);
lean_dec_ref(v_env_1905_);
lean_dec(v___y_1902_);
lean_dec_ref(v___y_1901_);
lean_dec_ref(v___y_1898_);
lean_dec(v___y_1897_);
lean_dec(v___y_1895_);
lean_dec(v___y_1894_);
lean_dec(v___y_1892_);
lean_dec_ref(v___y_1891_);
lean_dec(v_pos_1850_);
lean_dec_ref(v___f_1849_);
lean_dec_ref(v___f_1848_);
lean_dec_ref(v___f_1847_);
lean_dec(v___x_1841_);
v___y_1880_ = v___y_1900_;
v___y_1881_ = v___y_1917_;
v___y_1882_ = v___y_1919_;
v___y_1883_ = v___y_1904_;
v___y_1884_ = v___y_1912_;
v___y_1885_ = v___y_1913_;
goto v___jp_1879_;
}
else
{
lean_object* v___x_1932_; uint8_t v___x_1933_; 
v___x_1932_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2);
v___x_1933_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1928_, v_opts_1930_, v___x_1932_);
lean_dec(v___x_1928_);
if (v___x_1933_ == 0)
{
lean_dec_ref(v_opts_1930_);
lean_dec_ref(v___y_1918_);
lean_dec_ref(v___y_1915_);
lean_dec(v___y_1914_);
lean_dec_ref(v_snapshotTasks_1910_);
lean_dec_ref(v_env_1905_);
lean_dec(v___y_1902_);
lean_dec_ref(v___y_1901_);
lean_dec_ref(v___y_1898_);
lean_dec(v___y_1897_);
lean_dec(v___y_1895_);
lean_dec(v___y_1894_);
lean_dec(v___y_1892_);
lean_dec_ref(v___y_1891_);
lean_dec(v_pos_1850_);
lean_dec_ref(v___f_1849_);
lean_dec_ref(v___f_1848_);
lean_dec_ref(v___f_1847_);
lean_dec(v___x_1841_);
v___y_1880_ = v___y_1900_;
v___y_1881_ = v___y_1917_;
v___y_1882_ = v___y_1919_;
v___y_1883_ = v___y_1904_;
v___y_1884_ = v___y_1912_;
v___y_1885_ = v___y_1913_;
goto v___jp_1879_;
}
else
{
lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___f_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; 
lean_inc_n(v___y_1912_, 3);
v___x_1934_ = lean_task_map(v___f_1847_, v___y_1915_, v___y_1912_, v___x_1842_);
lean_inc_n(v___y_1917_, 3);
lean_inc_n(v___y_1902_, 2);
lean_inc_n(v___y_1914_, 2);
v___x_1935_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1935_, 0, v___y_1914_);
lean_ctor_set(v___x_1935_, 1, v___y_1902_);
lean_ctor_set(v___x_1935_, 2, v___y_1917_);
lean_ctor_set(v___x_1935_, 3, v___x_1934_);
v___x_1936_ = lean_task_map(v___f_1848_, v___y_1901_, v___y_1912_, v___x_1842_);
v___x_1937_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1937_, 0, v___y_1914_);
lean_ctor_set(v___x_1937_, 1, v___y_1902_);
lean_ctor_set(v___x_1937_, 2, v___y_1917_);
lean_ctor_set(v___x_1937_, 3, v___x_1936_);
v___x_1938_ = lean_task_map(v___f_1849_, v___y_1918_, v___y_1912_, v___x_1842_);
v___x_1939_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1939_, 0, v___y_1914_);
lean_ctor_set(v___x_1939_, 1, v___y_1902_);
lean_ctor_set(v___x_1939_, 2, v___y_1917_);
lean_ctor_set(v___x_1939_, 3, v___x_1938_);
v___x_1940_ = lean_unsigned_to_nat(3u);
v___x_1941_ = lean_mk_empty_array_with_capacity(v___x_1940_);
v___x_1942_ = lean_array_push(v___x_1941_, v___x_1935_);
v___x_1943_ = lean_array_push(v___x_1942_, v___x_1937_);
v___x_1944_ = lean_array_push(v___x_1943_, v___x_1939_);
v___x_1945_ = l_Array_append___redArg(v___x_1944_, v_snapshotTasks_1910_);
lean_inc_ref(v___y_1900_);
v___x_1946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1946_, 0, v___y_1900_);
lean_ctor_set(v___x_1946_, 1, v___x_1945_);
v___x_1947_ = lean_box_usize(v___y_1896_);
v___x_1948_ = lean_box(v___x_1842_);
v___x_1949_ = lean_box(v_val_1838_);
v___x_1950_ = lean_box(v___x_1933_);
lean_inc_ref(v___x_1946_);
lean_inc_ref(v___y_1893_);
lean_inc_ref(v_a_1839_);
v___f_1951_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___boxed), 20, 18);
lean_closure_set(v___f_1951_, 0, v_a_1839_);
lean_closure_set(v___f_1951_, 1, v_opts_1930_);
lean_closure_set(v___f_1951_, 2, v___x_1841_);
lean_closure_set(v___f_1951_, 3, v___y_1897_);
lean_closure_set(v___f_1951_, 4, v___y_1892_);
lean_closure_set(v___f_1951_, 5, v___x_1947_);
lean_closure_set(v___f_1951_, 6, v___x_1948_);
lean_closure_set(v___f_1951_, 7, v_env_1905_);
lean_closure_set(v___f_1951_, 8, v___y_1893_);
lean_closure_set(v___f_1951_, 9, v___x_1946_);
lean_closure_set(v___f_1951_, 10, v_pos_1850_);
lean_closure_set(v___f_1951_, 11, v___x_1949_);
lean_closure_set(v___f_1951_, 12, v___y_1891_);
lean_closure_set(v___f_1951_, 13, v___y_1895_);
lean_closure_set(v___f_1951_, 14, v___y_1898_);
lean_closure_set(v___f_1951_, 15, v___x_1927_);
lean_closure_set(v___f_1951_, 16, v___y_1894_);
lean_closure_set(v___f_1951_, 17, v___x_1950_);
v___x_1952_ = l_Lean_Language_SnapshotTree_waitAll(v___x_1946_);
v___x_1953_ = lean_io_bind_task(v___x_1952_, v___f_1951_, v___y_1912_, v_val_1838_);
v___y_1863_ = v___y_1900_;
v___y_1864_ = v___y_1917_;
v___y_1865_ = v___y_1919_;
v___y_1866_ = v___y_1904_;
v_snapshotTasks_1867_ = v_snapshotTasks_1910_;
v___y_1868_ = v___y_1913_;
v_traceTask_1869_ = v___x_1953_;
goto v___jp_1862_;
}
}
}
v___jp_1954_:
{
lean_object* v_env_1978_; lean_object* v_messages_1979_; lean_object* v_scopes_1980_; lean_object* v_infoState_1981_; lean_object* v_traceState_1982_; lean_object* v_snapshotTasks_1983_; lean_object* v_codeQualityEntryTasks_1984_; 
v_env_1978_ = lean_ctor_get(v___y_1968_, 0);
lean_inc_ref(v_env_1978_);
v_messages_1979_ = lean_ctor_get(v___y_1968_, 1);
lean_inc_ref(v_messages_1979_);
v_scopes_1980_ = lean_ctor_get(v___y_1968_, 2);
lean_inc(v_scopes_1980_);
v_infoState_1981_ = lean_ctor_get(v___y_1968_, 8);
lean_inc_ref(v_infoState_1981_);
v_traceState_1982_ = lean_ctor_get(v___y_1968_, 9);
lean_inc_ref(v_traceState_1982_);
v_snapshotTasks_1983_ = lean_ctor_get(v___y_1968_, 10);
lean_inc_ref(v_snapshotTasks_1983_);
v_codeQualityEntryTasks_1984_ = lean_ctor_get(v___y_1968_, 12);
lean_inc_ref(v_codeQualityEntryTasks_1984_);
v___y_1891_ = v___y_1955_;
v___y_1892_ = v___y_1956_;
v___y_1893_ = v___y_1957_;
v___y_1894_ = v___y_1958_;
v___y_1895_ = v___y_1961_;
v___y_1896_ = v___y_1960_;
v___y_1897_ = v___y_1959_;
v___y_1898_ = v___y_1962_;
v___y_1899_ = v___y_1963_;
v___y_1900_ = v___y_1964_;
v___y_1901_ = v___y_1965_;
v___y_1902_ = v___y_1966_;
v___y_1903_ = v___y_1967_;
v___y_1904_ = v___y_1968_;
v_env_1905_ = v_env_1978_;
v_messages_1906_ = v_messages_1979_;
v_scopes_1907_ = v_scopes_1980_;
v_infoState_1908_ = v_infoState_1981_;
v_traceState_1909_ = v_traceState_1982_;
v_snapshotTasks_1910_ = v_snapshotTasks_1983_;
v_codeQualityEntryTasks_1911_ = v_codeQualityEntryTasks_1984_;
v___y_1912_ = v___y_1969_;
v___y_1913_ = v___y_1970_;
v___y_1914_ = v___y_1971_;
v___y_1915_ = v___y_1972_;
v___y_1916_ = v___y_1973_;
v___y_1917_ = v___y_1974_;
v___y_1918_ = v___y_1975_;
v___y_1919_ = v___y_1976_;
v_reportedCmdState_1920_ = v_reportedCmdState_1977_;
goto v___jp_1890_;
}
v___jp_1985_:
{
lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___f_2006_; uint8_t v___x_2007_; 
v___x_2002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2002_, 0, v___y_2001_);
lean_ctor_set(v___x_2002_, 1, v_val_1844_);
lean_inc_ref(v___y_1987_);
lean_inc_n(v_pos_1850_, 2);
lean_inc(v_revCmds_1836_);
lean_inc(v_fst_1835_);
v___x_2003_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab(v_fst_1835_, v_revCmds_1836_, v_cmdState_1851_, v_pos_1850_, v___x_2002_, v___y_1987_, v_a_1839_);
v___x_2004_ = lean_box(v_val_1838_);
v___x_2005_ = lean_box(v___x_1842_);
lean_inc_ref(v_a_1839_);
lean_inc(v___y_1996_);
lean_inc_ref(v___x_1846_);
lean_inc_ref(v___x_2003_);
lean_inc_ref(v___y_1992_);
lean_inc_ref(v___y_1986_);
v___f_2006_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___boxed), 13, 11);
lean_closure_set(v___f_2006_, 0, v___y_1986_);
lean_closure_set(v___f_2006_, 1, v___y_1992_);
lean_closure_set(v___f_2006_, 2, v___x_2004_);
lean_closure_set(v___f_2006_, 3, v_val_1852_);
lean_closure_set(v___f_2006_, 4, v___x_2003_);
lean_closure_set(v___f_2006_, 5, v___x_1846_);
lean_closure_set(v___f_2006_, 6, v___y_1996_);
lean_closure_set(v___f_2006_, 7, v___x_2005_);
lean_closure_set(v___f_2006_, 8, v_a_1839_);
lean_closure_set(v___f_2006_, 9, v_pos_1850_);
lean_closure_set(v___f_2006_, 10, v___x_1853_);
v___x_2007_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_1854_, v___x_1855_);
if (v___x_2007_ == 0)
{
lean_inc_ref(v___x_2003_);
lean_inc_ref(v___y_1997_);
lean_inc(v___y_1995_);
lean_inc(v___y_1996_);
lean_inc(v___y_1993_);
lean_inc_ref(v___y_1986_);
v___y_1955_ = v___y_1986_;
v___y_1956_ = v___y_1990_;
v___y_1957_ = v___y_1992_;
v___y_1958_ = v___y_1993_;
v___y_1959_ = v___y_1996_;
v___y_1960_ = v___y_1994_;
v___y_1961_ = v___y_1995_;
v___y_1962_ = v___y_1997_;
v___y_1963_ = v___y_1995_;
v___y_1964_ = v___y_1997_;
v___y_1965_ = v___y_1998_;
v___y_1966_ = v___y_1989_;
v___y_1967_ = v___f_2006_;
v___y_1968_ = v___x_2003_;
v___y_1969_ = v___y_1996_;
v___y_1970_ = v___y_1987_;
v___y_1971_ = v___y_1988_;
v___y_1972_ = v___y_1991_;
v___y_1973_ = v___y_1986_;
v___y_1974_ = v___y_1993_;
v___y_1975_ = v___y_2000_;
v___y_1976_ = v___y_1999_;
v_reportedCmdState_1977_ = v___x_2003_;
goto v___jp_1954_;
}
else
{
uint8_t v___x_2008_; 
lean_inc(v_fst_1835_);
v___x_2008_ = l_Lean_Parser_isTerminalCommand(v_fst_1835_);
if (v___x_2008_ == 0)
{
lean_object* v_env_2009_; lean_object* v_messages_2010_; lean_object* v_scopes_2011_; lean_object* v_infoState_2012_; lean_object* v_traceState_2013_; lean_object* v_snapshotTasks_2014_; lean_object* v_codeQualityEntryTasks_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; 
v_env_2009_ = lean_ctor_get(v___x_2003_, 0);
lean_inc_ref_n(v_env_2009_, 2);
v_messages_2010_ = lean_ctor_get(v___x_2003_, 1);
lean_inc_ref(v_messages_2010_);
v_scopes_2011_ = lean_ctor_get(v___x_2003_, 2);
lean_inc(v_scopes_2011_);
v_infoState_2012_ = lean_ctor_get(v___x_2003_, 8);
lean_inc_ref(v_infoState_2012_);
v_traceState_2013_ = lean_ctor_get(v___x_2003_, 9);
lean_inc_ref(v_traceState_2013_);
v_snapshotTasks_2014_ = lean_ctor_get(v___x_2003_, 10);
lean_inc_ref(v_snapshotTasks_2014_);
v_codeQualityEntryTasks_2015_ = lean_ctor_get(v___x_2003_, 12);
lean_inc_ref(v_codeQualityEntryTasks_2015_);
v___x_2016_ = lean_mk_empty_array_with_capacity(v___y_1990_);
lean_inc_ref(v___x_2016_);
v___x_2017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2017_, 0, v___x_2016_);
lean_inc_n(v___y_1996_, 4);
v___x_2018_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2018_, 0, v___x_2017_);
lean_ctor_set(v___x_2018_, 1, v___x_2016_);
lean_ctor_set(v___x_2018_, 2, v___y_1996_);
lean_ctor_set(v___x_2018_, 3, v___y_1996_);
lean_ctor_set_usize(v___x_2018_, 4, v___y_1994_);
v___x_2019_ = l_Lean_NameSet_empty;
lean_inc_ref_n(v___x_2018_, 2);
v___x_2020_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2020_, 0, v___x_2018_);
lean_ctor_set(v___x_2020_, 1, v___x_2018_);
lean_ctor_set(v___x_2020_, 2, v___x_2019_);
v___x_2021_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
v___x_2022_ = l_Lean_Options_empty;
v___x_2023_ = lean_box(0);
v___x_2024_ = lean_mk_empty_array_with_capacity(v___y_1996_);
lean_inc_ref_n(v___x_2024_, 3);
lean_inc_n(v___x_1841_, 2);
v___x_2025_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v___x_2025_, 0, v___x_2021_);
lean_ctor_set(v___x_2025_, 1, v___x_2022_);
lean_ctor_set(v___x_2025_, 2, v___x_1841_);
lean_ctor_set(v___x_2025_, 3, v___x_2023_);
lean_ctor_set(v___x_2025_, 4, v___x_2023_);
lean_ctor_set(v___x_2025_, 5, v___x_2024_);
lean_ctor_set(v___x_2025_, 6, v___x_2024_);
lean_ctor_set(v___x_2025_, 7, v___x_2023_);
lean_ctor_set(v___x_2025_, 8, v___x_2023_);
lean_ctor_set(v___x_2025_, 9, v___x_2023_);
lean_ctor_set_uint8(v___x_2025_, sizeof(void*)*10, v_val_1838_);
lean_ctor_set_uint8(v___x_2025_, sizeof(void*)*10 + 1, v_val_1838_);
lean_ctor_set_uint8(v___x_2025_, sizeof(void*)*10 + 2, v_val_1838_);
v___x_2026_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2026_, 0, v___x_2025_);
lean_ctor_set(v___x_2026_, 1, v___x_2023_);
v___x_2027_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0);
v___x_2028_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__3));
v___x_2029_ = l_Lean_DeclNameGenerator_ofPrefix(v___x_1841_);
v___x_2030_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3);
v___x_2031_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2031_, 0, v___x_2030_);
lean_ctor_set(v___x_2031_, 1, v___x_2030_);
lean_ctor_set(v___x_2031_, 2, v___x_2018_);
lean_ctor_set_uint8(v___x_2031_, sizeof(void*)*3, v___x_1842_);
v___x_2032_ = lean_box(0);
lean_inc_ref(v___y_1992_);
v___x_2033_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_2033_, 0, v_env_2009_);
lean_ctor_set(v___x_2033_, 1, v___x_2020_);
lean_ctor_set(v___x_2033_, 2, v___x_2026_);
lean_ctor_set(v___x_2033_, 3, v___x_2019_);
lean_ctor_set(v___x_2033_, 4, v___x_2027_);
lean_ctor_set(v___x_2033_, 5, v___y_1996_);
lean_ctor_set(v___x_2033_, 6, v___x_2028_);
lean_ctor_set(v___x_2033_, 7, v___x_2029_);
lean_ctor_set(v___x_2033_, 8, v___x_2031_);
lean_ctor_set(v___x_2033_, 9, v___y_1992_);
lean_ctor_set(v___x_2033_, 10, v___x_2024_);
lean_ctor_set(v___x_2033_, 11, v___x_2032_);
lean_ctor_set(v___x_2033_, 12, v___x_2024_);
lean_inc_ref(v___y_1997_);
lean_inc(v___y_1995_);
lean_inc(v___y_1993_);
lean_inc_ref(v___y_1986_);
v___y_1891_ = v___y_1986_;
v___y_1892_ = v___y_1990_;
v___y_1893_ = v___y_1992_;
v___y_1894_ = v___y_1993_;
v___y_1895_ = v___y_1995_;
v___y_1896_ = v___y_1994_;
v___y_1897_ = v___y_1996_;
v___y_1898_ = v___y_1997_;
v___y_1899_ = v___y_1995_;
v___y_1900_ = v___y_1997_;
v___y_1901_ = v___y_1998_;
v___y_1902_ = v___y_1989_;
v___y_1903_ = v___f_2006_;
v___y_1904_ = v___x_2003_;
v_env_1905_ = v_env_2009_;
v_messages_1906_ = v_messages_2010_;
v_scopes_1907_ = v_scopes_2011_;
v_infoState_1908_ = v_infoState_2012_;
v_traceState_1909_ = v_traceState_2013_;
v_snapshotTasks_1910_ = v_snapshotTasks_2014_;
v_codeQualityEntryTasks_1911_ = v_codeQualityEntryTasks_2015_;
v___y_1912_ = v___y_1996_;
v___y_1913_ = v___y_1987_;
v___y_1914_ = v___y_1988_;
v___y_1915_ = v___y_1991_;
v___y_1916_ = v___y_1986_;
v___y_1917_ = v___y_1993_;
v___y_1918_ = v___y_2000_;
v___y_1919_ = v___y_1999_;
v_reportedCmdState_1920_ = v___x_2033_;
goto v___jp_1890_;
}
else
{
lean_inc_ref(v___x_2003_);
lean_inc_ref(v___y_1997_);
lean_inc(v___y_1995_);
lean_inc(v___y_1996_);
lean_inc(v___y_1993_);
lean_inc_ref(v___y_1986_);
v___y_1955_ = v___y_1986_;
v___y_1956_ = v___y_1990_;
v___y_1957_ = v___y_1992_;
v___y_1958_ = v___y_1993_;
v___y_1959_ = v___y_1996_;
v___y_1960_ = v___y_1994_;
v___y_1961_ = v___y_1995_;
v___y_1962_ = v___y_1997_;
v___y_1963_ = v___y_1995_;
v___y_1964_ = v___y_1997_;
v___y_1965_ = v___y_1998_;
v___y_1966_ = v___y_1989_;
v___y_1967_ = v___f_2006_;
v___y_1968_ = v___x_2003_;
v___y_1969_ = v___y_1996_;
v___y_1970_ = v___y_1987_;
v___y_1971_ = v___y_1988_;
v___y_1972_ = v___y_1991_;
v___y_1973_ = v___y_1986_;
v___y_1974_ = v___y_1993_;
v___y_1975_ = v___y_2000_;
v___y_1976_ = v___y_1999_;
v_reportedCmdState_1977_ = v___x_2003_;
goto v___jp_1954_;
}
}
}
v___jp_2034_:
{
lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; size_t v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; 
v___x_2036_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_snd_1840_);
v___x_2037_ = l_IO_CancelToken_new();
v___x_2038_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0));
lean_inc(v___x_1841_);
v___x_2039_ = l_Lean_Name_str___override(v___x_1841_, v___x_2038_);
v___x_2040_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2));
v___x_2041_ = l_Lean_Name_str___override(v___x_2039_, v___x_2040_);
v___x_2042_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4));
v___x_2043_ = l_Lean_Name_str___override(v___x_2041_, v___x_2042_);
v___x_2044_ = l_Lean_Name_str___override(v___x_2043_, v___x_2040_);
v___x_2045_ = lean_unsigned_to_nat(0u);
v___x_2046_ = l_Lean_Name_num___override(v___x_2044_, v___x_2045_);
v___x_2047_ = l_Lean_Name_str___override(v___x_2046_, v___x_2040_);
v___x_2048_ = l_Lean_Name_str___override(v___x_2047_, v___x_2042_);
v___x_2049_ = l_Lean_Name_str___override(v___x_2048_, v___x_2040_);
v___x_2050_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0));
v___x_2051_ = l_Lean_Name_str___override(v___x_2049_, v___x_2050_);
v___x_2052_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__4));
v___x_2053_ = l_Lean_Name_str___override(v___x_2051_, v___x_2052_);
v___x_2054_ = l_Lean_Name_toString(v___x_2053_, v___x_1842_);
v___x_2055_ = lean_box(0);
v___x_2056_ = lean_unsigned_to_nat(32u);
v___x_2057_ = ((size_t)5ULL);
v___x_2058_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
lean_inc_ref_n(v___x_2054_, 2);
v___x_2059_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2059_, 0, v___x_2054_);
lean_ctor_set(v___x_2059_, 1, v___x_2036_);
lean_ctor_set(v___x_2059_, 2, v___x_2055_);
lean_ctor_set(v___x_2059_, 3, v___x_2058_);
lean_ctor_set_uint8(v___x_2059_, sizeof(void*)*4, v_val_1838_);
v___x_2060_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_2061_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2061_, 0, v___x_2054_);
lean_ctor_set(v___x_2061_, 1, v___x_2060_);
lean_ctor_set(v___x_2061_, 2, v___x_2055_);
lean_ctor_set(v___x_2061_, 3, v___x_2058_);
lean_ctor_set_uint8(v___x_2061_, sizeof(void*)*4, v_val_1838_);
lean_inc(v_fst_1843_);
v___x_2062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2062_, 0, v_fst_1843_);
v___x_2063_ = l_Lean_Language_SnapshotTask_defaultReportingRange(v___x_2062_);
lean_inc_ref(v___x_2037_);
v___x_2064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2064_, 0, v___x_2037_);
v___x_2065_ = l_IO_Promise_result_x21___redArg(v_val_1844_);
lean_inc_ref(v___x_2065_);
lean_inc(v___x_2063_);
lean_inc_ref_n(v___x_2062_, 3);
v___x_2066_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2066_, 0, v___x_2062_);
lean_ctor_set(v___x_2066_, 1, v___x_2063_);
lean_ctor_set(v___x_2066_, 2, v___x_2064_);
lean_ctor_set(v___x_2066_, 3, v___x_2065_);
v___x_2067_ = l_IO_Promise_result_x21___redArg(v_val_1845_);
lean_inc_ref(v___x_2067_);
lean_inc_n(v___x_1833_, 3);
v___x_2068_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2068_, 0, v___x_2062_);
lean_ctor_set(v___x_2068_, 1, v___x_1833_);
lean_ctor_set(v___x_2068_, 2, v___x_2055_);
lean_ctor_set(v___x_2068_, 3, v___x_2067_);
v___x_2069_ = l_IO_Promise_result_x21___redArg(v_val_1852_);
lean_inc_ref(v___x_2069_);
v___x_2070_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2070_, 0, v___x_2062_);
lean_ctor_set(v___x_2070_, 1, v___x_1833_);
lean_ctor_set(v___x_2070_, 2, v___x_2055_);
lean_ctor_set(v___x_2070_, 3, v___x_2069_);
v___x_2071_ = l_IO_Promise_result_x21___redArg(v_val_1834_);
v___x_2072_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2072_, 0, v___x_2055_);
lean_ctor_set(v___x_2072_, 1, v___x_1833_);
lean_ctor_set(v___x_2072_, 2, v___x_2055_);
lean_ctor_set(v___x_2072_, 3, v___x_2071_);
lean_inc_ref(v___x_2061_);
v___x_2073_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2073_, 0, v___x_2061_);
lean_ctor_set(v___x_2073_, 1, v___x_2066_);
lean_ctor_set(v___x_2073_, 2, v___x_2068_);
lean_ctor_set(v___x_2073_, 3, v___x_2070_);
lean_ctor_set(v___x_2073_, 4, v___x_2072_);
v___x_2074_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2074_, 0, v___x_2059_);
lean_ctor_set(v___x_2074_, 1, v_fst_1843_);
lean_ctor_set(v___x_2074_, 2, v_snd_1856_);
lean_ctor_set(v___x_2074_, 3, v___x_2073_);
lean_ctor_set(v___x_2074_, 4, v___y_2035_);
v___x_2075_ = lean_io_promise_resolve(v___x_2074_, v_prom_1857_);
if (lean_obj_tag(v_old_x3f_1858_) == 0)
{
v___y_1986_ = v___x_2054_;
v___y_1987_ = v___x_2037_;
v___y_1988_ = v___x_2062_;
v___y_1989_ = v___x_2063_;
v___y_1990_ = v___x_2056_;
v___y_1991_ = v___x_2065_;
v___y_1992_ = v___x_2058_;
v___y_1993_ = v___x_2055_;
v___y_1994_ = v___x_2057_;
v___y_1995_ = v___x_2055_;
v___y_1996_ = v___x_2045_;
v___y_1997_ = v___x_2061_;
v___y_1998_ = v___x_2067_;
v___y_1999_ = v___x_2055_;
v___y_2000_ = v___x_2069_;
v___y_2001_ = v___x_2055_;
goto v___jp_1985_;
}
else
{
lean_object* v_val_2076_; lean_object* v___x_2078_; uint8_t v_isShared_2079_; uint8_t v_isSharedCheck_2087_; 
v_val_2076_ = lean_ctor_get(v_old_x3f_1858_, 0);
v_isSharedCheck_2087_ = !lean_is_exclusive(v_old_x3f_1858_);
if (v_isSharedCheck_2087_ == 0)
{
v___x_2078_ = v_old_x3f_1858_;
v_isShared_2079_ = v_isSharedCheck_2087_;
goto v_resetjp_2077_;
}
else
{
lean_inc(v_val_2076_);
lean_dec(v_old_x3f_1858_);
v___x_2078_ = lean_box(0);
v_isShared_2079_ = v_isSharedCheck_2087_;
goto v_resetjp_2077_;
}
v_resetjp_2077_:
{
lean_object* v_elabSnap_2080_; lean_object* v_stx_2081_; lean_object* v_elabSnap_2082_; lean_object* v___x_2083_; lean_object* v___x_2085_; 
v_elabSnap_2080_ = lean_ctor_get(v_val_2076_, 3);
lean_inc_ref(v_elabSnap_2080_);
v_stx_2081_ = lean_ctor_get(v_val_2076_, 1);
lean_inc(v_stx_2081_);
lean_dec(v_val_2076_);
v_elabSnap_2082_ = lean_ctor_get(v_elabSnap_2080_, 1);
lean_inc_ref(v_elabSnap_2082_);
lean_dec_ref(v_elabSnap_2080_);
v___x_2083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2083_, 0, v_stx_2081_);
lean_ctor_set(v___x_2083_, 1, v_elabSnap_2082_);
if (v_isShared_2079_ == 0)
{
lean_ctor_set(v___x_2078_, 0, v___x_2083_);
v___x_2085_ = v___x_2078_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v___x_2083_);
v___x_2085_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
v___y_1986_ = v___x_2054_;
v___y_1987_ = v___x_2037_;
v___y_1988_ = v___x_2062_;
v___y_1989_ = v___x_2063_;
v___y_1990_ = v___x_2056_;
v___y_1991_ = v___x_2065_;
v___y_1992_ = v___x_2058_;
v___y_1993_ = v___x_2055_;
v___y_1994_ = v___x_2057_;
v___y_1995_ = v___x_2055_;
v___y_1996_ = v___x_2045_;
v___y_1997_ = v___x_2061_;
v___y_1998_ = v___x_2067_;
v___y_1999_ = v___x_2055_;
v___y_2000_ = v___x_2069_;
v___y_2001_ = v___x_2085_;
goto v___jp_1985_;
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3(void){
_start:
{
lean_object* v___x_2100_; lean_object* v___x_2101_; 
v___x_2100_ = l_Lean_Language_instInhabitedDynamicSnapshot;
v___x_2101_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v___x_2100_);
return v___x_2101_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__5(void){
_start:
{
lean_object* v___x_2104_; lean_object* v___x_2105_; 
v___x_2104_ = l_Lean_Language_instInhabitedSnapshotTree_default;
v___x_2105_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v___x_2104_);
return v___x_2105_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__8(lean_object* v_fst_2106_, lean_object* v_revCmds_2107_, lean_object* v_fst_2108_, uint8_t v_val_2109_, lean_object* v_a_2110_, lean_object* v_snd_2111_, lean_object* v___x_2112_, uint8_t v___x_2113_, lean_object* v___x_2114_, lean_object* v___f_2115_, lean_object* v___f_2116_, lean_object* v___f_2117_, lean_object* v_pos_2118_, lean_object* v_cmdState_2119_, lean_object* v___x_2120_, lean_object* v_opts_2121_, lean_object* v_prom_2122_, lean_object* v_old_x3f_2123_, lean_object* v_parseCancelTk_2124_){
_start:
{
lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___y_2131_; lean_object* v___y_2132_; lean_object* v___y_2133_; lean_object* v___y_2134_; lean_object* v_snapshotTasks_2135_; lean_object* v___y_2136_; lean_object* v___y_2137_; lean_object* v___y_2138_; lean_object* v_traceTask_2139_; lean_object* v___y_2150_; lean_object* v___y_2151_; lean_object* v___y_2152_; lean_object* v___y_2153_; lean_object* v___y_2154_; lean_object* v___y_2155_; lean_object* v___y_2156_; lean_object* v___y_2157_; lean_object* v___y_2163_; lean_object* v___y_2164_; lean_object* v___y_2165_; lean_object* v___y_2166_; lean_object* v___y_2167_; lean_object* v___y_2168_; size_t v___y_2169_; lean_object* v___y_2170_; lean_object* v___y_2171_; lean_object* v___y_2172_; lean_object* v___y_2173_; lean_object* v___y_2174_; lean_object* v_env_2175_; lean_object* v_messages_2176_; lean_object* v_scopes_2177_; lean_object* v_infoState_2178_; lean_object* v_traceState_2179_; lean_object* v_snapshotTasks_2180_; lean_object* v_codeQualityEntryTasks_2181_; lean_object* v___y_2182_; lean_object* v___y_2183_; lean_object* v___y_2184_; lean_object* v___y_2185_; lean_object* v___y_2186_; lean_object* v___y_2187_; lean_object* v___y_2188_; lean_object* v___y_2189_; lean_object* v___y_2190_; lean_object* v___y_2191_; lean_object* v___y_2192_; lean_object* v___y_2193_; lean_object* v_reportedCmdState_2194_; lean_object* v___y_2229_; lean_object* v___y_2230_; lean_object* v___y_2231_; lean_object* v___y_2232_; lean_object* v___y_2233_; lean_object* v___y_2234_; size_t v___y_2235_; lean_object* v___y_2236_; lean_object* v___y_2237_; lean_object* v___y_2238_; lean_object* v___y_2239_; lean_object* v___y_2240_; lean_object* v___y_2241_; lean_object* v___y_2242_; lean_object* v___y_2243_; lean_object* v___y_2244_; lean_object* v___y_2245_; lean_object* v___y_2246_; lean_object* v___y_2247_; lean_object* v___y_2248_; lean_object* v___y_2249_; lean_object* v___y_2250_; lean_object* v___y_2251_; lean_object* v___y_2252_; lean_object* v_reportedCmdState_2253_; lean_object* v___x_2261_; lean_object* v___y_2263_; lean_object* v___y_2264_; lean_object* v___y_2265_; lean_object* v___y_2266_; lean_object* v___y_2267_; lean_object* v___y_2268_; lean_object* v___y_2269_; lean_object* v___y_2270_; lean_object* v___y_2271_; size_t v___y_2272_; lean_object* v___y_2273_; lean_object* v___y_2274_; lean_object* v___y_2275_; lean_object* v___y_2276_; lean_object* v___y_2277_; lean_object* v___y_2278_; lean_object* v___y_2279_; lean_object* v___y_2280_; lean_object* v___y_2314_; lean_object* v___y_2315_; lean_object* v___y_2316_; lean_object* v___y_2317_; lean_object* v___y_2318_; lean_object* v___y_2373_; lean_object* v___y_2374_; lean_object* v___y_2375_; lean_object* v_fst_2392_; lean_object* v_snd_2393_; uint8_t v___x_2405_; 
v___x_2126_ = lean_io_promise_new();
v___x_2127_ = lean_io_promise_new();
v___x_2128_ = lean_io_promise_new();
v___x_2129_ = lean_io_promise_new();
v___x_2261_ = l_Lean_internal_cmdlineSnapshots;
v___x_2405_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_2121_, v___x_2261_);
if (v___x_2405_ == 0)
{
lean_inc_ref(v_fst_2108_);
lean_inc(v_fst_2106_);
v_fst_2392_ = v_fst_2106_;
v_snd_2393_ = v_fst_2108_;
goto v___jp_2391_;
}
else
{
uint8_t v___x_2406_; 
lean_inc(v_fst_2106_);
v___x_2406_ = l_Lean_Parser_isTerminalCommand(v_fst_2106_);
if (v___x_2406_ == 0)
{
lean_object* v___x_2407_; lean_object* v___x_2408_; 
v___x_2407_ = lean_box(0);
v___x_2408_ = l_Lean_Parser_instInhabitedModuleParserState_default;
v_fst_2392_ = v___x_2407_;
v_snd_2393_ = v___x_2408_;
goto v___jp_2391_;
}
else
{
lean_inc_ref(v_fst_2108_);
lean_inc(v_fst_2106_);
v_fst_2392_ = v_fst_2106_;
v_snd_2393_ = v_fst_2108_;
goto v___jp_2391_;
}
}
v___jp_2130_:
{
lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; 
v___x_2140_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2140_, 0, v___y_2131_);
lean_ctor_set(v___x_2140_, 1, v___y_2138_);
lean_ctor_set(v___x_2140_, 2, v___y_2133_);
lean_ctor_set(v___x_2140_, 3, v_traceTask_2139_);
v___x_2141_ = lean_array_push(v_snapshotTasks_2135_, v___x_2140_);
v___x_2142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2142_, 0, v___y_2137_);
lean_ctor_set(v___x_2142_, 1, v___x_2141_);
v___x_2143_ = lean_io_promise_resolve(v___x_2142_, v___x_2129_);
lean_dec(v___x_2129_);
if (lean_obj_tag(v___y_2136_) == 1)
{
lean_object* v_val_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; 
v_val_2144_ = lean_ctor_get(v___y_2136_, 0);
lean_inc(v_val_2144_);
lean_dec_ref_known(v___y_2136_, 1);
v___x_2145_ = lean_box(0);
v___x_2146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2146_, 0, v_fst_2106_);
lean_ctor_set(v___x_2146_, 1, v_revCmds_2107_);
v___x_2147_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v___x_2145_, v_fst_2108_, v___y_2134_, v_val_2144_, v_val_2109_, v___y_2132_, v___x_2146_, v_a_2110_);
return v___x_2147_;
}
else
{
lean_object* v___x_2148_; 
lean_dec(v___y_2136_);
lean_dec_ref(v___y_2134_);
lean_dec_ref(v___y_2132_);
lean_dec_ref(v_fst_2108_);
lean_dec(v_revCmds_2107_);
lean_dec(v_fst_2106_);
v___x_2148_ = lean_box(0);
return v___x_2148_;
}
}
v___jp_2149_:
{
lean_object* v_snapshotTasks_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; 
v_snapshotTasks_2158_ = lean_ctor_get(v___y_2153_, 10);
lean_inc_ref(v_snapshotTasks_2158_);
v___x_2159_ = lean_mk_empty_array_with_capacity(v___y_2156_);
lean_dec(v___y_2156_);
lean_inc_ref(v___y_2155_);
v___x_2160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2160_, 0, v___y_2155_);
lean_ctor_set(v___x_2160_, 1, v___x_2159_);
v___x_2161_ = lean_task_pure(v___x_2160_);
v___y_2131_ = v___y_2150_;
v___y_2132_ = v___y_2151_;
v___y_2133_ = v___y_2152_;
v___y_2134_ = v___y_2153_;
v_snapshotTasks_2135_ = v_snapshotTasks_2158_;
v___y_2136_ = v___y_2154_;
v___y_2137_ = v___y_2155_;
v___y_2138_ = v___y_2157_;
v_traceTask_2139_ = v___x_2161_;
goto v___jp_2130_;
}
v___jp_2162_:
{
lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v_opts_2204_; uint8_t v_hasTrace_2205_; 
v___x_2195_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_messages_2176_);
v___x_2196_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2196_, 0, v___y_2193_);
lean_ctor_set(v___x_2196_, 1, v___x_2195_);
lean_ctor_set(v___x_2196_, 2, v___y_2188_);
lean_ctor_set(v___x_2196_, 3, v_traceState_2179_);
lean_ctor_set_uint8(v___x_2196_, sizeof(void*)*4, v_val_2109_);
v___x_2197_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2197_, 0, v___x_2196_);
lean_ctor_set(v___x_2197_, 1, v_reportedCmdState_2194_);
lean_ctor_set(v___x_2197_, 2, v_codeQualityEntryTasks_2181_);
v___x_2198_ = lean_io_promise_resolve(v___x_2197_, v___x_2127_);
lean_dec(v___x_2127_);
v___x_2199_ = l_Lean_Elab_InfoState_substituteLazy(v_infoState_2178_);
lean_inc(v___y_2185_);
v___x_2200_ = l_BaseIO_chainTask___redArg(v___x_2199_, v___y_2182_, v___y_2185_, v___x_2113_);
v___x_2201_ = l_Lean_inheritedTraceOptions;
v___x_2202_ = lean_st_ref_get(v___x_2201_);
v___x_2203_ = l_List_head_x21___redArg(v___x_2114_, v_scopes_2177_);
lean_dec(v_scopes_2177_);
lean_dec_ref(v___x_2114_);
v_opts_2204_ = lean_ctor_get(v___x_2203_, 1);
lean_inc_ref(v_opts_2204_);
lean_dec(v___x_2203_);
v_hasTrace_2205_ = lean_ctor_get_uint8(v_opts_2204_, sizeof(void*)*1);
if (v_hasTrace_2205_ == 0)
{
lean_dec_ref(v_opts_2204_);
lean_dec(v___x_2202_);
lean_dec(v___y_2184_);
lean_dec_ref(v___y_2183_);
lean_dec_ref(v_snapshotTasks_2180_);
lean_dec_ref(v_env_2175_);
lean_dec(v___y_2173_);
lean_dec_ref(v___y_2172_);
lean_dec_ref(v___y_2171_);
lean_dec(v___y_2170_);
lean_dec(v___y_2167_);
lean_dec(v___y_2166_);
lean_dec_ref(v___y_2165_);
lean_dec_ref(v___y_2164_);
lean_dec(v___y_2163_);
lean_dec(v_pos_2118_);
lean_dec_ref(v___f_2117_);
lean_dec_ref(v___f_2116_);
lean_dec_ref(v___f_2115_);
lean_dec(v___x_2112_);
v___y_2150_ = v___y_2187_;
v___y_2151_ = v___y_2189_;
v___y_2152_ = v___y_2190_;
v___y_2153_ = v___y_2174_;
v___y_2154_ = v___y_2191_;
v___y_2155_ = v___y_2192_;
v___y_2156_ = v___y_2185_;
v___y_2157_ = v___y_2186_;
goto v___jp_2149_;
}
else
{
lean_object* v___x_2206_; uint8_t v___x_2207_; 
v___x_2206_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2);
v___x_2207_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_2202_, v_opts_2204_, v___x_2206_);
lean_dec(v___x_2202_);
if (v___x_2207_ == 0)
{
lean_dec_ref(v_opts_2204_);
lean_dec(v___y_2184_);
lean_dec_ref(v___y_2183_);
lean_dec_ref(v_snapshotTasks_2180_);
lean_dec_ref(v_env_2175_);
lean_dec(v___y_2173_);
lean_dec_ref(v___y_2172_);
lean_dec_ref(v___y_2171_);
lean_dec(v___y_2170_);
lean_dec(v___y_2167_);
lean_dec(v___y_2166_);
lean_dec_ref(v___y_2165_);
lean_dec_ref(v___y_2164_);
lean_dec(v___y_2163_);
lean_dec(v_pos_2118_);
lean_dec_ref(v___f_2117_);
lean_dec_ref(v___f_2116_);
lean_dec_ref(v___f_2115_);
lean_dec(v___x_2112_);
v___y_2150_ = v___y_2187_;
v___y_2151_ = v___y_2189_;
v___y_2152_ = v___y_2190_;
v___y_2153_ = v___y_2174_;
v___y_2154_ = v___y_2191_;
v___y_2155_ = v___y_2192_;
v___y_2156_ = v___y_2185_;
v___y_2157_ = v___y_2186_;
goto v___jp_2149_;
}
else
{
lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___f_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; 
lean_inc_n(v___y_2185_, 3);
v___x_2208_ = lean_task_map(v___f_2115_, v___y_2172_, v___y_2185_, v___x_2113_);
lean_inc_n(v___y_2190_, 3);
lean_inc_n(v___y_2184_, 2);
lean_inc_n(v___y_2173_, 2);
v___x_2209_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2209_, 0, v___y_2173_);
lean_ctor_set(v___x_2209_, 1, v___y_2184_);
lean_ctor_set(v___x_2209_, 2, v___y_2190_);
lean_ctor_set(v___x_2209_, 3, v___x_2208_);
v___x_2210_ = lean_task_map(v___f_2116_, v___y_2171_, v___y_2185_, v___x_2113_);
v___x_2211_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2211_, 0, v___y_2173_);
lean_ctor_set(v___x_2211_, 1, v___y_2184_);
lean_ctor_set(v___x_2211_, 2, v___y_2190_);
lean_ctor_set(v___x_2211_, 3, v___x_2210_);
v___x_2212_ = lean_task_map(v___f_2117_, v___y_2183_, v___y_2185_, v___x_2113_);
v___x_2213_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2213_, 0, v___y_2173_);
lean_ctor_set(v___x_2213_, 1, v___y_2184_);
lean_ctor_set(v___x_2213_, 2, v___y_2190_);
lean_ctor_set(v___x_2213_, 3, v___x_2212_);
v___x_2214_ = lean_unsigned_to_nat(3u);
v___x_2215_ = lean_mk_empty_array_with_capacity(v___x_2214_);
v___x_2216_ = lean_array_push(v___x_2215_, v___x_2209_);
v___x_2217_ = lean_array_push(v___x_2216_, v___x_2211_);
v___x_2218_ = lean_array_push(v___x_2217_, v___x_2213_);
v___x_2219_ = l_Array_append___redArg(v___x_2218_, v_snapshotTasks_2180_);
lean_inc_ref(v___y_2192_);
v___x_2220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2220_, 0, v___y_2192_);
lean_ctor_set(v___x_2220_, 1, v___x_2219_);
v___x_2221_ = lean_box_usize(v___y_2169_);
v___x_2222_ = lean_box(v___x_2113_);
v___x_2223_ = lean_box(v_val_2109_);
v___x_2224_ = lean_box(v___x_2207_);
lean_inc_ref(v___x_2220_);
lean_inc_ref(v___y_2168_);
lean_inc_ref(v_a_2110_);
v___f_2225_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___boxed), 20, 18);
lean_closure_set(v___f_2225_, 0, v_a_2110_);
lean_closure_set(v___f_2225_, 1, v_opts_2204_);
lean_closure_set(v___f_2225_, 2, v___x_2112_);
lean_closure_set(v___f_2225_, 3, v___y_2166_);
lean_closure_set(v___f_2225_, 4, v___y_2163_);
lean_closure_set(v___f_2225_, 5, v___x_2221_);
lean_closure_set(v___f_2225_, 6, v___x_2222_);
lean_closure_set(v___f_2225_, 7, v_env_2175_);
lean_closure_set(v___f_2225_, 8, v___y_2168_);
lean_closure_set(v___f_2225_, 9, v___x_2220_);
lean_closure_set(v___f_2225_, 10, v_pos_2118_);
lean_closure_set(v___f_2225_, 11, v___x_2223_);
lean_closure_set(v___f_2225_, 12, v___y_2165_);
lean_closure_set(v___f_2225_, 13, v___y_2167_);
lean_closure_set(v___f_2225_, 14, v___y_2164_);
lean_closure_set(v___f_2225_, 15, v___x_2201_);
lean_closure_set(v___f_2225_, 16, v___y_2170_);
lean_closure_set(v___f_2225_, 17, v___x_2224_);
v___x_2226_ = l_Lean_Language_SnapshotTree_waitAll(v___x_2220_);
v___x_2227_ = lean_io_bind_task(v___x_2226_, v___f_2225_, v___y_2185_, v_val_2109_);
v___y_2131_ = v___y_2187_;
v___y_2132_ = v___y_2189_;
v___y_2133_ = v___y_2190_;
v___y_2134_ = v___y_2174_;
v_snapshotTasks_2135_ = v_snapshotTasks_2180_;
v___y_2136_ = v___y_2191_;
v___y_2137_ = v___y_2192_;
v___y_2138_ = v___y_2186_;
v_traceTask_2139_ = v___x_2227_;
goto v___jp_2130_;
}
}
}
v___jp_2228_:
{
lean_object* v_env_2254_; lean_object* v_messages_2255_; lean_object* v_scopes_2256_; lean_object* v_infoState_2257_; lean_object* v_traceState_2258_; lean_object* v_snapshotTasks_2259_; lean_object* v_codeQualityEntryTasks_2260_; 
v_env_2254_ = lean_ctor_get(v___y_2240_, 0);
lean_inc_ref(v_env_2254_);
v_messages_2255_ = lean_ctor_get(v___y_2240_, 1);
lean_inc_ref(v_messages_2255_);
v_scopes_2256_ = lean_ctor_get(v___y_2240_, 2);
lean_inc(v_scopes_2256_);
v_infoState_2257_ = lean_ctor_get(v___y_2240_, 8);
lean_inc_ref(v_infoState_2257_);
v_traceState_2258_ = lean_ctor_get(v___y_2240_, 9);
lean_inc_ref(v_traceState_2258_);
v_snapshotTasks_2259_ = lean_ctor_get(v___y_2240_, 10);
lean_inc_ref(v_snapshotTasks_2259_);
v_codeQualityEntryTasks_2260_ = lean_ctor_get(v___y_2240_, 12);
lean_inc_ref(v_codeQualityEntryTasks_2260_);
v___y_2163_ = v___y_2229_;
v___y_2164_ = v___y_2231_;
v___y_2165_ = v___y_2230_;
v___y_2166_ = v___y_2232_;
v___y_2167_ = v___y_2233_;
v___y_2168_ = v___y_2234_;
v___y_2169_ = v___y_2235_;
v___y_2170_ = v___y_2236_;
v___y_2171_ = v___y_2237_;
v___y_2172_ = v___y_2238_;
v___y_2173_ = v___y_2239_;
v___y_2174_ = v___y_2240_;
v_env_2175_ = v_env_2254_;
v_messages_2176_ = v_messages_2255_;
v_scopes_2177_ = v_scopes_2256_;
v_infoState_2178_ = v_infoState_2257_;
v_traceState_2179_ = v_traceState_2258_;
v_snapshotTasks_2180_ = v_snapshotTasks_2259_;
v_codeQualityEntryTasks_2181_ = v_codeQualityEntryTasks_2260_;
v___y_2182_ = v___y_2241_;
v___y_2183_ = v___y_2242_;
v___y_2184_ = v___y_2243_;
v___y_2185_ = v___y_2244_;
v___y_2186_ = v___y_2245_;
v___y_2187_ = v___y_2246_;
v___y_2188_ = v___y_2247_;
v___y_2189_ = v___y_2248_;
v___y_2190_ = v___y_2249_;
v___y_2191_ = v___y_2250_;
v___y_2192_ = v___y_2251_;
v___y_2193_ = v___y_2252_;
v_reportedCmdState_2194_ = v_reportedCmdState_2253_;
goto v___jp_2162_;
}
v___jp_2262_:
{
lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___f_2285_; uint8_t v___x_2286_; 
v___x_2281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2281_, 0, v___y_2280_);
lean_ctor_set(v___x_2281_, 1, v___x_2126_);
lean_inc_ref(v___y_2268_);
lean_inc_n(v_pos_2118_, 2);
lean_inc(v_revCmds_2107_);
lean_inc(v_fst_2106_);
v___x_2282_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab(v_fst_2106_, v_revCmds_2107_, v_cmdState_2119_, v_pos_2118_, v___x_2281_, v___y_2268_, v_a_2110_);
v___x_2283_ = lean_box(v_val_2109_);
v___x_2284_ = lean_box(v___x_2113_);
lean_inc_ref(v_a_2110_);
lean_inc(v___y_2267_);
lean_inc_ref(v___x_2114_);
lean_inc_ref(v___x_2282_);
lean_inc_ref(v___y_2271_);
lean_inc_ref(v___y_2266_);
v___f_2285_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___boxed), 13, 11);
lean_closure_set(v___f_2285_, 0, v___y_2266_);
lean_closure_set(v___f_2285_, 1, v___y_2271_);
lean_closure_set(v___f_2285_, 2, v___x_2283_);
lean_closure_set(v___f_2285_, 3, v___x_2128_);
lean_closure_set(v___f_2285_, 4, v___x_2282_);
lean_closure_set(v___f_2285_, 5, v___x_2114_);
lean_closure_set(v___f_2285_, 6, v___y_2267_);
lean_closure_set(v___f_2285_, 7, v___x_2284_);
lean_closure_set(v___f_2285_, 8, v_a_2110_);
lean_closure_set(v___f_2285_, 9, v_pos_2118_);
lean_closure_set(v___f_2285_, 10, v___x_2120_);
v___x_2286_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_2121_, v___x_2261_);
if (v___x_2286_ == 0)
{
lean_inc_ref(v___x_2282_);
lean_inc(v___y_2274_);
lean_inc(v___y_2269_);
lean_inc(v___y_2267_);
lean_inc_ref(v___y_2265_);
lean_inc_ref(v___y_2266_);
v___y_2229_ = v___y_2263_;
v___y_2230_ = v___y_2266_;
v___y_2231_ = v___y_2265_;
v___y_2232_ = v___y_2267_;
v___y_2233_ = v___y_2269_;
v___y_2234_ = v___y_2271_;
v___y_2235_ = v___y_2272_;
v___y_2236_ = v___y_2274_;
v___y_2237_ = v___y_2275_;
v___y_2238_ = v___y_2273_;
v___y_2239_ = v___y_2264_;
v___y_2240_ = v___x_2282_;
v___y_2241_ = v___f_2285_;
v___y_2242_ = v___y_2276_;
v___y_2243_ = v___y_2270_;
v___y_2244_ = v___y_2267_;
v___y_2245_ = v___y_2277_;
v___y_2246_ = v___y_2278_;
v___y_2247_ = v___y_2269_;
v___y_2248_ = v___y_2268_;
v___y_2249_ = v___y_2274_;
v___y_2250_ = v___y_2279_;
v___y_2251_ = v___y_2265_;
v___y_2252_ = v___y_2266_;
v_reportedCmdState_2253_ = v___x_2282_;
goto v___jp_2228_;
}
else
{
uint8_t v___x_2287_; 
lean_inc(v_fst_2106_);
v___x_2287_ = l_Lean_Parser_isTerminalCommand(v_fst_2106_);
if (v___x_2287_ == 0)
{
lean_object* v_env_2288_; lean_object* v_messages_2289_; lean_object* v_scopes_2290_; lean_object* v_infoState_2291_; lean_object* v_traceState_2292_; lean_object* v_snapshotTasks_2293_; lean_object* v_codeQualityEntryTasks_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; 
v_env_2288_ = lean_ctor_get(v___x_2282_, 0);
lean_inc_ref_n(v_env_2288_, 2);
v_messages_2289_ = lean_ctor_get(v___x_2282_, 1);
lean_inc_ref(v_messages_2289_);
v_scopes_2290_ = lean_ctor_get(v___x_2282_, 2);
lean_inc(v_scopes_2290_);
v_infoState_2291_ = lean_ctor_get(v___x_2282_, 8);
lean_inc_ref(v_infoState_2291_);
v_traceState_2292_ = lean_ctor_get(v___x_2282_, 9);
lean_inc_ref(v_traceState_2292_);
v_snapshotTasks_2293_ = lean_ctor_get(v___x_2282_, 10);
lean_inc_ref(v_snapshotTasks_2293_);
v_codeQualityEntryTasks_2294_ = lean_ctor_get(v___x_2282_, 12);
lean_inc_ref(v_codeQualityEntryTasks_2294_);
v___x_2295_ = lean_mk_empty_array_with_capacity(v___y_2263_);
lean_inc_ref(v___x_2295_);
v___x_2296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2296_, 0, v___x_2295_);
lean_inc_n(v___y_2267_, 4);
v___x_2297_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2297_, 0, v___x_2296_);
lean_ctor_set(v___x_2297_, 1, v___x_2295_);
lean_ctor_set(v___x_2297_, 2, v___y_2267_);
lean_ctor_set(v___x_2297_, 3, v___y_2267_);
lean_ctor_set_usize(v___x_2297_, 4, v___y_2272_);
v___x_2298_ = l_Lean_NameSet_empty;
lean_inc_ref_n(v___x_2297_, 2);
v___x_2299_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2299_, 0, v___x_2297_);
lean_ctor_set(v___x_2299_, 1, v___x_2297_);
lean_ctor_set(v___x_2299_, 2, v___x_2298_);
v___x_2300_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
v___x_2301_ = l_Lean_Options_empty;
v___x_2302_ = lean_box(0);
v___x_2303_ = lean_mk_empty_array_with_capacity(v___y_2267_);
lean_inc_ref_n(v___x_2303_, 3);
lean_inc_n(v___x_2112_, 2);
v___x_2304_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v___x_2304_, 0, v___x_2300_);
lean_ctor_set(v___x_2304_, 1, v___x_2301_);
lean_ctor_set(v___x_2304_, 2, v___x_2112_);
lean_ctor_set(v___x_2304_, 3, v___x_2302_);
lean_ctor_set(v___x_2304_, 4, v___x_2302_);
lean_ctor_set(v___x_2304_, 5, v___x_2303_);
lean_ctor_set(v___x_2304_, 6, v___x_2303_);
lean_ctor_set(v___x_2304_, 7, v___x_2302_);
lean_ctor_set(v___x_2304_, 8, v___x_2302_);
lean_ctor_set(v___x_2304_, 9, v___x_2302_);
lean_ctor_set_uint8(v___x_2304_, sizeof(void*)*10, v_val_2109_);
lean_ctor_set_uint8(v___x_2304_, sizeof(void*)*10 + 1, v_val_2109_);
lean_ctor_set_uint8(v___x_2304_, sizeof(void*)*10 + 2, v_val_2109_);
v___x_2305_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2305_, 0, v___x_2304_);
lean_ctor_set(v___x_2305_, 1, v___x_2302_);
v___x_2306_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0);
v___x_2307_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__3));
v___x_2308_ = l_Lean_DeclNameGenerator_ofPrefix(v___x_2112_);
v___x_2309_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3);
v___x_2310_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2310_, 0, v___x_2309_);
lean_ctor_set(v___x_2310_, 1, v___x_2309_);
lean_ctor_set(v___x_2310_, 2, v___x_2297_);
lean_ctor_set_uint8(v___x_2310_, sizeof(void*)*3, v___x_2113_);
v___x_2311_ = lean_box(0);
lean_inc_ref(v___y_2271_);
v___x_2312_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_2312_, 0, v_env_2288_);
lean_ctor_set(v___x_2312_, 1, v___x_2299_);
lean_ctor_set(v___x_2312_, 2, v___x_2305_);
lean_ctor_set(v___x_2312_, 3, v___x_2298_);
lean_ctor_set(v___x_2312_, 4, v___x_2306_);
lean_ctor_set(v___x_2312_, 5, v___y_2267_);
lean_ctor_set(v___x_2312_, 6, v___x_2307_);
lean_ctor_set(v___x_2312_, 7, v___x_2308_);
lean_ctor_set(v___x_2312_, 8, v___x_2310_);
lean_ctor_set(v___x_2312_, 9, v___y_2271_);
lean_ctor_set(v___x_2312_, 10, v___x_2303_);
lean_ctor_set(v___x_2312_, 11, v___x_2311_);
lean_ctor_set(v___x_2312_, 12, v___x_2303_);
lean_inc(v___y_2274_);
lean_inc(v___y_2269_);
lean_inc_ref(v___y_2266_);
lean_inc_ref(v___y_2265_);
v___y_2163_ = v___y_2263_;
v___y_2164_ = v___y_2265_;
v___y_2165_ = v___y_2266_;
v___y_2166_ = v___y_2267_;
v___y_2167_ = v___y_2269_;
v___y_2168_ = v___y_2271_;
v___y_2169_ = v___y_2272_;
v___y_2170_ = v___y_2274_;
v___y_2171_ = v___y_2275_;
v___y_2172_ = v___y_2273_;
v___y_2173_ = v___y_2264_;
v___y_2174_ = v___x_2282_;
v_env_2175_ = v_env_2288_;
v_messages_2176_ = v_messages_2289_;
v_scopes_2177_ = v_scopes_2290_;
v_infoState_2178_ = v_infoState_2291_;
v_traceState_2179_ = v_traceState_2292_;
v_snapshotTasks_2180_ = v_snapshotTasks_2293_;
v_codeQualityEntryTasks_2181_ = v_codeQualityEntryTasks_2294_;
v___y_2182_ = v___f_2285_;
v___y_2183_ = v___y_2276_;
v___y_2184_ = v___y_2270_;
v___y_2185_ = v___y_2267_;
v___y_2186_ = v___y_2277_;
v___y_2187_ = v___y_2278_;
v___y_2188_ = v___y_2269_;
v___y_2189_ = v___y_2268_;
v___y_2190_ = v___y_2274_;
v___y_2191_ = v___y_2279_;
v___y_2192_ = v___y_2265_;
v___y_2193_ = v___y_2266_;
v_reportedCmdState_2194_ = v___x_2312_;
goto v___jp_2162_;
}
else
{
lean_inc_ref(v___x_2282_);
lean_inc(v___y_2274_);
lean_inc(v___y_2269_);
lean_inc(v___y_2267_);
lean_inc_ref(v___y_2265_);
lean_inc_ref(v___y_2266_);
v___y_2229_ = v___y_2263_;
v___y_2230_ = v___y_2266_;
v___y_2231_ = v___y_2265_;
v___y_2232_ = v___y_2267_;
v___y_2233_ = v___y_2269_;
v___y_2234_ = v___y_2271_;
v___y_2235_ = v___y_2272_;
v___y_2236_ = v___y_2274_;
v___y_2237_ = v___y_2275_;
v___y_2238_ = v___y_2273_;
v___y_2239_ = v___y_2264_;
v___y_2240_ = v___x_2282_;
v___y_2241_ = v___f_2285_;
v___y_2242_ = v___y_2276_;
v___y_2243_ = v___y_2270_;
v___y_2244_ = v___y_2267_;
v___y_2245_ = v___y_2277_;
v___y_2246_ = v___y_2278_;
v___y_2247_ = v___y_2269_;
v___y_2248_ = v___y_2268_;
v___y_2249_ = v___y_2274_;
v___y_2250_ = v___y_2279_;
v___y_2251_ = v___y_2265_;
v___y_2252_ = v___y_2266_;
v_reportedCmdState_2253_ = v___x_2282_;
goto v___jp_2228_;
}
}
}
v___jp_2313_:
{
lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; size_t v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; 
v___x_2319_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_snd_2111_);
v___x_2320_ = l_IO_CancelToken_new();
v___x_2321_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0));
lean_inc(v___x_2112_);
v___x_2322_ = l_Lean_Name_str___override(v___x_2112_, v___x_2321_);
v___x_2323_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2));
v___x_2324_ = l_Lean_Name_str___override(v___x_2322_, v___x_2323_);
v___x_2325_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4));
v___x_2326_ = l_Lean_Name_str___override(v___x_2324_, v___x_2325_);
v___x_2327_ = l_Lean_Name_str___override(v___x_2326_, v___x_2323_);
v___x_2328_ = lean_unsigned_to_nat(0u);
v___x_2329_ = l_Lean_Name_num___override(v___x_2327_, v___x_2328_);
v___x_2330_ = l_Lean_Name_str___override(v___x_2329_, v___x_2323_);
v___x_2331_ = l_Lean_Name_str___override(v___x_2330_, v___x_2325_);
v___x_2332_ = l_Lean_Name_str___override(v___x_2331_, v___x_2323_);
v___x_2333_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0));
v___x_2334_ = l_Lean_Name_str___override(v___x_2332_, v___x_2333_);
v___x_2335_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__4));
v___x_2336_ = l_Lean_Name_str___override(v___x_2334_, v___x_2335_);
v___x_2337_ = l_Lean_Name_toString(v___x_2336_, v___x_2113_);
v___x_2338_ = lean_box(0);
v___x_2339_ = lean_unsigned_to_nat(32u);
v___x_2340_ = lean_mk_empty_array_with_capacity(v___x_2339_);
lean_dec_ref(v___x_2340_);
v___x_2341_ = ((size_t)5ULL);
v___x_2342_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
lean_inc_ref_n(v___x_2337_, 2);
v___x_2343_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2343_, 0, v___x_2337_);
lean_ctor_set(v___x_2343_, 1, v___x_2319_);
lean_ctor_set(v___x_2343_, 2, v___x_2338_);
lean_ctor_set(v___x_2343_, 3, v___x_2342_);
lean_ctor_set_uint8(v___x_2343_, sizeof(void*)*4, v_val_2109_);
v___x_2344_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_2345_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2345_, 0, v___x_2337_);
lean_ctor_set(v___x_2345_, 1, v___x_2344_);
lean_ctor_set(v___x_2345_, 2, v___x_2338_);
lean_ctor_set(v___x_2345_, 3, v___x_2342_);
lean_ctor_set_uint8(v___x_2345_, sizeof(void*)*4, v_val_2109_);
lean_inc(v___y_2316_);
v___x_2346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2346_, 0, v___y_2316_);
v___x_2347_ = l_Lean_Language_SnapshotTask_defaultReportingRange(v___x_2346_);
lean_inc_ref(v___x_2320_);
v___x_2348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2348_, 0, v___x_2320_);
v___x_2349_ = l_IO_Promise_result_x21___redArg(v___x_2126_);
lean_inc_ref(v___x_2349_);
lean_inc(v___x_2347_);
lean_inc_ref_n(v___x_2346_, 3);
v___x_2350_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2350_, 0, v___x_2346_);
lean_ctor_set(v___x_2350_, 1, v___x_2347_);
lean_ctor_set(v___x_2350_, 2, v___x_2348_);
lean_ctor_set(v___x_2350_, 3, v___x_2349_);
v___x_2351_ = l_IO_Promise_result_x21___redArg(v___x_2127_);
lean_inc_ref(v___x_2351_);
lean_inc_n(v___y_2317_, 3);
v___x_2352_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2352_, 0, v___x_2346_);
lean_ctor_set(v___x_2352_, 1, v___y_2317_);
lean_ctor_set(v___x_2352_, 2, v___x_2338_);
lean_ctor_set(v___x_2352_, 3, v___x_2351_);
v___x_2353_ = l_IO_Promise_result_x21___redArg(v___x_2128_);
lean_inc_ref(v___x_2353_);
v___x_2354_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2354_, 0, v___x_2346_);
lean_ctor_set(v___x_2354_, 1, v___y_2317_);
lean_ctor_set(v___x_2354_, 2, v___x_2338_);
lean_ctor_set(v___x_2354_, 3, v___x_2353_);
v___x_2355_ = l_IO_Promise_result_x21___redArg(v___x_2129_);
v___x_2356_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2356_, 0, v___x_2338_);
lean_ctor_set(v___x_2356_, 1, v___y_2317_);
lean_ctor_set(v___x_2356_, 2, v___x_2338_);
lean_ctor_set(v___x_2356_, 3, v___x_2355_);
lean_inc_ref(v___x_2345_);
v___x_2357_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2357_, 0, v___x_2345_);
lean_ctor_set(v___x_2357_, 1, v___x_2350_);
lean_ctor_set(v___x_2357_, 2, v___x_2352_);
lean_ctor_set(v___x_2357_, 3, v___x_2354_);
lean_ctor_set(v___x_2357_, 4, v___x_2356_);
v___x_2358_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2358_, 0, v___x_2343_);
lean_ctor_set(v___x_2358_, 1, v___y_2316_);
lean_ctor_set(v___x_2358_, 2, v___y_2315_);
lean_ctor_set(v___x_2358_, 3, v___x_2357_);
lean_ctor_set(v___x_2358_, 4, v___y_2318_);
v___x_2359_ = lean_io_promise_resolve(v___x_2358_, v_prom_2122_);
if (lean_obj_tag(v_old_x3f_2123_) == 0)
{
v___y_2263_ = v___x_2339_;
v___y_2264_ = v___x_2346_;
v___y_2265_ = v___x_2345_;
v___y_2266_ = v___x_2337_;
v___y_2267_ = v___x_2328_;
v___y_2268_ = v___x_2320_;
v___y_2269_ = v___x_2338_;
v___y_2270_ = v___x_2347_;
v___y_2271_ = v___x_2342_;
v___y_2272_ = v___x_2341_;
v___y_2273_ = v___x_2349_;
v___y_2274_ = v___x_2338_;
v___y_2275_ = v___x_2351_;
v___y_2276_ = v___x_2353_;
v___y_2277_ = v___y_2317_;
v___y_2278_ = v___x_2338_;
v___y_2279_ = v___y_2314_;
v___y_2280_ = v___x_2338_;
goto v___jp_2262_;
}
else
{
lean_object* v_val_2360_; lean_object* v___x_2362_; uint8_t v_isShared_2363_; uint8_t v_isSharedCheck_2371_; 
v_val_2360_ = lean_ctor_get(v_old_x3f_2123_, 0);
v_isSharedCheck_2371_ = !lean_is_exclusive(v_old_x3f_2123_);
if (v_isSharedCheck_2371_ == 0)
{
v___x_2362_ = v_old_x3f_2123_;
v_isShared_2363_ = v_isSharedCheck_2371_;
goto v_resetjp_2361_;
}
else
{
lean_inc(v_val_2360_);
lean_dec(v_old_x3f_2123_);
v___x_2362_ = lean_box(0);
v_isShared_2363_ = v_isSharedCheck_2371_;
goto v_resetjp_2361_;
}
v_resetjp_2361_:
{
lean_object* v_elabSnap_2364_; lean_object* v_stx_2365_; lean_object* v_elabSnap_2366_; lean_object* v___x_2367_; lean_object* v___x_2369_; 
v_elabSnap_2364_ = lean_ctor_get(v_val_2360_, 3);
lean_inc_ref(v_elabSnap_2364_);
v_stx_2365_ = lean_ctor_get(v_val_2360_, 1);
lean_inc(v_stx_2365_);
lean_dec(v_val_2360_);
v_elabSnap_2366_ = lean_ctor_get(v_elabSnap_2364_, 1);
lean_inc_ref(v_elabSnap_2366_);
lean_dec_ref(v_elabSnap_2364_);
v___x_2367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2367_, 0, v_stx_2365_);
lean_ctor_set(v___x_2367_, 1, v_elabSnap_2366_);
if (v_isShared_2363_ == 0)
{
lean_ctor_set(v___x_2362_, 0, v___x_2367_);
v___x_2369_ = v___x_2362_;
goto v_reusejp_2368_;
}
else
{
lean_object* v_reuseFailAlloc_2370_; 
v_reuseFailAlloc_2370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2370_, 0, v___x_2367_);
v___x_2369_ = v_reuseFailAlloc_2370_;
goto v_reusejp_2368_;
}
v_reusejp_2368_:
{
v___y_2263_ = v___x_2339_;
v___y_2264_ = v___x_2346_;
v___y_2265_ = v___x_2345_;
v___y_2266_ = v___x_2337_;
v___y_2267_ = v___x_2328_;
v___y_2268_ = v___x_2320_;
v___y_2269_ = v___x_2338_;
v___y_2270_ = v___x_2347_;
v___y_2271_ = v___x_2342_;
v___y_2272_ = v___x_2341_;
v___y_2273_ = v___x_2349_;
v___y_2274_ = v___x_2338_;
v___y_2275_ = v___x_2351_;
v___y_2276_ = v___x_2353_;
v___y_2277_ = v___y_2317_;
v___y_2278_ = v___x_2338_;
v___y_2279_ = v___y_2314_;
v___y_2280_ = v___x_2369_;
goto v___jp_2262_;
}
}
}
}
v___jp_2372_:
{
lean_object* v___x_2376_; uint8_t v___x_2377_; 
v___x_2376_ = l_Lean_Language_SnapshotTask_ReportingRange_ofOptionInheriting(v___y_2375_);
lean_inc(v_fst_2106_);
v___x_2377_ = l_Lean_Parser_isTerminalCommand(v_fst_2106_);
if (v___x_2377_ == 0)
{
lean_object* v___x_2378_; lean_object* v_toProcessingContext_2379_; lean_object* v_pos_2380_; lean_object* v_endPos_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; 
v___x_2378_ = lean_io_promise_new();
v_toProcessingContext_2379_ = lean_ctor_get(v_a_2110_, 0);
v_pos_2380_ = lean_ctor_get(v_fst_2108_, 0);
v_endPos_2381_ = lean_ctor_get(v_toProcessingContext_2379_, 3);
lean_inc(v___x_2378_);
v___x_2382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2382_, 0, v___x_2378_);
v___x_2383_ = lean_box(0);
lean_inc(v_endPos_2381_);
lean_inc(v_pos_2380_);
v___x_2384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2384_, 0, v_pos_2380_);
lean_ctor_set(v___x_2384_, 1, v_endPos_2381_);
v___x_2385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2385_, 0, v___x_2384_);
v___x_2386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2386_, 0, v_parseCancelTk_2124_);
v___x_2387_ = l_IO_Promise_result_x21___redArg(v___x_2378_);
lean_dec(v___x_2378_);
v___x_2388_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2388_, 0, v___x_2383_);
lean_ctor_set(v___x_2388_, 1, v___x_2385_);
lean_ctor_set(v___x_2388_, 2, v___x_2386_);
lean_ctor_set(v___x_2388_, 3, v___x_2387_);
v___x_2389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2389_, 0, v___x_2388_);
v___y_2314_ = v___x_2382_;
v___y_2315_ = v___y_2373_;
v___y_2316_ = v___y_2374_;
v___y_2317_ = v___x_2376_;
v___y_2318_ = v___x_2389_;
goto v___jp_2313_;
}
else
{
lean_object* v___x_2390_; 
lean_dec_ref(v_parseCancelTk_2124_);
v___x_2390_ = lean_box(0);
v___y_2314_ = v___x_2390_;
v___y_2315_ = v___y_2373_;
v___y_2316_ = v___y_2374_;
v___y_2317_ = v___x_2376_;
v___y_2318_ = v___x_2390_;
goto v___jp_2313_;
}
}
v___jp_2391_:
{
lean_object* v___x_2394_; 
lean_inc(v_fst_2106_);
v___x_2394_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f(v_fst_2106_);
if (lean_obj_tag(v___x_2394_) == 0)
{
lean_object* v___x_2395_; 
v___x_2395_ = lean_box(0);
v___y_2373_ = v_snd_2393_;
v___y_2374_ = v_fst_2392_;
v___y_2375_ = v___x_2395_;
goto v___jp_2372_;
}
else
{
lean_object* v_val_2396_; lean_object* v___x_2398_; uint8_t v_isShared_2399_; uint8_t v_isSharedCheck_2404_; 
v_val_2396_ = lean_ctor_get(v___x_2394_, 0);
v_isSharedCheck_2404_ = !lean_is_exclusive(v___x_2394_);
if (v_isSharedCheck_2404_ == 0)
{
v___x_2398_ = v___x_2394_;
v_isShared_2399_ = v_isSharedCheck_2404_;
goto v_resetjp_2397_;
}
else
{
lean_inc(v_val_2396_);
lean_dec(v___x_2394_);
v___x_2398_ = lean_box(0);
v_isShared_2399_ = v_isSharedCheck_2404_;
goto v_resetjp_2397_;
}
v_resetjp_2397_:
{
lean_object* v___x_2400_; lean_object* v___x_2402_; 
lean_inc(v_val_2396_);
v___x_2400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2400_, 0, v_val_2396_);
lean_ctor_set(v___x_2400_, 1, v_val_2396_);
if (v_isShared_2399_ == 0)
{
lean_ctor_set(v___x_2398_, 0, v___x_2400_);
v___x_2402_ = v___x_2398_;
goto v_reusejp_2401_;
}
else
{
lean_object* v_reuseFailAlloc_2403_; 
v_reuseFailAlloc_2403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2403_, 0, v___x_2400_);
v___x_2402_ = v_reuseFailAlloc_2403_;
goto v_reusejp_2401_;
}
v_reusejp_2401_:
{
v___y_2373_ = v_snd_2393_;
v___y_2374_ = v_fst_2392_;
v___y_2375_ = v___x_2402_;
goto v___jp_2372_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__8___boxed(lean_object** _args){
lean_object* v_fst_2409_ = _args[0];
lean_object* v_revCmds_2410_ = _args[1];
lean_object* v_fst_2411_ = _args[2];
lean_object* v_val_2412_ = _args[3];
lean_object* v_a_2413_ = _args[4];
lean_object* v_snd_2414_ = _args[5];
lean_object* v___x_2415_ = _args[6];
lean_object* v___x_2416_ = _args[7];
lean_object* v___x_2417_ = _args[8];
lean_object* v___f_2418_ = _args[9];
lean_object* v___f_2419_ = _args[10];
lean_object* v___f_2420_ = _args[11];
lean_object* v_pos_2421_ = _args[12];
lean_object* v_cmdState_2422_ = _args[13];
lean_object* v___x_2423_ = _args[14];
lean_object* v_opts_2424_ = _args[15];
lean_object* v_prom_2425_ = _args[16];
lean_object* v_old_x3f_2426_ = _args[17];
lean_object* v_parseCancelTk_2427_ = _args[18];
lean_object* v___y_2428_ = _args[19];
_start:
{
uint8_t v_val_37876__boxed_2429_; uint8_t v___x_37879__boxed_2430_; lean_object* v_res_2431_; 
v_val_37876__boxed_2429_ = lean_unbox(v_val_2412_);
v___x_37879__boxed_2430_ = lean_unbox(v___x_2416_);
v_res_2431_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__8(v_fst_2409_, v_revCmds_2410_, v_fst_2411_, v_val_37876__boxed_2429_, v_a_2413_, v_snd_2414_, v___x_2415_, v___x_37879__boxed_2430_, v___x_2417_, v___f_2418_, v___f_2419_, v___f_2420_, v_pos_2421_, v_cmdState_2422_, v___x_2423_, v_opts_2424_, v_prom_2425_, v_old_x3f_2426_, v_parseCancelTk_2427_);
lean_dec(v_prom_2425_);
lean_dec_ref(v_opts_2424_);
lean_dec_ref(v_a_2413_);
return v_res_2431_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(lean_object* v_old_x3f_2434_, lean_object* v_parserState_2435_, lean_object* v_cmdState_2436_, lean_object* v_prom_2437_, uint8_t v_sync_2438_, lean_object* v_parseCancelTk_2439_, lean_object* v_revCmds_2440_, lean_object* v_a_2441_){
_start:
{
lean_object* v_toSnapshot_2444_; lean_object* v_stx_2445_; lean_object* v_parserState_2446_; lean_object* v_elabSnap_2447_; lean_object* v_val_2448_; lean_object* v_newParserState_2449_; lean_object* v___y_2483_; lean_object* v___f_2484_; lean_object* v___f_2485_; lean_object* v___f_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___y_2490_; lean_object* v___y_2491_; lean_object* v___y_2492_; lean_object* v___y_2493_; lean_object* v___y_2494_; lean_object* v___y_2495_; lean_object* v___y_2496_; lean_object* v___y_2497_; lean_object* v___y_2498_; lean_object* v___y_2499_; uint8_t v___y_2500_; uint8_t v___y_2501_; lean_object* v___y_2502_; lean_object* v___y_2503_; lean_object* v___y_2504_; lean_object* v___y_2505_; lean_object* v___y_2506_; lean_object* v___y_2515_; lean_object* v___y_2516_; lean_object* v___y_2517_; lean_object* v___y_2518_; lean_object* v___y_2519_; lean_object* v___y_2520_; lean_object* v___y_2521_; uint8_t v___y_2522_; uint8_t v___y_2523_; lean_object* v___y_2524_; lean_object* v___y_2525_; lean_object* v___y_2526_; lean_object* v___y_2527_; lean_object* v___y_2528_; lean_object* v_fst_2529_; lean_object* v_snd_2530_; lean_object* v___y_2543_; lean_object* v___y_2544_; uint8_t v___y_2545_; lean_object* v___y_2580_; lean_object* v___y_2581_; lean_object* v___y_2582_; lean_object* v___y_2583_; lean_object* v___y_2584_; lean_object* v___y_2585_; lean_object* v___y_2586_; lean_object* v___y_2587_; lean_object* v___y_2588_; lean_object* v___y_2589_; lean_object* v___x_2616_; 
v___f_2484_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__0));
v___f_2485_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__1));
v___f_2486_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__2));
v___x_2487_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2488_ = l_Lean_Elab_instInhabitedInfoTree_default;
v___x_2616_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6));
if (lean_obj_tag(v_old_x3f_2434_) == 1)
{
lean_object* v_val_2649_; lean_object* v_nextCmdSnap_x3f_2650_; 
v_val_2649_ = lean_ctor_get(v_old_x3f_2434_, 0);
v_nextCmdSnap_x3f_2650_ = lean_ctor_get(v_val_2649_, 4);
if (lean_obj_tag(v_nextCmdSnap_x3f_2650_) == 0)
{
goto v___jp_2617_;
}
else
{
lean_object* v_toSnapshot_2651_; lean_object* v_stx_2652_; lean_object* v_parserState_2653_; lean_object* v_elabSnap_2654_; lean_object* v_val_2655_; lean_object* v___x_2656_; 
v_toSnapshot_2651_ = lean_ctor_get(v_val_2649_, 0);
v_stx_2652_ = lean_ctor_get(v_val_2649_, 1);
v_parserState_2653_ = lean_ctor_get(v_val_2649_, 2);
v_elabSnap_2654_ = lean_ctor_get(v_val_2649_, 3);
v_val_2655_ = lean_ctor_get(v_nextCmdSnap_x3f_2650_, 0);
lean_inc(v_val_2655_);
v___x_2656_ = l_Lean_Language_SnapshotTask_get_x3f___redArg(v_val_2655_);
if (lean_obj_tag(v___x_2656_) == 1)
{
lean_object* v_val_2657_; lean_object* v_nextCmdSnap_x3f_2658_; 
v_val_2657_ = lean_ctor_get(v___x_2656_, 0);
lean_inc(v_val_2657_);
lean_dec_ref_known(v___x_2656_, 1);
v_nextCmdSnap_x3f_2658_ = lean_ctor_get(v_val_2657_, 4);
lean_inc(v_nextCmdSnap_x3f_2658_);
lean_dec(v_val_2657_);
if (lean_obj_tag(v_nextCmdSnap_x3f_2658_) == 0)
{
goto v___jp_2617_;
}
else
{
lean_object* v_val_2659_; lean_object* v___x_2660_; 
v_val_2659_ = lean_ctor_get(v_nextCmdSnap_x3f_2658_, 0);
lean_inc(v_val_2659_);
lean_dec_ref_known(v_nextCmdSnap_x3f_2658_, 1);
v___x_2660_ = l_Lean_Language_SnapshotTask_get_x3f___redArg(v_val_2659_);
if (lean_obj_tag(v___x_2660_) == 1)
{
lean_object* v_val_2661_; lean_object* v_parserState_2662_; lean_object* v_pos_2663_; uint8_t v___x_2664_; 
v_val_2661_ = lean_ctor_get(v___x_2660_, 0);
lean_inc(v_val_2661_);
lean_dec_ref_known(v___x_2660_, 1);
v_parserState_2662_ = lean_ctor_get(v_val_2661_, 2);
lean_inc_ref(v_parserState_2662_);
lean_dec(v_val_2661_);
v_pos_2663_ = lean_ctor_get(v_parserState_2662_, 0);
lean_inc(v_pos_2663_);
lean_dec_ref(v_parserState_2662_);
v___x_2664_ = l_Lean_Language_Lean_isBeforeEditPos(v_pos_2663_, v_a_2441_);
lean_dec(v_pos_2663_);
if (v___x_2664_ == 0)
{
goto v___jp_2617_;
}
else
{
lean_inc(v_val_2655_);
lean_inc_ref(v_elabSnap_2654_);
lean_inc_ref_n(v_parserState_2653_, 2);
lean_inc(v_stx_2652_);
lean_inc_ref(v_toSnapshot_2651_);
lean_dec_ref_known(v_old_x3f_2434_, 1);
lean_dec_ref(v_parseCancelTk_2439_);
lean_dec_ref(v_cmdState_2436_);
lean_dec_ref(v_parserState_2435_);
v_toSnapshot_2444_ = v_toSnapshot_2651_;
v_stx_2445_ = v_stx_2652_;
v_parserState_2446_ = v_parserState_2653_;
v_elabSnap_2447_ = v_elabSnap_2654_;
v_val_2448_ = v_val_2655_;
v_newParserState_2449_ = v_parserState_2653_;
goto v___jp_2443_;
}
}
else
{
lean_dec(v___x_2660_);
goto v___jp_2617_;
}
}
}
else
{
lean_dec(v___x_2656_);
goto v___jp_2617_;
}
}
}
else
{
goto v___jp_2617_;
}
v___jp_2443_:
{
lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v_resultSnap_2452_; lean_object* v_task_2453_; lean_object* v___x_2455_; uint8_t v_isShared_2456_; uint8_t v_isSharedCheck_2476_; 
v___x_2450_ = lean_io_promise_new();
v___x_2451_ = l_IO_CancelToken_new();
v_resultSnap_2452_ = lean_ctor_get(v_elabSnap_2447_, 2);
lean_inc_ref(v_resultSnap_2452_);
v_task_2453_ = lean_ctor_get(v_resultSnap_2452_, 3);
v_isSharedCheck_2476_ = !lean_is_exclusive(v_resultSnap_2452_);
if (v_isSharedCheck_2476_ == 0)
{
lean_object* v_unused_2477_; lean_object* v_unused_2478_; lean_object* v_unused_2479_; 
v_unused_2477_ = lean_ctor_get(v_resultSnap_2452_, 2);
lean_dec(v_unused_2477_);
v_unused_2478_ = lean_ctor_get(v_resultSnap_2452_, 1);
lean_dec(v_unused_2478_);
v_unused_2479_ = lean_ctor_get(v_resultSnap_2452_, 0);
lean_dec(v_unused_2479_);
v___x_2455_ = v_resultSnap_2452_;
v_isShared_2456_ = v_isSharedCheck_2476_;
goto v_resetjp_2454_;
}
else
{
lean_inc(v_task_2453_);
lean_dec(v_resultSnap_2452_);
v___x_2455_ = lean_box(0);
v_isShared_2456_ = v_isSharedCheck_2476_;
goto v_resetjp_2454_;
}
v_resetjp_2454_:
{
lean_object* v___x_2457_; lean_object* v___f_2458_; lean_object* v___x_2459_; uint8_t v___x_2460_; lean_object* v___x_2461_; lean_object* v_toProcessingContext_2462_; lean_object* v_pos_2463_; lean_object* v_endPos_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2471_; 
v___x_2457_ = lean_box(v_sync_2438_);
lean_inc_ref(v_a_2441_);
lean_inc_ref(v___x_2451_);
lean_inc(v___x_2450_);
lean_inc_ref(v_newParserState_2449_);
lean_inc(v_stx_2445_);
v___f_2458_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__1___boxed), 10, 8);
lean_closure_set(v___f_2458_, 0, v_val_2448_);
lean_closure_set(v___f_2458_, 1, v_stx_2445_);
lean_closure_set(v___f_2458_, 2, v_revCmds_2440_);
lean_closure_set(v___f_2458_, 3, v_newParserState_2449_);
lean_closure_set(v___f_2458_, 4, v___x_2450_);
lean_closure_set(v___f_2458_, 5, v___x_2457_);
lean_closure_set(v___f_2458_, 6, v___x_2451_);
lean_closure_set(v___f_2458_, 7, v_a_2441_);
v___x_2459_ = lean_unsigned_to_nat(0u);
v___x_2460_ = 1;
v___x_2461_ = l_BaseIO_chainTask___redArg(v_task_2453_, v___f_2458_, v___x_2459_, v___x_2460_);
v_toProcessingContext_2462_ = lean_ctor_get(v_a_2441_, 0);
v_pos_2463_ = lean_ctor_get(v_newParserState_2449_, 0);
lean_inc(v_pos_2463_);
lean_dec_ref(v_newParserState_2449_);
v_endPos_2464_ = lean_ctor_get(v_toProcessingContext_2462_, 3);
v___x_2465_ = lean_box(0);
lean_inc(v_endPos_2464_);
v___x_2466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2466_, 0, v_pos_2463_);
lean_ctor_set(v___x_2466_, 1, v_endPos_2464_);
v___x_2467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2467_, 0, v___x_2466_);
v___x_2468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2468_, 0, v___x_2451_);
v___x_2469_ = l_IO_Promise_result_x21___redArg(v___x_2450_);
lean_dec(v___x_2450_);
if (v_isShared_2456_ == 0)
{
lean_ctor_set(v___x_2455_, 3, v___x_2469_);
lean_ctor_set(v___x_2455_, 2, v___x_2468_);
lean_ctor_set(v___x_2455_, 1, v___x_2467_);
lean_ctor_set(v___x_2455_, 0, v___x_2465_);
v___x_2471_ = v___x_2455_;
goto v_reusejp_2470_;
}
else
{
lean_object* v_reuseFailAlloc_2475_; 
v_reuseFailAlloc_2475_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2475_, 0, v___x_2465_);
lean_ctor_set(v_reuseFailAlloc_2475_, 1, v___x_2467_);
lean_ctor_set(v_reuseFailAlloc_2475_, 2, v___x_2468_);
lean_ctor_set(v_reuseFailAlloc_2475_, 3, v___x_2469_);
v___x_2471_ = v_reuseFailAlloc_2475_;
goto v_reusejp_2470_;
}
v_reusejp_2470_:
{
lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; 
v___x_2472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2472_, 0, v___x_2471_);
v___x_2473_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2473_, 0, v_toSnapshot_2444_);
lean_ctor_set(v___x_2473_, 1, v_stx_2445_);
lean_ctor_set(v___x_2473_, 2, v_parserState_2446_);
lean_ctor_set(v___x_2473_, 3, v_elabSnap_2447_);
lean_ctor_set(v___x_2473_, 4, v___x_2472_);
v___x_2474_ = lean_io_promise_resolve(v___x_2473_, v_prom_2437_);
lean_dec(v_prom_2437_);
return v___x_2474_;
}
}
}
v___jp_2480_:
{
lean_object* v___x_2481_; 
v___x_2481_ = lean_box(0);
return v___x_2481_;
}
v___jp_2482_:
{
goto v___jp_2480_;
}
v___jp_2489_:
{
lean_object* v___x_2507_; uint8_t v___x_2508_; 
v___x_2507_ = l_Lean_Language_SnapshotTask_ReportingRange_ofOptionInheriting(v___y_2506_);
v___x_2508_ = l_Lean_Parser_isTerminalCommand(v___y_2495_);
if (v___x_2508_ == 0)
{
lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; 
v___x_2509_ = lean_io_promise_new();
v___x_2510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2510_, 0, v___x_2509_);
v___x_2511_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5(v___x_2507_, v___y_2498_, v___y_2502_, v_revCmds_2440_, v___y_2499_, v___y_2501_, v_a_2441_, v___y_2494_, v___y_2490_, v___y_2500_, v___y_2497_, v___y_2491_, v___y_2504_, v___x_2487_, v___f_2486_, v___f_2485_, v___f_2484_, v___y_2505_, v_cmdState_2436_, v___y_2496_, v___x_2488_, v___y_2493_, v___y_2503_, v___y_2492_, v_prom_2437_, v_old_x3f_2434_, v_parseCancelTk_2439_, v___x_2510_);
lean_dec(v_prom_2437_);
lean_dec_ref(v___y_2493_);
lean_dec(v___y_2504_);
lean_dec(v___y_2498_);
v___y_2483_ = v___x_2511_;
goto v___jp_2482_;
}
else
{
lean_object* v___x_2512_; lean_object* v___x_2513_; 
v___x_2512_ = lean_box(0);
v___x_2513_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5(v___x_2507_, v___y_2498_, v___y_2502_, v_revCmds_2440_, v___y_2499_, v___y_2501_, v_a_2441_, v___y_2494_, v___y_2490_, v___y_2500_, v___y_2497_, v___y_2491_, v___y_2504_, v___x_2487_, v___f_2486_, v___f_2485_, v___f_2484_, v___y_2505_, v_cmdState_2436_, v___y_2496_, v___x_2488_, v___y_2493_, v___y_2503_, v___y_2492_, v_prom_2437_, v_old_x3f_2434_, v_parseCancelTk_2439_, v___x_2512_);
lean_dec(v_prom_2437_);
lean_dec_ref(v___y_2493_);
lean_dec(v___y_2504_);
lean_dec(v___y_2498_);
v___y_2483_ = v___x_2513_;
goto v___jp_2482_;
}
}
v___jp_2514_:
{
lean_object* v___x_2531_; 
lean_inc(v___y_2528_);
v___x_2531_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f(v___y_2528_);
if (lean_obj_tag(v___x_2531_) == 0)
{
lean_object* v___x_2532_; 
v___x_2532_ = lean_box(0);
v___y_2490_ = v___y_2515_;
v___y_2491_ = v___y_2516_;
v___y_2492_ = v_snd_2530_;
v___y_2493_ = v___y_2517_;
v___y_2494_ = v___y_2518_;
v___y_2495_ = v___y_2528_;
v___y_2496_ = v___y_2519_;
v___y_2497_ = v_fst_2529_;
v___y_2498_ = v___y_2520_;
v___y_2499_ = v___y_2521_;
v___y_2500_ = v___y_2522_;
v___y_2501_ = v___y_2523_;
v___y_2502_ = v___y_2524_;
v___y_2503_ = v___y_2526_;
v___y_2504_ = v___y_2527_;
v___y_2505_ = v___y_2525_;
v___y_2506_ = v___x_2532_;
goto v___jp_2489_;
}
else
{
lean_object* v_val_2533_; lean_object* v___x_2535_; uint8_t v_isShared_2536_; uint8_t v_isSharedCheck_2541_; 
v_val_2533_ = lean_ctor_get(v___x_2531_, 0);
v_isSharedCheck_2541_ = !lean_is_exclusive(v___x_2531_);
if (v_isSharedCheck_2541_ == 0)
{
v___x_2535_ = v___x_2531_;
v_isShared_2536_ = v_isSharedCheck_2541_;
goto v_resetjp_2534_;
}
else
{
lean_inc(v_val_2533_);
lean_dec(v___x_2531_);
v___x_2535_ = lean_box(0);
v_isShared_2536_ = v_isSharedCheck_2541_;
goto v_resetjp_2534_;
}
v_resetjp_2534_:
{
lean_object* v___x_2537_; lean_object* v___x_2539_; 
lean_inc(v_val_2533_);
v___x_2537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2537_, 0, v_val_2533_);
lean_ctor_set(v___x_2537_, 1, v_val_2533_);
if (v_isShared_2536_ == 0)
{
lean_ctor_set(v___x_2535_, 0, v___x_2537_);
v___x_2539_ = v___x_2535_;
goto v_reusejp_2538_;
}
else
{
lean_object* v_reuseFailAlloc_2540_; 
v_reuseFailAlloc_2540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2540_, 0, v___x_2537_);
v___x_2539_ = v_reuseFailAlloc_2540_;
goto v_reusejp_2538_;
}
v_reusejp_2538_:
{
v___y_2490_ = v___y_2515_;
v___y_2491_ = v___y_2516_;
v___y_2492_ = v_snd_2530_;
v___y_2493_ = v___y_2517_;
v___y_2494_ = v___y_2518_;
v___y_2495_ = v___y_2528_;
v___y_2496_ = v___y_2519_;
v___y_2497_ = v_fst_2529_;
v___y_2498_ = v___y_2520_;
v___y_2499_ = v___y_2521_;
v___y_2500_ = v___y_2522_;
v___y_2501_ = v___y_2523_;
v___y_2502_ = v___y_2524_;
v___y_2503_ = v___y_2526_;
v___y_2504_ = v___y_2527_;
v___y_2505_ = v___y_2525_;
v___y_2506_ = v___x_2539_;
goto v___jp_2489_;
}
}
}
}
v___jp_2542_:
{
lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; uint8_t v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; 
v___x_2546_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0));
v___x_2547_ = l_Lean_Name_str___override(v___y_2544_, v___x_2546_);
v___x_2548_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2));
v___x_2549_ = l_Lean_Name_str___override(v___x_2547_, v___x_2548_);
v___x_2550_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4));
v___x_2551_ = l_Lean_Name_str___override(v___x_2549_, v___x_2550_);
v___x_2552_ = l_Lean_Name_str___override(v___x_2551_, v___x_2548_);
v___x_2553_ = lean_unsigned_to_nat(0u);
v___x_2554_ = l_Lean_Name_num___override(v___x_2552_, v___x_2553_);
v___x_2555_ = l_Lean_Name_str___override(v___x_2554_, v___x_2548_);
v___x_2556_ = l_Lean_Name_str___override(v___x_2555_, v___x_2550_);
v___x_2557_ = l_Lean_Name_str___override(v___x_2556_, v___x_2548_);
v___x_2558_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0));
v___x_2559_ = l_Lean_Name_str___override(v___x_2557_, v___x_2558_);
v___x_2560_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__4));
v___x_2561_ = l_Lean_Name_str___override(v___x_2559_, v___x_2560_);
v___x_2562_ = l_Lean_Name_toString(v___x_2561_, v___y_2545_);
v___x_2563_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_2564_ = lean_box(0);
v___x_2565_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_2566_ = 0;
v___x_2567_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2567_, 0, v___x_2562_);
lean_ctor_set(v___x_2567_, 1, v___x_2563_);
lean_ctor_set(v___x_2567_, 2, v___x_2564_);
lean_ctor_set(v___x_2567_, 3, v___x_2565_);
lean_ctor_set_uint8(v___x_2567_, sizeof(void*)*4, v___x_2566_);
v___x_2568_ = lean_box(0);
v___x_2569_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3);
v___x_2570_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4));
lean_inc_ref_n(v___x_2567_, 3);
v___x_2571_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2571_, 0, v___x_2567_);
lean_ctor_set(v___x_2571_, 1, v_cmdState_2436_);
lean_ctor_set(v___x_2571_, 2, v___x_2570_);
v___x_2572_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_2564_, v___x_2571_);
v___x_2573_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_2564_, v___x_2567_);
v___x_2574_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__5, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__5_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__5);
v___x_2575_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2575_, 0, v___x_2567_);
lean_ctor_set(v___x_2575_, 1, v___x_2569_);
lean_ctor_set(v___x_2575_, 2, v___x_2572_);
lean_ctor_set(v___x_2575_, 3, v___x_2573_);
lean_ctor_set(v___x_2575_, 4, v___x_2574_);
v___x_2576_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2576_, 0, v___x_2567_);
lean_ctor_set(v___x_2576_, 1, v___x_2568_);
lean_ctor_set(v___x_2576_, 2, v___y_2543_);
lean_ctor_set(v___x_2576_, 3, v___x_2575_);
lean_ctor_set(v___x_2576_, 4, v___x_2564_);
v___x_2577_ = lean_io_promise_resolve(v___x_2576_, v_prom_2437_);
lean_dec(v_prom_2437_);
v___x_2578_ = lean_box(0);
return v___x_2578_;
}
v___jp_2579_:
{
uint8_t v___x_2590_; uint8_t v___x_2591_; 
v___x_2590_ = l_IO_CancelToken_isSet(v_parseCancelTk_2439_);
v___x_2591_ = 1;
if (v___x_2590_ == 0)
{
lean_dec(v___y_2586_);
if (v_sync_2438_ == 0)
{
lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; uint8_t v___x_2597_; 
v___x_2592_ = lean_io_promise_new();
v___x_2593_ = lean_io_promise_new();
v___x_2594_ = lean_io_promise_new();
v___x_2595_ = lean_io_promise_new();
v___x_2596_ = l_Lean_internal_cmdlineSnapshots;
v___x_2597_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v___y_2588_, v___x_2596_);
lean_dec_ref(v___y_2588_);
if (v___x_2597_ == 0)
{
lean_inc(v___y_2589_);
v___y_2515_ = v___y_2581_;
v___y_2516_ = v___x_2592_;
v___y_2517_ = v___y_2582_;
v___y_2518_ = v___y_2583_;
v___y_2519_ = v___x_2594_;
v___y_2520_ = v___x_2595_;
v___y_2521_ = v___y_2580_;
v___y_2522_ = v___x_2591_;
v___y_2523_ = v___x_2590_;
v___y_2524_ = v___y_2584_;
v___y_2525_ = v___y_2585_;
v___y_2526_ = v___x_2596_;
v___y_2527_ = v___x_2593_;
v___y_2528_ = v___y_2589_;
v_fst_2529_ = v___y_2589_;
v_snd_2530_ = v___y_2587_;
goto v___jp_2514_;
}
else
{
uint8_t v___x_2598_; 
lean_inc(v___y_2589_);
v___x_2598_ = l_Lean_Parser_isTerminalCommand(v___y_2589_);
if (v___x_2598_ == 0)
{
lean_object* v___x_2599_; lean_object* v___x_2600_; 
lean_dec_ref(v___y_2587_);
v___x_2599_ = lean_box(0);
v___x_2600_ = l_Lean_Parser_instInhabitedModuleParserState_default;
v___y_2515_ = v___y_2581_;
v___y_2516_ = v___x_2592_;
v___y_2517_ = v___y_2582_;
v___y_2518_ = v___y_2583_;
v___y_2519_ = v___x_2594_;
v___y_2520_ = v___x_2595_;
v___y_2521_ = v___y_2580_;
v___y_2522_ = v___x_2591_;
v___y_2523_ = v___x_2590_;
v___y_2524_ = v___y_2584_;
v___y_2525_ = v___y_2585_;
v___y_2526_ = v___x_2596_;
v___y_2527_ = v___x_2593_;
v___y_2528_ = v___y_2589_;
v_fst_2529_ = v___x_2599_;
v_snd_2530_ = v___x_2600_;
goto v___jp_2514_;
}
else
{
lean_inc(v___y_2589_);
v___y_2515_ = v___y_2581_;
v___y_2516_ = v___x_2592_;
v___y_2517_ = v___y_2582_;
v___y_2518_ = v___y_2583_;
v___y_2519_ = v___x_2594_;
v___y_2520_ = v___x_2595_;
v___y_2521_ = v___y_2580_;
v___y_2522_ = v___x_2591_;
v___y_2523_ = v___x_2590_;
v___y_2524_ = v___y_2584_;
v___y_2525_ = v___y_2585_;
v___y_2526_ = v___x_2596_;
v___y_2527_ = v___x_2593_;
v___y_2528_ = v___y_2589_;
v_fst_2529_ = v___y_2589_;
v_snd_2530_ = v___y_2587_;
goto v___jp_2514_;
}
}
}
else
{
lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___f_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; 
lean_dec(v___y_2589_);
lean_dec_ref(v___y_2588_);
lean_dec_ref(v___y_2587_);
v___x_2601_ = lean_box(v___x_2590_);
v___x_2602_ = lean_box(v___x_2591_);
lean_inc_ref(v_a_2441_);
v___f_2603_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__8___boxed), 20, 19);
lean_closure_set(v___f_2603_, 0, v___y_2584_);
lean_closure_set(v___f_2603_, 1, v_revCmds_2440_);
lean_closure_set(v___f_2603_, 2, v___y_2580_);
lean_closure_set(v___f_2603_, 3, v___x_2601_);
lean_closure_set(v___f_2603_, 4, v_a_2441_);
lean_closure_set(v___f_2603_, 5, v___y_2583_);
lean_closure_set(v___f_2603_, 6, v___y_2581_);
lean_closure_set(v___f_2603_, 7, v___x_2602_);
lean_closure_set(v___f_2603_, 8, v___x_2487_);
lean_closure_set(v___f_2603_, 9, v___f_2486_);
lean_closure_set(v___f_2603_, 10, v___f_2485_);
lean_closure_set(v___f_2603_, 11, v___f_2484_);
lean_closure_set(v___f_2603_, 12, v___y_2585_);
lean_closure_set(v___f_2603_, 13, v_cmdState_2436_);
lean_closure_set(v___f_2603_, 14, v___x_2488_);
lean_closure_set(v___f_2603_, 15, v___y_2582_);
lean_closure_set(v___f_2603_, 16, v_prom_2437_);
lean_closure_set(v___f_2603_, 17, v_old_x3f_2434_);
lean_closure_set(v___f_2603_, 18, v_parseCancelTk_2439_);
v___x_2604_ = lean_unsigned_to_nat(0u);
v___x_2605_ = lean_io_as_task(v___f_2603_, v___x_2604_);
lean_dec_ref(v___x_2605_);
goto v___jp_2480_;
}
}
else
{
lean_dec(v___y_2589_);
lean_dec_ref(v___y_2588_);
lean_dec(v___y_2585_);
lean_dec(v___y_2584_);
lean_dec_ref(v___y_2583_);
lean_dec_ref(v___y_2582_);
lean_dec(v___y_2581_);
lean_dec_ref(v___y_2580_);
lean_dec(v_revCmds_2440_);
lean_dec_ref(v_parseCancelTk_2439_);
if (lean_obj_tag(v_old_x3f_2434_) == 1)
{
lean_object* v_val_2606_; lean_object* v___x_2607_; lean_object* v_children_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; uint8_t v___x_2611_; 
v_val_2606_ = lean_ctor_get(v_old_x3f_2434_, 0);
lean_inc(v_val_2606_);
lean_dec_ref_known(v_old_x3f_2434_, 1);
v___x_2607_ = l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__5(v_val_2606_);
v_children_2608_ = lean_ctor_get(v___x_2607_, 1);
lean_inc_ref(v_children_2608_);
lean_dec_ref(v___x_2607_);
v___x_2609_ = lean_unsigned_to_nat(0u);
v___x_2610_ = lean_array_get_size(v_children_2608_);
v___x_2611_ = lean_nat_dec_lt(v___x_2609_, v___x_2610_);
if (v___x_2611_ == 0)
{
lean_dec_ref(v_children_2608_);
v___y_2543_ = v___y_2587_;
v___y_2544_ = v___y_2586_;
v___y_2545_ = v___x_2591_;
goto v___jp_2542_;
}
else
{
lean_object* v___x_2612_; size_t v___x_2613_; size_t v___x_2614_; lean_object* v___x_2615_; 
v___x_2612_ = lean_box(0);
v___x_2613_ = ((size_t)0ULL);
v___x_2614_ = lean_usize_of_nat(v___x_2610_);
v___x_2615_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg(v_children_2608_, v___x_2613_, v___x_2614_, v___x_2612_);
lean_dec_ref(v_children_2608_);
v___y_2543_ = v___y_2587_;
v___y_2544_ = v___y_2586_;
v___y_2545_ = v___x_2591_;
goto v___jp_2542_;
}
}
else
{
lean_dec(v_old_x3f_2434_);
v___y_2543_ = v___y_2587_;
v___y_2544_ = v___y_2586_;
v___y_2545_ = v___x_2591_;
goto v___jp_2542_;
}
}
}
v___jp_2617_:
{
lean_object* v_env_2618_; lean_object* v_scopes_2619_; lean_object* v___x_2620_; lean_object* v_opts_2621_; lean_object* v_currNamespace_2622_; lean_object* v_openDecls_2623_; lean_object* v___x_2624_; lean_object* v___f_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v_snd_2629_; 
v_env_2618_ = lean_ctor_get(v_cmdState_2436_, 0);
v_scopes_2619_ = lean_ctor_get(v_cmdState_2436_, 2);
v___x_2620_ = l_List_head_x21___redArg(v___x_2487_, v_scopes_2619_);
v_opts_2621_ = lean_ctor_get(v___x_2620_, 1);
lean_inc_ref_n(v_opts_2621_, 2);
v_currNamespace_2622_ = lean_ctor_get(v___x_2620_, 2);
lean_inc(v_currNamespace_2622_);
v_openDecls_2623_ = lean_ctor_get(v___x_2620_, 3);
lean_inc(v_openDecls_2623_);
lean_dec(v___x_2620_);
lean_inc_ref(v_env_2618_);
v___x_2624_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2624_, 0, v_env_2618_);
lean_ctor_set(v___x_2624_, 1, v_opts_2621_);
lean_ctor_set(v___x_2624_, 2, v_currNamespace_2622_);
lean_ctor_set(v___x_2624_, 3, v_openDecls_2623_);
lean_inc_ref(v_parserState_2435_);
lean_inc_ref(v_a_2441_);
v___f_2625_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__2___boxed), 4, 3);
lean_closure_set(v___f_2625_, 0, v_a_2441_);
lean_closure_set(v___f_2625_, 1, v___x_2624_);
lean_closure_set(v___f_2625_, 2, v_parserState_2435_);
v___x_2626_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__7));
v___x_2627_ = lean_box(0);
v___x_2628_ = lean_profileit(v___x_2626_, v_opts_2621_, v___f_2625_, v___x_2627_);
v_snd_2629_ = lean_ctor_get(v___x_2628_, 1);
lean_inc(v_snd_2629_);
if (lean_obj_tag(v_old_x3f_2434_) == 1)
{
lean_object* v_val_2630_; lean_object* v_fst_2631_; lean_object* v_fst_2632_; lean_object* v_snd_2633_; lean_object* v_pos_2634_; lean_object* v_toSnapshot_2635_; lean_object* v_stx_2636_; lean_object* v_parserState_2637_; lean_object* v_elabSnap_2638_; lean_object* v_nextCmdSnap_x3f_2639_; uint8_t v___x_2640_; 
v_val_2630_ = lean_ctor_get(v_old_x3f_2434_, 0);
v_fst_2631_ = lean_ctor_get(v___x_2628_, 0);
lean_inc_n(v_fst_2631_, 2);
lean_dec(v___x_2628_);
v_fst_2632_ = lean_ctor_get(v_snd_2629_, 0);
lean_inc(v_fst_2632_);
v_snd_2633_ = lean_ctor_get(v_snd_2629_, 1);
lean_inc(v_snd_2633_);
lean_dec(v_snd_2629_);
v_pos_2634_ = lean_ctor_get(v_parserState_2435_, 0);
lean_inc(v_pos_2634_);
lean_dec_ref(v_parserState_2435_);
v_toSnapshot_2635_ = lean_ctor_get(v_val_2630_, 0);
v_stx_2636_ = lean_ctor_get(v_val_2630_, 1);
v_parserState_2637_ = lean_ctor_get(v_val_2630_, 2);
v_elabSnap_2638_ = lean_ctor_get(v_val_2630_, 3);
v_nextCmdSnap_x3f_2639_ = lean_ctor_get(v_val_2630_, 4);
lean_inc(v_stx_2636_);
v___x_2640_ = l_Lean_Syntax_eqWithInfo(v_fst_2631_, v_stx_2636_);
if (v___x_2640_ == 0)
{
if (lean_obj_tag(v_nextCmdSnap_x3f_2639_) == 0)
{
lean_inc(v_fst_2631_);
lean_inc_ref(v_opts_2621_);
lean_inc(v_fst_2632_);
v___y_2580_ = v_fst_2632_;
v___y_2581_ = v___x_2627_;
v___y_2582_ = v_opts_2621_;
v___y_2583_ = v_snd_2633_;
v___y_2584_ = v_fst_2631_;
v___y_2585_ = v_pos_2634_;
v___y_2586_ = v___x_2627_;
v___y_2587_ = v_fst_2632_;
v___y_2588_ = v_opts_2621_;
v___y_2589_ = v_fst_2631_;
goto v___jp_2579_;
}
else
{
lean_object* v_val_2641_; lean_object* v___x_2642_; 
v_val_2641_ = lean_ctor_get(v_nextCmdSnap_x3f_2639_, 0);
lean_inc(v_val_2641_);
v___x_2642_ = l_Lean_Language_SnapshotTask_cancelRec___redArg(v___x_2616_, v_val_2641_);
lean_inc(v_fst_2631_);
lean_inc_ref(v_opts_2621_);
lean_inc(v_fst_2632_);
v___y_2580_ = v_fst_2632_;
v___y_2581_ = v___x_2627_;
v___y_2582_ = v_opts_2621_;
v___y_2583_ = v_snd_2633_;
v___y_2584_ = v_fst_2631_;
v___y_2585_ = v_pos_2634_;
v___y_2586_ = v___x_2627_;
v___y_2587_ = v_fst_2632_;
v___y_2588_ = v_opts_2621_;
v___y_2589_ = v_fst_2631_;
goto v___jp_2579_;
}
}
else
{
lean_inc(v_val_2630_);
lean_dec(v_pos_2634_);
lean_dec(v_snd_2633_);
lean_dec(v_fst_2631_);
lean_dec_ref_known(v_old_x3f_2434_, 1);
lean_dec_ref(v_opts_2621_);
lean_dec_ref(v_parseCancelTk_2439_);
lean_dec_ref(v_cmdState_2436_);
if (lean_obj_tag(v_nextCmdSnap_x3f_2639_) == 1)
{
lean_object* v_val_2643_; 
lean_inc_ref(v_nextCmdSnap_x3f_2639_);
lean_inc_ref(v_elabSnap_2638_);
lean_inc_ref(v_parserState_2637_);
lean_inc(v_stx_2636_);
lean_inc_ref(v_toSnapshot_2635_);
lean_dec(v_val_2630_);
v_val_2643_ = lean_ctor_get(v_nextCmdSnap_x3f_2639_, 0);
lean_inc(v_val_2643_);
lean_dec_ref_known(v_nextCmdSnap_x3f_2639_, 1);
v_toSnapshot_2444_ = v_toSnapshot_2635_;
v_stx_2445_ = v_stx_2636_;
v_parserState_2446_ = v_parserState_2637_;
v_elabSnap_2447_ = v_elabSnap_2638_;
v_val_2448_ = v_val_2643_;
v_newParserState_2449_ = v_fst_2632_;
goto v___jp_2443_;
}
else
{
lean_object* v___x_2644_; 
lean_dec(v_fst_2632_);
lean_dec(v_revCmds_2440_);
v___x_2644_ = lean_io_promise_resolve(v_val_2630_, v_prom_2437_);
lean_dec(v_prom_2437_);
return v___x_2644_;
}
}
}
else
{
lean_object* v_fst_2645_; lean_object* v_fst_2646_; lean_object* v_snd_2647_; lean_object* v_pos_2648_; 
v_fst_2645_ = lean_ctor_get(v___x_2628_, 0);
lean_inc_n(v_fst_2645_, 2);
lean_dec(v___x_2628_);
v_fst_2646_ = lean_ctor_get(v_snd_2629_, 0);
lean_inc_n(v_fst_2646_, 2);
v_snd_2647_ = lean_ctor_get(v_snd_2629_, 1);
lean_inc(v_snd_2647_);
lean_dec(v_snd_2629_);
v_pos_2648_ = lean_ctor_get(v_parserState_2435_, 0);
lean_inc(v_pos_2648_);
lean_dec_ref(v_parserState_2435_);
lean_inc_ref(v_opts_2621_);
v___y_2580_ = v_fst_2646_;
v___y_2581_ = v___x_2627_;
v___y_2582_ = v_opts_2621_;
v___y_2583_ = v_snd_2647_;
v___y_2584_ = v_fst_2645_;
v___y_2585_ = v_pos_2648_;
v___y_2586_ = v___x_2627_;
v___y_2587_ = v_fst_2646_;
v___y_2588_ = v_opts_2621_;
v___y_2589_ = v_fst_2645_;
goto v___jp_2579_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__0(lean_object* v_oldResult_2665_, lean_object* v_stx_2666_, lean_object* v_revCmds_2667_, lean_object* v_newParserState_2668_, lean_object* v_val_2669_, uint8_t v_sync_2670_, lean_object* v_val_2671_, lean_object* v_a_2672_, lean_object* v_oldNext_2673_){
_start:
{
lean_object* v_cmdState_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; 
v_cmdState_2675_ = lean_ctor_get(v_oldResult_2665_, 1);
lean_inc_ref(v_cmdState_2675_);
lean_dec_ref(v_oldResult_2665_);
v___x_2676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2676_, 0, v_oldNext_2673_);
v___x_2677_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2677_, 0, v_stx_2666_);
lean_ctor_set(v___x_2677_, 1, v_revCmds_2667_);
v___x_2678_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v___x_2676_, v_newParserState_2668_, v_cmdState_2675_, v_val_2669_, v_sync_2670_, v_val_2671_, v___x_2677_, v_a_2672_);
return v___x_2678_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___boxed(lean_object** _args){
lean_object* v___x_2679_ = _args[0];
lean_object* v_val_2680_ = _args[1];
lean_object* v_fst_2681_ = _args[2];
lean_object* v_revCmds_2682_ = _args[3];
lean_object* v_fst_2683_ = _args[4];
lean_object* v_val_2684_ = _args[5];
lean_object* v_a_2685_ = _args[6];
lean_object* v_snd_2686_ = _args[7];
lean_object* v___x_2687_ = _args[8];
lean_object* v___x_2688_ = _args[9];
lean_object* v_fst_2689_ = _args[10];
lean_object* v_val_2690_ = _args[11];
lean_object* v_val_2691_ = _args[12];
lean_object* v___x_2692_ = _args[13];
lean_object* v___f_2693_ = _args[14];
lean_object* v___f_2694_ = _args[15];
lean_object* v___f_2695_ = _args[16];
lean_object* v_pos_2696_ = _args[17];
lean_object* v_cmdState_2697_ = _args[18];
lean_object* v_val_2698_ = _args[19];
lean_object* v___x_2699_ = _args[20];
lean_object* v_opts_2700_ = _args[21];
lean_object* v___x_2701_ = _args[22];
lean_object* v_snd_2702_ = _args[23];
lean_object* v_prom_2703_ = _args[24];
lean_object* v_old_x3f_2704_ = _args[25];
lean_object* v_parseCancelTk_2705_ = _args[26];
lean_object* v_next_x3f_2706_ = _args[27];
lean_object* v___y_2707_ = _args[28];
_start:
{
uint8_t v_val_37481__boxed_2708_; uint8_t v___x_37484__boxed_2709_; lean_object* v_res_2710_; 
v_val_37481__boxed_2708_ = lean_unbox(v_val_2684_);
v___x_37484__boxed_2709_ = lean_unbox(v___x_2688_);
v_res_2710_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5(v___x_2679_, v_val_2680_, v_fst_2681_, v_revCmds_2682_, v_fst_2683_, v_val_37481__boxed_2708_, v_a_2685_, v_snd_2686_, v___x_2687_, v___x_37484__boxed_2709_, v_fst_2689_, v_val_2690_, v_val_2691_, v___x_2692_, v___f_2693_, v___f_2694_, v___f_2695_, v_pos_2696_, v_cmdState_2697_, v_val_2698_, v___x_2699_, v_opts_2700_, v___x_2701_, v_snd_2702_, v_prom_2703_, v_old_x3f_2704_, v_parseCancelTk_2705_, v_next_x3f_2706_);
lean_dec(v_prom_2703_);
lean_dec_ref(v___x_2701_);
lean_dec_ref(v_opts_2700_);
lean_dec(v_val_2691_);
lean_dec_ref(v_a_2685_);
lean_dec(v_val_2680_);
return v_res_2710_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___boxed(lean_object* v_old_x3f_2711_, lean_object* v_parserState_2712_, lean_object* v_cmdState_2713_, lean_object* v_prom_2714_, lean_object* v_sync_2715_, lean_object* v_parseCancelTk_2716_, lean_object* v_revCmds_2717_, lean_object* v_a_2718_, lean_object* v_a_2719_){
_start:
{
uint8_t v_sync_boxed_2720_; lean_object* v_res_2721_; 
v_sync_boxed_2720_ = lean_unbox(v_sync_2715_);
v_res_2721_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v_old_x3f_2711_, v_parserState_2712_, v_cmdState_2713_, v_prom_2714_, v_sync_boxed_2720_, v_parseCancelTk_2716_, v_revCmds_2717_, v_a_2718_);
lean_dec_ref(v_a_2718_);
return v_res_2721_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6(lean_object* v_as_2722_, size_t v_i_2723_, size_t v_stop_2724_, lean_object* v_b_2725_, lean_object* v___y_2726_){
_start:
{
lean_object* v___x_2728_; 
v___x_2728_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg(v_as_2722_, v_i_2723_, v_stop_2724_, v_b_2725_);
return v___x_2728_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___boxed(lean_object* v_as_2729_, lean_object* v_i_2730_, lean_object* v_stop_2731_, lean_object* v_b_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_){
_start:
{
size_t v_i_boxed_2735_; size_t v_stop_boxed_2736_; lean_object* v_res_2737_; 
v_i_boxed_2735_ = lean_unbox_usize(v_i_2730_);
lean_dec(v_i_2730_);
v_stop_boxed_2736_ = lean_unbox_usize(v_stop_2731_);
lean_dec(v_stop_2731_);
v_res_2737_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6(v_as_2729_, v_i_boxed_2735_, v_stop_boxed_2736_, v_b_2732_, v___y_2733_);
lean_dec_ref(v___y_2733_);
lean_dec_ref(v_as_2729_);
return v_res_2737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__1(lean_object* v_opts_2738_, lean_object* v_opt_2739_){
_start:
{
lean_object* v_name_2740_; lean_object* v_map_2741_; lean_object* v___x_2742_; 
v_name_2740_ = lean_ctor_get(v_opt_2739_, 0);
v_map_2741_ = lean_ctor_get(v_opts_2738_, 0);
v___x_2742_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2741_, v_name_2740_);
if (lean_obj_tag(v___x_2742_) == 0)
{
lean_object* v___x_2743_; 
v___x_2743_ = lean_box(0);
return v___x_2743_;
}
else
{
lean_object* v_val_2744_; lean_object* v___x_2746_; uint8_t v_isShared_2747_; uint8_t v_isSharedCheck_2753_; 
v_val_2744_ = lean_ctor_get(v___x_2742_, 0);
v_isSharedCheck_2753_ = !lean_is_exclusive(v___x_2742_);
if (v_isSharedCheck_2753_ == 0)
{
v___x_2746_ = v___x_2742_;
v_isShared_2747_ = v_isSharedCheck_2753_;
goto v_resetjp_2745_;
}
else
{
lean_inc(v_val_2744_);
lean_dec(v___x_2742_);
v___x_2746_ = lean_box(0);
v_isShared_2747_ = v_isSharedCheck_2753_;
goto v_resetjp_2745_;
}
v_resetjp_2745_:
{
if (lean_obj_tag(v_val_2744_) == 0)
{
lean_object* v_v_2748_; lean_object* v___x_2750_; 
v_v_2748_ = lean_ctor_get(v_val_2744_, 0);
lean_inc_ref(v_v_2748_);
lean_dec_ref_known(v_val_2744_, 1);
if (v_isShared_2747_ == 0)
{
lean_ctor_set(v___x_2746_, 0, v_v_2748_);
v___x_2750_ = v___x_2746_;
goto v_reusejp_2749_;
}
else
{
lean_object* v_reuseFailAlloc_2751_; 
v_reuseFailAlloc_2751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2751_, 0, v_v_2748_);
v___x_2750_ = v_reuseFailAlloc_2751_;
goto v_reusejp_2749_;
}
v_reusejp_2749_:
{
return v___x_2750_;
}
}
else
{
lean_object* v___x_2752_; 
lean_del_object(v___x_2746_);
lean_dec(v_val_2744_);
v___x_2752_ = lean_box(0);
return v___x_2752_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__1___boxed(lean_object* v_opts_2754_, lean_object* v_opt_2755_){
_start:
{
lean_object* v_res_2756_; 
v_res_2756_ = l_Lean_Option_get_x3f___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__1(v_opts_2754_, v_opt_2755_);
lean_dec_ref(v_opt_2755_);
lean_dec_ref(v_opts_2754_);
return v_res_2756_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__0(lean_object* v___x_2757_, lean_object* v_x_2758_){
_start:
{
lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; 
v___x_2759_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v___x_2757_);
v___x_2760_ = lean_box(0);
v___x_2761_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2761_, 0, v_x_2758_);
lean_ctor_set(v___x_2761_, 1, v___x_2759_);
lean_ctor_set(v___x_2761_, 2, v___x_2760_);
return v___x_2761_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2767_; lean_object* v___x_2768_; 
v___x_2767_ = ((lean_object*)(l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__2));
v___x_2768_ = l_Lean_Array_toPArray_x27___redArg(v___x_2767_);
return v___x_2768_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0(lean_object* v_a_2769_, lean_object* v_a_2770_){
_start:
{
if (lean_obj_tag(v_a_2769_) == 0)
{
lean_object* v___x_2771_; 
v___x_2771_ = l_List_reverse___redArg(v_a_2770_);
return v___x_2771_;
}
else
{
lean_object* v_head_2772_; lean_object* v_tail_2773_; lean_object* v___x_2775_; uint8_t v_isShared_2776_; uint8_t v_isSharedCheck_2786_; 
v_head_2772_ = lean_ctor_get(v_a_2769_, 0);
v_tail_2773_ = lean_ctor_get(v_a_2769_, 1);
v_isSharedCheck_2786_ = !lean_is_exclusive(v_a_2769_);
if (v_isSharedCheck_2786_ == 0)
{
v___x_2775_ = v_a_2769_;
v_isShared_2776_ = v_isSharedCheck_2786_;
goto v_resetjp_2774_;
}
else
{
lean_inc(v_tail_2773_);
lean_inc(v_head_2772_);
lean_dec(v_a_2769_);
v___x_2775_ = lean_box(0);
v_isShared_2776_ = v_isSharedCheck_2786_;
goto v_resetjp_2774_;
}
v_resetjp_2774_:
{
lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2783_; 
v___x_2777_ = ((lean_object*)(l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__1));
v___x_2778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2778_, 0, v___x_2777_);
lean_ctor_set(v___x_2778_, 1, v_head_2772_);
v___x_2779_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2779_, 0, v___x_2778_);
v___x_2780_ = lean_obj_once(&l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__3, &l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__3_once, _init_l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__3);
v___x_2781_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2781_, 0, v___x_2779_);
lean_ctor_set(v___x_2781_, 1, v___x_2780_);
if (v_isShared_2776_ == 0)
{
lean_ctor_set(v___x_2775_, 1, v_a_2770_);
lean_ctor_set(v___x_2775_, 0, v___x_2781_);
v___x_2783_ = v___x_2775_;
goto v_reusejp_2782_;
}
else
{
lean_object* v_reuseFailAlloc_2785_; 
v_reuseFailAlloc_2785_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2785_, 0, v___x_2781_);
lean_ctor_set(v_reuseFailAlloc_2785_, 1, v_a_2770_);
v___x_2783_ = v_reuseFailAlloc_2785_;
goto v_reusejp_2782_;
}
v_reusejp_2782_:
{
v_a_2769_ = v_tail_2773_;
v_a_2770_ = v___x_2783_;
goto _start;
}
}
}
}
}
static double _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__0(void){
_start:
{
lean_object* v___x_2787_; double v___x_2788_; 
v___x_2787_ = lean_unsigned_to_nat(1000000000u);
v___x_2788_ = lean_float_of_nat(v___x_2787_);
return v___x_2788_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__11(void){
_start:
{
lean_object* v___x_2805_; lean_object* v___x_2806_; 
v___x_2805_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__10));
v___x_2806_ = l_Lean_MessageData_ofFormat(v___x_2805_);
return v___x_2806_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1(lean_object* v_setupImports_2807_, lean_object* v_stx_2808_, lean_object* v_origStx_2809_, lean_object* v_toProcessingContext_2810_, lean_object* v___x_2811_, lean_object* v_fileMap_2812_, lean_object* v_parserState_2813_, lean_object* v_a_2814_, lean_object* v___x_2815_, lean_object* v___x_2816_, lean_object* v___x_2817_, lean_object* v___y_2818_){
_start:
{
lean_object* v_toProcessingContext_2820_; lean_object* v___x_2821_; 
v_toProcessingContext_2820_ = lean_ctor_get(v___y_2818_, 0);
lean_inc_ref(v_toProcessingContext_2820_);
lean_inc(v_stx_2808_);
v___x_2821_ = lean_apply_3(v_setupImports_2807_, v_stx_2808_, v_toProcessingContext_2820_, lean_box(0));
if (lean_obj_tag(v___x_2821_) == 0)
{
lean_object* v_a_2822_; lean_object* v___x_2824_; uint8_t v_isShared_2825_; uint8_t v_isSharedCheck_3035_; 
v_a_2822_ = lean_ctor_get(v___x_2821_, 0);
v_isSharedCheck_3035_ = !lean_is_exclusive(v___x_2821_);
if (v_isSharedCheck_3035_ == 0)
{
v___x_2824_ = v___x_2821_;
v_isShared_2825_ = v_isSharedCheck_3035_;
goto v_resetjp_2823_;
}
else
{
lean_inc(v_a_2822_);
lean_dec(v___x_2821_);
v___x_2824_ = lean_box(0);
v_isShared_2825_ = v_isSharedCheck_3035_;
goto v_resetjp_2823_;
}
v_resetjp_2823_:
{
if (lean_obj_tag(v_a_2822_) == 0)
{
lean_object* v_a_2826_; lean_object* v___x_2828_; 
lean_dec_ref(v___x_2817_);
lean_dec(v___x_2815_);
lean_dec_ref(v_parserState_2813_);
lean_dec_ref(v_fileMap_2812_);
lean_dec(v___x_2811_);
lean_dec_ref(v_toProcessingContext_2810_);
lean_dec(v_origStx_2809_);
lean_dec(v_stx_2808_);
v_a_2826_ = lean_ctor_get(v_a_2822_, 0);
lean_inc(v_a_2826_);
lean_dec_ref_known(v_a_2822_, 1);
if (v_isShared_2825_ == 0)
{
lean_ctor_set(v___x_2824_, 0, v_a_2826_);
v___x_2828_ = v___x_2824_;
goto v_reusejp_2827_;
}
else
{
lean_object* v_reuseFailAlloc_2829_; 
v_reuseFailAlloc_2829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2829_, 0, v_a_2826_);
v___x_2828_ = v_reuseFailAlloc_2829_;
goto v_reusejp_2827_;
}
v_reusejp_2827_:
{
return v___x_2828_;
}
}
else
{
lean_object* v_a_2830_; lean_object* v___x_2832_; uint8_t v_isShared_2833_; uint8_t v_isSharedCheck_3034_; 
v_a_2830_ = lean_ctor_get(v_a_2822_, 0);
v_isSharedCheck_3034_ = !lean_is_exclusive(v_a_2822_);
if (v_isSharedCheck_3034_ == 0)
{
v___x_2832_ = v_a_2822_;
v_isShared_2833_ = v_isSharedCheck_3034_;
goto v_resetjp_2831_;
}
else
{
lean_inc(v_a_2830_);
lean_dec(v_a_2822_);
v___x_2832_ = lean_box(0);
v_isShared_2833_ = v_isSharedCheck_3034_;
goto v_resetjp_2831_;
}
v_resetjp_2831_:
{
lean_object* v___x_2834_; lean_object* v_mainModuleName_2835_; lean_object* v_package_x3f_2836_; uint8_t v_isModule_2837_; lean_object* v_imports_2838_; lean_object* v_opts_2839_; uint32_t v_trustLevel_2840_; lean_object* v_importArts_2841_; lean_object* v_plugins_2842_; double v___x_2843_; double v___x_2844_; double v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; uint8_t v___x_2848_; lean_object* v___x_2850_; 
v___x_2834_ = lean_io_mono_nanos_now();
v_mainModuleName_2835_ = lean_ctor_get(v_a_2830_, 0);
lean_inc(v_mainModuleName_2835_);
v_package_x3f_2836_ = lean_ctor_get(v_a_2830_, 1);
lean_inc(v_package_x3f_2836_);
v_isModule_2837_ = lean_ctor_get_uint8(v_a_2830_, sizeof(void*)*6 + 4);
v_imports_2838_ = lean_ctor_get(v_a_2830_, 2);
lean_inc_ref(v_imports_2838_);
v_opts_2839_ = lean_ctor_get(v_a_2830_, 3);
lean_inc_ref(v_opts_2839_);
v_trustLevel_2840_ = lean_ctor_get_uint32(v_a_2830_, sizeof(void*)*6);
v_importArts_2841_ = lean_ctor_get(v_a_2830_, 4);
lean_inc(v_importArts_2841_);
v_plugins_2842_ = lean_ctor_get(v_a_2830_, 5);
lean_inc_ref(v_plugins_2842_);
lean_dec(v_a_2830_);
v___x_2843_ = lean_float_of_nat(v___x_2834_);
v___x_2844_ = lean_float_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__0);
v___x_2845_ = lean_float_div(v___x_2843_, v___x_2844_);
v___x_2846_ = l_Lean_Elab_HeaderSyntax_startPos(v_stx_2808_);
v___x_2847_ = l_Lean_MessageLog_empty;
v___x_2848_ = 1;
lean_inc(v_stx_2808_);
if (v_isShared_2833_ == 0)
{
lean_ctor_set(v___x_2832_, 0, v_stx_2808_);
v___x_2850_ = v___x_2832_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_3033_; 
v_reuseFailAlloc_3033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3033_, 0, v_stx_2808_);
v___x_2850_ = v_reuseFailAlloc_3033_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
lean_object* v___x_2851_; lean_object* v___x_2852_; 
v___x_2851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2851_, 0, v_origStx_2809_);
lean_inc_ref(v___x_2850_);
lean_inc_ref(v_opts_2839_);
v___x_2852_ = l_Lean_Elab_processHeaderCore(v___x_2846_, v_imports_2838_, v_isModule_2837_, v_opts_2839_, v___x_2847_, v_toProcessingContext_2810_, v_trustLevel_2840_, v_plugins_2842_, v___x_2848_, v_mainModuleName_2835_, v_package_x3f_2836_, v_importArts_2841_, v___x_2850_, v___x_2851_);
if (lean_obj_tag(v___x_2852_) == 0)
{
lean_object* v_a_2853_; lean_object* v___x_2855_; uint8_t v_isShared_2856_; uint8_t v_isSharedCheck_3024_; 
v_a_2853_ = lean_ctor_get(v___x_2852_, 0);
v_isSharedCheck_3024_ = !lean_is_exclusive(v___x_2852_);
if (v_isSharedCheck_3024_ == 0)
{
v___x_2855_ = v___x_2852_;
v_isShared_2856_ = v_isSharedCheck_3024_;
goto v_resetjp_2854_;
}
else
{
lean_inc(v_a_2853_);
lean_dec(v___x_2852_);
v___x_2855_ = lean_box(0);
v_isShared_2856_ = v_isSharedCheck_3024_;
goto v_resetjp_2854_;
}
v_resetjp_2854_:
{
lean_object* v_fst_2857_; lean_object* v_snd_2858_; lean_object* v___x_2860_; uint8_t v_isShared_2861_; uint8_t v_isSharedCheck_3023_; 
v_fst_2857_ = lean_ctor_get(v_a_2853_, 0);
v_snd_2858_ = lean_ctor_get(v_a_2853_, 1);
v_isSharedCheck_3023_ = !lean_is_exclusive(v_a_2853_);
if (v_isSharedCheck_3023_ == 0)
{
v___x_2860_ = v_a_2853_;
v_isShared_2861_ = v_isSharedCheck_3023_;
goto v_resetjp_2859_;
}
else
{
lean_inc(v_snd_2858_);
lean_inc(v_fst_2857_);
lean_dec(v_a_2853_);
v___x_2860_ = lean_box(0);
v_isShared_2861_ = v_isSharedCheck_3023_;
goto v_resetjp_2859_;
}
v_resetjp_2859_:
{
lean_object* v___x_2862_; double v___x_2863_; double v___x_2864_; lean_object* v___x_2865_; uint8_t v___x_2866_; lean_object* v___y_2868_; lean_object* v___y_2869_; lean_object* v___y_2870_; lean_object* v___y_2871_; lean_object* v___y_2872_; lean_object* v___y_2873_; lean_object* v_traceState_2882_; 
v___x_2862_ = lean_io_mono_nanos_now();
v___x_2863_ = lean_float_of_nat(v___x_2862_);
v___x_2864_ = lean_float_div(v___x_2863_, v___x_2844_);
lean_inc(v_snd_2858_);
v___x_2865_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_snd_2858_);
v___x_2866_ = l_Lean_MessageLog_hasErrors(v_snd_2858_);
if (v___x_2866_ == 0)
{
lean_object* v___x_2992_; lean_object* v___x_2993_; 
lean_del_object(v___x_2824_);
lean_dec_ref(v___x_2817_);
v___x_2992_ = l_Lean_trace_profiler_output;
v___x_2993_ = l_Lean_Option_get_x3f___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__1(v_opts_2839_, v___x_2992_);
if (lean_obj_tag(v___x_2993_) == 0)
{
lean_object* v___x_2994_; uint8_t v___x_2995_; 
v___x_2994_ = l_Lean_trace_profiler_serve;
v___x_2995_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_2839_, v___x_2994_);
if (v___x_2995_ == 0)
{
lean_object* v___x_2996_; 
v___x_2996_ = l_Lean_instInhabitedTraceState_default;
v_traceState_2882_ = v___x_2996_;
goto v___jp_2881_;
}
else
{
goto v___jp_2976_;
}
}
else
{
lean_dec_ref_known(v___x_2993_, 1);
goto v___jp_2976_;
}
}
else
{
lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; uint64_t v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; size_t v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3021_; 
lean_del_object(v___x_2860_);
lean_dec(v_snd_2858_);
lean_dec(v_fst_2857_);
lean_del_object(v___x_2855_);
lean_dec_ref(v___x_2850_);
lean_dec_ref(v_opts_2839_);
lean_dec(v___x_2815_);
lean_dec_ref(v_parserState_2813_);
lean_dec_ref(v_fileMap_2812_);
lean_dec(v_stx_2808_);
v___x_2997_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2));
v___x_2998_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4));
v___x_2999_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__6));
lean_inc_n(v___x_2811_, 2);
v___x_3000_ = l_Lean_Name_num___override(v___x_2999_, v___x_2811_);
v___x_3001_ = l_Lean_Name_str___override(v___x_3000_, v___x_2997_);
v___x_3002_ = l_Lean_Name_str___override(v___x_3001_, v___x_2998_);
v___x_3003_ = l_Lean_Name_str___override(v___x_3002_, v___x_2997_);
v___x_3004_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0));
v___x_3005_ = l_Lean_Name_str___override(v___x_3003_, v___x_3004_);
v___x_3006_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__6));
v___x_3007_ = l_Lean_Name_str___override(v___x_3005_, v___x_3006_);
v___x_3008_ = l_Lean_Name_toString(v___x_3007_, v___x_2848_);
v___x_3009_ = lean_box(0);
v___x_3010_ = 0ULL;
v___x_3011_ = lean_unsigned_to_nat(32u);
v___x_3012_ = lean_mk_empty_array_with_capacity(v___x_3011_);
v___x_3013_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14);
v___x_3014_ = ((size_t)5ULL);
v___x_3015_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3015_, 0, v___x_3013_);
lean_ctor_set(v___x_3015_, 1, v___x_3012_);
lean_ctor_set(v___x_3015_, 2, v___x_2811_);
lean_ctor_set(v___x_3015_, 3, v___x_2811_);
lean_ctor_set_usize(v___x_3015_, 4, v___x_3014_);
v___x_3016_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3016_, 0, v___x_3015_);
lean_ctor_set_uint64(v___x_3016_, sizeof(void*)*1, v___x_3010_);
v___x_3017_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3017_, 0, v___x_3008_);
lean_ctor_set(v___x_3017_, 1, v___x_2865_);
lean_ctor_set(v___x_3017_, 2, v___x_3009_);
lean_ctor_set(v___x_3017_, 3, v___x_3016_);
lean_ctor_set_uint8(v___x_3017_, sizeof(void*)*4, v___x_2866_);
v___x_3018_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v___x_2817_);
v___x_3019_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3019_, 0, v___x_3017_);
lean_ctor_set(v___x_3019_, 1, v___x_3018_);
lean_ctor_set(v___x_3019_, 2, v___x_3009_);
if (v_isShared_2825_ == 0)
{
lean_ctor_set(v___x_2824_, 0, v___x_3019_);
v___x_3021_ = v___x_2824_;
goto v_reusejp_3020_;
}
else
{
lean_object* v_reuseFailAlloc_3022_; 
v_reuseFailAlloc_3022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3022_, 0, v___x_3019_);
v___x_3021_ = v_reuseFailAlloc_3022_;
goto v_reusejp_3020_;
}
v_reusejp_3020_:
{
return v___x_3021_;
}
}
v___jp_2867_:
{
lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2879_; 
v___x_2874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2874_, 0, v___y_2873_);
v___x_2875_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2875_, 0, v___y_2871_);
lean_ctor_set(v___x_2875_, 1, v___x_2865_);
lean_ctor_set(v___x_2875_, 2, v___x_2874_);
lean_ctor_set(v___x_2875_, 3, v___y_2870_);
lean_ctor_set_uint8(v___x_2875_, sizeof(void*)*4, v___x_2866_);
v___x_2876_ = l_Lean_Language_SnapshotTask_finished___redArg(v___y_2868_, v___x_2875_);
v___x_2877_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2877_, 0, v___y_2872_);
lean_ctor_set(v___x_2877_, 1, v___x_2876_);
lean_ctor_set(v___x_2877_, 2, v___y_2869_);
if (v_isShared_2856_ == 0)
{
lean_ctor_set(v___x_2855_, 0, v___x_2877_);
v___x_2879_ = v___x_2855_;
goto v_reusejp_2878_;
}
else
{
lean_object* v_reuseFailAlloc_2880_; 
v_reuseFailAlloc_2880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2880_, 0, v___x_2877_);
v___x_2879_ = v_reuseFailAlloc_2880_;
goto v_reusejp_2878_;
}
v_reusejp_2878_:
{
return v___x_2879_;
}
}
v___jp_2881_:
{
lean_object* v___x_2883_; 
v___x_2883_ = l_Lean_Language_Lean_reparseOptions(v_opts_2839_);
if (lean_obj_tag(v___x_2883_) == 0)
{
lean_object* v_a_2884_; lean_object* v___x_2885_; lean_object* v_env_2886_; lean_object* v_messages_2887_; lean_object* v_scopes_2888_; lean_object* v_usedQuotCtxts_2889_; lean_object* v_nextMacroScope_2890_; lean_object* v_maxRecDepth_2891_; lean_object* v_ngen_2892_; lean_object* v_auxDeclNGen_2893_; lean_object* v_snapshotTasks_2894_; lean_object* v_prevLinterStates_2895_; lean_object* v_codeQualityEntryTasks_2896_; lean_object* v___x_2898_; uint8_t v_isShared_2899_; uint8_t v_isSharedCheck_2965_; 
v_a_2884_ = lean_ctor_get(v___x_2883_, 0);
lean_inc(v_a_2884_);
lean_dec_ref_known(v___x_2883_, 1);
lean_inc(v_fst_2857_);
v___x_2885_ = l_Lean_Elab_Command_mkState(v_fst_2857_, v_snd_2858_, v_a_2884_);
v_env_2886_ = lean_ctor_get(v___x_2885_, 0);
v_messages_2887_ = lean_ctor_get(v___x_2885_, 1);
v_scopes_2888_ = lean_ctor_get(v___x_2885_, 2);
v_usedQuotCtxts_2889_ = lean_ctor_get(v___x_2885_, 3);
v_nextMacroScope_2890_ = lean_ctor_get(v___x_2885_, 4);
v_maxRecDepth_2891_ = lean_ctor_get(v___x_2885_, 5);
v_ngen_2892_ = lean_ctor_get(v___x_2885_, 6);
v_auxDeclNGen_2893_ = lean_ctor_get(v___x_2885_, 7);
v_snapshotTasks_2894_ = lean_ctor_get(v___x_2885_, 10);
v_prevLinterStates_2895_ = lean_ctor_get(v___x_2885_, 11);
v_codeQualityEntryTasks_2896_ = lean_ctor_get(v___x_2885_, 12);
v_isSharedCheck_2965_ = !lean_is_exclusive(v___x_2885_);
if (v_isSharedCheck_2965_ == 0)
{
lean_object* v_unused_2966_; lean_object* v_unused_2967_; 
v_unused_2966_ = lean_ctor_get(v___x_2885_, 9);
lean_dec(v_unused_2966_);
v_unused_2967_ = lean_ctor_get(v___x_2885_, 8);
lean_dec(v_unused_2967_);
v___x_2898_ = v___x_2885_;
v_isShared_2899_ = v_isSharedCheck_2965_;
goto v_resetjp_2897_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2896_);
lean_inc(v_prevLinterStates_2895_);
lean_inc(v_snapshotTasks_2894_);
lean_inc(v_auxDeclNGen_2893_);
lean_inc(v_ngen_2892_);
lean_inc(v_maxRecDepth_2891_);
lean_inc(v_nextMacroScope_2890_);
lean_inc(v_usedQuotCtxts_2889_);
lean_inc(v_scopes_2888_);
lean_inc(v_messages_2887_);
lean_inc(v_env_2886_);
lean_dec(v___x_2885_);
v___x_2898_ = lean_box(0);
v_isShared_2899_ = v_isSharedCheck_2965_;
goto v_resetjp_2897_;
}
v_resetjp_2897_:
{
lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2913_; 
v___x_2900_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3);
v___x_2901_ = lean_box(0);
v___x_2902_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
lean_inc_n(v___x_2811_, 4);
v___x_2903_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_2903_, 0, v___x_2811_);
lean_ctor_set(v___x_2903_, 1, v___x_2811_);
lean_ctor_set(v___x_2903_, 2, v___x_2811_);
lean_ctor_set(v___x_2903_, 3, v___x_2811_);
lean_ctor_set(v___x_2903_, 4, v___x_2900_);
lean_ctor_set(v___x_2903_, 5, v___x_2900_);
lean_ctor_set(v___x_2903_, 6, v___x_2900_);
lean_ctor_set(v___x_2903_, 7, v___x_2900_);
lean_ctor_set(v___x_2903_, 8, v___x_2900_);
lean_ctor_set(v___x_2903_, 9, v___x_2900_);
lean_ctor_set(v___x_2903_, 10, v___x_2900_);
lean_ctor_set(v___x_2903_, 11, v___x_2902_);
v___x_2904_ = l_Lean_Options_empty;
v___x_2905_ = lean_box(0);
v___x_2906_ = lean_box(0);
v___x_2907_ = lean_unsigned_to_nat(1u);
v___x_2908_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__3));
v___x_2909_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2909_, 0, v_fst_2857_);
lean_ctor_set(v___x_2909_, 1, v___x_2901_);
lean_ctor_set(v___x_2909_, 2, v_fileMap_2812_);
lean_ctor_set(v___x_2909_, 3, v___x_2903_);
lean_ctor_set(v___x_2909_, 4, v___x_2904_);
lean_ctor_set(v___x_2909_, 5, v___x_2905_);
lean_ctor_set(v___x_2909_, 6, v___x_2906_);
lean_ctor_set(v___x_2909_, 7, v___x_2908_);
v___x_2910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2910_, 0, v___x_2909_);
v___x_2911_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__5));
lean_inc(v_stx_2808_);
if (v_isShared_2861_ == 0)
{
lean_ctor_set(v___x_2860_, 1, v_stx_2808_);
lean_ctor_set(v___x_2860_, 0, v___x_2911_);
v___x_2913_ = v___x_2860_;
goto v_reusejp_2912_;
}
else
{
lean_object* v_reuseFailAlloc_2964_; 
v_reuseFailAlloc_2964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2964_, 0, v___x_2911_);
lean_ctor_set(v_reuseFailAlloc_2964_, 1, v_stx_2808_);
v___x_2913_ = v_reuseFailAlloc_2964_;
goto v_reusejp_2912_;
}
v_reusejp_2912_:
{
lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2928_; 
v___x_2914_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2914_, 0, v___x_2913_);
v___x_2915_ = lean_unsigned_to_nat(2u);
v___x_2916_ = l_Lean_Syntax_getArg(v_stx_2808_, v___x_2915_);
lean_dec(v_stx_2808_);
v___x_2917_ = l_Lean_Syntax_getArgs(v___x_2916_);
lean_dec(v___x_2916_);
v___x_2918_ = lean_array_to_list(v___x_2917_);
v___x_2919_ = l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0(v___x_2918_, v___x_2906_);
v___x_2920_ = l_Lean_List_toPArray_x27___redArg(v___x_2919_);
v___x_2921_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2921_, 0, v___x_2914_);
lean_ctor_set(v___x_2921_, 1, v___x_2920_);
v___x_2922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2922_, 0, v___x_2910_);
lean_ctor_set(v___x_2922_, 1, v___x_2921_);
v___x_2923_ = lean_mk_empty_array_with_capacity(v___x_2907_);
v___x_2924_ = lean_array_push(v___x_2923_, v___x_2922_);
v___x_2925_ = l_Lean_Array_toPArray_x27___redArg(v___x_2924_);
lean_dec_ref(v___x_2924_);
lean_inc_ref(v___x_2925_);
v___x_2926_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2926_, 0, v___x_2900_);
lean_ctor_set(v___x_2926_, 1, v___x_2900_);
lean_ctor_set(v___x_2926_, 2, v___x_2925_);
lean_ctor_set_uint8(v___x_2926_, sizeof(void*)*3, v___x_2848_);
if (v_isShared_2899_ == 0)
{
lean_ctor_set(v___x_2898_, 9, v_traceState_2882_);
lean_ctor_set(v___x_2898_, 8, v___x_2926_);
v___x_2928_ = v___x_2898_;
goto v_reusejp_2927_;
}
else
{
lean_object* v_reuseFailAlloc_2963_; 
v_reuseFailAlloc_2963_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2963_, 0, v_env_2886_);
lean_ctor_set(v_reuseFailAlloc_2963_, 1, v_messages_2887_);
lean_ctor_set(v_reuseFailAlloc_2963_, 2, v_scopes_2888_);
lean_ctor_set(v_reuseFailAlloc_2963_, 3, v_usedQuotCtxts_2889_);
lean_ctor_set(v_reuseFailAlloc_2963_, 4, v_nextMacroScope_2890_);
lean_ctor_set(v_reuseFailAlloc_2963_, 5, v_maxRecDepth_2891_);
lean_ctor_set(v_reuseFailAlloc_2963_, 6, v_ngen_2892_);
lean_ctor_set(v_reuseFailAlloc_2963_, 7, v_auxDeclNGen_2893_);
lean_ctor_set(v_reuseFailAlloc_2963_, 8, v___x_2926_);
lean_ctor_set(v_reuseFailAlloc_2963_, 9, v_traceState_2882_);
lean_ctor_set(v_reuseFailAlloc_2963_, 10, v_snapshotTasks_2894_);
lean_ctor_set(v_reuseFailAlloc_2963_, 11, v_prevLinterStates_2895_);
lean_ctor_set(v_reuseFailAlloc_2963_, 12, v_codeQualityEntryTasks_2896_);
v___x_2928_ = v_reuseFailAlloc_2963_;
goto v_reusejp_2927_;
}
v_reusejp_2927_:
{
lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; size_t v___x_2939_; lean_object* v___x_2940_; lean_object* v_size_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; uint64_t v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; uint8_t v___x_2960_; 
v___x_2929_ = lean_io_promise_new();
v___x_2930_ = l_IO_CancelToken_new();
lean_inc_ref(v___x_2930_);
lean_inc(v___x_2929_);
lean_inc_ref(v___x_2928_);
v___x_2931_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v___x_2901_, v_parserState_2813_, v___x_2928_, v___x_2929_, v___x_2848_, v___x_2930_, v___x_2906_, v_a_2814_);
v___x_2932_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2));
v___x_2933_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4));
v___x_2934_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__6));
lean_inc_n(v___x_2811_, 3);
v___x_2935_ = l_Lean_Name_num___override(v___x_2934_, v___x_2811_);
v___x_2936_ = lean_unsigned_to_nat(32u);
v___x_2937_ = lean_mk_empty_array_with_capacity(v___x_2936_);
v___x_2938_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14);
v___x_2939_ = ((size_t)5ULL);
v___x_2940_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2940_, 0, v___x_2938_);
lean_ctor_set(v___x_2940_, 1, v___x_2937_);
lean_ctor_set(v___x_2940_, 2, v___x_2811_);
lean_ctor_set(v___x_2940_, 3, v___x_2811_);
lean_ctor_set_usize(v___x_2940_, 4, v___x_2939_);
v_size_2941_ = lean_ctor_get(v___x_2925_, 2);
v___x_2942_ = l_Lean_Name_str___override(v___x_2935_, v___x_2932_);
v___x_2943_ = l_Lean_Language_SnapshotTask_defaultReportingRange(v___x_2815_);
v___x_2944_ = l_Lean_Name_str___override(v___x_2942_, v___x_2933_);
v___x_2945_ = l_Lean_Name_str___override(v___x_2944_, v___x_2932_);
v___x_2946_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0));
v___x_2947_ = l_Lean_Name_str___override(v___x_2945_, v___x_2946_);
v___x_2948_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__6));
v___x_2949_ = l_Lean_Name_str___override(v___x_2947_, v___x_2948_);
v___x_2950_ = l_Lean_Name_toString(v___x_2949_, v___x_2848_);
v___x_2951_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_2952_ = 0ULL;
v___x_2953_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2953_, 0, v___x_2940_);
lean_ctor_set_uint64(v___x_2953_, sizeof(void*)*1, v___x_2952_);
v___x_2954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2954_, 0, v___x_2930_);
v___x_2955_ = l_IO_Promise_result_x21___redArg(v___x_2929_);
lean_dec(v___x_2929_);
v___x_2956_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2956_, 0, v___x_2815_);
lean_ctor_set(v___x_2956_, 1, v___x_2943_);
lean_ctor_set(v___x_2956_, 2, v___x_2954_);
lean_ctor_set(v___x_2956_, 3, v___x_2955_);
v___x_2957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2957_, 0, v___x_2928_);
lean_ctor_set(v___x_2957_, 1, v___x_2956_);
v___x_2958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2958_, 0, v___x_2957_);
lean_inc_ref(v___x_2953_);
lean_inc_ref(v___x_2950_);
v___x_2959_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2959_, 0, v___x_2950_);
lean_ctor_set(v___x_2959_, 1, v___x_2951_);
lean_ctor_set(v___x_2959_, 2, v___x_2901_);
lean_ctor_set(v___x_2959_, 3, v___x_2953_);
lean_ctor_set_uint8(v___x_2959_, sizeof(void*)*4, v___x_2866_);
v___x_2960_ = lean_nat_dec_lt(v___x_2811_, v_size_2941_);
if (v___x_2960_ == 0)
{
lean_object* v___x_2961_; 
lean_dec_ref(v___x_2925_);
lean_dec(v___x_2811_);
v___x_2961_ = l_outOfBounds___redArg(v___x_2816_);
v___y_2868_ = v___x_2850_;
v___y_2869_ = v___x_2958_;
v___y_2870_ = v___x_2953_;
v___y_2871_ = v___x_2950_;
v___y_2872_ = v___x_2959_;
v___y_2873_ = v___x_2961_;
goto v___jp_2867_;
}
else
{
lean_object* v___x_2962_; 
v___x_2962_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2816_, v___x_2925_, v___x_2811_);
lean_dec(v___x_2811_);
lean_dec_ref(v___x_2925_);
v___y_2868_ = v___x_2850_;
v___y_2869_ = v___x_2958_;
v___y_2870_ = v___x_2953_;
v___y_2871_ = v___x_2950_;
v___y_2872_ = v___x_2959_;
v___y_2873_ = v___x_2962_;
goto v___jp_2867_;
}
}
}
}
}
else
{
lean_object* v_a_2968_; lean_object* v___x_2970_; uint8_t v_isShared_2971_; uint8_t v_isSharedCheck_2975_; 
lean_dec_ref(v_traceState_2882_);
lean_dec_ref(v___x_2865_);
lean_del_object(v___x_2860_);
lean_dec(v_snd_2858_);
lean_dec(v_fst_2857_);
lean_del_object(v___x_2855_);
lean_dec_ref(v___x_2850_);
lean_dec(v___x_2815_);
lean_dec_ref(v_parserState_2813_);
lean_dec_ref(v_fileMap_2812_);
lean_dec(v___x_2811_);
lean_dec(v_stx_2808_);
v_a_2968_ = lean_ctor_get(v___x_2883_, 0);
v_isSharedCheck_2975_ = !lean_is_exclusive(v___x_2883_);
if (v_isSharedCheck_2975_ == 0)
{
v___x_2970_ = v___x_2883_;
v_isShared_2971_ = v_isSharedCheck_2975_;
goto v_resetjp_2969_;
}
else
{
lean_inc(v_a_2968_);
lean_dec(v___x_2883_);
v___x_2970_ = lean_box(0);
v_isShared_2971_ = v_isSharedCheck_2975_;
goto v_resetjp_2969_;
}
v_resetjp_2969_:
{
lean_object* v___x_2973_; 
if (v_isShared_2971_ == 0)
{
v___x_2973_ = v___x_2970_;
goto v_reusejp_2972_;
}
else
{
lean_object* v_reuseFailAlloc_2974_; 
v_reuseFailAlloc_2974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2974_, 0, v_a_2968_);
v___x_2973_ = v_reuseFailAlloc_2974_;
goto v_reusejp_2972_;
}
v_reusejp_2972_:
{
return v___x_2973_;
}
}
}
}
v___jp_2976_:
{
uint64_t v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; 
v___x_2977_ = 0ULL;
v___x_2978_ = lean_box(0);
v___x_2979_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__8));
v___x_2980_ = lean_box(0);
v___x_2981_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
v___x_2982_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2982_, 0, v___x_2979_);
lean_ctor_set(v___x_2982_, 1, v___x_2980_);
lean_ctor_set(v___x_2982_, 2, v___x_2981_);
lean_ctor_set_float(v___x_2982_, sizeof(void*)*3, v___x_2845_);
lean_ctor_set_float(v___x_2982_, sizeof(void*)*3 + 8, v___x_2864_);
lean_ctor_set_uint8(v___x_2982_, sizeof(void*)*3 + 16, v___x_2848_);
v___x_2983_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__11, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__11_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__11);
v___x_2984_ = lean_mk_empty_array_with_capacity(v___x_2811_);
v___x_2985_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2985_, 0, v___x_2982_);
lean_ctor_set(v___x_2985_, 1, v___x_2983_);
lean_ctor_set(v___x_2985_, 2, v___x_2984_);
v___x_2986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2986_, 0, v___x_2978_);
lean_ctor_set(v___x_2986_, 1, v___x_2985_);
v___x_2987_ = lean_unsigned_to_nat(1u);
v___x_2988_ = lean_mk_empty_array_with_capacity(v___x_2987_);
v___x_2989_ = lean_array_push(v___x_2988_, v___x_2986_);
v___x_2990_ = l_Lean_Array_toPArray_x27___redArg(v___x_2989_);
lean_dec_ref(v___x_2989_);
v___x_2991_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2991_, 0, v___x_2990_);
lean_ctor_set_uint64(v___x_2991_, sizeof(void*)*1, v___x_2977_);
v_traceState_2882_ = v___x_2991_;
goto v___jp_2881_;
}
}
}
}
else
{
lean_object* v_a_3025_; lean_object* v___x_3027_; uint8_t v_isShared_3028_; uint8_t v_isSharedCheck_3032_; 
lean_dec_ref(v___x_2850_);
lean_dec_ref(v_opts_2839_);
lean_del_object(v___x_2824_);
lean_dec_ref(v___x_2817_);
lean_dec(v___x_2815_);
lean_dec_ref(v_parserState_2813_);
lean_dec_ref(v_fileMap_2812_);
lean_dec(v___x_2811_);
lean_dec(v_stx_2808_);
v_a_3025_ = lean_ctor_get(v___x_2852_, 0);
v_isSharedCheck_3032_ = !lean_is_exclusive(v___x_2852_);
if (v_isSharedCheck_3032_ == 0)
{
v___x_3027_ = v___x_2852_;
v_isShared_3028_ = v_isSharedCheck_3032_;
goto v_resetjp_3026_;
}
else
{
lean_inc(v_a_3025_);
lean_dec(v___x_2852_);
v___x_3027_ = lean_box(0);
v_isShared_3028_ = v_isSharedCheck_3032_;
goto v_resetjp_3026_;
}
v_resetjp_3026_:
{
lean_object* v___x_3030_; 
if (v_isShared_3028_ == 0)
{
v___x_3030_ = v___x_3027_;
goto v_reusejp_3029_;
}
else
{
lean_object* v_reuseFailAlloc_3031_; 
v_reuseFailAlloc_3031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3031_, 0, v_a_3025_);
v___x_3030_ = v_reuseFailAlloc_3031_;
goto v_reusejp_3029_;
}
v_reusejp_3029_:
{
return v___x_3030_;
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
lean_object* v_a_3036_; lean_object* v___x_3038_; uint8_t v_isShared_3039_; uint8_t v_isSharedCheck_3043_; 
lean_dec_ref(v___x_2817_);
lean_dec(v___x_2815_);
lean_dec_ref(v_parserState_2813_);
lean_dec_ref(v_fileMap_2812_);
lean_dec(v___x_2811_);
lean_dec_ref(v_toProcessingContext_2810_);
lean_dec(v_origStx_2809_);
lean_dec(v_stx_2808_);
v_a_3036_ = lean_ctor_get(v___x_2821_, 0);
v_isSharedCheck_3043_ = !lean_is_exclusive(v___x_2821_);
if (v_isSharedCheck_3043_ == 0)
{
v___x_3038_ = v___x_2821_;
v_isShared_3039_ = v_isSharedCheck_3043_;
goto v_resetjp_3037_;
}
else
{
lean_inc(v_a_3036_);
lean_dec(v___x_2821_);
v___x_3038_ = lean_box(0);
v_isShared_3039_ = v_isSharedCheck_3043_;
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
lean_object* v_reuseFailAlloc_3042_; 
v_reuseFailAlloc_3042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3042_, 0, v_a_3036_);
v___x_3041_ = v_reuseFailAlloc_3042_;
goto v_reusejp_3040_;
}
v_reusejp_3040_:
{
return v___x_3041_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___boxed(lean_object* v_setupImports_3044_, lean_object* v_stx_3045_, lean_object* v_origStx_3046_, lean_object* v_toProcessingContext_3047_, lean_object* v___x_3048_, lean_object* v_fileMap_3049_, lean_object* v_parserState_3050_, lean_object* v_a_3051_, lean_object* v___x_3052_, lean_object* v___x_3053_, lean_object* v___x_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_){
_start:
{
lean_object* v_res_3057_; 
v_res_3057_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1(v_setupImports_3044_, v_stx_3045_, v_origStx_3046_, v_toProcessingContext_3047_, v___x_3048_, v_fileMap_3049_, v_parserState_3050_, v_a_3051_, v___x_3052_, v___x_3053_, v___x_3054_, v___y_3055_);
lean_dec_ref(v___y_3055_);
lean_dec_ref(v___x_3053_);
lean_dec_ref(v_a_3051_);
return v_res_3057_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0(void){
_start:
{
lean_object* v___x_3058_; lean_object* v___f_3059_; 
v___x_3058_ = l_Lean_Language_instInhabitedSnapshotLeaf;
v___f_3059_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__0), 2, 1);
lean_closure_set(v___f_3059_, 0, v___x_3058_);
return v___f_3059_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader(lean_object* v_setupImports_3060_, lean_object* v_stx_3061_, lean_object* v_origStx_3062_, lean_object* v_parserState_3063_, lean_object* v_a_3064_){
_start:
{
lean_object* v_toProcessingContext_3066_; lean_object* v_fileMap_3067_; lean_object* v_endPos_3068_; lean_object* v___x_3069_; lean_object* v___f_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___f_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; 
v_toProcessingContext_3066_ = lean_ctor_get(v_a_3064_, 0);
v_fileMap_3067_ = lean_ctor_get(v_toProcessingContext_3066_, 2);
v_endPos_3068_ = lean_ctor_get(v_toProcessingContext_3066_, 3);
v___x_3069_ = l_Lean_Language_instInhabitedSnapshotLeaf;
v___f_3070_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0);
v___x_3071_ = l_Lean_Elab_instInhabitedInfoTree_default;
v___x_3072_ = lean_box(0);
v___x_3073_ = lean_unsigned_to_nat(0u);
lean_inc_ref_n(v_a_3064_, 2);
lean_inc_ref(v_fileMap_3067_);
lean_inc_ref(v_toProcessingContext_3066_);
v___f_3074_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___boxed), 13, 11);
lean_closure_set(v___f_3074_, 0, v_setupImports_3060_);
lean_closure_set(v___f_3074_, 1, v_stx_3061_);
lean_closure_set(v___f_3074_, 2, v_origStx_3062_);
lean_closure_set(v___f_3074_, 3, v_toProcessingContext_3066_);
lean_closure_set(v___f_3074_, 4, v___x_3073_);
lean_closure_set(v___f_3074_, 5, v_fileMap_3067_);
lean_closure_set(v___f_3074_, 6, v_parserState_3063_);
lean_closure_set(v___f_3074_, 7, v_a_3064_);
lean_closure_set(v___f_3074_, 8, v___x_3072_);
lean_closure_set(v___f_3074_, 9, v___x_3071_);
lean_closure_set(v___f_3074_, 10, v___x_3069_);
lean_inc(v_endPos_3068_);
v___x_3075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3075_, 0, v___x_3073_);
lean_ctor_set(v___x_3075_, 1, v_endPos_3068_);
v___x_3076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3076_, 0, v___x_3075_);
v___x_3077_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___boxed), 5, 4);
lean_closure_set(v___x_3077_, 0, lean_box(0));
lean_closure_set(v___x_3077_, 1, v___f_3070_);
lean_closure_set(v___x_3077_, 2, v___f_3074_);
lean_closure_set(v___x_3077_, 3, v_a_3064_);
v___x_3078_ = l_Lean_Language_SnapshotTask_ofIO___redArg(v___x_3072_, v___x_3072_, v___x_3076_, v___x_3077_);
return v___x_3078_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___boxed(lean_object* v_setupImports_3079_, lean_object* v_stx_3080_, lean_object* v_origStx_3081_, lean_object* v_parserState_3082_, lean_object* v_a_3083_, lean_object* v_a_3084_){
_start:
{
lean_object* v_res_3085_; 
v_res_3085_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader(v_setupImports_3079_, v_stx_3080_, v_origStx_3081_, v_parserState_3082_, v_a_3083_);
lean_dec_ref(v_a_3083_);
return v_res_3085_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__0(void){
_start:
{
lean_object* v___x_3086_; lean_object* v___x_3087_; 
v___x_3086_ = lean_box(0);
v___x_3087_ = l_Lean_Language_SnapshotTask_defaultReportingRange(v___x_3086_);
return v___x_3087_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3(void){
_start:
{
uint8_t v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; 
v___x_3092_ = 1;
v___x_3093_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__2));
v___x_3094_ = l_Lean_Name_toString(v___x_3093_, v___x_3092_);
return v___x_3094_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4(void){
_start:
{
uint8_t v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; 
v___x_3095_ = 0;
v___x_3096_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_3097_ = lean_box(0);
v___x_3098_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_3099_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3);
v___x_3100_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3100_, 0, v___x_3099_);
lean_ctor_set(v___x_3100_, 1, v___x_3098_);
lean_ctor_set(v___x_3100_, 2, v___x_3097_);
lean_ctor_set(v___x_3100_, 3, v___x_3096_);
lean_ctor_set_uint8(v___x_3100_, sizeof(void*)*4, v___x_3095_);
return v___x_3100_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0(lean_object* v_newParserState_3101_, lean_object* v_cmdState_3102_, lean_object* v_a_3103_, lean_object* v_toSnapshot_3104_, lean_object* v_newStx_3105_, lean_object* v_oldCmd_3106_){
_start:
{
lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; uint8_t v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v_diagnostics_3114_; lean_object* v___x_3116_; uint8_t v_isShared_3117_; uint8_t v_isSharedCheck_3136_; 
v___x_3108_ = lean_io_promise_new();
v___x_3109_ = l_IO_CancelToken_new();
v___x_3110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3110_, 0, v_oldCmd_3106_);
v___x_3111_ = 1;
v___x_3112_ = lean_box(0);
lean_inc_ref(v___x_3109_);
lean_inc(v___x_3108_);
lean_inc_ref(v_cmdState_3102_);
v___x_3113_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v___x_3110_, v_newParserState_3101_, v_cmdState_3102_, v___x_3108_, v___x_3111_, v___x_3109_, v___x_3112_, v_a_3103_);
v_diagnostics_3114_ = lean_ctor_get(v_toSnapshot_3104_, 1);
v_isSharedCheck_3136_ = !lean_is_exclusive(v_toSnapshot_3104_);
if (v_isSharedCheck_3136_ == 0)
{
lean_object* v_unused_3137_; lean_object* v_unused_3138_; lean_object* v_unused_3139_; 
v_unused_3137_ = lean_ctor_get(v_toSnapshot_3104_, 3);
lean_dec(v_unused_3137_);
v_unused_3138_ = lean_ctor_get(v_toSnapshot_3104_, 2);
lean_dec(v_unused_3138_);
v_unused_3139_ = lean_ctor_get(v_toSnapshot_3104_, 0);
lean_dec(v_unused_3139_);
v___x_3116_ = v_toSnapshot_3104_;
v_isShared_3117_ = v_isSharedCheck_3136_;
goto v_resetjp_3115_;
}
else
{
lean_inc(v_diagnostics_3114_);
lean_dec(v_toSnapshot_3104_);
v___x_3116_ = lean_box(0);
v_isShared_3117_ = v_isSharedCheck_3136_;
goto v_resetjp_3115_;
}
v_resetjp_3115_:
{
lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; uint8_t v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3131_; 
v___x_3118_ = lean_box(0);
v___x_3119_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__0);
v___x_3120_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3);
v___x_3121_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_3122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3122_, 0, v___x_3109_);
v___x_3123_ = l_IO_Promise_result_x21___redArg(v___x_3108_);
lean_dec(v___x_3108_);
v___x_3124_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3124_, 0, v___x_3118_);
lean_ctor_set(v___x_3124_, 1, v___x_3119_);
lean_ctor_set(v___x_3124_, 2, v___x_3122_);
lean_ctor_set(v___x_3124_, 3, v___x_3123_);
v___x_3125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3125_, 0, v_cmdState_3102_);
lean_ctor_set(v___x_3125_, 1, v___x_3124_);
v___x_3126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3126_, 0, v___x_3125_);
v___x_3127_ = 0;
v___x_3128_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4);
v___x_3129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3129_, 0, v_newStx_3105_);
if (v_isShared_3117_ == 0)
{
lean_ctor_set(v___x_3116_, 3, v___x_3121_);
lean_ctor_set(v___x_3116_, 2, v___x_3118_);
lean_ctor_set(v___x_3116_, 0, v___x_3120_);
v___x_3131_ = v___x_3116_;
goto v_reusejp_3130_;
}
else
{
lean_object* v_reuseFailAlloc_3135_; 
v_reuseFailAlloc_3135_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_3135_, 0, v___x_3120_);
lean_ctor_set(v_reuseFailAlloc_3135_, 1, v_diagnostics_3114_);
lean_ctor_set(v_reuseFailAlloc_3135_, 2, v___x_3118_);
lean_ctor_set(v_reuseFailAlloc_3135_, 3, v___x_3121_);
v___x_3131_ = v_reuseFailAlloc_3135_;
goto v_reusejp_3130_;
}
v_reusejp_3130_:
{
lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; 
lean_ctor_set_uint8(v___x_3131_, sizeof(void*)*4, v___x_3127_);
v___x_3132_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3129_, v___x_3131_);
v___x_3133_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3133_, 0, v___x_3128_);
lean_ctor_set(v___x_3133_, 1, v___x_3132_);
lean_ctor_set(v___x_3133_, 2, v___x_3126_);
v___x_3134_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3118_, v___x_3133_);
return v___x_3134_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___boxed(lean_object* v_newParserState_3140_, lean_object* v_cmdState_3141_, lean_object* v_a_3142_, lean_object* v_toSnapshot_3143_, lean_object* v_newStx_3144_, lean_object* v_oldCmd_3145_, lean_object* v___y_3146_){
_start:
{
lean_object* v_res_3147_; 
v_res_3147_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0(v_newParserState_3140_, v_cmdState_3141_, v_a_3142_, v_toSnapshot_3143_, v_newStx_3144_, v_oldCmd_3145_);
lean_dec_ref(v_a_3142_);
return v_res_3147_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__1(lean_object* v_newParserState_3148_, lean_object* v_a_3149_, lean_object* v_newStx_3150_, lean_object* v___x_3151_, lean_object* v_oldProcessed_3152_){
_start:
{
lean_object* v_result_x3f_3154_; 
v_result_x3f_3154_ = lean_ctor_get(v_oldProcessed_3152_, 2);
if (lean_obj_tag(v_result_x3f_3154_) == 1)
{
lean_object* v_val_3155_; lean_object* v_firstCmdSnap_3156_; lean_object* v_toSnapshot_3157_; lean_object* v_cmdState_3158_; lean_object* v_stx_x3f_3159_; lean_object* v___f_3160_; lean_object* v___x_3161_; uint8_t v___x_3162_; lean_object* v___x_3163_; 
v_val_3155_ = lean_ctor_get(v_result_x3f_3154_, 0);
lean_inc(v_val_3155_);
v_firstCmdSnap_3156_ = lean_ctor_get(v_val_3155_, 1);
lean_inc_ref(v_firstCmdSnap_3156_);
v_toSnapshot_3157_ = lean_ctor_get(v_oldProcessed_3152_, 0);
lean_inc_ref(v_toSnapshot_3157_);
lean_dec_ref(v_oldProcessed_3152_);
v_cmdState_3158_ = lean_ctor_get(v_val_3155_, 0);
lean_inc_ref(v_cmdState_3158_);
lean_dec(v_val_3155_);
v_stx_x3f_3159_ = lean_ctor_get(v_firstCmdSnap_3156_, 0);
lean_inc(v_stx_x3f_3159_);
lean_inc_ref(v_a_3149_);
v___f_3160_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___boxed), 7, 5);
lean_closure_set(v___f_3160_, 0, v_newParserState_3148_);
lean_closure_set(v___f_3160_, 1, v_cmdState_3158_);
lean_closure_set(v___f_3160_, 2, v_a_3149_);
lean_closure_set(v___f_3160_, 3, v_toSnapshot_3157_);
lean_closure_set(v___f_3160_, 4, v_newStx_3150_);
v___x_3161_ = lean_box(0);
v___x_3162_ = 1;
v___x_3163_ = l_Lean_Language_SnapshotTask_bindIO___redArg(v_firstCmdSnap_3156_, v___f_3160_, v_stx_x3f_3159_, v___x_3151_, v___x_3161_, v___x_3162_);
return v___x_3163_;
}
else
{
lean_object* v___x_3164_; lean_object* v___x_3165_; 
lean_dec(v___x_3151_);
lean_dec_ref(v_newParserState_3148_);
v___x_3164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3164_, 0, v_newStx_3150_);
v___x_3165_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3164_, v_oldProcessed_3152_);
return v___x_3165_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__1___boxed(lean_object* v_newParserState_3166_, lean_object* v_a_3167_, lean_object* v_newStx_3168_, lean_object* v___x_3169_, lean_object* v_oldProcessed_3170_, lean_object* v___y_3171_){
_start:
{
lean_object* v_res_3172_; 
v_res_3172_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__1(v_newParserState_3166_, v_a_3167_, v_newStx_3168_, v___x_3169_, v_oldProcessed_3170_);
lean_dec_ref(v_a_3167_);
return v_res_3172_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___closed__0(void){
_start:
{
uint8_t v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; 
v___x_3173_ = 0;
v___x_3174_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_3175_ = lean_box(0);
v___x_3176_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_3177_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3);
v___x_3178_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3178_, 0, v___x_3177_);
lean_ctor_set(v___x_3178_, 1, v___x_3176_);
lean_ctor_set(v___x_3178_, 2, v___x_3175_);
lean_ctor_set(v___x_3178_, 3, v___x_3174_);
lean_ctor_set_uint8(v___x_3178_, sizeof(void*)*4, v___x_3173_);
return v___x_3178_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2(lean_object* v_toProcessingContext_3179_, lean_object* v_a_3180_, lean_object* v_old_3181_, lean_object* v_newStx_3182_, lean_object* v_newParserState_3183_, lean_object* v___y_3184_){
_start:
{
lean_object* v_result_x3f_3186_; 
v_result_x3f_3186_ = lean_ctor_get(v_old_3181_, 4);
lean_inc(v_result_x3f_3186_);
if (lean_obj_tag(v_result_x3f_3186_) == 1)
{
lean_object* v_val_3187_; lean_object* v___x_3189_; uint8_t v_isShared_3190_; uint8_t v_isSharedCheck_3241_; 
v_val_3187_ = lean_ctor_get(v_result_x3f_3186_, 0);
v_isSharedCheck_3241_ = !lean_is_exclusive(v_result_x3f_3186_);
if (v_isSharedCheck_3241_ == 0)
{
v___x_3189_ = v_result_x3f_3186_;
v_isShared_3190_ = v_isSharedCheck_3241_;
goto v_resetjp_3188_;
}
else
{
lean_inc(v_val_3187_);
lean_dec(v_result_x3f_3186_);
v___x_3189_ = lean_box(0);
v_isShared_3190_ = v_isSharedCheck_3241_;
goto v_resetjp_3188_;
}
v_resetjp_3188_:
{
lean_object* v_processedSnap_3191_; lean_object* v___x_3193_; uint8_t v_isShared_3194_; uint8_t v_isSharedCheck_3239_; 
v_processedSnap_3191_ = lean_ctor_get(v_val_3187_, 1);
v_isSharedCheck_3239_ = !lean_is_exclusive(v_val_3187_);
if (v_isSharedCheck_3239_ == 0)
{
lean_object* v_unused_3240_; 
v_unused_3240_ = lean_ctor_get(v_val_3187_, 0);
lean_dec(v_unused_3240_);
v___x_3193_ = v_val_3187_;
v_isShared_3194_ = v_isSharedCheck_3239_;
goto v_resetjp_3192_;
}
else
{
lean_inc(v_processedSnap_3191_);
lean_dec(v_val_3187_);
v___x_3193_ = lean_box(0);
v_isShared_3194_ = v_isSharedCheck_3239_;
goto v_resetjp_3192_;
}
v_resetjp_3192_:
{
lean_object* v_toSnapshot_3195_; lean_object* v___x_3197_; uint8_t v_isShared_3198_; uint8_t v_isSharedCheck_3234_; 
v_toSnapshot_3195_ = lean_ctor_get(v_old_3181_, 0);
v_isSharedCheck_3234_ = !lean_is_exclusive(v_old_3181_);
if (v_isSharedCheck_3234_ == 0)
{
lean_object* v_unused_3235_; lean_object* v_unused_3236_; lean_object* v_unused_3237_; lean_object* v_unused_3238_; 
v_unused_3235_ = lean_ctor_get(v_old_3181_, 4);
lean_dec(v_unused_3235_);
v_unused_3236_ = lean_ctor_get(v_old_3181_, 3);
lean_dec(v_unused_3236_);
v_unused_3237_ = lean_ctor_get(v_old_3181_, 2);
lean_dec(v_unused_3237_);
v_unused_3238_ = lean_ctor_get(v_old_3181_, 1);
lean_dec(v_unused_3238_);
v___x_3197_ = v_old_3181_;
v_isShared_3198_ = v_isSharedCheck_3234_;
goto v_resetjp_3196_;
}
else
{
lean_inc(v_toSnapshot_3195_);
lean_dec(v_old_3181_);
v___x_3197_ = lean_box(0);
v_isShared_3198_ = v_isSharedCheck_3234_;
goto v_resetjp_3196_;
}
v_resetjp_3196_:
{
lean_object* v_pos_3199_; lean_object* v_endPos_3200_; lean_object* v_stx_x3f_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___f_3204_; lean_object* v___x_3205_; uint8_t v___x_3206_; lean_object* v___x_3207_; lean_object* v_diagnostics_3208_; lean_object* v___x_3210_; uint8_t v_isShared_3211_; uint8_t v_isSharedCheck_3230_; 
v_pos_3199_ = lean_ctor_get(v_newParserState_3183_, 0);
v_endPos_3200_ = lean_ctor_get(v_toProcessingContext_3179_, 3);
v_stx_x3f_3201_ = lean_ctor_get(v_processedSnap_3191_, 0);
lean_inc(v_stx_x3f_3201_);
lean_inc(v_endPos_3200_);
lean_inc(v_pos_3199_);
v___x_3202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3202_, 0, v_pos_3199_);
lean_ctor_set(v___x_3202_, 1, v_endPos_3200_);
v___x_3203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3203_, 0, v___x_3202_);
lean_inc_ref(v___x_3203_);
lean_inc(v_newStx_3182_);
lean_inc_ref(v_a_3180_);
lean_inc_ref(v_newParserState_3183_);
v___f_3204_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__1___boxed), 6, 4);
lean_closure_set(v___f_3204_, 0, v_newParserState_3183_);
lean_closure_set(v___f_3204_, 1, v_a_3180_);
lean_closure_set(v___f_3204_, 2, v_newStx_3182_);
lean_closure_set(v___f_3204_, 3, v___x_3203_);
v___x_3205_ = lean_box(0);
v___x_3206_ = 1;
v___x_3207_ = l_Lean_Language_SnapshotTask_bindIO___redArg(v_processedSnap_3191_, v___f_3204_, v_stx_x3f_3201_, v___x_3203_, v___x_3205_, v___x_3206_);
v_diagnostics_3208_ = lean_ctor_get(v_toSnapshot_3195_, 1);
v_isSharedCheck_3230_ = !lean_is_exclusive(v_toSnapshot_3195_);
if (v_isSharedCheck_3230_ == 0)
{
lean_object* v_unused_3231_; lean_object* v_unused_3232_; lean_object* v_unused_3233_; 
v_unused_3231_ = lean_ctor_get(v_toSnapshot_3195_, 3);
lean_dec(v_unused_3231_);
v_unused_3232_ = lean_ctor_get(v_toSnapshot_3195_, 2);
lean_dec(v_unused_3232_);
v_unused_3233_ = lean_ctor_get(v_toSnapshot_3195_, 0);
lean_dec(v_unused_3233_);
v___x_3210_ = v_toSnapshot_3195_;
v_isShared_3211_ = v_isSharedCheck_3230_;
goto v_resetjp_3209_;
}
else
{
lean_inc(v_diagnostics_3208_);
lean_dec(v_toSnapshot_3195_);
v___x_3210_ = lean_box(0);
v_isShared_3211_ = v_isSharedCheck_3230_;
goto v_resetjp_3209_;
}
v_resetjp_3209_:
{
lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3215_; 
v___x_3212_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3);
v___x_3213_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
if (v_isShared_3194_ == 0)
{
lean_ctor_set(v___x_3193_, 1, v___x_3207_);
lean_ctor_set(v___x_3193_, 0, v_newParserState_3183_);
v___x_3215_ = v___x_3193_;
goto v_reusejp_3214_;
}
else
{
lean_object* v_reuseFailAlloc_3229_; 
v_reuseFailAlloc_3229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3229_, 0, v_newParserState_3183_);
lean_ctor_set(v_reuseFailAlloc_3229_, 1, v___x_3207_);
v___x_3215_ = v_reuseFailAlloc_3229_;
goto v_reusejp_3214_;
}
v_reusejp_3214_:
{
lean_object* v___x_3217_; 
if (v_isShared_3190_ == 0)
{
lean_ctor_set(v___x_3189_, 0, v___x_3215_);
v___x_3217_ = v___x_3189_;
goto v_reusejp_3216_;
}
else
{
lean_object* v_reuseFailAlloc_3228_; 
v_reuseFailAlloc_3228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3228_, 0, v___x_3215_);
v___x_3217_ = v_reuseFailAlloc_3228_;
goto v_reusejp_3216_;
}
v_reusejp_3216_:
{
uint8_t v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3222_; 
v___x_3218_ = 0;
v___x_3219_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___closed__0);
lean_inc(v_newStx_3182_);
v___x_3220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3220_, 0, v_newStx_3182_);
if (v_isShared_3211_ == 0)
{
lean_ctor_set(v___x_3210_, 3, v___x_3213_);
lean_ctor_set(v___x_3210_, 2, v___x_3205_);
lean_ctor_set(v___x_3210_, 0, v___x_3212_);
v___x_3222_ = v___x_3210_;
goto v_reusejp_3221_;
}
else
{
lean_object* v_reuseFailAlloc_3227_; 
v_reuseFailAlloc_3227_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_3227_, 0, v___x_3212_);
lean_ctor_set(v_reuseFailAlloc_3227_, 1, v_diagnostics_3208_);
lean_ctor_set(v_reuseFailAlloc_3227_, 2, v___x_3205_);
lean_ctor_set(v_reuseFailAlloc_3227_, 3, v___x_3213_);
v___x_3222_ = v_reuseFailAlloc_3227_;
goto v_reusejp_3221_;
}
v_reusejp_3221_:
{
lean_object* v___x_3223_; lean_object* v___x_3225_; 
lean_ctor_set_uint8(v___x_3222_, sizeof(void*)*4, v___x_3218_);
v___x_3223_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3220_, v___x_3222_);
if (v_isShared_3198_ == 0)
{
lean_ctor_set(v___x_3197_, 4, v___x_3217_);
lean_ctor_set(v___x_3197_, 3, v_newStx_3182_);
lean_ctor_set(v___x_3197_, 2, v_toProcessingContext_3179_);
lean_ctor_set(v___x_3197_, 1, v___x_3223_);
lean_ctor_set(v___x_3197_, 0, v___x_3219_);
v___x_3225_ = v___x_3197_;
goto v_reusejp_3224_;
}
else
{
lean_object* v_reuseFailAlloc_3226_; 
v_reuseFailAlloc_3226_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3226_, 0, v___x_3219_);
lean_ctor_set(v_reuseFailAlloc_3226_, 1, v___x_3223_);
lean_ctor_set(v_reuseFailAlloc_3226_, 2, v_toProcessingContext_3179_);
lean_ctor_set(v_reuseFailAlloc_3226_, 3, v_newStx_3182_);
lean_ctor_set(v_reuseFailAlloc_3226_, 4, v___x_3217_);
v___x_3225_ = v_reuseFailAlloc_3226_;
goto v_reusejp_3224_;
}
v_reusejp_3224_:
{
return v___x_3225_;
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
lean_dec(v_result_x3f_3186_);
lean_dec_ref(v_newParserState_3183_);
lean_dec(v_newStx_3182_);
lean_dec_ref(v_toProcessingContext_3179_);
return v_old_3181_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___boxed(lean_object* v_toProcessingContext_3242_, lean_object* v_a_3243_, lean_object* v_old_3244_, lean_object* v_newStx_3245_, lean_object* v_newParserState_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_){
_start:
{
lean_object* v_res_3249_; 
v_res_3249_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2(v_toProcessingContext_3242_, v_a_3243_, v_old_3244_, v_newStx_3245_, v_newParserState_3246_, v___y_3247_);
lean_dec_ref(v___y_3247_);
lean_dec_ref(v_a_3243_);
return v_res_3249_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__3(lean_object* v_toProcessingContext_3250_, lean_object* v_setupImports_3251_, lean_object* v_old_x3f_3252_, lean_object* v___x_3253_, lean_object* v___f_3254_, lean_object* v___y_3255_){
_start:
{
lean_object* v___x_3257_; 
lean_inc_ref(v_toProcessingContext_3250_);
v___x_3257_ = l_Lean_Parser_parseHeader(v_toProcessingContext_3250_);
if (lean_obj_tag(v___x_3257_) == 0)
{
lean_object* v_a_3258_; lean_object* v___x_3260_; uint8_t v_isShared_3261_; uint8_t v_isSharedCheck_3326_; 
v_a_3258_ = lean_ctor_get(v___x_3257_, 0);
v_isSharedCheck_3326_ = !lean_is_exclusive(v___x_3257_);
if (v_isSharedCheck_3326_ == 0)
{
v___x_3260_ = v___x_3257_;
v_isShared_3261_ = v_isSharedCheck_3326_;
goto v_resetjp_3259_;
}
else
{
lean_inc(v_a_3258_);
lean_dec(v___x_3257_);
v___x_3260_ = lean_box(0);
v_isShared_3261_ = v_isSharedCheck_3326_;
goto v_resetjp_3259_;
}
v_resetjp_3259_:
{
lean_object* v_snd_3262_; lean_object* v_fst_3263_; lean_object* v_fst_3264_; lean_object* v_snd_3265_; lean_object* v___x_3267_; uint8_t v_isShared_3268_; uint8_t v_isSharedCheck_3325_; 
v_snd_3262_ = lean_ctor_get(v_a_3258_, 1);
lean_inc(v_snd_3262_);
v_fst_3263_ = lean_ctor_get(v_a_3258_, 0);
lean_inc(v_fst_3263_);
lean_dec(v_a_3258_);
v_fst_3264_ = lean_ctor_get(v_snd_3262_, 0);
v_snd_3265_ = lean_ctor_get(v_snd_3262_, 1);
v_isSharedCheck_3325_ = !lean_is_exclusive(v_snd_3262_);
if (v_isSharedCheck_3325_ == 0)
{
v___x_3267_ = v_snd_3262_;
v_isShared_3268_ = v_isSharedCheck_3325_;
goto v_resetjp_3266_;
}
else
{
lean_inc(v_snd_3265_);
lean_inc(v_fst_3264_);
lean_dec(v_snd_3262_);
v___x_3267_ = lean_box(0);
v_isShared_3268_ = v_isSharedCheck_3325_;
goto v_resetjp_3266_;
}
v_resetjp_3266_:
{
uint8_t v___x_3269_; 
v___x_3269_ = l_Lean_MessageLog_hasErrors(v_snd_3265_);
if (v___x_3269_ == 0)
{
lean_object* v___x_3270_; lean_object* v___y_3272_; 
lean_inc(v_fst_3263_);
v___x_3270_ = l_Lean_Syntax_unsetTrailing(v_fst_3263_);
if (lean_obj_tag(v_old_x3f_3252_) == 1)
{
lean_object* v_val_3293_; lean_object* v___x_3295_; uint8_t v_isShared_3296_; uint8_t v_isSharedCheck_3308_; 
v_val_3293_ = lean_ctor_get(v_old_x3f_3252_, 0);
v_isSharedCheck_3308_ = !lean_is_exclusive(v_old_x3f_3252_);
if (v_isSharedCheck_3308_ == 0)
{
v___x_3295_ = v_old_x3f_3252_;
v_isShared_3296_ = v_isSharedCheck_3308_;
goto v_resetjp_3294_;
}
else
{
lean_inc(v_val_3293_);
lean_dec(v_old_x3f_3252_);
v___x_3295_ = lean_box(0);
v_isShared_3296_ = v_isSharedCheck_3308_;
goto v_resetjp_3294_;
}
v_resetjp_3294_:
{
lean_object* v_stx_3297_; lean_object* v_result_x3f_3298_; lean_object* v___x_3299_; uint8_t v___x_3300_; 
v_stx_3297_ = lean_ctor_get(v_val_3293_, 3);
v_result_x3f_3298_ = lean_ctor_get(v_val_3293_, 4);
lean_inc(v_stx_3297_);
v___x_3299_ = l_Lean_Syntax_unsetTrailing(v_stx_3297_);
lean_inc(v___x_3270_);
v___x_3300_ = l_Lean_Syntax_eqWithInfo(v___x_3270_, v___x_3299_);
if (v___x_3300_ == 0)
{
lean_inc(v_result_x3f_3298_);
lean_del_object(v___x_3295_);
lean_dec(v_val_3293_);
lean_dec_ref(v___f_3254_);
if (lean_obj_tag(v_result_x3f_3298_) == 0)
{
lean_dec_ref(v___x_3253_);
v___y_3272_ = v___y_3255_;
goto v___jp_3271_;
}
else
{
lean_object* v_val_3301_; lean_object* v_processedSnap_3302_; lean_object* v___x_3303_; 
v_val_3301_ = lean_ctor_get(v_result_x3f_3298_, 0);
lean_inc(v_val_3301_);
lean_dec_ref_known(v_result_x3f_3298_, 1);
v_processedSnap_3302_ = lean_ctor_get(v_val_3301_, 1);
lean_inc_ref(v_processedSnap_3302_);
lean_dec(v_val_3301_);
v___x_3303_ = l_Lean_Language_SnapshotTask_cancelRec___redArg(v___x_3253_, v_processedSnap_3302_);
v___y_3272_ = v___y_3255_;
goto v___jp_3271_;
}
}
else
{
lean_object* v___x_3304_; lean_object* v___x_3306_; 
lean_dec(v___x_3270_);
lean_del_object(v___x_3267_);
lean_dec(v_snd_3265_);
lean_del_object(v___x_3260_);
lean_dec_ref(v___x_3253_);
lean_dec_ref(v_setupImports_3251_);
lean_dec_ref(v_toProcessingContext_3250_);
lean_inc_ref(v___y_3255_);
v___x_3304_ = lean_apply_5(v___f_3254_, v_val_3293_, v_fst_3263_, v_fst_3264_, v___y_3255_, lean_box(0));
if (v_isShared_3296_ == 0)
{
lean_ctor_set_tag(v___x_3295_, 0);
lean_ctor_set(v___x_3295_, 0, v___x_3304_);
v___x_3306_ = v___x_3295_;
goto v_reusejp_3305_;
}
else
{
lean_object* v_reuseFailAlloc_3307_; 
v_reuseFailAlloc_3307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3307_, 0, v___x_3304_);
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
lean_dec_ref(v___f_3254_);
lean_dec_ref(v___x_3253_);
lean_dec(v_old_x3f_3252_);
v___y_3272_ = v___y_3255_;
goto v___jp_3271_;
}
v___jp_3271_:
{
lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3282_; 
v___x_3273_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_snd_3265_);
lean_inc(v_fst_3264_);
lean_inc(v_fst_3263_);
v___x_3274_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader(v_setupImports_3251_, v___x_3270_, v_fst_3263_, v_fst_3264_, v___y_3272_);
v___x_3275_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3);
v___x_3276_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_3277_ = lean_box(0);
v___x_3278_ = lean_unsigned_to_nat(32u);
v___x_3279_ = lean_mk_empty_array_with_capacity(v___x_3278_);
lean_dec_ref(v___x_3279_);
v___x_3280_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
if (v_isShared_3268_ == 0)
{
lean_ctor_set(v___x_3267_, 1, v___x_3274_);
v___x_3282_ = v___x_3267_;
goto v_reusejp_3281_;
}
else
{
lean_object* v_reuseFailAlloc_3292_; 
v_reuseFailAlloc_3292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3292_, 0, v_fst_3264_);
lean_ctor_set(v_reuseFailAlloc_3292_, 1, v___x_3274_);
v___x_3282_ = v_reuseFailAlloc_3292_;
goto v_reusejp_3281_;
}
v_reusejp_3281_:
{
lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3290_; 
v___x_3283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3283_, 0, v___x_3282_);
v___x_3284_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3284_, 0, v___x_3275_);
lean_ctor_set(v___x_3284_, 1, v___x_3276_);
lean_ctor_set(v___x_3284_, 2, v___x_3277_);
lean_ctor_set(v___x_3284_, 3, v___x_3280_);
lean_ctor_set_uint8(v___x_3284_, sizeof(void*)*4, v___x_3269_);
lean_inc(v_fst_3263_);
v___x_3285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3285_, 0, v_fst_3263_);
v___x_3286_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3286_, 0, v___x_3275_);
lean_ctor_set(v___x_3286_, 1, v___x_3273_);
lean_ctor_set(v___x_3286_, 2, v___x_3277_);
lean_ctor_set(v___x_3286_, 3, v___x_3280_);
lean_ctor_set_uint8(v___x_3286_, sizeof(void*)*4, v___x_3269_);
v___x_3287_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3285_, v___x_3286_);
v___x_3288_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3288_, 0, v___x_3284_);
lean_ctor_set(v___x_3288_, 1, v___x_3287_);
lean_ctor_set(v___x_3288_, 2, v_toProcessingContext_3250_);
lean_ctor_set(v___x_3288_, 3, v_fst_3263_);
lean_ctor_set(v___x_3288_, 4, v___x_3283_);
if (v_isShared_3261_ == 0)
{
lean_ctor_set(v___x_3260_, 0, v___x_3288_);
v___x_3290_ = v___x_3260_;
goto v_reusejp_3289_;
}
else
{
lean_object* v_reuseFailAlloc_3291_; 
v_reuseFailAlloc_3291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3291_, 0, v___x_3288_);
v___x_3290_ = v_reuseFailAlloc_3291_;
goto v_reusejp_3289_;
}
v_reusejp_3289_:
{
return v___x_3290_;
}
}
}
}
else
{
lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; uint8_t v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3323_; 
lean_del_object(v___x_3267_);
lean_dec(v_fst_3264_);
lean_dec_ref(v___f_3254_);
lean_dec_ref(v___x_3253_);
lean_dec(v_old_x3f_3252_);
lean_dec_ref(v_setupImports_3251_);
v___x_3309_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_snd_3265_);
v___x_3310_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3);
v___x_3311_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_3312_ = lean_box(0);
v___x_3313_ = lean_unsigned_to_nat(32u);
v___x_3314_ = lean_mk_empty_array_with_capacity(v___x_3313_);
lean_dec_ref(v___x_3314_);
v___x_3315_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_3316_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3316_, 0, v___x_3310_);
lean_ctor_set(v___x_3316_, 1, v___x_3311_);
lean_ctor_set(v___x_3316_, 2, v___x_3312_);
lean_ctor_set(v___x_3316_, 3, v___x_3315_);
lean_ctor_set_uint8(v___x_3316_, sizeof(void*)*4, v___x_3269_);
lean_inc(v_fst_3263_);
v___x_3317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3317_, 0, v_fst_3263_);
v___x_3318_ = 0;
v___x_3319_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3319_, 0, v___x_3310_);
lean_ctor_set(v___x_3319_, 1, v___x_3309_);
lean_ctor_set(v___x_3319_, 2, v___x_3312_);
lean_ctor_set(v___x_3319_, 3, v___x_3315_);
lean_ctor_set_uint8(v___x_3319_, sizeof(void*)*4, v___x_3318_);
v___x_3320_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3317_, v___x_3319_);
v___x_3321_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3321_, 0, v___x_3316_);
lean_ctor_set(v___x_3321_, 1, v___x_3320_);
lean_ctor_set(v___x_3321_, 2, v_toProcessingContext_3250_);
lean_ctor_set(v___x_3321_, 3, v_fst_3263_);
lean_ctor_set(v___x_3321_, 4, v___x_3312_);
if (v_isShared_3261_ == 0)
{
lean_ctor_set(v___x_3260_, 0, v___x_3321_);
v___x_3323_ = v___x_3260_;
goto v_reusejp_3322_;
}
else
{
lean_object* v_reuseFailAlloc_3324_; 
v_reuseFailAlloc_3324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3324_, 0, v___x_3321_);
v___x_3323_ = v_reuseFailAlloc_3324_;
goto v_reusejp_3322_;
}
v_reusejp_3322_:
{
return v___x_3323_;
}
}
}
}
}
else
{
lean_object* v_a_3327_; lean_object* v___x_3329_; uint8_t v_isShared_3330_; uint8_t v_isSharedCheck_3334_; 
lean_dec_ref(v___f_3254_);
lean_dec_ref(v___x_3253_);
lean_dec(v_old_x3f_3252_);
lean_dec_ref(v_setupImports_3251_);
lean_dec_ref(v_toProcessingContext_3250_);
v_a_3327_ = lean_ctor_get(v___x_3257_, 0);
v_isSharedCheck_3334_ = !lean_is_exclusive(v___x_3257_);
if (v_isSharedCheck_3334_ == 0)
{
v___x_3329_ = v___x_3257_;
v_isShared_3330_ = v_isSharedCheck_3334_;
goto v_resetjp_3328_;
}
else
{
lean_inc(v_a_3327_);
lean_dec(v___x_3257_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__3___boxed(lean_object* v_toProcessingContext_3335_, lean_object* v_setupImports_3336_, lean_object* v_old_x3f_3337_, lean_object* v___x_3338_, lean_object* v___f_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_){
_start:
{
lean_object* v_res_3342_; 
v_res_3342_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__3(v_toProcessingContext_3335_, v_setupImports_3336_, v_old_x3f_3337_, v___x_3338_, v___f_3339_, v___y_3340_);
lean_dec_ref(v___y_3340_);
return v_res_3342_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__4(lean_object* v___x_3343_, lean_object* v_toProcessingContext_3344_, lean_object* v_x_3345_){
_start:
{
lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; 
v___x_3346_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v___x_3343_);
v___x_3347_ = lean_box(0);
v___x_3348_ = lean_box(0);
v___x_3349_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3349_, 0, v_x_3345_);
lean_ctor_set(v___x_3349_, 1, v___x_3346_);
lean_ctor_set(v___x_3349_, 2, v_toProcessingContext_3344_);
lean_ctor_set(v___x_3349_, 3, v___x_3347_);
lean_ctor_set(v___x_3349_, 4, v___x_3348_);
return v___x_3349_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader(lean_object* v_setupImports_3350_, lean_object* v_old_x3f_3351_, lean_object* v_a_3352_){
_start:
{
lean_object* v_toProcessingContext_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___f_3357_; lean_object* v___f_3358_; lean_object* v___f_3359_; 
v_toProcessingContext_3354_ = lean_ctor_get(v_a_3352_, 0);
v___x_3355_ = l_Lean_Language_instInhabitedSnapshotLeaf;
v___x_3356_ = l_Lean_Language_Lean_instToSnapshotTreeHeaderProcessedSnapshot;
lean_inc_ref(v_a_3352_);
lean_inc_ref_n(v_toProcessingContext_3354_, 3);
v___f_3357_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___boxed), 7, 2);
lean_closure_set(v___f_3357_, 0, v_toProcessingContext_3354_);
lean_closure_set(v___f_3357_, 1, v_a_3352_);
lean_inc(v_old_x3f_3351_);
v___f_3358_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__3___boxed), 7, 5);
lean_closure_set(v___f_3358_, 0, v_toProcessingContext_3354_);
lean_closure_set(v___f_3358_, 1, v_setupImports_3350_);
lean_closure_set(v___f_3358_, 2, v_old_x3f_3351_);
lean_closure_set(v___f_3358_, 3, v___x_3356_);
lean_closure_set(v___f_3358_, 4, v___f_3357_);
v___f_3359_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__4), 3, 2);
lean_closure_set(v___f_3359_, 0, v___x_3355_);
lean_closure_set(v___f_3359_, 1, v_toProcessingContext_3354_);
if (lean_obj_tag(v_old_x3f_3351_) == 1)
{
lean_object* v_val_3360_; lean_object* v_result_x3f_3361_; 
v_val_3360_ = lean_ctor_get(v_old_x3f_3351_, 0);
lean_inc(v_val_3360_);
lean_dec_ref_known(v_old_x3f_3351_, 1);
v_result_x3f_3361_ = lean_ctor_get(v_val_3360_, 4);
if (lean_obj_tag(v_result_x3f_3361_) == 1)
{
lean_object* v_stx_3362_; lean_object* v_val_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; 
v_stx_3362_ = lean_ctor_get(v_val_3360_, 3);
lean_inc(v_stx_3362_);
v_val_3363_ = lean_ctor_get(v_result_x3f_3361_, 0);
lean_inc(v_val_3360_);
v___x_3364_ = l_Lean_Language_Lean_HeaderParsedSnapshot_processedResult(v_val_3360_);
v___x_3365_ = l_Lean_Language_SnapshotTask_get_x3f___redArg(v___x_3364_);
if (lean_obj_tag(v___x_3365_) == 1)
{
lean_object* v_val_3366_; 
v_val_3366_ = lean_ctor_get(v___x_3365_, 0);
lean_inc(v_val_3366_);
lean_dec_ref_known(v___x_3365_, 1);
if (lean_obj_tag(v_val_3366_) == 1)
{
lean_object* v_val_3367_; lean_object* v_firstCmdSnap_3368_; lean_object* v___x_3369_; 
v_val_3367_ = lean_ctor_get(v_val_3366_, 0);
lean_inc(v_val_3367_);
lean_dec_ref_known(v_val_3366_, 1);
v_firstCmdSnap_3368_ = lean_ctor_get(v_val_3367_, 1);
lean_inc_ref(v_firstCmdSnap_3368_);
lean_dec(v_val_3367_);
v___x_3369_ = l_Lean_Language_SnapshotTask_get_x3f___redArg(v_firstCmdSnap_3368_);
if (lean_obj_tag(v___x_3369_) == 1)
{
lean_object* v_val_3370_; lean_object* v_nextCmdSnap_x3f_3371_; 
v_val_3370_ = lean_ctor_get(v___x_3369_, 0);
lean_inc(v_val_3370_);
lean_dec_ref_known(v___x_3369_, 1);
v_nextCmdSnap_x3f_3371_ = lean_ctor_get(v_val_3370_, 4);
lean_inc(v_nextCmdSnap_x3f_3371_);
lean_dec(v_val_3370_);
if (lean_obj_tag(v_nextCmdSnap_x3f_3371_) == 0)
{
lean_object* v___x_3372_; 
lean_dec(v_stx_3362_);
lean_dec(v_val_3360_);
v___x_3372_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3359_, v___f_3358_, v_a_3352_);
return v___x_3372_;
}
else
{
lean_object* v_val_3373_; lean_object* v___x_3374_; 
v_val_3373_ = lean_ctor_get(v_nextCmdSnap_x3f_3371_, 0);
lean_inc(v_val_3373_);
lean_dec_ref_known(v_nextCmdSnap_x3f_3371_, 1);
v___x_3374_ = l_Lean_Language_SnapshotTask_get_x3f___redArg(v_val_3373_);
if (lean_obj_tag(v___x_3374_) == 1)
{
lean_object* v_val_3375_; lean_object* v_parserState_3376_; lean_object* v_pos_3377_; uint8_t v___x_3378_; 
v_val_3375_ = lean_ctor_get(v___x_3374_, 0);
lean_inc(v_val_3375_);
lean_dec_ref_known(v___x_3374_, 1);
v_parserState_3376_ = lean_ctor_get(v_val_3375_, 2);
lean_inc_ref(v_parserState_3376_);
lean_dec(v_val_3375_);
v_pos_3377_ = lean_ctor_get(v_parserState_3376_, 0);
lean_inc(v_pos_3377_);
lean_dec_ref(v_parserState_3376_);
v___x_3378_ = l_Lean_Language_Lean_isBeforeEditPos(v_pos_3377_, v_a_3352_);
lean_dec(v_pos_3377_);
if (v___x_3378_ == 0)
{
lean_object* v___x_3379_; 
lean_dec(v_stx_3362_);
lean_dec(v_val_3360_);
v___x_3379_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3359_, v___f_3358_, v_a_3352_);
return v___x_3379_;
}
else
{
lean_object* v_parserState_3380_; lean_object* v___x_3381_; 
lean_dec_ref(v___f_3359_);
lean_dec_ref(v___f_3358_);
v_parserState_3380_ = lean_ctor_get(v_val_3363_, 0);
lean_inc_ref(v_parserState_3380_);
lean_inc_ref(v_toProcessingContext_3354_);
v___x_3381_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2(v_toProcessingContext_3354_, v_a_3352_, v_val_3360_, v_stx_3362_, v_parserState_3380_, v_a_3352_);
return v___x_3381_;
}
}
else
{
lean_object* v___x_3382_; 
lean_dec(v___x_3374_);
lean_dec(v_stx_3362_);
lean_dec(v_val_3360_);
v___x_3382_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3359_, v___f_3358_, v_a_3352_);
return v___x_3382_;
}
}
}
else
{
lean_object* v___x_3383_; 
lean_dec(v___x_3369_);
lean_dec(v_stx_3362_);
lean_dec(v_val_3360_);
v___x_3383_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3359_, v___f_3358_, v_a_3352_);
return v___x_3383_;
}
}
else
{
lean_object* v___x_3384_; 
lean_dec(v_val_3366_);
lean_dec(v_stx_3362_);
lean_dec(v_val_3360_);
v___x_3384_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3359_, v___f_3358_, v_a_3352_);
return v___x_3384_;
}
}
else
{
lean_object* v___x_3385_; 
lean_dec(v___x_3365_);
lean_dec(v_stx_3362_);
lean_dec(v_val_3360_);
v___x_3385_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3359_, v___f_3358_, v_a_3352_);
return v___x_3385_;
}
}
else
{
lean_object* v___x_3386_; 
lean_dec(v_val_3360_);
v___x_3386_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3359_, v___f_3358_, v_a_3352_);
return v___x_3386_;
}
}
else
{
lean_object* v___x_3387_; 
lean_dec(v_old_x3f_3351_);
v___x_3387_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3359_, v___f_3358_, v_a_3352_);
return v___x_3387_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___boxed(lean_object* v_setupImports_3388_, lean_object* v_old_x3f_3389_, lean_object* v_a_3390_, lean_object* v_a_3391_){
_start:
{
lean_object* v_res_3392_; 
v_res_3392_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader(v_setupImports_3388_, v_old_x3f_3389_, v_a_3390_);
lean_dec_ref(v_a_3390_);
return v_res_3392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_process(lean_object* v_setupImports_3393_, lean_object* v_old_x3f_3394_, lean_object* v_a_3395_){
_start:
{
lean_object* v___x_3397_; 
lean_inc(v_old_x3f_3394_);
v___x_3397_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___boxed), 4, 2);
lean_closure_set(v___x_3397_, 0, v_setupImports_3393_);
lean_closure_set(v___x_3397_, 1, v_old_x3f_3394_);
if (lean_obj_tag(v_old_x3f_3394_) == 0)
{
lean_object* v___x_3398_; lean_object* v___x_3399_; 
v___x_3398_ = lean_box(0);
v___x_3399_ = l_Lean_Language_Lean_LeanProcessingM_run___redArg(v___x_3397_, v___x_3398_, v_a_3395_);
return v___x_3399_;
}
else
{
lean_object* v_val_3400_; lean_object* v___x_3402_; uint8_t v_isShared_3403_; uint8_t v_isSharedCheck_3409_; 
v_val_3400_ = lean_ctor_get(v_old_x3f_3394_, 0);
v_isSharedCheck_3409_ = !lean_is_exclusive(v_old_x3f_3394_);
if (v_isSharedCheck_3409_ == 0)
{
v___x_3402_ = v_old_x3f_3394_;
v_isShared_3403_ = v_isSharedCheck_3409_;
goto v_resetjp_3401_;
}
else
{
lean_inc(v_val_3400_);
lean_dec(v_old_x3f_3394_);
v___x_3402_ = lean_box(0);
v_isShared_3403_ = v_isSharedCheck_3409_;
goto v_resetjp_3401_;
}
v_resetjp_3401_:
{
lean_object* v_ictx_3404_; lean_object* v___x_3406_; 
v_ictx_3404_ = lean_ctor_get(v_val_3400_, 2);
lean_inc_ref(v_ictx_3404_);
lean_dec(v_val_3400_);
if (v_isShared_3403_ == 0)
{
lean_ctor_set(v___x_3402_, 0, v_ictx_3404_);
v___x_3406_ = v___x_3402_;
goto v_reusejp_3405_;
}
else
{
lean_object* v_reuseFailAlloc_3408_; 
v_reuseFailAlloc_3408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3408_, 0, v_ictx_3404_);
v___x_3406_ = v_reuseFailAlloc_3408_;
goto v_reusejp_3405_;
}
v_reusejp_3405_:
{
lean_object* v___x_3407_; 
v___x_3407_ = l_Lean_Language_Lean_LeanProcessingM_run___redArg(v___x_3397_, v___x_3406_, v_a_3395_);
return v___x_3407_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_process___boxed(lean_object* v_setupImports_3410_, lean_object* v_old_x3f_3411_, lean_object* v_a_3412_, lean_object* v_a_3413_){
_start:
{
lean_object* v_res_3414_; 
v_res_3414_ = l_Lean_Language_Lean_process(v_setupImports_3410_, v_old_x3f_3411_, v_a_3412_);
lean_dec_ref(v_a_3412_);
return v_res_3414_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_processCommands(lean_object* v_inputCtx_3415_, lean_object* v_parserState_3416_, lean_object* v_commandState_3417_, lean_object* v_old_x3f_3418_){
_start:
{
lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___y_3423_; lean_object* v___y_3424_; lean_object* v___y_3428_; 
v___x_3420_ = lean_io_promise_new();
v___x_3421_ = l_IO_CancelToken_new();
if (lean_obj_tag(v_old_x3f_3418_) == 0)
{
lean_object* v___x_3443_; 
v___x_3443_ = lean_box(0);
v___y_3428_ = v___x_3443_;
goto v___jp_3427_;
}
else
{
lean_object* v_val_3444_; lean_object* v_snd_3445_; lean_object* v___x_3446_; 
v_val_3444_ = lean_ctor_get(v_old_x3f_3418_, 0);
v_snd_3445_ = lean_ctor_get(v_val_3444_, 1);
lean_inc(v_snd_3445_);
v___x_3446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3446_, 0, v_snd_3445_);
v___y_3428_ = v___x_3446_;
goto v___jp_3427_;
}
v___jp_3422_:
{
lean_object* v___x_3425_; lean_object* v___x_3426_; 
v___x_3425_ = l_Lean_Language_Lean_LeanProcessingM_run___redArg(v___y_3423_, v___y_3424_, v_inputCtx_3415_);
lean_dec(v___x_3425_);
v___x_3426_ = l_IO_Promise_result_x21___redArg(v___x_3420_);
lean_dec(v___x_3420_);
return v___x_3426_;
}
v___jp_3427_:
{
uint8_t v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; 
v___x_3429_ = 1;
v___x_3430_ = lean_box(0);
v___x_3431_ = lean_box(v___x_3429_);
lean_inc(v___x_3420_);
v___x_3432_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___boxed), 9, 7);
lean_closure_set(v___x_3432_, 0, v___y_3428_);
lean_closure_set(v___x_3432_, 1, v_parserState_3416_);
lean_closure_set(v___x_3432_, 2, v_commandState_3417_);
lean_closure_set(v___x_3432_, 3, v___x_3420_);
lean_closure_set(v___x_3432_, 4, v___x_3431_);
lean_closure_set(v___x_3432_, 5, v___x_3421_);
lean_closure_set(v___x_3432_, 6, v___x_3430_);
if (lean_obj_tag(v_old_x3f_3418_) == 0)
{
lean_object* v___x_3433_; 
v___x_3433_ = lean_box(0);
v___y_3423_ = v___x_3432_;
v___y_3424_ = v___x_3433_;
goto v___jp_3422_;
}
else
{
lean_object* v_val_3434_; lean_object* v___x_3436_; uint8_t v_isShared_3437_; uint8_t v_isSharedCheck_3442_; 
v_val_3434_ = lean_ctor_get(v_old_x3f_3418_, 0);
v_isSharedCheck_3442_ = !lean_is_exclusive(v_old_x3f_3418_);
if (v_isSharedCheck_3442_ == 0)
{
v___x_3436_ = v_old_x3f_3418_;
v_isShared_3437_ = v_isSharedCheck_3442_;
goto v_resetjp_3435_;
}
else
{
lean_inc(v_val_3434_);
lean_dec(v_old_x3f_3418_);
v___x_3436_ = lean_box(0);
v_isShared_3437_ = v_isSharedCheck_3442_;
goto v_resetjp_3435_;
}
v_resetjp_3435_:
{
lean_object* v_fst_3438_; lean_object* v___x_3440_; 
v_fst_3438_ = lean_ctor_get(v_val_3434_, 0);
lean_inc(v_fst_3438_);
lean_dec(v_val_3434_);
if (v_isShared_3437_ == 0)
{
lean_ctor_set(v___x_3436_, 0, v_fst_3438_);
v___x_3440_ = v___x_3436_;
goto v_reusejp_3439_;
}
else
{
lean_object* v_reuseFailAlloc_3441_; 
v_reuseFailAlloc_3441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3441_, 0, v_fst_3438_);
v___x_3440_ = v_reuseFailAlloc_3441_;
goto v_reusejp_3439_;
}
v_reusejp_3439_:
{
v___y_3423_ = v___x_3432_;
v___y_3424_ = v___x_3440_;
goto v___jp_3422_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_processCommands___boxed(lean_object* v_inputCtx_3447_, lean_object* v_parserState_3448_, lean_object* v_commandState_3449_, lean_object* v_old_x3f_3450_, lean_object* v_a_3451_){
_start:
{
lean_object* v_res_3452_; 
v_res_3452_ = l_Lean_Language_Lean_processCommands(v_inputCtx_3447_, v_parserState_3448_, v_commandState_3449_, v_old_x3f_3450_);
lean_dec_ref(v_inputCtx_3447_);
return v_res_3452_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_waitForFinalCmdState_x3f_goCmd(lean_object* v_snap_3453_){
_start:
{
lean_object* v_nextCmdSnap_x3f_3454_; 
v_nextCmdSnap_x3f_3454_ = lean_ctor_get(v_snap_3453_, 4);
if (lean_obj_tag(v_nextCmdSnap_x3f_3454_) == 1)
{
lean_object* v_val_3455_; lean_object* v___x_3456_; 
lean_inc_ref(v_nextCmdSnap_x3f_3454_);
lean_dec_ref(v_snap_3453_);
v_val_3455_ = lean_ctor_get(v_nextCmdSnap_x3f_3454_, 0);
lean_inc(v_val_3455_);
lean_dec_ref_known(v_nextCmdSnap_x3f_3454_, 1);
v___x_3456_ = l_Lean_Language_SnapshotTask_get___redArg(v_val_3455_);
v_snap_3453_ = v___x_3456_;
goto _start;
}
else
{
lean_object* v_elabSnap_3458_; lean_object* v_resultSnap_3459_; lean_object* v___x_3460_; lean_object* v_cmdState_3461_; lean_object* v___x_3462_; 
v_elabSnap_3458_ = lean_ctor_get(v_snap_3453_, 3);
lean_inc_ref(v_elabSnap_3458_);
lean_dec_ref(v_snap_3453_);
v_resultSnap_3459_ = lean_ctor_get(v_elabSnap_3458_, 2);
lean_inc_ref(v_resultSnap_3459_);
lean_dec_ref(v_elabSnap_3458_);
v___x_3460_ = l_Lean_Language_SnapshotTask_get___redArg(v_resultSnap_3459_);
v_cmdState_3461_ = lean_ctor_get(v___x_3460_, 1);
lean_inc_ref(v_cmdState_3461_);
lean_dec(v___x_3460_);
v___x_3462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3462_, 0, v_cmdState_3461_);
return v___x_3462_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_waitForFinalCmdState_x3f(lean_object* v_snap_3463_){
_start:
{
lean_object* v_result_x3f_3464_; 
v_result_x3f_3464_ = lean_ctor_get(v_snap_3463_, 4);
lean_inc(v_result_x3f_3464_);
lean_dec_ref(v_snap_3463_);
if (lean_obj_tag(v_result_x3f_3464_) == 0)
{
lean_object* v___x_3465_; 
v___x_3465_ = lean_box(0);
return v___x_3465_;
}
else
{
lean_object* v_val_3466_; lean_object* v_processedSnap_3467_; lean_object* v___x_3468_; lean_object* v_result_x3f_3469_; 
v_val_3466_ = lean_ctor_get(v_result_x3f_3464_, 0);
lean_inc(v_val_3466_);
lean_dec_ref_known(v_result_x3f_3464_, 1);
v_processedSnap_3467_ = lean_ctor_get(v_val_3466_, 1);
lean_inc_ref(v_processedSnap_3467_);
lean_dec(v_val_3466_);
v___x_3468_ = l_Lean_Language_SnapshotTask_get___redArg(v_processedSnap_3467_);
v_result_x3f_3469_ = lean_ctor_get(v___x_3468_, 2);
lean_inc(v_result_x3f_3469_);
lean_dec(v___x_3468_);
if (lean_obj_tag(v_result_x3f_3469_) == 0)
{
lean_object* v___x_3470_; 
v___x_3470_ = lean_box(0);
return v___x_3470_;
}
else
{
lean_object* v_val_3471_; lean_object* v_firstCmdSnap_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; 
v_val_3471_ = lean_ctor_get(v_result_x3f_3469_, 0);
lean_inc(v_val_3471_);
lean_dec_ref_known(v_result_x3f_3469_, 1);
v_firstCmdSnap_3472_ = lean_ctor_get(v_val_3471_, 1);
lean_inc_ref(v_firstCmdSnap_3472_);
lean_dec(v_val_3471_);
v___x_3473_ = l_Lean_Language_SnapshotTask_get___redArg(v_firstCmdSnap_3472_);
v___x_3474_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_waitForFinalCmdState_x3f_goCmd(v___x_3473_);
return v___x_3474_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_foldCmdSnaps_x3f_go___redArg(lean_object* v_f_3475_, lean_object* v_snap_3476_, lean_object* v_acc_3477_){
_start:
{
lean_object* v_nextCmdSnap_x3f_3478_; lean_object* v_acc_3479_; 
v_nextCmdSnap_x3f_3478_ = lean_ctor_get(v_snap_3476_, 4);
lean_inc(v_nextCmdSnap_x3f_3478_);
lean_inc(v_f_3475_);
v_acc_3479_ = lean_apply_2(v_f_3475_, v_acc_3477_, v_snap_3476_);
if (lean_obj_tag(v_nextCmdSnap_x3f_3478_) == 1)
{
lean_object* v_val_3480_; lean_object* v___x_3481_; 
v_val_3480_ = lean_ctor_get(v_nextCmdSnap_x3f_3478_, 0);
lean_inc(v_val_3480_);
lean_dec_ref_known(v_nextCmdSnap_x3f_3478_, 1);
v___x_3481_ = l_Lean_Language_SnapshotTask_get___redArg(v_val_3480_);
v_snap_3476_ = v___x_3481_;
v_acc_3477_ = v_acc_3479_;
goto _start;
}
else
{
lean_dec(v_nextCmdSnap_x3f_3478_);
lean_dec(v_f_3475_);
return v_acc_3479_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_foldCmdSnaps_x3f_go(lean_object* v_00_u03b1_3483_, lean_object* v_f_3484_, lean_object* v_snap_3485_, lean_object* v_acc_3486_){
_start:
{
lean_object* v___x_3487_; 
v___x_3487_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_foldCmdSnaps_x3f_go___redArg(v_f_3484_, v_snap_3485_, v_acc_3486_);
return v___x_3487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_foldCmdSnaps_x3f___redArg(lean_object* v_snap_3488_, lean_object* v_init_3489_, lean_object* v_f_3490_){
_start:
{
lean_object* v_result_x3f_3491_; 
v_result_x3f_3491_ = lean_ctor_get(v_snap_3488_, 4);
lean_inc(v_result_x3f_3491_);
lean_dec_ref(v_snap_3488_);
if (lean_obj_tag(v_result_x3f_3491_) == 0)
{
lean_object* v___x_3492_; 
lean_dec(v_f_3490_);
lean_dec(v_init_3489_);
v___x_3492_ = lean_box(0);
return v___x_3492_;
}
else
{
lean_object* v_val_3493_; lean_object* v_processedSnap_3494_; lean_object* v___x_3495_; lean_object* v_result_x3f_3496_; 
v_val_3493_ = lean_ctor_get(v_result_x3f_3491_, 0);
lean_inc(v_val_3493_);
lean_dec_ref_known(v_result_x3f_3491_, 1);
v_processedSnap_3494_ = lean_ctor_get(v_val_3493_, 1);
lean_inc_ref(v_processedSnap_3494_);
lean_dec(v_val_3493_);
v___x_3495_ = l_Lean_Language_SnapshotTask_get___redArg(v_processedSnap_3494_);
v_result_x3f_3496_ = lean_ctor_get(v___x_3495_, 2);
lean_inc(v_result_x3f_3496_);
lean_dec(v___x_3495_);
if (lean_obj_tag(v_result_x3f_3496_) == 0)
{
lean_object* v___x_3497_; 
lean_dec(v_f_3490_);
lean_dec(v_init_3489_);
v___x_3497_ = lean_box(0);
return v___x_3497_;
}
else
{
lean_object* v_val_3498_; lean_object* v___x_3500_; uint8_t v_isShared_3501_; uint8_t v_isSharedCheck_3508_; 
v_val_3498_ = lean_ctor_get(v_result_x3f_3496_, 0);
v_isSharedCheck_3508_ = !lean_is_exclusive(v_result_x3f_3496_);
if (v_isSharedCheck_3508_ == 0)
{
v___x_3500_ = v_result_x3f_3496_;
v_isShared_3501_ = v_isSharedCheck_3508_;
goto v_resetjp_3499_;
}
else
{
lean_inc(v_val_3498_);
lean_dec(v_result_x3f_3496_);
v___x_3500_ = lean_box(0);
v_isShared_3501_ = v_isSharedCheck_3508_;
goto v_resetjp_3499_;
}
v_resetjp_3499_:
{
lean_object* v_firstCmdSnap_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3506_; 
v_firstCmdSnap_3502_ = lean_ctor_get(v_val_3498_, 1);
lean_inc_ref(v_firstCmdSnap_3502_);
lean_dec(v_val_3498_);
v___x_3503_ = l_Lean_Language_SnapshotTask_get___redArg(v_firstCmdSnap_3502_);
v___x_3504_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_foldCmdSnaps_x3f_go___redArg(v_f_3490_, v___x_3503_, v_init_3489_);
if (v_isShared_3501_ == 0)
{
lean_ctor_set(v___x_3500_, 0, v___x_3504_);
v___x_3506_ = v___x_3500_;
goto v_reusejp_3505_;
}
else
{
lean_object* v_reuseFailAlloc_3507_; 
v_reuseFailAlloc_3507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3507_, 0, v___x_3504_);
v___x_3506_ = v_reuseFailAlloc_3507_;
goto v_reusejp_3505_;
}
v_reusejp_3505_:
{
return v___x_3506_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_foldCmdSnaps_x3f(lean_object* v_00_u03b1_3509_, lean_object* v_snap_3510_, lean_object* v_init_3511_, lean_object* v_f_3512_){
_start:
{
lean_object* v___x_3513_; 
v___x_3513_ = l_Lean_Language_Lean_foldCmdSnaps_x3f___redArg(v_snap_3510_, v_init_3511_, v_f_3512_);
return v___x_3513_;
}
}
static lean_object* _init_l_Lean_Language_Lean_truncateToHeader___closed__2(void){
_start:
{
uint8_t v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; 
v___x_3519_ = 1;
v___x_3520_ = ((lean_object*)(l_Lean_Language_Lean_truncateToHeader___closed__1));
v___x_3521_ = l_Lean_Name_toString(v___x_3520_, v___x_3519_);
return v___x_3521_;
}
}
static lean_object* _init_l_Lean_Language_Lean_truncateToHeader___closed__3(void){
_start:
{
uint8_t v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; 
v___x_3522_ = 0;
v___x_3523_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_3524_ = lean_box(0);
v___x_3525_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_3526_ = lean_obj_once(&l_Lean_Language_Lean_truncateToHeader___closed__2, &l_Lean_Language_Lean_truncateToHeader___closed__2_once, _init_l_Lean_Language_Lean_truncateToHeader___closed__2);
v___x_3527_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3527_, 0, v___x_3526_);
lean_ctor_set(v___x_3527_, 1, v___x_3525_);
lean_ctor_set(v___x_3527_, 2, v___x_3524_);
lean_ctor_set(v___x_3527_, 3, v___x_3523_);
lean_ctor_set_uint8(v___x_3527_, sizeof(void*)*4, v___x_3522_);
return v___x_3527_;
}
}
static lean_object* _init_l_Lean_Language_Lean_truncateToHeader___closed__4(void){
_start:
{
lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; 
v___x_3528_ = lean_obj_once(&l_Lean_Language_Lean_truncateToHeader___closed__3, &l_Lean_Language_Lean_truncateToHeader___closed__3_once, _init_l_Lean_Language_Lean_truncateToHeader___closed__3);
v___x_3529_ = lean_box(0);
v___x_3530_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3529_, v___x_3528_);
return v___x_3530_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_truncateToHeader(lean_object* v_snap_3531_){
_start:
{
lean_object* v_result_x3f_3532_; 
v_result_x3f_3532_ = lean_ctor_get(v_snap_3531_, 4);
lean_inc(v_result_x3f_3532_);
if (lean_obj_tag(v_result_x3f_3532_) == 1)
{
lean_object* v_val_3533_; lean_object* v___x_3535_; uint8_t v_isShared_3536_; uint8_t v_isSharedCheck_3608_; 
v_val_3533_ = lean_ctor_get(v_result_x3f_3532_, 0);
v_isSharedCheck_3608_ = !lean_is_exclusive(v_result_x3f_3532_);
if (v_isSharedCheck_3608_ == 0)
{
v___x_3535_ = v_result_x3f_3532_;
v_isShared_3536_ = v_isSharedCheck_3608_;
goto v_resetjp_3534_;
}
else
{
lean_inc(v_val_3533_);
lean_dec(v_result_x3f_3532_);
v___x_3535_ = lean_box(0);
v_isShared_3536_ = v_isSharedCheck_3608_;
goto v_resetjp_3534_;
}
v_resetjp_3534_:
{
lean_object* v_toSnapshot_3537_; lean_object* v_metaSnap_3538_; lean_object* v_ictx_3539_; lean_object* v_stx_3540_; lean_object* v_parserState_3541_; lean_object* v_processedSnap_3542_; lean_object* v___x_3544_; uint8_t v_isShared_3545_; uint8_t v_isSharedCheck_3607_; 
v_toSnapshot_3537_ = lean_ctor_get(v_snap_3531_, 0);
v_metaSnap_3538_ = lean_ctor_get(v_snap_3531_, 1);
v_ictx_3539_ = lean_ctor_get(v_snap_3531_, 2);
v_stx_3540_ = lean_ctor_get(v_snap_3531_, 3);
v_parserState_3541_ = lean_ctor_get(v_val_3533_, 0);
v_processedSnap_3542_ = lean_ctor_get(v_val_3533_, 1);
v_isSharedCheck_3607_ = !lean_is_exclusive(v_val_3533_);
if (v_isSharedCheck_3607_ == 0)
{
v___x_3544_ = v_val_3533_;
v_isShared_3545_ = v_isSharedCheck_3607_;
goto v_resetjp_3543_;
}
else
{
lean_inc(v_processedSnap_3542_);
lean_inc(v_parserState_3541_);
lean_dec(v_val_3533_);
v___x_3544_ = lean_box(0);
v_isShared_3545_ = v_isSharedCheck_3607_;
goto v_resetjp_3543_;
}
v_resetjp_3543_:
{
lean_object* v_processed_3546_; lean_object* v_result_x3f_3547_; 
v_processed_3546_ = l_Lean_Language_SnapshotTask_get___redArg(v_processedSnap_3542_);
v_result_x3f_3547_ = lean_ctor_get(v_processed_3546_, 2);
lean_inc(v_result_x3f_3547_);
if (lean_obj_tag(v_result_x3f_3547_) == 1)
{
lean_object* v___x_3549_; uint8_t v_isShared_3550_; uint8_t v_isSharedCheck_3601_; 
lean_inc(v_stx_3540_);
lean_inc_ref(v_ictx_3539_);
lean_inc_ref(v_metaSnap_3538_);
lean_inc_ref(v_toSnapshot_3537_);
v_isSharedCheck_3601_ = !lean_is_exclusive(v_snap_3531_);
if (v_isSharedCheck_3601_ == 0)
{
lean_object* v_unused_3602_; lean_object* v_unused_3603_; lean_object* v_unused_3604_; lean_object* v_unused_3605_; lean_object* v_unused_3606_; 
v_unused_3602_ = lean_ctor_get(v_snap_3531_, 4);
lean_dec(v_unused_3602_);
v_unused_3603_ = lean_ctor_get(v_snap_3531_, 3);
lean_dec(v_unused_3603_);
v_unused_3604_ = lean_ctor_get(v_snap_3531_, 2);
lean_dec(v_unused_3604_);
v_unused_3605_ = lean_ctor_get(v_snap_3531_, 1);
lean_dec(v_unused_3605_);
v_unused_3606_ = lean_ctor_get(v_snap_3531_, 0);
lean_dec(v_unused_3606_);
v___x_3549_ = v_snap_3531_;
v_isShared_3550_ = v_isSharedCheck_3601_;
goto v_resetjp_3548_;
}
else
{
lean_dec(v_snap_3531_);
v___x_3549_ = lean_box(0);
v_isShared_3550_ = v_isSharedCheck_3601_;
goto v_resetjp_3548_;
}
v_resetjp_3548_:
{
lean_object* v_val_3551_; lean_object* v___x_3553_; uint8_t v_isShared_3554_; uint8_t v_isSharedCheck_3600_; 
v_val_3551_ = lean_ctor_get(v_result_x3f_3547_, 0);
v_isSharedCheck_3600_ = !lean_is_exclusive(v_result_x3f_3547_);
if (v_isSharedCheck_3600_ == 0)
{
v___x_3553_ = v_result_x3f_3547_;
v_isShared_3554_ = v_isSharedCheck_3600_;
goto v_resetjp_3552_;
}
else
{
lean_inc(v_val_3551_);
lean_dec(v_result_x3f_3547_);
v___x_3553_ = lean_box(0);
v_isShared_3554_ = v_isSharedCheck_3600_;
goto v_resetjp_3552_;
}
v_resetjp_3552_:
{
lean_object* v_toSnapshot_3555_; lean_object* v_metaSnap_3556_; lean_object* v___x_3558_; uint8_t v_isShared_3559_; uint8_t v_isSharedCheck_3598_; 
v_toSnapshot_3555_ = lean_ctor_get(v_processed_3546_, 0);
v_metaSnap_3556_ = lean_ctor_get(v_processed_3546_, 1);
v_isSharedCheck_3598_ = !lean_is_exclusive(v_processed_3546_);
if (v_isSharedCheck_3598_ == 0)
{
lean_object* v_unused_3599_; 
v_unused_3599_ = lean_ctor_get(v_processed_3546_, 2);
lean_dec(v_unused_3599_);
v___x_3558_ = v_processed_3546_;
v_isShared_3559_ = v_isSharedCheck_3598_;
goto v_resetjp_3557_;
}
else
{
lean_inc(v_metaSnap_3556_);
lean_inc(v_toSnapshot_3555_);
lean_dec(v_processed_3546_);
v___x_3558_ = lean_box(0);
v_isShared_3559_ = v_isSharedCheck_3598_;
goto v_resetjp_3557_;
}
v_resetjp_3557_:
{
lean_object* v_cmdState_3560_; lean_object* v___x_3562_; uint8_t v_isShared_3563_; uint8_t v_isSharedCheck_3596_; 
v_cmdState_3560_ = lean_ctor_get(v_val_3551_, 0);
v_isSharedCheck_3596_ = !lean_is_exclusive(v_val_3551_);
if (v_isSharedCheck_3596_ == 0)
{
lean_object* v_unused_3597_; 
v_unused_3597_ = lean_ctor_get(v_val_3551_, 1);
lean_dec(v_unused_3597_);
v___x_3562_ = v_val_3551_;
v_isShared_3563_ = v_isSharedCheck_3596_;
goto v_resetjp_3561_;
}
else
{
lean_inc(v_cmdState_3560_);
lean_dec(v_val_3551_);
v___x_3562_ = lean_box(0);
v_isShared_3563_ = v_isSharedCheck_3596_;
goto v_resetjp_3561_;
}
v_resetjp_3561_:
{
lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v_resultSnap_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v_elabSnap_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v_termCmd_3575_; lean_object* v___x_3576_; lean_object* v___x_3578_; 
v___x_3564_ = lean_box(0);
v___x_3565_ = lean_obj_once(&l_Lean_Language_Lean_truncateToHeader___closed__3, &l_Lean_Language_Lean_truncateToHeader___closed__3_once, _init_l_Lean_Language_Lean_truncateToHeader___closed__3);
v___x_3566_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4));
lean_inc_ref(v_cmdState_3560_);
v_resultSnap_3567_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_resultSnap_3567_, 0, v___x_3565_);
lean_ctor_set(v_resultSnap_3567_, 1, v_cmdState_3560_);
lean_ctor_set(v_resultSnap_3567_, 2, v___x_3566_);
v___x_3568_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3);
v___x_3569_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3564_, v_resultSnap_3567_);
v___x_3570_ = lean_obj_once(&l_Lean_Language_Lean_truncateToHeader___closed__4, &l_Lean_Language_Lean_truncateToHeader___closed__4_once, _init_l_Lean_Language_Lean_truncateToHeader___closed__4);
v___x_3571_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__5, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__5_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__5);
v_elabSnap_3572_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_elabSnap_3572_, 0, v___x_3565_);
lean_ctor_set(v_elabSnap_3572_, 1, v___x_3568_);
lean_ctor_set(v_elabSnap_3572_, 2, v___x_3569_);
lean_ctor_set(v_elabSnap_3572_, 3, v___x_3570_);
lean_ctor_set(v_elabSnap_3572_, 4, v___x_3571_);
v___x_3573_ = lean_box(0);
v___x_3574_ = l_Lean_Parser_instInhabitedModuleParserState_default;
v_termCmd_3575_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_termCmd_3575_, 0, v___x_3565_);
lean_ctor_set(v_termCmd_3575_, 1, v___x_3573_);
lean_ctor_set(v_termCmd_3575_, 2, v___x_3574_);
lean_ctor_set(v_termCmd_3575_, 3, v_elabSnap_3572_);
lean_ctor_set(v_termCmd_3575_, 4, v___x_3564_);
v___x_3576_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3564_, v_termCmd_3575_);
if (v_isShared_3563_ == 0)
{
lean_ctor_set(v___x_3562_, 1, v___x_3576_);
v___x_3578_ = v___x_3562_;
goto v_reusejp_3577_;
}
else
{
lean_object* v_reuseFailAlloc_3595_; 
v_reuseFailAlloc_3595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3595_, 0, v_cmdState_3560_);
lean_ctor_set(v_reuseFailAlloc_3595_, 1, v___x_3576_);
v___x_3578_ = v_reuseFailAlloc_3595_;
goto v_reusejp_3577_;
}
v_reusejp_3577_:
{
lean_object* v___x_3580_; 
if (v_isShared_3554_ == 0)
{
lean_ctor_set(v___x_3553_, 0, v___x_3578_);
v___x_3580_ = v___x_3553_;
goto v_reusejp_3579_;
}
else
{
lean_object* v_reuseFailAlloc_3594_; 
v_reuseFailAlloc_3594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3594_, 0, v___x_3578_);
v___x_3580_ = v_reuseFailAlloc_3594_;
goto v_reusejp_3579_;
}
v_reusejp_3579_:
{
lean_object* v_newProcessed_3582_; 
if (v_isShared_3559_ == 0)
{
lean_ctor_set(v___x_3558_, 2, v___x_3580_);
v_newProcessed_3582_ = v___x_3558_;
goto v_reusejp_3581_;
}
else
{
lean_object* v_reuseFailAlloc_3593_; 
v_reuseFailAlloc_3593_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3593_, 0, v_toSnapshot_3555_);
lean_ctor_set(v_reuseFailAlloc_3593_, 1, v_metaSnap_3556_);
lean_ctor_set(v_reuseFailAlloc_3593_, 2, v___x_3580_);
v_newProcessed_3582_ = v_reuseFailAlloc_3593_;
goto v_reusejp_3581_;
}
v_reusejp_3581_:
{
lean_object* v___x_3583_; lean_object* v___x_3585_; 
v___x_3583_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3564_, v_newProcessed_3582_);
if (v_isShared_3545_ == 0)
{
lean_ctor_set(v___x_3544_, 1, v___x_3583_);
v___x_3585_ = v___x_3544_;
goto v_reusejp_3584_;
}
else
{
lean_object* v_reuseFailAlloc_3592_; 
v_reuseFailAlloc_3592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3592_, 0, v_parserState_3541_);
lean_ctor_set(v_reuseFailAlloc_3592_, 1, v___x_3583_);
v___x_3585_ = v_reuseFailAlloc_3592_;
goto v_reusejp_3584_;
}
v_reusejp_3584_:
{
lean_object* v___x_3587_; 
if (v_isShared_3536_ == 0)
{
lean_ctor_set(v___x_3535_, 0, v___x_3585_);
v___x_3587_ = v___x_3535_;
goto v_reusejp_3586_;
}
else
{
lean_object* v_reuseFailAlloc_3591_; 
v_reuseFailAlloc_3591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3591_, 0, v___x_3585_);
v___x_3587_ = v_reuseFailAlloc_3591_;
goto v_reusejp_3586_;
}
v_reusejp_3586_:
{
lean_object* v___x_3589_; 
if (v_isShared_3550_ == 0)
{
lean_ctor_set(v___x_3549_, 4, v___x_3587_);
v___x_3589_ = v___x_3549_;
goto v_reusejp_3588_;
}
else
{
lean_object* v_reuseFailAlloc_3590_; 
v_reuseFailAlloc_3590_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3590_, 0, v_toSnapshot_3537_);
lean_ctor_set(v_reuseFailAlloc_3590_, 1, v_metaSnap_3538_);
lean_ctor_set(v_reuseFailAlloc_3590_, 2, v_ictx_3539_);
lean_ctor_set(v_reuseFailAlloc_3590_, 3, v_stx_3540_);
lean_ctor_set(v_reuseFailAlloc_3590_, 4, v___x_3587_);
v___x_3589_ = v_reuseFailAlloc_3590_;
goto v_reusejp_3588_;
}
v_reusejp_3588_:
{
return v___x_3589_;
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
lean_dec(v_result_x3f_3547_);
lean_dec(v_processed_3546_);
lean_del_object(v___x_3544_);
lean_dec_ref(v_parserState_3541_);
lean_del_object(v___x_3535_);
return v_snap_3531_;
}
}
}
}
else
{
lean_dec(v_result_x3f_3532_);
return v_snap_3531_;
}
}
}
lean_object* runtime_initialize_Lean_Language_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Language_Lean_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Language_Lean_Util(uint8_t builtin);
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
res = runtime_initialize_Lean_Language_Lean_Util(builtin);
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
lean_object* initialize_Lean_Language_Lean_Util(uint8_t builtin);
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
res = initialize_Lean_Language_Lean_Util(builtin);
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
